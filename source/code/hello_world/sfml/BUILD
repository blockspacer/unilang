package(
    default_visibility = ["//visibility:public"],
)


# Controller Implementations
cc_binary(
   name = "joycons",
   srcs = ["joycons.cpp"],
   deps = [
    "//code/utilities/peripheral/keyboard/joycons:joycon_horizontal_state",
    "//code/utilities/formats/json/functions:lib",
    "//code/utilities/peripheral/keyboard/joycons:joycons",
    "//code/utilities/peripheral/keyboard/joycons:joycon_state_getter",
    "@sfml//:sfml","@opengl//:opengl","@glfw//:glfw","@SDL2//:SDL2",],
   linkopts = ["-lX11", "-lGL", "-lXrandr","-ludev"],
)

cc_binary(
   name = "f310_gamepads",
   srcs = ["f310_gamepads.cpp"],
   deps = [
    "//code/utilities/formats/json/functions:lib",
    "//code/utilities/peripheral/keyboard/F310_gamepad/functions:f310_gamepads_state_getter",
    "@sfml//:sfml","@opengl//:opengl","@glfw//:glfw","@SDL2//:SDL2",],
   linkopts = ["-lX11", "-lGL", "-lXrandr","-ludev"],
)

# SFML generic
cc_binary(
   name = "joystick",
   srcs = ["joystick.cpp"],
   deps = ["@sfml//:sfml","@opengl//:opengl","@glfw//:glfw","@SDL2//:SDL2",],
   linkopts = ["-lX11", "-lGL", "-lXrandr","-ludev"],
)

cc_binary(
   name = "main",
   srcs = ["main.cpp"],
   deps = ["@sfml//:sfml","@opengl//:opengl","@glfw//:glfw","@SDL2//:SDL2",],
   linkopts = ["-lX11", "-lGL", "-lXrandr","-ludev"],
)