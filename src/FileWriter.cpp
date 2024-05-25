#include "FileWriter.h"

FileWriter::FileWriter(const string& filePath) : filePath(filePath) {}

FileWriter::~FileWriter() {}

void FileWriter::writeToFile(string data) {
    ofstream out(filePath, ios::binary);

    // sprawdzenie poprawnego otwarcia pliku
    if (!out.is_open()) {
        throw runtime_error("Cannot open the follwing file specified in FileWriter: " + filePath);
    }

    unsigned textSize = data.size();
    char* temp = reinterpret_cast<char*>(&textSize);

    out.write(temp, sizeof(textSize));
    out.write(data.data(), textSize);

    out.close();
}