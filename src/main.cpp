#include <string>
#include <variant>
#include <vector>
#include <span>



using Token = std::variant<
  int8_t,
  uint8_t,
  int16_t,
  uint16_t,
  int32_t,
  uint32_t,
  int64_t,
  uint64_t,
  float,
  double,
  std::string,
  std::string_view
>;

int main(int argc, const char * argv[]) {
  std::vector<Token> tokens {};
  const std::initializer_list<uint8_t> numbers {1, 2, 3, 4, 5, 6, 7, 8, 9};
  const std::initializer_list<std::string_view> strings {"hello", "world"};

  tokens.reserve(numbers.size());

  for (const uint8_t& number : numbers) {
    tokens.emplace_back(number);
  }

  tokens.reserve(strings.size());

  for (const std::string_view& string: strings) {
    tokens.emplace_back(string);
  }
}