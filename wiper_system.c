#include<stdio.h>
#include<stdlib.h>

int main()
{
int rain_intensity,engine_state;
printf("enter the engine state ON(1) or OFF(0)\n");
scanf("%d",&engine_state);
printf("rain intensity value\n");
scanf("%d",&rain_intensity);

if(engine_state==1)
{
    if(rain_intensity<100)
       {
        printf("PWM=0%\t");
        printf("wiper is ON\n");
       }
else if((rain_intensity>=100) && (rain_intensity<=250))
{
    printf("PWM=25%\t");
    printf("wiper is ON and LOW mode\n");
}
else if((rain_intensity>=251) && (rain_intensity<=500))
{
    printf("PWM=50%\t");
    printf("wiper is ON and MEDIUM mode\n");
}

else if((rain_intensity>500))
{
    printf("PWM=75%\t");
   printf("wiper is ON and HIGH mode\n");
}

}

return 0;
}
