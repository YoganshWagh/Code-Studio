//QUESTION: https://www.codingninjas.com/studio/guided-paths/interview-guide-for-product-based-companies/content/110297/offering/1280152?leftPanelTabValue=PROBLEM
//T.C = O(n^2)
//S.C = O(n)

#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s)
{
   vector<vector<int>> ans;

   for(int i=0; i<arr.size(); i++)
   {
      for(int j=i+1; j<arr.size(); j++)
      {
         if(arr[i] + arr[j] == s)
            ans.push_back({min(arr[i],arr[j]),max(arr[i],arr[j])});
      }
   }
   sort(ans.begin(),ans.end());
   return ans;
}