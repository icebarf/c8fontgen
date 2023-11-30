//////////////////////////////////////////////////////////////////////////////////
//                                                                              //
// StyleAsCode exporter v2.0 - Style data exported as a values array //
//                                                                              //
// USAGE: On init call: GuiLoadStyleCyberC8(); //
//                                                                              //
// more info and bugs-report:  github.com/raysan5/raygui // feedback and
// support:       ray[at]raylibtech.com                            //
//                                                                              //
// Copyright (c) 2020-2023 raylib technologies (@raylibtech) //
//                                                                              //
//////////////////////////////////////////////////////////////////////////////////

#define CYBERC8_STYLE_PROPS_COUNT 21

// Custom style name: CyberC8
static const GuiStyleProp cyberc8StyleProps[CYBERC8_STYLE_PROPS_COUNT] = {
  { 0, 0, 0x2f7486ff },  // DEFAULT_BORDER_COLOR_NORMAL
  { 0, 1, 0x024658ff },  // DEFAULT_BASE_COLOR_NORMAL
  { 0, 2, 0x51bfd3ff },  // DEFAULT_TEXT_COLOR_NORMAL
  { 0, 3, 0x82cde0ff },  // DEFAULT_BORDER_COLOR_FOCUSED
  { 0, 4, 0x3299b4ff },  // DEFAULT_BASE_COLOR_FOCUSED
  { 0, 5, 0xb6e1eaff },  // DEFAULT_TEXT_COLOR_FOCUSED
  { 0, 6, 0xeb7630ff },  // DEFAULT_BORDER_COLOR_PRESSED
  { 0, 7, 0xffbc51ff },  // DEFAULT_BASE_COLOR_PRESSED
  { 0, 8, 0xd86f36ff },  // DEFAULT_TEXT_COLOR_PRESSED
  { 0, 9, 0x134b5aff },  // DEFAULT_BORDER_COLOR_DISABLED
  { 0, 10, 0x02313dff }, // DEFAULT_BASE_COLOR_DISABLED
  { 0, 11, 0x17505fff }, // DEFAULT_TEXT_COLOR_DISABLED
  { 0, 16, 0x0000000a }, // DEFAULT_TEXT_SIZE
                         //   { 0, 17, 0x00000000 }, // DEFAULT_TEXT_SPACING
  { 0, 18, 0x81c0d0ff }, // DEFAULT_LINE_COLOR
  { 0, 19, 0x00222bff }, // DEFAULT_BACKGROUND_COLOR
  //   { 0, 20, 0x00000015 }, // DEFAULT_TEXT_LINE_SPACING
  { 3, 0, 0xf86116ff }, // TOGGLE_BORDER_COLOR_NORMAL
  { 3, 1, 0xfcb350ff }, // TOGGLE_BASE_COLOR_NORMAL
  { 3, 2, 0xdf6718ff }, // TOGGLE_TEXT_COLOR_NORMAL
  { 3, 6, 0x045e8dff }, // TOGGLE_BORDER_COLOR_PRESSED
  { 3, 7, 0x01446aff }, // TOGGLE_BASE_COLOR_PRESSED
  { 3, 8, 0x3c7fbeff }, // TOGGLE_TEXT_COLOR_PRESSED
};

// Style loading function: CyberC8
static void
GuiLoadStyleCyberC8(void)
{
  // Load style properties provided
  // NOTE: Default properties are propagated
  for (int i = 0; i < CYBERC8_STYLE_PROPS_COUNT; i++) {
    GuiSetStyle(cyberc8StyleProps[i].controlId,
                cyberc8StyleProps[i].propertyId,
                cyberc8StyleProps[i].propertyValue);
  }
}
