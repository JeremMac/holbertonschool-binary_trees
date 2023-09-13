#include "binary_trees.h"

/**
 * check_left - A function that
 * checks the left side of a tree.
 * @tree: a pointer to the root
 * node of the tree to measure
 * the height.
 * Return: 0 if tree is NULL
 * else return height.
 */
size_t check_left(const binary_tree_t *tree)
{
	size_t height = 0;

	if (tree == NULL)
	{
		return (0);
	}
	height++;
	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}
	if (tree->left != NULL && tree->right != NULL)
	{
		height++;
	}

	binary_tree_height(tree->left);
	binary_tree_height(tree->right);

	return (height);
}

/**
 * check_right - A function that
 * checks the right side of a tree.
 * @tree: a pointer to the root
 * node of the tree to measure
 * the height.
 * Return: 0 if tree is NULL
 * else return height.
 */
size_t check_right(const binary_tree_t *tree)
{
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

	binary_tree_height(tree->right);
	binary_tree_height(tree->left);

	return (height);
}

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

	height_left = check_left(tree);
	height_right = check_right(tree);

	if (height_left > height_right)
	{
		return (height_left);
	}
	if (height_right > height_left)
	{
		return (height_right);
	}
	return (height_left);
}

