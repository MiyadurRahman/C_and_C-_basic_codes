//key word : case, default, continue, break;

#include <iostream>
    using namespace std;
    int main(){
        int choice;

        cout << "coverrsion menu of temparature." << endl;
        cout << "1.farenheit to celcius" << endl
             << "2. celcius to farenheit" << endl
             << "choise =";
        cin >> choice;
        switch (choice){

            case 1:
{
    float f, c;
    cout << "enter the value in farenheit= ";
    cin >> f;
    c = (f - 32) * 1.8;
    cout << "temp in celsius scale:  " << c;
    break;
}
case 2:
{

    float f, c;
    cout << "enter the value in celsius= ";
    cin >> c;
    f = (1.8 * c) + 32;
    cout << "temp in farenheit scale:  " << f;
    break;
}
default:
{
    cout << "are you dumb type the given number";
}
}
}