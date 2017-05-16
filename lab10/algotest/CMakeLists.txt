
project(agoritms)

set(HEDEAR_FILES Algo.h)
set(SOURCE_FILES Algo.cpp)

add_library(libagoritms STATIC ${SOURCE_FILES})
target_include_directories(libagoritms PUBLIC .)

add_executable(agoritms ${SOURCE_FILES} main.cpp)

target_link_libraries(agoritms libagoritms)

