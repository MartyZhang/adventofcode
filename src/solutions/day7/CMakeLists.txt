add_library(Day7 day7.cc) 
target_include_directories(Day7 PUBLIC 
	"${CMAKE_CURRENT_SOURCE_DIR}"
	"${CMAKE_CURRENT_SOURCE_DIR}/../solution"
	"${CMAKE_CURRENT_SOURCE_DIR}/../utils"
)
