cmake_minimum_required(VERSION 3.5)

project(Multi_Tool VERSION 0.1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

set(PROJECT_SOURCES
        source_files/main.cpp
        source_files/mainwindow.cpp
        header_files/mainwindow.h
        source_files/mainwindow.ui
        header_files/calc.h
        source_files/calc.cpp
        source_files/calc.ui
        source_files/notebook.ui
        source_files/notebook.cpp
        header_files/notebook.h
        header_files/savepopup.h
        source_files/savepopup.ui
        source_files/savepopup.cpp
        header_files/equation.h
        source_files/equation.cpp
        header_files/noteSelector.h
        source_files/noteSelector.cpp
        header_files/dataCard.h
        source_files/dataCard.cpp
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(Multi_Tool
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
            "C:/Coding_Projects/C++/Qt/Multi_Tool/pugiXML/pugixml.cpp"
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET Multi_Tool APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(Multi_Tool SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(Multi_Tool
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(Multi_Tool PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

target_include_directories(Multi_Tool PUBLIC
        "${PROJECT_BINARY_DIR}/pugiXML"
)

target_link_directories(Multi_Tool PUBLIC
        "${PROJECT_BINARY_DIR}/pugiXML"
)

set_target_properties(Multi_Tool PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

install(TARGETS Multi_Tool
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
        RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(Multi_Tool)
endif()
