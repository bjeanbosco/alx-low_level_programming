#include <stdio.h>

void __attribute__((constructor)) Thishare(void);

/**
 *Thishare - Prints a string before the
 *   main function is executed.
 */
void Thishare(void)
{
printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
}
