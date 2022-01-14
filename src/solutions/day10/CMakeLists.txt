add_library(Day10 day10.cc) 
target_include_directories(Day10 PUBLIC 
	"${CMAKE_CURRENT_SOURCE_DIR}"
	"${CMAKE_CURRENT_SOURCE_DIR}/../solution"
	"${CMAKE_CURRENT_SOURCE_DIR}/../utils"
)
