package(default_visibility = ["//visibility:public"])
load("//bazel/cookbook/hcp:main.bzl", "hcp")
load("//bazel/cookbook/cpp:object.bzl", "cpp_object")

hcp(name = "good_api_creator", deps = [
"//code/tools/transcompilers/unilang/structure/model:structure",
"//code/tools/transcompilers/unilang/options/language-specific/c:c_export_settings",
"//code/tools/transcompilers/unilang/structure/print:methods_printer",
"//code/tools/transcompilers/unilang/structure/print/derivers:identifier_name_deriver",
"//code/tools/transcompilers/unilang/structure/print:shared_printer",
"//code/tools/transcompilers/unilang/structure/print:implicit_contract_adder",
"//code/tools/transcompilers/unilang/structure/model/sections/meta:code_type",
"//code/utilities/types/converters:lib",
"//code/utilities/types/general:lib",
"//code/utilities/types/vectors/transformers:lib",
"//code/utilities/types/strings/transformers/casing:lib",
])

hcp(name = "deep_copy_creator", deps = [
"//code/tools/transcompilers/unilang/structure/model:structure",
"//code/tools/transcompilers/unilang/options/language-specific/c:c_export_settings",
"//code/tools/transcompilers/unilang/structure/print:implicit_contract_adder",
"//code/tools/transcompilers/unilang/design/in-out:object_name_resolver",
"//code/tools/transcompilers/unilang/structure/print:methods_printer",
"//code/tools/transcompilers/unilang/structure/print:shared_printer",
"//code/tools/transcompilers/unilang/structure/model/sections/meta:code_type",
"//code/utilities/types/converters:lib",
"//code/utilities/types/general:lib",
"//code/utilities/types/strings/transformers/casing:lib",
])