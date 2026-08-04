// Type: UI.LeaderboardPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/LeaderboardPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/LeaderboardPopup.cs
// --------------------------------

// UI.LeaderboardPopup$$get_Title
// il2cpp: System_String_o* UI_LeaderboardPopup__get_Title (UI_LeaderboardPopup_o* __this, const MethodInfo* method);
// 0x4405590

System_String_o * UI_LeaderboardPopup__get_Title(UI_LeaderboardPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (g_data_057ae59b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"MainMenu");
    il2cpp_runtime_helper_023445d0(&"Title");
    il2cpp_runtime_helper_023445d0(&"LeaderboardPopup");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae59b = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("MainMenu","LeaderboardPopup","Title","","",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.LeaderboardPopup$$get_Width
// il2cpp: float UI_LeaderboardPopup__get_Width (UI_LeaderboardPopup_o* __this, const MethodInfo* method);
// 0x4405630

float UI_LeaderboardPopup__get_Width(UI_LeaderboardPopup_o *__this,MethodInfo *method)

{
  return 800.0;
}


// UI.LeaderboardPopup$$get_Height
// il2cpp: float UI_LeaderboardPopup__get_Height (UI_LeaderboardPopup_o* __this, const MethodInfo* method);
// 0x4405640

float UI_LeaderboardPopup__get_Height(UI_LeaderboardPopup_o *__this,MethodInfo *method)

{
  return 630.0;
}


// UI.LeaderboardPopup$$get_CategoryPanel
// il2cpp: bool UI_LeaderboardPopup__get_CategoryPanel (UI_LeaderboardPopup_o* __this, const MethodInfo* method);
// 0x4405650

bool_conflict UI_LeaderboardPopup__get_CategoryPanel(UI_LeaderboardPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.LeaderboardPopup$$get_DefaultCategoryPanel
// il2cpp: System_String_o* UI_LeaderboardPopup__get_DefaultCategoryPanel (UI_LeaderboardPopup_o* __this, const MethodInfo* method);
// 0x4405660

System_String_o *
UI_LeaderboardPopup__get_DefaultCategoryPanel(UI_LeaderboardPopup_o *__this,MethodInfo *method)

{
  if (g_data_057ae59c == '\0') {
    il2cpp_runtime_helper_023445d0(&"Default");
    g_data_057ae59c = '\x01';
  }
  return "Default";
}


// UI.LeaderboardPopup$$get_UseSound
// il2cpp: bool UI_LeaderboardPopup__get_UseSound (UI_LeaderboardPopup_o* __this, const MethodInfo* method);
// 0x4405690

bool_conflict UI_LeaderboardPopup__get_UseSound(UI_LeaderboardPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.LeaderboardPopup$$Setup
// il2cpp: void UI_LeaderboardPopup__Setup (UI_LeaderboardPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x44056a0

void UI_LeaderboardPopup__Setup(UI_LeaderboardPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *parent_00;
  int32_t fontSize;
  System_String_o *pSVar1;
  UI_ElementStyle_o *__this_00;
  UI_ElementStyle_o *__this_01;
  UnityEngine_Events_UnityAction_o *onClick;
  
  if (g_data_057ae59d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__14_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Back");
    g_data_057ae59d = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar1 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  pSVar1 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x18,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  parent_00 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
  onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(parent_00,__this_00,pSVar1,0.0,onClick,(MethodInfo *)0x0);
  return;
}


// UI.LeaderboardPopup$$RegisterCategoryPanels
// il2cpp: void UI_LeaderboardPopup__RegisterCategoryPanels (UI_LeaderboardPopup_o* __this, const MethodInfo* method);
// 0x4405820

void UI_LeaderboardPopup__RegisterCategoryPanels(UI_LeaderboardPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool_conflict bVar1;
  System_Type_o *value;
  System_String_o *a;
  System_RuntimeTypeHandle_o handle;
  
  if (g_data_057ae59e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeRef_LeaderboardDefaultPanel);
    il2cpp_runtime_helper_023445d0(&"Default");
    g_data_057ae59e = '\x01';
  }
  handle.fields.value = TypeRef_LeaderboardDefaultPanel.fields.value;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._categoryPanelTypes;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  a = (System_String_o *)0x0;
  value = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Add
              (__this_00,"Default",(Il2CppObject *)value,MethodInfo_Void_Add);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae59f == '\0') {
    il2cpp_runtime_helper_023445d0(&"Back");
    g_data_057ae59f = '\x01';
  }
  bVar1 = System_String__op_Equality(a,"Back",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    (**(code **)(*(long *)handle.fields.value + 0x298))
              (handle.fields.value,*(undefined8 *)(*(long *)handle.fields.value + 0x2a0));
    return;
  }
  return;
}


// UI.LeaderboardPopup$$OnButtonClick
// il2cpp: void UI_LeaderboardPopup__OnButtonClick (UI_LeaderboardPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x44058c0

void UI_LeaderboardPopup__OnButtonClick
               (UI_LeaderboardPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (g_data_057ae59f == '\0') {
    il2cpp_runtime_helper_023445d0(&"Back");
    g_data_057ae59f = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    return;
  }
  return;
}


// UI.LeaderboardPopup$$.ctor
// il2cpp: void UI_LeaderboardPopup___ctor (UI_LeaderboardPopup_o* __this, const MethodInfo* method);
// 0x4405930

void UI_LeaderboardPopup___ctor(UI_LeaderboardPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  
  if (g_data_057ae5a0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ae5a0 = '\x01';
  }
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar2,pSVar1,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).CurrentCategory = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).CurrentCategory,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar2,pSVar1,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).CurrentSubcategory = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).CurrentSubcategory);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.LeaderboardPopup$$<Setup>b__14_0
// il2cpp: void UI_LeaderboardPopup___Setup_b__14_0 (UI_LeaderboardPopup_o* __this, const MethodInfo* method);
// 0x4405a10

void UI_LeaderboardPopup___Setup_b__14_0(UI_LeaderboardPopup_o *__this,MethodInfo *method)

{
  System_String_o *a;
  bool_conflict bVar1;
  
  if (g_data_057ae5a1 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Back");
    g_data_057ae5a1 = '\x01';
  }
  a = "Back";
  if (g_data_057ae59f == '\0') {
    il2cpp_runtime_helper_023445d0(&"Back");
    g_data_057ae59f = '\x01';
  }
  bVar1 = System_String__op_Equality(a,"Back",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    return;
  }
  return;
}


