#pragma once

#include <iostream>
#include <fstream>

using namespace std;

class FileWriter {
public:
    FileWriter(const string& filePath);
    ~FileWriter();
    void writeToFile(string data);
private:
    string filePath;
};