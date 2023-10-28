/*******************************************************************************************
 *
 *   Chip8FontGenerator v1.0.0 - Generate Custom Chip8 Fonts
 *
 *   MODULE USAGE:
 *       #define GUI_CHIP8FONTGENERATOR_IMPLEMENTATION
 *       #include "Chip8FontGenerator.h"
 *
 *       INIT: GuiChip8FontGeneratorState state = InitGuiChip8FontGenerator();
 *       DRAW: GuiChip8FontGenerator(&state);
 *
 *   LICENSE: Same as repository root
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

typedef struct
{
  // Define anchors
  Vector2 OriginAnchor; // ANCHOR ID:1

  // Define controls variables
  bool OutputTextBoxEditMode;
  char OutputTextBoxText[128]; // TextBox: OutputTextBox

  // Define rectangles
  Rectangle layoutRecs[24];

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
  state.OriginAnchor = (Vector2){ 0, 0 }; // ANCHOR ID:1

  // Initilize controls variables
  state.OutputTextBoxEditMode = false;
  strcpy(state.OutputTextBoxText, ""); // TextBox: OutputTextBox

  // Init controls rectangles
  state.layoutRecs[0] = (Rectangle){
    state.OriginAnchor.x + 24, state.OriginAnchor.y + 24, 471, 535
  }; // GroupBox: PixelEditorBox
  state.layoutRecs[1] = (Rectangle){
    state.OriginAnchor.x + 504, state.OriginAnchor.y + 24, 239, 263
  }; // GroupBox: OutputBox
  state.layoutRecs[2] = (Rectangle){
    state.OriginAnchor.x + 504, state.OriginAnchor.y + 328, 240, 49
  }; // GroupBox: OutputModeBox
  state.layoutRecs[3] = (Rectangle){
    state.OriginAnchor.x + 512, state.OriginAnchor.y + 344, 58, 25
  }; // Button: HexModeButton
  state.layoutRecs[4] = (Rectangle){
    state.OriginAnchor.x + 592, state.OriginAnchor.y + 344, 58, 25
  }; // Button: DecimalModeButton
  state.layoutRecs[5] = (Rectangle){
    state.OriginAnchor.x + 680, state.OriginAnchor.y + 344, 58, 25
  }; // Button: BinaryModeButton
  state.layoutRecs[6] = (Rectangle){
    state.OriginAnchor.x + 552, state.OriginAnchor.y + 440, 120, 24
  }; // Button: GenerateOutputButton
  state.layoutRecs[7] = (Rectangle){
    state.OriginAnchor.x + 528, state.OriginAnchor.y + 48, 191, 215
  }; // TextBox: OutputTextBox
  state.layoutRecs[8] = (Rectangle){
    state.OriginAnchor.x + 40, state.OriginAnchor.y + 40, 103, 119
  }; // Panel: Editor0
  state.layoutRecs[9] = (Rectangle){
    state.OriginAnchor.x + 152, state.OriginAnchor.y + 40, 103, 119
  }; // Panel: Editor1
  state.layoutRecs[10] = (Rectangle){
    state.OriginAnchor.x + 264, state.OriginAnchor.y + 40, 103, 119
  }; // Panel: Editor2
  state.layoutRecs[11] = (Rectangle){
    state.OriginAnchor.x + 376, state.OriginAnchor.y + 40, 103, 119
  }; // Panel: Editor3
  state.layoutRecs[12] = (Rectangle){
    state.OriginAnchor.x + 40, state.OriginAnchor.y + 168, 103, 119
  }; // Panel: Editor4
  state.layoutRecs[13] = (Rectangle){
    state.OriginAnchor.x + 40, state.OriginAnchor.y + 296, 103, 119
  }; // Panel: Editor8
  state.layoutRecs[14] = (Rectangle){
    state.OriginAnchor.x + 40, state.OriginAnchor.y + 424, 103, 119
  }; // Panel: EditorC
  state.layoutRecs[15] = (Rectangle){
    state.OriginAnchor.x + 152, state.OriginAnchor.y + 168, 103, 119
  }; // Panel: Editor5
  state.layoutRecs[16] = (Rectangle){
    state.OriginAnchor.x + 264, state.OriginAnchor.y + 168, 103, 119
  }; // Panel: Editor6
  state.layoutRecs[17] = (Rectangle){
    state.OriginAnchor.x + 376, state.OriginAnchor.y + 168, 103, 119
  }; // Panel: Editor7
  state.layoutRecs[18] = (Rectangle){
    state.OriginAnchor.x + 376, state.OriginAnchor.y + 296, 103, 119
  }; // Panel: EditorB
  state.layoutRecs[19] = (Rectangle){
    state.OriginAnchor.x + 264, state.OriginAnchor.y + 296, 103, 119
  }; // Panel: EditorA
  state.layoutRecs[20] = (Rectangle){
    state.OriginAnchor.x + 152, state.OriginAnchor.y + 296, 103, 119
  }; // Panel: Editor9
  state.layoutRecs[21] = (Rectangle){
    state.OriginAnchor.x + 152, state.OriginAnchor.y + 424, 103, 119
  }; // Panel: EditorD
  state.layoutRecs[22] = (Rectangle){
    state.OriginAnchor.x + 264, state.OriginAnchor.y + 424, 103, 119
  }; // Panel: EditorE
  state.layoutRecs[23] = (Rectangle){
    state.OriginAnchor.x + 376, state.OriginAnchor.y + 424, 103, 119
  }; // Panel: EditorF

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
  const char* PixelEditorBoxText = "Pixel Editor"; // GROUPBOX: PixelEditorBox
  const char* OutputBoxText = "Output";            // GROUPBOX: OutputBox
  const char* OutputModeBoxText = "Output Mode";   // GROUPBOX: OutputModeBox
  const char* HexModeButtonText = "Hex";           // BUTTON: HexModeButton
  const char* DecimalModeButtonText = "Decimal";   // BUTTON: DecimalModeButton
  const char* BinaryModeButtonText = "Binary";     // BUTTON: BinaryModeButton
  const char* GenerateOutputButtonText =
    "Generate Font"; // BUTTON: GenerateOutputButton
  const char* Editor0Text = "Draw a Zero";
  const char* Editor1Text = "Draw a 1";
  const char* Editor2Text = "Draw a 2";
  const char* Editor3Text = "Draw a 3";
  const char* Editor4Text = "Draw a 4";
  const char* Editor5Text = "Draw a 5";
  const char* Editor6Text = "Draw a 6";
  const char* Editor7Text = "Draw a 7";
  const char* Editor8Text = "Draw an 8";
  const char* Editor9Text = "Draw a 9";
  const char* EditorAText = "Draw an A";
  const char* EditorBText = "Draw a B";
  const char* EditorCText = "Draw a C";
  const char* EditorDText = "Draw a D";
  const char* EditorEText = "Draw an E";
  const char* EditorFText = "Draw a F";

  // Draw controls
  GuiGroupBox(state->layoutRecs[0], PixelEditorBoxText);
  GuiGroupBox(state->layoutRecs[1], OutputBoxText);
  GuiGroupBox(state->layoutRecs[2], OutputModeBoxText);
  if (GuiButton(state->layoutRecs[3], HexModeButtonText))
    HexModeButton();
  if (GuiButton(state->layoutRecs[4], DecimalModeButtonText))
    DecimalModeButton();
  if (GuiButton(state->layoutRecs[5], BinaryModeButtonText))
    BinaryModeButton();
  if (GuiButton(state->layoutRecs[6], GenerateOutputButtonText))
    GenerateOutputButton();
  if (GuiTextBox(state->layoutRecs[7],
                 state->OutputTextBoxText,
                 128,
                 state->OutputTextBoxEditMode))
    state->OutputTextBoxEditMode = !state->OutputTextBoxEditMode;
  GuiPanel(state->layoutRecs[8], Editor0Text);
  GuiPanel(state->layoutRecs[9], Editor1Text);
  GuiPanel(state->layoutRecs[10], Editor2Text);
  GuiPanel(state->layoutRecs[11], Editor3Text);
  GuiPanel(state->layoutRecs[12], Editor4Text);
  GuiPanel(state->layoutRecs[13], Editor8Text);
  GuiPanel(state->layoutRecs[14], EditorCText);
  GuiPanel(state->layoutRecs[15], Editor5Text);
  GuiPanel(state->layoutRecs[16], Editor6Text);
  GuiPanel(state->layoutRecs[17], Editor7Text);
  GuiPanel(state->layoutRecs[18], EditorBText);
  GuiPanel(state->layoutRecs[19], EditorAText);
  GuiPanel(state->layoutRecs[20], Editor9Text);
  GuiPanel(state->layoutRecs[21], EditorDText);
  GuiPanel(state->layoutRecs[22], EditorEText);
  GuiPanel(state->layoutRecs[23], EditorFText);
}

#endif // GUI_CHIP8FONTGENERATOR_IMPLEMENTATION
