# Testing library
FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG v3.4.0)
FetchContent_MakeAvailable(Catch2)
# Adds Catch2::Catch2

# Tests need to be added as executables first
add_executable(test test.cpp)

target_compile_features(test PRIVATE cxx_std_17)

# Should be linked to the main library, as well as the Catch2 testing library
target_link_libraries(test PRIVATE Catch2::Catch2WithMain)

add_test(NAME tests COMMAND test) # Command can be a target
