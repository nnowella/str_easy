#include <iostream>
#include <string>
#include "str_easy.h"

using namespace std;

string itc_cmp_str(string str1, string str2, int num){

    cin >> str1;
    cin >> str2;
    cin >> num;

    string n;
    int len1 = itc_len(str1);
    int len2 = itc_len(str2);

    if(num >= len1 || num < 0 || len2 == 0) {

        return str1;

    }
    for(int i = 0; i < num; i++) {

        n += str1[i];

    }
    for(int i = 0; i < len2 && (num+i) < len1; i++) {

        n += str2[i];

    }
    for(int i = num+len2; i < len1; i++) {

        n += str1[i];

    }
    return n;
}
