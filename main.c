#include "ft_printf.h"

int	main(void)
{
	// char *c;
	// c = "hola que tal";
	// int i = printf("%p\n", c);
	// int j = ft_printf("%p\n", c);
	int i;
    i = 62323345;

	// printf("Long original: %d\nLong mio: %d\n", i, j);
	int j = ft_printf("%d\n",i);
	int k = printf("%d\n",i);


	printf("\n\n\n%d---%d\n\n",j,k);
}
