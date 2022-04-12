#Description: ECSPI SDMA Driver; user_visible: True
include_guard(GLOBAL)
message("driver_ecspi_sdma component is included.")

target_sources(${MCUX_SDK_PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/fsl_ecspi_sdma.c
)

target_include_directories(${MCUX_SDK_PROJECT_NAME} PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/.
)


include(driver_sdma)
include(driver_ecspi)