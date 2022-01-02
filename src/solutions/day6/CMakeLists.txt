add_library(Day6 day6.cc) 
target_include_directories(Day6 PUBLIC 
	"${CMAKE_CURRENT_SOURCE_DIR}"
	"${CMAKE_CURRENT_SOURCE_DIR}/../solution"
	"${CMAKE_CURRENT_SOURCE_DIR}/../utils"
)
