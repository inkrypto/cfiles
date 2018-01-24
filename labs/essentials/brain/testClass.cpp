#include <cstdio>
#include <iostream>
using namespace std;

class Class1{
    int i;
public:
    void setvalue( int value );
    int getvalue(); 
};

void Class1::setvalue(int value){
    i = value;
}

int Class1::getvalue(){
    return i;
}

int main( int argc, char ** argv ) {
    int i = 47;
    Class1 object1;

    object1.setvalue(i);
    cout << "value is " << object1.getvalue() << endl;
    return 0;
}
