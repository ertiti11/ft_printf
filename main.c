#include "ft_printf.h"





int main(void){
    int original = printf("original: %x\n",0);
    int mio = ft_printf("mio: %x\n",0);

    printf("\n%d\n", original);
    printf("%d",mio);
}