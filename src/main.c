#include "gui_Chip8FontGenerator.h"

#include "lightc8.rgs.h"

enum
{
  DISPW = 800,
  DISPH = 690,
};

int
main(int argc, char* argv[])
{
  GuiChip8FontGeneratorState window_layout = InitGuiChip8FontGenerator();
  InitWindow(DISPW, DISPH, "Chip-8 Font Generator");
  SetTargetFPS(60);
  GuiLoadStyleLightC8();

  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(GetColor(GuiGetStyle(DEFAULT, BACKGROUND_COLOR)));
    GuiChip8FontGenerator(&window_layout);
    EndDrawing();
  }
}
