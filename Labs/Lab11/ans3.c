/*task 3
Store n students whose structure should have name, id and courses
where for each student there can be different courses and each course has a courseid, name and IC. store them and show them like this:
student 1 f2019PS0202 courses
CS101 CP Nikumani CS432 DS Geeta Maam
and so on...
CODE:*/

#include <stdio.h>
#include <stdlib.h>
typedef struct course
{
    char courseID[100];
    char courseName[100];
    char icName[100];
} course;
typedef struct student
{
    char name[100];
    char ID[100];
    int courses;
    course *courseList;
} student;
int main(void)
{
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    student *studentList = (student *)malloc(n * sizeof(student));
    for (int t = 0; t < n; t++)
    {
        printf("Enter name of Student %d: ", t + 1);
        scanf("%s", (studentList + t)->name);
        printf("Enter ID of Student %d: ", t + 1);
        scanf("%s", (studentList + t)->ID);
        printf("Enter number of courses enrolled in: ");
        int k = 0;
        scanf("%d", &k);
        (studentList + t)->courses = k;
        (studentList + t)->courseList = (course *)malloc(k * sizeof(course));
        for (int i = 0; i < k; i++)
        {
            printf("Enter name of course %d: ", i + 1);
            scanf("%s", ((studentList + t)->courseList + i)->courseName);
            printf("Enter ID of course %d: ", i + 1);
            scanf("%s", ((studentList + t)->courseList + i)->courseID);
            printf("Enter name of IC %d: ", i + 1);
            scanf("%s", ((studentList + t)->courseList + i)->icName);
            printf("\n");
        }
        printf("\n");
    }
    printf("Enter which entry you would like to review: (1 to%d)(0->exit)", n);
    int k = 0;
    scanf("%d", &k);
    while (k != 0)
    {
        printf("Name of student: %s\n", (studentList + k - 1)->name);
        printf("ID number of student: %s\n", (studentList + k - 1)->ID);
        printf("Courses enrolled in: \n");
        course *enrolledCourses = (studentList + k - 1)->courseList;
        for (int y = 0; y < (studentList + k - 1)->courses; y++)
        {
            printf("Course Name: %s\n", (enrolledCourses + y)->courseName);
            printf("Course ID: %s\n", (enrolledCourses + y)->courseID);
            printf("Course IC: %s\n", (enrolledCourses + y)->icName);
            printf("\n");
        }
        printf("Enter which entry you would like to review: (1 to%d)(0->exit)", n);
        scanf("%d", &k);
    }
    return 0;
}
