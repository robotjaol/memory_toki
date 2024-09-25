#include <iostream>
using namespace std;

int main()
{
    bool lampu[101];

    for (int i = 1; i <= 100; i++) // set semua mati
    {
        lampu[i] = false;
    }

    for (int p = 1; p <= 10; p++) // p
    {
        for (int i = p; i <= 100; i += p) // i
        {
            lampu[i] = !lampu[i];
        }
    }

    int count = 0;
    for (int i = 1; i <= 100; i++) // calculate total lampu nyala
    {
        if (lampu[i])
        {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}
