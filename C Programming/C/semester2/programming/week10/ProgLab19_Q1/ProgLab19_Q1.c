/*
    Program Descriptor: Compare two text files and display differences

    Author: Aleksy Szopinski

    Date: 01/04/2025
*/
//Header Files
#include <stdio.h>

//Main 
int main()
{
    //variables:
    FILE *fp1;
    FILE *fp2;
    char ch1;
    char ch2;

    //start program:
    fp1 = fopen("text1.txt","r");
    fp2 = fopen("text2.txt","r");

    if(fp1 == NULL || fp2 == NULL)
    {
        printf("Opening Files Unsuccesful");
    }
    else
    {
        printf("Files opened succesfully:\n");
        printf("Checking for differences...\n");
        printf("|\t?\ttext1.txt\t|\ttext2.txt\t|\n");
        //compare text1.txt and text2.txt for differences in characters:
        while((((ch1 = fgetc(fp1))!=EOF && (ch2 = fgetc(fp2))!=EOF)) || (((ch1 = fgetc(fp1))!=EOF) || ((ch2 = fgetc(fp2))!=EOF)))
        {
            if(ch1 == ch2)
            {
                if(ch1 != '\n' && ch2 != '\n')
                {
                    printf("|\tSame:");
                    printf("\t\t%c\t|",ch1);
                    printf("\t\t%c\t|\n",ch2);
                }
                else
                {
                    printf("|\tSame:");
                    printf("\t\t\\n\t|",ch1);
                    printf("\t\t\\n\t|\n",ch2);
                }
            }//end if
            else
            {
                if(ch1 != '\n' && ch2 != '\n')
                {
                    printf("|\tDifferent:");
                    printf("\t%c\t|",ch1);
                    printf("\t\t%c\t|\n",ch2);
                }
                else if(ch1 == '\n')
                {
                    printf("|\tDifferent:");
                    printf("\t\\n\t|");
                    printf("\t\t%c\t|\n",ch2);
                }
                else
                {
                    printf("|\tDifferent:");
                    printf("\t%c\t|",ch1);
                    printf("\t\t\\n\t|\n");
                }
            }//end else
        }//end while
    }
    //close files
    fclose(fp1);
    fclose(fp2);

    //end program:
    return 0; 

}//end main()
