//Catalan.h
//CSS 342 Program2
//Implemented by Kray Nguyen on 11/2/2020
#ifndef C_H
#define C_H

#include <string>
using namespace std;

// The class models the Catalan number sequence 
class Catalan {
private:
    int num_;
    int catalan_numerator;
    int catalan_denominator;
    int catalan_;
    int FactoriaHelper(int num_);
    int CatalanHelper(int num_);
};

#endif
