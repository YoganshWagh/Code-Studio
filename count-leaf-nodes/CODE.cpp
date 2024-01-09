//QUESTION: https://www.codingninjas.com/studio/problems/count-leaf-nodes_893055?leftPanelTabValue=PROBLEM
//REFERENCE: https://youtu.be/rlWJlXQNt0Q?si=AOiRiDDWZzcFvMxI
//T.C : O(n)
//S.C : O(1)

void inOrder(BinaryTreeNode<int> *root, int& count)
{
    if(root == NULL) return;

    //leaf node.
    if(root->left == NULL && root->right == NULL)
    {
        count++;
        return;
    }
    inOrder(root->left, count);
    inOrder(root->right, count);
}

int noOfLeafNodes(BinaryTreeNode<int> *root){
    int count = 0;
    inOrder(root, count);
    return count;
}