# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "RelWithDebInfo")
  file(REMOVE_RECURSE
  "CMakeFiles\\btl_nmlt_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\btl_nmlt_autogen.dir\\ParseCache.txt"
  "btl_nmlt_autogen"
  )
endif()
