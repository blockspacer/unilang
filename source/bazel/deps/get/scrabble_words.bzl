load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive", "http_file")
load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")

def scrabble_words():
    http_archive(
        name = "scrabble_words",
        build_file = "//bazel/deps/build_files:scrabble_words.BUILD",
        sha256 = "42514a4e7d409e8ed45fbfb13539a7d1d87693e4e1d78c92531e4f24766c42c4",
        strip_prefix = "scrabble_words-28a758a38c44baa5cd299d857dc3955bb0dbb9bf",
        urls = [
            "https://github.com/unilang/scrabble_words/archive/28a758a38c44baa5cd299d857dc3955bb0dbb9bf.tar.gz",
        ],
    )
