#include <stdio.h>
struct Types
{
        char text;
        int numInt;
        long int numLong;
        long long int numLongLong;
        float numFloat;
}ctnType;
int main(void)
{
        struct Types * ptrStruct = &ctnType;
        printf("Size of a char: %lu byte(s)\n", sizeof(ptrStruct->text));
        printf("Size of a int: %lu byte(s)\n", sizeof(ptrStruct->numInt));
        printf("Size of a long int: %lu byte(s)\n", sizeof(ptrStruct->numLong));
        printf("Size of a long long int: %lu byte(s)\n", sizeof(ptrStruct->numLongLong));
        printf("Size of a float: %lu byte(s)\n", sizeof(ptrStruct->numFloat));
        return 0;
}
