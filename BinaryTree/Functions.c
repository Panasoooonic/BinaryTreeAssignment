#include "Functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


char getRanChar()
{
	int newChar = rand() % (122 - 97 + 1) + 97; // Get random ASCii number for letter
	char nextChar = newChar;
	return nextChar;
}


// Create a new branch node with a random letter
struct TreeNode* createNode(char letter)
{
	struct TreeNode* branchNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
	if (branchNode == NULL)
	{
		exit(0);
	}
	branchNode->letter = letter;
	branchNode->pLeft = NULL;
	branchNode->pRight = NULL;
	return branchNode;
}

//Search for a specific letter within the tree 
struct TreeNode* search(struct TreeNode* node, char findLetter)
{
	if (node == NULL || node->letter == findLetter)
	{
		return node;
	}
	if (findLetter < node->letter)
	{
		return search(node->pLeft, findLetter);
	}
	else if (findLetter > node->letter)
	{
		return search(node->pRight, findLetter);
	}
}

struct TreeNode* insert(struct TreeNode* node, char letter)
{
	if (node == NULL) // if node does not exist then create node
	{
		return createNode(letter);
	}
	if (letter <= node->letter)  // check and set left side first for letter
	{
		node->pLeft = insert(node->pLeft, letter);
	}
	else if (letter > node->letter) // check and set right side for letter
	{
		node->pRight = insert(node->pRight, letter);
	}

	return node;
}

void inorderTraversal(struct TreeNode* node) 
{
	if (node == NULL) {
		return;
	}

	inorderTraversal(node->pLeft);
	printf("%c ", node->letter);
	inorderTraversal(node->pRight);
}


int countTreeNodes(struct TreeNode* node)
{
	if (node == NULL)
	{
		return 0;
	}

	int leftHeight = countTreeNodes(node->pLeft);
	int rightHeight = countTreeNodes(node->pRight);

	return (leftHeight + rightHeight + 1);
}


int getTreeHeight(struct TreeNode* node)
{
	if (node == NULL)
	{
		return -1;
	}

	int leftHeight = getTreeHeight(node->pLeft);
	int rightHeight = getTreeHeight(node->pRight);

	if (leftHeight > rightHeight)
	{
		return (leftHeight + 1);
	}
	else
	{
		return (rightHeight + 1);
	}
}