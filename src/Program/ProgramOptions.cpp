#include "../../include/Program/ProgramOptions.h"

ProgramOptions::ProgramOptions(): optionOne(DEFAULT_PARTICIPANTS), optionTwo(DEFAULT_NAME)
{
}

ProgramOptions::ProgramOptions(char* argv[])
{
	optionOne = (argv[1] != nullptr) ? std::stoi(argv[1]) : DEFAULT_PARTICIPANTS;
	optionTwo = (argv[2] != nullptr) ? std::string(argv[2]) : DEFAULT_NAME;
}

const int ProgramOptions::getOptionOne()
{
	return optionOne;
}

const std::string ProgramOptions::getOptionTwo()
{
	return optionTwo;
}