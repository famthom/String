#ifndef NEWSTRING_H
#define NEWSTRING_H

#include <iostream>
#include <cstring>
#include <cassert>
#include <iomanip>

using namespace std;

class newString
{
    public:
        friend ostream& operator << (ostream&, const newString&);
        friend istream& operator >> (istream&, newString&);
    public:
        const newString& operator=(const newString&);
        newString operator+(const newString&) const;
        newString& operator+=(const newString&);

        int length();

        newString(const char *);
        newString();

        newString(const newString&);
        ~newString();

        char &operator[] (int);
        const char &operator[](int) const;

        bool operator==(const newString&) const;
        bool operator!=(const newString&) const;
        bool operator<=(const newString&) const;
        bool operator<(const newString&) const;
        bool operator>=(const newString&) const;
        bool operator>(const newString&) const;

    protected:

    private:
        char* strPtr; //!< Member variable "strPtr"
        int strLength; //!< Member variable "strLength"
};

#endif // NEWSTRING_H
