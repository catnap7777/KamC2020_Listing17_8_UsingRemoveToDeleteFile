//
//Listing 17.8 Using the remove() to delete a disk file; page 445

#include <stdio.h>

int main(void)
{
    char filename[80];

    printf("\nEnter the filename to delete: ");
    gets(filename);

    if(remove(filename) == 0)
        printf("The file %s has been deleted.\n", filename);
    else
    {
        printf("File not deleted... does not exist\n\n");
    }
return 0;
}
