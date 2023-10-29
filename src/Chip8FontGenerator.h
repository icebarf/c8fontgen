/*******************************************************************************************
 *
 *   Chip8FontGenerator v1.0.0 - Generate Custom Chip-8 Fonts
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
  bool Editor0Pix0Active;      // Toggle: Editor0Pix0
  bool Toggle025Active;        // Toggle: Toggle025
  bool Toggle026Active;        // Toggle: Toggle026
  bool Toggle027Active;        // Toggle: Toggle027
  bool Toggle028Active;        // Toggle: Toggle028
  bool Toggle029Active;        // Toggle: Toggle029
  bool Toggle030Active;        // Toggle: Toggle030
  bool Toggle031Active;        // Toggle: Toggle031
  bool Toggle032Active;        // Toggle: Toggle032
  bool Toggle033Active;        // Toggle: Toggle033
  bool Toggle034Active;        // Toggle: Toggle034
  bool Toggle035Active;        // Toggle: Toggle035
  bool Toggle036Active;        // Toggle: Toggle036
  bool Toggle037Active;        // Toggle: Toggle037
  bool Toggle038Active;        // Toggle: Toggle038
  bool Toggle039Active;        // Toggle: Toggle039
  bool Toggle040Active;        // Toggle: Toggle040
  bool Toggle041Active;        // Toggle: Toggle041
  bool Toggle042Active;        // Toggle: Toggle042
  bool Toggle043Active;        // Toggle: Toggle043

  // Define rectangles
  Rectangle layoutRecs[44];

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
  state.Editor0Pix0Active = true;      // Toggle: Editor0Pix0
  state.Toggle025Active = true;        // Toggle: Toggle025
  state.Toggle026Active = true;        // Toggle: Toggle026
  state.Toggle027Active = true;        // Toggle: Toggle027
  state.Toggle028Active = true;        // Toggle: Toggle028
  state.Toggle029Active = true;        // Toggle: Toggle029
  state.Toggle030Active = true;        // Toggle: Toggle030
  state.Toggle031Active = true;        // Toggle: Toggle031
  state.Toggle032Active = true;        // Toggle: Toggle032
  state.Toggle033Active = true;        // Toggle: Toggle033
  state.Toggle034Active = true;        // Toggle: Toggle034
  state.Toggle035Active = true;        // Toggle: Toggle035
  state.Toggle036Active = true;        // Toggle: Toggle036
  state.Toggle037Active = true;        // Toggle: Toggle037
  state.Toggle038Active = true;        // Toggle: Toggle038
  state.Toggle039Active = true;        // Toggle: Toggle039
  state.Toggle040Active = true;        // Toggle: Toggle040
  state.Toggle041Active = true;        // Toggle: Toggle041
  state.Toggle042Active = true;        // Toggle: Toggle042
  state.Toggle043Active = true;        // Toggle: Toggle043

  // Init controls rectangles
  state.layoutRecs[0] = (Rectangle){
    state.OriginAnchor.x + 24, state.OriginAnchor.y + 24, 471, 615
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
    state.OriginAnchor.x + 40, state.OriginAnchor.y + 40, 95, 143
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
    state.OriginAnchor.x + 40, state.OriginAnchor.y + 224, 103, 119
  }; // Panel: Editor4
  state.layoutRecs[13] = (Rectangle){
    state.OriginAnchor.x + 40, state.OriginAnchor.y + 360, 103, 119
  }; // Panel: Editor8
  state.layoutRecs[14] = (Rectangle){
    state.OriginAnchor.x + 40, state.OriginAnchor.y + 488, 103, 119
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
  state.layoutRecs[24] = (Rectangle){
    state.OriginAnchor.x + 40, state.OriginAnchor.y + 64, 24, 24
  }; // Toggle: Editor0Pix0
  state.layoutRecs[25] = (Rectangle){
    state.OriginAnchor.x + 40, state.OriginAnchor.y + 88, 24, 24
  }; // Toggle: Toggle025
  state.layoutRecs[26] = (Rectangle){
    state.OriginAnchor.x + 40, state.OriginAnchor.y + 112, 24, 24
  }; // Toggle: Toggle026
  state.layoutRecs[27] = (Rectangle){
    state.OriginAnchor.x + 40, state.OriginAnchor.y + 136, 24, 24
  }; // Toggle: Toggle027
  state.layoutRecs[28] = (Rectangle){
    state.OriginAnchor.x + 40, state.OriginAnchor.y + 160, 24, 24
  }; // Toggle: Toggle028
  state.layoutRecs[29] = (Rectangle){
    state.OriginAnchor.x + 64, state.OriginAnchor.y + 160, 24, 24
  }; // Toggle: Toggle029
  state.layoutRecs[30] = (Rectangle){
    state.OriginAnchor.x + 88, state.OriginAnchor.y + 160, 24, 24
  }; // Toggle: Toggle030
  state.layoutRecs[31] = (Rectangle){
    state.OriginAnchor.x + 112, state.OriginAnchor.y + 160, 24, 24
  }; // Toggle: Toggle031
  state.layoutRecs[32] = (Rectangle){
    state.OriginAnchor.x + 64, state.OriginAnchor.y + 136, 24, 24
  }; // Toggle: Toggle032
  state.layoutRecs[33] = (Rectangle){
    state.OriginAnchor.x + 88, state.OriginAnchor.y + 136, 24, 24
  }; // Toggle: Toggle033
  state.layoutRecs[34] = (Rectangle){
    state.OriginAnchor.x + 112, state.OriginAnchor.y + 136, 24, 24
  }; // Toggle: Toggle034
  state.layoutRecs[35] = (Rectangle){
    state.OriginAnchor.x + 64, state.OriginAnchor.y + 112, 24, 24
  }; // Toggle: Toggle035
  state.layoutRecs[36] = (Rectangle){
    state.OriginAnchor.x + 88, state.OriginAnchor.y + 112, 24, 24
  }; // Toggle: Toggle036
  state.layoutRecs[37] = (Rectangle){
    state.OriginAnchor.x + 112, state.OriginAnchor.y + 112, 24, 24
  }; // Toggle: Toggle037
  state.layoutRecs[38] = (Rectangle){
    state.OriginAnchor.x + 64, state.OriginAnchor.y + 64, 24, 24
  }; // Toggle: Toggle038
  state.layoutRecs[39] = (Rectangle){
    state.OriginAnchor.x + 88, state.OriginAnchor.y + 64, 24, 24
  }; // Toggle: Toggle039
  state.layoutRecs[40] = (Rectangle){
    state.OriginAnchor.x + 112, state.OriginAnchor.y + 64, 24, 24
  }; // Toggle: Toggle040
  state.layoutRecs[41] = (Rectangle){
    state.OriginAnchor.x + 112, state.OriginAnchor.y + 88, 24, 24
  }; // Toggle: Toggle041
  state.layoutRecs[42] = (Rectangle){
    state.OriginAnchor.x + 88, state.OriginAnchor.y + 88, 24, 24
  }; // Toggle: Toggle042
  state.layoutRecs[43] = (Rectangle){
    state.OriginAnchor.x + 64, state.OriginAnchor.y + 88, 24, 24
  }; // Toggle: Toggle043

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
  const char* Editor0Pix0Text = ""; // TOGGLE: Editor0Pix0
  const char* Toggle025Text = "";   // TOGGLE: Toggle025
  const char* Toggle026Text = "";   // TOGGLE: Toggle026
  const char* Toggle027Text = "";   // TOGGLE: Toggle027
  const char* Toggle028Text = "";   // TOGGLE: Toggle028
  const char* Toggle029Text = "";   // TOGGLE: Toggle029
  const char* Toggle030Text = "";   // TOGGLE: Toggle030
  const char* Toggle031Text = "";   // TOGGLE: Toggle031
  const char* Toggle032Text = "";   // TOGGLE: Toggle032
  const char* Toggle033Text = "";   // TOGGLE: Toggle033
  const char* Toggle034Text = "";   // TOGGLE: Toggle034
  const char* Toggle035Text = "";   // TOGGLE: Toggle035
  const char* Toggle036Text = "";   // TOGGLE: Toggle036
  const char* Toggle037Text = "";   // TOGGLE: Toggle037
  const char* Toggle038Text = "";   // TOGGLE: Toggle038
  const char* Toggle039Text = "";   // TOGGLE: Toggle039
  const char* Toggle040Text = "";   // TOGGLE: Toggle040
  const char* Toggle041Text = "";   // TOGGLE: Toggle041
  const char* Toggle042Text = "";   // TOGGLE: Toggle042
  const char* Toggle043Text = "";   // TOGGLE: Toggle043

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
  GuiToggle(state->layoutRecs[24], Editor0Pix0Text, &state->Editor0Pix0Active);
  GuiToggle(state->layoutRecs[25], Toggle025Text, &state->Toggle025Active);
  GuiToggle(state->layoutRecs[26], Toggle026Text, &state->Toggle026Active);
  GuiToggle(state->layoutRecs[27], Toggle027Text, &state->Toggle027Active);
  GuiToggle(state->layoutRecs[28], Toggle028Text, &state->Toggle028Active);
  GuiToggle(state->layoutRecs[29], Toggle029Text, &state->Toggle029Active);
  GuiToggle(state->layoutRecs[30], Toggle030Text, &state->Toggle030Active);
  GuiToggle(state->layoutRecs[31], Toggle031Text, &state->Toggle031Active);
  GuiToggle(state->layoutRecs[32], Toggle032Text, &state->Toggle032Active);
  GuiToggle(state->layoutRecs[33], Toggle033Text, &state->Toggle033Active);
  GuiToggle(state->layoutRecs[34], Toggle034Text, &state->Toggle034Active);
  GuiToggle(state->layoutRecs[35], Toggle035Text, &state->Toggle035Active);
  GuiToggle(state->layoutRecs[36], Toggle036Text, &state->Toggle036Active);
  GuiToggle(state->layoutRecs[37], Toggle037Text, &state->Toggle037Active);
  GuiToggle(state->layoutRecs[38], Toggle038Text, &state->Toggle038Active);
  GuiToggle(state->layoutRecs[39], Toggle039Text, &state->Toggle039Active);
  GuiToggle(state->layoutRecs[40], Toggle040Text, &state->Toggle040Active);
  GuiToggle(state->layoutRecs[41], Toggle041Text, &state->Toggle041Active);
  GuiToggle(state->layoutRecs[42], Toggle042Text, &state->Toggle042Active);
  GuiToggle(state->layoutRecs[43], Toggle043Text, &state->Toggle043Active);
}

#endif // GUI_CHIP8FONTGENERATOR_IMPLEMENTATION
