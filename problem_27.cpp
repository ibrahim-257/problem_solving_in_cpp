#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int ReadPositiveNumber(string message)
{
   int Number = 0;
   do
   {
    cout << message << endl;
    cin >> Number;
   } while (Number <= 0);

   return Number;
}

int RandomNumber(int from, int to)
{
    int ranNum = rand() % (to - from + 1) + from;
    return ranNum;
}

void FillArrayWithRandomNumbers(int arr[], int arrlength, int from, int to)
{
    for (int i = 0; i < arrlength; i++)
    {
        arr[i] = RandomNumber(from, to);
    }
}

void PrintArray(int arr[], int arrlength)
{
    cout << "\nArray Elements: ";
    for(int i = 0; i < arrlength; i++)
    {
        cout << arr[i] << " ";
    }
    cout<< '\n';
}

long long SumOfAllElementsInArray(int arr[], int arrlength)
{
    long long Sum = 0;
    for( int i = 0; i < arrlength; i++)
    {
        Sum += arr[i];
    }
    return Sum;
}

float AverageNumbersInArray(int arr[], int arrlength)
{
    return (float)SumOfAllElementsInArray(arr, arrlength) / arrlength;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100];
    int arrlength = ReadPositiveNumber("How many elements do you want to fill?");

    FillArrayWithRandomNumbers(arr, arrlength, 1 , 100);

    PrintArray(arr, arrlength);

    cout<< "Average of all numbers is : "<< AverageNumbersInArray(arr, arrlength) << endl;


    return 0;
}