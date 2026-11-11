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

void PrintArray(const int arr[], int arrlength)
{
    for(int i = 0; i < arrlength; i++)
    {
        cout << arr[i] << " ";
    }
    cout<< '\n';
}
void FillArrayWithRandomNumbers(int arr[], int arrlength, int from, int to)
{
    for (int i = 0; i < arrlength; i++)
    {
        arr[i] = RandomNumber(from, to);
    }
}

void CopyArrayInReversedOrder(const int arrSource[], int arrCopy[], int arrLength)
{
    int tempLength = arrLength - 1;
    for(int i = 0; i < arrLength; i++)
    {
        arrCopy[i] = arrSource[tempLength--];
    }
}

int main()
{
    srand((unsigned)time(NULL));
    int arrSuorce[100];
    int arrCopy[100];
    int arrlength = ReadPositiveNumber("Enter a positive Number :");

    FillArrayWithRandomNumbers(arrSuorce, arrlength, 1, 100);

    cout<< "\nArray 1 elements:\n";
    PrintArray(arrSuorce, arrlength);

    CopyArrayInReversedOrder(arrSuorce, arrCopy, arrlength);

    cout<< "\nArray 2 elements after copying array 1 in reversed order:\n";
    PrintArray(arrCopy, arrlength);

    
    return 0;

}