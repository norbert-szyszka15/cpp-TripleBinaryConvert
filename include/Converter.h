#include <iostream>
#include <vector>
#include <sstream>
#include "Triple.h"

#pragma once

using namespace std;

class Converter {
public:
    Converter();
    ~Converter();
    string convert(vector<Triple> fileData);
};