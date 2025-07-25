#pragma once

#include <lang/TokenData.h>
#include <lang/TokenType.h>

class Token {
public:
  TokenKind &getKind();
  TokenData &getData();

private:
  Token(const TokenKind &kind, const TokenData &data) : kind(kind), data(data) {}

  TokenKind kind;
  TokenData data;
};
