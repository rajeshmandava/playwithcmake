#include "Message.h"
#include <cstdlib>
#include <iostream>
#include <string>

std::string say_hello()
{
  return std::string("Hello This is CMake");
}

int main()
{
  Message say_hello("Hello, This is CMake");
  std::cout<<say_hello<<std::endl;
  Message say_bye("Bye CMake!!!");
  std::cout<<say_bye<<std::endl;
  return EXIT_SUCCESS;
}