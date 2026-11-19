// Type: UI.MobileInputToggleButton
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/UI/MobileInputToggleButton.cs
// Prior real C# source: none
// --------------------------------

// UI.MobileInputToggleButton$$Setup
// il2cpp: void UI_MobileInputToggleButton__Setup (UI_MobileInputToggleButton_o* __this, Settings_MobileInput_array* inputs, UI_MobileInputSkin_o* offSkin, UI_MobileInputSkin_o* onSkin, int32_t shape, const MethodInfo* method);
// 0x5c6d0c0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c6d0e0: test rbp, rbp
// asm:   0x5c6d0e3: je 0x5c6d180
// asm:   0x5c6d0e9: test rbx, rbx
// asm:   0x5c6d0ec: je 0x5c6d19d

void UI_MobileInputToggleButton__Setup
               (UI_MobileInputToggleButton_o *__this,Settings_MobileInput_array *inputs,
               UI_MobileInputSkin_o *offSkin,UI_MobileInputSkin_o *onSkin,int32_t shape,MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  
  if (Il2CppMethodInitialized_07547909 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInput_array);
    Il2CppMethodInitialized_07547909 = '\x01';
  }
  if (inputs == (Settings_MobileInput_array *)0x0) {
    inputs = (Settings_MobileInput_array *)SZArrayNew(TypeInfo_Settings_MobileInput_array,0);
  }
  if (__this == (UI_MobileInputToggleButton_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields)._inputs = inputs;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._inputs);
  pUVar1 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
  (__this->fields)._image = pUVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._image);
  (__this->fields)._offSkin = offSkin;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._offSkin);
  (__this->fields)._onSkin = onSkin;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._onSkin);
  (__this->fields)._shape = shape;
  UI_MobileInputToggleButton__RefreshColor(__this,(MethodInfo *)onSkin);
  return;
}


// UI.MobileInputToggleButton$$OnEnable
// il2cpp: void UI_MobileInputToggleButton__OnEnable (UI_MobileInputToggleButton_o* __this, const MethodInfo* method);
// 0x5c71a80

void UI_MobileInputToggleButton__OnEnable(UI_MobileInputToggleButton_o *__this,MethodInfo *method)

{
  System_Action_o *__this_00;
  
  if (Il2CppMethodInitialized_0754790a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBridge);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MobileInputToggleButton_OnStateCleared);
    Il2CppMethodInitialized_0754790a = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
  System_Action___ctor
            (__this_00,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MobileInputToggleButton_OnStateCleared,
             (MethodInfo *)0x0);
  if ((TypeInfo_Settings_MobileInputBridge->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBridge);
  }
  Settings_MobileInputBridge__add_OnStateCleared(__this_00,(MethodInfo *)0x0);
  return;
}


// UI.MobileInputToggleButton$$OnDisable
// il2cpp: void UI_MobileInputToggleButton__OnDisable (UI_MobileInputToggleButton_o* __this, const MethodInfo* method);
// 0x5c71b10

void UI_MobileInputToggleButton__OnDisable(UI_MobileInputToggleButton_o *__this,MethodInfo *method)

{
  Settings_MobileInput_array *pSVar1;
  uint uVar2;
  System_Action_o *__this_00;
  uint uVar3;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754790b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBridge);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MobileInputToggleButton_OnStateCleared);
    Il2CppMethodInitialized_0754790b = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
  System_Action___ctor
            (__this_00,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MobileInputToggleButton_OnStateCleared,
             (MethodInfo *)0x0);
  if ((TypeInfo_Settings_MobileInputBridge->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBridge);
  }
  method_00 = (MethodInfo *)0x0;
  Settings_MobileInputBridge__remove_OnStateCleared(__this_00,(MethodInfo *)0x0);
  if ((__this->fields)._active == false) {
    return;
  }
  (__this->fields)._active = false;
  pSVar1 = (__this->fields)._inputs;
  if (pSVar1 == (Settings_MobileInput_array *)0x0) {
label_05c71bfc:
    ThrowNullReferenceException();
  }
  uVar2 = (uint)pSVar1->max_length;
  if (0 < (int)uVar2) {
    uVar3 = 0;
    do {
      if (uVar2 <= uVar3) {
        ThrowIndexOutOfRangeException();
      }
      if (pSVar1->m_Items[(int)uVar3] == (Settings_MobileInput_o *)0x0) goto label_05c71bfc;
      method_00 = (MethodInfo *)0x0;
      Settings_MobileInput__SetPressed(pSVar1->m_Items[(int)uVar3],false,(MethodInfo *)0x0);
      uVar3 = uVar3 + 1;
      uVar2 = (uint)pSVar1->max_length;
    } while ((int)uVar3 < (int)uVar2);
  }
  UI_MobileInputToggleButton__RefreshColor(__this,method_00);
  return;
}


// UI.MobileInputToggleButton$$OnStateCleared
// il2cpp: void UI_MobileInputToggleButton__OnStateCleared (UI_MobileInputToggleButton_o* __this, const MethodInfo* method);
// 0x5c71c90

void UI_MobileInputToggleButton__OnStateCleared(UI_MobileInputToggleButton_o *__this,MethodInfo *method)

{
  if ((__this->fields)._active == false) {
    return;
  }
  (__this->fields)._active = false;
  UI_MobileInputToggleButton__RefreshColor(__this,method);
  return;
}


// UI.MobileInputToggleButton$$OnPointerClick
// il2cpp: void UI_MobileInputToggleButton__OnPointerClick (UI_MobileInputToggleButton_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5c71ca0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c71cc9: nop dword ptr [rax]

void UI_MobileInputToggleButton__OnPointerClick
               (UI_MobileInputToggleButton_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  bool bVar1;
  Settings_MobileInput_array *pSVar2;
  uint uVar3;
  uint uVar4;
  
  bVar1 = (__this->fields)._active;
  (__this->fields)._active = (bool)(bVar1 ^ 1);
  pSVar2 = (__this->fields)._inputs;
  if (pSVar2 == (Settings_MobileInput_array *)0x0) {
label_05c71d11:
    ThrowNullReferenceException();
  }
  uVar3 = (uint)pSVar2->max_length;
  if (0 < (int)uVar3) {
    uVar4 = 0;
    do {
      if (uVar3 <= uVar4) {
        ThrowIndexOutOfRangeException();
      }
      if (pSVar2->m_Items[(int)uVar4] == (Settings_MobileInput_o *)0x0) goto label_05c71d11;
      eventData = (UnityEngine_EventSystems_PointerEventData_o *)(ulong)(bVar1 == false);
      Settings_MobileInput__SetPressed(pSVar2->m_Items[(int)uVar4],bVar1 == false,(MethodInfo *)0x0);
      uVar4 = uVar4 + 1;
      uVar3 = (uint)pSVar2->max_length;
    } while ((int)uVar4 < (int)uVar3);
  }
  UI_MobileInputToggleButton__RefreshColor(__this,(MethodInfo *)eventData);
  return;
}


// UI.MobileInputToggleButton$$SetActive
// il2cpp: void UI_MobileInputToggleButton__SetActive (UI_MobileInputToggleButton_o* __this, bool active, const MethodInfo* method);
// 0x5c71c10

void UI_MobileInputToggleButton__SetActive
               (UI_MobileInputToggleButton_o *__this,bool active,MethodInfo *method)

{
  Settings_MobileInput_array *pSVar1;
  uint uVar2;
  uint uVar3;
  undefined7 in_register_00000031;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)CONCAT71(in_register_00000031,active);
  if ((__this->fields)._active == active) {
    return;
  }
  (__this->fields)._active = active;
  pSVar1 = (__this->fields)._inputs;
  if (pSVar1 == (Settings_MobileInput_array *)0x0) {
label_05c71c8b:
    ThrowNullReferenceException();
  }
  uVar2 = (uint)pSVar1->max_length;
  if (0 < (int)uVar2) {
    uVar3 = 0;
    do {
      if (uVar2 <= uVar3) {
        ThrowIndexOutOfRangeException();
      }
      if (pSVar1->m_Items[(int)uVar3] == (Settings_MobileInput_o *)0x0) goto label_05c71c8b;
      method_00 = (MethodInfo *)(ulong)active;
      Settings_MobileInput__SetPressed(pSVar1->m_Items[(int)uVar3],active,(MethodInfo *)0x0);
      uVar3 = uVar3 + 1;
      uVar2 = (uint)pSVar1->max_length;
    } while ((int)uVar3 < (int)uVar2);
  }
  UI_MobileInputToggleButton__RefreshColor(__this,method_00);
  return;
}


// UI.MobileInputToggleButton$$RefreshColor
// il2cpp: void UI_MobileInputToggleButton__RefreshColor (UI_MobileInputToggleButton_o* __this, const MethodInfo* method);
// 0x5c719e0

void UI_MobileInputToggleButton__RefreshColor(UI_MobileInputToggleButton_o *__this,MethodInfo *method)

{
  int32_t shape;
  UnityEngine_UI_Image_o *pUVar1;
  UI_MobileInputSkin_o *skin;
  bool bVar2;
  MethodInfo *in_RCX;
  
  if (Il2CppMethodInitialized_0754790c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileControlSkinManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754790c = '\x01';
  }
  pUVar1 = (__this->fields)._image;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields)._image;
    skin = (&(__this->fields)._offSkin)[(__this->fields)._active];
    shape = (__this->fields)._shape;
    if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
    }
    UI_MobileControlSkinManager__ApplySkin(pUVar1,skin,shape,in_RCX);
    return;
  }
  return;
}


// UI.MobileInputToggleButton$$.ctor
// il2cpp: void UI_MobileInputToggleButton___ctor (UI_MobileInputToggleButton_o* __this, const MethodInfo* method);
// 0x5c71d20

void UI_MobileInputToggleButton___ctor(UI_MobileInputToggleButton_o *__this,MethodInfo *method)

{
  Settings_MobileInput_array *pSVar1;
  
  if (Il2CppMethodInitialized_0754790d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInput_array);
    Il2CppMethodInitialized_0754790d = '\x01';
  }
  pSVar1 = (Settings_MobileInput_array *)SZArrayNew(TypeInfo_Settings_MobileInput_array,0);
  (__this->fields)._inputs = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._inputs);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


