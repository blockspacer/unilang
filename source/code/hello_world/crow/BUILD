load("//bazel/cookbook/cpp:main.bzl", "cpp_main")
package(
    default_visibility = ["//visibility:public"],
)

cpp_main(
    name = "main",
    deps = [
        "@crow//:crow",
        "@boost//:optional",
        "@boost//:algorithm",
        "@boost//:asio",
    ],
)