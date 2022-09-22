#include<iostream>
#include <cstdlib>
#include<chrono>
#include<bits/stdc++.h>
using namespace std;
#define si 20
class WAS{

	int array[si];
	
	int icount = 0;
	public:
	
	//access
	void menu();
	void printArr();
	//sorts
	void Builtin();
	void bubbleSort();
	void incertionSort();
	void selectionSort();
	void quicksort();
	void addIndx(int,int);
	void appendx(int);
};
void WAS::menu(){
	printArr();
	cout<<"\t\t\t\tALgorithm Time Shower__"<<endl;
	cout<<"Time Of Given Array \n1.BuiltIn Sort\n2.Bubble Sort \n3.Incerstion \n4.Merge Sort \n5.selection \n6.QuickSort \nAll\nchose:";
	int c;
	cin>>c;
	switch (c)
	{
	case 1:
		Builtin();	
		break;
	case 2:
		bubbleSort();
		break;
	case 3:
		incertionSort();
		break;
	case 5:
		selectionSort();
		break;

	default:
		Builtin();	
		bubbleSort();
		incertionSort();
		selectionSort();
		break;
	}

}


void WAS::appendx(int item){
	if(icount<si){
		array[icount++] = item;
	}

}
void WAS::addIndx(int indx,int itm){
	if(icount<si && indx>=0){
		for (int i = icount-1; i >=indx ; i--)
		{
			array[i+1] = array[i];
		}
		array[indx] = itm;
		icount++;

	}
}


void WAS::Builtin(){
	auto start = chrono::steady_clock::now();
	sort(array,array+icount);
	auto end = chrono::steady_clock::now();
	double gap = double(chrono::duration_cast<chrono::nanoseconds>(end-start).count());
	cout<<"Time for builidin sort: " <<gap<<" Nanosec"<<endl; 
}

void WAS::selectionSort(){
	auto start = chrono::steady_clock::now();
    int i, j, min_idx;
    for (i = 0; i < icount-1; i++)
    {
        min_idx = i;
        for (j = i+1; j < icount; j++)
        if (array[j] < array[min_idx])
            min_idx = j;
        if(min_idx!=i)
            swap(array[min_idx], array[i]);

	}
	auto end = chrono::steady_clock::now();
	double gap = double(chrono::duration_cast<chrono::nanoseconds>(end-start).count());
	cout<<"Time for Selection sort: " <<gap<<" Nanosec"<<endl; 
}



void WAS::bubbleSort(){
	auto start = chrono::steady_clock::now();
	for(int i = 0;i<icount-1;i++){
        for(int j = 0 ;j<(icount-1-i);j++){
            if(array[j]>array[j+1]){
            swap(array[j],array[j+1]);       
            }
        }
    }
	auto end = chrono::steady_clock::now();
	double gap = double(chrono::duration_cast<chrono::nanoseconds>(end-start).count());
	cout<<"Time for bubble sort: " <<gap<<" Nanosec"<<endl; 
	
}

void WAS::incertionSort(){
    auto start = chrono::steady_clock::now();
	int i, key, j; 
    for (i = 1; i < icount; i++)
    { 
        key = array[i]; 
        j = i - 1; 
 	while (j >= 0 && array[j] > key)
        { 
            array[j + 1] = array[j]; 
            j = j - 1; 
        } 
        array[j + 1] = key; 	
	}
	auto end = chrono::steady_clock::now();
	double gap = double(chrono::duration_cast<chrono::nanoseconds>(end-start).count());
	cout<<"Time for Incertion sort: " <<gap<<" Nanosec"<<endl; 
	
}


void WAS::printArr(){
	cout<<"[ ";
	for (int i = 0; i < icount; i++)
	{
		cout<<array[i]<< " ";
	}
	
	cout<<" ]"<<endl;

}


int main() {

	class WAS test1;

	test1.appendx(5);
	test1.appendx(100);
	test1.appendx(1);
	test1.appendx(70);
	test1.appendx(9);
	test1.appendx(15);
	test1.appendx(120);
	test1.appendx(19);
	test1.appendx(80);
	test1.appendx(90);
	test1.appendx(55);
	test1.appendx(110);
	test1.appendx(11);
	test1.appendx(79);
	test1.appendx(99);
	
	test1.menu();



	return 0;
}
