package(default_visibility = ["//visibility:public"])
load("//bazel/cookbook/hcp:main.bzl", "hcp")
load("//bazel/cookbook/enum_cpp:enum_cpp.bzl", "enum_cpp")

hcp(name = "game_state", deps = [
    "//code/utilities/peripheral/keyboard/joycons:joycons",
    "//code/utilities/data_structures/color:rgb_color",
    "@sfml//:sfml",
])

hcp(name = "game_state_getter", deps = [
    "//code/utilities/peripheral/keyboard/joycons:joycons",
    "//code/tools/games/ily3000/state:game_state",
])
