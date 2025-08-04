cmake_minimum_required ( VERSION 3.14 )

project ( happy_literal
  VERSION   1.0.0
  LANGUAGES CXX
)

set ( CMAKE_EXPORT_COMPILE_COMMANDS ON )

add_library ( happy_literal INTERFACE )

target_compile_features ( happy_literal
  INTERFACE
    cxx_std_20
)

target_include_directories ( happy_literal
  INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)
