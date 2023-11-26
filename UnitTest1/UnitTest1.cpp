#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab6.1It/Lab6.1It.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestCountAndSum)
        {
            const int SIZE = 25;
            int t[SIZE] = { 1, -2, 3, -4, 5, -6, 7, -8, 9, -10, 11, -12, 13, -14, 15, -16, 17, -18, 19, -20, 21, -22, 23, -24, 25 };
            int count, sum;

            
            countAndSum(t, SIZE, count, sum);

            
            Assert::AreEqual(8, count);
            Assert::AreEqual(-104, sum);

            
            for (int i = 0; i < SIZE; i++) {
                if (t[i] < 0 && i % 3 != 0) {
                    Assert::AreEqual(0, t[i]);
                }
            }
        }
    };
}
