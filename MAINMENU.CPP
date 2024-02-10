//Programmer: Vince Adrian A. Besa
//BSIT-TG-1-1
//Programming Constructs
//Main Menu(Sequence, Selection, Loop)

#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <process.h>

//Functions Sequence
//1. Math Operations
void mathOp(void) {
    int n1, n2, s, d, p, q;

cout << "Enter the first number: ";
cin >> n1;

cout << "Enter the second number: ";
cin >> n2;

s = n1 + n2;
d = n1 - n2;
p = n1 * n2;
q = n1 / n2;

cout << "The sum of " << n1 << " and " << n2<< " is: " << s << endl;
cout << "The difference of " << n1 << "and " << n2 << " is: " << d << endl;
cout << "The product of " << n1 << " and " << n2 << " is: " << p << endl;
cout << "The quotient of " << n1 << " and " << n2 << " is: " << q << endl;
}

//2. Print Name 5 Times
void printName(void) {
cout << "Vince Adrian A. Besa" << endl;
cout << "Vince Adrian A. Besa" << endl;
cout << "Vince Adrian A. Besa" << endl;
cout << "Vince Adrian A. Besa" << endl;
cout << "Vince Adrian A. Besa" << endl;
}
//3. Circumference and Area of a Circle
void diameter(void) {
     float dia, cir, area, r;
     cout << "Enter a diameter: " << endl;
     cin >> dia;

     r = dia/2;
     cir = 2*3.1416*r;
     area = 3.1416*r*r;
     cout << "The circumference is: " << cir << endl;
     cout << "The area is: " << area << endl;
}

//4. Average
int average(int p, int m, int f) {
    int a;

    a = (p+m+f)/3;

    return a;
}

//5. Salesmans Commission
int totalSales() {
int salesmanNumber;
char salesmanName;
double unitSold;
double unitPrice;
double totalSales;

cout << "Enter Salesman Number: ";
cin >> salesmanNumber;
cout << "Enter Salesman Name: ";
cin >> salesmanName;
cout << "Enter Unit Sold: ";
cin >> unitSold;
cout << "Enter Unit Price: ";
cin >> unitPrice;

totalSales = unitSold * unitPrice;

return totalSales;
}

//6. Swapping
void swapping() {
int a, b, temp;

    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

temp = b;
b = a;
a = temp;

cout << "First Number: " << a << endl;
cout << "Second Number: " << b << endl;
}

//7. Sqaure and Cube of a Number
void sqAndCube() {
int n, sq, cube;

cout << "Enter the number: ";
cin >> n;

sq = n*n;
cube = n*n*n;

cout << "The square of the number is: " << sq << endl;
cout << "The cube of the number is: " << cube << endl;
}

//8. Area and Perimeter of a Rectangle
void areaPerimeter(int l, int w) {

     int area = l * w;
     int perimeter = 2 * (l + w);
     cout << "The area is: " << area << endl;
     cout << "The perimeter is: " << perimeter << endl;
}

//9. Celcius to Fahrenheit
void celFahrenheit(float c) {

float f = (c*9/5)+32;
cout << "The temperature in Fahrenheit is: " << f;
}

//10. GrossPay
int grossPay(int hoursWork, int rate) {
int grossPay;
grossPay = hoursWork*rate;
return grossPay;
}


//Selection Functions
//1. Positive or Negative
void posiNega(double num) {
     clrscr();
     if(num > 0) {
     cout << "The number is positive!";
     } else{
     cout << "The number is negative";
     }
}

//2. Odd or Even 
void oddEven(int numm) {
     clrscr();
     if(numm%2==0){
     cout << "The number is an even number";
     }
     else{
     cout << "The number is an odd number";
     }
}

//3. Passed or Failed
int passFail(int p, int m, int f, int a) {
     clrscr();
     if (a >= 75) {
     cout << "You passed!";
     }
     else {
     cout << "You failed!";
     }
     a = (p+m+f)/3;
     cout << "The average is: " << a << endl;
     return a;
}
//4. Salesman's Commission 
void salesmanCom() {
int sno, us, up, ts, c;
char sna[10];
cout << "Enter salesman number: ";
cin >> sno;
cout << "Enter salesman name: ";
cin >> sna;
cout << "Enter the unit sold: ";
cin >> us;
cout << "Enter the unit price: ";
cin >> up;
ts = us*up;
cout << "Salesman Number: " << sno << endl;
cout << "Salesman Name: " << sna << endl;
cout << "The Total Sales is: "<< ts << endl;

if (ts<=10000) {
c = ts*0.10;
cout << "Your commission is: " << c;
}
else if (ts<=15000) {
c = ts*0.15;
cout << "Your commission is: " << c;
}
else if (ts<=20000) {
c = ts*0.20;
cout << "Your commission is: " << c;
}
else if (ts<=25000) {
c = ts*0.25;
cout << "Your commission is: " << c;
}
else if (ts>25000) {
c = ts*0.30;
cout << "Your commission is: " << c;
}
else {
cout << "Invalid!";
}
cout << "\n";
getch();
}

//5. Equivalent Grade
void equiGrade() {
float ave, pre, mid, fn;
cout << "Enter your prelim grade: ";
cin >> pre;
cout << "Enter your midterm grade: ";
cin >> mid;
cout << "Enter your finals grade: ";
cin >> fn;
ave = (pre+mid+fn)/3;
cout << "Your average is: " << ave << endl;

if (ave >= 97) {
cout << "1.0";
}
else if (ave >= 94) {
cout << "1.25";
}
else if (ave >= 91) {
cout << "1.5";
}
else if (ave >= 88) {
cout << "1.75";
}
else if (ave >= 85) {
cout << "2.0";
}
else if (ave >= 82) {
cout << "2.25";
}
else if (ave >= 79) {
cout << "2.5";
}
else if (ave >= 76) {
cout << "2.75";
}
else if (ave == 75) {
cout << "3.0";
}
else {
cout << "5.0";
}
cout << "\n";
}

//6. Larger Number 
int largerNum(int aa, int bb) {
cout << "Enter 1st number: ";
cin >> aa;
cout << "Enter 2nd number: ";
cin >> bb;
cout << "a: " << aa << endl;
cout << "b: " << bb << endl;
if (aa > bb) {
return aa;
}
else {
return bb;
}
}

//7. Smallest Number 
void smallestNum() {
int num1, num2, num3;
cout << "Enter 1st number: ";
cin >> num1;
cout << "Enter 2nd number: ";
cin >> num2;
cout << "Enter 3rd number: ";
cin >> num3;

if (num1<num2 && num1<num3) {
cout << num1 << " is the smallest number";
}
else if (num2<num1 && num2<num3) {
cout << num2 << " is the smallest number";
}
else {
cout << num3 << " is the smallest number";
}
}

//8. Closest Value to 100
void closestNum(int a1, int b2) {
if (a1==99 || b2==101) {
cout << a1 << endl;
cout << b2 << endl;
}
else if (a1==101 || b2==99) {
cout << a1 << endl;
cout << b2 << endl;
}
else if (a1 == b2) {
cout << "0";
}
else if (a1 > b2) {
cout << a1;
}
else {
cout << b2;
}
}

//9. Triple Sum 
void sumTriple(int n1, int n2) {
if (n1 == n2) {
  cout << "The sum of the numbers is (times 3 since it's same value): "
  << (n1 + n2)*3;
  }else {
  cout << "The sum of the two numbers is: " << n1 + n2;
  }
}

//10. Multiple of 3 or 7
void multOf() {
int nnum;
  cout << "Input a number: ";
  cin >> nnum;

  if (nnum == 21) {
  cout << "The number is a multiple of 3 and 7" << endl;
  }
  else if (nnum%3 == 0) {
  cout << "The number is a multiple of 3";
  }
  else if (nnum%7 == 0) {
  cout << "The number is a multile of 7";
  }
  else {
  cout << "The number is not a multiple of 3 or 7";
  }
  cout <<"\n";
}


//Loop Functions
//1. Print Gecilie 10 times
//For Loop
void printGecilie(int numberOfTimes) {
    for (int ctr = 1; ctr <= numberOfTimes; ctr++) {
	cout << "Gecilie" << endl;
    }
}

//While Loop
int printGecilie() {
    int ctr = 1;
    int count = 0;

    while (ctr <= 10) {
	cout << "Gecilie" << endl;
	ctr++;
	count++;
    }

    return count;
}

//Do-While Loop
int printGecilie(int start, int end) {
 int ctr = start;
 int count = 0;

	do {
	cout << "Gecilie" << endl;
	ctr++;
	count++;
	} while (ctr <= end);
	return count;
}

//2. Numbers from 1-5
//For Loop
void printNumbers(int start, int end) {
    for (int ctr = start; ctr <= end; ctr++) {
	cout << ctr << endl;
    }
}

//While Loop
int printNumbersAndReturnCount() {
    int ctr = 1;

    while (ctr <= 5) {
	cout << ctr << endl;
	ctr++;
    }

    return ctr - 1;
}

//Do-While Loop
void printNum() {
     int ctr = 1;
     do {
	cout << ctr << endl;
	ctr++;
	} while (ctr <= 5);
}

//3. Numbers from 5-1
//For Loop
int printNumbersAndReturnCount(int start) {
    int ctr = start;

    for (; ctr > 0; ctr--) {
        cout << ctr << endl;
    }

    return start;
}

//While Loop
void printWhile() {
     int ctr = 5;
	clrscr();

	while (ctr > 0) {
	cout << ctr << endl;
	ctr--;
	}
}

//Do-While Loop
void printNums(int start) {
    int ctr = start;

    do {
        cout << ctr << endl;
        ctr--;
    } while (ctr > 0);
}

//4. Even Numbers from 5-1
//For Loop 
void printEvenNum(void) {
     int ctr = 5;
	clrscr();

	for (; ctr >= 1; ctr--) {
	if (ctr%2==0) {
	cout << ctr << endl; }
	}
}

//While Loop
int printEvenNums() {
    int ctr = 5;
    int evenCount = 0;

    while (ctr >= 1) {
        if (ctr % 2 == 0) {
            cout << ctr << endl;
            evenCount++;
        }
        ctr--;
    }

    return evenCount;
}

//Do-While Loop 
void evenNumbers(int start) {
    int ctr = start;

    do {
        if (ctr % 2 == 0) {
            cout << ctr << endl;
        }
        ctr--;
    } while (ctr >= 1);
}

//5. Odd Numbers from 5-1 
//For Loop
void oddForLoop(void) {
     for (int ctr = 5; ctr >= 1; ctr --) {
	if (ctr%2==1) {
	cout << ctr << endl;
	}
	}
}

//While Loop
int printOdds() {
    int ctr = 5;
    int oddCount = 0;

    while (ctr >= 1) {
        if (ctr % 2 != 0) {
            cout << ctr << endl;
            oddCount++;
        }
        ctr--;
    }

    return oddCount;
}

//Do_While Loop 
int printOdd(int start) {
    int ctr = start;
    int oddCount = 0;

    do {
        if (ctr % 2 == 1) {
            cout << ctr << endl;
            oddCount++;
        }
        ctr--;
    } while (ctr >= 1);

    return oddCount;
}

//6. Prime or Not 
//For Loop
void primeOrNot() {
int number, x, y;
		clrscr();

		cout << "Enter a number: ";
		cin >> number;

		if (number <= 1) {
		x = 0; }

		else if (number==2) {
		x = 1; }

		else if (number%2==0) {
		x = 0; }

		else {
		x = 1; }

		for (y = 3; y < number; y += 2) {
		if(number%y==0) {
		x = 0;

		break;
			}
			}

		if (x==1) {
		cout << "The number you inputted " << number << "is a prime number.";
		}

		else {
		cout << "The number you inputted " << number << "is not a prime number.";
		}
}

//While Loop
int primeNumber() {
    int number, x, y;

    cout << "Enter a number: ";
    cin >> number;

    if (number <= 1) {
        x = 0;
    } else if (number == 2) {
        x = 1;
    } else if (number % 2 == 0) {
        x = 0;
    } else {
        x = 1;
    }

    y = 3;
    while (y < number) {
        if (number % y == 0) {
            x = 0;
            break;
        }
        y += 2;
    }

    return x;
}

//Do-While Loop
void printPrime(int number) {
    int x, y;

    if (number <= 1) {
        x = 0;
    } else if (number == 2) {
        x = 1;
    } else if (number % 2 == 0) {
        x = 0;
    } else {
        x = 1;
    }

    y = 3;
    do {
        if (number % y == 0) {
            x = 0;
            break;
        }
        y += 2;
    } while (y < number);

    if (x == 1) {
        cout << "The number you inputted " << number << " is a prime number." << endl;
    } else {
        cout << "The number you inputted " << number << " is not a prime number." << endl;
    }
}

//7. Factorial 
//For Loop
long long calFactorial(int number) {
    if (number < 0) {
        cerr << "Error: Factorial of a negative number is undefined." << endl;
        return -1;  
    }

    long long factorial = 1;

    for (int i = 1; i <= number; i++) {
        factorial *= i;
    }

    return factorial;
}

//While Loop
void factorial(void) {
     int number;
     long long factorial = 1; 

     cout << "Enter a number: ";
     cin >> number;

            while (number < 0) {
            cout << "Please enter a positive number only:): ";
            cin >> number;
        }

            int i = 1;
            while (i <= number) {
            factorial *= i;
            i++;
        }

      cout << "The factorial of " << number << " = " << factorial << endl;
}

//Do-While Loop
long long fFactorial() {
    int number;

    do {
	cout << "Enter a number: ";
	cin >> number;

	if (number < 0) {
	    cout << "Please enter a positive number." << endl;
        }
    } while (number < 0);

    long long factorial = 1;
    int i = 1;

    do {
        factorial *= i;
        i++;
    } while (i <= number);

    return factorial;
}

//8. GCD
//For Loop
int calGCD(int num1, int num2) {
    if (num1 <= 0 || num2 <= 0) {
	cerr << "Error: Please enter positive numbers only." << endl;
        return -1;  // Indicate an error
    }

    int gcd = 1;

    for (int i = 1; i <= num1 && i <= num2; ++i) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i;
        }
    }

    return gcd;
}

//While Loop 
void printGCD(int num1, int num2) {
    int gcd;

    num1 = (num1 > 0) ? num1 : -num1;
    num2 = (num2 > 0) ? num2 : -num2;

    int originalNum1 = num1;
    int originalNum2 = num2;

    while (num1 != 0 && num2 != 0) {
        if (num1 > num2) {
            num1 = num1 % num2;
        } else {
            num2 = num2 % num1;
        }
    }

    gcd = (num1 == 0) ? num2 : num1;

    cout << "The GCD of " << originalNum1 << " and " << originalNum2 << " is: " << gcd << endl;
}

//Do-While Loop 
void printGCD(void) {
            int num1, num2;

            cout << "Enter the first number: ";
            cin >> num1;

            cout << "Enter the second number: ";
            cin >> num2;

            int gcd;

            num1 = (num1 > 0) ? num1 : -num1;
            num2 = (num2 > 0) ? num2 : -num2;

            int originalNum1 = num1;
            int originalNum2 = num2;

            do {
                if (num1 > num2) {
                num1 = num1 % num2;
            } else {
            num2 = num2 % num1;
            }
            } while (num1 != 0 && num2 != 0);

                gcd = (num1 == 0) ? num2 : num1;

                cout << "The GCD of " << originalNum1 << " and " << originalNum2 << " is: " << gcd << endl;
}


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

     if (strcmp (p, "bastapassto")==0) {
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

