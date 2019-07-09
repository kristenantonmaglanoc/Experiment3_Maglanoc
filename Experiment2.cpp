#include <iostream>
#include <conio.h>
using namespace std;

const int prov = 3;
const int week = 7;

int main()
{
   int temp[prov][week];
   cout << "Enter The Values of Temperature: "<< endl;


   for (int x = 0; x < prov; ++x)
   {
       for(int y = 0; y < week; ++y)
       {
            cout << "Province " << x + 1 << ", Day " << y + 1 << " : ";
            cin >> temp[x][y];
       }
   }

    cout << "\nDisplaying Values: " << endl;

    for (int x = 0; x < prov; ++x)
    {
        for(int y= 0; y< week; ++y)
        {
            cout << "Province " << x + 1 << ", Day " << y + 1 << " = " << temp[x][y] << endl;
        }
    }
	getch();
    return 0;
}