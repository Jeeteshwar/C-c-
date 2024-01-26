// #include<stdio.h>
// int main()
// {
// int math,phy,chem,total;
// printf("Enter the marks of maths:\n");
// scanf("%d",&math);
// printf("Enter the marks of physics:\n");
// scanf("%d",&phy);
// printf("Enter the marks of chemistry:\n");
// scanf("%d",&chem);
// total=math+phy+chem;
// printf("The total of all subjects: %d marks\n",total);
// if(math>=60&&phy>=50&&chem>=60&&total>=230){
//     printf("Student is eligible for the admission");

// }
// else{
//     printf("The student is not eligible\n");
// }

// return 0;
// }


// #include <stdio.h>
// void main()
// {  int p,c,m,t,mp;

//    printf("Eligibility Criteria :\n");
//    printf("Marks in Maths >=65\n");
//    printf("and Marks in Phy >=55\n");
//    printf("and Marks in Chem>=50\n");
//    printf("and Total in all three subject >=190\n");
//    printf("or Total in Maths and Physics >=140\n");
//    printf("-------------------------------------\n");

//    printf("Input the marks obtained in Physics :");
//    scanf("%d",&p);
//    printf("Input the marks obtained in Chemistry :");
//    scanf("%d",&c);
//    printf("Input the marks obtained in Mathematics :");
//    scanf("%d",&m);
//    printf("Total marks of Maths, Physics and Chemistry : %d\n",m+p+c);
//    printf("Total marks of Maths and  Physics : %d\n",m+p);

//    if (m>=65)
//          if(p>=55)
//              if(c>=50)
// 	        if((m+p+c)>=190||(m+p)>=140)
// 	           printf("The  candidate is eligible for admission.\n");
// 	        else
// 	          printf("The candidate is not eligible.\n");
//              else
// 	    printf("The candidate is not eligible.\n");
//          else
// 	   printf("The candidate is not eligible.\n");
//     else
//      printf("The candidate is not eligible.\n");
// }

#include<stdio.h>
int main()
{
int age;
printf("Enter the age\n");
scanf("%d",&age);
switch(age)
{
    case 3:
        printf("The age is 3\n");
        break;
    case 15:
        printf("The age is 15\n");
        break;
    case 25:
        printf("The age is 25\n");
        break;
    default:
    printf("The age is neitger 3 nor 15 or 25\n");
        break;

}
return 0;
}