#include<stdio.h>
int main()
{
int arr[25];
int pos_cnt=0, neg_cnt=0, odd_cnt=0,even_cnt=0;
for(int i =0;i<25;i++){
    printf("Enter the value %d:",i+1);
    scanf("%d",&arr[i]);
}
for(int i =0;i<25;i++){
    if(arr[i]>0){
        pos_cnt++;
    }
    else if(arr[i]<0){
        neg_cnt++;
    }
    if(arr[i]%2==0){
        even_cnt++;
    }
    else{
        odd_cnt++;
    }
}
    printf("The count goes as [POSITIVE:%d] [NEGATIVE:%d] [EVEN:%d] [ODD:%d]",pos_cnt,neg_cnt,even_cnt,odd_cnt);

return 0;

}