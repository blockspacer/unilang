load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive", "http_file")
load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")

def cpp_httplib():
    http_archive(
        name = "cpp_httplib",
        build_file = "//bazel/deps/build_files:cpp_httplib.BUILD",
        sha256 = "166103fc4281a438e1f5b9611981f2351ab12136086404895fe5d22e5db3aff5",
        strip_prefix = "cpp-httplib-22615f96828a72d84019b748ede01fa11d905977",
        urls = [
            "https://github.com/unilang/cpp-httplib/archive/22615f96828a72d84019b748ede01fa11d905977.tar.gz",
            "https://github.com/yhirose/cpp-httplib/archive/22615f96828a72d84019b748ede01fa11d905977.tar.gz",
        ],
    )
