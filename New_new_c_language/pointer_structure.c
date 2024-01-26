#include<stdio.h>
struct student 
{
int age;
float weight;
};
int main(){
struct student *p,s={10.20};
p=&s;
printf("age: %d\n",(*p).age);
printf("weight: %f",p->weight);

return 0;
}