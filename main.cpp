/*
 * File:   main.cpp
 * Author: Nick Soetaert
 *
 * Created on March 5, 2018, 1:06 PM
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
#include "CalculateSingleIteration.h"

using namespace std;

int main(void) {
    int iterations;
    string seed, filename;
    cout << "Please enter your seed number" << endl;
    cin >> seed;
    cout << "Please enter the number of iterations you would like to calculate" << endl;
    cin >> iterations;
    cout << "And finally, please enter your output file name." << endl;
    cin >> filename;
    filename = filename + ".txt";
    
    ofstream outputStream;
    outputStream.open(filename);
    
    outputStream << "Seed number : " << seed << endl;
    outputStream << "Numeber of iterations: " << iterations << endl;
    
    outputStream << "0:" << "\t" << seed << endl;
    for(int i = 0; i < iterations; i++){
        outputStream << (i+1) << ":" << "\t" << CalculateSingleIteration(seed, filename) << endl;
    }
    outputStream.close();
    return 0;
}

