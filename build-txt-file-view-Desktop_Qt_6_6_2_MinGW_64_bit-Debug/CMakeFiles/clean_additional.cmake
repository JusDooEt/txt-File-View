# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\txt-file-view_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\txt-file-view_autogen.dir\\ParseCache.txt"
  "txt-file-view_autogen"
  )
endif()
