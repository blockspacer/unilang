package(default_visibility = ["//visibility:public"])
load("//bazel/cookbook/hcp:main.bzl", "hcp")
load("//bazel/cookbook/cpp:object.bzl", "cpp_object")

hcp(name = "apt_get_command", deps = [])
hcp(name = "apt_ppa_command", deps = [])

hcp(name = "apt_get_commands_getter", deps = [
    "//code/tools/reflexivity/docker/data:apt_get_command",
])
hcp(name = "apt_ppa_commands_getter", deps = [
    "//code/tools/reflexivity/docker/data:apt_ppa_command",
])

hcp(name = "docker_settings", deps = [
    "//code/tools/reflexivity/docker/data:apt_get_command",
    "//code/tools/reflexivity/docker/data:apt_ppa_command",
])

hcp(name = "docker_settings_getter", deps = [
    "//code/tools/reflexivity/docker/data:docker_settings",
    "//code/tools/reflexivity/docker/data:apt_get_commands_getter",
    "//code/tools/reflexivity/docker/data:apt_ppa_commands_getter",
])