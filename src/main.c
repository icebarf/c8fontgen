#include "gui_Chip8FontGenerator.h"

enum
{
  DISPW = 910,
  DISPH = 640,
};

int
main(int argc, char* argv[])
{
  GuiChip8FontGeneratorState window_layout = InitGuiChip8FontGenerator();
  InitWindow(DISPW, DISPH, "Chip-8 Font Generator");
  SetTargetFPS(60);
  GuiLoadStyleCyberC8(); // load dark theme by default

  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(GetColor(GuiGetStyle(DEFAULT, BACKGROUND_COLOR)));
    GuiChip8FontGenerator(&window_layout);
    EndDrawing();
  }
}
