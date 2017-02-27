#include "inc/darray.h"
#include "inc/mem.h"

t_darray	darray_new(double growth_factor, size_t size, size_t capacity)
{
	t_darray	new;

	new.growth_factor = growth_factor;
	new.size = size;
	new.ll = ft_memalloc(size * capacity);
	new.start = new.ll + (capacity / 2) * size;
	new.end = new.start;
	new.rl = new.ll + capacity * size;
	return new;
}
