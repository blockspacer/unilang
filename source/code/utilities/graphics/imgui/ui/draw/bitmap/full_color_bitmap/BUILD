package(default_visibility = ["//visibility:public"])
load("//bazel/cookbook/hcp:main.bzl", "hcp")
load("//bazel/cookbook/cpp:object.bzl", "cpp_object")

hcp(name="full_color_bitmap", deps = [
"//code/utilities/data_structures/color:transparent_rgb_color",
"//code/utilities/data_structures/position:position",
])

hcp(name="positioned_full_color_bitmap", deps = [
"//code/utilities/graphics/imgui/ui/draw/bitmap/full_color_bitmap:full_color_bitmap",
"//code/utilities/data_structures/position:position",
])

hcp(name="full_color_bitmap_drawer", deps = [
"//code/utilities/graphics/imgui/ui/draw/bitmap/full_color_bitmap:full_color_bitmap",
"//code/utilities/graphics/imgui/ui/draw/bitmap/full_color_bitmap:positioned_full_color_bitmap",
"//code/utilities/graphics/imgui/ui/draw/bitmap/pixel:pixel_settings",
"//code/utilities/graphics/imgui/ui/draw/bitmap/pixel:pixel_drawer",
"//code/utilities/graphics/imgui/ui/draw/mouse_events:mouse_events",
"//code/utilities/graphics/imgui/ui/draw/mouse_events:mouse_events_checker",
"//code/utilities/graphics/imgui/ui/draw:imgui_type_utility",
"//code/utilities/data_structures/position:position",
"//code/utilities/graphics/imgui:mechanics",
])