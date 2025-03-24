#include <stdio.h>
#include <string.h>

int main()
{
    //declaring a character array ie. a string of max length 100 characters
    char arr[100];
    //taking the input
    printf("Enter a string: ");
    scanf("%s", arr);
    //defining the number of characters in our string for iterations.
    int len = strlen(arr);
    char notRepeated; //storing the non repeated char
    
    //1st loop is to traverse each char and compare it with other chars
    for(int i = 0; i < len; i++)
    {
        int isUnique = 1; // setting the isUnique to true initially.
        for(int j = 0; j < len; j++)
        { //conpares all the elements to one element at a time
            if(i == j)
            {
                continue; //skips the iteration if the indexes are same.
            }
            if(arr[j] == arr[i])
            {
                isUnique = 0; //Setting it to false 0 of the char are repeated.
                break; //hence we jump out of the inner loop.
            }
        }
        if(isUnique)
        {
            notRepeated = arr[i]; // isUnique is true then the char does not repeat
            break;
        }
    }
    
    printf("Not repeated character is: %c", notRepeated);
    return 0;
}