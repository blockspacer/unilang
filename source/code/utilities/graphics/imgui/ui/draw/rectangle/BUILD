package(default_visibility = ["//visibility:public"])
load("//bazel/cookbook/hcp:main.bzl", "hcp")
load("//bazel/cookbook/cpp:object.bzl", "cpp_object")

hcp(name="rectangle_drawer", deps = [
"//code/utilities/data_structures/shapes/rectangle:rectangle_settings",
"//code/utilities/graphics/imgui/ui/draw/mouse_events:mouse_events",
"//code/utilities/graphics/imgui/ui/draw/mouse_events:mouse_events_checker",
"//code/utilities/graphics/imgui/ui/draw:imgui_type_utility",
"//code/utilities/data_structures/position:position",
"//code/utilities/graphics/imgui:mechanics",
"//code/utilities/data_structures/shapes/rectangle:positioned_rectangle_settings",
"//code/utilities/data_structures/shapes/rectangle:shade_rectangle_settings",
"//code/utilities/graphics/imgui/ui/draw/bitmap/multi_color_bitmap:multi_color_bitmap",
"//code/utilities/colors:color_transitioner",
"//code/utilities/graphics/imgui/ui/draw/bitmap/multi_color_bitmap:multi_color_bitmap_drawer",
])