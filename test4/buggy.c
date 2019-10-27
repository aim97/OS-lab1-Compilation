#include <stdio.h>
// compile with -g flag to enable the debugger
struct Data
{
    int x;
};

int main(int argc, char *argv[])
{
    struct Data *p = NULL;
    printf("%d\n", p->x);
    return 0;
}