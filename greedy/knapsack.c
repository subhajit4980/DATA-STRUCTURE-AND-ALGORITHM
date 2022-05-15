#include<stdio.h>
#include<stdlib.h>

typedef struct knap{
	int weight;
	int value;
	double ratio;
}knap;

void swap(double *xp, double *yp)
{
	double temp = *xp;
	*xp = *yp;
	*yp = temp;
}


void sort(knap arr[], int n)
{
int i, j;
for (i = 0; i < n-1; i++)	

	for (j = 0; j < n-i-1; j++)
		if (arr[j].ratio > arr[j+1].ratio)
			swap(&arr[j].ratio, &arr[j+1].ratio);
}
void rvereseArray(knap arr[], int start, int end)
{
    knap temp;
    while (start < end)
    {
        temp = arr[start];  
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }  
} 

void knapsack(knap arr[],int n,int cap)
{
	sort(arr,n);
	rvereseArray(arr,0,n-1);
	int i;
	double res =0.0;
	for(i=0;i<n;i++)
	{
		if(arr[i].weight<=cap)
		{
			res+=arr[i].value;
			cap = cap-arr[i].weight;
		}
		else
		{
			res+= (arr[i].ratio)*(double)(cap);
			break;
		}
	}
	printf("Ans is: %f",res);
  }  

int main()
{
	knap arr[3];
	int i;
	printf("Enter the weights:");
	for(i=0;i<3;i++)
	{
		scanf("%d",&arr[i].weight);
	}
	printf("Enter the values:");
	for(i=0;i<3;i++)
	{
		scanf("%d",&arr[i].value);
	}
	int cap;
	printf("Enter the capacity:");
	scanf("%d",&cap);
	for(i=0;i<3;i++)
	{
		arr[i].ratio = (double)(arr[i].weight)/(double)(arr[i].value);
	}
	
	knapsack(arr,3,cap);
	return 0;
	
}