#include "ft_printf.h"

int main(void){
    
    char *c;
    int i = printf("%p\n", c);
    int j = ft_printf("%p\n", c);
    
    
    printf("Long original: %d\nLong mio: %d\n", i, j);
}