#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <Triple.h>

#pragma once

using namespace std;

class FileReader {
public:
    FileReader(const string& filePath);
    ~FileReader();
    vector<string> splitLine(stringstream& ss);
    vector<Triple> readFromFile();

private:
    string filePath;
};