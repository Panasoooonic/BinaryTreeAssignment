#include <stdio.h>


typedef struct TreeNode* link;

typedef struct
{
	char* letter[1];
	link pLeft;
	link pRight;

} TreeNode;

void insert()
{

}

void Search()
{

}

void countNodes()
{

}
void getTreeHeight()
{

}


int main()
{
	TreeNode* Root = (TreeNode*)malloc(sizeof(TreeNode)); // set up begining of linked list
	if (Root == NULL) exit(0); // Crash program if the malloc fails to allocate memory

}