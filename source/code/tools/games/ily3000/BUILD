package(
    default_visibility = ["//visibility:public"],
)

cc_binary(
   name = "ily",
   srcs = ["ily.cpp"],
   deps = [
    "//code/utilities/peripheral/keyboard/joycons:joycon_horizontal_state",
    "//code/utilities/formats/json/functions:lib",
    "//code/utilities/peripheral/keyboard/joycons:joycons",
    "//code/utilities/peripheral/keyboard/joycons:joycon_state_getter",
    "//code/tools/games/ily3000/assets:assets_loader",
    "//code/tools/games/ily3000/state:game_state",
    "//code/tools/games/ily3000/core:frame_renderer",
    "//code/tools/games/ily3000/core:state_updater",
    "//code/tools/games/ily3000/state:game_state_getter",
    "//code/utilities/graphics/sfml:game_loop",
    "//code/utilities/graphics/sfml:standard_sfml_game_loop",
    "@sfml//:sfml","@opengl//:opengl","@glfw//:glfw","@SDL2//:SDL2",],
   linkopts = ["-lX11", "-lGL", "-lXrandr","-ludev"],
)
