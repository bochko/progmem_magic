#include "progmag.h"
#include "stdio.h"

void main(int argc, char** argv);
void carrier_function(char** carrier, const char* str_to_not_disappear);

void main(int argc, char** argv)
{
    char* carrier;
    char* carrier_2;
    carrier_function(&carrier, "Hello World");
    carrier_function(&carrier_2, "Goodbye World");
    printf("String is %s", carrier);

    carrier_function(&carrier, PROGMAG_LTOP("Hello World"));
    carrier_function(&carrier_2, PROGMAG_LTOP("Goodbye World"));
    printf("String is %s", carrier);
}

void carrier_function(char** carrier, const char* str_to_not_disappear)
{
    *carrier = (char*) str_to_not_disappear;
}