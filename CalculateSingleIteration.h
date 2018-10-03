/* 
 * File:   calculate.h
 * Author: Nick Soetaert
 *
 * Created on March 5, 2018, 1:11 PM
 */
#ifndef CALCULATE_H
#define CALCULATE_H
#include <string>
#include "FindNumberPair.h"

using namespace std;

string CalculateSingleIteration(string &seed, string filename){
    int length = seed.size();
    string newNumber;    
    while(seed.length() > 0){
        newNumber += FindNumberPair(seed);
    }
    
    cout << "Whole string: " << newNumber << endl;
    seed = newNumber;
    return seed;

}
#endif /* CALCULATE_H */
