#include "Calculation.hpp"
#include <cmath> 



double Calculation::Add(double num1 , double num2)
{
 return	result = num1 + num2;
}

double Calculation::Subtract(double num1 , double num2)
{
	return result = num1 - num2;

}

double Calculation::Multiply(double num1 , double num2)
{
	return result = num1 * num2;
}

double Calculation::Divide(double num1 , double num2)
{
	
return 		result = num1 / num2;
	
}

double Calculation::Modulo(double num1 , double num2)
{
 return	result = static_cast<int>(num1) % static_cast<int>(num2);

}

double Calculation::SquareRoot(double num1)
{
	return result = sqrt(num1);
}

double Calculation::CubeRoot(double num1)
{
return 	result = cbrt(num1);

}

double Calculation::Power(double num1 , double num2)
{
return	result = pow(num1, num2);
}

double Calculation::Trigonometri(double num1 , double num2)
{
		

	return 0;
}

double Calculation::Logaritmic(double num1 , double num2)
{
return 	result = log(num1);
}