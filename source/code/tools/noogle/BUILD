package(default_visibility = ["//visibility:public"])
load("//bazel/cookbook/hcp:main.bzl", "hcp")
load("//bazel/cookbook/cpp:object.bzl", "cpp_object")
load("//bazel/cookbook/cpp:distributable_main.bzl", "distributable_cpp_main")
load("//bazel/cookbook/data:package_binaries.bzl", "package_binaries")
load("//bazel/cookbook/data:distributable_data.bzl", "distributable_data")

hcp(name = "meta_settings", deps = [
])

hcp(name = "noogle_runner", deps = [
    "//code/tools/noogle:meta_settings",
    "//code/utilities/web/chrome/driver:chrome_driver_selector",
])

distributable_data(name="chrome_drivers",
                   description="chrome drivers for automating google chrome with selenium",
                   file_groups=["@chrome_drivers//:chrome_drivers"]
                   )

distributable_cpp_main(
    name = "noogle",
    deps = [
        "//code/tools/noogle:noogle_runner",
        "//code/tools/noogle:meta_settings"
    ],
    data = ":debian-data",
    description = "google but numbers",
    depends = [],
)