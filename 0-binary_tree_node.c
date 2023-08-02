#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_node - Creates a Binary tree node
 * @parent: Pointer to the parent node
 * @value: integer stored in the node
 * Return: a node of type binary_tree_t
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t  *newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
		return	(NULL);
	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;

	return (newNode);
}
