#include <iostream>
#include "SecondClass.h"
#include "FirstClass.h"

int glob a = 1;

myData myFunc1(void* data){
    myData* tmp = (myData*) data;
    myData retval {tmp->a*5, tmp->b*10};
    return retval;    
}

int myFunc2(int a, int* b){
    return a + 10*(*b);
}

int myFunc3(int a, int* b){
    return a - *b;
}

int main(int nargs, char** args){

    if (nargs > 1){
        std::cout<<"Main: input is "<<args[1]<<std::endl;
        return atoi(args[1]);
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
    std::cout<<"FirstDerivedClass, doStuff: "<<tmp<<" and printData: "<<a.getInt()<<std::endl;   

    return 0;
}