#ifndef SecondClass_H
#define SecondClass_H

typedef struct {
    int a;
    int b;
} myData;

class SecondClass {
    protected:       
        float myFloat;
        myData (* SCWorker)(void*);
        myData data {5, 6};
        
    public:
        SecondClass(){ myFloat = 0.0; }
        SecondClass(float a){ myFloat = a; }
        float getNumber(){ return myFloat;}
        void setSCWorker(myData (* a)(void*)){SCWorker = a;}
        int doStuffSecond();
        void printData();
};
#endif