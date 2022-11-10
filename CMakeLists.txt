cmake_minimum_required(VERSION 3.16)
set(PROJ_NAME case26)
project(${PROJ_NAME})

add_executable(${PROJ_NAME}
    main.cpp
    )

target_compile_definitions(${PROJ_NAME} PRIVATE CMAKE_BUILD_TYPE=$<CONFIG>)
target_compile_definitions(${PROJ_NAME} PRIVATE PLATFORM_ID=$<PLATFORM_ID>)
target_compile_definitions(${PROJ_NAME} PRIVATE C_COMPILER_VERSION=$<C_COMPILER_VERSION>)
target_compile_definitions(${PROJ_NAME} PRIVATE CXX_COMPILER_VERSION=$<CXX_COMPILER_VERSION>)
