
// Generated from Expression.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "ExpressionParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by ExpressionParser.
 */
class  ExpressionListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterStart(ExpressionParser::StartContext *ctx) = 0;
  virtual void exitStart(ExpressionParser::StartContext *ctx) = 0;

  virtual void enterExpr(ExpressionParser::ExprContext *ctx) = 0;
  virtual void exitExpr(ExpressionParser::ExprContext *ctx) = 0;


};

