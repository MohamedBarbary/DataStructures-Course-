
#include <iostream>
using namespace std;


int main() {
	// pointer for datatype
    int num=10;
    int *pointer1;
    *pointer1 =&num;

    // pointer for array
	int A[5]={2,3,4,5,6};
    int *p2;
    p2=A;
      for(int i =0 ;i<5;i++)
    	  cout << p2[i]<< endl;

      //  pointer for dynamic memory (heap)
    int *array;
    array = new int[5];
    for (int x : array) cout << x << endl;
    delete [ ] array;
      return 0;
}
