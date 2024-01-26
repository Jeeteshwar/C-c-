#include<stdio.h>
float force(float mass);
int main()
{
float mass;
printf("Enter the mass in kg:\n");
scanf("%f", &mass);
printf("The force of the mass is: %.1f J",force(mass));
return 0;
}
float force(float mass){
    float result= mass * 9.8;
    return result;

}