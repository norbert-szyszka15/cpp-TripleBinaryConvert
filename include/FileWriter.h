#include <iostream>
#include <fstream>
#include "Triple.h"

#pragma once

using namespace std;

class FileWriter {
public:
    FileWriter(const string& filePath);
    ~FileWriter();
    void writeToFile(string data);
private:
    string filePath;
};