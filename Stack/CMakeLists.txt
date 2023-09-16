project(Stack)

file(GLOB_RECURSE SRC "${PROJECT_SOURCE_DIR}/*.cpp" "${PROJECT_SOURCE_DIR}/*.hpp")

add_library(${PROJECT_NAME} ${SRC})

target_include_directories(${PROJECT_NAME} PUBLIC "${PROJECT_SOURCE_DIR}")