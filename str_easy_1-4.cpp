#include <iostream>
#include <string>
#include "str_easy.h"

using namespace std;

string itc_hello_str(string name){

    return "Hello, " + name;

}

long long itc_len(string str){

    int  n = 0;
    for(int i = 0 ;str[i] != '\0'; i++){

        n++;

    }
    return n;

}

void itc_print_copy_str(string str, int number){

    for(int i = 0; i < number; i++){

        cout << str << endl;

    }
}

void itc_first_end_three(string str){

    int len = itc_len(str);
    string n;
    if(len > 5){

        for(int i = 0; i < 3; i ++){

            n = str[i];
            cout << n;

        }

    }
    else{

        n = str[0];
        while (len != 0){

            len -= 1;
            cout << n << endl;

        }

    }

}
