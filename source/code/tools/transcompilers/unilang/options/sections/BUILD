package(default_visibility = ["//visibility:public"])
load("//bazel/cookbook/hcp:main.bzl", "hcp")
load("//bazel/cookbook/cpp:object.bzl", "cpp_object")

hcp(name = "notation_settings", deps = [
"//code/tools/transcompilers/unilang/options/sections/method/parameters:method_parameter_unit_settings",
"//code/tools/transcompilers/unilang/options/hungarian:identifier_notation_settings",
"//code/tools/transcompilers/unilang/options/sections/data_member:data_member_casing_settings",
"//code/tools/transcompilers/unilang/options/self_describe_type:extra_type_suffix_settings",
])

hcp(name = "portion_options", deps = [
"//code/tools/transcompilers/unilang/options/sections/meta:meta_options",
"//code/tools/transcompilers/unilang/options/sections/include_guard:include_guard_options",
"//code/tools/transcompilers/unilang/options/sections/extern_c:extern_c_guard_options",
"//code/tools/transcompilers/unilang/options/sections/import:import_options",
"//code/tools/transcompilers/unilang/options/sections/typedef:typedef_options",
"//code/tools/transcompilers/unilang/options/sections/macro:macro_options",
"//code/tools/transcompilers/unilang/options/sections/namespace:namespace_options",
"//code/tools/transcompilers/unilang/options/sections/enum:enum_options",
"//code/tools/transcompilers/unilang/options/sections/inheritance:inheritance_options",
"//code/tools/transcompilers/unilang/options/sections/method:method_options",
"//code/tools/transcompilers/unilang/options/sections/data_member:data_member_options",
"//code/tools/transcompilers/unilang/options/sections/type:type_options",
])