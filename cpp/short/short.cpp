#include <stdio.h>
int main() {
    short myShort[3] = {32767, 1, 2};
    short myShort2[3] = {32767, 1, 2};
    printf("%ld%s%ld\n", myShort[1], ":", myShort2[1]);
    printf("%d\n", sizeof(myShort));
    short myShort3[3]; 
    myShort3[0] = 7; 
    myShort3[1] = 8; 
    myShort3[2] = 9; 
    sscanf("5", "%hd", &(myShort3[0]));
    printf("%d\n", myShort3[0]);
    printf("%d\n", myShort3[1]);

    return 0;
}
