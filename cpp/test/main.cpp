#include <iostream>
#include <SecondClass.h>
#include <FirstClass.h>

int myFunc(int a, int* b){
    return a + (*b);
}

int main(int nargs, char** args){

    int x1, x2;
    float x3;
    bool passed = true;

    FirstClass a(2);
    a.allocMem(1, 1, 1);
    a.setFCWorker(myFunc);
    x1 = a.getInt();

    if (x1 == 9)
        std::cout<<"Test 1: PASS \n";
    else {
        std::cout<<"Test 1: FAIL \n";
        passed = false;
    }

    SecondClass b(2.7);
    x3 = b.getNumber();

    if (x3 == 2.7f)
        std::cout<<"Test 2: PASS \n";
    else {
        std::cout<<"Test 2: FAIL \n";
        passed = false;
    }

    FirstDerivedClass c(10, 20, 2.0);
    x2 = c.getInt();

    if (x2 == 30)
        std::cout<<"Test 3: PASS \n";
    else {
        std::cout<<"Test 3: FAIL \n";
        passed = false;
    }
    if (passed)
        return 0;
    else 
        return -1;
}