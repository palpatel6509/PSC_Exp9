#include<stdio.h>

struct Student{
    int id;
    char name[50];
    int m1,m2,m3;
    int total;
};

int main()
{
    struct Student s[10];
    int i, maxIndex = 0;

    /* INPUT DETAILS FOR 10 STUDENTS */
    for(  i = 1; i <= 3; i++ )
    {
        printf("\nEnter details for Student %d:\n",i);
        printf("Student ID:");
        scanf("%d",&s[i].id);
        printf("Student Name:");
        scanf("%s",s[i].name);
        printf("Marks of 3 subjects:");
        scanf("%d %d %d",&s[i].m1 , &s[i].m2 , &s[i].m3);

        /* CALCULATE TOTAL MARKS */
        s[i].total = s[i].m1 + s[i].m2 + s[i].m3;
    }

    /* DISPLAY RESULT TABLE */
    printf("\n--- RESULT TABLE ---\n");
    printf("ID\tName\tSub1\tSub2\tSub3\tTotal\n");

    for( i = 1; i <= 3; i++ )
    {
        printf("%d\t%s\t%d\t%d\t%d\t%d\n",s[i].id,s[i].name,s[i].m1,s[i].m2,s[i].m3, s[i].total);

        /* TRACK INDEX OF STUDENT WITH HIGHEST TOTAL */
        if( s[i].total > s[maxIndex].total )
        {
            maxIndex  = i;
        }
    }

    /* DISPLAY STUDENT WITH HIGHEST TOTAL */
    printf("\n--- STUDENT WITH HIGHEST TOTAL ---\n");
    printf("ID: %d\n",s[maxIndex].id);
    printf("Name: %s\n",s[maxIndex].name);
    printf("Total Marks: %d\n",s[maxIndex].total);

    return 0;
}