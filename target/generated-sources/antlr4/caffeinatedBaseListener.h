
#include "wci/intermediate/TypeSpec.h"
using namespace wci::intermediate;


// Generated from caffeinated.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "caffeinatedListener.h"


/**
 * This class provides an empty implementation of caffeinatedListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  caffeinatedBaseListener : public caffeinatedListener {
public:

  virtual void enterProgram(caffeinatedParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(caffeinatedParser::ProgramContext * /*ctx*/) override { }

  virtual void enterHeader(caffeinatedParser::HeaderContext * /*ctx*/) override { }
  virtual void exitHeader(caffeinatedParser::HeaderContext * /*ctx*/) override { }

  virtual void enterMainBlock(caffeinatedParser::MainBlockContext * /*ctx*/) override { }
  virtual void exitMainBlock(caffeinatedParser::MainBlockContext * /*ctx*/) override { }

  virtual void enterBlock(caffeinatedParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(caffeinatedParser::BlockContext * /*ctx*/) override { }

  virtual void enterDeclarations(caffeinatedParser::DeclarationsContext * /*ctx*/) override { }
  virtual void exitDeclarations(caffeinatedParser::DeclarationsContext * /*ctx*/) override { }

  virtual void enterDeclList(caffeinatedParser::DeclListContext * /*ctx*/) override { }
  virtual void exitDeclList(caffeinatedParser::DeclListContext * /*ctx*/) override { }

  virtual void enterDecl(caffeinatedParser::DeclContext * /*ctx*/) override { }
  virtual void exitDecl(caffeinatedParser::DeclContext * /*ctx*/) override { }

  virtual void enterVarList(caffeinatedParser::VarListContext * /*ctx*/) override { }
  virtual void exitVarList(caffeinatedParser::VarListContext * /*ctx*/) override { }

  virtual void enterVarId(caffeinatedParser::VarIdContext * /*ctx*/) override { }
  virtual void exitVarId(caffeinatedParser::VarIdContext * /*ctx*/) override { }

  virtual void enterTypeId(caffeinatedParser::TypeIdContext * /*ctx*/) override { }
  virtual void exitTypeId(caffeinatedParser::TypeIdContext * /*ctx*/) override { }

  virtual void enterCompoundStmt(caffeinatedParser::CompoundStmtContext * /*ctx*/) override { }
  virtual void exitCompoundStmt(caffeinatedParser::CompoundStmtContext * /*ctx*/) override { }

  virtual void enterStmt(caffeinatedParser::StmtContext * /*ctx*/) override { }
  virtual void exitStmt(caffeinatedParser::StmtContext * /*ctx*/) override { }

  virtual void enterStmtList(caffeinatedParser::StmtListContext * /*ctx*/) override { }
  virtual void exitStmtList(caffeinatedParser::StmtListContext * /*ctx*/) override { }

  virtual void enterAssignmentStmt(caffeinatedParser::AssignmentStmtContext * /*ctx*/) override { }
  virtual void exitAssignmentStmt(caffeinatedParser::AssignmentStmtContext * /*ctx*/) override { }

  virtual void enterVariable(caffeinatedParser::VariableContext * /*ctx*/) override { }
  virtual void exitVariable(caffeinatedParser::VariableContext * /*ctx*/) override { }

  virtual void enterExpr(caffeinatedParser::ExprContext * /*ctx*/) override { }
  virtual void exitExpr(caffeinatedParser::ExprContext * /*ctx*/) override { }

  virtual void enterRel_op(caffeinatedParser::Rel_opContext * /*ctx*/) override { }
  virtual void exitRel_op(caffeinatedParser::Rel_opContext * /*ctx*/) override { }

  virtual void enterIf_statement(caffeinatedParser::If_statementContext * /*ctx*/) override { }
  virtual void exitIf_statement(caffeinatedParser::If_statementContext * /*ctx*/) override { }

  virtual void enterWhile_loop(caffeinatedParser::While_loopContext * /*ctx*/) override { }
  virtual void exitWhile_loop(caffeinatedParser::While_loopContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

