#include <lang/Token.h>


TokenKind &Token::getKind() {
  return kind;
}

TokenData &Token::getData() {
  return data;
}