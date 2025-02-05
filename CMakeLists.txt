cmake_minimum_required(VERSION 3.10)
project(CppUnitTestDemo)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add source files
set(SOURCES
    src/calculator.cpp
    main.cpp
)

# Create main executable
add_executable(calculator_demo ${SOURCES})

# Google Test
enable_testing()
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Create test executable
add_executable(calculator_test tests/calculator_test.cpp src/calculator.cpp)
target_link_libraries(calculator_test PRIVATE ${GTEST_LIBRARIES} gtest_main)

# Add test to CTest
add_test(NAME calculator_test COMMAND calculator_test)