#include "binary_trees.h"

/**
 * is_leaf - check node if leaf
 * @node: pointer to node to be checked
 *
 * Return: 0 if not 1 if yes
 */
int is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);
	return (1);
}
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
 * tree_height - measures the height of a binary
 * @tree: a pointer to the root node of the tree to measure the height
 *
 * Return: the height of the binary tree
 */
size_t tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	else if (tree->left != NULL || tree->right != NULL)
		return (max(tree_height(tree->left), tree_height(tree->right)) + 1);
	else
		return (0);
}
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if it is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (is_leaf(tree))
		return (1);
	if (tree_height(tree->left) == tree_height(tree->right))
	{
		if (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right))
			return (1);
	}
	return (0);
}
