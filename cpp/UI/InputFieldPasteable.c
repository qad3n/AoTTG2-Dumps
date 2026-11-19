// Type: UI.InputFieldPasteable
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/UI/InputFieldPasteable.cs
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/InputSettingElement.cs
// --------------------------------

// UI.InputFieldPasteable$$IsModifier
// il2cpp: bool UI_InputFieldPasteable__IsModifier (UI_InputFieldPasteable_o* __this, const MethodInfo* method);
// 0x5cf2b00

bool UI_InputFieldPasteable__IsModifier(UI_InputFieldPasteable_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  int iVar3;
  int32_t key;
  
  if (Il2CppMethodInitialized_07547c98 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    Il2CppMethodInitialized_07547c98 = '\x01';
    uVar1 = (TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
    iVar3 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
  }
  else {
    iVar3 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
  }
  if (iVar3 == 1) {
    bVar2 = UnityEngine_Input__GetKey(0x136,(MethodInfo *)0x0);
    key = 0x135;
    if (bVar2) {
      return true;
    }
  }
  else {
    bVar2 = UnityEngine_Input__GetKey(0x132,(MethodInfo *)0x0);
    key = 0x131;
    if (bVar2) {
      return true;
    }
  }
  bVar2 = UnityEngine_Input__GetKey(key,(MethodInfo *)0x0);
  return bVar2;
}


// UI.InputFieldPasteable$$IsCopy
// il2cpp: bool UI_InputFieldPasteable__IsCopy (UI_InputFieldPasteable_o* __this, const MethodInfo* method);
// 0x5cf2ba0

bool UI_InputFieldPasteable__IsCopy(UI_InputFieldPasteable_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = UnityEngine_Input__GetKeyDown(99,(MethodInfo *)0x0);
  return bVar1;
}


// UI.InputFieldPasteable$$IsPaste
// il2cpp: bool UI_InputFieldPasteable__IsPaste (UI_InputFieldPasteable_o* __this, const MethodInfo* method);
// 0x5cf2bb0

bool UI_InputFieldPasteable__IsPaste(UI_InputFieldPasteable_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = UnityEngine_Input__GetKeyDown(0x76,(MethodInfo *)0x0);
  return bVar1;
}


// UI.InputFieldPasteable$$IsCut
// il2cpp: bool UI_InputFieldPasteable__IsCut (UI_InputFieldPasteable_o* __this, const MethodInfo* method);
// 0x5cf2bc0

bool UI_InputFieldPasteable__IsCut(UI_InputFieldPasteable_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = UnityEngine_Input__GetKeyDown(0x78,(MethodInfo *)0x0);
  return bVar1;
}


// UI.InputFieldPasteable$$Append
// il2cpp: void UI_InputFieldPasteable__Append (UI_InputFieldPasteable_o* __this, uint16_t input, const MethodInfo* method);
// 0x5cf2bd0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cf2c01: jmp 0x5cf2cfe
// asm:   0x5cf2c77: jmp 0x5cf2cc9

void UI_InputFieldPasteable__Append(UI_InputFieldPasteable_o *__this,uint16_t input,MethodInfo *method)

{
  bool bVar1;
  int iVar2;
  int32_t iVar3;
  
  if (Il2CppMethodInitialized_07547c99 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    Il2CppMethodInitialized_07547c99 = '\x01';
    if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) goto label_05cf2c2c;
label_05cf2bf5:
    iVar2 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
  }
  else {
    if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor != 0) goto label_05cf2bf5;
label_05cf2c2c:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
    iVar2 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
  }
  if (iVar2 != 1) goto label_05cf2cfe;
  if (Il2CppMethodInitialized_07547c98 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    Il2CppMethodInitialized_07547c98 = '\x01';
    if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) goto label_05cf2c98;
label_05cf2c56:
    iVar3 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
    if (iVar3 == 1) goto label_05cf2c62;
label_05cf2ca9:
    bVar1 = UnityEngine_Input__GetKey(0x132,(MethodInfo *)0x0);
    iVar3 = 0x131;
  }
  else {
    if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor != 0) goto label_05cf2c56;
label_05cf2c98:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
    iVar3 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
    if (iVar3 != 1) goto label_05cf2ca9;
label_05cf2c62:
    bVar1 = UnityEngine_Input__GetKey(0x136,(MethodInfo *)0x0);
    iVar3 = 0x135;
  }
  if (((bVar1) || (bVar1 = UnityEngine_Input__GetKey(iVar3,(MethodInfo *)0x0), bVar1)) &&
     ((bVar1 = UnityEngine_Input__GetKeyDown(99,(MethodInfo *)0x0), bVar1 ||
      ((bVar1 = UnityEngine_Input__GetKeyDown(0x78,(MethodInfo *)0x0), bVar1 ||
       (bVar1 = UnityEngine_Input__GetKeyDown(0x76,(MethodInfo *)0x0), bVar1)))))) {
    return;
  }
label_05cf2cfe:
  UnityEngine_UI_InputField__Append_6cd7ea0((UnityEngine_UI_InputField_o *)__this,input,(MethodInfo *)0x0);
  return;
}


// UI.InputFieldPasteable$$Append
// il2cpp: void UI_InputFieldPasteable__Append (UI_InputFieldPasteable_o* __this, System_String_o* input, const MethodInfo* method);
// 0x5cf2d10
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cf2d43: jmp 0x5cf2e3f
// asm:   0x5cf2dc5: jmp 0x5cf2e17
// asm:   0x5cf2e83: jmp 0x5cf2efe
// asm:   0x5cf2ea5: jmp 0x5cf30b7
// asm:   0x5cf2ff6: jmp 0x5cf3048
// asm:   0x5cf308f: nop 

void UI_InputFieldPasteable__Append_5bf2d10
               (UI_InputFieldPasteable_o *__this,System_String_o *input,MethodInfo *method)

{
  UnityEngine_UI_InputField_OnChangeEvent_o *__this_00;
  bool bVar1;
  uint16_t input_00;
  int iVar2;
  int32_t iVar3;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_07547c9a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Events_UnityEvent_string_Invoke);
    Il2CppMethodInitialized_07547c9a = '\x01';
    if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) goto label_05cf2d7a;
label_05cf2d37:
    iVar2 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
  }
  else {
    if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor != 0) goto label_05cf2d37;
label_05cf2d7a:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
    iVar2 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
  }
  if (iVar2 == 1) {
    if (Il2CppMethodInitialized_07547c98 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
      Il2CppMethodInitialized_07547c98 = '\x01';
      if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) goto label_05cf2de6;
label_05cf2da4:
      iVar3 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
      if (iVar3 == 1) goto label_05cf2db0;
label_05cf2df7:
      bVar1 = UnityEngine_Input__GetKey(0x132,(MethodInfo *)0x0);
      iVar3 = 0x131;
    }
    else {
      if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor != 0) goto label_05cf2da4;
label_05cf2de6:
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
      iVar3 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
      if (iVar3 != 1) goto label_05cf2df7;
label_05cf2db0:
      bVar1 = UnityEngine_Input__GetKey(0x136,(MethodInfo *)0x0);
      iVar3 = 0x135;
    }
    if ((bVar1) || (bVar1 = UnityEngine_Input__GetKey(iVar3,(MethodInfo *)0x0), bVar1)) {
      bVar1 = UnityEngine_Input__GetKeyDown(99,(MethodInfo *)0x0);
      if (bVar1) {
        return;
      }
      bVar1 = UnityEngine_Input__GetKeyDown(0x78,(MethodInfo *)0x0);
      if (bVar1) {
        return;
      }
    }
  }
  if (1 < (__this->fields).m_LineType - 1U) {
    if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
      iVar2 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
    }
    else {
      iVar2 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
    }
    if (iVar2 != 1) goto label_05cf30b7;
    if (Il2CppMethodInitialized_07547c98 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
      Il2CppMethodInitialized_07547c98 = '\x01';
      if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) goto label_05cf3017;
label_05cf2fd5:
      iVar3 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
      if (iVar3 == 1) goto label_05cf2fe1;
label_05cf3028:
      bVar1 = UnityEngine_Input__GetKey(0x132,(MethodInfo *)0x0);
      iVar3 = 0x131;
    }
    else {
      if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor != 0) goto label_05cf2fd5;
label_05cf3017:
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
      iVar3 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
      if (iVar3 != 1) goto label_05cf3028;
label_05cf2fe1:
      bVar1 = UnityEngine_Input__GetKey(0x136,(MethodInfo *)0x0);
      iVar3 = 0x135;
    }
    if (((!bVar1) && (bVar1 = UnityEngine_Input__GetKey(iVar3,(MethodInfo *)0x0), !bVar1)) ||
       (bVar1 = UnityEngine_Input__GetKeyDown(0x76,(MethodInfo *)0x0), !bVar1)) goto label_05cf30b7;
    if (Il2CppMethodInitialized_07547c9b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GUIUtility);
      Il2CppMethodInitialized_07547c9b = '\x01';
      if ((TypeInfo_UnityEngine_GUIUtility->_2).cctor_finished_or_no_cctor == 0) goto label_05cf30ef;
label_05cf3074:
      pSVar4 = UnityEngine_GUIUtility__get_systemCopyBuffer((MethodInfo *)0x0);
    }
    else {
      if ((TypeInfo_UnityEngine_GUIUtility->_2).cctor_finished_or_no_cctor != 0) goto label_05cf3074;
label_05cf30ef:
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_GUIUtility);
      pSVar4 = UnityEngine_GUIUtility__get_systemCopyBuffer((MethodInfo *)0x0);
    }
    if (pSVar4 != (System_String_o *)0x0) {
      if ((pSVar4->fields)._stringLength < 1) {
        return;
      }
      iVar2 = 0;
      do {
        input_00 = System_String__get_Chars(pSVar4,iVar2,(MethodInfo *)0x0);
        UnityEngine_UI_InputField__Append_6cd7ea0
                  ((UnityEngine_UI_InputField_o *)__this,input_00,(MethodInfo *)0x0);
        iVar2 = iVar2 + 1;
      } while (iVar2 < (pSVar4->fields)._stringLength);
      return;
    }
    goto label_05cf3100;
  }
  if (Il2CppMethodInitialized_07547c98 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    Il2CppMethodInitialized_07547c98 = '\x01';
    if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) goto label_05cf2ec9;
label_05cf2e62:
    iVar3 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
    if (iVar3 == 1) goto label_05cf2e6e;
label_05cf2eda:
    bVar1 = UnityEngine_Input__GetKey(0x132,(MethodInfo *)0x0);
    iVar3 = 0x131;
  }
  else {
    if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor != 0) goto label_05cf2e62;
label_05cf2ec9:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
    iVar3 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
    if (iVar3 != 1) goto label_05cf2eda;
label_05cf2e6e:
    bVar1 = UnityEngine_Input__GetKey(0x136,(MethodInfo *)0x0);
    iVar3 = 0x135;
  }
  if (((!bVar1) && (bVar1 = UnityEngine_Input__GetKey(iVar3,(MethodInfo *)0x0), !bVar1)) ||
     (bVar1 = UnityEngine_Input__GetKeyDown(0x76,(MethodInfo *)0x0), !bVar1)) {
label_05cf30b7:
    UnityEngine_UI_InputField__Append((UnityEngine_UI_InputField_o *)__this,input,(MethodInfo *)0x0);
    return;
  }
  if (Il2CppMethodInitialized_07547c9b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GUIUtility);
    Il2CppMethodInitialized_07547c9b = '\x01';
  }
  if ((TypeInfo_UnityEngine_GUIUtility->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_GUIUtility);
  }
  pSVar4 = UnityEngine_GUIUtility__get_systemCopyBuffer((MethodInfo *)0x0);
  UnityEngine_UI_InputField__set_text((UnityEngine_UI_InputField_o *)__this,pSVar4,(MethodInfo *)0x0);
  __this_00 = (__this->fields).m_OnValueChanged;
  if (__this_00 != (UnityEngine_UI_InputField_OnChangeEvent_o *)0x0) {
    UnityEngine_Events_UnityEvent_object___Invoke
              ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,(Il2CppObject *)(__this->fields).m_Text,
               (MethodInfo_4319250 *)MethodInfo_UnityEngine_Events_UnityEvent_string_Invoke);
    pSVar4 = (__this->fields).m_Text;
    if (pSVar4 != (System_String_o *)0x0) {
      iVar3 = (pSVar4->fields)._stringLength;
      UnityEngine_UI_InputField__set_caretPosition
                ((UnityEngine_UI_InputField_o *)__this,iVar3,(MethodInfo *)0x0);
      (__this->fields).m_CaretSelectPosition = iVar3;
      return;
    }
  }
label_05cf3100:
  ThrowNullReferenceException();
}


// UI.InputFieldPasteable$$GetClipboard
// il2cpp: System_String_o* UI_InputFieldPasteable__GetClipboard (UI_InputFieldPasteable_o* __this, const MethodInfo* method);
// 0x5cf3110

System_String_o * UI_InputFieldPasteable__GetClipboard(UI_InputFieldPasteable_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_07547c9b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GUIUtility);
    Il2CppMethodInitialized_07547c9b = '\x01';
    uVar1 = (TypeInfo_UnityEngine_GUIUtility->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_UnityEngine_GUIUtility->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_GUIUtility);
    pSVar2 = UnityEngine_GUIUtility__get_systemCopyBuffer((MethodInfo *)0x0);
    return pSVar2;
  }
  pSVar2 = UnityEngine_GUIUtility__get_systemCopyBuffer((MethodInfo *)0x0);
  return pSVar2;
}


// UI.InputFieldPasteable$$.ctor
// il2cpp: void UI_InputFieldPasteable___ctor (UI_InputFieldPasteable_o* __this, const MethodInfo* method);
// 0x5cf3170

void UI_InputFieldPasteable___ctor(UI_InputFieldPasteable_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07547c9c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UI_InputField);
    Il2CppMethodInitialized_07547c9c = '\x01';
    uVar1 = (TypeInfo_UnityEngine_UI_InputField->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_UnityEngine_UI_InputField->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_UI_InputField);
    UnityEngine_UI_InputField___ctor((UnityEngine_UI_InputField_o *)__this,(MethodInfo *)0x0);
    return;
  }
  UnityEngine_UI_InputField___ctor((UnityEngine_UI_InputField_o *)__this,(MethodInfo *)0x0);
  return;
}


