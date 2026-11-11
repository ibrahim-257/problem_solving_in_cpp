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
}

void AddArrayElement(int Number, int arr[], int &arrLength)
{
    arr[arrLength++] = Number;
}

void CopyArray(const int arrSource[], int arrCopy[], int arrLength, int &arrCopyLength)
{
    for(int i = 0; i < arrLength; i++)
    {
        AddArrayElement(arrSource[i], arrCopy, arrCopyLength);
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int arrSource[100];
    int arrCopy[100];
    int arrLength = ReadPositiveNumber("Please a Positive Number:");
    int arrCopyLength = 0;

    FillArrayWithRandomNumbers(arrSource, arrLength, 1, 100);

    cout<<"\nArray 1 elements:\n";
    PrintArray(arrSource, arrLength);

    CopyArray(arrSource, arrCopy, arrLength, arrCopyLength);

    cout<<"\n\nArray 2 elements arfter copy:\n";
    PrintArray(arrCopy, arrLength);
    cout<<'\n';

    return 0;
}