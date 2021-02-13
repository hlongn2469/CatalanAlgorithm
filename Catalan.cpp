//Catalan.cpp
//CSS 342 Program2
//Implemented by Kray Nguyen on 11/2/2020
#include "Catalan.h"
#include <cstdlib>
#include <iostream>
#include <typeinfo>
using namespace std;

// implementation of catalan sequence where it takes in positive int values 
// from the command prompt and calculate Catalan sequence
// Helper functions are available to calculate Catalan formulas

long double FactoriaHelper(int num_){
    if(num_ == 0 || num_ == 1){
        return 1;
    } else {
        return num_ * FactoriaHelper(num_ - 1);
    }
}

// returns final catalan number 
// Catalan formula applied at: https://sites.math.washington.edu/~nichifor/310_2008_Spring/Pres_CatalanNumbers.pdf
long double CatalanHelper(int num_){
    if(num_ <= 1){
        return 1;
    } else {
        long double catalan_numerator = FactoriaHelper(2 * num_);
        long double catalan_denominator = FactoriaHelper(num_ + 1) * FactoriaHelper(num_);
        long double catalan_ = catalan_numerator / catalan_denominator;
        return catalan_;
        CatalanHelper(num_-1);
    }
}

int main(int argc, char *argv[]){
    int num_ = atoi(argv[1]);
    if(num_ < 0){
        cout << "Please enter positive interger number!" << endl;
    } else {
        cout << CatalanHelper(num_) << endl;
    }
    return 0;
}
