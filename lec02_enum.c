// Example from https://www.programiz.com/c-programming/c-enumeration

#include <stdio.h>

// Count day of week starting from Sunday as Day 1
enum week {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};

// Let's change to counting Monday as Day 1 instead
// enum week {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
// Another day to do it:
// enum week {Sunday = 7, Monday = 0, Tuesday, Wednesday, Thursday, Friday, Saturday};

// note we can also define today variable like this
// enum week {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday} today;

int main()
{
    // creating today variable of enum week type
    enum week today;
    today = Wednesday;
    printf("Day of week: %d",today+1);
    return 0;
}