package(default_visibility = ["//visibility:public"])
load("//bazel/cookbook/hcp:main.bzl", "hcp")
load("//bazel/cookbook/cpp:object.bzl", "cpp_object")

hcp(name = "file_upload_settings", deps = [
"//code/utilities/web/dropbox:upload_to_dropbox_strategy",
"//code/utilities/program/wrappers/git/upload:github_upload_settings",
])

hcp(name = "file_uploader", deps = [
"//code/utilities/output/upload:file_upload_settings",
"//code/utilities/web/dropbox:dropbox_uploader",
"//code/utilities/personal/secret:secret_getter",
"//code/utilities/program/wrappers/git/upload:github_uploader",
"//code/utilities/web/dropbox:upload_to_dropbox_strategy",
])