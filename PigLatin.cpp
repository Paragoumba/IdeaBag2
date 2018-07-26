#include <string>
#include <iostream>

using std::cout;
using std::cin;
using std::string;

char consonants[] = {'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'z'};

bool array_contains_char(char c){

    int array_length = sizeof(consonants) / sizeof(*consonants);

    for (int i = 0; i < array_length; ++i) {

        if (c == consonants[i]) return true;

    }

    return false;

}

void pigLatin(){

    string line;

    cin >> line;

    //stringstream input_stringstream();

    char first_letter = line.c_str()[0];

    if (array_contains_char(first_letter)) cout << line.substr(1) << first_letter << "ay";

}
