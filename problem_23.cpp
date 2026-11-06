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

void Printarray(int arr[], int arrlength)
{
    cout << "\nArray Elements: ";
    for(int i = 0; i < arrlength; i++)
    {
        cout << arr[i] << " ";
    }
    cout<< '\n';
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100];

    int arrlength = ReadPositiveNumber("How many index you want to fill ?");

    int from = ReadPositiveNumber("The beginning of the guess ?");

    int to = ReadPositiveNumber("The end of the guess ?");

    FillArrayWithRandomNumbers(arr, arrlength, from, to);

    Printarray(arr, arrlength);

    return 0;
}