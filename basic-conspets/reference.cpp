
#include <iostream>
using namespace std;


int main() {
        int num =10;
        int &ref=num;
        ref++ ; // num and ref =11
        num ++ ; // num and ref = 12
        num =24; // ref and num =24
      return 0;
}
