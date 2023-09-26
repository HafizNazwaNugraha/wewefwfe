#pragma once
class Renderer;

class Calculation
{
private:
	double result;

public:
	double Add(double num1 , double num2);
	double Subtract(double num1 , double num2);
	double Multiply(double num1 , double num2);
	double Divide(double num1 , double num2);
	double Modulo(double num1 , double num2);
	double SquareRoot(double num1);
	double CubeRoot(double num1);
	double Power(double num1 , double num2);
	double Trigonometri(double num1 , double num2);
	double Logaritmic(double num1 , double num2);
	
};