#include<stdio.h>
#include<math.h>
void tower(int n, char source, char dest, char temp)
{
    if(n > 0){
        tower(n-1, source, temp, dest);
        printf("\nMove Disc %d from %c to %c", n, source, dest);
        tower(n-1, temp, dest, source);
    }
}
void main()
{
    int n;
    printf("Enter the no of Disc : \n\n");
    scanf("%d",&n);
    printf("The Sequence of moves in the Tower of Hanoi are \n");
    tower(n,'A','B','C');
    printf("\n\n Total No of Moves are : %d \n ",(int)pow(2,n)-1);
}