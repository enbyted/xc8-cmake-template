set(SOURCES
    src/hal.c
)

add_library(hal ${SOURCES})
target_include_directories(hal PUBLIC include-public/)
