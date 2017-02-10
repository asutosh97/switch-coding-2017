#include <iostream>
#include <queue>
struct tasks
{
	int pid;
	int arrival;
	int burst;
};
void Sort(tasks arr[], int n)
{
	int min;
	for(int i = 0;i < n; i++)
	{
		min = i;
		for(int j = i + 1;j < n; j++)
		{
			if(arr[j].arrival < arr[min].arrival)
				min = j;
		}
		tasks temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;
	}
}
int main()
{
	int n;
	std::cin>>n;
	tasks arr[n];
	for(int i = 0;i < n; i++)
		std::cin>>arr[i].pid>>arr[i].arrival>>arr[i].burst;
	int quantum;
	std::cin>>quantum;
	Sort(arr, n);
	std::queue<tasks> q;
	for(int i = 0;i < n; i++)
		q.push(arr[i]);

	while(!q.empty())
	{
		tasks x = q.front();
		q.pop();
		std::cout<<"p"<<x.pid<<"\t";
		x.burst -= quantum;
		if(x.burst > 0)
			q.push(x);
	}
	return 0;
}