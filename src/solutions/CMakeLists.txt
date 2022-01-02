add_subdirectory(day1)
add_subdirectory(day2)
add_subdirectory(day3)
add_subdirectory(day4)
add_subdirectory(day5)
add_subdirectory(solution)
add_subdirectory(utils)
add_library(SolutionFactory solution_factory.cc)
target_link_libraries(SolutionFactory PUBLIC 
	Solution 
	Day1 
	Day2 
	Day3 
	Day4
	Day5
	Utils
)
target_include_directories(SolutionFactory PUBLIC 
	"${CMAKE_CURRENT_SOURCE_DIR}"
	"${CMAKE_CURRENT_SOURCE_DIR}/solution"
	"${CMAKE_CURRENT_SOURCE_DIR}/day1"
	"${CMAKE_CURRENT_SOURCE_DIR}/day2"
	"${CMAKE_CURRENT_SOURCE_DIR}/day3"
	"${CMAKE_CURRENT_SOURCE_DIR}/day4"
	"${CMAKE_CURRENT_SOURCE_DIR}/day5"
)
