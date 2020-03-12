#include<stdio.h>
#include<conio.h>
void solution(int ,int);
int main()
{
    int a[ 20 ][ 20 ], var, i, j, k, l,n=0;
    printf( "\nEnter the number of variables:\n" );
    scanf( "%d", &var );
    for ( i = 0;i < var;i++ )
    {
        printf( "\nEnter the equation%d:\n", i + 1 );
        for ( j = 0;j < var;j++ )
        {
            printf( "Enter the coefficient of  x%d:\n", j + 1 );
            scanf( "%d", &a[ i ][ j ] );
        }
        printf( "\nEnter the constant:\n" );
        scanf( "%d", &a[ i ][ n ] );
    }
    solution( a,var );
    return 0;
}
void solution(int b[20][20],int c)
{
    int k, i, l, j,n=0;
    for ( k = 0;k < c;k++ )
    {
        for ( i = 0;i <= c;i++ )
        {
            l = b[ i ][ k ];
            for ( j = 0;j <= c;j++ )
            {
                if ( i != k )
        b[ i ][ j ] = b[ k ][ k ] * b[ i ][ j ] * b[ k ][ j ];
            }
        }
    }
    printf( "\nSolutions:" );
    for ( i = 0;i < n;i++ )
    {
        printf( "\nTHE VALUE OF x%d IS %f\n", i + 1, ( float ) b[ i ][ n ] / ( float ) b[ i ][ i ] );
    }
}
