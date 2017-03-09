//
// Created by kornel on 07.03.17.
//

#include "Polybius.h"
#include <cstring>

using namespace std;

int main(int argc,char *argv[])
{
    if(argc<4)
        std::cout<<"zle za malo argumentow"<<endl;
    ifstream wej(argv[1]);
    if(!wej)
        cerr << "Error code: " << strerror(errno);

    ofstream wyj(argv[2]);
    int temp=argv[3][0]-'0';
    bool r;
    if(temp==1)
        r=1;
    else
        r=0;
    string tmp;
    if(r==1)
    {
        while(!wej.eof())
        {
            wej>>tmp;
            //cout<<tmp;
            tmp=PolybiusCrypt(tmp);
            wyj<<tmp;
            tmp.clear();
            //if(tmp.size()<=1)
             //   break;
        }
    } else
    {
        while(!wej.eof())
        {
            wej>>tmp;
            //cout<<tmp;
            tmp=PolybiusDecrypt(tmp);
            wyj<<tmp;
            tmp.clear();
            //if(tmp.size()<=1)
            //    break;
        }
    }


    return 0;
}
