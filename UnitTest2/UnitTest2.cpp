#include "pch.h"
#include "CppUnitTest.h"
#include "../Pr5.1/Pr5.1.cpp"   // підключаємо основний проєкт

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
    TEST_CLASS(UnitTest2)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            double t = h(0, 3);
            Assert::AreEqual(6.0, t, 1e-9);
        }

        
    };
}
