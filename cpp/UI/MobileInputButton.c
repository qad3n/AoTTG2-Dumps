// Type: UI.MobileInputButton
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp_body_deref/Scripts/UI/MobileInputButton.cs
// Prior real C# source: none
// --------------------------------

// UI.MobileInputButton$$get_HasInputs
// il2cpp: bool UI_MobileInputButton__get_HasInputs (UI_MobileInputButton_o* __this, const MethodInfo* method);
// 0x5c6ad40

bool UI_MobileInputButton__get_HasInputs(UI_MobileInputButton_o *__this,MethodInfo *method)

{
  Settings_MobileInput_array *pSVar1;
  
  pSVar1 = (__this->fields)._inputs;
  if (pSVar1 == (Settings_MobileInput_array *)0x0) {
    return false;
  }
  return (int)pSVar1->max_length != 0;
}


// UI.MobileInputButton$$Setup
// il2cpp: void UI_MobileInputButton__Setup (UI_MobileInputButton_o* __this, Settings_MobileInput_array* inputs, bool aimAssistOnPress, bool aimAssistOnRelease, UI_MobileInputSkin_o* normalSkin, UI_MobileInputSkin_o* pressedSkin, int32_t shape, const MethodInfo* method);
// 0x5c6c5a0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c6c5d2: test rbp, rbp
// asm:   0x5c6c5d5: je 0x5c6c67e
// asm:   0x5c6c5db: test rbx, rbx
// asm:   0x5c6c5de: je 0x5c6c69b

void UI_MobileInputButton__Setup
               (UI_MobileInputButton_o *__this,Settings_MobileInput_array *inputs,bool aimAssistOnPress,
               bool aimAssistOnRelease,UI_MobileInputSkin_o *normalSkin,UI_MobileInputSkin_o *pressedSkin,
               int32_t shape,MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  
  if (Il2CppMethodInitialized_075478d5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInput_array);
    Il2CppMethodInitialized_075478d5 = '\x01';
  }
  if (inputs == (Settings_MobileInput_array *)0x0) {
    inputs = (Settings_MobileInput_array *)SZArrayNew(TypeInfo_Settings_MobileInput_array,0);
  }
  if (__this == (UI_MobileInputButton_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields)._inputs = inputs;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._inputs);
  (__this->fields)._aimAssistOnPress = aimAssistOnPress;
  (__this->fields)._aimAssistOnRelease = aimAssistOnRelease;
  (__this->fields)._normalSkin = normalSkin;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._normalSkin);
  (__this->fields)._pressedSkin = pressedSkin;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._pressedSkin);
  (__this->fields)._shape = shape;
  pUVar1 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
  (__this->fields)._image = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._image);
  return;
}


// UI.MobileInputButton$$OnDisable
// il2cpp: void UI_MobileInputButton__OnDisable (UI_MobileInputButton_o* __this, const MethodInfo* method);
// 0x5c6de20

void UI_MobileInputButton__OnDisable(UI_MobileInputButton_o *__this,MethodInfo *method)

{
  MethodInfo *in_RCX;
  
  UI_MobileInputButton__SetPressed_5b6de60(__this,false,(System_Func_MobileInput__bool__o *)0x0,in_RCX);
  return;
}


// UI.MobileInputButton$$OnPointerDown
// il2cpp: void UI_MobileInputButton__OnPointerDown (UI_MobileInputButton_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5c6de40

void UI_MobileInputButton__OnPointerDown
               (UI_MobileInputButton_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  MethodInfo *in_RCX;
  
  UI_MobileInputButton__SetPressed_5b6de60(__this,true,(System_Func_MobileInput__bool__o *)0x0,in_RCX);
  return;
}


// UI.MobileInputButton$$OnPointerUp
// il2cpp: void UI_MobileInputButton__OnPointerUp (UI_MobileInputButton_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5c6de50

void UI_MobileInputButton__OnPointerUp
               (UI_MobileInputButton_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  MethodInfo *in_RCX;
  
  UI_MobileInputButton__SetPressed_5b6de60(__this,false,(System_Func_MobileInput__bool__o *)0x0,in_RCX);
  return;
}


// UI.MobileInputButton$$SetPressed
// il2cpp: void UI_MobileInputButton__SetPressed (UI_MobileInputButton_o* __this, bool pressed, const MethodInfo* method);
// 0x5c6de30

void UI_MobileInputButton__SetPressed(UI_MobileInputButton_o *__this,bool pressed,MethodInfo *method)

{
  MethodInfo *in_RCX;
  
  UI_MobileInputButton__SetPressed_5b6de60(__this,pressed,(System_Func_MobileInput__bool__o *)0x0,in_RCX);
  return;
}


// UI.MobileInputButton$$SetHighlighted
// il2cpp: void UI_MobileInputButton__SetHighlighted (UI_MobileInputButton_o* __this, bool highlighted, const MethodInfo* method);
// 0x5c6df60

void UI_MobileInputButton__SetHighlighted(UI_MobileInputButton_o *__this,bool highlighted,MethodInfo *method)

{
  int32_t shape;
  UnityEngine_UI_Image_o *pUVar1;
  UI_MobileInputSkin_o *skin;
  bool bVar2;
  MethodInfo *in_RCX;
  
  if (Il2CppMethodInitialized_075478d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileControlSkinManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075478d6 = '\x01';
  }
  pUVar1 = (__this->fields)._image;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields)._image;
    skin = (&(__this->fields)._normalSkin)[highlighted];
    shape = (__this->fields)._shape;
    if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
    }
    UI_MobileControlSkinManager__ApplySkin(pUVar1,skin,shape,in_RCX);
    return;
  }
  return;
}


// UI.MobileInputButton$$SetPressed
// il2cpp: void UI_MobileInputButton__SetPressed (UI_MobileInputButton_o* __this, bool pressed, System_Func_MobileInput__bool__o* keepInputPressed, const MethodInfo* method);
// 0x5c6de60

void UI_MobileInputButton__SetPressed_5b6de60
               (UI_MobileInputButton_o *__this,bool pressed,System_Func_MobileInput__bool__o *keepInputPressed
               ,MethodInfo *method)

{
  uint uVar1;
  Settings_MobileInput_array *pSVar2;
  Settings_MobileInput_o *__this_00;
  char cVar3;
  ulong uVar4;
  System_Func_MobileInput__bool__o *extraout_RDX;
  System_Func_MobileInput__bool__o *method_00;
  ulong uVar5;
  long lVar6;
  
  if ((__this->fields)._pressed != pressed) {
    (__this->fields)._pressed = pressed;
    method_00 = keepInputPressed;
    if (*(char *)((long)__this + (0x29 - (ulong)pressed)) != '\0') {
      Settings_MobileAimAssist__SnapToNearestTarget((MethodInfo *)0x0);
      method_00 = extraout_RDX;
    }
    UI_MobileInputButton__SetHighlighted(__this,pressed,(MethodInfo *)method_00);
    pSVar2 = (__this->fields)._inputs;
    if (pSVar2 == (Settings_MobileInput_array *)0x0) {
label_05c6df57:
      ThrowNullReferenceException();
    }
    uVar4 = pSVar2->max_length;
    if ((keepInputPressed == (System_Func_MobileInput__bool__o *)0x0) || (pressed)) {
      if (0 < (int)uVar4) {
        lVar6 = 0;
        do {
          if ((uint)uVar4 <= (uint)lVar6) goto label_05c6df52;
          if (pSVar2->m_Items[lVar6] == (Settings_MobileInput_o *)0x0) goto label_05c6df57;
          Settings_MobileInput__SetPressed(pSVar2->m_Items[lVar6],pressed,(MethodInfo *)0x0);
          uVar1 = (uint)pSVar2->max_length;
          uVar4 = (ulong)uVar1;
          lVar6 = lVar6 + 1;
        } while ((int)lVar6 < (int)uVar1);
      }
    }
    else if (0 < (int)uVar4) {
      uVar4 = uVar4 & 0xffffffff;
      uVar5 = 0;
      do {
        if (uVar4 <= uVar5) {
label_05c6df52:
          ThrowIndexOutOfRangeException();
        }
        __this_00 = pSVar2->m_Items[uVar5];
        cVar3 = (*(code *)(keepInputPressed->fields).invoke_impl)
                          ((keepInputPressed->fields).method_code,__this_00,(keepInputPressed->fields).method)
        ;
        if (cVar3 == '\0') {
          if (__this_00 == (Settings_MobileInput_o *)0x0) goto label_05c6df57;
          Settings_MobileInput__SetPressed(__this_00,false,(MethodInfo *)0x0);
        }
        uVar5 = uVar5 + 1;
        uVar1 = (uint)pSVar2->max_length;
        uVar4 = (ulong)uVar1;
      } while ((long)uVar5 < (long)(int)uVar1);
    }
  }
  return;
}


// UI.MobileInputButton$$TriggerOneFrame
// il2cpp: void UI_MobileInputButton__TriggerOneFrame (UI_MobileInputButton_o* __this, const MethodInfo* method);
// 0x5c6e010

void UI_MobileInputButton__TriggerOneFrame(UI_MobileInputButton_o *__this,MethodInfo *method)

{
  Settings_MobileInput_array *pSVar1;
  uint uVar2;
  uint uVar3;
  
  pSVar1 = (__this->fields)._inputs;
  if (pSVar1 == (Settings_MobileInput_array *)0x0) {
label_05c6e05f:
    ThrowNullReferenceException();
  }
  uVar2 = (uint)pSVar1->max_length;
  if (0 < (int)uVar2) {
    uVar3 = 0;
    do {
      if (uVar2 <= uVar3) {
        ThrowIndexOutOfRangeException();
      }
      if (pSVar1->m_Items[(int)uVar3] == (Settings_MobileInput_o *)0x0) goto label_05c6e05f;
      Settings_MobileInput__PressForOneFrame(pSVar1->m_Items[(int)uVar3],(MethodInfo *)0x0);
      uVar3 = uVar3 + 1;
      uVar2 = (uint)pSVar1->max_length;
    } while ((int)uVar3 < (int)uVar2);
  }
  return;
}


// UI.MobileInputButton$$.ctor
// il2cpp: void UI_MobileInputButton___ctor (UI_MobileInputButton_o* __this, const MethodInfo* method);
// 0x5c6e070

void UI_MobileInputButton___ctor(UI_MobileInputButton_o *__this,MethodInfo *method)

{
  Settings_MobileInput_array *pSVar1;
  
  if (Il2CppMethodInitialized_075478d7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInput_array);
    Il2CppMethodInitialized_075478d7 = '\x01';
  }
  pSVar1 = (Settings_MobileInput_array *)SZArrayNew(TypeInfo_Settings_MobileInput_array,0);
  (__this->fields)._inputs = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._inputs);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


