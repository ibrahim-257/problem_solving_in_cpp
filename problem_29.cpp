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
    for(int i = 0; i < arrlength; i++)
    {
        cout << arr[i] << " ";
    }
    cout<< '\n';
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

void CopyPrimeNumbersInArray(const int arrSourse[], int arrcopy[], int arrlength, int &arrCopyLength)
{
    arrCopyLength = 0;
    for(int i = 0; i < arrlength; i++)
    {
        if(isPrimeNumber(arrSourse[i]))
        {
            arrcopy[arrCopyLength] = arrSourse[i];
            arrCopyLength++;
        }
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int arrSource[100];
    int arrCopy[100];
    int arrlength = ReadPositiveNumber("Enter a positive Number :");
    int arrCopyLength = 0;

    FillArrayWithRandomNumbers(arrSource, arrlength, 1, 100);

    cout<< "\nArray 1 element:\n";
    PrintArray(arrSource, arrlength);

    CopyPrimeNumbersInArray(arrSource, arrCopy, arrlength, arrCopyLength);

    cout<<"\nPrime Numbers in Array2:\n";
    PrintArray(arrCopy, arrCopyLength);
    

    return 0;
}