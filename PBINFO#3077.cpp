#include <iostream>

using namespace std;

int main()
{
    int s=0, n;
    cin>>n;
    while(n>0)
    {
        s=s+n;
        n=n/10;
    }
    cout<<s;
    return 0;
}
//https://www.pbinfo.ro/probleme/3077/suma-prefixe