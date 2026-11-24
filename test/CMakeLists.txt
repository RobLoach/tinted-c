# Executable
add_executable(tinted_c_test tinted_c_test.c)

# Options
if (MSVC)
    target_compile_options(tinted_c_test PRIVATE /Wall /W4)
else()
    target_compile_options(tinted_c_test PRIVATE -Wall -Wextra -Wconversion -Wsign-conversion)
endif()

set_target_properties(tinted_c_test PROPERTIES C_STANDARD 90)

# Link to the library
target_link_libraries(tinted_c_test tinted_c)

# Build the test
add_test(NAME tinted_c_test COMMAND tinted_c_test)

# Two-pass include: declarations first, then the implementation
add_executable(tinted_c_two_pass_test tinted_c_two_pass_test.c)
if (MSVC)
    target_compile_options(tinted_c_two_pass_test PRIVATE /Wall /W4)
else()
    target_compile_options(tinted_c_two_pass_test PRIVATE -Wall -Wextra -Wconversion -Wsign-conversion)
endif()
set_target_properties(tinted_c_two_pass_test PROPERTIES C_STANDARD 90)
target_link_libraries(tinted_c_two_pass_test tinted_c)
add_test(NAME tinted_c_two_pass_test COMMAND tinted_c_two_pass_test)
