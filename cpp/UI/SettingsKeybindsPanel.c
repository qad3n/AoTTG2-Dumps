// Type: UI.SettingsKeybindsPanel
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/SettingsKeybindsPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/SettingsPopup/SettingsKeybindsPanel.cs
// --------------------------------

// UI.SettingsKeybindsPanel$$get_CategoryPanel
// il2cpp: bool UI_SettingsKeybindsPanel__get_CategoryPanel (UI_SettingsKeybindsPanel_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_SettingsKeybindsPanel__get_CategoryPanel(UI_SettingsKeybindsPanel_o* __this, MethodInfo* method)

{
  return true;
}


// UI.SettingsKeybindsPanel$$get_DefaultCategoryPanel
// il2cpp: System_String_o* UI_SettingsKeybindsPanel__get_DefaultCategoryPanel (UI_SettingsKeybindsPanel_o* __this, const MethodInfo* method);
// 0x1822e5110

System_String_o *
UI_SettingsKeybindsPanel__get_DefaultCategoryPanel(UI_SettingsKeybindsPanel_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434762d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"General");
    Il2CppMethodInitialized_18434762d = '\x01';
  }
  return "General";
}


// UI.SettingsKeybindsPanel$$CreateCategoryDropdown
// il2cpp: void UI_SettingsKeybindsPanel__CreateCategoryDropdown (UI_SettingsKeybindsPanel_o* __this, UnityEngine_Transform_o* panel, const MethodInfo* method);
// 0x1822e4d60

void UI_SettingsKeybindsPanel__CreateCategoryDropdown
               (UI_SettingsKeybindsPanel_o *__this,UnityEngine_Transform_o *panel,MethodInfo *method)

{
  Settings_StringSetting_o *setting;
  System_String_array *options;
  System_String_o *themePanel;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *__this_01;
  
  if (Il2CppMethodInitialized_18434762e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_SettingsKeybindsPanel_CreateCategoryDropdown_b__5_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Category");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_18434762e = '\x01';
  }
  themePanel = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                         (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x18,140.0,20.0,themePanel,(MethodInfo *)0x0);
  setting = (__this->fields)._currentCategoryPanelName;
  options = (__this->fields)._categories;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_01,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_SettingsKeybindsPanel_CreateCategoryDropdown_b__5_0,(MethodInfo *)0x0);
  UI_ElementFactory__CreateDropdownSetting
            (panel,__this_00,(Settings_BaseSetting_o *)setting,"Category",options,
             "",260.0,40.0,300.0,(System_Nullable_float__o)0x0,__this_01,
             (System_Int32_array *)0x0,(MethodInfo *)0x0);
  return;
}


// UI.SettingsKeybindsPanel$$RegisterCategoryPanels
// il2cpp: void UI_SettingsKeybindsPanel__RegisterCategoryPanels (UI_SettingsKeybindsPanel_o* __this, const MethodInfo* method);
// 0x1822e4ec0

void UI_SettingsKeybindsPanel__RegisterCategoryPanels(UI_SettingsKeybindsPanel_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_String_o *key;
  Il2CppType *handle;
  System_Type_o *value;
  uint uVar2;
  
  if (Il2CppMethodInitialized_18434762f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Type_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UI_SettingsKeybindsDefaultPanel);
    Il2CppMethodInitialized_18434762f = '\x01';
  }
  pSVar1 = (__this->fields)._categories;
  if (pSVar1 != (System_String_array *)0x0) {
    uVar2 = 0;
    while( true ) {
      handle = TypeRef_UI_SettingsKeybindsDefaultPanel;
      if ((int)pSVar1->max_length <= (int)uVar2) {
        return;
      }
      if ((uint)pSVar1->max_length <= uVar2) {
        ThrowIndexOutOfRangeException();
      }
      __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                  (__this->fields)._categoryPanelTypes;
      key = pSVar1->m_Items[(int)uVar2];
      if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_184354ea0);
      }
      value = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
      if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
      System_Collections_Generic_Dictionary_object__object___Add
                (__this_00,(Il2CppObject *)key,(Il2CppObject *)value,
                 (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Type_Add);
      uVar2 = uVar2 + 1;
    }
  }
  ThrowNullReferenceException();
}


// UI.SettingsKeybindsPanel$$.ctor
// il2cpp: void UI_SettingsKeybindsPanel___ctor (UI_SettingsKeybindsPanel_o* __this, const MethodInfo* method);
// 0x1822e4fa0

void UI_SettingsKeybindsPanel___ctor(UI_SettingsKeybindsPanel_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_array *value;
  
  if (Il2CppMethodInitialized_184347630 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"General");
    il2cpp_codegen_initialize_runtime_metadata(&"AnnieShifter");
    il2cpp_codegen_initialize_runtime_metadata(&"Human");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan");
    il2cpp_codegen_initialize_runtime_metadata(&"ErenShifter");
    il2cpp_codegen_initialize_runtime_metadata(&"Interaction");
    Il2CppMethodInitialized_184347630 = '\x01';
  }
  value = (System_String_array *)SZArrayNew(TypeInfo_string_array,6);
  pSVar1 = "General";
  if (value != (System_String_array *)0x0) {
    if ((int)value->max_length != 0) {
      value->m_Items[0] = "General";
      Il2CppCodeGenWriteBarrier(value->m_Items,pSVar1);
      pSVar1 = "Interaction";
      if (1 < (uint)value->max_length) {
        value->m_Items[1] = "Interaction";
        Il2CppCodeGenWriteBarrier(value->m_Items + 1,pSVar1);
        pSVar1 = "Human";
        if (2 < (uint)value->max_length) {
          value->m_Items[2] = "Human";
          Il2CppCodeGenWriteBarrier(value->m_Items + 2,pSVar1);
          pSVar1 = "Titan";
          if (3 < (uint)value->max_length) {
            value->m_Items[3] = "Titan";
            Il2CppCodeGenWriteBarrier(value->m_Items + 3,pSVar1);
            pSVar1 = "AnnieShifter";
            if (4 < (uint)value->max_length) {
              value->m_Items[4] = "AnnieShifter";
              Il2CppCodeGenWriteBarrier(value->m_Items + 4,pSVar1);
              pSVar1 = "ErenShifter";
              if (5 < (uint)value->max_length) {
                value->m_Items[5] = "ErenShifter";
                Il2CppCodeGenWriteBarrier(value->m_Items + 5,pSVar1);
                (__this->fields)._categories = value;
                Il2CppCodeGenWriteBarrier(&(__this->fields)._categories,value);
                UI_CategoryPanel___ctor((UI_TopLeftHUD_o *)__this,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// UI.SettingsKeybindsPanel$$<CreateCategoryDropdown>b__5_0
// il2cpp: void UI_SettingsKeybindsPanel___CreateCategoryDropdown_b__5_0 (UI_SettingsKeybindsPanel_o* __this, const MethodInfo* method);
// 0x18229a0d0

void UI_SettingsKeybindsPanel___CreateCategoryDropdown_b__5_0
               (UI_SettingsKeybindsPanel_o *__this,MethodInfo *method)

{
  UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  return;
}


