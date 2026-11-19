// Type: UI.DropdownSelectElement
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/UI/DropdownSelectElement.cs
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/DropdownSelectElement.cs
// --------------------------------

// UI.DropdownSelectElement$$Setup
// il2cpp: void UI_DropdownSelectElement__Setup (UI_DropdownSelectElement_o* __this, Settings_BaseSetting_o* setting, UI_ElementStyle_o* style, System_String_o* title, System_String_array* options, System_String_o* tooltip, float elementWidth, float elementHeight, float optionsWidth, float maxScrollHeight, UnityEngine_Events_UnityAction_o* onDropdownOptionSelect, System_Int32_array* intOptionValues, const MethodInfo* method);
// 0x5cee300

void UI_DropdownSelectElement__Setup
               (UI_DropdownSelectElement_o *__this,Settings_BaseSetting_o *setting,UI_ElementStyle_o *style,
               System_String_o *title,System_String_array *options,System_String_o *tooltip,float elementWidth
               ,float elementHeight,float optionsWidth,float maxScrollHeight,
               UnityEngine_Events_UnityAction_o *onDropdownOptionSelect,System_Int32_array *intOptionValues,
               MethodInfo *method)

{
  int32_t value;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_Text_o *__this_01;
  MethodInfo *in_stack_ffffffffffffffd8;
  
  UI_DropdownSettingElement__Setup
            ((UI_DropdownSettingElement_o *)__this,setting,style,
             (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),options,tooltip,elementWidth,
             elementHeight,optionsWidth,maxScrollHeight,onDropdownOptionSelect,intOptionValues,
             in_stack_ffffffffffffffd8);
  if (style != (UI_ElementStyle_o *)0x0) {
    __this_00 = (__this->fields)._selectedButtonLabel;
    value = (style->fields).FontSize;
    if (Il2CppMethodInitialized_07547c72 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
      Il2CppMethodInitialized_07547c72 = '\x01';
    }
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      __this_01 = UnityEngine_GameObject__GetComponent_object_
                            (__this_00,
                             (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text);
      if (__this_01 != (UnityEngine_UI_Text_o *)0x0) {
        (*(__this_01->klass->vtable)._75_set_text.methodPtr)
                  (__this_01,title,(__this_01->klass->vtable)._75_set_text.method);
        UnityEngine_UI_Text__set_fontSize(__this_01,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.DropdownSelectElement$$OnDropdownOptionClick
// il2cpp: void UI_DropdownSelectElement__OnDropdownOptionClick (UI_DropdownSelectElement_o* __this, System_String_o* option, int32_t index, const MethodInfo* method);
// 0x5ceef70

void UI_DropdownSelectElement__OnDropdownOptionClick
               (UI_DropdownSelectElement_o *__this,System_String_o *option,int32_t index,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UnityEngine_UI_Scrollbar_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  Settings_TypedSetting_T__o *__this_02;
  UnityEngine_Events_UnityAction_o *pUVar3;
  Settings_TypedSetting_int__o *__this_03;
  float fVar4;
  
  if (Il2CppMethodInitialized_07547c7b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_07547c7b = '\x01';
  }
  __this_00 = (__this->fields)._scrollBar;
  if (__this_00 != (UnityEngine_UI_Scrollbar_o *)0x0) {
    fVar4 = UnityEngine_UI_Scrollbar__get_value(__this_00,(MethodInfo *)0x0);
    (__this->fields)._currentScrollValue = fVar4;
    __this_01 = (__this->fields)._optionsPanel;
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
      iVar2 = (__this->fields)._settingType;
      if (iVar2 == 2) {
        __this_03 = (Settings_TypedSetting_int__o *)(__this->fields)._setting;
        if (__this_03 == (Settings_TypedSetting_int__o *)0x0) goto label_05cef0b6;
        bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
        if (((__this_03->klass->_2).typeHierarchyDepth < bVar1) ||
           ((__this_03->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
label_05cef0bb:
          il2cpp_codegen_raise_invalid_cast_exception();
        }
        Settings_TypedSetting_int___set_Value
                  (__this_03,index,(MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
        pUVar3 = (__this->fields)._onDropdownOptionSelect;
      }
      else {
        if (iVar2 == 4) {
          __this_02 = (Settings_TypedSetting_T__o *)(__this->fields)._setting;
          if (__this_02 == (Settings_TypedSetting_T__o *)0x0) goto label_05cef0b6;
          bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
          if (((__this_02->klass->_2).typeHierarchyDepth < bVar1) ||
             ((__this_02->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_Settings_StringSetting)) goto label_05cef0bb;
          Settings_TypedSetting_object___set_Value
                    (__this_02,(Il2CppObject *)option,
                     (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_string_set_Value);
        }
        pUVar3 = (__this->fields)._onDropdownOptionSelect;
      }
      if (pUVar3 == (UnityEngine_Events_UnityAction_o *)0x0) {
        return;
      }
      (*(code *)(pUVar3->fields).invoke_impl)((pUVar3->fields).method_code,(pUVar3->fields).method);
      return;
    }
  }
label_05cef0b6:
  ThrowNullReferenceException();
}


// UI.DropdownSelectElement$$SyncElement
// il2cpp: void UI_DropdownSelectElement__SyncElement (UI_DropdownSelectElement_o* __this, const MethodInfo* method);
// 0x5cef100

void UI_DropdownSelectElement__SyncElement(UI_DropdownSelectElement_o *__this,MethodInfo *method)

{
  return;
}


// UI.DropdownSelectElement$$.ctor
// il2cpp: void UI_DropdownSelectElement___ctor (UI_DropdownSelectElement_o* __this, const MethodInfo* method);
// 0x5cef110

void UI_DropdownSelectElement___ctor(UI_DropdownSelectElement_o *__this,MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector3_StaticFields *pUVar2;
  float fVar3;
  
  (__this->fields)._currentScrollValue = 1.0;
  if (Il2CppMethodInitialized_0753e4b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b6 = '\x01';
  }
  pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar3 = (pUVar2->zeroVector).fields.y;
  fVar1 = (pUVar2->zeroVector).fields.z;
  (__this->fields)._lastKnownPosition.fields.x = (pUVar2->zeroVector).fields.x;
  (__this->fields)._lastKnownPosition.fields.y = fVar3;
  (__this->fields)._lastKnownPosition.fields.z = fVar1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


