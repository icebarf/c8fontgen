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
  Vector2 anchor01; // ANCHOR ID:2

  // Define controls variables
  bool OutputTextBoxEditMode;
  char OutputTextBoxText[128]; // TextBox: OutputTextBox
  bool Editor0Pix4Active;      // Toggle: Editor0Pix4
  bool Editor0Pix8Active;      // Toggle: Editor0Pix8
  bool Editor0Pix12Active;     // Toggle: Editor0Pix12
  bool Editor0Pix16Active;     // Toggle: Editor0Pix16
  bool Editor0Pix17Active;     // Toggle: Editor0Pix17
  bool Editor0Pix18Active;     // Toggle: Editor0Pix18
  bool Editor0Pix19Active;     // Toggle: Editor0Pix19
  bool Editor0Pix13Active;     // Toggle: Editor0Pix13
  bool Editor0Pix14Active;     // Toggle: Editor0Pix14
  bool Editor0Pix15Active;     // Toggle: Editor0Pix15
  bool Editor0Pix9Active;      // Toggle: Editor0Pix9
  bool Editor0Pix10Active;     // Toggle: Editor0Pix10
  bool Editor0Pix11Active;     // Toggle: Editor0Pix11
  bool Editor0Pix1Active;      // Toggle: Editor0Pix1
  bool Editor0Pix2Active;      // Toggle: Editor0Pix2
  bool Editor0Pix3Active;      // Toggle: Editor0Pix3
  bool Editor0Pix7Active;      // Toggle: Editor0Pix7
  bool Editor0Pix6Active;      // Toggle: Editor0Pix6
  bool Editor0Pix5Active;      // Toggle: Editor0Pix5
  bool Editor1Pix8Active;      // Toggle: Editor1Pix8
  bool Editor1Pix12Active;     // Toggle: Editor1Pix12
  bool Editor1Pix16Active;     // Toggle: Editor1Pix16
  bool Edotor1Pix4Active;      // Toggle: Edotor1Pix4
  bool Editor1Pix0Active;      // Toggle: Editor1Pix0
  bool Editor1Pix1Active;      // Toggle: Editor1Pix1
  bool Editor1Pix2Active;      // Toggle: Editor1Pix2
  bool Editor1Pix3Active;      // Toggle: Editor1Pix3
  bool Editor1Pix7Active;      // Toggle: Editor1Pix7
  bool Editor1Pix5Active;      // Toggle: Editor1Pix5
  bool Editor1Pix17Active;     // Toggle: Editor1Pix17
  bool Editor1Pix18Active;     // Toggle: Editor1Pix18
  bool Editor1Pix19Active;     // Toggle: Editor1Pix19
  bool Editor1Pix9Active;      // Toggle: Editor1Pix9
  bool Editor1Pix13Active;     // Toggle: Editor1Pix13
  bool Editor1Pix14Active;     // Toggle: Editor1Pix14
  bool Editor1Pix15Active;     // Toggle: Editor1Pix15
  bool Editor1Pix10Active;     // Toggle: Editor1Pix10
  bool Editor1Pix11Active;     // Toggle: Editor1Pix11
  bool Toggle064Active;        // Toggle: Toggle064
  bool Toggle065Active;        // Toggle: Toggle065
  bool Toggle066Active;        // Toggle: Toggle066
  bool Toggle067Active;        // Toggle: Toggle067
  bool Toggle068Active;        // Toggle: Toggle068
  bool Toggle069Active;        // Toggle: Toggle069
  bool Toggle070Active;        // Toggle: Toggle070
  bool Toggle071Active;        // Toggle: Toggle071
  bool Toggle072Active;        // Toggle: Toggle072
  bool Toggle073Active;        // Toggle: Toggle073
  bool Toggle074Active;        // Toggle: Toggle074
  bool Toggle075Active;        // Toggle: Toggle075
  bool Toggle076Active;        // Toggle: Toggle076
  bool Toggle077Active;        // Toggle: Toggle077
  bool Toggle078Active;        // Toggle: Toggle078
  bool Toggle079Active;        // Toggle: Toggle079
  bool Toggle080Active;        // Toggle: Toggle080
  bool Toggle081Active;        // Toggle: Toggle081
  bool Toggle082Active;        // Toggle: Toggle082
  bool Toggle083Active;        // Toggle: Toggle083
  bool Toggle084Active;        // Toggle: Toggle084
  bool Toggle085Active;        // Toggle: Toggle085
  bool Toggle086Active;        // Toggle: Toggle086
  bool Toggle087Active;        // Toggle: Toggle087
  bool Toggle088Active;        // Toggle: Toggle088
  bool Toggle089Active;        // Toggle: Toggle089
  bool Toggle090Active;        // Toggle: Toggle090
  bool Toggle091Active;        // Toggle: Toggle091
  bool Toggle092Active;        // Toggle: Toggle092
  bool Toggle093Active;        // Toggle: Toggle093
  bool Toggle094Active;        // Toggle: Toggle094
  bool Toggle095Active;        // Toggle: Toggle095
  bool Toggle096Active;        // Toggle: Toggle096
  bool Toggle097Active;        // Toggle: Toggle097
  bool Toggle098Active;        // Toggle: Toggle098
  bool Toggle099Active;        // Toggle: Toggle099
  bool Toggle100Active;        // Toggle: Toggle100
  bool Toggle101Active;        // Toggle: Toggle101
  bool Toggle102Active;        // Toggle: Toggle102
  bool Toggle103Active;        // Toggle: Toggle103
  bool Editor0Pix0Active;      // Toggle: Editor0Pix0
  bool Toggle104Active;        // Toggle: Toggle104
  bool Toggle105Active;        // Toggle: Toggle105
  bool Toggle106Active;        // Toggle: Toggle106
  bool Toggle107Active;        // Toggle: Toggle107
  bool Toggle108Active;        // Toggle: Toggle108
  bool Toggle109Active;        // Toggle: Toggle109
  bool Toggle110Active;        // Toggle: Toggle110
  bool Toggle111Active;        // Toggle: Toggle111
  bool Toggle112Active;        // Toggle: Toggle112
  bool Toggle113Active;        // Toggle: Toggle113
  bool Toggle114Active;        // Toggle: Toggle114
  bool Toggle115Active;        // Toggle: Toggle115
  bool Toggle116Active;        // Toggle: Toggle116
  bool Toggle117Active;        // Toggle: Toggle117
  bool Toggle118Active;        // Toggle: Toggle118
  bool Toggle119Active;        // Toggle: Toggle119
  bool Toggle120Active;        // Toggle: Toggle120
  bool Toggle121Active;        // Toggle: Toggle121
  bool Toggle122Active;        // Toggle: Toggle122
  bool Toggle123Active;        // Toggle: Toggle123
  bool Toggle124Active;        // Toggle: Toggle124
  bool Toggle125Active;        // Toggle: Toggle125
  bool Toggle126Active;        // Toggle: Toggle126
  bool Toggle127Active;        // Toggle: Toggle127
  bool Toggle128Active;        // Toggle: Toggle128
  bool Toggle129Active;        // Toggle: Toggle129
  bool Toggle130Active;        // Toggle: Toggle130
  bool Toggle131Active;        // Toggle: Toggle131
  bool Toggle132Active;        // Toggle: Toggle132
  bool Toggle133Active;        // Toggle: Toggle133
  bool Toggle134Active;        // Toggle: Toggle134
  bool Toggle135Active;        // Toggle: Toggle135
  bool Toggle136Active;        // Toggle: Toggle136
  bool Toggle137Active;        // Toggle: Toggle137
  bool Toggle138Active;        // Toggle: Toggle138
  bool Toggle139Active;        // Toggle: Toggle139
  bool Toggle140Active;        // Toggle: Toggle140
  bool Toggle141Active;        // Toggle: Toggle141
  bool Toggle142Active;        // Toggle: Toggle142
  bool Toggle143Active;        // Toggle: Toggle143
  bool Toggle144Active;        // Toggle: Toggle144
  bool Toggle145Active;        // Toggle: Toggle145
  bool Toggle146Active;        // Toggle: Toggle146
  bool Toggle147Active;        // Toggle: Toggle147
  bool Toggle148Active;        // Toggle: Toggle148
  bool Toggle149Active;        // Toggle: Toggle149
  bool Toggle150Active;        // Toggle: Toggle150
  bool Toggle151Active;        // Toggle: Toggle151
  bool Toggle152Active;        // Toggle: Toggle152
  bool Toggle153Active;        // Toggle: Toggle153
  bool Toggle154Active;        // Toggle: Toggle154
  bool Toggle155Active;        // Toggle: Toggle155
  bool Toggle156Active;        // Toggle: Toggle156
  bool Toggle157Active;        // Toggle: Toggle157
  bool Toggle158Active;        // Toggle: Toggle158
  bool Toggle159Active;        // Toggle: Toggle159
  bool Toggle160Active;        // Toggle: Toggle160
  bool Toggle161Active;        // Toggle: Toggle161
  bool Toggle162Active;        // Toggle: Toggle162
  bool Toggle163Active;        // Toggle: Toggle163
  bool Toggle164Active;        // Toggle: Toggle164
  bool Toggle165Active;        // Toggle: Toggle165
  bool Toggle166Active;        // Toggle: Toggle166
  bool Toggle167Active;        // Toggle: Toggle167
  bool Toggle168Active;        // Toggle: Toggle168
  bool Toggle169Active;        // Toggle: Toggle169
  bool Toggle170Active;        // Toggle: Toggle170
  bool Toggle171Active;        // Toggle: Toggle171
  bool Toggle172Active;        // Toggle: Toggle172
  bool Toggle173Active;        // Toggle: Toggle173
  bool Toggle174Active;        // Toggle: Toggle174
  bool Toggle175Active;        // Toggle: Toggle175
  bool Toggle176Active;        // Toggle: Toggle176
  bool Toggle177Active;        // Toggle: Toggle177
  bool Toggle178Active;        // Toggle: Toggle178
  bool Toggle179Active;        // Toggle: Toggle179
  bool Toggle180Active;        // Toggle: Toggle180
  bool Toggle181Active;        // Toggle: Toggle181
  bool Toggle182Active;        // Toggle: Toggle182
  bool Toggle183Active;        // Toggle: Toggle183
  bool Toggle184Active;        // Toggle: Toggle184
  bool Toggle185Active;        // Toggle: Toggle185
  bool Toggle186Active;        // Toggle: Toggle186
  bool Toggle188Active;        // Toggle: Toggle188
  bool Toggle189Active;        // Toggle: Toggle189
  bool Toggle190Active;        // Toggle: Toggle190
  bool Toggle191Active;        // Toggle: Toggle191
  bool Toggle192Active;        // Toggle: Toggle192
  bool Toggle193Active;        // Toggle: Toggle193
  bool Toggle194Active;        // Toggle: Toggle194
  bool Toggle195Active;        // Toggle: Toggle195
  bool Toggle196Active;        // Toggle: Toggle196
  bool Toggle197Active;        // Toggle: Toggle197
  bool Toggle198Active;        // Toggle: Toggle198
  bool Toggle199Active;        // Toggle: Toggle199
  bool Toggle200Active;        // Toggle: Toggle200
  bool Toggle201Active;        // Toggle: Toggle201
  bool Toggle202Active;        // Toggle: Toggle202
  bool Toggle203Active;        // Toggle: Toggle203
  bool Toggle204Active;        // Toggle: Toggle204
  bool Toggle205Active;        // Toggle: Toggle205
  bool Toggle206Active;        // Toggle: Toggle206
  bool Toggle207Active;        // Toggle: Toggle207
  bool Toggle208Active;        // Toggle: Toggle208
  bool Toggle209Active;        // Toggle: Toggle209
  bool Toggle210Active;        // Toggle: Toggle210
  bool Toggle211Active;        // Toggle: Toggle211
  bool Toggle212Active;        // Toggle: Toggle212
  bool Toggle213Active;        // Toggle: Toggle213
  bool Toggle214Active;        // Toggle: Toggle214
  bool Toggle215Active;        // Toggle: Toggle215
  bool Toggle216Active;        // Toggle: Toggle216
  bool Toggle217Active;        // Toggle: Toggle217
  bool Toggle218Active;        // Toggle: Toggle218
  bool Toggle219Active;        // Toggle: Toggle219
  bool Toggle220Active;        // Toggle: Toggle220
  bool Toggle221Active;        // Toggle: Toggle221
  bool Toggle222Active;        // Toggle: Toggle222
  bool Toggle223Active;        // Toggle: Toggle223
  bool Toggle224Active;        // Toggle: Toggle224
  bool Toggle225Active;        // Toggle: Toggle225
  bool Toggle226Active;        // Toggle: Toggle226
  bool Toggle227Active;        // Toggle: Toggle227
  bool Toggle228Active;        // Toggle: Toggle228
  bool Toggle229Active;        // Toggle: Toggle229
  bool Toggle230Active;        // Toggle: Toggle230
  bool Toggle231Active;        // Toggle: Toggle231
  bool Toggle232Active;        // Toggle: Toggle232
  bool Toggle233Active;        // Toggle: Toggle233
  bool Toggle234Active;        // Toggle: Toggle234
  bool Toggle235Active;        // Toggle: Toggle235
  bool Toggle236Active;        // Toggle: Toggle236
  bool Toggle237Active;        // Toggle: Toggle237
  bool Toggle238Active;        // Toggle: Toggle238
  bool Toggle239Active;        // Toggle: Toggle239
  bool Toggle240Active;        // Toggle: Toggle240
  bool Toggle241Active;        // Toggle: Toggle241
  bool Toggle242Active;        // Toggle: Toggle242
  bool Toggle243Active;        // Toggle: Toggle243
  bool Toggle244Active;        // Toggle: Toggle244
  bool Toggle245Active;        // Toggle: Toggle245
  bool Toggle246Active;        // Toggle: Toggle246
  bool Toggle247Active;        // Toggle: Toggle247
  bool Toggle248Active;        // Toggle: Toggle248
  bool Toggle249Active;        // Toggle: Toggle249
  bool Toggle250Active;        // Toggle: Toggle250
  bool Toggle251Active;        // Toggle: Toggle251
  bool Toggle252Active;        // Toggle: Toggle252
  bool Toggle253Active;        // Toggle: Toggle253
  bool Toggle254Active;        // Toggle: Toggle254
  bool Editor1Pix6Active;      // Toggle: Editor1Pix6

  // Define rectangles
  Rectangle layoutRecs[255];

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
  state.anchor01 = (Vector2){ 0, 0 }; // ANCHOR ID:2

  // Initilize controls variables
  state.OutputTextBoxEditMode = false;
  strcpy(state.OutputTextBoxText, ""); // TextBox: OutputTextBox
  state.Editor0Pix4Active = true;      // Toggle: Editor0Pix4
  state.Editor0Pix8Active = true;      // Toggle: Editor0Pix8
  state.Editor0Pix12Active = true;     // Toggle: Editor0Pix12
  state.Editor0Pix16Active = true;     // Toggle: Editor0Pix16
  state.Editor0Pix17Active = true;     // Toggle: Editor0Pix17
  state.Editor0Pix18Active = true;     // Toggle: Editor0Pix18
  state.Editor0Pix19Active = true;     // Toggle: Editor0Pix19
  state.Editor0Pix13Active = true;     // Toggle: Editor0Pix13
  state.Editor0Pix14Active = true;     // Toggle: Editor0Pix14
  state.Editor0Pix15Active = true;     // Toggle: Editor0Pix15
  state.Editor0Pix9Active = true;      // Toggle: Editor0Pix9
  state.Editor0Pix10Active = true;     // Toggle: Editor0Pix10
  state.Editor0Pix11Active = true;     // Toggle: Editor0Pix11
  state.Editor0Pix1Active = true;      // Toggle: Editor0Pix1
  state.Editor0Pix2Active = true;      // Toggle: Editor0Pix2
  state.Editor0Pix3Active = true;      // Toggle: Editor0Pix3
  state.Editor0Pix7Active = true;      // Toggle: Editor0Pix7
  state.Editor0Pix6Active = true;      // Toggle: Editor0Pix6
  state.Editor0Pix5Active = true;      // Toggle: Editor0Pix5
  state.Editor1Pix8Active = true;      // Toggle: Editor1Pix8
  state.Editor1Pix12Active = true;     // Toggle: Editor1Pix12
  state.Editor1Pix16Active = true;     // Toggle: Editor1Pix16
  state.Edotor1Pix4Active = true;      // Toggle: Edotor1Pix4
  state.Editor1Pix0Active = true;      // Toggle: Editor1Pix0
  state.Editor1Pix1Active = true;      // Toggle: Editor1Pix1
  state.Editor1Pix2Active = true;      // Toggle: Editor1Pix2
  state.Editor1Pix3Active = true;      // Toggle: Editor1Pix3
  state.Editor1Pix7Active = true;      // Toggle: Editor1Pix7
  state.Editor1Pix5Active = true;      // Toggle: Editor1Pix5
  state.Editor1Pix17Active = true;     // Toggle: Editor1Pix17
  state.Editor1Pix18Active = true;     // Toggle: Editor1Pix18
  state.Editor1Pix19Active = true;     // Toggle: Editor1Pix19
  state.Editor1Pix9Active = true;      // Toggle: Editor1Pix9
  state.Editor1Pix13Active = true;     // Toggle: Editor1Pix13
  state.Editor1Pix14Active = true;     // Toggle: Editor1Pix14
  state.Editor1Pix15Active = true;     // Toggle: Editor1Pix15
  state.Editor1Pix10Active = true;     // Toggle: Editor1Pix10
  state.Editor1Pix11Active = true;     // Toggle: Editor1Pix11
  state.Toggle064Active = true;        // Toggle: Toggle064
  state.Toggle065Active = true;        // Toggle: Toggle065
  state.Toggle066Active = true;        // Toggle: Toggle066
  state.Toggle067Active = true;        // Toggle: Toggle067
  state.Toggle068Active = true;        // Toggle: Toggle068
  state.Toggle069Active = true;        // Toggle: Toggle069
  state.Toggle070Active = true;        // Toggle: Toggle070
  state.Toggle071Active = true;        // Toggle: Toggle071
  state.Toggle072Active = true;        // Toggle: Toggle072
  state.Toggle073Active = true;        // Toggle: Toggle073
  state.Toggle074Active = true;        // Toggle: Toggle074
  state.Toggle075Active = true;        // Toggle: Toggle075
  state.Toggle076Active = true;        // Toggle: Toggle076
  state.Toggle077Active = true;        // Toggle: Toggle077
  state.Toggle078Active = true;        // Toggle: Toggle078
  state.Toggle079Active = true;        // Toggle: Toggle079
  state.Toggle080Active = true;        // Toggle: Toggle080
  state.Toggle081Active = true;        // Toggle: Toggle081
  state.Toggle082Active = true;        // Toggle: Toggle082
  state.Toggle083Active = true;        // Toggle: Toggle083
  state.Toggle084Active = true;        // Toggle: Toggle084
  state.Toggle085Active = true;        // Toggle: Toggle085
  state.Toggle086Active = true;        // Toggle: Toggle086
  state.Toggle087Active = true;        // Toggle: Toggle087
  state.Toggle088Active = true;        // Toggle: Toggle088
  state.Toggle089Active = true;        // Toggle: Toggle089
  state.Toggle090Active = true;        // Toggle: Toggle090
  state.Toggle091Active = true;        // Toggle: Toggle091
  state.Toggle092Active = true;        // Toggle: Toggle092
  state.Toggle093Active = true;        // Toggle: Toggle093
  state.Toggle094Active = true;        // Toggle: Toggle094
  state.Toggle095Active = true;        // Toggle: Toggle095
  state.Toggle096Active = true;        // Toggle: Toggle096
  state.Toggle097Active = true;        // Toggle: Toggle097
  state.Toggle098Active = true;        // Toggle: Toggle098
  state.Toggle099Active = true;        // Toggle: Toggle099
  state.Toggle100Active = true;        // Toggle: Toggle100
  state.Toggle101Active = true;        // Toggle: Toggle101
  state.Toggle102Active = true;        // Toggle: Toggle102
  state.Toggle103Active = true;        // Toggle: Toggle103
  state.Editor0Pix0Active = true;      // Toggle: Editor0Pix0
  state.Toggle104Active = true;        // Toggle: Toggle104
  state.Toggle105Active = true;        // Toggle: Toggle105
  state.Toggle106Active = true;        // Toggle: Toggle106
  state.Toggle107Active = true;        // Toggle: Toggle107
  state.Toggle108Active = true;        // Toggle: Toggle108
  state.Toggle109Active = true;        // Toggle: Toggle109
  state.Toggle110Active = true;        // Toggle: Toggle110
  state.Toggle111Active = true;        // Toggle: Toggle111
  state.Toggle112Active = true;        // Toggle: Toggle112
  state.Toggle113Active = true;        // Toggle: Toggle113
  state.Toggle114Active = true;        // Toggle: Toggle114
  state.Toggle115Active = true;        // Toggle: Toggle115
  state.Toggle116Active = true;        // Toggle: Toggle116
  state.Toggle117Active = true;        // Toggle: Toggle117
  state.Toggle118Active = true;        // Toggle: Toggle118
  state.Toggle119Active = true;        // Toggle: Toggle119
  state.Toggle120Active = true;        // Toggle: Toggle120
  state.Toggle121Active = true;        // Toggle: Toggle121
  state.Toggle122Active = true;        // Toggle: Toggle122
  state.Toggle123Active = true;        // Toggle: Toggle123
  state.Toggle124Active = true;        // Toggle: Toggle124
  state.Toggle125Active = true;        // Toggle: Toggle125
  state.Toggle126Active = true;        // Toggle: Toggle126
  state.Toggle127Active = true;        // Toggle: Toggle127
  state.Toggle128Active = true;        // Toggle: Toggle128
  state.Toggle129Active = true;        // Toggle: Toggle129
  state.Toggle130Active = true;        // Toggle: Toggle130
  state.Toggle131Active = true;        // Toggle: Toggle131
  state.Toggle132Active = true;        // Toggle: Toggle132
  state.Toggle133Active = true;        // Toggle: Toggle133
  state.Toggle134Active = true;        // Toggle: Toggle134
  state.Toggle135Active = true;        // Toggle: Toggle135
  state.Toggle136Active = true;        // Toggle: Toggle136
  state.Toggle137Active = true;        // Toggle: Toggle137
  state.Toggle138Active = true;        // Toggle: Toggle138
  state.Toggle139Active = true;        // Toggle: Toggle139
  state.Toggle140Active = true;        // Toggle: Toggle140
  state.Toggle141Active = true;        // Toggle: Toggle141
  state.Toggle142Active = true;        // Toggle: Toggle142
  state.Toggle143Active = true;        // Toggle: Toggle143
  state.Toggle144Active = true;        // Toggle: Toggle144
  state.Toggle145Active = true;        // Toggle: Toggle145
  state.Toggle146Active = true;        // Toggle: Toggle146
  state.Toggle147Active = true;        // Toggle: Toggle147
  state.Toggle148Active = true;        // Toggle: Toggle148
  state.Toggle149Active = true;        // Toggle: Toggle149
  state.Toggle150Active = true;        // Toggle: Toggle150
  state.Toggle151Active = true;        // Toggle: Toggle151
  state.Toggle152Active = true;        // Toggle: Toggle152
  state.Toggle153Active = true;        // Toggle: Toggle153
  state.Toggle154Active = true;        // Toggle: Toggle154
  state.Toggle155Active = true;        // Toggle: Toggle155
  state.Toggle156Active = true;        // Toggle: Toggle156
  state.Toggle157Active = true;        // Toggle: Toggle157
  state.Toggle158Active = true;        // Toggle: Toggle158
  state.Toggle159Active = true;        // Toggle: Toggle159
  state.Toggle160Active = true;        // Toggle: Toggle160
  state.Toggle161Active = true;        // Toggle: Toggle161
  state.Toggle162Active = true;        // Toggle: Toggle162
  state.Toggle163Active = true;        // Toggle: Toggle163
  state.Toggle164Active = true;        // Toggle: Toggle164
  state.Toggle165Active = true;        // Toggle: Toggle165
  state.Toggle166Active = true;        // Toggle: Toggle166
  state.Toggle167Active = true;        // Toggle: Toggle167
  state.Toggle168Active = true;        // Toggle: Toggle168
  state.Toggle169Active = true;        // Toggle: Toggle169
  state.Toggle170Active = true;        // Toggle: Toggle170
  state.Toggle171Active = true;        // Toggle: Toggle171
  state.Toggle172Active = true;        // Toggle: Toggle172
  state.Toggle173Active = true;        // Toggle: Toggle173
  state.Toggle174Active = true;        // Toggle: Toggle174
  state.Toggle175Active = true;        // Toggle: Toggle175
  state.Toggle176Active = true;        // Toggle: Toggle176
  state.Toggle177Active = true;        // Toggle: Toggle177
  state.Toggle178Active = true;        // Toggle: Toggle178
  state.Toggle179Active = true;        // Toggle: Toggle179
  state.Toggle180Active = true;        // Toggle: Toggle180
  state.Toggle181Active = true;        // Toggle: Toggle181
  state.Toggle182Active = true;        // Toggle: Toggle182
  state.Toggle183Active = true;        // Toggle: Toggle183
  state.Toggle184Active = true;        // Toggle: Toggle184
  state.Toggle185Active = true;        // Toggle: Toggle185
  state.Toggle186Active = true;        // Toggle: Toggle186
  state.Toggle188Active = true;        // Toggle: Toggle188
  state.Toggle189Active = true;        // Toggle: Toggle189
  state.Toggle190Active = true;        // Toggle: Toggle190
  state.Toggle191Active = true;        // Toggle: Toggle191
  state.Toggle192Active = true;        // Toggle: Toggle192
  state.Toggle193Active = true;        // Toggle: Toggle193
  state.Toggle194Active = true;        // Toggle: Toggle194
  state.Toggle195Active = true;        // Toggle: Toggle195
  state.Toggle196Active = true;        // Toggle: Toggle196
  state.Toggle197Active = true;        // Toggle: Toggle197
  state.Toggle198Active = true;        // Toggle: Toggle198
  state.Toggle199Active = true;        // Toggle: Toggle199
  state.Toggle200Active = true;        // Toggle: Toggle200
  state.Toggle201Active = true;        // Toggle: Toggle201
  state.Toggle202Active = true;        // Toggle: Toggle202
  state.Toggle203Active = true;        // Toggle: Toggle203
  state.Toggle204Active = true;        // Toggle: Toggle204
  state.Toggle205Active = true;        // Toggle: Toggle205
  state.Toggle206Active = true;        // Toggle: Toggle206
  state.Toggle207Active = true;        // Toggle: Toggle207
  state.Toggle208Active = true;        // Toggle: Toggle208
  state.Toggle209Active = true;        // Toggle: Toggle209
  state.Toggle210Active = true;        // Toggle: Toggle210
  state.Toggle211Active = true;        // Toggle: Toggle211
  state.Toggle212Active = true;        // Toggle: Toggle212
  state.Toggle213Active = true;        // Toggle: Toggle213
  state.Toggle214Active = true;        // Toggle: Toggle214
  state.Toggle215Active = true;        // Toggle: Toggle215
  state.Toggle216Active = true;        // Toggle: Toggle216
  state.Toggle217Active = true;        // Toggle: Toggle217
  state.Toggle218Active = true;        // Toggle: Toggle218
  state.Toggle219Active = true;        // Toggle: Toggle219
  state.Toggle220Active = true;        // Toggle: Toggle220
  state.Toggle221Active = true;        // Toggle: Toggle221
  state.Toggle222Active = true;        // Toggle: Toggle222
  state.Toggle223Active = true;        // Toggle: Toggle223
  state.Toggle224Active = true;        // Toggle: Toggle224
  state.Toggle225Active = true;        // Toggle: Toggle225
  state.Toggle226Active = true;        // Toggle: Toggle226
  state.Toggle227Active = true;        // Toggle: Toggle227
  state.Toggle228Active = true;        // Toggle: Toggle228
  state.Toggle229Active = true;        // Toggle: Toggle229
  state.Toggle230Active = true;        // Toggle: Toggle230
  state.Toggle231Active = true;        // Toggle: Toggle231
  state.Toggle232Active = true;        // Toggle: Toggle232
  state.Toggle233Active = true;        // Toggle: Toggle233
  state.Toggle234Active = true;        // Toggle: Toggle234
  state.Toggle235Active = true;        // Toggle: Toggle235
  state.Toggle236Active = true;        // Toggle: Toggle236
  state.Toggle237Active = true;        // Toggle: Toggle237
  state.Toggle238Active = true;        // Toggle: Toggle238
  state.Toggle239Active = true;        // Toggle: Toggle239
  state.Toggle240Active = true;        // Toggle: Toggle240
  state.Toggle241Active = true;        // Toggle: Toggle241
  state.Toggle242Active = true;        // Toggle: Toggle242
  state.Toggle243Active = true;        // Toggle: Toggle243
  state.Toggle244Active = true;        // Toggle: Toggle244
  state.Toggle245Active = true;        // Toggle: Toggle245
  state.Toggle246Active = true;        // Toggle: Toggle246
  state.Toggle247Active = true;        // Toggle: Toggle247
  state.Toggle248Active = true;        // Toggle: Toggle248
  state.Toggle249Active = true;        // Toggle: Toggle249
  state.Toggle250Active = true;        // Toggle: Toggle250
  state.Toggle251Active = true;        // Toggle: Toggle251
  state.Toggle252Active = true;        // Toggle: Toggle252
  state.Toggle253Active = true;        // Toggle: Toggle253
  state.Toggle254Active = true;        // Toggle: Toggle254
  state.Toggle254Active = true;        // Toggle: Toggle254
  state.Editor1Pix6Active = true;      // Toggle: Editor1Pix6

  // Init controls rectangles
  state.layoutRecs[0] = (Rectangle){
    state.anchor01.x + 8, state.anchor01.y + 16, 488, 664
  }; // GroupBox: PixelEditorBox
  state.layoutRecs[1] = (Rectangle){
    state.anchor01.x + 504, state.anchor01.y + 16, 240, 264
  }; // GroupBox: OutputBox
  state.layoutRecs[2] = (Rectangle){
    state.anchor01.x + 504, state.anchor01.y + 320, 240, 49
  }; // GroupBox: OutputModeBox
  state.layoutRecs[3] = (Rectangle){
    state.anchor01.x + 512, state.anchor01.y + 336, 58, 25
  }; // Button: HexModeButton
  state.layoutRecs[4] = (Rectangle){
    state.anchor01.x + 592, state.anchor01.y + 336, 58, 25
  }; // Button: DecimalModeButton
  state.layoutRecs[5] = (Rectangle){
    state.anchor01.x + 680, state.anchor01.y + 336, 58, 25
  }; // Button: BinaryModeButton
  state.layoutRecs[6] = (Rectangle){
    state.anchor01.x + 560, state.anchor01.y + 408, 120, 24
  }; // Button: GenerateOutputButton
  state.layoutRecs[7] = (Rectangle){
    state.anchor01.x + 512, state.anchor01.y + 24, 224, 248
  }; // TextBox: OutputTextBox
  state.layoutRecs[8] = (Rectangle){
    state.anchor01.x + 24, state.anchor01.y + 24, 96, 144
  }; // Panel: Editor0
  state.layoutRecs[9] = (Rectangle){
    state.anchor01.x + 144, state.anchor01.y + 24, 96, 144
  }; // Panel: Editor1
  state.layoutRecs[10] = (Rectangle){
    state.anchor01.x + 264, state.anchor01.y + 24, 96, 144
  }; // Panel: Editor2
  state.layoutRecs[11] = (Rectangle){
    state.anchor01.x + 384, state.anchor01.y + 24, 96, 144
  }; // Panel: Editor3
  state.layoutRecs[12] = (Rectangle){
    state.anchor01.x + 24, state.anchor01.y + 192, 96, 144
  }; // Panel: Editor4
  state.layoutRecs[13] = (Rectangle){
    state.anchor01.x + 24, state.anchor01.y + 360, 96, 144
  }; // Panel: Editor8
  state.layoutRecs[14] = (Rectangle){
    state.anchor01.x + 24, state.anchor01.y + 528, 96, 144
  }; // Panel: EditorC
  state.layoutRecs[15] = (Rectangle){
    state.anchor01.x + 144, state.anchor01.y + 192, 96, 144
  }; // Panel: Editor5
  state.layoutRecs[16] = (Rectangle){
    state.anchor01.x + 264, state.anchor01.y + 192, 96, 144
  }; // Panel: Editor6
  state.layoutRecs[17] = (Rectangle){
    state.anchor01.x + 384, state.anchor01.y + 192, 96, 144
  }; // Panel: Editor7
  state.layoutRecs[18] = (Rectangle){
    state.anchor01.x + 384, state.anchor01.y + 360, 96, 144
  }; // Panel: EditorB
  state.layoutRecs[19] = (Rectangle){
    state.anchor01.x + 264, state.anchor01.y + 360, 96, 144
  }; // Panel: EditorA
  state.layoutRecs[20] = (Rectangle){
    state.anchor01.x + 144, state.anchor01.y + 360, 96, 144
  }; // Panel: Editor9
  state.layoutRecs[21] = (Rectangle){
    state.anchor01.x + 144, state.anchor01.y + 528, 96, 144
  }; // Panel: EditorD
  state.layoutRecs[22] = (Rectangle){
    state.anchor01.x + 264, state.anchor01.y + 528, 96, 144
  }; // Panel: EditorE
  state.layoutRecs[23] = (Rectangle){
    state.anchor01.x + 384, state.anchor01.y + 528, 96, 144
  }; // Panel: EditorF
  state.layoutRecs[24] = (Rectangle){
    state.anchor01.x + 24, state.anchor01.y + 72, 24, 24
  }; // Toggle: Editor0Pix4
  state.layoutRecs[25] = (Rectangle){
    state.anchor01.x + 24, state.anchor01.y + 96, 24, 24
  }; // Toggle: Editor0Pix8
  state.layoutRecs[26] = (Rectangle){
    state.anchor01.x + 24, state.anchor01.y + 120, 24, 24
  }; // Toggle: Editor0Pix12
  state.layoutRecs[27] = (Rectangle){
    state.anchor01.x + 24, state.anchor01.y + 144, 24, 24
  }; // Toggle: Editor0Pix16
  state.layoutRecs[28] = (Rectangle){
    state.anchor01.x + 48, state.anchor01.y + 144, 24, 24
  }; // Toggle: Editor0Pix17
  state.layoutRecs[29] = (Rectangle){
    state.anchor01.x + 72, state.anchor01.y + 144, 24, 24
  }; // Toggle: Editor0Pix18
  state.layoutRecs[30] = (Rectangle){
    state.anchor01.x + 96, state.anchor01.y + 144, 24, 24
  }; // Toggle: Editor0Pix19
  state.layoutRecs[31] = (Rectangle){
    state.anchor01.x + 48, state.anchor01.y + 120, 24, 24
  }; // Toggle: Editor0Pix13
  state.layoutRecs[32] = (Rectangle){
    state.anchor01.x + 72, state.anchor01.y + 120, 24, 24
  }; // Toggle: Editor0Pix14
  state.layoutRecs[33] = (Rectangle){
    state.anchor01.x + 96, state.anchor01.y + 120, 24, 24
  }; // Toggle: Editor0Pix15
  state.layoutRecs[34] = (Rectangle){
    state.anchor01.x + 48, state.anchor01.y + 96, 24, 24
  }; // Toggle: Editor0Pix9
  state.layoutRecs[35] = (Rectangle){
    state.anchor01.x + 72, state.anchor01.y + 96, 24, 24
  }; // Toggle: Editor0Pix10
  state.layoutRecs[36] = (Rectangle){
    state.anchor01.x + 96, state.anchor01.y + 96, 24, 24
  }; // Toggle: Editor0Pix11
  state.layoutRecs[37] = (Rectangle){
    state.anchor01.x + 48, state.anchor01.y + 48, 24, 24
  }; // Toggle: Editor0Pix1
  state.layoutRecs[38] = (Rectangle){
    state.anchor01.x + 72, state.anchor01.y + 48, 24, 24
  }; // Toggle: Editor0Pix2
  state.layoutRecs[39] = (Rectangle){
    state.anchor01.x + 96, state.anchor01.y + 48, 24, 24
  }; // Toggle: Editor0Pix3
  state.layoutRecs[40] = (Rectangle){
    state.anchor01.x + 96, state.anchor01.y + 72, 24, 24
  }; // Toggle: Editor0Pix7
  state.layoutRecs[41] = (Rectangle){
    state.anchor01.x + 72, state.anchor01.y + 72, 24, 24
  }; // Toggle: Editor0Pix6
  state.layoutRecs[42] = (Rectangle){
    state.anchor01.x + 48, state.anchor01.y + 72, 24, 24
  }; // Toggle: Editor0Pix5
  state.layoutRecs[43] = (Rectangle){
    state.anchor01.x + 144, state.anchor01.y + 96, 24, 24
  }; // Toggle: Editor1Pix8
  state.layoutRecs[44] = (Rectangle){
    state.anchor01.x + 144, state.anchor01.y + 120, 24, 24
  }; // Toggle: Editor1Pix12
  state.layoutRecs[45] = (Rectangle){
    state.anchor01.x + 144, state.anchor01.y + 144, 24, 24
  }; // Toggle: Editor1Pix16
  state.layoutRecs[46] = (Rectangle){
    state.anchor01.x + 144, state.anchor01.y + 72, 24, 24
  }; // Toggle: Edotor1Pix4
  state.layoutRecs[47] = (Rectangle){
    state.anchor01.x + 144, state.anchor01.y + 48, 24, 24
  }; // Toggle: Editor1Pix0
  state.layoutRecs[48] = (Rectangle){
    state.anchor01.x + 168, state.anchor01.y + 48, 24, 24
  }; // Toggle: Editor1Pix1
  state.layoutRecs[49] = (Rectangle){
    state.anchor01.x + 192, state.anchor01.y + 48, 24, 24
  }; // Toggle: Editor1Pix2
  state.layoutRecs[50] = (Rectangle){
    state.anchor01.x + 216, state.anchor01.y + 48, 24, 24
  }; // Toggle: Editor1Pix3
  state.layoutRecs[51] = (Rectangle){
    state.anchor01.x + 216, state.anchor01.y + 72, 24, 24
  }; // Toggle: Editor1Pix7
  state.layoutRecs[52] = (Rectangle){
    state.anchor01.x + 168, state.anchor01.y + 72, 24, 24
  }; // Toggle: Editor1Pix5
  state.layoutRecs[53] = (Rectangle){
    state.anchor01.x + 168, state.anchor01.y + 144, 24, 24
  }; // Toggle: Editor1Pix17
  state.layoutRecs[54] = (Rectangle){
    state.anchor01.x + 192, state.anchor01.y + 144, 24, 24
  }; // Toggle: Editor1Pix18
  state.layoutRecs[55] = (Rectangle){
    state.anchor01.x + 216, state.anchor01.y + 144, 24, 24
  }; // Toggle: Editor1Pix19
  state.layoutRecs[56] = (Rectangle){
    state.anchor01.x + 168, state.anchor01.y + 96, 24, 24
  }; // Toggle: Editor1Pix9
  state.layoutRecs[57] = (Rectangle){
    state.anchor01.x + 168, state.anchor01.y + 120, 24, 24
  }; // Toggle: Editor1Pix13
  state.layoutRecs[58] = (Rectangle){
    state.anchor01.x + 192, state.anchor01.y + 120, 24, 24
  }; // Toggle: Editor1Pix14
  state.layoutRecs[59] = (Rectangle){
    state.anchor01.x + 216, state.anchor01.y + 120, 24, 24
  }; // Toggle: Editor1Pix15
  state.layoutRecs[60] = (Rectangle){
    state.anchor01.x + 192, state.anchor01.y + 96, 24, 24
  }; // Toggle: Editor1Pix10
  state.layoutRecs[61] = (Rectangle){
    state.anchor01.x + 216, state.anchor01.y + 96, 24, 24
  }; // Toggle: Editor1Pix11
  state.layoutRecs[62] = (Rectangle){
    state.anchor01.x + 264, state.anchor01.y + 48, 24, 24
  }; // Toggle: Toggle064
  state.layoutRecs[63] = (Rectangle){
    state.anchor01.x + 288, state.anchor01.y + 48, 24, 24
  }; // Toggle: Toggle065
  state.layoutRecs[64] = (Rectangle){
    state.anchor01.x + 264, state.anchor01.y + 144, 24, 24
  }; // Toggle: Toggle066
  state.layoutRecs[65] = (Rectangle){
    state.anchor01.x + 264, state.anchor01.y + 96, 24, 24
  }; // Toggle: Toggle067
  state.layoutRecs[66] = (Rectangle){
    state.anchor01.x + 264, state.anchor01.y + 120, 24, 24
  }; // Toggle: Toggle068
  state.layoutRecs[67] = (Rectangle){
    state.anchor01.x + 312, state.anchor01.y + 48, 24, 24
  }; // Toggle: Toggle069
  state.layoutRecs[68] = (Rectangle){
    state.anchor01.x + 336, state.anchor01.y + 72, 24, 24
  }; // Toggle: Toggle070
  state.layoutRecs[69] = (Rectangle){
    state.anchor01.x + 288, state.anchor01.y + 72, 24, 24
  }; // Toggle: Toggle071
  state.layoutRecs[70] = (Rectangle){
    state.anchor01.x + 336, state.anchor01.y + 48, 24, 24
  }; // Toggle: Toggle072
  state.layoutRecs[71] = (Rectangle){
    state.anchor01.x + 288, state.anchor01.y + 144, 24, 24
  }; // Toggle: Toggle073
  state.layoutRecs[72] = (Rectangle){
    state.anchor01.x + 288, state.anchor01.y + 96, 24, 24
  }; // Toggle: Toggle074
  state.layoutRecs[73] = (Rectangle){
    state.anchor01.x + 288, state.anchor01.y + 120, 24, 24
  }; // Toggle: Toggle075
  state.layoutRecs[74] = (Rectangle){
    state.anchor01.x + 312, state.anchor01.y + 96, 24, 24
  }; // Toggle: Toggle076
  state.layoutRecs[75] = (Rectangle){
    state.anchor01.x + 336, state.anchor01.y + 96, 24, 24
  }; // Toggle: Toggle077
  state.layoutRecs[76] = (Rectangle){
    state.anchor01.x + 336, state.anchor01.y + 120, 24, 24
  }; // Toggle: Toggle078
  state.layoutRecs[77] = (Rectangle){
    state.anchor01.x + 312, state.anchor01.y + 120, 24, 24
  }; // Toggle: Toggle079
  state.layoutRecs[78] = (Rectangle){
    state.anchor01.x + 264, state.anchor01.y + 72, 24, 24
  }; // Toggle: Toggle080
  state.layoutRecs[79] = (Rectangle){
    state.anchor01.x + 312, state.anchor01.y + 144, 24, 24
  }; // Toggle: Toggle081
  state.layoutRecs[80] = (Rectangle){
    state.anchor01.x + 336, state.anchor01.y + 144, 24, 24
  }; // Toggle: Toggle082
  state.layoutRecs[81] = (Rectangle){
    state.anchor01.x + 312, state.anchor01.y + 72, 24, 24
  }; // Toggle: Toggle083
  state.layoutRecs[82] = (Rectangle){
    state.anchor01.x + 384, state.anchor01.y + 96, 24, 24
  }; // Toggle: Toggle084
  state.layoutRecs[83] = (Rectangle){
    state.anchor01.x + 384, state.anchor01.y + 120, 24, 24
  }; // Toggle: Toggle085
  state.layoutRecs[84] = (Rectangle){
    state.anchor01.x + 384, state.anchor01.y + 144, 24, 24
  }; // Toggle: Toggle086
  state.layoutRecs[85] = (Rectangle){
    state.anchor01.x + 384, state.anchor01.y + 48, 24, 24
  }; // Toggle: Toggle087
  state.layoutRecs[86] = (Rectangle){
    state.anchor01.x + 384, state.anchor01.y + 72, 24, 24
  }; // Toggle: Toggle088
  state.layoutRecs[87] = (Rectangle){
    state.anchor01.x + 408, state.anchor01.y + 96, 24, 24
  }; // Toggle: Toggle089
  state.layoutRecs[88] = (Rectangle){
    state.anchor01.x + 432, state.anchor01.y + 96, 24, 24
  }; // Toggle: Toggle090
  state.layoutRecs[89] = (Rectangle){
    state.anchor01.x + 456, state.anchor01.y + 96, 24, 24
  }; // Toggle: Toggle091
  state.layoutRecs[90] = (Rectangle){
    state.anchor01.x + 456, state.anchor01.y + 120, 24, 24
  }; // Toggle: Toggle092
  state.layoutRecs[91] = (Rectangle){
    state.anchor01.x + 456, state.anchor01.y + 144, 24, 24
  }; // Toggle: Toggle093
  state.layoutRecs[92] = (Rectangle){
    state.anchor01.x + 456, state.anchor01.y + 72, 24, 24
  }; // Toggle: Toggle094
  state.layoutRecs[93] = (Rectangle){
    state.anchor01.x + 456, state.anchor01.y + 48, 24, 24
  }; // Toggle: Toggle095
  state.layoutRecs[94] = (Rectangle){
    state.anchor01.x + 432, state.anchor01.y + 48, 24, 24
  }; // Toggle: Toggle096
  state.layoutRecs[95] = (Rectangle){
    state.anchor01.x + 408, state.anchor01.y + 72, 24, 24
  }; // Toggle: Toggle097
  state.layoutRecs[96] = (Rectangle){
    state.anchor01.x + 408, state.anchor01.y + 48, 24, 24
  }; // Toggle: Toggle098
  state.layoutRecs[97] = (Rectangle){
    state.anchor01.x + 432, state.anchor01.y + 72, 24, 24
  }; // Toggle: Toggle099
  state.layoutRecs[98] = (Rectangle){
    state.anchor01.x + 432, state.anchor01.y + 144, 24, 24
  }; // Toggle: Toggle100
  state.layoutRecs[99] = (Rectangle){
    state.anchor01.x + 408, state.anchor01.y + 144, 24, 24
  }; // Toggle: Toggle101
  state.layoutRecs[100] = (Rectangle){
    state.anchor01.x + 408, state.anchor01.y + 120, 24, 24
  }; // Toggle: Toggle102
  state.layoutRecs[101] = (Rectangle){
    state.anchor01.x + 432, state.anchor01.y + 120, 24, 24
  }; // Toggle: Toggle103
  state.layoutRecs[102] = (Rectangle){
    state.anchor01.x + 24, state.anchor01.y + 48, 24, 24
  }; // Toggle: Editor0Pix0
  state.layoutRecs[103] = (Rectangle){
    state.anchor01.x + 24, state.anchor01.y + 264, 24, 24
  }; // Toggle: Toggle104
  state.layoutRecs[104] = (Rectangle){
    state.anchor01.x + 48, state.anchor01.y + 264, 24, 24
  }; // Toggle: Toggle105
  state.layoutRecs[105] = (Rectangle){
    state.anchor01.x + 72, state.anchor01.y + 264, 24, 24
  }; // Toggle: Toggle106
  state.layoutRecs[106] = (Rectangle){
    state.anchor01.x + 96, state.anchor01.y + 264, 24, 24
  }; // Toggle: Toggle107
  state.layoutRecs[107] = (Rectangle){
    state.anchor01.x + 96, state.anchor01.y + 288, 24, 24
  }; // Toggle: Toggle108
  state.layoutRecs[108] = (Rectangle){
    state.anchor01.x + 72, state.anchor01.y + 288, 24, 24
  }; // Toggle: Toggle109
  state.layoutRecs[109] = (Rectangle){
    state.anchor01.x + 48, state.anchor01.y + 288, 24, 24
  }; // Toggle: Toggle110
  state.layoutRecs[110] = (Rectangle){
    state.anchor01.x + 24, state.anchor01.y + 288, 24, 24
  }; // Toggle: Toggle111
  state.layoutRecs[111] = (Rectangle){
    state.anchor01.x + 24, state.anchor01.y + 312, 24, 24
  }; // Toggle: Toggle112
  state.layoutRecs[112] = (Rectangle){
    state.anchor01.x + 48, state.anchor01.y + 312, 24, 24
  }; // Toggle: Toggle113
  state.layoutRecs[113] = (Rectangle){
    state.anchor01.x + 72, state.anchor01.y + 312, 24, 24
  }; // Toggle: Toggle114
  state.layoutRecs[114] = (Rectangle){
    state.anchor01.x + 96, state.anchor01.y + 312, 24, 24
  }; // Toggle: Toggle115
  state.layoutRecs[115] = (Rectangle){
    state.anchor01.x + 96, state.anchor01.y + 216, 24, 24
  }; // Toggle: Toggle116
  state.layoutRecs[116] = (Rectangle){
    state.anchor01.x + 96, state.anchor01.y + 240, 24, 24
  }; // Toggle: Toggle117
  state.layoutRecs[117] = (Rectangle){
    state.anchor01.x + 72, state.anchor01.y + 216, 24, 24
  }; // Toggle: Toggle118
  state.layoutRecs[118] = (Rectangle){
    state.anchor01.x + 72, state.anchor01.y + 240, 24, 24
  }; // Toggle: Toggle119
  state.layoutRecs[119] = (Rectangle){
    state.anchor01.x + 48, state.anchor01.y + 216, 24, 24
  }; // Toggle: Toggle120
  state.layoutRecs[120] = (Rectangle){
    state.anchor01.x + 48, state.anchor01.y + 240, 24, 24
  }; // Toggle: Toggle121
  state.layoutRecs[121] = (Rectangle){
    state.anchor01.x + 24, state.anchor01.y + 240, 24, 24
  }; // Toggle: Toggle122
  state.layoutRecs[122] = (Rectangle){
    state.anchor01.x + 24, state.anchor01.y + 216, 24, 24
  }; // Toggle: Toggle123
  state.layoutRecs[123] = (Rectangle){
    state.anchor01.x + 144, state.anchor01.y + 264, 24, 24
  }; // Toggle: Toggle124
  state.layoutRecs[124] = (Rectangle){
    state.anchor01.x + 168, state.anchor01.y + 264, 24, 24
  }; // Toggle: Toggle125
  state.layoutRecs[125] = (Rectangle){
    state.anchor01.x + 192, state.anchor01.y + 264, 24, 24
  }; // Toggle: Toggle126
  state.layoutRecs[126] = (Rectangle){
    state.anchor01.x + 216, state.anchor01.y + 264, 24, 24
  }; // Toggle: Toggle127
  state.layoutRecs[127] = (Rectangle){
    state.anchor01.x + 216, state.anchor01.y + 288, 24, 24
  }; // Toggle: Toggle128
  state.layoutRecs[128] = (Rectangle){
    state.anchor01.x + 192, state.anchor01.y + 288, 24, 24
  }; // Toggle: Toggle129
  state.layoutRecs[129] = (Rectangle){
    state.anchor01.x + 192, state.anchor01.y + 312, 24, 24
  }; // Toggle: Toggle130
  state.layoutRecs[130] = (Rectangle){
    state.anchor01.x + 216, state.anchor01.y + 312, 24, 24
  }; // Toggle: Toggle131
  state.layoutRecs[131] = (Rectangle){
    state.anchor01.x + 216, state.anchor01.y + 216, 24, 24
  }; // Toggle: Toggle132
  state.layoutRecs[132] = (Rectangle){
    state.anchor01.x + 216, state.anchor01.y + 240, 24, 24
  }; // Toggle: Toggle133
  state.layoutRecs[133] = (Rectangle){
    state.anchor01.x + 192, state.anchor01.y + 216, 24, 24
  }; // Toggle: Toggle134
  state.layoutRecs[134] = (Rectangle){
    state.anchor01.x + 192, state.anchor01.y + 240, 24, 24
  }; // Toggle: Toggle135
  state.layoutRecs[135] = (Rectangle){
    state.anchor01.x + 144, state.anchor01.y + 288, 24, 24
  }; // Toggle: Toggle136
  state.layoutRecs[136] = (Rectangle){
    state.anchor01.x + 144, state.anchor01.y + 312, 24, 24
  }; // Toggle: Toggle137
  state.layoutRecs[137] = (Rectangle){
    state.anchor01.x + 144, state.anchor01.y + 240, 24, 24
  }; // Toggle: Toggle138
  state.layoutRecs[138] = (Rectangle){
    state.anchor01.x + 144, state.anchor01.y + 216, 24, 24
  }; // Toggle: Toggle139
  state.layoutRecs[139] = (Rectangle){
    state.anchor01.x + 168, state.anchor01.y + 240, 24, 24
  }; // Toggle: Toggle140
  state.layoutRecs[140] = (Rectangle){
    state.anchor01.x + 168, state.anchor01.y + 288, 24, 24
  }; // Toggle: Toggle141
  state.layoutRecs[141] = (Rectangle){
    state.anchor01.x + 168, state.anchor01.y + 312, 24, 24
  }; // Toggle: Toggle142
  state.layoutRecs[142] = (Rectangle){
    state.anchor01.x + 168, state.anchor01.y + 216, 24, 24
  }; // Toggle: Toggle143
  state.layoutRecs[143] = (Rectangle){
    state.anchor01.x + 264, state.anchor01.y + 264, 24, 24
  }; // Toggle: Toggle144
  state.layoutRecs[144] = (Rectangle){
    state.anchor01.x + 288, state.anchor01.y + 264, 24, 24
  }; // Toggle: Toggle145
  state.layoutRecs[145] = (Rectangle){
    state.anchor01.x + 312, state.anchor01.y + 264, 24, 24
  }; // Toggle: Toggle146
  state.layoutRecs[146] = (Rectangle){
    state.anchor01.x + 336, state.anchor01.y + 264, 24, 24
  }; // Toggle: Toggle147
  state.layoutRecs[147] = (Rectangle){
    state.anchor01.x + 312, state.anchor01.y + 312, 24, 24
  }; // Toggle: Toggle148
  state.layoutRecs[148] = (Rectangle){
    state.anchor01.x + 288, state.anchor01.y + 312, 24, 24
  }; // Toggle: Toggle149
  state.layoutRecs[149] = (Rectangle){
    state.anchor01.x + 264, state.anchor01.y + 312, 24, 24
  }; // Toggle: Toggle150
  state.layoutRecs[150] = (Rectangle){
    state.anchor01.x + 264, state.anchor01.y + 288, 24, 24
  }; // Toggle: Toggle151
  state.layoutRecs[151] = (Rectangle){
    state.anchor01.x + 288, state.anchor01.y + 288, 24, 24
  }; // Toggle: Toggle152
  state.layoutRecs[152] = (Rectangle){
    state.anchor01.x + 288, state.anchor01.y + 216, 24, 24
  }; // Toggle: Toggle153
  state.layoutRecs[153] = (Rectangle){
    state.anchor01.x + 264, state.anchor01.y + 216, 24, 24
  }; // Toggle: Toggle154
  state.layoutRecs[154] = (Rectangle){
    state.anchor01.x + 336, state.anchor01.y + 312, 24, 24
  }; // Toggle: Toggle155
  state.layoutRecs[155] = (Rectangle){
    state.anchor01.x + 336, state.anchor01.y + 240, 24, 24
  }; // Toggle: Toggle156
  state.layoutRecs[156] = (Rectangle){
    state.anchor01.x + 312, state.anchor01.y + 216, 24, 24
  }; // Toggle: Toggle157
  state.layoutRecs[157] = (Rectangle){
    state.anchor01.x + 264, state.anchor01.y + 240, 24, 24
  }; // Toggle: Toggle158
  state.layoutRecs[158] = (Rectangle){
    state.anchor01.x + 312, state.anchor01.y + 240, 24, 24
  }; // Toggle: Toggle159
  state.layoutRecs[159] = (Rectangle){
    state.anchor01.x + 336, state.anchor01.y + 216, 24, 24
  }; // Toggle: Toggle160
  state.layoutRecs[160] = (Rectangle){
    state.anchor01.x + 288, state.anchor01.y + 240, 24, 24
  }; // Toggle: Toggle161
  state.layoutRecs[161] = (Rectangle){
    state.anchor01.x + 312, state.anchor01.y + 288, 24, 24
  }; // Toggle: Toggle162
  state.layoutRecs[162] = (Rectangle){
    state.anchor01.x + 336, state.anchor01.y + 288, 24, 24
  }; // Toggle: Toggle163
  state.layoutRecs[163] = (Rectangle){
    state.anchor01.x + 384, state.anchor01.y + 264, 24, 24
  }; // Toggle: Toggle164
  state.layoutRecs[164] = (Rectangle){
    state.anchor01.x + 408, state.anchor01.y + 240, 24, 24
  }; // Toggle: Toggle165
  state.layoutRecs[165] = (Rectangle){
    state.anchor01.x + 384, state.anchor01.y + 288, 24, 24
  }; // Toggle: Toggle166
  state.layoutRecs[166] = (Rectangle){
    state.anchor01.x + 432, state.anchor01.y + 240, 24, 24
  }; // Toggle: Toggle167
  state.layoutRecs[167] = (Rectangle){
    state.anchor01.x + 432, state.anchor01.y + 264, 24, 24
  }; // Toggle: Toggle168
  state.layoutRecs[168] = (Rectangle){
    state.anchor01.x + 456, state.anchor01.y + 288, 24, 24
  }; // Toggle: Toggle169
  state.layoutRecs[169] = (Rectangle){
    state.anchor01.x + 408, state.anchor01.y + 216, 24, 24
  }; // Toggle: Toggle170
  state.layoutRecs[170] = (Rectangle){
    state.anchor01.x + 384, state.anchor01.y + 240, 24, 24
  }; // Toggle: Toggle171
  state.layoutRecs[171] = (Rectangle){
    state.anchor01.x + 456, state.anchor01.y + 216, 24, 24
  }; // Toggle: Toggle172
  state.layoutRecs[172] = (Rectangle){
    state.anchor01.x + 456, state.anchor01.y + 240, 24, 24
  }; // Toggle: Toggle173
  state.layoutRecs[173] = (Rectangle){
    state.anchor01.x + 384, state.anchor01.y + 216, 24, 24
  }; // Toggle: Toggle174
  state.layoutRecs[174] = (Rectangle){
    state.anchor01.x + 432, state.anchor01.y + 288, 24, 24
  }; // Toggle: Toggle175
  state.layoutRecs[175] = (Rectangle){
    state.anchor01.x + 456, state.anchor01.y + 264, 24, 24
  }; // Toggle: Toggle176
  state.layoutRecs[176] = (Rectangle){
    state.anchor01.x + 456, state.anchor01.y + 312, 24, 24
  }; // Toggle: Toggle177
  state.layoutRecs[177] = (Rectangle){
    state.anchor01.x + 408, state.anchor01.y + 288, 24, 24
  }; // Toggle: Toggle178
  state.layoutRecs[178] = (Rectangle){
    state.anchor01.x + 384, state.anchor01.y + 312, 24, 24
  }; // Toggle: Toggle179
  state.layoutRecs[179] = (Rectangle){
    state.anchor01.x + 432, state.anchor01.y + 216, 24, 24
  }; // Toggle: Toggle180
  state.layoutRecs[180] = (Rectangle){
    state.anchor01.x + 408, state.anchor01.y + 312, 24, 24
  }; // Toggle: Toggle181
  state.layoutRecs[181] = (Rectangle){
    state.anchor01.x + 432, state.anchor01.y + 312, 24, 24
  }; // Toggle: Toggle182
  state.layoutRecs[182] = (Rectangle){
    state.anchor01.x + 408, state.anchor01.y + 264, 24, 24
  }; // Toggle: Toggle183
  state.layoutRecs[183] = (Rectangle){
    state.anchor01.x + 24, state.anchor01.y + 384, 24, 24
  }; // Toggle: Toggle184
  state.layoutRecs[184] = (Rectangle){
    state.anchor01.x + 48, state.anchor01.y + 384, 24, 24
  }; // Toggle: Toggle185
  state.layoutRecs[185] = (Rectangle){
    state.anchor01.x + 96, state.anchor01.y + 384, 24, 24
  }; // Toggle: Toggle186
  state.layoutRecs[186] = (Rectangle){
    state.anchor01.x + 96, state.anchor01.y + 408, 24, 24
  }; // Toggle: Toggle188
  state.layoutRecs[187] = (Rectangle){
    state.anchor01.x + 72, state.anchor01.y + 408, 24, 24
  }; // Toggle: Toggle189
  state.layoutRecs[188] = (Rectangle){
    state.anchor01.x + 48, state.anchor01.y + 408, 24, 24
  }; // Toggle: Toggle190
  state.layoutRecs[189] = (Rectangle){
    state.anchor01.x + 72, state.anchor01.y + 384, 24, 24
  }; // Toggle: Toggle191
  state.layoutRecs[190] = (Rectangle){
    state.anchor01.x + 24, state.anchor01.y + 432, 24, 24
  }; // Toggle: Toggle192
  state.layoutRecs[191] = (Rectangle){
    state.anchor01.x + 48, state.anchor01.y + 432, 24, 24
  }; // Toggle: Toggle193
  state.layoutRecs[192] = (Rectangle){
    state.anchor01.x + 72, state.anchor01.y + 432, 24, 24
  }; // Toggle: Toggle194
  state.layoutRecs[193] = (Rectangle){
    state.anchor01.x + 96, state.anchor01.y + 432, 24, 24
  }; // Toggle: Toggle195
  state.layoutRecs[194] = (Rectangle){
    state.anchor01.x + 96, state.anchor01.y + 456, 24, 24
  }; // Toggle: Toggle196
  state.layoutRecs[195] = (Rectangle){
    state.anchor01.x + 96, state.anchor01.y + 480, 24, 24
  }; // Toggle: Toggle197
  state.layoutRecs[196] = (Rectangle){
    state.anchor01.x + 72, state.anchor01.y + 456, 24, 24
  }; // Toggle: Toggle198
  state.layoutRecs[197] = (Rectangle){
    state.anchor01.x + 72, state.anchor01.y + 480, 24, 24
  }; // Toggle: Toggle199
  state.layoutRecs[198] = (Rectangle){
    state.anchor01.x + 48, state.anchor01.y + 456, 24, 24
  }; // Toggle: Toggle200
  state.layoutRecs[199] = (Rectangle){
    state.anchor01.x + 48, state.anchor01.y + 480, 24, 24
  }; // Toggle: Toggle201
  state.layoutRecs[200] = (Rectangle){
    state.anchor01.x + 24, state.anchor01.y + 456, 24, 24
  }; // Toggle: Toggle202
  state.layoutRecs[201] = (Rectangle){
    state.anchor01.x + 24, state.anchor01.y + 480, 24, 24
  }; // Toggle: Toggle203
  state.layoutRecs[202] = (Rectangle){
    state.anchor01.x + 144, state.anchor01.y + 480, 24, 24
  }; // Toggle: Toggle204
  state.layoutRecs[203] = (Rectangle){
    state.anchor01.x + 168, state.anchor01.y + 480, 24, 24
  }; // Toggle: Toggle205
  state.layoutRecs[204] = (Rectangle){
    state.anchor01.x + 192, state.anchor01.y + 480, 24, 24
  }; // Toggle: Toggle206
  state.layoutRecs[205] = (Rectangle){
    state.anchor01.x + 216, state.anchor01.y + 480, 24, 24
  }; // Toggle: Toggle207
  state.layoutRecs[206] = (Rectangle){
    state.anchor01.x + 216, state.anchor01.y + 456, 24, 24
  }; // Toggle: Toggle208
  state.layoutRecs[207] = (Rectangle){
    state.anchor01.x + 192, state.anchor01.y + 456, 24, 24
  }; // Toggle: Toggle209
  state.layoutRecs[208] = (Rectangle){
    state.anchor01.x + 168, state.anchor01.y + 456, 24, 24
  }; // Toggle: Toggle210
  state.layoutRecs[209] = (Rectangle){
    state.anchor01.x + 144, state.anchor01.y + 456, 24, 24
  }; // Toggle: Toggle211
  state.layoutRecs[210] = (Rectangle){
    state.anchor01.x + 144, state.anchor01.y + 432, 24, 24
  }; // Toggle: Toggle212
  state.layoutRecs[211] = (Rectangle){
    state.anchor01.x + 168, state.anchor01.y + 432, 24, 24
  }; // Toggle: Toggle213
  state.layoutRecs[212] = (Rectangle){
    state.anchor01.x + 192, state.anchor01.y + 432, 24, 24
  }; // Toggle: Toggle214
  state.layoutRecs[213] = (Rectangle){
    state.anchor01.x + 216, state.anchor01.y + 432, 24, 24
  }; // Toggle: Toggle215
  state.layoutRecs[214] = (Rectangle){
    state.anchor01.x + 216, state.anchor01.y + 408, 24, 24
  }; // Toggle: Toggle216
  state.layoutRecs[215] = (Rectangle){
    state.anchor01.x + 24, state.anchor01.y + 408, 24, 24
  }; // Toggle: Toggle217
  state.layoutRecs[216] = (Rectangle){
    state.anchor01.x + 168, state.anchor01.y + 408, 24, 24
  }; // Toggle: Toggle218
  state.layoutRecs[217] = (Rectangle){
    state.anchor01.x + 144, state.anchor01.y + 408, 24, 24
  }; // Toggle: Toggle219
  state.layoutRecs[218] = (Rectangle){
    state.anchor01.x + 144, state.anchor01.y + 384, 24, 24
  }; // Toggle: Toggle220
  state.layoutRecs[219] = (Rectangle){
    state.anchor01.x + 168, state.anchor01.y + 384, 24, 24
  }; // Toggle: Toggle221
  state.layoutRecs[220] = (Rectangle){
    state.anchor01.x + 192, state.anchor01.y + 384, 24, 24
  }; // Toggle: Toggle222
  state.layoutRecs[221] = (Rectangle){
    state.anchor01.x + 216, state.anchor01.y + 384, 24, 24
  }; // Toggle: Toggle223
  state.layoutRecs[222] = (Rectangle){
    state.anchor01.x + 264, state.anchor01.y + 384, 24, 24
  }; // Toggle: Toggle224
  state.layoutRecs[223] = (Rectangle){
    state.anchor01.x + 264, state.anchor01.y + 408, 24, 24
  }; // Toggle: Toggle225
  state.layoutRecs[224] = (Rectangle){
    state.anchor01.x + 264, state.anchor01.y + 432, 24, 24
  }; // Toggle: Toggle226
  state.layoutRecs[225] = (Rectangle){
    state.anchor01.x + 264, state.anchor01.y + 456, 24, 24
  }; // Toggle: Toggle227
  state.layoutRecs[226] = (Rectangle){
    state.anchor01.x + 264, state.anchor01.y + 480, 24, 24
  }; // Toggle: Toggle228
  state.layoutRecs[227] = (Rectangle){
    state.anchor01.x + 288, state.anchor01.y + 480, 24, 24
  }; // Toggle: Toggle229
  state.layoutRecs[228] = (Rectangle){
    state.anchor01.x + 312, state.anchor01.y + 480, 24, 24
  }; // Toggle: Toggle230
  state.layoutRecs[229] = (Rectangle){
    state.anchor01.x + 336, state.anchor01.y + 480, 24, 24
  }; // Toggle: Toggle231
  state.layoutRecs[230] = (Rectangle){
    state.anchor01.x + 336, state.anchor01.y + 456, 24, 24
  }; // Toggle: Toggle232
  state.layoutRecs[231] = (Rectangle){
    state.anchor01.x + 312, state.anchor01.y + 456, 24, 24
  }; // Toggle: Toggle233
  state.layoutRecs[232] = (Rectangle){
    state.anchor01.x + 288, state.anchor01.y + 456, 24, 24
  }; // Toggle: Toggle234
  state.layoutRecs[233] = (Rectangle){
    state.anchor01.x + 288, state.anchor01.y + 432, 24, 24
  }; // Toggle: Toggle235
  state.layoutRecs[234] = (Rectangle){
    state.anchor01.x + 312, state.anchor01.y + 432, 24, 24
  }; // Toggle: Toggle236
  state.layoutRecs[235] = (Rectangle){
    state.anchor01.x + 336, state.anchor01.y + 432, 24, 24
  }; // Toggle: Toggle237
  state.layoutRecs[236] = (Rectangle){
    state.anchor01.x + 336, state.anchor01.y + 408, 24, 24
  }; // Toggle: Toggle238
  state.layoutRecs[237] = (Rectangle){
    state.anchor01.x + 312, state.anchor01.y + 408, 24, 24
  }; // Toggle: Toggle239
  state.layoutRecs[238] = (Rectangle){
    state.anchor01.x + 288, state.anchor01.y + 408, 24, 24
  }; // Toggle: Toggle240
  state.layoutRecs[239] = (Rectangle){
    state.anchor01.x + 288, state.anchor01.y + 384, 24, 24
  }; // Toggle: Toggle241
  state.layoutRecs[240] = (Rectangle){
    state.anchor01.x + 312, state.anchor01.y + 384, 24, 24
  }; // Toggle: Toggle242
  state.layoutRecs[241] = (Rectangle){
    state.anchor01.x + 336, state.anchor01.y + 384, 24, 24
  }; // Toggle: Toggle243
  state.layoutRecs[242] = (Rectangle){
    state.anchor01.x + 384, state.anchor01.y + 384, 24, 24
  }; // Toggle: Toggle244
  state.layoutRecs[243] = (Rectangle){
    state.anchor01.x + 384, state.anchor01.y + 408, 24, 24
  }; // Toggle: Toggle245
  state.layoutRecs[244] = (Rectangle){
    state.anchor01.x + 384, state.anchor01.y + 432, 24, 24
  }; // Toggle: Toggle246
  state.layoutRecs[245] = (Rectangle){
    state.anchor01.x + 384, state.anchor01.y + 456, 24, 24
  }; // Toggle: Toggle247
  state.layoutRecs[246] = (Rectangle){
    state.anchor01.x + 384, state.anchor01.y + 480, 24, 24
  }; // Toggle: Toggle248
  state.layoutRecs[247] = (Rectangle){
    state.anchor01.x + 408, state.anchor01.y + 480, 24, 24
  }; // Toggle: Toggle249
  state.layoutRecs[248] = (Rectangle){
    state.anchor01.x + 432, state.anchor01.y + 480, 24, 24
  }; // Toggle: Toggle250
  state.layoutRecs[249] = (Rectangle){
    state.anchor01.x + 456, state.anchor01.y + 480, 24, 24
  }; // Toggle: Toggle251
  state.layoutRecs[250] = (Rectangle){
    state.anchor01.x + 456, state.anchor01.y + 456, 24, 24
  }; // Toggle: Toggle252
  state.layoutRecs[251] = (Rectangle){
    state.anchor01.x + 432, state.anchor01.y + 456, 24, 24
  }; // Toggle: Toggle253
  state.layoutRecs[252] = (Rectangle){
    state.anchor01.x + 408, state.anchor01.y + 456, 24, 24
  }; // Toggle: Toggle254
  state.layoutRecs[253] = (Rectangle){
    state.anchor01.x + 192, state.anchor01.y + 408, 24, 24
  }; // Toggle: Toggle254
  state.layoutRecs[254] = (Rectangle){
    state.anchor01.x + 192, state.anchor01.y + 72, 24, 24
  }; // Toggle: Editor1Pix6

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
  const char* Editor0Pix4Text = "";  // TOGGLE: Editor0Pix4
  const char* Editor0Pix8Text = "";  // TOGGLE: Editor0Pix8
  const char* Editor0Pix12Text = ""; // TOGGLE: Editor0Pix12
  const char* Editor0Pix16Text = ""; // TOGGLE: Editor0Pix16
  const char* Editor0Pix17Text = ""; // TOGGLE: Editor0Pix17
  const char* Editor0Pix18Text = ""; // TOGGLE: Editor0Pix18
  const char* Editor0Pix19Text = ""; // TOGGLE: Editor0Pix19
  const char* Editor0Pix13Text = ""; // TOGGLE: Editor0Pix13
  const char* Editor0Pix14Text = ""; // TOGGLE: Editor0Pix14
  const char* Editor0Pix15Text = ""; // TOGGLE: Editor0Pix15
  const char* Editor0Pix9Text = "";  // TOGGLE: Editor0Pix9
  const char* Editor0Pix10Text = ""; // TOGGLE: Editor0Pix10
  const char* Editor0Pix11Text = ""; // TOGGLE: Editor0Pix11
  const char* Editor0Pix1Text = "";  // TOGGLE: Editor0Pix1
  const char* Editor0Pix2Text = "";  // TOGGLE: Editor0Pix2
  const char* Editor0Pix3Text = "";  // TOGGLE: Editor0Pix3
  const char* Editor0Pix7Text = "";  // TOGGLE: Editor0Pix7
  const char* Editor0Pix6Text = "";  // TOGGLE: Editor0Pix6
  const char* Editor0Pix5Text = "";  // TOGGLE: Editor0Pix5
  const char* Editor1Pix8Text = "";  // TOGGLE: Editor1Pix8
  const char* Editor1Pix12Text = ""; // TOGGLE: Editor1Pix12
  const char* Editor1Pix16Text = ""; // TOGGLE: Editor1Pix16
  const char* Edotor1Pix4Text = "";  // TOGGLE: Edotor1Pix4
  const char* Editor1Pix0Text = "";  // TOGGLE: Editor1Pix0
  const char* Editor1Pix1Text = "";  // TOGGLE: Editor1Pix1
  const char* Editor1Pix2Text = "";  // TOGGLE: Editor1Pix2
  const char* Editor1Pix3Text = "";  // TOGGLE: Editor1Pix3
  const char* Editor1Pix7Text = "";  // TOGGLE: Editor1Pix7
  const char* Editor1Pix5Text = "";  // TOGGLE: Editor1Pix5
  const char* Editor1Pix17Text = ""; // TOGGLE: Editor1Pix17
  const char* Editor1Pix18Text = ""; // TOGGLE: Editor1Pix18
  const char* Editor1Pix19Text = ""; // TOGGLE: Editor1Pix19
  const char* Editor1Pix9Text = "";  // TOGGLE: Editor1Pix9
  const char* Editor1Pix13Text = ""; // TOGGLE: Editor1Pix13
  const char* Editor1Pix14Text = ""; // TOGGLE: Editor1Pix14
  const char* Editor1Pix15Text = ""; // TOGGLE: Editor1Pix15
  const char* Editor1Pix10Text = ""; // TOGGLE: Editor1Pix10
  const char* Editor1Pix11Text = ""; // TOGGLE: Editor1Pix11
  const char* Toggle064Text = "";    // TOGGLE: Toggle064
  const char* Toggle065Text = "";    // TOGGLE: Toggle065
  const char* Toggle066Text = "";    // TOGGLE: Toggle066
  const char* Toggle067Text = "";    // TOGGLE: Toggle067
  const char* Toggle068Text = "";    // TOGGLE: Toggle068
  const char* Toggle069Text = "";    // TOGGLE: Toggle069
  const char* Toggle070Text = "";    // TOGGLE: Toggle070
  const char* Toggle071Text = "";    // TOGGLE: Toggle071
  const char* Toggle072Text = "";    // TOGGLE: Toggle072
  const char* Toggle073Text = "";    // TOGGLE: Toggle073
  const char* Toggle074Text = "";    // TOGGLE: Toggle074
  const char* Toggle075Text = "";    // TOGGLE: Toggle075
  const char* Toggle076Text = "";    // TOGGLE: Toggle076
  const char* Toggle077Text = "";    // TOGGLE: Toggle077
  const char* Toggle078Text = "";    // TOGGLE: Toggle078
  const char* Toggle079Text = "";    // TOGGLE: Toggle079
  const char* Toggle080Text = "";    // TOGGLE: Toggle080
  const char* Toggle081Text = "";    // TOGGLE: Toggle081
  const char* Toggle082Text = "";    // TOGGLE: Toggle082
  const char* Toggle083Text = "";    // TOGGLE: Toggle083
  const char* Toggle084Text = "";    // TOGGLE: Toggle084
  const char* Toggle085Text = "";    // TOGGLE: Toggle085
  const char* Toggle086Text = "";    // TOGGLE: Toggle086
  const char* Toggle087Text = "";    // TOGGLE: Toggle087
  const char* Toggle088Text = "";    // TOGGLE: Toggle088
  const char* Toggle089Text = "";    // TOGGLE: Toggle089
  const char* Toggle090Text = "";    // TOGGLE: Toggle090
  const char* Toggle091Text = "";    // TOGGLE: Toggle091
  const char* Toggle092Text = "";    // TOGGLE: Toggle092
  const char* Toggle093Text = "";    // TOGGLE: Toggle093
  const char* Toggle094Text = "";    // TOGGLE: Toggle094
  const char* Toggle095Text = "";    // TOGGLE: Toggle095
  const char* Toggle096Text = "";    // TOGGLE: Toggle096
  const char* Toggle097Text = "";    // TOGGLE: Toggle097
  const char* Toggle098Text = "";    // TOGGLE: Toggle098
  const char* Toggle099Text = "";    // TOGGLE: Toggle099
  const char* Toggle100Text = "";    // TOGGLE: Toggle100
  const char* Toggle101Text = "";    // TOGGLE: Toggle101
  const char* Toggle102Text = "";    // TOGGLE: Toggle102
  const char* Toggle103Text = "";    // TOGGLE: Toggle103
  const char* Editor0Pix0Text = "";  // TOGGLE: Editor0Pix0
  const char* Toggle104Text = "";    // TOGGLE: Toggle104
  const char* Toggle105Text = "";    // TOGGLE: Toggle105
  const char* Toggle106Text = "";    // TOGGLE: Toggle106
  const char* Toggle107Text = "";    // TOGGLE: Toggle107
  const char* Toggle108Text = "";    // TOGGLE: Toggle108
  const char* Toggle109Text = "";    // TOGGLE: Toggle109
  const char* Toggle110Text = "";    // TOGGLE: Toggle110
  const char* Toggle111Text = "";    // TOGGLE: Toggle111
  const char* Toggle112Text = "";    // TOGGLE: Toggle112
  const char* Toggle113Text = "";    // TOGGLE: Toggle113
  const char* Toggle114Text = "";    // TOGGLE: Toggle114
  const char* Toggle115Text = "";    // TOGGLE: Toggle115
  const char* Toggle116Text = "";    // TOGGLE: Toggle116
  const char* Toggle117Text = "";    // TOGGLE: Toggle117
  const char* Toggle118Text = "";    // TOGGLE: Toggle118
  const char* Toggle119Text = "";    // TOGGLE: Toggle119
  const char* Toggle120Text = "";    // TOGGLE: Toggle120
  const char* Toggle121Text = "";    // TOGGLE: Toggle121
  const char* Toggle122Text = "";    // TOGGLE: Toggle122
  const char* Toggle123Text = "";    // TOGGLE: Toggle123
  const char* Toggle124Text = "";    // TOGGLE: Toggle124
  const char* Toggle125Text = "";    // TOGGLE: Toggle125
  const char* Toggle126Text = "";    // TOGGLE: Toggle126
  const char* Toggle127Text = "";    // TOGGLE: Toggle127
  const char* Toggle128Text = "";    // TOGGLE: Toggle128
  const char* Toggle129Text = "";    // TOGGLE: Toggle129
  const char* Toggle130Text = "";    // TOGGLE: Toggle130
  const char* Toggle131Text = "";    // TOGGLE: Toggle131
  const char* Toggle132Text = "";    // TOGGLE: Toggle132
  const char* Toggle133Text = "";    // TOGGLE: Toggle133
  const char* Toggle134Text = "";    // TOGGLE: Toggle134
  const char* Toggle135Text = "";    // TOGGLE: Toggle135
  const char* Toggle136Text = "";    // TOGGLE: Toggle136
  const char* Toggle137Text = "";    // TOGGLE: Toggle137
  const char* Toggle138Text = "";    // TOGGLE: Toggle138
  const char* Toggle139Text = "";    // TOGGLE: Toggle139
  const char* Toggle140Text = "";    // TOGGLE: Toggle140
  const char* Toggle141Text = "";    // TOGGLE: Toggle141
  const char* Toggle142Text = "";    // TOGGLE: Toggle142
  const char* Toggle143Text = "";    // TOGGLE: Toggle143
  const char* Toggle144Text = "";    // TOGGLE: Toggle144
  const char* Toggle145Text = "";    // TOGGLE: Toggle145
  const char* Toggle146Text = "";    // TOGGLE: Toggle146
  const char* Toggle147Text = "";    // TOGGLE: Toggle147
  const char* Toggle148Text = "";    // TOGGLE: Toggle148
  const char* Toggle149Text = "";    // TOGGLE: Toggle149
  const char* Toggle150Text = "";    // TOGGLE: Toggle150
  const char* Toggle151Text = "";    // TOGGLE: Toggle151
  const char* Toggle152Text = "";    // TOGGLE: Toggle152
  const char* Toggle153Text = "";    // TOGGLE: Toggle153
  const char* Toggle154Text = "";    // TOGGLE: Toggle154
  const char* Toggle155Text = "";    // TOGGLE: Toggle155
  const char* Toggle156Text = "";    // TOGGLE: Toggle156
  const char* Toggle157Text = "";    // TOGGLE: Toggle157
  const char* Toggle158Text = "";    // TOGGLE: Toggle158
  const char* Toggle159Text = "";    // TOGGLE: Toggle159
  const char* Toggle160Text = "";    // TOGGLE: Toggle160
  const char* Toggle161Text = "";    // TOGGLE: Toggle161
  const char* Toggle162Text = "";    // TOGGLE: Toggle162
  const char* Toggle163Text = "";    // TOGGLE: Toggle163
  const char* Toggle164Text = "";    // TOGGLE: Toggle164
  const char* Toggle165Text = "";    // TOGGLE: Toggle165
  const char* Toggle166Text = "";    // TOGGLE: Toggle166
  const char* Toggle167Text = "";    // TOGGLE: Toggle167
  const char* Toggle168Text = "";    // TOGGLE: Toggle168
  const char* Toggle169Text = "";    // TOGGLE: Toggle169
  const char* Toggle170Text = "";    // TOGGLE: Toggle170
  const char* Toggle171Text = "";    // TOGGLE: Toggle171
  const char* Toggle172Text = "";    // TOGGLE: Toggle172
  const char* Toggle173Text = "";    // TOGGLE: Toggle173
  const char* Toggle174Text = "";    // TOGGLE: Toggle174
  const char* Toggle175Text = "";    // TOGGLE: Toggle175
  const char* Toggle176Text = "";    // TOGGLE: Toggle176
  const char* Toggle177Text = "";    // TOGGLE: Toggle177
  const char* Toggle178Text = "";    // TOGGLE: Toggle178
  const char* Toggle179Text = "";    // TOGGLE: Toggle179
  const char* Toggle180Text = "";    // TOGGLE: Toggle180
  const char* Toggle181Text = "";    // TOGGLE: Toggle181
  const char* Toggle182Text = "";    // TOGGLE: Toggle182
  const char* Toggle183Text = "";    // TOGGLE: Toggle183
  const char* Toggle184Text = "";    // TOGGLE: Toggle184
  const char* Toggle185Text = "";    // TOGGLE: Toggle185
  const char* Toggle186Text = "";    // TOGGLE: Toggle186
  const char* Toggle188Text = "";    // TOGGLE: Toggle188
  const char* Toggle189Text = "";    // TOGGLE: Toggle189
  const char* Toggle190Text = "";    // TOGGLE: Toggle190
  const char* Toggle191Text = "";    // TOGGLE: Toggle191
  const char* Toggle192Text = "";    // TOGGLE: Toggle192
  const char* Toggle193Text = "";    // TOGGLE: Toggle193
  const char* Toggle194Text = "";    // TOGGLE: Toggle194
  const char* Toggle195Text = "";    // TOGGLE: Toggle195
  const char* Toggle196Text = "";    // TOGGLE: Toggle196
  const char* Toggle197Text = "";    // TOGGLE: Toggle197
  const char* Toggle198Text = "";    // TOGGLE: Toggle198
  const char* Toggle199Text = "";    // TOGGLE: Toggle199
  const char* Toggle200Text = "";    // TOGGLE: Toggle200
  const char* Toggle201Text = "";    // TOGGLE: Toggle201
  const char* Toggle202Text = "";    // TOGGLE: Toggle202
  const char* Toggle203Text = "";    // TOGGLE: Toggle203
  const char* Toggle204Text = "";    // TOGGLE: Toggle204
  const char* Toggle205Text = "";    // TOGGLE: Toggle205
  const char* Toggle206Text = "";    // TOGGLE: Toggle206
  const char* Toggle207Text = "";    // TOGGLE: Toggle207
  const char* Toggle208Text = "";    // TOGGLE: Toggle208
  const char* Toggle209Text = "";    // TOGGLE: Toggle209
  const char* Toggle210Text = "";    // TOGGLE: Toggle210
  const char* Toggle211Text = "";    // TOGGLE: Toggle211
  const char* Toggle212Text = "";    // TOGGLE: Toggle212
  const char* Toggle213Text = "";    // TOGGLE: Toggle213
  const char* Toggle214Text = "";    // TOGGLE: Toggle214
  const char* Toggle215Text = "";    // TOGGLE: Toggle215
  const char* Toggle216Text = "";    // TOGGLE: Toggle216
  const char* Toggle217Text = "";    // TOGGLE: Toggle217
  const char* Toggle218Text = "";    // TOGGLE: Toggle218
  const char* Toggle219Text = "";    // TOGGLE: Toggle219
  const char* Toggle220Text = "";    // TOGGLE: Toggle220
  const char* Toggle221Text = "";    // TOGGLE: Toggle221
  const char* Toggle222Text = "";    // TOGGLE: Toggle222
  const char* Toggle223Text = "";    // TOGGLE: Toggle223
  const char* Toggle224Text = "";    // TOGGLE: Toggle224
  const char* Toggle225Text = "";    // TOGGLE: Toggle225
  const char* Toggle226Text = "";    // TOGGLE: Toggle226
  const char* Toggle227Text = "";    // TOGGLE: Toggle227
  const char* Toggle228Text = "";    // TOGGLE: Toggle228
  const char* Toggle229Text = "";    // TOGGLE: Toggle229
  const char* Toggle230Text = "";    // TOGGLE: Toggle230
  const char* Toggle231Text = "";    // TOGGLE: Toggle231
  const char* Toggle232Text = "";    // TOGGLE: Toggle232
  const char* Toggle233Text = "";    // TOGGLE: Toggle233
  const char* Toggle234Text = "";    // TOGGLE: Toggle234
  const char* Toggle235Text = "";    // TOGGLE: Toggle235
  const char* Toggle236Text = "";    // TOGGLE: Toggle236
  const char* Toggle237Text = "";    // TOGGLE: Toggle237
  const char* Toggle238Text = "";    // TOGGLE: Toggle238
  const char* Toggle239Text = "";    // TOGGLE: Toggle239
  const char* Toggle240Text = "";    // TOGGLE: Toggle240
  const char* Toggle241Text = "";    // TOGGLE: Toggle241
  const char* Toggle242Text = "";    // TOGGLE: Toggle242
  const char* Toggle243Text = "";    // TOGGLE: Toggle243
  const char* Toggle244Text = "";    // TOGGLE: Toggle244
  const char* Toggle245Text = "";    // TOGGLE: Toggle245
  const char* Toggle246Text = "";    // TOGGLE: Toggle246
  const char* Toggle247Text = "";    // TOGGLE: Toggle247
  const char* Toggle248Text = "";    // TOGGLE: Toggle248
  const char* Toggle249Text = "";    // TOGGLE: Toggle249
  const char* Toggle250Text = "";    // TOGGLE: Toggle250
  const char* Toggle251Text = "";    // TOGGLE: Toggle251
  const char* Toggle252Text = "";    // TOGGLE: Toggle252
  const char* Toggle253Text = "";    // TOGGLE: Toggle253
  const char* Toggle254Text = "";    // TOGGLE: Toggle254
  const char* Editor1Pix6Text = "";  // TOGGLE: Editor1Pix6

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
  GuiToggle(state->layoutRecs[24], Editor0Pix4Text, &state->Editor0Pix4Active);
  GuiToggle(state->layoutRecs[25], Editor0Pix8Text, &state->Editor0Pix8Active);
  GuiToggle(
    state->layoutRecs[26], Editor0Pix12Text, &state->Editor0Pix12Active);
  GuiToggle(
    state->layoutRecs[27], Editor0Pix16Text, &state->Editor0Pix16Active);
  GuiToggle(
    state->layoutRecs[28], Editor0Pix17Text, &state->Editor0Pix17Active);
  GuiToggle(
    state->layoutRecs[29], Editor0Pix18Text, &state->Editor0Pix18Active);
  GuiToggle(
    state->layoutRecs[30], Editor0Pix19Text, &state->Editor0Pix19Active);
  GuiToggle(
    state->layoutRecs[31], Editor0Pix13Text, &state->Editor0Pix13Active);
  GuiToggle(
    state->layoutRecs[32], Editor0Pix14Text, &state->Editor0Pix14Active);
  GuiToggle(
    state->layoutRecs[33], Editor0Pix15Text, &state->Editor0Pix15Active);
  GuiToggle(state->layoutRecs[34], Editor0Pix9Text, &state->Editor0Pix9Active);
  GuiToggle(
    state->layoutRecs[35], Editor0Pix10Text, &state->Editor0Pix10Active);
  GuiToggle(
    state->layoutRecs[36], Editor0Pix11Text, &state->Editor0Pix11Active);
  GuiToggle(state->layoutRecs[37], Editor0Pix1Text, &state->Editor0Pix1Active);
  GuiToggle(state->layoutRecs[38], Editor0Pix2Text, &state->Editor0Pix2Active);
  GuiToggle(state->layoutRecs[39], Editor0Pix3Text, &state->Editor0Pix3Active);
  GuiToggle(state->layoutRecs[40], Editor0Pix7Text, &state->Editor0Pix7Active);
  GuiToggle(state->layoutRecs[41], Editor0Pix6Text, &state->Editor0Pix6Active);
  GuiToggle(state->layoutRecs[42], Editor0Pix5Text, &state->Editor0Pix5Active);
  GuiToggle(state->layoutRecs[43], Editor1Pix8Text, &state->Editor1Pix8Active);
  GuiToggle(
    state->layoutRecs[44], Editor1Pix12Text, &state->Editor1Pix12Active);
  GuiToggle(
    state->layoutRecs[45], Editor1Pix16Text, &state->Editor1Pix16Active);
  GuiToggle(state->layoutRecs[46], Edotor1Pix4Text, &state->Edotor1Pix4Active);
  GuiToggle(state->layoutRecs[47], Editor1Pix0Text, &state->Editor1Pix0Active);
  GuiToggle(state->layoutRecs[48], Editor1Pix1Text, &state->Editor1Pix1Active);
  GuiToggle(state->layoutRecs[49], Editor1Pix2Text, &state->Editor1Pix2Active);
  GuiToggle(state->layoutRecs[50], Editor1Pix3Text, &state->Editor1Pix3Active);
  GuiToggle(state->layoutRecs[51], Editor1Pix7Text, &state->Editor1Pix7Active);
  GuiToggle(state->layoutRecs[52], Editor1Pix5Text, &state->Editor1Pix5Active);
  GuiToggle(
    state->layoutRecs[53], Editor1Pix17Text, &state->Editor1Pix17Active);
  GuiToggle(
    state->layoutRecs[54], Editor1Pix18Text, &state->Editor1Pix18Active);
  GuiToggle(
    state->layoutRecs[55], Editor1Pix19Text, &state->Editor1Pix19Active);
  GuiToggle(state->layoutRecs[56], Editor1Pix9Text, &state->Editor1Pix9Active);
  GuiToggle(
    state->layoutRecs[57], Editor1Pix13Text, &state->Editor1Pix13Active);
  GuiToggle(
    state->layoutRecs[58], Editor1Pix14Text, &state->Editor1Pix14Active);
  GuiToggle(
    state->layoutRecs[59], Editor1Pix15Text, &state->Editor1Pix15Active);
  GuiToggle(
    state->layoutRecs[60], Editor1Pix10Text, &state->Editor1Pix10Active);
  GuiToggle(
    state->layoutRecs[61], Editor1Pix11Text, &state->Editor1Pix11Active);
  GuiToggle(state->layoutRecs[62], Toggle064Text, &state->Toggle064Active);
  GuiToggle(state->layoutRecs[63], Toggle065Text, &state->Toggle065Active);
  GuiToggle(state->layoutRecs[64], Toggle066Text, &state->Toggle066Active);
  GuiToggle(state->layoutRecs[65], Toggle067Text, &state->Toggle067Active);
  GuiToggle(state->layoutRecs[66], Toggle068Text, &state->Toggle068Active);
  GuiToggle(state->layoutRecs[67], Toggle069Text, &state->Toggle069Active);
  GuiToggle(state->layoutRecs[68], Toggle070Text, &state->Toggle070Active);
  GuiToggle(state->layoutRecs[69], Toggle071Text, &state->Toggle071Active);
  GuiToggle(state->layoutRecs[70], Toggle072Text, &state->Toggle072Active);
  GuiToggle(state->layoutRecs[71], Toggle073Text, &state->Toggle073Active);
  GuiToggle(state->layoutRecs[72], Toggle074Text, &state->Toggle074Active);
  GuiToggle(state->layoutRecs[73], Toggle075Text, &state->Toggle075Active);
  GuiToggle(state->layoutRecs[74], Toggle076Text, &state->Toggle076Active);
  GuiToggle(state->layoutRecs[75], Toggle077Text, &state->Toggle077Active);
  GuiToggle(state->layoutRecs[76], Toggle078Text, &state->Toggle078Active);
  GuiToggle(state->layoutRecs[77], Toggle079Text, &state->Toggle079Active);
  GuiToggle(state->layoutRecs[78], Toggle080Text, &state->Toggle080Active);
  GuiToggle(state->layoutRecs[79], Toggle081Text, &state->Toggle081Active);
  GuiToggle(state->layoutRecs[80], Toggle082Text, &state->Toggle082Active);
  GuiToggle(state->layoutRecs[81], Toggle083Text, &state->Toggle083Active);
  GuiToggle(state->layoutRecs[82], Toggle084Text, &state->Toggle084Active);
  GuiToggle(state->layoutRecs[83], Toggle085Text, &state->Toggle085Active);
  GuiToggle(state->layoutRecs[84], Toggle086Text, &state->Toggle086Active);
  GuiToggle(state->layoutRecs[85], Toggle087Text, &state->Toggle087Active);
  GuiToggle(state->layoutRecs[86], Toggle088Text, &state->Toggle088Active);
  GuiToggle(state->layoutRecs[87], Toggle089Text, &state->Toggle089Active);
  GuiToggle(state->layoutRecs[88], Toggle090Text, &state->Toggle090Active);
  GuiToggle(state->layoutRecs[89], Toggle091Text, &state->Toggle091Active);
  GuiToggle(state->layoutRecs[90], Toggle092Text, &state->Toggle092Active);
  GuiToggle(state->layoutRecs[91], Toggle093Text, &state->Toggle093Active);
  GuiToggle(state->layoutRecs[92], Toggle094Text, &state->Toggle094Active);
  GuiToggle(state->layoutRecs[93], Toggle095Text, &state->Toggle095Active);
  GuiToggle(state->layoutRecs[94], Toggle096Text, &state->Toggle096Active);
  GuiToggle(state->layoutRecs[95], Toggle097Text, &state->Toggle097Active);
  GuiToggle(state->layoutRecs[96], Toggle098Text, &state->Toggle098Active);
  GuiToggle(state->layoutRecs[97], Toggle099Text, &state->Toggle099Active);
  GuiToggle(state->layoutRecs[98], Toggle100Text, &state->Toggle100Active);
  GuiToggle(state->layoutRecs[99], Toggle101Text, &state->Toggle101Active);
  GuiToggle(state->layoutRecs[100], Toggle102Text, &state->Toggle102Active);
  GuiToggle(state->layoutRecs[101], Toggle103Text, &state->Toggle103Active);
  GuiToggle(state->layoutRecs[102], Editor0Pix0Text, &state->Editor0Pix0Active);
  GuiToggle(state->layoutRecs[103], Toggle104Text, &state->Toggle104Active);
  GuiToggle(state->layoutRecs[104], Toggle105Text, &state->Toggle105Active);
  GuiToggle(state->layoutRecs[105], Toggle106Text, &state->Toggle106Active);
  GuiToggle(state->layoutRecs[106], Toggle107Text, &state->Toggle107Active);
  GuiToggle(state->layoutRecs[107], Toggle108Text, &state->Toggle108Active);
  GuiToggle(state->layoutRecs[108], Toggle109Text, &state->Toggle109Active);
  GuiToggle(state->layoutRecs[109], Toggle110Text, &state->Toggle110Active);
  GuiToggle(state->layoutRecs[110], Toggle111Text, &state->Toggle111Active);
  GuiToggle(state->layoutRecs[111], Toggle112Text, &state->Toggle112Active);
  GuiToggle(state->layoutRecs[112], Toggle113Text, &state->Toggle113Active);
  GuiToggle(state->layoutRecs[113], Toggle114Text, &state->Toggle114Active);
  GuiToggle(state->layoutRecs[114], Toggle115Text, &state->Toggle115Active);
  GuiToggle(state->layoutRecs[115], Toggle116Text, &state->Toggle116Active);
  GuiToggle(state->layoutRecs[116], Toggle117Text, &state->Toggle117Active);
  GuiToggle(state->layoutRecs[117], Toggle118Text, &state->Toggle118Active);
  GuiToggle(state->layoutRecs[118], Toggle119Text, &state->Toggle119Active);
  GuiToggle(state->layoutRecs[119], Toggle120Text, &state->Toggle120Active);
  GuiToggle(state->layoutRecs[120], Toggle121Text, &state->Toggle121Active);
  GuiToggle(state->layoutRecs[121], Toggle122Text, &state->Toggle122Active);
  GuiToggle(state->layoutRecs[122], Toggle123Text, &state->Toggle123Active);
  GuiToggle(state->layoutRecs[123], Toggle124Text, &state->Toggle124Active);
  GuiToggle(state->layoutRecs[124], Toggle125Text, &state->Toggle125Active);
  GuiToggle(state->layoutRecs[125], Toggle126Text, &state->Toggle126Active);
  GuiToggle(state->layoutRecs[126], Toggle127Text, &state->Toggle127Active);
  GuiToggle(state->layoutRecs[127], Toggle128Text, &state->Toggle128Active);
  GuiToggle(state->layoutRecs[128], Toggle129Text, &state->Toggle129Active);
  GuiToggle(state->layoutRecs[129], Toggle130Text, &state->Toggle130Active);
  GuiToggle(state->layoutRecs[130], Toggle131Text, &state->Toggle131Active);
  GuiToggle(state->layoutRecs[131], Toggle132Text, &state->Toggle132Active);
  GuiToggle(state->layoutRecs[132], Toggle133Text, &state->Toggle133Active);
  GuiToggle(state->layoutRecs[133], Toggle134Text, &state->Toggle134Active);
  GuiToggle(state->layoutRecs[134], Toggle135Text, &state->Toggle135Active);
  GuiToggle(state->layoutRecs[135], Toggle136Text, &state->Toggle136Active);
  GuiToggle(state->layoutRecs[136], Toggle137Text, &state->Toggle137Active);
  GuiToggle(state->layoutRecs[137], Toggle138Text, &state->Toggle138Active);
  GuiToggle(state->layoutRecs[138], Toggle139Text, &state->Toggle139Active);
  GuiToggle(state->layoutRecs[139], Toggle140Text, &state->Toggle140Active);
  GuiToggle(state->layoutRecs[140], Toggle141Text, &state->Toggle141Active);
  GuiToggle(state->layoutRecs[141], Toggle142Text, &state->Toggle142Active);
  GuiToggle(state->layoutRecs[142], Toggle143Text, &state->Toggle143Active);
  GuiToggle(state->layoutRecs[143], Toggle144Text, &state->Toggle144Active);
  GuiToggle(state->layoutRecs[144], Toggle145Text, &state->Toggle145Active);
  GuiToggle(state->layoutRecs[145], Toggle146Text, &state->Toggle146Active);
  GuiToggle(state->layoutRecs[146], Toggle147Text, &state->Toggle147Active);
  GuiToggle(state->layoutRecs[147], Toggle148Text, &state->Toggle148Active);
  GuiToggle(state->layoutRecs[148], Toggle149Text, &state->Toggle149Active);
  GuiToggle(state->layoutRecs[149], Toggle150Text, &state->Toggle150Active);
  GuiToggle(state->layoutRecs[150], Toggle151Text, &state->Toggle151Active);
  GuiToggle(state->layoutRecs[151], Toggle152Text, &state->Toggle152Active);
  GuiToggle(state->layoutRecs[152], Toggle153Text, &state->Toggle153Active);
  GuiToggle(state->layoutRecs[153], Toggle154Text, &state->Toggle154Active);
  GuiToggle(state->layoutRecs[154], Toggle155Text, &state->Toggle155Active);
  GuiToggle(state->layoutRecs[155], Toggle156Text, &state->Toggle156Active);
  GuiToggle(state->layoutRecs[156], Toggle157Text, &state->Toggle157Active);
  GuiToggle(state->layoutRecs[157], Toggle158Text, &state->Toggle158Active);
  GuiToggle(state->layoutRecs[158], Toggle159Text, &state->Toggle159Active);
  GuiToggle(state->layoutRecs[159], Toggle160Text, &state->Toggle160Active);
  GuiToggle(state->layoutRecs[160], Toggle161Text, &state->Toggle161Active);
  GuiToggle(state->layoutRecs[161], Toggle162Text, &state->Toggle162Active);
  GuiToggle(state->layoutRecs[162], Toggle163Text, &state->Toggle163Active);
  GuiToggle(state->layoutRecs[163], Toggle164Text, &state->Toggle164Active);
  GuiToggle(state->layoutRecs[164], Toggle165Text, &state->Toggle165Active);
  GuiToggle(state->layoutRecs[165], Toggle166Text, &state->Toggle166Active);
  GuiToggle(state->layoutRecs[166], Toggle167Text, &state->Toggle167Active);
  GuiToggle(state->layoutRecs[167], Toggle168Text, &state->Toggle168Active);
  GuiToggle(state->layoutRecs[168], Toggle169Text, &state->Toggle169Active);
  GuiToggle(state->layoutRecs[169], Toggle170Text, &state->Toggle170Active);
  GuiToggle(state->layoutRecs[170], Toggle171Text, &state->Toggle171Active);
  GuiToggle(state->layoutRecs[171], Toggle172Text, &state->Toggle172Active);
  GuiToggle(state->layoutRecs[172], Toggle173Text, &state->Toggle173Active);
  GuiToggle(state->layoutRecs[173], Toggle174Text, &state->Toggle174Active);
  GuiToggle(state->layoutRecs[174], Toggle175Text, &state->Toggle175Active);
  GuiToggle(state->layoutRecs[175], Toggle176Text, &state->Toggle176Active);
  GuiToggle(state->layoutRecs[176], Toggle177Text, &state->Toggle177Active);
  GuiToggle(state->layoutRecs[177], Toggle178Text, &state->Toggle178Active);
  GuiToggle(state->layoutRecs[178], Toggle179Text, &state->Toggle179Active);
  GuiToggle(state->layoutRecs[179], Toggle180Text, &state->Toggle180Active);
  GuiToggle(state->layoutRecs[180], Toggle181Text, &state->Toggle181Active);
  GuiToggle(state->layoutRecs[181], Toggle182Text, &state->Toggle182Active);
  GuiToggle(state->layoutRecs[182], Toggle183Text, &state->Toggle183Active);
  GuiToggle(state->layoutRecs[183], Toggle184Text, &state->Toggle184Active);
  GuiToggle(state->layoutRecs[184], Toggle185Text, &state->Toggle185Active);
  GuiToggle(state->layoutRecs[185], Toggle186Text, &state->Toggle186Active);
  GuiToggle(state->layoutRecs[186], Toggle188Text, &state->Toggle188Active);
  GuiToggle(state->layoutRecs[187], Toggle189Text, &state->Toggle189Active);
  GuiToggle(state->layoutRecs[188], Toggle190Text, &state->Toggle190Active);
  GuiToggle(state->layoutRecs[189], Toggle191Text, &state->Toggle191Active);
  GuiToggle(state->layoutRecs[190], Toggle192Text, &state->Toggle192Active);
  GuiToggle(state->layoutRecs[191], Toggle193Text, &state->Toggle193Active);
  GuiToggle(state->layoutRecs[192], Toggle194Text, &state->Toggle194Active);
  GuiToggle(state->layoutRecs[193], Toggle195Text, &state->Toggle195Active);
  GuiToggle(state->layoutRecs[194], Toggle196Text, &state->Toggle196Active);
  GuiToggle(state->layoutRecs[195], Toggle197Text, &state->Toggle197Active);
  GuiToggle(state->layoutRecs[196], Toggle198Text, &state->Toggle198Active);
  GuiToggle(state->layoutRecs[197], Toggle199Text, &state->Toggle199Active);
  GuiToggle(state->layoutRecs[198], Toggle200Text, &state->Toggle200Active);
  GuiToggle(state->layoutRecs[199], Toggle201Text, &state->Toggle201Active);
  GuiToggle(state->layoutRecs[200], Toggle202Text, &state->Toggle202Active);
  GuiToggle(state->layoutRecs[201], Toggle203Text, &state->Toggle203Active);
  GuiToggle(state->layoutRecs[202], Toggle204Text, &state->Toggle204Active);
  GuiToggle(state->layoutRecs[203], Toggle205Text, &state->Toggle205Active);
  GuiToggle(state->layoutRecs[204], Toggle206Text, &state->Toggle206Active);
  GuiToggle(state->layoutRecs[205], Toggle207Text, &state->Toggle207Active);
  GuiToggle(state->layoutRecs[206], Toggle208Text, &state->Toggle208Active);
  GuiToggle(state->layoutRecs[207], Toggle209Text, &state->Toggle209Active);
  GuiToggle(state->layoutRecs[208], Toggle210Text, &state->Toggle210Active);
  GuiToggle(state->layoutRecs[209], Toggle211Text, &state->Toggle211Active);
  GuiToggle(state->layoutRecs[210], Toggle212Text, &state->Toggle212Active);
  GuiToggle(state->layoutRecs[211], Toggle213Text, &state->Toggle213Active);
  GuiToggle(state->layoutRecs[212], Toggle214Text, &state->Toggle214Active);
  GuiToggle(state->layoutRecs[213], Toggle215Text, &state->Toggle215Active);
  GuiToggle(state->layoutRecs[214], Toggle216Text, &state->Toggle216Active);
  GuiToggle(state->layoutRecs[215], Toggle217Text, &state->Toggle217Active);
  GuiToggle(state->layoutRecs[216], Toggle218Text, &state->Toggle218Active);
  GuiToggle(state->layoutRecs[217], Toggle219Text, &state->Toggle219Active);
  GuiToggle(state->layoutRecs[218], Toggle220Text, &state->Toggle220Active);
  GuiToggle(state->layoutRecs[219], Toggle221Text, &state->Toggle221Active);
  GuiToggle(state->layoutRecs[220], Toggle222Text, &state->Toggle222Active);
  GuiToggle(state->layoutRecs[221], Toggle223Text, &state->Toggle223Active);
  GuiToggle(state->layoutRecs[222], Toggle224Text, &state->Toggle224Active);
  GuiToggle(state->layoutRecs[223], Toggle225Text, &state->Toggle225Active);
  GuiToggle(state->layoutRecs[224], Toggle226Text, &state->Toggle226Active);
  GuiToggle(state->layoutRecs[225], Toggle227Text, &state->Toggle227Active);
  GuiToggle(state->layoutRecs[226], Toggle228Text, &state->Toggle228Active);
  GuiToggle(state->layoutRecs[227], Toggle229Text, &state->Toggle229Active);
  GuiToggle(state->layoutRecs[228], Toggle230Text, &state->Toggle230Active);
  GuiToggle(state->layoutRecs[229], Toggle231Text, &state->Toggle231Active);
  GuiToggle(state->layoutRecs[230], Toggle232Text, &state->Toggle232Active);
  GuiToggle(state->layoutRecs[231], Toggle233Text, &state->Toggle233Active);
  GuiToggle(state->layoutRecs[232], Toggle234Text, &state->Toggle234Active);
  GuiToggle(state->layoutRecs[233], Toggle235Text, &state->Toggle235Active);
  GuiToggle(state->layoutRecs[234], Toggle236Text, &state->Toggle236Active);
  GuiToggle(state->layoutRecs[235], Toggle237Text, &state->Toggle237Active);
  GuiToggle(state->layoutRecs[236], Toggle238Text, &state->Toggle238Active);
  GuiToggle(state->layoutRecs[237], Toggle239Text, &state->Toggle239Active);
  GuiToggle(state->layoutRecs[238], Toggle240Text, &state->Toggle240Active);
  GuiToggle(state->layoutRecs[239], Toggle241Text, &state->Toggle241Active);
  GuiToggle(state->layoutRecs[240], Toggle242Text, &state->Toggle242Active);
  GuiToggle(state->layoutRecs[241], Toggle243Text, &state->Toggle243Active);
  GuiToggle(state->layoutRecs[242], Toggle244Text, &state->Toggle244Active);
  GuiToggle(state->layoutRecs[243], Toggle245Text, &state->Toggle245Active);
  GuiToggle(state->layoutRecs[244], Toggle246Text, &state->Toggle246Active);
  GuiToggle(state->layoutRecs[245], Toggle247Text, &state->Toggle247Active);
  GuiToggle(state->layoutRecs[246], Toggle248Text, &state->Toggle248Active);
  GuiToggle(state->layoutRecs[247], Toggle249Text, &state->Toggle249Active);
  GuiToggle(state->layoutRecs[248], Toggle250Text, &state->Toggle250Active);
  GuiToggle(state->layoutRecs[249], Toggle251Text, &state->Toggle251Active);
  GuiToggle(state->layoutRecs[250], Toggle252Text, &state->Toggle252Active);
  GuiToggle(state->layoutRecs[251], Toggle253Text, &state->Toggle253Active);
  GuiToggle(state->layoutRecs[252], Toggle254Text, &state->Toggle254Active);
  GuiToggle(state->layoutRecs[253], Toggle254Text, &state->Toggle254Active);
  GuiToggle(state->layoutRecs[254], Editor1Pix6Text, &state->Editor1Pix6Active);
}

#endif // GUI_CHIP8FONTGENERATOR_IMPLEMENTATION
