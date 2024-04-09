#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: Pointer to the root node 
 *
 * Return: balance or 0 if tree is NULL
 */
 int binary_tree_balance(const binary_tree_t *tree)
 {
    int left_height, right_height;

    if (tree == NULL)
    return (0);

    left_height = binary_tree_height(tree->left);
    right_height = binary_tree_height(tree->right);

    return (left_height - right_height);
 } 

 /**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height.
 *
 * Return: Height of the binary tree, 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
	return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}
