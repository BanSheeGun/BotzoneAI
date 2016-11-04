#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<algorithm>
using namespace std;

double EXPoint(int time, double point) {
    double ans = 999999;
    if (time > 15) time = 15;
    for (int i = 1; i <= time; ++i)
        ans /= 6;
    ans = ans * point;
    return ans;
}

double f1, f2, i;

int main() {
    f1 = 1; f2 = 1; 
    for (i = 1; i <= 15; ++i) {
        f1 *= 1.236067977;
        f2 *= 3.236067977;
        printf("%lf\n", 45000000 + f1 - f2);
    }    
    return 0;
}