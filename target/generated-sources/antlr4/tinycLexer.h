
#include "wci/intermediate/TypeSpec.h"
using namespace wci::intermediate;


// Generated from tinyc.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  tinycLexer : public antlr4::Lexer {
public:
  enum {
    Statement = 1, BEGIN = 2, END = 3, If = 4, Else = 5, Elif = 6, While = 7, 
    BOBA = 8, Bool = 9, Char = 10, String = 11, Add = 12, Sub = 13, Mult = 14, 
    Div = 15, Less_than = 16, Greater_than = 17, Equals = 18, Gt_EQ = 19, 
    Lt_EQ = 20, Not_EQ = 21
  };

  tinycLexer(antlr4::CharStream *input);
  ~tinycLexer();

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

