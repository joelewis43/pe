#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int test1 = 0;
    int test2 = 0;

    int flag = 0;

    for (int a=1; a<=1000; a++) {

        for (int b=1; b<=1000; b++) {

            for (int c=1; c<=1000; c++) {
    
                test1 = pow(a,2) + pow(b,2);
                test2 = pow(c,2);

                if (test1 == test2) {

                    if (a+b+c == 1000) { flag = c; break; }

                }
            }
            if (flag) { flag*=b; break;}
        }
        if (flag) { flag*=a; break;}
    }

    cout << flag << endl;


    //Everything is OK!
    return 0;
}
