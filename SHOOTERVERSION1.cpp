#include<graphics.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
int randomnumx;
void random(){

    srand(time(0));
for(;;){
        randomnumx=rand()%1000000000;
    if((randomnumx<300)&&(randomnumx>0)){
break;
//randomnumx=20;
} }
        }
int main()
{
int gd=DETECT,gm,color;
initgraph(&gd,&gd,"");


int posX=100,speed=1;
int score=0;



random();

 char a[10];
 settextstyle(8,0,5);
 int maxx=getmaxx(),maxy=getmaxx()-700;
 char b[10];


 for(;;){
settextstyle(4,0,1);
 outtextxy(0,10,"PRESS LEFT BUTTON TO START THE GAME");
 if(GetAsyncKeyState(VK_LBUTTON )){
        rectangle(100,60,200,70);
        for(int i=100;i<200;i++){
            bar(100,60,i,70);
            delay(5);
outtextxy(95,100,"LOADING");
        }
    break;
 }
 }
 settextstyle(3,0,1);
while(1){
sprintf(a,"SCORE=%d",score);
outtextxy(50,10,a);
circle(randomnumx,20,10);

bar(30+posX,180,40+posX,200);

 if(GetAsyncKeyState(VK_LBUTTON )){
        for(int i=0;i<710;i+=10){
    bar(35+posX,180-i,40+posX,190-i);
//--obj
circle(randomnumx,20,10);
outtextxy(50,10,a);
delay(5);
cleardevice();

if((20+posX)<(randomnumx+30)&&(20+posX)>(randomnumx-30)&&(130>700-i)&&(70<700-i)){
        score++;

 random();

        cleardevice();

bar(30+posX,180,40+posX,200);

cout<<score;
        break;

}

bar(30+posX,180,40+posX,200);
 }
 }


bar(30+posX,180,40+posX,200);

if(GetAsyncKeyState(VK_LEFT)){
    posX-=speed;



}
if(GetAsyncKeyState(VK_RIGHT)){
    posX+=speed;


}
delay(5);

cleardevice();
}
getch();
closegraph();
return 0;
}
