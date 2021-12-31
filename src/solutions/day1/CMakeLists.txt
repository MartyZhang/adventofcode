add_library(Day1 day1.cc) 
target_include_directories(Day1 PUBLIC 
	"${CMAKE_CURRENT_SOURCE_DIR}"
	"${CMAKE_CURRENT_SOURCE_DIR}/../solution"
)
