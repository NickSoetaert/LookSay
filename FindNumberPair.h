/* 
 * File:   FindNumberGroup.h
 * Author: Nick Soetaert
 *
 * Created on March 5, 2018, 1:42 PM
 */

#ifndef FINDNUMBERGROUP_H
#define FINDNUMBERGROUP_H

#include <string>


using namespace std;

string FindNumberPair(string &seed){
    int counter = 0;
    int seedSize = seed.size();
    char firstChar = seed[0];
    while(firstChar == seed[counter]){
        counter++;
    }
    //cut off the numbers we just read
    seed = seed.substr(counter, seedSize);
    
    string twoNumbersToReturn = std::to_string(counter) + firstChar;
    //cout << "Single pair: " << twoNumbersToReturn << endl; //for debug
    return twoNumbersToReturn;
}

#endif /* FINDNUMBERGROUP_H */