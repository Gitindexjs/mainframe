#include <iostream>
#include <Windows.h>
#include "mainhead.h"
using namespace std;
class console {
public:
    void log(string message) {
        cout << message << endl;
    };
    void warn(string warn) {
        cout << "WARN: " << warn << endl;
    };
    void error(string error) {
        cout << "ERROR: " << error << endl;
    }
};
int main()
{
    console console;
    SetConsoleTitleA("title this is console. Console is this, thus console = this");
    intagerf(2);
    int age;
    string finalanswer;
    int start[2] = { 0, 0 };
    int end[2] = { 4, 3 };
    float x = end[0] - start[0];
    float y = end[1] - start[1];
    float result = pow(x * x + y * y, 0.5);
    cout << "the answer to " << start[0] << ", " << start[1] << " to " << end[0] << ", " << end[1] << " is " << result << " units" << "\n";
    cout << "Please enter you age" << endl;
    cin >> age;
    cout << "you are " << age << " years old" << endl;
    cin >> finalanswer;
}