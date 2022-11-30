// Caleb Magoola
// C Bingo Verifier Project

#include <stdio.h>
#include <string.h>

/* Prints out a 5x5 "card" or "pattern" */
/* Use for debugging! */
void print_card(char *c[5][5])
{
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
            printf("%s ", &c[i][j]);
        printf("\n");
    }
}

// DEFINE YOUR PROCEDURES HERE!!!

int main()
{
    char *bingoPattern[5][5];
    char numStr[225]; /* the longest line of called numbers is 225 chars */
    char *calledStrNums[75];
    char *oneStrNum;
    int calledCt = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            fscanf(stdin, "%s", &bingoPattern[i][j]);
        }
    }

    fgets(numStr, 225, stdin);
    fgets(numStr, 225, stdin);
    fgets(numStr, 225, stdin);

    // Adding a 0 or end indicator for array
    // FK deleted: char temp;
    // FK deleted: append(numStr, temp);

    numStr[strlen(numStr)] = 0; // Adding a 0 or end indicator for array

    oneStrNum = strtok(numStr, " ");

    /* tokenize the string of space-separated numbers */
    while (oneStrNum != NULL)
    {
        calledStrNums[calledCt] = oneStrNum;
        calledCt++;
        oneStrNum = strtok(NULL, " ");
    }
    /* At this point, calledStrNums is a list of strings (the called numbers) */

    /* The following four lines are not for the */
    /* final project. They only print out the list */
    /* of called numbers with "->" between them to prove */
    /* to you that they are in the array as strings. */
    printf("\n");
    printf("calledCt: %d\n", calledCt);
    for (int i = 0; i < calledCt; i++)
        printf("%s-> ", calledStrNums[i]);

    // PUT ALL CALLS TO OTHER PROCEDURES HERE!!!

    return 0;
}