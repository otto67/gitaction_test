using System;

namespace MyClassLib
{

    interface ImyInterface {
        // Default implementation is only supported from c# 8.?? 
        void myIfMethod() {Console.WriteLine("Hello from top interface"); }
    }

    
    public class First : ImyInterface {

        int a;
        double b;

        public void myIfMethod()
        {   
            Console.WriteLine("Class def. of myIfMethod");
        }
        public First() : this(1, 2.0){}
        public First(int a, double b) {
            this.a = a;
            this.b = b;            
        }
        public virtual void printData(){
            Console.WriteLine("Base: I have " + a + " and " + b);
        }

        public virtual int getPrm(){return a;} 
    }

    public class FirstDerived : First 
    {
        int c;
        double d;
        public FirstDerived(): this(2, 4.0) {}
        public FirstDerived(int a, double b): base(a, b) {
            c = a*a;
            d = b*b;
        }
        public override void printData() {
            base.printData();
            Console.WriteLine("Derived: I have " + c + " and " + d);
        }

        public override int getPrm()
        {
            return base.getPrm() + c;
        }

    }
}

