cmake_minimum_required(VERSION 3.15)
project(C_Primer_Plus_Exercises)

set(CMAKE_CXX_STANDARD 14)

include_directories(ch12)
include_directories(ch16)
include_directories(ch17)




add_executable(exercise16-2 ch16/exercise16-2.c)
add_executable(exercise16-3 ch16/exercise16-3.c;ch16/coordinates.c)
