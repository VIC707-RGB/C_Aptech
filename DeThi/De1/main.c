#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct Mobile{
	char name[25];
	char manufacturer[25];
	int release_year;
	float price;
};
typedef struct Mobile Mobile;
Mobile *ptr;

void menuBased(){
	printf("Menu:\n");
	printf("1: Input\n");
	printf("Menu:\n");
	printf("Menu:\n");
}

void menuChoice(){
	printf("Yes 1 No 0\n");
}

//void input(Mobile *m, int num){
//	int i;
//	m = (Mobile *)malloc(num * sizeof(Mobile));
//	
//	for(i = 0; i < num; i++){
//		printf("Enter name:");
//		fflush(stdin);
//		gets((m+i)->name);
//		fflush(stdout);
//		
//		printf("Enter manufacturer:");
//		fflush(stdin);
//		gets((m+i)->manufacturer);
//		fflush(stdout);
//		
//		printf("Enter release_year:");
//		scanf("%d",(m+i)->release_year);
//		
//		printf("Enter price:");
//		scanf("%f",(m+i)->price);
//	} 
//}

//void display(Mobile *m, int num){
//	int i;
//	for(i = 0; i < num; i++){
//		printf("Mobile %d: \n", i);
//		printf("Name: %s\n", *(m+i)->name);
//		printf("manufacturer: %s\n", *(m+i)->manufacturer);
//		printf("release_year: %d\n", (m+i)->release_year);
//		printf("price: %f\n\n", (m+i)->price);
//	} 
//}

//int main(int argc, char *argv[]) {
//	Mobile *mobile; int num;
//	printf("Input number of mobiles:");
//	int i;
//	scanf("%d", &num);
//	input(mobile, num);
//	display(mobile, num);
//	return 0;
//}

void inputMobileList(struct Mobile **phones, int numPhones) {
	int i;
    for (i = 0; i < numPhones; i++) {
        printf("Enter details for Mobile %d:\n", i + 1);

        // Input name
        printf("Name: ");
        gets((*phones + i)->name);

        // Input manufacturer
        printf("Manufacturer: ");
        gets((*phones + i)->manufacturer);

        // Input release year
        int validYear;
        do {
            printf("Release Year: ");
            scanf("%d", &((*phones + i)->release_year));
            if ((*phones + i)->release_year < 1999) {
                printf("Mobile release year must be greater than or equal to 1999.\n");
                validYear = 0;
            } else {
                validYear = 1;
            }
        } while (!validYear);

        // Input price
        float validPrice;
        do {
            printf("Price: ");
            scanf("%f", &((*phones + i)->price));
//                printf("Mobile price must be between 500($) and 6000($).\n");
//                validPrice = 0;
//            } else {
//                validPrice = 1;
//            }
        } while (!validPrice);

        printf("\n");
    }
}

void displayMobileList(struct Mobile **phones, int numPhones) {
    printf("Mobile List:\n");
    int i;
    for (i = 0; i < numPhones; i++) {
        printf("Mobile %d:\n", i + 1);
        printf("  Name: %s\n", *(*phones + i)->name);
        printf("  Manufacturer: %s\n", *(*phones + i)->manufacturer);
        printf("  Release Year: %d\n", (*phones + i)->release_year);
        printf("  Price: $%.2f\n", (*phones + i)->price);
        printf("\n");
    }
}

int main() {
    int numPhones;
    printf("Enter the total number of Mobiles: ");
    scanf("%d", &numPhones);

    struct Mobile *phones;
    phones = (struct Mobile*)malloc(numPhones * sizeof(struct Mobile));
    inputMobileList(&phones, numPhones);

    displayMobileList(&phones, numPhones);

    free(phones); // Don't forget to free the dynamically allocated memory
    return 0;
}

