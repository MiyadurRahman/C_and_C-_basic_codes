#include <iostream>
using namespace std;

int main() {
    int score ;
     cout<<"enter your score =";
     cin>>score;
    if (score >= 50) {
        cout << "You passed the exam!" << endl;
        if (score >= 80) {
            cout << "You scored an A!" << endl;
        } else {
            cout << "You did not score an A, but you passed." << endl;
        }
    } else {
        cout << "You failed the exam." << endl;
    }

    return 0;
}
