#include "student.h"
//#include "function.cpp"

int main(void)
{
    int num;
    struct profile p[25];
    struct profile* ptr;
    
    ptr = p;

    menu();
    readfile(ptr, fopen("C:/Users/seung/source/repos/Project4/Project4/profile.csv", "r"));
    search_student(ptr);

    return 0;
}