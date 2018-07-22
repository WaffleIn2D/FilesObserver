#include <iostream>
#include "arguments_parser/arguments_parser.h"


int main(int argc, char * argv[]) {
	ArgumentsParser argumentsParser(argc, argv);
	const std::string &watchDir = argumentsParser.getCmdOption("-dir");
	if (watchDir.empty()){
		std::cout << "Please specify directory that FSW will be monitoring. Argument - '-dir'";
		
		return 0;
	}

	return 0;
}
