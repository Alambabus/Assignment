#include<bits/stdc++.h>
using namespace std;

int convertRomanToNumber(string s)
{
     map<char,int>m;
        m.insert({'I',1});
        m.insert({'V',5});
        m.insert({'X',10});
        m.insert({'L',50});
        m.insert({'C',100});
        m.insert({'D',500});
        m.insert({'M',1000});
        int n=s.size();
        int res=0;
        char prevChar=s[n-1];
        res+=m[prevChar];
        for(int i=n-2;i>=0;i--)
        {
           if(m[prevChar]<=m[s[i]])
           {
               res+=m[s[i]];
           }
           else res-=m[s[i]];
           prevChar=s[i];
        }
        return res;
}
int main()
{
    string s;
    cout<<"Enter Roman Number:"<<endl;
    cin>>s;
    int ans=convertRomanToNumber(s);
    cout<<ans;
    return 0;
}
