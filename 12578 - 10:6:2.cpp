#include <iostream>
using namespace std;
int main()
{
    size_t n{0};
    cin>>n;
    for (size_t i = 0; i < n; ++i) {
        short int len;
        cin>>len;
        double green_area{0.00},red_area{0.00},l{0.00};
        l=(double) len*.6;
        green_area=l;
        green_area=(double)len*green_area;
        red_area=(double)len/5;
        red_area*=red_area;
        red_area*=3.1415926535897932384626433832795;
        green_area-=red_area;
        printf("%.2f %.2f",red_area,green_area);
    }
    return 0;
}
