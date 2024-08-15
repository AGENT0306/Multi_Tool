# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Multi_Tool_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Multi_Tool_autogen.dir\\ParseCache.txt"
  "Multi_Tool_autogen"
  )
endif()
