
You are given the root node of a binary tree with N nodes, whose nodes have integer values. Your task is to find the maximum depth of the given Binary tree.

Depth of a binary tree is the same as its height. In simpler terms, you have to find the total number of nodes encountered while moving from the root node to the farthest leaf node, along the longest path of the binary tree.


Example:-
If we are given the above binary tree as input then moving from root node(5) to the farthest leaf node(50), the path formed will be [ 5->10->25->35->40->45->50 ]. The total number of nodes encountered is 7, therefore the maximum depth of the binary tree is 7.

Constraints:
1 <= T <= 100
1 <= N <= 3000
0 <= data <= 10^9
Time Limit: 1sec


Sample Input 1:
3
1 2 3 -1 -1 -1 -1
1 2 3 4 -1 5 6 -1 7 -1 -1 -1 -1 -1 -1
1 2 -1 3 -1 4 -1 5 -1 -1 -1
Sample Output 1:
2
4
5
Explanation For Sample Input 1:
In the first test case,  the given tree has the longest path along [ 1 -> 2 ] or [ 1->3 ], hence the maximum depth is 2.

In the second test case, the given tree has the longest path along [ 1 -> 2 -> 4-> 7 ], hence the maximum depth is 4.

In the thirds test case, the given tree is a left-skewed tree having the longest path along [ 1 -> 2 -> 3-> 4 ->5 ], hence the maximum depth is 5.


Sample Input 2:
4
1 2 3 4 5 6 7 -1 -1 -1 -1 -1 -1 -1 -1
1 2 -1 3 -1 4 -1 5 -1 6 -1 7 -1 -1 -1
1 2 3 -1 -1 4 -1 -1 -1 
1 -1 -1 
Sample Output 2:
3
7
3
1    