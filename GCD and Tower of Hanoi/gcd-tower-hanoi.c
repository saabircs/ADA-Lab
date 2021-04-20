#include <stdio.h> 
void towers(int, char, char, char);

int main()

{

    int n1, n2;
    printf("Please enter two integers: ");
    scanf("%d %d", &n1, &n2);
    printf("G.C.D of %d and %d is %d.\n", n1, n2, hcf(n1, n2));
    
    int num;

    printf("Please enter the enter the number of disks : ");

    scanf("%d", &num);

    printf("The sequence of moves involved in the Tower of Hanoi are :\n");

    towers(num, 'A', 'C', 'B');

    return 0;

}
void towers(int num, char srcpeg, char despeg, char auxpeg)
{
    if (num == 1)

    {
        printf("\n Successfully moved Disk 1 from peg %c to peg %c", srcpeg, despeg);
      return;
    }

    towers(num - 1, srcpeg, auxpeg, despeg);

    printf("\n Successfully moved Disk %d from peg %c to peg %c", num, srcpeg, despeg);

    towers(num - 1, auxpeg, despeg, srcpeg);

}
int hcf(int n1, int n2) {
    if (n2 != 0)
        return hcf(n2, n1 % n2);
    else
        return n1;
}
