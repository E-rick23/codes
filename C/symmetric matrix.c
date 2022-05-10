#include <stdio.h>
#include <stdbool.h>

int main(){
    //Declaring variables.
    int t1, t2;
    bool lever = true;
    //Adquiring the matrix size...
    printf("Enter the number of rows: ");
    scanf("%d", &t1);
    printf("Enter the number of columns: "); 
    scanf("%d", &t2);
    //Adquiring the matrix values...
    printf("Enter the values of the matrix: \n");
    int m[t1][t2];
    for(int i = 0; i < t1; i++)
        for(int j = 0; j < t2; j++)
        {
            scanf("%d", &m[i][j]);
        }
    //Creating a transposed matrix for testing...
    int m2[t2][t2];
    for(int i = 0; i < t1; i++)
        for(int j = 0; j < t2; j++)
        {
            m2[i][j] = m[j][i];
        }
    /* For loops that printed the matrixes for testing:
    for(int i = 0; i < t1; i++)
        for(int j = 0; j < t2; j++)
        {
            printf("%d", m[i][j]);
        }
    printf("\n");
    for(int i = 0; i < t1; i++)
        for(int j = 0; j < t2; j++)
        {
            printf("%d", m2[i][j]);
        }
    */
    /*For loops that compare the original matrix with the
      transposed one to test if the matrices are symmetric */
    for(int i = 0; i < t1; i++)
        for(int j = 0; j < t2; j++)
        {
            if(m[i][j] != m2[i][j])
                lever = false;
        }
    //If-else statement that prints if the matrix is symmetric or not.
    if(lever == true)
        printf("Symmetric Matrix!");
    else if(lever == false)
        printf("The matrix isn't symmetric...");
    return 0;
}