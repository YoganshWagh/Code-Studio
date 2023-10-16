//https://www.codingninjas.com/studio/guided-paths/basics-of-python/content/118795/offering/1461408?leftPanelTab=0

#include <bits/stdc++.h> 
#include <iostream>
#include <cstring>
using namespace std;

int countWords(string input) {
    // Write your code here
    int count = 1;
    for( auto x : input )
    {      
        if( x == ' ' )
            count++;
    }

    return count;
}

int main() {
    string input;
    getline(cin, input);
    int output = countWords(input);
    cout << output << endl;
    return 0;
}