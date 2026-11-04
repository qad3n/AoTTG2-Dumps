// Type: UI.MultiplayerFilterPopup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/MultiplayerFilterPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/MultiplayerFilterPopup.cs
// --------------------------------

// UI.MultiplayerFilterPopup$$get_Title
// il2cpp: System_String_o* UI_MultiplayerFilterPopup__get_Title (UI_MultiplayerFilterPopup_o* __this, const MethodInfo* method);
// 0x182291580

System_String_o * UI_MultiplayerFilterPopup__get_Title(UI_MultiplayerFilterPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184347444 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Filters");
    Il2CppMethodInitialized_184347444 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("Filters",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.MultiplayerFilterPopup$$get_VerticalPadding
// il2cpp: int32_t UI_MultiplayerFilterPopup__get_VerticalPadding (UI_MultiplayerFilterPopup_o* __this, const MethodInfo* method);
// 0x180847040

int32_t
UI_MultiplayerFilterPopup__get_VerticalPadding(UI_MultiplayerFilterPopup_o* __this, MethodInfo* method)

{
  return 0x14;
}


// UI.MultiplayerFilterPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_MultiplayerFilterPopup__get_HorizontalPadding (UI_MultiplayerFilterPopup_o* __this, const MethodInfo* method);
// 0x180847040

int32_t
UI_MultiplayerFilterPopup__get_HorizontalPadding(UI_MultiplayerFilterPopup_o* __this, MethodInfo* method)

{
  return 0x14;
}


// UI.MultiplayerFilterPopup$$get_VerticalSpacing
// il2cpp: float UI_MultiplayerFilterPopup__get_VerticalSpacing (UI_MultiplayerFilterPopup_o* __this, const MethodInfo* method);
// 0x182168bc0

float
UI_MultiplayerFilterPopup__get_VerticalSpacing(UI_MultiplayerFilterPopup_o* __this, MethodInfo* method)

{
  return 20.0;
}


// UI.MultiplayerFilterPopup$$get_Width
// il2cpp: float UI_MultiplayerFilterPopup__get_Width (UI_MultiplayerFilterPopup_o* __this, const MethodInfo* method);
// 0x1822915e0

float UI_MultiplayerFilterPopup__get_Width(UI_MultiplayerFilterPopup_o *__this,MethodInfo *method)

{
  return 370.0;
}


// UI.MultiplayerFilterPopup$$get_Height
// il2cpp: float UI_MultiplayerFilterPopup__get_Height (UI_MultiplayerFilterPopup_o* __this, const MethodInfo* method);
// 0x182291570

float UI_MultiplayerFilterPopup__get_Height(UI_MultiplayerFilterPopup_o *__this,MethodInfo *method)

{
  return 245.0;
}


// UI.MultiplayerFilterPopup$$get_PanelAlignment
// il2cpp: int32_t UI_MultiplayerFilterPopup__get_PanelAlignment (UI_MultiplayerFilterPopup_o* __this, const MethodInfo* method);
// 0x180846f40

int32_t
UI_MultiplayerFilterPopup__get_PanelAlignment(UI_MultiplayerFilterPopup_o* __this, MethodInfo* method)

{
  return 4;
}


// UI.MultiplayerFilterPopup$$Setup
// il2cpp: void UI_MultiplayerFilterPopup__Setup (UI_MultiplayerFilterPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x182291120
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822911de: mov esi, r15d
// asm:   0x1822911e1: jmp 0x182291216

void UI_MultiplayerFilterPopup__Setup
               (UI_MultiplayerFilterPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Transform_o *pUVar2;
  System_Threading_CancellationTokenSource_o *setting;
  Settings_BaseSetting_o *setting_00;
  System_String_o *category;
  int32_t fontSize;
  System_String_o *pSVar3;
  UI_ElementStyle_o *__this_00;
  UI_ElementStyle_o *__this_01;
  UnityEngine_Events_UnityAction_o *__this_02;
  System_String_o *pSVar4;
  UI_BasePanel_o *pUVar5;
  
  if (Il2CppMethodInitialized_184347445 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MultiplayerFilterPopup_Setup_b__14_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MultiplayerRoomListPopup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu");
    il2cpp_codegen_initialize_runtime_metadata(&"Confirm");
    il2cpp_codegen_initialize_runtime_metadata(&"MultiplayerFilterPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowFull");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowPassword");
    Il2CppMethodInitialized_184347445 = '\x01';
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,(MethodInfo *)0x0);
  category = "MainMenu";
  pSVar4 = "MultiplayerFilterPopup";
  pUVar5 = (UI_BasePanel_o *)0x0;
  if (parent != (UI_BasePanel_o *)0x0) {
    bVar1 = (TypeInfo_UI_MultiplayerRoomListPopup->_2).typeHierarchyDepth;
    if (((parent->klass->_2).typeHierarchyDepth < bVar1) ||
       (pUVar5 = parent,
       (parent->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
       (Il2CppClass *)TypeInfo_UI_MultiplayerRoomListPopup)) {
      il2cpp_codegen_raise_invalid_cast_exception(parent);
    }
  }
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar3 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar3,(MethodInfo *)0x0);
  pSVar3 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x18,240.0,20.0,pSVar3,(MethodInfo *)0x0);
  pUVar2 = (__this->fields).BottomBar;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar3 = UI_UIManager__GetLocaleCommon("Confirm",(MethodInfo *)0x0);
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_02,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_MultiplayerFilterPopup_Setup_b__14_0,(MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar2,__this_00,pSVar3,0.0,__this_02,(MethodInfo *)0x0);
  if (pUVar5 == (UI_BasePanel_o *)0x0) {
    ThrowNullReferenceException();
  }
  pUVar2 = (__this->fields).SinglePanel;
  setting = (*(uint64_t *)((char *)pUVar5 + 0xe8));
  pSVar3 = UI_UIManager__GetLocale
                     (category,pSVar4,"ShowFull","","",
                      (MethodInfo *)0x0);
  UI_ElementFactory__CreateToggleSetting
            (pUVar2,__this_01,(Settings_BaseSetting_o *)setting,pSVar3,"",30.0,30.0,
             (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
  pUVar2 = (__this->fields).SinglePanel;
  setting_00 = (Settings_BaseSetting_o *)(*(uint64_t *)((char *)pUVar5 + 0xf0));
  pSVar4 = UI_UIManager__GetLocale
                     (category,pSVar4,"ShowPassword","","",
                      (MethodInfo *)0x0);
  UI_ElementFactory__CreateToggleSetting
            (pUVar2,__this_01,setting_00,pSVar4,"",30.0,30.0,
             (UnityEngine_Events_UnityAction_o *)0x0,(MethodInfo *)0x0);
  return;
}


// UI.MultiplayerFilterPopup$$OnButtonClick
// il2cpp: void UI_MultiplayerFilterPopup__OnButtonClick (UI_MultiplayerFilterPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x182291060

void UI_MultiplayerFilterPopup__OnButtonClick
               (UI_MultiplayerFilterPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  UI_MultiplayerRoomListPopup_o *__this_00;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184347446 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MultiplayerRoomListPopup);
    il2cpp_codegen_initialize_runtime_metadata(&"Confirm");
    Il2CppMethodInitialized_184347446 = '\x01';
  }
  bVar2 = System_String__op_Equality(name,"Confirm",(MethodInfo *)0x0);
  if (bVar2) {
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    __this_00 = (UI_MultiplayerRoomListPopup_o *)(__this->fields).Parent;
    if (__this_00 == (UI_MultiplayerRoomListPopup_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = (TypeInfo_UI_MultiplayerRoomListPopup->_2).typeHierarchyDepth;
    if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
       ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_UI_MultiplayerRoomListPopup)) {
      il2cpp_codegen_raise_invalid_cast_exception(__this_00,TypeInfo_UI_MultiplayerRoomListPopup);
    }
    UI_MultiplayerRoomListPopup__RefreshList(__this_00,true,(MethodInfo *)0x0);
  }
  return;
}


// UI.MultiplayerFilterPopup$$.ctor
// il2cpp: void UI_MultiplayerFilterPopup___ctor (UI_MultiplayerFilterPopup_o* __this, const MethodInfo* method);
// 0x181dd9cd0

void
UI_MultiplayerFilterPopup___ctor(UI_MultiplayerFilterPopup_o* __this, MethodInfo* method)

{
  UI_PromptPopup___ctor((UI_ToolsPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MultiplayerFilterPopup$$<Setup>b__14_0
// il2cpp: void UI_MultiplayerFilterPopup___Setup_b__14_0 (UI_MultiplayerFilterPopup_o* __this, const MethodInfo* method);
// 0x182291490

void UI_MultiplayerFilterPopup___Setup_b__14_0(UI_MultiplayerFilterPopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  UI_MultiplayerRoomListPopup_o *__this_00;
  System_String_o *a;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184347447 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Confirm");
    Il2CppMethodInitialized_184347447 = '\x01';
  }
  a = "Confirm";
  if (Il2CppMethodInitialized_184347446 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MultiplayerRoomListPopup);
    il2cpp_codegen_initialize_runtime_metadata(&"Confirm");
    Il2CppMethodInitialized_184347446 = '\x01';
  }
  bVar2 = System_String__op_Equality(a,"Confirm",(MethodInfo *)0x0);
  if (bVar2) {
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    __this_00 = (UI_MultiplayerRoomListPopup_o *)(__this->fields).Parent;
    if (__this_00 == (UI_MultiplayerRoomListPopup_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = (TypeInfo_UI_MultiplayerRoomListPopup->_2).typeHierarchyDepth;
    if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
       ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_UI_MultiplayerRoomListPopup)) {
      il2cpp_codegen_raise_invalid_cast_exception(__this_00,TypeInfo_UI_MultiplayerRoomListPopup);
    }
    UI_MultiplayerRoomListPopup__RefreshList(__this_00,true,(MethodInfo *)0x0);
  }
  return;
}


