#include <iostream>

using namespace std;

int main()
{
    int n, nr = 0, cmaxim, x, y;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> y;
        cmaxim = 0;
        while (y > 0)
        {
            x = y % 10;
            if (x > cmaxim)
                cmaxim = x;
            y = y / 10;
        }
        if (cmaxim % 2 == 1)
            nr++;
    }
    cout << nr;
}
//https://www.pbinfo.ro/probleme/3667/cifmaximp