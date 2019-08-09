#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j;
    cin>>n;
    vector<int> v;
    string s=to_string(n);
    int len=s.length();

    for(i=len-1;i>=0;i--)
    {
        int dig=s[i]-'0';
        int siz=v.size();
        for(j=siz-1;j>=0 && dig>0;j--)
        {
            v[j]=v[j]+pow(10,len-1-i);dig--;
        }

        if(dig>0)
        {
            int x=pow(10,len-1-i);
            v.insert(v.end(),dig,x);
        }
    }

    cout<<v.size()<<endl;
    for(i=0;i<v.size();i++)
        cout<<v[i]<<" ";

return 0;
}
