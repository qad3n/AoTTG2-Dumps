// Type: UI.InputFieldPasteable
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/InputFieldPasteable.cs
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/InputSettingElement.cs
// --------------------------------

// UI.InputFieldPasteable$$IsModifier
// il2cpp: bool UI_InputFieldPasteable__IsModifier (UI_InputFieldPasteable_o* __this, const MethodInfo* method);
// 0x182212eb0

bool UI_InputFieldPasteable__IsModifier(UI_InputFieldPasteable_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  
  if (Il2CppMethodInitialized_18434712b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    Il2CppMethodInitialized_18434712b = '\x01';
  }
  if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
  }
  iVar2 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
  if (iVar2 == 1) {
    bVar1 = UnityEngine_Input__GetKey(0x136,(MethodInfo *)0x0);
    if (!bVar1) {
      bVar1 = UnityEngine_Input__GetKey(0x135,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  else {
    bVar1 = UnityEngine_Input__GetKey(0x132,(MethodInfo *)0x0);
    if (!bVar1) {
      bVar1 = UnityEngine_Input__GetKey(0x131,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return true;
}


// UI.InputFieldPasteable$$IsCopy
// il2cpp: bool UI_InputFieldPasteable__IsCopy (UI_InputFieldPasteable_o* __this, const MethodInfo* method);
// 0x182212e90

bool UI_InputFieldPasteable__IsCopy(UI_InputFieldPasteable_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = UnityEngine_Input__GetKeyDown(99,(MethodInfo *)0x0);
  return bVar1;
}


// UI.InputFieldPasteable$$IsPaste
// il2cpp: bool UI_InputFieldPasteable__IsPaste (UI_InputFieldPasteable_o* __this, const MethodInfo* method);
// 0x182212f40

bool UI_InputFieldPasteable__IsPaste(UI_InputFieldPasteable_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = UnityEngine_Input__GetKeyDown(0x76,(MethodInfo *)0x0);
  return bVar1;
}


// UI.InputFieldPasteable$$IsCut
// il2cpp: bool UI_InputFieldPasteable__IsCut (UI_InputFieldPasteable_o* __this, const MethodInfo* method);
// 0x182212ea0

bool UI_InputFieldPasteable__IsCut(UI_InputFieldPasteable_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = UnityEngine_Input__GetKeyDown(0x78,(MethodInfo *)0x0);
  return bVar1;
}


// UI.InputFieldPasteable$$Append
// il2cpp: void UI_InputFieldPasteable__Append (UI_InputFieldPasteable_o* __this, uint16_t input, const MethodInfo* method);
// 0x182212da0

void UI_InputFieldPasteable__Append(UI_InputFieldPasteable_o *__this,uint16_t input,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  
  if (Il2CppMethodInitialized_18434712c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    Il2CppMethodInitialized_18434712c = '\x01';
  }
  if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
  }
  iVar2 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
  if ((iVar2 == 1) && (bVar1 = UI_InputFieldPasteable__IsModifier(__this,(MethodInfo *)0x0), bVar1)) {
    bVar1 = UnityEngine_Input__GetKeyDown(99,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    bVar1 = UnityEngine_Input__GetKeyDown(0x78,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    bVar1 = UnityEngine_Input__GetKeyDown(0x76,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
  }
  UnityEngine_UI_InputField__Append_32c65e0((UnityEngine_UI_InputField_o *)__this,input,(MethodInfo *)0x0);
  return;
}


// UI.InputFieldPasteable$$Append
// il2cpp: void UI_InputFieldPasteable__Append (UI_InputFieldPasteable_o* __this, System_String_o* input, const MethodInfo* method);
// 0x182212b80
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182212d88: mov rsi, qword ptr [rsp + 0x30]

void UI_InputFieldPasteable__Append_2212b80
               (UI_InputFieldPasteable_o *__this,System_String_o *input,MethodInfo *method)

{
  UnityEngine_UI_InputField_OnChangeEvent_o *__this_00;
  bool bVar1;
  uint16_t input_00;
  int32_t iVar2;
  System_String_o *pSVar3;
  int index;
  
  if (Il2CppMethodInitialized_18434712d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Events_UnityEvent_string_Invoke);
    Il2CppMethodInitialized_18434712d = '\x01';
  }
  if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
  }
  iVar2 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
  if (((iVar2 != 1) || (bVar1 = UI_InputFieldPasteable__IsModifier(__this,(MethodInfo *)0x0), !bVar1)) ||
     ((bVar1 = UnityEngine_Input__GetKeyDown(99,(MethodInfo *)0x0), !bVar1 &&
      (bVar1 = UnityEngine_Input__GetKeyDown(0x78,(MethodInfo *)0x0), !bVar1)))) {
    if (((__this->fields).m_LineType == 2) || ((__this->fields).m_LineType == 1)) {
      bVar1 = UI_InputFieldPasteable__IsModifier(__this,(MethodInfo *)0x0);
      if ((bVar1) && (bVar1 = UnityEngine_Input__GetKeyDown(0x76,(MethodInfo *)0x0), bVar1)) {
        if (Il2CppMethodInitialized_18434712e == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GUIUtility);
          Il2CppMethodInitialized_18434712e = '\x01';
        }
        if ((TypeInfo_UnityEngine_GUIUtility->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_GUIUtility);
        }
        pSVar3 = UnityEngine_GUIUtility__get_systemCopyBuffer((MethodInfo *)0x0);
        UnityEngine_UI_InputField__set_text((UnityEngine_UI_InputField_o *)__this,pSVar3,(MethodInfo *)0x0);
        __this_00 = (__this->fields).m_OnValueChanged;
        if (__this_00 != (UnityEngine_UI_InputField_OnChangeEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent_object___Invoke
                    ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,(Il2CppObject *)(__this->fields).m_Text,
                     (MethodInfo_EBC830 *)MethodInfo_UnityEngine_Events_UnityEvent_string_Invoke);
          pSVar3 = (__this->fields).m_Text;
          if (pSVar3 != (System_String_o *)0x0) {
            iVar2 = (pSVar3->fields)._stringLength;
            UnityEngine_UI_InputField__set_caretPosition
                      ((UnityEngine_UI_InputField_o *)__this,iVar2,(MethodInfo *)0x0);
            (__this->fields).m_CaretSelectPosition = iVar2;
            return;
          }
        }
        goto label_182212d98;
      }
    }
    else {
      if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
      }
      iVar2 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
      if (((iVar2 == 1) && (bVar1 = UI_InputFieldPasteable__IsModifier(__this,(MethodInfo *)0x0), bVar1)) &&
         (bVar1 = UnityEngine_Input__GetKeyDown(0x76,(MethodInfo *)0x0), bVar1)) {
        pSVar3 = UI_InputFieldPasteable__GetClipboard(__this,(MethodInfo *)0x0);
        index = 0;
        if (pSVar3 != (System_String_o *)0x0) {
          for (; index < (pSVar3->fields)._stringLength; index = index + 1) {
            input_00 = System_String__get_Chars(pSVar3,index,(MethodInfo *)0x0);
            UnityEngine_UI_InputField__Append_32c65e0
                      ((UnityEngine_UI_InputField_o *)__this,input_00,(MethodInfo *)0x0);
          }
          return;
        }
label_182212d98:
        ThrowNullReferenceException();
      }
    }
    UnityEngine_UI_InputField__Append((UnityEngine_UI_InputField_o *)__this,input,(MethodInfo *)0x0);
  }
  return;
}


// UI.InputFieldPasteable$$GetClipboard
// il2cpp: System_String_o* UI_InputFieldPasteable__GetClipboard (UI_InputFieldPasteable_o* __this, const MethodInfo* method);
// 0x182212e50

System_String_o * UI_InputFieldPasteable__GetClipboard(UI_InputFieldPasteable_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_18434712e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GUIUtility);
    Il2CppMethodInitialized_18434712e = '\x01';
  }
  if ((TypeInfo_UnityEngine_GUIUtility->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_GUIUtility);
  }
  pSVar1 = UnityEngine_GUIUtility__get_systemCopyBuffer((MethodInfo *)0x0);
  return pSVar1;
}


// UI.InputFieldPasteable$$.ctor
// il2cpp: void UI_InputFieldPasteable___ctor (UI_InputFieldPasteable_o* __this, const MethodInfo* method);
// 0x182212f50

void UI_InputFieldPasteable___ctor(UI_InputFieldPasteable_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434712f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UI_InputField);
    Il2CppMethodInitialized_18434712f = '\x01';
  }
  if ((TypeInfo_UnityEngine_UI_InputField->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_UI_InputField);
  }
  UnityEngine_UI_InputField___ctor((UnityEngine_UI_InputField_o *)__this,(MethodInfo *)0x0);
  return;
}


