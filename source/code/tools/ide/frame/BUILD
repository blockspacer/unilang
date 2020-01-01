package(default_visibility = ["//visibility:public"])
load("//bazel/cookbook/hcp:main.bzl", "hcp")
load("//bazel/cookbook/cpp:object.bzl", "cpp_object")
load("//bazel/cookbook/enum_cpp:enum_cpp.bzl", "enum_cpp")

enum_cpp(
    name = "text_box_action",
    values = [
    "navigate_forward",
    "navigate_backward",
    "select_forward",
    "select_backward",
    "add_chars",
    "backspace",
    "select_all",
    "copy",
    "paste",
    "delete",
    "none",
    ]
)

hcp(
    name = "frame_renderer",
    deps = ["@imgui//:imgui_sdl_opengl3",
        "//code/ide/settings:ide_settings",
        "//code/utilities/graphics/imgui/ui:ui_renders",
        "//code/utilities/graphics/imgui/ui/window:window_renderer",
        "//code/utilities/graphics/imgui/ui/window:window_position_finder",
        "//code/utilities/graphics/imgui/ui/draw/label/functions:label_drawer",
        "//code/utilities/graphics/imgui/ui/draw:imgui_type_utility",
        "//code/ide/frame:fullscreener",
        "//code/utilities/graphics/imgui:mechanics",
        "//code/ide/frame:mouse_selection_drawer",
        "//code/utilities/keyboard:key_detector",
        "//code/ide/frame:label_cursor_action_doer",
        "//code/utilities/graphics/imgui/ui/draw/line:line_drawer",
        "//code/utilities/mouse/state:mouse_position_getter",
        "//code/utilities/graphics/imgui/ui/draw/bitmap/multi_color_bitmap:multi_color_bitmap_drawer",
        "//code/ide/frame/logic:frame_elements",
        "//code/utilities/types/variant:lib",
        "//code/utilities/graphics/imgui/ui/draw/bitmap/multi_color_bitmap:positioned_multi_color_bitmap",
        "//code/utilities/graphics/imgui/ui/draw/bitmap/full_color_bitmap:positioned_full_color_bitmap",
    ],
)

hcp(
    name = "mouse_frame_getter",
    deps = [
        "//code/utilities/mouse/state:mouse_state",
        "//code/ide/settings:ide_settings",
        "//code/ide/frame/logic:frame_elements",
        "//code/ide/frame:mouse_selection_drawer",
        "//code/utilities/mouse/state:mouse_position_getter",
        "//code/utilities/graphics/imgui/ui/draw/mouse_events:mouse_events_checker",
        "//code/utilities/graphics/imgui/ui/window:window_position_finder",
        "//code/utilities/graphics/imgui/ui/draw/label/functions:label_drawer",
        "//code/ide/frame:label_cursor_action_doer",
        "//code/utilities/types/vectors/operators:lib",
    ],
)

hcp(
    name = "label_frame_getter",
    deps = [
        "//code/utilities/mouse/state:mouse_state",
        "//code/ide/settings:ide_settings",
        "//code/ide/frame/logic:frame_elements",
        "//code/ide/frame:mouse_selection_drawer",
        "//code/utilities/mouse/state:mouse_position_getter",
        "//code/utilities/graphics/imgui/ui/draw/mouse_events:mouse_events_checker",
        "//code/utilities/graphics/imgui/ui/window:window_position_finder",
        "//code/utilities/graphics/imgui/ui/draw/label/functions:label_drawer",
        "//code/ide/frame:label_cursor_action_doer",
        "//code/utilities/types/vectors/operators:lib",
        "//code/ide/frame:mouse_frame_getter",
    ],
)


hcp(name = "fullscreener", deps = [
    "@imgui//:imgui_sdl_opengl3",
    "//code/ide/settings:ide_settings",
    "//code/utilities/graphics/imgui:mechanics",
    "//code/utilities/keyboard:key_detector",
])

hcp(name = "mouse_selection_drawer", deps = [
    "@imgui//:imgui_sdl_opengl3",
    "//code/ide/settings:ide_settings",
    "//code/utilities/graphics/imgui:mechanics",
    "//code/ide/frame/logic:frame_elements",
    "//code/utilities/mouse/state:mouse_state_getter",
    "//code/utilities/mouse/state:mouse_state",
])

hcp(name = "view_anchor_adjuster", deps = [
    "@imgui//:imgui_sdl_opengl3",
    "//code/ide/settings:ide_settings",
    "//code/utilities/graphics/imgui:mechanics",
    "//code/ide/frame/logic:frame_elements",
    "//code/utilities/mouse/state:mouse_state_getter",
    "//code/utilities/mouse/state:mouse_state",
])

hcp(name = "label_cursor_action_doer", deps = [
    "@imgui//:imgui_sdl_opengl3",
    "//code/ide/settings:ide_settings",
    "//code/utilities/graphics/imgui:mechanics",
    "//code/utilities/graphics/imgui/ui:ui_renders",
    "//code/utilities/graphics/imgui/ui/window:window_renderer",
    "//code/utilities/graphics/imgui/ui/window:window_position_finder",
    "//code/utilities/keyboard:key_detector",
    "//code/utilities/graphics/imgui/ui/draw/label/functions:label_drawer",
    "//code/ide/frame:text_box_action_decider",
    "//code/utilities/graphics/imgui/ui/draw/label/cursor:label_cursor_mover",
    "//code/utilities/graphics/imgui/ui/draw/label:positioned_label",
])

hcp(name = "text_box_action_decider", deps = [
    "@imgui//:imgui_sdl_opengl3",
    "//code/ide/settings:ide_settings",
    "//code/utilities/graphics/imgui:mechanics",
    "//code/ide/frame:text_box_action",
    "//code/utilities/keyboard:key_detector",
])