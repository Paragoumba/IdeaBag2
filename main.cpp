#include <iostream>
#include <limits>
#include "programs.h"

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main() {

    calculatePi();

}

void fizzBuzz(){

    for (int i = 1; i < 101; ++i) {

        bool b = false;

        if (i % 3 == 0){

            cout << "Fizz";
            b = true;

        }

        if (i % 5 == 0){

            cout << "Buzz";
            b = true;

        }

        if (!b) cout << i;

        cout << endl;

    }
}

void palindromeChecker(){

    string line;

    cin >> line;

    int len = line.size();

    if (len % 2 != 0) {

        auto n = static_cast<unsigned int>((len - 1) / 2);
        auto firstChars = const_cast<char *>(line.substr(0, n).c_str());
        auto lastChars = const_cast<char *>(line.substr(static_cast<unsigned int>((len + 1) / 2)).c_str());

        for (int i = 0; i < n; ++i){

            if (firstChars[n - i - 1] != lastChars[i]){

                cout << line << " isn't a palindrome.";
                return;

            }
        }

        cout << line << " is a palindrome !";
        return;

    }

    cout << line << " isn't a palindrome.";

}

void calculatePi(){

    typedef std::numeric_limits<double> dbl;

    cout.precision(dbl::max_digits10);

    double pi = 3;
    int sign = 1;
    int iterations;
    cin >> iterations;

    iterations *= 2;
    iterations++;

    for (int i = 2; i < iterations;) {

        double sum = i * (i + 1) * (i + 2);
        double n = 4.0 / sum;

        pi += sign * n;
        sign *= -1;
        i += 2;

        cout << i / 2 << ": " << pi << " - " << sum << " | " << n << endl;

    }
}

void calculateE(){

    int iterations;

    cin >> iterations;

    double e = 0;

    for (int i = 0; i < iterations; ++i) {

        e += 1.0 / fact(i);

        cout << e << endl;

    }
}

double fact(double d){

    return d > 1 ? d * fact(d - 1) : 1.0;

}