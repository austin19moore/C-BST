#include<stdio.h>
#include<stdlib.h>
#include"bst.h"

int main(int argc, char *argv[]) {
	
	BSTNode* root = NULL;
	int userIn;
	int numVals;
	
	scanf("%d", &numVals);
	
	for (int i = 0; i < numVals; i++) {
		int userInput;
		scanf("%d", &userInput);
		root = insert(root, create(userInput));
		
	}
	
	scanf("%d", &userIn);
	
	if (userIn == 0) {
		traverseBST(root, PREORDER);
	} else if (userIn == 1) {
		traverseBST(root, INORDER);
	} else if (userIn == 2) {
		traverseBST(root, POSTORDER);
	}
	
	deleteBST(root);
	
	return 0;
}