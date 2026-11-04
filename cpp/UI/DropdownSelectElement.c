// Type: UI.DropdownSelectElement
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/DropdownSelectElement.cs
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/DropdownSelectElement.cs
// --------------------------------

// UI.DropdownSelectElement$$Setup
// il2cpp: void UI_DropdownSelectElement__Setup (UI_DropdownSelectElement_o* __this, Settings_BaseSetting_o* setting, UI_ElementStyle_o* style, System_String_o* title, System_String_array* options, System_String_o* tooltip, float elementWidth, float elementHeight, float optionsWidth, float maxScrollHeight, UnityEngine_Events_UnityAction_o* onDropdownOptionSelect, System_Int32_array* intOptionValues, const MethodInfo* method);
// 0x182209a70

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
  
  UI_DropdownSettingElement__Setup
            ((UI_DropdownSettingElement_o *)__this,setting,style,
             (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),options,tooltip,elementWidth,
             elementHeight,optionsWidth,maxScrollHeight,onDropdownOptionSelect,intOptionValues,
             (MethodInfo *)0x0);
  if (style != (UI_ElementStyle_o *)0x0) {
    __this_00 = (__this->fields)._selectedButtonLabel;
    value = (style->fields).FontSize;
    if (Il2CppMethodInitialized_184347105 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
      Il2CppMethodInitialized_184347105 = '\x01';
    }
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      __this_01 = UnityEngine_GameObject__GetComponent_object_
                            (__this_00,
                             (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text);
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
// 0x182209900

void UI_DropdownSelectElement__OnDropdownOptionClick
               (UI_DropdownSelectElement_o *__this,System_String_o *option,int32_t index,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_UI_Scrollbar_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  Settings_TypedSetting_int__o *__this_02;
  Settings_TypedSetting_T__o *__this_03;
  UnityEngine_Events_UnityAction_o *pUVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_18434710e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    Il2CppMethodInitialized_18434710e = '\x01';
  }
  __this_00 = (__this->fields)._scrollBar;
  if (__this_00 != (UnityEngine_UI_Scrollbar_o *)0x0) {
    fVar3 = UnityEngine_UI_Scrollbar__get_value(__this_00,(MethodInfo *)0x0);
    __this_01 = (__this->fields)._optionsPanel;
    (__this->fields)._currentScrollValue = fVar3;
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
      if ((__this->fields)._settingType == 4) {
        __this_03 = (Settings_TypedSetting_T__o *)(__this->fields)._setting;
        if (__this_03 == (Settings_TypedSetting_T__o *)0x0) goto label_182209a4d;
        bVar1 = (TypeInfo_Settings_StringSetting->_2).typeHierarchyDepth;
        if (((__this_03->klass->_2).typeHierarchyDepth < bVar1) ||
           ((__this_03->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_Settings_StringSetting)) {
          il2cpp_codegen_raise_invalid_cast_exception(__this_03,TypeInfo_Settings_StringSetting);
        }
        Settings_TypedSetting_object___set_Value
                  (__this_03,(Il2CppObject *)option,
                   (MethodInfo_E8F4C0 *)MethodInfo_Settings_TypedSetting_string_set_Value);
      }
      else if ((__this->fields)._settingType == 2) {
        __this_02 = (Settings_TypedSetting_int__o *)(__this->fields)._setting;
        if (__this_02 == (Settings_TypedSetting_int__o *)0x0) goto label_182209a4d;
        bVar1 = (TypeInfo_Settings_IntSetting->_2).typeHierarchyDepth;
        if (((__this_02->klass->_2).typeHierarchyDepth < bVar1) ||
           ((__this_02->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_Settings_IntSetting)) {
          il2cpp_codegen_raise_invalid_cast_exception(__this_02,TypeInfo_Settings_IntSetting);
        }
        Settings_TypedSetting_int___set_Value
                  (__this_02,index,(MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
      }
      pUVar2 = (__this->fields)._onDropdownOptionSelect;
      if (pUVar2 != (UnityEngine_Events_UnityAction_o *)0x0) {
        (*(code *)(pUVar2->fields).invoke_impl)((pUVar2->fields).method_code,(pUVar2->fields).method);
      }
      return;
    }
  }
label_182209a4d:
  ThrowNullReferenceException();
}


// UI.DropdownSelectElement$$SyncElement
// il2cpp: void UI_DropdownSelectElement__SyncElement (UI_DropdownSelectElement_o* __this, const MethodInfo* method);
// 0x180547020

void
UI_DropdownSelectElement__SyncElement(UI_DropdownSelectElement_o* __this, MethodInfo* method)

{
  return;
}


// UI.DropdownSelectElement$$.ctor
// il2cpp: void UI_DropdownSelectElement___ctor (UI_DropdownSelectElement_o* __this, const MethodInfo* method);
// 0x182209ba0

void
UI_DropdownSelectElement___ctor(UI_DropdownSelectElement_o* __this, MethodInfo* method)

{
  float fVar1;
  UnityEngine_Vector3_StaticFields *pUVar2;
  float fVar3;
  
  (__this->fields)._currentScrollValue = 1.0;
  if (Il2CppMethodInitialized_18433dbea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433dbea = '\x01';
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


