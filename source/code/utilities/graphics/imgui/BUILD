package(default_visibility = ["//visibility:public"])
load("//bazel/cookbook/hcp:main.bzl", "hcp")
load("//bazel/cookbook/cpp:object.bzl", "cpp_object")
load("//bazel/cookbook/enum_cpp:enum_cpp.bzl", "enum_cpp")

hcp(name="mechanics",deps = [
    "//code/utilities/graphics/imgui/sdl:sdl_init_settings",
    "//code/utilities/filesystem/paths:lib",
    "//code/utilities/graphics/sfml:game_loop",
    "@imgui//:imgui_sdl_opengl3"
])