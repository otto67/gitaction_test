#include <iostream>
#include "SecondClass.h"
#include "FirstClass.h"

myData myFunc1(void* data){
    std::cout<<"myFunc1 \n";
    myData* tmp = (myData*) data;
    myData retval {tmp->a*5, tmp->b*10};
    return retval;    
}

int myFunc2(int a, int* b){
    std::cout<<"myFunc2 \n";
    return a + 10*(*b);
}

int myFunc3(int a, int* b){
    std::cout<<"myFunc3 \n";
    return a - *b;
}

int main(int nargs, char** args){

    if (nargs > 1){
        return nargs;
    }

    int tmp;

    FirstClass a(2);
    a.allocMem();
    a.setFCWorker(myFunc2);
    tmp = a.doStuffFirst();
    std::cout<<"Firstclass, got: "<<tmp<<" and "<<a.getInt()<<std::endl;

    SecondClass b(2.7);
    b.setSCWorker(myFunc1);
    tmp = b.doStuffSecond();
    b.printData();
    std::cout<<"SecondClass, got: "<<tmp<<" and "<<b.getNumber()<<std::endl;

    FirstDerivedClass c(10, 20, 2.0);
    c.setFCWorker(myFunc3);
    tmp = c.doStuffFirst();
    c.printData();
    std::cout<<"FirstDerivedClass, got: "<<tmp<<" and "<<a.getInt()<<std::endl;   

    return 0;
}