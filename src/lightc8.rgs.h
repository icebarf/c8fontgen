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

#define LIGHTC8_STYLE_PROPS_COUNT  5

// Custom style name: LightC8
static const GuiStyleProp lightc8StyleProps[LIGHTC8_STYLE_PROPS_COUNT] = {
    { 3, 1, 0x10a8faff },    // TOGGLE_BASE_COLOR_NORMAL 
    { 3, 2, 0x119dfbff },    // TOGGLE_TEXT_COLOR_NORMAL 
    { 3, 6, 0x7f7f7fff },    // TOGGLE_BORDER_COLOR_PRESSED 
    { 3, 7, 0xe8e7e7ff },    // TOGGLE_BASE_COLOR_PRESSED 
    { 3, 8, 0xe8e3e3ff },    // TOGGLE_TEXT_COLOR_PRESSED 
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
