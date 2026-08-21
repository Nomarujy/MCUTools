
project("MCUTools_Tests")


include(FetchContent)

FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        v1.14.0
)

FetchContent_MakeAvailable(googletest)

add_executable(${PROJECT_NAME}
  CRC_Tests.cpp
)

target_link_libraries(${PROJECT_NAME}
  CrcCheckLib
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(${PROJECT_NAME})