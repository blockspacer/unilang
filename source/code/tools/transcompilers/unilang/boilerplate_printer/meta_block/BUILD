package(default_visibility = ["//visibility:public"])
load("//bazel/cookbook/hcp:main.bzl", "hcp")
load("//bazel/cookbook/cpp:object.bzl", "cpp_object")

hcp(name = "meta_block_printer", deps = [
"//code/tools/transcompilers/unilang/structure/model/sections/meta:meta_section",
"//code/tools/transcompilers/unilang/options/sections/meta:meta_options",
"//code/tools/transcompilers/unilang/boilerplate_printer/meta_block/sections:meta_author_printer",
"//code/tools/transcompilers/unilang/structure/print/export_file_settings:export_file_settings",
"//code/utilities/types/strings/transformers/casing:case_modifier",
"//code/tools/transcompilers/unilang/boilerplate_printer/meta_block/sections/notes:meta_note_creator",
"//code/tools/transcompilers/unilang/boilerplate_printer/meta_block/sections:meta_company_name_getter",
"//code/tools/transcompilers/unilang/boilerplate_printer/meta_block/sections:meta_copyright_statement_getter",
"//code/tools/transcompilers/unilang/boilerplate_printer/meta_block/sections:meta_classification_getter",
"//code/tools/transcompilers/unilang/boilerplate_printer/meta_block/sections:meta_project_name_getter",
"//code/tools/transcompilers/unilang/boilerplate_printer/meta_block/sections:meta_contract_number_getter",
"//code/tools/transcompilers/unilang/boilerplate_printer/meta_block/sections:meta_task_order_getter",
"//code/tools/transcompilers/unilang/boilerplate_printer/meta_block/sections:meta_contract_statement_getter",
"//code/tools/transcompilers/unilang/boilerplate_printer/meta_block/sections:meta_distribution_statement_getter",
"//code/tools/transcompilers/unilang/boilerplate_printer/meta_block/sections:meta_organizations_getter",
"//code/tools/transcompilers/unilang/boilerplate_printer/meta_block/sections:meta_copyright_getter",
"//code/tools/transcompilers/unilang/boilerplate_printer/meta_block/sections:meta_file_statement_getter",
"//code/tools/transcompilers/unilang/boilerplate_printer/meta_block/sections/notes:meta_notes_getter",
"//code/tools/transcompilers/unilang/boilerplate_printer/meta_block/sections:meta_external_links_getter",
"//code/tools/transcompilers/unilang/boilerplate_printer/meta_block/sections:meta_group_names_getter",
"//code/tools/transcompilers/unilang/boilerplate_printer/meta_block/sections:meta_blank_line_getter",
"//code/tools/transcompilers/unilang/doxygen_block_printer:doxygen_block_maker",
"//code/utilities/types/strings/transformers/appending:lib",
"//code/utilities/types/general:lib",
"//code/utilities/types/converters:lib",
"//code/utilities/streams/filestreams:lib",
"//code/utilities/program/common_actions/exits:lib",
"//code/utilities/types/strings/observers/converting:lib",
"//code/utilities/types/strings/transformers/other:lib",
"//code/utilities/types/strings/transformers/trimming:lib",
"//code/utilities/types/strings/observers/splitting:lib",
"//code/tools/transcompilers/unilang/options/sections/meta:meta_watermark_settings",
"//code/utilities/types/strings/transformers/watermark:lib",
"//code/utilities/types/vectors/observers:lib",
"//code/utilities/licenses:apache_2_getter",
])