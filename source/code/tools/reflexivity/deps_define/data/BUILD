package(default_visibility = ["//visibility:public"])
load("//bazel/cookbook/hcp:main.bzl", "hcp")
load("//bazel/cookbook/cpp:object.bzl", "cpp_object")
load("//bazel/cookbook/cpp:main.bzl", "cpp_main")

hcp(name = "dependency_specifications", deps = [
    "//code/tools/reflexivity/deps_define/data:dependency_specification"
])
hcp(name = "dependency_specification", deps = [
    "//code/tools/reflexivity/deps_define/data:dependency_location",
])
hcp(name = "dependency_specifications_getter", deps = [
    "//code/tools/reflexivity/deps_define/data:dependency_specifications"
])

hcp(name = "dependency_location", deps = [
])