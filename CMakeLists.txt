cmake_minimum_required(VERSION 3.0)

add_subdirectory(Numbers)

project (Classes)

add_executable(Classes main.cpp)
target_link_libraries(${PROJECT_NAME} Numbers)