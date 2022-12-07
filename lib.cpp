//
// Created by Alessandro Ubertalli on 07/12/2022.
//
#include "lib.h"
bool convert (char &b){
    if (b>=65 && b<=90){
        b +=32;
        return true;
    }else if(b>=97 && b<=122){
        b -= 32;
        return true;
    }
    return false;
}
