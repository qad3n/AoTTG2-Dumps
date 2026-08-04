// Type: UI.SettingsKeybindsPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/SettingsKeybindsPanel.cs
// Prior real C# source (older reference): Assets/Scripts/UI/SettingsPopup/SettingsKeybindsPanel.cs
// --------------------------------

// UI.SettingsKeybindsPanel$$get_CategoryPanel
// il2cpp: bool UI_SettingsKeybindsPanel__get_CategoryPanel (UI_SettingsKeybindsPanel_o* __this, const MethodInfo* method);
// 0x4446ff0

bool_conflict
UI_SettingsKeybindsPanel__get_CategoryPanel(UI_SettingsKeybindsPanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.SettingsKeybindsPanel$$get_DefaultCategoryPanel
// il2cpp: System_String_o* UI_SettingsKeybindsPanel__get_DefaultCategoryPanel (UI_SettingsKeybindsPanel_o* __this, const MethodInfo* method);
// 0x4447000

System_String_o *
UI_SettingsKeybindsPanel__get_DefaultCategoryPanel(UI_SettingsKeybindsPanel_o *__this,MethodInfo *method)

{
  if (g_data_057ae6ea == '\0') {
    il2cpp_runtime_helper_023445d0(&"General");
    g_data_057ae6ea = '\x01';
  }
  return "General";
}


// UI.SettingsKeybindsPanel$$CreateCategoryDropdown
// il2cpp: void UI_SettingsKeybindsPanel__CreateCategoryDropdown (UI_SettingsKeybindsPanel_o* __this, UnityEngine_Transform_o* panel, const MethodInfo* method);
// 0x4446730

void UI_SettingsKeybindsPanel__CreateCategoryDropdown
               (UI_SettingsKeybindsPanel_o *__this,UnityEngine_Transform_o *panel,MethodInfo *method)

{
  Settings_StringSetting_o *setting;
  System_String_array *options;
  System_String_o *themePanel;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *onDropdownOptionSelect;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ae6eb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreateCategoryDropdown_b__5_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Category");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae6eb = '\x01';
    method = extraout_RDX;
  }
  themePanel = (System_String_o *)
               (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                         (__this,(__this->klass->vtable)._4_get_ThemePanel.method,method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x18,140.0,20.0,themePanel,(MethodInfo *)0x0);
  setting = (__this->fields)._currentCategoryPanelName;
  options = (__this->fields)._categories;
  onDropdownOptionSelect = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateDropdownSetting
            (panel,__this_00,(Settings_BaseSetting_o *)setting,"Category",options,"",260.0,40.0,
             300.0,(System_Nullable_float__o)0x0,onDropdownOptionSelect,(MethodInfo *)0x0);
  return;
}


// UI.SettingsKeybindsPanel$$RegisterCategoryPanels
// il2cpp: void UI_SettingsKeybindsPanel__RegisterCategoryPanels (UI_SettingsKeybindsPanel_o* __this, const MethodInfo* method);
// 0x4447030

void UI_SettingsKeybindsPanel__RegisterCategoryPanels(UI_SettingsKeybindsPanel_o *__this,MethodInfo *method)

{
  uint uVar1;
  System_String_o *key;
  ulong uVar2;
  System_Type_o *value;
  System_String_array *pSVar3;
  ulong uVar4;
  UI_SettingsKeybindsPanel_o *__this_00;
  System_RuntimeTypeHandle_o handle;
  UI_BasePanel_o *__this_01;
  
  __this_00 = __this;
  if (g_data_057ae6ec == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    __this_00 = (UI_SettingsKeybindsPanel_o *)&TypeRef_SettingsKeybindsDefaultPanel;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae6ec = '\x01';
  }
  pSVar3 = (__this->fields)._categories;
  handle.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)__this_00;
  if (pSVar3 != (System_String_array *)0x0) {
    if (0 < (int)pSVar3->max_length) {
      uVar2 = pSVar3->max_length & 0xffffffff;
      uVar4 = 0;
      do {
        handle.fields.value = TypeRef_SettingsKeybindsDefaultPanel.fields.value;
        if (uVar2 <= uVar4) {
          il2cpp_runtime_helper_022b2ca0();
          handle.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)__this_00;
          goto label_04447101;
        }
        key = pSVar3->m_Items[uVar4];
        __this_00 = (UI_SettingsKeybindsPanel_o *)(__this->fields)._categoryPanelTypes;
        if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        value = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
        if (__this_00 == (UI_SettingsKeybindsPanel_o *)0x0) goto label_04447101;
        System_Collections_Generic_Dictionary_object__object___Add
                  ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,(Il2CppObject *)key,
                   (Il2CppObject *)value,MethodInfo_Void_Add);
        uVar4 = uVar4 + 1;
        uVar1 = (uint)pSVar3->max_length;
        uVar2 = (ulong)uVar1;
      } while ((long)uVar4 < (long)(int)uVar1);
    }
    return;
  }
label_04447101:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae6ed == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"General");
    il2cpp_runtime_helper_023445d0(&"AnnieShifter");
    il2cpp_runtime_helper_023445d0(&"Human");
    il2cpp_runtime_helper_023445d0(&"Titan");
    il2cpp_runtime_helper_023445d0(&"ErenShifter");
    il2cpp_runtime_helper_023445d0(&"Interaction");
    g_data_057ae6ed = '\x01';
  }
  __this_01 = TypeInfo_string;
  pSVar3 = (System_String_array *)il2cpp_runtime_helper_022b2a40();
  if (pSVar3 != (System_String_array *)0x0) {
    if ((int)pSVar3->max_length != 0) {
      __this_01 = (UI_BasePanel_o *)pSVar3->m_Items;
      pSVar3->m_Items[0] = "General";
      il2cpp_runtime_helper_022b4080();
      if (1 < (uint)pSVar3->max_length) {
        __this_01 = (UI_BasePanel_o *)(pSVar3->m_Items + 1);
        pSVar3->m_Items[1] = "Interaction";
        il2cpp_runtime_helper_022b4080();
        if (2 < (uint)pSVar3->max_length) {
          __this_01 = (UI_BasePanel_o *)(pSVar3->m_Items + 2);
          pSVar3->m_Items[2] = "Human";
          il2cpp_runtime_helper_022b4080();
          if (3 < (uint)pSVar3->max_length) {
            __this_01 = (UI_BasePanel_o *)(pSVar3->m_Items + 3);
            pSVar3->m_Items[3] = "Titan";
            il2cpp_runtime_helper_022b4080();
            if (4 < (uint)pSVar3->max_length) {
              __this_01 = (UI_BasePanel_o *)(pSVar3->m_Items + 4);
              pSVar3->m_Items[4] = "AnnieShifter";
              il2cpp_runtime_helper_022b4080();
              if (5 < (uint)pSVar3->max_length) {
                pSVar3->m_Items[5] = "ErenShifter";
                il2cpp_runtime_helper_022b4080(pSVar3->m_Items + 5);
                (((UI_SettingsKeybindsPanel_o *)handle.fields.value)->fields)._categories = pSVar3;
                il2cpp_runtime_helper_022b4080(&(((UI_SettingsKeybindsPanel_o *)handle.fields.value)->fields)._categories)
                ;
                UI_CategoryPanel___ctor((UI_CategoryPanel_o *)handle.fields.value,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  UI_BasePanel__RebuildCategoryPanel(__this_01,(MethodInfo *)0x0);
  return;
}


// UI.SettingsKeybindsPanel$$.ctor
// il2cpp: void UI_SettingsKeybindsPanel___ctor (UI_SettingsKeybindsPanel_o* __this, const MethodInfo* method);
// 0x4447110

void UI_SettingsKeybindsPanel___ctor(UI_SettingsKeybindsPanel_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  UI_BasePanel_o *__this_00;
  
  if (g_data_057ae6ed == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"General");
    il2cpp_runtime_helper_023445d0(&"AnnieShifter");
    il2cpp_runtime_helper_023445d0(&"Human");
    il2cpp_runtime_helper_023445d0(&"Titan");
    il2cpp_runtime_helper_023445d0(&"ErenShifter");
    il2cpp_runtime_helper_023445d0(&"Interaction");
    g_data_057ae6ed = '\x01';
  }
  __this_00 = TypeInfo_string;
  pSVar1 = (System_String_array *)il2cpp_runtime_helper_022b2a40();
  if (pSVar1 != (System_String_array *)0x0) {
    if ((int)pSVar1->max_length != 0) {
      __this_00 = (UI_BasePanel_o *)pSVar1->m_Items;
      pSVar1->m_Items[0] = "General";
      il2cpp_runtime_helper_022b4080();
      if (1 < (uint)pSVar1->max_length) {
        __this_00 = (UI_BasePanel_o *)(pSVar1->m_Items + 1);
        pSVar1->m_Items[1] = "Interaction";
        il2cpp_runtime_helper_022b4080();
        if (2 < (uint)pSVar1->max_length) {
          __this_00 = (UI_BasePanel_o *)(pSVar1->m_Items + 2);
          pSVar1->m_Items[2] = "Human";
          il2cpp_runtime_helper_022b4080();
          if (3 < (uint)pSVar1->max_length) {
            __this_00 = (UI_BasePanel_o *)(pSVar1->m_Items + 3);
            pSVar1->m_Items[3] = "Titan";
            il2cpp_runtime_helper_022b4080();
            if (4 < (uint)pSVar1->max_length) {
              __this_00 = (UI_BasePanel_o *)(pSVar1->m_Items + 4);
              pSVar1->m_Items[4] = "AnnieShifter";
              il2cpp_runtime_helper_022b4080();
              if (5 < (uint)pSVar1->max_length) {
                pSVar1->m_Items[5] = "ErenShifter";
                il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 5);
                (__this->fields)._categories = pSVar1;
                il2cpp_runtime_helper_022b4080(&(__this->fields)._categories);
                UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  UI_BasePanel__RebuildCategoryPanel(__this_00,(MethodInfo *)0x0);
  return;
}


// UI.SettingsKeybindsPanel$$<CreateCategoryDropdown>b__5_0
// il2cpp: void UI_SettingsKeybindsPanel___CreateCategoryDropdown_b__5_0 (UI_SettingsKeybindsPanel_o* __this, const MethodInfo* method);
// 0x4447290

void UI_SettingsKeybindsPanel___CreateCategoryDropdown_b__5_0
               (UI_SettingsKeybindsPanel_o *__this,MethodInfo *method)

{
  UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  return;
}


