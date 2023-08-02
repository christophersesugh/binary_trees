#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_insert_right - inserts the new node to achild
 * @parent: pointer to the node to insert the child
 * @value: value to store in the new node
 * Return: returns a pointer to the created node or NULL
 * Description: Inserts a new node to the right or replaces the existing
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tee_t *newNode;

	if (parent == NULL)
		return (NULL);
	newNode = malloc(sizeof(bianry_tree_t));
	if (newNode == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		newNode->right = parent->right;
		parent->right->parent = newNode;
	}
	parent->right = newNode;

	return (newNode);
}
