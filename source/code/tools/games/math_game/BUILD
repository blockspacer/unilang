package(
    default_visibility = ["//visibility:public"],
)

cc_binary(
   name = "math_game",
   srcs = ["math_game.cpp"],
   deps = [
    "//code/utilities/peripheral/keyboard/joycons:joycon_horizontal_state",
    "//code/utilities/formats/json/functions:lib",
    "//code/utilities/peripheral/keyboard/joycons:joycons",
    "//code/utilities/peripheral/keyboard/joycons:joycon_state_getter",
    "//code/tools/games/math_game/assets:assets_loader",
    "//code/tools/games/math_game/state:game_state",
    "//code/tools/games/math_game/core:frame_renderer",
    "//code/tools/games/math_game/core:state_updater",
    "//code/tools/games/math_game/state:game_state_getter",
    "//code/utilities/graphics/sfml:game_loop",
    "//code/utilities/graphics/sfml:standard_sfml_game_loop",
    "@sfml//:sfml","@opengl//:opengl","@glfw//:glfw","@SDL2//:SDL2",],
   linkopts = ["-lX11", "-lGL", "-lXrandr","-ludev"],
)
