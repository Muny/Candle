cmake_minimum_required(VERSION 3.20)

project(CandleProject)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set_property(GLOBAL PROPERTY CXX_STANDARD 11)
set_property(GLOBAL PROPERTY INTERPROCEDURAL_OPTIMIZATION TRUE)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
set(VQt Qt${QT_VERSION_MAJOR})

function(vqt_find_package)
  find_package(${VQt} ${ARGV})
endfunction()

function(vqt_add_resources)
  if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt6_add_resources(${ARGV})
  else()
    qt5_add_resources(${ARGV})
  endif()
endfunction()

function(vqt_add_translation)
  if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_translation(${ARGV})
  else()
    qt5_add_translation(${ARGV})
  endif()
endfunction()

add_definitions(
#    -DQT_MESSAGELOGCONTEXT# qDebug()
#    -DQT_DISABLE_DEPRECATED_BEFORE=0x060000
)

set(OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin_${CMAKE_BUILD_TYPE})

if (CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
elseif (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    #    add_compile_options(
    #        -Winvalid-pch
    ##        -fmodules-ts
    #    )
    # set(CMAKE_EXPERIMENTAL_CXX_MODULE_MAP_FORMAT "gcc")
    # set(CMAKE_EXPERIMENTAL_CXX_MODULE_MAP_FLAG "${compiler_flags_for_module_map} -fmodule-mapper=<MODULE_MAP_FILE>")
    # target_compile_options(example PRIVATE -fmodules-ts)
    # add_compile_options(-H)
    # add_compile_options(-ftime-report)
    # -pthread
    # -ltbbD
elseif (CMAKE_CXX_COMPILER_ID STREQUAL "Intel")
elseif (CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
    add_definitions(-D_USE_MATH_DEFINES)
endif()

include_directories(designerplugins/customwidgetsplugin)

add_subdirectory(candle)
add_subdirectory(designerplugins)
add_subdirectory(candleplugins)
add_subdirectory(scriptbindings)
