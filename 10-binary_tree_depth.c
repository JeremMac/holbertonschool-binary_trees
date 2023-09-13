#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: If tree is NULL, function  return 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)

{
	size_t depth = 0;

	if (tree == NULL)
	{
		return (0);
	}
	depth = binary_tree_depth(tree->parent);
	if (tree->parent == NULL)
	{
		return (0);
	}
	return (depth + 1);
}
