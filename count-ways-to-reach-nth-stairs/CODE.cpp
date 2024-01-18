//QUESTION: https://www.codingninjas.com/studio/problems/count-ways-to-reach-nth-stairs_798650?leftPanelTabValue=PROBLEM
//REFERENCE: https://youtu.be/6OjGE04Kx_M?si=wcp6UAH8Dnd8G6TI
//T.C = O(n)
//S.C = O(1)

#include <bits/stdc++.h> 
int countDistinctWays(int n) 
{
    int prev = 1, curr = 1;
    for(int i=2; i<=n; i++)
    {
        int temp = curr;
        curr = (prev + curr)%1000000007;
        prev = temp;
    }
    return curr;
}