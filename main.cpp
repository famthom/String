#include "include/newString.h"

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    newString str = "My waifus ";
    newString ch = "Swyrias";
    newString obj[10];
    newString negObj[-10];

    obj[3] = "Misuzu ";
    obj[2] = "Emilia ";
    obj[1] = "Rena ";
    obj[0] = "Riandri ";

    //cout << obj[2] << endl;
    //cout << obj[1] << endl;
    //cout << obj[0] << endl;

    char chr[20] = "Dyrias";
    strcat(chr, " Swyrias");
    //cout << chr << endl << endl;

    //obj[1] += obj[0];
    obj[4] = obj[1] + obj[3] + obj[0] + obj[2];
    str += obj[4];
    cout << str << endl << endl;
    cout << obj[1];
    /*char* name;
    name = new char[10];
    const char* sName;
    sName = "Dyrias";
    strcpy(name, sName); */
    //cout << name;

    //for(int i = 0; i < 2; i++)
    //     cout << obj[i] << " ";

    return 0;
}
