// LancerRaceMasSimulator.cpp : définit le point d'entrée de l'application.
//
#include<iostream>
#include "../include/Program/ProgramOptions.h"


std::string printHelp() {
	return "Hello world";
}

int main(int argc, char* argv[])
{
	if (argc != 3) { // The first arg will be the executable name
		std::cout << printHelp() << std::endl;
		return 1;
	} else {
		auto Options = ProgramOptions(argv);
	}
	
	return 0;
}
