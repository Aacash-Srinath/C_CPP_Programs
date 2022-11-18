#include <iostream>
using namespace std;

int Arithmetic(int a, int b);
int Factorial(int difference);

int main()
{
    system("cls");
    int num1, num2, diff, factoria;

    cout << ("\nEnter First Number :: ");
    cin >> num1;

    cout << ("Enter Second Number :: ");
    cin >> (num2);

    diff = num1 - num2;
    
    if (num1 > 0 && num2 > 0) 
    {
        Arithmetic(num1, num2);
        Factorial(diff);
    }
}

int Arithmetic(int a, int b)
{
    int *p, *q, sum, diff, mult;
    float division;

    p = &a;
    q = &b;

    sum = *p + *q;
    diff = *p - *q;
    mult = *p * *q;
    division = (float)*p/(*q);

    cout << ("\nSum of Given Numbers :: %d", sum);
    cout << ("\nDifference of Given Numbers :: %d", diff);
    cout << ("\nProduct of Given Numbers :: %d", mult);
    cout << ("\nDivision of Given Numbers :: %f", division);

}

int Factorial(int difference)
{
    int i, fact = 1;
    for (i = 2; i <= difference; i++)
    {
        fact *= i;
    }

    cout << ("\nFactorial of Difference of Given Numbers :: %d\n\n", fact);

}