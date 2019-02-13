/*
Ralph Mehitang
Joseph Anderson
Cosc-320
February 13th, 2019
*/
#ifndef SORT_H
#define SORT_H

class sort{
public:
	void swap(int&,int&);
	void printarr(int*,int);
	int partition(int*,int, int);
	void quicksort(int*,int,int);
	void merge(int*,int,int,int);
	void mergesort(int*,int,int);
};
#endif
