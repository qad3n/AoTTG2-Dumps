// Type: UI.MobileInputHoldButton
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp_body_deref/Scripts/UI/MobileInputHoldButton.cs
// Prior real C# source: none
// --------------------------------

// UI.MobileInputHoldButton$$SetupHoldButton
// il2cpp: void UI_MobileInputHoldButton__SetupHoldButton (UI_MobileInputHoldButton_o* __this, UnityEngine_RectTransform_o* rect, Settings_MobileInput_array* inputs, UI_MobileInputSkin_o* normalSkin, UI_MobileInputSkin_o* pressedSkin, int32_t shape, const MethodInfo* method);
// 0x5c6a720
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c6a746: test rbx, rbx
// asm:   0x5c6a749: je 0x5c6a79a
// asm:   0x5c6a74b: test rbp, rbp
// asm:   0x5c6a74e: je 0x5c6a7b3

void UI_MobileInputHoldButton__SetupHoldButton
               (UI_MobileInputHoldButton_o *__this,UnityEngine_RectTransform_o *rect,
               Settings_MobileInput_array *inputs,UI_MobileInputSkin_o *normalSkin,
               UI_MobileInputSkin_o *pressedSkin,int32_t shape,MethodInfo *method)

{
  int32_t iVar1;
  undefined4 in_register_0000008c;
  
  iVar1 = shape;
  if (Il2CppMethodInitialized_075478d8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInput_array);
    Il2CppMethodInitialized_075478d8 = '\x01';
  }
  if (inputs == (Settings_MobileInput_array *)0x0) {
    inputs = (Settings_MobileInput_array *)SZArrayNew(TypeInfo_Settings_MobileInput_array,0);
  }
  if (__this == (UI_MobileInputHoldButton_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields)._inputs = inputs;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._inputs);
  UI_MobileInputHoldControl__Setup
            ((UI_MobileInputHoldControl_o *)__this,rect,normalSkin,pressedSkin,shape,
             (MethodInfo *)CONCAT44(in_register_0000008c,iVar1));
  return;
}


// UI.MobileInputHoldButton$$OnControlPressed
// il2cpp: void UI_MobileInputHoldButton__OnControlPressed (UI_MobileInputHoldButton_o* __this, const MethodInfo* method);
// 0x5c6e1b0

void UI_MobileInputHoldButton__OnControlPressed(UI_MobileInputHoldButton_o *__this,MethodInfo *method)

{
  Settings_MobileInput_array *pSVar1;
  uint uVar2;
  uint uVar3;
  
  pSVar1 = (__this->fields)._inputs;
  if (pSVar1 == (Settings_MobileInput_array *)0x0) {
label_05c6e204:
    ThrowNullReferenceException();
  }
  uVar2 = (uint)pSVar1->max_length;
  if (0 < (int)uVar2) {
    uVar3 = 0;
    do {
      if (uVar2 <= uVar3) {
        ThrowIndexOutOfRangeException();
      }
      if (pSVar1->m_Items[(int)uVar3] == (Settings_MobileInput_o *)0x0) goto label_05c6e204;
      Settings_MobileInput__SetPressed(pSVar1->m_Items[(int)uVar3],true,(MethodInfo *)0x0);
      uVar3 = uVar3 + 1;
      uVar2 = (uint)pSVar1->max_length;
    } while ((int)uVar3 < (int)uVar2);
  }
  return;
}


// UI.MobileInputHoldButton$$OnControlReleased
// il2cpp: void UI_MobileInputHoldButton__OnControlReleased (UI_MobileInputHoldButton_o* __this, const MethodInfo* method);
// 0x5c6e210

void UI_MobileInputHoldButton__OnControlReleased(UI_MobileInputHoldButton_o *__this,MethodInfo *method)

{
  Settings_MobileInput_array *pSVar1;
  uint uVar2;
  uint uVar3;
  
  pSVar1 = (__this->fields)._inputs;
  if (pSVar1 == (Settings_MobileInput_array *)0x0) {
label_05c6e261:
    ThrowNullReferenceException();
  }
  uVar2 = (uint)pSVar1->max_length;
  if (0 < (int)uVar2) {
    uVar3 = 0;
    do {
      if (uVar2 <= uVar3) {
        ThrowIndexOutOfRangeException();
      }
      if (pSVar1->m_Items[(int)uVar3] == (Settings_MobileInput_o *)0x0) goto label_05c6e261;
      Settings_MobileInput__SetPressed(pSVar1->m_Items[(int)uVar3],false,(MethodInfo *)0x0);
      uVar3 = uVar3 + 1;
      uVar2 = (uint)pSVar1->max_length;
    } while ((int)uVar3 < (int)uVar2);
  }
  return;
}


// UI.MobileInputHoldButton$$IsInputHeldByControl
// il2cpp: bool UI_MobileInputHoldButton__IsInputHeldByControl (UI_MobileInputHoldButton_o* __this, Settings_MobileInput_o* input, const MethodInfo* method);
// 0x5c6e270
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c6e28c: nop dword ptr [rax]

bool UI_MobileInputHoldButton__IsInputHeldByControl
               (UI_MobileInputHoldButton_o *__this,Settings_MobileInput_o *input,MethodInfo *method)

{
  int iVar1;
  Settings_MobileInput_array *pSVar2;
  int iVar3;
  bool bVar4;
  
  if ((input != (Settings_MobileInput_o *)0x0) &&
     (pSVar2 = (__this->fields)._inputs, pSVar2 != (Settings_MobileInput_array *)0x0)) {
    iVar1 = (int)pSVar2->max_length;
    if (iVar1 < 1) {
      return false;
    }
    iVar3 = 0;
    do {
      if (pSVar2->m_Items[iVar3] == input) {
        return true;
      }
      bVar4 = iVar1 + -1 != iVar3;
      iVar3 = iVar3 + 1;
    } while (bVar4);
  }
  return false;
}


// UI.MobileInputHoldButton$$.ctor
// il2cpp: void UI_MobileInputHoldButton___ctor (UI_MobileInputHoldButton_o* __this, const MethodInfo* method);
// 0x5c6e2f0

void UI_MobileInputHoldButton___ctor(UI_MobileInputHoldButton_o *__this,MethodInfo *method)

{
  Settings_MobileInput_array *pSVar1;
  System_Collections_Generic_List_MobileInputHoldControl_SlideButton__o *__this_00;
  
  if (Il2CppMethodInitialized_075478d9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInput_array);
    Il2CppMethodInitialized_075478d9 = '\x01';
  }
  pSVar1 = (Settings_MobileInput_array *)SZArrayNew(TypeInfo_Settings_MobileInput_array,0);
  (__this->fields)._inputs = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._inputs);
  if (Il2CppMethodInitialized_075478e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MobileInputHoldControl_SlideButton_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_MobileInputHoldControl_SlideButton);
    Il2CppMethodInitialized_075478e3 = '\x01';
  }
  (__this->fields)._pointerId = -0x80000000;
  (__this->fields)._moveContentWithTouch = true;
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_List_MobileInputHoldControl_SlideButton);
  System_Collections_Generic_List_MobileInputHoldControl_SlideButton____ctor
            (__this_00,
             (MethodInfo_3AC76F0 *)
             MethodInfo_System_Collections_Generic_List_MobileInputHoldControl_SlideButton_ctor);
  (__this->fields)._slideButtons = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._slideButtons);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


