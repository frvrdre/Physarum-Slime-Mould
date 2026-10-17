#include "raylib.h"
#include <cmath>
#include <vector>

struct Slimes
{
    float x;
    float y;
    float angle;
};

int main()
{
    const int screenWidth = 800;
    const int screenHeight = 600;

    const float speed = 120.0f;
    const float radius = 5.0f;

    InitWindow(screenWidth, screenHeight, "Physarum Simulation");
    SetTargetFPS(60);

    // Create multiple independent agents
    std::vector<Slimes> slimes{
        {400.0f, 300.0f, 0.0f},
        {200.0f, 150.0f, PI / 4.0f},
        {600.0f, 400.0f, PI},
        {300.0f, 500.0f, PI / 2.0f}};

    while (!WindowShouldClose())
    {
        const float deltaTime = GetFrameTime();

        // Update every agent
        for (Slimes &slime : slimes)
        {
            slime.x += std::cos(slime.angle) * speed * deltaTime;
            slime.y += std::sin(slime.angle) * speed * deltaTime;

            // Left wall
            if (slime.x < radius)
            {
                slime.x = radius;
                slime.angle = PI - slime.angle;
            }

            // Right wall
            else if (slime.x > screenWidth - radius)
            {
                slime.x = screenWidth - radius;
                slime.angle = PI - slime.angle;
            }

            // Top wall
            if (slime.y < radius)
            {
                slime.y = radius;
                slime.angle = -slime.angle;
            }

            // Bottom wall
            else if (slime.y > screenHeight - radius)
            {
                slime.y = screenHeight - radius;
                slime.angle = -slime.angle;
            }
        }

        // Draw every agent
        BeginDrawing();
        ClearBackground(BLACK);

        for (const Slimes &slime : slimes)
        {
            Vector2 position{slime.x, slime.y};
            DrawCircleV(position, radius, YELLOW);
        }

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
