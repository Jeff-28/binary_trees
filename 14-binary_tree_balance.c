#include "binary_trees.h"
#include "9-binary_tree_height.c"
/**
 * binary_tree_balance - calculates balance factor
 * @tree: root node of tree
 *
 * Return: balance factor or 0 if null
 **/
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t heightLeft = 0;
	size_t heightRight = 0;

	if (tree != NULL)
	{
		if (tree->left)
			heightLeft = binary_tree_height(tree->left) + 1;
		if (tree->right)
			heightRight = binary_tree_height(tree->right) + 1;

		return (heightLeft - heightRight);
	}
	return (0);
}
