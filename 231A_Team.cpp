#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,p,v,t,m=0;

    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> p >> v >> t;
        if(p+v+t > 1)
            m++;
    }
    cout << m <<endl;
    return 0;
}
