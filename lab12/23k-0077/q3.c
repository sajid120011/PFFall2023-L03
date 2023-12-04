#include <stdio.h>
#include <stdlib.h>
#define MAX_COURSES 100
struct Course 
{
    char code[20];
    char name[50];
    float gpa;
    int semester;
    int credit_hours;
};
void inputCourse(struct Course *course) 
{
    printf("Enter Course Code: ");
    scanf("%s", course->code);
    printf("Enter Course Name: ");
    scanf("%s", course->name);
    printf("Enter Course GPA: ");
    scanf("%f", &(course->gpa));
    printf("Enter Semester: ");
    scanf("%d", &(course->semester));
    printf("Enter Credit Hours: ");
    scanf("%d", &(course->credit_hours));
}
void saveToFile(struct Course *courses, int num_courses) 
{
    FILE *file = fopen("transcript.txt", "w");
    if (file == NULL) 
    {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < num_courses; ++i) 
    {
        fprintf(file, "Course Code: %s\n", courses[i].code);
        fprintf(file, "Course Name: %s\n", courses[i].name);
        fprintf(file, "GPA: %.2f\n", courses[i].gpa);
        fprintf(file, "Semester: %d\n", courses[i].semester);
        fprintf(file, "Credit Hours: %d\n", courses[i].credit_hours);
        fprintf(file, "-----------------\n");
    }
    fclose(file);
}
void viewTranscript(struct Course *courses, int num_courses) 
{
    for (int i = 0; i < num_courses; ++i) 
    {
        printf("Course Code: %s\n", courses[i].code);
        printf("Course Name: %s\n", courses[i].name);
        printf("GPA: %.2f\n", courses[i].gpa);
        printf("Semester: %d\n", courses[i].semester);
        printf("Credit Hours: %d\n", courses[i].credit_hours);
        printf("-----------------\n");
    }
}
float calculateCGPA(struct Course *courses, int num_courses) 
{
    float total_points = 0;
    int total_credit_hours = 0;
    for (int i = 0; i < num_courses; ++i) 
    {
        total_points += courses[i].gpa * courses[i].credit_hours;
        total_credit_hours += courses[i].credit_hours;
    }
    if (total_credit_hours == 0) 
    {
        return 0; 
    }
    return total_points / total_credit_hours;
}
float calculateSGPA(struct Course *courses, int num_courses) 
{
    float total_points = 0;
    int total_credit_hours = 0;
    for (int i = 0; i < num_courses; ++i) 
    {
        total_points += courses[i].gpa * courses[i].credit_hours;
        total_credit_hours += courses[i].credit_hours;
    }
    if (total_credit_hours == 0) 
    {
        return 0; 
    }
    return total_points / total_credit_hours;
}
int main() 
{
    struct Course courses[MAX_COURSES];
    int num_courses = 0;
    int choice;
    do 
    {
        printf("\n1. Input Course\n");
        printf("2. View Transcript\n");
        printf("3. Calculate CGPA\n");
        printf("4. Calculate SGPA\n");
        printf("5. Save to File\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) 
        {
            case 1:
                if (num_courses < MAX_COURSES) 
                {
                    inputCourse(&courses[num_courses]);
                    num_courses++;
                } 
                else 
                {
                    printf("Maximum number of courses reached!\n");
                }
                break;
            case 2:
                viewTranscript(courses, num_courses);
                break;
            case 3:
                printf("CGPA: %.2f\n", calculateCGPA(courses, num_courses));
                break;
            case 4:
                printf("SGPA: %.2f\n", calculateSGPA(courses, num_courses));
                break;
            case 5:
                saveToFile(courses, num_courses);
                printf("Data saved to 'transcript.txt'\n");
                break;
            case 6:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 6.\n");
        }
    } 
    while (choice != 6);
    return 0;
}
