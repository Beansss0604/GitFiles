#include "menu.h"
#include <stdlib.h>

void main() {
     int choice1, choice2, choice3;
     char u[256];
     char p[256];

     clrscr();
     cout << "\t\t\tEnter Username: ";
     cin >> u;
     cout << "\t\t\tEnter password: ";
     cin >> p;

     do {

     if (strcmp (p, "mainmenutohehe")==0) {
     cout << "\t\t\tLogin Successful!\n";
     cout << "\t\t\t------------------------" << endl;
     cout << "\t\t\tWelcome to my Main Menu: \n";
     cout << "\t\t\t1. Sequence Menu\n";
     cout << "\t\t\t2. Selection Menu\n";
     cout << "\t\t\t3. Loop/Iteration Menu\n";
     cout << "\t\t\t4. Exit\n";
     cout << "\t\t\t------------------------" << endl;
     cout << "\t\t\tEnter your Choice: ";
     cin >> choice1;
     }
     else {
     cout << "\t\t\tIncorrect Password!";
     }

     switch (choice1)
     {
     case 1:
     do {
     cout << "\t\t\t------------------------" << endl;
     cout << "\t\t\tWelcome to my Sequence Programs!" << endl;
     cout << "\t\t\t1. Arithmetic Operations\n" ;
     cout << "\t\t\t2. Print Name 5 Times\n" ;
     cout << "\t\t\t3. Circumference and Area of a Circle\n" ;
     cout << "\t\t\t4. Average Grade\n" ;
     cout << "\t\t\t5. Total Sales\n" ;
     cout << "\t\t\t6. Swapping\n" ;
     cout << "\t\t\t7. Square and Cube of a Number\n" ;
     cout << "\t\t\t8. Area and Perimeter of a Rectangle\n" ;
     cout << "\t\t\t9. Celcius to Fahrenheit\n" ;
     cout << "\t\t\t10. Gross Pay\n" ;
     cout << "\t\t\t11. Exit\n";
     cout << "\t\t\t------------------------" << endl;
     cout << "\t\t\tEnter your choice: ";
     cin >> choice2;

     switch (choice2) {

     case 1:
     {
     clrscr();

     mathOp();
     
     getch();
     break;
     }

     case 2:
     {
     clrscr();

     printName();
      
     getch();
     break;
     }

     case 3:
     {
     clrscr();
      
     diameter();

     getch();
     break;
     }

     case 4:
     {
     clrscr();
     
     int p, m, f, a;

     cout << "Enter your prelim: ";
     cin >> p;
     cout << "Enter your midterm: ";
     cin >> m;
     cout <<  "Enter your final: ";
     cin >> f;

     cout << average(p, m, f);

     getch();
     break;
     }

     case 5:
     {
     clrscr();

     cout << totalSales();

     getch();
     break;
     }

     case 6:
     {
     clrscr();

     swapping();

     getch();
     break;
     }

     case 7:
     {
     clrscr();
     
     sqAndCube();

     getch();
     break;
     }

     case 8:
     {
     clrscr();
    
     int l, w;
     cout << "Input length: ";
     cin >> l;
     cout << "Input width: ";
     cin >> w;

     areaPerimeter(l, w);

     getch();
     break;
     }

     case 9:
     {
     clrscr();
     
     float c;
     cout << "Enter the temperature of Celcius: ";
     cin >> c;
     celFahrenheit(c);

     getch();
     break;
     }

     case 10:
     {
     clrscr();
     
     int empNum;
     char empName[20];
     int hoursWork, rate;

     cout << "Enter Employee Number: ";
     cin >> empNum;
     cout << "Enter Employee Name: ";
     cin >> empName;
     cout << "Enter the number of hours: ";
     cin >> hoursWork;
     cout << "Enter the rate: ";
     cin >> rate;

     cout << grossPay(hoursWork, rate);

     getch();
     break;
     }

     case 11:
     {
     exit(0);
     break;
     }

     default:
     {
     cout << "\t\t\tInvalid Input:(\n";
     cout << "\t\t\tInput numbers from 1-11 only:)";
}
}
}while(choice1!=11);
     break;

     case 2:
     do {
     cout << "\t\t\t------------------------" << endl;
     cout << "\t\t\t\Welcome to my Selection Programs!" << endl;
     cout << "\t\t\t1. Positive or Negative\n";
     cout << "\t\t\t2. Even or Odd\n";
     cout << "\t\t\t3. Average (Passed or Fail)\n";
     cout << "\t\t\t4. Salesman's Commission\n";
     cout << "\t\t\t5. Equivalent Gade\n";
     cout << "\t\t\t6. Determine the Larger Number\n";
     cout << "\t\t\t7. Determine the Smallest Number\n";
     cout << "\t\t\t8. Closest to 100\n";
     cout << "\t\t\t9. Sum of Two Numbers(Triple if it is the Same Value)\n";
     cout << "\t\t\t10. Multiple of 3 and 7\n";
     cout << "\t\t\t11. Exit\n";
     cout << "\t\t\t------------------------" << endl;
     cout << "\t\t\tEnter your choice: ";
     cin >> choice2;

     switch (choice2)
     {

     case 1:
     {
     clrscr();

     double num;
     cout << "Enter the number: ";
     cin >> num;
     posiNega(num);

     cout << "\n";

     getch();
     break;
     }

     case 2:
     {
     clrscr();

     int numm;
     cout << "Enter the number: ";
     cin >> numm;

     oddEven(numm);
     cout << "\n";

     getch();
     break;
     }

     case 3:
     {
     clrscr();

     int a, p, m, f;
     cout << "Enter prelim grade: ";
     cin >> p;
     cout << "Enter midterm grade: ";
     cin >> m;
     cout << "Enter finals grade: ";
     cin >> f;
     passFail(p, m, f, a);
     cout << "\n";

     getch();
     break;
     }

     case 4:
     {
     clrscr();

     salesmanCom();

     getch();
     break;
     }

     case 5:
     {
     clrscr();

     equiGrade();

     getch();
     break;
     }

     case 6:
     {
     clrscr();

     int aa;
     int bb;
     cout << "The larger number is: " << largerNum(aa, bb);
     
     getch();
     break;
     }

     case 7:
     {
     clrscr();

     smallestNum();
     cout << "\n";

     getch();
     break;
     }

     case 8:
     {
     clrscr();

     int a1, b2;
     cout << "Enter 1st number: ";
     cin >> a1;
     cout << "Enter 2nd number: ";
     cin >> b2;

     closestNum(a1, b2);
     cout << "\n";

     getch();
     break;
     }

     case 9:
     {
     clrscr();
     
     int n1, n2;
     cout << "Input first number: ";
     cin >> n1;
     cout << "Input second number: ";
     cin >> n2;

     sumTriple(n1, n2);

     getch();
     break;
     }

     case 10:
     {
     clrscr();
     
     multOf();

     getch();
     break;
     }

     case 11:
     {
     exit(0);
     break;
     }

     default:
     {
     cout << "\t\t\tInvalid Input:(\n";
     cout << "\t\t\tInput numbers from 1-10 only:)";
     break;
}
}
}while(choice2!=11);

     break;

     case 3:
     do {
     cout << "\t\t\t------------------------" << endl;
     cout << "\t\t\tWelcome to my Loop Programs!" << endl;
     cout << "\t\t\t1. Print 'Gecilie' 10 Times\n";
     cout << "\t\t\t2. Print Numbers From 1-5\n";
     cout << "\t\t\t3. Print Numbers From 5-1\n";
     cout << "\t\t\t4. Print Even Numbers From 5-1\n";
     cout << "\t\t\t5. Print Odd Numbers From 5-1 \n";
     cout << "\t\t\t6. Prime Number or Not\n";
     cout << "\t\t\t7. Find the Factorial of an Inputted Number\n";
     cout << "\t\t\t8. Find and Display the GCD of the Inputted Number\n";
     cout << "\t\t\t9. Exit\n";
     cout << "\t\t\t------------------------" << endl;
     cout << "\t\t\tEnter your choice from 1-9: ";
     cin >> choice3;

     switch (choice3)
     {

     case 1:
     {
     clrscr();

     cout << "\t\t\tSub Menu: Print 'Gecilie' 10 Times\n";
     cout << "\t\t\t1. For Loop\n";
     cout << "\t\t\t2. While Loop\n";
     cout << "\t\t\t3. Do-While Loop\n";
     cout << "\t\t\t4. Exit\n";
     cout << "\t\t\tEnter your Choice: ";
     cin >> choice3;

     switch (choice3) {

     case 1:
     {
     clrscr();

     printGecilie(10);

     getch();
     break;
     }

     case 2:
     {
     clrscr();
     
     printGecilie();

     getch();
     break;
     }

     case 3:
     {
     clrscr();
     
     int startValue = 1;
     int endValue = 10;
     int numberOfTimesPrinted = printGecilie(startValue, endValue);

     cout << "Number of Times Printed: " << numberOfTimesPrinted << endl;

     getch();
     break;
     }

     case 4:
     {
     exit(0);
     break;
     }
     }

     break;

     case 2:
     {
     clrscr();
     cout << "\t\t\tSub Menu: Print Numbers from 1-5\n";
     cout << "\t\t\t1. For Loop\n";
     cout << "\t\t\t2. While Loop\n";
     cout << "\t\t\t3. Do-While Loop\n";
     cout << "\t\t\t4. Exit\n";
     cout << "\t\t\tEnter your Choice: ";
     cin >> choice3;

     switch(choice3)
     {
     case 1:
     {
     clrscr();

     printNumbers(1, 5);

     getch();
     break;
     }

     case 2:
     {
     clrscr();

     printNumbersAndReturnCount();     

     getch();
     break;
     }

     case 3:
     {
     clrscr();
     
     printNum();

     getch();
     break;
     }

     case 4:
     {
     exit(0);
     break;
     }
     }

     break;

     case 3:
     {
     clrscr();
     cout << "\t\t\tSub Menu: Print Numbers from 5-1\n";
     cout << "\t\t\t1. For Loop\n";
     cout << "\t\t\t2. While Loop\n";
     cout << "\t\t\t3. Do-While Loop\n";
     cout << "\t\t\t4. Exit\n";
     cout << "\t\t\tEnter your Choice: ";
     cin >> choice3;

     switch(choice3) {

     case 1:
     {
     clrscr();

     int startingValue = 5;

     int originalStartingValue = printNumbersAndReturnCount(startingValue);

     cout << "Original starting value: " << originalStartingValue << endl;

     getch();
     break;
     }

     case 2:
     {
     clrscr();

     printWhile();

     getch();
     break;
     }

     case 3:
     {
     clrscr();

     int startingValue = 5;
     printNums(startingValue);

     getch();
     break;
     }

     case 4:
     {
     exit(0);
     break;
     }
     }

     break;

     case 4:
     {
     clrscr();
     cout << "\t\t\tSub Menu: Print Even Numbers from 5-1\n";
     cout << "\t\t\t1. For Loop\n";
     cout << "\t\t\t2. While Loop\n";
     cout << "\t\t\t3. Do-While Loop\n";
     cout << "\t\t\t4. Exit\n";
     cout << "\t\t\tEnter your Choice: ";
     cin >> choice3;

     switch(choice3) {

     case 1:
     {
     clrscr();

     printEvenNum();

     getch();
     break;
     }

     case 2:
     {
     clrscr();

     int numberOfEvenNum = printEvenNums();

     cout << "Number of even numbers printed: " << numberOfEvenNum << endl;

     getch();
     break;
     }

     case 3:
     {
     clrscr();

     int startingValue = 5;
     evenNumbers(startingValue);

     getch();
     break;
     }

     case 4:
     {
     exit(0);
     break;
     }
     }

     break;

     case 5:
     {
     clrscr();
     cout << "\t\t\tSub Menu: Print Odd Numbers from 5-1\n";
     cout << "\t\t\t1. For Loop\n";
     cout << "\t\t\t2. While Loop\n";
     cout << "\t\t\t3. Do-While Loop\n";
     cout << "\t\t\t4. Exit\n";
     cout << "\t\t\tEnter your Choice: ";
     cin >> choice3;

     switch (choice3) {

     case 1:
     {
     clrscr();

     oddForLoop();

     getch();
     break;
     }

     case 2:
     {
     clrscr();

     int numberOfOdds = printOdds();
     cout << "Number of odd numbers printed: " << numberOfOdds << endl;

     getch();
     break;
     }

     case 3:
     {
     clrscr();

     int startingValue = 5;
     int numberOfOdd = printOdd(startingValue);
     cout << "Number of odd numbers printed: " << numberOfOdd << endl;     

     getch();
     break;
     }

     case 4:
     {
     exit(0);
     break;
     }
     }

     break;

     case 6:
     {
     clrscr();
     cout << "\t\t\tSub Menu: Prime Number or Not\n";
     cout << "\t\t\t1. For Loop\n";
     cout << "\t\t\t2. While Loop\n";
     cout << "\t\t\t3. Do-While Loop\n";
     cout << "\t\t\t4. Exit\n";
     cout << "\t\t\tEnter your Choice: ";
     cin >> choice3;

     switch (choice3) {

     case 1:
     {
     clrscr();

     primeOrNot();    

     getch ();
     break;
     }

     case 2:
     {
     clrscr();

     int result = primeNumber();

     if (result == 1) {
     cout << "The number you inputted is a prime number." << endl;
     } else {
	cout << "The number you inputted is not a prime number." << endl;
	}

     getch ();
     break;
     }

     case 3:
     {
     clrscr();

     int number;
     
     cout << "Enter a number: ";
     cin >> number;

     printPrime(number);     

     getch ();
     break;
     }

     case 4:
     {
     exit(0);
     break;
     }
     }

     break;

     case 7:
     {
     clrscr();
     cout << "\t\t\tSub Menu: Factorial\n";
     cout << "\t\t\t1. For Loop\n";
     cout << "\t\t\t2. While Loop\n";
     cout << "\t\t\t3. Do-While Loop\n";
     cout << "\t\t\t4. Exit\n";
     cout << "\t\t\tEnter your Choice: ";
     cin >> choice3;

     switch (choice3) {

     case 1:
     {
     clrscr();

     int number;

     cout << "Enter a number: ";
     cin >> number;

     long long result = calFactorial(number);

     if (result != -1) {
     cout << "Factorial of " << number << " = " << result << endl;
     }     

     getch();
     break;
     }

     case 2:
     {
     clrscr();

     factorial();

     getch();
     break;
     }

     case 3:
     {
     clrscr();

     long long result = fFactorial();

     cout << "Factorial = " << result << endl;

     getch();
     break;
     }

     case 4:
     {
     exit(0);
     break;
     }
     }

     break;

     case 8:
     {
     clrscr();
     cout << "\t\t\tSub Menu: Prime or Not\n";
     cout << "\t\t\t1. For Loop\n";
     cout << "\t\t\t2. While Loop\n";
     cout << "\t\t\t3. Do-While Loop\n";
     cout << "\t\t\t4. Exit\n";
     cout << "\t\t\tEnter your Choice: ";
     cin >> choice3;

     switch (choice3) {

     case 1:
     {
     clrscr();

     int num1, num2;

     cout << "Enter the first number: ";
     cin >> num1;

     cout << "Enter the second number: ";
     cin >> num2;

     int result = calGCD(num1, num2);

     if (result != -1) {
     cout << "The GCD of " << num1 << " and " << num2 << " is: " << result << endl;
    }

     getch();
     break;
     }

     case 2:
     {
     clrscr();

     int num1, num2;

	cout << "Enter the first number: ";
	cin >> num1;

	cout << "Enter the second number: ";
	cin >> num2;

	printGCD(num1, num2);

     getch();
     break;
     }

     case 3:
     {
     clrscr();

     printGCD();

     getch();
     break;
     }

     case 4:
     {
     exit(0);
     }
     }

     break;

     case 9:
     {
     exit(0);
     break;
     }

     default:
     {
     cout << "\t\t\tInvalid Input!\n";
     }
     }
     }
     }

}
}
}
}
}
}
} while(choice3!=9);
} 
} while(choice1!=4);
} 

