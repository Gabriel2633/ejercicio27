#include <iostream>
#include <fstream>

using namespace std;

int main()
{

float matrizV[101][101],matrizN[101][101];

for(int i=0;i<=101;i++)
{
    for(int j=0;j<=101;j++)
{
    matrizV[i][j]=0.0;
    if(i>20 && i<81 && j==60)
    {
        matrizV[i][j]=100.0;
    }
    if(i>20 && i<81 && j==40)
    {
        matrizV[i][j]= -100.0;
    }
}
}
    
    
    
    
    
    
for(int i=0;i<=101;i++)
{
    for(int j=0;j<=101;j++)
{
    matrizV[i][j]=0.25(matrizN[i+1][j]+matrizN[i-1][j]+matrizN[i][j+1]+matrizN[i][j-1]
        
    if(i==0 || i==(tamano+1))
    {
        matrizN[i][j]=0.0;
    }
     else if(j==0 || j==(tamano+1))
    {
        matrizN[i][j]=0.0;
    }
    else if(i>20 && i<81 && j==60)
    {
        matrizN[i][j]=100.0;
    }
    else if(i>20 && i<81 && j==40)
    {
        matrizN[i][j]= -100.0;
    }
}
}
    
    
    
    

    
    
    
    
}
