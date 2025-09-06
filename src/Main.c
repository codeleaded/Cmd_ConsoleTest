#include "C:\Wichtig\System\Static\Library\ConsoleEngine.h"

Vec2 p = {50.0f,50.0f};
Vec2 e = {100.0f,100.0f};

void Setup(AlxWindow* w){

}
void Update(float w->ElapsedTime){
    if(Console_Stroke('W').DOWN){
        p.y -= 50.0f * w->ElapsedTime;
    }
    if(Console_Stroke('S').DOWN){
        p.y += 50.0f * w->ElapsedTime;
    }
    if(Console_Stroke('A').DOWN){
        p.x -= 50.0f * w->ElapsedTime;
    }
    if(Console_Stroke('D').DOWN){
        p.x += 50.0f * w->ElapsedTime;
    }

    e = Console_Mouse();

    Console_Clear(PIXEL_SOLID,FG_BLACK);

    Console_RenderTriangleWire(e,(Vec2){30.0f,30.0f},p,(Pixel){PIXEL_SOLID,FG_YELLOW},1.0f);

    Console_RenderTriangle(e,(Vec2){30.0f,30.0f},p,(Pixel){PIXEL_SOLID,FG_BLUE});
}
void Delete(AlxWindow* w){

}

int main(){
    Console c;
    if(Console_Create(&c,L"GameTest",200,150,8,8,Setup,Update,Delete)){
        Start();
    }
    return 0;
}