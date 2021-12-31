add_library(Day4 day4.cc) 
target_include_directories(Day4 PUBLIC 
	"${CMAKE_CURRENT_SOURCE_DIR}"
	"${CMAKE_CURRENT_SOURCE_DIR}/../solution"
)

