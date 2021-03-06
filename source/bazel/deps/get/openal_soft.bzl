load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive", "http_file")
load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")

def openal_soft():
    http_archive(
        name = "openal_soft",
        build_file = "//bazel/deps/build_files:openal_soft.BUILD",
        sha256 = "0234a10ea8c593d3b362ccc9a0b98c86723f455ea3ddb10175a78712ac713ac0",
        strip_prefix = "openal-soft-024d5d900aa7f9e3435459b0a8cfe354dc8e21fd",
        urls = [
            "https://github.com/unilang/openal-soft/archive/024d5d900aa7f9e3435459b0a8cfe354dc8e21fd.tar.gz",
            "https://github.com/kcat/openal-soft/archive/024d5d900aa7f9e3435459b0a8cfe354dc8e21fd.tar.gz",
        ],
    )