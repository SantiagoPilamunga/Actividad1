#include <stdio.h>
int main()
{
    int num,i=1;
    int suma=0;
    printf("Ingrese un numero: \n");
    scanf("%d",&num);
    if (num<0)
    {
        printf("la operacion no se puede realizar");
    }else{
        while (i<=num)
    {
        
        suma+=i;
        i=i+1;
    }
        printf("la suma del numero %d es: %d",num,suma);
    }
    
    
    
    return 0;
}
