//https://www.codingninjas.com/studio/guided-paths/basics-of-python/content/118795/offering/1461410?leftPanelTab=0

#include <iostream>
using namespace std;

string reverseStringWordWise(string s)
{
    //Write your code here
    int n = s.size();
    string ans = "";
    int i = 0;

    while( i < n )
    {
        string temp = "";

        //TO ENCOUNTER THE EXTRA SPACES:
        while( s[i] == ' ' && i<n )
            i++;

        //TO CHECK UPTO WHICH INDEX THE WORD IS PRESENT:
        while( s[i] != ' ' && i<n )
        {
            temp += s[i];
            i++;
        }
            
        //IF "temp" STRING IS GREATER THAN ZERO:
        //TO STORE ANSWER IN REVERSE ORDER IN "ans" STRING:
        if( temp.size() > 0 )
        {
            if( ans.size() == 0 )
                ans = temp;
            else
                ans = temp + ' ' + ans;
        }

    }
    return ans;
}

int main()
{
    string s;
    getline(cin, s);
    string ans = reverseStringWordWise(s);
    cout << ans << endl;
}

