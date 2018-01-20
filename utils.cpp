//
// LLENGUATGE INTERPRETAT CATALÀ (LIC)		
// INTERPRETER		
// AUTHOR: ATUNERO (atunerin@gmail.com)
// SOFTWARE UNDER MIT LICENSE
// 
// FILE: main.cpp
// DESCRIPTION: Contains the interpreter initialization and main loop

#include "stdafx.h"
#include <iostream>
#include "utils.h"

void print(char* output) 
{
	std::cout << output;
}

void println(char* output)
{
	std::cout << output << std::endl;
}

void printDebug(char* output)
{
	std::cout << "[DEBUG] " << output << std::endl;
}

void pause()
{
	std::cin.ignore();
}