#include <iostream>
#include <cstdlib>
#include <stdlib.h>
using namespace std;
void Random() //Random
{
    int a,b;
    cout << "from: ";
    cin >> a;
    cout << "to: ";
    cin >> b;
    do
    { 
        cin >> b;
    } while (b < a);
    int rd = rand() % (b-a + 1) + a;
    cout << rd << endl;
}