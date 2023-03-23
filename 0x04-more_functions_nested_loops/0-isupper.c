#include "main.h"

/* main - Entry point
 *
 * decription - check for uppercase letters
 * 
 * @c -  input character
 *
 * return 1 when succeful 0 otherwise
 */

int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
