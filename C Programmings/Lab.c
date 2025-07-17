// Program to check if a number is positive or negative 
/*#include<stdio.h>
int main (){
int N;
printf("Enter the number:");
scanf("%d",&N);
if(N>0){
 printf("The number is positive.\n");
}else{
 printf("The number is negative.\n");
}
return 0;
}

//Program to calculate the area of a circle 
#include<stdio.h>
#define pi 3.1415
int main (){
float R, Area;
printf("Enter the radius:");
scanf("%f",&R);
Area=pi*R*R;
 printf("The area of circle is %f",Area);
return 0;
}

//Program to check if a number is divisible by both 2 and 3
#include<stdio.h>
int main (){
int N;
 printf("Enter the number:");
 scanf("%d",&N);
if(N%2==0&&N%3==0){
 printf("The number '%d' is divisible by 2 and 3.\n");
}else{
 printf("The number '%d' is not divisible by 2 and 3.\n");
}
 return 0;
}

//Program to determine student grades based on marks
#include<stdio.h>
int main (){
int Marks;
 printf("Enter the marks of student:");
 scanf("%d",&Marks);
if(Marks>=90){
 printf("Student's grade is A.\n");
}else if{
    if(Marks>=70){
 printf("Student's grade is B.\n");
}
if(Marks>=50){
 printf("Student's grade is A.\n");
}else if{
    if(Marks>=70){
 printf("Student's grade is B.\n");
}
 return 0;
}*/


//Program to calculate the sum of digits of a number
/*#include<stdio.h>
int main(){
int num, sum=0,digit;
printf("Enter Digit:");
scanf("%d", &num);

int temp=num;
while(temp>0){
    digit=temp%10;
    sum+=digit;
    temp/=10;
}
printf("Sum is%d,\n",sum);
if(sum%2==0){
    printf("Sum is even.\n");
}else{
printf("Sum is odd.\n");
}
return 0;
}*/

//Program to calculate the product of digits of a number
/*#include<stdio.h>

int main(){
    int num, product=1, digit;
    printf("Enter Digit:");
    scanf("%d", &num);

    int temp=num;
    while(temp>0){
        digit=temp%10;
        product*=digit;
        temp/=10;
    }
    printf("Product is %d,\n", product);
    if(product%3==0){
        printf("Product is divisible by 3.\n");
    }else{
    printf("Product is not divisible by 3.\n");
    }
    return 0;
}*/

//Program to count even and odd digits separately
/*#include<stdio.h>
int main(){
  int num, digit;
  int even_sum=0, odd_sum=0;
    printf("Enter Digit:");
    scanf("%d", &num);

    while(num>0){
     digit=num%10;

     if(digit%2==0){
        even_sum+=digit;
     }else{
     odd_sum+=digit;}
     num/=10;}
     printf("The sum of even digits:%d\n",even_sum);
     printf("The sum of odd digits:%d\n",odd_sum);
return 0;
}*/

//Program to find the greatest number in an array
/*#include<stdio.h>
int main(){
  int num, digit, diff;
  int even_sum=0, odd_sum=0;
    printf("Enter Digit:");
    scanf("%d", &num);

    while(num>0){
     digit=num%10;

     if(digit%2==0){
        even_sum+=digit;
     }else{
     odd_sum+=digit;}
     num/=10;}
     printf("The sum of even digits:%d\n",even_sum);
     printf("The sum of odd digits:%d\n",odd_sum);

      diff=even_sum-odd_sum;
      printf("The difference of the sum of even digit and odd digit:%d\n",diff);
return 0;
}*/

//Program to calculate factorial of a number using a loop
/*#include<stdio.h>
int main(){
  int num, digit;
  int even_sum=0, odd_sum=0;
    printf("Enter Digit:");
    scanf("%d", &num);

    while(num>0){
     digit=num%10;

     if(digit%2==0){
        even_sum+=digit;
     }else{
     odd_sum+=digit;}
     num/=10;}
     printf("The sum of even digits:%d\n",even_sum);
     printf("The sum of odd digits:%d\n",odd_sum);

     if(odd_sum>even_sum){
        printf("The sum of odd number is greater.\n");
     }else if{(odd_sum<even_sum)
        printf("The sum of even number is greater.\n");
     }else{
        printf("The even number and odd number are equal.\n");
     }

return 0;
}*/

//Program to count even and odd numbers in an array
/*#include<stdio.h>
int main(){
  int num, digit, prod;
  int even_product=0, odd_product=0;
    printf("Enter Digit:");
    scanf("%d", &num);

    while(num>0){
     digit=num%10;

     if(digit%2==0){
        even_product+=digit;
     }else{
     odd_product+=digit;}
     num/=10;}
     printf("The product of even digits:%d\n",even_product);
     printf("The product of odd digits:%d\n",odd_product);

      if(odd_product>even_product){
        printf("The product of odd number is greater.\n");
     }else if(odd_product<even_product){
        printf("The product of even number is greater.\n");
     }else{
        printf("The even product and odd product are equal.\n");
     }

return 0;
}*/

/*#include<stdio.h>
 int main(){
		for(int i=1;i<=10;i++){
			printf("The ten natural number are: %d\n",i);
		}
		return 0;
 }*/

/*#include<stdio.h>
 int main(){
     int sum=0;
		for(int i=2;i<=100;i+=2){
			sum+=i;
		}

      printf("Sum of even numbers from 1 to 100: %d\n",sum);
		return 0;
 }*/

/* #include<stdio.h>
 int main(){
     printf("Odd numbers between 1 to 50 are:\n");
		for(int i=1;i<=50;i++){
			if(i%2!=0){
                printf("%d\n",i);
			}
		}
		return 0;
 }*/

 //Program to calculate sum of digit using Do while loop

 /*#include<stdio.h>
 void main(){
    int num, digit, sum=0;
    printf("Enter the number:\n");
    scanf("%d",&num);

    do{
        digit=num%10;
        sum+=digit;
        num/=10;
    }while(num>0);
    printf("The sum of digit:%d\n",sum);
 }*/

 //Program to print number from 1 to 100 in reverse order using for loop

 /*#include<stdio.h>
 int main(){
     printf("The 1 to 100 numbers in reverse order are:\n");
		for(int i=100;i>=1;i--){
			printf("%d\n",i);
			}
		return 0;
 }*/

// write a program to calculate sum of squares of numbers from 1 to 10 using loop

/*#include<stdio.h>
int main(){

    int sum=0;
       for(int i=1;i<=10;i++){
        sum+=i*i;
       }
           printf("The sum of square of numbers from 1 to 100 are:%d\n",sum);
return 0;
}*/

//write a program to calculate factorial of a number using for loop
/*#include<stdio.h>
int main(){
    int num, factorial=1;
    printf("Enter the number:\n");
    scanf("%d",&num);

    for(int i=1;i<=num;i++){
        factorial*=i;
    }
        printf("The factorial of %d is %d\n",num, factorial);
return 0;
}
*/

/*#include<stdio.h>
int main (){
	int totalBooks = 0, choice, addbooks, removebooks;

	do{
		printf("1. Add Book\n");
		printf("2. Remove Books\n");
		printf("3. Check Totsl Books\n");
		printf("4. Exit\n");
		printf("Enter your choice:");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				if(totalBooks<100){
					printf("Enter number of books to be added;");
					scanf("%d", &addbooks);
					totalBooks += addbooks;
					   printf("Books added successfully! Total Books: %d\n", totalBooks);
				}else{
					printf("Library is at full capacity!\n");
				}
				break;
				case 2: if (totalBooks>0){
					printf("Enter number of books to be removed:");
					scanf("%d", &removebooks);
					totalBooks-=removebooks;
					printf("Book removed successfully! Total books: %d\n", totalBooks);
				}else{
					printf("No books to remove!\n");
				}
				break;
				case 3:
					printf("Total books in the library: %d\n", totalBooks);
					break;
					case 4:
						printf("Exiting...\n");
						break;
						default:
						printf("invalid choice! Please try again.\n");
		}
	}while (choice!=4);
	return 0;
}*/

/*#include<stdio.h>
int main (){
int marks[5]={85,90,78,92,88}; //Initialize array with 5 elements
//Print array elements
for (int i=0; i<5;i++){
    printf("marks[%d] = %d\n",i,marks[i]);
}
return 0;
}*/

//write a program to find the greatest among numbers using array
/*#include<stdio.h>
int main (){
int arr[]={12,45,67,23,9};
int max=arr[0];
for (int i=1; i<5;i++){
        if (arr[i]>max){
            max=arr[i];
        }
}
      printf("Largest element: %d\n",max);
return 0;
}*/

//write a program to store marks of 5 students in array and calculate the average marks.

/*#include<stdio.h>
int main (){
    int marks[5]; //Single-dimensional array to store marks
    int sum=0;
    float average;

//Input marks from the user
printf("Enter marks of 5 students:\n");
for(int i=0; i<5;i++){
    printf("Student %d:", i+1);
    scanf("%d", &marks[i]);
    sum += marks[i]; //Add marks to the sum
}

//Calculate average
average = sum/5;

//Display the result
printf("Average marks = %f\n", average);

return 0;

}*/

//Smallest element in an array

/*#include<stdio.h>
int main (){
int arr[]={12,45,67,23,9};
int min=arr[0];
for (int i=1; i<5;i++){
        if (arr[i]<min){
            min=arr[i];
        }
}
      printf("Smallest element: %d\n",min);
return 0;
}*/

//Count total number of odd and even number in an array.

/*#include<stdio.h>
int main() {
int arr[]={1,2,3,4,5,6,7,8,9,10};
int even=0, odd=0;

 for (int i=0; i<10;i++){
    if (arr[i]%2==0) {
        even++;
    }else{
    odd++;
    }

 }
  printf("Even numbers: %d\n", even);
  printf("Odd numbersL %d\n",odd);

  return 0;

}*/

//write a program to take n number as input in an array and find the product of all element.

/*#include<stdio.h>
int main (){
    int marks[5]; //Single-dimensional array to store marks
    int sum=0;
    float average;

//Input marks from the user
printf("Enter marks of 5 students:\n");
for(int i=0; i<5;i++){
    printf("Student %d:", i+1);
    scanf("%d", &marks[i]);
    sum += marks[i]; //Add marks to the sum
}

//Calculate average
average = sum/5;

//Display the result
printf("Average marks = %f\n", average);

return 0;

}*/

//program to check odd and even number

/*#include<stdio.h>
void checkevenodd(int num)
{
    if (num %2==0)
        printf("%d is even\n", num);
    else
        printf("%d is odd\n", num);
}

int main()
{
    int number;
    printf("Enter a number:");
    scanf("%d", &number);
    checkEvenOdd(number);
    return 0;
}*/

//program to find maximum of two numbers.
/*#include<stdio.h>
void largestnum(int a, int b){
return (a>b) ? a:b;
}

int main() {
int num1, num2;
printf("Enter two numbers:");
scanf("%d%d", &num1, num2);
printf("Maximum is %d\n", max(num1, num2));
return 0;
}*/

//program to find square of a number using function

/*#include<stdio.h>
int square(int num){
return num*num;
}

int main() {
int a;
printf("Enter the number:");
scanf("%d", &a);
printf("The square %d is %d\n:",a,square(a));
return 0;
}*/

//program to  calculate sum of digital of a given numbers
/*#include<stdio.h>

int sumofdigital(int num){
int sum=0, digital;
while (num>0){
    digital=num%10;
    sum+=digital;
    num/=10;
}
return sum;
}

int main(){
int number;
printf("Enter a number:");
scanf("%d", &number);
printf("Sum of digits is %d\n",sumofdigital(number));
return 0;
}*/


// #include<stdio.h>
// int main(){
//     int n,sum=0;

//     printf("Enter the number:");
//     scanf("%d", &n);

//     for(int i=1; i<=n; i++){
//         sum+=i;
//     }
//     printf("The sum of given number is %d\n",sum);
//     return 0;
// }

#include <stdio.h>
#include <string.h>

int main() {
    char string1[20];
    int i, length;
    int flag = 0;

    // Prompt the user for input
    printf("Enter a string: ");
    scanf("%s", string1);

    // Calculate the string length
    length = strlen(string1);

    // Compare characters from the start and end of the string
    // and stop if a mismatch is found or the middle of the string is reached.
    for (i = 0; i < length / 2; i++) {
        if (string1[i] != string1[length - i - 1]) {
            flag = 1;
            break;
        }
    }

    // Output the result
    if (flag) {
        printf("%s is not a palindrome\n", string1);
    } else {
        printf("%s is a palindrome\n", string1);
    }

    return 0;
}


