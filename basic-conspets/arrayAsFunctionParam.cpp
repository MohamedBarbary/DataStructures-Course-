
#include <iostream>
#include <stdio.h>
using namespace std;
// array are always pass by address
void fun (int A[],int n){
	for(int i =0;i<n;i++){
		A[i]+=3;
	}
}

//array as return type
int * fun1(int size){
	int *p ;
	p = new int[size];
	for(int i=0;i<size;i++){
		p[i]=i+1;
	}
	return p ;
}
int main() {
	// fun1 prog
      int *ptr ,size =5;
      ptr = fun1(size);
      for(int i =0;i<size;i++)cout<<ptr[i]<<endl;
    // fun
	int arr[] = {1,2,3,4};
	int n=4;
	fun(arr,n);
	for(int x : arr )cout <<x<<' ';
	return 0;
}
