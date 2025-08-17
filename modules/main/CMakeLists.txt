add_executable(main main.c)
target_link_libraries(main PUBLIC foo)
install(TARGETS main DESTINATION bin)
