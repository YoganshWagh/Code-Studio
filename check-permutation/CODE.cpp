//QUESTION: https://www.codingninjas.com/studio/guided-paths/basics-of-python/content/118795/offering/1461411?leftPanelTab=0
//SOLUTION: https://www.codingninjas.com/studio/guided-paths/basics-of-python/content/118795/offering/1461411?leftPanelTab=3

#include <bits/stdc++.h> 
#include <iostream>
#include <cstring>
using namespace std;

bool isPermutation(char input1[], char input2[]) {
    // Write your code here
    unordered_map<char,int> str1;
    unordered_map<char,int> str2;
    int length = sizeof(input1);

    //storing character frequency into the map:
    for( int i(0); i<length; i++ )
    {
        str1[input1[i]]++;
        str2[input2[i]]++;
    }
    if( str1 == str2 ) return true;
    return false;
}

int main() {
    int size = 1e6;
    char str1[size];
    char str2[size];
    cin >> str1 >> str2;
    cout << (isPermutation(str1, str2) ? "true" : "false");
}
