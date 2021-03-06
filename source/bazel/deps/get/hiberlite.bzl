load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive", "http_file")
load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")

def hiberlite():
    http_archive(
        name = "hiberlite",
        build_file = "//bazel/deps/build_files:hiberlite.BUILD",
        sha256 = "6b290db813962e2bfc571d16d8d346916cf923cef128205ff18478e37d006586",
        strip_prefix = "hiberlite-ffd558a4917b33668d1001b4bba8e11b508be06a",
        urls = [
            "https://github.com/Unilang/hiberlite/archive/ffd558a4917b33668d1001b4bba8e11b508be06a.tar.gz",
            "https://github.com/paulftw/hiberlite/archive/ffd558a4917b33668d1001b4bba8e11b508be06a.tar.gz",
        ],
    )