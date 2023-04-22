#include<graphics.h>

int main(){
    int height = GetSystemMetrics(SM_CYSCREEN);
    int width = GetSystemMetrics(SM_CXSCREEN);
    initwindow(width,height,"Name");
    int gd=DETECT,gm;
    initgraph(&gd,&gm,NULL);
    /* Here Start To Write Your Code*/

    line(0,0,600,600);
    getch();
    closegraph(0);
    return 0;
    }