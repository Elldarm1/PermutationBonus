#include <stdio.h>
#include <stdlib.h>
//this function will swap the positions of the letters
void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}
//recusive permute function
// l represents the lowest index
// h represents the highest index
void permutation(char s[], int l, int h)
{
    int i;
    //this is the base case
    //if the lowest index is equal to the lowest index just print the string
    if (l == h)
    {
        printf("%s\n", s);
    }
    else
    {
        //loop through the string
        for (i = l; i <= h; i++)
        {
            //swap the letters, permute, swap again
            swap(&s[l], &s[i]);
            permutation(s, l + 1, h);
            swap(&s[l], &s[i]);
        }
    }
}
int main()
{
    //I used CAT as the string to permute like in class
    char s[] = "CAT";
    printf("Permutations for %s are: \n", s);
    //using 2 as the high index because cat has 3 letters
    permutation(s, 0, 2);
}