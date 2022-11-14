cmake_minimum_required(VERSION 3.10)

# Remove when sharing with others.
list(APPEND CMAKE_PREFIX_PATH "C:/Projects/QtCreator/build-Qt_632_MSVC2019_64-Release")

project(Qtcplugin)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_CXX_STANDARD 17)

find_package(QtCreator REQUIRED COMPONENTS Core)
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
set(QtX Qt${QT_VERSION_MAJOR})

add_qtc_plugin(Qtcplugin
  PLUGIN_DEPENDS
    QtCreator::Core
  DEPENDS
    ${QtX}::Widgets
    QtCreator::ExtensionSystem
    QtCreator::Utils
  SOURCES
    .github/workflows/build_cmake.yml
    .github/workflows/README.md
    README.md
    qtcplugin.cpp
    qtcplugin.h
    qtcplugin_global.h
    qtcpluginconstants.h
)
