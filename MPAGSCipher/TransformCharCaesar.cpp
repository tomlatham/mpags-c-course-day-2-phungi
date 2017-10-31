#include <iostream>
#include <string>
#include <vector>
// For std::isalpha and std::isupper
#include <cctype>
#include "TransformCharCaesar.hpp"
std:: string transformCharCaesar (const char in_Char,const size_t key, const bool encryption)
{
    std::string inputText {""};
    std::string alphabet{"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    int abcsize=alphabet.size();

    // Transform alphabetic characters
    if (std::isalpha(in_Char)){
        for(int i{0};i<abcsize;++i){
            if(alphabet[i]==in_Char){
                if(encryption==true){
                    inputText+=alphabet[(i+key)%(abcsize-1)];
                }
                else{
                    inputText+=alphabet[(i-key)%(abcsize-1)];
                }
            }
        }
    }
    return inputText;
    // If the character isn't alphabetic, DONT add it.
    // Our ciphers can only operate on alphabetic characters.
}
