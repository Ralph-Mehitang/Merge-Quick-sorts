#include <iostream>
#include "sort.h"
using namespace std;
       
void sort::swap(int &a, int &b){
	{
		int temp = a;
		a = b;
		b = temp;
	}
}
/* Function to print an arr */
void sort::printarr(int *arr, int size)
	{
		//while i is less than size of array goes through and prints out each index.
		int i;
		for (i=0; i < size; i++)
			cout<<(arr[i])<<" ";
	}
int sort::partition(int *arr, int start, int end){
int pivot=arr[end];  //sets the pivot 
int index=(start-1);   //the index of the smaller element
for (int i = start; i <= end-1; i++)
{
	if (arr[i]<=pivot)
	{
		index++;    //moves the index of the smaller element
		swap(arr[index],arr[i]);  //swaps the smaller element and larger element
	}
}

	return (index+1);
}
// quick sort function 
void sort::quicksort(int *arr, int start, int end){
int pivot; //partitioning index
if (start<end)
{
pivot=partition(arr,start,end);
quicksort(arr,start,pivot-1);	
quicksort(arr,pivot+1,end);
}
}

void sort::merge (int *arr, int left, int mid, int right){ //subroutin- e of merge operation that combines lengths m+n
int *temp=new int [right-left+1]; // creation of temporary merge array
int i=left; //left hand of array
int j=mid+1; // right hand of array
int k=0; // for the temporary array`
while (i<=mid && j<=right){
	if(arr[i]<=arr[j])
		temp[k++] = arr[i++];
	else 
		temp[k++] = arr[j++];
}
//left hand
while (i<= mid)
	temp[k++] = arr[i++];
// right hand
while (j<=right)
	temp[k++] = arr[j++];
// copies the temporary array that has been merged into the original array.
for (k = 0, i=left;i<=right; ++i, ++k)	
{
	arr[i]=temp[k];
}
delete []temp; // free up to avoid any mem leaks
}

void sort::mergesort(int *arr, int left, int right)// merge sort function
{
int mid;
if(left<right){
	mid=(left+right)/2;
	mergesort(arr,left,mid);//first half of the array sort
	mergesort(arr,mid+1,right); //second half sort
	merge(arr,left,mid,right); //merges the two arrays back together
}
}


