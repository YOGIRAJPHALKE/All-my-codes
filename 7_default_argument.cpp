#include <iostream>

using namespace std;

float Calculator(float Marks, float Outof = 100)
{
    float Percentage = ((Marks / Outof) * 100);
    return Percentage;
};

int main()
{

    float Ans = 0.0f;

    Ans = Calculator(86, 110);
    cout << "Percentage :" << Ans << "\n";

    Ans = Calculator(86);
    cout << "Percentage :" << Ans << "\n";

    Ans = Calculator(320, 400);
    cout << "Percentage :" << Ans << "\n";

    return 0;
}