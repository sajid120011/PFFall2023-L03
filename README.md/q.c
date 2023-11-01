#include <stdio.h>
int main() 
{
    int batsmen, innings;
    printf("Enter the number of batsmen: ");
    scanf("%d", &batsmen);
    printf("Enter the number of innings: ");
    scanf("%d", &innings);
    int performance[batsmen][innings];
    for (int i = 0; i < batsmen; i++) 
	{
        printf("Enter batting performance for Batsman %d:\n", i + 1);
        for (int j = 0; j < innings; j++) 
		{
            printf("Inning %d: ", j + 1);
            scanf("%d", &performance[i][j]);
        }
    }
    for (int i = 0; i < batsmen; i++) 
	{
        int total_Runs = 0, max_Score = 0, centuries = 0, half_Centuries = 0;
        printf("\nPerformence of Batsman %d:\n", i + 1);
        for (int j = 0; j < innings; j++) 
		{
            total_Runs += performance[i][j];
            if (performance[i][j] > max_Score) 
			{
                max_Score = performance[i][j];
            }
            if (performance[i][j] >= 100) 
			{
                centuries++;
            } 
			else if (performance[i][j] >= 50) 
			{
                half_Centuries++;
            }
        }
        double average_Runs = (double)total_Runs / innings;
        printf("Total Runs: %d\n", total_Runs);
        printf("Average: %.2lf\n", average_Runs);
        printf("Highest Score: %d\n", max_Score);
        printf("Centuries: %d\n", centuries);
        printf("Half-Centuries: %d\n", half_Centuries);
    }
    return 0;
}

