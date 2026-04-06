//kevin siby
//photonics
//25020096
// to find area and perimeter using function
#include<stdio.h>
#include<math.h>
#define pi 3.14
float X1,X2,Y1,Y2,D,R;
void radius();
void area();
void perimeter();
int main()
{
    radius();
    area();
    perimeter();
    return 0;
}
void radius()
{
    printf("Enter the coordinates:\n");
    scanf("%f %f %f %f",&X1,&Y1,&X2,&Y2);
    D=sqrt(pow(X2-X1,2)+pow(Y2-Y1,2));
    R=D/2;
    printf("diameter is %f",D);
    printf("\nRadius is %f",R);
    printf("\nRadius after typecasting is %d",(int)R);
}
void area()
{
    float area=pi*pow(R,2);
    printf("\nArea of circle is %f",area);
}
void perimeter()
{
    int p;
    float perimeter=2*pi*R;
    printf("\nPerimeter of circle is %f",perimeter);
}
