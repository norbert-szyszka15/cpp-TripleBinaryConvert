#include <iostream>
#include <vector>
#include "FileReader.h"
#include "FileWriter.h"
#include "Triple.h"
#include "Converter.h"

using namespace std;

int main() {
    // utworzenie obiektow poszczegolnych klas
    FileReader fileReader("./../LinesData.csv");
    FileWriter fileWriter("./../outputData.komputr");
    Converter converter;
    
    // wywolanie metod klas
    vector<Triple> input = fileReader.readFromFile();
    string output = converter.convert(input);
    fileWriter.writeToFile(output);

    return 0;
}