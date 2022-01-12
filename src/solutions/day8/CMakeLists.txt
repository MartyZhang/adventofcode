add_library(Day8 day8.cc) 
target_include_directories(Day8 PUBLIC 
	"${CMAKE_CURRENT_SOURCE_DIR}"
	"${CMAKE_CURRENT_SOURCE_DIR}/../solution"
	"${CMAKE_CURRENT_SOURCE_DIR}/../utils"
)
