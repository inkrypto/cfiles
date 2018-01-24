#include <cstdio>
using namespace std;

class A {
    int i = 0;
public:
    void setvalue(int i);
    int getvalue();
};

void A::setvalue(int value){
    i = value;
}

int A::getvalue(){
    return i;
}

int main(){
    int i = 47;
    A object1;

    object1.setvalue(i);
    printf("value is %d\n", object1.getvalue());
    return 0;
}


