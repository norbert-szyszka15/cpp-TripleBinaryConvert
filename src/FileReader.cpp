#include "FileReader.h"

FileReader::FileReader(const string& filePath) : filePath(filePath) {}

FileReader::~FileReader() {}

/*********************************************
 Funkcja splitLine(stringstream& ss) to moja
 funkcja pomocnicza, ktora przy odczytywaniu
 danych z pliku pobiera kazda kolejna linie
 i kolejne elementy rozdzielone znakiem ','
 do wektora stringow wedlug ponizszego kodu: 
*********************************************/
vector<string> FileReader::splitLine(stringstream& ss) {
    vector<string> splittedLine;
    string elem;
    while(getline(ss, elem, ',')) {
        splittedLine.push_back(elem);
    }
    return splittedLine;
}

vector<Triple> FileReader::readFromFile() {
    ifstream in(filePath);

    // sprawdzenie poprwnego otwarcia pliku
    if (!in.is_open()) {
        throw runtime_error("Cannot open the follwing file specified in FileReader: " + filePath);
    }

    vector<vector<string>> fileData;
    vector<Triple> data;

    bool isFirst = true;
    string line;
    while (getline(in, line)) {
        // flaga do pomijania pierwszej linijki pliku *.csv
        // w ktorej sa jedynie informacje na temat
        // formatu tekstu w pliku
        if (isFirst) { 
            isFirst = false;
            continue;
        }

        vector<string> row;
        stringstream readedLine(line);

        row = splitLine(readedLine);
        Triple triple(row[0], row[1], row[2]);

        data.push_back(triple);
    }

/**************************************************
 Druga metoda, jaka testowalem bylo uzycie
 wektora wektorow stringow vector<vector<string>>,
 ale skoro juz mamy gotowa klase Triple, rownie
 dobrze mozna w zapisu danych uzyc wlasnie jej
**************************************************/

    in.close();
    return data;
}