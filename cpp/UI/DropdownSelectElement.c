// Type: UI.DropdownSelectElement
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/DropdownSelectElement.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/Elements/SettingElements/DropdownSelectElement.cs  [CHANGED since prior version]
// --------------------------------

// UI.DropdownSelectElement$$Setup
// il2cpp: void UI_DropdownSelectElement__Setup (UI_DropdownSelectElement_o* __this, Settings_BaseSetting_o* setting, UI_ElementStyle_o* style, System_String_o* title, System_String_array* options, System_String_o* tooltip, float elementWidth, float elementHeight, float optionsWidth, float maxScrollHeight, UnityEngine_Events_UnityAction_o* onDropdownOptionSelect, const MethodInfo* method);
// 0x40812d0

void UI_DropdownSelectElement__Setup
               (UI_DropdownSelectElement_o *__this,Settings_BaseSetting_o *setting,
               UI_ElementStyle_o *style,System_String_o *title,System_String_array *options,
               System_String_o *tooltip,float elementWidth,float elementHeight,float optionsWidth,
               float maxScrollHeight,UnityEngine_Events_UnityAction_o *onDropdownOptionSelect,
               MethodInfo *method)

{
  int32_t value;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_Text_o *__this_01;
  MethodInfo *in_stack_ffffffffffffffe0;
  
  UI_DropdownSettingElement__Setup
            ((UI_DropdownSettingElement_o *)__this,setting,style,
             (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),options,tooltip,elementWidth,
             elementHeight,optionsWidth,maxScrollHeight,onDropdownOptionSelect,
             in_stack_ffffffffffffffe0);
  if (style != (UI_ElementStyle_o *)0x0) {
    __this_00 = (__this->fields)._selectedButtonLabel;
    value = (style->fields).FontSize;
    if (DAT_0570451a == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
      DAT_0570451a = '\x01';
    }
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      __this_01 = (UnityEngine_UI_Text_o *)
                  UnityEngine_GameObject__GetComponent<object>(__this_00,MethodInfo_Text_GetComponent_Text);
      if (__this_01 != (UnityEngine_UI_Text_o *)0x0) {
        (*(__this_01->klass->vtable)._75_set_text.methodPtr)
                  (__this_01,title,(__this_01->klass->vtable)._75_set_text.method);
        UnityEngine_UI_Text__set_fontSize(__this_01,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.DropdownSelectElement$$OnDropdownOptionClick
// il2cpp: void UI_DropdownSelectElement__OnDropdownOptionClick (UI_DropdownSelectElement_o* __this, System_String_o* option, int32_t index, const MethodInfo* method);
// 0x4081f70

void UI_DropdownSelectElement__OnDropdownOptionClick
               (UI_DropdownSelectElement_o *__this,System_String_o *option,int32_t index,
               MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UnityEngine_UI_Scrollbar_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  Settings_TypedSetting_T__o *__this_02;
  UnityEngine_Events_UnityAction_o *pUVar3;
  Settings_TypedSetting_int__o *__this_03;
  float fVar4;
  
  if (DAT_05704523 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IntSetting);
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    DAT_05704523 = '\x01';
  }
  __this_00 = (__this->fields)._scrollBar;
  if (__this_00 != (UnityEngine_UI_Scrollbar_o *)0x0) {
    fVar4 = UnityEngine_UI_Scrollbar__get_value(__this_00,(MethodInfo *)0x0);
    (__this->fields)._currentScrollValue = fVar4;
    __this_01 = (__this->fields)._optionsPanel;
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_01,0,(MethodInfo *)0x0);
      iVar2 = (__this->fields)._settingType;
      if (iVar2 == 2) {
        __this_03 = (Settings_TypedSetting_int__o *)(__this->fields)._setting;
        if (__this_03 == (Settings_TypedSetting_int__o *)0x0) goto LAB_040820b6;
        bVar1 = (TypeInfo_IntSetting->_2).naturalAligment;
        if (((__this_03->klass->_2).naturalAligment < bVar1) ||
           ((__this_03->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_IntSetting)) {
LAB_040820bb:
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume();
        }
        Settings_TypedSetting<int>__set_Value(__this_03,index,MethodInfo_Void_set_Value);
        pUVar3 = (__this->fields)._onDropdownOptionSelect;
      }
      else {
        if (iVar2 == 4) {
          __this_02 = (Settings_TypedSetting_T__o *)(__this->fields)._setting;
          if (__this_02 == (Settings_TypedSetting_T__o *)0x0) goto LAB_040820b6;
          bVar1 = (TypeInfo_StringSetting->_2).naturalAligment;
          if (((__this_02->klass->_2).naturalAligment < bVar1) ||
             ((__this_02->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_StringSetting))
          goto LAB_040820bb;
          Settings_TypedSetting<object>__set_Value(__this_02,(Il2CppObject *)option,MethodInfo_Void_set_Value);
        }
        pUVar3 = (__this->fields)._onDropdownOptionSelect;
      }
      if (pUVar3 != (UnityEngine_Events_UnityAction_o *)0x0) {
        (*(code *)(pUVar3->fields).invoke_impl)
                  ((pUVar3->fields).method_code,(pUVar3->fields).method);
        return;
      }
      return;
    }
  }
LAB_040820b6:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.DropdownSelectElement$$SyncElement
// il2cpp: void UI_DropdownSelectElement__SyncElement (UI_DropdownSelectElement_o* __this, const MethodInfo* method);
// 0x4082100

void UI_DropdownSelectElement__SyncElement(UI_DropdownSelectElement_o *__this,MethodInfo *method)

{
  return;
}


// UI.DropdownSelectElement$$.ctor
// il2cpp: void UI_DropdownSelectElement___ctor (UI_DropdownSelectElement_o* __this, const MethodInfo* method);
// 0x4082110

void UI_DropdownSelectElement___ctor(UI_DropdownSelectElement_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  
  (__this->fields)._currentScrollValue = 1.0;
  if (DAT_056fdd15 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fdd15 = '\x01';
  }
  uVar2 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  fVar1 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  (__this->fields)._lastKnownPosition.fields.x = (float)(int)uVar2;
  (__this->fields)._lastKnownPosition.fields.y = (float)(int)((ulong)uVar2 >> 0x20);
  (__this->fields)._lastKnownPosition.fields.z = fVar1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


