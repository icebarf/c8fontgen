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
  //   bool ToggleActive[TOTAL_TOGGLE_COUNT];
  bool Toggle001Active; // Toggle: Toggle001
  bool Toggle002Active; // Toggle: Toggle002
  bool Toggle003Active; // Toggle: Toggle003
  bool Toggle004Active; // Toggle: Toggle004
  bool Toggle005Active; // Toggle: Toggle005
  bool Toggle006Active; // Toggle: Toggle006
  bool Toggle007Active; // Toggle: Toggle007
  bool Toggle008Active; // Toggle: Toggle008
  bool Toggle009Active; // Toggle: Toggle009
  bool Toggle010Active; // Toggle: Toggle010
  bool Toggle011Active; // Toggle: Toggle011
  bool Toggle012Active; // Toggle: Toggle012
  bool Toggle013Active; // Toggle: Toggle013
  bool Toggle014Active; // Toggle: Toggle014
  bool Toggle015Active; // Toggle: Toggle015
  bool Toggle016Active; // Toggle: Toggle016
  bool Toggle017Active; // Toggle: Toggle017
  bool Toggle018Active; // Toggle: Toggle018
  bool Toggle019Active; // Toggle: Toggle019
  bool Toggle020Active; // Toggle: Toggle020
  bool Toggle021Active; // Toggle: Toggle021
  bool Toggle022Active; // Toggle: Toggle022
  bool Toggle023Active; // Toggle: Toggle023
  bool Toggle024Active; // Toggle: Toggle024
  bool Toggle025Active; // Toggle: Toggle025
  bool Toggle026Active; // Toggle: Toggle026
  bool Toggle027Active; // Toggle: Toggle027
  bool Toggle028Active; // Toggle: Toggle028
  bool Toggle029Active; // Toggle: Toggle029
  bool Toggle030Active; // Toggle: Toggle030
  bool Toggle031Active; // Toggle: Toggle031
  bool Toggle032Active; // Toggle: Toggle032
  bool Toggle033Active; // Toggle: Toggle033
  bool Toggle034Active; // Toggle: Toggle034
  bool Toggle035Active; // Toggle: Toggle035
  bool Toggle036Active; // Toggle: Toggle036
  bool Toggle037Active; // Toggle: Toggle037
  bool Toggle038Active; // Toggle: Toggle038
  bool Toggle039Active; // Toggle: Toggle039
  bool Toggle040Active; // Toggle: Toggle040
  bool Toggle041Active; // Toggle: Toggle041
  bool Toggle042Active; // Toggle: Toggle042
  bool Toggle043Active; // Toggle: Toggle043
  bool Toggle044Active; // Toggle: Toggle044
  bool Toggle045Active; // Toggle: Toggle045
  bool Toggle046Active; // Toggle: Toggle046
  bool Toggle047Active; // Toggle: Toggle047
  bool Toggle048Active; // Toggle: Toggle048
  bool Toggle049Active; // Toggle: Toggle049
  bool Toggle050Active; // Toggle: Toggle050
  bool Toggle051Active; // Toggle: Toggle051
  bool Toggle052Active; // Toggle: Toggle052
  bool Toggle053Active; // Toggle: Toggle053
  bool Toggle054Active; // Toggle: Toggle054
  bool Toggle055Active; // Toggle: Toggle055
  bool Toggle056Active; // Toggle: Toggle056
  bool Toggle057Active; // Toggle: Toggle057
  bool Toggle058Active; // Toggle: Toggle058
  bool Toggle059Active; // Toggle: Toggle059
  bool Toggle060Active; // Toggle: Toggle060
  bool Toggle061Active; // Toggle: Toggle061
  bool Toggle062Active; // Toggle: Toggle062
  bool Toggle063Active; // Toggle: Toggle063
  bool Toggle064Active; // Toggle: Toggle064
  bool Toggle065Active; // Toggle: Toggle065
  bool Toggle066Active; // Toggle: Toggle066
  bool Toggle067Active; // Toggle: Toggle067
  bool Toggle068Active; // Toggle: Toggle068
  bool Toggle069Active; // Toggle: Toggle069
  bool Toggle070Active; // Toggle: Toggle070
  bool Toggle071Active; // Toggle: Toggle071
  bool Toggle072Active; // Toggle: Toggle072
  bool Toggle073Active; // Toggle: Toggle073
  bool Toggle074Active; // Toggle: Toggle074
  bool Toggle075Active; // Toggle: Toggle075
  bool Toggle076Active; // Toggle: Toggle076
  bool Toggle077Active; // Toggle: Toggle077
  bool Toggle078Active; // Toggle: Toggle078
  bool Toggle079Active; // Toggle: Toggle079
  bool Toggle080Active; // Toggle: Toggle080
  bool Toggle081Active; // Toggle: Toggle081
  bool Toggle082Active; // Toggle: Toggle082
  bool Toggle083Active; // Toggle: Toggle083
  bool Toggle084Active; // Toggle: Toggle084
  bool Toggle085Active; // Toggle: Toggle085
  bool Toggle086Active; // Toggle: Toggle086
  bool Toggle087Active; // Toggle: Toggle087
  bool Toggle088Active; // Toggle: Toggle088
  bool Toggle089Active; // Toggle: Toggle089
  bool Toggle090Active; // Toggle: Toggle090
  bool Toggle091Active; // Toggle: Toggle091
  bool Toggle092Active; // Toggle: Toggle092
  bool Toggle093Active; // Toggle: Toggle093
  bool Toggle094Active; // Toggle: Toggle094
  bool Toggle095Active; // Toggle: Toggle095
  bool Toggle096Active; // Toggle: Toggle096
  bool Toggle097Active; // Toggle: Toggle097
  bool Toggle098Active; // Toggle: Toggle098
  bool Toggle099Active; // Toggle: Toggle099
  bool Toggle100Active; // Toggle: Toggle100
  bool Toggle101Active; // Toggle: Toggle101
  bool Toggle102Active; // Toggle: Toggle102
  bool Toggle103Active; // Toggle: Toggle103
  bool Toggle104Active; // Toggle: Toggle104
  bool Toggle105Active; // Toggle: Toggle105
  bool Toggle106Active; // Toggle: Toggle106
  bool Toggle107Active; // Toggle: Toggle107
  bool Toggle108Active; // Toggle: Toggle108
  bool Toggle109Active; // Toggle: Toggle109
  bool Toggle110Active; // Toggle: Toggle110
  bool Toggle111Active; // Toggle: Toggle111
  bool Toggle112Active; // Toggle: Toggle112
  bool Toggle113Active; // Toggle: Toggle113
  bool Toggle114Active; // Toggle: Toggle114
  bool Toggle115Active; // Toggle: Toggle115
  bool Toggle116Active; // Toggle: Toggle116
  bool Toggle117Active; // Toggle: Toggle117
  bool Toggle118Active; // Toggle: Toggle118
  bool Toggle119Active; // Toggle: Toggle119
  bool Toggle120Active; // Toggle: Toggle120
  bool Toggle121Active; // Toggle: Toggle121
  bool Toggle122Active; // Toggle: Toggle122
  bool Toggle123Active; // Toggle: Toggle123
  bool Toggle124Active; // Toggle: Toggle124
  bool Toggle125Active; // Toggle: Toggle125
  bool Toggle126Active; // Toggle: Toggle126
  bool Toggle127Active; // Toggle: Toggle127
  bool Toggle128Active; // Toggle: Toggle128
  bool Toggle129Active; // Toggle: Toggle129
  bool Toggle130Active; // Toggle: Toggle130
  bool Toggle131Active; // Toggle: Toggle131
  bool Toggle132Active; // Toggle: Toggle132
  bool Toggle133Active; // Toggle: Toggle133
  bool Toggle134Active; // Toggle: Toggle134
  bool Toggle135Active; // Toggle: Toggle135
  bool Toggle136Active; // Toggle: Toggle136
  bool Toggle137Active; // Toggle: Toggle137
  bool Toggle138Active; // Toggle: Toggle138
  bool Toggle139Active; // Toggle: Toggle139
  bool Toggle140Active; // Toggle: Toggle140
  bool Toggle141Active; // Toggle: Toggle141
  bool Toggle142Active; // Toggle: Toggle142
  bool Toggle143Active; // Toggle: Toggle143
  bool Toggle144Active; // Toggle: Toggle144
  bool Toggle145Active; // Toggle: Toggle145
  bool Toggle146Active; // Toggle: Toggle146
  bool Toggle147Active; // Toggle: Toggle147
  bool Toggle148Active; // Toggle: Toggle148
  bool Toggle149Active; // Toggle: Toggle149
  bool Toggle150Active; // Toggle: Toggle150
  bool Toggle151Active; // Toggle: Toggle151
  bool Toggle152Active; // Toggle: Toggle152
  bool Toggle153Active; // Toggle: Toggle153
  bool Toggle154Active; // Toggle: Toggle154
  bool Toggle155Active; // Toggle: Toggle155
  bool Toggle156Active; // Toggle: Toggle156
  bool Toggle157Active; // Toggle: Toggle157
  bool Toggle158Active; // Toggle: Toggle158
  bool Toggle159Active; // Toggle: Toggle159
  bool Toggle160Active; // Toggle: Toggle160
  bool Toggle161Active; // Toggle: Toggle161
  bool Toggle162Active; // Toggle: Toggle162
  bool Toggle163Active; // Toggle: Toggle163
  bool Toggle164Active; // Toggle: Toggle164
  bool Toggle165Active; // Toggle: Toggle165
  bool Toggle166Active; // Toggle: Toggle166
  bool Toggle167Active; // Toggle: Toggle167
  bool Toggle168Active; // Toggle: Toggle168
  bool Toggle169Active; // Toggle: Toggle169
  bool Toggle170Active; // Toggle: Toggle170
  bool Toggle171Active; // Toggle: Toggle171
  bool Toggle172Active; // Toggle: Toggle172
  bool Toggle173Active; // Toggle: Toggle173
  bool Toggle174Active; // Toggle: Toggle174
  bool Toggle175Active; // Toggle: Toggle175
  bool Toggle176Active; // Toggle: Toggle176
  bool Toggle177Active; // Toggle: Toggle177
  bool Toggle178Active; // Toggle: Toggle178
  bool Toggle179Active; // Toggle: Toggle179
  bool Toggle180Active; // Toggle: Toggle180
  bool Toggle181Active; // Toggle: Toggle181
  bool Toggle182Active; // Toggle: Toggle182
  bool Toggle183Active; // Toggle: Toggle183
  bool Toggle184Active; // Toggle: Toggle184
  bool Toggle185Active; // Toggle: Toggle185
  bool Toggle186Active; // Toggle: Toggle186
  bool Toggle187Active; // Toggle: Toggle187
  bool Toggle188Active; // Toggle: Toggle188
  bool Toggle189Active; // Toggle: Toggle189
  bool Toggle190Active; // Toggle: Toggle190
  bool Toggle191Active; // Toggle: Toggle191
  bool Toggle192Active; // Toggle: Toggle192
  bool Toggle193Active; // Toggle: Toggle193
  bool Toggle194Active; // Toggle: Toggle194
  bool Toggle195Active; // Toggle: Toggle195
  bool Toggle196Active; // Toggle: Toggle196
  bool Toggle197Active; // Toggle: Toggle197
  bool Toggle198Active; // Toggle: Toggle198
  bool Toggle199Active; // Toggle: Toggle199
  bool Toggle200Active; // Toggle: Toggle200
  bool Toggle201Active; // Toggle: Toggle201
  bool Toggle202Active; // Toggle: Toggle202
  bool Toggle203Active; // Toggle: Toggle203
  bool Toggle204Active; // Toggle: Toggle204
  bool Toggle205Active; // Toggle: Toggle205
  bool Toggle206Active; // Toggle: Toggle206
  bool Toggle207Active; // Toggle: Toggle207
  bool Toggle208Active; // Toggle: Toggle208
  bool Toggle209Active; // Toggle: Toggle209
  bool Toggle210Active; // Toggle: Toggle210
  bool Toggle211Active; // Toggle: Toggle211
  bool Toggle212Active; // Toggle: Toggle212
  bool Toggle213Active; // Toggle: Toggle213
  bool Toggle214Active; // Toggle: Toggle214
  bool Toggle215Active; // Toggle: Toggle215
  bool Toggle216Active; // Toggle: Toggle216
  bool Toggle217Active; // Toggle: Toggle217
  bool Toggle218Active; // Toggle: Toggle218
  bool Toggle219Active; // Toggle: Toggle219
  bool Toggle220Active; // Toggle: Toggle220
  bool Toggle221Active; // Toggle: Toggle221
  bool Toggle222Active; // Toggle: Toggle222
  bool Toggle223Active; // Toggle: Toggle223
  bool Toggle224Active; // Toggle: Toggle224
  bool Toggle225Active; // Toggle: Toggle225
  bool Toggle226Active; // Toggle: Toggle226
  bool Toggle227Active; // Toggle: Toggle227
  bool Toggle228Active; // Toggle: Toggle228
  bool Toggle229Active; // Toggle: Toggle229
  bool Toggle230Active; // Toggle: Toggle230
  bool Toggle231Active; // Toggle: Toggle231
  bool Toggle232Active; // Toggle: Toggle232
  bool Toggle233Active; // Toggle: Toggle233
  bool Toggle234Active; // Toggle: Toggle234
  bool Toggle235Active; // Toggle: Toggle235
  bool Toggle236Active; // Toggle: Toggle236
  bool Toggle237Active; // Toggle: Toggle237
  bool Toggle238Active; // Toggle: Toggle238
  bool Toggle239Active; // Toggle: Toggle239
  bool Toggle240Active; // Toggle: Toggle240
  bool Toggle241Active; // Toggle: Toggle241
  bool Toggle242Active; // Toggle: Toggle242
  bool Toggle243Active; // Toggle: Toggle243
  bool Toggle244Active; // Toggle: Toggle244
  bool Toggle245Active; // Toggle: Toggle245
  bool Toggle246Active; // Toggle: Toggle246
  bool Toggle247Active; // Toggle: Toggle247
  bool Toggle248Active; // Toggle: Toggle248
  bool Toggle249Active; // Toggle: Toggle249
  bool Toggle250Active; // Toggle: Toggle250
  bool Toggle251Active; // Toggle: Toggle251
  bool Toggle252Active; // Toggle: Toggle252
  bool Toggle253Active; // Toggle: Toggle253
  bool Toggle254Active; // Toggle: Toggle254
  bool Toggle255Active; // Toggle: Toggle255
  bool Toggle256Active; // Toggle: Toggle256
  bool Toggle257Active; // Toggle: Toggle257
  bool Toggle258Active; // Toggle: Toggle258
  bool Toggle259Active; // Toggle: Toggle259
  bool Toggle260Active; // Toggle: Toggle260
  bool Toggle261Active; // Toggle: Toggle261
  bool Toggle262Active; // Toggle: Toggle262
  bool Toggle263Active; // Toggle: Toggle263
  bool Toggle264Active; // Toggle: Toggle264
  bool Toggle265Active; // Toggle: Toggle265
  bool Toggle266Active; // Toggle: Toggle266
  bool Toggle267Active; // Toggle: Toggle267
  bool Toggle268Active; // Toggle: Toggle268
  bool Toggle269Active; // Toggle: Toggle269
  bool Toggle270Active; // Toggle: Toggle270
  bool Toggle271Active; // Toggle: Toggle271
  bool Toggle272Active; // Toggle: Toggle272
  bool Toggle273Active; // Toggle: Toggle273
  bool Toggle274Active; // Toggle: Toggle274
  bool Toggle275Active; // Toggle: Toggle275
  bool Toggle276Active; // Toggle: Toggle276
  bool Toggle277Active; // Toggle: Toggle277
  bool Toggle278Active; // Toggle: Toggle278
  bool Toggle279Active; // Toggle: Toggle279
  bool Toggle280Active; // Toggle: Toggle280
  bool Toggle281Active; // Toggle: Toggle281
  bool Toggle282Active; // Toggle: Toggle282
  bool Toggle283Active; // Toggle: Toggle283
  bool Toggle284Active; // Toggle: Toggle284
  bool Toggle285Active; // Toggle: Toggle285
  bool Toggle286Active; // Toggle: Toggle286
  bool Toggle287Active; // Toggle: Toggle287
  bool Toggle288Active; // Toggle: Toggle288
  bool Toggle289Active; // Toggle: Toggle289
  bool Toggle290Active; // Toggle: Toggle290
  bool Toggle291Active; // Toggle: Toggle291
  bool Toggle292Active; // Toggle: Toggle292
  bool Toggle293Active; // Toggle: Toggle293
  bool Toggle294Active; // Toggle: Toggle294
  bool Toggle295Active; // Toggle: Toggle295
  bool Toggle296Active; // Toggle: Toggle296
  bool Toggle297Active; // Toggle: Toggle297
  bool Toggle298Active; // Toggle: Toggle298
  bool Toggle299Active; // Toggle: Toggle299
  bool Toggle300Active; // Toggle: Toggle300
  bool Toggle301Active; // Toggle: Toggle301
  bool Toggle302Active; // Toggle: Toggle302
  bool Toggle303Active; // Toggle: Toggle303
  bool Toggle304Active; // Toggle: Toggle304
  bool Toggle305Active; // Toggle: Toggle305
  bool Toggle306Active; // Toggle: Toggle306
  bool Toggle307Active; // Toggle: Toggle307
  bool Toggle308Active; // Toggle: Toggle308
  bool Toggle309Active; // Toggle: Toggle309
  bool Toggle310Active; // Toggle: Toggle310
  bool Toggle311Active; // Toggle: Toggle311
  bool Toggle312Active; // Toggle: Toggle312
  bool Toggle313Active; // Toggle: Toggle313
  bool Toggle314Active; // Toggle: Toggle314
  bool Toggle315Active; // Toggle: Toggle315
  bool Toggle316Active; // Toggle: Toggle316
  bool Toggle317Active; // Toggle: Toggle317
  bool Toggle318Active; // Toggle: Toggle318
  bool Toggle319Active; // Toggle: Toggle319
  bool Toggle320Active; // Toggle: Toggle320
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
  state.Toggle001Active = true; // Toggle: Toggle001
  state.Toggle002Active = true; // Toggle: Toggle002
  state.Toggle003Active = true; // Toggle: Toggle003
  state.Toggle004Active = true; // Toggle: Toggle004
  state.Toggle005Active = true; // Toggle: Toggle005
  state.Toggle006Active = true; // Toggle: Toggle006
  state.Toggle007Active = true; // Toggle: Toggle007
  state.Toggle008Active = true; // Toggle: Toggle008
  state.Toggle009Active = true; // Toggle: Toggle009
  state.Toggle010Active = true; // Toggle: Toggle010
  state.Toggle011Active = true; // Toggle: Toggle011
  state.Toggle012Active = true; // Toggle: Toggle012
  state.Toggle013Active = true; // Toggle: Toggle013
  state.Toggle014Active = true; // Toggle: Toggle014
  state.Toggle015Active = true; // Toggle: Toggle015
  state.Toggle016Active = true; // Toggle: Toggle016
  state.Toggle017Active = true; // Toggle: Toggle017
  state.Toggle018Active = true; // Toggle: Toggle018
  state.Toggle019Active = true; // Toggle: Toggle019
  state.Toggle020Active = true; // Toggle: Toggle020
  state.Toggle021Active = true; // Toggle: Toggle021
  state.Toggle022Active = true; // Toggle: Toggle022
  state.Toggle023Active = true; // Toggle: Toggle023
  state.Toggle024Active = true; // Toggle: Toggle024
  state.Toggle025Active = true; // Toggle: Toggle025
  state.Toggle026Active = true; // Toggle: Toggle026
  state.Toggle027Active = true; // Toggle: Toggle027
  state.Toggle028Active = true; // Toggle: Toggle028
  state.Toggle029Active = true; // Toggle: Toggle029
  state.Toggle030Active = true; // Toggle: Toggle030
  state.Toggle031Active = true; // Toggle: Toggle031
  state.Toggle032Active = true; // Toggle: Toggle032
  state.Toggle033Active = true; // Toggle: Toggle033
  state.Toggle034Active = true; // Toggle: Toggle034
  state.Toggle035Active = true; // Toggle: Toggle035
  state.Toggle036Active = true; // Toggle: Toggle036
  state.Toggle037Active = true; // Toggle: Toggle037
  state.Toggle038Active = true; // Toggle: Toggle038
  state.Toggle039Active = true; // Toggle: Toggle039
  state.Toggle040Active = true; // Toggle: Toggle040
  state.Toggle041Active = true; // Toggle: Toggle041
  state.Toggle042Active = true; // Toggle: Toggle042
  state.Toggle043Active = true; // Toggle: Toggle043
  state.Toggle044Active = true; // Toggle: Toggle044
  state.Toggle045Active = true; // Toggle: Toggle045
  state.Toggle046Active = true; // Toggle: Toggle046
  state.Toggle047Active = true; // Toggle: Toggle047
  state.Toggle048Active = true; // Toggle: Toggle048
  state.Toggle049Active = true; // Toggle: Toggle049
  state.Toggle050Active = true; // Toggle: Toggle050
  state.Toggle051Active = true; // Toggle: Toggle051
  state.Toggle052Active = true; // Toggle: Toggle052
  state.Toggle053Active = true; // Toggle: Toggle053
  state.Toggle054Active = true; // Toggle: Toggle054
  state.Toggle055Active = true; // Toggle: Toggle055
  state.Toggle056Active = true; // Toggle: Toggle056
  state.Toggle057Active = true; // Toggle: Toggle057
  state.Toggle058Active = true; // Toggle: Toggle058
  state.Toggle059Active = true; // Toggle: Toggle059
  state.Toggle060Active = true; // Toggle: Toggle060
  state.Toggle061Active = true; // Toggle: Toggle061
  state.Toggle062Active = true; // Toggle: Toggle062
  state.Toggle063Active = true; // Toggle: Toggle063
  state.Toggle064Active = true; // Toggle: Toggle064
  state.Toggle065Active = true; // Toggle: Toggle065
  state.Toggle066Active = true; // Toggle: Toggle066
  state.Toggle067Active = true; // Toggle: Toggle067
  state.Toggle068Active = true; // Toggle: Toggle068
  state.Toggle069Active = true; // Toggle: Toggle069
  state.Toggle070Active = true; // Toggle: Toggle070
  state.Toggle071Active = true; // Toggle: Toggle071
  state.Toggle072Active = true; // Toggle: Toggle072
  state.Toggle073Active = true; // Toggle: Toggle073
  state.Toggle074Active = true; // Toggle: Toggle074
  state.Toggle075Active = true; // Toggle: Toggle075
  state.Toggle076Active = true; // Toggle: Toggle076
  state.Toggle077Active = true; // Toggle: Toggle077
  state.Toggle078Active = true; // Toggle: Toggle078
  state.Toggle079Active = true; // Toggle: Toggle079
  state.Toggle080Active = true; // Toggle: Toggle080
  state.Toggle081Active = true; // Toggle: Toggle081
  state.Toggle082Active = true; // Toggle: Toggle082
  state.Toggle083Active = true; // Toggle: Toggle083
  state.Toggle084Active = true; // Toggle: Toggle084
  state.Toggle085Active = true; // Toggle: Toggle085
  state.Toggle086Active = true; // Toggle: Toggle086
  state.Toggle087Active = true; // Toggle: Toggle087
  state.Toggle088Active = true; // Toggle: Toggle088
  state.Toggle089Active = true; // Toggle: Toggle089
  state.Toggle090Active = true; // Toggle: Toggle090
  state.Toggle091Active = true; // Toggle: Toggle091
  state.Toggle092Active = true; // Toggle: Toggle092
  state.Toggle093Active = true; // Toggle: Toggle093
  state.Toggle094Active = true; // Toggle: Toggle094
  state.Toggle095Active = true; // Toggle: Toggle095
  state.Toggle096Active = true; // Toggle: Toggle096
  state.Toggle097Active = true; // Toggle: Toggle097
  state.Toggle098Active = true; // Toggle: Toggle098
  state.Toggle099Active = true; // Toggle: Toggle099
  state.Toggle100Active = true; // Toggle: Toggle100
  state.Toggle101Active = true; // Toggle: Toggle101
  state.Toggle102Active = true; // Toggle: Toggle102
  state.Toggle103Active = true; // Toggle: Toggle103
  state.Toggle104Active = true; // Toggle: Toggle104
  state.Toggle105Active = true; // Toggle: Toggle105
  state.Toggle106Active = true; // Toggle: Toggle106
  state.Toggle107Active = true; // Toggle: Toggle107
  state.Toggle108Active = true; // Toggle: Toggle108
  state.Toggle109Active = true; // Toggle: Toggle109
  state.Toggle110Active = true; // Toggle: Toggle110
  state.Toggle111Active = true; // Toggle: Toggle111
  state.Toggle112Active = true; // Toggle: Toggle112
  state.Toggle113Active = true; // Toggle: Toggle113
  state.Toggle114Active = true; // Toggle: Toggle114
  state.Toggle115Active = true; // Toggle: Toggle115
  state.Toggle116Active = true; // Toggle: Toggle116
  state.Toggle117Active = true; // Toggle: Toggle117
  state.Toggle118Active = true; // Toggle: Toggle118
  state.Toggle119Active = true; // Toggle: Toggle119
  state.Toggle120Active = true; // Toggle: Toggle120
  state.Toggle121Active = true; // Toggle: Toggle121
  state.Toggle122Active = true; // Toggle: Toggle122
  state.Toggle123Active = true; // Toggle: Toggle123
  state.Toggle124Active = true; // Toggle: Toggle124
  state.Toggle125Active = true; // Toggle: Toggle125
  state.Toggle126Active = true; // Toggle: Toggle126
  state.Toggle127Active = true; // Toggle: Toggle127
  state.Toggle128Active = true; // Toggle: Toggle128
  state.Toggle129Active = true; // Toggle: Toggle129
  state.Toggle130Active = true; // Toggle: Toggle130
  state.Toggle131Active = true; // Toggle: Toggle131
  state.Toggle132Active = true; // Toggle: Toggle132
  state.Toggle133Active = true; // Toggle: Toggle133
  state.Toggle134Active = true; // Toggle: Toggle134
  state.Toggle135Active = true; // Toggle: Toggle135
  state.Toggle136Active = true; // Toggle: Toggle136
  state.Toggle137Active = true; // Toggle: Toggle137
  state.Toggle138Active = true; // Toggle: Toggle138
  state.Toggle139Active = true; // Toggle: Toggle139
  state.Toggle140Active = true; // Toggle: Toggle140
  state.Toggle141Active = true; // Toggle: Toggle141
  state.Toggle142Active = true; // Toggle: Toggle142
  state.Toggle143Active = true; // Toggle: Toggle143
  state.Toggle144Active = true; // Toggle: Toggle144
  state.Toggle145Active = true; // Toggle: Toggle145
  state.Toggle146Active = true; // Toggle: Toggle146
  state.Toggle147Active = true; // Toggle: Toggle147
  state.Toggle148Active = true; // Toggle: Toggle148
  state.Toggle149Active = true; // Toggle: Toggle149
  state.Toggle150Active = true; // Toggle: Toggle150
  state.Toggle151Active = true; // Toggle: Toggle151
  state.Toggle152Active = true; // Toggle: Toggle152
  state.Toggle153Active = true; // Toggle: Toggle153
  state.Toggle154Active = true; // Toggle: Toggle154
  state.Toggle155Active = true; // Toggle: Toggle155
  state.Toggle156Active = true; // Toggle: Toggle156
  state.Toggle157Active = true; // Toggle: Toggle157
  state.Toggle158Active = true; // Toggle: Toggle158
  state.Toggle159Active = true; // Toggle: Toggle159
  state.Toggle160Active = true; // Toggle: Toggle160
  state.Toggle161Active = true; // Toggle: Toggle161
  state.Toggle162Active = true; // Toggle: Toggle162
  state.Toggle163Active = true; // Toggle: Toggle163
  state.Toggle164Active = true; // Toggle: Toggle164
  state.Toggle165Active = true; // Toggle: Toggle165
  state.Toggle166Active = true; // Toggle: Toggle166
  state.Toggle167Active = true; // Toggle: Toggle167
  state.Toggle168Active = true; // Toggle: Toggle168
  state.Toggle169Active = true; // Toggle: Toggle169
  state.Toggle170Active = true; // Toggle: Toggle170
  state.Toggle171Active = true; // Toggle: Toggle171
  state.Toggle172Active = true; // Toggle: Toggle172
  state.Toggle173Active = true; // Toggle: Toggle173
  state.Toggle174Active = true; // Toggle: Toggle174
  state.Toggle175Active = true; // Toggle: Toggle175
  state.Toggle176Active = true; // Toggle: Toggle176
  state.Toggle177Active = true; // Toggle: Toggle177
  state.Toggle178Active = true; // Toggle: Toggle178
  state.Toggle179Active = true; // Toggle: Toggle179
  state.Toggle180Active = true; // Toggle: Toggle180
  state.Toggle181Active = true; // Toggle: Toggle181
  state.Toggle182Active = true; // Toggle: Toggle182
  state.Toggle183Active = true; // Toggle: Toggle183
  state.Toggle184Active = true; // Toggle: Toggle184
  state.Toggle185Active = true; // Toggle: Toggle185
  state.Toggle186Active = true; // Toggle: Toggle186
  state.Toggle187Active = true; // Toggle: Toggle187
  state.Toggle188Active = true; // Toggle: Toggle188
  state.Toggle189Active = true; // Toggle: Toggle189
  state.Toggle190Active = true; // Toggle: Toggle190
  state.Toggle191Active = true; // Toggle: Toggle191
  state.Toggle192Active = true; // Toggle: Toggle192
  state.Toggle193Active = true; // Toggle: Toggle193
  state.Toggle194Active = true; // Toggle: Toggle194
  state.Toggle195Active = true; // Toggle: Toggle195
  state.Toggle196Active = true; // Toggle: Toggle196
  state.Toggle197Active = true; // Toggle: Toggle197
  state.Toggle198Active = true; // Toggle: Toggle198
  state.Toggle199Active = true; // Toggle: Toggle199
  state.Toggle200Active = true; // Toggle: Toggle200
  state.Toggle201Active = true; // Toggle: Toggle201
  state.Toggle202Active = true; // Toggle: Toggle202
  state.Toggle203Active = true; // Toggle: Toggle203
  state.Toggle204Active = true; // Toggle: Toggle204
  state.Toggle205Active = true; // Toggle: Toggle205
  state.Toggle206Active = true; // Toggle: Toggle206
  state.Toggle207Active = true; // Toggle: Toggle207
  state.Toggle208Active = true; // Toggle: Toggle208
  state.Toggle209Active = true; // Toggle: Toggle209
  state.Toggle210Active = true; // Toggle: Toggle210
  state.Toggle211Active = true; // Toggle: Toggle211
  state.Toggle212Active = true; // Toggle: Toggle212
  state.Toggle213Active = true; // Toggle: Toggle213
  state.Toggle214Active = true; // Toggle: Toggle214
  state.Toggle215Active = true; // Toggle: Toggle215
  state.Toggle216Active = true; // Toggle: Toggle216
  state.Toggle217Active = true; // Toggle: Toggle217
  state.Toggle218Active = true; // Toggle: Toggle218
  state.Toggle219Active = true; // Toggle: Toggle219
  state.Toggle220Active = true; // Toggle: Toggle220
  state.Toggle221Active = true; // Toggle: Toggle221
  state.Toggle222Active = true; // Toggle: Toggle222
  state.Toggle223Active = true; // Toggle: Toggle223
  state.Toggle224Active = true; // Toggle: Toggle224
  state.Toggle225Active = true; // Toggle: Toggle225
  state.Toggle226Active = true; // Toggle: Toggle226
  state.Toggle227Active = true; // Toggle: Toggle227
  state.Toggle228Active = true; // Toggle: Toggle228
  state.Toggle229Active = true; // Toggle: Toggle229
  state.Toggle230Active = true; // Toggle: Toggle230
  state.Toggle231Active = true; // Toggle: Toggle231
  state.Toggle232Active = true; // Toggle: Toggle232
  state.Toggle233Active = true; // Toggle: Toggle233
  state.Toggle234Active = true; // Toggle: Toggle234
  state.Toggle235Active = true; // Toggle: Toggle235
  state.Toggle236Active = true; // Toggle: Toggle236
  state.Toggle237Active = true; // Toggle: Toggle237
  state.Toggle238Active = true; // Toggle: Toggle238
  state.Toggle239Active = true; // Toggle: Toggle239
  state.Toggle240Active = true; // Toggle: Toggle240
  state.Toggle241Active = true; // Toggle: Toggle241
  state.Toggle242Active = true; // Toggle: Toggle242
  state.Toggle243Active = true; // Toggle: Toggle243
  state.Toggle244Active = true; // Toggle: Toggle244
  state.Toggle245Active = true; // Toggle: Toggle245
  state.Toggle246Active = true; // Toggle: Toggle246
  state.Toggle247Active = true; // Toggle: Toggle247
  state.Toggle248Active = true; // Toggle: Toggle248
  state.Toggle249Active = true; // Toggle: Toggle249
  state.Toggle250Active = true; // Toggle: Toggle250
  state.Toggle251Active = true; // Toggle: Toggle251
  state.Toggle252Active = true; // Toggle: Toggle252
  state.Toggle253Active = true; // Toggle: Toggle253
  state.Toggle254Active = true; // Toggle: Toggle254
  state.Toggle255Active = true; // Toggle: Toggle255
  state.Toggle256Active = true; // Toggle: Toggle256
  state.Toggle257Active = true; // Toggle: Toggle257
  state.Toggle258Active = true; // Toggle: Toggle258
  state.Toggle259Active = true; // Toggle: Toggle259
  state.Toggle260Active = true; // Toggle: Toggle260
  state.Toggle261Active = true; // Toggle: Toggle261
  state.Toggle262Active = true; // Toggle: Toggle262
  state.Toggle263Active = true; // Toggle: Toggle263
  state.Toggle264Active = true; // Toggle: Toggle264
  state.Toggle265Active = true; // Toggle: Toggle265
  state.Toggle266Active = true; // Toggle: Toggle266
  state.Toggle267Active = true; // Toggle: Toggle267
  state.Toggle268Active = true; // Toggle: Toggle268
  state.Toggle269Active = true; // Toggle: Toggle269
  state.Toggle270Active = true; // Toggle: Toggle270
  state.Toggle271Active = true; // Toggle: Toggle271
  state.Toggle272Active = true; // Toggle: Toggle272
  state.Toggle273Active = true; // Toggle: Toggle273
  state.Toggle274Active = true; // Toggle: Toggle274
  state.Toggle275Active = true; // Toggle: Toggle275
  state.Toggle276Active = true; // Toggle: Toggle276
  state.Toggle277Active = true; // Toggle: Toggle277
  state.Toggle278Active = true; // Toggle: Toggle278
  state.Toggle279Active = true; // Toggle: Toggle279
  state.Toggle280Active = true; // Toggle: Toggle280
  state.Toggle281Active = true; // Toggle: Toggle281
  state.Toggle282Active = true; // Toggle: Toggle282
  state.Toggle283Active = true; // Toggle: Toggle283
  state.Toggle284Active = true; // Toggle: Toggle284
  state.Toggle285Active = true; // Toggle: Toggle285
  state.Toggle286Active = true; // Toggle: Toggle286
  state.Toggle287Active = true; // Toggle: Toggle287
  state.Toggle288Active = true; // Toggle: Toggle288
  state.Toggle289Active = true; // Toggle: Toggle289
  state.Toggle290Active = true; // Toggle: Toggle290
  state.Toggle291Active = true; // Toggle: Toggle291
  state.Toggle292Active = true; // Toggle: Toggle292
  state.Toggle293Active = true; // Toggle: Toggle293
  state.Toggle294Active = true; // Toggle: Toggle294
  state.Toggle295Active = true; // Toggle: Toggle295
  state.Toggle296Active = true; // Toggle: Toggle296
  state.Toggle297Active = true; // Toggle: Toggle297
  state.Toggle298Active = true; // Toggle: Toggle298
  state.Toggle299Active = true; // Toggle: Toggle299
  state.Toggle300Active = true; // Toggle: Toggle300
  state.Toggle301Active = true; // Toggle: Toggle301
  state.Toggle302Active = true; // Toggle: Toggle302
  state.Toggle303Active = true; // Toggle: Toggle303
  state.Toggle304Active = true; // Toggle: Toggle304
  state.Toggle305Active = true; // Toggle: Toggle305
  state.Toggle306Active = true; // Toggle: Toggle306
  state.Toggle307Active = true; // Toggle: Toggle307
  state.Toggle308Active = true; // Toggle: Toggle308
  state.Toggle309Active = true; // Toggle: Toggle309
  state.Toggle310Active = true; // Toggle: Toggle310
  state.Toggle311Active = true; // Toggle: Toggle311
  state.Toggle312Active = true; // Toggle: Toggle312
  state.Toggle313Active = true; // Toggle: Toggle313
  state.Toggle314Active = true; // Toggle: Toggle314
  state.Toggle315Active = true; // Toggle: Toggle315
  state.Toggle316Active = true; // Toggle: Toggle316
  state.Toggle317Active = true; // Toggle: Toggle317
  state.Toggle318Active = true; // Toggle: Toggle318
  state.Toggle319Active = true; // Toggle: Toggle319
  state.Toggle320Active = true; // Toggle: Toggle320
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
  const char* Toggle001Text = "";                  // TOGGLE: Toggle001
  const char* Toggle002Text = "";                  // TOGGLE: Toggle002
  const char* Toggle003Text = "";                  // TOGGLE: Toggle003
  const char* Toggle004Text = "";                  // TOGGLE: Toggle004
  const char* Toggle005Text = "";                  // TOGGLE: Toggle005
  const char* Toggle006Text = "";                  // TOGGLE: Toggle006
  const char* Toggle007Text = "";                  // TOGGLE: Toggle007
  const char* Toggle008Text = "";                  // TOGGLE: Toggle008
  const char* Toggle009Text = "";                  // TOGGLE: Toggle009
  const char* Toggle010Text = "";                  // TOGGLE: Toggle010
  const char* Toggle011Text = "";                  // TOGGLE: Toggle011
  const char* Toggle012Text = "";                  // TOGGLE: Toggle012
  const char* Toggle013Text = "";                  // TOGGLE: Toggle013
  const char* Toggle014Text = "";                  // TOGGLE: Toggle014
  const char* Toggle015Text = "";                  // TOGGLE: Toggle015
  const char* Toggle016Text = "";                  // TOGGLE: Toggle016
  const char* Toggle017Text = "";                  // TOGGLE: Toggle017
  const char* Toggle018Text = "";                  // TOGGLE: Toggle018
  const char* Toggle019Text = "";                  // TOGGLE: Toggle019
  const char* Toggle020Text = "";                  // TOGGLE: Toggle020
  const char* Toggle021Text = "";                  // TOGGLE: Toggle021
  const char* Toggle022Text = "";                  // TOGGLE: Toggle022
  const char* Toggle023Text = "";                  // TOGGLE: Toggle023
  const char* Toggle024Text = "";                  // TOGGLE: Toggle024
  const char* Toggle025Text = "";                  // TOGGLE: Toggle025
  const char* Toggle026Text = "";                  // TOGGLE: Toggle026
  const char* Toggle027Text = "";                  // TOGGLE: Toggle027
  const char* Toggle028Text = "";                  // TOGGLE: Toggle028
  const char* Toggle029Text = "";                  // TOGGLE: Toggle029
  const char* Toggle030Text = "";                  // TOGGLE: Toggle030
  const char* Toggle031Text = "";                  // TOGGLE: Toggle031
  const char* Toggle032Text = "";                  // TOGGLE: Toggle032
  const char* Toggle033Text = "";                  // TOGGLE: Toggle033
  const char* Toggle034Text = "";                  // TOGGLE: Toggle034
  const char* Toggle035Text = "";                  // TOGGLE: Toggle035
  const char* Toggle036Text = "";                  // TOGGLE: Toggle036
  const char* Toggle037Text = "";                  // TOGGLE: Toggle037
  const char* Toggle038Text = "";                  // TOGGLE: Toggle038
  const char* Toggle039Text = "";                  // TOGGLE: Toggle039
  const char* Toggle040Text = "";                  // TOGGLE: Toggle040
  const char* Toggle041Text = "";                  // TOGGLE: Toggle041
  const char* Toggle042Text = "";                  // TOGGLE: Toggle042
  const char* Toggle043Text = "";                  // TOGGLE: Toggle043
  const char* Toggle044Text = "";                  // TOGGLE: Toggle044
  const char* Toggle045Text = "";                  // TOGGLE: Toggle045
  const char* Toggle046Text = "";                  // TOGGLE: Toggle046
  const char* Toggle047Text = "";                  // TOGGLE: Toggle047
  const char* Toggle048Text = "";                  // TOGGLE: Toggle048
  const char* Toggle049Text = "";                  // TOGGLE: Toggle049
  const char* Toggle050Text = "";                  // TOGGLE: Toggle050
  const char* Toggle051Text = "";                  // TOGGLE: Toggle051
  const char* Toggle052Text = "";                  // TOGGLE: Toggle052
  const char* Toggle053Text = "";                  // TOGGLE: Toggle053
  const char* Toggle054Text = "";                  // TOGGLE: Toggle054
  const char* Toggle055Text = "";                  // TOGGLE: Toggle055
  const char* Toggle056Text = "";                  // TOGGLE: Toggle056
  const char* Toggle057Text = "";                  // TOGGLE: Toggle057
  const char* Toggle058Text = "";                  // TOGGLE: Toggle058
  const char* Toggle059Text = "";                  // TOGGLE: Toggle059
  const char* Toggle060Text = "";                  // TOGGLE: Toggle060
  const char* Toggle061Text = "";                  // TOGGLE: Toggle061
  const char* Toggle062Text = "";                  // TOGGLE: Toggle062
  const char* Toggle063Text = "";                  // TOGGLE: Toggle063
  const char* Toggle064Text = "";                  // TOGGLE: Toggle064
  const char* Toggle065Text = "";                  // TOGGLE: Toggle065
  const char* Toggle066Text = "";                  // TOGGLE: Toggle066
  const char* Toggle067Text = "";                  // TOGGLE: Toggle067
  const char* Toggle068Text = "";                  // TOGGLE: Toggle068
  const char* Toggle069Text = "";                  // TOGGLE: Toggle069
  const char* Toggle070Text = "";                  // TOGGLE: Toggle070
  const char* Toggle071Text = "";                  // TOGGLE: Toggle071
  const char* Toggle072Text = "";                  // TOGGLE: Toggle072
  const char* Toggle073Text = "";                  // TOGGLE: Toggle073
  const char* Toggle074Text = "";                  // TOGGLE: Toggle074
  const char* Toggle075Text = "";                  // TOGGLE: Toggle075
  const char* Toggle076Text = "";                  // TOGGLE: Toggle076
  const char* Toggle077Text = "";                  // TOGGLE: Toggle077
  const char* Toggle078Text = "";                  // TOGGLE: Toggle078
  const char* Toggle079Text = "";                  // TOGGLE: Toggle079
  const char* Toggle080Text = "";                  // TOGGLE: Toggle080
  const char* Toggle081Text = "";                  // TOGGLE: Toggle081
  const char* Toggle082Text = "";                  // TOGGLE: Toggle082
  const char* Toggle083Text = "";                  // TOGGLE: Toggle083
  const char* Toggle084Text = "";                  // TOGGLE: Toggle084
  const char* Toggle085Text = "";                  // TOGGLE: Toggle085
  const char* Toggle086Text = "";                  // TOGGLE: Toggle086
  const char* Toggle087Text = "";                  // TOGGLE: Toggle087
  const char* Toggle088Text = "";                  // TOGGLE: Toggle088
  const char* Toggle089Text = "";                  // TOGGLE: Toggle089
  const char* Toggle090Text = "";                  // TOGGLE: Toggle090
  const char* Toggle091Text = "";                  // TOGGLE: Toggle091
  const char* Toggle092Text = "";                  // TOGGLE: Toggle092
  const char* Toggle093Text = "";                  // TOGGLE: Toggle093
  const char* Toggle094Text = "";                  // TOGGLE: Toggle094
  const char* Toggle095Text = "";                  // TOGGLE: Toggle095
  const char* Toggle096Text = "";                  // TOGGLE: Toggle096
  const char* Toggle097Text = "";                  // TOGGLE: Toggle097
  const char* Toggle098Text = "";                  // TOGGLE: Toggle098
  const char* Toggle099Text = "";                  // TOGGLE: Toggle099
  const char* Toggle100Text = "";                  // TOGGLE: Toggle100
  const char* Toggle101Text = "";                  // TOGGLE: Toggle101
  const char* Toggle102Text = "";                  // TOGGLE: Toggle102
  const char* Toggle103Text = "";                  // TOGGLE: Toggle103
  const char* Toggle104Text = "";                  // TOGGLE: Toggle104
  const char* Toggle105Text = "";                  // TOGGLE: Toggle105
  const char* Toggle106Text = "";                  // TOGGLE: Toggle106
  const char* Toggle107Text = "";                  // TOGGLE: Toggle107
  const char* Toggle108Text = "";                  // TOGGLE: Toggle108
  const char* Toggle109Text = "";                  // TOGGLE: Toggle109
  const char* Toggle110Text = "";                  // TOGGLE: Toggle110
  const char* Toggle111Text = "";                  // TOGGLE: Toggle111
  const char* Toggle112Text = "";                  // TOGGLE: Toggle112
  const char* Toggle113Text = "";                  // TOGGLE: Toggle113
  const char* Toggle114Text = "";                  // TOGGLE: Toggle114
  const char* Toggle115Text = "";                  // TOGGLE: Toggle115
  const char* Toggle116Text = "";                  // TOGGLE: Toggle116
  const char* Toggle117Text = "";                  // TOGGLE: Toggle117
  const char* Toggle118Text = "";                  // TOGGLE: Toggle118
  const char* Toggle119Text = "";                  // TOGGLE: Toggle119
  const char* Toggle120Text = "";                  // TOGGLE: Toggle120
  const char* Toggle121Text = "";                  // TOGGLE: Toggle121
  const char* Toggle122Text = "";                  // TOGGLE: Toggle122
  const char* Toggle123Text = "";                  // TOGGLE: Toggle123
  const char* Toggle124Text = "";                  // TOGGLE: Toggle124
  const char* Toggle125Text = "";                  // TOGGLE: Toggle125
  const char* Toggle126Text = "";                  // TOGGLE: Toggle126
  const char* Toggle127Text = "";                  // TOGGLE: Toggle127
  const char* Toggle128Text = "";                  // TOGGLE: Toggle128
  const char* Toggle129Text = "";                  // TOGGLE: Toggle129
  const char* Toggle130Text = "";                  // TOGGLE: Toggle130
  const char* Toggle131Text = "";                  // TOGGLE: Toggle131
  const char* Toggle132Text = "";                  // TOGGLE: Toggle132
  const char* Toggle133Text = "";                  // TOGGLE: Toggle133
  const char* Toggle134Text = "";                  // TOGGLE: Toggle134
  const char* Toggle135Text = "";                  // TOGGLE: Toggle135
  const char* Toggle136Text = "";                  // TOGGLE: Toggle136
  const char* Toggle137Text = "";                  // TOGGLE: Toggle137
  const char* Toggle138Text = "";                  // TOGGLE: Toggle138
  const char* Toggle139Text = "";                  // TOGGLE: Toggle139
  const char* Toggle140Text = "";                  // TOGGLE: Toggle140
  const char* Toggle141Text = "";                  // TOGGLE: Toggle141
  const char* Toggle142Text = "";                  // TOGGLE: Toggle142
  const char* Toggle143Text = "";                  // TOGGLE: Toggle143
  const char* Toggle144Text = "";                  // TOGGLE: Toggle144
  const char* Toggle145Text = "";                  // TOGGLE: Toggle145
  const char* Toggle146Text = "";                  // TOGGLE: Toggle146
  const char* Toggle147Text = "";                  // TOGGLE: Toggle147
  const char* Toggle148Text = "";                  // TOGGLE: Toggle148
  const char* Toggle149Text = "";                  // TOGGLE: Toggle149
  const char* Toggle150Text = "";                  // TOGGLE: Toggle150
  const char* Toggle151Text = "";                  // TOGGLE: Toggle151
  const char* Toggle152Text = "";                  // TOGGLE: Toggle152
  const char* Toggle153Text = "";                  // TOGGLE: Toggle153
  const char* Toggle154Text = "";                  // TOGGLE: Toggle154
  const char* Toggle155Text = "";                  // TOGGLE: Toggle155
  const char* Toggle156Text = "";                  // TOGGLE: Toggle156
  const char* Toggle157Text = "";                  // TOGGLE: Toggle157
  const char* Toggle158Text = "";                  // TOGGLE: Toggle158
  const char* Toggle159Text = "";                  // TOGGLE: Toggle159
  const char* Toggle160Text = "";                  // TOGGLE: Toggle160
  const char* Toggle161Text = "";                  // TOGGLE: Toggle161
  const char* Toggle162Text = "";                  // TOGGLE: Toggle162
  const char* Toggle163Text = "";                  // TOGGLE: Toggle163
  const char* Toggle164Text = "";                  // TOGGLE: Toggle164
  const char* Toggle165Text = "";                  // TOGGLE: Toggle165
  const char* Toggle166Text = "";                  // TOGGLE: Toggle166
  const char* Toggle167Text = "";                  // TOGGLE: Toggle167
  const char* Toggle168Text = "";                  // TOGGLE: Toggle168
  const char* Toggle169Text = "";                  // TOGGLE: Toggle169
  const char* Toggle170Text = "";                  // TOGGLE: Toggle170
  const char* Toggle171Text = "";                  // TOGGLE: Toggle171
  const char* Toggle172Text = "";                  // TOGGLE: Toggle172
  const char* Toggle173Text = "";                  // TOGGLE: Toggle173
  const char* Toggle174Text = "";                  // TOGGLE: Toggle174
  const char* Toggle175Text = "";                  // TOGGLE: Toggle175
  const char* Toggle176Text = "";                  // TOGGLE: Toggle176
  const char* Toggle177Text = "";                  // TOGGLE: Toggle177
  const char* Toggle178Text = "";                  // TOGGLE: Toggle178
  const char* Toggle179Text = "";                  // TOGGLE: Toggle179
  const char* Toggle180Text = "";                  // TOGGLE: Toggle180
  const char* Toggle181Text = "";                  // TOGGLE: Toggle181
  const char* Toggle182Text = "";                  // TOGGLE: Toggle182
  const char* Toggle183Text = "";                  // TOGGLE: Toggle183
  const char* Toggle184Text = "";                  // TOGGLE: Toggle184
  const char* Toggle185Text = "";                  // TOGGLE: Toggle185
  const char* Toggle186Text = "";                  // TOGGLE: Toggle186
  const char* Toggle187Text = "";                  // TOGGLE: Toggle187
  const char* Toggle188Text = "";                  // TOGGLE: Toggle188
  const char* Toggle189Text = "";                  // TOGGLE: Toggle189
  const char* Toggle190Text = "";                  // TOGGLE: Toggle190
  const char* Toggle191Text = "";                  // TOGGLE: Toggle191
  const char* Toggle192Text = "";                  // TOGGLE: Toggle192
  const char* Toggle193Text = "";                  // TOGGLE: Toggle193
  const char* Toggle194Text = "";                  // TOGGLE: Toggle194
  const char* Toggle195Text = "";                  // TOGGLE: Toggle195
  const char* Toggle196Text = "";                  // TOGGLE: Toggle196
  const char* Toggle197Text = "";                  // TOGGLE: Toggle197
  const char* Toggle198Text = "";                  // TOGGLE: Toggle198
  const char* Toggle199Text = "";                  // TOGGLE: Toggle199
  const char* Toggle200Text = "";                  // TOGGLE: Toggle200
  const char* Toggle201Text = "";                  // TOGGLE: Toggle201
  const char* Toggle202Text = "";                  // TOGGLE: Toggle202
  const char* Toggle203Text = "";                  // TOGGLE: Toggle203
  const char* Toggle204Text = "";                  // TOGGLE: Toggle204
  const char* Toggle205Text = "";                  // TOGGLE: Toggle205
  const char* Toggle206Text = "";                  // TOGGLE: Toggle206
  const char* Toggle207Text = "";                  // TOGGLE: Toggle207
  const char* Toggle208Text = "";                  // TOGGLE: Toggle208
  const char* Toggle209Text = "";                  // TOGGLE: Toggle209
  const char* Toggle210Text = "";                  // TOGGLE: Toggle210
  const char* Toggle211Text = "";                  // TOGGLE: Toggle211
  const char* Toggle212Text = "";                  // TOGGLE: Toggle212
  const char* Toggle213Text = "";                  // TOGGLE: Toggle213
  const char* Toggle214Text = "";                  // TOGGLE: Toggle214
  const char* Toggle215Text = "";                  // TOGGLE: Toggle215
  const char* Toggle216Text = "";                  // TOGGLE: Toggle216
  const char* Toggle217Text = "";                  // TOGGLE: Toggle217
  const char* Toggle218Text = "";                  // TOGGLE: Toggle218
  const char* Toggle219Text = "";                  // TOGGLE: Toggle219
  const char* Toggle220Text = "";                  // TOGGLE: Toggle220
  const char* Toggle221Text = "";                  // TOGGLE: Toggle221
  const char* Toggle222Text = "";                  // TOGGLE: Toggle222
  const char* Toggle223Text = "";                  // TOGGLE: Toggle223
  const char* Toggle224Text = "";                  // TOGGLE: Toggle224
  const char* Toggle225Text = "";                  // TOGGLE: Toggle225
  const char* Toggle226Text = "";                  // TOGGLE: Toggle226
  const char* Toggle227Text = "";                  // TOGGLE: Toggle227
  const char* Toggle228Text = "";                  // TOGGLE: Toggle228
  const char* Toggle229Text = "";                  // TOGGLE: Toggle229
  const char* Toggle230Text = "";                  // TOGGLE: Toggle230
  const char* Toggle231Text = "";                  // TOGGLE: Toggle231
  const char* Toggle232Text = "";                  // TOGGLE: Toggle232
  const char* Toggle233Text = "";                  // TOGGLE: Toggle233
  const char* Toggle234Text = "";                  // TOGGLE: Toggle234
  const char* Toggle235Text = "";                  // TOGGLE: Toggle235
  const char* Toggle236Text = "";                  // TOGGLE: Toggle236
  const char* Toggle237Text = "";                  // TOGGLE: Toggle237
  const char* Toggle238Text = "";                  // TOGGLE: Toggle238
  const char* Toggle239Text = "";                  // TOGGLE: Toggle239
  const char* Toggle240Text = "";                  // TOGGLE: Toggle240
  const char* Toggle241Text = "";                  // TOGGLE: Toggle241
  const char* Toggle242Text = "";                  // TOGGLE: Toggle242
  const char* Toggle243Text = "";                  // TOGGLE: Toggle243
  const char* Toggle244Text = "";                  // TOGGLE: Toggle244
  const char* Toggle245Text = "";                  // TOGGLE: Toggle245
  const char* Toggle246Text = "";                  // TOGGLE: Toggle246
  const char* Toggle247Text = "";                  // TOGGLE: Toggle247
  const char* Toggle248Text = "";                  // TOGGLE: Toggle248
  const char* Toggle249Text = "";                  // TOGGLE: Toggle249
  const char* Toggle250Text = "";                  // TOGGLE: Toggle250
  const char* Toggle251Text = "";                  // TOGGLE: Toggle251
  const char* Toggle252Text = "";                  // TOGGLE: Toggle252
  const char* Toggle253Text = "";                  // TOGGLE: Toggle253
  const char* Toggle254Text = "";                  // TOGGLE: Toggle254
  const char* Toggle255Text = "";                  // TOGGLE: Toggle255
  const char* Toggle256Text = "";                  // TOGGLE: Toggle256
  const char* Toggle257Text = "";                  // TOGGLE: Toggle257
  const char* Toggle258Text = "";                  // TOGGLE: Toggle258
  const char* Toggle259Text = "";                  // TOGGLE: Toggle259
  const char* Toggle260Text = "";                  // TOGGLE: Toggle260
  const char* Toggle261Text = "";                  // TOGGLE: Toggle261
  const char* Toggle262Text = "";                  // TOGGLE: Toggle262
  const char* Toggle263Text = "";                  // TOGGLE: Toggle263
  const char* Toggle264Text = "";                  // TOGGLE: Toggle264
  const char* Toggle265Text = "";                  // TOGGLE: Toggle265
  const char* Toggle266Text = "";                  // TOGGLE: Toggle266
  const char* Toggle267Text = "";                  // TOGGLE: Toggle267
  const char* Toggle268Text = "";                  // TOGGLE: Toggle268
  const char* Toggle269Text = "";                  // TOGGLE: Toggle269
  const char* Toggle270Text = "";                  // TOGGLE: Toggle270
  const char* Toggle271Text = "";                  // TOGGLE: Toggle271
  const char* Toggle272Text = "";                  // TOGGLE: Toggle272
  const char* Toggle273Text = "";                  // TOGGLE: Toggle273
  const char* Toggle274Text = "";                  // TOGGLE: Toggle274
  const char* Toggle275Text = "";                  // TOGGLE: Toggle275
  const char* Toggle276Text = "";                  // TOGGLE: Toggle276
  const char* Toggle277Text = "";                  // TOGGLE: Toggle277
  const char* Toggle278Text = "";                  // TOGGLE: Toggle278
  const char* Toggle279Text = "";                  // TOGGLE: Toggle279
  const char* Toggle280Text = "";                  // TOGGLE: Toggle280
  const char* Toggle281Text = "";                  // TOGGLE: Toggle281
  const char* Toggle282Text = "";                  // TOGGLE: Toggle282
  const char* Toggle283Text = "";                  // TOGGLE: Toggle283
  const char* Toggle284Text = "";                  // TOGGLE: Toggle284
  const char* Toggle285Text = "";                  // TOGGLE: Toggle285
  const char* Toggle286Text = "";                  // TOGGLE: Toggle286
  const char* Toggle287Text = "";                  // TOGGLE: Toggle287
  const char* Toggle288Text = "";                  // TOGGLE: Toggle288
  const char* Toggle289Text = "";                  // TOGGLE: Toggle289
  const char* Toggle290Text = "";                  // TOGGLE: Toggle290
  const char* Toggle291Text = "";                  // TOGGLE: Toggle291
  const char* Toggle292Text = "";                  // TOGGLE: Toggle292
  const char* Toggle293Text = "";                  // TOGGLE: Toggle293
  const char* Toggle294Text = "";                  // TOGGLE: Toggle294
  const char* Toggle295Text = "";                  // TOGGLE: Toggle295
  const char* Toggle296Text = "";                  // TOGGLE: Toggle296
  const char* Toggle297Text = "";                  // TOGGLE: Toggle297
  const char* Toggle298Text = "";                  // TOGGLE: Toggle298
  const char* Toggle299Text = "";                  // TOGGLE: Toggle299
  const char* Toggle300Text = "";                  // TOGGLE: Toggle300
  const char* Toggle301Text = "";                  // TOGGLE: Toggle301
  const char* Toggle302Text = "";                  // TOGGLE: Toggle302
  const char* Toggle303Text = "";                  // TOGGLE: Toggle303
  const char* Toggle304Text = "";                  // TOGGLE: Toggle304
  const char* Toggle305Text = "";                  // TOGGLE: Toggle305
  const char* Toggle306Text = "";                  // TOGGLE: Toggle306
  const char* Toggle307Text = "";                  // TOGGLE: Toggle307
  const char* Toggle308Text = "";                  // TOGGLE: Toggle308
  const char* Toggle309Text = "";                  // TOGGLE: Toggle309
  const char* Toggle310Text = "";                  // TOGGLE: Toggle310
  const char* Toggle311Text = "";                  // TOGGLE: Toggle311
  const char* Toggle312Text = "";                  // TOGGLE: Toggle312
  const char* Toggle313Text = "";                  // TOGGLE: Toggle313
  const char* Toggle314Text = "";                  // TOGGLE: Toggle314
  const char* Toggle315Text = "";                  // TOGGLE: Toggle315
  const char* Toggle316Text = "";                  // TOGGLE: Toggle316
  const char* Toggle317Text = "";                  // TOGGLE: Toggle317
  const char* Toggle318Text = "";                  // TOGGLE: Toggle318
  const char* Toggle319Text = "";                  // TOGGLE: Toggle319
  const char* Toggle320Text = "";                  // TOGGLE: Toggle320
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
  GuiToggle(state->layoutRecs[1], Toggle001Text, &state->Toggle001Active);
  GuiToggle(state->layoutRecs[2], Toggle002Text, &state->Toggle002Active);
  GuiToggle(state->layoutRecs[3], Toggle003Text, &state->Toggle003Active);
  GuiToggle(state->layoutRecs[4], Toggle004Text, &state->Toggle004Active);
  GuiToggle(state->layoutRecs[5], Toggle005Text, &state->Toggle005Active);
  GuiToggle(state->layoutRecs[6], Toggle006Text, &state->Toggle006Active);
  GuiToggle(state->layoutRecs[7], Toggle007Text, &state->Toggle007Active);
  GuiToggle(state->layoutRecs[8], Toggle008Text, &state->Toggle008Active);
  GuiToggle(state->layoutRecs[9], Toggle009Text, &state->Toggle009Active);
  GuiToggle(state->layoutRecs[10], Toggle010Text, &state->Toggle010Active);
  GuiToggle(state->layoutRecs[11], Toggle011Text, &state->Toggle011Active);
  GuiToggle(state->layoutRecs[12], Toggle012Text, &state->Toggle012Active);
  GuiToggle(state->layoutRecs[13], Toggle013Text, &state->Toggle013Active);
  GuiToggle(state->layoutRecs[14], Toggle014Text, &state->Toggle014Active);
  GuiToggle(state->layoutRecs[15], Toggle015Text, &state->Toggle015Active);
  GuiToggle(state->layoutRecs[16], Toggle016Text, &state->Toggle016Active);
  GuiToggle(state->layoutRecs[17], Toggle017Text, &state->Toggle017Active);
  GuiToggle(state->layoutRecs[18], Toggle018Text, &state->Toggle018Active);
  GuiToggle(state->layoutRecs[19], Toggle019Text, &state->Toggle019Active);
  GuiToggle(state->layoutRecs[20], Toggle020Text, &state->Toggle020Active);
  GuiToggle(state->layoutRecs[21], Toggle021Text, &state->Toggle021Active);
  GuiToggle(state->layoutRecs[22], Toggle022Text, &state->Toggle022Active);
  GuiToggle(state->layoutRecs[23], Toggle023Text, &state->Toggle023Active);
  GuiToggle(state->layoutRecs[24], Toggle024Text, &state->Toggle024Active);
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
  GuiToggle(state->layoutRecs[44], Toggle044Text, &state->Toggle044Active);
  GuiToggle(state->layoutRecs[45], Toggle045Text, &state->Toggle045Active);
  GuiToggle(state->layoutRecs[46], Toggle046Text, &state->Toggle046Active);
  GuiToggle(state->layoutRecs[47], Toggle047Text, &state->Toggle047Active);
  GuiToggle(state->layoutRecs[48], Toggle048Text, &state->Toggle048Active);
  GuiToggle(state->layoutRecs[49], Toggle049Text, &state->Toggle049Active);
  GuiToggle(state->layoutRecs[50], Toggle050Text, &state->Toggle050Active);
  GuiToggle(state->layoutRecs[51], Toggle051Text, &state->Toggle051Active);
  GuiToggle(state->layoutRecs[52], Toggle052Text, &state->Toggle052Active);
  GuiToggle(state->layoutRecs[53], Toggle053Text, &state->Toggle053Active);
  GuiToggle(state->layoutRecs[54], Toggle054Text, &state->Toggle054Active);
  GuiToggle(state->layoutRecs[55], Toggle055Text, &state->Toggle055Active);
  GuiToggle(state->layoutRecs[56], Toggle056Text, &state->Toggle056Active);
  GuiToggle(state->layoutRecs[57], Toggle057Text, &state->Toggle057Active);
  GuiToggle(state->layoutRecs[58], Toggle058Text, &state->Toggle058Active);
  GuiToggle(state->layoutRecs[59], Toggle059Text, &state->Toggle059Active);
  GuiToggle(state->layoutRecs[60], Toggle060Text, &state->Toggle060Active);
  GuiToggle(state->layoutRecs[61], Toggle061Text, &state->Toggle061Active);
  GuiToggle(state->layoutRecs[62], Toggle062Text, &state->Toggle062Active);
  GuiToggle(state->layoutRecs[63], Toggle063Text, &state->Toggle063Active);
  GuiToggle(state->layoutRecs[64], Toggle064Text, &state->Toggle064Active);
  GuiToggle(state->layoutRecs[65], Toggle065Text, &state->Toggle065Active);
  GuiToggle(state->layoutRecs[66], Toggle066Text, &state->Toggle066Active);
  GuiToggle(state->layoutRecs[67], Toggle067Text, &state->Toggle067Active);
  GuiToggle(state->layoutRecs[68], Toggle068Text, &state->Toggle068Active);
  GuiToggle(state->layoutRecs[69], Toggle069Text, &state->Toggle069Active);
  GuiToggle(state->layoutRecs[70], Toggle070Text, &state->Toggle070Active);
  GuiToggle(state->layoutRecs[71], Toggle071Text, &state->Toggle071Active);
  GuiToggle(state->layoutRecs[72], Toggle072Text, &state->Toggle072Active);
  GuiToggle(state->layoutRecs[73], Toggle073Text, &state->Toggle073Active);
  GuiToggle(state->layoutRecs[74], Toggle074Text, &state->Toggle074Active);
  GuiToggle(state->layoutRecs[75], Toggle075Text, &state->Toggle075Active);
  GuiToggle(state->layoutRecs[76], Toggle076Text, &state->Toggle076Active);
  GuiToggle(state->layoutRecs[77], Toggle077Text, &state->Toggle077Active);
  GuiToggle(state->layoutRecs[78], Toggle078Text, &state->Toggle078Active);
  GuiToggle(state->layoutRecs[79], Toggle079Text, &state->Toggle079Active);
  GuiToggle(state->layoutRecs[80], Toggle080Text, &state->Toggle080Active);
  GuiToggle(state->layoutRecs[81], Toggle081Text, &state->Toggle081Active);
  GuiToggle(state->layoutRecs[82], Toggle082Text, &state->Toggle082Active);
  GuiToggle(state->layoutRecs[83], Toggle083Text, &state->Toggle083Active);
  GuiToggle(state->layoutRecs[84], Toggle084Text, &state->Toggle084Active);
  GuiToggle(state->layoutRecs[85], Toggle085Text, &state->Toggle085Active);
  GuiToggle(state->layoutRecs[86], Toggle086Text, &state->Toggle086Active);
  GuiToggle(state->layoutRecs[87], Toggle087Text, &state->Toggle087Active);
  GuiToggle(state->layoutRecs[88], Toggle088Text, &state->Toggle088Active);
  GuiToggle(state->layoutRecs[89], Toggle089Text, &state->Toggle089Active);
  GuiToggle(state->layoutRecs[90], Toggle090Text, &state->Toggle090Active);
  GuiToggle(state->layoutRecs[91], Toggle091Text, &state->Toggle091Active);
  GuiToggle(state->layoutRecs[92], Toggle092Text, &state->Toggle092Active);
  GuiToggle(state->layoutRecs[93], Toggle093Text, &state->Toggle093Active);
  GuiToggle(state->layoutRecs[94], Toggle094Text, &state->Toggle094Active);
  GuiToggle(state->layoutRecs[95], Toggle095Text, &state->Toggle095Active);
  GuiToggle(state->layoutRecs[96], Toggle096Text, &state->Toggle096Active);
  GuiToggle(state->layoutRecs[97], Toggle097Text, &state->Toggle097Active);
  GuiToggle(state->layoutRecs[98], Toggle098Text, &state->Toggle098Active);
  GuiToggle(state->layoutRecs[99], Toggle099Text, &state->Toggle099Active);
  GuiToggle(state->layoutRecs[100], Toggle100Text, &state->Toggle100Active);
  GuiToggle(state->layoutRecs[101], Toggle101Text, &state->Toggle101Active);
  GuiToggle(state->layoutRecs[102], Toggle102Text, &state->Toggle102Active);
  GuiToggle(state->layoutRecs[103], Toggle103Text, &state->Toggle103Active);
  GuiToggle(state->layoutRecs[104], Toggle104Text, &state->Toggle104Active);
  GuiToggle(state->layoutRecs[105], Toggle105Text, &state->Toggle105Active);
  GuiToggle(state->layoutRecs[106], Toggle106Text, &state->Toggle106Active);
  GuiToggle(state->layoutRecs[107], Toggle107Text, &state->Toggle107Active);
  GuiToggle(state->layoutRecs[108], Toggle108Text, &state->Toggle108Active);
  GuiToggle(state->layoutRecs[109], Toggle109Text, &state->Toggle109Active);
  GuiToggle(state->layoutRecs[110], Toggle110Text, &state->Toggle110Active);
  GuiToggle(state->layoutRecs[111], Toggle111Text, &state->Toggle111Active);
  GuiToggle(state->layoutRecs[112], Toggle112Text, &state->Toggle112Active);
  GuiToggle(state->layoutRecs[113], Toggle113Text, &state->Toggle113Active);
  GuiToggle(state->layoutRecs[114], Toggle114Text, &state->Toggle114Active);
  GuiToggle(state->layoutRecs[115], Toggle115Text, &state->Toggle115Active);
  GuiToggle(state->layoutRecs[116], Toggle116Text, &state->Toggle116Active);
  GuiToggle(state->layoutRecs[117], Toggle117Text, &state->Toggle117Active);
  GuiToggle(state->layoutRecs[118], Toggle118Text, &state->Toggle118Active);
  GuiToggle(state->layoutRecs[119], Toggle119Text, &state->Toggle119Active);
  GuiToggle(state->layoutRecs[120], Toggle120Text, &state->Toggle120Active);
  GuiToggle(state->layoutRecs[121], Toggle121Text, &state->Toggle121Active);
  GuiToggle(state->layoutRecs[122], Toggle122Text, &state->Toggle122Active);
  GuiToggle(state->layoutRecs[123], Toggle123Text, &state->Toggle123Active);
  GuiToggle(state->layoutRecs[124], Toggle124Text, &state->Toggle124Active);
  GuiToggle(state->layoutRecs[125], Toggle125Text, &state->Toggle125Active);
  GuiToggle(state->layoutRecs[126], Toggle126Text, &state->Toggle126Active);
  GuiToggle(state->layoutRecs[127], Toggle127Text, &state->Toggle127Active);
  GuiToggle(state->layoutRecs[128], Toggle128Text, &state->Toggle128Active);
  GuiToggle(state->layoutRecs[129], Toggle129Text, &state->Toggle129Active);
  GuiToggle(state->layoutRecs[130], Toggle130Text, &state->Toggle130Active);
  GuiToggle(state->layoutRecs[131], Toggle131Text, &state->Toggle131Active);
  GuiToggle(state->layoutRecs[132], Toggle132Text, &state->Toggle132Active);
  GuiToggle(state->layoutRecs[133], Toggle133Text, &state->Toggle133Active);
  GuiToggle(state->layoutRecs[134], Toggle134Text, &state->Toggle134Active);
  GuiToggle(state->layoutRecs[135], Toggle135Text, &state->Toggle135Active);
  GuiToggle(state->layoutRecs[136], Toggle136Text, &state->Toggle136Active);
  GuiToggle(state->layoutRecs[137], Toggle137Text, &state->Toggle137Active);
  GuiToggle(state->layoutRecs[138], Toggle138Text, &state->Toggle138Active);
  GuiToggle(state->layoutRecs[139], Toggle139Text, &state->Toggle139Active);
  GuiToggle(state->layoutRecs[140], Toggle140Text, &state->Toggle140Active);
  GuiToggle(state->layoutRecs[141], Toggle141Text, &state->Toggle141Active);
  GuiToggle(state->layoutRecs[142], Toggle142Text, &state->Toggle142Active);
  GuiToggle(state->layoutRecs[143], Toggle143Text, &state->Toggle143Active);
  GuiToggle(state->layoutRecs[144], Toggle144Text, &state->Toggle144Active);
  GuiToggle(state->layoutRecs[145], Toggle145Text, &state->Toggle145Active);
  GuiToggle(state->layoutRecs[146], Toggle146Text, &state->Toggle146Active);
  GuiToggle(state->layoutRecs[147], Toggle147Text, &state->Toggle147Active);
  GuiToggle(state->layoutRecs[148], Toggle148Text, &state->Toggle148Active);
  GuiToggle(state->layoutRecs[149], Toggle149Text, &state->Toggle149Active);
  GuiToggle(state->layoutRecs[150], Toggle150Text, &state->Toggle150Active);
  GuiToggle(state->layoutRecs[151], Toggle151Text, &state->Toggle151Active);
  GuiToggle(state->layoutRecs[152], Toggle152Text, &state->Toggle152Active);
  GuiToggle(state->layoutRecs[153], Toggle153Text, &state->Toggle153Active);
  GuiToggle(state->layoutRecs[154], Toggle154Text, &state->Toggle154Active);
  GuiToggle(state->layoutRecs[155], Toggle155Text, &state->Toggle155Active);
  GuiToggle(state->layoutRecs[156], Toggle156Text, &state->Toggle156Active);
  GuiToggle(state->layoutRecs[157], Toggle157Text, &state->Toggle157Active);
  GuiToggle(state->layoutRecs[158], Toggle158Text, &state->Toggle158Active);
  GuiToggle(state->layoutRecs[159], Toggle159Text, &state->Toggle159Active);
  GuiToggle(state->layoutRecs[160], Toggle160Text, &state->Toggle160Active);
  GuiToggle(state->layoutRecs[161], Toggle161Text, &state->Toggle161Active);
  GuiToggle(state->layoutRecs[162], Toggle162Text, &state->Toggle162Active);
  GuiToggle(state->layoutRecs[163], Toggle163Text, &state->Toggle163Active);
  GuiToggle(state->layoutRecs[164], Toggle164Text, &state->Toggle164Active);
  GuiToggle(state->layoutRecs[165], Toggle165Text, &state->Toggle165Active);
  GuiToggle(state->layoutRecs[166], Toggle166Text, &state->Toggle166Active);
  GuiToggle(state->layoutRecs[167], Toggle167Text, &state->Toggle167Active);
  GuiToggle(state->layoutRecs[168], Toggle168Text, &state->Toggle168Active);
  GuiToggle(state->layoutRecs[169], Toggle169Text, &state->Toggle169Active);
  GuiToggle(state->layoutRecs[170], Toggle170Text, &state->Toggle170Active);
  GuiToggle(state->layoutRecs[171], Toggle171Text, &state->Toggle171Active);
  GuiToggle(state->layoutRecs[172], Toggle172Text, &state->Toggle172Active);
  GuiToggle(state->layoutRecs[173], Toggle173Text, &state->Toggle173Active);
  GuiToggle(state->layoutRecs[174], Toggle174Text, &state->Toggle174Active);
  GuiToggle(state->layoutRecs[175], Toggle175Text, &state->Toggle175Active);
  GuiToggle(state->layoutRecs[176], Toggle176Text, &state->Toggle176Active);
  GuiToggle(state->layoutRecs[177], Toggle177Text, &state->Toggle177Active);
  GuiToggle(state->layoutRecs[178], Toggle178Text, &state->Toggle178Active);
  GuiToggle(state->layoutRecs[179], Toggle179Text, &state->Toggle179Active);
  GuiToggle(state->layoutRecs[180], Toggle180Text, &state->Toggle180Active);
  GuiToggle(state->layoutRecs[181], Toggle181Text, &state->Toggle181Active);
  GuiToggle(state->layoutRecs[182], Toggle182Text, &state->Toggle182Active);
  GuiToggle(state->layoutRecs[183], Toggle183Text, &state->Toggle183Active);
  GuiToggle(state->layoutRecs[184], Toggle184Text, &state->Toggle184Active);
  GuiToggle(state->layoutRecs[185], Toggle185Text, &state->Toggle185Active);
  GuiToggle(state->layoutRecs[186], Toggle186Text, &state->Toggle186Active);
  GuiToggle(state->layoutRecs[187], Toggle187Text, &state->Toggle187Active);
  GuiToggle(state->layoutRecs[188], Toggle188Text, &state->Toggle188Active);
  GuiToggle(state->layoutRecs[189], Toggle189Text, &state->Toggle189Active);
  GuiToggle(state->layoutRecs[190], Toggle190Text, &state->Toggle190Active);
  GuiToggle(state->layoutRecs[191], Toggle191Text, &state->Toggle191Active);
  GuiToggle(state->layoutRecs[192], Toggle192Text, &state->Toggle192Active);
  GuiToggle(state->layoutRecs[193], Toggle193Text, &state->Toggle193Active);
  GuiToggle(state->layoutRecs[194], Toggle194Text, &state->Toggle194Active);
  GuiToggle(state->layoutRecs[195], Toggle195Text, &state->Toggle195Active);
  GuiToggle(state->layoutRecs[196], Toggle196Text, &state->Toggle196Active);
  GuiToggle(state->layoutRecs[197], Toggle197Text, &state->Toggle197Active);
  GuiToggle(state->layoutRecs[198], Toggle198Text, &state->Toggle198Active);
  GuiToggle(state->layoutRecs[199], Toggle199Text, &state->Toggle199Active);
  GuiToggle(state->layoutRecs[200], Toggle200Text, &state->Toggle200Active);
  GuiToggle(state->layoutRecs[201], Toggle201Text, &state->Toggle201Active);
  GuiToggle(state->layoutRecs[202], Toggle202Text, &state->Toggle202Active);
  GuiToggle(state->layoutRecs[203], Toggle203Text, &state->Toggle203Active);
  GuiToggle(state->layoutRecs[204], Toggle204Text, &state->Toggle204Active);
  GuiToggle(state->layoutRecs[205], Toggle205Text, &state->Toggle205Active);
  GuiToggle(state->layoutRecs[206], Toggle206Text, &state->Toggle206Active);
  GuiToggle(state->layoutRecs[207], Toggle207Text, &state->Toggle207Active);
  GuiToggle(state->layoutRecs[208], Toggle208Text, &state->Toggle208Active);
  GuiToggle(state->layoutRecs[209], Toggle209Text, &state->Toggle209Active);
  GuiToggle(state->layoutRecs[210], Toggle210Text, &state->Toggle210Active);
  GuiToggle(state->layoutRecs[211], Toggle211Text, &state->Toggle211Active);
  GuiToggle(state->layoutRecs[212], Toggle212Text, &state->Toggle212Active);
  GuiToggle(state->layoutRecs[213], Toggle213Text, &state->Toggle213Active);
  GuiToggle(state->layoutRecs[214], Toggle214Text, &state->Toggle214Active);
  GuiToggle(state->layoutRecs[215], Toggle215Text, &state->Toggle215Active);
  GuiToggle(state->layoutRecs[216], Toggle216Text, &state->Toggle216Active);
  GuiToggle(state->layoutRecs[217], Toggle217Text, &state->Toggle217Active);
  GuiToggle(state->layoutRecs[218], Toggle218Text, &state->Toggle218Active);
  GuiToggle(state->layoutRecs[219], Toggle219Text, &state->Toggle219Active);
  GuiToggle(state->layoutRecs[220], Toggle220Text, &state->Toggle220Active);
  GuiToggle(state->layoutRecs[221], Toggle221Text, &state->Toggle221Active);
  GuiToggle(state->layoutRecs[222], Toggle222Text, &state->Toggle222Active);
  GuiToggle(state->layoutRecs[223], Toggle223Text, &state->Toggle223Active);
  GuiToggle(state->layoutRecs[224], Toggle224Text, &state->Toggle224Active);
  GuiToggle(state->layoutRecs[225], Toggle225Text, &state->Toggle225Active);
  GuiToggle(state->layoutRecs[226], Toggle226Text, &state->Toggle226Active);
  GuiToggle(state->layoutRecs[227], Toggle227Text, &state->Toggle227Active);
  GuiToggle(state->layoutRecs[228], Toggle228Text, &state->Toggle228Active);
  GuiToggle(state->layoutRecs[229], Toggle229Text, &state->Toggle229Active);
  GuiToggle(state->layoutRecs[230], Toggle230Text, &state->Toggle230Active);
  GuiToggle(state->layoutRecs[231], Toggle231Text, &state->Toggle231Active);
  GuiToggle(state->layoutRecs[232], Toggle232Text, &state->Toggle232Active);
  GuiToggle(state->layoutRecs[233], Toggle233Text, &state->Toggle233Active);
  GuiToggle(state->layoutRecs[234], Toggle234Text, &state->Toggle234Active);
  GuiToggle(state->layoutRecs[235], Toggle235Text, &state->Toggle235Active);
  GuiToggle(state->layoutRecs[236], Toggle236Text, &state->Toggle236Active);
  GuiToggle(state->layoutRecs[237], Toggle237Text, &state->Toggle237Active);
  GuiToggle(state->layoutRecs[238], Toggle238Text, &state->Toggle238Active);
  GuiToggle(state->layoutRecs[239], Toggle239Text, &state->Toggle239Active);
  GuiToggle(state->layoutRecs[240], Toggle240Text, &state->Toggle240Active);
  GuiToggle(state->layoutRecs[241], Toggle241Text, &state->Toggle241Active);
  GuiToggle(state->layoutRecs[242], Toggle242Text, &state->Toggle242Active);
  GuiToggle(state->layoutRecs[243], Toggle243Text, &state->Toggle243Active);
  GuiToggle(state->layoutRecs[244], Toggle244Text, &state->Toggle244Active);
  GuiToggle(state->layoutRecs[245], Toggle245Text, &state->Toggle245Active);
  GuiToggle(state->layoutRecs[246], Toggle246Text, &state->Toggle246Active);
  GuiToggle(state->layoutRecs[247], Toggle247Text, &state->Toggle247Active);
  GuiToggle(state->layoutRecs[248], Toggle248Text, &state->Toggle248Active);
  GuiToggle(state->layoutRecs[249], Toggle249Text, &state->Toggle249Active);
  GuiToggle(state->layoutRecs[250], Toggle250Text, &state->Toggle250Active);
  GuiToggle(state->layoutRecs[251], Toggle251Text, &state->Toggle251Active);
  GuiToggle(state->layoutRecs[252], Toggle252Text, &state->Toggle252Active);
  GuiToggle(state->layoutRecs[253], Toggle253Text, &state->Toggle253Active);
  GuiToggle(state->layoutRecs[254], Toggle254Text, &state->Toggle254Active);
  GuiToggle(state->layoutRecs[255], Toggle255Text, &state->Toggle255Active);
  GuiToggle(state->layoutRecs[256], Toggle256Text, &state->Toggle256Active);
  GuiToggle(state->layoutRecs[257], Toggle257Text, &state->Toggle257Active);
  GuiToggle(state->layoutRecs[258], Toggle258Text, &state->Toggle258Active);
  GuiToggle(state->layoutRecs[259], Toggle259Text, &state->Toggle259Active);
  GuiToggle(state->layoutRecs[260], Toggle260Text, &state->Toggle260Active);
  GuiToggle(state->layoutRecs[261], Toggle261Text, &state->Toggle261Active);
  GuiToggle(state->layoutRecs[262], Toggle262Text, &state->Toggle262Active);
  GuiToggle(state->layoutRecs[263], Toggle263Text, &state->Toggle263Active);
  GuiToggle(state->layoutRecs[264], Toggle264Text, &state->Toggle264Active);
  GuiToggle(state->layoutRecs[265], Toggle265Text, &state->Toggle265Active);
  GuiToggle(state->layoutRecs[266], Toggle266Text, &state->Toggle266Active);
  GuiToggle(state->layoutRecs[267], Toggle267Text, &state->Toggle267Active);
  GuiToggle(state->layoutRecs[268], Toggle268Text, &state->Toggle268Active);
  GuiToggle(state->layoutRecs[269], Toggle269Text, &state->Toggle269Active);
  GuiToggle(state->layoutRecs[270], Toggle270Text, &state->Toggle270Active);
  GuiToggle(state->layoutRecs[271], Toggle271Text, &state->Toggle271Active);
  GuiToggle(state->layoutRecs[272], Toggle272Text, &state->Toggle272Active);
  GuiToggle(state->layoutRecs[273], Toggle273Text, &state->Toggle273Active);
  GuiToggle(state->layoutRecs[274], Toggle274Text, &state->Toggle274Active);
  GuiToggle(state->layoutRecs[275], Toggle275Text, &state->Toggle275Active);
  GuiToggle(state->layoutRecs[276], Toggle276Text, &state->Toggle276Active);
  GuiToggle(state->layoutRecs[277], Toggle277Text, &state->Toggle277Active);
  GuiToggle(state->layoutRecs[278], Toggle278Text, &state->Toggle278Active);
  GuiToggle(state->layoutRecs[279], Toggle279Text, &state->Toggle279Active);
  GuiToggle(state->layoutRecs[280], Toggle280Text, &state->Toggle280Active);
  GuiToggle(state->layoutRecs[281], Toggle281Text, &state->Toggle281Active);
  GuiToggle(state->layoutRecs[282], Toggle282Text, &state->Toggle282Active);
  GuiToggle(state->layoutRecs[283], Toggle283Text, &state->Toggle283Active);
  GuiToggle(state->layoutRecs[284], Toggle284Text, &state->Toggle284Active);
  GuiToggle(state->layoutRecs[285], Toggle285Text, &state->Toggle285Active);
  GuiToggle(state->layoutRecs[286], Toggle286Text, &state->Toggle286Active);
  GuiToggle(state->layoutRecs[287], Toggle287Text, &state->Toggle287Active);
  GuiToggle(state->layoutRecs[288], Toggle288Text, &state->Toggle288Active);
  GuiToggle(state->layoutRecs[289], Toggle289Text, &state->Toggle289Active);
  GuiToggle(state->layoutRecs[290], Toggle290Text, &state->Toggle290Active);
  GuiToggle(state->layoutRecs[291], Toggle291Text, &state->Toggle291Active);
  GuiToggle(state->layoutRecs[292], Toggle292Text, &state->Toggle292Active);
  GuiToggle(state->layoutRecs[293], Toggle293Text, &state->Toggle293Active);
  GuiToggle(state->layoutRecs[294], Toggle294Text, &state->Toggle294Active);
  GuiToggle(state->layoutRecs[295], Toggle295Text, &state->Toggle295Active);
  GuiToggle(state->layoutRecs[296], Toggle296Text, &state->Toggle296Active);
  GuiToggle(state->layoutRecs[297], Toggle297Text, &state->Toggle297Active);
  GuiToggle(state->layoutRecs[298], Toggle298Text, &state->Toggle298Active);
  GuiToggle(state->layoutRecs[299], Toggle299Text, &state->Toggle299Active);
  GuiToggle(state->layoutRecs[300], Toggle300Text, &state->Toggle300Active);
  GuiToggle(state->layoutRecs[301], Toggle301Text, &state->Toggle301Active);
  GuiToggle(state->layoutRecs[302], Toggle302Text, &state->Toggle302Active);
  GuiToggle(state->layoutRecs[303], Toggle303Text, &state->Toggle303Active);
  GuiToggle(state->layoutRecs[304], Toggle304Text, &state->Toggle304Active);
  GuiToggle(state->layoutRecs[305], Toggle305Text, &state->Toggle305Active);
  GuiToggle(state->layoutRecs[306], Toggle306Text, &state->Toggle306Active);
  GuiToggle(state->layoutRecs[307], Toggle307Text, &state->Toggle307Active);
  GuiToggle(state->layoutRecs[308], Toggle308Text, &state->Toggle308Active);
  GuiToggle(state->layoutRecs[309], Toggle309Text, &state->Toggle309Active);
  GuiToggle(state->layoutRecs[310], Toggle310Text, &state->Toggle310Active);
  GuiToggle(state->layoutRecs[311], Toggle311Text, &state->Toggle311Active);
  GuiToggle(state->layoutRecs[312], Toggle312Text, &state->Toggle312Active);
  GuiToggle(state->layoutRecs[313], Toggle313Text, &state->Toggle313Active);
  GuiToggle(state->layoutRecs[314], Toggle314Text, &state->Toggle314Active);
  GuiToggle(state->layoutRecs[315], Toggle315Text, &state->Toggle315Active);
  GuiToggle(state->layoutRecs[316], Toggle316Text, &state->Toggle316Active);
  GuiToggle(state->layoutRecs[317], Toggle317Text, &state->Toggle317Active);
  GuiToggle(state->layoutRecs[318], Toggle318Text, &state->Toggle318Active);
  GuiToggle(state->layoutRecs[319], Toggle319Text, &state->Toggle319Active);
  GuiToggle(state->layoutRecs[320], Toggle320Text, &state->Toggle320Active);
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
