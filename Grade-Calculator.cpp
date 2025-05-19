#include<iostream>

using namespace std;

int main(){

    int marks;

    cout << "Enter your marks : ";
    cin >> marks;

    (marks >=90) ? cout << "Your grade is A. " : (marks >=80) ? cout << "Your grade is B. " : (marks >=70) ? cout << "Your grade is C. " : (marks >=60) ? cout << "Your grade is D. " : (marks >=50) ? cout << "Your grade is E. " : cout << "Your grade is F. ";

    switch (marks)
    {
    case 90:
        cout << "Excellent Work ! ";
        break;
    case 80:
        cout << "Well Done ";
        break;
    case 70:
        cout << "Good Job ";
        break;
    case 60:
        cout << "You Passed can do better ";
        break;
    case 50:
        cout << "You Passed but could have done better ";
        break;

    default:
        cout << "Need's Imporvement ";
        break;
    }

    if (marks >=50)
    {
        cout << "You are eligible for next level";
    }else{
        cout << "Please try again next time";
    }

    return 0;
}