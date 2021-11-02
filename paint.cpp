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
        randomnumx=rand()%10000000;
    if((randomnumx<1600)&&(randomnumx>100)){
break;
} }
        }
int main()
{
int gd=DETECT,gm,color;
initgraph(&gd,&gd,"");
DWORD screenWidth = GetSystemMetrics(SM_CXSCREEN);
    DWORD screenHeight = GetSystemMetrics(SM_CYSCREEN);
    initwindow(screenWidth,screenHeight,"");

int posX=100,speed=10;
int score=0;
setcolor(RED);
random();
 char a[10];
 settextstyle(8,0,5);
 int maxx=getmaxx(),maxy=getmaxx()-700;
 char b[10];

 readimagefile("factory.jpeg",3,3,247,247);
 for(;;){

 outtextxy(maxx/2-450,maxy/2,"PRESS LEFT BUTTON TO START THE GAME");
 if(GetAsyncKeyState(VK_LBUTTON )){
        rectangle(maxx/2-30,maxy/2+60,maxx/2+30,maxy/2+70);
        for(int i=maxx/2-30;i<maxx/2+30;i++){
            bar(maxx/2-30,maxy/2+60,i,maxy/2+70);
            delay(5);
outtextxy(maxx/2-95,maxy/2+100,"LOADING");
        }
    break;
 }
 else{
//    for(int i=0;i<600)
 }

 }
while(1){
sprintf(a,"SCORE=%d",score);
outtextxy(getmaxx()/2,6,a);

circle(randomnumx,100,30);

bar(25+posX,700,44+posX,800);

 if(GetAsyncKeyState(VK_LBUTTON )){
        for(int i=0;i<710;i+=10){
    bar(20+posX,700-i,30+posX,710-i);
//--obj
circle(randomnumx,100,30);
outtextxy(getmaxx()/2,6,a);
delay(5);
cleardevice();

if((20+posX)<(randomnumx+30)&&(20+posX)>(randomnumx-30)&&(130>700-i)&&(70<700-i)){
        score++;

 random();

        cleardevice();

bar(25+posX,700,44+posX,800);

cout<<score;
        break;

}

bar(26+posX,700,44+posX,800);
 }
 }


bar(26+posX,700,44+posX,800);

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
