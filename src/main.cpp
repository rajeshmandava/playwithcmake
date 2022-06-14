#include <cstdlib>
#include <iostream>
#include <string>

std::string say_hello()
{
  return std::string("Hello This is CMake");
}

int main()
{
  std::cout<<say_hello()<<std::endl;
  return EXIT_SUCCESS;
}