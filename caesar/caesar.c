#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
                                // Confirms the two arguments included to run the program
    if (argc == 2)
    {
                                // Iterates on the key in command line and ensures it is a positive integer
        for (int i = 0; i < strlen(argv[1]); i++)
        {
                                // Returns error message if key includes anything other than digits
            if (isdigit(argv[1][i]) == false)
            {
                printf("Usage: ./caesar key\n");
                return 1;
            }
        }
            int k = atoi(argv[1]);

        string plaintext = get_string("plaintext: ");
        printf("ciphertext: ");


        for (int i = 0; i < strlen(plaintext); i++)
        {
                                // Converts all lower letter alphabet
            if (plaintext[i] >= 'a' && plaintext[i] <= 'z')
            {
                printf("%c", ((((plaintext[i] - 'a') + k) % 26) + 'a'));
            }
                                // Converts all upper letter alphabet
            else if (plaintext[i] >= 'A' && plaintext[i] <= 'Z')
            {
                printf("%c", ((((plaintext[i] - 'A') + k) % 26) + 'A'));
            }
                                // Returns any character other than alphabet
            else
            {
                printf("%c", plaintext[i]);
            }
        }
        printf("\n");
        return 0;
    }
                                // Returns an error message if the code isn't executed in proper formatting
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
}