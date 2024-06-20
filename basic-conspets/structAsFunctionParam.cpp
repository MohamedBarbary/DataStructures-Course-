#include <iostream>
#include <stdio.h>
using namespace std;

struct Rec {
	int len;
	int bread;
};

// pass by value with struct
void fun (Rec x ){
	x.bread++;
	cout << x.bread << " " << x.len << endl;
}
// pass by address
void fun1 (Rec *x ){
	x->bread++;
	cout << x->bread << " " << x->len << endl;
}
Rec *fun2 (){
	Rec *p = new Rec;
	p->bread=44;
	p->len=99;
	return p;
}
int main() {
	Rec r = {10,5};
	Rec *ptr= fun2();
	 fun(r);
	cout << r.bread << " " << r.len << endl; // 10 5
	 fun1(&r);
	cout << r.bread << " " << r.len << endl; // 10 6
	return 0;
}
