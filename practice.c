/*#include <string.h>
#include <stdio.h>

int main(int argc,char**argv)
{
    int i,j,value=1;
    printf("***Hello!***");

    while(value)
    {
        char month[12][20]={{"January"},{"February"},{"March"},{"April"},{"May"},{"June"},{"July"},{"August"},{"September"},{"October"},{"November"},{"December"}};
        char month_number[12][20]={{"first"},{"second"},{"third"},{"fourth"},{"fifth"},{"sixth"},{"seventh"},{"eighth"},{"ninth"},{"tenth"},{"eleventh"},{"twelfth"}};
        char answer[20];
        printf("\nPlease enter the name of a month: ");
        scanf("%s", answer);

        do
        {
            if(!strcasecmp(answer,month[i]))
            {
                printf("%s is the %s month\n", month[i],month_number[i]);
            }

            else if(!strcmp(answer, "exit"))
            {
            printf("Exiting...");
            value=0;
            }

            i++;
        }while(i<12);

        if(strcasecmp(answer,month[i]))
        {
            printf("Unknown month: %s\n", answer);
        }
    }
}*/
int main(int argc, char ** argv)
{
    if(!(argc<6))
  {
    printf("Not happening.\n");
  }
}
