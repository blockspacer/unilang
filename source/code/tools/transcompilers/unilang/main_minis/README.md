Instead of 1 giant massive transcompiler, we may want individual language-to-language transcompiler binaries.
They will basically call into the same unilang library code, but have the advantage that they have less cli flags, and probably use less up-front memory on different language settings
Probably a little faster too.  It just makes sense to have these smaller consistent binaries that can be mapped 1-to-1 to bazel rules for actually doing the transcompilation tests in bazel.