#include "binary_trees.h"

/**
 * binary_tree_uncle - find the uncle of a node
 * @node: a pointer to the node to find the sibling
 * Return: if node has no uncle, return NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)

{
	binary_tree_t *parent;
	binary_tree_t *grandparent;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	{
		return (NULL);
	}

	parent = node->parent;
	grandparent = node->parent->parent;
	
	if (grandparent->left == parent)
		return (grandparent->right);	
	return (grandparent->left);
}
