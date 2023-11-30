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
 *   LICENSE: Icebarf's License
 *
 *   Copyright (c) 2023 Amritpal Singh. All Rights Reserved.
 *
 *
 **********************************************************************************************/

#include "raylib.h"

// WARNING: raygui implementation is expected to be defined before including
// this header
#undef RAYGUI_IMPLEMENTATION
#include "raygui.h"

#include <stdint.h> // Required for: N-wide integer types
#include <stdio.h>  // Required for: fprintf()
#include <string.h> // Required for: strcpy()

/* Styles or Themes for the program */
#include "cyberc8.rgs.h"
#include "lightc8.rgs.h"

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
    LayoutRecsCount = 347,
    OUTPUT_TEXT_MAX = 512,
  };

  // Define controls variables
  bool ToggleActive[TOTAL_TOGGLE_COUNT]; // Toggle: Toggle button active
  bool OuputFontTextBoxEditMode;
  bool currentTheme;
  char OuputFontTextBoxText[OUTPUT_TEXT_MAX]; // TextBox: OuputFontTextBox

  // Define rectangles
  Rectangle layoutRecs[LayoutRecsCount];

  // Custom state variables (depend on development software)
  // NOTE: This variables should be added manually if required

  uint8_t Sprites[16][5];

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
  static void GenerateFontButton(); // Button: GenerateFontButton logic
  static void ResetEditorButton();  // Button: ResetEditorButton logic
  static void CopyToClipboardButton(const char (
    *OutputText)[OUTPUT_TEXT_MAX]); // Button: CopyToClipboardButton logic
  static void ToggleThemeButton();  // Button: ToggleThemeButton logic

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
// Module Functions Definition
//----------------------------------------------------------------------------------
GuiChip8FontGeneratorState
InitGuiChip8FontGenerator(void)
{
  GuiChip8FontGeneratorState state = { 0 };

  // Init anchors
  state.Origin = (Vector2){ 0, 0 }; // ANCHOR ID:1

  // Initilize controls variables

  /* Note to self: "true" here indicates off state in the pixel editor.
   * "false" will obviously indicate on state in the pixel editor.
   */
  for (int i = 0; i < TOTAL_TOGGLE_COUNT; i++)
    state.ToggleActive[i] = true;
  state.OuputFontTextBoxEditMode = false;
  strcpy(state.OuputFontTextBoxText, ""); // TextBox: OuputFontTextBox

  Rectangle OffsetAndDimensions[] = {
    // offset from X, offset from Y, width, height
    { 24, 24, 504, 600 },  { 48, 48, 24, 24 },    { 72, 48, 24, 24 },
    { 96, 48, 24, 24 },    { 120, 48, 24, 24 },   { 48, 72, 24, 24 },
    { 72, 72, 24, 24 },    { 96, 72, 24, 24 },    { 120, 72, 24, 24 },
    { 48, 96, 24, 24 },    { 72, 96, 24, 24 },    { 96, 96, 24, 24 },
    { 120, 96, 24, 24 },   { 48, 120, 24, 24 },   { 72, 120, 24, 24 },
    { 96, 120, 24, 24 },   { 120, 120, 24, 24 },  { 48, 144, 24, 24 },
    { 72, 144, 24, 24 },   { 96, 144, 24, 24 },   { 120, 144, 24, 24 },
    { 168, 48, 24, 24 },   { 192, 48, 24, 24 },   { 216, 48, 24, 24 },
    { 240, 48, 24, 24 },   { 168, 72, 24, 24 },   { 192, 72, 24, 24 },
    { 216, 72, 24, 24 },   { 240, 72, 24, 24 },   { 168, 96, 24, 24 },
    { 192, 96, 24, 24 },   { 216, 96, 24, 24 },   { 240, 96, 24, 24 },
    { 168, 120, 24, 24 },  { 192, 120, 24, 24 },  { 216, 120, 24, 24 },
    { 240, 120, 24, 24 },  { 168, 144, 24, 24 },  { 192, 144, 24, 24 },
    { 216, 144, 24, 24 },  { 240, 144, 24, 24 },  { 288, 48, 24, 24 },
    { 312, 48, 24, 24 },   { 336, 48, 24, 24 },   { 360, 48, 24, 24 },
    { 288, 72, 24, 24 },   { 312, 72, 24, 24 },   { 336, 72, 24, 24 },
    { 360, 72, 24, 24 },   { 288, 96, 24, 24 },   { 312, 96, 24, 24 },
    { 336, 96, 24, 24 },   { 360, 96, 24, 24 },   { 288, 120, 24, 24 },
    { 312, 120, 24, 24 },  { 336, 120, 24, 24 },  { 360, 120, 24, 24 },
    { 288, 144, 24, 24 },  { 312, 144, 24, 24 },  { 336, 144, 24, 24 },
    { 360, 144, 24, 24 },  { 408, 48, 24, 24 },   { 432, 48, 24, 24 },
    { 456, 48, 24, 24 },   { 480, 48, 24, 24 },   { 408, 72, 24, 24 },
    { 432, 72, 24, 24 },   { 456, 72, 24, 24 },   { 480, 72, 24, 24 },
    { 408, 96, 24, 24 },   { 432, 96, 24, 24 },   { 456, 96, 24, 24 },
    { 480, 96, 24, 24 },   { 408, 120, 24, 24 },  { 432, 120, 24, 24 },
    { 456, 120, 24, 24 },  { 480, 120, 24, 24 },  { 408, 144, 24, 24 },
    { 432, 144, 24, 24 },  { 456, 144, 24, 24 },  { 480, 144, 24, 24 },
    { 48, 192, 24, 24 },   { 72, 192, 24, 24 },   { 96, 192, 24, 24 },
    { 120, 192, 24, 24 },  { 48, 216, 24, 24 },   { 72, 216, 24, 24 },
    { 96, 216, 24, 24 },   { 120, 216, 24, 24 },  { 48, 240, 24, 24 },
    { 72, 240, 24, 24 },   { 96, 240, 24, 24 },   { 120, 240, 24, 24 },
    { 48, 264, 24, 24 },   { 72, 264, 24, 24 },   { 96, 264, 24, 24 },
    { 120, 264, 24, 24 },  { 48, 288, 24, 24 },   { 72, 288, 24, 24 },
    { 96, 288, 24, 24 },   { 120, 288, 24, 24 },  { 168, 192, 24, 24 },
    { 192, 192, 24, 24 },  { 216, 192, 24, 24 },  { 240, 192, 24, 24 },
    { 168, 216, 24, 24 },  { 192, 216, 24, 24 },  { 216, 216, 24, 24 },
    { 240, 216, 24, 24 },  { 168, 240, 24, 24 },  { 192, 240, 24, 24 },
    { 216, 240, 24, 24 },  { 240, 240, 24, 24 },  { 168, 264, 24, 24 },
    { 192, 264, 24, 24 },  { 216, 264, 24, 24 },  { 240, 264, 24, 24 },
    { 168, 288, 24, 24 },  { 192, 288, 24, 24 },  { 216, 288, 24, 24 },
    { 240, 288, 24, 24 },  { 288, 192, 24, 24 },  { 312, 192, 24, 24 },
    { 336, 192, 24, 24 },  { 360, 192, 24, 24 },  { 288, 216, 24, 24 },
    { 312, 216, 24, 24 },  { 336, 216, 24, 24 },  { 360, 216, 24, 24 },
    { 288, 240, 24, 24 },  { 312, 240, 24, 24 },  { 336, 240, 24, 24 },
    { 360, 240, 24, 24 },  { 288, 264, 24, 24 },  { 312, 264, 24, 24 },
    { 336, 264, 24, 24 },  { 360, 264, 24, 24 },  { 288, 288, 24, 24 },
    { 312, 288, 24, 24 },  { 336, 288, 24, 24 },  { 360, 288, 24, 24 },
    { 408, 192, 24, 24 },  { 432, 192, 24, 24 },  { 456, 192, 24, 24 },
    { 480, 192, 24, 24 },  { 408, 216, 24, 24 },  { 432, 216, 24, 24 },
    { 456, 216, 24, 24 },  { 480, 216, 24, 24 },  { 408, 240, 24, 24 },
    { 432, 240, 24, 24 },  { 456, 240, 24, 24 },  { 480, 240, 24, 24 },
    { 408, 264, 24, 24 },  { 432, 264, 24, 24 },  { 456, 264, 24, 24 },
    { 480, 264, 24, 24 },  { 408, 288, 24, 24 },  { 432, 288, 24, 24 },
    { 456, 288, 24, 24 },  { 480, 288, 24, 24 },  { 48, 336, 24, 24 },
    { 72, 336, 24, 24 },   { 96, 336, 24, 24 },   { 120, 336, 24, 24 },
    { 48, 360, 24, 24 },   { 72, 360, 24, 24 },   { 96, 360, 24, 24 },
    { 120, 360, 24, 24 },  { 48, 384, 24, 24 },   { 72, 384, 24, 24 },
    { 96, 384, 24, 24 },   { 120, 384, 24, 24 },  { 48, 408, 24, 24 },
    { 72, 408, 24, 24 },   { 96, 408, 24, 24 },   { 120, 408, 24, 24 },
    { 48, 432, 24, 24 },   { 72, 432, 24, 24 },   { 96, 432, 24, 24 },
    { 120, 432, 24, 24 },  { 168, 336, 24, 24 },  { 192, 336, 24, 24 },
    { 216, 336, 24, 24 },  { 240, 336, 24, 24 },  { 168, 360, 24, 24 },
    { 192, 360, 24, 24 },  { 216, 360, 24, 24 },  { 240, 360, 24, 24 },
    { 168, 384, 24, 24 },  { 192, 384, 24, 24 },  { 216, 384, 24, 24 },
    { 240, 384, 24, 24 },  { 168, 408, 24, 24 },  { 192, 408, 24, 24 },
    { 216, 408, 24, 24 },  { 240, 408, 24, 24 },  { 168, 432, 24, 24 },
    { 192, 432, 24, 24 },  { 216, 432, 24, 24 },  { 240, 432, 24, 24 },
    { 288, 336, 24, 24 },  { 312, 336, 24, 24 },  { 336, 336, 24, 24 },
    { 360, 336, 24, 24 },  { 360, 360, 24, 24 },  { 336, 360, 24, 24 },
    { 312, 360, 24, 24 },  { 288, 360, 24, 24 },  { 288, 384, 24, 24 },
    { 312, 384, 24, 24 },  { 336, 384, 24, 24 },  { 360, 384, 24, 24 },
    { 288, 408, 24, 24 },  { 312, 408, 24, 24 },  { 336, 408, 24, 24 },
    { 360, 408, 24, 24 },  { 288, 432, 24, 24 },  { 312, 432, 24, 24 },
    { 336, 432, 24, 24 },  { 360, 432, 24, 24 },  { 408, 336, 24, 24 },
    { 432, 336, 24, 24 },  { 456, 336, 24, 24 },  { 480, 336, 24, 24 },
    { 408, 360, 24, 24 },  { 432, 360, 24, 24 },  { 456, 360, 24, 24 },
    { 480, 360, 24, 24 },  { 408, 384, 24, 24 },  { 432, 384, 24, 24 },
    { 456, 384, 24, 24 },  { 480, 384, 24, 24 },  { 408, 408, 24, 24 },
    { 432, 408, 24, 24 },  { 456, 408, 24, 24 },  { 480, 408, 24, 24 },
    { 408, 432, 24, 24 },  { 432, 432, 24, 24 },  { 456, 432, 24, 24 },
    { 480, 432, 24, 24 },  { 48, 480, 24, 24 },   { 72, 480, 24, 24 },
    { 96, 480, 24, 24 },   { 120, 480, 24, 24 },  { 48, 504, 24, 24 },
    { 72, 504, 24, 24 },   { 96, 504, 24, 24 },   { 120, 504, 24, 24 },
    { 48, 528, 24, 24 },   { 72, 528, 24, 24 },   { 96, 528, 24, 24 },
    { 120, 528, 24, 24 },  { 48, 552, 24, 24 },   { 72, 552, 24, 24 },
    { 96, 552, 24, 24 },   { 120, 552, 24, 24 },  { 48, 576, 24, 24 },
    { 72, 576, 24, 24 },   { 96, 576, 24, 24 },   { 120, 576, 24, 24 },
    { 168, 480, 24, 24 },  { 192, 480, 24, 24 },  { 216, 480, 24, 24 },
    { 240, 480, 24, 24 },  { 168, 504, 24, 24 },  { 192, 504, 24, 24 },
    { 216, 504, 24, 24 },  { 240, 504, 24, 24 },  { 168, 528, 24, 24 },
    { 192, 528, 24, 24 },  { 216, 528, 24, 24 },  { 240, 528, 24, 24 },
    { 168, 552, 24, 24 },  { 192, 552, 24, 24 },  { 216, 552, 24, 24 },
    { 240, 552, 24, 24 },  { 168, 576, 24, 24 },  { 192, 576, 24, 24 },
    { 216, 576, 24, 24 },  { 240, 576, 24, 24 },  { 288, 480, 24, 24 },
    { 312, 480, 24, 24 },  { 336, 480, 24, 24 },  { 360, 480, 24, 24 },
    { 288, 504, 24, 24 },  { 312, 504, 24, 24 },  { 336, 504, 24, 24 },
    { 360, 504, 24, 24 },  { 288, 528, 24, 24 },  { 312, 528, 24, 24 },
    { 336, 528, 24, 24 },  { 360, 528, 24, 24 },  { 288, 552, 24, 24 },
    { 312, 552, 24, 24 },  { 336, 552, 24, 24 },  { 360, 552, 24, 24 },
    { 288, 576, 24, 24 },  { 312, 576, 24, 24 },  { 336, 576, 24, 24 },
    { 360, 576, 24, 24 },  { 408, 480, 24, 24 },  { 432, 480, 24, 24 },
    { 456, 480, 24, 24 },  { 480, 480, 24, 24 },  { 408, 504, 24, 24 },
    { 432, 504, 24, 24 },  { 456, 504, 24, 24 },  { 480, 504, 24, 24 },
    { 408, 528, 24, 24 },  { 432, 528, 24, 24 },  { 456, 528, 24, 24 },
    { 480, 528, 24, 24 },  { 408, 552, 24, 24 },  { 432, 552, 24, 24 },
    { 456, 552, 24, 24 },  { 480, 552, 24, 24 },  { 408, 576, 24, 24 },
    { 432, 576, 24, 24 },  { 456, 576, 24, 24 },  { 480, 576, 24, 24 },
    { 552, 24, 336, 304 }, { 560, 40, 320, 272 }, { 552, 360, 336, 72 },
    { 568, 384, 72, 24 },  { 680, 384, 72, 24 },  { 800, 384, 72, 24 },
    { 648, 414, 144, 48 }, { 88, 168, 10, 24 },   { 208, 168, 10, 24 },
    { 328, 168, 10, 24 },  { 448, 168, 10, 24 },  { 88, 312, 10, 24 },
    { 208, 312, 10, 24 },  { 328, 312, 10, 24 },  { 448, 312, 10, 24 },
    { 88, 456, 10, 24 },   { 208, 456, 10, 24 },  { 328, 456, 10, 24 },
    { 448, 456, 10, 24 },  { 88, 600, 10, 24 },   { 208, 600, 10, 24 },
    { 328, 600, 10, 24 },  { 448, 600, 10, 24 },  { 552, 544, 120, 24 },
    { 720, 544, 72, 24 },  { 816, 544, 72, 24 },
  };

  for (int i = 0; i < LayoutRecsCount; i++)
    state.layoutRecs[i] = OffsetAndDimensions[i];

  // Custom variables initialization

  return state;
}

uint8_t
PixelToByte(bool px0, bool px1, bool px2, bool px3)
{
  uint8_t sprite_unit = 0;
  if (!px0)
    sprite_unit |= 0x80;
  if (!px1)
    sprite_unit |= 0x40;
  if (!px2)
    sprite_unit |= 0x20;
  if (!px3)
    sprite_unit |= 0x10;

  return sprite_unit;
}

static void
FindSprites(uint8_t (*Sprites)[16][5], bool (*pixels)[TOTAL_TOGGLE_COUNT])
{
  for (int i = 0; i < TOTAL_TOGGLE_COUNT; i += 20) {
    (*Sprites)[i / 20][0] = PixelToByte(
      (*pixels)[i + 0], (*pixels)[i + 1], (*pixels)[i + 2], (*pixels)[i + 3]);
    (*Sprites)[i / 20][1] = PixelToByte((*pixels)[4 + i + 0],
                                        (*pixels)[4 + i + 1],
                                        (*pixels)[4 + i + 2],
                                        (*pixels)[4 + i + 3]);
    (*Sprites)[i / 20][2] = PixelToByte((*pixels)[8 + i + 0],
                                        (*pixels)[8 + i + 1],
                                        (*pixels)[8 + i + 2],
                                        (*pixels)[8 + i + 3]);
    (*Sprites)[i / 20][3] = PixelToByte((*pixels)[12 + i + 0],
                                        (*pixels)[12 + i + 1],
                                        (*pixels)[12 + i + 2],
                                        (*pixels)[12 + i + 3]);
    (*Sprites)[i / 20][4] = PixelToByte((*pixels)[16 + i + 0],
                                        (*pixels)[16 + i + 1],
                                        (*pixels)[16 + i + 2],
                                        (*pixels)[16 + i + 3]);
  }
}

static void
PutInTextBox(char (*OutText)[OUTPUT_TEXT_MAX], uint8_t (*Sprites)[16][5])
{
  for (int i = 0, index = 0; i < 16; i++, index += 28) {
    snprintf(&(*OutText)[30 * i],
             31,
             "0x%2x, 0x%2x, 0x%2x, 0x%2x, 0x%2x,\n",
             (*Sprites)[i][0],
             (*Sprites)[i][1],
             (*Sprites)[i][2],
             (*Sprites)[i][3],
             (*Sprites)[i][4]);
  }
}

// Button: GenerateFontButton logic
static void
GenerateFontButton(GuiChip8FontGeneratorState* state)
{
  FindSprites(&state->Sprites, &state->ToggleActive);
  PutInTextBox(&state->OuputFontTextBoxText, &state->Sprites);
}
// Button: ResetEditorButton logic
static void
ResetEditorButton(bool (*toggles)[320])
{
  for (int i = 0; i < 320; i++)
    (*toggles)[i] = true;
}
// Button: CopyToClipboardButton logic
static void
CopyToClipboardButton(const char (*OutputText)[OUTPUT_TEXT_MAX])
{
  SetClipboardText(*OutputText);
}
// Button: ToggleThemeButton logic
static void
ToggleThemeButton(bool* currentTheme)
{
  if (*currentTheme) {
    GuiLoadStyleCyberC8();
    *currentTheme = false;
    return;
  }

  GuiLoadStyleDefault();
  GuiLoadStyleLightC8();
  *currentTheme = true;
}

void
GuiChip8FontGenerator(GuiChip8FontGeneratorState* state)
{
  // Const text
  const char* PixelEditorBoxText = "Pixel Editor"; // GROUPBOX: PixelEditorBox
  const char* OutputFontBoxText = "Output Font";   // GROUPBOX: OutputFontBox
  const char* GenerateFontButtonText =
    "Generate Font";              // BUTTON: GenerateFontButton
  const char* Label328Text = "0"; // LABEL: Label328
  const char* Label329Text = "1"; // LABEL: Label329
  const char* Label330Text = "2"; // LABEL: Label330
  const char* Label331Text = "3"; // LABEL: Label331
  const char* Label332Text = "4"; // LABEL: Label332
  const char* Label333Text = "5"; // LABEL: Label333
  const char* Label334Text = "6"; // LABEL: Label334
  const char* Label335Text = "7"; // LABEL: Label335
  const char* Label336Text = "8"; // LABEL: Label336
  const char* Label337Text = "9"; // LABEL: Label337
  const char* Label338Text = "A"; // LABEL: Label338
  const char* Label339Text = "B"; // LABEL: Label339
  const char* Label340Text = "C"; // LABEL: Label340
  const char* Label341Text = "D"; // LABEL: Label341
  const char* Label342Text = "E"; // LABEL: Label342
  const char* Label343Text = "F"; // LABEL: Label343
  const char* ResetEditorButtonText =
    "Reset Editor"; // BUTTON: ResetEditorButton
  const char* CopyToClipboardButtonText =
    "Copy font"; // BUTTON: CopyToClipboardButton
  const char* ToggleThemeButtonText =
    "Toggle Theme"; // BUTTON: ToggleThemeButton

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
  if (GuiButton(state->layoutRecs[327], GenerateFontButtonText))
    GenerateFontButton(state);
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
    ResetEditorButton(&state->ToggleActive);
  if (GuiButton(state->layoutRecs[345], CopyToClipboardButtonText))
    CopyToClipboardButton(&state->OuputFontTextBoxText);
  if (GuiButton(state->layoutRecs[346], ToggleThemeButtonText))
    ToggleThemeButton(&state->currentTheme);
}

#endif // GUI_CHIP8FONTGENERATOR_IMPLEMENTATION
