#include <vector>
#include <string>

enum class TokenKind : uint8_t {
  OPEN_BRACKET,
  CLOSE_BRACKET,

  OPEN_BRACE,
  CLOSE_BRACE,

  EQUALS,

  ASSIGN,

  EndOfFile,
};

union TokenData {
  void* nothing;
  int integer;
  float floating;
  std::string string;
};

class Token {
public:
  Token(const TokenKind &kind, const TokenData &data)
      : kind(kind), data(data) {}

  TokenKind &getKind();
  TokenData &getData();

private:
  TokenKind kind;
  TokenData data;
};

TokenKind &Token::getKind() {
  return kind;
}

TokenData &Token::getData() {
  return data;
}

int main(int argc, const char * argv[]) {
  std::vector<Token> tokens {};
}