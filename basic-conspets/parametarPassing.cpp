
#include <iostream>
#include <stdio.h>
using namespace std;

void swapbyAddress (int *a , int *b){
	int temp ;
	temp = *a ;
	*a=*b;
	*b=temp;
}
void swapbyReference(int &a , int &b){
	int temp ;
	temp = a ;
	a=b;
	b=temp;
}
int main() {

	int num1 =10, num2=15,sum;
    sum = swapbyAddress(&num1,&num2);
    sum =swapbyReference(num1,num2);

	return 0;
}
