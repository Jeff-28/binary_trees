#include "binary_trees.h"

/**
 * max - returns the maximum value between two values
 * @a: value to compare
 * @b: value to compare
 *
 * Return: the maximum value
 */
int max(int a, int b)
{
	return (a < b ? b : a);
}

/**
 * binary_tree_height - measures the height of a binary
 * @tree: a pointer to the root node of the tree to measure the height
 *
 * Return: the height of the binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	else if (tree->left != NULL || tree->right != NULL)
		return (max(binary_tree_height(tree->left), binary_tree_height(tree->right)) + 1);
	else
		return (0);
}
