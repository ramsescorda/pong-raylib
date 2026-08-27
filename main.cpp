#include <iostream>
#include <raylib.h>
#include <chrono>
#include <thread>

using namespace std;

int main() {


    // loading screen
        // 1. PROSES LOADING DI TERMINAL (Window Raylib belum aktif)

        std::cout << "--- WELCOME TO PONG GAME ---\n";
        std::cout << "Memuat audio...\n";
        std::this_thread::sleep_for(std::chrono::seconds(1)); // Simulasi loading

        std::cout << "Memuat gambar & tekstur...\n";
        std::this_thread::sleep_for(std::chrono::seconds(2)); // Simulasi loading

        std::cout << "Setup selesai! Membuka window game...\n";


        //window dan variabel lainnya
        const int screen_width = 1280;
        const int screen_height = 800;
        InitWindow(screen_width, screen_height, "pong game basic with raylib");
        SetTargetFPS(60);
        Color green = {20, 160, 133, 255};

    // loop
    while (WindowShouldClose() == false)
    {
        BeginDrawing();
        ClearBackground(green);
        DrawCircle(screen_width/2, screen_height/2, 20, WHITE);
        DrawRectangle(10, screen_height/ 2 - 60, 25, 120, WHITE);
        DrawRectangle(screen_width - 35, screen_height/ 2 - 60, 25, 120, WHITE);
        DrawLine(screen_width/2, 0, screen_width/2, screen_height, WHITE);

        EndDrawing();
    }
    


    CloseWindow();
    return 0;
}