#include "binary_trees.h"

/**
 * binary_tree_depth - find the depth of a node
 * @tree: node of which the depth must be found
 *
 * Return: depth of tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL || tree->parent == NULL)
		return (0);

	depth = binary_tree_depth(tree->parent) + 1;
	return (depth);
}
