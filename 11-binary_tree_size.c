#include "binary_trees.h"

/**
 * binary_tree_size -  measures the size of a binary tree
 * @tree: a pointer to the root node of the tree to measure the size
 * Return: If tree is NULL, function  return the size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)

{
	size_t size_left = 0;
	size_t size_right = 0;
	size_t total_size = 0;

	if (tree == NULL)
	{
		return (0);
	}
	size_left = binary_tree_size(tree->left);
	size_right = binary_tree_size(tree->right);
	total_size = size_left + size_right;

	return (total_size + 1);
}



