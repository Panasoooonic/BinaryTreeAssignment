#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Functions.h"


#define MIN_RANGE 11
#define MAX_RANGE 20


int main()
{
	srand(time(0));

	char searchChar;
	int ranRange = rand() % (MAX_RANGE - MIN_RANGE + 1) + MIN_RANGE;
	struct TreeNode* root = NULL; // set up beginning of linked list

	for (int i = 0; i < ranRange; i++)
	{
		char nextChar = getRanChar();
		root = insert(root, nextChar);
	}

	printf("sorted nodes:\n");
	inorderTraversal(root);

	printf("\nNode count: %d\n", countTreeNodes(root));
	printf("Tree height: %d\n", getTreeHeight(root));

	
	printf("Enter a letter to find in the Binary Search Tree: "); // Ask user to choose a letter to find in tree
	scanf_s(" %c", &searchChar);

	struct TreeNode* foundNode = search(root, searchChar);
	if (foundNode != NULL) 
	{
		printf("%c is found in the tree.\n", searchChar);
	}
	else 
	{
		printf("%c is not found in the tree.\n", searchChar);
	}

}