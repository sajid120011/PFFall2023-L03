#include <stdio.h>
#include <stdlib.h>
void createAndWriteWordFile(const char *filename, const char *content) 
{
    FILE *file = fopen(filename, "wb");
    if (file == NULL) 
    {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }
    fwrite(content, sizeof(char), strlen(content), file);
    fclose(file);
}
int compareFiles(const char *file1, const char *file2) 
{
    FILE *f1 = fopen(file1, "rb");
    FILE *f2 = fopen(file2, "rb");
    if (f1 == NULL || f2 == NULL) 
    {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }
    int ch1, ch2;
    // Compare file contents character by character
    do 
    {
        ch1 = fgetc(f1);
        ch2 = fgetc(f2);
        if (ch1 != ch2) 
        {
            fclose(f1);
            fclose(f2);
            return 0; // Files are not equal
        }
    } 
    while (ch1 != EOF && ch2 != EOF);
    fclose(f1);
    fclose(f2);
    return 1; // Files are equal
}
int main() 
{
    const char *file1 = "file1.docx";
    const char *file2 = "file2.docx";
    const char *content = "This is a test.";
    createAndWriteWordFile(file1, content);
    createAndWriteWordFile(file2, content);
    // Compare file contents
    if (compareFiles(file1, file2)) 
    {
        printf("The contents of the two files are equal.\n");
    } 
    else 
    {
        printf("The contents of the two files are not equal.\n");
    }
    return 0;
}
