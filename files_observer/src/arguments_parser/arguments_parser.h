#pragma once
#include <string>
#include <vector>

class ArgumentsParser{
public:
	ArgumentsParser(int &argc, char **argv);
	const std::string& getCmdOption(const std::string& option) const;
private:
	std::vector <std::string> tokens;
};
