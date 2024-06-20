
#include <iostream>
#include <stdio.h>
using namespace std;

struct Rectangel {
	int length;
	int breath;
};

int main() {

   Rectangel *p;
   p =(struct Rectangel *)malloc(sizeof(struct Rectangel));
   p->length=13;
   p->breath=99;
   cout << p->breath << " " << p->length <<endl ;

	return 0;
}
