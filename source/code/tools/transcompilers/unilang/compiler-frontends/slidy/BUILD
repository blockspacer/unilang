package(default_visibility = ["//visibility:public"])
load("//bazel/cookbook/hcp:main.bzl", "hcp")
load("//bazel/cookbook/cpp:object.bzl", "cpp_object")

hcp(name = "slidy_settings_getter", deps = [
"//code/tools/transcompilers/unilang/options/language-specific/slidy:slidy_settings",
])

hcp(name = "slidy_exporter", deps = [
"//code/tools/transcompilers/unilang/structure/model:structure",
"//code/tools/transcompilers/unilang/contributor:contributor",
"//code/tools/transcompilers/unilang/structure/model:inlined_structures",
"//code/tools/transcompilers/unilang/options/language-specific/slidy:slidy_settings",
"//code/utilities/types/strings/transformers/appending:lib",
"//code/utilities/types/converters:lib",
"//code/utilities/types/strings/observers/other:lib",
"//code/tools/transcompilers/unilang/structure/print:struct_derivers",
"//code/utilities/types/strings/transformers/casing:case_modifier",
"//code/utilities/program/call:lib",
"//code/utilities/filesystem/paths:lib",
"//code/tools/transcompilers/unilang/options/manipulation:case_adjustment_settings",
"//code/tools/transcompilers/unilang/structure/adjust:casing_adjuster",
"//code/utilities/types/vectors/observers:lib",
"//code/tools/transcompilers/unilang/structure/adjust:structure_adjuster",
"//code/utilities/types/vectors/operators:lib",
"//code/utilities/types/char:lib",
"//code/tools/transcompilers/unilang/doxygen_block_printer:grammar_adjuster",
"//code/utilities/linguistics/computer/file_extension:file_extension_getter",
"//code/tools/transcompilers/unilang/compiler-frontends/markdown:markdown_str_getter",
"//code/utilities/program/common_actions/exits:lib",
"//code/utilities/filesystem/files/creating:lib",
])
