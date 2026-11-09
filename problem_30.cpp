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

void PrintArray(const int arr[], int arrlength)
{
    for(int i = 0; i < arrlength; i++)
    {
        cout << arr[i] << " ";
    }
    cout<< '\n';
}

void SumOfTwoArrays(const int arr1[], const int arr2[], int arrSum[], int arrLength)
{

    for(int i = 0; i < arrLength; i++)
    {
        arrSum[i] = arr1[i] + arr2[i];
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int arr1[100];
    int arr2[100];
    int arrSum[100];
    int arrLength = ReadPositiveNumber("Please Enter a Positive Number:");

    FillArrayWithRandomNumbers(arr1, arrLength, 1, 100);
    cout<< "\nArray 1 element:\n";
    PrintArray(arr1, arrLength);

    FillArrayWithRandomNumbers(arr2, arrLength, 1, 100);
    cout<< "\nArray 2 element:\n";
    PrintArray(arr2, arrLength);

    SumOfTwoArrays(arr1, arr2, arrSum, arrLength);

    cout<< "\n\nSum of Array1 and Array2 elements:\n";
    PrintArray(arrSum, arrLength);

    return 0;
}