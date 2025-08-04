# happy-literal
*happy-literal* is a header-only C++20 library that enables using string literals as non-type template parameters.

## Example
```cpp
#include <happy/literal.hpp>

template< happy::literal::String >
constexpr auto const value = 0;

template<>
constexpr auto const value< "dog" > = 100;

template<>
constexpr auto const value< "puppy" > = 200;

template<>
constexpr auto const value< u8"강아지" > = 300;

auto main() noexcept -> int {
  static_assert(value< "dog" > == 100);
  static_assert(value< "puppy" > == 200);
  static_assert(value< u8"강아지" > == 300);
  static_assert(value< "cat" > == 0);
  return 0;
}
```

## CMake Integration
```cmake
include ( FetchContent )

FetchContent_Declare ( happy_literal
  GIT_REPOSITORY https://github.com/kimhappy/happy-literal.git
  GIT_TAG        master
)

FetchContent_MakeAvailable ( happy_literal )

# And link it to your target!
```
