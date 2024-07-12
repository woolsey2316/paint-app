cmake_minimum_required(VERSION 3.24)
project(hellow_world)

# Our Project
set(SOURCE_FILES
    main.cpp
    image.cpp)
    
add_executable(${PROJECT_NAME} ${SOURCE_FILES})