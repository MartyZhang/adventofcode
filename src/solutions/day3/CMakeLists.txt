add_library(Day3 day3.cc) 
target_include_directories(Day3 PUBLIC 
	"${CMAKE_CURRENT_SOURCE_DIR}"
	"${CMAKE_CURRENT_SOURCE_DIR}/../solution"
)
