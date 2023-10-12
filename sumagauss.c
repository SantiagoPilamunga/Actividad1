#include <stdio.h>
int main()
{
    int num,i=1;
    int suma=0;
    printf("Ingrese un numero");
    scanf("%d",&num);
    if (num<0)
    {
        printf("la operacion no se puede realizar");
    }else{
        while (i!=num)
    {
        
        suma+=i;
        i=i+1;
    }

    }
    
    
    
    return 0;
}
