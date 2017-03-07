//
// Created by kornel on 07.03.17.
//

#include "Polybius.h"

string PolybiusCrypt(std::string message)
{
    string wynik;
    int a,b;
    char as,bs;
    for (int i = 0; i < message.size(); ++i) {
        if(message[i]==' ')
            continue;
        if(message[i]>='A'&&message[i]<='Z')
            message[i]-='A'-'a';
        message[i]-='a';
        if(message[i]>8)
            message[i]-=1;
        b =message[i]%5;
        a =message[i]/5;
        as='1'+a;
        bs='1'+b;
        wynik=wynik+as+bs;
    }
    return wynik;

}
string PolybiusDecrypt(std::string crypted)
{
    char polibius[5][5]={{'a','b','c','d','e'},{'f','g','h','i','k'},{'l','m','n','o','p'},{'q','r','s','t','u'},{'v','w','x','y','z'}};
    string wynik;
    int a,b;
    for (int i = 0; i < crypted.size(); i+=2) {
        if(crypted[i]==' ')
        {
            i--;
            continue;
        }
        a=crypted[i]-'1';
        b=crypted[i+1]-'1';
        wynik=wynik+polibius[a][b];
    }
    return wynik;
}