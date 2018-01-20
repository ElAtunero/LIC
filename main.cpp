//
// LLENGUATGE INTERPRETAT CATALÀ (LIC)		
// INTERPRETER		
// AUTHOR: ATUNERO (atunerin@gmail.com)
// SOFTWARE UNDER MIT LICENSE
// 
// FILE: main.cpp
// DESCRIPTION: Contains the interpreter initialization and main loop

//INC
#include <windows.h>
#include "stdafx.h"
#include "main.h"
#include "utils.h"

//CONSTANTS AND DEFINITIONS
#ifndef LOOP_DURATION
#define LOOP_DURATION 300
#endif

//INTERPRETER MAIN ENTRY POINT (INITIALIZATION)
int main(int argc, char* argv[], char* envp[])
{
	println("INITIALIZING LIC INTERPRETER...");
	println("READING ARGUMENTS...");
	int count;

	for (count = 0; count < argc; count++)
	{
		println(argv[count]);
	}

	println("SETTING UP MAIN LOOP...");
	loop();
	pause();
    return 0;
}

//INTERPRETER MAIN LOOP
void loop()
{
	while (true)
	{
		printDebug("LOOP");

		Sleep(LOOP_DURATION);
	}
}

