#include <stdio.h>
#include <stdlib.h>

struct Book
{
    char name[10];
    int price;
}

int main()
{
    struct Book a;    // Single structure variable
    struct Book *ptr; // Pointer of Structure type
    ptr = &a;

    ptr->name = "Dan Brown"; // Accessing Structure Members
    ptr->price = 500;
    struct Book b[10]; // Array of structure variables
    struct Book *p;    // Pointer of Structure type
    p = &b;
    return 0;
}