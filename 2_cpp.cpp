#include <iostream>
#include <cmath>
using namespace std;
void momentum();
void py();
int main()
{
    int choice = 0;
    bool i = false;
    while(i == false)
    {
        cout << "1.Find Momentum\n2.Pythagorean theorem\n3.Quit\nYour Choice: ";
        cin >> choice;
            switch(choice)
            {
                case 1:
                {
                    momentum();
                    break;
                }
                case 2:
                {
                    py();
                    break;
                }
                case 3:
                {
                    i = true;
                    break;
                }
                default:
                {
                    cout << "Invalid input, try again!" << endl;
                    break;
                }
            }
    }
    char quit = cin.get();
    return 0;
}
void momentum()
{
    double mass = 0, vel = 0;
    cout << "\nMass of the object: ";
    cin >> mass;
    cout << "\nVelocity: ";
    cin >> vel;
    cout << "\nThe momentum is " << vel * mass << endl;
}
void py()
{
    double a = 0, b = 0, c = 0;
    cout << "\nSide A: ";
    cin >> a;
    cout << "\nSide B: ";
    cin >> b;
    c = (a*a) + (b*b);
    c = sqrt(a);
    cout << "\nC is " << c << endl;
}
