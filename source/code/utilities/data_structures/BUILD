package(
    default_visibility = ["//visibility:public"],
)
load("//bazel/cookbook/enum_cpp:enum_cpp.bzl", "enum_cpp")


enum_cpp(name = "two_d_coordinate_dimension",
values = [
"x"
,"y"
])

enum_cpp(name = "optional_two_d_coordinate_dimension",
values = [
"x"
,"y"
,"none"
])

enum_cpp(name = "compass_direction",
values = [
"north"
,"west"
,"south"
,"east"
])

enum_cpp(name = "compass_direction_diagnonal",
values = [
"north"
,"west"
,"south"
,"east"
,"north_west"
,"north_east"
,"south_west"
,"south_east"
])

enum_cpp(name = "optional_compass_direction",
values = [
"north"
,"west"
,"south"
,"east",
"none"
])


#how to index into containers (treating the values as further indexes)
enum_cpp(name = "index_mode",
values = [
"position"
,"immediate"
,"relative"
])

enum_cpp(name = "headedness",
values = [
"left"
,"right"
])

enum_cpp(name = "concurrency",
values = [
"sequential"
,"parallel"
])

