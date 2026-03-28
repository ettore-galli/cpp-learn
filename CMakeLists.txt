cmake_minimum_required(VERSION 3.16)
project(cpp_learn LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Output in una cartella dedicata (utile per CI e test)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Per ora un solo target eseguibile
add_subdirectory(src)

# tests/ lo aggiungeremo dopo
# enable_testing()
# add_subdirectory(tests)