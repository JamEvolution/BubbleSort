#include <iostream>

using namespace std;

void display(int *array, int sizeArray){
	for(int i=0; i<sizeArray; i++){
		cout<<array[i]<<" ";
	}
	cout<<endl;
}

void swapping(int &x, int &y){
	int temp;
	temp = x;
	x = y;
	y = temp;
}

void bubbleSort(int *array, int sizeArray){
	for(int i=0; i<sizeArray; i++) {
		int swaps = 0;
		for(int j=0; j<sizeArray-1; j++ ){
			if(array[j]>array[j+1]){
				swapping(array[j], array[j+1]);
				swaps = 1;
			}
		}
		if(!swaps){
			break;
		}
	}
}

int main(){
	
	int n;
	cout<<"Enter the number of Elements: ";
	cin>>n;
	int arr[n];
	
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	cout<<"Array before Shorting: ";
	display(arr, n);
	
	bubbleSort(arr, n);
	
	cout<<"Array after Shorting: ";
	display(arr, n);
		
}
