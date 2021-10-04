/*  C Program to Count Uppercase Lowercase Special characters in string  */

#include<stdio.h>

int main()
{
    char text[100];
    int i;
    int countL,countU,countS;

    printf("Enter any string: ");
    gets(text);

    //here, we are showing the user the string entered
    
    printf("\nEntered string is: %s\n",text);

    //count lower case, upper case and special characters
    //assign 0 to counter variables
    countL=countU=countS=0;

    for(i=0;text[i]!='\0';i++)
    {
        //check for alphabet(both upper & Lowercase)
        if((text[i]>='A' && text[i]<='Z') || (text[i]>='a' && text[i]<='z'))
        {
            //checking and counting for Uppercase
            if((text[i]>='A' && text[i]<='Z'))
            {
                
                countU++;
            }
            else
            {
                //checking and counting for Lowercase
                countL++;
            }
        }
        else
        {
            //character is not an alphabet
            countS++; //it is special character
        }
    }

    //print values
    printf("\nUpper case characters: [ %d ]\n",countU);
    printf("\nLower case characters: [ %d ]\n",countL);
    printf("\nSpecial characters: [ %d ]\n",countS);

    return 0;
}