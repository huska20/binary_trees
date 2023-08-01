#include "binary_trees.h"

/**
 * is_node_root - Checks if a given binary tree node is a root node.
 * @node: A pointer to the binary tree node to check.
 *
 * Return: 1 if the node is a root node, otherwise 0.
 */

int is_node_root(const binary_tree_t *node)
{
	/* Check if the node exists and has no parent (i.e., it's a root node)*/
	if (node && !node->parent)
		return 1;

	/* The node is not a root node*/
	return 0;
}

/**
 * binary_tree_is_root - Checks if a given node is a root node in a binary tree.
 * @node: A pointer to the binary tree node to check.
 *
 * Return: 1 if the node is a root node, otherwise 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	/* Call the helper function to check if the node is a root node*/
	return is_node_root(node);
}
