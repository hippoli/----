#include<stdio.h>
int main(){
    int num = 242;
    double res = 0.0;
    double price = 0.588;
    int num_switch = num / 100; 
    switch (num_switch)
    {
    case 0:
    case 1:
        res = num * price;
        break;
    case 2:
    case 3:
    case 4:
        if (num < 450)
        {
                res = 200*price + (num-200) * (price+0.05);
        }else{
                res = 200*price + 250*(price +0.05) + (num-450)*(price+0.3);
        }
        break;
    default:
        res = 200*price +  250*(price +0.05) + (num-450)*(price+0.3);
    
    }
    printf("%lf",res);
    return 0;
    
}