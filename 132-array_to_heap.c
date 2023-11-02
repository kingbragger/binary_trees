#include "binary_trees.h"

/**
 * array_to_heap -it builds Max Binary Heap tree from an array
 * @array: A pointer to the first element of the array to be converted
 * @size: the number of element in the array
 *
 * Return: a pointer to the root node of the created Binary Heap
 *         NULL on failure
 */
heap_t *array_to_heap(int *array, size_t size)
{
	unsigned int z;
	heap_t *root = NULL;

	for (z = 0; z < size; z++)
		heap_insert(&root, array[z]);

	return (root);
}
