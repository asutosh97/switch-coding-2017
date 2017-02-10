#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int key;
    cin>>key;
    int num=-1;
    int min=INT_MAX;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=1;j<=arr[i];j++)
        {
            if(arr[i]%j==key)
            {
                sum+=j;
            }
        }
        if(sum < min)
        {
            min=sum;
            num=arr[i];
        }
    }
    cout<<num<<endl;
    return 0;
}
