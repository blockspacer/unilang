package(default_visibility = ["//visibility:public"])
load("//bazel/cookbook/hcp:main.bzl", "hcp")
load("//bazel/cookbook/cpp:object.bzl", "cpp_object")
load("//bazel/cookbook/cpp:distributable_main.bzl", "distributable_cpp_main")

hcp(name = "task_executer", deps = [
    "//code/tools/repo_tools/network_used/settings:settings",
    "//code/tools/repo_tools/network_used/program_options:lib",
    "//code/tools/repo_tools/network_used/settings:settings_getter",
    "//code/utilities/program/wrappers/tshark:tshark_spawner",
    "//code/utilities/program/processes:lib",
    "//code/utilities/output/printers:lib",
    "//code/utilities/program/wrappers/git/repo_establisher:repo_establisher",
])
distributable_cpp_main(
    name = "network_used",
    deps = [
        "//code/tools/repo_tools/network_used:task_executer",
        "//code/tools/repo_tools/network_used/program_options:lib",
    ],
    description = "find out how the build uses the network",
    depends = [
    ],
)   