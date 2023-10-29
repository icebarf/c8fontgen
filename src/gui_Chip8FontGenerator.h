/*******************************************************************************************
 *
 *   Chip8FontGenerator v1.0.0 - Generate Custom Chip-8 Fonts
 *
 *   MODULE USAGE:
 *       #define GUI_CHIP8FONTGENERATOR_IMPLEMENTATION
 *       #include "gui_Chip8FontGenerator.h"
 *
 *       INIT: GuiChip8FontGeneratorState state = InitGuiChip8FontGenerator();
 *       DRAW: GuiChip8FontGenerator(&state);
 *
 *   LICENSE: Propietary License
 *
 *   Copyright (c) 2022 Amritpal Singh. All Rights Reserved.
 *
 *   Unauthorized copying of this file, via any medium is strictly prohibited
 *   This project is proprietary and confidential unless the owner allows
 *   usage in any other form by expresely written permission.
 *
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
  Vector2 Origin; // ANCHOR ID:1

  // There are a total of 320 Toggle buttons. Each toggle acts as a pixel
  // that can be turned on or off. A chip-8 font has it's sprites as 4*5 pixels,
  // implying each sprite needs 20 toggles. For a total of 16 Sprites, 320
  // Pixels or toggles are needed. Toggle001-Toggle020 are the pixels for the
  // sprite 0, Toggle021-Toggle040 are pixels for sprite 1, and so on until 0xF.
  enum
  {
    Toggle001,
    Toggle002,
    Toggle003,
    Toggle004,
    Toggle005,
    Toggle006,
    Toggle007,
    Toggle008,
    Toggle009,
    Toggle010,
    Toggle011,
    Toggle012,
    Toggle013,
    Toggle014,
    Toggle015,
    Toggle016,
    Toggle017,
    Toggle018,
    Toggle019,
    Toggle020,
    Toggle021,
    Toggle022,
    Toggle023,
    Toggle024,
    Toggle025,
    Toggle026,
    Toggle027,
    Toggle028,
    Toggle029,
    Toggle030,
    Toggle031,
    Toggle032,
    Toggle033,
    Toggle034,
    Toggle035,
    Toggle036,
    Toggle037,
    Toggle038,
    Toggle039,
    Toggle040,
    Toggle041,
    Toggle042,
    Toggle043,
    Toggle044,
    Toggle045,
    Toggle046,
    Toggle047,
    Toggle048,
    Toggle049,
    Toggle050,
    Toggle051,
    Toggle052,
    Toggle053,
    Toggle054,
    Toggle055,
    Toggle056,
    Toggle057,
    Toggle058,
    Toggle059,
    Toggle060,
    Toggle061,
    Toggle062,
    Toggle063,
    Toggle064,
    Toggle065,
    Toggle066,
    Toggle067,
    Toggle068,
    Toggle069,
    Toggle070,
    Toggle071,
    Toggle072,
    Toggle073,
    Toggle074,
    Toggle075,
    Toggle076,
    Toggle077,
    Toggle078,
    Toggle079,
    Toggle080,
    Toggle081,
    Toggle082,
    Toggle083,
    Toggle084,
    Toggle085,
    Toggle086,
    Toggle087,
    Toggle088,
    Toggle089,
    Toggle090,
    Toggle091,
    Toggle092,
    Toggle093,
    Toggle094,
    Toggle095,
    Toggle096,
    Toggle097,
    Toggle098,
    Toggle099,
    Toggle100,
    Toggle101,
    Toggle102,
    Toggle103,
    Toggle104,
    Toggle105,
    Toggle106,
    Toggle107,
    Toggle108,
    Toggle109,
    Toggle110,
    Toggle111,
    Toggle112,
    Toggle113,
    Toggle114,
    Toggle115,
    Toggle116,
    Toggle117,
    Toggle118,
    Toggle119,
    Toggle120,
    Toggle121,
    Toggle122,
    Toggle123,
    Toggle124,
    Toggle125,
    Toggle126,
    Toggle127,
    Toggle128,
    Toggle129,
    Toggle130,
    Toggle131,
    Toggle132,
    Toggle133,
    Toggle134,
    Toggle135,
    Toggle136,
    Toggle137,
    Toggle138,
    Toggle139,
    Toggle140,
    Toggle141,
    Toggle142,
    Toggle143,
    Toggle144,
    Toggle145,
    Toggle146,
    Toggle147,
    Toggle148,
    Toggle149,
    Toggle150,
    Toggle151,
    Toggle152,
    Toggle153,
    Toggle154,
    Toggle155,
    Toggle156,
    Toggle157,
    Toggle158,
    Toggle159,
    Toggle160,
    Toggle161,
    Toggle162,
    Toggle163,
    Toggle164,
    Toggle165,
    Toggle166,
    Toggle167,
    Toggle168,
    Toggle169,
    Toggle170,
    Toggle171,
    Toggle172,
    Toggle173,
    Toggle174,
    Toggle175,
    Toggle176,
    Toggle177,
    Toggle178,
    Toggle179,
    Toggle180,
    Toggle181,
    Toggle182,
    Toggle183,
    Toggle184,
    Toggle185,
    Toggle186,
    Toggle187,
    Toggle188,
    Toggle189,
    Toggle190,
    Toggle191,
    Toggle192,
    Toggle193,
    Toggle194,
    Toggle195,
    Toggle196,
    Toggle197,
    Toggle198,
    Toggle199,
    Toggle200,
    Toggle201,
    Toggle202,
    Toggle203,
    Toggle204,
    Toggle205,
    Toggle206,
    Toggle207,
    Toggle208,
    Toggle209,
    Toggle210,
    Toggle211,
    Toggle212,
    Toggle213,
    Toggle214,
    Toggle215,
    Toggle216,
    Toggle217,
    Toggle218,
    Toggle219,
    Toggle220,
    Toggle221,
    Toggle222,
    Toggle223,
    Toggle224,
    Toggle225,
    Toggle226,
    Toggle227,
    Toggle228,
    Toggle229,
    Toggle230,
    Toggle231,
    Toggle232,
    Toggle233,
    Toggle234,
    Toggle235,
    Toggle236,
    Toggle237,
    Toggle238,
    Toggle239,
    Toggle240,
    Toggle241,
    Toggle242,
    Toggle243,
    Toggle244,
    Toggle245,
    Toggle246,
    Toggle247,
    Toggle248,
    Toggle249,
    Toggle250,
    Toggle251,
    Toggle252,
    Toggle253,
    Toggle254,
    Toggle255,
    Toggle256,
    Toggle257,
    Toggle258,
    Toggle259,
    Toggle260,
    Toggle261,
    Toggle262,
    Toggle263,
    Toggle264,
    Toggle265,
    Toggle266,
    Toggle267,
    Toggle268,
    Toggle269,
    Toggle270,
    Toggle271,
    Toggle272,
    Toggle273,
    Toggle274,
    Toggle275,
    Toggle276,
    Toggle277,
    Toggle278,
    Toggle279,
    Toggle280,
    Toggle281,
    Toggle282,
    Toggle283,
    Toggle284,
    Toggle285,
    Toggle286,
    Toggle287,
    Toggle288,
    Toggle289,
    Toggle290,
    Toggle291,
    Toggle292,
    Toggle293,
    Toggle294,
    Toggle295,
    Toggle296,
    Toggle297,
    Toggle298,
    Toggle299,
    Toggle300,
    Toggle301,
    Toggle302,
    Toggle303,
    Toggle304,
    Toggle305,
    Toggle306,
    Toggle307,
    Toggle308,
    Toggle309,
    Toggle310,
    Toggle311,
    Toggle312,
    Toggle313,
    Toggle314,
    Toggle315,
    Toggle316,
    Toggle317,
    Toggle318,
    Toggle319,
    Toggle320,
    TOTAL_TOGGLE_COUNT = 320,
  };

  // Define controls variables
  bool ToggleActive[TOTAL_TOGGLE_COUNT]; // Toggle: Toggle button active
  bool OuputFontTextBoxEditMode;
  char OuputFontTextBoxText[128]; // TextBox: OuputFontTextBox

  // Define rectangles
  Rectangle layoutRecs[347];

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
  static void OutputInHexButton();     // Button: OutputInHexButton logic
  static void OutputInDecimalButton(); // Button: OutputInDecimalButton logic
  static void OutputInBinaryButton();  // Button: OutputInBinaryButton logic
  static void Button327();             // Button: Button327 logic
  static void ResetEditorButton();     // Button: ResetEditorButton logic
  static void LightThemeButton();      // Button: LightThemeButton logic
  static void DarkThemeButton();       // Button: DarkThemeButton logic

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
  state.Origin = (Vector2){ 0, 0 }; // ANCHOR ID:1

  // Initilize controls variables
  for (int i = 0; i < TOTAL_TOGGLE_COUNT; i++)
    state.ToggleActive[i] = true;
  state.OuputFontTextBoxEditMode = false;
  strcpy(state.OuputFontTextBoxText, ""); // TextBox: OuputFontTextBox

  // Init controls rectangles
  state.layoutRecs[0] = (Rectangle){
    state.Origin.x + 24, state.Origin.y + 24, 504, 600
  }; // GroupBox: PixelEditorBox
  state.layoutRecs[1] = (Rectangle){
    state.Origin.x + 48, state.Origin.y + 48, 24, 24
  }; // Toggle: Toggle001
  state.layoutRecs[2] = (Rectangle){
    state.Origin.x + 72, state.Origin.y + 48, 24, 24
  }; // Toggle: Toggle002
  state.layoutRecs[3] = (Rectangle){
    state.Origin.x + 96, state.Origin.y + 48, 24, 24
  }; // Toggle: Toggle003
  state.layoutRecs[4] = (Rectangle){
    state.Origin.x + 120, state.Origin.y + 48, 24, 24
  }; // Toggle: Toggle004
  state.layoutRecs[5] = (Rectangle){
    state.Origin.x + 48, state.Origin.y + 72, 24, 24
  }; // Toggle: Toggle005
  state.layoutRecs[6] = (Rectangle){
    state.Origin.x + 72, state.Origin.y + 72, 24, 24
  }; // Toggle: Toggle006
  state.layoutRecs[7] = (Rectangle){
    state.Origin.x + 96, state.Origin.y + 72, 24, 24
  }; // Toggle: Toggle007
  state.layoutRecs[8] = (Rectangle){
    state.Origin.x + 120, state.Origin.y + 72, 24, 24
  }; // Toggle: Toggle008
  state.layoutRecs[9] = (Rectangle){
    state.Origin.x + 48, state.Origin.y + 96, 24, 24
  }; // Toggle: Toggle009
  state.layoutRecs[10] = (Rectangle){
    state.Origin.x + 72, state.Origin.y + 96, 24, 24
  }; // Toggle: Toggle010
  state.layoutRecs[11] = (Rectangle){
    state.Origin.x + 96, state.Origin.y + 96, 24, 24
  }; // Toggle: Toggle011
  state.layoutRecs[12] = (Rectangle){
    state.Origin.x + 120, state.Origin.y + 96, 24, 24
  }; // Toggle: Toggle012
  state.layoutRecs[13] = (Rectangle){
    state.Origin.x + 48, state.Origin.y + 120, 24, 24
  }; // Toggle: Toggle013
  state.layoutRecs[14] = (Rectangle){
    state.Origin.x + 72, state.Origin.y + 120, 24, 24
  }; // Toggle: Toggle014
  state.layoutRecs[15] = (Rectangle){
    state.Origin.x + 96, state.Origin.y + 120, 24, 24
  }; // Toggle: Toggle015
  state.layoutRecs[16] = (Rectangle){
    state.Origin.x + 120, state.Origin.y + 120, 24, 24
  }; // Toggle: Toggle016
  state.layoutRecs[17] = (Rectangle){
    state.Origin.x + 48, state.Origin.y + 144, 24, 24
  }; // Toggle: Toggle017
  state.layoutRecs[18] = (Rectangle){
    state.Origin.x + 72, state.Origin.y + 144, 24, 24
  }; // Toggle: Toggle018
  state.layoutRecs[19] = (Rectangle){
    state.Origin.x + 96, state.Origin.y + 144, 24, 24
  }; // Toggle: Toggle019
  state.layoutRecs[20] = (Rectangle){
    state.Origin.x + 120, state.Origin.y + 144, 24, 24
  }; // Toggle: Toggle020
  state.layoutRecs[21] = (Rectangle){
    state.Origin.x + 168, state.Origin.y + 48, 24, 24
  }; // Toggle: Toggle021
  state.layoutRecs[22] = (Rectangle){
    state.Origin.x + 192, state.Origin.y + 48, 24, 24
  }; // Toggle: Toggle022
  state.layoutRecs[23] = (Rectangle){
    state.Origin.x + 216, state.Origin.y + 48, 24, 24
  }; // Toggle: Toggle023
  state.layoutRecs[24] = (Rectangle){
    state.Origin.x + 240, state.Origin.y + 48, 24, 24
  }; // Toggle: Toggle024
  state.layoutRecs[25] = (Rectangle){
    state.Origin.x + 168, state.Origin.y + 72, 24, 24
  }; // Toggle: Toggle025
  state.layoutRecs[26] = (Rectangle){
    state.Origin.x + 192, state.Origin.y + 72, 24, 24
  }; // Toggle: Toggle026
  state.layoutRecs[27] = (Rectangle){
    state.Origin.x + 216, state.Origin.y + 72, 24, 24
  }; // Toggle: Toggle027
  state.layoutRecs[28] = (Rectangle){
    state.Origin.x + 240, state.Origin.y + 72, 24, 24
  }; // Toggle: Toggle028
  state.layoutRecs[29] = (Rectangle){
    state.Origin.x + 168, state.Origin.y + 96, 24, 24
  }; // Toggle: Toggle029
  state.layoutRecs[30] = (Rectangle){
    state.Origin.x + 192, state.Origin.y + 96, 24, 24
  }; // Toggle: Toggle030
  state.layoutRecs[31] = (Rectangle){
    state.Origin.x + 216, state.Origin.y + 96, 24, 24
  }; // Toggle: Toggle031
  state.layoutRecs[32] = (Rectangle){
    state.Origin.x + 240, state.Origin.y + 96, 24, 24
  }; // Toggle: Toggle032
  state.layoutRecs[33] = (Rectangle){
    state.Origin.x + 168, state.Origin.y + 120, 24, 24
  }; // Toggle: Toggle033
  state.layoutRecs[34] = (Rectangle){
    state.Origin.x + 192, state.Origin.y + 120, 24, 24
  }; // Toggle: Toggle034
  state.layoutRecs[35] = (Rectangle){
    state.Origin.x + 216, state.Origin.y + 120, 24, 24
  }; // Toggle: Toggle035
  state.layoutRecs[36] = (Rectangle){
    state.Origin.x + 240, state.Origin.y + 120, 24, 24
  }; // Toggle: Toggle036
  state.layoutRecs[37] = (Rectangle){
    state.Origin.x + 168, state.Origin.y + 144, 24, 24
  }; // Toggle: Toggle037
  state.layoutRecs[38] = (Rectangle){
    state.Origin.x + 192, state.Origin.y + 144, 24, 24
  }; // Toggle: Toggle038
  state.layoutRecs[39] = (Rectangle){
    state.Origin.x + 216, state.Origin.y + 144, 24, 24
  }; // Toggle: Toggle039
  state.layoutRecs[40] = (Rectangle){
    state.Origin.x + 240, state.Origin.y + 144, 24, 24
  }; // Toggle: Toggle040
  state.layoutRecs[41] = (Rectangle){
    state.Origin.x + 288, state.Origin.y + 48, 24, 24
  }; // Toggle: Toggle041
  state.layoutRecs[42] = (Rectangle){
    state.Origin.x + 312, state.Origin.y + 48, 24, 24
  }; // Toggle: Toggle042
  state.layoutRecs[43] = (Rectangle){
    state.Origin.x + 336, state.Origin.y + 48, 24, 24
  }; // Toggle: Toggle043
  state.layoutRecs[44] = (Rectangle){
    state.Origin.x + 360, state.Origin.y + 48, 24, 24
  }; // Toggle: Toggle044
  state.layoutRecs[45] = (Rectangle){
    state.Origin.x + 288, state.Origin.y + 72, 24, 24
  }; // Toggle: Toggle045
  state.layoutRecs[46] = (Rectangle){
    state.Origin.x + 312, state.Origin.y + 72, 24, 24
  }; // Toggle: Toggle046
  state.layoutRecs[47] = (Rectangle){
    state.Origin.x + 336, state.Origin.y + 72, 24, 24
  }; // Toggle: Toggle047
  state.layoutRecs[48] = (Rectangle){
    state.Origin.x + 360, state.Origin.y + 72, 24, 24
  }; // Toggle: Toggle048
  state.layoutRecs[49] = (Rectangle){
    state.Origin.x + 288, state.Origin.y + 96, 24, 24
  }; // Toggle: Toggle049
  state.layoutRecs[50] = (Rectangle){
    state.Origin.x + 312, state.Origin.y + 96, 24, 24
  }; // Toggle: Toggle050
  state.layoutRecs[51] = (Rectangle){
    state.Origin.x + 336, state.Origin.y + 96, 24, 24
  }; // Toggle: Toggle051
  state.layoutRecs[52] = (Rectangle){
    state.Origin.x + 360, state.Origin.y + 96, 24, 24
  }; // Toggle: Toggle052
  state.layoutRecs[53] = (Rectangle){
    state.Origin.x + 288, state.Origin.y + 120, 24, 24
  }; // Toggle: Toggle053
  state.layoutRecs[54] = (Rectangle){
    state.Origin.x + 312, state.Origin.y + 120, 24, 24
  }; // Toggle: Toggle054
  state.layoutRecs[55] = (Rectangle){
    state.Origin.x + 336, state.Origin.y + 120, 24, 24
  }; // Toggle: Toggle055
  state.layoutRecs[56] = (Rectangle){
    state.Origin.x + 360, state.Origin.y + 120, 24, 24
  }; // Toggle: Toggle056
  state.layoutRecs[57] = (Rectangle){
    state.Origin.x + 288, state.Origin.y + 144, 24, 24
  }; // Toggle: Toggle057
  state.layoutRecs[58] = (Rectangle){
    state.Origin.x + 312, state.Origin.y + 144, 24, 24
  }; // Toggle: Toggle058
  state.layoutRecs[59] = (Rectangle){
    state.Origin.x + 336, state.Origin.y + 144, 24, 24
  }; // Toggle: Toggle059
  state.layoutRecs[60] = (Rectangle){
    state.Origin.x + 360, state.Origin.y + 144, 24, 24
  }; // Toggle: Toggle060
  state.layoutRecs[61] = (Rectangle){
    state.Origin.x + 408, state.Origin.y + 48, 24, 24
  }; // Toggle: Toggle061
  state.layoutRecs[62] = (Rectangle){
    state.Origin.x + 432, state.Origin.y + 48, 24, 24
  }; // Toggle: Toggle062
  state.layoutRecs[63] = (Rectangle){
    state.Origin.x + 456, state.Origin.y + 48, 24, 24
  }; // Toggle: Toggle063
  state.layoutRecs[64] = (Rectangle){
    state.Origin.x + 480, state.Origin.y + 48, 24, 24
  }; // Toggle: Toggle064
  state.layoutRecs[65] = (Rectangle){
    state.Origin.x + 408, state.Origin.y + 72, 24, 24
  }; // Toggle: Toggle065
  state.layoutRecs[66] = (Rectangle){
    state.Origin.x + 432, state.Origin.y + 72, 24, 24
  }; // Toggle: Toggle066
  state.layoutRecs[67] = (Rectangle){
    state.Origin.x + 456, state.Origin.y + 72, 24, 24
  }; // Toggle: Toggle067
  state.layoutRecs[68] = (Rectangle){
    state.Origin.x + 480, state.Origin.y + 72, 24, 24
  }; // Toggle: Toggle068
  state.layoutRecs[69] = (Rectangle){
    state.Origin.x + 408, state.Origin.y + 96, 24, 24
  }; // Toggle: Toggle069
  state.layoutRecs[70] = (Rectangle){
    state.Origin.x + 432, state.Origin.y + 96, 24, 24
  }; // Toggle: Toggle070
  state.layoutRecs[71] = (Rectangle){
    state.Origin.x + 456, state.Origin.y + 96, 24, 24
  }; // Toggle: Toggle071
  state.layoutRecs[72] = (Rectangle){
    state.Origin.x + 480, state.Origin.y + 96, 24, 24
  }; // Toggle: Toggle072
  state.layoutRecs[73] = (Rectangle){
    state.Origin.x + 408, state.Origin.y + 120, 24, 24
  }; // Toggle: Toggle073
  state.layoutRecs[74] = (Rectangle){
    state.Origin.x + 432, state.Origin.y + 120, 24, 24
  }; // Toggle: Toggle074
  state.layoutRecs[75] = (Rectangle){
    state.Origin.x + 456, state.Origin.y + 120, 24, 24
  }; // Toggle: Toggle075
  state.layoutRecs[76] = (Rectangle){
    state.Origin.x + 480, state.Origin.y + 120, 24, 24
  }; // Toggle: Toggle076
  state.layoutRecs[77] = (Rectangle){
    state.Origin.x + 408, state.Origin.y + 144, 24, 24
  }; // Toggle: Toggle077
  state.layoutRecs[78] = (Rectangle){
    state.Origin.x + 432, state.Origin.y + 144, 24, 24
  }; // Toggle: Toggle078
  state.layoutRecs[79] = (Rectangle){
    state.Origin.x + 456, state.Origin.y + 144, 24, 24
  }; // Toggle: Toggle079
  state.layoutRecs[80] = (Rectangle){
    state.Origin.x + 480, state.Origin.y + 144, 24, 24
  }; // Toggle: Toggle080
  state.layoutRecs[81] = (Rectangle){
    state.Origin.x + 48, state.Origin.y + 192, 24, 24
  }; // Toggle: Toggle081
  state.layoutRecs[82] = (Rectangle){
    state.Origin.x + 72, state.Origin.y + 192, 24, 24
  }; // Toggle: Toggle082
  state.layoutRecs[83] = (Rectangle){
    state.Origin.x + 96, state.Origin.y + 192, 24, 24
  }; // Toggle: Toggle083
  state.layoutRecs[84] = (Rectangle){
    state.Origin.x + 120, state.Origin.y + 192, 24, 24
  }; // Toggle: Toggle084
  state.layoutRecs[85] = (Rectangle){
    state.Origin.x + 48, state.Origin.y + 216, 24, 24
  }; // Toggle: Toggle085
  state.layoutRecs[86] = (Rectangle){
    state.Origin.x + 72, state.Origin.y + 216, 24, 24
  }; // Toggle: Toggle086
  state.layoutRecs[87] = (Rectangle){
    state.Origin.x + 96, state.Origin.y + 216, 24, 24
  }; // Toggle: Toggle087
  state.layoutRecs[88] = (Rectangle){
    state.Origin.x + 120, state.Origin.y + 216, 24, 24
  }; // Toggle: Toggle088
  state.layoutRecs[89] = (Rectangle){
    state.Origin.x + 48, state.Origin.y + 240, 24, 24
  }; // Toggle: Toggle089
  state.layoutRecs[90] = (Rectangle){
    state.Origin.x + 72, state.Origin.y + 240, 24, 24
  }; // Toggle: Toggle090
  state.layoutRecs[91] = (Rectangle){
    state.Origin.x + 96, state.Origin.y + 240, 24, 24
  }; // Toggle: Toggle091
  state.layoutRecs[92] = (Rectangle){
    state.Origin.x + 120, state.Origin.y + 240, 24, 24
  }; // Toggle: Toggle092
  state.layoutRecs[93] = (Rectangle){
    state.Origin.x + 48, state.Origin.y + 264, 24, 24
  }; // Toggle: Toggle093
  state.layoutRecs[94] = (Rectangle){
    state.Origin.x + 72, state.Origin.y + 264, 24, 24
  }; // Toggle: Toggle094
  state.layoutRecs[95] = (Rectangle){
    state.Origin.x + 96, state.Origin.y + 264, 24, 24
  }; // Toggle: Toggle095
  state.layoutRecs[96] = (Rectangle){
    state.Origin.x + 120, state.Origin.y + 264, 24, 24
  }; // Toggle: Toggle096
  state.layoutRecs[97] = (Rectangle){
    state.Origin.x + 48, state.Origin.y + 288, 24, 24
  }; // Toggle: Toggle097
  state.layoutRecs[98] = (Rectangle){
    state.Origin.x + 72, state.Origin.y + 288, 24, 24
  }; // Toggle: Toggle098
  state.layoutRecs[99] = (Rectangle){
    state.Origin.x + 96, state.Origin.y + 288, 24, 24
  }; // Toggle: Toggle099
  state.layoutRecs[100] = (Rectangle){
    state.Origin.x + 120, state.Origin.y + 288, 24, 24
  }; // Toggle: Toggle100
  state.layoutRecs[101] = (Rectangle){
    state.Origin.x + 168, state.Origin.y + 192, 24, 24
  }; // Toggle: Toggle101
  state.layoutRecs[102] = (Rectangle){
    state.Origin.x + 192, state.Origin.y + 192, 24, 24
  }; // Toggle: Toggle102
  state.layoutRecs[103] = (Rectangle){
    state.Origin.x + 216, state.Origin.y + 192, 24, 24
  }; // Toggle: Toggle103
  state.layoutRecs[104] = (Rectangle){
    state.Origin.x + 240, state.Origin.y + 192, 24, 24
  }; // Toggle: Toggle104
  state.layoutRecs[105] = (Rectangle){
    state.Origin.x + 168, state.Origin.y + 216, 24, 24
  }; // Toggle: Toggle105
  state.layoutRecs[106] = (Rectangle){
    state.Origin.x + 192, state.Origin.y + 216, 24, 24
  }; // Toggle: Toggle106
  state.layoutRecs[107] = (Rectangle){
    state.Origin.x + 216, state.Origin.y + 216, 24, 24
  }; // Toggle: Toggle107
  state.layoutRecs[108] = (Rectangle){
    state.Origin.x + 240, state.Origin.y + 216, 24, 24
  }; // Toggle: Toggle108
  state.layoutRecs[109] = (Rectangle){
    state.Origin.x + 168, state.Origin.y + 240, 24, 24
  }; // Toggle: Toggle109
  state.layoutRecs[110] = (Rectangle){
    state.Origin.x + 192, state.Origin.y + 240, 24, 24
  }; // Toggle: Toggle110
  state.layoutRecs[111] = (Rectangle){
    state.Origin.x + 216, state.Origin.y + 240, 24, 24
  }; // Toggle: Toggle111
  state.layoutRecs[112] = (Rectangle){
    state.Origin.x + 240, state.Origin.y + 240, 24, 24
  }; // Toggle: Toggle112
  state.layoutRecs[113] = (Rectangle){
    state.Origin.x + 168, state.Origin.y + 264, 24, 24
  }; // Toggle: Toggle113
  state.layoutRecs[114] = (Rectangle){
    state.Origin.x + 192, state.Origin.y + 264, 24, 24
  }; // Toggle: Toggle114
  state.layoutRecs[115] = (Rectangle){
    state.Origin.x + 216, state.Origin.y + 264, 24, 24
  }; // Toggle: Toggle115
  state.layoutRecs[116] = (Rectangle){
    state.Origin.x + 240, state.Origin.y + 264, 24, 24
  }; // Toggle: Toggle116
  state.layoutRecs[117] = (Rectangle){
    state.Origin.x + 168, state.Origin.y + 288, 24, 24
  }; // Toggle: Toggle117
  state.layoutRecs[118] = (Rectangle){
    state.Origin.x + 192, state.Origin.y + 288, 24, 24
  }; // Toggle: Toggle118
  state.layoutRecs[119] = (Rectangle){
    state.Origin.x + 216, state.Origin.y + 288, 24, 24
  }; // Toggle: Toggle119
  state.layoutRecs[120] = (Rectangle){
    state.Origin.x + 240, state.Origin.y + 288, 24, 24
  }; // Toggle: Toggle120
  state.layoutRecs[121] = (Rectangle){
    state.Origin.x + 288, state.Origin.y + 192, 24, 24
  }; // Toggle: Toggle121
  state.layoutRecs[122] = (Rectangle){
    state.Origin.x + 312, state.Origin.y + 192, 24, 24
  }; // Toggle: Toggle122
  state.layoutRecs[123] = (Rectangle){
    state.Origin.x + 336, state.Origin.y + 192, 24, 24
  }; // Toggle: Toggle123
  state.layoutRecs[124] = (Rectangle){
    state.Origin.x + 360, state.Origin.y + 192, 24, 24
  }; // Toggle: Toggle124
  state.layoutRecs[125] = (Rectangle){
    state.Origin.x + 288, state.Origin.y + 216, 24, 24
  }; // Toggle: Toggle125
  state.layoutRecs[126] = (Rectangle){
    state.Origin.x + 312, state.Origin.y + 216, 24, 24
  }; // Toggle: Toggle126
  state.layoutRecs[127] = (Rectangle){
    state.Origin.x + 336, state.Origin.y + 216, 24, 24
  }; // Toggle: Toggle127
  state.layoutRecs[128] = (Rectangle){
    state.Origin.x + 360, state.Origin.y + 216, 24, 24
  }; // Toggle: Toggle128
  state.layoutRecs[129] = (Rectangle){
    state.Origin.x + 288, state.Origin.y + 240, 24, 24
  }; // Toggle: Toggle129
  state.layoutRecs[130] = (Rectangle){
    state.Origin.x + 312, state.Origin.y + 240, 24, 24
  }; // Toggle: Toggle130
  state.layoutRecs[131] = (Rectangle){
    state.Origin.x + 336, state.Origin.y + 240, 24, 24
  }; // Toggle: Toggle131
  state.layoutRecs[132] = (Rectangle){
    state.Origin.x + 360, state.Origin.y + 240, 24, 24
  }; // Toggle: Toggle132
  state.layoutRecs[133] = (Rectangle){
    state.Origin.x + 288, state.Origin.y + 264, 24, 24
  }; // Toggle: Toggle133
  state.layoutRecs[134] = (Rectangle){
    state.Origin.x + 312, state.Origin.y + 264, 24, 24
  }; // Toggle: Toggle134
  state.layoutRecs[135] = (Rectangle){
    state.Origin.x + 336, state.Origin.y + 264, 24, 24
  }; // Toggle: Toggle135
  state.layoutRecs[136] = (Rectangle){
    state.Origin.x + 360, state.Origin.y + 264, 24, 24
  }; // Toggle: Toggle136
  state.layoutRecs[137] = (Rectangle){
    state.Origin.x + 288, state.Origin.y + 288, 24, 24
  }; // Toggle: Toggle137
  state.layoutRecs[138] = (Rectangle){
    state.Origin.x + 312, state.Origin.y + 288, 24, 24
  }; // Toggle: Toggle138
  state.layoutRecs[139] = (Rectangle){
    state.Origin.x + 336, state.Origin.y + 288, 24, 24
  }; // Toggle: Toggle139
  state.layoutRecs[140] = (Rectangle){
    state.Origin.x + 360, state.Origin.y + 288, 24, 24
  }; // Toggle: Toggle140
  state.layoutRecs[141] = (Rectangle){
    state.Origin.x + 408, state.Origin.y + 192, 24, 24
  }; // Toggle: Toggle141
  state.layoutRecs[142] = (Rectangle){
    state.Origin.x + 432, state.Origin.y + 192, 24, 24
  }; // Toggle: Toggle142
  state.layoutRecs[143] = (Rectangle){
    state.Origin.x + 456, state.Origin.y + 192, 24, 24
  }; // Toggle: Toggle143
  state.layoutRecs[144] = (Rectangle){
    state.Origin.x + 480, state.Origin.y + 192, 24, 24
  }; // Toggle: Toggle144
  state.layoutRecs[145] = (Rectangle){
    state.Origin.x + 408, state.Origin.y + 216, 24, 24
  }; // Toggle: Toggle145
  state.layoutRecs[146] = (Rectangle){
    state.Origin.x + 432, state.Origin.y + 216, 24, 24
  }; // Toggle: Toggle146
  state.layoutRecs[147] = (Rectangle){
    state.Origin.x + 456, state.Origin.y + 216, 24, 24
  }; // Toggle: Toggle147
  state.layoutRecs[148] = (Rectangle){
    state.Origin.x + 480, state.Origin.y + 216, 24, 24
  }; // Toggle: Toggle148
  state.layoutRecs[149] = (Rectangle){
    state.Origin.x + 408, state.Origin.y + 240, 24, 24
  }; // Toggle: Toggle149
  state.layoutRecs[150] = (Rectangle){
    state.Origin.x + 432, state.Origin.y + 240, 24, 24
  }; // Toggle: Toggle150
  state.layoutRecs[151] = (Rectangle){
    state.Origin.x + 456, state.Origin.y + 240, 24, 24
  }; // Toggle: Toggle151
  state.layoutRecs[152] = (Rectangle){
    state.Origin.x + 480, state.Origin.y + 240, 24, 24
  }; // Toggle: Toggle152
  state.layoutRecs[153] = (Rectangle){
    state.Origin.x + 408, state.Origin.y + 264, 24, 24
  }; // Toggle: Toggle153
  state.layoutRecs[154] = (Rectangle){
    state.Origin.x + 432, state.Origin.y + 264, 24, 24
  }; // Toggle: Toggle154
  state.layoutRecs[155] = (Rectangle){
    state.Origin.x + 456, state.Origin.y + 264, 24, 24
  }; // Toggle: Toggle155
  state.layoutRecs[156] = (Rectangle){
    state.Origin.x + 480, state.Origin.y + 264, 24, 24
  }; // Toggle: Toggle156
  state.layoutRecs[157] = (Rectangle){
    state.Origin.x + 408, state.Origin.y + 288, 24, 24
  }; // Toggle: Toggle157
  state.layoutRecs[158] = (Rectangle){
    state.Origin.x + 432, state.Origin.y + 288, 24, 24
  }; // Toggle: Toggle158
  state.layoutRecs[159] = (Rectangle){
    state.Origin.x + 456, state.Origin.y + 288, 24, 24
  }; // Toggle: Toggle159
  state.layoutRecs[160] = (Rectangle){
    state.Origin.x + 480, state.Origin.y + 288, 24, 24
  }; // Toggle: Toggle160
  state.layoutRecs[161] = (Rectangle){
    state.Origin.x + 48, state.Origin.y + 336, 24, 24
  }; // Toggle: Toggle161
  state.layoutRecs[162] = (Rectangle){
    state.Origin.x + 72, state.Origin.y + 336, 24, 24
  }; // Toggle: Toggle162
  state.layoutRecs[163] = (Rectangle){
    state.Origin.x + 96, state.Origin.y + 336, 24, 24
  }; // Toggle: Toggle163
  state.layoutRecs[164] = (Rectangle){
    state.Origin.x + 120, state.Origin.y + 336, 24, 24
  }; // Toggle: Toggle164
  state.layoutRecs[165] = (Rectangle){
    state.Origin.x + 48, state.Origin.y + 360, 24, 24
  }; // Toggle: Toggle165
  state.layoutRecs[166] = (Rectangle){
    state.Origin.x + 72, state.Origin.y + 360, 24, 24
  }; // Toggle: Toggle166
  state.layoutRecs[167] = (Rectangle){
    state.Origin.x + 96, state.Origin.y + 360, 24, 24
  }; // Toggle: Toggle167
  state.layoutRecs[168] = (Rectangle){
    state.Origin.x + 120, state.Origin.y + 360, 24, 24
  }; // Toggle: Toggle168
  state.layoutRecs[169] = (Rectangle){
    state.Origin.x + 48, state.Origin.y + 384, 24, 24
  }; // Toggle: Toggle169
  state.layoutRecs[170] = (Rectangle){
    state.Origin.x + 72, state.Origin.y + 384, 24, 24
  }; // Toggle: Toggle170
  state.layoutRecs[171] = (Rectangle){
    state.Origin.x + 96, state.Origin.y + 384, 24, 24
  }; // Toggle: Toggle171
  state.layoutRecs[172] = (Rectangle){
    state.Origin.x + 120, state.Origin.y + 384, 24, 24
  }; // Toggle: Toggle172
  state.layoutRecs[173] = (Rectangle){
    state.Origin.x + 48, state.Origin.y + 408, 24, 24
  }; // Toggle: Toggle173
  state.layoutRecs[174] = (Rectangle){
    state.Origin.x + 72, state.Origin.y + 408, 24, 24
  }; // Toggle: Toggle174
  state.layoutRecs[175] = (Rectangle){
    state.Origin.x + 96, state.Origin.y + 408, 24, 24
  }; // Toggle: Toggle175
  state.layoutRecs[176] = (Rectangle){
    state.Origin.x + 120, state.Origin.y + 408, 24, 24
  }; // Toggle: Toggle176
  state.layoutRecs[177] = (Rectangle){
    state.Origin.x + 48, state.Origin.y + 432, 24, 24
  }; // Toggle: Toggle177
  state.layoutRecs[178] = (Rectangle){
    state.Origin.x + 72, state.Origin.y + 432, 24, 24
  }; // Toggle: Toggle178
  state.layoutRecs[179] = (Rectangle){
    state.Origin.x + 96, state.Origin.y + 432, 24, 24
  }; // Toggle: Toggle179
  state.layoutRecs[180] = (Rectangle){
    state.Origin.x + 120, state.Origin.y + 432, 24, 24
  }; // Toggle: Toggle180
  state.layoutRecs[181] = (Rectangle){
    state.Origin.x + 168, state.Origin.y + 336, 24, 24
  }; // Toggle: Toggle181
  state.layoutRecs[182] = (Rectangle){
    state.Origin.x + 192, state.Origin.y + 336, 24, 24
  }; // Toggle: Toggle182
  state.layoutRecs[183] = (Rectangle){
    state.Origin.x + 216, state.Origin.y + 336, 24, 24
  }; // Toggle: Toggle183
  state.layoutRecs[184] = (Rectangle){
    state.Origin.x + 240, state.Origin.y + 336, 24, 24
  }; // Toggle: Toggle184
  state.layoutRecs[185] = (Rectangle){
    state.Origin.x + 168, state.Origin.y + 360, 24, 24
  }; // Toggle: Toggle185
  state.layoutRecs[186] = (Rectangle){
    state.Origin.x + 192, state.Origin.y + 360, 24, 24
  }; // Toggle: Toggle186
  state.layoutRecs[187] = (Rectangle){
    state.Origin.x + 216, state.Origin.y + 360, 24, 24
  }; // Toggle: Toggle187
  state.layoutRecs[188] = (Rectangle){
    state.Origin.x + 240, state.Origin.y + 360, 24, 24
  }; // Toggle: Toggle188
  state.layoutRecs[189] = (Rectangle){
    state.Origin.x + 168, state.Origin.y + 384, 24, 24
  }; // Toggle: Toggle189
  state.layoutRecs[190] = (Rectangle){
    state.Origin.x + 192, state.Origin.y + 384, 24, 24
  }; // Toggle: Toggle190
  state.layoutRecs[191] = (Rectangle){
    state.Origin.x + 216, state.Origin.y + 384, 24, 24
  }; // Toggle: Toggle191
  state.layoutRecs[192] = (Rectangle){
    state.Origin.x + 240, state.Origin.y + 384, 24, 24
  }; // Toggle: Toggle192
  state.layoutRecs[193] = (Rectangle){
    state.Origin.x + 168, state.Origin.y + 408, 24, 24
  }; // Toggle: Toggle193
  state.layoutRecs[194] = (Rectangle){
    state.Origin.x + 192, state.Origin.y + 408, 24, 24
  }; // Toggle: Toggle194
  state.layoutRecs[195] = (Rectangle){
    state.Origin.x + 216, state.Origin.y + 408, 24, 24
  }; // Toggle: Toggle195
  state.layoutRecs[196] = (Rectangle){
    state.Origin.x + 240, state.Origin.y + 408, 24, 24
  }; // Toggle: Toggle196
  state.layoutRecs[197] = (Rectangle){
    state.Origin.x + 168, state.Origin.y + 432, 24, 24
  }; // Toggle: Toggle197
  state.layoutRecs[198] = (Rectangle){
    state.Origin.x + 192, state.Origin.y + 432, 24, 24
  }; // Toggle: Toggle198
  state.layoutRecs[199] = (Rectangle){
    state.Origin.x + 216, state.Origin.y + 432, 24, 24
  }; // Toggle: Toggle199
  state.layoutRecs[200] = (Rectangle){
    state.Origin.x + 240, state.Origin.y + 432, 24, 24
  }; // Toggle: Toggle200
  state.layoutRecs[201] = (Rectangle){
    state.Origin.x + 288, state.Origin.y + 336, 24, 24
  }; // Toggle: Toggle201
  state.layoutRecs[202] = (Rectangle){
    state.Origin.x + 312, state.Origin.y + 336, 24, 24
  }; // Toggle: Toggle202
  state.layoutRecs[203] = (Rectangle){
    state.Origin.x + 336, state.Origin.y + 336, 24, 24
  }; // Toggle: Toggle203
  state.layoutRecs[204] = (Rectangle){
    state.Origin.x + 360, state.Origin.y + 336, 24, 24
  }; // Toggle: Toggle204
  state.layoutRecs[205] = (Rectangle){
    state.Origin.x + 360, state.Origin.y + 360, 24, 24
  }; // Toggle: Toggle205
  state.layoutRecs[206] = (Rectangle){
    state.Origin.x + 336, state.Origin.y + 360, 24, 24
  }; // Toggle: Toggle206
  state.layoutRecs[207] = (Rectangle){
    state.Origin.x + 312, state.Origin.y + 360, 24, 24
  }; // Toggle: Toggle207
  state.layoutRecs[208] = (Rectangle){
    state.Origin.x + 288, state.Origin.y + 360, 24, 24
  }; // Toggle: Toggle208
  state.layoutRecs[209] = (Rectangle){
    state.Origin.x + 288, state.Origin.y + 384, 24, 24
  }; // Toggle: Toggle209
  state.layoutRecs[210] = (Rectangle){
    state.Origin.x + 312, state.Origin.y + 384, 24, 24
  }; // Toggle: Toggle210
  state.layoutRecs[211] = (Rectangle){
    state.Origin.x + 336, state.Origin.y + 384, 24, 24
  }; // Toggle: Toggle211
  state.layoutRecs[212] = (Rectangle){
    state.Origin.x + 360, state.Origin.y + 384, 24, 24
  }; // Toggle: Toggle212
  state.layoutRecs[213] = (Rectangle){
    state.Origin.x + 288, state.Origin.y + 408, 24, 24
  }; // Toggle: Toggle213
  state.layoutRecs[214] = (Rectangle){
    state.Origin.x + 312, state.Origin.y + 408, 24, 24
  }; // Toggle: Toggle214
  state.layoutRecs[215] = (Rectangle){
    state.Origin.x + 336, state.Origin.y + 408, 24, 24
  }; // Toggle: Toggle215
  state.layoutRecs[216] = (Rectangle){
    state.Origin.x + 360, state.Origin.y + 408, 24, 24
  }; // Toggle: Toggle216
  state.layoutRecs[217] = (Rectangle){
    state.Origin.x + 288, state.Origin.y + 432, 24, 24
  }; // Toggle: Toggle217
  state.layoutRecs[218] = (Rectangle){
    state.Origin.x + 312, state.Origin.y + 432, 24, 24
  }; // Toggle: Toggle218
  state.layoutRecs[219] = (Rectangle){
    state.Origin.x + 336, state.Origin.y + 432, 24, 24
  }; // Toggle: Toggle219
  state.layoutRecs[220] = (Rectangle){
    state.Origin.x + 360, state.Origin.y + 432, 24, 24
  }; // Toggle: Toggle220
  state.layoutRecs[221] = (Rectangle){
    state.Origin.x + 408, state.Origin.y + 336, 24, 24
  }; // Toggle: Toggle221
  state.layoutRecs[222] = (Rectangle){
    state.Origin.x + 432, state.Origin.y + 336, 24, 24
  }; // Toggle: Toggle222
  state.layoutRecs[223] = (Rectangle){
    state.Origin.x + 456, state.Origin.y + 336, 24, 24
  }; // Toggle: Toggle223
  state.layoutRecs[224] = (Rectangle){
    state.Origin.x + 480, state.Origin.y + 336, 24, 24
  }; // Toggle: Toggle224
  state.layoutRecs[225] = (Rectangle){
    state.Origin.x + 408, state.Origin.y + 360, 24, 24
  }; // Toggle: Toggle225
  state.layoutRecs[226] = (Rectangle){
    state.Origin.x + 432, state.Origin.y + 360, 24, 24
  }; // Toggle: Toggle226
  state.layoutRecs[227] = (Rectangle){
    state.Origin.x + 456, state.Origin.y + 360, 24, 24
  }; // Toggle: Toggle227
  state.layoutRecs[228] = (Rectangle){
    state.Origin.x + 480, state.Origin.y + 360, 24, 24
  }; // Toggle: Toggle228
  state.layoutRecs[229] = (Rectangle){
    state.Origin.x + 408, state.Origin.y + 384, 24, 24
  }; // Toggle: Toggle229
  state.layoutRecs[230] = (Rectangle){
    state.Origin.x + 432, state.Origin.y + 384, 24, 24
  }; // Toggle: Toggle230
  state.layoutRecs[231] = (Rectangle){
    state.Origin.x + 456, state.Origin.y + 384, 24, 24
  }; // Toggle: Toggle231
  state.layoutRecs[232] = (Rectangle){
    state.Origin.x + 480, state.Origin.y + 384, 24, 24
  }; // Toggle: Toggle232
  state.layoutRecs[233] = (Rectangle){
    state.Origin.x + 408, state.Origin.y + 408, 24, 24
  }; // Toggle: Toggle233
  state.layoutRecs[234] = (Rectangle){
    state.Origin.x + 432, state.Origin.y + 408, 24, 24
  }; // Toggle: Toggle234
  state.layoutRecs[235] = (Rectangle){
    state.Origin.x + 456, state.Origin.y + 408, 24, 24
  }; // Toggle: Toggle235
  state.layoutRecs[236] = (Rectangle){
    state.Origin.x + 480, state.Origin.y + 408, 24, 24
  }; // Toggle: Toggle236
  state.layoutRecs[237] = (Rectangle){
    state.Origin.x + 408, state.Origin.y + 432, 24, 24
  }; // Toggle: Toggle237
  state.layoutRecs[238] = (Rectangle){
    state.Origin.x + 432, state.Origin.y + 432, 24, 24
  }; // Toggle: Toggle238
  state.layoutRecs[239] = (Rectangle){
    state.Origin.x + 456, state.Origin.y + 432, 24, 24
  }; // Toggle: Toggle239
  state.layoutRecs[240] = (Rectangle){
    state.Origin.x + 480, state.Origin.y + 432, 24, 24
  }; // Toggle: Toggle240
  state.layoutRecs[241] = (Rectangle){
    state.Origin.x + 48, state.Origin.y + 480, 24, 24
  }; // Toggle: Toggle241
  state.layoutRecs[242] = (Rectangle){
    state.Origin.x + 72, state.Origin.y + 480, 24, 24
  }; // Toggle: Toggle242
  state.layoutRecs[243] = (Rectangle){
    state.Origin.x + 96, state.Origin.y + 480, 24, 24
  }; // Toggle: Toggle243
  state.layoutRecs[244] = (Rectangle){
    state.Origin.x + 120, state.Origin.y + 480, 24, 24
  }; // Toggle: Toggle244
  state.layoutRecs[245] = (Rectangle){
    state.Origin.x + 48, state.Origin.y + 504, 24, 24
  }; // Toggle: Toggle245
  state.layoutRecs[246] = (Rectangle){
    state.Origin.x + 72, state.Origin.y + 504, 24, 24
  }; // Toggle: Toggle246
  state.layoutRecs[247] = (Rectangle){
    state.Origin.x + 96, state.Origin.y + 504, 24, 24
  }; // Toggle: Toggle247
  state.layoutRecs[248] = (Rectangle){
    state.Origin.x + 120, state.Origin.y + 504, 24, 24
  }; // Toggle: Toggle248
  state.layoutRecs[249] = (Rectangle){
    state.Origin.x + 48, state.Origin.y + 528, 24, 24
  }; // Toggle: Toggle249
  state.layoutRecs[250] = (Rectangle){
    state.Origin.x + 72, state.Origin.y + 528, 24, 24
  }; // Toggle: Toggle250
  state.layoutRecs[251] = (Rectangle){
    state.Origin.x + 96, state.Origin.y + 528, 24, 24
  }; // Toggle: Toggle251
  state.layoutRecs[252] = (Rectangle){
    state.Origin.x + 120, state.Origin.y + 528, 24, 24
  }; // Toggle: Toggle252
  state.layoutRecs[253] = (Rectangle){
    state.Origin.x + 48, state.Origin.y + 552, 24, 24
  }; // Toggle: Toggle253
  state.layoutRecs[254] = (Rectangle){
    state.Origin.x + 72, state.Origin.y + 552, 24, 24
  }; // Toggle: Toggle254
  state.layoutRecs[255] = (Rectangle){
    state.Origin.x + 96, state.Origin.y + 552, 24, 24
  }; // Toggle: Toggle255
  state.layoutRecs[256] = (Rectangle){
    state.Origin.x + 120, state.Origin.y + 552, 24, 24
  }; // Toggle: Toggle256
  state.layoutRecs[257] = (Rectangle){
    state.Origin.x + 48, state.Origin.y + 576, 24, 24
  }; // Toggle: Toggle257
  state.layoutRecs[258] = (Rectangle){
    state.Origin.x + 72, state.Origin.y + 576, 24, 24
  }; // Toggle: Toggle258
  state.layoutRecs[259] = (Rectangle){
    state.Origin.x + 96, state.Origin.y + 576, 24, 24
  }; // Toggle: Toggle259
  state.layoutRecs[260] = (Rectangle){
    state.Origin.x + 120, state.Origin.y + 576, 24, 24
  }; // Toggle: Toggle260
  state.layoutRecs[261] = (Rectangle){
    state.Origin.x + 168, state.Origin.y + 480, 24, 24
  }; // Toggle: Toggle261
  state.layoutRecs[262] = (Rectangle){
    state.Origin.x + 192, state.Origin.y + 480, 24, 24
  }; // Toggle: Toggle262
  state.layoutRecs[263] = (Rectangle){
    state.Origin.x + 216, state.Origin.y + 480, 24, 24
  }; // Toggle: Toggle263
  state.layoutRecs[264] = (Rectangle){
    state.Origin.x + 240, state.Origin.y + 480, 24, 24
  }; // Toggle: Toggle264
  state.layoutRecs[265] = (Rectangle){
    state.Origin.x + 168, state.Origin.y + 504, 24, 24
  }; // Toggle: Toggle265
  state.layoutRecs[266] = (Rectangle){
    state.Origin.x + 192, state.Origin.y + 504, 24, 24
  }; // Toggle: Toggle266
  state.layoutRecs[267] = (Rectangle){
    state.Origin.x + 216, state.Origin.y + 504, 24, 24
  }; // Toggle: Toggle267
  state.layoutRecs[268] = (Rectangle){
    state.Origin.x + 240, state.Origin.y + 504, 24, 24
  }; // Toggle: Toggle268
  state.layoutRecs[269] = (Rectangle){
    state.Origin.x + 168, state.Origin.y + 528, 24, 24
  }; // Toggle: Toggle269
  state.layoutRecs[270] = (Rectangle){
    state.Origin.x + 192, state.Origin.y + 528, 24, 24
  }; // Toggle: Toggle270
  state.layoutRecs[271] = (Rectangle){
    state.Origin.x + 216, state.Origin.y + 528, 24, 24
  }; // Toggle: Toggle271
  state.layoutRecs[272] = (Rectangle){
    state.Origin.x + 240, state.Origin.y + 528, 24, 24
  }; // Toggle: Toggle272
  state.layoutRecs[273] = (Rectangle){
    state.Origin.x + 168, state.Origin.y + 552, 24, 24
  }; // Toggle: Toggle273
  state.layoutRecs[274] = (Rectangle){
    state.Origin.x + 192, state.Origin.y + 552, 24, 24
  }; // Toggle: Toggle274
  state.layoutRecs[275] = (Rectangle){
    state.Origin.x + 216, state.Origin.y + 552, 24, 24
  }; // Toggle: Toggle275
  state.layoutRecs[276] = (Rectangle){
    state.Origin.x + 240, state.Origin.y + 552, 24, 24
  }; // Toggle: Toggle276
  state.layoutRecs[277] = (Rectangle){
    state.Origin.x + 168, state.Origin.y + 576, 24, 24
  }; // Toggle: Toggle277
  state.layoutRecs[278] = (Rectangle){
    state.Origin.x + 192, state.Origin.y + 576, 24, 24
  }; // Toggle: Toggle278
  state.layoutRecs[279] = (Rectangle){
    state.Origin.x + 216, state.Origin.y + 576, 24, 24
  }; // Toggle: Toggle279
  state.layoutRecs[280] = (Rectangle){
    state.Origin.x + 240, state.Origin.y + 576, 24, 24
  }; // Toggle: Toggle280
  state.layoutRecs[281] = (Rectangle){
    state.Origin.x + 288, state.Origin.y + 480, 24, 24
  }; // Toggle: Toggle281
  state.layoutRecs[282] = (Rectangle){
    state.Origin.x + 312, state.Origin.y + 480, 24, 24
  }; // Toggle: Toggle282
  state.layoutRecs[283] = (Rectangle){
    state.Origin.x + 336, state.Origin.y + 480, 24, 24
  }; // Toggle: Toggle283
  state.layoutRecs[284] = (Rectangle){
    state.Origin.x + 360, state.Origin.y + 480, 24, 24
  }; // Toggle: Toggle284
  state.layoutRecs[285] = (Rectangle){
    state.Origin.x + 288, state.Origin.y + 504, 24, 24
  }; // Toggle: Toggle285
  state.layoutRecs[286] = (Rectangle){
    state.Origin.x + 312, state.Origin.y + 504, 24, 24
  }; // Toggle: Toggle286
  state.layoutRecs[287] = (Rectangle){
    state.Origin.x + 336, state.Origin.y + 504, 24, 24
  }; // Toggle: Toggle287
  state.layoutRecs[288] = (Rectangle){
    state.Origin.x + 360, state.Origin.y + 504, 24, 24
  }; // Toggle: Toggle288
  state.layoutRecs[289] = (Rectangle){
    state.Origin.x + 288, state.Origin.y + 528, 24, 24
  }; // Toggle: Toggle289
  state.layoutRecs[290] = (Rectangle){
    state.Origin.x + 312, state.Origin.y + 528, 24, 24
  }; // Toggle: Toggle290
  state.layoutRecs[291] = (Rectangle){
    state.Origin.x + 336, state.Origin.y + 528, 24, 24
  }; // Toggle: Toggle291
  state.layoutRecs[292] = (Rectangle){
    state.Origin.x + 360, state.Origin.y + 528, 24, 24
  }; // Toggle: Toggle292
  state.layoutRecs[293] = (Rectangle){
    state.Origin.x + 288, state.Origin.y + 552, 24, 24
  }; // Toggle: Toggle293
  state.layoutRecs[294] = (Rectangle){
    state.Origin.x + 312, state.Origin.y + 552, 24, 24
  }; // Toggle: Toggle294
  state.layoutRecs[295] = (Rectangle){
    state.Origin.x + 336, state.Origin.y + 552, 24, 24
  }; // Toggle: Toggle295
  state.layoutRecs[296] = (Rectangle){
    state.Origin.x + 360, state.Origin.y + 552, 24, 24
  }; // Toggle: Toggle296
  state.layoutRecs[297] = (Rectangle){
    state.Origin.x + 288, state.Origin.y + 576, 24, 24
  }; // Toggle: Toggle297
  state.layoutRecs[298] = (Rectangle){
    state.Origin.x + 312, state.Origin.y + 576, 24, 24
  }; // Toggle: Toggle298
  state.layoutRecs[299] = (Rectangle){
    state.Origin.x + 336, state.Origin.y + 576, 24, 24
  }; // Toggle: Toggle299
  state.layoutRecs[300] = (Rectangle){
    state.Origin.x + 360, state.Origin.y + 576, 24, 24
  }; // Toggle: Toggle300
  state.layoutRecs[301] = (Rectangle){
    state.Origin.x + 408, state.Origin.y + 480, 24, 24
  }; // Toggle: Toggle301
  state.layoutRecs[302] = (Rectangle){
    state.Origin.x + 432, state.Origin.y + 480, 24, 24
  }; // Toggle: Toggle302
  state.layoutRecs[303] = (Rectangle){
    state.Origin.x + 456, state.Origin.y + 480, 24, 24
  }; // Toggle: Toggle303
  state.layoutRecs[304] = (Rectangle){
    state.Origin.x + 480, state.Origin.y + 480, 24, 24
  }; // Toggle: Toggle304
  state.layoutRecs[305] = (Rectangle){
    state.Origin.x + 408, state.Origin.y + 504, 24, 24
  }; // Toggle: Toggle305
  state.layoutRecs[306] = (Rectangle){
    state.Origin.x + 432, state.Origin.y + 504, 24, 24
  }; // Toggle: Toggle306
  state.layoutRecs[307] = (Rectangle){
    state.Origin.x + 456, state.Origin.y + 504, 24, 24
  }; // Toggle: Toggle307
  state.layoutRecs[308] = (Rectangle){
    state.Origin.x + 480, state.Origin.y + 504, 24, 24
  }; // Toggle: Toggle308
  state.layoutRecs[309] = (Rectangle){
    state.Origin.x + 408, state.Origin.y + 528, 24, 24
  }; // Toggle: Toggle309
  state.layoutRecs[310] = (Rectangle){
    state.Origin.x + 432, state.Origin.y + 528, 24, 24
  }; // Toggle: Toggle310
  state.layoutRecs[311] = (Rectangle){
    state.Origin.x + 456, state.Origin.y + 528, 24, 24
  }; // Toggle: Toggle311
  state.layoutRecs[312] = (Rectangle){
    state.Origin.x + 480, state.Origin.y + 528, 24, 24
  }; // Toggle: Toggle312
  state.layoutRecs[313] = (Rectangle){
    state.Origin.x + 408, state.Origin.y + 552, 24, 24
  }; // Toggle: Toggle313
  state.layoutRecs[314] = (Rectangle){
    state.Origin.x + 432, state.Origin.y + 552, 24, 24
  }; // Toggle: Toggle314
  state.layoutRecs[315] = (Rectangle){
    state.Origin.x + 456, state.Origin.y + 552, 24, 24
  }; // Toggle: Toggle315
  state.layoutRecs[316] = (Rectangle){
    state.Origin.x + 480, state.Origin.y + 552, 24, 24
  }; // Toggle: Toggle316
  state.layoutRecs[317] = (Rectangle){
    state.Origin.x + 408, state.Origin.y + 576, 24, 24
  }; // Toggle: Toggle317
  state.layoutRecs[318] = (Rectangle){
    state.Origin.x + 432, state.Origin.y + 576, 24, 24
  }; // Toggle: Toggle318
  state.layoutRecs[319] = (Rectangle){
    state.Origin.x + 456, state.Origin.y + 576, 24, 24
  }; // Toggle: Toggle319
  state.layoutRecs[320] = (Rectangle){
    state.Origin.x + 480, state.Origin.y + 576, 24, 24
  }; // Toggle: Toggle320
  state.layoutRecs[321] = (Rectangle){
    state.Origin.x + 552, state.Origin.y + 24, 336, 304
  }; // GroupBox: OutputFontBox
  state.layoutRecs[322] = (Rectangle){
    state.Origin.x + 560, state.Origin.y + 40, 320, 272
  }; // TextBox: OuputFontTextBox
  state.layoutRecs[323] = (Rectangle){
    state.Origin.x + 552, state.Origin.y + 360, 336, 72
  }; // GroupBox: FontFormatBox
  state.layoutRecs[324] = (Rectangle){
    state.Origin.x + 568, state.Origin.y + 384, 72, 24
  }; // Button: OutputInHexButton
  state.layoutRecs[325] = (Rectangle){
    state.Origin.x + 680, state.Origin.y + 384, 72, 24
  }; // Button: OutputInDecimalButton
  state.layoutRecs[326] = (Rectangle){
    state.Origin.x + 800, state.Origin.y + 384, 72, 24
  }; // Button: OutputInBinaryButton
  state.layoutRecs[327] = (Rectangle){
    state.Origin.x + 648, state.Origin.y + 464, 144, 48
  }; // Button: Button327
  state.layoutRecs[328] = (Rectangle){
    state.Origin.x + 88, state.Origin.y + 168, 10, 24
  }; // Label: Label328
  state.layoutRecs[329] = (Rectangle){
    state.Origin.x + 208, state.Origin.y + 168, 10, 24
  }; // Label: Label329
  state.layoutRecs[330] = (Rectangle){
    state.Origin.x + 328, state.Origin.y + 168, 10, 24
  }; // Label: Label330
  state.layoutRecs[331] = (Rectangle){
    state.Origin.x + 448, state.Origin.y + 168, 10, 24
  }; // Label: Label331
  state.layoutRecs[332] = (Rectangle){
    state.Origin.x + 88, state.Origin.y + 312, 10, 24
  }; // Label: Label332
  state.layoutRecs[333] = (Rectangle){
    state.Origin.x + 208, state.Origin.y + 312, 10, 24
  }; // Label: Label333
  state.layoutRecs[334] = (Rectangle){
    state.Origin.x + 328, state.Origin.y + 312, 10, 24
  }; // Label: Label334
  state.layoutRecs[335] = (Rectangle){
    state.Origin.x + 448, state.Origin.y + 312, 10, 24
  }; // Label: Label335
  state.layoutRecs[336] = (Rectangle){
    state.Origin.x + 88, state.Origin.y + 456, 10, 24
  }; // Label: Label336
  state.layoutRecs[337] = (Rectangle){
    state.Origin.x + 208, state.Origin.y + 456, 10, 24
  }; // Label: Label337
  state.layoutRecs[338] = (Rectangle){
    state.Origin.x + 328, state.Origin.y + 456, 10, 24
  }; // Label: Label338
  state.layoutRecs[339] = (Rectangle){
    state.Origin.x + 448, state.Origin.y + 456, 10, 24
  }; // Label: Label339
  state.layoutRecs[340] = (Rectangle){
    state.Origin.x + 88, state.Origin.y + 600, 10, 24
  }; // Label: Label340
  state.layoutRecs[341] = (Rectangle){
    state.Origin.x + 208, state.Origin.y + 600, 10, 24
  }; // Label: Label341
  state.layoutRecs[342] = (Rectangle){
    state.Origin.x + 328, state.Origin.y + 600, 10, 24
  }; // Label: Label342
  state.layoutRecs[343] = (Rectangle){
    state.Origin.x + 448, state.Origin.y + 600, 10, 24
  }; // Label: Label343
  state.layoutRecs[344] = (Rectangle){
    state.Origin.x + 552, state.Origin.y + 544, 120, 24
  }; // Button: ResetEditorButton
  state.layoutRecs[345] = (Rectangle){
    state.Origin.x + 720, state.Origin.y + 544, 72, 24
  }; // Button: LightThemeButton
  state.layoutRecs[346] = (Rectangle){
    state.Origin.x + 816, state.Origin.y + 544, 72, 24
  }; // Button: DarkThemeButton

  // Custom variables initialization

  return state;
}
// Button: OutputInHexButton logic
static void
OutputInHexButton()
{
  // TODO: Implement control logic
}
// Button: OutputInDecimalButton logic
static void
OutputInDecimalButton()
{
  // TODO: Implement control logic
}
// Button: OutputInBinaryButton logic
static void
OutputInBinaryButton()
{
  // TODO: Implement control logic
}
// Button: Button327 logic
static void
Button327()
{
  // TODO: Implement control logic
}
// Button: ResetEditorButton logic
static void
ResetEditorButton()
{
  // TODO: Implement control logic
}
// Button: LightThemeButton logic
static void
LightThemeButton()
{
  // TODO: Implement control logic
}
// Button: DarkThemeButton logic
static void
DarkThemeButton()
{
  // TODO: Implement control logic
}

void
GuiChip8FontGenerator(GuiChip8FontGeneratorState* state)
{
  // Const text
  const char* PixelEditorBoxText = "Pixel Editor"; // GROUPBOX: PixelEditorBox
  const char* OutputFontBoxText = "Output Font";   // GROUPBOX: OutputFontBox
  const char* FontFormatBoxText = "Font Format";   // GROUPBOX: FontFormatBox
  const char* OutputInHexButtonText = "Hex";       // BUTTON: OutputInHexButton
  const char* OutputInDecimalButtonText =
    "Decimal"; // BUTTON: OutputInDecimalButton
  const char* OutputInBinaryButtonText =
    "Binary";                                  // BUTTON: OutputInBinaryButton
  const char* Button327Text = "Generate Font"; // BUTTON: Button327
  const char* Label328Text = "0";              // LABEL: Label328
  const char* Label329Text = "1";              // LABEL: Label329
  const char* Label330Text = "2";              // LABEL: Label330
  const char* Label331Text = "3";              // LABEL: Label331
  const char* Label332Text = "4";              // LABEL: Label332
  const char* Label333Text = "5";              // LABEL: Label333
  const char* Label334Text = "6";              // LABEL: Label334
  const char* Label335Text = "7";              // LABEL: Label335
  const char* Label336Text = "8";              // LABEL: Label336
  const char* Label337Text = "9";              // LABEL: Label337
  const char* Label338Text = "A";              // LABEL: Label338
  const char* Label339Text = "B";              // LABEL: Label339
  const char* Label340Text = "C";              // LABEL: Label340
  const char* Label341Text = "D";              // LABEL: Label341
  const char* Label342Text = "E";              // LABEL: Label342
  const char* Label343Text = "F";              // LABEL: Label343
  const char* ResetEditorButtonText =
    "Reset Editor";                           // BUTTON: ResetEditorButton
  const char* LightThemeButtonText = "Light"; // BUTTON: LightThemeButton
  const char* DarkThemeButtonText = "Dark";   // BUTTON: DarkThemeButton

  // Draw controls
  GuiGroupBox(state->layoutRecs[0], PixelEditorBoxText);
  for (int i = 1; i <= TOTAL_TOGGLE_COUNT; i++)
    GuiToggle(state->layoutRecs[i], "", &state->ToggleActive[i - 1]);
  GuiGroupBox(state->layoutRecs[321], OutputFontBoxText);
  if (GuiTextBox(state->layoutRecs[322],
                 state->OuputFontTextBoxText,
                 128,
                 state->OuputFontTextBoxEditMode))
    state->OuputFontTextBoxEditMode = !state->OuputFontTextBoxEditMode;
  GuiGroupBox(state->layoutRecs[323], FontFormatBoxText);
  if (GuiButton(state->layoutRecs[324], OutputInHexButtonText))
    OutputInHexButton();
  if (GuiButton(state->layoutRecs[325], OutputInDecimalButtonText))
    OutputInDecimalButton();
  if (GuiButton(state->layoutRecs[326], OutputInBinaryButtonText))
    OutputInBinaryButton();
  if (GuiButton(state->layoutRecs[327], Button327Text))
    Button327();
  GuiLabel(state->layoutRecs[328], Label328Text);
  GuiLabel(state->layoutRecs[329], Label329Text);
  GuiLabel(state->layoutRecs[330], Label330Text);
  GuiLabel(state->layoutRecs[331], Label331Text);
  GuiLabel(state->layoutRecs[332], Label332Text);
  GuiLabel(state->layoutRecs[333], Label333Text);
  GuiLabel(state->layoutRecs[334], Label334Text);
  GuiLabel(state->layoutRecs[335], Label335Text);
  GuiLabel(state->layoutRecs[336], Label336Text);
  GuiLabel(state->layoutRecs[337], Label337Text);
  GuiLabel(state->layoutRecs[338], Label338Text);
  GuiLabel(state->layoutRecs[339], Label339Text);
  GuiLabel(state->layoutRecs[340], Label340Text);
  GuiLabel(state->layoutRecs[341], Label341Text);
  GuiLabel(state->layoutRecs[342], Label342Text);
  GuiLabel(state->layoutRecs[343], Label343Text);
  if (GuiButton(state->layoutRecs[344], ResetEditorButtonText))
    ResetEditorButton();
  if (GuiButton(state->layoutRecs[345], LightThemeButtonText))
    LightThemeButton();
  if (GuiButton(state->layoutRecs[346], DarkThemeButtonText))
    DarkThemeButton();
}

#endif // GUI_CHIP8FONTGENERATOR_IMPLEMENTATION
