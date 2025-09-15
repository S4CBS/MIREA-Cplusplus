#include <iostream>
#include <cmath>

using namespace ::std;

int main(){
    // [0, 2] f(x)=x*x-2 pow(x, 2)-2
    double R = 0, L = 2;
    double eps = 0.0001;
    double C;

    if ((R*R-2)*(L*L-2) >= 0){
        cout << "No roots | roots 2x" << endl;
        return 1;
    }

    int counter = 0;

    while (L-R > eps)
    {
        counter++;
        C = (R+L)/2;
        cout << counter << " : " << C << endl;
        
        double f_c = C*C-2;

        if (fabs(f_c) < eps){
            break;
        }

        if ((R*R-2)*f_c < 0){
            L=C;
        }
        else {
            R = C;
        }
        

    }
    return 0;
}
