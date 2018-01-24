#include <cstdio>
using namespace std;

class A {
public:
    int ia;
    int ib;
    int ic;
};


int main(){
    A a = { 1, 2, 3 };
    A *pa = &a;
    printf("ia is %d, ib is %d, ic is %d\n Fuck you!\n", pa->ia, pa->ib, pa->ic);
    return 0;
}
