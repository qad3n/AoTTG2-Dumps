// Type: UI.PausePopup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/PausePopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/PausePopup.cs
// --------------------------------

// UI.PausePopup$$get_Title
// il2cpp: System_String_o* UI_PausePopup__get_Title (UI_PausePopup_o* __this, const MethodInfo* method);
// 0x18225ec40

System_String_o * UI_PausePopup__get_Title(UI_PausePopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_1843472ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"Pause");
    il2cpp_codegen_initialize_runtime_metadata(&"Keybinds.General");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_1843472ed = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("SettingsPopup","Keybinds.General","Pause","",
                      "",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.PausePopup$$get_Width
// il2cpp: float UI_PausePopup__get_Width (UI_PausePopup_o* __this, const MethodInfo* method);
// 0x182245d50

float UI_PausePopup__get_Width(UI_PausePopup_o *__this,MethodInfo *method)

{
  return 220.0;
}


// UI.PausePopup$$get_Height
// il2cpp: float UI_PausePopup__get_Height (UI_PausePopup_o* __this, const MethodInfo* method);
// 0x1821dda70

float
UI_PausePopup__get_Height(UI_PausePopup_o* __this, MethodInfo* method)

{
  return 280.0;
}


// UI.PausePopup$$get_VerticalSpacing
// il2cpp: float UI_PausePopup__get_VerticalSpacing (UI_PausePopup_o* __this, const MethodInfo* method);
// 0x182168bc0

float
UI_PausePopup__get_VerticalSpacing(UI_PausePopup_o* __this, MethodInfo* method)

{
  return 20.0;
}


// UI.PausePopup$$get_VerticalPadding
// il2cpp: int32_t UI_PausePopup__get_VerticalPadding (UI_PausePopup_o* __this, const MethodInfo* method);
// 0x180847040

int32_t
UI_PausePopup__get_VerticalPadding(UI_PausePopup_o* __this, MethodInfo* method)

{
  return 0x14;
}


// UI.PausePopup$$Setup
// il2cpp: void UI_PausePopup__Setup (UI_PausePopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x18225e890

void UI_PausePopup__Setup(UI_PausePopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  int32_t fontSize;
  System_String_o *pSVar2;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar3;
  
  if (Il2CppMethodInitialized_1843472ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_PausePopup_Setup_b__10_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_PausePopup_Setup_b__10_1);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_PausePopup_Setup_b__10_2);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_PausePopup_Setup_b__10_3);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Game");
    il2cpp_codegen_initialize_runtime_metadata(&"Settings");
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    il2cpp_codegen_initialize_runtime_metadata(&"Quit");
    Il2CppMethodInitialized_1843472ee = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)(__this);
  pSVar2 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar2,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar2 = UI_UIManager__GetLocaleCommon("Quit",(MethodInfo *)0x0);
  pUVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar3,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_PausePopup_Setup_b__10_0,(MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,0.0,pUVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  pSVar2 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
  pUVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar3,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_PausePopup_Setup_b__10_1,(MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,0.0,pUVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).SinglePanel;
  pSVar2 = UI_UIManager__GetLocaleCommon("Settings",(MethodInfo *)0x0);
  pUVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar3,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_PausePopup_Setup_b__10_2,(MethodInfo *)0x0);
  UI_ElementFactory__CreateDefaultButton(pUVar1,__this_00,pSVar2,160.0,0.0,pUVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).SinglePanel;
  pSVar2 = UI_UIManager__GetLocaleCommon("Game",(MethodInfo *)0x0);
  pUVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar3,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_PausePopup_Setup_b__10_3,(MethodInfo *)0x0);
  UI_ElementFactory__CreateDefaultButton(pUVar1,__this_00,pSVar2,160.0,0.0,pUVar3,(MethodInfo *)0x0);
  return;
}


// UI.PausePopup$$OnButtonClick
// il2cpp: void UI_PausePopup__OnButtonClick (UI_PausePopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x18225e6a0

void UI_PausePopup__OnButtonClick(UI_PausePopup_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  UI_InGameMenu_o *__this_00;
  UI_BasePopup_o *pUVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_1843472ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Game");
    il2cpp_codegen_initialize_runtime_metadata(&"Settings");
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    il2cpp_codegen_initialize_runtime_metadata(&"Quit");
    Il2CppMethodInitialized_1843472ef = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  __this_00 = (UI_InGameMenu_o *)TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if (__this_00 != (UI_InGameMenu_o *)0x0) {
    bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
    if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
       ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_InGameMenu))
    {
      il2cpp_codegen_raise_invalid_cast_exception(__this_00);
    }
  }
  bVar3 = System_String__op_Equality(name,"Game",(MethodInfo *)0x0);
  if (!bVar3) {
    bVar3 = System_String__op_Equality(name,"Settings",(MethodInfo *)0x0);
    if (bVar3) {
      if ((__this_00 != (UI_InGameMenu_o *)0x0) &&
         (pUVar2 = (__this_00->fields)._settingsPopup, pUVar2 != (UI_BasePopup_o *)0x0)) {
        (*(pUVar2->klass->vtable)._21_Show.methodPtr)(pUVar2,(pUVar2->klass->vtable)._21_Show.method);
        goto label_18225e850;
      }
    }
    else {
      bVar3 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
      if (!bVar3) {
        bVar3 = System_String__op_Equality(name,"Quit",(MethodInfo *)0x0);
        if (bVar3) {
          if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
          }
          GameManagers_InGameManager__LeaveRoom((MethodInfo *)0x0);
        }
        return;
      }
      if (__this_00 != (UI_InGameMenu_o *)0x0) {
        UI_InGameMenu__SetPauseMenu(__this_00,false,(MethodInfo *)0x0);
        return;
      }
    }
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Game_AottgGisketchUiHost__ShowGameCreate(false,true,(MethodInfo *)0x0);
label_18225e850:
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


// UI.PausePopup$$.ctor
// il2cpp: void UI_PausePopup___ctor (UI_PausePopup_o* __this, const MethodInfo* method);
// 0x1821c11a0

void
UI_PausePopup___ctor(UI_PausePopup_o* __this, MethodInfo* method)

{
  UI_BasePopup___ctor((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.PausePopup$$<Setup>b__10_0
// il2cpp: void UI_PausePopup___Setup_b__10_0 (UI_PausePopup_o* __this, const MethodInfo* method);
// 0x18225eb40

void UI_PausePopup___Setup_b__10_0(UI_PausePopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843472f0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Quit");
    Il2CppMethodInitialized_1843472f0 = '\x01';
  }
  UI_PausePopup__OnButtonClick(__this,"Quit",(MethodInfo *)0x0);
  return;
}


// UI.PausePopup$$<Setup>b__10_1
// il2cpp: void UI_PausePopup___Setup_b__10_1 (UI_PausePopup_o* __this, const MethodInfo* method);
// 0x18225eb80

void UI_PausePopup___Setup_b__10_1(UI_PausePopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843472f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    Il2CppMethodInitialized_1843472f1 = '\x01';
  }
  UI_PausePopup__OnButtonClick(__this,"Back",(MethodInfo *)0x0);
  return;
}


// UI.PausePopup$$<Setup>b__10_2
// il2cpp: void UI_PausePopup___Setup_b__10_2 (UI_PausePopup_o* __this, const MethodInfo* method);
// 0x18225ebc0

void UI_PausePopup___Setup_b__10_2(UI_PausePopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843472f2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Settings");
    Il2CppMethodInitialized_1843472f2 = '\x01';
  }
  UI_PausePopup__OnButtonClick(__this,"Settings",(MethodInfo *)0x0);
  return;
}


// UI.PausePopup$$<Setup>b__10_3
// il2cpp: void UI_PausePopup___Setup_b__10_3 (UI_PausePopup_o* __this, const MethodInfo* method);
// 0x18225ec00

void UI_PausePopup___Setup_b__10_3(UI_PausePopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843472f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Game");
    Il2CppMethodInitialized_1843472f3 = '\x01';
  }
  UI_PausePopup__OnButtonClick(__this,"Game",(MethodInfo *)0x0);
  return;
}


