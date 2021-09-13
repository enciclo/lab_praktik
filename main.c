#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <malloc.h>
//Функция перевода десятичного целого числа в систему счисления с основанием "3"
char* Convert10To3NumberSystem(int* number)
{
    //Строка с результатом
    char *ResultStr;    
    ResultStr = (char *)malloc(10 * sizeof(char));
    //В случае если число положительное 
    if(*number>=0)
    {
        //int index = 1;
        //ResultStr[index++] =  *number%3 + '0';  
        //printf ("Numb 1 = %c",ResultStr[0]);    
        printf("In the ternary (3) number system, the number %d = ",*number);        
        printf ("%d",*number%3);         
        while((*number = (*number/3)))
        {
            
            //ResultStr[index++] =  *number%3 + '0'; 
            // printf("\nNumb ");
            // printf("%d",index);
            //printf(" = %d",*number%3);  
            printf ("%d",*number%3); 
            
        }
    }
    else
    {

    }
    //printf ("Result = %s",*ResultStr);
    ResultStr = "\nPositive Numbers Output_Test\n";
    return ResultStr;
}
int main()
{
    int number;
    printf("Enter any integer in the decimal system:\n");
    scanf("%d",&number);
    number = abs(number); // Пока что перевод будет корректным только для положительных чисел
    printf(Convert10To3NumberSystem(&number));
    printf("\nCompletion of the work program\nPress any button to exit!");
    getch();
    return 0;
}
