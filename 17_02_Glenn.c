Q2.Write a C program to generate Pascal Triangle using array


#include <stdio.h>  
 
void displayPascalsTriangle(int n)

 {  
    int triangle[100][100];  
  
    
    for (int i = 0; i< n; i++) 
{  
        triangle[0][i] = 1;  
    }  
  
   

    for (int i = 1; i< n; i++) {  
        for (int j = 0; j <= i; j++) {  
            if (j == 0 || j == i) {  
                triangle[i][j] = 1;  
            } 
  else 
{  
     triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j];  
            }  
        }  
    }  
  
    
printf("Pascal's Triangle (up to row %d):\n", n);  
    for (int i = 0; i< n; i++) {  
        for (int j = 0; j < n-i-1; j++) 

{  

printf("  "); 

        }  

        for (int j = 0; j <= i; j++) {  
printf("%4d", triangle[i][j]); }
printf("\n");  

    }  
}  
  
int main() {  
    int n = 10;   
displayPascalsTriangle(n); 
  
    return 0;  
}  
