#include "binary_trees.h"

/**
 * binary_tree_height - A function that
 * measures the height of a binary tree.
 * @tree: a pointer to the root
 * node of the tree to measure
 * the height.
 * Return: 0 if tree is NULL
 * else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0;
	size_t height_right = 0;
	size_t height = 0;

	if (tree == NULL)
	{
		return (0);
	}
	height++;
	if (tree->right == NULL && tree->left == NULL)
	{
		return (0);
	}
	if (tree->right != NULL && tree->left != NULL)
	{
		height++;
	}

	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	if (height_left > height_right)
	{
		return (height_left);
	}
	if (height_right > height_left)
	{
		return (height_right);
	}
	return (height);
}

