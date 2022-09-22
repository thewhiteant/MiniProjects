#include<stdio.h>
#include<stdlib.h>
void main()
{
    int x,maxs,count,y;
    count = 0;
    printf("Give me a number: ");
    scanf("%d",&x);
    printf("Give him a chance: ");
    scanf("%d",&maxs);
    int scr = maxs*10;
    system("CLS");
    while(maxs--)    
    {
        printf("The Number : ");
        scanf("%d",&y);
        if(x==y){
            printf("Congratulation You guess correct!!! ");
            break;

        }else{
            count++;
            printf("Wrong\n");
            if(maxs == 0){
                printf("\n Game Over \n"); 
                }}}

    printf("Your Score Is %d",scr-(count*10));
    
    }

