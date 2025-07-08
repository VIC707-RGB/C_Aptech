#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct Painting{ //cau 1
	char title[24];
	char artist[24];
	float price;
}; 
typedef struct Painting Painting;

int main(int argc, char *argv[]) {
//	Painting gallery[10]; //cau 2
	Painting *gallery;
	gallery = (Painting*)malloc(10*sizeof(Painting));
	max = 0;
	max = addCar();
	
	menu(gallery);
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
	
//	    (*count)++; // Increment the car count
	    printf("Car added successfully!\n");
	}

    return max;
}
