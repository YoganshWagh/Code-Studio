// https://www.codingninjas.com/studio/problems/modular-exponentiation_1082146?leftPanelTab=0

#include <bits/stdc++.h>

int modularExponentiation(int x, int n, int m) {
	
	int res = 1;

	while( n>0 )
	{
		if( n&1 )
		{
			res = (1LL*res*x)%m;
		}
		x = (1LL*x*x)%m;
		n = n>>1;   //it is n/2.

	}

	return res;
}