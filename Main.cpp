#include "sort.h"
#include <iostream>
#include <stdio.h>
#include <chrono>
using namespace std;
//create driver program
void driverprog(){
	int input;
	sort vim= sort();
	//menu option
	while(input!=5){
	
	cout<<"------------------"<<endl;

	cout<<"Main Menu"<<endl;
	cout<<"press 1 to test randomly generated numbers: \n";
    cout<<"press 2 to test arrays that are already sorted: \n";
	cout<<"press 3 to test arrays that contain duplicate elements: \n"; 
	cout<<"press 4 to test arrays that are sorted backwards: \n";
	cout<<"press 5 to end the program: \n";
	cin>>input;
			
	switch(input){


	case 1: {
	char n,s;
	int len;
		cout<<"How many numbers total do you want to be generated in array?"<<endl;
		cin>>len;

		//creates and fills array with random values up to size of len from user input
		int *arr= new int [len];
		for(int i=0; i < len; i++)
		{
			arr[i] = (rand()%100)+1;
		}
//takes in user input to create size of array and choose which sort implementation user wants to use.
		cout<<"Which sort would you like to use? (1 for merge, 2 for quick)"<<endl;
		cin>>s;
		if(s=='1'){
		cout<<"Original Array "<<endl;
		vim.printarr(arr,len);
		auto start = std::chrono::system_clock::now(); //time takes for sorting
		vim.mergesort(arr,0,len-1); // calls bubble sorted	
	auto end = std::chrono::system_clock::now(); 
		cout<<endl;
			cout<<"Now this is the sorted array:"<<endl;
		vim.printarr(arr,len);

	std::chrono::duration<double> elapsed_seconds = end-start;
	std::time_t end_time = std::chrono::system_clock::to_time_t(end);
	std::cout << "finished at " << std::ctime(&end_time)
	<< "elapsed time: " << elapsed_seconds.count() << "s\n";
		}
		else if(s=='2'){
			cout<<"Original Array "<<endl;
			vim.printarr(arr,len);
			
				auto start = std::chrono::system_clock::now();
			//vim.quicksort(arr,len); // calls insertion sort
auto end = std::chrono::system_clock::now();
			cout<<endl;
			cout<<"Now this is the sorted array:"<<endl;
			vim.printarr(arr,len);
std::chrono::duration<double> elapsed_seconds = end-start;
std::time_t end_time = std::chrono::system_clock::to_time_t(end);
std::cout << "finished at " << std::ctime(&end_time)
<< "elapsed time: " << elapsed_seconds.count() << "s\n";
		}
			
		else 
			cout<<"wrong input"<<endl;
		cout<<endl;
		
	
delete [] arr;
	break;

}	


//test for arrays that are already sorted	

	case 2: {	
	char n,s;
	int len;
		cout<<"How many numbers total do you want to be generated in array?"<<endl;
		cin>>len;

		//creates and fills array with random values up to size of len from user input
		int *arr= new int [len];
		for(int i=0; i < len; i++)
		{
			arr[i] = (rand()%100)+1;
		}
		
		
		cout<<"Which sort would you like to use? (1 for merge, 2 for quick)"<<endl;
		cin>>s;
		if(s=='1'){
		cout<<"Original Array "<<endl;
		vim.mergesort(arr,0,len-1);	
		vim.printarr(arr,len);
			auto start = std::chrono::system_clock::now();
	vim.mergesort(arr,0,len-1); //time takes for sorting

	auto end = std::chrono::system_clock::now();
			cout<<endl;
			cout<<"Now this is the sorted array:"<<endl;
			vim.printarr(arr,len);
			
	std::chrono::duration<double> elapsed_seconds = end-start;
	std::time_t end_time = std::chrono::system_clock::to_time_t(end);
	std::cout << "finished at " << std::ctime(&end_time)
	<< "elapsed time: " << elapsed_seconds.count() << "s\n";
		}
		else if(s=='2'){
			cout<<"Original Array "<<endl;
		vim.mergesort(arr,0,len-1);	
			vim.printarr(arr,len);
			auto start = std::chrono::system_clock::now();
vim.quicksort(arr,0,len-1); // time takes for sorting
auto end = std::chrono::system_clock::now();
			cout<<endl;
			cout<<"Now this is the sorted array:"<<endl;
			vim.printarr(arr,len);
std::chrono::duration<double> elapsed_seconds = end-start;
std::time_t end_time = std::chrono::system_clock::to_time_t(end);
std::cout << "finished at " << std::ctime(&end_time)
<< "elapsed time: " << elapsed_seconds.count() << "s\n";
		}
		else 
			cout<<"wrong input"<<endl;
		cout<<endl;
		
		//if statements that print out confirmation if array has been sorted.
			

delete [] arr;
	
	break;
}
	//test for duplicated arrays
	case 3: 	{
	char n,s;
	int len;
		cout<<"How many numbers total do you want to be generated in array?"<<endl;
		cin>>len;

		//creates and fills array with random values up to size of len from user input
		int *arr= new int [len];
		for(int i=0; i < len; i++)
		{
			arr[i] = (rand()%20)+1;
		}	

		cout<<"Which sort would you like to use? (1 for merge, 2 for quick)"<<endl;
		cin>>s;
		if(s=='1'){
		cout<<"Original Array "<<endl;
		vim.printarr(arr,len);
			auto start = std::chrono::system_clock::now();
	vim.mergesort(arr,0,len-1); //time takes for sorting

	auto end = std::chrono::system_clock::now();
			cout<<endl;
			cout<<"Now this is the sorted array:"<<endl;
			vim.printarr(arr,len);
			
	std::chrono::duration<double> elapsed_seconds = end-start;
	std::time_t end_time = std::chrono::system_clock::to_time_t(end);
	std::cout << "finished at " << std::ctime(&end_time)
	<< "elapsed time: " << elapsed_seconds.count() << "s\n";
		}
		else if(s=='2'){
			cout<<"Original Array "<<endl;
			vim.printarr(arr,len);
			auto start = std::chrono::system_clock::now();
vim.quicksort(arr,0,len-1); // time takes for sorting
auto end = std::chrono::system_clock::now();
			cout<<endl;
			cout<<"Now this is the sorted array:"<<endl;
			vim.printarr(arr,len);
std::chrono::duration<double> elapsed_seconds = end-start;
std::time_t end_time = std::chrono::system_clock::to_time_t(end);
std::cout << "finished at " << std::ctime(&end_time)
<< "elapsed time: " << elapsed_seconds.count() << "s\n";
		}
		else 
			cout<<"wrong input"<<endl;
		cout<<endl;
		
			
delete [] arr;
		break;
		}
//testing backward sorted arrays
	case 4: {
	char n,s;
	int len;
		cout<<"How many numbers total do you want to be generated in array?"<<endl;
		cin>>len;

		//creates and fills array with random values up to size of len from user input
		int *arr= new int [len];
		for(int i=0; i < len; i++)
		{
			arr[i] = (len-(i+1));
		}
//takes in user input to create size of array and choose which sort implementation user wants to use.
		cout<<"Which sort would you like to use? (1 for merge, 2 for quick)"<<endl;
		cin>>s;
		if(s=='1'){
		cout<<"Original Array "<<endl;
		vim.printarr(arr,len);
			auto start = std::chrono::system_clock::now();
	vim.mergesort(arr,0,len-1); //time takes for sorting
	auto end = std::chrono::system_clock::now();
			cout<<endl;
			cout<<"Now this is the sorted array:"<<endl;
			vim.printarr(arr,len);
			
	std::chrono::duration<double> elapsed_seconds = end-start;
	std::time_t end_time = std::chrono::system_clock::to_time_t(end);
	std::cout << "finished at " << std::ctime(&end_time)
	<< "elapsed time: " << elapsed_seconds.count() << "s\n";
		}
		else if(s=='2'){
			cout<<"Original Array "<<endl;
			vim.printarr(arr,len);
			auto start = std::chrono::system_clock::now();
vim.quicksort(arr,0,len-1); // time takes for sorting
auto end = std::chrono::system_clock::now();
			cout<<endl;
			cout<<"Now this is the sorted array:"<<endl;
			vim.printarr(arr,len);
				
std::chrono::duration<double> elapsed_seconds = end-start;
std::time_t end_time = std::chrono::system_clock::to_time_t(end);
std::cout << "finished at " << std::ctime(&end_time)
<< "elapsed time: " << elapsed_seconds.count() << "s\n";
		}
			
		else 
			cout<<"wrong input"<<endl;
		cout<<endl;
		
delete [] arr;
	break;
cout<<" "<<endl;

	}
}
}
}
//main method call
int main(){
	cout<<"Welcome to sorts Lab2"<<endl;
	//call of the prog
	driverprog();
	cout<<"Written with love by Zeus"<<endl;
	return 0;
			
}
