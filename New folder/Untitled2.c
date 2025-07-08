#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char name[25];
    char location[25];
} publisher;

typedef struct
{
    char title[25];
    char author[25];
    int year;
    float price;
    publisher pub;
} Book;

void addBook(Book *book);
void displayBook(Book books);
void findMostExpensivePainting(Book *books, int number);
void findTitle(Book *books, int number, char findtitle[25]);

int main()
{
    char findtitle[25];
    int number, choice, i;
    printf("Nhap so lu?ng sách: \n");
    scanf("%d", &number);
    Book *list = (Book *)malloc(number * sizeof(Book));
    do
    {
        printf("1.Nh?p thông tin sách: \n");
        printf("2.Hien thi thong tin:\n");
        printf("3.Exit\n");
        printf("Nhap lua chon(1-3):");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            for (i = 0; i < number; i++)
            {
                printf("Nhap thong tin sach %d:\n", i + 1);
                addBook(&list[i]);
            }

            break;
        case 2:
            for (i = 0; i < number; i++)
            {
                printf("Thong tin sach %d:\n", i + 1);
                displayBook(list[i]);
            }

            break;
        case 3:
            //??
            printf("Find title:");
             scanf(" %[^\n]", &findtitle);
             findTitle(list,number,findtitle);
            break;
        case 4:
            break;
        default:

            break;
        }
    } while (choice != 4);
    //findMostExpensivePainting(list, number);

    return 0;
}

void addBook(Book *books)
{
    printf("Ten sach:\n");
    scanf(" %[^\n]", books->title);
    printf("Ten tac gia:\n");
    scanf(" %[^\n]", &books->author);
    printf("Nam:\n");
    scanf("%d", &books->year);
    printf("Gia sach:\n");
    scanf("%f", &books->price);
    printf("Name:\n");
    scanf(" %[^\n]", books->pub.name);
    printf("Location:");
    scanf(" %[^\n]", books->pub.location);
}

void displayBook(Book books)
{
    printf("Ten sach:%s\n", books.title);
    printf("Ten tac gia:%s\n", books.author);
    printf("Nam:%d\n", books.year);
    printf("Gia sach:%f\n", books.price);
    printf("Name:%s\n", books.pub.name);
    printf("Location:%s\n", books.pub.location);
}

void findMostExpensivePainting(Book *books, int number)
{
    Book *highestprice = (books + 0);
    int i;
    for (i = 1; i < number; i++)
    {
        if ((books + i)->price > highestprice->price)
        {
            highestprice = (books + i);
        }
    }
    printf("Giá sách cao nh?t là:%f\n", highestprice->price);
}

void findTitle(Book *books, int number, char findtitle[25])
{
	int i;
    for (i = 0; i < number; i++)
    {
        if (strcmp((books + i)->title, findtitle) == 0)
        {
        	printf("Entered\n");
			printf("Title: %s\n", (books + i)->title);         // Use %s for strings
			printf("Author: %s\n", (books + i)->author);       // Use %s for strings
			printf("Year: %d\n", (books + i)->year);           // Use %d for integers
			printf("Price: %.2f\n", (books + i)->price);       // Use %.2f for floats
			printf("Publisher Name: %s\n", (books + i)->pub.name);  // Use %s for strings
			printf("Publisher Location: %s\n", (books + i)->pub.location); // Use %s for strings
        }
        else
        {
            printf("the painting was not found.");
        }
    }
}
