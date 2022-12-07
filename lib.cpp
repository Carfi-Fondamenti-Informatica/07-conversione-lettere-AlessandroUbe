//
// Created by Alessandro Ubertalli on 07/12/2022.
//
#include "lib.h"
bool convert (char & a){
    if (a>=65 && a<=90){
        a +=32;
        return true;
    }else if(a>=97 && a<=122){
        a -= 32;
        return true;
    }
    return false;
}
