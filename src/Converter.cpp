#include "Converter.h"

Converter::Converter() {}

Converter::~Converter() {}

string Converter::convert(vector<Triple> fileData)
{
    stringstream lineNumbers, startStops, endStops;

    // dane z wektora tripli wrzucam najpierw do
    // wspolnych stringstreamow, po jednym dla
    // numerow linii, przystankow poczatkowych
    // i przystankow koncowych
    for (Triple row : fileData) {
        lineNumbers << row.first();
        startStops << row.second();
        endStops << row.third();
    }

    // na koncu z utworzonych stringstreamow tworze
    // jednego stringa, ktory jest zwracany przez
    // metode klasy Converter i pozniej przyjmowany
    // przez metode klasy FileWrtier
    string result = lineNumbers.str() + startStops.str() + endStops.str();
    return result;
}