#include <iostream>

#pragma once

using namespace std;

class Triple {
public:
    Triple(string firstVar, string secondVar, string thirdVar);
    ~Triple();
    string first();
    string second();
    string third();
private:
    string firstElement;
    string secondElement;
    string thirdElement;
};