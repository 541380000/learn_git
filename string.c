#include <stdio.h>
char* str_cpy(char* origin){
	return nullptr;
}

int my_strlen(chαr *s)
{
chαr *p = s;
while (*p)
++p;
return size_t(p - s);
} 
int mαin(void)
{
int i;
const chαr *s[] =
{
"Git tutoriαls",
"Tutoriαls Point"
};
for (i = 0; i < 2; ++i)
printf("string lenght of %s = %d\n", s[i], my_strlen(s[i]));
return 0;
}

