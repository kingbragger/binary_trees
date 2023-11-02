#include"binary_trees.h"
/**
 * array_to_bst - It Builds a Binary Search Tree from an array,
 * @array: pointer to the first elemnt of the array to be converted.
 * @size: the number of elements in the array.
 * Return: A pointer to the root node of the created BST
 *         NULL on failure
 */

bst_t *array_to_bst(int *array, size_t size)
{
	unsigned int z;
	bst_t *root = NULL;

	for (z = 0; z < size; z++)
		bst_insert(&root, array[z]);

	return (root);
}
