const prompt = require("prompt-sync")();
const fs = require("node:fs");

const write = (value) => { process.stdout.write(value); };
const read = () => { return prompt(); };

write("\n");
write("Enter the name of the folder (leave empty to use the current date)\n");
write("\n");
let folder_name = read();
write("\n");

if (folder_name == "") {

	folder_name = new Date().toLocaleString('default', { month: 'long' });
	folder_name += " ";
	folder_name += new Date().getDate();
}

write(`Selected folder name: "${folder_name}"\n`)
write("\n")
write("Enter the name of the project (leave empty to use \"homework\")\n");
write("\n");
let project_name = read();
write("\n");

if (project_name == "") {

	project_name = "homework"
}
write(`Selected project name: "${project_name}"\n`)
write("\n")

write("Copying template folder...\n");
fs.cpSync(".\\Template\\", `.\\${folder_name}`, {recursive: true});

write(`Changing "template" to "${project_name}" in CMakeLists...\n`);
let cmakelists = fs.readFileSync(`.\\${folder_name}\\CMakeLists.txt`).toString();
cmakelists = cmakelists.replaceAll("template", project_name);
fs.writeFileSync(`.\\${folder_name}\\CMakeLists.txt`, cmakelists);

write("Done!\n")