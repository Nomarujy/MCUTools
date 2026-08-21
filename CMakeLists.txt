cmake_minimum_required(VERSION 3.18)
project("CrcCheckLib" LANGUAGES C)

add_library(${PROJECT_NAME} STATIC 
Src/CrcCheck.c
)


target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/Inc>
    $<INSTALL_INTERFACE:include>
)

option(BUILD_TESTING "Build unit tests" ON)

if(BUILD_TESTING)
    add_subdirectory(Tests)

endif()