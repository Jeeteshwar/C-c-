#include<stdio.h>
int main()
{
int arr[5],i,pos_count=0,neg_count=0,even_count=0,odd_count=0,zero_count=0;

printf("Enter the 5 Number\n");
//For Input of Arrays!
        for(i=0;i<5;i++){
            printf("Enter Data For element %d: ",i+1);
            scanf("%d",&arr[i]);
        


    //For Postive and Negative Count!
        if (arr[i]> 0){
        pos_count++;
        }
        else if(arr[i]<0){
        neg_count++;
        }   
        // For Zero Count!
        else if(arr[i]==0){
            zero_count++;
        }
    //For Odd and Even Count!

        if (arr[i]%2==0 && arr[i]!=0){
            even_count++;
        }
        else if (arr[i]%2!=0){

        
            odd_count++;
    }
        }

    printf("The total count of Positive element in array: %d\n",pos_count);

        printf("The total count of Negative element in array: %d\n",neg_count);


    printf("The total count of Even element in array: %d\n",even_count);

        printf("The total count of Odd element in array: %d\n",odd_count);
    

    printf("The total count of Zero (0) elemet in array : %d\n",zero_count);

return 0;
}