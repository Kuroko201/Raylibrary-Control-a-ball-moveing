#include <iostream>
#include <raylib.h>

using namespace std;

int windowHeight = 800;
int windowWidth = 800;
int ballX = windowHeight/2;
int ballY = windowWidth/2;
int radius = 50;

int main() {

    InitWindow(windowHeight, windowWidth, "FirstRayLib");
    SetTargetFPS(60);

    while (WindowShouldClose() == false) {
        
        if (IsKeyDown(KEY_LEFT)) {
            ballX -= 5;
        }
        
        if (IsKeyDown(KEY_RIGHT)) {
            ballX += 5;
        }

        if (IsKeyDown(KEY_UP)) {
            ballY -= 5;
        }

        if (IsKeyDown(KEY_DOWN)) {
            ballY += 5;
        }

        if (ballX >= windowWidth - radius){
            ballX = 800 - radius;
        }

        if (ballX <= 0 + radius) {
            ballX = 0 + radius;
        }

        if (ballY >= windowHeight - radius) {
            ballY = 800 - radius;
        }

        if (ballY <= 0 + radius) {
            ballY = 0 + radius;
        }
        
        BeginDrawing();
        ClearBackground(GREEN);
        DrawCircle(ballX, ballY,radius,WHITE);
        EndDrawing();

    }

    CloseWindow();
    return 0;
}