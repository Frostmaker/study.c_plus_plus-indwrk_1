#include "pch.h"
#include "CppUnitTest.h"
#include "../IndividWork_1/defs.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(ProbabilityTest)
	{
	public:
		
		TEST_METHOD(ProbabilityTestMethod1)
		{
			Assert::AreEqual(prob_integr(0.1), 0.079655, 1e-5);
		}


		TEST_METHOD(ProbabilityTestMethod2)
		{
			Assert::AreEqual(prob_integr(1.0), 0.682689, 1e-5);
		}


		TEST_METHOD(ProbabilityTestMethod3)
		{
			Assert::AreEqual(prob_integr(4.0), 0.999937, 1e-5);
		}


		TEST_METHOD(ProbabilityTestMethod4)
		{
			Assert::AreEqual(prob_integr(0.5), 0.382925, 1e-5);
		}


		TEST_METHOD(ProbabilityTestMethod5)
		{
			Assert::AreEqual(prob_integr(0.01), 0.007978, 1e-5);
		}
	};



	TEST_CLASS(FuncTest)
	{
	public:

		TEST_METHOD(FuncTestMethod1)
		{
			Assert::AreEqual(func(0), 1.0);
		}


		TEST_METHOD(FuncTestMethod2)
		{
			Assert::AreEqual(func(1), 1.65289, 1e-5);
		}


		TEST_METHOD(FuncTestMethod3)
		{
			Assert::AreEqual(func(2), 1.81335, 1e-5);
		}


		TEST_METHOD(FuncTestMethod4)
		{
			Assert::AreEqual(func(5), 1.85013, 1e-5);
		}


		TEST_METHOD(FuncTestMethod5)
		{
			Assert::AreEqual(func(10), 1.85025, 1e-5);
		}


		TEST_METHOD(FuncTestMethod6)
		{
			Assert::AreEqual(func(100), 1.85025, 1e-5);
		}
	};
}



