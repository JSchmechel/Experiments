grammar Expression;

// Parser rules.
start		: expr EOF;
expr		: '-' expr | expr ('*' | '/') expr |
			  expr('+' | '-') expr | '(' expr ')' | INT | ID;
			  
// Lexer rules.
INT			: [0-9]+;
ID			: [a-z]+;
WS			: [ \t\r\n]+ -> skip;