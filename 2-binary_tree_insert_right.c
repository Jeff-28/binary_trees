#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a binary node at right side of parent node
 * @parent: pointer to the designated parent node
 * @value: value of n for the new node created
 *
 * Return: pointer to the new node or NULL if fail
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;
	binary_tree_t *temp = NULL;

	if(parent == NULL)
		return NULL;
	node = binary_tree_node(parent, value);
	if (parent->right == NULL)
	{
		parent->right = node;
	}
	else
	{
		temp = parent->right;
		temp->parent = node;
		parent->right = node;
		node->right = temp;
	}
	return (node);
}
