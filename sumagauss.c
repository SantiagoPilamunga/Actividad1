#include <stdio.h>
int main()
{
    int num,i=1;
    int suma=0;
    int suma2=0;
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
        printf("La suma de gauss del numero %d es: %d \n",num,suma);
        //procedimiento con for 
        for ( i = 1; i <=num; i++)
        {
            suma2+=i;
        }
        printf("Con for La suma de gauss del numero %d es: %d \n",num,suma2);
    }
    printf("Gracias por usar el programa \n");
    
    
    
    return 0;
}
