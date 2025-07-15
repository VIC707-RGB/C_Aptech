#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stddef.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//QUESTION 1
//define Contact
typedef struct{
	char name[50];
	char phone[15];
	int age;
} Contact;
//display menu
void menu(){
	printf("\nCONTACT MANAGEMENT SYSTEM\n");
	printf("1. Add contact\n");
	printf("2. View all contacts\n");
	printf("3. Search by name\n");
	printf("4. Delete by phone\n");
	printf("5. Exit");
}

//QUESTION 2
void removeNewLine(char *str){
	while(*str){
		if(*str == '\n'){
			*str = '\0';
			break;
		}
		str++; //move on to next letter by pointer
	}	
}
//Add new phone
int isPhoneUnique(Contact *listContact, int n, char phone[]){
	int i;
	for(i = 0; i < n; i++){
		if(strcmp((listContact + i)->phone, phone) == 0){
			//can't use pointer - accepts data only
			return 0; //false
		}
	}
	return 1; //true
}
void addContact(Contact *listContact, int *count){
	if(*count >= 10){
		printf("Contact list is full!");
		return;
	}
	Contact newContact; 
	do{
		printf("Enter name: ");
		fflush(stdin);
		fgets(newContact.name, sizeof(newContact.name), stdin);
		fflush(stdout);
//		if(strcmp(newContact.name, "\n") == 0){
			removeNewLine(&newContact.name);
//		}
//		printf("%d", strlen(newContact.name));
		if(strlen(newContact.name) == 0){
			printf("Name must not be empty!");
		}
	}while(strlen(newContact.name) == 0);
	
	do{
		printf("Enter phone: ");
		fflush(stdin);
		fgets(newContact.phone, sizeof(newContact.phone), stdin);
		fflush(stdout);
		removeNewLine(&newContact.phone);
		if(isPhoneUnique(listContact, *count, newContact.phone) == 0){
			printf("Phone number existed, try again.");
		}
	}while(isPhoneUnique(listContact, *count, newContact.phone) == 0); 
	//another function for phone validation
	
	do{
		printf("Enter age: ");
		fflush(stdin);
		scanf("%d", &newContact.age);
		fflush(stdout);
		if(newContact.age <= 0){
			printf("Age must be over 0!");
		}
	}while(newContact.age <= 0);
	
	//add to list
	
//	*(listContact + *count) = newContact;
	memcpy((listContact + *count), &newContact, sizeof(Contact));
	//*count: int count from main()
	//move on to next empty space on list to add new contact
	(*count)++;
	//one more contact added
}
void display(Contact *list, int n){
	int i;
	for(i = 0; i < n; i++){
		printf("\n%d. %s, %s, %d", i + 1, (list + i)->name, (list + i)->phone, (list + i)->age);
	}
}

//QUESTION 3
//search by name
void lowerCase(char *str){
	for(; *str; str++){
		*str = tolower(*str);
	}
}
void searchByName(Contact *list, int n){
	char search[51];
	printf("Type name to search: ");
	fflush(stdin);
	fgets(search, sizeof(search), stdin);
	fflush(stdout);
	
	char lowerSearch[51];
	strcpy(lowerSearch, search);
	lowerCase(lowerSearch);
	removeNewLine(lowerSearch);
	
	int found = 0;
	int i;
	for(i = 0; i < n; i++){
		char temp[51];
		strcpy(temp, (list + i)->name); //temp: contains string to be compared
		lowerCase(temp);
		removeNewLine(temp);
		char *check = strstr(temp, lowerSearch);
		if(check != NULL){ //returns pointer to string in string
			printf("Match: ");
			printf("\n%d. %s, %s, %d", i + 1, (list + i)->name, (list + i)->phone, (list + i)->age);
			found++;
		}
	}
	if(found == 0){
		printf("No match.");
	}
}

//QUESTION 4
void deleteByPhone(Contact *list, int *n){
	char phone[16];
	printf("Enter phone to delete: ");
	fflush(stdin);
	fgets(phone, sizeof(phone), stdin);
	removeNewLine(phone);
	
	int i = 0; int check = 0;
	for(i = 0; i < *n; i++){
		if(strcmp((list + i)->phone, phone) == 0){
			int j;
			for(j = i; j < *n; j++){
				//remove from anywhere in the list
				//by replacing the next member's data to current member
				*(list + i) = *(list + j);
			}
			(*n)--;
			printf("Deleted successfully\n");
			check++;
		}
	}
	if(check == 0){
		printf("Cannot find phone number.");
	}
}

int main(int argc, char *argv[]) {
	Contact listContact[10]; //array
	int count = 0; //count existing contacts
	int choice;
	
	do{
		menu();
		printf("\n\nEnter choice: ");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				printf("1. Add contact\n");
				addContact(&listContact, &count);
				break;
			case 2:
				printf("2. View all contacts\n");
				display(&listContact, count);
				break;
			case 3:
				printf("3. Search by name\n");
				searchByName(&listContact, count);
				break;
			case 4:
				printf("4. Delete by phone\n");
				deleteByPhone(&listContact, &count);
				break;
			case 5:
				printf("5. Exit");
				break;
			default:
				printf("Invalid choice.");
				break;
		}
	}while (choice != 5);
	
	return 0;
}
