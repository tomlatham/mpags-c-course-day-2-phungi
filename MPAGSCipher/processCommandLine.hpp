#ifndef MPAGSCIPHER_PROCESSCOMMANDLINE_HPP
#define MPAGSCIPHER_PROCESSCOMMANDLINE_HPP
//header for processCommandLine.cpp
#include <string>
#include <vector>
bool processCommandLine(
        const std::vector<std::string>& cmdLineArgs,
        bool& helpRequested,
        bool& versionRequested,
        std::string& inputFile,
        std::string& outputFile);
#endif

