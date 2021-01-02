project(unity)

add_library(unity STATIC src/unity.c src/unity.h src/unity_internals.h)
target_include_directories(unity PUBLIC src)
