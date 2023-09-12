#include "binary_trees.h"

/**
 * binary_tree_insert_right - A function that
 * inserts a node as the right-child
 * of another node.
 * @parent: a pointer to the node
 * to insert the right-child in
 * @value: is the value to store in the new node
 * Return: a node to the right.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(NULL, value);
	if (new_node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		parent->right->parent = new_node;
		new_node->right = parent->right;
	}
	parent->right = new_node;
	new_node->parent = parent;

	return (new_node);
}
