//To calculate average of five numbers

//#include<iostream>
//using namespace std;
//int main() {
//	float a, b, c, d, e, sum, avg;
//	cout << "\nEnter the five numbers:\n";
//	cin >> a >> b >> c >> d >> e;
//	sum = (a + b + c + d + e);
//	avg = sum / 5;
//	cout << "\nSum= " << sum << endl;
//	cout << "\nAverage= " << avg;
//
//}


//To compute the simple interest

//#include<iostream>
//
//using namespace std;
//int main()
//{
//	float principal, rate, time, interest;
//	cout << "\nEnter the principal:";
//	cin >> principal;
//	cout << "\nEnter the rate of interest:";
//	cin >> rate;
//	cout << "\nEnter the time period(in years):";
//	cin >> time;
//	interest = (principal * rate * time) / 100.0;
//	cout << "\n\nSimple Interest is computed as: " << interest;
//
//
//}


//To find the largest of three numbers

//#include<iostream>
//using namespace std;
//int main() {
//	int a, b, c, big;
//	cout << "\nenter the three numbers:\n";
//	cin >> a >> b >> c;
//	big = a; //assuming 'a' as the largest number
//	if (b > big)
//	{
//		big = b;
//		if (c > big)
//		{
//			big = c;
//		}
//	}
//	cout << "\nlargest number is = " << big;
//	return 0;
//}
//
//
////To find the smallest of three numbers
//

//#include<iostream>
//using namespace std;
//int main() {
//	int a, b, c, small;
//	cout << "\nenter the three numbers:\n";
//	cin >> a >> b >> c;
//	small = a; //assuming a as small number
//	if (b < small) 
//	{
//		small=b;
//		if (c < small)
//		{
//			small=c;
//		}
//	}
//	cout << "\nsmallest number is = " << small;
//	return 0;
//}


//Leap year checking

//#include<iostream>
//using namespace std;
//int main() {
//	int year;
//	cout << "Enter the year" << endl;
//	cin >> year;
//	cout << "\n";
//	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) 
//	{
//		cout << year << " is a leap year";
//	}
//	else
//	{
//		cout << year << " is not a leap year";
//	}
//	return 0;
//}

//To find area of a triangle and its type
//#include<iostream>
//#include<cmath>
//using namespace std;
//int main() {
//	float a, b, c, s, area;
//	cout << "\nEnter the three slides of the triangle:\n";
//	cin >> a >> b >> c;
//	cout << "\na=" << a << " b=" << b << " c=" << c << endl;
//	if (((a + b) > c) && ((b + c) > a) && ((c + a) > b))
//	{
//		if ((a == b) && (a == c))
//		{
//			cout << "\nEquillateral triangle" << endl;
//		}
//		else
//		{
//			if ((a == b) && (b == c) && (a == c)){
//				cout << "\nIsosceles triangle\n";
//			}
//			else
//			{
//				cout << "\nScalene triangle\n" << endl;
//			}
//		}
//		s = (a + b + c) / 2.0;
//		area = sqrt(s * (s - a) * (s - b) * (s - c));
//		cout << "\nArea =" << area << "sq.units";
//	}
//	else
//	{
//		cout << "\nTriangle not possible\n";
//	}
//
//	return 0;
//}


//To input a number from 1-7 and write corresponding day of week
//Using switch control structures

//#include<iostream>
//using namespace std;
//int main() {
//	int day;
//	cout << "Enter the no. of the weekday (1-7):" << endl;
//	cin >> day;
//	switch (day)
//	{
//	case 1:cout << "Weekday is Sunday";
//		break;
//	case 2:cout << "Weekday is Monday";
//		break;
//	case 3:cout << "Weekday is Tuesday";
//		break;
//	case 4:cout << "Weekday is Wednesday";
//		break;
//	case 5:cout << "Weekday is Thursday";
//		break;
//	case 6:cout << "Weekday is Friday";
//		break;
//	case 7:cout << "Weekday is Saturday";
//		break;
//	default:cout << "Wrong choice";
//	 }
//	return 0;
//}


//To find the roots of a quadratic equation
// 
//#include<iostream>
//#include<cmath>
//using namespace std;
//int main() {
//	float a, b, c, disc, xr1, xr2, img1, img2;
//	cout << "Enter the coefficients\n" << endl;
//	cin >> a >> b >> c;
//	cout << "\na=" << a << "\nb=" << b << "\nc=" << c << endl;
//	if (a == 0.0)
//	{
//		if (b == 0.0)
//		{
//			cout << "\nEquation is degenerate\n";
//		}
//		else
//		{
//			xr1 = -c / b;
//			cout << "\nLinear equation has single root\n";
//			cout << "\nRoot = " << xr1;
//		}
//	}
//	else
//	{
//		disc = b * b - 4.0 * a * c;
//		if (disc > 0.0)
//		{
//			cout << "\nReal and distinct roots\n";
//			xr1 = (-b + sqrt(disc)) / (2.0 * a);
//			xr2 = (-b - sqrt(disc)) / (2.0 * a);
//			cout << "\n\nFirst root = " << xr1;
//			cout << "\n\nSecond root =" << xr2;
//		}
//		else 
//		{
//			if (disc == 0.0)
//			{
//				cout << "\nReal and equal roots\n";
//				xr1 = -b / (2.0 * a);
//				xr2 = xr1;
//				cout << "\n\nFirst root = " << xr1;
//				cout << "\n\nSecond root = " << xr2;
//			}
//			else
//			{
//				cout << "\n\nComplex conjugate roots\n";
//				xr1 = -b / (2.0 * a);
//				img1 = sqrt(-disc) / (2.0 * a);//square root of a negative no
//				                               //can't be computed on the system
//				xr2 = xr1;
//				img2 = -img1;
//				cout << "\nFirst root is :\n";
//				cout << "\nReal part = " << xr1;
//				cout << "\nImg. part = " << img1;
//
//				cout << "\n\nSecond root is :\n";
//				cout << "\nReal part = " << xr2;
//				cout << "\nImg. part = " << img2;
//			}
//		}
//	}
//
//	return 0;
//}


//To print first n natural numbers and their sum using while loop

//#include<iostream>
//
//using namespace std;
//int main() {
//	int i = 1,sum = 0,n;
//	cout << "\nHow many natural numbers you want to print with their sum: \n";
//	cin >> n;
//	cout << '\n' << n << " natural numbers are: \n";
//	while (i <= n)
//	{
//		cout << i << ' ';
//		sum += i++;
//	}
//	cout << "\n\nSum = " << sum;
//
//	return 0;
//}


//To print first n natural numbers and their sum using do-while loop

//#include<iostream>
//using namespace std;
//int main() {
//	int i=1, sum = 0, n;
//	cout << "\nHow many  natural numbers you want to print with their sum:\n";
//	cin >> n;
//	cout << '\n' << n << " natural numbers are:\n";
//	do
//	{
//		cout << i << ' ';
//		sum += i++;
//	} while (i <= n);
//	cout << "\n\nSum= " << sum;
//
//	return 0;
//}
//


//To print first n natural numbers and their sum using for loop

//#include<iostream>
//using namespace std;
//int main()
//{
//	int sum = 0, n;
//	cout << "\nHow many natural numbers you want to print with their sum:\n";
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cout << i << ' ';
//		sum += i;
//	}
//	cout << "\n\nSum= " << sum;
//
//	return 0;
//}
 

//To convert centigrate temperature to fahrenheit and vice versa

//#include<iostream>
//using namespace std;
//int main()
//{
//	float cent, fahr;
//	int choice;
//	do
//	{
//		cout << "1. Centigrade to fahrenheit\n";
//		cout << "2. Fahrenheit to Centigrade";
//		cout << "\n\nEnter the desired conversation: ";
//		cin >> choice;
//	} while ((choice < 1) || (choice > 2));//get the correct value only
//
//	switch (choice)
//	{
//	case 1:cout << "\nEnter the cent temperature: ";
//		cin >> cent;
//		fahr = 1.8 * cent + 32.0;
//		cout << "\nCent temperature= " << cent << endl;
//		cout << "\nFahrenheit temperature= " << fahr << endl;
//		break;
//	case 2:cout << "\nEnter the fahrenheit temperature: ";
//		cin >> fahr;
//		cent = (fahr - 32.0) / 1.8;
//		cout << "\nFahrenheit temperature= " << fahr << endl;
//		cout << "\nCent temperature= " << cent << endl;
//		break;
//	}//switch control ends here
//
//	return 0;
//}


//To print no of days in a month

//#include<iostream>
//using namespace std;
//int main()
//{
//	int month;
//	do {
//		cout << "\nEnter the month number(1-12) : ";
//		cin >> month;
//	} while ((1 > month) || (12 < month));
//	switch (month)
//	{
//	case 1:
//	case 3:
//	case 5:
//	case 7:
//	case 8:
//	case 10:
//	case 12:cout << "\n31 days are there in the month";
//		break;
//	case 2:cout << "\n28 or 29 days are there in the month";
//		break;
//	case 4:
//	case 6:
//	case 9:
//	case 11:cout << "\n30 days are there in the month";
//	}
//
//	return 0;
//}



//To generate simple calculator

//#include<iostream>
//using namespace std;
//int main()
//{
//	float x, y;
//	char operand;
//	cout << "\nEnter the two operands:\n ";
//	cin >> x >> y;
//	cout << "\nEnter the operation to be performed(+,-,*,/): ";
//	cin >> operand;
//	switch (operand)
//	{
//	case ('+'):cout << endl << x << "+" << y << "= " << (x + y);
//		break;
//	case('-'):cout << endl << x << "-" << y << "= " << (x - y);
//		break;
//	case('*'):cout << endl << x << "*" << y << "= " << (x * y);
//		break;
//	case('/'):if (y == 0) {
//		cout << "\nDivison by  is not possible";
//	}
//		cout << endl << x << "/" << y << "= " << (x / y);
//		break;
//	default:cout << "\nWrong Choice\n";
//	}
//	return 0;
//}


/*To print the following pattern:  1
                                   1   2
                                   1    2   3*/

//#include<iostream>
//using namespace std;
//int main() {
//    int line_nos;
//    cout << "\nEnter the desired number of lines: ";
//    cin >> line_nos;
//    cout << "\n\nDesired pattern is:\n\n";
//    for (int i = 1; i <= line_nos; i++) {
//        for (int j = 1; j <=i; j++) {
//            cout << j << '\t';
//        }
//        cout << endl;
//    }
//    return 0;
//}


/*To print the following pattern:1  2  3
                                 1  2
                                 1      */

//#include<iostream>
//using namespace std;
//int main() {
//    int line_num;
//    cout << "Enter the number of lines: " << endl;
//    cin >> line_num;
//    for (int i = 0; i < line_num; i++) {
//        for (int j = 1; j <= line_num - i ; j++) {
//            cout << j << "\t";
//        }
//        cout << endl;
//    }
//}


/*To generate the pattern :  1=1
                             1+2=3
                             1+2+3=6*/

//#include<iostream>
//using namespace std;
//int main() {
//    int line_no;
//    cout << "Enter the number of required lines in the pattern: ";
//    cin >> line_no;
//    cout << "\n\nRequired pattern is:\n";
//    for (int i = 1; i <= line_no; i++) {
//        cout << '1';
//        int sum = 1;
//        for (int j = 2; j <= i; j++) {
//            cout << '+' << j;
//            sum += j;
//        }
//        cout << "= " << sum << endl;
//    }
//}


//To generate the pyramid

//#include<iostream>
//using namespace std;
//int main() {
//    int n;
//    cin >> n;
//    for (int i = 1; i <= n; i++) {
//        for (int l = i; l <= n-1; l++) {
//            cout << ' ';
//        }
//        for (int j = 1; j <= i; j++) {
//            cout << j ;
//        }
//        for (int m = i - 1; m >= 1; m--) {
//            cout << m ;
//        }
//        cout << endl;
//    }
//
//}


//To generate the pyramid

//#include<iostream>
//using namespace std;
//int main() {
//    int mid;
//    cout << "\n\n*******Desired Pyramid is******\n\n";
//    for (int i = 1; i <= 10; i++) 
//    {
//        cout << "        ";
//        mid = (2 * i) - 1;
//        for (int j = 1; j <= (10-i); j++) {
//            cout << " ";
//        }
//        for (int j = i; j <= mid; j++) {
//            cout << (j % 10);
//        }
//        for (int j = (mid - 1); j >= i; j--) {
//            cout << (j % 10);    
//        }
//        cout << endl;
//    }
//}


//To generate first n fibonnaci terms

//#include<iostream>
//using namespace std;
//int main() {
//    int a, b, next, n, count;
//    cout << "\nHow many fibonacci terms required >=2 and <= 24?\n";
//    cin >> n;
//    a = 0;
//    b = 1;
//    cout << "\nHow many fibonacci terms are:\n";
//    cout << a << ' ' << b;
//    count = 2;
//    while (count < n) {
//        next = a + b;
//        cout << ' ' << next;
//        count++;
//        a = b;
//        b = next;
//    }//while loop ends
//}     

//To generate fibonnaci terms upto a specific limit
//
//#include<iostream>
//using namespace std;
//int main() {
//    int a, b, next, limit;
//    cout << "\nEnter the limit upto which fibonnaci terms required:\n";
//    cin >> limit;
//    cout << '\n' << "fibonacci terms upto" << limit << " are:\n";
//    a = 0;
//    b = 1;
//    cout << a << ' ' << b;
//    next = a + b;
//    while (next <= limit)
//    {
//        cout << ' ' << next;
//        a = b;
//        b = next;
//        next = a + b;
//    }
//}

//#include<iostream>
//using namespace std;
//int main() {
//    int a, b, next, num;
//    cout << "\nEnter the number for fibonacci check:\n";
//    cin >> num;
//    if ((num == 0) || (num == 1))
//    {
//        cout << num << " is a fibonacci term";
//    }
//    else
//    {
//        a = 0;
//        b = 1;
//        next = 0;
//        while (next < num) {
//
//            a = b;
//            b = next;
//            next = a + b;
//        }
//
//
//
//        if (next == num) {
//            cout << num << " is a fibonacci term ";
//        }
//        else {
//            cout << num << " is not a fibonacci term ";
//        }
//    }
//}


//To check a number for Armstrong

//#include<iostream>
//using namespace std;
//int main() {
//    int num, n, sum, r;
//    cout << "\nEnter the number:\n";
//    cin >> num;
//    n = num;
//    sum = 0;
//    while (n != 0) {
//        r = n % 10;   //obtain the remainder
//        sum += (r * r * r);
//        n /= 10;
//    }
//    if (sum == num) {
//        cout << num << " is an armstrong number";
//    }
//    else {
//        cout << num << " is not an armstrong number";
//    }
//}


//To generate Armstrong numbers upto a specific limit


//#include<iostream>
//using namespace std;
//int main()
//{
//    int num, n, sum, r;
//    cout << "\nenter the number:\n";
//    cin >> num;
//
//    for (int i = 1; i <= num; i++)
//    {
//        n = i;
//        sum = 0;
//        while (n != 0) {
//            r = n % 10;   //obtain the remainder
//            sum += (r * r * r);
//            n /= 10;
//        }
//        if (sum == i) {
//            cout << i << " ";
//        }
//    }
//}


//To check a number for perfect number

//#include<iostream>
//using namespace std;
//int main() {
//    int a, b, c,r, n,sum=0;
//    cin >> n;
//    for (int i = 1; i < n; i++) {
//        c = i;
//        r = n % c;
//        if (r == 0)
//        {
//            sum+=c;
//        }
//       
//    }
//    if (sum == n) {
//        cout << n << " " << " is a perfect number";
//
//    }
//    else {
//        cout << n << "  is not a perfect number";
//    }
//}


//To print perfect numbers upto a specific limit

//#include<iostream>
//using namespace std;
//int main() {
//    int a, b, c, r, n, k, m, sum;
//    cin >> m;
//    for (int n = 1; n <= m; n++) 
//    {   
//        k = n;
//        sum = 0;
//        for (int i = 1; i < k; i++) {
//            c = i;
//            if ((k % c) == 0)
//            {
//                sum += c;
//           }
//            
//        }
//        if (sum == k) {
//            cout << k << " ";
//        }     
//    }
//}


//To check a number for prime number

//#include<iostream>
//using namespace std;
//int main() {
//    int a, sum = 0;
//    cin >> a;
//    for (int i = 1; i < a / 2; i++) {
//       
//        if ((a % i) == 0) {
//            sum += 1;
//            }
//    }
//    if (sum > 2) {
//        cout << "This is not a prime number";
//    }
//    else {
//        cout << "This is  a prime number";
//    }
//    return 0;
//}


//To generate first n prime number

//#include<iostream>
//#include<cmath>
//using namespace std;
//int main() {
//    int n, num, step, sq_rt, count;
//    cout << "\nHow many primes are required?\n";
//    cin >> n;
//    cout << '\n' << n << " primes are :\n";
//    cout << "2";
//    count = 1;
//    num = 3;
//    while (count < n) 
//    {
//        sq_rt = sqrt(num);
//        step = 2;
//        while (step <= sq_rt)
//        {
//            if ((num % step) == 0) 
//            {
//                break;
//            }
//            else 
//            {
//                step++;
//            }
//        }//inner while loop ends here
//        if (step > sq_rt) 
//        {
//            cout << ' ' << num;
//            count++;
//        }
//        num += 2;
//    }//outer while loops ends here
//    
//    return 0;
//}


//#include<iostream>
//#include<cmath>
//using namespace std;
//int main() {
//    int limit, num, step, sq_rt;
//    cout << "\nEnter the limit upto which prime numbers required:\n";
//    cin >> limit;
//    if (limit<2)
//    {
//        cout << "\nNo prime exists upto" << limit;
//    }
//    else 
//    {
//        cout << "\nprimes upto " << limit << " are:\n" << '2';
//        num = 3;
//        while (num <= limit)
//        {
//            sq_rt = sqrt(num);
//            step = 2;
//            while (step <= sq_rt)
//            {
//                if ((num % step) == 0)
//                {
//                    break;
//                }
//                else
//                {
//                    step++;
//                }
//                
//                
//            }//inner while loop ends here
//            if (step > sq_rt)
//            {
//                cout << '\t' << num;
//                
//            }
//            num += 2;
//            //outer while loop ends here
//        }
//    }   
//}


//To obtain the prime factors of a number
//#include<iostream>
//#include<cmath>
//using namespace std;
//int main() {
//    int num, mid, sq_rt, step;
//    do
//    {
//        cout << "\nEnter the positive integer:\n";
//        cin >> num;
//    } while (num <= 0);//loop continues until positive value is entered
//    sq_rt = sqrt(num);
//    step = 2;
//    while (step <= sq_rt)
//    {
//        if ((num % step) == 0) {
//            break;
//        }
//        else {
//            step++;
//        }
//    }//while loop ends here
//    if (step > sq_rt) 
//    {
//        cout << '\n' << num << " has no prime factors";
//    }
//    else
//    {
//        cout << "\n\nPrime factors of " << num << "are:\n";
//        step = 2;
//        mid = num / 2;
//        while ((num != 1) && (step <= mid)) {
//            if ((num % step) == 0)
//            {
//                cout << step << ' ';
//                num /= step;
//            }
//            step++;
//        }
//    }
//    return 0;
//}



//To print multiplication table of a given number
//
//#include<iostream>
//using namespace std;
//int main() {
//    int n;
//    cin >> n;
//    for (int i = 1; i <= 1000000; i++)
//    {
//        cout << n << "*" << i << "= " << n * i << endl;
//    }
//    return 0;
//}


//To print all possible combinations of 3 digits

//#include<iostream>
//#include<string>
//#include<vector>
//#include <algorithm>
//using namespace std;
//int main() {
//    /*int i, j, k;
//    cout << "Enter three integers" << endl;
//    cin >> i >> j >> k;
//    if ((i != j) && (j != k) && (i != k))
//    {
//        cout << i << j << k << endl;
//        cout << i << k << j << endl;
//        cout << k << i << j << endl;
//        cout << k << j << i << endl;
//        cout << j << i << k << endl;
//        cout << j << i << k << endl;
//    }
//    if ((i != j) && (j != k) && (i == k))
//    {
//        cout << i << j << k << endl;
//        cout << j << i << k << endl;
//        cout << i << k << j << endl;
//    }
//    if ((i != k) && (j != k) && (i == j))
//    {
//        cout << i << j << k << endl;
//        cout << j << k << i << endl;
//        cout << k << i << j << endl;
//    }
//    if ((i != k) && (i != j) && (j == k))
//    {
//        cout << i << j << k << endl;
//        cout << j << i << k << endl;
//        cout << j << k << i << endl;
//    }
//    if ((i == k) && (i == j) && (j == k))
//    {
//        cout << i << j << k << endl;
//        
//    }*/
//    cout << "Enter the number : ";
//    int num;
//    cin >> num;
//    vector<int> numbers;
//
//    while (num/10)
//    {
//        numbers.push_back(num % 10);
//        num = num / 10;
//    }
//    numbers.push_back(num);
//
//    cout << endl;
//
//    /*for (int i = 0; i < numbers.size(); i++)
//    {
//        cout << numbers[i] << " ";
//    }*/
//
//    // sort the numbers in ascending order
//    sort(numbers.begin(), numbers.end());
//
//    // find and print all permutations
//    do {
//        for (int i = 0; i < numbers.size(); i++) {
//            cout << numbers[i] << " ";
//        }
//        cout << endl;
//    } while (next_permutation(numbers.begin(), numbers.end()));
//
//
//    
//    return 0;
//}


//To calculate LCM and GCD  of two numbers

//#include<iostream>
//using namespace std;
//int main() {
//    int num1, num2, lcm, gcd, temp, prod, n1, n2;
//    do 
//    {
//        cout << "\nEnter the two positive numbers:\n";
//        cin >> num1 >> num2;
//    } 
//    while (num1 <= 0 || num2 <= 0);//loop continues for correct values
//    n1 = num1;
//    n2 = num2;
//    prod = n1 * n2;
//    while (n2 != 0)
//    {
//        if ((n1 % n2) == 0) {
//            break;
//        }
//        else {
//            temp = n1 % n2;
//            n1 = n2;
//            n2 = temp;
//        }//else statement ends here
//    }//while loop ends here
//    gcd = n2;
//    lcm = prod / gcd;
//    cout << "\nLCM of " << num1 << " and " << num2 << " = " << lcm;
//    cout << "\nGCD of " << num1 << " and " << num2 << " = " << gcd;
//
//    return 0;
//}


//Swapping of two numbers without using temporary variable

//#include<iostream>
//using namespace std;
//int main() 
//{
//    int a, b;
//    cout << "Enter the two numbers: ";
//    cin >> a >> b;
//    cout << "\n\nInputted  numbers are:\n";
//    cout << "A= " << a;
//    cout << "\nB= " << b;
//    //swapping
//    a = a + b;
//    b = a - b;
//    a = a - b;
//    cout << "\n\nNumbers after swapping are:\n";
//    cout << "A= " << a << endl;
//    cout << "B= " << b;
//
//    return 0;
//}


//To produce the pythagorean triplets 

//#include<iostream>
//#include<cmath>
//using namespace std;
//
//int main() {
//    int in,count = 0;
//    cout << "\nEnter the limit to produce the pythagorean triplets\n" << endl;
//    cin >> in;
//    for (int i = 1; i <= in; i++) 
//    {
//        for (int j = i+1; j <= in; j++)
//        {
//            for (int k = j+1; k <= in; k++) 
//            {
//                if (pow(i, 2) + pow(j, 2) == pow(k, 2))
//                {
//                    cout << i << " " << j << " " << k << endl;  
//                    count++;
//                }
//            }
//        }
//    }
//    cout << "number of pythogorean triplet sets less than " << in << " is " << count << endl;
//    return 0; 
//}


//To input a character and check whether it's alphabet,digit or any other character

//#include<iostream>
//using namespace std;
//int main() {
//    char ch;
//    cout << "\nEnter the character: ";
//    cin >> ch;
//    if (((ch >= 'a') && (ch <= 'z')) || ((ch >= 'A') && (ch <= 'Z')))
//    {
//        cout << "\n\nInputted character is alphabet";
//    }
//    else
//    {
//        if ((ch >= '0') && (ch <= '9')) 
//        {
//            cout << "\n\nInputted character is digit";
//        }
//        else
//        {
//            cout << "\n\nInputted character is some special character";
//        }
//    }
//    return 0;
//}


//To display general message using function

//#include<iostream>
//using namespace std;
//int main() 
//{
//    void display_message();//prototype declaration
//    display_message();
//}
//    //function definition goes here
//void display_message()
//{
//    cout << "Welcome to world of programming\n";
//    cout << "Programming is nothing but logic implementation ";
//}


//To display welcome message using function

//#include<iostream>
//using namespace std;
//int main() {
//    void message();
//    message();
//
//   
//}
//void message() {
//    char name[20];
//    cout << "\nEnter your name: ";
//    cin.getline(name, 20);
//    cout << name << " , Has a bright future ";
//}


//Sum of three numbers using function

//#include<iostream>
//using namespace std;
//int main() {
//    float a, b, c, sum;
//    float add(float a, float b, float c);
//    cout << "\nEnter three numbers for addition:\n ";
//    cin >> a >> b >> c;
//    sum = add(a, b, c);//function call by value
//    cout << "\n\nSum of three numbers is: " << sum;
//
//}
////function definition add()
//float add(float x, float y, float z) {
//    return(x + y + z);
//}


//Geeks for Geeks

// C++ program to demonstrate
// bool data type
//#include <iostream>
//using namespace std;
//
//// Driver code
//int main()
//{
//    int x1 = 10, x2 = 20, m = 2;
//    bool b1, b2;
//
//    // false
//    b1 = x1 == x2;
//
//    // true
//    b2 = x1 < x2;
//
//    cout << "Bool1 is = " << b1 << "\n";
//    cout << "Bool2 is = " << b2 << "\n";
//    bool b3 = true;
//
//    if (b3)
//        cout << "Yes" << "\n";
//    else
//        cout << "No" << "\n";
//
//    int x3 = false + 5 * m - b3;
//    cout << x3;
//
//    return 0;
//}



//To emulate strcmp using functions

//#include <iostream>
//#include <cstring>
//#include<string>
//using namespace std;
//
//int main() {
//    // declare strings  
//    string str1; // use std::string instead of const char*
//    getline(cin, str1);
//    string str2;
//    getline(cin, str2);
//   
//    cout << "String 1: " << str1 << endl;
//    cout << "String 2: " << str2 << endl;
//    // use strcmp() function to validate the strings are equal  
//    if (strcmp(str1.c_str(), str2.c_str()) == 0) { // use c_str() to get a const char* from a std::string
//        cout << "\nBoth strings are equal." << endl;
//    }
//    else {
//        cout << "The strings are not equal." << endl;
//    }
//    
//    return 0;
//}




//Base conversion using functions


//#include <iostream>
//#include <math.h>
//#include <string.h>
//
//using namespace std;
//
//long long int convertToDec(char n1[], int b1) {
//
//    int j = strlen(n1) - 1, k = 0;
//
//    long long int n = 0;
//
//    while (j >= 0) {
//        int i = (int)n1[j--];
//        if (i >= 48 && i <= 57) {
//            i -= 48;      //0=48
//        }
//        else if (i >= 65 && i <= 90) {
//            i -= 55;      //10=A
//        }
//        else if (i >= 97 && i <= 122) {
//            i -= 61;      //36=a
//        }
//        else if (i == 43 || i == 44) {
//            i += 19;       //62=+
//        }
//        n = n + (i * pow(b1, k++));
//    }
//    return n;
//}
//
//void func(long long int n2, int b2) {
//    if (n2 > 0) {
//        func(n2 / b2, b2);
//        int i = n2 % b2;
//        if (i >= 0 && i <= 9) {
//            i += 48;      //0=48
//        }
//        else if (i >= 10 && i <= 35) {
//            i += 55;      //10=A
//        }
//        else if (i >= 36 && i <= 61) {
//            i += 61;      //36=a
//        }
//        else if (i == '+' || i == '/') {
//            i -= 19;       //62=+
//        }
//        cout << (char)i;
//    }
//}
//void convertToBase(char n1[], int b1, int b2) {
//
//    long long int n2 = convertToDec(n1, b1);
//
//    if (n2 == 0)
//        cout << 0;
//
//    func(n2, b2);
//}
//
//int main(int i = 1) {
//
//    if (!i) {
//        return 0;
//    }
//
//    char n1[100];
//    int b1, b2;
//
//    cout << "Input string: ";
//    cin >> n1;
//    cout << "Base: ";
//    cin >> b1;
//    cout << "Desired base: ";
//    cin >> b2;
//
//    cout << "Output: ";
//    convertToBase(n1, b1, b2);
//
//    cout << "\n\nEnter 0 to exit, 1 to continue ";
//    cin >> i;
//    cout << endl;
//
//    main(i);
//}


//swapping of two numbers using function call through pass by reference

//#include<iostream>
//using namespace std;
//int main() {
//    int num1, num2;
//    void swap(int&, int&);//function prototype
//    cout << "Enter two numbers: ";
//    cin >> num1 >> num2;
//    cout << "\nBefore swapping:\nNum1: " << num1;
//    cout << endl << "Num2: " << num2;
//    swap(num1, num2);
//    cout << "\n\nAfter swapping: \nNum:1 " << num1;
//    cout << endl << "Num2: " << num2;
//}
////function definition swap()
//
//void swap(int& a, int& b) {
//    int temp = a;
//    a = b;
//    b = temp;
//}


//To demonstrate default arguments function

//#include<iostream>
////#include<iomanip>
////#include<conio.h>
//using namespace std;
//
//// function definition print()
//void print(int i = 20, char ch = '+')
//{
//    cout << endl;
//    for (int j = 0; j <= 21 - i; j++) {
//        cout << ' ';
//    }
//    for (int j = 0; j < 2 * i + 1; j++) {
//        cout << ch;
//    }
//}
//
//int main()
//{
//    for (int i = 0; i < 20; i++) {
//        if (i % 2) // print alternately + and *
//        {
//            print(i, '*');
//        }
//        else
//        {
//            print(i); // character printed is default (+)
//        }
//        
//    } // add closing curly brace here
//   print();
//
//    return 0;
//}


//To add the specific number of distance values(feet&inches)
//Using Inline function

//#include <iostream>
//using namespace std;
//
//struct Distance
//{
//    float feet;
//    float inches;
//};
//
//// Function to add two distances
//inline void add(Distance& distance1, Distance distance2)
//{
//    distance1.feet += distance2.feet;
//    distance1.inches += distance2.inches;
//    while (distance1.inches >= 12.0) {
//        if (distance1.inches >= 12)
//        {
//            distance1.feet++;
//            distance1.inches -= 12.0;
//        }
//    }
//}
//
//int main()
//{
//    int total;
//
//    // Get the total number of distances to be added
//    cout << "Enter the total number of distances to be added: ";
//    cin >> total;
//
//    // Get the distances from the user
//    Distance distances[10], result;
//    for (int i = 0; i < total; i++)
//    {
//        cout << "\nEnter the distance " << i + 1;
//        cout << " \nFeet: ";
//        cin >> distances[i].feet;
//        cout << "Inches: ";
//        cin >> distances[i].inches;
//
//        // Validate user input
//        if (distances[i].feet < 0 || distances[i].inches < 0)
//        {
//            cout << "Invalid input. Distance must be non-negative." << endl;
//            main();
//        }
//    }
//
//    // Add the distances
//    result.feet = result.inches = 0.0;
//    for (int i = 0; i < total; i++)
//    {
//        add(result, distances[i]);
//    }
//
//    // Print the result
//    cout << "\n\nThe result is: \n";
//    cout << "Feet: " << result.feet << endl;
//    cout << "Inches: " << result.inches << endl;
//
//    return 0;
//}


//Sum of sine series

//#include<iostream>
//#include<math.h>
//using namespace std;
//
//int main() {
//    double x, term, xradians;
//    int n = 16, sign;
//    unsigned long factorial(int); //funtion prototype
//    cout << "\nEnter the value of x(in degrees): ";
//    cin >> x;
//    xradians = x * 3.14159 / 180; //convert x into radians
//    sign = -1;
//    double sum = xradians;
//    for (int i = 3; i < n; i += 2)
//    {
//        term = pow(xradians, i) / factorial(i);
//        term *= sign;
//        sum += term;
//        sign *= -1; //keep rotating the sign
//    }//for loop ends here
//    cout << "\n\nSin(" << x << ")= " << sum;
//
//}
////functino factorial() definition
//
//unsigned long factorial(int n)
//{
//    unsigned long prod = 1;
//    int i;
//    for (int i = 1; i <= n; i++)
//    {
//        prod *= i;
//    }
//    return(prod);
//}

//Sum of series

//#include<iostream>
//#include<cmath>
//using namespace std;
//
//unsigned long factorial(int n) {
//    unsigned long prod = 1;;
//    int i;
//    for (int i = 1; i <= n; i++)
//    {
//        prod *= i;
//    }
//    return prod;
//}
//int main()
//{
//    double term;
//    int n;
//    cout << "\nEnter the maximum value of denominator: ";
//    cin >> n;
//    double sum = 1;
//    for (int i = 1; i <= n; i++)
//    {
//        term = 1.0 / factorial(i);
//        sum += term;
//    }//for loop ends here
//    cout << "\n\nSum of the series is: " << sum;
//    
//}


//To read an employee record using structure and print it,

//#include<iostream>
//using namespace std;
//struct employee
//{
//    char name[20];
//    int empl_no;
//    char disgnation[20];
//    char deptt[20];
//}emp;
//void main() {
//    char ch;
//    cout << "Enter the employee record:\n";
//    cout << "\nName: ";
//    cin.getline(emp.name, 20);
//    cout << "\nEmployee number: ";
//    cin >> emp.empl_no;
//    cin.get(ch);//empty the buffer
//    cout << "\nDesignation: ";
//    cin.get(emp.disgnation, 20);
//    cin.get(ch);//empty the buffer
//    cout << "\nDepartment: ";
//    cin.get(emp.deptt, 20);
//    cout << "\nInputted record of the employee is:\n";
//    cout << "\n\nName: " << emp.name;
//    cout << "\n\nEmployee number: " << emp.empl_no;
//    cout << "\n\nDesignation: " << emp.disgnation;
//    cout<<"\n\nDepartment: "<<emp.deptt;
//
//
//
//}


//Program to accept and print student's marks using structure

//#include<iostream>
//using namespace std;
//struct student
//{
//    char name[20];
//    int roll_no;
//    int marks[5];
//}stud;
//
//void main() {
//    char ch, grade;
//    //student stud;
//    float avg, total = 0.0;
//    cout << "Enter the student's record:\n";
//    cout << "\nName: ";
//    cin.getline(stud.name, 20);
//    cout << "\nRoll No.: ";
//    cin >> stud.roll_no;
//    cout << "\nEnter students marks: ";
//    for (int i = 0; i <= 4; i++)
//    {
//        cout << "\nSubject- " << i + 1 << " : ";
//        cin >> stud.marks[i];
//        total += stud.marks[i];
//    }
//    avg = total / 5.0;
//    //calculate grade
//    if (avg >= 80)
//    {
//        grade = 'A';
//    }
//    else
//    {
//        if (avg >= 60 && avg < 80)
//        {
//            grade = 'B';
//        }
//        else
//        {
//            if (avg >= 40 && avg < 60)
//            {
//                grade = 'C';
//            }
//            else
//            {
//                grade = 'D';
//            }
//        }
//    }
//    cout << "\nStudent's performance evaluation is:\n";
//    cout << "\n\nName: " << stud.name;
//    cout << "\n\nRoll No.: " << stud.roll_no;
//    cout << "\n\nTotal marks: " << total;
//    cout << "\n\nAverage: " << avg;
//    cout << "\n\nGrade: " << grade;
//}
//

//To read employees record using array of structure and display them

//#include<iostream>
//using namespace std;
//
//struct employee {
//    char name[20];
//    int empl_no;
//    char designation[20];
//    char deptt[20];
//};
//
//int main() {
//    char ch;
//    int total;
//    cout << "\nEnter the total number of employees <=10: ";
//    cin >> total;
//    cin.get(ch); // empty the buffer
//    employee emp[10];
//    for (int i = 0; i < total; i++)
//    {
//        cout << "Enter the record for employee- " << i + 1;
//        cout << "\nName: ";
//        cin.getline(emp[i].name, 20);
//        cout << "\nEmployee number: ";
//        cin >> emp[i].empl_no;
//        cin.get(ch); // empty the buffer
//        cout << "\nDesignation: ";
//        cin.getline(emp[i].designation, 20);
//        cout << "\nDepartment: ";
//        cin.getline(emp[i].deptt, 20);
//    }
//    for (int i = 0; i < total; i++)
//    {
//        cout << "\nRecord of employee no.- " << i + 1 << " is:\n\n";
//        cout << "\nName: " << emp[i].name;
//        cout << "\nEmployee number: " << emp[i].empl_no;
//        cout << "\nDesignation: " << emp[i].designation;
//        cout << "\nDepartment: " << emp[i].deptt;
//        cout << "\n\nPress any key to continue....";
//    }
//    return 0;
//}


//To searc for a particular employee and display its record
//using structure

//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//struct employee {
//    char name[20];
//    int empl_no;
//    char designation[20];
//    char deptt[20];
//} emp[10];
//
//void reenter() {
//    char name[20];
//    cout << "\nEnter the employee name whose record you wish to get displayed: ";
//    cin.getline(name, 20);
//    for (int i = 0; i < 10; i++) {
//        if (strcmp(emp[i].name, name) == 0) {
//            cout << "\nRecord of desired employee is: \n\n";
//            cout << "\nName: " << emp[i].name;
//            cout << "\n\nEmployee number: " << emp[i].empl_no;
//            cout << "\n\nDesignation: " << emp[i].designation;
//            cout << "\n\nDepartment: " << emp[i].deptt;
//            return ;
//        }
//    }
//    cout << "\n\nNo match found for the inputted name";
//    reenter();
//}
//
//int main() {
//    char ch;
//    int total;
//    cout << "\nEnter the total number of employees (maximum 10): ";
//    cin >> total;
//    cin.get(ch);
//    for (int i = 0; i < total; i++) {
//        cout << "Enter the record for employee " << i + 1 << ": ";
//        cout << "\nName: ";
//        cin.getline(emp[i].name, 20);
//        cout << "\nEmployee number: ";
//        cin >> emp[i].empl_no;
//        cin.get(ch);
//        cout << "\nDesignation: ";
//        cin.getline(emp[i].designation, 20);
//        cout << "\nDepartment: ";
//        cin.getline(emp[i].deptt, 20);
//    }
//    reenter();
//    return 0;
//}
//


//To prepare salary chart of employees using array of structures

//#include<iostream>
//#include<iomanip>
//using namespace std;
//
//struct employee
//{
//    char name[20];
//    int empl_no;
//    int attendance;
//    float daily_wage;
//    float salary;
//} emp[10];
//
//void display_data(employee* emp, int total)
//{
//    cout << setw(5) << "Serial no." << setw(18) << "Name" << setw(20) << "Emp. Number" << setw(25) << "Total Salary" << endl;
//    for (int i = 0; i < total; i++) {
//        cout << endl << setw(5) << i + 1 << setw(24) << emp[i].name << setw(18) << emp[i].empl_no << setw(25) << emp[i].salary;
//    }
//}
//
//int main()
//{
//    int total;
//    char ch;
//    cout << "\nEnter the total number of employees <=10: ";
//    cin >> total;
//    cin.get(ch); // empty the buffer
//    for (int i = 0; i < total; i++)
//    {
//        cout << "Enter the record for employee- " << i + 1;
//        cout << "\nName: ";
//        cin.getline(emp[i].name, 20);
//        cout << "\nEmployee number: ";
//        cin >> emp[i].empl_no;
//        cout << "\nAttendance: ";
//        cin >> emp[i].attendance;
//        cout << "\nDaily wage: ";
//        cin >> emp[i].daily_wage;
//        emp[i].salary = emp[i].attendance * emp[i].daily_wage;
//        cin.get(ch); // empty the buffer
//    }
//    display_data(emp, total);
//    return 0;
//}


 //To calculate the area of circle, rectangle , triangle

//#include<iostream>
//#include<cmath>
//using namespace std;
//
//struct circle {
//    float radius;
//    float Area;
//}cir;
//struct rectangle {
//    float length;
//    float breadth;
//    float Area;
//}rec;
//
//int main() {
//    int choice;
//    char ch;
//    cout << "Enter 1 to find the area of the circle: ";
//    cout << "Enter 2 to find the area of the rectangle: ";
//    cin >> choice;
//    cin.get(ch);
//    while ((choice < 1) || (choice > 2));
//    {
//        switch (choice)
//        {
//        case 1: cout << "Enter the radius: ";
//            cin >> cir.radius;
//            cir.Area = 3.14 * pow(cir.radius, 2);
//            cout << "\nArea of the circle is: " << cir.Area << " sq.units\n";
//            break;
//        case 2:cout << "Enter the breadth: ";
//            cin >> rec.breadth;
//            cout << "Enter the length: ";
//            cin >> rec.length;
//            rec.Area = rec.length * rec.breadth;
//            cout << "\nArea of the rectangel is: " << rec.Area << " sq.units\n";
//            break;
//        }
//    }
//
//}


//To check for a valid date using structure and function

//#include <iostream>
//
//using namespace std;
//
//struct Date {
//    int day;
//    int month;
//    int year;
//} date1;
//
//enum boolean { falseVal, trueVal };
//
//boolean valid_date(Date d) {
//    int days[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };//days in months
//    if ((d.year % 4 == 0 && d.year % 100 != 0) || (d.year % 400 == 0)) {
//        days[1] = 29;//if leap year then store 29 in corresponding position
//    }
//    if (d.month <= 12 && d.day <= days[d.month - 1] && d.year > 0) 
//    {
//        return trueVal;
//    }
//    else
//    {
//        return falseVal;
//    }
//}
//
//int main() {
//    cout << "\n\nEnter the date to be checked:\n";
//    cout << "Day: ";
//    cin >> date1.day;
//    cout << "Month: ";
//    cin >> date1.month;
//    cout << "Year: ";
//    cin >> date1.year;
//    if (valid_date(date1)) {
//        cout << "\n\nInputted date is valid ";
//    }
//    else {
//        cout << "\n\nInputted date is not valid";
//    }
//    main();
//}


//To add days to a valid date using structure and function


//#include<iostream>
//
//using namespace std;
//
//struct Date {
//    int day;
//    int month;
//    int year;
//};
//
//Date add_days(Date d, int days)
//{
//    bool flag;
//    int month_days[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };//days in months
//    if (((d.year % 4 == 0) && (d.year % 100 != 0)) || (d.year % 400 == 0))
//    {
//        month_days[1] = 29;//if leap year then store 29 in corresponding position
//    }
//    int temp_days = d.day;
//    temp_days += days;
//
//    do
//    {
//        flag = true;
//        if (temp_days > month_days[d.month - 1])
//        {
//            temp_days -= month_days[d.month - 1];
//            d.month++;
//            flag = false;
//        }
//        if (d.month == 13)
//        {
//            d.month = 1;
//            d.year++;
//        }
//    } while (flag);
//    d.day = temp_days;
//    return d;
//}
//
//int main()
//{
//    int days;
//    Date date1, new_date;
//    cout << "\nEnter the date :\n";
//    cout << "Day: ";
//    cin >> date1.day;
//    cout << "Month: ";
//    cin >> date1.month;
//    cout << "Year: ";
//    cin >> date1.year;
//    cout << "\n\nEnter the days to be added: ";
//    cin >> days;
//    new_date = add_days(date1, days);
//    cout << "\n\nNew date after addition of the days is:\n";
//    cout << "Day: " << new_date.day;
//    cout << "\nMonth: " << new_date.month;
//    cout << "\nYear: " << new_date.year;
//    return 0;
//}


//To create record of countries and capitals using structures
//#include <iostream>
//#include <string>
//#include <iomanip>
//#include <cstring>
//
//using namespace std;
//
//struct count_capital
//{
//    char country[20];
//    char capital[20];
//};
//
//int main() {
//    int total, choice, i;
//    char country_name[20], capital_name[20];
//    cout << "Enter the total number of countries (<=20): ";
//    cin >> total;
//    count_capital record[20]; // initialize record array of size 20
//    cout << "\nEnter " << total << " countries and corresponding capitals:\n";
//    cin.ignore(); // clear the buffer
//    for (i = 0; i < total; i++)
//    {
//        cout << "\nCountry: ";
//        cin.getline(record[i].country, 20);
//        cout << "Capital: ";
//        cin.getline(record[i].capital, 20);
//    }
//    cout << "\nEnter the option:\n";
//    cout << "\n1. Display the list\n";
//    cout << "\n2. Display the inputted country's capital\n";
//    cout << "\n3. Display the country corresponding to inputted capital\n";
//    cout << "\nOption: ";
//    cin >> choice;
//    switch (choice)
//    {
//    case 1:
//        cout << setw(10) << "Serial No." << setw(20) << "Country" << setw(25) << "Capital" << endl;
//        for (i = 0; i < total; i++)
//        {
//            cout << setw(10) << i + 1 << setw(20) << record[i].country << setw(25) << record[i].capital << endl;
//        }
//        break;
//    case 2:
//        cin.ignore(); // clear the buffer
//        cout << "\nEnter the country: ";
//        cin.getline(country_name, 20);
//        for (i = 0; i < total; i++)
//        {
//            if (strcmp(record[i].country, country_name) == 0)
//            {
//                cout << "\nCountry: " << record[i].country;
//                cout << "\nCapital: " << record[i].capital << endl;
//                break;
//            }
//        }
//        if (i == total)
//        {
//            cout << "\nNo match found for " << country_name << " in the records\n";
//        }
//        break;
//    case 3:
//        cin.ignore(); // clear the buffer
//        cout << "\nEnter the capital: ";
//        cin.getline(capital_name, 20);
//        for (i = 0; i < total; i++)
//        {
//            if (strcmp(record[i].capital, capital_name) == 0)
//            {
//                cout << "\nCapital: " << record[i].capital;
//                cout << "\nCountry: " << record[i].country << endl;
//                break;
//            }
//        }
//        if (i == total)
//        {
//            cout << "\nNo match found for " << capital_name << " in the records\n";
//        }
//        break;
//    default:
//        cout << "\nWrong choice entered\n";
//        break;
//    }
//    return 0;
//}

//adding two times
//#include<iostream>
//using namespace std;
//
//struct Time {
//    int hours;
//    int minutes;
//    int seconds;
//};
//
//// function declaration
//void add_time(Time t1, Time t2);
//
//int main()
//{
//    Time time1[2];
//    for (int i = 0; i <= 1; i++)
//    {
//        cout << "\nEnter the Time- " << i + 1 << ":\n";
//        cout << "\nHours: ";
//        cin >> time1[i].hours;
//        cout << "\nMinutes: ";
//        cin >> time1[i].minutes;
//        cout << "Seconds: ";
//        cin >> time1[i].seconds;
//    }
//    add_time(time1[0], time1[1]);
//
//    return 0;
//}
//
//// function definition
//void add_time(Time t1, Time t2)
//{
//    int sec, min, hr, x;
//    sec = t1.seconds + t2.seconds;
//    x = sec / 60;
//    sec %= 60;
//    min = t1.minutes + t2.minutes + x;
//    hr = t1.hours + t2.hours + min / 60;
//    min %= 60;
//    cout << "\nResultant time in \"hh mm ss\" format is:\n";
//    cout << "\nHours: " << hr;
//    cout << "\nMinutes: " << min;
//    cout << "\nSeconds: " << sec;
//}
//

//#include<iostream>
//using namespace std;
//
//struct dime {
//    int hours;
//    int minutes;
//    int seconds;
//}time1[2];
//
////function definition
////void add_time(Time t1, Time t2);
//void add_time(dime t1, dime t2)
//{
//    int sec, min, hr, x;
//    sec = t1.seconds + t2.seconds;
//    x = sec / 60;
//    sec %= 60;
//    min = t1.minutes + t2.minutes + x;
//    hr = t1.hours + t2.hours + min / 60;
//    min %= 60;
//    cout << "\nResultant time in \"hh mm ss\" format is:\n";
//    cout << "\nHours: " << hr;
//    cout << "\nMinutes: " << min;
//    cout << "\nSeconds: " << sec;
//}
//
//
//int main()
//{
//    for (int i = 0; i <= 1; i++)
//    {
//        cout << "\nEnter the Time- " << i + 1 << ":\n";
//        cout << "\nHours: ";
//        cin >> time1[i].hours;
//        cout << "\nMinutes: ";
//        cin >> time1[i].minutes;
//        cout << "Seconds: ";
//        cin >> time1[i].seconds;
//    }
//    add_time(time1[0], time1[1]);
//
//}


//Accessing structures using pointers

//#include<iostream>
//using namespace std;
//
//struct student {
//    char name[20];
//    int roll_no;
//    char Class[20];
//    int attendence;
//};
//
//int main()
//{
//    char ch;
//    student* stud = new student;//allocate memory dynamically
//    cout << "Enter the student's record:\n";
//    cout << "\nName: ";
//    cin.getline(stud->name, 20);
//    cout << "\nRoll No.: ";
//    cin >> stud->roll_no;
//    cin.ignore();
//    //cin.get(ch);//empty the buffer
//    cout << "\nClass: ";
//    cin.get(stud->Class, 20);
//    cout << "\nAttendence: ";
//    cin >> stud->attendence;
//    cin.ignore();
//    cout << "\nInputted record of the Student is:\n";
//    cout << "\n\nName: " << stud->name;
//    cout << "\n\nRoll No.: " << stud->roll_no;
//    cout << "\n\nClass: " << stud->Class;
//    cout << "\n\nAttendence: " << stud->attendence;
//    delete stud;//delete the allocated memory
//}

//#include<iostream>
//using namespace std;
//
//struct Time {
//    int hours;
//    int minutes;
//    int seconds;
//}time1;
//
//void pass_str(Time* temp, long sec)
//{
//    temp->seconds = sec % 60;
//    long x = sec / 60;
//    temp->minutes = x % 60;
//    temp->hours = x / 60;
//}
//
//int main() 
//{
//    long sec;
//    cout << "Enter the total number of seconds: ";
//    cin >> sec;
//    pass_str(&time1, sec);
//    cout << "\n\nThe time in hh mm ss format is:";
//    cout << "\nHours: " << time1.hours;
//    cout << "\nMinutes: " << time1.minutes;
//    cout << "\nSeconds: " << time1.seconds;
//}


//To read employees record using array of pointers to sturcture and display them

//#include<iostream>
//using namespace std;
//struct employee
//{
//    char name[20];
//    int emp_no;
//    char designation[20];
//    char deptt[20];
//};
//
//int main() {
//    employee* emp[10];
//    char ch;
//    int total;
//    cout << "\nEnter the total number of employees <=10: ";
//    cin >> total;
//    for (int i = 0; i < total; i++)
//    {
//        emp[i] = new employee;//allocating dynamic memory
//        cin.ignore();
//        cout << "Enter the record for employee- " << i + 1;
//        cout << "\nName: ";
//        cin.getline(emp[i]->name, 20);
//        cout << "\nEmployee number: ";
//        cin >> emp[i]->emp_no;
//        cin.ignore();
//        cout << "\nDesignation: ";
//        cin.get(emp[i]->designation, 20);
//        cin.ignore();
//        cout << "\nDepartment: ";
//        cin.get(emp[i]->deptt, 20);
//    }
//    for (int i = 0; i < total; i++)
//    {
//        cout << "\nRecord fo employee no.- " << i + 1 << " is:\n\n";
//        cout << "\nName: " << emp[i]->name;
//        cout << "\n\nEmployee number: " << emp[i]->emp_no;
//        cout << "\n\nDesignation: " << emp[i]->designation;
//        cout << "\n\nDepartment: " << emp[i]->deptt;
//        cout << "\n\nPress any key to continuie....";
//    }
//    delete emp[10];
//
//}


//To operate on weekdays using enumerated data type

//#include<iostream>
//using namespace std;
//enum week_days{SUN,MON,TUE,WED, THU,FRI,SAT} day1,day2;
//int days;
//int main()
//{
//    day1 = MON;
//    day2 = FRI;
//    int diff = day2 - day1;
//    cout << "\nNumber of days between Monday and Friday is: " << diff << endl;
//    if (day1 > day2)
//    {
//        cout << "\nDay1 comes before Day2";
//    }
//    else
//    {
//        cout << "\nDay 2 comes before Day 1\n";
//    }
//    for (days = SUN; days <= SAT; days++) 
//    {
//
//        switch (days)
//        {
//        case 1: cout << "\nDay " << days << " = sunday ";
//            break;
//        case 2: cout << "\nDay " << days << " = monday ";
//            break;
//        case 3:cout << "\nDay " << days << " = tuesday ";
//            break;
//        case 4:cout << "\nDay " << days << " = wednesday ";
//            break;
//        case 5:cout << "\nDay " << days << " = thursday ";
//            break;
//        case 6:cout << "\nDay " << days << " = friday ";
//            break;
//        case 7:cout << "\nDay " << days << " = saturday ";
//            break;
//       
//        }//switch statement ends here
//        
//    }
//}

//#include<iostream>
//using namespace std;
//enum month_names{JAN,FEB,MAR,APR,MAY,JUN,JUL,AUG,SEPT,OCT,NOV,DEC};
//int months;
//void main() {
//    float income, sum = 0.0, avg;
//    cout << "Enter the income for each month\n\n";
//    for (months = JAN; months <= DEC; months++)
//    {
//        cout << "Month " << months + 1 << ": ";
//        cin >> income;
//        sum += income;
//    }//for loop ends here
//    avg = sum / 12.0;
//    cout << "\nThe annual average income is: " << avg;
//}

//To create boolean data type

//#include<iostream>
//using namespace std;
//enum boolean { falseVal, TrueVal }; //false=o, true=1
//
//void main() {
//    boolean flag;//can be initialized with false or true values
//    int x, y;
//    cout << "Enter the two numbers:";
//    cin >> x >> y;
//    if (x == y)
//    {
//        cout << "Numbers are equal";
//    }
//    else
//    {
//        if (x > y)
//        {
//            flag = falseVal;
//        }
//        else
//        {
//            flag = TrueVal;
//        }
//    }//outer else statement ends here
//    if (flag)
//    {
//        cout << "\nsecond number is greater";
//    }
//    else
//    {
//        cout << "\nfirst number is greater";
//    }
//}

//#include<iostream>
//#include<string>
//using namespace std;
//void ReverseString(string& S, int size)
//{
//    static int start = 0;
//    if (start == size - 1 || start == size)
//    {
//        return;
//    }
//    else
//    {
//        swap(S[start++], S[size - 1]);
//        ReverseString(S, size - 1);
//    }
//}
//int main()
//{
//    cout << "enter a string to reverse" << endl;
//    string s;
//    getline(cin, s);
//    cout << "Before Reversing" << endl;
//    cout << s << endl;
//    ReverseString(s, s.size());
//    cout << "After Reversing" << endl;
//    cout << s << endl;
//    return 0;
//}
//
//void ReverseString(string& S, int size)
//{
//    static int start = 0;
//    if (start == size - 1 || start == size)
//    {
//        return;
//    }
//    else
//    {
//        swap(S[start++], S[size - 1]);
//        ReverseString(S, size - 1); 
//    }
//}

//public static booolean isPalindrome(String input) {
//    if(input.length()==0 || input.length()==1){
//        return true;
//    }
//    if (input.charAt(0) == input.charAt(input.length() - 1)) {
//        return isPalindrome(input.substring(1, input.length() - 1));
//    }
//    return false;
//}

//public class DecimalToBinary {
//    public static void main(String[] args) {
//        String binary = findBinary(233, "");
//    }
//    
//    public static String findBinary(int decimal, String result) {
//        if (decimal == 0) {
//            return result;
//        }
//        result = decimal % 2 + result;
//        return findBinary(decimal / 2, result);
//    }
//};

//public static int recursiveSummation(int inputNumber)
//{
//    if (inputNumber <= 1)
//        return inputNumber;
//    return inputNumber + recursiveSummation(inputNumber - 1);
//}



//#include<iostream>
//using namespace std;
//
//class Batsman {
//protected:
//    int runs;
//
//public: 
//    void setRuns(int r) {
//        runs = r;
//    }
//
//};
//
//class Dhoni : public Batsman {
//public:
//    void printRuns() {
//        cout << "Dhoni scored: " << runs << endl;
//    }
//};
//class Kohli : public Batsman {
//public:
//    void printRuns() {
//        cout << "Kholi scored: " << runs << endl;
//    }
//};
//
//int main() {
//    Dhoni dhoni;
//    Kohli kohli;
//
//    Batsman* batsman1 = &dhoni;
//    Batsman* batsman2 = &kohli;
//
//    batsman1->setRuns(10);
//    batsman2->setRuns(12);
//    
//    dhoni.printRuns();
//    kohli.printRuns();
//    return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Batsman {
//protected:
//    int runs;
//
//public:
//    void setRuns(int r) {
//        runs = r;
//    }
//
//};
//
//class Dhoni : public Batsman {
//public:
//    void printRuns(int runs) {
//        cout << "Dhoni scored: " << runs << endl;
//    }
//};
//class Kohli : public Batsman {
//public:
//    void printRuns(int runs) {
//        cout << "Kholi scored: " << runs << endl;
//    }
//};
//
//int main() {
//    Dhoni dhoni;
//    Kohli kohli;
//
//    //Batsman* batsman1 = &dhoni;
//    //Batsman* batsman2 = &kohli;
//
//    //batsman1->setRuns(10);
//    //batsman2->setRuns(12);
//
//    dhoni.printRuns(10);
//    kohli.printRuns(12);
//    return 0;
//}


//virtual functions

//#include<iostream>
//using namespace std;
//
//class Batsman {
//protected:
//    int runs;
//
//public: 
//    virtual void specialShot() {
//        cout << "Special Shot" << endl;
//    }
//
//};
//
//class Dhoni : public Batsman {
//public:
//    void specialShot() {
//        cout << "Helicopter Shot" << endl;
//    }
//};
//class Kohli : public Batsman {
//public:
//    void specialShot() {
//        cout << "Cover drive" << endl;
//    }
//};
//
//int main() {
//    Dhoni dhoni;
//    Kohli kohli;
//
//    Batsman* batsman1 = &dhoni;
//    Batsman* batsman2 = &kohli;
//
//    batsman1->specialShot();
//    batsman2->specialShot();
//    
//    
//    return 0;
//}


//pure virtual functions

//#include<iostream>
//using namespace std;
//
//class Batsman {
//protected:
//    int runs;
//
//public:
//    virtual void specialShot() = 0;
//
//};
//
//class Dhoni : public Batsman {
//public:
//    void specialShot() {
//        cout << "Helicopter Shot" << endl;
//    }
//};
//class Kohli : public Batsman {
//public:
//    void specialShot() {
//        cout << "Cover drive" << endl;
//    }
//};
//
//int main() {
//    Dhoni dhoni;
//    Kohli kohli;
//
//    Batsman* batsman1 = &dhoni;
//    Batsman* batsman2 = &kohli;
//
//    batsman1->specialShot();
//    batsman2->specialShot();
//
//
//    return 0;
//}

//template functions

//#include<iostream>
//using namespace std;
//
//template<class T>
//T add(T a, T b) {
//    return a + b;
//}
//
//int main() {
//    double a = 5.5, b = 7.2;
//    cout << add(a, b) << endl;
//    return 0;
//}

//#include<iostream>
//using namespace std;
//
//template<class T>
//T add(T a, T b)
//{
//    return a + b;
//}
//int main() {
//    double a = 5.5, b = 7;
//    cout << add(a, b) << endl;
//    return 0;
//}

//#include<iostream>
//using namespace std;
//
//template<class T>
//class Numbers {
//    T first;
//    T second;
//
//public:
//    Numbers(T a, T b) {
//        first = a;
//        second = b;
//    }
//
//    T larger() {
//        if (first > second) {
//            return first;
//        }
//        return second;
//    }
//};
//int main()
//{
//    Numbers<int>numbers(5.5, 4);
//    cout << numbers.larger() << endl;
//    return 0;
//     
//}

//#include<iostream>
//using namespace std;
//
//template<class T>
//class Value {
//public:
//    Value(T a) {
//        cout << a << " is a number" << endl;
//    }
//};
//template<>
//class Value<char> {
//public:
//    Value(char a) {
//        cout << a << " is a character" << endl;
//    }
//};
//
//int main() {
//    Value<int>v1(5);
//    Value<char>v2('v');
//}

#include<iostream>
using namespace std;
int main() {
    try {
        int fatherAge = 55;
        int sonAge = 60;
        if (sonAge > fatherAge) {
            throw - 1;
        }
    }
    catch (int x) {
        cout << "Son age is greater than father" << " " << x << endl;
    }
}