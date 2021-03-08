#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a binary node at left side of parent node
 * @parent: pointer to the designated parent node
 * @value: value of n for the new node created
 *
 * Return: pointer to the new node or NULL if fail
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;
	binary_tree_t *temp = NULL;

	printf("prenull\n");
	if(parent == NULL)
	        return NULL;

	printf("premake\n");
	node = binary_tree_node(parent, value);
	printf("we made it\n");
	if (parent->left == NULL)
	{
		parent->left = node;
	}
	else
	{
		temp = parent->left;
	       	temp->parent = node;
	       	parent->left = node;
	       	node->left = temp;
       	}
       	return (node);
}
