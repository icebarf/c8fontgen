cmake_minimum_required(VERSION 3.25)
project(c8fontgen VERSION 0.0.1)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)


add_executable(c8fontgen)

target_include_directories(c8fontgen PUBLIC lib/raygui/src)

target_sources(c8fontgen 
                  PRIVATE src/Chip8FontGenerator.h
                  PRIVATE src/Chip8FontGenerator.c
                  PRIVATE src/lightc8.rgs.h
                  PRIVATE src/main.c
                  PRIVATE src/raygui_impl.c
              )
target_compile_options(c8fontgen PUBLIC -Wall -Wextra -Wpedantic -Wno-dollar-in-identifier-extension
                                      -Wshadow -Wconversion -O3
                                      )
target_link_options(c8fontgen PUBLIC -lraylib -lGL -lm -lpthread -ldl -lrt -lX11
                   )