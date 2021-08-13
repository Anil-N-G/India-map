#include <stdio.h>

int main()
{
     int a=10 , b=0, c=10 ;
 
    // The encoded string after removing first 31 characters
    char* str = "TFy!QJu ROo TNn(ROo)SLq SLq ULo+UHs UJq TNn*RPn/QPbEWS_JSW"
                "QAIJO^NBELPeHBFHT}TnALVlBLOFAkHFOuFETpHCStHAUFAgcEAelclcn"
                "^r^r\\tZvYxXyT|S~Pn SPm SOn TNn ULo0ULo#ULo-WHq!WFs XDt!";
 
    // individual characters of str determine how many spaces or
    // exclamation marks to draw consecutively
 
    a = str[b];
    while (a != 0) {
        a = str[b];
        b++;
        while (a > 64)
        {
            a--;
            ++c;
           if (c==90) {       //'Z' == 90
    c = 10;        //Note: 10 == '\n'
    putchar('\n');
}
else {
    if (b % 2 == 0){
        putchar('-');
    }
    else
        putchar(' ');
     }
        }
    }
 
    return 0;
}
