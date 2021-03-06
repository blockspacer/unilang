load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive", "http_file")
load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")

def mustache():
    http_archive(
        name = "mustache",
        build_file = "//bazel/deps/build_files:mustache.BUILD",
        sha256 = "cf568d7c56ed17ddcbcf40664a8303a24ba868c30b8916d3490bec5af77e33f8",
        strip_prefix = "Mustache-c34f602c8014677da7e6bec48b8e913e832a6868",
        urls = [
            "https://github.com/unilang/Mustache/archive/c34f602c8014677da7e6bec48b8e913e832a6868.tar.gz",
            "https://github.com/kainjow/Mustache/archive/c34f602c8014677da7e6bec48b8e913e832a6868.tar.gz",
        ],
    )
