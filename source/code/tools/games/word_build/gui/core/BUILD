package(default_visibility = ["//visibility:public"])
load("//bazel/cookbook/hcp:main.bzl", "hcp")

hcp(name = "frame_renderer", deps = [
    "@sfml//:sfml",
    "//code/utilities/peripheral/keyboard/joycons:joycon_horizontal_state",
    "//code/utilities/formats/json/functions:lib",
    "//code/utilities/peripheral/keyboard/joycons:joycons",
    "//code/utilities/peripheral/keyboard/joycons:joycon_state_getter",
    "//code/tools/games/word_build/gui/assets:assets_loader",
    "//code/tools/games/word_build/gui/state:game_state",
])

hcp(name = "state_updater", deps = [
    "@sfml//:sfml",
    "//code/utilities/peripheral/keyboard/joycons:joycon_horizontal_state",
    "//code/utilities/formats/json/functions:lib",
    "//code/utilities/peripheral/keyboard/joycons:joycons",
    "//code/utilities/peripheral/keyboard/joycons:joycon_state_getter",
    "//code/tools/games/word_build/gui/assets:assets_loader",
    "//code/tools/games/word_build/gui/state:game_state",
    "//code/utilities/peripheral/keyboard/joycons:joystick_rotating_checker",
    "//code/utilities/math:math",
    "//code/utilities/peripheral/keyboard/F310_gamepad/functions:f310_gamepads_state_getter",
    "//code/utilities/linguistics/build_word/game:puzzle_builder",
    "//code/utilities/types/vectors/observers:lib",
    "//code/utilities/types/strings/observers/converting:lib",
    "//code/utilities/types/vectors/transformers:lib",
    "//code/utilities/types/map:lib",
    "//code/utilities/types/vectors/observers:size_frequency_counter",
    "//code/utilities/linguistics/speak:word_speaker",
    "//code/utilities/types/strings/sfml:sfml_text",
    "//code/tools/games/word_build/gui/core:start_game_phase",
    "//code/tools/games/word_build/gui/core:game_over_phase",
    "//code/tools/games/word_build/gui/core:title_game_phase",
    "//code/tools/games/word_build/gui/core:regular_game_phase",
    "//code/utilities/colors:converters",
    "//code/utilities/colors:color_transitioner",
    "//code/utilities/peripheral/keyboard/F310_gamepad/functions:f310_event_synthesizer",
])

hcp(name = "start_game_phase", deps = [
    "@sfml//:sfml",
    "//code/tools/games/word_build/gui/assets:assets",
    "//code/tools/games/word_build/gui/state:game_state",
    "//code/utilities/math:math",
    "//code/utilities/types/vectors/observers:lib",
    "//code/utilities/linguistics/build_word/game:puzzle_builder",
    "//code/utilities/peripheral/keyboard/F310_gamepad/data:f310_events",
])

hcp(name = "game_over_phase", deps = [
    "@sfml//:sfml",
    "//code/tools/games/word_build/gui/assets:assets",
    "//code/tools/games/word_build/gui/state:game_state",
    "//code/utilities/math:math",
    "//code/utilities/types/vectors/observers:lib",
    "//code/utilities/types/strings/sfml:sfml_text",
    "//code/utilities/peripheral/keyboard/F310_gamepad/data:f310_events",
])

hcp(name = "title_game_phase", deps = [
    "@sfml//:sfml",
    "//code/tools/games/word_build/gui/assets:assets",
    "//code/tools/games/word_build/gui/state:game_state",
    "//code/utilities/math:math",
    "//code/utilities/types/vectors/observers:lib",
    "//code/utilities/types/strings/sfml:sfml_text",
    "//code/utilities/types/vectors/transformers:lib",
    "//code/utilities/random:lib",
    "//code/utilities/colors:screen_position_to_rgb",
    "//code/utilities/colors:converters",
    "//code/utilities/types/char:lib",
    "//code/utilities/peripheral/keyboard/F310_gamepad/data:f310_events",
])

hcp(name = "regular_game_phase", deps = [
    "@sfml//:sfml",
    "//code/tools/games/word_build/gui/assets:assets",
    "//code/utilities/peripheral/keyboard/joycons:joycon_state_getter",
    "//code/utilities/peripheral/keyboard/F310_gamepad/functions:f310_gamepads_state_getter",
    "//code/utilities/formats/json/functions:lib",
    "//code/tools/games/word_build/gui/assets:assets_loader",
    "//code/tools/games/word_build/gui/state:game_state",
    "//code/utilities/math:math",
    "//code/utilities/types/vectors/observers:lib",
    "//code/utilities/peripheral/keyboard/joycons:joystick_rotating_checker",
    "//code/utilities/linguistics/build_word/game:puzzle_builder",
    "//code/utilities/types/vectors/transformers:lib",
    "//code/utilities/types/strings/observers/converting:lib",
    "//code/utilities/types/map:lib",
    "//code/utilities/types/vectors/observers:size_frequency_counter",
    "//code/utilities/linguistics/speak:word_speaker",
    "//code/utilities/colors:converters",
    "//code/utilities/colors:color_transitioner",
    "//code/utilities/peripheral/keyboard/F310_gamepad/data:f310_events",
])