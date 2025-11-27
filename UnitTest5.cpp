#include "pch.h"
#include "CppUnitTest.h"
#include "calc.h"
#include <cmath>
#include <iostream>
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;

namespace UnitTest5
{
    TEST_CLASS(UnitTest5)
    {
    public:

        TEST_METHOD(TestNonPositiveX)
        {
            double result = calculateY(0.0, 3);    
            Assert::AreEqual(14.0, result, 1e-9);
        }
        
        TEST_METHOD(TestNegativeX)
        {
            double result = calculateY(-1, 2);           
            Assert::AreEqual(14.0, result, 1e-9);
        }

        TEST_METHOD(TestPositiveX)
        {
            double result = calculateY(1, 3);           
            Assert::AreEqual(504.0, result, 1e-9);
        }

        TEST_METHOD(TestSmallN)
        {
            double result = calculateY(2, 1);
            Assert::AreEqual(1.0, result, 1e-9);
        }
    };
}

