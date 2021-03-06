load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive", "http_file")
load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")

def big_integer_cpp():
    http_archive(
        name = "big_integer_cpp",
        build_file = "//bazel/deps/build_files:big_integer_cpp.BUILD",
        sha256 = "1c9505406accb1216947ca60299ed70726eade7c9458c7c7f94ca2aea68d288e",
        strip_prefix = "BigIntegerCPP-79e7b023bf5157c0f8d308d3791cf3b081d1e156",
        urls = [
            "https://github.com/unilang/BigIntegerCPP/archive/79e7b023bf5157c0f8d308d3791cf3b081d1e156.tar.gz",
            "https://github.com/ron4fun/BigIntegerCPP/archive/79e7b023bf5157c0f8d308d3791cf3b081d1e156.tar.gz",
        ],
    )
