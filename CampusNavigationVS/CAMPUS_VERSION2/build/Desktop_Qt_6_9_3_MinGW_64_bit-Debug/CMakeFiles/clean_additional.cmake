# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CAMPUS_VERSION2_autogen"
  "CMakeFiles\\CAMPUS_VERSION2_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\CAMPUS_VERSION2_autogen.dir\\ParseCache.txt"
  )
endif()
