cmake_minimum_required(VERSION 3.10)
set (CMAKE_CXX_STANDARD 11)
project(cdesk VERSION 1.0)

add_executable(cdesk
  src/main.cxx
  imgui/backends/imgui_impl_glfw.cpp
  imgui/backends/imgui_impl_opengl2.cpp
  imgui/imgui.cpp
  imgui/imgui_draw.cpp
  imgui/imgui_tables.cpp
  imgui/imgui_widgets.cpp
  imgui/imgui_demo.cpp
  implot/implot_demo.cpp
  implot/implot.cpp
  implot/implot_items.cpp
  src/TextEditor.cpp
)

target_link_libraries(cdesk "-framework OpenGL" "glfw")

target_link_directories(cdesk
  PUBLIC "/usr/local/opt/glfw/lib"
)

target_include_directories(cdesk
  PUBLIC "imgui"
  PUBLIC "implot"
  PUBLIC "/usr/local/opt/glfw/include"
  )
