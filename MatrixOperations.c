#include<stdio.h>
void addition();
void multiplication();
void transpose();
int main(){
    int choice;
    
    printf("\n===== MATRIX OPERATIONS MENU =====\n");
    printf("1. Matrix Addition\n");
    printf("2. Matrix Multiplication\n");
    printf("3. Matrix Transpose\n");
    printf("4. Exit\n");
    printf("Enter Your Choice: ");
    scanf("%d", &choice);
    switch(choice){
        case 1:
        addition();
        break;

        case 2:
        multiplication();
        break;

        case 3:
        transpose();
        break;

        case 4:
        printf("\nPROGRAM TERMINATED.\n");
        break;

        default:
        printf("\n ERROR\n");

    }
    
    return 0;
}
void transpose(){
    int A[10][10];
    int r,c,i,j;
    printf("\n Enter rows and columns: ");
    scanf("%d%d" , &r, &c);
    printf("Enter Matrix:\n");
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            scanf("%d", &A[i][j]);
        }

    }
    printf("\n TRANSPOSE MATRIX:\n");
    for(i=0; i<c; i++){
        for(j=0; j<r; j++){
            printf("%4d", A[j][i]);
        }   
        printf("\n");
        

    }
}
void addition(){
    int A[10][10], B[10][10], C[10][10];
    int r,c,i,j;
    printf("\n Enter rows and columns: ");
    scanf("%d%d" , &r, &c);
    printf("Enter Matrix A:\n");
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter Matrix B:\n");
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            scanf("%d", &B[i][j]);
        }
    }
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            C[i][j]= A[i][j] + B[i][j];
        }
    }
    printf("\nADDITION RESULT;\n");
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            printf("%4d", C[i][j]);
        }   
        printf("\n");
        
    }

}
void multiplication(){
    int A[10][10], B[10][10], C[10][10];
    int r1,c1, r2, c2,i,j, k;
    printf("\n Enter rows and columns of Matrix A: ");
    scanf("%d%d" , &r1, &c1);
    printf("Enter Matrix A:\n");
    for(i=0; i<r1; i++){
        for(j=0; j<c1; j++){
            scanf("%d", &A[i][j]);
        }
    }
    printf("\n Enter rows and columns of Matrix B: ");
    scanf("%d%d" , &r2, &c2);
    if(c1 != r2){
        printf("Multiplication Not Possible\n");
        return;
    }
    printf("Enter Matrix B:\n");
    for(i=0; i<r2; i++){
        for(j=0; j<c2; j++){
            scanf("%d", &B[i][j]);
        }
    }
    for(i=0; i<r1 ; i++){
        for(j=0; j<c2; j++){
            C[i][j]=0;
            for(k=0; k<c1; k++){
                C[i][j]+= A[i][k]*B[k][j];
            }
        }
    }
    printf("\nMULTIPLICATION RESULT;\n");
    for(i=0; i<r1; i++){
        for(j=0; j<c2; j++){
            printf("%4d", C[i][j]);
        }
        printf("\n");
        
    }


}