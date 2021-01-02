project(calculator_src)

# Add a library to the project using the specified source files.
add_library(calculator_lib STATIC calculator.cpp calculator.h)

# Add include directories to a target.
target_include_directories(calculator_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# Add an executable to the project using the specified source files.
add_executable(calculator main.cpp)

# Specify libraries or flags to use when linking a given target and/or its dependents.
target_link_libraries(calculator PRIVATE calculator_lib)