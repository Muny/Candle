cmake_minimum_required(VERSION 3.13)
project(Candle)

# set(CMAKE_VERBOSE_MAKEFILE ON)

# instruct CMake to run moc automatically when needed
set(CMAKE_AUTOMOC ON)

# create code from a list of Qt designer ui files
set(CMAKE_AUTOUIC ON)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -W")

include (CheckCXXCompilerFlag)
check_cxx_compiler_flag("-msse3" HAVE_SSE3)
if (HAVE_SSE3)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -msse3")
endif()

include(GNUInstallDirs)

if(APPLE)
    add_compile_definitions(Q_OS_MAC)
endif()
add_compile_definitions(APP_VERSION="1.1.9")
add_compile_definitions(QT_NO_DEBUG)

set(DEFAULT_SETTINGS_LOCATION OFF CACHE BOOL "Store settings in user config dir")

if(${DEFAULT_SETTINGS_LOCATION})
add_compile_definitions(DEFAULT_SETTINGS_LOCATION)
endif()

find_package(Qt5 COMPONENTS Core Widgets OpenGL SerialPort LinguistTools REQUIRED)

include_directories(${PROJECT_SOURCE_DIR})

file(GLOB SRC_FILES ${PROJECT_SOURCE_DIR}/*.cpp
                    ${PROJECT_SOURCE_DIR}/drawers/*.cpp
                    ${PROJECT_SOURCE_DIR}/parser/*.cpp
                    ${PROJECT_SOURCE_DIR}/widgets/*.cpp
                    ${PROJECT_SOURCE_DIR}/tables/*.cpp
                    )

file(GLOB TRANSLATIONS ${PROJECT_SOURCE_DIR}/translations/*.ts)

qt5_add_resources(SHADER_RSC
    ${PROJECT_SOURCE_DIR}/shaders.qrc
    ${PROJECT_SOURCE_DIR}/images.qrc
    ${PROJECT_SOURCE_DIR}/fonts.qrc
    )

if(APPLE)
    set(APP_ICON_MACOSX ${PROJECT_SOURCE_DIR}/images/candle.icns)
    list(APPEND SRC_FILES ${APP_ICON_MACOSX})
    set_source_files_properties(${APP_ICON_MACOSX} PROPERTIES MACOSX_PACKAGE_LOCATION "Resources")

    add_executable(Candle MACOSX_BUNDLE ${SRC_FILES} ${SHADER_RSC})
    set_target_properties(Candle PROPERTIES MACOSX_BUNDLE_INFO_PLIST ${PROJECT_SOURCE_DIR}/Info.plist)

    set(LRELEASE_DIR ${CMAKE_CURRENT_BINARY_DIR}/Candle.app/Contents/MacOS/translations)
else()
    add_executable(Candle ${SRC_FILES} ${SHADER_RSC})

    set(LRELEASE_DIR ${CMAKE_CURRENT_BINARY_DIR}/translations)

    install(TARGETS Candle RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR})
    if (UNIX)
        install(FILES images/candle_256.png DESTINATION share/icons/hicolor/256x256/apps
                RENAME candle.png)
        install(FILES candle.desktop DESTINATION share/applications)
    endif()
endif()

set_source_files_properties(${TRANSLATIONS} PROPERTIES OUTPUT_LOCATION ${LRELEASE_DIR})
file(MAKE_DIRECTORY ${LRELEASE_DIR})

qt5_add_translation(QM_FILES ${TRANSLATIONS})
add_custom_target(translations ALL DEPENDS ${QM_FILES})

if(NOT APPLE)
    install(FILES ${QM_FILES} DESTINATION bin/translations)
endif()

target_link_libraries(Candle
    Qt5::Core
    Qt5::Widgets
    Qt5::OpenGL
    Qt5::Gui
    Qt5::SerialPort
    )
