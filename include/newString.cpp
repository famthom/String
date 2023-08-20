#include "newString.h"

ostream& operator << (ostream& output, const newString& str) {
    output << str.strPtr;
    return output;
}

istream& operator >> (istream& input, newString& str) {
    input >> str.strPtr;
    return input;
}

const newString& newString::operator=(const newString& str) {
    if(this != &str) {
        delete [] strPtr;
        strLength = str.strLength;
        strPtr = new char [strLength + 1];

        strcpy(strPtr, str.strPtr);
    }
    return *this;
}

newString newString::operator+(const newString& str) const {
    newString temp;
    delete [] temp.strPtr;
    temp.strLength = str.strLength + strLength;
    temp.strPtr = new char[temp.strLength+1];
    strcpy(temp.strPtr, strPtr);
    strcat(temp.strPtr, str.strPtr);

    return temp;
}

newString& newString::operator+=(const newString& str) {
    newString temp;
    delete [] temp.strPtr;
    temp.strPtr = new char[strLength + 1];
    temp.strLength = strLength;
    strcpy(temp.strPtr, strPtr);

    delete [] strPtr;
    strLength = temp.strLength + str.strLength;
    strPtr = new char [strLength +1];

    strcpy(strPtr, temp.strPtr);
    strcat(strPtr, str.strPtr);

    return *this;
}

int newString::length() {
    return strLength + 1;
}

newString::newString(const char * cStr) {
    strLength = strlen(cStr);
    strPtr = new char [strLength + 1];

    strcpy(strPtr, cStr);
}

newString::newString() {
    strPtr = new char[1];
    strcpy(strPtr, "");
    strLength = 1;
}

newString::newString(const newString& str) {
    strLength = str.strLength + 1;
    strPtr = new char[strLength];
    strPtr = str.strPtr;
}

newString::~newString() {
    delete [] strPtr;
}

char& newString::operator[] (int index) {
    assert(index < 0 || index > strLength);
    return strPtr[index];
}

const char& newString::operator[](int index) const {
    assert(index < 0 && index > strLength);
    return strPtr[index];
}

bool newString::operator==(const newString& str) const {
    if (strPtr == str.strPtr)
        return true;
    else
        return false;
}

bool newString::operator!=(const newString& str) const  {
    if (strPtr != str.strPtr)
        return true;
    else
        return false;
}

bool newString::operator<=(const newString& str) const  {
    if (strPtr <= str.strPtr)
        return true;
    else
        return false;
}

bool newString::operator<(const newString& str) const {
    if (strPtr < str.strPtr)
        return true;
    else
        return false;
}

bool newString::operator>=(const newString& str) const {
    if (strPtr >= str.strPtr)
        return true;
    else
        return false;
}

bool newString::operator>(const newString& str) const {
    if (strPtr > str.strPtr)
        return true;
    else
        return false;
}
