//QUESTION: https://www.codingninjas.com/studio/problems/split-string_3744737?leftPanelTabValue=PROBLEM
//T.C = O(n)
//S.C = O(n)

#include <bits/stdc++.h> 
bool splitString(string &s){
    
    int n = s.size();
    int i = 0, j = n/2;
    int countL = 0;
    int countR = 0;

    string vowels = "aeiouAEIOU";
    unordered_set<char> st( begin(vowels), end(vowels) );

    while( i<j && j<n )
    {
        if( st.find(s[i]) != st.end() ) countL++;
        if( st.find(s[j]) != st.end() ) countR++;
        i++; j++;
    }
    return countL == countR;
}