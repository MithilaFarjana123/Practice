cmake_minimum_required(VERSION 3.20)

project(MyCodingProject C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 20)

# Find all .cpp and .c files in the project root
file(GLOB SOURCES "*.cpp" "*.c")

# Create one independent executable for each source file
foreach(source_file ${SOURCES})

    # Get the filename
    get_filename_component(filename ${source_file} NAME)

    # Replace "." with "_" for the target name
    string(REPLACE "." "_" target_name ${filename})

    # Create an executable using ONLY the current source file
    add_executable(${target_name} ${source_file}


    )

endforeach()