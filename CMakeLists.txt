project( smaz )
cmake_minimum_required( VERSION 3.13.0 )

add_library( smaz
             ${CMAKE_CURRENT_SOURCE_DIR}/smaz.c
             ${CMAKE_CURRENT_SOURCE_DIR}/smaz.h )

target_include_directories( smaz
                         PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")
