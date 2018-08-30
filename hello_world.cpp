#include <iostream>
#include <fstream>
#include <stdio.h>
#include <math.h>  

// The function prints Hello World on the screen
void hello_world(){
	// Print Hello World on the screen
	std::cout << "Hello World" << std::endl;
	std::cout << "Hello Programming" << std::endl;
	std::cout << "Here we go" << std::endl;
/*
Notes on errors:
	1. "Hello World" -> 'Hello World'
	warning: character constant too long for its type
	
	2. std::cout << -> std::cout <
	error: invalid operands of types ‘const char [12]’ and ‘<unresolved overloaded function type>’ to binary ‘operator<<’

	3. missing ; after endl
	error: expected ‘;’ before ‘}’ token

	4. #include <stdio.h> -> #include <stdio.h
	error: missing terminating > character
*/
}

// The main function to run everything
int main(){
	// Call to the hello_world function
	hello_world();
	return 0;
}
