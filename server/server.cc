#include <iostream>
#include <memory>
#include <string>

#include <grpcpp/grpcpp.h>

using grpc::Server;
using grpc::ServerBuilder;
using grpc::ServerContext;
using grpc::Status;

int main() {
  std::cout << "works" << std::endl;

  return 0;
}