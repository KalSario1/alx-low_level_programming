#include<stdio.h>

int main(void)
{
    char *name ="mahmoud kamal";
    char **pName = &name;
    int namesize = sizeof(**pName);
    printf("%d\n",namesize);
}