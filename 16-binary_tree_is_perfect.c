#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height;
	size_t size;
	size_t expected_size;

	if (tree == NULL)
	{
		return (0);
	}

	height = binary_tree_height(tree);
	size = binary_tree_size(tree);
	expected_size = (1UL << (height + 1)) - 1;

	if (size == expected_size)
	{
		return (1);
	}
	return (0);
}
