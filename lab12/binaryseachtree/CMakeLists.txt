
project(binaryseachtree)

set(HEDEAR_FILES BinarySeachTree.h)
set(SOURCE_FILES BinarySeachTree.cpp)

add_library(libbinaryseachtree STATIC ${SOURCE_FILES})
target_include_directories(libbinaryseachtree PUBLIC .)

add_executable(binaryseachtree ${SOURCE_FILES} main.cpp)

target_link_libraries(binaryseachtree libbinaryseachtree)

