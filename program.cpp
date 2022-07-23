#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

void checker(int i, int j, int a){
    cout<<i<<"-"<<j<<"-"<<a<<endl;
}


int main()
{
    for(int i = 1;i<25;i++){
        for(int j = 1;j<25;j++){
            
           float f = hypot(i, j);
            if(abs(f-int(f))>0)
                cout<<"";
                else
                checker(i, j, f);
        }
    }
    return 0;
}

