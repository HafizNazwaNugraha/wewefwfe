#include<vector>

enum eChoices{
 EXIT = 0,
 ADD = '+',
 SUBTRACT = '-',
 MULTIPLY ='*',
 DIVIDE  ='/',
 MODULO='%',
 SQUAREROOT= '1',
 CUBEROOT= '2',
 POWER ='3',
 TRIGONOMETRI= '4',
 LOGARITHMIC ='5',
};

class Calculation;

class Logic
{
private:
	double num1;
	double num2;
	double result;

	char choice;
public:
	void Choice();

};