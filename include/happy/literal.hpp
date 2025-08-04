#ifndef __HAPPY_LITERAL_HPP__
#define __HAPPY_LITERAL_HPP__

#include <array>
#include <algorithm>

namespace happy::literal {
  template< typename _CharT, size_t _N >
  struct String {
    using CharT = _CharT;

    static constexpr auto N = _N;

    std::array< CharT, N > value;

    constexpr String(CharT const (&str)[ N + 1 ]) noexcept {
      std::copy_n(str, N, value.begin());
    }
  };

  template< typename _CharT, size_t _N >
  String(_CharT const (&)[ _N ]) noexcept -> String< _CharT, _N - 1 >;
} // namespace happy::literal

#endif // __HAPPY_LITERAL_HPP__
