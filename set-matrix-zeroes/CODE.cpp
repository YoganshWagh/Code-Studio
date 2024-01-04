//QUESTION: https://www.codingninjas.com/studio/problems/set-matrix-zeros_3846774?leftPanelTabValue=PROBLEM
//REFERENCE: https://youtu.be/W6La6f7POk0?si=jkCBxyhPfOiu5EIJ
//T.C = O(m*n)  &  S.C = O(m+n)

#include <bits/stdc++.h>
void setZeros(vector<vector<int>> &matrix)
{
	int n = matrix.size();      //rows
	int m = matrix[0].size();   //columns
	//to store which rows and columns we have to make zero.
	vector<int> x, y;  

	for( int i=0; i<n; i++ )
	{
		for( int j=0; j<m; j++ )
		{
			if( matrix[i][j] == 0 )
			{
				x.push_back(i);
				y.push_back(j);
			}
		}
	}

	//Making rows to zero.
	for( int i=0; i<x.size(); i++ )
	{
		int index = x[i];
		for( int j=0; j<m; j++ )
			matrix[index][j] = 0;
	}   

	//Making columns to zero.
	for( int i=0; i<y.size(); i++ )
	{
		int index = y[i];
		for( int j=0; j<n; j++ )
			matrix[j][index] = 0;
	} 
	
}