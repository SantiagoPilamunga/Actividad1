#include <stdio.h>
int main()
{
    int num,i=1;
    int suma=0;
    printf("Ingrese un numero: \n");
    scanf("%d",&num);
    if (num<0)
    {
        printf("La operacion no se puede realizar \n");
    }else{
        while (i<=num)
    {
        
        suma+=i;
        i=i+1;
    }
        printf("La suma del numero %d es: %d \n",num,suma);
    }
    printf("Gracias por usar el programa \n");
    
    
    return 0;
}
