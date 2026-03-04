#include <bits/stdc++.h>
using namespace std;
 
// Function to calculate the following series
double Series(int n)
{
    int i;
    double sums = 0.0, ser;
    for(i = 1; i <= n; ++i)
    {
        ser = 1 / pow(i, i);
        sums += ser;
    }
    return sums;
}
   
// Driver Code
int main()
{
    int n = 10;
    double res = Series(n);
     
    cout << res;
    return 0;
}
 
