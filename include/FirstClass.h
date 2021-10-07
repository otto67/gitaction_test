#ifndef FirstClass_H
#define FirstClass_H

# include "SecondClass.h"

class FirstClass {

    protected:
        int myInt;
        int* myIntPointer = nullptr;
        int (* FCWorker)(int, int*);

    public:
<<<<<<< HEAD
        FirstClass() {myInt = 0;}
        FirstClass(int a) {myInt = a;};
        ~FirstClass(){if (myIntPointer != nullptr) { delete myIntPointer; std::cout<<"Freeing memory \n"; } };
        void setFCWorker(int (*a)(int, int*));
        virtual int getInt();
        int doStuffFirst( );
        void allocMem(){myIntPointer = new int[3]; myIntPointer[0] = 1; myIntPointer[1] = 2; myIntPointer[2] = 3;}                
=======
        FirstClass() : myInt(0){}
        FirstClass(int a) : myInt(a){}

        ~FirstClass(){if (myIntPointer != nullptr) delete myIntPointer; };
        void setFCWorker(int (*a)(int, int*));
        virtual int getInt();
        int doStuffFirst();
        void allocMem(int a=1, int b=2, int c=3){myIntPointer = new int[3]; myIntPointer[0] = a; myIntPointer[1] = b; myIntPointer[2] = c;}                
>>>>>>> develop
};

class FirstDerivedClass : public FirstClass, public SecondClass {

    protected:
        int mySecondInt;

    public:
        FirstDerivedClass(){mySecondInt = 0;}
        FirstDerivedClass(int a, int b) : FirstClass (a), mySecondInt(b){} 
        FirstDerivedClass(int a, int b, float c) : FirstClass (a), SecondClass(c), mySecondInt(b){}
        int getInt() override;
};

#endif