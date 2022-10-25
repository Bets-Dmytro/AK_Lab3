cmake_minimum_required(VERSION 3.22.1)

project(AK_Lab3)

add_library(
	AK3_Lib STATIC
	lab.c
	Calculator.c
	Calculator.h
)

add_executable(
	AK_Lab3
	lab.c
	Calculator.c
)

target_link_libraries(AK_Lab3 PRIVATE AK3_Lib)
