#include <iostream>
#include <cmath>

using namespace std;

void stat(const double[],int,double []);

int main()
{
    double A[] = {1.2,-3.5,6.9,7.8,12.5,-0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[4];
    stat(A,N,B);
    cout << "Average = " << B[0];
    cout << "\nS.D. = " << B[1];
    cout << "\nMax = " << B[2];
    cout << "\nMin = " << B[3];
    return 0;
}

//Write definition of stat() here 
void stat(const double A[],int N,double B[]){
    double sum=0,sasa = 0;
    double max = A[0] , min = A[0] ;
    for(int i=0;i<6;i++) sum += A[i] ;
    B[0] = sum/6 ;

    for (int m=0;m<6;m++){
        sasa += pow(A[m],2);
    }

     B[1] = sqrt((sasa/6)- pow(B[0],2));
     

    for(int j=0;j<6;j++) {
        if(A[j]>max) {
            max = A[j] ;
            B[2] = max;
        }
        if (A[j]<min) {
            min = A[j];
            B[3] = min;
        } 
    }
    
}