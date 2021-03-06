load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive", "http_file")
load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")

def emscripten():
    http_archive(
        name = "emscripten",
        build_file = "//bazel/deps/build_files:emscripten.BUILD",
        sha256 = "d265533ae9914ec13ee2d82f0714ccfa585c02a145b6c268c22792940838b54b",
        strip_prefix = "emscripten-913505e3bbbeacf7dae0ceb62559f10d9e6be693",
        urls = [
            "https://github.com/Unilang/emscripten/archive/913505e3bbbeacf7dae0ceb62559f10d9e6be693.tar.gz",
            "https://github.com/emscripten-core/emscripten/archive/913505e3bbbeacf7dae0ceb62559f10d9e6be693.tar.gz",
        ],
    )