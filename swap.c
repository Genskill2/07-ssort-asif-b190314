void swap_max(int arr[],int l,int n)
{
	int x=arr[n];
	int y=n;
	for(int i=n;i<l;i++)
	{
		if(arr[i]>x)
		{
			x=arr[i];
			y=i;
		}
	}
	
	int a=arr[y];
	arr[y]=arr[n];
	arr[n]=a;
}

void ssort(int arr[], int l)
{
	for(int i=0;i<l;i++)
	{
		swap_max(arr,l,i);
	}
}
			
