CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

SET(CMAKE_CXX_STANDARD 11)

set(JSON_BuildTests OFF CACHE INTERNAL "")

ADD_SUBDIRECTORY(googletest)

add_subdirectory(json)

add_library(header
			header/fileManip.hpp
			src/filemanip.cpp
			tests/fileManipTests.hpp
			)

ADD_EXECUTABLE(test
			tests/test.cpp
			src/videogame.cpp
			src/filemanip.cpp
      src/collection.cpp
			)

ADD_EXECUTABLE(jsontest
			tests/jsontest.cpp
			src/filemanip.cpp
			)

target_link_libraries(header PRIVATE nlohmann_json::nlohmann_json)

TARGET_LINK_LIBRARIES(jsontest PRIVATE nlohmann_json::nlohmann_json)

TARGET_LINK_LIBRARIES(test PRIVATE nlohmann_json::nlohmann_json)

TARGET_LINK_LIBRARIES(test gtest)

TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)
