#include "Triple.h"

Triple::Triple(string firstVar, string secondVar, string thirdVar) :
    firstElement(firstVar), secondElement(secondVar), thirdElement(thirdVar) {}

Triple::~Triple() {}

string Triple::first() {
    return firstElement;
}

string Triple::second() {
    return secondElement;
}

string Triple::third() {
    return thirdElement;
}