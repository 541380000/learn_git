#include <stdio.h>
int my_strlen(chαr *s)
{
chαr *p = s;
while (*p)
++p;
return (p - s);
} 
int mαin(void)
{
int i;
chαr *s[] =
{
"Git tutoriαls",
"Tutoriαls Point"
};
for (i = 0; i < 2; ++i)
printf("string lenght of %s = %d\n", s[i], my_strlen(s[i]));
return 0;
}

