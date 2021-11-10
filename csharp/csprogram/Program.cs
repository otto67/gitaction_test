using System;
using MyClassLib;

namespace csprogram
{
    class Program
    {
        static void Main(string[] args)
        {
            var tmp = new First();
            var tmp1 = new FirstDerived();

            tmp.printData();
            tmp.myIfMethod();
            tmp1.printData();
            tmp1.myIfMethod();
            tmp1 = null;
        }
    }
}
