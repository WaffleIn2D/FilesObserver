#pragma once
#include <string>
#include "arguments_parser.h"

ArgumentsParser::ArgumentsParser(int& argc, char** argv) {
	for (auto i = 1; i < argc; ++i) {
		this->tokens.emplace_back(argv[i]);
	}
}

const std::string& ArgumentsParser::getCmdOption(const std::string &option) const {
	auto itr = std::find(this->tokens.begin(), this->tokens.end(), option);
	if (itr != this->tokens.end() && ++itr != this->tokens.end()){
		return *itr;
	}

	static const std::string empty_str;
	return empty_str;
}
