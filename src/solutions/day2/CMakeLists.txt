add_library(Day2 day2.cc) 
target_include_directories(Day2 PUBLIC 
	"${CMAKE_CURRENT_SOURCE_DIR}"
	"${CMAKE_CURRENT_SOURCE_DIR}/../solution"
)
