#include <stdlib.h>
#include "main.h"

/**
  * _realloc - allocate memory and set all values to 0
  * @ptr: pointer to the memory previously allocated
  * @old_size: size previously allocated
  * @new-size: new size to reallocate
  * Retrun: pointer to reallocated memory
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int i;

	if (new_size == 0 && ptr !== NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		else
			return (p);
	}
	
	for (i = 0; i < old_size && i < new_size; i++)
		*((char *)p + i) = *((char *)ptr + i);
	free(ptr);

	return (p);
}
