# Sorting algo

This library contains sorting algorithm, which sorts the vector of integers inplace.

## Getting started

For quick start just paste this code in your `CMakeLists.txt` file.

```cmake
include(FetchContent)
FetchContent_Declare(libsort
  GIT_REPOSITORY https://github.com/khilk/homework_vega.git
  GIT_TAG main
)
FetchContent_MakeAvailable(libsort)
link_libraries(libsort)
```
