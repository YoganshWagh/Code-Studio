//https://www.codingninjas.com/studio/problems/sum-of-two-arrays_893186

#include <bits/stdc++.h> 

vector<int> Reverse( vector<int> v )
{
	int s = 0;
	int e = v.size() - 1;

	while( s<e )
		swap( v[s++], v[e--] );

	return v;
}
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	
	int i = n-1;
	int j = m-1;

	int carry = 0;

	vector<int> v;

	while( i>=0 & j>=0 )
	{
		int val1 = a[i];
		int val2 = b[j];

		int sum = val1 + val2 + carry;
		carry = sum/10;
		sum = sum%10;
		v.push_back(sum);
		i--;
		j--;
	}

	//FIRST CASE WHEN LENGTH OF FIRST ARRAY IS BIGGER:
	while( i>=0 )
	{
		int sum = a[i] + carry;
		carry = sum/10;
		sum = sum%10;
		v.push_back(sum);
		i--;
	}

	//SECOND CASE WHEN LENGTH OF SECOND ARRAY IS BIGGER:
	while( j>=0 )
	{
		int sum = b[j] + carry;
		carry = sum/10;
		sum = sum%10;
		v.push_back(sum);
		j--;
	}

	//THIRD CASE WHEN SIZE OF BOTH ARRAYS IS SAME BUT CARRY IS REMAINING:
	while( carry>0 )
	{
		int sum = carry;
		carry = sum/10;
		sum = sum%10;
		v.push_back(sum);
	}

	//WE NEED TO REVERSE OUR ARRAY AS ARRAY IS GIVING REVERSE ANSWER:
	v = Reverse(v);
	return v;

}