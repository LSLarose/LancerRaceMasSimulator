#based on https://matgomes.com/integrate-google-test-into-cmake
include(FetchContent)

FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        release-1.11.0
)

FetchContent_MakeAvailable(googletest)
add_library(GTest::GTest INTERFACE IMPORTED)
target_link_libraries(GTest::GTest INTERFACE gtest_main)

add_executable(unittests "main_test.cpp" "../src/Racers/Racer.h" "Racers/Racer_test.cpp")

target_link_libraries(
	unittests
	PRIVATE
		GTest::GTest
		LancerRaceMasSimulator)

add_test(LancerRaceMasSimulatorTests unittests)