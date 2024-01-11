//QUESTION: https://www.codingninjas.com/studio/problems/maximum-difference-between-node-and-ancestor_980227?leftPanelTabValue=PROBLEM
//T.C = O(n)
//S.C = O(n)

#include <bits/stdc++.h> 
int findMaxDiff(BinaryTreeNode<int>* root, int maxV, int minV)
{
    if(root == NULL) 
        return abs(maxV-minV);

    minV = min(minV, root->data);
    maxV = max(maxV, root->data);

    int l = findMaxDiff(root->left, maxV, minV);
    int r = findMaxDiff(root->right, maxV, minV);

    return max(l,r);
}

int maxAncestorDiff(BinaryTreeNode<int>* root) 
{
    return findMaxDiff(root, root->data, root->data);
}