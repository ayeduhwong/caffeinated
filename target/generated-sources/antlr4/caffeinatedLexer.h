
#include "wci/intermediate/TypeSpec.h"
using namespace wci::intermediate;


// Generated from caffeinated.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  caffeinatedLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, PROGRAM = 9, FUNCTION = 10, VAR = 11, BEGIN = 12, END = 13, 
    IF = 14, ELSE = 15, WHILE = 16, START = 17, COMPLETE = 18, Type_ID = 19, 
    INTEGER_TYPE = 20, BOOLEAN_TYPE = 21, CHARACTER_TYPE = 22, STRING_TYPE = 23, 
    ID = 24, INTEGER = 25, BOOLEAN = 26, CHARACTER = 27, STRING = 28, Add = 29, 
    Sub = 30, Mult = 31, Div = 32, Less_than = 33, Greater_than = 34, Equals = 35, 
    Gt_EQ = 36, Lt_EQ = 37, Not_EQ = 38, NEWLINE = 39, WS = 40, BlockComment = 41, 
    LineComment = 42
  };

  caffeinatedLexer(antlr4::CharStream *input);
  ~caffeinatedLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

