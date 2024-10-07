// #include <iostream>
// using namespace std;

// long long faktorial(int n)
// {
//     if (n == 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return faktorial(n - 1) * n;
//     }
// }

// int main()
// {
//     int n, m;
//     cin >> n >> m;

//     cout << faktorial(n) + faktorial(m) << endl;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     string s;
//     cin >> s;

//     int banyaknya_vokal = 0;
//     for (char c : s)
//     {
//         if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
//         {
//             banyaknya_vokal++;
//         }
//     }

//     cout << banyaknya_vokal << endl;
// }

#include <iostream>
using namespace std;

int main()
{
    long long N;
    cin >> N;

    int jumlah = 0;
    for (int i = 1; i <= N; i++)
    {
        long long x;
        cin >> x;
        jumlah += x;
        // cout << "saat i = " << i << ", jumlah sementara = " << jumlah << endl;
    }

    cout << jumlah << endl;
}