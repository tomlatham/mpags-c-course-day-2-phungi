#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include<math.h>
#include "processCommandLineCaesar.hpp"
int processCommandLineCaesar(
        const std::vector<std::string>& cmdLineArgs,
        bool& encryption)
{
    int key=0;
    typedef std::vector<std::string>::size_type size_type;
    const size_type nCmdLineArgs {cmdLineArgs.size()};
    for (size_type i {1}; i < nCmdLineArgs; ++i) {
        std::string string=cmdLineArgs[i];
    //choose whether to encrypt or decrypt /encrypt is default

    if (string=="decrypt"){
        encryption=false;
    }
    //detect a number and take the value as the key for the caesar cipher
    else{
        for(size_t j=0;j<string.size();++j){
            if(isdigit(string[j])==true){
                int a=stoul(string[j]);
                key=key+a*pow(10,string.size()-j-1);
            }
            else key=0;
        }
    }
  }
    return key;
}

