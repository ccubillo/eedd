/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Carolina y María
 *
 * Created on 23 de septiembre de 2016, 10:16
 */

#include <cstdlib>
#include <iostream>
#include "Vector.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Vector<char> v(2);
    const char c = 'C';
    const char a = 'A';
    v.escribir(0,c);
    v.escribir(1,a);
    
    for(int i = 0; i < 2; ++i){
        cout << v[i] << endl;
    }
    return 0;
}

