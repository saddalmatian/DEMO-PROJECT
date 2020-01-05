#include <iostream>
#include <cstdlib>
using namespace std;
void Random(){ //Random trong khoan a den b
    int a,b,amt;
    cout << "from: " << endl;
    cin >> a;
    cout << "to: " << endl;
    cin >> b;
    cout << "amount: ";
    cin >> amt;
    int temp[amt];
    for (int i = 0; i < amt; i++)
    {
        temp[i] = rand()% (b-a + 1) + a;
            if (temp[i] == temp[i-1])
            {
                temp[i] = rand() % (b-a + 1) + a;
            }
    }
    for (int k = 0; k < amt; k++)
    {
        cout << temp[k] << endl;
    }
}