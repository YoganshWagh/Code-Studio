//QUESTION: https://www.codingninjas.com/studio/problems/range-sum-of-bst_1262280?leftPanelTabValue=PROBLEM
//REFERENCE: https://youtu.be/qIFhQ2m6i64?si=cmHkoVTN43LDaby5
//T.C = O(n)  &&  S.C = O(1) (Ignoging recursion stack space)

#include <bits/stdc++.h> 
int rangeSum(TreeNode<int> *root, int low, int high)
{
    if( root == NULL ) return 0;

    //if root lies wIthin range then we add it.
    if( root->data >= low && root->data <= high )
    {
        return root->data + rangeSum(root->left,low,high) + rangeSum(root->right,low,high);
    }

    //root->val < low then we go to right.
    if( root->data < low ) 
        return rangeSum(root->right,low,high);

    //root->val > high then we go to left.
    //if( root->val > high ) 
    return rangeSum(root->left,low,high);
}
