#include <iostream>
#include <cmath>
using namespace std;

class Simplecalculator
{
    int a, b;
    int value;

public:
    int set_a(int val);
    int set_b(int val);
    int get_a();
    int get_b();
    int add();
    int minus();
    int product();
    int divide();
    void printValueSimple();
};

class Scientificalculator
{
    float theta;
    float value;

public:
    float set_theta(float);
    float get_theta();
    float sinTheta();
    float cosTheta();
    float tanTheta();
    float cosecTheta();
    void printValueScientific();
};

class HybridCalculator : public Simplecalculator, public Scientificalculator{};

float Scientificalculator ::set_theta(float val)
{
    theta = val;
}

int Simplecalculator ::set_a(int x)
{
    a = x;
}
int Simplecalculator ::set_b(int y)
{
    b = y;
}
void Simplecalculator ::printValueSimple()
{
    cout << "The Value is : " << value << endl;
}
void Scientificalculator ::printValueScientific()
{
    cout << "The Value is : " << value << endl;
}
float Scientificalculator ::sinTheta()
{
    float result = sin(theta);
    value = result;
}

float Scientificalculator ::cosTheta()
{
    float result = cos(theta);
    value = result;
}

float Scientificalculator ::tanTheta()
{
    float result = tan(theta);
    value = result;
}

float Scientificalculator ::cosecTheta()
{
    float result = asin(theta);
    value = result;
}

int Simplecalculator ::get_a()
{
    return a;
}

int Simplecalculator ::get_b()
{
    return b;
}

int Simplecalculator ::add()
{
    int result = (a + b);
    value = result;
}

int Simplecalculator ::minus()
{
    int result = (a - b);
    value = result;
}

int Simplecalculator ::product()
{
    int result = (a * b);
    value = result;
}

int Simplecalculator ::divide()
{
    int result = (a / b);
    value = result;
}

float Scientificalculator ::get_theta()
{
    return theta;
}

int main(int argc, char const *argv[])
{
    system("cls");
    HybridCalculator hc;
    int choice, caseChoice;
    float setValue;
    do
    {
    mainCode:
        cout << "1. Simple Calculator " << endl
             << "2. Scientific Calculator " << endl
             << "3. Exit " << endl
             << "Enter Choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        case11:
            cout << "1. Addition" << endl
                 << "2. Substraction" << endl
                 << "3. Multiplacation" << endl
                 << "4. Division" << endl
                 << "5. Back" << endl
                 << "Enter Choice : ";
            cin >> caseChoice;
            if (caseChoice <= 0)
            {
                cerr << "Enter Correct Choice..." << endl;
                goto case11;
            }
            else if (caseChoice == 1)
            {
                cout << "Enter First number : ";
                cin >> setValue;
                hc.set_a(setValue);
                cout << "Enter Second number : ";
                cin >> setValue;
                hc.set_b(setValue);
                hc.add();
                hc.printValueSimple();
                goto case11;
            }
            else if (caseChoice == 2)
            {
                cout << "Enter First number : ";
                cin >> setValue;
                hc.set_a(setValue);
                cout << "Enter Second number : ";
                cin >> setValue;
                hc.set_b(setValue);
                hc.minus();
                hc.printValueSimple();
                goto case11;
            }
            else if (caseChoice == 3)
            {
                cout << "Enter First number : ";
                cin >> setValue;
                hc.set_a(setValue);
                cout << "Enter Second number : ";
                cin >> setValue;
                hc.set_b(setValue);
                hc.product();
                hc.printValueSimple();
                goto case11;
            }
            else if (caseChoice == 4)
            {
                cout << "Enter First number : ";
                cin >> setValue;
                hc.set_a(setValue);
                cout << "Enter Second number : ";
                cin >> setValue;
                hc.set_b(setValue);
                hc.divide();
                hc.printValueSimple();
                goto case11;
            }
            else if (caseChoice == 5)
            {
                cout << "Back to Main Menu : " << endl;
                goto mainCode;
            }
            else
            {
                cout << "Enter valid Choice..." << endl;
                goto case11;
            }
            break;

        case 2:
        case22:
            cout << "1. Sin Theta" << endl
                 << "2. Cos Theta" << endl
                 << "3. Tan Theta" << endl
                 << "4. Cosec Theta" << endl
                 << "5. BACK" << endl
                 << "Enter Choice : ";
            cin >> caseChoice;
            if (caseChoice == 1)
            {
                cout << "Enter Theta : ";
                cin >> setValue;
                hc.set_theta(setValue);
                hc.sinTheta();
                hc.printValueScientific();
                goto case22;
            }
            else if (caseChoice == 2)
            {
                cout << "Enter Theta : ";
                cin >> setValue;
                hc.set_theta(setValue);
                hc.cosTheta();
                hc.printValueScientific();
                goto case22;
            }
            else if (caseChoice == 3)
            {
                cout << "Enter Theta : ";
                cin >> setValue;
                hc.set_theta(setValue);
                hc.tanTheta();
                hc.printValueScientific();
                goto case22;
            }
            else if (caseChoice == 4)
            {
                cout << "Enter Theta : ";
                cin >> setValue;
                hc.set_theta(setValue);
                hc.cosecTheta();
                hc.printValueScientific();
                goto case22;
            }
            else if (caseChoice == 5)
            {
                cout << "Back to Main Menu..." << endl;
                goto mainCode;
            }
            else
            {
                cout << "Enter valid Choice..." << endl;
                goto case22;
            }
            break;
        case 3:
            cout << "Exiting the Calculator..." << endl;
            cout << "Copyright Dev_Gosai";
            system("cls");
            exit(0);
            break;
        default:
            cout << "Enter valid Choice..." << endl;
        }

    } while (choice != 3);
    return 0;
}
