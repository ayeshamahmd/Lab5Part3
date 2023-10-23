/* Lab 5 P3: program to count letter occurrences in input*/
#include <stdio.h>
#include <string.h>

int main()
{
    char input[256];
    int letterCount[26] = {0}; // Array to store the count of each letter initialized to zeros

    printf("Enter text strings (press Enter on an empty line to exit):\n");

    while (1)
    {
        fgets(input, sizeof(input), stdin); // get the input from the user via keyboard

        // Check for an empty line to exit the loop
        if (strlen(input) == 1 && input[0] == '\n')
        {
            break;
        }

        // Iterate through the characters in the input
        for (int i = 0; i < strlen(input); i++)
        {
            char currentChar = input[i];

            // Check if the character is an uppercase letter
            if (currentChar >= 'A' && currentChar <= 'Z')
            {
                letterCount[currentChar - 'A']++;
            }
            // Check if the character is a lowercase letter
            else if (currentChar >= 'a' && currentChar <= 'z')
            {
                letterCount[currentChar - 'a']++;
            }
        }
    }

    // Display the letter counts
    printf("Distribution of letters in the input:\n");
    for (int i = 0; i < 26; i++)
    {
        char currentChar = 'A' + i;
        printf("%c: %d ", currentChar, letterCount[i]);
    }

    return 0;
}
