#include <iostream>
using namespace std;


void PrintAllWordsFromAAAtoZZZ()
{

    for(char i = 'A'; i<= 'Z'; i++)
    {
        for(char j = 'A'; j<= 'Z'; j++)
        {
            for(char k = 'A'; k <= 'A'; k++)
            {
                cout<< i << j << k <<endl;
            }
        }
        cout << "\n____________________________\n";
    }

}

int main()
{

    PrintAllWordsFromAAAtoZZZ();
    return 0;
}