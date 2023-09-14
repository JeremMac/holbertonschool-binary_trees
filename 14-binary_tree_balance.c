#include "binary_trees.h"

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
	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}

	left = binary_tree_balance(tree->left);
	right = binary_tree_balance(tree->right);
    	if (tree->left != NULL && tree->right == NULL)
	{
		return (left - right);
	}
	if (tree->left == NULL && tree->right != NULL)
	{
		return (right - left - 1);
	}
	return (left + right + 1);
}
