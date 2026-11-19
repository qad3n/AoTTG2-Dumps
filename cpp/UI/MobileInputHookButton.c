// Type: UI.MobileInputHookButton
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp_body_deref/Scripts/UI/MobileInputHookButton.cs
// Prior real C# source: none
// --------------------------------

// UI.MobileInputHookButton$$SetupHookButton
// il2cpp: void UI_MobileInputHookButton__SetupHookButton (UI_MobileInputHookButton_o* __this, UnityEngine_RectTransform_o* rect, UI_MobileInputSkin_o* normalSkin, UI_MobileInputSkin_o* pressedSkin, int32_t shape, const MethodInfo* method);
// 0x5c6a010

void UI_MobileInputHookButton__SetupHookButton
               (UI_MobileInputHookButton_o *__this,UnityEngine_RectTransform_o *rect,
               UI_MobileInputSkin_o *normalSkin,UI_MobileInputSkin_o *pressedSkin,int32_t shape,
               MethodInfo *method)

{
  UI_MobileInputHookButton__CacheInputs(__this,(MethodInfo *)rect);
  UI_MobileInputHoldControl__Setup
            ((UI_MobileInputHoldControl_o *)__this,rect,normalSkin,pressedSkin,shape,method);
  return;
}


// UI.MobileInputHookButton$$OnControlPressed
// il2cpp: void UI_MobileInputHookButton__OnControlPressed (UI_MobileInputHookButton_o* __this, const MethodInfo* method);
// 0x5c6f080

void UI_MobileInputHookButton__OnControlPressed(UI_MobileInputHookButton_o *__this,MethodInfo *method)

{
  Settings_MobileInput_o *pSVar1;
  
  pSVar1 = (__this->fields)._activeHookInput;
  if (pSVar1 != (Settings_MobileInput_o *)0x0) {
    method = (MethodInfo *)0x0;
    Settings_MobileInput__SetPressed(pSVar1,false,(MethodInfo *)0x0);
  }
  pSVar1 = UI_MobileInputHookButton__ChooseHookInput(__this,method);
  (__this->fields)._activeHookInput = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._activeHookInput);
  pSVar1 = (__this->fields)._activeHookInput;
  if (pSVar1 == (Settings_MobileInput_o *)0x0) {
    return;
  }
  Settings_MobileInput__SetPressed(pSVar1,true,(MethodInfo *)0x0);
  return;
}


// UI.MobileInputHookButton$$OnControlReleased
// il2cpp: void UI_MobileInputHookButton__OnControlReleased (UI_MobileInputHookButton_o* __this, const MethodInfo* method);
// 0x5c6f2b0

void UI_MobileInputHookButton__OnControlReleased(UI_MobileInputHookButton_o *__this,MethodInfo *method)

{
  Settings_MobileInput_o *__this_00;
  Settings_MobileInput_o **targetAddress;
  
  __this_00 = (__this->fields)._activeHookInput;
  targetAddress = &(__this->fields)._activeHookInput;
  if (__this_00 != (Settings_MobileInput_o *)0x0) {
    Settings_MobileInput__SetPressed(__this_00,false,(MethodInfo *)0x0);
  }
  *targetAddress = (Settings_MobileInput_o *)0x0;
  Il2CppCodeGenWriteBarrier(targetAddress);
  return;
}


// UI.MobileInputHookButton$$IsInputHeldByControl
// il2cpp: bool UI_MobileInputHookButton__IsInputHeldByControl (UI_MobileInputHookButton_o* __this, Settings_MobileInput_o* input, const MethodInfo* method);
// 0x5c6f2e0

bool UI_MobileInputHookButton__IsInputHeldByControl
               (UI_MobileInputHookButton_o *__this,Settings_MobileInput_o *input,MethodInfo *method)

{
  return (__this->fields)._activeHookInput == input;
}


// UI.MobileInputHookButton$$ChooseHookInput
// il2cpp: Settings_MobileInput_o* UI_MobileInputHookButton__ChooseHookInput (UI_MobileInputHookButton_o* __this, const MethodInfo* method);
// 0x5c6f0e0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c6f1fc: jmp 0x5c6f220
// asm:   0x5c6f20d: test bpl, bpl
// asm:   0x5c6f215: jmp 0x5c6f229
// asm:   0x5c6f29b: jmp 0x5c6f198

Settings_MobileInput_o *
UI_MobileInputHookButton__ChooseHookInput(UI_MobileInputHookButton_o *__this,MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  GameManagers_BaseGameManager_o *pGVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  MethodInfo *method_00;
  Characters_Human_o *human;
  Characters_Human_o *pCVar7;
  Characters_HookUseable_o *pCVar8;
  Settings_MobileInput_o **ppSVar9;
  
  if (Il2CppMethodInitialized_075478e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075478e6 = '\x01';
  }
  if (Il2CppMethodInitialized_075478e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_075478e8 = '\x01';
  }
  pGVar3 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (pGVar3 == (GameManagers_BaseGameManager_o *)0x0) {
label_05c6f183:
    human = (Characters_Human_o *)0x0;
    uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
    if ((((pGVar3->klass->_2).typeHierarchyDepth < bVar1) ||
        ((pGVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
         (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) ||
       (pCVar7 = (*(uint64_t *)((char *)pGVar3 + 0x80)), pCVar7 == (Characters_Human_o *)0x0)) goto label_05c6f183;
    bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
    if ((pCVar7->klass->_2).typeHierarchyDepth < bVar1) goto label_05c6f183;
    human = (Characters_Human_o *)0x0;
    if ((pCVar7->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_Human) {
      human = pCVar7;
    }
    uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pCVar7 = human;
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)human,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    return (Settings_MobileInput_o *)0x0;
  }
  bVar4 = UI_MobileInputHookButton__IsCameraLookHumanRight
                    ((UI_MobileInputHookButton_o *)pCVar7,human,method_00);
  if (human == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar8 = (human->fields).HookLeft;
  if (pCVar8 == (Characters_HookUseable_o *)0x0) {
    bVar5 = true;
    pCVar8 = (human->fields).HookRight;
    if (pCVar8 != (Characters_HookUseable_o *)0x0) goto label_05c6f1ec;
label_05c6f210:
    if (bVar5) {
      return (Settings_MobileInput_o *)0x0;
    }
  }
  else {
    bVar5 = Characters_HookUseable__IsReady(pCVar8,(MethodInfo *)0x0);
    bVar5 = !bVar5;
    pCVar8 = (human->fields).HookRight;
    if (pCVar8 == (Characters_HookUseable_o *)0x0) goto label_05c6f210;
label_05c6f1ec:
    bVar6 = Characters_HookUseable__IsReady(pCVar8,(MethodInfo *)0x0);
    if (bVar4) {
      if (!bVar6) goto label_05c6f210;
label_05c6f220:
      ppSVar9 = &(__this->fields)._rightHookInput;
      goto label_05c6f22d;
    }
    if (bVar5) {
      if (!bVar6) {
        return (Settings_MobileInput_o *)0x0;
      }
      goto label_05c6f220;
    }
  }
  ppSVar9 = &(__this->fields)._leftHookInput;
label_05c6f22d:
  return *ppSVar9;
}


// UI.MobileInputHookButton$$CacheInputs
// il2cpp: void UI_MobileInputHookButton__CacheInputs (UI_MobileInputHookButton_o* __this, const MethodInfo* method);
// 0x5c6efd0

void UI_MobileInputHookButton__CacheInputs(UI_MobileInputHookButton_o *__this,MethodInfo *method)

{
  Settings_MobileInput_o *pSVar1;
  
  if (Il2CppMethodInitialized_075478e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBridge);
    il2cpp_codegen_initialize_runtime_metadata(&"Human.HookRight");
    il2cpp_codegen_initialize_runtime_metadata(&"Human.HookLeft");
    Il2CppMethodInitialized_075478e7 = '\x01';
  }
  if ((TypeInfo_Settings_MobileInputBridge->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBridge);
  }
  pSVar1 = Settings_MobileInputBridge__GetActionInput("Human.HookLeft",(MethodInfo *)0x0);
  (__this->fields)._leftHookInput = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._leftHookInput);
  pSVar1 = Settings_MobileInputBridge__GetActionInput("Human.HookRight",(MethodInfo *)0x0);
  (__this->fields)._rightHookInput = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._rightHookInput);
  return;
}


// UI.MobileInputHookButton$$GetCurrentHuman
// il2cpp: Characters_Human_o* UI_MobileInputHookButton__GetCurrentHuman (UI_MobileInputHookButton_o* __this, const MethodInfo* method);
// 0x5c6f2f0

Characters_Human_o *
UI_MobileInputHookButton__GetCurrentHuman(UI_MobileInputHookButton_o *__this,MethodInfo *method)

{
  byte bVar1;
  GameManagers_BaseGameManager_o *pGVar2;
  Characters_Human_o *pCVar3;
  Characters_Human_o *pCVar4;
  
  if (Il2CppMethodInitialized_075478e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_075478e8 = '\x01';
  }
  pGVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (pGVar2 != (GameManagers_BaseGameManager_o *)0x0) {
    bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
    if (((bVar1 <= (pGVar2->klass->_2).typeHierarchyDepth) &&
        ((pGVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
         (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) &&
       (pCVar3 = (*(uint64_t *)((char *)pGVar2 + 0x80)), pCVar3 != (Characters_Human_o *)0x0)) {
      bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
      if (bVar1 <= (pCVar3->klass->_2).typeHierarchyDepth) {
        pCVar4 = (Characters_Human_o *)0x0;
        if ((pCVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_Human) {
          pCVar4 = pCVar3;
        }
        return pCVar4;
      }
    }
  }
  return (Characters_Human_o *)0x0;
}


// UI.MobileInputHookButton$$IsCameraLookHumanRight
// il2cpp: bool UI_MobileInputHookButton__IsCameraLookHumanRight (UI_MobileInputHookButton_o* __this, Characters_Human_o* human, const MethodInfo* method);
// 0x5c6f3b0

bool UI_MobileInputHookButton__IsCameraLookHumanRight
               (UI_MobileInputHookButton_o *__this,Characters_Human_o *human,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  bool bVar2;
  UnityEngine_Camera_o *x;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Vector3_o UVar4;
  UnityEngine_Vector3_o UVar5;
  UnityEngine_Vector3_o UVar6;
  float local_38;
  float fStack_34;
  
  if (Il2CppMethodInitialized_075478e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075478e9 = '\x01';
  }
  x = UnityEngine_Camera__get_main((MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    if (human == (Characters_Human_o *)0x0) {
label_05c6f515:
      ThrowNullReferenceException();
    }
    pUVar1 = (human->fields).Cache;
    if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
      pUVar3 = (pUVar1->fields).Transform;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar2) {
        if ((x != (UnityEngine_Camera_o *)0x0) &&
           (pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)x,(MethodInfo *)0x0),
           pUVar3 != (UnityEngine_Transform_o *)0x0)) {
          UVar4 = UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
          pUVar1 = (human->fields).Cache;
          if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
             (pUVar3 = (pUVar1->fields).Transform, pUVar3 != (UnityEngine_Transform_o *)0x0)) {
            UVar5 = UnityEngine_Transform__get_position(pUVar3,(MethodInfo *)0x0);
            pUVar1 = (human->fields).Cache;
            if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
               (pUVar3 = (pUVar1->fields).Transform, pUVar3 != (UnityEngine_Transform_o *)0x0)) {
              local_38 = UVar4.fields.x;
              fStack_34 = UVar4.fields.y;
              UVar6 = UnityEngine_Transform__get_right(pUVar3,(MethodInfo *)0x0);
              return UVar6.fields.z * (UVar4.fields.z - UVar5.fields.z) +
                     UVar6.fields.y * (fStack_34 - UVar5.fields.y) +
                     UVar6.fields.x * (local_38 - UVar5.fields.x) < 0.0;
            }
          }
        }
        goto label_05c6f515;
      }
    }
  }
  return true;
}


// UI.MobileInputHookButton$$.ctor
// il2cpp: void UI_MobileInputHookButton___ctor (UI_MobileInputHookButton_o* __this, const MethodInfo* method);
// 0x5c6f520

void UI_MobileInputHookButton___ctor(UI_MobileInputHookButton_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_MobileInputHoldControl_SlideButton__o *__this_00;
  
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


