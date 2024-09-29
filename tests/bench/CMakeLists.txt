# #### GBench #####

# Disable the Google Benchmark requirement on Google Test
set(BENCHMARK_ENABLE_TESTING NO)

include(FetchContent)
FetchContent_Declare(
    googlebenchmark
    GIT_REPOSITORY https://github.com/google/benchmark.git
    GIT_TAG v1.9.0
)
FetchContent_MakeAvailable(googlebenchmark)

# #### \GBench #####
add_executable(bench_sort sort.cpp)
target_link_libraries(bench_sort PRIVATE libsort benchmark::benchmark)
