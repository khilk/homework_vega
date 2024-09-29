# #### GTest #####

include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)
include(GoogleTest)

# #### \GTest #####

add_executable(test_sort ${CMAKE_CURRENT_SOURCE_DIR}/sort.cpp)
target_link_libraries(test_sort PRIVATE libsort GTest::gtest_main)
add_test(NAME test_sort COMMAND test_sort)
