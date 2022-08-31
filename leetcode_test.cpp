#include<iostream>
#include<string>
#include<stack>
#include<vector>
#include<queue>
#include <algorithm>    // std::sort
#include<unordered_map>
#include<unordered_set>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
using namespace std;

// PRINT_VECTOR
void printvector(vector<int>& nums){
    cout <<"Start printing vector:" <<endl;
    for (auto i:nums){
    cout << i << endl;
    }
 }
 
// TREENODE 
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

// LISTNODE
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
