set(SOURCES
    src/main.c
)

add_executable(app ${SOURCES})
target_include_directories(app PRIVATE include/)
