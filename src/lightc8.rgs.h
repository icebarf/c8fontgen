//////////////////////////////////////////////////////////////////////////////////
//                                                                              //
// StyleAsCode exporter v2.0 - Style data exported as a values array            //
//                                                                              //
// USAGE: On init call: GuiLoadStyleLightC8();                                   //
//                                                                              //
// more info and bugs-report:  github.com/raysan5/raygui                        //
// feedback and support:       ray[at]raylibtech.com                            //
//                                                                              //
// Copyright (c) 2020-2023 raylib technologies (@raylibtech)                    //
//                                                                              //
//////////////////////////////////////////////////////////////////////////////////

#define LIGHTC8_STYLE_PROPS_COUNT  11

// Custom style name: LightC8
static const GuiStyleProp lightc8StyleProps[LIGHTC8_STYLE_PROPS_COUNT] = {
    { 3, 0, 0x030303ff },    // TOGGLE_BORDER_COLOR_NORMAL 
    { 3, 1, 0x060606ff },    // TOGGLE_BASE_COLOR_NORMAL 
    { 3, 2, 0x040404ff },    // TOGGLE_TEXT_COLOR_NORMAL 
    { 3, 4, 0x4f4e4eff },    // TOGGLE_BASE_COLOR_FOCUSED 
    { 3, 5, 0x515151ff },    // TOGGLE_TEXT_COLOR_FOCUSED 
    { 3, 6, 0x696969ff },    // TOGGLE_BORDER_COLOR_PRESSED 
    { 3, 7, 0xfbf9f9ff },    // TOGGLE_BASE_COLOR_PRESSED 
    { 3, 8, 0xfffdfdff },    // TOGGLE_TEXT_COLOR_PRESSED 
    { 3, 9, 0x040404ff },    // TOGGLE_BORDER_COLOR_DISABLED 
    { 3, 10, 0x010101ff },    // TOGGLE_BASE_COLOR_DISABLED 
    { 3, 11, 0x010101ff },    // TOGGLE_TEXT_COLOR_DISABLED 
};

// Style loading function: LightC8
static void GuiLoadStyleLightC8(void)
{
    // Load style properties provided
    // NOTE: Default properties are propagated
    for (int i = 0; i < LIGHTC8_STYLE_PROPS_COUNT; i++)
    {
        GuiSetStyle(lightc8StyleProps[i].controlId, lightc8StyleProps[i].propertyId, lightc8StyleProps[i].propertyValue);
    }

    //-----------------------------------------------------------------

    // TODO: Custom user style setup: Set specific properties here (if required)
    // i.e. Controls specific BORDER_WIDTH, TEXT_PADDING, TEXT_ALIGNMENT
}
