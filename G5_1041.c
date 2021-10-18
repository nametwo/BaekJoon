#include <stdio.h>

int main(void) {

    int n, i;
    long long result =0;
    int dice[6] = { 0, };
    long long th= 100000000;
    long long two=100000000;
    long long one=100000000;

    scanf("%d", &n);
    
    for (i = 0; i < 6; i++)
        scanf("%d", &dice[i]);

    if (n == 1) {
        one = 0;
        for (i = 0; i < 6; i++) {
            if (dice[i] > one) {
                one = dice[i];
            }
        }

        for (i = 0; i < 6; i++) {
            result += dice[i];
        }
        result -= one;

    }
    else {
        if (dice[0] + dice[2] + dice[1] <= dice[0] + dice[2] + dice[4])
            th = dice[0] + dice[2] + dice[1];
        else
            th = dice[0] + dice[2] + dice[4];

        if (dice[0] + dice[1] + dice[3] < th)
            th = dice[0] + dice[1] + dice[3];

        if (dice[0] + dice[3] + dice[4] < th)
            th = dice[0] + dice[3] + dice[4];

        if (dice[1] + dice[5] + dice[3] < th)
            th = dice[1] + dice[5] + dice[3];

        if (dice[1] + dice[5] + dice[2] < th)
            th = dice[1] + dice[5] + dice[2];

        if (dice[5] + dice[4] + dice[3] < th)
            th = dice[5] + dice[4] + dice[3];
        if (dice[5] + dice[4] + dice[2] < th)
            th = dice[5] + dice[4] + dice[2];

        for (i = 0; i < 6; i++) {
            for (int k = 0; k < 6; k++) {
                if ((i==0&&k==5) || (i==5&&k==0)) { continue; }
                else if ((i == 4 && k == 1) || (i == 1 && k == 4)) { continue; }
                else if ((i == 3 && k == 2) || (i == 2 && k == 3)) { continue; }
                else if( i == k) { continue; }
                else{
                    if (dice[i] + dice[k] < two) {
                        two = dice[i] + dice[k];
                    }
                }
            }
        }

        for (i = 0; i < 6; i++) {
            if (dice[i] < one) {
                one = dice[i];
            }
        }

        result = th * 4 + two * (n - 2) * 4 + two * (n - 1) * 4 + one * (n - 2) * (n - 2) + one * (n - 1) * (n - 2) * 4;
    }

    printf("%lld", result);
}
