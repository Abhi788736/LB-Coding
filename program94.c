int m/*
    *   *   *   *   
    *   *   *   *   
    *   *   *   *   
*/

#include<stdio.h>

void Display()
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 4; iCnt++)
    {
        printf("*\t");
    }
    printf("\n");

    for(iCnt = 1; iCnt <= 4; iCnt++)
    {
        printf("*\t");
    }
    printf("\n");

    for(iCnt = 1; iCnt <= 4; iCnt++)
    {
        printf("*\t");
    }
    printf("\n");
}

int main()
{

    Display();

    return 0;
}


/*
            *   *   *   *               printf("*\t");
                                        printf("*\t");
                                        printf("*\t");
                                        printf("*\t");

            *   *   *   *   
                                        printf("*\t");
                                        printf("*\t");
                                        printf("*\t");
                                        printf("*\t");
                                        
            *   *   *   *   

                                        printf("*\t");
                                        printf("*\t");
                                        printf("*\t");
                                        printf("*\t");
                                        








*/