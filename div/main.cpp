#include <iostream>

using namespace std;
long long  Sum(long long n)
{
    long long sum=0;
    while(n>0)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}

int main()
{

long long pref[200003];
pref[0]=0;
for(long long i=1;i<200003;i++)
{
    pref[i]=Sum(i);

    pref[i]+=pref[i-1];
}
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        cout<<pref[n]<<"\n";

    }

    return 0;
}
