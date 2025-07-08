#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Painting {
    char title[24];
    char artist[24];
    float price;
};
typedef struct Painting Painting;

// Function prototypes
Painting* findMostExpensivePainting(Painting* gallery, int count);
void findPaintingByTitle(Painting* gallery, int count, char* title);
float calculateTotalValue(Painting* gallery, int count);
Painting* findLowestPricePainting(Painting* gallery, int count);
void sortPaintingsDescending(Painting* gallery, int count);
float calculateAveragePrice(Painting* gallery, int count);

//int main() {
//    Painting gallery[10];
//    int count = 0;
//
//    // Add your menu here with appropriate function calls.
//    return 0;
//}
int main(int argc, char *argv[]) {
//	Painting gallery[10]; //cau 2
	int numOfPaintings;
	printf("\numOfPaintings: ");
	scanf("%d", &numOfPaintings);
	Painting *gallery;
	gallery = (Painting*)malloc(numOfPaintings*sizeof(Painting));
	max = 0;
	max = addCar();
	
	menu(gallery);
	
	//question 5:
	findMostExpensivePainting(gallery, numOfPaintings);
	
	//question 6:
	char titleFind[24];
	printf("\titleFind: ");
	gets(titleFind);
	findPaintingByTitle(gallery, numOfPaintings, titleFind);
	
	return 0;
}

void menu(Painting *list){
	printf("1. Add a new painting /n2. Display painting information /n3. Update painting price /n4. Quit");
	
	int choice;
	printf("\nChoice: ");
	scanf("%d", &choice);
	
	switch(choice){
		case 1:
			//input painting
			break;
		case 2:
			displayPainting(list);
			break;
		case 3:
			//update price
			break;
		case 4:
			break;
		default:
			printf("Error: No choice existing");
			break;
	}
}

void displayPainting(Painting *list){
	int i;
	for(i = 0; i < 10; i++){
		fflush(stdin);
		printf("Title: %s", *(list+i)->title);	
		fflush(stdout);
		printf("Artist: %s", *(list+i)->artist);
		printf("Price: %f", (list+i)->price);
	}
}

int addCar(Car *list, int *count, int max) {
//    if (*count >= max) {
//        printf("Inventory is full! Cannot add more cars.\n");
//        return;
//    }
//    Car *ptr = &list[*count]; // Point to the next empty position in the list

	//so lg phan tu: 5
	//->target: +1 ptu moi khi den max
	
	//check
	max = 5; int check = 0;
	int i; 
	for(i = 0; i < max; i++){
		if((list+i) == null){
			printf("Add to existing");
		}else{
			check++;
		}
	}
	if(check == max){
		max += 1;
		Car *temp = (Car *)realloc(*list, (max) * sizeof(Car));
		
		printf("Enter car model: ");
		fflush(stdin)
	    gets(temp->model);
	    fflush(stdout)
	
	    printf("Enter car year: ");
	    scanf("%d", &temp->year);
	
	    printf("Enter car price: ");
	    scanf("%f", &temp->price);
	
	    printf("Enter owner's name: ");
	    gets(temp->owner.name);
	
	    printf("Enter owner's age: ");
	    scanf("%d", &temp->owner.age);
	    
	    printf("Enter owner's age: ");
	    scanf("%d", Book->pub.name);
	
//	    (*count)++; // Increment the car count
	    printf("Car added successfully!\n");
	}

    return max;
}

// Question 5
Painting* findMostExpensivePainting(Painting* gallery, int num) {
    if (num == 0) return NULL;
    Painting* mostExpensive = (gallery+0);
//	&gallery[0];
    for (int i = 0; i < count; i++) {
        if ((gallery+i)->price > mostExpensive->price) {
            mostExpensive = (gallery+i);
        }
    }
    return mostExpensive;
}

// Question 6
void findPaintingByTitle(Painting* gallery, int count, char title[24]) {
	int check = 0;
    for (int i = 0; i < count; i++) {
        if (strcmp(*(gallery+i)->title, title) == 0) {
            printf("Title: %s\nArtist: %s\nPrice: %.2f\n",
                   gallery[i].title, gallery[i].artist, gallery[i].price);
                   check++;
            return;
        }
    }
    if(check == 0){
    	printf("Painting with title '%s' not found.\n", title);
	}
}

// Question 7
float calculateTotalValue(Painting* gallery, int count) {
    float total = 0.0f;
    for (int i = 0; i < count; i++) {
        total += gallery[i].price;
    }
    return total;
}

// Question 8
Painting* findLowestPricePainting(Painting* gallery, int count) {
    if (count == 0) return NULL;
    Painting* lowest = &gallery[0];
    for (int i = 1; i < count; i++) {
        if (gallery[i].price < lowest->price) {
            lowest = &gallery[i];
        }
    }
    return lowest;
}

// Question 9
void sortPaintingsDescending(Painting* gallery, int count) {
    for (int i = 0; i < count; i++) {
        for (int j = 1; j < count; j++) {
            if (gallery[j].price > gallery[i].price) {
                Painting temp = gallery[j];
                gallery[j] = gallery[i];
                gallery[i] = temp;
            }
        }
    }
}

// Question 10
float calculateAveragePrice(Painting* gallery, int count) {
    if (count == 0) return 0.0f;
    float total = calculateTotalValue(gallery, count);
    return total / count;
}

