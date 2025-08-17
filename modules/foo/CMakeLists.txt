add_library(foo STATIC foo.c baz.c)
target_include_directories(foo PUBLIC public-headers)
target_link_libraries(foo PUBLIC bar)
