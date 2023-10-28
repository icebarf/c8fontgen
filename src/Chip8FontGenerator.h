/*******************************************************************************************
 *
 *   Chip8FontGenerator v1.0.0 - Generate your own chip8 Fonts
 *
 *   MODULE USAGE:
 *       #define GUI_CHIP8FONTGENERATOR_IMPLEMENTATION
 *       #include "Chip8FontGenerator.h"
 *
 *       INIT: GuiChip8FontGeneratorState state = InitGuiChip8FontGenerator();
 *       DRAW: GuiChip8FontGenerator(&state);
 *
 *   LICENSE: Same as root of repository
 *
 *   Generated with rGuiLayout by raylib technologies
 *   Modified by Amritpal Singh
 **********************************************************************************************/

#include "raylib.h"

// WARNING: raygui implementation is expected to be defined before including
// this header
#undef RAYGUI_IMPLEMENTATION
#include "raygui.h"

#include <string.h> // Required for: strcpy()

#ifndef GUI_CHIP8FONTGENERATOR_H
#define GUI_CHIP8FONTGENERATOR_H

enum LayoutRectangleNames
{
  MainWindowRec,
  PixelEditorBoxRec,
  OutputBoxRec,
  OutputModeBoxRec,
  HexModeButtonRec,
  DecimalModeButtonRec,
  BinaryModeButtonRec,
  GenerateOutputButtonRec,
  OutputTextBoxRec,
};

typedef struct
{
  // Define anchors
  Vector2 OriginAnchor; // ANCHOR ID:1

  // Define controls variables
  bool MainWindowActive; // WindowBox: MainWindow
  bool OutputTextBoxEditMode;
  char OutputTextBoxText[128]; // TextBox: OutputTextBox

  // Define rectangles
  Rectangle layoutRecs[9];

  // Custom state variables (depend on development software)
  // NOTE: This variables should be added manually if required

} GuiChip8FontGeneratorState;

#ifdef __cplusplus
extern "C"
{ // Prevents name mangling of functions
#endif

  //----------------------------------------------------------------------------------
  // Defines and Macros
  //----------------------------------------------------------------------------------
  //...

  //----------------------------------------------------------------------------------
  // Types and Structures Definition
  //----------------------------------------------------------------------------------
  // ...

  //----------------------------------------------------------------------------------
  // Module Functions Declaration
  //----------------------------------------------------------------------------------
  GuiChip8FontGeneratorState InitGuiChip8FontGenerator(void);
  void GuiChip8FontGenerator(GuiChip8FontGeneratorState* state);
  static void HexModeButton();        // Button: HexModeButton logic
  static void DecimalModeButton();    // Button: DecimalModeButton logic
  static void BinaryModeButton();     // Button: BinaryModeButton logic
  static void GenerateOutputButton(); // Button: GenerateOutputButton logic

#ifdef __cplusplus
}
#endif

#endif // GUI_CHIP8FONTGENERATOR_H

/***********************************************************************************
 *
 *   GUI_CHIP8FONTGENERATOR IMPLEMENTATION
 *
 ************************************************************************************/
#if defined(GUI_CHIP8FONTGENERATOR_IMPLEMENTATION)

#include "raygui.h"

//----------------------------------------------------------------------------------
// Global Variables Definition
//----------------------------------------------------------------------------------
//...

//----------------------------------------------------------------------------------
// Internal Module Functions Definition
//----------------------------------------------------------------------------------
//...

//----------------------------------------------------------------------------------
// Module Functions Definition
//----------------------------------------------------------------------------------
GuiChip8FontGeneratorState
InitGuiChip8FontGenerator(void)
{
  GuiChip8FontGeneratorState state = { 0 };

  // Init anchors
  state.OriginAnchor = (Vector2){ 409, 169 }; // ANCHOR ID:1

  // Initilize controls variables
  state.MainWindowActive = true; // WindowBox: MainWindow
  state.OutputTextBoxEditMode = false;
  strcpy(state.OutputTextBoxText, ""); // TextBox: OutputTextBox

  // Init controls rectangles
  state.layoutRecs[0] = (Rectangle){
    state.OriginAnchor.x + 0, state.OriginAnchor.y + 0, 743, 400
  }; // WindowBox: MainWindow
  state.layoutRecs[1] = (Rectangle){
    state.OriginAnchor.x + 24, state.OriginAnchor.y + 47, 433, 326
  }; // GroupBox: PixelEditorBox
  state.layoutRecs[2] = (Rectangle){
    state.OriginAnchor.x + 480, state.OriginAnchor.y + 47, 240, 217
  }; // GroupBox: OutputBox
  state.layoutRecs[3] = (Rectangle){
    state.OriginAnchor.x + 480, state.OriginAnchor.y + 288, 240, 49
  }; // GroupBox: OutputModeBox
  state.layoutRecs[4] = (Rectangle){
    state.OriginAnchor.x + 489, state.OriginAnchor.y + 299, 58, 25
  }; // Button: HexModeButton
  state.layoutRecs[5] = (Rectangle){
    state.OriginAnchor.x + 572, state.OriginAnchor.y + 299, 58, 25
  }; // Button: DecimalModeButton
  state.layoutRecs[6] = (Rectangle){
    state.OriginAnchor.x + 654, state.OriginAnchor.y + 299, 58, 25
  }; // Button: BinaryModeButton
  state.layoutRecs[7] = (Rectangle){
    state.OriginAnchor.x + 538, state.OriginAnchor.y + 351, 120, 24
  }; // Button: GenerateOutputButton
  state.layoutRecs[8] = (Rectangle){
    state.OriginAnchor.x + 503, state.OriginAnchor.y + 71, 193, 169
  }; // TextBox: OutputTextBox

  // Custom variables initialization

  return state;
}
// Button: HexModeButton logic
static void
HexModeButton()
{
  // TODO: Implement control logic
}
// Button: DecimalModeButton logic
static void
DecimalModeButton()
{
  // TODO: Implement control logic
}
// Button: BinaryModeButton logic
static void
BinaryModeButton()
{
  // TODO: Implement control logic
}
// Button: GenerateOutputButton logic
static void
GenerateOutputButton()
{
  // TODO: Implement control logic
}

void
GuiChip8FontGenerator(GuiChip8FontGeneratorState* state)
{
  // Const text
  const char* MainWindowText = "Chip-8 Font Generator"; // WINDOWBOX: MainWindow
  const char* PixelEditorBoxText = "Pixel Editor"; // GROUPBOX: PixelEditorBox
  const char* OutputBoxText = "Output";            // GROUPBOX: OutputBox
  const char* OutputModeBoxText = "Output Mode";   // GROUPBOX: OutputModeBox
  const char* HexModeButtonText = "Hex";           // BUTTON: HexModeButton
  const char* DecimalModeButtonText = "Decimal";   // BUTTON: DecimalModeButton
  const char* BinaryModeButtonText = "Binary";     // BUTTON: BinaryModeButton
  const char* GenerateOutputButtonText =
    "Generate Font"; // BUTTON: GenerateOutputButton

  // Draw controls
  if (state->MainWindowActive) {
    state->MainWindowActive =
      !GuiWindowBox(state->layoutRecs[0], MainWindowText);
    GuiGroupBox(state->layoutRecs[1], PixelEditorBoxText);
    GuiGroupBox(state->layoutRecs[2], OutputBoxText);
    GuiGroupBox(state->layoutRecs[3], OutputModeBoxText);
    if (GuiButton(state->layoutRecs[4], HexModeButtonText))
      HexModeButton();
    if (GuiButton(state->layoutRecs[5], DecimalModeButtonText))
      DecimalModeButton();
    if (GuiButton(state->layoutRecs[6], BinaryModeButtonText))
      BinaryModeButton();
    if (GuiButton(state->layoutRecs[7], GenerateOutputButtonText))
      GenerateOutputButton();
    if (GuiTextBox(state->layoutRecs[8],
                   state->OutputTextBoxText,
                   128,
                   state->OutputTextBoxEditMode))
      state->OutputTextBoxEditMode = !state->OutputTextBoxEditMode;
  }
}

#endif // GUI_CHIP8FONTGENERATOR_IMPLEMENTATION
