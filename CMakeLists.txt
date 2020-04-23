cmake_minimum_required(VERSION 3.15)

# set(CMAKE_CXX_STANDARD 17)

project(Launch)

set(sofa_library /Users/alihasan/Documents/GSOC/sofa/20190722/c/src)

add_library(sofa SHARED IMPORTED GLOBAL)
set_property(TARGET sofa PROPERTY IMPORTED_LOCATION ${sofa_library}/libsofa_c.a)
target_include_directories(sofa BEFORE INTERFACE ${sofa_library})

add_executable(Launch main.cpp)
target_link_libraries(Launch PRIVATE sofa)

find_package(Boost 1.36.0)
if(Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})
    set(astronomy_library /Users/alihasan/Documents/GSOC/astronomy)
    include_directories(${astronomy_library}/include)
    add_executable( Executable main.cpp )
    TARGET_LINK_LIBRARIES( Executable LINK_PUBLIC ${Boost_LIBRARIES} )
endif()