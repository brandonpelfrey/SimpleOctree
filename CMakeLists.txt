cmake_minimum_required(VERSION 3.0)
project(SimpleOctree)

file(GLOB PROJECT_SOURCES           *.cpp
                                    )


add_executable(${PROJECT_NAME} ${PROJECT_SOURCES})

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_SOURCE_DIR})