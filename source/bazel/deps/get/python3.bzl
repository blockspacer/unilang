load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive", "http_file")
load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")

def python3():
    http_archive(
        name = "python3",
        build_file = "//bazel/deps/build_files:python3.BUILD",
        sha256 = "36592ee2910b399c68bf0ddad1625f2c6a359ab9a8253d676d44531500e475d4",
        strip_prefix = "python3-7f755fe87d217177603a27d9dcc2fedc979f0f1a",
        urls = [
            "https://github.com/unilang/python3/archive/7f755fe87d217177603a27d9dcc2fedc979f0f1a.tar.gz",
        ],
    )
