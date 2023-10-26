#include "main.hpp"

int main() {
	
	unsigned char char_variable = 255;
	unsigned short short_int_variable = 65535;
	unsigned int int_variable = 4294967295;
	
	char char_array_variable[] = "this is a null terminated string\0";
	std::string string_variable = "this is a string from the standard library"; 

	writeln("");
	writeln("this is the value of \"char_variable\":");
	writeln((int)char_variable); 
	// a conversion is necessary, otherwise the variable would be written out as a character 
	
	writeln("");
	writeln("this is the value of \"short_int_variable\":");
	writeln(short_int_variable);
	
	writeln("");
	writeln("this is the value of \"int_variable\":");
	writeln(int_variable);
	
	writeln("");
	writeln("this is the \"char_array_variable\":");
	writeln(char_array_variable);
	
	writeln("");
	writeln("this is the \"string_variable\":");
	writeln(string_variable);

	writeln("");
	writeln("enter the new numerical value of \"int_variable\" (from 0 to 4294967295)");
	read(int_variable);

	writeln("");
	writeln("the new value of \"int_variable\":");
	writeln(int_variable);
	
	writeln("");
	writeln("enter the new numerical value of \"short_int_variable\" (from 0 to 65535)");
	read(short_int_variable);

	writeln("");
	writeln("the new value of \"short_int_variable\":");
	writeln(short_int_variable);
}