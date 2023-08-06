#include "function.h"

// myMemset function implement

void *myMemset(void *start, unsigned char c, int size)
{
    if (NULL == start)
    {
        printf("ERROR : NULL POINTER \n");
    }
    else
    {
        unsigned char *tempStr = start;
        while (size--)
        {
            *tempStr++ = c;
        }
    }
    return start;
}

// myMemcpy function implementation

void *myMemcpy(void *destAddress, const void *startAddress, int size)
{
    if (NULL == destAddress || NULL == startAddress)
    {
        printf("ERROR : NULL POINTER \n");
    }
    else
    {
        unsigned char *tempDestAddress = destAddress;
        unsigned char *tempStartAddress = startAddress;
        while (size--)
        {
            *tempDestAddress++ = *tempStartAddress++;
        }
    }
    return destAddress;
}

// myMemcmp function implementation

int myMemcmp(const void *start1, const void *start2, int size)
{
    if (NULL == start1 || NULL == start2)
    {
        printf("ERROR : NULL POINTER \n");
    }
    else
    {
        unsigned char *tempStart1 = start1;
        unsigned char *tempStart2 = start2;
        int returnValue = 0;
        while (size--)
        {
            if (tempStart1 == tempStart2)
            {
                return 0;
                break;
            }
            else
            {
                if (*tempStart1 > *tempStart2)
                {
                    returnValue = 1;
                     break;
                }
                else if (*tempStart2 > *tempStart1)
                {
                    returnValue = -1;
                    break;
                }

                else
                {
                    returnValue = 0;
                }
            }
            *tempStart1++;
            *tempStart2++;
        }
        return returnValue;
    }
}

// myMemchr function implementation

void *myMemchr(const void *start, unsigned char ch, int size)
{
    unsigned char *tempEnd = NULL;
    if (NULL == start)
    {
        printf("ERROR : NULL POINTER \n");
    }
    else
    {
        unsigned char *tempstart = start;

        while (size--)
        {
            if (*tempstart == ch)
            {
                tempEnd = tempstart;
                break;
            }
            tempstart++;
        }
    }
    return tempEnd;
}

// myMemove function implementation

void *myMemove(void *str1, const void *str2, int size)
{
    if (NULL == str1 || NULL == str2)
    {
        printf("ERROR : NULL POINTER \n");
    }
    else
    {
        unsigned char *tempStr1 = str1;
        unsigned char *tempStr2 = str2;
        while (size--)
        {
            *tempStr1++ = *tempStr2++;
        }
    }
    return str1;
}


// myStrcat function implementation

char *myStrcat(char *dest, const char *str)
{
    if (NULL == str || NULL == dest)
    {
        printf("ERROR : NULL POINTER \n");
    }
    else
    {
        int i = 0;
        int j = 0;
        for (i = 0; dest[i] != '\0'; i++)
            ;
        for (j = 0; str[j] != '\0'; j++)
        {
            dest[i + j] = str[j];
        }
        dest[j + i] = '\0';
    }
    return dest;
}


// myStrncat function implementation

char *myStrncat(char *dest, const char *str, int begin)
{
    if (NULL == str)
    {
        printf("ERROR : NULL POINTER \n");
    }
    else
    {

        int i = 0;
        int j = 0;
        for (i = 0; i<begin; i++);

        for (j = 0; j < str[j]!='\0'; j++)
        {
            dest[i + j] = str[j];
        }
        dest[j + i] = '\0';
    }
    return dest;
}


// myStrchr function implementation

char *myStrchr(const char *str, char c)
{
    if (NULL == str)
    {
        printf("ERROR : NULL POINTER \n");
    }
    else
    {
        int i = 0;
        while (str[i] != '\0')
        {

            if (*str == c)
            {
                return str;
                break;
            }
            i++;
            str++;
        }
    }
    return NULL;
}


//myStrcmp function implementation

int myStrcmp(const char *str1, const char *str2)
{
    if (NULL == str1 || NULL == str2)
    {
        printf("ERROR : NULL POINTER \n");
    }
    else
    {
        int value = 0;
        int i = 0;
        while (str1[i] != '\0')
        {

            if (*str1 == *str2)
            {
                value = 0;
            }
            else if (*str1 > *str2)
            {
                value = 1;
                break;
            }
            else
            {
                value = -1;
                break;
            }
            i++;
            str1++;
            str2++;
        }
        return value;
    }
}


//myStrncmp function implementation


int myStrncmp(const char *str1, const char *str2, int size)
{
    if (NULL == str1 || NULL == str2)
    {
        printf("ERROR : NULL POINTER \n");
    }
    else
    {
        int value = 0;
        int i = 0;
        while (size--)
        {

            if (*str1 == *str2)
            {
                value = 0;
            }
            else if (*str1 > *str2)
            {
                value = 1;
                break;
            }
            else
            {
                value = -1;
                break;
            }
            i++;
            str1++;
            str2++;
        }
        return value;
    }
}

//myStrcpy function implementation

char *myStrcpy(char *dest, const char *str)
{
    if (NULL == str || NULL == dest)
    {
        printf("ERROR : NULL POINTER \n");
    }
    else
    {
        char *tempDest=dest;
        char *tempStr=str;
        while (*tempStr != '\0')
        {
            *tempDest++=*tempStr++;
        }
        *tempDest='\0';

    }
    return dest;
}


//myStrncpy function implementation


char *myStrncpy(char *dest, const char *str, int size)
{
    if (NULL == str || NULL == dest)
    {
        printf("ERROR : NULL POINTER \n");
    }
    else
    {
        char *tempDest=dest;
        char *tempStr=str;
        while (size--)
        {
            *tempDest++=*tempStr++;
        }
        *tempDest='\0';

    }
    return dest;
}

//myStrcspn function implementation

int myStrcspn(const char *str1, const char *str2)
{
    if (NULL == str1 || NULL == str2)
    {
        printf("ERROR : NULL POINTER \n");
    }
    else
    {
        char *tempStr1 = str1;
        char *tempStr2 = str2;
        int i = 0;
        int j = 0;
        int length = myStrlen(str1);
        for (i = 0; tempStr1[i] != '\0'; i++)
        {

            for (j = 0; tempStr2[j] != '\0'; j++)
            {
                if (tempStr1[i] == tempStr2[j])
                {
                    length = i;
                }
            }
        }
        return length;
    }
}

//myStrlen function implementation

int myStrlen(const char *str)
{
    if (NULL == str)
    {
        printf("ERROR : NULL POINTER \n");
    }
    else
    {
        int i = 0;
        for (i = 0; str[i] != '\0'; i++);

        return i;
    }
}


//myStrpbrk function implementation


char *myStrpbrk(const char *str1, const char *str2)
{
    if (NULL == str1 || NULL == str2)
    {
        printf("ERROR : NULL POINTER \n");
    }
    else
    {
        int i = 0;
        int j = 0;
        char *x=NULL;
        for (i = 0; str1[i] != '\0'; i++)
        {
            for (j = 0; str2[j] != '\0'; j++)
            {
                if(str1[i]==str2[j]){
                    x=&str1[i];
                }
            }
        }
        return x;
    }
}



//myStrrchr function implementation


char *myStrrchr(const char *str, int c)
{
    if (NULL == str)
    {
        printf("ERROR : NULL POINTER \n");
    }
    else
    {
        int i = 0;
        char *tempStr = str;

        for (i = 0; str[i] != '\0'; i++)
        {
            if (str[i] ==c)
            {
                tempStr= str+i;
            }
        }


        return tempStr;
    }
}


//myStrspn function implementation

int myStrspn(const char *str1, const char *str2)
{
    if (NULL == str1 || NULL == str2)
    {
        printf("ERROR : NULL POINTER \n");
    }
    else
    {
        int i = 0;
        int counter=0;
        for (i = 0; str2[i] != '\0'; i++)
        {
            if (str1[i] ==str2[i])
            {
                counter++;
            }
        }

        return counter;
    }
}

//myStrstr function implementation


char *myStrstr(const char *haystack, const char *needle)
{
    if (NULL == haystack || NULL == needle)
    {
        printf("ERROR : NULL POINTER \n");
    }
    else
    {
        int i = 0;
        int j = 0;
        int flag = 1;
        char *returnValue = NULL;
        for (i = 0; haystack[i] != '\0'; i++)
        {
            for (j = 0; needle[j] != '\0'; j++)
            {
                if (haystack[i + j] == needle[j] && (flag == 1))
                {
                    returnValue = needle;
                }
                else
                {
                    flag = 0;
                    returnValue = NULL;
                }
            }
            flag = 1;
            if (returnValue == needle)
            {
                break;
            }
        }
        return returnValue;
    }
}

//myStrxfrm function implementation

int myStrxfrm(char *dest, const char *src, int n)
{
    if (NULL == dest || NULL == src)
    {
        printf("NULL POINTER ERROR |n");
    }
    else
    {
        char *tempDest = dest;
        if (n == 0)
        {
            dest = NULL;
        }
        else
        {
            while (n--)
            {
                *tempDest++ = *src++;
            }
            *tempDest = '\0';
        }
        return myStrlen(dest);
    }
}



