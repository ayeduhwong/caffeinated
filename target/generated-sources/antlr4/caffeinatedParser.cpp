
#include "wci/intermediate/TypeSpec.h"
using namespace wci::intermediate;


// Generated from caffeinated.g4 by ANTLR 4.7.2


#include "caffeinatedListener.h"

#include "caffeinatedParser.h"


using namespace antlrcpp;
using namespace antlr4;

caffeinatedParser::caffeinatedParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

caffeinatedParser::~caffeinatedParser() {
  delete _interpreter;
}

std::string caffeinatedParser::getGrammarFileName() const {
  return "caffeinated.g4";
}

const std::vector<std::string>& caffeinatedParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& caffeinatedParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramContext ------------------------------------------------------------------

caffeinatedParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

caffeinatedParser::HeaderContext* caffeinatedParser::ProgramContext::header() {
  return getRuleContext<caffeinatedParser::HeaderContext>(0);
}

caffeinatedParser::MainBlockContext* caffeinatedParser::ProgramContext::mainBlock() {
  return getRuleContext<caffeinatedParser::MainBlockContext>(0);
}


size_t caffeinatedParser::ProgramContext::getRuleIndex() const {
  return caffeinatedParser::RuleProgram;
}

void caffeinatedParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void caffeinatedParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}

caffeinatedParser::ProgramContext* caffeinatedParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, caffeinatedParser::RuleProgram);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(38);
    header();
    setState(39);
    mainBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HeaderContext ------------------------------------------------------------------

caffeinatedParser::HeaderContext::HeaderContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* caffeinatedParser::HeaderContext::PROGRAM() {
  return getToken(caffeinatedParser::PROGRAM, 0);
}

tree::TerminalNode* caffeinatedParser::HeaderContext::ID() {
  return getToken(caffeinatedParser::ID, 0);
}


size_t caffeinatedParser::HeaderContext::getRuleIndex() const {
  return caffeinatedParser::RuleHeader;
}

void caffeinatedParser::HeaderContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHeader(this);
}

void caffeinatedParser::HeaderContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHeader(this);
}

caffeinatedParser::HeaderContext* caffeinatedParser::header() {
  HeaderContext *_localctx = _tracker.createInstance<HeaderContext>(_ctx, getState());
  enterRule(_localctx, 2, caffeinatedParser::RuleHeader);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(41);
    match(caffeinatedParser::PROGRAM);
    setState(42);
    match(caffeinatedParser::ID);
    setState(43);
    match(caffeinatedParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MainBlockContext ------------------------------------------------------------------

caffeinatedParser::MainBlockContext::MainBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

caffeinatedParser::BlockContext* caffeinatedParser::MainBlockContext::block() {
  return getRuleContext<caffeinatedParser::BlockContext>(0);
}


size_t caffeinatedParser::MainBlockContext::getRuleIndex() const {
  return caffeinatedParser::RuleMainBlock;
}

void caffeinatedParser::MainBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMainBlock(this);
}

void caffeinatedParser::MainBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMainBlock(this);
}

caffeinatedParser::MainBlockContext* caffeinatedParser::mainBlock() {
  MainBlockContext *_localctx = _tracker.createInstance<MainBlockContext>(_ctx, getState());
  enterRule(_localctx, 4, caffeinatedParser::RuleMainBlock);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(45);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

caffeinatedParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

caffeinatedParser::DeclarationsContext* caffeinatedParser::BlockContext::declarations() {
  return getRuleContext<caffeinatedParser::DeclarationsContext>(0);
}

caffeinatedParser::CompoundStmtContext* caffeinatedParser::BlockContext::compoundStmt() {
  return getRuleContext<caffeinatedParser::CompoundStmtContext>(0);
}


size_t caffeinatedParser::BlockContext::getRuleIndex() const {
  return caffeinatedParser::RuleBlock;
}

void caffeinatedParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void caffeinatedParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}

caffeinatedParser::BlockContext* caffeinatedParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 6, caffeinatedParser::RuleBlock);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(47);
    declarations();
    setState(48);
    compoundStmt();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationsContext ------------------------------------------------------------------

caffeinatedParser::DeclarationsContext::DeclarationsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* caffeinatedParser::DeclarationsContext::VAR() {
  return getToken(caffeinatedParser::VAR, 0);
}

caffeinatedParser::DeclListContext* caffeinatedParser::DeclarationsContext::declList() {
  return getRuleContext<caffeinatedParser::DeclListContext>(0);
}


size_t caffeinatedParser::DeclarationsContext::getRuleIndex() const {
  return caffeinatedParser::RuleDeclarations;
}

void caffeinatedParser::DeclarationsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarations(this);
}

void caffeinatedParser::DeclarationsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarations(this);
}

caffeinatedParser::DeclarationsContext* caffeinatedParser::declarations() {
  DeclarationsContext *_localctx = _tracker.createInstance<DeclarationsContext>(_ctx, getState());
  enterRule(_localctx, 8, caffeinatedParser::RuleDeclarations);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(50);
    match(caffeinatedParser::VAR);
    setState(51);
    match(caffeinatedParser::T__1);
    setState(52);
    declList();
    setState(53);
    match(caffeinatedParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclListContext ------------------------------------------------------------------

caffeinatedParser::DeclListContext::DeclListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<caffeinatedParser::DeclContext *> caffeinatedParser::DeclListContext::decl() {
  return getRuleContexts<caffeinatedParser::DeclContext>();
}

caffeinatedParser::DeclContext* caffeinatedParser::DeclListContext::decl(size_t i) {
  return getRuleContext<caffeinatedParser::DeclContext>(i);
}


size_t caffeinatedParser::DeclListContext::getRuleIndex() const {
  return caffeinatedParser::RuleDeclList;
}

void caffeinatedParser::DeclListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclList(this);
}

void caffeinatedParser::DeclListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclList(this);
}

caffeinatedParser::DeclListContext* caffeinatedParser::declList() {
  DeclListContext *_localctx = _tracker.createInstance<DeclListContext>(_ctx, getState());
  enterRule(_localctx, 10, caffeinatedParser::RuleDeclList);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(55);
    decl();
    setState(60);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(56);
        match(caffeinatedParser::T__0);
        setState(57);
        decl(); 
      }
      setState(62);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclContext ------------------------------------------------------------------

caffeinatedParser::DeclContext::DeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

caffeinatedParser::VarListContext* caffeinatedParser::DeclContext::varList() {
  return getRuleContext<caffeinatedParser::VarListContext>(0);
}

caffeinatedParser::TypeIdContext* caffeinatedParser::DeclContext::typeId() {
  return getRuleContext<caffeinatedParser::TypeIdContext>(0);
}


size_t caffeinatedParser::DeclContext::getRuleIndex() const {
  return caffeinatedParser::RuleDecl;
}

void caffeinatedParser::DeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecl(this);
}

void caffeinatedParser::DeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecl(this);
}

caffeinatedParser::DeclContext* caffeinatedParser::decl() {
  DeclContext *_localctx = _tracker.createInstance<DeclContext>(_ctx, getState());
  enterRule(_localctx, 12, caffeinatedParser::RuleDecl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(63);
    varList();
    setState(64);
    match(caffeinatedParser::T__1);
    setState(65);
    typeId();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarListContext ------------------------------------------------------------------

caffeinatedParser::VarListContext::VarListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<caffeinatedParser::VarIdContext *> caffeinatedParser::VarListContext::varId() {
  return getRuleContexts<caffeinatedParser::VarIdContext>();
}

caffeinatedParser::VarIdContext* caffeinatedParser::VarListContext::varId(size_t i) {
  return getRuleContext<caffeinatedParser::VarIdContext>(i);
}


size_t caffeinatedParser::VarListContext::getRuleIndex() const {
  return caffeinatedParser::RuleVarList;
}

void caffeinatedParser::VarListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarList(this);
}

void caffeinatedParser::VarListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarList(this);
}

caffeinatedParser::VarListContext* caffeinatedParser::varList() {
  VarListContext *_localctx = _tracker.createInstance<VarListContext>(_ctx, getState());
  enterRule(_localctx, 14, caffeinatedParser::RuleVarList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(67);
    varId();
    setState(72);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == caffeinatedParser::T__2) {
      setState(68);
      match(caffeinatedParser::T__2);
      setState(69);
      varId();
      setState(74);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarIdContext ------------------------------------------------------------------

caffeinatedParser::VarIdContext::VarIdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* caffeinatedParser::VarIdContext::ID() {
  return getToken(caffeinatedParser::ID, 0);
}


size_t caffeinatedParser::VarIdContext::getRuleIndex() const {
  return caffeinatedParser::RuleVarId;
}

void caffeinatedParser::VarIdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarId(this);
}

void caffeinatedParser::VarIdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarId(this);
}

caffeinatedParser::VarIdContext* caffeinatedParser::varId() {
  VarIdContext *_localctx = _tracker.createInstance<VarIdContext>(_ctx, getState());
  enterRule(_localctx, 16, caffeinatedParser::RuleVarId);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(75);
    match(caffeinatedParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeIdContext ------------------------------------------------------------------

caffeinatedParser::TypeIdContext::TypeIdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* caffeinatedParser::TypeIdContext::Type_ID() {
  return getToken(caffeinatedParser::Type_ID, 0);
}


size_t caffeinatedParser::TypeIdContext::getRuleIndex() const {
  return caffeinatedParser::RuleTypeId;
}

void caffeinatedParser::TypeIdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeId(this);
}

void caffeinatedParser::TypeIdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeId(this);
}

caffeinatedParser::TypeIdContext* caffeinatedParser::typeId() {
  TypeIdContext *_localctx = _tracker.createInstance<TypeIdContext>(_ctx, getState());
  enterRule(_localctx, 18, caffeinatedParser::RuleTypeId);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(77);
    match(caffeinatedParser::Type_ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompoundStmtContext ------------------------------------------------------------------

caffeinatedParser::CompoundStmtContext::CompoundStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* caffeinatedParser::CompoundStmtContext::BEGIN() {
  return getToken(caffeinatedParser::BEGIN, 0);
}

caffeinatedParser::StmtListContext* caffeinatedParser::CompoundStmtContext::stmtList() {
  return getRuleContext<caffeinatedParser::StmtListContext>(0);
}

tree::TerminalNode* caffeinatedParser::CompoundStmtContext::END() {
  return getToken(caffeinatedParser::END, 0);
}


size_t caffeinatedParser::CompoundStmtContext::getRuleIndex() const {
  return caffeinatedParser::RuleCompoundStmt;
}

void caffeinatedParser::CompoundStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompoundStmt(this);
}

void caffeinatedParser::CompoundStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompoundStmt(this);
}

caffeinatedParser::CompoundStmtContext* caffeinatedParser::compoundStmt() {
  CompoundStmtContext *_localctx = _tracker.createInstance<CompoundStmtContext>(_ctx, getState());
  enterRule(_localctx, 20, caffeinatedParser::RuleCompoundStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(79);
    match(caffeinatedParser::BEGIN);
    setState(80);
    stmtList();
    setState(81);
    match(caffeinatedParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtContext ------------------------------------------------------------------

caffeinatedParser::StmtContext::StmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

caffeinatedParser::CompoundStmtContext* caffeinatedParser::StmtContext::compoundStmt() {
  return getRuleContext<caffeinatedParser::CompoundStmtContext>(0);
}

caffeinatedParser::AssignmentStmtContext* caffeinatedParser::StmtContext::assignmentStmt() {
  return getRuleContext<caffeinatedParser::AssignmentStmtContext>(0);
}

caffeinatedParser::If_statementContext* caffeinatedParser::StmtContext::if_statement() {
  return getRuleContext<caffeinatedParser::If_statementContext>(0);
}

caffeinatedParser::While_loopContext* caffeinatedParser::StmtContext::while_loop() {
  return getRuleContext<caffeinatedParser::While_loopContext>(0);
}


size_t caffeinatedParser::StmtContext::getRuleIndex() const {
  return caffeinatedParser::RuleStmt;
}

void caffeinatedParser::StmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStmt(this);
}

void caffeinatedParser::StmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStmt(this);
}

caffeinatedParser::StmtContext* caffeinatedParser::stmt() {
  StmtContext *_localctx = _tracker.createInstance<StmtContext>(_ctx, getState());
  enterRule(_localctx, 22, caffeinatedParser::RuleStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(88);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case caffeinatedParser::BEGIN: {
        enterOuterAlt(_localctx, 1);
        setState(83);
        compoundStmt();
        break;
      }

      case caffeinatedParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(84);
        assignmentStmt();
        break;
      }

      case caffeinatedParser::IF: {
        enterOuterAlt(_localctx, 3);
        setState(85);
        if_statement();
        break;
      }

      case caffeinatedParser::WHILE: {
        enterOuterAlt(_localctx, 4);
        setState(86);
        while_loop();
        break;
      }

      case caffeinatedParser::T__0:
      case caffeinatedParser::END:
      case caffeinatedParser::COMPLETE: {
        enterOuterAlt(_localctx, 5);

        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtListContext ------------------------------------------------------------------

caffeinatedParser::StmtListContext::StmtListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<caffeinatedParser::StmtContext *> caffeinatedParser::StmtListContext::stmt() {
  return getRuleContexts<caffeinatedParser::StmtContext>();
}

caffeinatedParser::StmtContext* caffeinatedParser::StmtListContext::stmt(size_t i) {
  return getRuleContext<caffeinatedParser::StmtContext>(i);
}


size_t caffeinatedParser::StmtListContext::getRuleIndex() const {
  return caffeinatedParser::RuleStmtList;
}

void caffeinatedParser::StmtListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStmtList(this);
}

void caffeinatedParser::StmtListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStmtList(this);
}

caffeinatedParser::StmtListContext* caffeinatedParser::stmtList() {
  StmtListContext *_localctx = _tracker.createInstance<StmtListContext>(_ctx, getState());
  enterRule(_localctx, 24, caffeinatedParser::RuleStmtList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(90);
    stmt();
    setState(95);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == caffeinatedParser::T__0) {
      setState(91);
      match(caffeinatedParser::T__0);
      setState(92);
      stmt();
      setState(97);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentStmtContext ------------------------------------------------------------------

caffeinatedParser::AssignmentStmtContext::AssignmentStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

caffeinatedParser::VariableContext* caffeinatedParser::AssignmentStmtContext::variable() {
  return getRuleContext<caffeinatedParser::VariableContext>(0);
}

caffeinatedParser::ExprContext* caffeinatedParser::AssignmentStmtContext::expr() {
  return getRuleContext<caffeinatedParser::ExprContext>(0);
}


size_t caffeinatedParser::AssignmentStmtContext::getRuleIndex() const {
  return caffeinatedParser::RuleAssignmentStmt;
}

void caffeinatedParser::AssignmentStmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentStmt(this);
}

void caffeinatedParser::AssignmentStmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentStmt(this);
}

caffeinatedParser::AssignmentStmtContext* caffeinatedParser::assignmentStmt() {
  AssignmentStmtContext *_localctx = _tracker.createInstance<AssignmentStmtContext>(_ctx, getState());
  enterRule(_localctx, 26, caffeinatedParser::RuleAssignmentStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(114);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(98);
      variable();
      setState(99);
      match(caffeinatedParser::T__3);
      setState(100);
      expr(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(102);
      variable();
      setState(103);
      match(caffeinatedParser::T__3);
      setState(104);
      match(caffeinatedParser::T__4);
      setState(105);
      expr(0);
      setState(106);
      match(caffeinatedParser::T__4);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(108);
      variable();
      setState(109);
      match(caffeinatedParser::T__3);
      setState(110);
      match(caffeinatedParser::T__5);
      setState(111);
      expr(0);
      setState(112);
      match(caffeinatedParser::T__5);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableContext ------------------------------------------------------------------

caffeinatedParser::VariableContext::VariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* caffeinatedParser::VariableContext::ID() {
  return getToken(caffeinatedParser::ID, 0);
}


size_t caffeinatedParser::VariableContext::getRuleIndex() const {
  return caffeinatedParser::RuleVariable;
}

void caffeinatedParser::VariableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariable(this);
}

void caffeinatedParser::VariableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariable(this);
}

caffeinatedParser::VariableContext* caffeinatedParser::variable() {
  VariableContext *_localctx = _tracker.createInstance<VariableContext>(_ctx, getState());
  enterRule(_localctx, 28, caffeinatedParser::RuleVariable);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(116);
    match(caffeinatedParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

caffeinatedParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* caffeinatedParser::ExprContext::INTEGER() {
  return getToken(caffeinatedParser::INTEGER, 0);
}

tree::TerminalNode* caffeinatedParser::ExprContext::BOOLEAN() {
  return getToken(caffeinatedParser::BOOLEAN, 0);
}

tree::TerminalNode* caffeinatedParser::ExprContext::CHARACTER() {
  return getToken(caffeinatedParser::CHARACTER, 0);
}

tree::TerminalNode* caffeinatedParser::ExprContext::STRING() {
  return getToken(caffeinatedParser::STRING, 0);
}

caffeinatedParser::VariableContext* caffeinatedParser::ExprContext::variable() {
  return getRuleContext<caffeinatedParser::VariableContext>(0);
}

std::vector<caffeinatedParser::ExprContext *> caffeinatedParser::ExprContext::expr() {
  return getRuleContexts<caffeinatedParser::ExprContext>();
}

caffeinatedParser::ExprContext* caffeinatedParser::ExprContext::expr(size_t i) {
  return getRuleContext<caffeinatedParser::ExprContext>(i);
}

tree::TerminalNode* caffeinatedParser::ExprContext::Add() {
  return getToken(caffeinatedParser::Add, 0);
}

tree::TerminalNode* caffeinatedParser::ExprContext::Sub() {
  return getToken(caffeinatedParser::Sub, 0);
}

tree::TerminalNode* caffeinatedParser::ExprContext::Mult() {
  return getToken(caffeinatedParser::Mult, 0);
}

tree::TerminalNode* caffeinatedParser::ExprContext::Div() {
  return getToken(caffeinatedParser::Div, 0);
}

caffeinatedParser::Rel_opContext* caffeinatedParser::ExprContext::rel_op() {
  return getRuleContext<caffeinatedParser::Rel_opContext>(0);
}


size_t caffeinatedParser::ExprContext::getRuleIndex() const {
  return caffeinatedParser::RuleExpr;
}

void caffeinatedParser::ExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr(this);
}

void caffeinatedParser::ExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr(this);
}


caffeinatedParser::ExprContext* caffeinatedParser::expr() {
   return expr(0);
}

caffeinatedParser::ExprContext* caffeinatedParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  caffeinatedParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  caffeinatedParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 30;
  enterRecursionRule(_localctx, 30, caffeinatedParser::RuleExpr, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(124);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case caffeinatedParser::INTEGER: {
        setState(119);
        match(caffeinatedParser::INTEGER);
        break;
      }

      case caffeinatedParser::BOOLEAN: {
        setState(120);
        match(caffeinatedParser::BOOLEAN);
        break;
      }

      case caffeinatedParser::CHARACTER: {
        setState(121);
        match(caffeinatedParser::CHARACTER);
        break;
      }

      case caffeinatedParser::STRING: {
        setState(122);
        match(caffeinatedParser::STRING);
        break;
      }

      case caffeinatedParser::ID: {
        setState(123);
        variable();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(144);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(142);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(126);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(127);
          match(caffeinatedParser::Add);
          setState(128);
          expr(6);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(129);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(130);
          match(caffeinatedParser::Sub);
          setState(131);
          expr(5);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(132);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(133);
          match(caffeinatedParser::Mult);
          setState(134);
          expr(4);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(135);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(136);
          match(caffeinatedParser::Div);
          setState(137);
          expr(3);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(138);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(139);
          rel_op();
          setState(140);
          expr(2);
          break;
        }

        } 
      }
      setState(146);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Rel_opContext ------------------------------------------------------------------

caffeinatedParser::Rel_opContext::Rel_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* caffeinatedParser::Rel_opContext::Less_than() {
  return getToken(caffeinatedParser::Less_than, 0);
}

tree::TerminalNode* caffeinatedParser::Rel_opContext::Greater_than() {
  return getToken(caffeinatedParser::Greater_than, 0);
}

tree::TerminalNode* caffeinatedParser::Rel_opContext::Equals() {
  return getToken(caffeinatedParser::Equals, 0);
}

tree::TerminalNode* caffeinatedParser::Rel_opContext::Gt_EQ() {
  return getToken(caffeinatedParser::Gt_EQ, 0);
}

tree::TerminalNode* caffeinatedParser::Rel_opContext::Lt_EQ() {
  return getToken(caffeinatedParser::Lt_EQ, 0);
}

tree::TerminalNode* caffeinatedParser::Rel_opContext::Not_EQ() {
  return getToken(caffeinatedParser::Not_EQ, 0);
}


size_t caffeinatedParser::Rel_opContext::getRuleIndex() const {
  return caffeinatedParser::RuleRel_op;
}

void caffeinatedParser::Rel_opContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRel_op(this);
}

void caffeinatedParser::Rel_opContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRel_op(this);
}

caffeinatedParser::Rel_opContext* caffeinatedParser::rel_op() {
  Rel_opContext *_localctx = _tracker.createInstance<Rel_opContext>(_ctx, getState());
  enterRule(_localctx, 32, caffeinatedParser::RuleRel_op);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(147);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << caffeinatedParser::Less_than)
      | (1ULL << caffeinatedParser::Greater_than)
      | (1ULL << caffeinatedParser::Equals)
      | (1ULL << caffeinatedParser::Gt_EQ)
      | (1ULL << caffeinatedParser::Lt_EQ)
      | (1ULL << caffeinatedParser::Not_EQ))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_statementContext ------------------------------------------------------------------

caffeinatedParser::If_statementContext::If_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* caffeinatedParser::If_statementContext::IF() {
  return getToken(caffeinatedParser::IF, 0);
}

caffeinatedParser::ExprContext* caffeinatedParser::If_statementContext::expr() {
  return getRuleContext<caffeinatedParser::ExprContext>(0);
}

std::vector<tree::TerminalNode *> caffeinatedParser::If_statementContext::START() {
  return getTokens(caffeinatedParser::START);
}

tree::TerminalNode* caffeinatedParser::If_statementContext::START(size_t i) {
  return getToken(caffeinatedParser::START, i);
}

std::vector<caffeinatedParser::StmtListContext *> caffeinatedParser::If_statementContext::stmtList() {
  return getRuleContexts<caffeinatedParser::StmtListContext>();
}

caffeinatedParser::StmtListContext* caffeinatedParser::If_statementContext::stmtList(size_t i) {
  return getRuleContext<caffeinatedParser::StmtListContext>(i);
}

std::vector<tree::TerminalNode *> caffeinatedParser::If_statementContext::COMPLETE() {
  return getTokens(caffeinatedParser::COMPLETE);
}

tree::TerminalNode* caffeinatedParser::If_statementContext::COMPLETE(size_t i) {
  return getToken(caffeinatedParser::COMPLETE, i);
}

tree::TerminalNode* caffeinatedParser::If_statementContext::ELSE() {
  return getToken(caffeinatedParser::ELSE, 0);
}


size_t caffeinatedParser::If_statementContext::getRuleIndex() const {
  return caffeinatedParser::RuleIf_statement;
}

void caffeinatedParser::If_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIf_statement(this);
}

void caffeinatedParser::If_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIf_statement(this);
}

caffeinatedParser::If_statementContext* caffeinatedParser::if_statement() {
  If_statementContext *_localctx = _tracker.createInstance<If_statementContext>(_ctx, getState());
  enterRule(_localctx, 34, caffeinatedParser::RuleIf_statement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(149);
    match(caffeinatedParser::IF);
    setState(150);
    match(caffeinatedParser::T__6);
    setState(151);
    expr(0);
    setState(152);
    match(caffeinatedParser::T__7);
    setState(153);
    match(caffeinatedParser::START);
    setState(154);
    stmtList();
    setState(155);
    match(caffeinatedParser::COMPLETE);
    setState(161);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == caffeinatedParser::ELSE) {
      setState(156);
      match(caffeinatedParser::ELSE);
      setState(157);
      match(caffeinatedParser::START);

      setState(158);
      stmtList();
      setState(159);
      match(caffeinatedParser::COMPLETE);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- While_loopContext ------------------------------------------------------------------

caffeinatedParser::While_loopContext::While_loopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* caffeinatedParser::While_loopContext::WHILE() {
  return getToken(caffeinatedParser::WHILE, 0);
}

caffeinatedParser::ExprContext* caffeinatedParser::While_loopContext::expr() {
  return getRuleContext<caffeinatedParser::ExprContext>(0);
}

tree::TerminalNode* caffeinatedParser::While_loopContext::START() {
  return getToken(caffeinatedParser::START, 0);
}

caffeinatedParser::StmtListContext* caffeinatedParser::While_loopContext::stmtList() {
  return getRuleContext<caffeinatedParser::StmtListContext>(0);
}

tree::TerminalNode* caffeinatedParser::While_loopContext::COMPLETE() {
  return getToken(caffeinatedParser::COMPLETE, 0);
}


size_t caffeinatedParser::While_loopContext::getRuleIndex() const {
  return caffeinatedParser::RuleWhile_loop;
}

void caffeinatedParser::While_loopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhile_loop(this);
}

void caffeinatedParser::While_loopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<caffeinatedListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhile_loop(this);
}

caffeinatedParser::While_loopContext* caffeinatedParser::while_loop() {
  While_loopContext *_localctx = _tracker.createInstance<While_loopContext>(_ctx, getState());
  enterRule(_localctx, 36, caffeinatedParser::RuleWhile_loop);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(163);
    match(caffeinatedParser::WHILE);
    setState(164);
    match(caffeinatedParser::T__6);
    setState(165);
    expr(0);
    setState(166);
    match(caffeinatedParser::T__7);
    setState(167);
    match(caffeinatedParser::START);
    setState(168);
    stmtList();
    setState(169);
    match(caffeinatedParser::COMPLETE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool caffeinatedParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 15: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool caffeinatedParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 5);
    case 1: return precpred(_ctx, 4);
    case 2: return precpred(_ctx, 3);
    case 3: return precpred(_ctx, 2);
    case 4: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> caffeinatedParser::_decisionToDFA;
atn::PredictionContextCache caffeinatedParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN caffeinatedParser::_atn;
std::vector<uint16_t> caffeinatedParser::_serializedATN;

std::vector<std::string> caffeinatedParser::_ruleNames = {
  "program", "header", "mainBlock", "block", "declarations", "declList", 
  "decl", "varList", "varId", "typeId", "compoundStmt", "stmt", "stmtList", 
  "assignmentStmt", "variable", "expr", "rel_op", "if_statement", "while_loop"
};

std::vector<std::string> caffeinatedParser::_literalNames = {
  "", "';'", "':'", "','", "'='", "'''", "'\"'", "'('", "')'", "'customer'", 
  "'MENU'", "'toppings'", "'ORDER'", "'PICKUP'", "'milk'", "'nondairy'", 
  "'brew'", "'START'", "'COMPLETE'", "", "'boba'", "'ice'", "'sweet'", "'flavor'", 
  "", "", "", "", "", "'+'", "'-'", "'*'", "'/'", "'<'", "'>'", "'=='", 
  "'>='", "'<='", "'!='"
};

std::vector<std::string> caffeinatedParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "PROGRAM", "FUNCTION", "VAR", "BEGIN", 
  "END", "IF", "ELSE", "WHILE", "START", "COMPLETE", "Type_ID", "INTEGER_TYPE", 
  "BOOLEAN_TYPE", "CHARACTER_TYPE", "STRING_TYPE", "ID", "INTEGER", "BOOLEAN", 
  "CHARACTER", "STRING", "Add", "Sub", "Mult", "Div", "Less_than", "Greater_than", 
  "Equals", "Gt_EQ", "Lt_EQ", "Not_EQ", "NEWLINE", "WS", "BlockComment", 
  "LineComment"
};

dfa::Vocabulary caffeinatedParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> caffeinatedParser::_tokenNames;

caffeinatedParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x2c, 0xae, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 0x12, 
    0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0x3d, 0xa, 0x7, 
    0xc, 0x7, 0xe, 0x7, 0x40, 0xb, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 0x49, 0xa, 0x9, 0xc, 0x9, 
    0xe, 0x9, 0x4c, 0xb, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xd, 0x5, 0xd, 0x5b, 0xa, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x7, 0xe, 0x60, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0x63, 0xb, 0xe, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x5, 0xf, 0x75, 0xa, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x7f, 
    0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x7, 0x11, 0x91, 0xa, 0x11, 
    0xc, 0x11, 0xe, 0x11, 0x94, 0xb, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
    0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0xa4, 0xa, 
    0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x2, 0x3, 0x20, 0x15, 0x2, 0x4, 0x6, 
    0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 
    0x20, 0x22, 0x24, 0x26, 0x2, 0x3, 0x3, 0x2, 0x23, 0x28, 0x2, 0xad, 0x2, 
    0x28, 0x3, 0x2, 0x2, 0x2, 0x4, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x6, 0x2f, 
    0x3, 0x2, 0x2, 0x2, 0x8, 0x31, 0x3, 0x2, 0x2, 0x2, 0xa, 0x34, 0x3, 0x2, 
    0x2, 0x2, 0xc, 0x39, 0x3, 0x2, 0x2, 0x2, 0xe, 0x41, 0x3, 0x2, 0x2, 0x2, 
    0x10, 0x45, 0x3, 0x2, 0x2, 0x2, 0x12, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x14, 
    0x4f, 0x3, 0x2, 0x2, 0x2, 0x16, 0x51, 0x3, 0x2, 0x2, 0x2, 0x18, 0x5a, 
    0x3, 0x2, 0x2, 0x2, 0x1a, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x74, 0x3, 
    0x2, 0x2, 0x2, 0x1e, 0x76, 0x3, 0x2, 0x2, 0x2, 0x20, 0x7e, 0x3, 0x2, 
    0x2, 0x2, 0x22, 0x95, 0x3, 0x2, 0x2, 0x2, 0x24, 0x97, 0x3, 0x2, 0x2, 
    0x2, 0x26, 0xa5, 0x3, 0x2, 0x2, 0x2, 0x28, 0x29, 0x5, 0x4, 0x3, 0x2, 
    0x29, 0x2a, 0x5, 0x6, 0x4, 0x2, 0x2a, 0x3, 0x3, 0x2, 0x2, 0x2, 0x2b, 
    0x2c, 0x7, 0xb, 0x2, 0x2, 0x2c, 0x2d, 0x7, 0x1a, 0x2, 0x2, 0x2d, 0x2e, 
    0x7, 0x3, 0x2, 0x2, 0x2e, 0x5, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x30, 0x5, 
    0x8, 0x5, 0x2, 0x30, 0x7, 0x3, 0x2, 0x2, 0x2, 0x31, 0x32, 0x5, 0xa, 
    0x6, 0x2, 0x32, 0x33, 0x5, 0x16, 0xc, 0x2, 0x33, 0x9, 0x3, 0x2, 0x2, 
    0x2, 0x34, 0x35, 0x7, 0xd, 0x2, 0x2, 0x35, 0x36, 0x7, 0x4, 0x2, 0x2, 
    0x36, 0x37, 0x5, 0xc, 0x7, 0x2, 0x37, 0x38, 0x7, 0x3, 0x2, 0x2, 0x38, 
    0xb, 0x3, 0x2, 0x2, 0x2, 0x39, 0x3e, 0x5, 0xe, 0x8, 0x2, 0x3a, 0x3b, 
    0x7, 0x3, 0x2, 0x2, 0x3b, 0x3d, 0x5, 0xe, 0x8, 0x2, 0x3c, 0x3a, 0x3, 
    0x2, 0x2, 0x2, 0x3d, 0x40, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x3c, 0x3, 0x2, 
    0x2, 0x2, 0x3e, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x3f, 0xd, 0x3, 0x2, 0x2, 
    0x2, 0x40, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x41, 0x42, 0x5, 0x10, 0x9, 0x2, 
    0x42, 0x43, 0x7, 0x4, 0x2, 0x2, 0x43, 0x44, 0x5, 0x14, 0xb, 0x2, 0x44, 
    0xf, 0x3, 0x2, 0x2, 0x2, 0x45, 0x4a, 0x5, 0x12, 0xa, 0x2, 0x46, 0x47, 
    0x7, 0x5, 0x2, 0x2, 0x47, 0x49, 0x5, 0x12, 0xa, 0x2, 0x48, 0x46, 0x3, 
    0x2, 0x2, 0x2, 0x49, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x48, 0x3, 0x2, 
    0x2, 0x2, 0x4a, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x11, 0x3, 0x2, 0x2, 
    0x2, 0x4c, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x4e, 0x7, 0x1a, 0x2, 0x2, 
    0x4e, 0x13, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x50, 0x7, 0x15, 0x2, 0x2, 0x50, 
    0x15, 0x3, 0x2, 0x2, 0x2, 0x51, 0x52, 0x7, 0xe, 0x2, 0x2, 0x52, 0x53, 
    0x5, 0x1a, 0xe, 0x2, 0x53, 0x54, 0x7, 0xf, 0x2, 0x2, 0x54, 0x17, 0x3, 
    0x2, 0x2, 0x2, 0x55, 0x5b, 0x5, 0x16, 0xc, 0x2, 0x56, 0x5b, 0x5, 0x1c, 
    0xf, 0x2, 0x57, 0x5b, 0x5, 0x24, 0x13, 0x2, 0x58, 0x5b, 0x5, 0x26, 0x14, 
    0x2, 0x59, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x55, 0x3, 0x2, 0x2, 0x2, 
    0x5a, 0x56, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x57, 0x3, 0x2, 0x2, 0x2, 0x5a, 
    0x58, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x59, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x19, 
    0x3, 0x2, 0x2, 0x2, 0x5c, 0x61, 0x5, 0x18, 0xd, 0x2, 0x5d, 0x5e, 0x7, 
    0x3, 0x2, 0x2, 0x5e, 0x60, 0x5, 0x18, 0xd, 0x2, 0x5f, 0x5d, 0x3, 0x2, 
    0x2, 0x2, 0x60, 0x63, 0x3, 0x2, 0x2, 0x2, 0x61, 0x5f, 0x3, 0x2, 0x2, 
    0x2, 0x61, 0x62, 0x3, 0x2, 0x2, 0x2, 0x62, 0x1b, 0x3, 0x2, 0x2, 0x2, 
    0x63, 0x61, 0x3, 0x2, 0x2, 0x2, 0x64, 0x65, 0x5, 0x1e, 0x10, 0x2, 0x65, 
    0x66, 0x7, 0x6, 0x2, 0x2, 0x66, 0x67, 0x5, 0x20, 0x11, 0x2, 0x67, 0x75, 
    0x3, 0x2, 0x2, 0x2, 0x68, 0x69, 0x5, 0x1e, 0x10, 0x2, 0x69, 0x6a, 0x7, 
    0x6, 0x2, 0x2, 0x6a, 0x6b, 0x7, 0x7, 0x2, 0x2, 0x6b, 0x6c, 0x5, 0x20, 
    0x11, 0x2, 0x6c, 0x6d, 0x7, 0x7, 0x2, 0x2, 0x6d, 0x75, 0x3, 0x2, 0x2, 
    0x2, 0x6e, 0x6f, 0x5, 0x1e, 0x10, 0x2, 0x6f, 0x70, 0x7, 0x6, 0x2, 0x2, 
    0x70, 0x71, 0x7, 0x8, 0x2, 0x2, 0x71, 0x72, 0x5, 0x20, 0x11, 0x2, 0x72, 
    0x73, 0x7, 0x8, 0x2, 0x2, 0x73, 0x75, 0x3, 0x2, 0x2, 0x2, 0x74, 0x64, 
    0x3, 0x2, 0x2, 0x2, 0x74, 0x68, 0x3, 0x2, 0x2, 0x2, 0x74, 0x6e, 0x3, 
    0x2, 0x2, 0x2, 0x75, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x76, 0x77, 0x7, 0x1a, 
    0x2, 0x2, 0x77, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x78, 0x79, 0x8, 0x11, 0x1, 
    0x2, 0x79, 0x7f, 0x7, 0x1b, 0x2, 0x2, 0x7a, 0x7f, 0x7, 0x1c, 0x2, 0x2, 
    0x7b, 0x7f, 0x7, 0x1d, 0x2, 0x2, 0x7c, 0x7f, 0x7, 0x1e, 0x2, 0x2, 0x7d, 
    0x7f, 0x5, 0x1e, 0x10, 0x2, 0x7e, 0x78, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x7a, 
    0x3, 0x2, 0x2, 0x2, 0x7e, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x7c, 0x3, 
    0x2, 0x2, 0x2, 0x7e, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x92, 0x3, 0x2, 
    0x2, 0x2, 0x80, 0x81, 0xc, 0x7, 0x2, 0x2, 0x81, 0x82, 0x7, 0x1f, 0x2, 
    0x2, 0x82, 0x91, 0x5, 0x20, 0x11, 0x8, 0x83, 0x84, 0xc, 0x6, 0x2, 0x2, 
    0x84, 0x85, 0x7, 0x20, 0x2, 0x2, 0x85, 0x91, 0x5, 0x20, 0x11, 0x7, 0x86, 
    0x87, 0xc, 0x5, 0x2, 0x2, 0x87, 0x88, 0x7, 0x21, 0x2, 0x2, 0x88, 0x91, 
    0x5, 0x20, 0x11, 0x6, 0x89, 0x8a, 0xc, 0x4, 0x2, 0x2, 0x8a, 0x8b, 0x7, 
    0x22, 0x2, 0x2, 0x8b, 0x91, 0x5, 0x20, 0x11, 0x5, 0x8c, 0x8d, 0xc, 0x3, 
    0x2, 0x2, 0x8d, 0x8e, 0x5, 0x22, 0x12, 0x2, 0x8e, 0x8f, 0x5, 0x20, 0x11, 
    0x4, 0x8f, 0x91, 0x3, 0x2, 0x2, 0x2, 0x90, 0x80, 0x3, 0x2, 0x2, 0x2, 
    0x90, 0x83, 0x3, 0x2, 0x2, 0x2, 0x90, 0x86, 0x3, 0x2, 0x2, 0x2, 0x90, 
    0x89, 0x3, 0x2, 0x2, 0x2, 0x90, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x91, 0x94, 
    0x3, 0x2, 0x2, 0x2, 0x92, 0x90, 0x3, 0x2, 0x2, 0x2, 0x92, 0x93, 0x3, 
    0x2, 0x2, 0x2, 0x93, 0x21, 0x3, 0x2, 0x2, 0x2, 0x94, 0x92, 0x3, 0x2, 
    0x2, 0x2, 0x95, 0x96, 0x9, 0x2, 0x2, 0x2, 0x96, 0x23, 0x3, 0x2, 0x2, 
    0x2, 0x97, 0x98, 0x7, 0x10, 0x2, 0x2, 0x98, 0x99, 0x7, 0x9, 0x2, 0x2, 
    0x99, 0x9a, 0x5, 0x20, 0x11, 0x2, 0x9a, 0x9b, 0x7, 0xa, 0x2, 0x2, 0x9b, 
    0x9c, 0x7, 0x13, 0x2, 0x2, 0x9c, 0x9d, 0x5, 0x1a, 0xe, 0x2, 0x9d, 0xa3, 
    0x7, 0x14, 0x2, 0x2, 0x9e, 0x9f, 0x7, 0x11, 0x2, 0x2, 0x9f, 0xa0, 0x7, 
    0x13, 0x2, 0x2, 0xa0, 0xa1, 0x5, 0x1a, 0xe, 0x2, 0xa1, 0xa2, 0x7, 0x14, 
    0x2, 0x2, 0xa2, 0xa4, 0x3, 0x2, 0x2, 0x2, 0xa3, 0x9e, 0x3, 0x2, 0x2, 
    0x2, 0xa3, 0xa4, 0x3, 0x2, 0x2, 0x2, 0xa4, 0x25, 0x3, 0x2, 0x2, 0x2, 
    0xa5, 0xa6, 0x7, 0x12, 0x2, 0x2, 0xa6, 0xa7, 0x7, 0x9, 0x2, 0x2, 0xa7, 
    0xa8, 0x5, 0x20, 0x11, 0x2, 0xa8, 0xa9, 0x7, 0xa, 0x2, 0x2, 0xa9, 0xaa, 
    0x7, 0x13, 0x2, 0x2, 0xaa, 0xab, 0x5, 0x1a, 0xe, 0x2, 0xab, 0xac, 0x7, 
    0x14, 0x2, 0x2, 0xac, 0x27, 0x3, 0x2, 0x2, 0x2, 0xb, 0x3e, 0x4a, 0x5a, 
    0x61, 0x74, 0x7e, 0x90, 0x92, 0xa3, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

caffeinatedParser::Initializer caffeinatedParser::_init;
