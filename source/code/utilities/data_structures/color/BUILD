package(default_visibility = ["//visibility:public"])
load("//bazel/cookbook/hcp:main.bzl", "hcp")
load("//bazel/cookbook/cpp:object.bzl", "cpp_object")

hcp(name="rgb_color",deps = [])
hcp(name="rgb_color_transition",deps = ["//code/utilities/data_structures/color:rgb_color"])
hcp(name="rgba_color_transition",deps = ["//code/utilities/data_structures/color:transparent_rgb_color"])

hcp(name="rgb_part_range",deps = [])
hcp(name="rgb_parts_ranges",deps = ["//code/utilities/data_structures/color:rgb_part_range"])

hcp(name="transparent_rgb_color",deps = [])

hcp(name="hsv_color",deps = [])
hcp(name="transparent_hsv_color",deps = [])