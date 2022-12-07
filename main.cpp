#include <iostream>
#include "lib.h"
using namespace std;

int main(){
  char b=0;
    cin>>b;
    if (convert(b)){
        cout<<b<<endl;
    }else{
        cout<<"errore"<<endl;
    }
  return 0;
}
