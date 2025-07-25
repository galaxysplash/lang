#pragma once

#include <cstdint>

enum class TokenKind : uint8_t {
  NONE,

  COLON,
  EQUALS,
  ASSIGN,

  EndOfFile,
};
