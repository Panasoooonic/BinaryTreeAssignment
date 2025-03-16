#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct TreeNode
{
	char letter;
	struct TreeNode* pLeft;
	struct TreeNode* pRight;

};

char getRanChar();
struct TreeNode* createNode(char letter);
struct TreeNode* search(struct TreeNode* node, char findLetter);
struct TreeNode* insert(struct TreeNode* node, char letter);
void inorderTraversal(struct TreeNode* node);
int countTreeNodes(struct TreeNode* node);
int getTreeHeight(struct TreeNode* node);
