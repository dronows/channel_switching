# CMakeList.txt: проект CMake для channel_switching; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

project ("channel_switching")


set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

add_executable (channel_switching "channel_switching.cpp" "channel_switching.h" "main.cpp")
set(CMAKE_PREFIX_PATH "F:\\Qt\\5.12.12\\msvc2017_64\\lib\\cmake")
find_package( Qt5 COMPONENTS
    Core
    Gui
    Widgets
REQUIRED)

target_link_libraries(channel_switching
Qt5::Core
Qt5::Gui
Qt5::Widgets)

