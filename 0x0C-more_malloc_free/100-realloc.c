#include "main.h"

/**
 * _realloc - reallocate a memory block using malloc and free
 * @ptr: a pointer to the memory previously allocated with a call to malloc
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes, of the new memory block
 *
 * Description: The contents will be copied to the newly allocated space in
 * the range from the start of ptr up to the minimum of the old and new sizes.
 * If new_size is greater than old_size, the additional memory will not be
 * initialized.
 *
 * Return: If new_size is equal to old_size, do nothing and return ptr. If
 * new_size is equal to zero and ptr is not NULL, call free(ptr) and return
 * NULL. If memory allocation fails, return NULL. In all other cases, return
 * a pointer to the newly allocated memory.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == old_size)
		return (ptr);

	if (!ptr)
		return (malloc(new_size));

	if (!new_size)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	if (!new_ptr)
		return (NULL);

	_memcpy(new_ptr, ptr, old_size < new_size ? old_size : new_size);
	free(ptr);

	return (new_ptr);
}
