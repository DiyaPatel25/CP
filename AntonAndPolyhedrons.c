#include <stdio.h>
#include <string.h>
int main()
{
    char s[13];
    int n;
    unsigned long int sides = 0LU;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%s", s);
        if (!strcmp(s, "Tetrahedron"))
        {
            sides += 4LU;
        }
        else if (!strcmp(s, "Cube"))
        {
            sides += 6LU;
        }
        else if (!strcmp(s, "Octahedron"))
        {
            sides += 8LU;
        }
        else if (!strcmp(s, "Dodecahedron"))
        {
            sides += 12LU;
        }
        else
        {
            sides += 20LU;
        }
    }
    printf("%lu", sides);
    return 0;
}
//strcmp():
// strcmp() is a standard library function used for comparing two strings.
// It returns an integer value that indicates the lexicographic comparison result of the two strings.
// It returns 0 if the strings are equal, a negative value if the first string is lexicographically less than the second string, and a positive value if the first string is lexicographically greater than the second string.



//!strcmp():
// !strcmp() is essentially using the strcmp() function in a Boolean context, where ! is the logical NOT operator.
// It returns true (1) if the strings are equal and false (0) otherwise.