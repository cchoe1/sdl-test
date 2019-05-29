project(proj)
add_executable(proj src/main.cpp src/lib/graph.cpp src/lib/point.cpp src/lib/context.cpp src/lib/application.cpp src/lib/panel.cpp)
target_link_libraries(proj ${SDL2_LIBRARY})
install(TARGETS proj RUNTIME DESTINATION ${BIN_DIR})
