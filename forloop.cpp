#include <iostream>
using namespace std;

int main(){
    for(int i = 0; i<10 ;i=i+1){
        if (i==4){
          //  break;
          continue;
        }
        cout<< i <<"\n";
    }
    return 0;
}