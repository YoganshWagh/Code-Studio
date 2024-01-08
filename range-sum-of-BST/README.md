
You are given a Binary Search Tree with its root node and a range. Your task is to find the sum of all the values of the nodes whose values lie in the given range(L, R) inclusive.

A Binary Search tree is a tree in which all the nodes follow the following properties:
1. The value of a node of the left sub-tree is less than the value of the node.
2. The value of a node of the right sub-tree is greater than or equal to the value of the node.

Detailed explanation ( Input/output format, Notes, Images )
Constraints:
1 <= T <= 50
0 <= L <= R <= 10 ^ 5
1 <= N <= 10 ^ 4
1<= DATA <=10 ^ 5 and DATA != -1

Where ‘T’ is the number of test cases, ‘L’ is the starting value of the Range, ‘R’ is the ending value of the Range,  and ‘N’ is the total number of nodes in the binary tree, and “DATA” is the value of the binary tree node

Time Limit: 1 sec.


Sample Input 1:
2
18 24
24 15 33 12 21 30 36 9 -1 18 -1 27 -1 -1 -1 -1 -1 -1 -1 -1 -1 
19 21
15 9 21 7 13 19 23 5 -1 11 -1 17 -1 -1 -1 -1 -1 -1 -1 -1 -1
Sample Output 1:
63
40
Explanation for Sample Input 1:
In the first test case, The value of the nodes are 24, 15, 33, 12, 21, 30, 36, 9, 18, and 27 and the values which lie in the range of [18, 24] are 18, 21, and 24. So, the answer is 63.

In the second test case, The value of the nodes are 15, 9, 21, 7, 13, 19, 23, 5, 11, and 17 and the values which lie in the range of [19, 21] are 21, and 19. So, the answer is 40.


Sample Input 2:
2
21 23
15 9 21 7 13 19 23 5 -1 11 -1 17 -1 -1 -1 -1 -1 -1 -1 -1 -1
31 37
25 16 34 13 22 31 37  -1 -1 -1 -1 -1 -1 -1 -1
Sample Output 2:
44
102