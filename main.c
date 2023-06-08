#include "ft_printf.h"

int main(void){
    
    int i = printf("%c\n", 'c');
    int j =ft_printf("%c\n", 'c');

    printf("%d\n%d", i, j);
}