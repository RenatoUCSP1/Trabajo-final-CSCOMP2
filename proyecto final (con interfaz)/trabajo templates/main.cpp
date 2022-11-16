#include<iostream>
#include <fstream>
#include <string>
using namespace std;
int main (){
    ifstream source("source-file.txt");
    ofstream destination ("dest-file.txt");
        string x ;
    getline (cin , x );
    source >> x;
    source.close();
    destination << x;
    return 0;
}
//para mejores puntuaciones