#include <string>
#include <variant>
#include <vector>
#include <complex>
#include <print>
#include <__chrono/formatter.h>


struct Vec2 {
  double x, y;
};

struct Vec3 {
  double x, y, z;
};

struct Vec4 {
  double x, y, z, w;
};

struct ComplexVec2 {
  std::complex<double> x, y;
};

struct ComplexVec3 {
  std::complex<double> x, y, z;
};

struct ComplexVec4 {
  std::complex<double> x, y, z, w;
};

using Token = std::variant<
  int8_t,
  uint8_t,
  int16_t,
  uint16_t,
  int32_t,
  uint32_t,
  int64_t,
  uint64_t,

  Vec2, ComplexVec2,
  Vec3, ComplexVec3,
  Vec4, ComplexVec4,

  float, std::complex<float>,
  double, std::complex<double>,

  std::string,
  std::string_view
>;

int main(int argc, const char * argv[]) {
   std::vector<Token> tokens {};


}