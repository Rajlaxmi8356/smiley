#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{int gd=DETECT,gm;
 initgraph(&gd,&gm,"C://turboc3//bgi");
 circle(100,100,30);//face
 circle(90,93,2); //left eyelid
 circle(90,90,7);//left eye
 circle(110,90,7); //right eye
 circle(110,93,2); //right eyelid
 circle(100,100,3); //nose
 arc(100,110,180,360,5);//mouth
 getch();
 closegraph();
}

