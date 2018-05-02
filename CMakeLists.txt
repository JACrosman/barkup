cmake_minimum_required(VERSION 3.11.1)
project(barkup)

add_compile_options(-std=c++11)

list(APPEND CMAKE_PREFIX_PATH "/opt/grpc" "/opt/protobuf")

find_package(Protobuf REQUIRED)
find_package(GRPC REQUIRED)

include_directories(/usr/local/include)
link_directories(/usr/local/lib)

set(PROTO_PATH "${CMAKE_SOURCE_DIR}/protos")
set(USER_PROTO "${PROTO_PATH}/user.proto")
set(GENERATED_PROTOBUF_PATH "${CMAKE_BINARY_DIR}/generated")
file(MAKE_DIRECTORY ${GENERATED_PROTOBUF_PATH})

# Server config
include_directories(grpc/include)
file (GLOB SERVER_SOURCES "server/*.cc")
add_executable(barkup ${SERVER_SOURCES})