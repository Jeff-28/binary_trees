#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: the value to put in the new node
 *
 * Return: pointer to the new node, or null on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *temp;

	temp = malloc(sizeof(binary_tree_t));
	if (!temp)
		return (NULL);
	temp->n = value;
	temp->left = NULL;
	temp->right = NULL;
	if (parent == NULL)
	{
		temp->parent = NULL;
		parent = temp;
	}
	else
	{
		temp->parent = parent;
		if (!parent->left)
			parent->left = temp;
		else
			parent->right = temp;
	}
	return (temp);
}
