# UVa_codes
Assignment for 1.2 S.P.L.S-2 
#include <iostream>
using namespace std;
int main()
{
    short int caSe{0};
    cin>>caSe;
    for (short int i = 0; i < caSe; ++i) {
        short int time{0};
        cin>>time;
        short int arr[time];
        int sum{0};
        for (short int j = 0; j <time ; ++j) {
            cin>>arr[j];
            sum+=arr[j];
        }
        float ava{0.000};
        ava=(float)sum/time;
        sum=0;
        for (short int j = 0; j <time ; ++j) {
            if(arr[j]>ava)
                sum++;
        }
        ava=(float)sum/time;
        ava*=100;
        printf("%.3f%\n",ava);
    }

    return 0;
}
