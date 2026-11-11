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

void AddArrayElement(int Number, int arr[], int &arrLength)
{
    arr[arrLength++] = Number;
}

bool isPrimeNumber(int Number)
{
    if(Number <= 1)
        return false;


    int halfNumber = Number / 2;

    for (int i = 2; i <= halfNumber; i++)
    {
        if(Number % i == 0)
        {
            return false;
        }
    }

    return true;
} 

void CopyPrimeNumbersInArray(const int arrSource[], int arrCopy[], int arrLength, int &arrCopyLength)
{
    for(int i = 0; i < arrLength; i++)
    {
        if(isPrimeNumber(arrSource[i]))
        {
            AddArrayElement(arrSource[i], arrCopy, arrCopyLength);
        }
    }

}

int main()
{
    srand((unsigned)time(NULL));
    int arrSource[100];
    int arrCopyPrime[100];
    int arrLength = ReadPositiveNumber("Please enter a positive number:");
    int arrCopyLength = 0;

    FillArrayWithRandomNumbers(arrSource, arrLength, 1, 100);

    cout<< "\nArray 1 elements:\n";
    PrintArray(arrSource, arrLength);

    CopyPrimeNumbersInArray(arrSource, arrCopyPrime, arrLength, arrCopyLength);

    cout<<"\nArray 2 Prime Numbers:\n";
    PrintArray(arrCopyPrime, arrCopyLength);

    return 0;
}