#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long double a, b, c, d, ab, cd;
    cin >> a >> b >> c >> d;
    b/=1e12,d/=1e12;
    if (pow(a,b) >pow(c,d))
    {
        cout << "YES"<<endl;
    }
    else
    {
        cout << "NO"<<endl;
    }
    return 0;
} // namespace std;