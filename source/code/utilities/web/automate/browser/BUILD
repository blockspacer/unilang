package(default_visibility = ["//visibility:public"])
load("//bazel/cookbook/hcp:main.bzl", "hcp")
load("//bazel/cookbook/cpp:object.bzl", "cpp_object")
load("//bazel/cookbook/enum_cpp:enum_cpp.bzl", "enum_cpp")

hcp(name = "browser_creator", deps = [
    "@pybind11//:pybind11",
    "//code/utilities/web/automate/browser:browser_settings",
    "//code/utilities/web/chrome/driver:chrome_driver_selector",
])

hcp(name = "browser_settings", deps = [
    "//code/utilities/web/chrome/driver:chrome_driver_selection_settings"
])

hcp(name = "default_browser_settings_getter", deps = [
    "//code/utilities/web/automate/browser:browser_settings",
    "//code/utilities/web/chrome/driver:chrome_driver_selector",
    "//code/utilities/filesystem/paths:lib",
    "//code/utilities/types/vectors/operators:lib",
])