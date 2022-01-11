// This is program will be a menu in wich the user can select from different options, execute and come back to the main menu

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

char temp;
int question;

int main(void)
{
    bool menu = true;
    int answer;
    
    while(true)
    {
        system("clear");
        printf("\nWhat do you want to do?\
        \n\n1. Convert a string to lowercase letters.\
        \n2. Convert a string to uppercase letters.\
        \n3. Alternate letters of a string between upper and lowercase letters.\
        \n4. Replace a letter of a string.\n5. Execute Command line.\
        \n5. to Exit\
        \n\nR/: ");

        scanf("%d", &answer);

        if (answer == 1)
        {
            while (true)
            {
                scanf("%c", &temp);
                char string1[50];
                system("clear");
                printf("Type a string in Uppercase letters: ");
                scanf("%[^\n]", string1);
                printf("\nYour string converted to lowercase letters is: ");

                for (int i = 0; i < strlen(string1); i++)
                {
                    printf("%c", tolower(string1[i]));
                }
                printf("\n\n");
                printf("[0] to go back to main menu or [1] if you want to convert another string to lowercase letters...\
                \n\nR/:");
                scanf("%i", &question);
                if (question == 1)
                {
                    continue;
                }
                else if (question == 0)
                {
                    break;
                }
            }
        }
        else if (answer == 2)
        {
            while (true)
            {
                scanf("%c", &temp);
                char string2[50];
                system("clear");
                printf("Type a string in lowercase letters: ");
                scanf("%[^\n]", string2);
                printf("\nYour string converted to uppercase letters is: ");

                for (int i = 0; i < strlen(string2); i++)
                {
                    printf("%c", toupper(string2[i]));
                }
                printf("\n\n");
                printf("[0] to go back to main menu or [1] if you want to convert another string to lowercase letters...\
                \n\nR/:");
                scanf("%i", &question);
                if (question == 1)
                {
                    continue;
                }
                else if (question == 0)
                {
                    break;
                }
            }
        }
        else if (answer == 3)
        {
            while (true)
            {
                scanf("%c", &temp);
                char string3[50];
                system("clear");
                printf("Type a string to alternate letters: ");
                scanf("%[^\n]", string3);
                printf("\nYour string is: ");

                for (int i = 0; i < strlen(string3); i++)
                {
                    int pos = i % 2;
                    if (pos != 0)
                    {
                        printf("%c", toupper(string3[i]));    
                    }
                    else
                    {
                        printf("%c", string3[i]);
                    }
                }
                printf("\n\n");
                printf("[0] to go back to main menu or [1] if you want to convert another string to lowercase letters...\
                \n\nR/:");
                scanf("%i", &question);
                if (question == 1)
                {
                    continue;
                }
                else if (question == 0)
                {
                    break;
                }
            }
        }
        else if (answer == 4)
        {
            printf("you have selected option 4\n");
        }
        else if (answer == 5)
        {
            system("clear");
            printf("Enjoy your life!!\n\n");
            break;
        }
    }
}