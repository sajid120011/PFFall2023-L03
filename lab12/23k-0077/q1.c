#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_COLUMNS 100
#define MAX_STRING_LENGTH 100
void readAndDisplayCSV(const char *file_path)
{
    FILE *file = fopen(file_path, "r");
    if (file == NULL) 
    {
        perror("Error opening file");
        return;
    }
    char line[MAX_STRING_LENGTH];
    char *token;
    int num_columns = 0;
    int num_rows = 0;
    // Reads the header
    if (fgets(line, sizeof(line), file) != NULL) 
    {
        // Count the number of columns in the header
        token = strtok(line, ",");
        while (token != NULL) 
        {
            num_columns++;
            token = strtok(NULL, ",");
        }

        // Print the total number of rows and columns
        printf("Total number of rows: 1\n");
        printf("Total number of columns: %d\n", num_columns);
        printf("\nHeader:\n%s", line);
        printf("\nData:\n");
    }
    // Read and display data
    while (fgets(line, sizeof(line), file) != NULL) 
    {
        num_rows++;
        printf("%s", line);
    }
    // Print the total number of rows
    printf("\nTotal number of rows: %d\n", num_rows);
    fclose(file);
}
int main() 
{
    const char *file_path = "organizations"; 
    readAndDisplayCSV(file_path);

    return 0;
}
