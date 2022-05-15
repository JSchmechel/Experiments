//============================================================================
// Name        : parser.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C, Ansi-style
//============================================================================

#include <iostream>

#include "antlr4-runtime/antlr4-runtime.h"

#include "grammar/libs/ExpressionLexer.h"
#include "grammar/libs/ExpressionParser.h"

#include "parser.hpp"

/**
 * See parser.hpp.
 */
int Parser::parse_file(int argc, const char* argv[]) {

	antlr4::ANTLRInputStream input("6*(2+3)");

	ExpressionLexer lexer(&input);

	antlr4::CommonTokenStream tokens(&lexer);

	ExpressionParser parser(&tokens);

	std::cout << parser.expr() << std::endl;

	return 0;

}
