package(
    default_visibility = ["//visibility:public"],
)

cc_library(
    name = "lib",
    srcs = glob(["*.cpp"]),
    hdrs = glob(["*.hpp"]),
    linkopts = ["-lgmpxx", "-lgmp"],
    #deps = ["@bazelify_gmp//:gmp"],
)
