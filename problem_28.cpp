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

void CopyArray(const int arrSourse[], int arrcopy[], int arrlength)
{
    for(int i = 0; i < arrlength; i++)
    {
        arrcopy[i] = arrSourse[i];
    }
}
int main()
{
    srand((unsigned)time(NULL));

    int arrSourse[100];
    int arrcopy[100];
    int arrlength = ReadPositiveNumber("How many elements do you want to fill?");

    FillArrayWithRandomNumbers(arrSourse , arrlength, 1, 100);

    cout<< "\nArray 1 elements:\n";
    PrintArray(arrSourse, arrlength);

    CopyArray(arrSourse, arrcopy, arrlength);

    cout<< "\nArray 2 elements after copy\n";
    PrintArray(arrcopy, arrlength);

    return 0;
}