//============================================================================
// Name        : antlr_parser.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C, Ansi-style
//============================================================================

#include <iostream>
#include "antlr4-runtime/antlr4-runtime.h"

#include "parser/parser.hpp"

int main(int argc, const char* argv[]) {

	Parser* parser = new Parser();

	parser->parse_file(argc, argv);

}
