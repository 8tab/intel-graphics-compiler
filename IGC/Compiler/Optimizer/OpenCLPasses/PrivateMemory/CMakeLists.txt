include_directories("${CMAKE_CURRENT_SOURCE_DIR}")


set(IGC_BUILD__SRC__PrivateMemory
    "${CMAKE_CURRENT_SOURCE_DIR}/PrivateMemoryBufferAnalysis.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/PrivateMemoryResolution.cpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/PrivateMemoryUsageAnalysis.cpp"
  )
set(IGC_BUILD__SRC__OpenCLPasses_PrivateMemory ${IGC_BUILD__SRC__PrivateMemory} PARENT_SCOPE)

set(IGC_BUILD__HDR__PrivateMemory
    "${CMAKE_CURRENT_SOURCE_DIR}/PrivateMemoryBufferAnalysis.hpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/PrivateMemoryResolution.hpp"
    "${CMAKE_CURRENT_SOURCE_DIR}/PrivateMemoryUsageAnalysis.hpp"
  )
set(IGC_BUILD__HDR__OpenCLPasses_PrivateMemory ${IGC_BUILD__HDR__PrivateMemory} PARENT_SCOPE)


igc_sg_register(
    Compiler__OpenCLPasses_PrivateMemory
    "PrivateMemory"
    FILES
      ${IGC_BUILD__SRC__PrivateMemory}
      ${IGC_BUILD__HDR__PrivateMemory}
  )