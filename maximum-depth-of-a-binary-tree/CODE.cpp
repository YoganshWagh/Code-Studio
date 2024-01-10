//QUESTION: https://www.codingninjas.com/studio/problems/maximum-depth-of-a-binary-tree_1090542?leftPanelTabValue=PROBLEM
//REFERENCE: https://leetcode.com/problems/maximum-depth-of-binary-tree/solutions/1770060/c-recursive-dfs-example-dry-run-well-explained/
//TC - O(num of nodes) as we are traversing all the nodes of the tree
//SC - O(height of the tree) for the recursive stack

#include <bits/stdc++.h> 
int findMaxDepth(TreeNode<int> *root) 
{
	if(root == NULL) return 0;
    int leftDepth = findMaxDepth(root->left); 
    int rightDepth = findMaxDepth(root->right);
    return max(leftDepth, rightDepth)+1;
}
