/*

Ralph Mehitang
Joseph Anderson
Cosc-320
September 15th

*/

#include <iostream>
using namespace std;
       
void swap(int *a, int *b){
	{
		int temp = *a;
		*a = *b;
		*b = temp;
	}
}
/* Function to print an arr */
void printarr(int *arr, int size)
	{
		//while i is less than size of array goes through and prints out each index.
		int i;
		for (i=0; i < size; i++)
			cout<<(arr[i])<<" ";
	}
int merge (int *arr, int left, int mid, int right){ //subroutine of merge operation that combines lengths m+n


void mergesort(int *arr, int left, int right)// merge sort function
{
int mid;
if(left<right){
	mergesort(arr,left,mid);//first half of the array sort
	mergesort(arr,mid+1,right); //second half sort
	merge(arr,left,mid,right); //merges the two arrays back together
}
}

int main(){

int arr[] = {10, 7, 8, 9, 1, 5};
    int t = sizeof(arr)/sizeof(arr[0]);
    mergesort(arr, 0, t-1);
    cout<<"Sorted array"<<endl;
    printarr(arr, t);
    //test for randomly generated array
    cout<<endl;
	return 0;
}