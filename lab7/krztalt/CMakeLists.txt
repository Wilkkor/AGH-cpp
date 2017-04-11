
project(krztalt)

set(HEDEAR_FILES Krztalt.h)
set(SOURCE_FILES Krztalt.cpp)

add_library(libkrztalt STATIC ${SOURCE_FILES})
target_include_directories(libkrztalt PUBLIC .)

add_executable(krztalt ${SOURCE_FILES} main.cpp)

target_link_libraries(krztalt libkrztalt)

