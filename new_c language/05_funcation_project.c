#include<stdio.h>
void GoodMorning_Sir();
void GoodMorning_Mam();
void GoodAfternoon_Sir();
void GoodAfternoon_Mam();
void GoodEvening_Sir();
void GoodEvening_Mam();

int main()
{
int time;
char gender;
printf("Enter Your Gender (M or F/)\n");
scanf("%c",&gender);


printf("Enter the time: \n");
scanf("%d",&time);
switch(gender)
    {
        case 'M':
            if (time>=9 && time<12){
                GoodMorning_Sir();
            }
            if(time>=12 && time<=5){
                GoodAfternoon_Sir();
            }
            else if (time>5&& time<=8){
                GoodEvening_Sir();
            }
            break;
        case 'F':
            if (time>=9 && time<12){
                GoodMorning_Mam();
            }
            if(time>12 && time<=5){
                GoodAfternoon_Mam();
            }
            else if (time>5&& time<=8){
                GoodEvening_Mam();
            }
            break;
        default:
            printf("Unspecified Gender.");
            break;
    }



return 0;
}



void GoodMorning_Sir(){
    printf("GoodMorning_Sir!!!\n");
}
void GoodMorning_Mam(){
    printf("GoodMorning_Mam!!!\n");
}
void GoodAfternoon_Sir(){
    printf("GoodAfter Noon_Sir!!!\n");
}

void GoodAfternoon_Mam(){
    printf("GoodAfter Noon_Mam!!!\n");
}
void GoodEvening_Sir(){
    printf("GoodEvening_Sir!!!\n");
}
void GoodEvening_Mam(){
    printf("GoodEvening_Mam!!!\n");
}

