#include <stdio.h>

int main(){
    float val, con;
    char unit;
    printf("Please enter degrees (example 18C or 50F):");
    scanf("%f%c",&val,&unit);

    if( unit == 'c' || unit == 'C'){
        con = val * 1.8 +32;
        printf("%f degrees Celcius = %f degrees Fahrenheit", val, con);
    }
    if( unit == 'F' || unit == 'f'){
        con = (val-32) / 1.8;
        printf("%f degrees Fahrenheit = %f degrees Celcius", val, con);
    }
    return 0;
}