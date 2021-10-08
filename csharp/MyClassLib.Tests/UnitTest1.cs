using System;
using Xunit;
using MyClassLib;

namespace MyClassLib.Tests
{
 
    public class UnitTest1
    {             
        [Fact]
        public void checkPrm(){
            First myFirst = new First();
            FirstDerived myDerived = new FirstDerived(); 
            int a = myFirst.getPrm();
            int b = myDerived.getPrm();
            Assert.Equal(1, a);
            Assert.Equal(6, b); 
        }

        [Fact]
        public void checkPrmSec(){
            First myFirst = new First(3, 9.8);
            FirstDerived myDerived = new FirstDerived(4, 9.9); 
            int a = myFirst.getPrm();
            int b = myDerived.getPrm();
            Assert.Equal(3, a);
            Assert.Equal(20, b);
        }       
    }
}
