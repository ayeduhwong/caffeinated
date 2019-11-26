grammar caffeinated; // language is similar to c/c++ format but coffee/boba themed!

@header {
#include "wci/intermediate/TypeSpec.h"
using namespace wci::intermediate;
}


program: header mainBlock;
header : PROGRAM ID ';';
mainBlock : block;
block : declarations compoundStmt;

declarations : VAR ':' declList ';' ;
declList     : decl ( ';' decl )* ;
decl         : varList ':' typeId ;
varList      : varId ( ',' varId )* ;
varId        : ID ;
typeId       : Type_ID ;

compoundStmt : BEGIN stmtList END;

stmt : compoundStmt 
		| assignmentStmt 
		| if_statement 
		| while_loop
		| ;
					
stmtList : stmt (';' stmt) *;

assignmentStmt : variable '=' expr 
				| variable '=' '\'' expr '\'' 
				| variable '=' '"' expr '"'; 

variable : ID;

expr : INTEGER 
		| BOOLEAN 
		| CHARACTER 
		| STRING 
		| variable 
		| expr Add expr 
		| expr Sub expr 
		| expr Mult expr 
		| expr Div expr 
		| expr rel_op expr;


rel_op : Less_than 
		| Greater_than 
		| Equals 
		| Gt_EQ 
		| Lt_EQ 
		| Not_EQ ;

if_statement : IF '(' expr ')' START stmtList COMPLETE (ELSE START (stmtList) COMPLETE)?;

while_loop : WHILE '(' expr ')' START stmtList COMPLETE;


PROGRAM : 'customer';
FUNCTION: 'MENU';
VAR: 'toppings';
BEGIN: 'ORDER';
END: 'PICKUP';


IF: 'milk';
ELSE: 'nondairy';
WHILE: 'brew';

START : 'START';
COMPLETE : 'COMPLETE';
Type_ID: INTEGER_TYPE | BOOLEAN_TYPE | CHARACTER_TYPE | STRING_TYPE;

INTEGER_TYPE : 'boba';
BOOLEAN_TYPE : 'ice';
CHARACTER_TYPE : 'sweet';
STRING_TYPE : 'flavor';

ID : [a-zA-Z][a-zA-Z0-9]*;

//Data Types

INTEGER : [0-9]+ ; // boba
BOOLEAN : [0-1][hot][cold] ; // hot = false, cold = true
CHARACTER: [a-zA-Z] ; // sweet
STRING : '"'[a-zA-Z0-9]'"'; // flavor

//Mathematical Operations
Add : '+';
Sub : '-';
Mult : '*';
Div: '/';

//Relational Operators
Less_than: '<';
Greater_than: '>';
Equals: '==';
Gt_EQ: '>=';
Lt_EQ: '<=';
Not_EQ: '!=';

NEWLINE : '\r'? '\n' -> skip  ;
WS      : [ \t]+ -> skip ;
BlockComment : '/*' .*? '*/' -> skip ;
LineComment : '//' ~ [\r\n]* -> skip ;
