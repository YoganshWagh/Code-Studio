// https://www.codingninjas.com/studio/problems/print-like-a-wave_893268?leftPanelTab=1

#include <bits/stdc++.h> 
vector<int> wavePrint(vector<vector<int>> arr, int row, int col)
{
    vector<int> ans;

    //to print in wave form:
    for( int i=0; i<col; i++)
    {
        //odd case: bottom to top printing.
        if( i&1 )
        {
            for( int j = row-1; j>=0; j--)
            {
                ans.push_back(arr[j][i]);
            }
        }
        //even number case: top to bottom ptinting.
        else
        {
             for( int j=0; j<row; j++)
            {
                ans.push_back(arr[j][i]);
            }
        }
    }

    return ans;
}