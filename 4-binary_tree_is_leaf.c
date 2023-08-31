#include "binary_trees.h"
/**
 * binary_tree_is_leaf -  creates a binary tree node.
 *
 * @node: a pointer to the node to check
 *
 * Return: pointer to the new node, or NULL on failure
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->left && !node->right)
		return (1);
	return (0);
}
