#include <iostream>
#include <string>
#include "str_easy.h"

using namespace std;

int itc_count_char_in_str(char ch, string str){

    int n = 0;
    for(int i = 0; i < str[i]; i++){

        if(str[i] == ch){

            n++;

        }

    }
    return n ;
}

string itc_even_place(string str) {

    int len = itc_len(str);
    string n;
    for(int i = 1; i < len; i += 2) {

        n += str[i];

    }
    if(itc_len(n) == 0) {

        return "-1";

    } else {

        return n;

    }
}

double itc_percent_lower_uppercase(string str){

    int n1 = 0, n2 = 0;
    int len = itc_len(str);
    if(len == 0) {

        return 0;

    }
    for(int i = 0; i < len; i++) {

        if(isupper(str[i])) {

            n1++;

        } else if(islower(str[i])) {
            n2++;
        }
    }
    return (float)n1/n2*100;


}

string itc_reverse_str(string str){

    int len = itc_len(str);
    string n;
    for(int i = len - 1; i >= 0; i--){

        n += str[i];

    }
    return n;
}

string itc_slice_str(string str, int start, int end){

    int len = itc_len(str);
    string n;

    if(start >= end || start >= len) {

        return str;

    }

    if(end >= len) {

        end = len;

    }
    for(int i = start - 1; i <= end - 1; i++) {

        n += str[i];

    }
    return n;
}

bool itc_equal_reverse(string str){

    if(str == itc_reverse_str(str)){

        return true;

    }
    else{

        return false;

    }
}
