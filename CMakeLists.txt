cmake_minimum_required(VERSION 2.8)
project(gamebot)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall")

if (WITH_TEST)
	include_directories(.)
	add_executable(gamebot Mygame.cpp Test.cpp)
else()
set(SOURCES_LIST Mygame.cpp CArmy.cpp CBattlefield.cpp CBeast.cpp CGame.cpp CHuman.cpp CLeader.cpp CLizard.cpp CRaceFactory.cpp CUnit.cpp CVarriors.cpp CArmy.h CBattlefield.h CBeast.h CGame.h CHuman.h CLeader.h CLizard.h CRaceFactory.h CUnit.h CVarriors.h)

add_executable(gamebot ${SOURCES_LIST})
endif()
