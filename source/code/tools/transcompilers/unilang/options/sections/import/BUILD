package(default_visibility = ["//visibility:public"])
load("//bazel/cookbook/hcp:main.bzl", "hcp")
load("//bazel/cookbook/cpp:object.bzl", "cpp_object")

hcp(name = "implicit_header_comment_settings",deps=[])

hcp(name = "import_options",deps=[
"//code/tools/transcompilers/unilang/options/comment/doxygen:doxygen_block_options",
"//code/tools/transcompilers/unilang/options/comment:comment_settings",
"//code/tools/transcompilers/unilang/options/sections/import:implicit_header_comment_settings",
"//code/tools/transcompilers/unilang/options/sections/import:import_relation_label_settings",
"//code/tools/transcompilers/unilang/options/sections/import:shared_headers_block_comment",
])

hcp(name = "import_relation_label_settings",deps=[])

hcp(name = "shared_headers_block_comment",deps=[
"//code/tools/transcompilers/unilang/options/comment:comment_settings"
])