#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main(){
int gm=DETECT,gd,i,j;
float x,y,r,a,b;
float p;
initgraph(&gm,&gd,"C:\\TurboC3\\BGI");
printf("Enter The x and y coordinates and radius of circle\n");
scanf("%f %f %f",&a,&b,&r);
x = 0 ; y = r;
putpixel(a,b+r,3);
putpixel(a,b-r,3);
putpixel(a-r,b,3);
putpixel(a+r,b,3);
p=(1)-r;
while(x<=y){
if(p<0){
p+=(2*x)+2;
}
else{
p+=(2*(x-y))+1;
y--;
}
x++;
putpixel(a+x,b+y,3);
putpixel(a-x,b+y,3);
putpixel(a+x,b-y,3);
putpixel(a-x,b-y,3);
//symetry
putpixel(a+y,b+x,3);
putpixel(a+y,b-x,3);
putpixel(a-y,b+x,3);
putpixel(a-y,b-x,3);

delay(20);
}
getch();
closegraph();
}