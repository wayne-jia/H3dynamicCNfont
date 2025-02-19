#ifndef LE_GEN_SCREEN_SCREEN0_H
#define LE_GEN_SCREEN_SCREEN0_H

#include "gfx/legato/legato.h"

#include "gfx/legato/generated/le_gen_scheme.h"
#include "gfx/legato/generated/le_gen_assets.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility
extern "C" {
#endif
// DOM-IGNORE-END

// screen member widget declarations
extern leWidget* Screen0_BackgroundPanel;
extern leLabelWidget* Screen0_LabelWidget_Fixed_Stat;
extern leLabelWidget* Screen0_LabelWidget_Dyn;
extern leLabelWidget* Screen0_LabelWidget_1;
extern leLabelWidget* Screen0_LabelWidget_1_0;
extern leButtonWidget* Screen0_ButtonWidget_StartStop;
extern leButtonWidget* Screen0_ButtonWidget_English;
extern leButtonWidget* Screen0_ButtonWidget_Spanish;
extern leButtonWidget* Screen0_ButtonWidget_Chinese;
extern leButtonWidget* Screen0_ButtonWidget_0;
extern leLabelWidget* Screen0_LabelWidget_0;

// event handlers
// !!THESE MUST BE IMPLEMENTED IN THE APPLICATION CODE!!
void event_Screen0_ButtonWidget_StartStop_OnPressed(leButtonWidget* btn);
void event_Screen0_ButtonWidget_StartStop_OnReleased(leButtonWidget* btn);
void event_Screen0_ButtonWidget_English_OnPressed(leButtonWidget* btn);
void event_Screen0_ButtonWidget_Spanish_OnPressed(leButtonWidget* btn);
void event_Screen0_ButtonWidget_Chinese_OnPressed(leButtonWidget* btn);
void event_Screen0_ButtonWidget_0_OnReleased(leButtonWidget* btn);

// screen lifecycle functions
// DO NOT CALL THESE DIRECTLY
leResult screenInit_Screen0(void); // called when Legato is initialized
leResult screenShow_Screen0(void); // called when screen is shown
void screenHide_Screen0(void); // called when screen is hidden
void screenDestroy_Screen0(void); // called when Legato is destroyed
void screenUpdate_Screen0(void); // called when Legato is updating

leWidget* screenGetRoot_Screen0(uint32_t lyrIdx); // gets a root widget for this screen

// Screen Events:
void Screen0_OnShow(void); // called when this screen is shown
void Screen0_OnHide(void); // called when this screen is hidden
void Screen0_OnUpdate(void); // called when this screen is updated

//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // LE_GEN_SCREEN_SCREEN0_H
