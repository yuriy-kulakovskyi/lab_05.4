if(EXISTS "/Users/yura_kulakovskyi/Documents/C++/AP/PR5/PR5_4/cmake-build-debug/PR5_4_tests[1]_tests.cmake")
  include("/Users/yura_kulakovskyi/Documents/C++/AP/PR5/PR5_4/cmake-build-debug/PR5_4_tests[1]_tests.cmake")
else()
  add_test(PR5_4_tests_NOT_BUILT PR5_4_tests_NOT_BUILT)
endif()
