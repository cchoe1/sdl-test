project(Lesson1)
add_executable(Lesson1 src/main.cpp src/lib/graph.cpp src/lib/point.cpp src/lib/context.cpp)
target_link_libraries(Lesson1 ${SDL2_LIBRARY})
install(TARGETS Lesson1 RUNTIME DESTINATION ${BIN_DIR})
