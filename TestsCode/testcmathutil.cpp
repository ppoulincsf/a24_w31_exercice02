#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

#include "MathUtil.h"
#include <numbers>
namespace TestsCode
{		
	TEST_CLASS(MathUtil_Tests)
	{
	public:
		TEST_METHOD(sin_cos_Angle0)
		{
			// Arrange
      float angle = 0;

      // Act
      float sin, cos;
      MathUtil::sin_cos(angle, sin, cos);

      // Assert
      Assert::AreEqual(0.0f, sin, 0.0001f);
      Assert::AreEqual(1.0f, cos, 0.0001f);
		}

    TEST_METHOD(sin_cos_AnglePI_4)
    {
      // Arrange
      float angle = (float)std::numbers::pi *0.25f;

      // Act
      float sin, cos;
      MathUtil::sin_cos(angle, sin, cos);

      // Assert
      Assert::AreEqual(sqrtf(2)*0.5f, sin, 0.0001f);
      Assert::AreEqual(sqrtf(2) * 0.5f, cos, 0.0001f);
    }

    TEST_METHOD(sin_cos_AnglePI_3)
    {
      // Arrange
      float angle = (float)std::numbers::pi / 3.0f;

      // Act
      float sin, cos;
      MathUtil::sin_cos(angle, sin, cos);

      // Assert
      Assert::AreEqual(sqrtf(3) * 0.5f, sin, 0.0001f);
      Assert::AreEqual(0.5f, cos, 0.0001f);
    }

    TEST_METHOD(sin_cos_AnglePI_2)
    {
      // Arrange
      float angle = (float)std::numbers::pi / 2.0f;

      // Act
      float sin, cos;
      MathUtil::sin_cos(angle, sin, cos);

      // Assert
      Assert::AreEqual(1.0f, sin, 0.0001f);
      Assert::AreEqual(0.0f, cos, 0.0001f);
    }

	};
}