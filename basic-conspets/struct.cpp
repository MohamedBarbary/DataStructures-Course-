
#include <iostream>
using namespace std;

struct Rectangel {
	int length;
	int breath;
};

int main2() {

 struct Rectangel r1;
  r1.length=10;
  r1.breath =15;

  cout << sizeof(r1) << endl;
  cout << r1.length << ' ' << r1.breath << endl;
	return 0;
}
