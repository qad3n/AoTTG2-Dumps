// Type: UI.LeaderboardPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/LeaderboardPopup.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/MainMenu/LeaderboardPopup.cs  [CHANGED since prior version]
// --------------------------------

// UI.LeaderboardPopup$$get_Title
// il2cpp: System_String_o* UI_LeaderboardPopup__get_Title (UI_LeaderboardPopup_o* __this, const MethodInfo* method);
// 0x40f1360

System_String_o * UI_LeaderboardPopup__get_Title(UI_LeaderboardPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (DAT_05704800 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"MainMenu");
    il2cpp_init_method_metadata(&"Title");
    il2cpp_init_method_metadata(&"LeaderboardPopup");
    il2cpp_init_method_metadata(&"");
    DAT_05704800 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("MainMenu","LeaderboardPopup","Title","","",
                      (MethodInfo *)0x0);
  return pSVar1;
}


// UI.LeaderboardPopup$$get_Width
// il2cpp: float UI_LeaderboardPopup__get_Width (UI_LeaderboardPopup_o* __this, const MethodInfo* method);
// 0x40f1400

float UI_LeaderboardPopup__get_Width(UI_LeaderboardPopup_o *__this,MethodInfo *method)

{
  return 800.0;
}


// UI.LeaderboardPopup$$get_Height
// il2cpp: float UI_LeaderboardPopup__get_Height (UI_LeaderboardPopup_o* __this, const MethodInfo* method);
// 0x40f1410

float UI_LeaderboardPopup__get_Height(UI_LeaderboardPopup_o *__this,MethodInfo *method)

{
  return 630.0;
}


// UI.LeaderboardPopup$$get_CategoryPanel
// il2cpp: bool UI_LeaderboardPopup__get_CategoryPanel (UI_LeaderboardPopup_o* __this, const MethodInfo* method);
// 0x40f1420

bool_conflict
UI_LeaderboardPopup__get_CategoryPanel(UI_LeaderboardPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.LeaderboardPopup$$get_DefaultCategoryPanel
// il2cpp: System_String_o* UI_LeaderboardPopup__get_DefaultCategoryPanel (UI_LeaderboardPopup_o* __this, const MethodInfo* method);
// 0x40f1430

System_String_o *
UI_LeaderboardPopup__get_DefaultCategoryPanel(UI_LeaderboardPopup_o *__this,MethodInfo *method)

{
  if (DAT_05704801 == '\0') {
    il2cpp_init_method_metadata(&"Default");
    DAT_05704801 = '\x01';
  }
  return "Default";
}


// UI.LeaderboardPopup$$get_UseSound
// il2cpp: bool UI_LeaderboardPopup__get_UseSound (UI_LeaderboardPopup_o* __this, const MethodInfo* method);
// 0x40f1460

bool_conflict UI_LeaderboardPopup__get_UseSound(UI_LeaderboardPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.LeaderboardPopup$$Setup
// il2cpp: void UI_LeaderboardPopup__Setup (UI_LeaderboardPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x40f1470

void UI_LeaderboardPopup__Setup
               (UI_LeaderboardPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *parent_00;
  int32_t fontSize;
  System_String_o *pSVar1;
  UI_ElementStyle_o *__this_00;
  UI_ElementStyle_o *__this_01;
  UnityEngine_Events_UnityAction_o *onClick;
  
  if (DAT_05704802 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__14_0);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Back");
    DAT_05704802 = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar1 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  pSVar1 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x18,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  parent_00 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
  onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(parent_00,__this_00,pSVar1,0.0,onClick,(MethodInfo *)0x0);
  return;
}


// UI.LeaderboardPopup$$RegisterCategoryPanels
// il2cpp: void UI_LeaderboardPopup__RegisterCategoryPanels (UI_LeaderboardPopup_o* __this, const MethodInfo* method);
// 0x40f15f0

void UI_LeaderboardPopup__RegisterCategoryPanels(UI_LeaderboardPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_RuntimeTypeHandle_o handle;
  System_Type_o *value;
  
  if (DAT_05704803 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeRef_LeaderboardDefaultPanel);
    il2cpp_init_method_metadata(&"Default");
    DAT_05704803 = '\x01';
  }
  handle.fields.value = TypeRef_LeaderboardDefaultPanel.fields.value;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields)._categoryPanelTypes;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object__object>__Add
              (__this_00,"Default",(Il2CppObject *)value,MethodInfo_Void_Add);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.LeaderboardPopup$$OnButtonClick
// il2cpp: void UI_LeaderboardPopup__OnButtonClick (UI_LeaderboardPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x40f1690

void UI_LeaderboardPopup__OnButtonClick
               (UI_LeaderboardPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (DAT_05704804 == '\0') {
    il2cpp_init_method_metadata(&"Back");
    DAT_05704804 = '\x01';
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
// 0x40f1700

void UI_LeaderboardPopup___ctor(UI_LeaderboardPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  
  if (DAT_05704805 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    DAT_05704805 = '\x01';
  }
  pSVar1 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar2,pSVar1,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).CurrentCategory = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).CurrentCategory,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar2,pSVar1,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).CurrentSubcategory = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).CurrentSubcategory);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.LeaderboardPopup$$<Setup>b__14_0
// il2cpp: void UI_LeaderboardPopup___Setup_b__14_0 (UI_LeaderboardPopup_o* __this, const MethodInfo* method);
// 0x40f17e0

void UI_LeaderboardPopup__<Setup>b__14_0(UI_LeaderboardPopup_o *__this,MethodInfo *method)

{
  System_String_o *a;
  bool_conflict bVar1;
  
  if (DAT_05704806 == '\0') {
    il2cpp_init_method_metadata(&"Back");
    DAT_05704806 = '\x01';
  }
  a = "Back";
  if (DAT_05704804 == '\0') {
    il2cpp_init_method_metadata(&"Back");
    DAT_05704804 = '\x01';
  }
  bVar1 = System_String__op_Equality(a,"Back",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    return;
  }
  return;
}


