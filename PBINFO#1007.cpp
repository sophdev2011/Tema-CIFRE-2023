#include <iostream>

using namespace std;

int main ()
{
    int n, counter=0, c;
    cin >> n;
    c = n%10;
    if (n == 0)
        counter++;
    while (n>0)
    {
        if (n%10 == c)
            counter ++;
        n = n/10;
    }
    cout << counter;
    return 0;
}
//https://www.pbinfo.ro/probleme/107/aparitii