#include <iostream>

using namespace std;

int main()
{
    int n, p = 1, c, x = 0;
    cin >> n;
    while (n > 0)
    {
        c = n % 10;
        if (n % 2 == 1)
        {
            p = p * c;
            x++;
        }
        n = n / 10;
    }
    if (x == 0)
    {
        p = -1;
    }
    cout << p;
}
//https://www.pbinfo.ro/probleme/65/produscifreimpare