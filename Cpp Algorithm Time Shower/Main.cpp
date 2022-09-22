#include<iostream>
#include <cstdlib>
#include<chrono>
#include<bits/stdc++.h>
using namespace std;
#define si 100


void Merge(int arr[],int low,int mid,int high){
	  	int i = low;
		int j = mid+1;
		int k = low;
		int temp[high+1];
		while (i<= mid && j <= high)
		{
			if(arr[i]<arr[j]){
				temp[k] = arr[i];
				i++;
				k++;
			}else{
				temp[k] = arr[j];
				j++;
				k++;
			}
		}
		while(i<=mid){
			temp[k] = arr[i];
			i++;
			k++;
		}
		while (j<=high)
		{
			temp[k] = arr[j];
			j++;
			k++;
		}		
	for (int io = low; io <= high; io++)
	{
		arr[io] = temp[io];
	}


}



int pertition(int arr[],int low,int high){
		int pivot = arr[low];
		int i = low;
		int j = high-1;
		while(i<j){
			do{ i++;} while(arr[i]<=pivot);
			do{ j--;} while(arr[j]>pivot);
			if(i < j){
				swap(arr[i],arr[j]);
			}
		}
		swap(arr[j],arr[low]);
		return j;
}
void QuickSort(int arr[],int low,int high){
	if(low<high){
		int j = pertition(arr,low,high);
		QuickSort(arr,low,j);
		QuickSort(arr,j+1,high);
	}
}


void MergeSort(int arr[],int low,int high){
	if(low<high){
		int mid = (low+high)/2;
		MergeSort(arr,low,mid);
		MergeSort(arr,mid+1,high);
		Merge(arr,low,mid,high);

	}	

}

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
	void msor();
	void quicksort();
	//Ba
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
	case 4:
		msor();
		break;
	case 5:
		selectionSort();
		break;
	case 6:	
		quicksort();
		break;
	default:
		Builtin();	
		bubbleSort();
		incertionSort();
		selectionSort();
		quicksort();
		msor();

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


void WAS::quicksort(){
	auto start = chrono::steady_clock::now();
	QuickSort(array,0,icount);
	auto end = chrono::steady_clock::now();
	double gap = double(chrono::duration_cast<chrono::nanoseconds>(end-start).count());
	cout<<"Time for Quick sort: " <<gap<<" Nanosec"<<endl; 


}


void WAS::msor(){

	auto start = chrono::steady_clock::now();
	MergeSort(array,0,icount);
	auto end = chrono::steady_clock::now();
	double gap = double(chrono::duration_cast<chrono::nanoseconds>(end-start).count());
	cout<<"Time for Merge sort: " <<gap<<" Nanosec"<<endl; 

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
		cout<<array[i]<< ",";
	}
	
	cout<<" ]"<<endl;

}





int main() {
	int r[100] = { 5,100,1,70,9,15,120,19,80,90,55,110,11,79,99,200,70,9,15,70,9,15,19,80,90,55,110,11,79,19,80,90,55,110,11,79,19,80,1090,55,110,1010,790};
	int i = 0;
	class WAS test1,test2,test3,test4,test5,test6;
	while(r[i] != 0)
	{
		test1.appendx(r[i]);
		test2.appendx(r[i]);
		test3.appendx(r[i]);
		test4.appendx(r[i]);
		test5.appendx(r[i]);
		test6.appendx(r[i]);

		i++;
	}
	test1.Builtin();
	test2.bubbleSort();
	test3.incertionSort();
	test4.selectionSort();
	test5.quicksort();
	test6.msor();
	
	
	
	return 0;
}
