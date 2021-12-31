cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_EXPORT_COMPILE_COMMANDS "ON")

# set the project name
project(adventOfCode)

add_subdirectory(solutions)

# add the executable
add_executable(Advent main.cc)

target_include_directories(Advent PUBLIC 
	"${PROJECT_SOURCE_DIR}"
	"${PROJECT_SOURCE_DIR}/solutions"
)

target_link_libraries(Advent Solution SolutionFactory)

