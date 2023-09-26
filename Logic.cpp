
#include "Calculation.hpp"
#include "Logic.hpp"
#include <iostream>


   
void Logic::Choice()
{
    Calculation calculation;
    do {


        std::cout << "Choose an operation:\n";
        std::cout << "+. Add\n";
        std::cout << "-. Subtract\n";
        std::cout << "*. Multiply\n";
        std::cout << "/. Divide\n";
        std::cout << "%. Modulo\n";
        std::cout << "1. Square Root\n";
        std::cout << "2. Cube Root\n";
        std::cout << "3. Power\n";
        std::cout << "4. Trigonometry\n";
        std::cout << "5. Logarithmic\n";
        std::cout << "0. Exit\n";
        std::cout << "Choice: ";
        std::cin >> choice; 
   

        switch (choice) {
        case ADD:
            std::cout << "enter first number = ";
            std::cin >> num1;
            std::cout << "enter second number = ";
            std::cin >> num2;
            result = calculation.Add(num1, num2);
            std::cout << "result = " << result << '\n';
            break;
        case SUBTRACT:
            std::cout << "enter first number = ";
            std::cin >> num1;
            std::cout << "enter second number = ";
            std::cin >> num2;
            result = calculation.Subtract(num1, num2);
            std::cout << "result = " << result << '\n';
            break;
        case MULTIPLY:

            std::cout << "enter first number = ";
            std::cin >> num1;
            std::cout << "enter second number = ";
            std::cin >> num2;
            result = calculation.Multiply(num1, num2);
            std::cout << "result = " << result << '\n';
            break;
        case DIVIDE:

            std::cout << "enter first number = ";
            std::cin >> num1;
            std::cout << "enter second number = ";
            std::cin >> num2;
            if (num2 != 0)
            {
                result = calculation.Divide(num1, num2);
                std::cout << "result = " << result << '\n';
                break;
            }

            else
            {
                std::cout << "cant devide by 0";
                break;
            }
        case MODULO:

            std::cout << "enter first number = ";
            std::cin >> num1;
            std::cout << "enter second number = ";
            std::cin >> num2;
            result = calculation.Modulo(num1, num2);
            std::cout << "result = " << result << '\n';
            break;
        case SQUAREROOT:
            std::cout << "enter the number = ";
            std::cin >> num1;
            result = calculation.SquareRoot(num1);
            std::cout << "the squareroot of" << num1 << " is = " << result << '\n';
            break;
        case CUBEROOT:
            std::cout << "enter the number = ";
            std::cin >> num1;
            result = calculation.SquareRoot(num1);
            std::cout << "the squareroot of" << num1 << " is = " << result << '\n';
            break;
        case POWER:
            std::cout << "enter a number = ";
            std::cin >> num1;
            std::cout << "the power = ";
            std::cin >> num2;
            result = calculation.Power(num1 , num2);
            std::cout << num1 << " to the power of " << num2 << " is " << result << '\n';
            break;

        case TRIGONOMETRI:
            break;
        case LOGARITHMIC:
            std::cout << "notimplemented yet ";
            break;
        case EXIT:
            std::cout << "Exiting the calculator.\n";
            break;
        default:
            std::cout << "Invalid choice. Please choose again.\n";
            break;

        }
    }while (choice != 0);
}