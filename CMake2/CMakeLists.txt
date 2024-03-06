cmake_minimum_required(VERSION 3.15)
	 
project("lab_1_01")


set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

include_directories("Res2/")

add_executable("lab_1_01" Res2/lab_1_01)