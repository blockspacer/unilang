Here is where we test the unilang transcompiler from within the build itself.  
Using the unilang-toolchain, we convert unilang code down into other languages.  
Then we run the specific language toolchains as necessary.  
This is all done from inside specific unilang bazel build rules.  