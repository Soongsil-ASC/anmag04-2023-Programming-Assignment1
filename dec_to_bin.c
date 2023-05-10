#include <stdio.h>

long toBin(int);

int main(){
    long bno;
    int dno;
    printf("====================================================\n");
    printf("\tFunction : convert decimal to binary\n");
    printf("====================================================\n");
    printf("Decimal Number : ");
    scanf("%d", &dno);
    bno = toBin(dno);
    printf("The Binary value is : %ld\n\n",bno);
    return 0;
}

long toBin(int dno){
    
    int li[256] = {};
    int i = 0;
    
    while (1)
    {
        
        li[i] = dno % 2;
        dno /=  2;
        i++;
        
        
        if (dno == 1)
            break;
        
    }
    
    int k = 1;
    for (int j = i - 1; j >= 0; j--)
    {
        if (li[j] == 0)
            k *= 10;
        else
            k = k * 10 + 1;
    }
    
    return k;
}


