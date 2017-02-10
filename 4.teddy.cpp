#include <iostream>
int main()
{
	int t;
	std::cin>>t;
	while(t--)
	{
		int n,k;
		std::cin>>n>>k;
		int r = n*(n+1)/2 - k;
		int i,j;
		bool flag = false;
		for(i = 1;i <= n; i++)
		{
			for(j = n;j > i; j--)
			{
				if(i + j == r)
				{
					flag = true;
					break;
				}
			}
			if(flag)
				break;
		}
		if(flag)
			std::cout<<i*j<<std::endl;
		else
			std::cout<<"-1"<<std::endl;
	}
	return 0;
}