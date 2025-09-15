#include <iostream>
#include <cmath>

using namespace ::std;

int main(){
    // Формула хорд
    // x = (A*F_b-B*F_a)/(F_b-F_a)

    double A=1, B=2;
    double eps = 0.0001;
    double x;

    do{
        x=(A*(B*B-2)-B*(A*A-2))/((B*B-2)-(A*A-2));
        if (fabs(x*x-2) < eps){
            break;
        }
        if ((A*A-2)*(x*x-2) < 0){
            B=x;
        }
        else{
            A=x;
        }
    } while (fabs(B-A) >= eps);
    cout << x;
    return 0;
}
