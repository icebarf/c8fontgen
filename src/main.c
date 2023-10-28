
#include "Chip8FontGenerator.h"

enum
{
  DISPW = 780,
  DISPH = 580,
};

int
main(int argc, char* argv[])
{
  GuiChip8FontGeneratorState window_layout = InitGuiChip8FontGenerator();
  InitWindow(DISPW, DISPH, "Chip-8 Font Generator");
  SetTargetFPS(60);

  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(GetColor(GuiGetStyle(DEFAULT, BACKGROUND_COLOR)));
    GuiChip8FontGenerator(&window_layout);
    EndDrawing();
  }
}
