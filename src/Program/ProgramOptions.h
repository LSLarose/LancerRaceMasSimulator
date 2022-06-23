#pragma once
#include <string>

const int DEFAULT_PARTICIPANTS = 0;
const std::string DEFAULT_NAME = "LYREE14";

class ProgramOptions
{
public:
	ProgramOptions();
	ProgramOptions(char* argv[]);

	const int getOptionOne();
	const std::string getOptionTwo();
private:
	int optionOne;
	std::string optionTwo;
};