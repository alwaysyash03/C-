#include <stdio.h>
int main()
{
    // Declare a file pointer
    FILE *fp;
    // Declare a character array to store the file name
    char fileName[20];
    // Declare a character variable to store the characters
    char ch;
    // Prompt the user to enter the file name
    printf("Enter the file name to create: ");
    // Read the file name from the user
    scanf("%s", fileName);
    // Open the file in write mode
    fp = fopen(fileName, "w");
    // Check if the file was opened successfully
    if (fp == NULL)
    {
        // Print an error message and exit the program
        printf("File could not be created!\n");
        
    }
    // Print a success message
    printf("File created successfully.\n");
    // Write some characters to the file
    putc('H', fp);
    putc('e', fp);
    putc('l', fp);
    putc('l', fp);
    putc('o', fp);
    // Print a success message
    printf("Data written successfully.\n");
    // Close the file
    fclose(fp);
    // Open the file in read mode
    fp = fopen(fileName, "r");
    // Check if the file was opened successfully
    if (fp == NULL)
    {
        // Print an error message and exit the program
        printf("File could not be opened!\n");
        
    }
    // Print the contents of the file
    printf("Contents of the file are:\n");
    // Read one character at a time from the file until the end of file is reached
    while ((ch = getc(fp)) != EOF)
    {
        // Print the character
        printf("%c", ch);
    }
    // Close the file
    fclose(fp);
    // Return 0 to indicate successful termination of the program
    return 0;
}

