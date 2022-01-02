add_library(Day5 day5.cc) 
target_include_directories(Day5 PUBLIC 
	"${CMAKE_CURRENT_SOURCE_DIR}"
	"${CMAKE_CURRENT_SOURCE_DIR}/../solution"
	"${CMAKE_CURRENT_SOURCE_DIR}/../utils"
)
