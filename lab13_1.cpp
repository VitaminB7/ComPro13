#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << fixed << setprecision(2);
    cout << "Arithmetic Mean = " << B[0] << endl;
    cout << "Standard Deviation = " << B[1] << endl;
    cout << "Geometric Mean = " << B[2] << endl;
    cout << "Harmonic Mean = " << B[3] << endl;
    cout << "Max = " << B[4] << endl;
    cout << "Min = " << B[5];
    return 0;
}

void stat(const double a[],int N,double b[]){
    double sum=0,Amean=0,SD=0,Gmean=1,Hmean=0,max=0,min=0;

    for(int i=0;i<N;i++){sum+=a[i];}
    Amean =sum/N;
    b[0] = Amean;
    
    for(int i=0;i<N;i++){SD+=pow(a[i]-Amean,2);}
    SD= sqrt(SD/N);
    b[1] = SD;
    
    for(int i=0;i<N;i++){Gmean*=a[i];}
    Gmean = pow(Gmean,1.0/N);
    b[2] = Gmean;
    
    for(int i=0;i<N;i++){Hmean+=(1/a[i]);}
    Hmean = N/Hmean;
    b[3] = Hmean;
    
    max=a[0],min=a[0];
    for(int i=0;i<N;i++){if(max<a[i])max=a[i]; if(min>a[i])min=a[i];}
    b[4]=max;
    b[5]=min;    
    
    
    
    
    
}
