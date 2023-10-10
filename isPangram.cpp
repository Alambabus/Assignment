#include<bits/stdc++.h>
using namespace std;
bool isPangram(string st)
{
    int n=st.size();
    char fre[26]={0};
    for(int i=0;i<n;i++)
    {
        if(st[i]>='A' && st[i]<='Z')
            fre[st[i]-'A']=1;
    }
    for(int i=0;i<26;i++)
    {
        if(fre[i]==0)return false;
    }
    return true;
}
int main()
{
    string st;
    cout<<"Enter the String:"<<endl;
    getline(cin,st);
    bool ans=isPangram(st);
    if(ans)cout<<"Yes,String is pangram";
    else cout<<"No, String is not pangram";
    return 0;
}
