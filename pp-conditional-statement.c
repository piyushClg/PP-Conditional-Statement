/******************************************************************************

1.	Write a C Program to check whether an alphabet is a vowel or consonant.
2.	Write a C Program to check if the given number is Armstrong or not.
3.	Write a C Program to find the greatest of three numbers.
4.	Write a C to find Prime numbers in a given range.
5.	Write a C program to read the age of a candidate and determine whether it is eligible for casting his/her vote.
6.	Write a C program to accept a coordinate point in an XY coordinate system and determine in which quadrant the coordinate point lies.  
Ex: 4 6
Expected Output:
The coordinate point (4,6) lies in the first quadrant.
7.	Write a C program to find the eligibility of admission for a professional course based on the following criteria:  
Marks in Maths >=65
Marks in Physics >=55
Marks in Chem>=50
Total in all three subjects >=180
or
Total in Math and Physics >=140
8.	Write a C program to check whether a triangle can be formed by the given value for the angles.
9.	Write a program in C to read any digit, display in the word using switch-case.  
Ex: 4
Expected Output: Four
10.	Write a program in C to read any Month Number in integer and display Month name in the word using switch-case.    
Ex.: 4
Expected Output: April
*******************************************************************************/

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    
    int i, j, n, num, num1, num2, sum, num3[20], num4=0, rep, tempnum;
    char ch;
    printf("\t*******************************************\n");
    printf("\t*Practice Problem - conditional statements*\n");
    printf("\t*******************************************\n");
    do {
        printf("\t\t\t    Menu\n");
        printf("1. To check whether an alphabet is a vowel or consonant.\n");
        printf("2. To check if the given number is Armstrong or not.\n");
        printf("3. To find the greatest of three numbers.\n");
        printf("4. To find Prime numbers in a given range.\n");
        printf("5. To read the age of a candidate and determine whether it is eligible for casting his/her vote.\n");
        printf("6. To accept a coordinate point in an XY coordinate system and determine in which quadrant the coordinate point lies.\n");
        printf("7. To find the eligibility of admission for a professional course based on the criteria mentioned.\n");
        printf("8. To check whether a triangle can be formed by the given value for the angles.\n");
        printf("9. To read any digit, display in the word using switch-case.\n");
        printf("10. To read any Month Number in integer and display Month name in the word using switch-case.\n");
        printf("Enter your choice: ");
        scanf("%d", &n);
        switch(n) {
            case 1:
                printf("Enter any alphabet: ");
                scanf("%s", &ch);
                if(ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
                    printf("Its a vowel\n");
                else
                    printf("Its a consonant\n");
                break;
            
            case 2:
                printf("\nPlease enter number to check for Armstrong: ");
                scanf("%d", &num);
                j = 0;  
                num4 = 0;
                tempnum = num;
                while (tempnum != 0) {
                    j = j + 1;
                    tempnum = tempnum / 10;
                }
                   
                tempnum = num;
                while( tempnum > 0){
                    num2 = tempnum %10;
                    num4 = num4 + pow(num2, j);
                    tempnum = tempnum /10;
                }
                
                if ( num == num4 )
                    printf("\n %d is Armstrong num.\n", num);
                else
                    printf("\n %d is not a Armstrong num.\n", num);
                break;
                
            case 3:
                printf("Enter any three integers: ");
                for(i=0; i<3; i++){
                    scanf("%d", &num3[i]);
                }
                if (num3[0] > num3[1] && num3[0] > num3[2]) {
                printf("%d is Greater than %d and %d", num3[0], num3[1], num3[2]);
                }
                else if (num3[1] > num3[0] && num3[1] > num3[2]) {
                    printf("%d is Greater than %d and %d", num3[1], num3[0], num3[2]);
                }
                else if (num3[2] > num3[0] && num3[2] > num3[1]) {
                    printf("%d is Greater than %d and %d", num3[2], num3[0], num3[1]);
                }
                else {
                    printf("All integers are equal");
                }
                printf("\n");
                break;
            
            case 4:
                printf("Enter two range(input integer numbers only):");
                scanf("%d %d", &num1, &num2);
                printf("Prime numbers from %d and %d are:\n", num1, num2);
                for(i=num1+1; i<num2; ++i){
                    num=0;
                    for(j=2; j<=i/2; ++j){
                        if(i%j==0){
                            num=1;
                            break;
                        }
                    }
                    if(num==0)
                        printf("%d\n",i);
                }
                break;
            
            case 5:
                printf("Enter your age: ");
                scanf("%d", &num);
                if(num>=18)
                    printf("Congo you can vote.");
                else if (num < 0)
                    printf("Wrong age");
                else
                    printf("Sorry, you are cannot cast a vote.");
                printf("\n");
                break;
                
            case 6:
                printf("Enter the values for X and Y: ");
                scanf("%d %d", &num1, &num2);
                if (num1 > 0 && num2 > 0)
                    printf("point (%d, %d) lies in the First quandrant\n", num1, num2);
                else if (num1 < 0 && num2 > 0)
                    printf("point (%d, %d) lies in the Second quandrant\n", num1, num2);
                else if (num1 < 0 && num2 < 0)
                    printf("point (%d, %d) lies in the Third quandrant\n", num1, num2);
                else if (num1 > 0 && num2 < 0)
                    printf("point (%d, %d) lies in the Fourth quandrant\n", num1, num2);
                else if (num1 == 0 && num2 == 0)
                    printf("point (%d, %d) lies at the origin\n", num1, num2);
                break;
            
            case 7:
                /* Marks in Maths >=65
                   Marks in Physics >=55
                   Marks in Chem>=50
                */
                printf("Enter your marks in Maths: ");
                scanf("%d", &num);
                printf("Enter your marks in Physics: ");
                scanf("%d", &num1);
                printf("Enter your marks in Chemistry: ");
                scanf("%d", &num2);
                if(num >= 65 && num1 >= 65 && num2 >= 50){
                    if(num+num1+num2 >= 180 || num+num1 >= 140)
                        printf("You are eligible for admission.");
                    else
                        printf("Sorry, you are not eligible.");
                }
                else
                    printf("Sorry, you are not eligible.");
                printf("\n");
                break;
            
            case 8:
                printf("Input three angles of triangle : ");  
                scanf("%d %d %d", &num, &num1, &num2);  
                sum = num + num1 + num2;   
                if(sum == 180)   {  
                    printf("The triangle is valid.\n");  
                }  
                else  {  
                    printf("The triangle is not valid.\n");  
                }
                break;
                
            case 9:
                printf("Enter a positive Integer: ");
                scanf("%d", &num);
             
                num4 = 0;
                while (num > 0) {
                    num4 = (num4 * 10) + num % 10;
                    num /= 10;
                }
                num = num4;
             
                while (num > 0) {
                    num1 = num % 10;
                    switch(num1) {
                        case 0:
                            printf("Zero ");
                            break;
                        case 1:
                            printf("One ");
                            break;
                        case 2:
                            printf("Two ");
                            break;
                        case 3:
                            printf("Three ");
                            break;
                        case 4:
                            printf("Four ");
                            break;
                        case 5:
                            printf("Five ");
                            break;
                        case 6:
                            printf("Six ");
                            break;
                        case 7:
                            printf("Seven ");
                            break;
                        case 8:
                            printf("Eight ");
                            break;
                        case 9:
                            printf("Nine ");
                            break;
                    }
                    num = num / 10;
                }
                printf("\n");
                break;
                
            case 10:
                printf("Enter a positive Integer: ");
                scanf("%d", &num);
                switch(num) {
                        case 0:
                            printf("No Month exists.");
                            break;
                        case 1:
                            printf("Jan ");
                            break;
                        case 2:
                            printf("Feb ");
                            break;
                        case 3:
                            printf("March ");
                            break;
                        case 4:
                            printf("April ");
                            break;
                        case 5:
                            printf("May ");
                            break;
                        case 6:
                            printf("Jun ");
                            break;
                        case 7:
                            printf("Jul ");
                            break;
                        case 8:
                            printf("Aug ");
                            break;
                        case 9:
                            printf("Sep ");
                            break;
                        case 10:
                            printf("Oct ");
                            break;
                        case 11:
                            printf("Nov ");
                            break;
                        case 12:
                            printf("Dec ");
                            break;
                    }
                    printf("\n");
                    break;
            
        }//end of switch-case
        printf("Do you want to enter more(1-yes, 2-no): ");
        scanf("%d", &rep);
    }while(rep == 1);
    return 0;
}

