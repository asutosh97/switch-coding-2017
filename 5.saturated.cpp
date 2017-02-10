#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int flag=0;
    int k;
    for(int i=0;i<n-2;i++)
    {
        for(int j=i+2;j<n;j++)
        {
            for(k=i+1;k<j;k++)
            {
                int diff1=arr[k]-arr[i];
                int diff2=arr[j]-arr[k];
                if(diff1==1 && diff2==1)
                {
                    flag=1;
                    break;
                }
            }
            if(flag)
                break;
        }
        if(flag)
            break;
    }
    if(flag)
        cout<<"Saturated"<<endl;
    else
        cout<<"Unsaturated array"<<endl;
    return 0;
}
