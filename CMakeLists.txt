cmake_minimum_required(VERSION 3.15)
project(hello)

find_package(fmt REQUIRED)
find_package(MbedTLS REQUIRED)

add_executable(${PROJECT_NAME} src/main.cpp)

target_link_libraries(${PROJECT_NAME} fmt::fmt)
target_link_libraries(${PROJECT_NAME} MbedTLS::mbedtls)
