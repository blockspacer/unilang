package(default_visibility = ["//visibility:public"])
load("//bazel/cookbook/hcp:main.bzl", "hcp")
load("//bazel/cookbook/cpp:object.bzl", "cpp_object")

hcp(name = "math",deps=[])

hcp(name = "pi_calculator", deps = [
    "//code/utilities/math/gmp:lib"
])