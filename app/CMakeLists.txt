
cmake_minimum_required(VERSION 3.4.1)

set(libs "${CMAKE_SOURCE_DIR}/src/main/jniLibs")

include_directories(${CMAKE_SOURCE_DIR}/src/main/cpp/include)


add_library(libopencv_java3 SHARED IMPORTED )
set_target_properties(libopencv_java3 PROPERTIES
    IMPORTED_LOCATION "${libs}/${ANDROID_ABI}/libopencv_java3.so")


add_library( # Sets the name of the library.
             native-lib

             # Sets the library as a shared library.
             SHARED

             # Provides a relative path to your source file(s).
             src/main/cpp/native-lib.cpp )


find_library(
              log-lib

              log )


target_link_libraries(
                       native-lib
                        android -ljnigraphics
                       ${log-lib} )