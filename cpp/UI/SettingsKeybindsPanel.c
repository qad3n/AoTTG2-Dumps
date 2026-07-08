// Type: UI.SettingsKeybindsPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/SettingsKeybindsPanel.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/SettingsPopup/SettingsKeybindsPanel.cs  [CHANGED since prior version]
// --------------------------------

// UI.SettingsKeybindsPanel$$get_CategoryPanel
// il2cpp: bool UI_SettingsKeybindsPanel__get_CategoryPanel (UI_SettingsKeybindsPanel_o* __this, const MethodInfo* method);
// 0x4131c20

bool_conflict
UI_SettingsKeybindsPanel__get_CategoryPanel(UI_SettingsKeybindsPanel_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.SettingsKeybindsPanel$$get_DefaultCategoryPanel
// il2cpp: System_String_o* UI_SettingsKeybindsPanel__get_DefaultCategoryPanel (UI_SettingsKeybindsPanel_o* __this, const MethodInfo* method);
// 0x4131c30

System_String_o *
UI_SettingsKeybindsPanel__get_DefaultCategoryPanel
          (UI_SettingsKeybindsPanel_o *__this,MethodInfo *method)

{
  if (DAT_05704947 == '\0') {
    il2cpp_init_method_metadata(&"General");
    DAT_05704947 = '\x01';
  }
  return "General";
}


// UI.SettingsKeybindsPanel$$CreateCategoryDropdown
// il2cpp: void UI_SettingsKeybindsPanel__CreateCategoryDropdown (UI_SettingsKeybindsPanel_o* __this, UnityEngine_Transform_o* panel, const MethodInfo* method);
// 0x4131360

void UI_SettingsKeybindsPanel__CreateCategoryDropdown
               (UI_SettingsKeybindsPanel_o *__this,UnityEngine_Transform_o *panel,MethodInfo *method
               )

{
  Settings_StringSetting_o *setting;
  System_String_array *options;
  System_String_o *themePanel;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *onDropdownOptionSelect;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704948 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_Void__CreateCategoryDropdown_b__5_0);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Category");
    il2cpp_init_method_metadata(&"");
    DAT_05704948 = '\x01';
    method = extraout_RDX;
  }
  themePanel = (System_String_o *)
               (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                         (__this,(__this->klass->vtable)._4_get_ThemePanel.method,method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x18,140.0,20.0,themePanel,(MethodInfo *)0x0);
  setting = (__this->fields)._currentCategoryPanelName;
  options = (__this->fields)._categories;
  onDropdownOptionSelect = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateDropdownSetting
            (panel,__this_00,(Settings_BaseSetting_o *)setting,"Category",options,"",
             260.0,40.0,300.0,(System_Nullable_float__o)0x0,onDropdownOptionSelect,(MethodInfo *)0x0
            );
  return;
}


// UI.SettingsKeybindsPanel$$RegisterCategoryPanels
// il2cpp: void UI_SettingsKeybindsPanel__RegisterCategoryPanels (UI_SettingsKeybindsPanel_o* __this, const MethodInfo* method);
// 0x4131c60

void UI_SettingsKeybindsPanel__RegisterCategoryPanels
               (UI_SettingsKeybindsPanel_o *__this,MethodInfo *method)

{
  uint uVar1;
  System_String_array *pSVar2;
  System_String_o *key;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_RuntimeTypeHandle_o handle;
  ulong uVar3;
  System_Type_o *value;
  ulong uVar4;
  
  if (DAT_05704949 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeRef_SettingsKeybindsDefaultPanel);
    DAT_05704949 = '\x01';
  }
  pSVar2 = (__this->fields)._categories;
  if (pSVar2 != (System_String_array *)0x0) {
    if (0 < (int)pSVar2->max_length) {
      uVar3 = pSVar2->max_length & 0xffffffff;
      uVar4 = 0;
      do {
        handle.fields.value = TypeRef_SettingsKeybindsDefaultPanel.fields.value;
        if (uVar3 <= uVar4) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        key = pSVar2->m_Items[uVar4];
        __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                    (__this->fields)._categoryPanelTypes;
        if (*(int *)(DAT_05711100 + 0xe4) == 0) {
          il2cpp_init_class();
        }
        value = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
        if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
        goto LAB_04131d31;
        System_Collections_Generic_Dictionary<object__object>__Add
                  (__this_00,(Il2CppObject *)key,(Il2CppObject *)value,MethodInfo_Void_Add);
        uVar4 = uVar4 + 1;
        uVar1 = (uint)pSVar2->max_length;
        uVar3 = (ulong)uVar1;
      } while ((long)uVar4 < (long)(int)uVar1);
    }
    return;
  }
LAB_04131d31:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SettingsKeybindsPanel$$.ctor
// il2cpp: void UI_SettingsKeybindsPanel___ctor (UI_SettingsKeybindsPanel_o* __this, const MethodInfo* method);
// 0x4131d40

void UI_SettingsKeybindsPanel___ctor(UI_SettingsKeybindsPanel_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  
  if (DAT_0570494a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&"General");
    il2cpp_init_method_metadata(&"AnnieShifter");
    il2cpp_init_method_metadata(&"Human");
    il2cpp_init_method_metadata(&"Titan");
    il2cpp_init_method_metadata(&"ErenShifter");
    il2cpp_init_method_metadata(&"Interaction");
    DAT_0570494a = '\x01';
  }
  pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,6);
  if (pSVar1 != (System_String_array *)0x0) {
    if ((int)pSVar1->max_length != 0) {
      pSVar1->m_Items[0] = "General";
      il2cpp_runtime_glue(pSVar1->m_Items);
      if (1 < (uint)pSVar1->max_length) {
        pSVar1->m_Items[1] = "Interaction";
        il2cpp_runtime_glue(pSVar1->m_Items + 1);
        if (2 < (uint)pSVar1->max_length) {
          pSVar1->m_Items[2] = "Human";
          il2cpp_runtime_glue(pSVar1->m_Items + 2);
          if (3 < (uint)pSVar1->max_length) {
            pSVar1->m_Items[3] = "Titan";
            il2cpp_runtime_glue(pSVar1->m_Items + 3);
            if (4 < (uint)pSVar1->max_length) {
              pSVar1->m_Items[4] = "AnnieShifter";
              il2cpp_runtime_glue(pSVar1->m_Items + 4);
              if (5 < (uint)pSVar1->max_length) {
                pSVar1->m_Items[5] = "ErenShifter";
                il2cpp_runtime_glue(pSVar1->m_Items + 5);
                (__this->fields)._categories = pSVar1;
                il2cpp_runtime_glue(&(__this->fields)._categories);
                UI_CategoryPanel___ctor((UI_CategoryPanel_o *)__this,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SettingsKeybindsPanel$$<CreateCategoryDropdown>b__5_0
// il2cpp: void UI_SettingsKeybindsPanel___CreateCategoryDropdown_b__5_0 (UI_SettingsKeybindsPanel_o* __this, const MethodInfo* method);
// 0x4131ec0

void UI_SettingsKeybindsPanel__<CreateCategoryDropdown>b__5_0
               (UI_SettingsKeybindsPanel_o *__this,MethodInfo *method)

{
  UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  return;
}


