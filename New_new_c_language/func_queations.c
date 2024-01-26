#include<stdio.h>
    int swap(int *p, int *q){
        int temp;
        temp=*p;
        *p=*q;
        *q=temp;
    
}
    int main(){
    
int n1,n2;
                printf("Enter the number_1\n"); scanf("%d",&n1);
                
                printf("Enter the number_2\n"); scanf("%d",&n2); 
                
        printf("The value of %d and %d before swap\n",n1,n2);
        

                    swap(&n1,&n2);
                    
                    
printf("The value of %d and %d after swap\n",n1,n2);
return 0;
}