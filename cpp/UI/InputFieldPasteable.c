// Type: UI.InputFieldPasteable
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/InputFieldPasteable.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/Elements/SettingElements/InputSettingElement.cs  [prior source available (delta unverified)]
// --------------------------------

// UI.InputFieldPasteable$$IsModifier
// il2cpp: bool UI_InputFieldPasteable__IsModifier (UI_InputFieldPasteable_o* __this, const MethodInfo* method);
// 0x4085930

bool_conflict
UI_InputFieldPasteable__IsModifier(UI_InputFieldPasteable_o *__this,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  
  if (DAT_05704540 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Application);
    DAT_05704540 = '\x01';
    iVar1 = *(int *)(TypeInfo_Application + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Application + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    iVar1 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
  }
  else {
    iVar1 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
  }
  if (iVar1 == 1) {
    bVar2 = UnityEngine_Input__GetKey(0x136,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      bVar2 = UnityEngine_Input__GetKey(0x135,(MethodInfo *)0x0);
      return bVar2;
    }
  }
  else {
    bVar2 = UnityEngine_Input__GetKey(0x132,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      bVar2 = UnityEngine_Input__GetKey(0x131,(MethodInfo *)0x0);
      return bVar2;
    }
  }
  return (bool_conflict)CONCAT71((uint7)(uint3)((uint)bVar2 >> 8),1);
}


// UI.InputFieldPasteable$$IsCopy
// il2cpp: bool UI_InputFieldPasteable__IsCopy (UI_InputFieldPasteable_o* __this, const MethodInfo* method);
// 0x40859d0

bool_conflict UI_InputFieldPasteable__IsCopy(UI_InputFieldPasteable_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  
  bVar1 = UnityEngine_Input__GetKeyDown(99,(MethodInfo *)0x0);
  return bVar1;
}


// UI.InputFieldPasteable$$IsPaste
// il2cpp: bool UI_InputFieldPasteable__IsPaste (UI_InputFieldPasteable_o* __this, const MethodInfo* method);
// 0x40859e0

bool_conflict UI_InputFieldPasteable__IsPaste(UI_InputFieldPasteable_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  
  bVar1 = UnityEngine_Input__GetKeyDown(0x76,(MethodInfo *)0x0);
  return bVar1;
}


// UI.InputFieldPasteable$$IsCut
// il2cpp: bool UI_InputFieldPasteable__IsCut (UI_InputFieldPasteable_o* __this, const MethodInfo* method);
// 0x40859f0

bool_conflict UI_InputFieldPasteable__IsCut(UI_InputFieldPasteable_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  
  bVar1 = UnityEngine_Input__GetKeyDown(0x78,(MethodInfo *)0x0);
  return bVar1;
}


// UI.InputFieldPasteable$$Append
// il2cpp: void UI_InputFieldPasteable__Append (UI_InputFieldPasteable_o* __this, uint16_t input, const MethodInfo* method);
// 0x4085a00

void UI_InputFieldPasteable__Append
               (UI_InputFieldPasteable_o *__this,uint16_t input,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  undefined6 in_register_00000032;
  MethodInfo *method_00;
  UI_InputFieldPasteable_o *__this_00;
  
  method_00 = (MethodInfo *)CONCAT62(in_register_00000032,input);
  if (DAT_05704541 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Application);
    DAT_05704541 = '\x01';
    iVar1 = *(int *)(TypeInfo_Application + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Application + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    __this_00 = (UI_InputFieldPasteable_o *)0x0;
    iVar1 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
  }
  else {
    __this_00 = (UI_InputFieldPasteable_o *)0x0;
    iVar1 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
  }
  if (((iVar1 == 1) &&
      (bVar2 = UI_InputFieldPasteable__IsModifier(__this_00,method_00), (char)bVar2 != '\0')) &&
     ((bVar2 = UnityEngine_Input__GetKeyDown(99,(MethodInfo *)0x0), (char)bVar2 != '\0' ||
      ((bVar2 = UnityEngine_Input__GetKeyDown(0x78,(MethodInfo *)0x0), (char)bVar2 != '\0' ||
       (bVar2 = UnityEngine_Input__GetKeyDown(0x76,(MethodInfo *)0x0), (char)bVar2 != '\0')))))) {
    return;
  }
  UnityEngine_UI_InputField__Append((UnityEngine_UI_InputField_o *)__this,input,(MethodInfo *)0x0);
  return;
}


// UI.InputFieldPasteable$$Append
// il2cpp: void UI_InputFieldPasteable__Append (UI_InputFieldPasteable_o* __this, System_String_o* input, const MethodInfo* method);
// 0x4085ac0

void UI_InputFieldPasteable__Append
               (UI_InputFieldPasteable_o *__this,System_String_o *input,MethodInfo *method)

{
  int32_t value;
  UnityEngine_UI_InputField_EndEditEvent_o *__this_00;
  long lVar1;
  uint16_t input_00;
  int iVar2;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  MethodInfo *pMVar5;
  UI_InputFieldPasteable_o *pUVar6;
  
  pMVar5 = (MethodInfo *)input;
  if (DAT_05704542 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Application);
    il2cpp_init_method_metadata(&MethodInfo_Void_Invoke);
    DAT_05704542 = '\x01';
    if (*(int *)(TypeInfo_Application + 0xe4) != 0) goto LAB_04085ae7;
LAB_04085b57:
    il2cpp_init_class();
    pUVar6 = (UI_InputFieldPasteable_o *)0x0;
    iVar2 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
  }
  else {
    if (*(int *)(TypeInfo_Application + 0xe4) == 0) goto LAB_04085b57;
LAB_04085ae7:
    pUVar6 = (UI_InputFieldPasteable_o *)0x0;
    iVar2 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
  }
  if ((iVar2 == 1) &&
     (bVar3 = UI_InputFieldPasteable__IsModifier(pUVar6,pMVar5), (char)bVar3 != '\0')) {
    bVar3 = UnityEngine_Input__GetKeyDown(99,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      return;
    }
    pUVar6 = (UI_InputFieldPasteable_o *)0x78;
    pMVar5 = (MethodInfo *)0x0;
    bVar3 = UnityEngine_Input__GetKeyDown(0x78,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      return;
    }
  }
  if (*(int *)&(__this->fields).m_AsteriskChar - 1U < 2) {
    bVar3 = UI_InputFieldPasteable__IsModifier(pUVar6,pMVar5);
    if (((char)bVar3 != '\0') &&
       (bVar3 = UnityEngine_Input__GetKeyDown(0x76,(MethodInfo *)0x0), (char)bVar3 != '\0')) {
      pSVar4 = UnityEngine_GUIUtility__get_systemCopyBuffer((MethodInfo *)0x0);
      UnityEngine_UI_InputField__set_text
                ((UnityEngine_UI_InputField_o *)__this,pSVar4,(MethodInfo *)0x0);
      __this_00 = (__this->fields).m_OnDidEndEdit;
      if (__this_00 != (UnityEngine_UI_InputField_EndEditEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent<object>__Invoke
                  ((UnityEngine_Events_UnityEvent_T0__o *)__this_00,
                   *(Il2CppObject **)&(__this->fields).m_SelectionColor.fields.a,MethodInfo_Void_Invoke);
        lVar1 = *(long *)&(__this->fields).m_SelectionColor.fields.a;
        if (lVar1 != 0) {
          value = *(int32_t *)(lVar1 + 0x10);
          UnityEngine_UI_InputField__set_caretPosition
                    ((UnityEngine_UI_InputField_o *)__this,value,(MethodInfo *)0x0);
          (__this->fields).m_ReadOnly = value;
          return;
        }
      }
LAB_04085c9b:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  else {
    if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
      il2cpp_init_class();
      pUVar6 = (UI_InputFieldPasteable_o *)0x0;
      iVar2 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
    }
    else {
      pUVar6 = (UI_InputFieldPasteable_o *)0x0;
      iVar2 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
    }
    if (((iVar2 == 1) &&
        (bVar3 = UI_InputFieldPasteable__IsModifier(pUVar6,pMVar5), (char)bVar3 != '\0')) &&
       (bVar3 = UnityEngine_Input__GetKeyDown(0x76,(MethodInfo *)0x0), (char)bVar3 != '\0')) {
      pSVar4 = UnityEngine_GUIUtility__get_systemCopyBuffer((MethodInfo *)0x0);
      if (pSVar4 != (System_String_o *)0x0) {
        if (0 < (pSVar4->fields)._stringLength) {
          iVar2 = 0;
          do {
            input_00 = System_String__get_Chars(pSVar4,iVar2,(MethodInfo *)0x0);
            UnityEngine_UI_InputField__Append
                      ((UnityEngine_UI_InputField_o *)__this,input_00,(MethodInfo *)0x0);
            iVar2 = iVar2 + 1;
          } while (iVar2 < (pSVar4->fields)._stringLength);
        }
        return;
      }
      goto LAB_04085c9b;
    }
  }
  UnityEngine_UI_InputField__Append((UnityEngine_UI_InputField_o *)__this,input,(MethodInfo *)0x0);
  return;
}


// UI.InputFieldPasteable$$GetClipboard
// il2cpp: System_String_o* UI_InputFieldPasteable__GetClipboard (UI_InputFieldPasteable_o* __this, const MethodInfo* method);
// 0x4085ca0

System_String_o *
UI_InputFieldPasteable__GetClipboard(UI_InputFieldPasteable_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  pSVar1 = UnityEngine_GUIUtility__get_systemCopyBuffer((MethodInfo *)0x0);
  return pSVar1;
}


// UI.InputFieldPasteable$$.ctor
// il2cpp: void UI_InputFieldPasteable___ctor (UI_InputFieldPasteable_o* __this, const MethodInfo* method);
// 0x4085cb0

void UI_InputFieldPasteable___ctor(UI_InputFieldPasteable_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05704543 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InputField);
    DAT_05704543 = '\x01';
    iVar1 = *(int *)(TypeInfo_InputField + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_InputField + 0xe4);
  }
  if (iVar1 != 0) {
    UnityEngine_UI_InputField___ctor((UnityEngine_UI_InputField_o *)__this,(MethodInfo *)0x0);
    return;
  }
  il2cpp_init_class();
  UnityEngine_UI_InputField___ctor((UnityEngine_UI_InputField_o *)__this,(MethodInfo *)0x0);
  return;
}


