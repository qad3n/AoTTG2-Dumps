// Type: UI.LeaderboardPopup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/LeaderboardPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/LeaderboardPopup.cs
// --------------------------------

// UI.LeaderboardPopup$$get_Title
// il2cpp: System_String_o* UI_LeaderboardPopup__get_Title (UI_LeaderboardPopup_o* __this, const MethodInfo* method);
// 0x18228d440

System_String_o * UI_LeaderboardPopup__get_Title(UI_LeaderboardPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_18434742c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu");
    il2cpp_codegen_initialize_runtime_metadata(&"Title");
    il2cpp_codegen_initialize_runtime_metadata(&"LeaderboardPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_18434742c = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("MainMenu","LeaderboardPopup","Title","",
                      "",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.LeaderboardPopup$$get_Width
// il2cpp: float UI_LeaderboardPopup__get_Width (UI_LeaderboardPopup_o* __this, const MethodInfo* method);
// 0x1821bb440

float
UI_LeaderboardPopup__get_Width(UI_LeaderboardPopup_o* __this, MethodInfo* method)

{
  return 800.0;
}


// UI.LeaderboardPopup$$get_Height
// il2cpp: float UI_LeaderboardPopup__get_Height (UI_LeaderboardPopup_o* __this, const MethodInfo* method);
// 0x18228d430

float
UI_LeaderboardPopup__get_Height(UI_LeaderboardPopup_o* __this, MethodInfo* method)

{
  return 630.0;
}


// UI.LeaderboardPopup$$get_CategoryPanel
// il2cpp: bool UI_LeaderboardPopup__get_CategoryPanel (UI_LeaderboardPopup_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_LeaderboardPopup__get_CategoryPanel(UI_LeaderboardPopup_o* __this, MethodInfo* method)

{
  return true;
}


// UI.LeaderboardPopup$$get_DefaultCategoryPanel
// il2cpp: System_String_o* UI_LeaderboardPopup__get_DefaultCategoryPanel (UI_LeaderboardPopup_o* __this, const MethodInfo* method);
// 0x18228d400

System_String_o *
UI_LeaderboardPopup__get_DefaultCategoryPanel(UI_LeaderboardPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434742d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Default");
    Il2CppMethodInitialized_18434742d = '\x01';
  }
  return "Default";
}


// UI.LeaderboardPopup$$get_UseSound
// il2cpp: bool UI_LeaderboardPopup__get_UseSound (UI_LeaderboardPopup_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_LeaderboardPopup__get_UseSound(UI_LeaderboardPopup_o* __this, MethodInfo* method)

{
  return true;
}


// UI.LeaderboardPopup$$Setup
// il2cpp: void UI_LeaderboardPopup__Setup (UI_LeaderboardPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x18228d0f0

void UI_LeaderboardPopup__Setup(UI_LeaderboardPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *parent_00;
  int32_t fontSize;
  System_String_o *pSVar1;
  UI_ElementStyle_o *__this_00;
  UI_ElementStyle_o *__this_01;
  UnityEngine_Events_UnityAction_o *__this_02;
  
  if (Il2CppMethodInitialized_18434742e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_LeaderboardPopup_Setup_b__14_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    Il2CppMethodInitialized_18434742e = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)(__this);
  pSVar1 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  pSVar1 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x18,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  parent_00 = (__this->fields).BottomBar;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_02,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_LeaderboardPopup_Setup_b__14_0,(MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(parent_00,__this_00,pSVar1,0.0,__this_02,(MethodInfo *)0x0);
  return;
}


// UI.LeaderboardPopup$$RegisterCategoryPanels
// il2cpp: void UI_LeaderboardPopup__RegisterCategoryPanels (UI_LeaderboardPopup_o* __this, const MethodInfo* method);
// 0x18228d050

void UI_LeaderboardPopup__RegisterCategoryPanels(UI_LeaderboardPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppType *handle;
  System_Type_o *value;
  
  if (Il2CppMethodInitialized_18434742f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Type_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UI_LeaderboardDefaultPanel);
    il2cpp_codegen_initialize_runtime_metadata(&"Default");
    Il2CppMethodInitialized_18434742f = '\x01';
  }
  handle = TypeRef_UI_LeaderboardDefaultPanel;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._categoryPanelTypes;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  value = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Add
              (__this_00,(Il2CppObject *)"Default",(Il2CppObject *)value,
               (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Type_Add);
    return;
  }
  ThrowNullReferenceException();
}


// UI.LeaderboardPopup$$OnButtonClick
// il2cpp: void UI_LeaderboardPopup__OnButtonClick (UI_LeaderboardPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x18228cff0

void UI_LeaderboardPopup__OnButtonClick
               (UI_LeaderboardPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184347430 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    Il2CppMethodInitialized_184347430 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
  if (bVar1) {
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  }
  return;
}


// UI.LeaderboardPopup$$.ctor
// il2cpp: void UI_LeaderboardPopup___ctor (UI_LeaderboardPopup_o* __this, const MethodInfo* method);
// 0x18228d320

void UI_LeaderboardPopup___ctor(UI_LeaderboardPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  
  if (Il2CppMethodInitialized_184347431 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    Il2CppMethodInitialized_184347431 = '\x01';
  }
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_1f27ee0(pSVar2,pSVar1,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).CurrentCategory = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CurrentCategory,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_1f27ee0(pSVar2,pSVar1,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).CurrentSubcategory = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CurrentSubcategory,pSVar2);
  UI_BasePopup___ctor((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.LeaderboardPopup$$<Setup>b__14_0
// il2cpp: void UI_LeaderboardPopup___Setup_b__14_0 (UI_LeaderboardPopup_o* __this, const MethodInfo* method);
// 0x18228d290

void UI_LeaderboardPopup___Setup_b__14_0(UI_LeaderboardPopup_o *__this,MethodInfo *method)

{
  System_String_o *a;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184347432 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    Il2CppMethodInitialized_184347432 = '\x01';
  }
  a = "Back";
  if (Il2CppMethodInitialized_184347430 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    Il2CppMethodInitialized_184347430 = '\x01';
  }
  bVar1 = System_String__op_Equality(a,"Back",(MethodInfo *)0x0);
  if (bVar1) {
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  }
  return;
}


