#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    string x;
    cin>>x;
    string str;
    int n=x.size();
    map<string,int> count;
    for(int i=0;i<=n-1;i++)
    {
        str="";
        for(int j=i;j<i+2;j++)
            str=str+x[j];
        if(str=="my" || str=="is")
            count[str]++;
    }
    for(int i=0;i<=n-2;i++)
    {
        str="";
        for(int j=i;j<i+3;j++)
            str=str+x[j];
        if(str=="all" || str=="are")
            count[str]++;
    }
    for(int i=0;i<=n-5;i++)
    {
        str="";
        for(int j=i;j<i+5;j++)
            str=str+x[j];
        if(str=="india")
            count[str]++;
    }
    for(int i=0;i<=n-7;i++)
    {
        str="";
        for(int j=i;j<i+7;j++)
            str=str+x[j];
        if(str=="indians" || str=="sisters" || str=="country")
            count[str]++;
    }
    for(int i=0;i<=n-8;i++)
    {
        str="";
        for(int j=i;j<i+8;j++)
            str=str+x[j];
        if(str=="brothers")
            count[str]++;
    }
    map<string,int>::iterator it;
    for(it=count.begin();it!=count.end();++it)
        cout<<it->first<<" "<<it->second<<endl;
    return 0;
}
