package(default_visibility = ["//visibility:public"])
load("//bazel/cookbook/hcp:main.bzl", "hcp")
load("//bazel/cookbook/cpp:object.bzl", "cpp_object")

hcp(name = "comment_adjuster", deps = [
"//code/tools/transcompilers/unilang/structure/model:structure",
"//code/tools/transcompilers/unilang/options/manipulation:struct_manipulation_settings",
"//code/tools/transcompilers/unilang/doxygen_block_printer:grammar_adjuster",
"//code/tools/transcompilers/unilang/options/comment:comment_grammar_settings",
"//code/tools/transcompilers/unilang/options/manipulation/reflow:comment_reflow_settings",
"//code/tools/transcompilers/unilang/structure/adjust:words_deriver",
"//code/tools/transcompilers/unilang/parser:token_value",
"//code/utilities/types/strings/observers/splitting:lib",
"//code/utilities/types/strings/observers/other:lib",
"//code/utilities/types/strings/transformers/trimming:lib",
"//code/tools/transcompilers/unilang/structure/adjust:greedy_reflower",
"//code/tools/transcompilers/unilang/structure/adjust:knuth_plass_reflower",
])

hcp(name = "words_deriver", deps = [
"//code/utilities/types/strings/transformers/trimming:lib",
"//code/utilities/types/strings/observers/splitting:lib",
"//code/utilities/types/strings/observers/char:lib",
])

hcp(name = "module_dependency_resolver", deps = [
"//code/tools/transcompilers/unilang/structure/model:structure",
"//code/tools/transcompilers/unilang/options/manipulation:struct_manipulation_settings",
"//code/tools/transcompilers/unilang/structure/print/export_file_settings:file_type",
])

hcp(name = "structure_adjuster", deps = [
"//code/tools/transcompilers/unilang/structure/model:structure",
"//code/tools/transcompilers/unilang/options/manipulation:struct_manipulation_settings",
"//code/tools/transcompilers/unilang/structure/adjust/meta:meta_adjuster",
"//code/tools/transcompilers/unilang/structure/adjust/types:type_adjuster",
"//code/tools/transcompilers/unilang/structure/adjust/imports:import_adjuster",
"//code/tools/transcompilers/unilang/structure/adjust/enums:enums_adjuster",
"//code/tools/transcompilers/unilang/structure/adjust/methods:methods_adjuster",
"//code/tools/transcompilers/unilang/structure/adjust/data_members:data_member_adjuster",
"structure_normalizer",
"module_dependency_resolver",
"//code/utilities/types/strings/observers/converting:lib",
"//code/utilities/linguistics/computer:source_language",
])

hcp(name = "structure_normalizer", deps = [
"//code/utilities/types/strings/transformers/trimming:lib",
"//code/utilities/types/converters:lib",
"//code/tools/transcompilers/unilang/structure/model:structure",
])

hcp(name = "casing_adjuster", deps = [
"//code/tools/transcompilers/unilang/structure/model:structure",
"//code/tools/transcompilers/unilang/structure/model:inlined_structures",
"//code/utilities/types/strings/transformers/appending:lib",
"//code/utilities/types/converters:lib",
"//code/utilities/types/strings/observers/other:lib",
"//code/tools/transcompilers/unilang/structure/print:struct_derivers",
"//code/utilities/types/strings/transformers/casing:case_modifier",
"//code/utilities/program/call:lib",
"//code/utilities/filesystem/paths:lib",
"//code/tools/transcompilers/unilang/options/manipulation:case_adjustment_settings",
])

hcp(name = "greedy_reflower", deps = [
"//code/tools/transcompilers/unilang/structure/model:structure",
"//code/tools/transcompilers/unilang/options/manipulation:struct_manipulation_settings",
"//code/tools/transcompilers/unilang/doxygen_block_printer:grammar_adjuster",
"//code/tools/transcompilers/unilang/options/comment:comment_grammar_settings",
"//code/tools/transcompilers/unilang/options/manipulation/reflow:greedy_reflow_settings",
"//code/tools/transcompilers/unilang/parser:token_value",
"//code/tools/transcompilers/unilang/structure/adjust:words_deriver",
"//code/utilities/types/strings/observers/splitting:lib",
"//code/utilities/types/strings/observers/other:lib",
"//code/utilities/types/strings/transformers/trimming:lib",
])

hcp(name = "knuth_plass_entry", deps = [])
hcp(name = "knuth_plass_reflower", deps = [
"//code/tools/transcompilers/unilang/structure/model:structure",
"//code/tools/transcompilers/unilang/options/manipulation:struct_manipulation_settings",
"//code/tools/transcompilers/unilang/doxygen_block_printer:grammar_adjuster",
"//code/tools/transcompilers/unilang/options/comment:comment_grammar_settings",
"//code/tools/transcompilers/unilang/options/manipulation/reflow:knuth_plass_reflow_settings",
"//code/tools/transcompilers/unilang/parser:token_value",
"//code/tools/transcompilers/unilang/structure/adjust:knuth_plass_entry",
"//code/tools/transcompilers/unilang/structure/adjust:words_deriver",
"//code/utilities/types/strings/observers/splitting:lib",
"//code/utilities/types/strings/observers/other:lib",
"//code/utilities/types/strings/transformers/trimming:lib",
])