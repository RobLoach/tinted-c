cmake_minimum_required(VERSION 3.11)
project (tinted_c
    VERSION 0.0.1
    DESCRIPTION "C Headers for Base16, Base24 and Tinted8 Color Schemes"
    HOMEPAGE_URL "https://github.com/RobLoach/tinted-c"
    LANGUAGES C
)

add_library(tinted_c INTERFACE)
target_include_directories(tinted_c INTERFACE include)

# Options
if ("${CMAKE_SOURCE_DIR}" STREQUAL "${CMAKE_CURRENT_SOURCE_DIR}")
    set(TINTED_C_IS_MAIN TRUE)
else()
    set(TINTED_C_IS_MAIN FALSE)
endif()

# Examples
if(TINTED_C_IS_MAIN)
    # Testing
    include(CTest)
    enable_testing()
    if(BUILD_TESTING)
        add_subdirectory(test)
    endif()
endif()
