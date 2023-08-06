
// the include sectiont

#include <stdio.h>
#include <stdlib.h>

// function prototype section

void *myMemset(void *start,unsigned char c,int size );

void *myMemcpy(void *destAddress, const void *startAddress, int size);

int myMemcmp(const void *str1, const void *str2, int size);

void *myMemchr(const void *start, unsigned char ch, int size);

void *myMemove(void *str1, const void *str2, int size);

char *myStrcat(char *dest, const char *str);

char *myStrncat(char *dest, const char *str, int begin);

char *myStrchr(const char *str, char c);

int myStrcmp(const char *str1, const char *str2);

int myStrncmp(const char *str1, const char *str2, int size);

char *myStrcpy(char *dest, const char *str);

char *myStrncpy(char *dest, const char *str, int size);

int myStrcspn(const char *str1, const char *str2);

int myStrlen(const char *str);

char *myStrpbrk(const char *str1, const char *str2);

char *myStrrchr(const char *str, int c);

int myStrspn(const char *str1, const char *str2);

char *myStrstr(const char *haystack, const char *needle);

int myStrxfrm(char *dest, const char *src, int n);

