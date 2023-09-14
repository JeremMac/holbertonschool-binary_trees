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

	if (tree == NULL)
	{
		return (0);
	}
	
	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	if (height_left > height_right)
	{
		return (height_left + 1);
	}
	else
	{
		return (height_right + 1);
	}
}

/**
 * binary_tree_balance - A function
 * that measures the balance factor
 * of a binary tree.
 * @tree: A pointer to the root node
 * of the tree to measure the balance
 * factor.
 * Return: an int value of the balance
 * of the given tree.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (tree == NULL)
	{
		return (0);
	}

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return (left - right);
}