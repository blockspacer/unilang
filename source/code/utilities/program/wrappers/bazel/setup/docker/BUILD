package(default_visibility = ["//visibility:public"])
load("//bazel/cookbook/hcp:main.bzl", "hcp")
load("//bazel/cookbook/cpp:object.bzl", "cpp_object")
load("//bazel/cookbook/enum_cpp:enum_cpp.bzl", "enum_cpp")

hcp(name = "bazel_dockerfile_settings", deps = [
])

hcp(name = "bazel_dockerfile_deriver", deps = [
    "//code/utilities/filesystem/files/getting:lib",
    "//code/utilities/program/wrappers/bazel/setup/docker:bazel_dockerfile_settings",
    "//code/utilities/streams/filestreams/read_all:lib",
    "//code/utilities/types/strings/observers/other:lib",
    "//code/utilities/filesystem/files/observers/lstat_wrap:lib",
])
