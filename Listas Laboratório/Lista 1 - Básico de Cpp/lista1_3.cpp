/**
 * Lista 1 - Questão 3
 * purpose: reading files
 */

#include <string>
#include <fstream>
#include <iostream>

using namespace std;

int main(){
    string s, file_name;
    int i, counter = 0;

    ifstream arq("The_road_not_taken.txt");

    while(getline(arq, s))
        for(int i = 0; i < s.size(); i++)
            if (s[i] == ' ')
            counter++;
    cout << "Number of spaces = " << counter << endl;
}