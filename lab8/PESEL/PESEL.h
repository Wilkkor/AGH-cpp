//
// Created by kornel on 25.04.17.
//

#ifndef JIMP_EXERCISES_PESEL_H
#define JIMP_EXERCISES_PESEL_H

#include <string>
#include <string.h>

using namespace std;

class PESEL {
private:
    char * tab;
public:
    PESEL(string wej);
    ~PESEL();
    void validate_PESEL();



};


#endif //JIMP_EXERCISES_PESEL_H
