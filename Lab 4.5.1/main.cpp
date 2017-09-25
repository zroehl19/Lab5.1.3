/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: zroehl
 *
 * Created on September 25, 2017, 1:31 PM
 */

#include <iostream>
#include <string>

using namespace std;

/*
 * 
 */
int main() {
    string sentence;
    getline(cin, sentence);
    
    for (int i = 0; i < sentence.length();)
    {
        if(sentence.at(i) == ' ' && sentence.at((i)-1) == ' ')
        {
            sentence.erase(i,1);
        }
        else
        {
            i++;
        }
    }
    
    cout << sentence << "\n";
}

