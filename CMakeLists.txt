cmake_minimum_required(VERSION 2.8)
project(gamebot)
set (SOURCES_LIST CArmy.cpp CBattlefield.cpp CBeast.cpp CGame.cpp CHuman.cpp CLeader.cpp CLizard.cpp CRaceFactory.cpp CUnit.cpp CVarriors.cpp CArmy.h CBattlefield.h CBeast.h CGame.h CHuman.h CLeader.h CLizard.h CRaceFactory.h CUnit.h CVarriors.h CFactory.h IObject.h IPrinter.h)

if (DEBUG)
	set(CMAKE_BUILD_TYPE Debug)
endif()

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall")
include_directories(.)

if (WITH_TEST)
	find_package(GTest REQUIRED)
	add_executable(gamebot ${SOURCES_LIST} Test.cpp)
	target_include_directories(gamebot PUBLIC "./include")
	target_link_libraries(gamebot PUBLIC GTest::GTest GTest::Main)
else()
	add_executable(gamebot ${SOURCES_LIST} Mygame.cpp)
endif()
