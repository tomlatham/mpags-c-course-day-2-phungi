// Standard Library includes
#include <iostream>
#include <string>
#include <vector>
// For std::isalpha and std::isupper
#include <cctype>
#include "TransformCharCaesar.hpp"
#include "processCommandLineCaesar.hpp"
#include <fstream>
#include <cctype>

int main(int argc, char* argv[])
{
  // Convert the command-line arguments into a more easily usable form
  const std::vector<std::string> cmdLineArgs {argv, argv+argc};

  // Options that might be set by the command-line arguments
  bool encryption{true};

  int a=processCommandLineCaesar(cmdLineArgs,encryption);
  if(a==0){
      std::cout<<"Either a mistake has been made in the command line or a key=0 (no change) has been set"<<std::endl;
      return 0;
  }
  // Initialise variables for processing input text
  char inputChar {'x'};
  std::string inputText {""};
  while(std::cin >> inputChar)
  {
      inputText+=transformCharCaesar(inputChar,a,encryption);
  }
  std::cout << inputText << std::endl;

  return 0;
}

