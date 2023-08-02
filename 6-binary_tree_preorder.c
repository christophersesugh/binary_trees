#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_preorder - Function that goes through a binary tree using pre-order traversal
 * @tree: pointer to the root node of the tree to transverse
 * @func: a pointer to a function to call for each node. Value in the node passed as aparameter
 * Return: None
 * Description: Function that goes through a binary tree using pre-order traversal
 *
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{	
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}