#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Course {
    char authorName[50];
    char courseName[100];
    int price;
    char address[150];
    char description[200];
    char started_date[15];
};

void inputCourseDetails(struct Course *courses, int n) {
    int i;

    for (i = 0; i < n; i++) {
        printf("Input detail information of course (%d):\n", i + 1);
        printf("Input author name: ");
        fflush(stdout);
        gets(courses[i].authorName);
		fflush(stdin);
		
        printf("Input course name: ");
        fflush(stdout);
        gets(courses[i].courseName);
        fflush(stdin);
        
        printf("Input price: ");
        fflush(stdout);
        scanf("%d", &courses[i].price);
        getchar(); // Clear the newline character
        fflush(stdin);

        printf("Input course's address: ");
        fflush(stdout);
        gets(courses[i].address);
        fflush(stdin);
        

        printf("Input description: ");
        fflush(stdout);
        gets(courses[i].description);
        fflush(stdin);
        

        printf("Input started date (yyyy-mm-dd): ");
        fflush(stdout);
        gets(courses[i].started_date);
        fflush(stdin);
        

        printf("\n");
    }

    printf("Course details input successful!\n");
}

void sortAndDisplayCourses(struct Course *courses, int n) {
    int i, j;
    struct Course temp;

    // Sort courses based on author name using bubble sort
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strcmp(courses[j].authorName, courses[j + 1].authorName) > 0) {
                temp = courses[j];
                courses[j] = courses[j + 1];
                courses[j + 1] = temp;
            }
        }
    }

    printf("Sorted course list:\n");
    for (i = 0; i < n; i++) {
        printf("%s (%s, %d, %s, %s, %s)\n", courses[i].authorName, courses[i].courseName,
               courses[i].price, courses[i].address, courses[i].description, courses[i].started_date);
    }
}

int main() {
    int choice, n;
    struct Course *courses;

    printf("Enter the number of courses: ");
    scanf("%d", &n);
    fflush(stdin);

    courses = (struct Course *)malloc(n * sizeof(struct Course));

    do {
        printf("\nMain Menu:\n");
        printf("1. Input detail information of courses\n");
        printf("2. Sort & Display detail information of courses\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        fflush(stdout);
        scanf("%d", &choice);
        fflush(stdin);

        switch (choice) {
            case 1:
                inputCourseDetails(courses, n);
                break;
            case 2:
                sortAndDisplayCourses(courses, n);
                break;
            case 3:
                printf("Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 3);

    free(courses);

    return 0;
}
