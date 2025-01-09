# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\LibraryAccounting_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\LibraryAccounting_autogen.dir\\ParseCache.txt"
  "LibraryAccounting_autogen"
  )
endif()
