// Type: UI.MobileLayoutLocalizedDropdownSettingElement
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp_body_deref/Scripts/UI/MobileLayoutLocalizedDropdownSettingElement.cs
// Prior real C# source: none
// --------------------------------

// UI.MobileLayoutLocalizedDropdownSettingElement$$SetupLocalized
// il2cpp: void UI_MobileLayoutLocalizedDropdownSettingElement__SetupLocalized (UI_MobileLayoutLocalizedDropdownSettingElement_o* __this, Settings_BaseSetting_o* setting, UI_ElementStyle_o* style, System_String_o* title, System_String_array* options, System_Func_string__string__o* optionLabel, System_String_o* tooltip, float elementWidth, float elementHeight, float optionsWidth, float maxScrollHeight, UnityEngine_Events_UnityAction_o* onDropdownOptionSelect, const MethodInfo* method);
// 0x5ca87b0

void UI_MobileLayoutLocalizedDropdownSettingElement__SetupLocalized
               (UI_MobileLayoutLocalizedDropdownSettingElement_o *__this,Settings_BaseSetting_o *setting,
               UI_ElementStyle_o *style,System_String_o *title,System_String_array *options,
               System_Func_string__string__o *optionLabel,System_String_o *tooltip,float elementWidth,
               float elementHeight,float optionsWidth,float maxScrollHeight,
               UnityEngine_Events_UnityAction_o *onDropdownOptionSelect,MethodInfo *method)

{
  (__this->fields)._optionLabel = optionLabel;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._optionLabel);
  (*(__this->klass->vtable)._7_Setup.methodPtr)
            (__this,setting,style,title,options,tooltip,elementWidth,elementHeight,optionsWidth,
             maxScrollHeight,onDropdownOptionSelect,(System_Int32_array *)0x0,
             (__this->klass->vtable)._7_Setup.method);
  UI_MobileLayoutLocalizedDropdownSettingElement__RelabelOptions(__this,(MethodInfo *)setting);
  (*(__this->klass->vtable)._6_SyncElement.methodPtr)(__this,(__this->klass->vtable)._6_SyncElement.method);
  return;
}


// UI.MobileLayoutLocalizedDropdownSettingElement$$OnDropdownOptionClick
// il2cpp: void UI_MobileLayoutLocalizedDropdownSettingElement__OnDropdownOptionClick (UI_MobileLayoutLocalizedDropdownSettingElement_o* __this, System_String_o* option, int32_t index, const MethodInfo* method);
// 0x5cb1410

void UI_MobileLayoutLocalizedDropdownSettingElement__OnDropdownOptionClick
               (UI_MobileLayoutLocalizedDropdownSettingElement_o *__this,System_String_o *option,int32_t index
               ,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UnityEngine_GameObject_o *obj;
  System_Func_string__string__o *pSVar3;
  Settings_TypedSetting_T__o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar4;
  Settings_TypedSetting_int__o *__this_01;
  System_String_o *title;
  
  if (Il2CppMethodInitialized_07547a9f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_07547a9f = '\x01';
  }
  obj = (__this->fields)._selectedButtonLabel;
  pSVar3 = (__this->fields)._optionLabel;
  if (pSVar3 == (System_Func_string__string__o *)0x0) {
    title = (System_String_o *)0x0;
  }
  else {
    title = (System_String_o *)
            (*(code *)(pSVar3->fields).invoke_impl)
                      ((pSVar3->fields).method_code,option,(pSVar3->fields).method);
  }
  if (title == (System_String_o *)0x0) {
    title = option;
  }
  UI_BaseSettingElement__SetupLabel_5bed6d0((UI_BaseSettingElement_o *)__this,obj,title,(MethodInfo *)0x0);
  UI_DropdownSettingElement__CloseOptions((UI_DropdownSettingElement_o *)__this,(MethodInfo *)0x0);
  iVar2 = (__this->fields)._settingType;
  if (iVar2 == 2) {
    __this_01 = (Settings_TypedSetting_int__o *)(__this->fields)._setting;
    if (__this_01 == (Settings_TypedSetting_int__o *)0x0) {
label_05cb1580:
      ThrowNullReferenceException();
    }
    bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
    if (((__this_01->klass->_2).typeHierarchyDepth < bVar1) ||
       ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_IntSetting)
       ) {
label_05cb157b:
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    Settings_TypedSetting_int___set_Value
              (__this_01,index,(MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
    pUVar4 = (__this->fields)._onDropdownOptionSelect;
  }
  else {
    if (iVar2 == 4) {
      __this_00 = (Settings_TypedSetting_T__o *)(__this->fields)._setting;
      if (__this_00 == (Settings_TypedSetting_T__o *)0x0) goto label_05cb1580;
      bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
      if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
         ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Settings_StringSetting)) goto label_05cb157b;
      Settings_TypedSetting_object___set_Value
                (__this_00,(Il2CppObject *)option,
                 (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
    }
    pUVar4 = (__this->fields)._onDropdownOptionSelect;
  }
  if (pUVar4 == (UnityEngine_Events_UnityAction_o *)0x0) {
    return;
  }
  (*(code *)(pUVar4->fields).invoke_impl)((pUVar4->fields).method_code,(pUVar4->fields).method);
  return;
}


// UI.MobileLayoutLocalizedDropdownSettingElement$$SyncElement
// il2cpp: void UI_MobileLayoutLocalizedDropdownSettingElement__SyncElement (UI_MobileLayoutLocalizedDropdownSettingElement_o* __this, const MethodInfo* method);
// 0x5cb15c0

void UI_MobileLayoutLocalizedDropdownSettingElement__SyncElement
               (UI_MobileLayoutLocalizedDropdownSettingElement_o *__this,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  Settings_BaseSetting_o *pSVar4;
  System_Func_string__string__o *pSVar5;
  Settings_TypedSetting_int__o *__this_00;
  System_String_o *pSVar6;
  System_String_array *pSVar7;
  System_String_o *title;
  UnityEngine_GameObject_o *obj;
  
  if (Il2CppMethodInitialized_07547aa0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_07547aa0 = '\x01';
  }
  iVar2 = (__this->fields)._settingType;
  if (iVar2 == 2) {
    __this_00 = (Settings_TypedSetting_int__o *)(__this->fields)._setting;
    if (__this_00 == (Settings_TypedSetting_int__o *)0x0) {
label_05cb1750:
      ThrowNullReferenceException();
    }
    bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
    if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_IntSetting)
       ) {
      il2cpp_codegen_raise_invalid_cast_exception(__this_00);
    }
    pSVar7 = (__this->fields)._options;
    if (pSVar7 == (System_String_array *)0x0) goto label_05cb1750;
    if ((int)pSVar7->max_length <= (__this_00->fields)._value) {
      Settings_TypedSetting_int___set_Value
                (__this_00,0,(MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
      pSVar7 = (__this->fields)._options;
      if (pSVar7 == (System_String_array *)0x0) goto label_05cb1750;
    }
    uVar3 = (__this_00->fields)._value;
    if ((uint)pSVar7->max_length <= uVar3) {
      ThrowIndexOutOfRangeException();
    }
    obj = (__this->fields)._selectedButtonLabel;
    title = pSVar7->m_Items[(int)uVar3];
    pSVar5 = (__this->fields)._optionLabel;
    if (pSVar5 != (System_Func_string__string__o *)0x0) {
      pSVar6 = (System_String_o *)
               (*(code *)(pSVar5->fields).invoke_impl)
                         ((pSVar5->fields).method_code,title,(pSVar5->fields).method);
      goto label_05cb1734;
    }
  }
  else {
    if (iVar2 != 4) {
      return;
    }
    pSVar4 = (__this->fields)._setting;
    if (pSVar4 == (Settings_BaseSetting_o *)0x0) goto label_05cb1750;
    bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
    if (((pSVar4->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pSVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_StringSetting)
       ) {
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    obj = (__this->fields)._selectedButtonLabel;
    title = (*(uint64_t *)((char *)pSVar4 + 0x20));
    pSVar5 = (__this->fields)._optionLabel;
    if (pSVar5 != (System_Func_string__string__o *)0x0) {
      pSVar6 = (System_String_o *)
               (*(code *)(pSVar5->fields).invoke_impl)
                         ((pSVar5->fields).method_code,title,(pSVar5->fields).method);
      goto label_05cb1734;
    }
  }
  pSVar6 = (System_String_o *)0x0;
label_05cb1734:
  if (pSVar6 != (System_String_o *)0x0) {
    title = pSVar6;
  }
  UI_BaseSettingElement__SetupLabel_5bed6d0((UI_BaseSettingElement_o *)__this,obj,title,(MethodInfo *)0x0);
  return;
}


// UI.MobileLayoutLocalizedDropdownSettingElement$$RelabelOptions
// il2cpp: void UI_MobileLayoutLocalizedDropdownSettingElement__RelabelOptions (UI_MobileLayoutLocalizedDropdownSettingElement_o* __this, const MethodInfo* method);
// 0x5cb1270
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cb13a9: jmp 0x5cb13e4

void UI_MobileLayoutLocalizedDropdownSettingElement__RelabelOptions
               (UI_MobileLayoutLocalizedDropdownSettingElement_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  System_Func_string__string__o *pSVar1;
  int32_t iVar2;
  UnityEngine_Transform_o *pUVar3;
  System_String_array *pSVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_UI_Text_o *pUVar6;
  System_String_o *pSVar7;
  ulong uVar8;
  System_String_o *pSVar9;
  
  if (Il2CppMethodInitialized_07547aa1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&"Label");
    il2cpp_codegen_initialize_runtime_metadata(&"Options");
    Il2CppMethodInitialized_07547aa1 = '\x01';
  }
  __this_00 = (__this->fields)._optionsPanel;
  if ((__this_00 != (UnityEngine_GameObject_o *)0x0) &&
     (pUVar3 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
     pUVar3 != (UnityEngine_Transform_o *)0x0)) {
    pUVar3 = UnityEngine_Transform__Find(pUVar3,"Options",(MethodInfo *)0x0);
    pSVar4 = (__this->fields)._options;
    if (pSVar4 != (System_String_array *)0x0) {
      if (pUVar3 == (UnityEngine_Transform_o *)0x0) {
        if ((int)pSVar4->max_length < 1) {
          return;
        }
      }
      else {
        uVar8 = 0;
        do {
          if ((long)(int)pSVar4->max_length <= (long)uVar8) {
            return;
          }
          iVar2 = UnityEngine_Transform__get_childCount(pUVar3,(MethodInfo *)0x0);
          if ((long)iVar2 <= (long)uVar8) {
            return;
          }
          pUVar5 = UnityEngine_Transform__GetChild(pUVar3,(int32_t)uVar8,(MethodInfo *)0x0);
          if ((pUVar5 == (UnityEngine_Transform_o *)0x0) ||
             (pUVar5 = UnityEngine_Transform__Find(pUVar5,"Label",(MethodInfo *)0x0),
             pUVar5 == (UnityEngine_Transform_o *)0x0)) break;
          pUVar6 = UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)pUVar5,
                              (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
          pSVar4 = (__this->fields)._options;
          if (pSVar4 == (System_String_array *)0x0) break;
          if ((uint)pSVar4->max_length <= uVar8) {
            ThrowIndexOutOfRangeException();
          }
          pSVar9 = pSVar4->m_Items[uVar8];
          pSVar1 = (__this->fields)._optionLabel;
          if (pSVar1 == (System_Func_string__string__o *)0x0) {
            pSVar7 = (System_String_o *)0x0;
          }
          else {
            pSVar7 = (System_String_o *)
                     (*(code *)(pSVar1->fields).invoke_impl)
                               ((pSVar1->fields).method_code,pSVar9,(pSVar1->fields).method);
          }
          if (pUVar6 == (UnityEngine_UI_Text_o *)0x0) break;
          if (pSVar7 != (System_String_o *)0x0) {
            pSVar9 = pSVar7;
          }
          (*(pUVar6->klass->vtable)._75_set_text.methodPtr)
                    (pUVar6,pSVar9,(pUVar6->klass->vtable)._75_set_text.method);
          uVar8 = uVar8 + 1;
          pSVar4 = (__this->fields)._options;
        } while (pSVar4 != (System_String_array *)0x0);
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MobileLayoutLocalizedDropdownSettingElement$$GetOptionLabel
// il2cpp: System_String_o* UI_MobileLayoutLocalizedDropdownSettingElement__GetOptionLabel (UI_MobileLayoutLocalizedDropdownSettingElement_o* __this, System_String_o* option, const MethodInfo* method);
// 0x5cb1590

System_String_o *
UI_MobileLayoutLocalizedDropdownSettingElement__GetOptionLabel
          (UI_MobileLayoutLocalizedDropdownSettingElement_o *__this,System_String_o *option,MethodInfo *method
          )

{
  System_Func_string__string__o *pSVar1;
  System_String_o *pSVar2;
  
  pSVar1 = (__this->fields)._optionLabel;
  if (pSVar1 == (System_Func_string__string__o *)0x0) {
    pSVar2 = (System_String_o *)0x0;
  }
  else {
    pSVar2 = (System_String_o *)
             (*(code *)(pSVar1->fields).invoke_impl)
                       ((pSVar1->fields).method_code,option,(pSVar1->fields).method);
  }
  if (pSVar2 != (System_String_o *)0x0) {
    option = pSVar2;
  }
  return option;
}


// UI.MobileLayoutLocalizedDropdownSettingElement$$.ctor
// il2cpp: void UI_MobileLayoutLocalizedDropdownSettingElement___ctor (UI_MobileLayoutLocalizedDropdownSettingElement_o* __this, const MethodInfo* method);
// 0x5cb1770

void UI_MobileLayoutLocalizedDropdownSettingElement___ctor
               (UI_MobileLayoutLocalizedDropdownSettingElement_o *__this,MethodInfo *method)

{
  UI_DropdownSettingElement___ctor((UI_DropdownSettingElement_o *)__this,(MethodInfo *)0x0);
  return;
}


