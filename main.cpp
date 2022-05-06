
#include "helloWorld.h"
#include <iostream>

int main(int argc, char **argv)
{
  HelloWorld helloWorld;
  std::string hello = helloWorld.helloWorld();

  std::cout << hello.c_str() << "\n";

  return 0;
}
