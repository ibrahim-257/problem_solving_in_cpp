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

void PrintArray(const int arr[], int arrLength)
{
    for(int i = 0; i < arrLength; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<'\n';
}


int CountNegativeNumbersInArray(const int arr[], int arrLength)
{
    int NegativeCounters = 0;
    for(int i = 0; i < arrLength; i++)
    {
        if(arr[i] < 0)
        {
            NegativeCounters++;
        }
    }
    return NegativeCounters;
}

int main()
{
    srand((unsigned)time(NULL));
    int arr[100];
    int arrLength = ReadPositiveNumber("PLease Enter a Positive Number:");

    FillArrayWithRandomNumbers(arr, arrLength, -100, 100);

    cout<< "\nArray Elemenets: ";
    PrintArray(arr, arrLength);

    cout<<"\nNegative Numbers count is : " << CountNegativeNumbersInArray(arr, arrLength) << endl;

    return 0;
}