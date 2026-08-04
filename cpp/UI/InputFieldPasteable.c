// Type: UI.InputFieldPasteable
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/InputFieldPasteable.cs
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/InputSettingElement.cs
// --------------------------------

// UI.InputFieldPasteable$$IsModifier
// il2cpp: bool UI_InputFieldPasteable__IsModifier (UI_InputFieldPasteable_o* __this, const MethodInfo* method);
// 0x43938a0

bool_conflict UI_InputFieldPasteable__IsModifier(UI_InputFieldPasteable_o *__this,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  
  if (g_data_057ae2bb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    g_data_057ae2bb = '\x01';
    iVar1 = *(int *)(TypeInfo_Application + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Application + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
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
// 0x4393940

bool_conflict UI_InputFieldPasteable__IsCopy(UI_InputFieldPasteable_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  
  bVar1 = UnityEngine_Input__GetKeyDown(99,(MethodInfo *)0x0);
  return bVar1;
}


// UI.InputFieldPasteable$$IsPaste
// il2cpp: bool UI_InputFieldPasteable__IsPaste (UI_InputFieldPasteable_o* __this, const MethodInfo* method);
// 0x4393950

bool_conflict UI_InputFieldPasteable__IsPaste(UI_InputFieldPasteable_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  
  bVar1 = UnityEngine_Input__GetKeyDown(0x76,(MethodInfo *)0x0);
  return bVar1;
}


// UI.InputFieldPasteable$$IsCut
// il2cpp: bool UI_InputFieldPasteable__IsCut (UI_InputFieldPasteable_o* __this, const MethodInfo* method);
// 0x4393960

bool_conflict UI_InputFieldPasteable__IsCut(UI_InputFieldPasteable_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  
  bVar1 = UnityEngine_Input__GetKeyDown(0x78,(MethodInfo *)0x0);
  return bVar1;
}


// UI.InputFieldPasteable$$Append
// il2cpp: void UI_InputFieldPasteable__Append (UI_InputFieldPasteable_o* __this, uint16_t input, const MethodInfo* method);
// 0x4393970

void UI_InputFieldPasteable__Append(UI_InputFieldPasteable_o *__this,uint16_t input,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  undefined6 in_register_00000032;
  MethodInfo *method_00;
  UI_InputFieldPasteable_o *__this_00;
  
  method_00 = (MethodInfo *)CONCAT62(in_register_00000032,input);
  if (g_data_057ae2bc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    g_data_057ae2bc = '\x01';
    iVar1 = *(int *)(TypeInfo_Application + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Application + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    __this_00 = (UI_InputFieldPasteable_o *)0x0;
    iVar1 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
  }
  else {
    __this_00 = (UI_InputFieldPasteable_o *)0x0;
    iVar1 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
  }
  if (((iVar1 == 1) && (bVar2 = UI_InputFieldPasteable__IsModifier(__this_00,method_00), (char)bVar2 != '\0'))
     && ((bVar2 = UnityEngine_Input__GetKeyDown(99,(MethodInfo *)0x0), (char)bVar2 != '\0' ||
         ((bVar2 = UnityEngine_Input__GetKeyDown(0x78,(MethodInfo *)0x0), (char)bVar2 != '\0' ||
          (bVar2 = UnityEngine_Input__GetKeyDown(0x76,(MethodInfo *)0x0), (char)bVar2 != '\0')))))) {
    return;
  }
  UnityEngine_UI_InputField__Append_50c7ec0((UnityEngine_UI_InputField_o *)__this,input,(MethodInfo *)0x0);
  return;
}


// UI.InputFieldPasteable$$Append
// il2cpp: void UI_InputFieldPasteable__Append (UI_InputFieldPasteable_o* __this, System_String_o* input, const MethodInfo* method);
// 0x4393a30

void UI_InputFieldPasteable__Append_4293a30
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
  if (g_data_057ae2bd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Invoke);
    g_data_057ae2bd = '\x01';
    if (*(int *)(TypeInfo_Application + 0xe4) != 0) goto label_04393a57;
label_04393ac7:
    il2cpp_runtime_helper_02337ed0();
    pUVar6 = (UI_InputFieldPasteable_o *)0x0;
    iVar2 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
  }
  else {
    if (*(int *)(TypeInfo_Application + 0xe4) == 0) goto label_04393ac7;
label_04393a57:
    pUVar6 = (UI_InputFieldPasteable_o *)0x0;
    iVar2 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
  }
  if ((iVar2 == 1) && (bVar3 = UI_InputFieldPasteable__IsModifier(pUVar6,pMVar5), (char)bVar3 != '\0')) {
    bVar3 = UnityEngine_Input__GetKeyDown(99,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      return;
    }
    pUVar6 = (UI_InputFieldPasteable_o *)&g_data_00000078;
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
      UnityEngine_UI_InputField__set_text((UnityEngine_UI_InputField_o *)__this,pSVar4,(MethodInfo *)0x0);
      __this_00 = (__this->fields).m_OnDidEndEdit;
      if (__this_00 != (UnityEngine_UI_InputField_EndEditEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent_object___Invoke
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
label_04393c0b:
      il2cpp_runtime_helper_022b2c90();
      UnityEngine_GUIUtility__get_systemCopyBuffer((MethodInfo *)0x0);
      return;
    }
  }
  else {
    if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pUVar6 = (UI_InputFieldPasteable_o *)0x0;
      iVar2 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
    }
    else {
      pUVar6 = (UI_InputFieldPasteable_o *)0x0;
      iVar2 = UnityEngine_Application__get_platform((MethodInfo *)0x0);
    }
    if (((iVar2 == 1) && (bVar3 = UI_InputFieldPasteable__IsModifier(pUVar6,pMVar5), (char)bVar3 != '\0')) &&
       (bVar3 = UnityEngine_Input__GetKeyDown(0x76,(MethodInfo *)0x0), (char)bVar3 != '\0')) {
      pSVar4 = UnityEngine_GUIUtility__get_systemCopyBuffer((MethodInfo *)0x0);
      if (pSVar4 != (System_String_o *)0x0) {
        if (0 < (pSVar4->fields)._stringLength) {
          iVar2 = 0;
          do {
            input_00 = System_String__get_Chars(pSVar4,iVar2,(MethodInfo *)0x0);
            UnityEngine_UI_InputField__Append_50c7ec0
                      ((UnityEngine_UI_InputField_o *)__this,input_00,(MethodInfo *)0x0);
            iVar2 = iVar2 + 1;
          } while (iVar2 < (pSVar4->fields)._stringLength);
        }
        return;
      }
      goto label_04393c0b;
    }
  }
  UnityEngine_UI_InputField__Append((UnityEngine_UI_InputField_o *)__this,input,(MethodInfo *)0x0);
  return;
}


// UI.InputFieldPasteable$$GetClipboard
// il2cpp: System_String_o* UI_InputFieldPasteable__GetClipboard (UI_InputFieldPasteable_o* __this, const MethodInfo* method);
// 0x4393c10

System_String_o * UI_InputFieldPasteable__GetClipboard(UI_InputFieldPasteable_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  pSVar1 = UnityEngine_GUIUtility__get_systemCopyBuffer((MethodInfo *)0x0);
  return pSVar1;
}


// UI.InputFieldPasteable$$.ctor
// il2cpp: void UI_InputFieldPasteable___ctor (UI_InputFieldPasteable_o* __this, const MethodInfo* method);
// 0x4393c20

void UI_InputFieldPasteable___ctor(UI_InputFieldPasteable_o *__this,MethodInfo *method)

{
  int iVar1;
  undefined4 uVar2;
  UnityEngine_Events_UnityEvent_T0__o *__this_00;
  UnityEngine_UI_InputField_SubmitEvent_o *__this_01;
  UnityEngine_UI_InputField_EndEditEvent_o *__this_02;
  UnityEngine_Event_o *__this_03;
  MethodInfo *method_00;
  
  if (g_data_057ae2be == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_InputField);
    g_data_057ae2be = '\x01';
    iVar1 = *(int *)(TypeInfo_InputField + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_InputField + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057b82e5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EndEditEvent,0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Event);
    il2cpp_runtime_helper_023445d0(&TypeInfo_OnChangeEvent);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Selectable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SubmitEvent);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057b82e5 = '\x01';
  }
  *(undefined2 *)&(__this->fields).m_ContentType = 0x2a;
  __this_00 = (UnityEngine_Events_UnityEvent_T0__o *)il2cpp_runtime_helper_023052d0(TypeInfo_SubmitEvent);
  if (g_data_057b832a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_UnityEvent_1_System_String);
    g_data_057b832a = '\x01';
  }
  UnityEngine_Events_UnityEvent_object____ctor(__this_00,MethodInfo_UnityEvent_1_System_String);
  *(UnityEngine_Events_UnityEvent_T0__o **)&(__this->fields).m_CharacterValidation = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).m_CharacterValidation,__this_00);
  __this_01 = (UnityEngine_UI_InputField_SubmitEvent_o *)il2cpp_runtime_helper_023052d0(TypeInfo_EndEditEvent);
  if (g_data_057b832b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_UnityEvent_1_System_String);
    g_data_057b832b = '\x01';
  }
  UnityEngine_Events_UnityEvent_object____ctor((UnityEngine_Events_UnityEvent_T0__o *)__this_01,MethodInfo_UnityEvent_1_System_String);
  (__this->fields).m_OnSubmit = __this_01;
  il2cpp_runtime_helper_022b4080(&(__this->fields).m_OnSubmit,__this_01);
  __this_02 = (UnityEngine_UI_InputField_EndEditEvent_o *)il2cpp_runtime_helper_023052d0(TypeInfo_OnChangeEvent);
  if (g_data_057b832c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_UnityEvent_1_System_String);
    g_data_057b832c = '\x01';
  }
  UnityEngine_Events_UnityEvent_object____ctor((UnityEngine_Events_UnityEvent_T0__o *)__this_02,MethodInfo_UnityEvent_1_System_String);
  (__this->fields).m_OnDidEndEdit = __this_02;
  il2cpp_runtime_helper_022b4080(&(__this->fields).m_OnDidEndEdit,__this_02);
  (__this->fields).m_OnValidateInput = (UnityEngine_UI_InputField_OnValidateInput_o *)0x3e48c8c93e48c8c9;
  (__this->fields).m_CaretColor.fields.r = 0.19607843;
  (__this->fields).m_CaretColor.fields.g = 1.0;
  (__this->fields).m_CaretColor.fields.a = 0.65882355;
  (__this->fields).m_CustomCaretColor = 0x3f4ececf;
  (__this->fields).m_SelectionColor.fields.r = 1.0;
  (__this->fields).m_SelectionColor.fields.g = 0.7529412;
  *(undefined8 *)&(__this->fields).m_SelectionColor.fields.a = **(undefined8 **)(g_data_057b9c00 + 0xb8);
  il2cpp_runtime_helper_022b4080(&(__this->fields).m_SelectionColor.fields.a);
  (__this->fields).m_Text = (System_String_o *)0x13f59999a;
  *(undefined1 *)((long)&(__this->fields).m_CaretBlinkRate + 1) = 1;
  uVar2 = ""._4_4_;
  (__this->fields).m_BlinkStartTime = (float)(undefined4)"";
  (__this->fields).m_DrawStart = uVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).m_BlinkStartTime);
  __this_03 = (UnityEngine_Event_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Event);
  UnityEngine_Event___ctor(__this_03,(MethodInfo *)0x0);
  *(UnityEngine_Event_o **)&(__this->fields).m_WasCanceled = __this_03;
  il2cpp_runtime_helper_022b4080(&(__this->fields).m_WasCanceled);
  if (*(int *)(TypeInfo_Selectable + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = (MethodInfo *)0x0;
  UnityEngine_UI_Selectable___ctor((UnityEngine_UI_Selectable_o *)__this,(MethodInfo *)0x0);
  UnityEngine_UI_InputField__EnforceTextHOverflow((UnityEngine_UI_InputField_o *)__this,method_00);
  return;
}


