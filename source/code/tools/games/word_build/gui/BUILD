package(default_visibility = ["//visibility:public"])
load("//bazel/cookbook/enum_cpp:enum_cpp.bzl", "enum_cpp")

cc_binary(
   name = "main",
   srcs = ["main.cpp"],
   deps = [
    "//code/utilities/peripheral/keyboard/joycons:joycon_horizontal_state",
    "//code/utilities/formats/json/functions:lib",
    "//code/utilities/peripheral/keyboard/joycons:joycons",
    "//code/utilities/peripheral/keyboard/joycons:joycon_state_getter",
    "//code/tools/games/word_build/gui/assets:assets_loader",
    "//code/tools/games/word_build/gui/state:game_state",
    "//code/tools/games/word_build/gui/core:frame_renderer",
    "//code/tools/games/word_build/gui/core:state_updater",
    "//code/tools/games/word_build/gui/state:game_state_getter",
    "//code/utilities/graphics/sfml:game_loop",
    "//code/utilities/graphics/sfml:standard_sfml_game_loop",
    "@sfml//:sfml","@opengl//:opengl","@glfw//:glfw","@SDL2//:SDL2",],
   linkopts = ["-lX11", "-lGL", "-lXrandr","-ludev"],
)


enum_cpp(name = "game_phase",
values = [
"main_menu"
,"starting_game"
,"playing_game"
,"end_game"
])
