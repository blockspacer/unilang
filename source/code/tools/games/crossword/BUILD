package(default_visibility = ["//visibility:public"])
load("//bazel/cookbook/hcp:main.bzl", "hcp")
load("//bazel/cookbook/cpp:object.bzl", "cpp_object")
load("//bazel/cookbook/cpp:distributable_main.bzl", "distributable_cpp_main")
load("//bazel/cookbook/data:package_binaries.bzl", "package_binaries")
load("//bazel/cookbook/data:distributable_data.bzl", "distributable_data")
load("//bazel/cookbook/cpp:main.bzl", "cpp_main")


#build main and deploy stuff
cc_binary(
    name = "crossword",
    srcs = ["crossword.cpp"],
    deps = [
        "//code/tools/games/crossword:crossword_maker"
    ]
)

hcp(name = "crossword_maker", deps = [
    "//code/utilities/types/vectors/creators:lib",
    "//code/utilities/output/printers:lib",
    "//code/utilities/types/vectors/observers:lib",
    "//code/utilities/random:lib",
    "//code/utilities/data_structures:compass_direction",
    "//code/utilities/data_structures/point:point",
    "//code/utilities/data_structures:compass_direction_diagnonal",
    "//code/utilities/filesystem/files/creating:lib",
    "//code/utilities/types/strings/transformers/appending:lib",
    "//code/tools/games/crossword/settings:crossword_puzzle_settings",
    "//code/utilities/data_structures/point:directional_point",
    "//code/tools/games/crossword:html_exporter",
    "//code/utilities/types/strings/transformers/removing:lib",
    "//code/tools/games/crossword:crossword_words",
    "//code/utilities/data_structures/point:point_mover",
    "//code/utilities/types/vectors/transformers:lib",
    "//code/utilities/types/strings/transformers/casing:lib",
    "//code/utilities/language_basic/std_hackery:std_aliases",
    "//code/tools/games/crossword/settings:crossword_puzzle_settings_getter",
    "//code/tools/games/crossword:random_word_placer",
    "//code/utilities/types/strings/transformers/casing:letter_case_setter",
    "//code/utilities/types/string_grid:random_letter_filler",
    "//code/utilities/types/string_grid:words_finder",
])

hcp(name = "random_word_placer", deps = [
    "//code/utilities/data_structures/point:point_mover",
    "//code/tools/games/crossword/settings:crossword_puzzle_settings",
    "//code/utilities/data_structures/point:directional_point",
    "//code/utilities/language_basic/std_hackery:std_aliases",
    "//code/tools/games/crossword/settings:crossword_puzzle_settings_getter",
    "//code/utilities/types/strings/transformers/casing:lib",
    "//code/utilities/types/vectors/creators:lib",
    "//code/utilities/types/vectors/observers:lib",
    "//code/utilities/types/strings/transformers/removing:lib",
    "//code/utilities/types/vectors/transformers:lib",
    "//code/utilities/output/printers:lib",
    "//code/utilities/random:lib",
    "//code/utilities/filesystem/files/creating:lib",
    "//code/utilities/types/strings/transformers/appending:lib",
    "//code/tools/games/crossword:html_exporter",
    "//code/utilities/data_structures/point:point_range_checker",
])

hcp(name = "crossword_words", deps = [
    "//code/utilities/types/vectors/transformers:lib",
    "//code/utilities/language_basic/std_hackery:std_aliases",
])

hcp(name = "html_exporter", deps = [
    "//code/tools/games/crossword/settings:crossword_puzzle_settings",
    "//code/utilities/types/vectors/creators:lib",
    "//code/utilities/types/vectors/observers:lib",
    "//code/utilities/filesystem/files/creating:lib",
    "//code/utilities/types/strings/transformers/appending:lib",
    "//code/utilities/colors:color_palettes",
    "//code/utilities/random:lib",
    "//code/utilities/language_basic/std_hackery:std_aliases",
    "//code/utilities/formats/html:basic_html_template_getter",
])