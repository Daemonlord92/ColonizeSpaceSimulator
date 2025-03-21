cmake_minimum_required(VERSION 3.30)
project(ColonizeSpaceSimulator)

set(VCPKG_ROOT "C:/Users/Legio/.vcpkg-clion/vcpkg" CACHE STRING "Vcpkg root directory")
set(CMAKE_TOOLCHAIN_FILE "${VCPKG_ROOT}/scripts/buildsystems/vcpkg.cmake" CACHE STRING "Vcpkg toolchain file")

set(CMAKE_CXX_STANDARD 26)

# Add wxWidgets preprocessor definitions
add_definitions(-DWXUSINGDLL -D__WXMSW__)


add_executable(ColonizeSpaceSimulator main.cpp
        entities/Human.cpp
        entities/Human.h
        entities/Planet.cpp
        entities/Planet.h
        entities/StarSystem.cpp
        entities/StarSystem.h
        helpers/HumanHelper.cpp
        helpers/HumanHelper.h
        entities/Food.cpp
        entities/Food.h
        simulation/HumanRunner.cpp
        simulation/HumanRunner.h
        simulation/PlanetRunner.cpp
        simulation/PlanetRunner.h
        simulation/FoodRunner.cpp
        simulation/FoodRunner.h
        ui/Gui.cpp
        ui/Gui.h
        entities/StarSystemGrid.cpp
        entities/StarSystemGrid.h
        entities/StarStation.cpp
        entities/StarStation.h
        entities/Ship.cpp
        entities/Ship.h
        entities/Moon.cpp
        entities/Moon.h
        entities/Asteroid.cpp
        entities/Asteroid.h
        entities/Comet.cpp
        entities/Comet.h)

# Find and link wxWidgets using the modern CONFIG approach
find_package(wxWidgets CONFIG REQUIRED)
target_link_libraries(ColonizeSpaceSimulator PRIVATE wx::core wx::base wx::adv wx::aui wx::html wx::net wx::gl)

