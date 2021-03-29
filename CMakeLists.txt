cmake_minimum_required(VERSION 3.17)
project(fantasyFighter)

set(CMAKE_CXX_STANDARD 14)

add_executable(fantasyFighter main.cpp Character.h Character.cpp Weapons.h Weapons.cpp EnemyPlayer.h EnemyPlayer.cpp UserPlayer.h UserPlayer.cpp Gun.h Gun.cpp Sword.h Sword.cpp Store.h Store.cpp)