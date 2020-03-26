cmake_minimum_required(VERSION 3.15)
project(C_Primer_Plus_Exercises)

set(CMAKE_CXX_STANDARD 14)

include_directories(ch12)
include_directories(ch16)
include_directories(ch17)



add_executable(exercise2 ch03/exercise3-2.c)
set_target_properties(exercise2 PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/ch03/")
add_executable(exercise1 ch02/exercise2-1.c)
set_target_properties(exercise1 PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/ch02/")
add_executable(exercise3 ch02/exercise2-3.c)
set_target_properties(exercise3 PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/ch02/")
add_executable(exercise4 ch02/exercise2-4.c)
set_target_properties(exercise4 PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/ch02/")
add_executable(exercise6 ch02/exercise2-6.c)
set_target_properties(exercise6 PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/ch02/")
add_executable(exercise8 ch02/exercise2-8.c)
set_target_properties(exercise8 PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/ch02/")
add_executable(exercise5 ch02/exercise2-5.c)
set_target_properties(exercise5 PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/ch02/")
add_executable(exercise7 ch02/exercise2-7.c)
set_target_properties(exercise7 PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/ch02/")