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

int GetMinNumberInArray(int arr[], int arrlength)
{
    int minNumber = arr[0];
    for(int i = 0; i < arrlength; i++)
    {
        if(arr[i] < minNumber)
        minNumber = arr[i];
    }
    return minNumber;
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100];

    int arrlength = ReadPositiveNumber("How many elements do you want to fill?");

    int from = ReadPositiveNumber("Start of random numbers (From):");

    int to = ReadPositiveNumber("End of random numbers (To):");

    FillArrayWithRandomNumbers(arr, arrlength, from, to);

    PrintArray(arr, arrlength);

    cout << "\nmin Number is : " << GetMinNumberInArray(arr, arrlength) << endl;
    return 0;
}