

/* Function declaration */
int * getNEvenNumbers(int N, int * numbers);


//int main()
//{
//	// so chan trong chuoi so
//    int evenNumbers[10]; //chuoi nay se chua toan bo so chan
//    int i;
//
//    // Call function to get first 10 even numbers
//    getNEvenNumbers(10, evenNumbers);
//
//    // Print all numbers
//    printf("First %d even numbers are: \n", 10);
//    for (i = 0; i < 10; i++)
//    {
//        printf("%d ", *(evenNumbers + i));
//    }
//
//    
//    return 0;
//}



/**
 * Function to get N even numbers.
 */
int * getNEvenNumbers(int N, int * numbers)
{
    int i;

    for (i = 0; i < N; i++)
    {
        // gan gia tri chan vao trong bien duoc chi toi
        *(numbers + i) = 2 * (i + 1);
    }

    return numbers;
}
