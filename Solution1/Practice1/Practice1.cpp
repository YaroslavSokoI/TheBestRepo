#include <iostream>
using namespace std;

void task1() {
    int num1, num2, num3;
    cout << "Input 3 numbers: ";
    cin >> num1 >> num2 >> num3;


    int lastDigit;
    cout << "Input last number in the group list: ";
    cin >> lastDigit;


    if (num1 >= 1 && num1 <= lastDigit) {
        cout << "Number " << num1 << " in interval [1, " << lastDigit << "]" << endl;
    }

    if (num2 >= 1 && num2 <= lastDigit) {
        cout << "Number " << num2 << " in interval [1, " << lastDigit << "]" << endl;
    }

    if (num3 >= 1 && num3 <= lastDigit) {
        cout << "Number " << num3 << " in interval [1, " << lastDigit << "]" << endl;
    }
}

void task2() {
    int num1, num2, num3;
    cout << "Input 3 numbers: ";
    cin >> num1 >> num2 >> num3;

    int orderNumber;
    cout << "Input last number in the group list: ";
    cin >> orderNumber;


    if (orderNumber % 2 == 0) {
        int minNumber = min({num1, num2, num3});
        cout << "Min number: " << minNumber << endl;
    }

    if (orderNumber % 2 != 0) {
        int maxNumber = max({num1, num2, num3});
        cout << "Max number: " << maxNumber << endl;
    }
}

void task3() {
    int n;
    cout << "Inpit amount elements (n): ";
    cin >> n;

    double element = 1;
    double sum = 0;

    for (int i = 0; i < n; ++i) {
        cout << "Element " << i + 1 << ": " << element << endl;
        sum += element;
        element = -element / 2;
    }

    cout << "Suma: " << sum << endl;
}

void task4() {
    int number;
    cout << "Enter a number at least 2: ";
    cin >> number;

    int i = 2;

    while (i <= number) {
        if (number % i == 0) {
            cout << "The smallest natural divisor: " << i << endl;
            break;
        }
        ++i;
    }
}

void task5() {
    int n;
    cout << "Input number: ";
    cin >> n;

    int a = 0, b = 1;

    cout << "Fibonacci sequence: ";
    for (int i = 0; i < n; ++i) {
        cout << a << " ";

        int temp = a;
        a = b;
        b = temp + b;
    }

    cout << endl;
}

void task6() {
    int randomNum = 1 + rand() % 20;
    for (int i = 1; true; i++)
    {
        int guess;
        cout << "Guess a number: ";
        cin >> guess;

        if (guess <= 0 || guess >= 21)
        {
            cout << "Wrong input!" << std::endl;
            i--;
            continue;
        }
        if (guess == randomNum)
        {
            cout << "Correct!" << endl << "You gueesed the number in " << i << " attempt" << (i > 1 ? "s" : "") << "!";
            break;
        }
        else
        {
            cout << "Wrong!";
            if (guess > randomNum)
            {
                cout << endl << " Try a smaller number!" << endl;
            }
            else
            {
                cout << endl << " Try a bigger number!" << endl;
            }
        }
    }
}

int main() {
    task1();
    task2();
    task3();
    task4();
    task5();
    task6();
}