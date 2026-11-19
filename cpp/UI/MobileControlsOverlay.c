// Type: UI.MobileControlsOverlay
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/UI/MobileControlsOverlay.cs
// Prior real C# source: none
// --------------------------------

// UI.MobileControlsOverlay.<>c$$.cctor
// il2cpp: void UI_MobileControlsOverlay___c___cctor (const MethodInfo* method);
// 0x5c6d920

void UI_MobileControlsOverlay___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_075478d0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileControlsOverlay_c);
    Il2CppMethodInitialized_075478d0 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileControlsOverlay_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_UI_MobileControlsOverlay_c->static_fields->__9 = (UI_MobileControlsOverlay___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_MobileControlsOverlay_c->static_fields->__9);
  return;
}


// UI.MobileControlsOverlay.<>c$$.ctor
// il2cpp: void UI_MobileControlsOverlay___c___ctor (UI_MobileControlsOverlay___c_o* __this, const MethodInfo* method);
// 0x5c6d990

void UI_MobileControlsOverlay___c___ctor(UI_MobileControlsOverlay___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MobileControlsOverlay.<>c$$<RebuildCoreControls>b__35_0
// il2cpp: bool UI_MobileControlsOverlay___c___RebuildCoreControls_b__35_0 (UI_MobileControlsOverlay___c_o* __this, UI_MobileInputControlLayout_o* x, const MethodInfo* method);
// 0x5c6d9a0

bool UI_MobileControlsOverlay___c___RebuildCoreControls_b__35_0
               (UI_MobileControlsOverlay___c_o *__this,UI_MobileInputControlLayout_o *x,MethodInfo *method)

{
  System_String_o *value;
  bool bVar1;
  int32_t local_c;
  
  if (x == (UI_MobileInputControlLayout_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_07547919 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Enum_TryParse_MobileInputControlKind);
    Il2CppMethodInitialized_07547919 = '\x01';
  }
  local_c = 0;
  value = (x->fields).Kind;
  if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_07556760);
  }
  bVar1 = System_Enum__TryParse_Int32Enum_
                    (value,&local_c,
                     (MethodInfo_34DC610 *)MethodInfo_System_Enum_TryParse_MobileInputControlKind);
  return bVar1 && local_c == 6;
}


// UI.MobileControlsOverlay.<>c$$<RebuildCoreControls>b__35_1
// il2cpp: bool UI_MobileControlsOverlay___c___RebuildCoreControls_b__35_1 (UI_MobileControlsOverlay___c_o* __this, UI_MobileInputControlLayout_o* x, const MethodInfo* method);
// 0x5c6da20

bool UI_MobileControlsOverlay___c___RebuildCoreControls_b__35_1
               (UI_MobileControlsOverlay___c_o *__this,UI_MobileInputControlLayout_o *x,MethodInfo *method)

{
  System_String_o *value;
  bool bVar1;
  int32_t local_c;
  
  if (x == (UI_MobileInputControlLayout_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_07547919 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Enum_TryParse_MobileInputControlKind);
    Il2CppMethodInitialized_07547919 = '\x01';
  }
  local_c = 0;
  value = (x->fields).Kind;
  if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_07556760);
  }
  bVar1 = System_Enum__TryParse_Int32Enum_
                    (value,&local_c,
                     (MethodInfo_34DC610 *)MethodInfo_System_Enum_TryParse_MobileInputControlKind);
  return bVar1 && local_c == 7;
}


// UI.MobileControlsOverlay$$Setup
// il2cpp: void UI_MobileControlsOverlay__Setup (UI_MobileControlsOverlay_o* __this, UI_InGameMenu_o* menu, const MethodInfo* method);
// 0x5c63560

void UI_MobileControlsOverlay__Setup
               (UI_MobileControlsOverlay_o *__this,UI_InGameMenu_o *menu,MethodInfo *method)

{
  (__this->fields)._menu = menu;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._menu);
  UI_MobileControlsOverlay__SetupCommon(__this,(MethodInfo *)menu);
  return;
}


// UI.MobileControlsOverlay$$Setup
// il2cpp: void UI_MobileControlsOverlay__Setup (UI_MobileControlsOverlay_o* __this, UI_MapEditorMenu_o* menu, const MethodInfo* method);
// 0x5c638c0

void UI_MobileControlsOverlay__Setup_5b638c0
               (UI_MobileControlsOverlay_o *__this,UI_MapEditorMenu_o *menu,MethodInfo *method)

{
  (__this->fields)._mapEditorMenu = menu;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._mapEditorMenu);
  UI_MobileControlsOverlay__SetupCommon(__this,(MethodInfo *)menu);
  return;
}


// UI.MobileControlsOverlay$$SetupCommon
// il2cpp: void UI_MobileControlsOverlay__SetupCommon (UI_MobileControlsOverlay_o* __this, const MethodInfo* method);
// 0x5c63580
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c637d8: movaps xmm0, xmmword ptr [rsp]

void UI_MobileControlsOverlay__SetupCommon(UI_MobileControlsOverlay_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_Fields anchorMin;
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_o anchorMax;
  UnityEngine_Object_o *__this_00;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_CanvasGroup_o *pUVar4;
  UnityEngine_Vector2_StaticFields *pUVar5;
  System_Action_o *pSVar6;
  UnityEngine_Transform_o *__this_01;
  MethodInfo **method_00;
  UI_MobileControlsOverlay_o *pUVar7;
  MethodInfo *method_01;
  UnityEngine_Vector2_c **__this_02;
  float fVar8;
  float fVar9;
  
  if (Il2CppMethodInitialized_075478a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MobileControlsOverlay_RebuildAllControls);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutManager);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Mobile Controls");
    il2cpp_codegen_initialize_runtime_metadata(&"ButtonsLayer");
    Il2CppMethodInitialized_075478a5 = '\x01';
  }
  __this_00 = (UnityEngine_Object_o *)
              UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Object_o *)0x0) {
    UnityEngine_Object__set_name(__this_00,"AoTTG Mobile Controls",(MethodInfo *)0x0);
    pUVar2 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this,
                        (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    if (Il2CppMethodInitialized_0753ecc8 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_0753ecc8 = '\x01';
    }
    if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
      UnityEngine_RectTransform__set_anchorMin
                (pUVar2,(UnityEngine_Vector2_o)
                        (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_07542885 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_07542885 = '\x01';
      }
      UnityEngine_RectTransform__set_anchorMax
                (pUVar2,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields
                 ,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_0753ecc8 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_0753ecc8 = '\x01';
      }
      UnityEngine_RectTransform__set_offsetMin
                (pUVar2,(UnityEngine_Vector2_o)
                        (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_0753ecc8 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_0753ecc8 = '\x01';
      }
      UnityEngine_RectTransform__set_offsetMax
                (pUVar2,(UnityEngine_Vector2_o)
                        (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,(MethodInfo *)0x0);
      pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
        method_00 = &MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup;
        pUVar4 = UnityEngine_GameObject__AddComponent_object_
                           (pUVar3,(MethodInfo_353B6A0 *)
                                   MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
        __this_02 = (UnityEngine_Vector2_c **)&(__this->fields)._canvasGroup;
        (__this->fields)._canvasGroup = pUVar4;
        Il2CppCodeGenWriteBarrier(__this_02);
        if (Il2CppMethodInitialized_0753ecc8 == '\0') {
          __this_02 = &TypeInfo_UnityEngine_Vector2;
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
          Il2CppMethodInitialized_0753ecc8 = '\x01';
        }
        pUVar5 = TypeInfo_UnityEngine_Vector2->static_fields;
        anchorMin = (pUVar5->zeroVector).fields;
        if (Il2CppMethodInitialized_07542885 == '\0') {
          __this_02 = &TypeInfo_UnityEngine_Vector2;
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
          Il2CppMethodInitialized_07542885 = '\x01';
          pUVar5 = TypeInfo_UnityEngine_Vector2->static_fields;
          UVar1 = (pUVar5->oneVector).fields;
          fVar8 = UVar1.x;
          fVar9 = UVar1.y;
          if (Il2CppMethodInitialized_0753ecc8 == '\0') {
            __this_02 = &TypeInfo_UnityEngine_Vector2;
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
            Il2CppMethodInitialized_0753ecc8 = '\x01';
            pUVar5 = TypeInfo_UnityEngine_Vector2->static_fields;
          }
        }
        else {
          UVar1 = (pUVar5->oneVector).fields;
          fVar8 = UVar1.x;
          fVar9 = UVar1.y;
        }
        UVar1 = (pUVar5->zeroVector).fields;
        anchorMax.fields.y = fVar9;
        anchorMax.fields.x = fVar8;
        pUVar3 = UI_MobileControlsOverlay__CreateRect
                           ((UI_MobileControlsOverlay_o *)__this_02,"ButtonsLayer",pUVar2,
                            (UnityEngine_Vector2_o)anchorMin,anchorMax,(UnityEngine_Vector2_o)UVar1,
                            (UnityEngine_Vector2_o)UVar1,(MethodInfo *)method_00);
        if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
          pUVar2 = UnityEngine_GameObject__GetComponent_object_
                             (pUVar3,(MethodInfo_353B730 *)
                                     MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
          (__this->fields)._buttonsLayer = pUVar2;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._buttonsLayer);
          pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
          pUVar7 = __this;
          System_Action___ctor
                    (pSVar6,(Il2CppObject *)__this,
                     (intptr_t)MethodInfo_UI_MobileControlsOverlay_RebuildAllControls,(MethodInfo *)0x0);
          if ((TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager);
          }
          UI_MobileInputLayoutManager__add_OnSelectionChanged(pSVar6,(MethodInfo *)pUVar7);
          pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
          pUVar7 = __this;
          System_Action___ctor
                    (pSVar6,(Il2CppObject *)__this,
                     (intptr_t)MethodInfo_UI_MobileControlsOverlay_RebuildAllControls,(MethodInfo *)0x0);
          UI_MobileInputLayoutManager__add_OnLayoutsChanged(pSVar6,(MethodInfo *)pUVar7);
          __this_01 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (__this_01 != (UnityEngine_Transform_o *)0x0) {
            method_01 = (MethodInfo *)0x0;
            UnityEngine_Transform__SetAsLastSibling(__this_01,(MethodInfo *)0x0);
            UI_MobileControlsOverlay__RefreshVisibility(__this,method_01);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MobileControlsOverlay$$OnDestroy
// il2cpp: void UI_MobileControlsOverlay__OnDestroy (UI_MobileControlsOverlay_o* __this, const MethodInfo* method);
// 0x5c64100

void UI_MobileControlsOverlay__OnDestroy(UI_MobileControlsOverlay_o *__this,MethodInfo *method)

{
  System_Action_o *pSVar1;
  UI_MobileControlsOverlay_o *method_00;
  
  if (Il2CppMethodInitialized_075478a6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MobileControlsOverlay_RebuildAllControls);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutManager);
    Il2CppMethodInitialized_075478a6 = '\x01';
  }
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
  method_00 = __this;
  System_Action___ctor
            (pSVar1,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MobileControlsOverlay_RebuildAllControls,
             (MethodInfo *)0x0);
  if ((TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager);
  }
  UI_MobileInputLayoutManager__remove_OnSelectionChanged(pSVar1,(MethodInfo *)method_00);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
  System_Action___ctor
            (pSVar1,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_MobileControlsOverlay_RebuildAllControls,
             (MethodInfo *)0x0);
  UI_MobileInputLayoutManager__remove_OnLayoutsChanged(pSVar1,(MethodInfo *)__this);
  return;
}


// UI.MobileControlsOverlay$$Update
// il2cpp: void UI_MobileControlsOverlay__Update (UI_MobileControlsOverlay_o* __this, const MethodInfo* method);
// 0x5c64380
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c6444f: jmp 0x5c6449a

void UI_MobileControlsOverlay__Update(UI_MobileControlsOverlay_o *__this,MethodInfo *method)

{
  UI_MapEditorMenu_o *x;
  UI_InGameMenu_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_075478a7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBridge);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075478a7 = '\x01';
  }
  bVar2 = UI_MobileLayoutEditorOverlay__get_IsOpen((MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_Settings_MobileInputBridge->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBridge);
    }
    Settings_MobileInputBridge__ClearState((MethodInfo *)0x0);
  }
  else {
    if (Il2CppMethodInitialized_075478be == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_075478be = '\x01';
    }
    x = (__this->fields)._mapEditorMenu;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    method = (MethodInfo *)0x0;
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      if ((TypeInfo_Settings_MobileInputBridge->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBridge);
        bVar2 = Settings_MobileInputBridge__get_Enabled((MethodInfo *)0x0);
      }
      else {
        bVar2 = Settings_MobileInputBridge__get_Enabled((MethodInfo *)0x0);
      }
      if (bVar2) {
        pUVar1 = (__this->fields)._menu;
        if ((((Il2CppClass *)TypeInfo_UnityEngine_Object)->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        method = (MethodInfo *)0x0;
        bVar2 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar2) {
          pUVar1 = (__this->fields)._menu;
          if (pUVar1 == (UI_InGameMenu_o *)0x0) {
            ThrowNullReferenceException();
          }
          method = (MethodInfo *)0x0;
          bVar2 = UI_InGameMenu__IsActive(pUVar1,(MethodInfo *)0x0);
          if (!bVar2) {
            UI_MobileControlsOverlay__UpdateRestoreGesture(__this,method);
            return;
          }
        }
      }
      UI_MobileControlsOverlay__RefreshVisibility(__this,method);
      UI_MobileControlsOverlay__UpdateAutoGas(__this,method);
      UI_MobileControlsOverlay__UpdateAutoReel(__this,method);
      return;
    }
  }
  UI_MobileControlsOverlay__RefreshVisibility(__this,method);
  return;
}


// UI.MobileControlsOverlay$$LateUpdate
// il2cpp: void UI_MobileControlsOverlay__LateUpdate (UI_MobileControlsOverlay_o* __this, const MethodInfo* method);
// 0x5c64d00
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c64d2b: jmp 0x5c64da6

void UI_MobileControlsOverlay__LateUpdate(UI_MobileControlsOverlay_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  UI_InGameMenu_o *x;
  bool bVar2;
  
  if (Il2CppMethodInitialized_075478a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBridge);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075478a8 = '\x01';
    uVar1 = (TypeInfo_Settings_MobileInputBridge->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Settings_MobileInputBridge->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBridge);
    bVar2 = Settings_MobileInputBridge__get_Enabled((MethodInfo *)0x0);
  }
  else {
    bVar2 = Settings_MobileInputBridge__get_Enabled((MethodInfo *)0x0);
  }
  if (bVar2) {
    x = (__this->fields)._menu;
    if ((((Il2CppClass *)TypeInfo_UnityEngine_Object)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((bVar2) && (bVar2 = UI_MobileLayoutEditorOverlay__get_IsOpen((MethodInfo *)0x0), !bVar2)) {
      Settings_MobileAimAssist__UpdateBladeFacingLock((MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// UI.MobileControlsOverlay$$OnDisable
// il2cpp: void UI_MobileControlsOverlay__OnDisable (UI_MobileControlsOverlay_o* __this, const MethodInfo* method);
// 0x5c64db0

void UI_MobileControlsOverlay__OnDisable(UI_MobileControlsOverlay_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075478a9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBridge);
    Il2CppMethodInitialized_075478a9 = '\x01';
    uVar1 = (TypeInfo_Settings_MobileInputBridge->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Settings_MobileInputBridge->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBridge);
    Settings_MobileInputBridge__ClearState((MethodInfo *)0x0);
    return;
  }
  Settings_MobileInputBridge__ClearState((MethodInfo *)0x0);
  return;
}


// UI.MobileControlsOverlay$$OnApplicationFocus
// il2cpp: void UI_MobileControlsOverlay__OnApplicationFocus (UI_MobileControlsOverlay_o* __this, bool focused, const MethodInfo* method);
// 0x5c64e10
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c64e1c: test bl, bl
// asm:   0x5c64e1e: je 0x5c64e39

void UI_MobileControlsOverlay__OnApplicationFocus
               (UI_MobileControlsOverlay_o *__this,bool focused,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075478aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBridge);
    Il2CppMethodInitialized_075478aa = '\x01';
  }
  if (focused) {
    return;
  }
  if ((((Il2CppClass *)TypeInfo_Settings_MobileInputBridge)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBridge);
    Settings_MobileInputBridge__ClearState((MethodInfo *)0x0);
    return;
  }
  Settings_MobileInputBridge__ClearState((MethodInfo *)0x0);
  return;
}


// UI.MobileControlsOverlay$$OnApplicationPause
// il2cpp: void UI_MobileControlsOverlay__OnApplicationPause (UI_MobileControlsOverlay_o* __this, bool paused, const MethodInfo* method);
// 0x5c64e70
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c64e7c: test bl, bl
// asm:   0x5c64e7e: je 0x5c64eb2

void UI_MobileControlsOverlay__OnApplicationPause
               (UI_MobileControlsOverlay_o *__this,bool paused,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075478ab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBridge);
    Il2CppMethodInitialized_075478ab = '\x01';
  }
  if (!paused) {
    return;
  }
  if ((((Il2CppClass *)TypeInfo_Settings_MobileInputBridge)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBridge);
    Settings_MobileInputBridge__ClearState((MethodInfo *)0x0);
    return;
  }
  Settings_MobileInputBridge__ClearState((MethodInfo *)0x0);
  return;
}


// UI.MobileControlsOverlay$$UpdateRestoreGesture
// il2cpp: void UI_MobileControlsOverlay__UpdateRestoreGesture (UI_MobileControlsOverlay_o* __this, const MethodInfo* method);
// 0x5c64520

void UI_MobileControlsOverlay__UpdateRestoreGesture(UI_MobileControlsOverlay_o *__this,MethodInfo *method)

{
  UI_InGameMenu_o *__this_00;
  int32_t iVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075478ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBridge);
    Il2CppMethodInitialized_075478ac = '\x01';
  }
  if ((TypeInfo_Settings_MobileInputBridge->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBridge);
  }
  Settings_MobileInputBridge__ClearState((MethodInfo *)0x0);
  (__this->fields)._visible = false;
  iVar1 = UnityEngine_Input__get_touchCount((MethodInfo *)0x0);
  if (iVar1 < 3) {
    (__this->fields)._restoreTouchArmed = false;
  }
  else if ((__this->fields)._restoreTouchArmed == false) {
    (__this->fields)._restoreTouchArmed = true;
    __this_00 = (__this->fields)._menu;
    if (__this_00 == (UI_InGameMenu_o *)0x0) {
      ThrowNullReferenceException();
    }
    method_00 = (MethodInfo *)0x1;
    UI_InGameMenu__ToggleUI(__this_00,true,(MethodInfo *)0x0);
    UI_MobileControlsOverlay__RefreshVisibility(__this,method_00);
    return;
  }
  return;
}


// UI.MobileControlsOverlay$$RefreshVisibility
// il2cpp: void UI_MobileControlsOverlay__RefreshVisibility (UI_MobileControlsOverlay_o* __this, const MethodInfo* method);
// 0x5c63ca0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c63e89: jmp 0x5c63d5e
// asm:   0x5c63f75: jmp 0x5c63f9c

void UI_MobileControlsOverlay__RefreshVisibility(UI_MobileControlsOverlay_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  UI_InGameMenu_o *pUVar2;
  UI_EmoteHandler_o *pUVar3;
  UI_MapEditorMenu_o *pUVar4;
  UI_MapEditorTopPanel_o *__this_00;
  UI_ItemHandler_o *pUVar5;
  UnityEngine_CanvasGroup_o *pUVar6;
  bool bVar7;
  byte bVar8;
  int32_t iVar9;
  uint role;
  int32_t iVar10;
  UnityEngine_Transform_o *pUVar11;
  MethodInfo *method_00;
  MethodInfo *method_01;
  char cVar12;
  float value;
  
  if (Il2CppMethodInitialized_075478ad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DebugConsole);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBridge);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075478ad = '\x01';
  }
  pUVar2 = (__this->fields)._menu;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  cVar12 = '\0';
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    pUVar2 = (__this->fields)._menu;
    if ((pUVar2 == (UI_InGameMenu_o *)0x0) ||
       (pUVar3 = (pUVar2->fields).EmoteHandler, pUVar3 == (UI_EmoteHandler_o *)0x0)) goto label_05c640fb;
    cVar12 = '\x01';
    if ((pUVar3->fields).IsActive != false) goto label_05c63d4a;
    pUVar5 = (pUVar2->fields).ItemHandler;
    if (pUVar5 == (UI_ItemHandler_o *)0x0) goto label_05c640fb;
    cVar12 = (pUVar5->fields).IsActive;
    uVar1 = (TypeInfo_Settings_MobileInputBridge->_2).cctor_finished_or_no_cctor;
  }
  else {
label_05c63d4a:
    uVar1 = (TypeInfo_Settings_MobileInputBridge->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBridge);
  }
  bVar8 = false;
  bVar7 = Settings_MobileInputBridge__get_Enabled((MethodInfo *)0x0);
  if (bVar7) {
    bVar8 = false;
    bVar7 = UI_MobileLayoutEditorOverlay__get_IsOpen((MethodInfo *)0x0);
    if (!bVar7) {
      if (Il2CppMethodInitialized_075478be == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_075478be = '\x01';
      }
      pUVar4 = (__this->fields)._mapEditorMenu;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar8 = false;
      bVar7 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar7) {
        pUVar4 = (__this->fields)._mapEditorMenu;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar8 = false;
        bVar7 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar7) {
          pUVar4 = (__this->fields)._mapEditorMenu;
          if (pUVar4 == (UI_MapEditorMenu_o *)0x0) goto label_05c640fb;
          bVar8 = false;
          bVar7 = UI_MapEditorMenu__IsPopupActive(pUVar4,(MethodInfo *)0x0);
          if (!bVar7) {
            pUVar4 = (__this->fields)._mapEditorMenu;
            if ((pUVar4 == (UI_MapEditorMenu_o *)0x0) ||
               (__this_00 = (pUVar4->fields)._topPanel, __this_00 == (UI_MapEditorTopPanel_o *)0x0))
            goto label_05c640fb;
            bVar8 = false;
            bVar7 = UI_MapEditorTopPanel__IsDropdownOpen(__this_00,(MethodInfo *)0x0);
            if (!bVar7) {
              pUVar4 = (__this->fields)._mapEditorMenu;
              if (pUVar4 == (UI_MapEditorMenu_o *)0x0) goto label_05c640fb;
              bVar8 = (pUVar4->fields).IsInputFocused ^ 1;
            }
          }
        }
      }
      else {
        bVar7 = UI_InGameMenu__InMenu((MethodInfo *)0x0);
        if (!bVar7 || cVar12 != '\0') {
          if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
          }
          bVar7 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
          bVar8 = !bVar7;
        }
      }
    }
  }
  if (((__this->fields)._visible != false) && ((bool)bVar8 == false)) {
    if ((TypeInfo_Settings_MobileInputBridge->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBridge);
    }
    Settings_MobileInputBridge__ClearState((MethodInfo *)0x0);
  }
  (__this->fields)._visible = (bool)bVar8;
  pUVar6 = (__this->fields)._canvasGroup;
  if (pUVar6 != (UnityEngine_CanvasGroup_o *)0x0) {
    if ((bool)bVar8 == false) {
      value = 0.0;
    }
    else {
      value = 1.0;
    }
    UnityEngine_CanvasGroup__set_alpha(pUVar6,value,(MethodInfo *)0x0);
    pUVar6 = (__this->fields)._canvasGroup;
    if (pUVar6 == (UnityEngine_CanvasGroup_o *)0x0) goto label_05c640fb;
    UnityEngine_CanvasGroup__set_interactable(pUVar6,(bool)bVar8 != false,(MethodInfo *)0x0);
    pUVar6 = (__this->fields)._canvasGroup;
    if (pUVar6 == (UnityEngine_CanvasGroup_o *)0x0) goto label_05c640fb;
    UnityEngine_CanvasGroup__set_blocksRaycasts(pUVar6,(bool)bVar8 != false,(MethodInfo *)0x0);
    if ((bool)bVar8 == false) {
      return;
    }
    if (cVar12 == '\0') {
      if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
        cVar12 = TypeInfo_ApplicationManagers_DebugConsole->static_fields->Enabled;
      }
      else {
        cVar12 = TypeInfo_ApplicationManagers_DebugConsole->static_fields->Enabled;
      }
      if (cVar12 == '\0') {
        if (Il2CppMethodInitialized_075478be == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
          Il2CppMethodInitialized_075478be = '\x01';
        }
        pUVar4 = (__this->fields)._mapEditorMenu;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar7 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar7) {
          pUVar11 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar11 == (UnityEngine_Transform_o *)0x0) goto label_05c640fb;
          iVar9 = UnityEngine_Transform__GetSiblingIndex(pUVar11,(MethodInfo *)0x0);
          pUVar11 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if ((pUVar11 == (UnityEngine_Transform_o *)0x0) ||
             (pUVar11 = UnityEngine_Transform__get_parent(pUVar11,(MethodInfo *)0x0),
             pUVar11 == (UnityEngine_Transform_o *)0x0)) goto label_05c640fb;
          iVar10 = UnityEngine_Transform__get_childCount(pUVar11,(MethodInfo *)0x0);
          if (iVar9 != iVar10 + -1) {
            pUVar11 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            if (pUVar11 == (UnityEngine_Transform_o *)0x0) goto label_05c640fb;
            UnityEngine_Transform__SetAsLastSibling(pUVar11,(MethodInfo *)0x0);
          }
          goto label_05c6401f;
        }
      }
    }
    pUVar11 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
      iVar9 = UnityEngine_Transform__GetSiblingIndex(pUVar11,(MethodInfo *)0x0);
      if (iVar9 != 0) {
        pUVar11 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar11 == (UnityEngine_Transform_o *)0x0) goto label_05c640fb;
        UnityEngine_Transform__SetAsFirstSibling(pUVar11,(MethodInfo *)0x0);
      }
label_05c6401f:
      if (Il2CppMethodInitialized_075478be == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_075478be = '\x01';
      }
      pUVar4 = (__this->fields)._mapEditorMenu;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      method_01 = (MethodInfo *)0x0;
      bVar7 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((!bVar7) &&
         (role = UI_MobileControlsOverlay__GetCurrentLayoutRole(__this,method_01),
         role != (__this->fields)._coreLayoutRole)) {
        method_01 = (MethodInfo *)(ulong)role;
        UI_MobileControlsOverlay__RebuildCoreControls(__this,role,method_00);
      }
      UI_MobileControlsOverlay__UpdateButtonVisibility(__this,method_01);
      return;
    }
  }
label_05c640fb:
  ThrowNullReferenceException();
}


// UI.MobileControlsOverlay$$UpdateButtonVisibility
// il2cpp: void UI_MobileControlsOverlay__UpdateButtonVisibility (UI_MobileControlsOverlay_o* __this, const MethodInfo* method);
// 0x5c64ef0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c65188: jmp 0x5c65021

void UI_MobileControlsOverlay__UpdateButtonVisibility(UI_MobileControlsOverlay_o *__this,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  uint32_t uVar3;
  GameManagers_BaseGameManager_o *pGVar4;
  UI_MapEditorMenu_c *pUVar5;
  byte bVar6;
  bool bVar7;
  GameManagers_InGameManager_c *in_RCX;
  UI_MapEditorMenu_o *x;
  byte bVar8;
  System_Collections_Generic_List_GameObject__o *group;
  UI_MapEditorMenu_o *__this_00;
  byte bVar9;
  bool bVar10;
  bool bVar11;
  
  if (Il2CppMethodInitialized_075478ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseShifter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitan);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ErenShifter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075478ae = '\x01';
  }
  if (Il2CppMethodInitialized_075478be == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075478be = '\x01';
  }
  __this_00 = (__this->fields)._mapEditorMenu;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    group = (__this->fields)._mapEditorButtons;
    bVar7 = true;
    goto label_05c6515d;
  }
  if (Il2CppMethodInitialized_075478af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_075478af = '\x01';
  }
  pGVar4 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (pGVar4 == (GameManagers_BaseGameManager_o *)0x0) {
label_05c65012:
    x = (UI_MapEditorMenu_o *)0x0;
    uVar3 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    bVar9 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
    in_RCX = TypeInfo_GameManagers_InGameManager;
    if (((pGVar4->klass->_2).typeHierarchyDepth < bVar9) ||
       ((pGVar4->klass->_2).typeHierarchy[(ulong)bVar9 - 1] !=
        (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) goto label_05c65012;
    x = (*(uint64_t *)((char *)pGVar4 + 0x80));
    uVar3 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  if (uVar3 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar9 = 0;
  __this_00 = x;
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    if (x == (UI_MapEditorMenu_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar9 = *(byte *)&(x->fields).NewImportPopup ^ 1;
label_05c65056:
    pUVar5 = x->klass;
    bVar1 = (pUVar5->_2).typeHierarchyDepth;
    in_RCX = (GameManagers_InGameManager_c *)(ulong)bVar1;
    bVar8 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
    if (bVar1 < bVar8) {
      bVar10 = false;
    }
    else {
      __this_00 = (UI_MapEditorMenu_o *)(pUVar5->_2).typeHierarchy;
      bVar10 = *(Characters_Human_c **)((long)__this_00 + (ulong)bVar8 * 8 + -8) == TypeInfo_Characters_Human;
    }
    bVar8 = (TypeInfo_Characters_BasicTitan->_2).typeHierarchyDepth;
    if (bVar1 < bVar8) {
      bVar11 = false;
    }
    else {
      __this_00 = (UI_MapEditorMenu_o *)(pUVar5->_2).typeHierarchy;
      bVar11 = *(Characters_BasicTitan_c **)((long)__this_00 + (ulong)bVar8 * 8 + -8) ==
               TypeInfo_Characters_BasicTitan;
    }
    bVar8 = (TypeInfo_Characters_ErenShifter->_2).typeHierarchyDepth;
    if ((bVar1 < bVar8) ||
       (__this_00 = (UI_MapEditorMenu_o *)(pUVar5->_2).typeHierarchy,
       *(Characters_ErenShifter_c **)((long)__this_00 + (ulong)bVar8 * 8 + -8) !=
       TypeInfo_Characters_ErenShifter)) {
      bVar2 = (TypeInfo_Characters_BaseShifter->_2).typeHierarchyDepth;
      bVar8 = 0;
      bVar6 = 0;
      if (bVar2 <= bVar1) {
        bVar7 = (pUVar5->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Characters_BaseShifter
        ;
        goto label_05c65118;
      }
    }
    else {
      bVar6 = 1;
    }
    bVar8 = bVar6;
    bVar7 = false;
  }
  else {
    if (x != (UI_MapEditorMenu_o *)0x0) goto label_05c65056;
    bVar10 = false;
    bVar11 = false;
    bVar7 = false;
    bVar8 = 0;
  }
label_05c65118:
  UI_MobileControlsOverlay__SetGroupActive
            ((UI_MobileControlsOverlay_o *)__this_00,(__this->fields)._generalButtons,true,
             (MethodInfo *)in_RCX);
  UI_MobileControlsOverlay__SetGroupActive
            ((UI_MobileControlsOverlay_o *)__this_00,(__this->fields)._humanButtons,(bool)(bVar10 & bVar9),
             (MethodInfo *)in_RCX);
  UI_MobileControlsOverlay__SetGroupActive
            ((UI_MobileControlsOverlay_o *)__this_00,(__this->fields)._titanButtons,(bool)(bVar11 & bVar9),
             (MethodInfo *)in_RCX);
  UI_MobileControlsOverlay__SetGroupActive
            ((UI_MobileControlsOverlay_o *)__this_00,(__this->fields)._annieShifterButtons,
             (bool)(bVar7 & bVar9),(MethodInfo *)in_RCX);
  group = (__this->fields)._erenShifterButtons;
  bVar7 = (bool)(bVar8 & bVar9);
label_05c6515d:
  UI_MobileControlsOverlay__SetGroupActive
            ((UI_MobileControlsOverlay_o *)__this_00,group,bVar7,(MethodInfo *)in_RCX);
  return;
}


// UI.MobileControlsOverlay$$GetCurrentCharacter
// il2cpp: Characters_BaseCharacter_o* UI_MobileControlsOverlay__GetCurrentCharacter (UI_MobileControlsOverlay_o* __this, const MethodInfo* method);
// 0x5c65350

Characters_BaseCharacter_o *
UI_MobileControlsOverlay__GetCurrentCharacter(UI_MobileControlsOverlay_o *__this,MethodInfo *method)

{
  byte bVar1;
  GameManagers_BaseGameManager_o *pGVar2;
  
  if (Il2CppMethodInitialized_075478af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_075478af = '\x01';
  }
  pGVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (pGVar2 != (GameManagers_BaseGameManager_o *)0x0) {
    bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
    if ((bVar1 <= (pGVar2->klass->_2).typeHierarchyDepth) &&
       ((pGVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
      return (*(uint64_t *)((char *)pGVar2 + 0x80));
    }
  }
  return (Characters_BaseCharacter_o *)0x0;
}


// UI.MobileControlsOverlay$$GetCurrentLayoutRole
// il2cpp: int32_t UI_MobileControlsOverlay__GetCurrentLayoutRole (UI_MobileControlsOverlay_o* __this, const MethodInfo* method);
// 0x5c653d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c6556c: jmp 0x5c654ce

int32_t UI_MobileControlsOverlay__GetCurrentLayoutRole(UI_MobileControlsOverlay_o *__this,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  UI_MapEditorMenu_o *x;
  GameManagers_BaseGameManager_o *pGVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  
  if (Il2CppMethodInitialized_075478be == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075478be = '\x01';
  }
  x = (__this->fields)._mapEditorMenu;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    return 5;
  }
  if (Il2CppMethodInitialized_075478af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_075478af = '\x01';
  }
  pGVar3 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (pGVar3 != (GameManagers_BaseGameManager_o *)0x0) {
    bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
    if ((bVar1 <= (pGVar3->klass->_2).typeHierarchyDepth) &&
       ((pGVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
      plVar7 = (*(uint64_t *)((char *)pGVar3 + 0x80));
      goto joined_r0x05c654a1;
    }
  }
  plVar7 = (long *)0x0;
joined_r0x05c654a1:
  if (Il2CppMethodInitialized_0754795a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseShifter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitan);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ErenShifter);
    Il2CppMethodInitialized_0754795a = '\x01';
  }
  iVar6 = 1;
  if (plVar7 != (long *)0x0) {
    lVar4 = *plVar7;
    bVar1 = *(byte *)(lVar4 + 0x130);
    bVar2 = (TypeInfo_Characters_BasicTitan->_2).typeHierarchyDepth;
    if ((bVar2 <= bVar1) &&
       (*(Characters_BasicTitan_c **)(*(long *)(lVar4 + 200) + -8 + (ulong)bVar2 * 8) ==
        TypeInfo_Characters_BasicTitan)) {
      return 2;
    }
    bVar2 = (TypeInfo_Characters_ErenShifter->_2).typeHierarchyDepth;
    if ((bVar2 <= bVar1) &&
       (*(Characters_ErenShifter_c **)(*(long *)(lVar4 + 200) + -8 + (ulong)bVar2 * 8) ==
        TypeInfo_Characters_ErenShifter)) {
      return 4;
    }
    bVar2 = (TypeInfo_Characters_BaseShifter->_2).typeHierarchyDepth;
    if (bVar2 <= bVar1) {
      iVar6 = (uint)(*(Characters_BaseShifter_c **)(*(long *)(lVar4 + 200) + -8 + (ulong)bVar2 * 8) ==
                    TypeInfo_Characters_BaseShifter) * 2 + 1;
    }
  }
  return iVar6;
}


// UI.MobileControlsOverlay$$UpdateCoreControlLayout
// il2cpp: void UI_MobileControlsOverlay__UpdateCoreControlLayout (UI_MobileControlsOverlay_o* __this, const MethodInfo* method);
// 0x5c64ed0

void UI_MobileControlsOverlay__UpdateCoreControlLayout(UI_MobileControlsOverlay_o *__this,MethodInfo *method)

{
  int32_t role;
  MethodInfo *method_00;
  
  role = UI_MobileControlsOverlay__GetCurrentLayoutRole(__this,method);
  if (role == (__this->fields)._coreLayoutRole) {
    return;
  }
  UI_MobileControlsOverlay__RebuildCoreControls(__this,role,method_00);
  return;
}


// UI.MobileControlsOverlay$$RebuildAllControls
// il2cpp: void UI_MobileControlsOverlay__RebuildAllControls (UI_MobileControlsOverlay_o* __this, const MethodInfo* method);
// 0x5c65ca0
// eh: try 0x5c65ef0..0x5c66068 -> pad 0x5c66070 (+7 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c6608e..0x5c66093 -> pad 0x5c66249 cleanup
// eh: try 0x5c6624c..0x5c66256 -> pad 0x5c6625e catch (...) [compiler noexcept guard]
// asm: 24 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c66068: jmp 0x5c66072
// asm:   0x5c6606a: jmp 0x5c66072
// asm:   0x5c6606c: jmp 0x5c66072
// asm:   0x5c6606e: jmp 0x5c66072
// asm:   0x5c66070: jmp 0x5c66072
// asm:   0x5c66072: mov r14, rax
// asm:   0x5c66075: cmp edx, 1
// asm:   0x5c66078: jne 0x5c6624c
// asm:   0x5c6607e: mov rdi, r14
// asm:   0x5c66081: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c66086: mov r14, qword ptr [rax]
// asm:   0x5c66089: mov qword ptr [rsp + 0x10], r14
// asm:   0x5c6608e: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c66116: test r14, r14
// asm:   0x5c66119: jne 0x5c66241
// asm:   0x5c66241: mov rdi, r14
// asm:   0x5c66244: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c66249: mov r14, rax
// asm:   0x5c6624c: lea rdi, [rsp + 0x10]
// asm:   0x5c66251: call 0x2fd9bd0  ; il2cpp_runtime_helper_02fd9bd0()
// asm:   0x5c66256: mov rdi, r14
// asm:   0x5c66259: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c6625e: mov rdi, rax
// asm:   0x5c66261: call 0x2ab61e0  ; __clang_call_terminate()

void UI_MobileControlsOverlay__RebuildAllControls(UI_MobileControlsOverlay_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int iVar3;
  System_Collections_Generic_List_GameObject__o *pSVar4;
  UnityEngine_RectTransform_o *pUVar5;
  Il2CppClass *pIVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  System_Collections_Generic_List_MobileInputJoystick__o *pSVar8;
  UI_MapEditorMenu_o *x;
  bool bVar9;
  int32_t iVar10;
  VirtualInvokeData *pVVar11;
  UnityEngine_Component_o *__this_00;
  UnityEngine_Object_o *obj;
  Il2CppObject *pIVar12;
  ulong uVar13;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Collections_Generic_List_GameObject__o **ppSVar14;
  MethodInfo *pMVar15;
  long lVar16;
  MethodInfo *in_R8;
  Il2CppObject *local_58;
  Il2CppObject *local_50;
  undefined8 local_48;
  undefined1 *local_40;
  Il2CppObject **local_38;
  
  if (Il2CppMethodInitialized_075478b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MobileInputJoystick_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBridge);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Transform);
    Il2CppMethodInitialized_075478b0 = '\x01';
  }
  local_58 = (Il2CppObject *)0x0;
  local_50 = (Il2CppObject *)0x0;
  if ((TypeInfo_Settings_MobileInputBridge->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBridge);
  }
  Settings_MobileInputBridge__ClearState((MethodInfo *)0x0);
  Settings_MobileInputBridge__ClearDisplayNames((MethodInfo *)0x0);
  pSVar4 = (__this->fields)._coreInputControls;
  if (pSVar4 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_05c6623c;
  piVar1 = &(pSVar4->fields)._version;
  *piVar1 = *piVar1 + 1;
  iVar10 = (pSVar4->fields)._size;
  (pSVar4->fields)._size = 0;
  if (0 < iVar10) {
    System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,iVar10,(MethodInfo *)0x0);
  }
  pSVar4 = (__this->fields)._generalButtons;
  if (pSVar4 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_05c6623c;
  piVar1 = &(pSVar4->fields)._version;
  *piVar1 = *piVar1 + 1;
  iVar10 = (pSVar4->fields)._size;
  (pSVar4->fields)._size = 0;
  if (0 < iVar10) {
    System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,iVar10,(MethodInfo *)0x0);
  }
  pSVar4 = (__this->fields)._humanButtons;
  if (pSVar4 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_05c6623c;
  piVar1 = &(pSVar4->fields)._version;
  *piVar1 = *piVar1 + 1;
  iVar10 = (pSVar4->fields)._size;
  (pSVar4->fields)._size = 0;
  if (0 < iVar10) {
    System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,iVar10,(MethodInfo *)0x0);
  }
  pSVar4 = (__this->fields)._titanButtons;
  if (pSVar4 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_05c6623c;
  piVar1 = &(pSVar4->fields)._version;
  *piVar1 = *piVar1 + 1;
  iVar10 = (pSVar4->fields)._size;
  (pSVar4->fields)._size = 0;
  if (0 < iVar10) {
    System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,iVar10,(MethodInfo *)0x0);
  }
  pSVar4 = (__this->fields)._annieShifterButtons;
  if (pSVar4 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_05c6623c;
  piVar1 = &(pSVar4->fields)._version;
  *piVar1 = *piVar1 + 1;
  iVar10 = (pSVar4->fields)._size;
  (pSVar4->fields)._size = 0;
  if (0 < iVar10) {
    System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,iVar10,(MethodInfo *)0x0);
  }
  pSVar4 = (__this->fields)._erenShifterButtons;
  if (pSVar4 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_05c6623c;
  piVar1 = &(pSVar4->fields)._version;
  *piVar1 = *piVar1 + 1;
  iVar10 = (pSVar4->fields)._size;
  (pSVar4->fields)._size = 0;
  if (0 < iVar10) {
    System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,iVar10,(MethodInfo *)0x0);
  }
  pSVar4 = (__this->fields)._mapEditorButtons;
  if (pSVar4 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_05c6623c;
  piVar1 = &(pSVar4->fields)._version;
  *piVar1 = *piVar1 + 1;
  iVar3 = (pSVar4->fields)._size;
  (pSVar4->fields)._size = 0;
  if (0 < iVar3) {
    System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,iVar3,(MethodInfo *)0x0);
  }
  pUVar5 = (__this->fields)._buttonsLayer;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar9 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar9) {
    pUVar5 = (__this->fields)._buttonsLayer;
    if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
      local_58 = (Il2CppObject *)
                 UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)pUVar5,(MethodInfo *)0x0);
      local_40 = (undefined1 *)&local_58;
      local_48 = 0;
      local_38 = &local_50;
      do {
        pIVar12 = local_58;
        if (local_58 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar6 = local_58->klass;
        uVar13 = (ulong)(pIVar6->_2).interface_offsets_count;
        if (uVar13 != 0) {
          pIVar7 = (pIVar6->_1).interfaceOffsets;
          lVar16 = 0;
          do {
            if (*(System_Collections_IEnumerator_c **)((long)&pIVar7->interfaceType + lVar16) ==
                TypeInfo_System_Collections_IEnumerator) {
              pVVar11 = pIVar6->vtable + *(int *)((long)&pIVar7->offset + lVar16);
              goto label_05c65f63;
            }
            lVar16 = lVar16 + 0x10;
          } while (uVar13 * 0x10 != lVar16);
        }
        pVVar11 = GetInterfaceInvokeDataFromVTableSlowPath
                            (local_58,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05c65f63:
        bVar9 = (*pVVar11->methodPtr)(pIVar12,pVVar11->method);
        pIVar12 = local_58;
        if (!bVar9) {
          pIVar12 = il2cpp_vm_Object_IsInst(local_58,(Il2CppClass *)TypeInfo_System_IDisposable);
          local_50 = pIVar12;
          if (pIVar12 == (Il2CppObject *)0x0) goto label_05c6611f;
          pIVar6 = pIVar12->klass;
          uVar13 = (ulong)(pIVar6->_2).interface_offsets_count;
          if (uVar13 == 0) goto label_05c660ef;
          pIVar7 = (pIVar6->_1).interfaceOffsets;
          lVar16 = 0;
          goto label_05c660e0;
        }
        if (local_58 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar6 = local_58->klass;
        uVar13 = (ulong)(pIVar6->_2).interface_offsets_count;
        if (uVar13 != 0) {
          pIVar7 = (pIVar6->_1).interfaceOffsets;
          lVar16 = 0;
          do {
            if (*(System_Collections_IEnumerator_c **)((long)&pIVar7->interfaceType + lVar16) ==
                TypeInfo_System_Collections_IEnumerator) {
              pVVar11 = pIVar6->vtable + (*(int *)((long)&pIVar7->offset + lVar16) + 1);
              goto label_05c65ff7;
            }
            lVar16 = lVar16 + 0x10;
          } while (uVar13 * 0x10 != lVar16);
        }
        pVVar11 = GetInterfaceInvokeDataFromVTableSlowPath
                            (local_58,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_05c65ff7:
        __this_00 = (UnityEngine_Component_o *)(*pVVar11->methodPtr)(pIVar12,pVVar11->method);
        if (__this_00 == (UnityEngine_Component_o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar2 = (TypeInfo_UnityEngine_Transform->_2).typeHierarchyDepth;
        if (((__this_00->klass->_2).typeHierarchyDepth < bVar2) ||
           ((__this_00->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
            (Il2CppClass *)TypeInfo_UnityEngine_Transform)) {
          il2cpp_codegen_raise_invalid_cast_exception(__this_00);
        }
        obj = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_69214e0(obj,(MethodInfo *)0x0);
      } while( true );
    }
    goto label_05c6623c;
  }
  goto label_05c6611f;
  while (lVar16 = lVar16 + 0x10, uVar13 * 0x10 != lVar16) {
label_05c660e0:
    if (*(System_IDisposable_c **)((long)&pIVar7->interfaceType + lVar16) == TypeInfo_System_IDisposable) {
      pVVar11 = pIVar6->vtable + *(int *)((long)&pIVar7->offset + lVar16);
      goto label_05c6610d;
    }
  }
label_05c660ef:
  pVVar11 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar12,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05c6610d:
  (*pVVar11->methodPtr)(pIVar12,pVVar11->method);
label_05c6611f:
  pSVar8 = (__this->fields)._moveJoysticks;
  if (pSVar8 != (System_Collections_Generic_List_MobileInputJoystick__o *)0x0) {
    piVar1 = &(pSVar8->fields)._version;
    *piVar1 = *piVar1 + 1;
    iVar3 = (pSVar8->fields)._size;
    (pSVar8->fields)._size = 0;
    if (0 < iVar3) {
      System_Array__Clear((System_Array_o *)(pSVar8->fields)._items,0,iVar3,(MethodInfo *)0x0);
    }
    if (Il2CppMethodInitialized_075478be == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_075478be = '\x01';
    }
    x = (__this->fields)._mapEditorMenu;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    pMVar15 = (MethodInfo *)0x0;
    bVar9 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar9) {
      ppSVar14 = &(__this->fields)._mapEditorButtons;
      iVar10 = 5;
      UI_MobileControlsOverlay__RebuildCoreControls(__this,5,method_00);
    }
    else {
      ppSVar14 = &(__this->fields)._erenShifterButtons;
      iVar10 = UI_MobileControlsOverlay__GetCurrentLayoutRole(__this,pMVar15);
      UI_MobileControlsOverlay__RebuildCoreControls(__this,iVar10,method_01);
      UI_MobileControlsOverlay__AddLayoutControls
                (__this,(__this->fields)._buttonsLayer,0,(__this->fields)._generalButtons,in_R8);
      UI_MobileControlsOverlay__AddLayoutControls
                (__this,(__this->fields)._buttonsLayer,1,(__this->fields)._humanButtons,in_R8);
      UI_MobileControlsOverlay__AddLayoutControls
                (__this,(__this->fields)._buttonsLayer,2,(__this->fields)._titanButtons,in_R8);
      UI_MobileControlsOverlay__AddLayoutControls
                (__this,(__this->fields)._buttonsLayer,3,(__this->fields)._annieShifterButtons,in_R8);
      iVar10 = 4;
    }
    pMVar15 = (MethodInfo *)(__this->fields)._buttonsLayer;
    UI_MobileControlsOverlay__AddLayoutControls
              (__this,(UnityEngine_RectTransform_o *)pMVar15,iVar10,*ppSVar14,in_R8);
    UI_MobileControlsOverlay__UpdateButtonVisibility(__this,pMVar15);
    return;
  }
label_05c6623c:
  ThrowNullReferenceException();
}


// UI.MobileControlsOverlay$$RebuildForScale
// il2cpp: void UI_MobileControlsOverlay__RebuildForScale (UI_MobileControlsOverlay_o* __this, const MethodInfo* method);
// 0x5c66e00

void UI_MobileControlsOverlay__RebuildForScale(UI_MobileControlsOverlay_o *__this,MethodInfo *method)

{
  UI_MobileControlsOverlay__RebuildAllControls(__this,method);
  return;
}


// UI.MobileControlsOverlay$$RebuildCoreControls
// il2cpp: void UI_MobileControlsOverlay__RebuildCoreControls (UI_MobileControlsOverlay_o* __this, int32_t role, const MethodInfo* method);
// 0x5c65650
// eh: try 0x5c657dd..0x5c65824 -> pad 0x5c65c35 (+4 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c65c51..0x5c65c56 -> pad 0x5c65c7b cleanup
// eh: try 0x5c65c7e..0x5c65c88 -> pad 0x5c65c90 catch (...) [compiler noexcept guard]
// asm: 36 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c6581d: jmp 0x5c657d0
// asm:   0x5c658e9: test rbp, rbp
// asm:   0x5c658f2: jmp 0x5c65c1f
// asm:   0x5c659e8: test r15, r15
// asm:   0x5c659eb: jne 0x5c65a78
// asm:   0x5c659f1: jmp 0x5c65c1f
// asm:   0x5c65ade: nop 
// asm:   0x5c65b0a: jmp 0x5c65b23
// asm:   0x5c65b49: nop dword ptr [rax]
// asm:   0x5c65b7b: jmp 0x5c65b94
// asm:   0x5c65c33: jmp 0x5c65c39
// asm:   0x5c65c35: jmp 0x5c65c39
// asm:   0x5c65c37: jmp 0x5c65c39
// asm:   0x5c65c39: mov rbp, rax
// asm:   0x5c65c3c: cmp edx, 1
// asm:   0x5c65c3f: jne 0x5c65c7e
// asm:   0x5c65c41: mov rdi, rbp
// asm:   0x5c65c44: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c65c49: mov rbx, qword ptr [rax]
// asm:   0x5c65c4c: mov qword ptr [rsp + 0x28], rbx
// asm:   0x5c65c51: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c65c56: lea rax, [rip + 0x162811b]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose
// asm:   0x5c65c5d: mov rsi, qword ptr [rax]
// asm:   0x5c65c60: lea rdi, [rsp + 0x10]
// asm:   0x5c65c65: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5c65c6a: test rbx, rbx
// asm:   0x5c65c6d: je 0x5c6583a
// asm:   0x5c65c73: mov rdi, rbx
// asm:   0x5c65c76: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c65c7b: mov rbp, rax
// asm:   0x5c65c7e: lea rdi, [rsp + 0x28]
// asm:   0x5c65c83: call 0x2fd9c70  ; il2cpp_runtime_helper_02fd9c70()
// asm:   0x5c65c88: mov rdi, rbp
// asm:   0x5c65c8b: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c65c90: mov rdi, rax
// asm:   0x5c65c93: call 0x2ab61e0  ; __clang_call_terminate()

void UI_MobileControlsOverlay__RebuildCoreControls
               (UI_MobileControlsOverlay_o *__this,int32_t role,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t iVar2;
  System_Collections_Generic_List_MobileInputJoystick__o *pSVar3;
  Il2CppObject *pIVar4;
  UnityEngine_RectTransform_o *pUVar5;
  bool bVar6;
  UI_MobileInputLayout_o *pUVar7;
  System_Collections_Generic_List_MobileInputControlLayout__o *pSVar8;
  UI_MobileControlsOverlay___c_StaticFields *pUVar9;
  System_Predicate_T__o *pSVar10;
  System_Collections_Generic_List_MobileInputControlLayout__o *pSVar11;
  UI_MobileInputControlLayout_o *pUVar12;
  UnityEngine_Object_o *pUVar13;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  int iVar14;
  MethodInfo *method_00;
  System_Collections_Generic_List_GameObject__o *pSVar15;
  MethodInfo *in_R8;
  undefined1 local_68 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_60;
  UnityEngine_Object_o *local_58;
  undefined1 local_50 [16];
  UnityEngine_Object_o *local_40;
  System_Collections_Generic_List_MobileInputControlLayout__o *local_38;
  
  if (Il2CppMethodInitialized_075478b1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MobileInputJoystick_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_FindAll);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GameObject_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GameObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_MobileInputControlLayout);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Predicate_MobileInputControlLayout);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MobileControlsOverlay_c_RebuildCoreControls_b__35_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MobileControlsOverlay_c_RebuildCoreControls_b__35_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileControlsOverlay_c);
    Il2CppMethodInitialized_075478b1 = '\x01';
  }
  local_68 = (undefined1  [8])0x0;
  pSStack_60 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  local_58 = (UnityEngine_Object_o *)0x0;
  (__this->fields)._coreLayoutRole = role;
  pSVar15 = (__this->fields)._coreInputControls;
  if (pSVar15 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_05c65c1f;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_50,
             (System_Collections_Generic_List_object__o *)pSVar15,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
  local_58 = local_40;
  local_68 = (undefined1  [8])local_50._0_8_;
  pSStack_60 = (System_Collections_Generic_List_Enumerator_object__o *)local_50._8_8_;
  local_50._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_50._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)local_68;
  while (bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                           ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                            (MethodInfo_4C45C50 *)
                            MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext),
        pUVar13 = local_58, bVar6) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar6 = UnityEngine_Object__op_Inequality(pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar6) {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_69214e0(pUVar13,(MethodInfo *)0x0);
    }
  }
  method_00 = MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose;
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
             (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
  pSVar15 = (__this->fields)._coreInputControls;
  if (pSVar15 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_05c65c1f;
  piVar1 = &(pSVar15->fields)._version;
  *piVar1 = *piVar1 + 1;
  iVar2 = (pSVar15->fields)._size;
  (pSVar15->fields)._size = 0;
  if (0 < iVar2) {
    method_00 = (MethodInfo *)0x0;
    System_Array__Clear((System_Array_o *)(pSVar15->fields)._items,0,iVar2,(MethodInfo *)0x0);
  }
  pSVar3 = (__this->fields)._moveJoysticks;
  if (pSVar3 == (System_Collections_Generic_List_MobileInputJoystick__o *)0x0) goto label_05c65c1f;
  piVar1 = &(pSVar3->fields)._version;
  *piVar1 = *piVar1 + 1;
  iVar2 = (pSVar3->fields)._size;
  (pSVar3->fields)._size = 0;
  if (0 < iVar2) {
    method_00 = (MethodInfo *)0x0;
    System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,iVar2,(MethodInfo *)0x0);
  }
  if ((TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager);
  }
  pUVar7 = UI_MobileInputLayoutManager__GetSelectedLayout(role,method_00);
  if (pUVar7 == (UI_MobileInputLayout_o *)0x0) {
label_05c65993:
    pSVar8 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MobileInputControlLayout);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)pSVar8,
               (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_ctor)
    ;
    if (pUVar7 != (UI_MobileInputLayout_o *)0x0) goto label_05c659c0;
label_05c65a95:
    pSVar11 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MobileInputControlLayout);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)pSVar11,
               (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_ctor)
    ;
    if (pSVar11 == (System_Collections_Generic_List_MobileInputControlLayout__o *)0x0) goto label_05c65c1f;
  }
  else {
    pSVar8 = (pUVar7->fields).Controls;
    if ((TypeInfo_UI_MobileControlsOverlay_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlsOverlay_c);
      pUVar9 = TypeInfo_UI_MobileControlsOverlay_c->static_fields;
      pSVar10 = (System_Predicate_T__o *)pUVar9->__9__35_0;
    }
    else {
      pUVar9 = TypeInfo_UI_MobileControlsOverlay_c->static_fields;
      pSVar10 = (System_Predicate_T__o *)pUVar9->__9__35_0;
    }
    if (pSVar10 == (System_Predicate_T__o *)0x0) {
      if ((((Il2CppClass *)TypeInfo_UI_MobileControlsOverlay_c)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlsOverlay_c);
        pUVar9 = TypeInfo_UI_MobileControlsOverlay_c->static_fields;
      }
      pIVar4 = (Il2CppObject *)pUVar9->__9;
      pSVar10 = (System_Predicate_T__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_MobileInputControlLayout);
      System_Predicate_object____ctor
                ((System_Predicate_object__o *)pSVar10,pIVar4,
                 (intptr_t)MethodInfo_UI_MobileControlsOverlay_c_RebuildCoreControls_b__35_0,
                 (MethodInfo_3DC95B0 *)0x0);
      pUVar9 = TypeInfo_UI_MobileControlsOverlay_c->static_fields;
      pUVar9->__9__35_0 = (System_Predicate_MobileInputControlLayout__o *)pSVar10;
      Il2CppCodeGenWriteBarrier(&pUVar9->__9__35_0);
    }
    if (pSVar8 == (System_Collections_Generic_List_MobileInputControlLayout__o *)0x0) goto label_05c65c1f;
    pSVar8 = (System_Collections_Generic_List_MobileInputControlLayout__o *)
             System_Collections_Generic_List_object___FindAll
                       ((System_Collections_Generic_List_object__o *)pSVar8,pSVar10,
                        (MethodInfo_395DAF0 *)
                        MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_FindAll);
    if (pSVar8 == (System_Collections_Generic_List_MobileInputControlLayout__o *)0x0) goto label_05c65993;
label_05c659c0:
    pSVar11 = (pUVar7->fields).Controls;
    if ((TypeInfo_UI_MobileControlsOverlay_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlsOverlay_c);
      pUVar9 = TypeInfo_UI_MobileControlsOverlay_c->static_fields;
      pSVar10 = (System_Predicate_T__o *)pUVar9->__9__35_1;
    }
    else {
      pUVar9 = TypeInfo_UI_MobileControlsOverlay_c->static_fields;
      pSVar10 = (System_Predicate_T__o *)pUVar9->__9__35_1;
    }
    if (pSVar10 == (System_Predicate_T__o *)0x0) {
      if ((((Il2CppClass *)TypeInfo_UI_MobileControlsOverlay_c)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlsOverlay_c);
        pUVar9 = TypeInfo_UI_MobileControlsOverlay_c->static_fields;
      }
      pIVar4 = (Il2CppObject *)pUVar9->__9;
      pSVar10 = (System_Predicate_T__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_MobileInputControlLayout);
      System_Predicate_object____ctor
                ((System_Predicate_object__o *)pSVar10,pIVar4,
                 (intptr_t)MethodInfo_UI_MobileControlsOverlay_c_RebuildCoreControls_b__35_1,
                 (MethodInfo_3DC95B0 *)0x0);
      pUVar9 = TypeInfo_UI_MobileControlsOverlay_c->static_fields;
      pUVar9->__9__35_1 = (System_Predicate_MobileInputControlLayout__o *)pSVar10;
      Il2CppCodeGenWriteBarrier(&pUVar9->__9__35_1);
    }
    if (pSVar11 == (System_Collections_Generic_List_MobileInputControlLayout__o *)0x0) goto label_05c65c1f;
    pSVar11 = (System_Collections_Generic_List_MobileInputControlLayout__o *)
              System_Collections_Generic_List_object___FindAll
                        ((System_Collections_Generic_List_object__o *)pSVar11,pSVar10,
                         (MethodInfo_395DAF0 *)
                         MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_FindAll);
    if (pSVar11 == (System_Collections_Generic_List_MobileInputControlLayout__o *)0x0) goto label_05c65a95;
  }
  iVar14 = (pSVar11->fields)._size;
  local_38 = pSVar8;
  if (iVar14 == 0) {
    if (role != 5) {
      UI_MobileControlsOverlay__CreateLookArea
                (__this,(__this->fields)._buttonsLayer,role,(UI_MobileInputControlLayout_o *)0x0,in_R8);
    }
  }
  else if (0 < iVar14) {
    iVar14 = 0;
    do {
      pUVar5 = (__this->fields)._buttonsLayer;
      pUVar12 = System_Collections_Generic_List_object___get_Item
                          ((System_Collections_Generic_List_object__o *)pSVar11,iVar14,
                           (MethodInfo_395CF20 *)
                           MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_get_Item);
      UI_MobileControlsOverlay__CreateLookArea(__this,pUVar5,role,pUVar12,in_R8);
      iVar14 = iVar14 + 1;
    } while (iVar14 < (pSVar11->fields)._size);
  }
  pSVar8 = local_38;
  if (local_38 != (System_Collections_Generic_List_MobileInputControlLayout__o *)0x0) {
    iVar14 = (local_38->fields)._size;
    if (iVar14 == 0) {
      if (role != 5) {
        UI_MobileControlsOverlay__CreateJoystick
                  (__this,(__this->fields)._buttonsLayer,role,(UI_MobileInputControlLayout_o *)0x0,in_R8);
      }
    }
    else if (0 < iVar14) {
      iVar14 = 0;
      do {
        pUVar5 = (__this->fields)._buttonsLayer;
        pUVar12 = System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar8,iVar14,
                             (MethodInfo_395CF20 *)
                             MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_get_Item);
        UI_MobileControlsOverlay__CreateJoystick(__this,pUVar5,role,pUVar12,in_R8);
        iVar14 = iVar14 + 1;
      } while (iVar14 < (pSVar8->fields)._size);
    }
    pSVar15 = (__this->fields)._coreInputControls;
    if (pSVar15 != (System_Collections_Generic_List_GameObject__o *)0x0) {
      iVar14 = 0;
      do {
        if ((pSVar15->fields)._size <= iVar14) {
          return;
        }
        pUVar13 = (UnityEngine_Object_o *)
                  System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar15,iVar14,
                             (MethodInfo_395CF20 *)
                             MethodInfo_System_Collections_Generic_List_GameObject_get_Item);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar6 = UnityEngine_Object__op_Inequality(pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar6) {
          pSVar15 = (__this->fields)._coreInputControls;
          if (((pSVar15 == (System_Collections_Generic_List_GameObject__o *)0x0) ||
              (__this_00 = System_Collections_Generic_List_object___get_Item
                                     ((System_Collections_Generic_List_object__o *)pSVar15,iVar14,
                                      (MethodInfo_395CF20 *)
                                      MethodInfo_System_Collections_Generic_List_GameObject_get_Item),
              __this_00 == (UnityEngine_GameObject_o *)0x0)) ||
             (__this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
             __this_01 == (UnityEngine_Transform_o *)0x0)) break;
          UnityEngine_Transform__SetAsFirstSibling(__this_01,(MethodInfo *)0x0);
        }
        iVar14 = iVar14 + 1;
        pSVar15 = (__this->fields)._coreInputControls;
      } while (pSVar15 != (System_Collections_Generic_List_GameObject__o *)0x0);
    }
  }
label_05c65c1f:
  ThrowNullReferenceException();
}


// UI.MobileControlsOverlay$$SetGroupActive
// il2cpp: void UI_MobileControlsOverlay__SetGroupActive (UI_MobileControlsOverlay_o* __this, System_Collections_Generic_List_GameObject__o* group, bool active, const MethodInfo* method);
// 0x5c651a0
// eh: try 0x5c65263..0x5c652df -> pad 0x5c652ee (+5 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c65306..0x5c6530b -> pad 0x5c6532a cleanup
// eh: try 0x5c6532d..0x5c65337 -> pad 0x5c6533f catch (...) [compiler noexcept guard]
// asm: 28 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c652e4: jmp 0x5c652ee
// asm:   0x5c652e6: jmp 0x5c652ee
// asm:   0x5c652e8: jmp 0x5c652ee
// asm:   0x5c652ea: jmp 0x5c652ee
// asm:   0x5c652ec: jmp 0x5c652ee
// asm:   0x5c652ee: mov rbx, rax
// asm:   0x5c652f1: cmp edx, 1
// asm:   0x5c652f4: jne 0x5c6532d
// asm:   0x5c652f6: mov rdi, rbx
// asm:   0x5c652f9: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c652fe: mov rbx, qword ptr [rax]
// asm:   0x5c65301: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5c65306: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c6530b: lea rax, [rip + 0x1628a66]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose
// asm:   0x5c65312: mov rsi, qword ptr [rax]
// asm:   0x5c65315: mov rdi, rsp
// asm:   0x5c65318: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5c6531d: test rbx, rbx
// asm:   0x5c65320: je 0x5c652cb
// asm:   0x5c65322: mov rdi, rbx
// asm:   0x5c65325: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c6532a: mov rbx, rax
// asm:   0x5c6532d: lea rdi, [rsp + 0x18]
// asm:   0x5c65332: call 0x2fd9ca0  ; il2cpp_runtime_helper_02fd9ca0()
// asm:   0x5c65337: mov rdi, rbx
// asm:   0x5c6533a: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c6533f: mov rdi, rax
// asm:   0x5c65342: call 0x2ab61e0  ; __clang_call_terminate()

void UI_MobileControlsOverlay__SetGroupActive
               (UI_MobileControlsOverlay_o *__this,System_Collections_Generic_List_GameObject__o *group,
               bool active,MethodInfo *method)

{
  Il2CppObject *x;
  bool bVar1;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  undefined8 local_40;
  undefined1 *local_38;
  
  if (Il2CppMethodInitialized_075478b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075478b2 = '\x01';
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  if (group == (System_Collections_Generic_List_GameObject__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            (&local_58,(System_Collections_Generic_List_object__o *)group,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
  local_40 = 0;
  local_38 = (undefined1 *)&local_58;
  while( true ) {
    do {
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)&local_58,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext);
      x = local_58.fields._current;
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((System_Collections_Generic_List_Enumerator_object__o *)&local_58,
                   (MethodInfo_4C45C40 *)
                   MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
        return;
      }
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    } while (!bVar1);
    if ((UnityEngine_Object_o *)x == (UnityEngine_Object_o *)0x0) break;
    bVar1 = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)x,(MethodInfo *)0x0);
    if (bVar1 != active) {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)x,active,(MethodInfo *)0x0);
    }
  }
  ThrowNullReferenceException();
}


// UI.MobileControlsOverlay$$CreateLookArea
// il2cpp: void UI_MobileControlsOverlay__CreateLookArea (UI_MobileControlsOverlay_o* __this, UnityEngine_RectTransform_o* parent, int32_t role, UI_MobileInputControlLayout_o* control, const MethodInfo* method);
// 0x5c66f90

void UI_MobileControlsOverlay__CreateLookArea
               (UI_MobileControlsOverlay_o *__this,UnityEngine_RectTransform_o *parent,int32_t role,
               UI_MobileInputControlLayout_o *control,MethodInfo *method)

{
  int32_t *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  System_Collections_Generic_List_GameObject__o *__this_00;
  UnityEngine_GameObject_array *pUVar7;
  UnityEngine_Vector2_o UVar8;
  UnityEngine_Vector2_o size;
  UnityEngine_Vector2_StaticFields *pUVar9;
  UnityEngine_GameObject_o *__this_01;
  UI_MobileInputLookArea_o *pUVar10;
  UI_MobileInputControlLayout_o *method_00;
  undefined4 in_register_00000014;
  MethodInfo *pMVar11;
  MethodInfo *extraout_RDX;
  MethodInfo *method_01;
  System_String_o **ppSVar12;
  UnityEngine_Vector2_c **__this_02;
  float fVar13;
  float fVar14;
  UnityEngine_Vector2_Fields anchorMax;
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  UnityEngine_Vector2_Fields anchoredPosition;
  
  pMVar11 = (MethodInfo *)CONCAT44(in_register_00000014,role);
  method_00 = control;
  __this_02 = (UnityEngine_Vector2_c **)__this;
  if (Il2CppMethodInitialized_075478b3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_CanvasRenderer)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_MobileInputLookArea);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_MobileInputRaycastArea);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Add);
    ppSVar12 = &"LookArea";
    il2cpp_codegen_initialize_runtime_metadata(&"LookArea");
    Il2CppMethodInitialized_075478b3 = '\x01';
    pMVar11 = extraout_RDX;
    __this_02 = (UnityEngine_Vector2_c **)ppSVar12;
  }
  if (control == (UI_MobileInputControlLayout_o *)0x0) {
    if (Il2CppMethodInitialized_07542885 == '\0') {
      __this_02 = &TypeInfo_UnityEngine_Vector2;
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_07542885 = '\x01';
    }
    pUVar9 = TypeInfo_UnityEngine_Vector2->static_fields;
    anchorMax = (pUVar9->oneVector).fields;
    if (Il2CppMethodInitialized_0753ecc8 == '\0') {
      __this_02 = &TypeInfo_UnityEngine_Vector2;
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_0753ecc8 = '\x01';
      pUVar9 = TypeInfo_UnityEngine_Vector2->static_fields;
    }
    anchoredPosition = (pUVar9->zeroVector).fields;
    fVar16 = anchoredPosition.x;
    fVar17 = anchoredPosition.y;
    fVar13 = 0.28;
    fVar14 = 0.5;
  }
  else {
    UVar8 = UI_MobileControlsOverlay__GetLayoutReferenceSize
                      ((UI_MobileControlsOverlay_o *)__this_02,parent,pMVar11);
    fVar13 = UVar8.fields.x;
    if (UVar8.fields.y <= UVar8.fields.x) {
      fVar13 = UVar8.fields.y;
    }
    fVar17 = 1.0;
    if (1.0 <= fVar13) {
      fVar17 = fVar13;
    }
    uVar2 = (control->fields).Width;
    uVar4 = (control->fields).Height;
    auVar15._4_4_ = uVar4;
    auVar15._0_4_ = uVar2;
    auVar15._8_8_ = 0;
    auVar15 = maxps(_DAT_0100a840,auVar15);
    fVar16 = fVar17 * auVar15._0_4_;
    fVar17 = fVar17 * auVar15._4_4_;
    UVar8 = UI_MobileControlsOverlay__GetLayoutReferenceSize
                      ((UI_MobileControlsOverlay_o *)__this_02,parent,method_01);
    uVar3 = (control->fields).X;
    uVar5 = (control->fields).Y;
    anchoredPosition.x = ((float)uVar3 + -0.5) * UVar8.fields.x;
    anchoredPosition.y = ((float)uVar5 + -0.5) * UVar8.fields.y;
    fVar13 = (float)g_data_0100a730;
    fVar14 = g_data_0100a730._4_4_;
    anchorMax = g_data_0100a730;
  }
  UVar8.fields.y = fVar14;
  UVar8.fields.x = fVar13;
  size.fields.y = fVar17;
  size.fields.x = fVar16;
  __this_01 = UI_MobileControlsOverlay__CreateRect
                        ((UI_MobileControlsOverlay_o *)__this_02,"LookArea",parent,UVar8,
                         (UnityEngine_Vector2_o)anchorMax,size,(UnityEngine_Vector2_o)anchoredPosition,
                         (MethodInfo *)method_00);
  pMVar11 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
  __this_00 = (__this->fields)._coreInputControls;
  if (__this_00 != (System_Collections_Generic_List_GameObject__o *)0x0) {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar7 = (__this_00->fields)._items;
    if (pUVar7 != (UnityEngine_GameObject_array *)0x0) {
      uVar6 = (__this_00->fields)._size;
      if (uVar6 < (uint)pUVar7->max_length) {
        (__this_00->fields)._size = uVar6 + 1;
        pUVar7->m_Items[(int)uVar6] = __this_01;
        Il2CppCodeGenWriteBarrier(pUVar7->m_Items + (int)uVar6);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)__this_01,
                   (MethodInfo_395D230 *)pMVar11->klass->rgctx_data[0xe].method);
      }
      if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
        UnityEngine_GameObject__AddComponent_object_
                  (__this_01,
                   (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_CanvasRenderer);
        UnityEngine_GameObject__AddComponent_object_
                  (__this_01,
                   (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_MobileInputRaycastArea
                  );
        pUVar10 = UnityEngine_GameObject__AddComponent_object_
                            (__this_01,
                             (MethodInfo_353B6A0 *)
                             MethodInfo_UnityEngine_GameObject_AddComponent_MobileInputLookArea);
        if (pUVar10 != (UI_MobileInputLookArea_o *)0x0) {
          (pUVar10->fields)._sensitivity = *(float *)(&g_data_0100ac10 + (ulong)(role == 5) * 4);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MobileControlsOverlay$$CreateJoystick
// il2cpp: void UI_MobileControlsOverlay__CreateJoystick (UI_MobileControlsOverlay_o* __this, UnityEngine_RectTransform_o* parent, int32_t role, UI_MobileInputControlLayout_o* control, const MethodInfo* method);
// 0x5c671c0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c679bc: mov rdi, qword ptr [rsp + 0x70]
// asm:   0x5c679c1: test rdi, rdi
// asm:   0x5c679c4: je 0x5c67d4d

void UI_MobileControlsOverlay__CreateJoystick
               (UI_MobileControlsOverlay_o *__this,UnityEngine_RectTransform_o *parent,int32_t role,
               UI_MobileInputControlLayout_o *control,MethodInfo *method)

{
  int32_t *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint32_t uVar7;
  System_Collections_Generic_List_GameObject__o *__this_00;
  UnityEngine_GameObject_array *pUVar8;
  UI_MobileInputJoystick_array *pUVar9;
  int32_t shape;
  UI_MobileInputControlLayout_o *__this_01;
  UI_MobileControlsOverlay_o *__this_02;
  UnityEngine_RectTransform_o *pUVar10;
  UI_MobileInputJoystick_o *__this_03;
  UnityEngine_RectTransform_o *pUVar11;
  UnityEngine_GameObject_o *pUVar12;
  UnityEngine_UI_Image_o *image;
  UnityEngine_UI_Image_o *pUVar13;
  UI_MobileInputSkin_o *pUVar14;
  UI_MobileInputSkin_o *activeSkin;
  UI_MobileInputSkin_o *reelRingSkin;
  UI_MobileInputSkin_o *reelInSkin;
  UI_MobileInputSkin_o *reelOutSkin;
  UI_MobileInputControlLayout_o *method_00;
  MethodInfo *pMVar15;
  UnityEngine_UI_Image_c *method_01;
  undefined4 in_register_00000014;
  MethodInfo *extraout_RDX;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *pMVar16;
  System_String_o **__this_04;
  UI_MobileInputControlLayout_o *__this_05;
  UI_MobileControlsOverlay_o *__this_06;
  UnityEngine_Vector2_c **ppUVar17;
  UnityEngine_Vector2_c **__this_07;
  undefined1 auVar22 [12];
  undefined1 auVar23 [12];
  float fVar18;
  float fVar19;
  UnityEngine_Vector2_o UVar20;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar21 [16];
  undefined1 auVar24 [16];
  UnityEngine_Vector2_o size;
  UnityEngine_Vector2_o size_00;
  undefined1 auVar25 [12];
  undefined1 auVar26 [12];
  MethodInfo *in_stack_ffffffffffffff48;
  UnityEngine_Vector2_o local_98;
  UnityEngine_Vector2_o local_88;
  UnityEngine_Vector2_Fields local_78;
  
  pMVar15 = (MethodInfo *)CONCAT44(in_register_00000014,role);
  method_00 = control;
  pMVar16 = (MethodInfo *)parent;
  __this_04 = (System_String_o **)__this;
  if (Il2CppMethodInitialized_075478b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_CanvasRenderer)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_MobileInputJoystick);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_MobileInputRaycastArea);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MobileInputJoystick_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileControlSkinManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputControlLayout);
    il2cpp_codegen_initialize_runtime_metadata(&"Handle");
    il2cpp_codegen_initialize_runtime_metadata(&"MoveJoystick");
    il2cpp_codegen_initialize_runtime_metadata(&"ReelOutRing");
    __this_04 = &"MoveJoystickTouchArea";
    il2cpp_codegen_initialize_runtime_metadata(&"MoveJoystickTouchArea");
    Il2CppMethodInitialized_075478b4 = '\x01';
    pMVar15 = extraout_RDX;
  }
  if (control == (UI_MobileInputControlLayout_o *)0x0) {
    fVar19 = UI_MobileControlsOverlay__GetReferenceScale(__this,pMVar16);
    fVar18 = UI_MobileControlsOverlay__GetReferenceScale(__this,pMVar16);
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileInputControlLayout);
    UI_MobileInputControlLayout___ctor(__this_01,pMVar16);
    if (__this_01 == (UI_MobileInputControlLayout_o *)0x0) goto label_05c67d4d;
    fVar19 = (float)(~-(uint)(0.0 < fVar19) & 0x3f800000 | (uint)fVar19 & -(uint)(0.0 < fVar19));
    local_98.fields.y = fVar19 * 470.0;
    local_98.fields.x = fVar19 * 620.0;
    fVar19 = (float)(~-(uint)(0.0 < fVar18) & 0x3f800000 | (uint)fVar18 & -(uint)(0.0 < fVar18));
    local_88.fields.y = fVar19 * 365.0;
    local_88.fields.x = fVar19 * 315.0;
    local_78.x = 0.0;
    local_78.y = 0.0;
  }
  else {
    auVar24._0_8_ =
         UI_MobileControlsOverlay__GetLayoutReferenceSize
                   ((UI_MobileControlsOverlay_o *)__this_04,parent,pMVar15);
    auVar24._8_8_ = extraout_XMM0_Qb;
    fVar19 = auVar24._4_4_;
    if (fVar19 <= auVar24._0_4_) {
      auVar24._0_4_ = fVar19;
    }
    auVar25 = ZEXT812(0x3f800000);
    if (auVar25._0_4_ <= auVar24._0_4_) {
      auVar25._4_8_ = auVar25._4_8_;
      auVar25._0_4_ = auVar24._0_4_;
    }
    uVar2 = (control->fields).Width;
    uVar4 = (control->fields).Height;
    auVar21._4_4_ = uVar4;
    auVar21._0_4_ = uVar2;
    auVar21._8_8_ = 0;
    auVar24 = maxps(_DAT_0100a840,auVar21);
    local_98.fields.y = auVar25._0_4_ * auVar24._4_4_;
    local_98.fields.x = auVar25._0_4_ * auVar24._0_4_;
    pMVar16 = (MethodInfo *)parent;
    UVar20 = UI_MobileControlsOverlay__GetLayoutReferenceSize
                       ((UI_MobileControlsOverlay_o *)__this_04,parent,method_02);
    uVar3 = (control->fields).X;
    uVar5 = (control->fields).Y;
    local_88.fields.y = ((float)uVar5 + -0.5) * UVar20.fields.y;
    local_88.fields.x = ((float)uVar3 + -0.5) * UVar20.fields.x;
    local_78.x = 0.5;
    local_78.y = 0.5;
    __this_01 = control;
  }
  __this_05 = __this_01;
  shape = UI_MobileInputControlLayout__GetShape(__this_01,pMVar16);
  __this_02 = (UI_MobileControlsOverlay_o *)
              UI_MobileControlsOverlay__CreateRect
                        ((UI_MobileControlsOverlay_o *)__this_05,"MoveJoystickTouchArea",parent,
                         (UnityEngine_Vector2_o)local_78,(UnityEngine_Vector2_o)local_78,local_98,local_88,
                         (MethodInfo *)method_00);
  pMVar15 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
  __this_00 = (__this->fields)._coreInputControls;
  if (__this_00 == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_05c67d4d;
  piVar1 = &(__this_00->fields)._version;
  *piVar1 = *piVar1 + 1;
  pUVar8 = (__this_00->fields)._items;
  if (pUVar8 == (UnityEngine_GameObject_array *)0x0) goto label_05c67d4d;
  uVar6 = (__this_00->fields)._size;
  if (uVar6 < (uint)pUVar8->max_length) {
    pMVar15 = (MethodInfo *)(ulong)(uVar6 + 1);
    (__this_00->fields)._size = uVar6 + 1;
    pUVar8->m_Items[(int)uVar6] = (UnityEngine_GameObject_o *)__this_02;
    Il2CppCodeGenWriteBarrier(pUVar8->m_Items + (int)uVar6);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize
              ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)__this_02,
               (MethodInfo_395D230 *)pMVar15->klass->rgctx_data[0xe].method);
  }
  if (__this_02 == (UI_MobileControlsOverlay_o *)0x0) goto label_05c67d4d;
  __this_06 = __this_02;
  pUVar10 = UnityEngine_GameObject__GetComponent_object_
                      ((UnityEngine_GameObject_o *)__this_02,
                       (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
  UI_MobileControlsOverlay__RegisterButtonRect(__this_06,pUVar10,control,pMVar15);
  UnityEngine_GameObject__AddComponent_object_
            ((UnityEngine_GameObject_o *)__this_02,
             (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_CanvasRenderer);
  UnityEngine_GameObject__AddComponent_object_
            ((UnityEngine_GameObject_o *)__this_02,
             (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_MobileInputRaycastArea);
  __this_03 = UnityEngine_GameObject__AddComponent_object_
                        ((UnityEngine_GameObject_o *)__this_02,
                         (MethodInfo_353B6A0 *)
                         MethodInfo_UnityEngine_GameObject_AddComponent_MobileInputJoystick);
  pMVar15 = MethodInfo_System_Collections_Generic_List_MobileInputJoystick_Add;
  ppUVar17 = (UnityEngine_Vector2_c **)(__this->fields)._moveJoysticks;
  if ((UI_MobileControlsOverlay_o *)ppUVar17 == (UI_MobileControlsOverlay_o *)0x0) goto label_05c67d4d;
  piVar1 = (int32_t *)
           ((long)&(((UI_MobileControlsOverlay_o *)ppUVar17)->fields).m_CancellationTokenSource + 4);
  *piVar1 = *piVar1 + 1;
  pUVar9 = (UI_MobileInputJoystick_array *)(((UI_MobileControlsOverlay_o *)ppUVar17)->fields).m_CachedPtr;
  if (pUVar9 == (UI_MobileInputJoystick_array *)0x0) goto label_05c67d4d;
  uVar6 = *(uint *)&(((UI_MobileControlsOverlay_o *)ppUVar17)->fields).m_CancellationTokenSource;
  if (uVar6 < (uint)pUVar9->max_length) {
    pMVar15 = (MethodInfo *)(ulong)(uVar6 + 1);
    *(uint *)&(((UI_MobileControlsOverlay_o *)ppUVar17)->fields).m_CancellationTokenSource = uVar6 + 1;
    ppUVar17 = (UnityEngine_Vector2_c **)(pUVar9->m_Items + (int)uVar6);
    pUVar9->m_Items[(int)uVar6] = __this_03;
    Il2CppCodeGenWriteBarrier(ppUVar17);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize
              ((System_Collections_Generic_List_object__o *)ppUVar17,(Il2CppObject *)__this_03,
               (MethodInfo_395D230 *)pMVar15->klass->rgctx_data[0xe].method);
  }
  if (local_98.fields.y <= local_98.fields.x) {
    local_98.fields.x = local_98.fields.y;
  }
  fVar19 = (__this_01->fields).JoystickBaseScale;
  auVar22 = ZEXT812(0x40000000);
  if (fVar19 <= auVar22._0_4_) {
    auVar22._4_8_ = auVar22._4_8_;
    auVar22._0_4_ = fVar19;
  }
  UVar20.fields.x =
       (float)(~-(uint)(0.0 < fVar19) & 0x3ee66666 |
              (~-(uint)(0.01 <= fVar19) & 0x3c23d70a | auVar22._0_4_ & -(uint)(0.01 <= fVar19)) &
              -(uint)(0.0 < fVar19)) * local_98.fields.x;
  UVar20.fields.y = UVar20.fields.x;
  if (Il2CppMethodInitialized_0753ecc8 == '\0') {
    ppUVar17 = &TypeInfo_UnityEngine_Vector2;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0753ecc8 = '\x01';
  }
  ppUVar17 = (UnityEngine_Vector2_c **)
             UI_MobileControlsOverlay__CreateRect
                       ((UI_MobileControlsOverlay_o *)ppUVar17,"MoveJoystick",pUVar10,
                        (UnityEngine_Vector2_o)0x3f0000003f000000,(UnityEngine_Vector2_o)0x3f0000003f000000,
                        UVar20,(UnityEngine_Vector2_o)
                               (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,pMVar15);
  if ((UI_MobileControlsOverlay_o *)ppUVar17 == (UI_MobileControlsOverlay_o *)0x0) goto label_05c67d4d;
  pMVar16 = MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform;
  pUVar10 = UnityEngine_GameObject__GetComponent_object_
                      ((UnityEngine_GameObject_o *)ppUVar17,
                       (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
  fVar19 = (__this_01->fields).JoystickReelOutRingDiameter;
  auVar23 = ZEXT812(0x3f800000);
  if (auVar23._0_4_ <= fVar19) {
    auVar23._4_8_ = auVar23._4_8_;
    auVar23._0_4_ = fVar19;
  }
  fVar18 = UI_MobileControlsOverlay__GetReferenceScale(__this,pMVar16);
  fVar18 = fVar18 * (float)(~-(uint)(0.0 < fVar19) & 0x43be0000 | auVar23._0_4_ & -(uint)(0.0 < fVar19));
  __this_07 = ppUVar17;
  pUVar11 = UnityEngine_GameObject__GetComponent_object_
                      ((UnityEngine_GameObject_o *)ppUVar17,
                       (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
  size.fields.y = fVar18;
  size.fields.x = fVar18;
  if (Il2CppMethodInitialized_0753ecc8 == '\0') {
    __this_07 = &TypeInfo_UnityEngine_Vector2;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0753ecc8 = '\x01';
  }
  pUVar12 = UI_MobileControlsOverlay__CreateRect
                      ((UI_MobileControlsOverlay_o *)__this_07,"ReelOutRing",pUVar11,
                       (UnityEngine_Vector2_o)0x3f0000003f000000,(UnityEngine_Vector2_o)0x3f0000003f000000,
                       size,(UnityEngine_Vector2_o)
                            (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,pMVar15);
  if ((pUVar12 == (UnityEngine_GameObject_o *)0x0) ||
     (image = UnityEngine_GameObject__AddComponent_object_
                        (pUVar12,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_Image),
     image == (UnityEngine_UI_Image_o *)0x0)) goto label_05c67d4d;
  method_01 = image->klass;
  (*(method_01->vtable)._25_set_raycastTarget.methodPtr)
            (image,0,(method_01->vtable)._25_set_raycastTarget.method);
  if (Il2CppMethodInitialized_07547920 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputSkin);
    Il2CppMethodInitialized_07547920 = '\x01';
    pUVar14 = (__this_01->fields).JoystickRingSkin;
    if (pUVar14 == (UI_MobileInputSkin_o *)0x0) goto label_05c67a57;
label_05c676ed:
    uVar7 = (TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    pUVar14 = (__this_01->fields).JoystickRingSkin;
    if (pUVar14 != (UI_MobileInputSkin_o *)0x0) goto label_05c676ed;
label_05c67a57:
    pUVar14 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileInputSkin);
    (pUVar14->fields).Image = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    Il2CppCodeGenWriteBarrier(&(pUVar14->fields).Image);
    (pUVar14->fields).PreserveAspect = true;
    System_Object___ctor((Il2CppObject *)pUVar14,(MethodInfo *)0x0);
    (pUVar14->fields).R = 1.0;
    (pUVar14->fields).G = 1.0;
    (pUVar14->fields).B = 1.0;
    (pUVar14->fields).A = 0.08;
    uVar7 = (TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar7 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
  }
  UI_MobileControlSkinManager__ApplySkin(image,pUVar14,shape,(MethodInfo *)method_01);
  UnityEngine_GameObject__SetActive(pUVar12,role != 5,(MethodInfo *)0x0);
  pUVar13 = UnityEngine_GameObject__AddComponent_object_
                      ((UnityEngine_GameObject_o *)ppUVar17,
                       (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_Image);
  if (Il2CppMethodInitialized_0754791c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputSkin);
    Il2CppMethodInitialized_0754791c = '\x01';
  }
  pUVar14 = (__this_01->fields).Skin;
  if (pUVar14 == (UI_MobileInputSkin_o *)0x0) {
    pUVar14 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileInputSkin);
    (pUVar14->fields).Image = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    Il2CppCodeGenWriteBarrier(&(pUVar14->fields).Image);
    (pUVar14->fields).PreserveAspect = true;
    System_Object___ctor((Il2CppObject *)pUVar14,(MethodInfo *)0x0);
    (pUVar14->fields).R = 0.0;
    (pUVar14->fields).G = 0.0;
    (pUVar14->fields).B = 0.0;
    (pUVar14->fields).A = 0.38;
  }
  UI_MobileControlSkinManager__ApplySkin(pUVar13,pUVar14,shape,(MethodInfo *)method_01);
  fVar19 = (__this_01->fields).JoystickHandleScale;
  auVar26 = ZEXT812(0x40000000);
  if (fVar19 <= auVar26._0_4_) {
    auVar26._4_8_ = auVar26._4_8_;
    auVar26._0_4_ = fVar19;
  }
  fVar19 = UVar20.fields.x *
           (float)(~-(uint)(0.0 < fVar19) & 0x3edc28f6 |
                  (~-(uint)(0.01 <= fVar19) & 0x3c23d70a | auVar26._0_4_ & -(uint)(0.01 <= fVar19)) &
                  -(uint)(0.0 < fVar19));
  pUVar11 = UnityEngine_GameObject__GetComponent_object_
                      ((UnityEngine_GameObject_o *)ppUVar17,
                       (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
  size_00.fields.y = fVar19;
  size_00.fields.x = fVar19;
  if (Il2CppMethodInitialized_0753ecc8 == '\0') {
    ppUVar17 = &TypeInfo_UnityEngine_Vector2;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0753ecc8 = '\x01';
  }
  pUVar12 = UI_MobileControlsOverlay__CreateRect
                      ((UI_MobileControlsOverlay_o *)ppUVar17,"Handle",pUVar11,
                       (UnityEngine_Vector2_o)0x3f0000003f000000,(UnityEngine_Vector2_o)0x3f0000003f000000,
                       size_00,(UnityEngine_Vector2_o)
                               (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                       (MethodInfo *)method_01);
  if (pUVar12 == (UnityEngine_GameObject_o *)0x0) goto label_05c67d4d;
  pUVar11 = UnityEngine_GameObject__GetComponent_object_
                      (pUVar12,(MethodInfo_353B730 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
  pUVar13 = UnityEngine_GameObject__AddComponent_object_
                      (pUVar12,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_Image);
  if (Il2CppMethodInitialized_0754791e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputSkin);
    Il2CppMethodInitialized_0754791e = '\x01';
  }
  pUVar14 = (__this_01->fields).JoystickHandleSkin;
  if (pUVar14 == (UI_MobileInputSkin_o *)0x0) {
    pUVar14 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileInputSkin);
    (pUVar14->fields).Image = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    Il2CppCodeGenWriteBarrier(&(pUVar14->fields).Image);
    (pUVar14->fields).PreserveAspect = true;
    System_Object___ctor((Il2CppObject *)pUVar14,(MethodInfo *)0x0);
    (pUVar14->fields).R = 1.0;
    (pUVar14->fields).G = 1.0;
    (pUVar14->fields).B = 1.0;
    (pUVar14->fields).A = 0.35;
  }
  UI_MobileControlSkinManager__ApplySkin(pUVar13,pUVar14,shape,(MethodInfo *)method_01);
  if (Il2CppMethodInitialized_0754791c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputSkin);
    Il2CppMethodInitialized_0754791c = '\x01';
    pUVar14 = (__this_01->fields).Skin;
    if (pUVar14 == (UI_MobileInputSkin_o *)0x0) goto label_05c67ae8;
label_05c6794b:
    if (g_data_0754791f != '\0') goto label_05c67958;
label_05c67b45:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputSkin);
    g_data_0754791f = '\x01';
    activeSkin = (__this_01->fields).JoystickActiveSkin;
    if (activeSkin == (UI_MobileInputSkin_o *)0x0) goto label_05c67b65;
label_05c67965:
    if (Il2CppMethodInitialized_07547920 != '\0') goto label_05c67972;
label_05c67bc4:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputSkin);
    Il2CppMethodInitialized_07547920 = '\x01';
    reelRingSkin = (__this_01->fields).JoystickRingSkin;
    if (reelRingSkin == (UI_MobileInputSkin_o *)0x0) goto label_05c67be7;
label_05c67982:
    if (g_data_07547921 != '\0') goto label_05c6798f;
label_05c67c4a:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputSkin);
    g_data_07547921 = '\x01';
    reelInSkin = (__this_01->fields).JoystickReelInSkin;
    if (reelInSkin == (UI_MobileInputSkin_o *)0x0) goto label_05c67c6d;
label_05c6799f:
    if (g_data_07547922 != '\0') goto label_05c679ac;
label_05c67cca:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputSkin);
    g_data_07547922 = '\x01';
    reelOutSkin = (__this_01->fields).JoystickReelOutSkin;
  }
  else {
    pUVar14 = (__this_01->fields).Skin;
    if (pUVar14 != (UI_MobileInputSkin_o *)0x0) goto label_05c6794b;
label_05c67ae8:
    pUVar14 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileInputSkin);
    (pUVar14->fields).Image = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    Il2CppCodeGenWriteBarrier(&(pUVar14->fields).Image);
    (pUVar14->fields).PreserveAspect = true;
    System_Object___ctor((Il2CppObject *)pUVar14,(MethodInfo *)0x0);
    (pUVar14->fields).R = 0.0;
    (pUVar14->fields).G = 0.0;
    (pUVar14->fields).B = 0.0;
    (pUVar14->fields).A = 0.38;
    if (g_data_0754791f == '\0') goto label_05c67b45;
label_05c67958:
    activeSkin = (__this_01->fields).JoystickActiveSkin;
    if (activeSkin != (UI_MobileInputSkin_o *)0x0) goto label_05c67965;
label_05c67b65:
    activeSkin = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileInputSkin);
    (activeSkin->fields).Image = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    Il2CppCodeGenWriteBarrier(&(activeSkin->fields).Image);
    (activeSkin->fields).PreserveAspect = true;
    System_Object___ctor((Il2CppObject *)activeSkin,(MethodInfo *)0x0);
    (activeSkin->fields).R = 1.0;
    (activeSkin->fields).G = 1.0;
    (activeSkin->fields).B = 1.0;
    (activeSkin->fields).A = 0.4;
    if (Il2CppMethodInitialized_07547920 == '\0') goto label_05c67bc4;
label_05c67972:
    reelRingSkin = (__this_01->fields).JoystickRingSkin;
    if (reelRingSkin != (UI_MobileInputSkin_o *)0x0) goto label_05c67982;
label_05c67be7:
    reelRingSkin = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileInputSkin);
    (reelRingSkin->fields).Image = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    Il2CppCodeGenWriteBarrier(&(reelRingSkin->fields).Image);
    (reelRingSkin->fields).PreserveAspect = true;
    System_Object___ctor((Il2CppObject *)reelRingSkin,(MethodInfo *)0x0);
    (reelRingSkin->fields).R = 1.0;
    (reelRingSkin->fields).G = 1.0;
    (reelRingSkin->fields).B = 1.0;
    (reelRingSkin->fields).A = 0.08;
    if (g_data_07547921 == '\0') goto label_05c67c4a;
label_05c6798f:
    reelInSkin = (__this_01->fields).JoystickReelInSkin;
    if (reelInSkin != (UI_MobileInputSkin_o *)0x0) goto label_05c6799f;
label_05c67c6d:
    reelInSkin = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileInputSkin);
    (reelInSkin->fields).Image = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    Il2CppCodeGenWriteBarrier(&(reelInSkin->fields).Image);
    (reelInSkin->fields).PreserveAspect = true;
    System_Object___ctor((Il2CppObject *)reelInSkin,(MethodInfo *)0x0);
    (reelInSkin->fields).R = 1.0;
    (reelInSkin->fields).G = 0.15;
    (reelInSkin->fields).B = 0.12;
    (reelInSkin->fields).A = 0.24;
    if (g_data_07547922 == '\0') goto label_05c67cca;
label_05c679ac:
    reelOutSkin = (__this_01->fields).JoystickReelOutSkin;
  }
  if (reelOutSkin == (UI_MobileInputSkin_o *)0x0) {
    reelOutSkin = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileInputSkin);
    (reelOutSkin->fields).Image = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    Il2CppCodeGenWriteBarrier(&(reelOutSkin->fields).Image);
    (reelOutSkin->fields).PreserveAspect = true;
    System_Object___ctor((Il2CppObject *)reelOutSkin,(MethodInfo *)0x0);
    (reelOutSkin->fields).R = 0.15;
    (reelOutSkin->fields).G = 0.95;
    (reelOutSkin->fields).B = 0.45;
    (reelOutSkin->fields).A = 0.22;
  }
  if (__this_03 != (UI_MobileInputJoystick_o *)0x0) {
    UI_MobileInputJoystick__Setup
              (__this_03,pUVar10,pUVar11,fVar19,image,fVar18 * 0.5,pUVar14,activeSkin,reelRingSkin,reelInSkin,
               reelOutSkin,shape,(__this_01->fields).BindReelInAngle,(__this_01->fields).BindReelOutAngle,
               in_stack_ffffffffffffff48);
    UI_MobileControlsOverlay__RegisterMoveJoystickDisplayNames(__this,role,method_03);
    return;
  }
label_05c67d4d:
  ThrowNullReferenceException();
}


// UI.MobileControlsOverlay$$UpdateAutoGas
// il2cpp: void UI_MobileControlsOverlay__UpdateAutoGas (UI_MobileControlsOverlay_o* __this, const MethodInfo* method);
// 0x5c645b0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c6466e: cmp byte ptr [rip + 0x18e3300], 0
// asm:   0x5c64675: je 0x5c647bf

void UI_MobileControlsOverlay__UpdateAutoGas(UI_MobileControlsOverlay_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  uint32_t uVar2;
  GameManagers_BaseGameManager_o *pGVar3;
  UnityEngine_Object_o *pUVar4;
  bool bVar5;
  byte bVar6;
  UnityEngine_Object_o *x;
  float local_38;
  float fStack_34;
  
  if (Il2CppMethodInitialized_075478b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBridge);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_075478b5 = '\x01';
  }
  pGVar3 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (pGVar3 != (GameManagers_BaseGameManager_o *)0x0) {
    bVar6 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
    if (((bVar6 <= (pGVar3->klass->_2).typeHierarchyDepth) &&
        ((pGVar3->klass->_2).typeHierarchy[(ulong)bVar6 - 1] ==
         (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) &&
       (pUVar4 = (*(uint64_t *)((char *)pGVar3 + 0x80)), pUVar4 != (UnityEngine_Object_o *)0x0)) {
      bVar6 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
      if (bVar6 <= (pUVar4->klass->_2).typeHierarchyDepth) {
        x = (UnityEngine_Object_o *)0x0;
        if ((pUVar4->klass->_2).typeHierarchy[(ulong)bVar6 - 1] == (Il2CppClass *)TypeInfo_Characters_Human) {
          x = pUVar4;
        }
        uVar2 = (TypeInfo_Settings_MobileInputBridge->_2).cctor_finished_or_no_cctor;
        goto joined_r0x05c64668;
      }
    }
  }
  x = (UnityEngine_Object_o *)0x0;
  uVar2 = (TypeInfo_Settings_MobileInputBridge->_2).cctor_finished_or_no_cctor;
joined_r0x05c64668:
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBridge);
  }
  if (Il2CppMethodInitialized_07547975 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBridge);
    Il2CppMethodInitialized_07547975 = '\x01';
    uVar2 = (TypeInfo_Settings_MobileInputBridge->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (((Il2CppClass *)TypeInfo_Settings_MobileInputBridge)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBridge);
  }
  UVar1 = (TypeInfo_Settings_MobileInputBridge->static_fields->_moveVector).fields;
  if ((__this->fields)._visible == false) {
    bVar6 = 0;
  }
  else {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar6 = 0;
    bVar5 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar5) {
      if (x == (UnityEngine_Object_o *)0x0) {
        ThrowNullReferenceException();
      }
      if ((*(char *)&(*(uint64_t *)((char *)x + 0x78)) == '\0') && (*(char *)((long)&(*(uint64_t *)((char *)x + 0xd0)) + 4) == '\0')) {
        if ((TypeInfo_Settings_MobileInputBridge->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBridge);
        }
        bVar6 = TypeInfo_Settings_MobileInputBridge->static_fields->AutoUseGasEnabled;
      }
    }
  }
  if ((TypeInfo_Settings_MobileInputBridge->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBridge);
  }
  local_38 = UVar1.x;
  fStack_34 = UVar1.y;
  Settings_MobileInputBridge__SetAutoGas
            ((bool)(bVar6 & 0.04 < fStack_34 * fStack_34 + local_38 * local_38),(MethodInfo *)0x0);
  return;
}


// UI.MobileControlsOverlay$$UpdateAutoReel
// il2cpp: void UI_MobileControlsOverlay__UpdateAutoReel (UI_MobileControlsOverlay_o* __this, const MethodInfo* method);
// 0x5c64800
// eh: try 0x5c64b74..0x5c64c8c -> pad 0x5c64c9f (+7 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c64cb7..0x5c64cbc -> pad 0x5c64ce1 cleanup
// eh: try 0x5c64ce4..0x5c64cee -> pad 0x5c64cf6 catch (...) [compiler noexcept guard]
// asm: 30 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c64c91: jmp 0x5c64c9f
// asm:   0x5c64c93: jmp 0x5c64c9f
// asm:   0x5c64c95: jmp 0x5c64c9f
// asm:   0x5c64c97: jmp 0x5c64c9f
// asm:   0x5c64c99: jmp 0x5c64c9f
// asm:   0x5c64c9b: jmp 0x5c64c9f
// asm:   0x5c64c9d: jmp 0x5c64c9f
// asm:   0x5c64c9f: mov rbx, rax
// asm:   0x5c64ca2: cmp edx, 1
// asm:   0x5c64ca5: jne 0x5c64ce4
// asm:   0x5c64ca7: mov rdi, rbx
// asm:   0x5c64caa: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c64caf: mov rbx, qword ptr [rax]
// asm:   0x5c64cb2: mov qword ptr [rsp + 0x48], rbx
// asm:   0x5c64cb7: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c64cbc: lea rax, [rip + 0x16298dd]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MobileInputJoystick_Dispose
// asm:   0x5c64cc3: mov rsi, qword ptr [rax]
// asm:   0x5c64cc6: lea rdi, [rsp + 0x60]
// asm:   0x5c64ccb: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5c64cd0: test rbx, rbx
// asm:   0x5c64cd3: je 0x5c64c0b
// asm:   0x5c64cd9: mov rdi, rbx
// asm:   0x5c64cdc: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c64ce1: mov rbx, rax
// asm:   0x5c64ce4: lea rdi, [rsp + 0x48]
// asm:   0x5c64ce9: call 0x2fd9cd0  ; il2cpp_runtime_helper_02fd9cd0()
// asm:   0x5c64cee: mov rdi, rbx
// asm:   0x5c64cf1: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c64cf6: mov rdi, rax
// asm:   0x5c64cf9: call 0x2ab61e0  ; __clang_call_terminate()

void UI_MobileControlsOverlay__UpdateAutoReel(UI_MobileControlsOverlay_o *__this,MethodInfo *method)

{
  float fVar1;
  byte bVar2;
  uint32_t uVar3;
  UI_MobileInputJoystick_o *x;
  GameManagers_BaseGameManager_o *pGVar4;
  Characters_Human_o *human;
  System_Collections_Generic_List_MobileInputJoystick__o *__this_00;
  Il2CppObject *__this_01;
  bool bVar5;
  bool bVar6;
  GameManagers_InGameManager_c *in_RCX;
  MethodInfo *method_00;
  UI_MobileInputJoystick_o *__this_02;
  float fVar7;
  byte bVar8;
  UnityEngine_Vector3_Fields UStack_98;
  UnityEngine_Vector3_Fields UStack_88;
  UnityEngine_Vector2_Fields UStack_78;
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  UI_MobileInputJoystick_o *pUStack_50;
  System_Collections_Generic_List_Enumerator_object__o SStack_48;
  
  if (Il2CppMethodInitialized_075478b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MobileInputJoystick_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MobileInputJoystick_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MobileInputJoystick_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MobileInputJoystick_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBridge);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_075478b6 = '\x01';
  }
  UStack_88.z = 0.0;
  UStack_88.x = 0.0;
  UStack_88.y = 0.0;
  UStack_98.z = 0.0;
  UStack_98.x = 0.0;
  UStack_98.y = 0.0;
  if (Il2CppMethodInitialized_07547976 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputJoystick);
    Il2CppMethodInitialized_07547976 = '\x01';
  }
  x = TypeInfo_UI_MobileInputJoystick->static_fields->_ActiveJoystick_k__BackingField;
  if (((__this->fields)._visible == false) ||
     (pGVar4 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager,
     pGVar4 == (GameManagers_BaseGameManager_o *)0x0)) {
label_05c64af9:
    bVar6 = false;
    bVar8 = 0;
  }
  else {
    bVar2 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
    bVar6 = false;
    bVar8 = 0;
    in_RCX = TypeInfo_GameManagers_InGameManager;
    if (bVar2 <= (pGVar4->klass->_2).typeHierarchyDepth) {
      bVar6 = false;
      bVar8 = 0;
      if ((pGVar4->klass->_2).typeHierarchy[(ulong)bVar2 - 1] ==
          (Il2CppClass *)TypeInfo_GameManagers_InGameManager) {
        human = (*(uint64_t *)((char *)pGVar4 + 0x80));
        if (human == (Characters_Human_o *)0x0) goto label_05c64af9;
        bVar2 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
        in_RCX = (GameManagers_InGameManager_c *)(ulong)bVar2;
        bVar6 = false;
        bVar8 = 0;
        if (bVar2 <= (human->klass->_2).typeHierarchyDepth) {
          bVar6 = false;
          bVar8 = 0;
          if ((human->klass->_2).typeHierarchy
              [(long)((long)&in_RCX[-1].vtable._57_OnFinishLoading.method + 7)] ==
              (Il2CppClass *)TypeInfo_Characters_Human) {
            bVar6 = false;
            bVar8 = 0;
            if ((human->fields).Dead == false) {
              if ((TypeInfo_Settings_MobileInputBridge->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBridge);
                if (Il2CppMethodInitialized_07547975 != '\0') goto label_05c649e7;
label_05c64c57:
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBridge);
                Il2CppMethodInitialized_07547975 = '\x01';
                uVar3 = (TypeInfo_Settings_MobileInputBridge->_2).cctor_finished_or_no_cctor;
              }
              else {
                if (Il2CppMethodInitialized_07547975 == '\0') goto label_05c64c57;
label_05c649e7:
                uVar3 = (TypeInfo_Settings_MobileInputBridge->_2).cctor_finished_or_no_cctor;
              }
              if (uVar3 == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBridge);
              }
              UStack_78 = (TypeInfo_Settings_MobileInputBridge->static_fields->_moveVector).fields;
              uStack_70 = 0;
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar6 = false;
              __this_02 = x;
              bVar5 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              in_RCX = (GameManagers_InGameManager_c *)0x0;
              bVar8 = 0;
              if (bVar5) {
                if (x == (UI_MobileInputJoystick_o *)0x0) goto label_05c64c8c;
                if ((x->fields)._PulledPastReelOutRing_k__BackingField == false) goto label_05c64af9;
                bVar5 = UI_MobileControlsOverlay__TryGetHorizontalMoveDirection
                                  ((UI_MobileControlsOverlay_o *)__this_02,(UnityEngine_Vector2_o)UStack_78,
                                   (UnityEngine_Vector3_o *)&UStack_88,method_00);
                bVar6 = false;
                in_RCX = (GameManagers_InGameManager_c *)0x0;
                bVar8 = 0;
                if (bVar5) {
                  bVar5 = UI_MobileControlsOverlay__TryGetHorizontalHookDirection
                                    ((UI_MobileControlsOverlay_o *)__this_02,human,
                                     (UnityEngine_Vector3_o *)&UStack_98,(MethodInfo *)0x0);
                  bVar6 = false;
                  in_RCX = (GameManagers_InGameManager_c *)0x0;
                  bVar8 = 0;
                  if (bVar5) {
                    bVar6 = false;
                    fVar7 = (float)il2cpp_runtime_helper_059d7e70(UStack_88.x,UStack_88.z,UStack_98._0_8_,0);
                    fVar1 = (x->fields)._reelInAngle;
                    bVar8 = -(fVar7 < fVar1 && 0.0 < fVar1);
                    fVar1 = (x->fields)._reelOutAngle;
                    if (fVar1 < 180.0) {
                      bVar6 = fVar1 < fVar7;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  __this_00 = (__this->fields)._moveJoysticks;
  if (__this_00 != (System_Collections_Generic_List_MobileInputJoystick__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_60,
               (System_Collections_Generic_List_object__o *)__this_00,
               (MethodInfo_395E050 *)
               MethodInfo_System_Collections_Generic_List_MobileInputJoystick_GetEnumerator);
    SStack_48.fields._current = (Il2CppObject *)pUStack_50;
    SStack_48.fields._list = (System_Collections_Generic_List_T__o *)auStack_60._0_8_;
    SStack_48.fields._index = auStack_60._8_4_;
    SStack_48.fields._version = auStack_60._12_4_;
    auStack_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    UStack_78.x = (float)(uint)bVar6;
    auStack_60._8_8_ = &SStack_48;
    while( true ) {
      do {
        bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (&SStack_48,
                           (MethodInfo_4C45C50 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_MobileInputJoystick_MoveNext)
        ;
        __this_01 = SStack_48.fields._current;
        if (!bVar6) {
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (&SStack_48,
                     (MethodInfo_4C45C40 *)
                     MethodInfo_System_Collections_Generic_List_Enumerator_MobileInputJoystick_Dispose);
          if ((TypeInfo_Settings_MobileInputBridge->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBridge);
          }
          Settings_MobileInputBridge__SetAutoReel((bool)(bVar8 & 1),UStack_78.x._0_1_,(MethodInfo *)0x0);
          return;
        }
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar6 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      } while (!bVar6);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar6 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)x,(MethodInfo *)0x0);
      bVar5 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)x,(MethodInfo *)0x0);
      if ((UI_MobileInputJoystick_o *)__this_01 == (UI_MobileInputJoystick_o *)0x0) break;
      UI_MobileInputJoystick__SetReelRingColor
                ((UI_MobileInputJoystick_o *)__this_01,(bool)(bVar6 & bVar8),(bool)(bVar5 & UStack_78.x._0_1_)
                 ,(MethodInfo *)in_RCX);
    }
    ThrowNullReferenceException();
  }
label_05c64c8c:
  ThrowNullReferenceException();
}


// UI.MobileControlsOverlay$$TryGetHorizontalMoveDirection
// il2cpp: bool UI_MobileControlsOverlay__TryGetHorizontalMoveDirection (UI_MobileControlsOverlay_o* __this, UnityEngine_Vector2_o move, UnityEngine_Vector3_o* direction, const MethodInfo* method);
// 0x5c69020
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c6918a: mov qword ptr [rsp + 0x18], 0
// asm:   0x5c69193: cmp byte ptr [rip + 0x18d558f], 0
// asm:   0x5c6919a: je 0x5c6923a
// asm:   0x5c691b7: xorps xmm0, xmm0
// asm:   0x5c691ba: ucomiss xmm6, xmm0
// asm:   0x5c691bd: jb 0x5c69289
// asm:   0x5c69202: jmp 0x5c692d4

bool UI_MobileControlsOverlay__TryGetHorizontalMoveDirection
               (UI_MobileControlsOverlay_o *__this,UnityEngine_Vector2_o move,UnityEngine_Vector3_o *direction
               ,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint32_t uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulong uVar9;
  bool bVar10;
  UnityEngine_Camera_o *x;
  UnityEngine_Transform_o *pUVar11;
  UnityEngine_Vector3_StaticFields *pUVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 in_XMM0_Dc;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 in_XMM0_Dd;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined1 auVar17 [12];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  UnityEngine_Vector3_o UVar26;
  undefined1 local_90 [12];
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_5c;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  local_58._8_4_ = in_XMM0_Dc;
  local_58._0_8_ = move.fields;
  local_58._12_4_ = in_XMM0_Dd;
  if (Il2CppMethodInitialized_075478b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075478b7 = '\x01';
  }
  if (Il2CppMethodInitialized_0753e4b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b6 = '\x01';
  }
  pUVar12 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar3._0_4_ = (pUVar12->zeroVector).fields.y;
  fVar19 = (pUVar12->zeroVector).fields.z;
  auVar15 = ZEXT416((uint)fVar19);
  (direction->fields).x = (pUVar12->zeroVector).fields.x;
  (direction->fields).y = (float)uVar3;
  (direction->fields).z = fVar19;
  x = UnityEngine_Camera__get_main((MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar10 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar10) {
    return false;
  }
  if ((x != (UnityEngine_Camera_o *)0x0) &&
     (pUVar11 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)x,(MethodInfo *)0x0),
     pUVar11 != (UnityEngine_Transform_o *)0x0)) {
    UVar26 = UnityEngine_Transform__get_forward(pUVar11,(MethodInfo *)0x0);
    auVar17 = auVar15._4_12_;
    fVar19 = UVar26.fields.z;
    fStack_80 = (float)extraout_XMM0_Dc;
    unique0x100000f9 = UVar26.fields._0_8_;
    fStack_7c = (float)extraout_XMM0_Dd;
    pUVar11 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
    if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
      UVar26 = UnityEngine_Transform__get_right(pUVar11,(MethodInfo *)0x0);
      local_48._0_4_ = UVar26.fields.z;
      local_48._4_12_ = auVar17;
      local_78 = fVar19 * fVar19 + (float)local_90._8_4_ * (float)local_90._8_4_ + 0.0;
      if (local_78 < 0.001) {
        return false;
      }
      local_38._8_4_ = extraout_XMM0_Dc_00;
      local_38._0_8_ = UVar26.fields._0_8_;
      local_38._12_4_ = extraout_XMM0_Dd_00;
      local_5c = (float)local_48._0_4_ * (float)local_48._0_4_ + UVar26.fields.x * UVar26.fields.x + 0.0;
      if (0.001 <= local_5c) {
        if (Il2CppMethodInitialized_0753e72d == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_0753e72d = '\x01';
        }
        if (Il2CppMethodInitialized_0753e729 == '\0') {
          local_90._0_8_ = 0;
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
          Il2CppMethodInitialized_0753e729 = '\x01';
          uVar6 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
        }
        else {
          local_90._0_8_ = 0;
          uVar6 = *(uint32_t *)((long)TypeInfo_System_Math + 0xe4);
        }
        if (uVar6 == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
        }
        if (0.0 <= local_78) {
          uVar14 = 0;
          uVar3._0_4_ = SQRT(local_78);
        }
        else {
          uVar3._0_4_ = sqrtf(local_78);
          uVar14 = extraout_XMM0_Db;
        }
        if (1e-05 < (float)uVar3) {
          fVar19 = fVar19 / (float)uVar3;
          auVar15._4_4_ = (float)uVar3;
          auVar15._0_4_ = (float)uVar3;
          auVar15._8_4_ = uVar14;
          auVar15._12_4_ = uVar14;
          auVar15 = divps(ZEXT416((uint)local_90._8_4_),auVar15);
          local_90._0_8_ = auVar15._0_8_;
          uVar3._0_4_ = auVar15._0_4_;
          uVar3._4_4_ = auVar15._4_4_;
          uVar9 = local_90._0_8_;
        }
        else {
          pUVar12 = *(UnityEngine_Vector3_StaticFields **)((long)TypeInfo_UnityEngine_Vector3 + 0xb8);
          fVar19 = (pUVar12->zeroVector).fields.z;
          uVar3._0_4_ = (pUVar12->zeroVector).fields.x;
          uVar3._4_4_ = (pUVar12->zeroVector).fields.y;
          uVar9 = uVar3;
        }
        unique0x10000cb4 = 0;
        unique0x10000cac = uVar9;
        fVar23 = 0.0;
        fVar25 = 0.0;
        if (Il2CppMethodInitialized_0753e72d == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_0753e72d = '\x01';
          uVar3._0_4_ = (float)local_90._8_4_;
          uVar3._4_4_ = fStack_84;
          fVar23 = fStack_80;
          fVar25 = fStack_7c;
        }
        local_90._0_4_ = 0.0;
        local_90._4_4_ = 0.0;
        if (Il2CppMethodInitialized_0753e729 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
          Il2CppMethodInitialized_0753e729 = '\x01';
          uVar6 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
          uVar3._0_4_ = (float)local_90._8_4_;
          uVar3._4_4_ = fStack_84;
          fVar23 = fStack_80;
          fVar25 = fStack_7c;
        }
        else {
          uVar6 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
        }
        if (uVar6 == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
          uVar3._4_4_ = fStack_84;
          fVar23 = fStack_80;
          fVar25 = fStack_7c;
        }
        uVar14 = 0;
        if (local_5c < 0.0) {
          local_78 = (float)local_58._4_4_;
          fStack_74 = (float)local_58._4_4_;
          fStack_70 = (float)local_58._4_4_;
          fStack_6c = (float)local_58._4_4_;
          fVar13 = sqrtf(local_5c);
          uVar14 = extraout_XMM0_Db_00;
          fVar20 = local_78;
          fVar21 = fStack_74;
          fVar22 = fStack_70;
          fVar24 = fStack_6c;
          uVar3._4_4_ = fStack_84;
        }
        else {
          fVar13 = SQRT(local_5c);
          fVar20 = (float)local_58._4_4_;
          fVar21 = (float)local_58._4_4_;
          fVar22 = (float)local_58._4_4_;
          fVar24 = (float)local_58._4_4_;
        }
        if (fVar13 <= 1e-05) {
          pUVar12 = TypeInfo_UnityEngine_Vector3->static_fields;
          fVar18 = (pUVar12->zeroVector).fields.z;
        }
        else {
          fVar18 = (float)local_48._0_4_ / fVar13;
          auVar7._4_4_ = fVar13;
          auVar7._0_4_ = fVar13;
          auVar7._8_4_ = uVar14;
          auVar7._12_4_ = uVar14;
          auVar15 = divps(ZEXT416((uint)local_38._0_4_),auVar7);
          local_90._0_4_ = auVar15._0_4_;
          local_90._4_4_ = auVar15._4_4_;
          pUVar12 = (UnityEngine_Vector3_StaticFields *)local_90;
        }
        uVar1 = (pUVar12->zeroVector).fields.x;
        uVar4 = (pUVar12->zeroVector).fields.y;
        fVar20 = fVar20 * (float)uVar3 + (float)uVar1 * (float)local_58._0_4_;
        uVar3._0_4_ = fVar21 * fVar19 + fVar18 * (float)local_58._0_4_;
        fVar23 = fVar22 * fVar23 + (float)local_58._0_4_ * 0.0;
        fVar25 = fVar24 * fVar25 + (float)local_58._0_4_ * 0.0;
        (direction->fields).x = fVar20;
        (direction->fields).y = uVar3._4_4_ * (float)local_58._4_4_ + (float)uVar4 * (float)local_58._0_4_;
        (direction->fields).z = (float)uVar3;
        (direction->fields).y = 0.0;
        fVar19 = 0.0;
        if ((float)uVar3 * (float)uVar3 + fVar20 * fVar20 + 0.0 < 0.001) {
          return false;
        }
        if (Il2CppMethodInitialized_0753e729 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
          Il2CppMethodInitialized_0753e729 = '\x01';
          fVar19 = (direction->fields).y;
          uVar3._0_4_ = (direction->fields).z;
          fVar20 = (direction->fields).x;
          fVar23 = 0.0;
          fVar25 = 0.0;
        }
        if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
          local_78 = fVar20;
          fStack_74 = (float)uVar3;
          fStack_70 = fVar23;
          fStack_6c = fVar25;
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
          fVar20 = local_78;
          uVar3._0_4_ = fStack_74;
        }
        fVar19 = (float)uVar3 * (float)uVar3 + fVar19 * fVar19 + fVar20 * fVar20;
        if (fVar19 < 0.0) {
          fVar19 = sqrtf(fVar19);
          uVar14 = extraout_XMM0_Db_01;
        }
        else {
          uVar14 = 0;
          fVar19 = SQRT(fVar19);
        }
        if (1e-05 < fVar19) {
          uVar2 = (direction->fields).x;
          uVar5 = (direction->fields).y;
          auVar16._4_4_ = uVar5;
          auVar16._0_4_ = uVar2;
          auVar16._8_8_ = 0;
          auVar8._4_4_ = fVar19;
          auVar8._0_4_ = fVar19;
          auVar8._8_4_ = uVar14;
          auVar8._12_4_ = uVar14;
          auVar15 = divps(auVar16,auVar8);
          (direction->fields).x = (float)auVar15._0_4_;
          (direction->fields).y = (float)auVar15._4_4_;
          fVar19 = (direction->fields).z / fVar19;
        }
        else {
          (direction->fields).x = 0.0;
          (direction->fields).y = 0.0;
          fVar19 = 0.0;
        }
        (direction->fields).z = fVar19;
        return true;
      }
      return false;
    }
  }
  ThrowNullReferenceException();
}


// UI.MobileControlsOverlay$$TryGetHorizontalHookDirection
// il2cpp: bool UI_MobileControlsOverlay__TryGetHorizontalHookDirection (UI_MobileControlsOverlay_o* __this, Characters_Human_o* human, UnityEngine_Vector3_o* direction, const MethodInfo* method);
// 0x5c69540
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c69621: jmp 0x5c69640
// asm:   0x5c696b4: jmp 0x5c69848
// asm:   0x5c69800: movss dword ptr [r14 + 8], xmm1
// asm:   0x5c69806: mov r12b, 1
// asm:   0x5c69809: jmp 0x5c69631
// asm:   0x5c69843: jmp 0x5c69784

bool UI_MobileControlsOverlay__TryGetHorizontalHookDirection
               (UI_MobileControlsOverlay_o *__this,Characters_Human_o *human,UnityEngine_Vector3_o *direction,
               MethodInfo *method)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  uint32_t uVar5;
  UnityEngine_Vector3_StaticFields *pUVar6;
  Utility_BaseComponentCache_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  bool bVar9;
  bool bVar10;
  Characters_HookUseable_o *pCVar11;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Db;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  UnityEngine_Vector3_o UVar16;
  UnityEngine_Vector3_o UVar17;
  float local_38;
  float fStack_34;
  
  if (Il2CppMethodInitialized_075478b8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075478b8 = '\x01';
  }
  if (Il2CppMethodInitialized_0753e4b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b6 = '\x01';
  }
  pUVar6 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar2 = (pUVar6->zeroVector).fields.y;
  fVar15 = (pUVar6->zeroVector).fields.z;
  (direction->fields).x = (pUVar6->zeroVector).fields.x;
  (direction->fields).y = fVar2;
  (direction->fields).z = fVar15;
  if (human == (Characters_Human_o *)0x0) goto label_05c69848;
  pUVar7 = (human->fields).Cache;
  if (pUVar7 == (Utility_BaseComponentCache_o *)0x0) {
    return false;
  }
  pUVar8 = (pUVar7->fields).Transform;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar10 = false;
  bVar9 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar9) {
    return false;
  }
  pCVar11 = (human->fields).HookLeft;
  if (pCVar11 != (Characters_HookUseable_o *)0x0) {
    bVar10 = Characters_HookUseable__IsHooked(pCVar11,(MethodInfo *)0x0);
  }
  pCVar11 = (human->fields).HookRight;
  if (pCVar11 == (Characters_HookUseable_o *)0x0) {
    bVar9 = false;
  }
  else {
    bVar9 = Characters_HookUseable__IsHooked(pCVar11,(MethodInfo *)0x0);
  }
  if ((bVar10 == false) && (bVar9 == false)) {
    return false;
  }
  if ((bVar10 & bVar9) == 0) {
    if (bVar10 == false) {
      pCVar11 = (human->fields).HookRight;
    }
    else {
      pCVar11 = (human->fields).HookLeft;
    }
    if (pCVar11 == (Characters_HookUseable_o *)0x0) goto label_05c69848;
    UVar16 = Characters_HookUseable__GetHookPosition(pCVar11,(MethodInfo *)0x0);
    fVar15 = UVar16.fields.z;
    fVar2 = UVar16.fields.x;
    fVar4 = UVar16.fields.y;
    pUVar7 = (human->fields).Cache;
  }
  else {
    pCVar11 = (human->fields).HookLeft;
    if (pCVar11 == (Characters_HookUseable_o *)0x0) goto label_05c69848;
    UVar16 = Characters_HookUseable__GetHookPosition(pCVar11,(MethodInfo *)0x0);
    pCVar11 = (human->fields).HookRight;
    if (pCVar11 == (Characters_HookUseable_o *)0x0) goto label_05c69848;
    UVar17 = Characters_HookUseable__GetHookPosition(pCVar11,(MethodInfo *)0x0);
    local_38 = UVar16.fields.x;
    fStack_34 = UVar16.fields.y;
    fVar2 = (local_38 + UVar17.fields.x) * 0.5;
    fVar4 = (fStack_34 + UVar17.fields.y) * 0.5;
    fVar15 = (UVar16.fields.z + UVar17.fields.z) * 0.5;
    pUVar7 = (human->fields).Cache;
  }
  if ((pUVar7 != (Utility_BaseComponentCache_o *)0x0) &&
     (pUVar8 = (pUVar7->fields).Transform, pUVar8 != (UnityEngine_Transform_o *)0x0)) {
    UVar16 = UnityEngine_Transform__get_position(pUVar8,(MethodInfo *)0x0);
    fVar2 = fVar2 - UVar16.fields.x;
    fVar15 = fVar15 - UVar16.fields.z;
    (direction->fields).x = fVar2;
    (direction->fields).y = fVar4 - UVar16.fields.y;
    (direction->fields).z = fVar15;
    (direction->fields).y = 0.0;
    if (fVar15 * fVar15 + fVar2 * fVar2 + 0.0 < 0.001) {
      return false;
    }
    if (Il2CppMethodInitialized_0753e729 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_0753e729 = '\x01';
      fVar2 = (direction->fields).x;
      fVar4 = (direction->fields).y;
      fVar15 = (direction->fields).z;
      uVar5 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    }
    else {
      fVar4 = 0.0;
      uVar5 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    }
    if (uVar5 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    uVar12 = 0;
    fVar15 = fVar15 * fVar15 + fVar4 * fVar4 + fVar2 * fVar2;
    if (fVar15 < 0.0) {
      fVar15 = sqrtf(fVar15);
      uVar12 = extraout_XMM0_Db;
    }
    else {
      fVar15 = SQRT(fVar15);
    }
    if (fVar15 <= 1e-05) {
      (direction->fields).x = 0.0;
      (direction->fields).y = 0.0;
      fVar15 = 0.0;
    }
    else {
      uVar1 = (direction->fields).x;
      uVar3 = (direction->fields).y;
      auVar13._4_4_ = uVar3;
      auVar13._0_4_ = uVar1;
      auVar13._8_8_ = 0;
      auVar14._4_4_ = fVar15;
      auVar14._0_4_ = fVar15;
      auVar14._8_4_ = uVar12;
      auVar14._12_4_ = uVar12;
      auVar14 = divps(auVar13,auVar14);
      (direction->fields).x = (float)auVar14._0_4_;
      (direction->fields).y = (float)auVar14._4_4_;
      fVar15 = (direction->fields).z / fVar15;
    }
    (direction->fields).z = fVar15;
    return true;
  }
label_05c69848:
  ThrowNullReferenceException();
}


// UI.MobileControlsOverlay$$CreateActionButtons
// il2cpp: void UI_MobileControlsOverlay__CreateActionButtons (UI_MobileControlsOverlay_o* __this, UnityEngine_RectTransform_o* parent, const MethodInfo* method);
// 0x5c66dc0

void UI_MobileControlsOverlay__CreateActionButtons
               (UI_MobileControlsOverlay_o *__this,UnityEngine_RectTransform_o *parent,MethodInfo *method)

{
  MethodInfo *in_R8;
  
  UI_MobileControlsOverlay__AddLayoutControls(__this,parent,1,(__this->fields)._humanButtons,in_R8);
  return;
}


// UI.MobileControlsOverlay$$CreateGeneralButtons
// il2cpp: void UI_MobileControlsOverlay__CreateGeneralButtons (UI_MobileControlsOverlay_o* __this, UnityEngine_RectTransform_o* parent, const MethodInfo* method);
// 0x5c66db0

void UI_MobileControlsOverlay__CreateGeneralButtons
               (UI_MobileControlsOverlay_o *__this,UnityEngine_RectTransform_o *parent,MethodInfo *method)

{
  MethodInfo *in_R8;
  
  UI_MobileControlsOverlay__AddLayoutControls(__this,parent,0,(__this->fields)._generalButtons,in_R8);
  return;
}


// UI.MobileControlsOverlay$$AddHookButton
// il2cpp: void UI_MobileControlsOverlay__AddHookButton (UI_MobileControlsOverlay_o* __this, UnityEngine_RectTransform_o* parent, UI_MobileInputControlLayout_o* control, int32_t role, System_Collections_Generic_List_GameObject__o* group, const MethodInfo* method);
// 0x5c69950

void UI_MobileControlsOverlay__AddHookButton
               (UI_MobileControlsOverlay_o *__this,UnityEngine_RectTransform_o *parent,
               UI_MobileInputControlLayout_o *control,int32_t role,
               System_Collections_Generic_List_GameObject__o *group,MethodInfo *method)

{
  int32_t *piVar1;
  bool bVar2;
  UnityEngine_GameObject_array *pUVar3;
  uint uVar4;
  UnityEngine_GameObject_o *__this_00;
  UI_MobileInputHookButton_o *__this_01;
  UI_MobileInputSkin_o *normalSkin;
  UI_MobileInputSkin_o *pressedSkin;
  MethodInfo *pMVar5;
  MethodInfo *pMVar6;
  UI_MobileInputHookButton_o *__this_02;
  System_Collections_Generic_List_GameObject__o *group_00;
  MethodInfo *in_stack_ffffffffffffff90;
  MethodInfo *local_58;
  UnityEngine_RectTransform_o *local_50;
  System_Collections_Generic_List_GameObject__o *local_48;
  UnityEngine_RectTransform_o *local_40;
  UI_MobileControlsOverlay_o *local_38;
  
  group_00 = group;
  if (Il2CppMethodInitialized_075478b9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_MobileInputHookButton);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Add);
    il2cpp_codegen_initialize_runtime_metadata(&"HookButton");
    Il2CppMethodInitialized_075478b9 = '\x01';
  }
  local_50 = (UnityEngine_RectTransform_o *)0x0;
  local_58 = (MethodInfo *)0x0;
  pMVar5 = (MethodInfo *)&local_50;
  __this_00 = UI_MobileControlsOverlay__CreateHoldControlObject
                        (__this,parent,control,"HookButton",group_00,
                         (UnityEngine_RectTransform_o **)pMVar5,(UnityEngine_RectTransform_o **)&local_58,
                         in_stack_ffffffffffffff90);
  pMVar6 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
  if (group == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_05c69c47;
  piVar1 = &(group->fields)._version;
  *piVar1 = *piVar1 + 1;
  pUVar3 = (group->fields)._items;
  if (pUVar3 == (UnityEngine_GameObject_array *)0x0) goto label_05c69c47;
  uVar4 = (group->fields)._size;
  if (uVar4 < (uint)pUVar3->max_length) {
    (group->fields)._size = uVar4 + 1;
    pUVar3->m_Items[(int)uVar4] = __this_00;
    Il2CppCodeGenWriteBarrier(pUVar3->m_Items + (int)uVar4);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize
              ((System_Collections_Generic_List_object__o *)group,(Il2CppObject *)__this_00,
               (MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method);
  }
  if ((__this_00 == (UnityEngine_GameObject_o *)0x0) ||
     (pMVar6 = MethodInfo_UnityEngine_GameObject_AddComponent_MobileInputHookButton,
     __this_01 = UnityEngine_GameObject__AddComponent_object_
                           (__this_00,
                            (MethodInfo_353B6A0 *)
                            MethodInfo_UnityEngine_GameObject_AddComponent_MobileInputHookButton),
     control == (UI_MobileInputControlLayout_o *)0x0)) goto label_05c69c47;
  local_40 = local_50;
  local_38 = __this;
  if (Il2CppMethodInitialized_0754791c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputSkin);
    Il2CppMethodInitialized_0754791c = '\x01';
    normalSkin = (control->fields).Skin;
    if (normalSkin != (UI_MobileInputSkin_o *)0x0) goto label_05c69a8f;
label_05c69b68:
    normalSkin = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileInputSkin);
    (normalSkin->fields).Image = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    Il2CppCodeGenWriteBarrier(&(normalSkin->fields).Image);
    (normalSkin->fields).PreserveAspect = true;
    pMVar6 = (MethodInfo *)0x0;
    System_Object___ctor((Il2CppObject *)normalSkin,(MethodInfo *)0x0);
    (normalSkin->fields).R = 0.0;
    (normalSkin->fields).G = 0.0;
    (normalSkin->fields).B = 0.0;
    (normalSkin->fields).A = 0.38;
    if (g_data_0754791d != '\0') goto label_05c69aa1;
label_05c69bcc:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputSkin);
    g_data_0754791d = '\x01';
    pressedSkin = (control->fields).OnSkin;
  }
  else {
    normalSkin = (control->fields).Skin;
    if (normalSkin == (UI_MobileInputSkin_o *)0x0) goto label_05c69b68;
label_05c69a8f:
    if (g_data_0754791d == '\0') goto label_05c69bcc;
label_05c69aa1:
    pressedSkin = (control->fields).OnSkin;
  }
  if (pressedSkin == (UI_MobileInputSkin_o *)0x0) {
    pressedSkin = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileInputSkin);
    (pressedSkin->fields).Image = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    Il2CppCodeGenWriteBarrier(&(pressedSkin->fields).Image);
    (pressedSkin->fields).PreserveAspect = true;
    pMVar6 = (MethodInfo *)0x0;
    System_Object___ctor((Il2CppObject *)pressedSkin,(MethodInfo *)0x0);
    (pressedSkin->fields).R = 1.0;
    (pressedSkin->fields).G = 1.0;
    (pressedSkin->fields).B = 1.0;
    (pressedSkin->fields).A = 0.38;
  }
  local_48 = group;
  uVar4 = UI_MobileInputControlLayout__GetShape(control,pMVar6);
  if (__this_01 != (UI_MobileInputHookButton_o *)0x0) {
    UI_MobileInputHookButton__CacheInputs(__this_01,pMVar6);
    pMVar6 = (MethodInfo *)(ulong)uVar4;
    UI_MobileInputHoldControl__Setup
              ((UI_MobileInputHoldControl_o *)__this_01,local_40,normalSkin,pressedSkin,uVar4,pMVar5);
    bVar2 = (control->fields).DisableContentMovement;
    (__this_01->fields)._movingContent = (UnityEngine_RectTransform_o *)local_58;
    pMVar5 = local_58;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields)._movingContent);
    (__this_01->fields)._moveContentWithTouch = (bool)(bVar2 ^ 1);
    __this_02 = __this_01;
    UI_MobileInputHoldControl__ResetMovingContent((UI_MobileInputHoldControl_o *)__this_01,pMVar5);
    if (local_38 != (UI_MobileControlsOverlay_o *)0x0) {
      pMVar5 = (MethodInfo *)(control->fields).Label;
      UI_MobileControlsOverlay__RegisterControlDisplayNames_5b6cf80
                ((UI_MobileControlsOverlay_o *)__this_02,role,control,(System_String_o *)pMVar5,pMVar6);
      UI_MobileControlsOverlay__RegisterSlideButtons
                ((UI_MobileControlsOverlay_o *)__this_02,(UI_MobileInputHoldControl_o *)__this_01,local_48,
                 pMVar5);
      return;
    }
  }
label_05c69c47:
  ThrowNullReferenceException();
}


// UI.MobileControlsOverlay$$CreateHoldButton
// il2cpp: UnityEngine_GameObject_o* UI_MobileControlsOverlay__CreateHoldButton (UI_MobileControlsOverlay_o* __this, UnityEngine_RectTransform_o* parent, UI_MobileInputControlLayout_o* control, int32_t role, System_Collections_Generic_List_GameObject__o* group, const MethodInfo* method);
// 0x5c6a390
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c6a4de: jmp 0x5c6a6ab

UnityEngine_GameObject_o *
UI_MobileControlsOverlay__CreateHoldButton
          (UI_MobileControlsOverlay_o *__this,UnityEngine_RectTransform_o *parent,
          UI_MobileInputControlLayout_o *control,int32_t role,
          System_Collections_Generic_List_GameObject__o *group,MethodInfo *method)

{
  bool bVar1;
  uint shape;
  UnityEngine_GameObject_o *__this_00;
  UI_MobileControlsOverlay_o *__this_01;
  System_String_array *actionIds;
  Settings_MobileInput_array *pSVar2;
  UI_MobileInputSkin_o *normalSkin;
  UI_MobileInputSkin_o *pressedSkin;
  MethodInfo *pMVar3;
  MethodInfo *pMVar4;
  UI_MobileControlsOverlay_o *__this_02;
  System_Collections_Generic_List_GameObject__o *group_00;
  MethodInfo *in_stack_ffffffffffffff90;
  MethodInfo *local_60;
  Il2CppClass *local_58;
  UnityEngine_GameObject_o *local_50;
  System_Collections_Generic_List_GameObject__o *local_48;
  UI_MobileControlsOverlay_o *local_40;
  Il2CppClass *local_38;
  
  group_00 = group;
  if (Il2CppMethodInitialized_075478ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_MobileInputHoldButton);
    il2cpp_codegen_initialize_runtime_metadata(&"HoldButton");
    Il2CppMethodInitialized_075478ba = '\x01';
  }
  local_58 = (Il2CppClass *)0x0;
  local_60 = (MethodInfo *)0x0;
  pMVar3 = (MethodInfo *)&local_58;
  __this_00 = UI_MobileControlsOverlay__CreateHoldControlObject
                        (__this,parent,control,"HoldButton",group_00,
                         (UnityEngine_RectTransform_o **)pMVar3,(UnityEngine_RectTransform_o **)&local_60,
                         in_stack_ffffffffffffff90);
  if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_05c6a6ab;
  pMVar4 = MethodInfo_UnityEngine_GameObject_AddComponent_MobileInputHoldButton;
  __this_01 = (UI_MobileControlsOverlay_o *)
              UnityEngine_GameObject__AddComponent_object_
                        (__this_00,
                         (MethodInfo_353B6A0 *)
                         MethodInfo_UnityEngine_GameObject_AddComponent_MobileInputHoldButton);
  local_38 = local_58;
  if (Il2CppMethodInitialized_075478c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBridge);
    Il2CppMethodInitialized_075478c1 = '\x01';
  }
  if (control == (UI_MobileInputControlLayout_o *)0x0) goto label_05c6a6ab;
  local_40 = __this;
  actionIds = UI_MobileInputControlLayout__GetActionIds(control,pMVar4);
  if ((TypeInfo_Settings_MobileInputBridge->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBridge);
  }
  pMVar4 = (MethodInfo *)0x0;
  local_48 = group;
  pSVar2 = Settings_MobileInputBridge__GetActionInputs(actionIds,(MethodInfo *)0x0);
  local_50 = __this_00;
  if (Il2CppMethodInitialized_0754791c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputSkin);
    Il2CppMethodInitialized_0754791c = '\x01';
    normalSkin = (control->fields).Skin;
    if (normalSkin == (UI_MobileInputSkin_o *)0x0) goto label_05c6a4ff;
label_05c6a4ae:
    if (g_data_0754791d != '\0') goto label_05c6a4c0;
label_05c6a563:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputSkin);
    g_data_0754791d = '\x01';
    pressedSkin = (control->fields).OnSkin;
    if (pressedSkin == (UI_MobileInputSkin_o *)0x0) goto label_05c6a583;
label_05c6a4cd:
    shape = UI_MobileInputControlLayout__GetShape(control,pMVar4);
  }
  else {
    normalSkin = (control->fields).Skin;
    if (normalSkin != (UI_MobileInputSkin_o *)0x0) goto label_05c6a4ae;
label_05c6a4ff:
    normalSkin = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileInputSkin);
    (normalSkin->fields).Image = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    Il2CppCodeGenWriteBarrier(&(normalSkin->fields).Image);
    (normalSkin->fields).PreserveAspect = true;
    pMVar4 = (MethodInfo *)0x0;
    System_Object___ctor((Il2CppObject *)normalSkin,(MethodInfo *)0x0);
    (normalSkin->fields).R = 0.0;
    (normalSkin->fields).G = 0.0;
    (normalSkin->fields).B = 0.0;
    (normalSkin->fields).A = 0.38;
    if (g_data_0754791d == '\0') goto label_05c6a563;
label_05c6a4c0:
    pressedSkin = (control->fields).OnSkin;
    if (pressedSkin != (UI_MobileInputSkin_o *)0x0) goto label_05c6a4cd;
label_05c6a583:
    pressedSkin = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileInputSkin);
    (pressedSkin->fields).Image = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    Il2CppCodeGenWriteBarrier(&(pressedSkin->fields).Image);
    (pressedSkin->fields).PreserveAspect = true;
    pMVar4 = (MethodInfo *)0x0;
    System_Object___ctor((Il2CppObject *)pressedSkin,(MethodInfo *)0x0);
    (pressedSkin->fields).R = 1.0;
    (pressedSkin->fields).G = 1.0;
    (pressedSkin->fields).B = 1.0;
    (pressedSkin->fields).A = 0.38;
    shape = UI_MobileInputControlLayout__GetShape(control,pMVar4);
  }
  if (__this_01 != (UI_MobileControlsOverlay_o *)0x0) {
    if (Il2CppMethodInitialized_075478d8 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInput_array);
      Il2CppMethodInitialized_075478d8 = '\x01';
    }
    if (pSVar2 == (Settings_MobileInput_array *)0x0) {
      pSVar2 = (Settings_MobileInput_array *)SZArrayNew(TypeInfo_Settings_MobileInput_array,0);
    }
    (__this_01->fields)._coreInputControls = (System_Collections_Generic_List_GameObject__o *)pSVar2;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields)._coreInputControls);
    pMVar4 = (MethodInfo *)(ulong)shape;
    UI_MobileInputHoldControl__Setup
              ((UI_MobileInputHoldControl_o *)__this_01,(UnityEngine_RectTransform_o *)local_38,normalSkin,
               pressedSkin,shape,pMVar3);
    bVar1 = (control->fields).DisableContentMovement;
    (__this_01->fields)._humanButtons = (System_Collections_Generic_List_GameObject__o *)local_60;
    pMVar3 = local_60;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields)._humanButtons);
    *(byte *)((long)&(__this_01->fields)._erenShifterButtons + 1) = bVar1 ^ 1;
    __this_02 = __this_01;
    UI_MobileInputHoldControl__ResetMovingContent((UI_MobileInputHoldControl_o *)__this_01,pMVar3);
    if (local_40 != (UI_MobileControlsOverlay_o *)0x0) {
      pMVar3 = (MethodInfo *)(control->fields).Label;
      UI_MobileControlsOverlay__RegisterControlDisplayNames_5b6cf80
                (__this_02,role,control,(System_String_o *)pMVar3,pMVar4);
      UI_MobileControlsOverlay__RegisterSlideButtons
                (__this_02,(UI_MobileInputHoldControl_o *)__this_01,local_48,pMVar3);
      return local_50;
    }
  }
label_05c6a6ab:
  ThrowNullReferenceException();
}


// UI.MobileControlsOverlay$$CreateHoldControlObject
// il2cpp: UnityEngine_GameObject_o* UI_MobileControlsOverlay__CreateHoldControlObject (UI_MobileControlsOverlay_o* __this, UnityEngine_RectTransform_o* parent, UI_MobileInputControlLayout_o* control, System_String_o* suffix, System_Collections_Generic_List_GameObject__o* group, UnityEngine_RectTransform_o** holdRect, UnityEngine_RectTransform_o** contentRect, const MethodInfo* method);
// 0x5c69c50
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c69e35: movaps xmm0, xmmword ptr [rsp + 0x10]

UnityEngine_GameObject_o *
UI_MobileControlsOverlay__CreateHoldControlObject
          (UI_MobileControlsOverlay_o *__this,UnityEngine_RectTransform_o *parent,
          UI_MobileInputControlLayout_o *control,System_String_o *suffix,
          System_Collections_Generic_List_GameObject__o *group,UnityEngine_RectTransform_o **holdRect,
          UnityEngine_RectTransform_o **contentRect,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  UnityEngine_Vector2_Fields anchorMin;
  UnityEngine_Vector2_Fields size;
  UnityEngine_Vector2_o UVar5;
  UnityEngine_Vector2_o size_00;
  int32_t shape;
  System_String_o *pSVar6;
  UI_MobileControlsOverlay_o *pUVar7;
  UnityEngine_RectTransform_o *pUVar8;
  UnityEngine_Vector2_StaticFields *pUVar9;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_Image_o *image;
  UI_MobileInputSkin_o *skin;
  MethodInfo *method_00;
  UI_MobileInputControlLayout_o *extraout_RDX;
  UI_MobileInputControlLayout_o *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  UI_MobileControlSkinManager_c **ppUVar10;
  UI_MobileControlsOverlay_o *__this_01;
  UnityEngine_Vector2_c **__this_02;
  UnityEngine_Vector2_Fields anchorMax;
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  UnityEngine_Vector2_o anchoredPosition;
  
  method_00 = (MethodInfo *)suffix;
  method_01 = control;
  if (Il2CppMethodInitialized_075478bb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_CanvasRenderer)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_MobileInputRaycastArea);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    ppUVar10 = &TypeInfo_UI_MobileControlSkinManager;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileControlSkinManager);
    Il2CppMethodInitialized_075478bb = '\x01';
    method_01 = extraout_RDX;
    __this = (UI_MobileControlsOverlay_o *)ppUVar10;
  }
  UVar5 = UI_MobileControlsOverlay__GetLayoutReferenceSize(__this,parent,(MethodInfo *)method_01);
  if (control != (UI_MobileInputControlLayout_o *)0x0) {
    fVar12 = UVar5.fields.x;
    if (UVar5.fields.y <= UVar5.fields.x) {
      fVar12 = UVar5.fields.y;
    }
    fVar13 = 1.0;
    if (1.0 <= fVar12) {
      fVar13 = fVar12;
    }
    uVar1 = (control->fields).Width;
    uVar3 = (control->fields).Height;
    auVar11._4_4_ = uVar3;
    auVar11._0_4_ = uVar1;
    auVar11._8_8_ = 0;
    auVar11 = maxps(_DAT_0100a840,auVar11);
    fVar12 = fVar13 * auVar11._0_4_;
    fVar13 = fVar13 * auVar11._4_4_;
    pUVar7 = (UI_MobileControlsOverlay_o *)(control->fields).Id;
    pSVar6 = System_String__Concat_52f0320((System_String_o *)pUVar7,suffix,(MethodInfo *)0x0);
    UVar5 = UI_MobileControlsOverlay__GetLayoutReferenceSize(pUVar7,parent,method_02);
    uVar2 = (control->fields).X;
    uVar4 = (control->fields).Y;
    anchoredPosition.fields.x = ((float)uVar2 + -0.5) * UVar5.fields.x;
    anchoredPosition.fields.y = ((float)uVar4 + -0.5) * UVar5.fields.y;
    UVar5.fields.y = fVar13;
    UVar5.fields.x = fVar12;
    pUVar7 = (UI_MobileControlsOverlay_o *)
             UI_MobileControlsOverlay__CreateRect
                       (pUVar7,pSVar6,parent,(UnityEngine_Vector2_o)0x3f0000003f000000,
                        (UnityEngine_Vector2_o)0x3f0000003f000000,UVar5,anchoredPosition,method_00);
    if (pUVar7 != (UI_MobileControlsOverlay_o *)0x0) {
      __this_01 = pUVar7;
      pUVar8 = UnityEngine_GameObject__GetComponent_object_
                         ((UnityEngine_GameObject_o *)pUVar7,
                          (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
      UI_MobileControlsOverlay__RegisterButtonRect(__this_01,pUVar8,control,method_00);
      UnityEngine_GameObject__AddComponent_object_
                ((UnityEngine_GameObject_o *)pUVar7,
                 (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_CanvasRenderer);
      UnityEngine_GameObject__AddComponent_object_
                ((UnityEngine_GameObject_o *)pUVar7,
                 (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_MobileInputRaycastArea);
      pSVar6 = (control->fields).Id;
      __this_02 = (UnityEngine_Vector2_c **)pUVar7;
      pUVar8 = UnityEngine_GameObject__GetComponent_object_
                         ((UnityEngine_GameObject_o *)pUVar7,
                          (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
      if (Il2CppMethodInitialized_0753ecc8 == '\0') {
        __this_02 = &TypeInfo_UnityEngine_Vector2;
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_0753ecc8 = '\x01';
      }
      pUVar9 = TypeInfo_UnityEngine_Vector2->static_fields;
      anchorMin = (pUVar9->zeroVector).fields;
      if (Il2CppMethodInitialized_07542885 == '\0') {
        __this_02 = &TypeInfo_UnityEngine_Vector2;
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_07542885 = '\x01';
        pUVar9 = TypeInfo_UnityEngine_Vector2->static_fields;
        anchorMax = (pUVar9->oneVector).fields;
        if (Il2CppMethodInitialized_0753ecc8 == '\0') {
          __this_02 = &TypeInfo_UnityEngine_Vector2;
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
          Il2CppMethodInitialized_0753ecc8 = '\x01';
          pUVar9 = TypeInfo_UnityEngine_Vector2->static_fields;
        }
      }
      else {
        anchorMax = (pUVar9->oneVector).fields;
      }
      size = (pUVar9->zeroVector).fields;
      __this_00 = UI_MobileControlsOverlay__CreateRect
                            ((UI_MobileControlsOverlay_o *)__this_02,pSVar6,pUVar8,
                             (UnityEngine_Vector2_o)anchorMin,(UnityEngine_Vector2_o)anchorMax,
                             (UnityEngine_Vector2_o)size,(UnityEngine_Vector2_o)size,method_00);
      if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
        pUVar8 = UnityEngine_GameObject__GetComponent_object_
                           (__this_00,
                            (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform
                           );
        *holdRect = pUVar8;
        Il2CppCodeGenWriteBarrier(holdRect);
        method_03 = MethodInfo_UnityEngine_GameObject_AddComponent_Image;
        image = UnityEngine_GameObject__AddComponent_object_
                          (__this_00,
                           (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_Image);
        if (Il2CppMethodInitialized_0754791c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputSkin);
          Il2CppMethodInitialized_0754791c = '\x01';
        }
        skin = (control->fields).Skin;
        if (skin == (UI_MobileInputSkin_o *)0x0) {
          skin = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileInputSkin);
          (skin->fields).Image = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
          Il2CppCodeGenWriteBarrier(&(skin->fields).Image);
          (skin->fields).PreserveAspect = true;
          method_03 = (MethodInfo *)0x0;
          System_Object___ctor((Il2CppObject *)skin,(MethodInfo *)0x0);
          (skin->fields).R = 0.0;
          (skin->fields).G = 0.0;
          (skin->fields).B = 0.0;
          (skin->fields).A = 0.38;
        }
        shape = UI_MobileInputControlLayout__GetShape(control,method_03);
        if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
        }
        UI_MobileControlSkinManager__ApplySkin(image,skin,shape,method_00);
        size_00.fields.y = fVar13;
        size_00.fields.x = fVar12;
        pUVar8 = UI_MobileControlsOverlay__AddButtonLabel
                           ((UI_MobileControlsOverlay_o *)image,*holdRect,control,size_00,method_00);
        *contentRect = pUVar8;
        Il2CppCodeGenWriteBarrier(contentRect);
        return (UnityEngine_GameObject_o *)pUVar7;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MobileControlsOverlay$$RegisterSlideButtons
// il2cpp: void UI_MobileControlsOverlay__RegisterSlideButtons (UI_MobileControlsOverlay_o* __this, UI_MobileInputHoldControl_o* hold, System_Collections_Generic_List_GameObject__o* buttons, const MethodInfo* method);
// 0x5c6a0c0
// eh: try 0x5c6a1c4..0x5c6a311 -> pad 0x5c6a32e (+13 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c6a348..0x5c6a34d -> pad 0x5c6a36c cleanup
// eh: try 0x5c6a36f..0x5c6a379 -> pad 0x5c6a381 catch (...) [compiler noexcept guard]
// asm: 46 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c6a19a: lea r13, [rip + 0x1623bdf]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext
// asm:   0x5c6a1a1: mov r15, rsp
// asm:   0x5c6a1a4: lea rbp, [rip + 0x1640cdd]  ; MethodInfo_UnityEngine_GameObject_GetComponent_MobileInputButton
// asm:   0x5c6a1ab: lea r14, [rip + 0x161123e]  ; TypeInfo_UnityEngine_Object
// asm:   0x5c6a1b2: nop word ptr cs:[rax + rax]
// asm:   0x5c6a252: lea rbp, [rip + 0x1623b27]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext
// asm:   0x5c6a259: mov r14, rsp
// asm:   0x5c6a25c: lea r12, [rip + 0x1640c25]  ; MethodInfo_UnityEngine_GameObject_GetComponent_MobileInputButton
// asm:   0x5c6a263: lea r13, [rip + 0x1611186]  ; TypeInfo_UnityEngine_Object
// asm:   0x5c6a26a: nop word ptr [rax + rax]
// asm:   0x5c6a316: jmp 0x5c6a330
// asm:   0x5c6a318: jmp 0x5c6a330
// asm:   0x5c6a31a: jmp 0x5c6a330
// asm:   0x5c6a31c: jmp 0x5c6a330
// asm:   0x5c6a31e: jmp 0x5c6a330
// asm:   0x5c6a320: jmp 0x5c6a330
// asm:   0x5c6a322: jmp 0x5c6a330
// asm:   0x5c6a324: jmp 0x5c6a330
// asm:   0x5c6a326: jmp 0x5c6a330
// asm:   0x5c6a328: jmp 0x5c6a330
// asm:   0x5c6a32a: jmp 0x5c6a330
// asm:   0x5c6a32c: jmp 0x5c6a330
// asm:   0x5c6a32e: jmp 0x5c6a330
// asm:   0x5c6a330: mov rbx, rax
// asm:   0x5c6a333: cmp edx, 1
// asm:   0x5c6a336: jne 0x5c6a36f
// asm:   0x5c6a338: mov rdi, rbx
// asm:   0x5c6a33b: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c6a340: mov rbx, qword ptr [rax]
// asm:   0x5c6a343: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5c6a348: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c6a34d: lea rax, [rip + 0x1623a24]  ; MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose
// asm:   0x5c6a354: mov rsi, qword ptr [rax]
// asm:   0x5c6a357: mov rdi, rsp
// asm:   0x5c6a35a: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5c6a35f: test rbx, rbx
// asm:   0x5c6a362: je 0x5c6a2f8
// asm:   0x5c6a364: mov rdi, rbx
// asm:   0x5c6a367: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c6a36c: mov rbx, rax
// asm:   0x5c6a36f: lea rdi, [rsp + 0x20]
// asm:   0x5c6a374: call 0x2fd9d00  ; il2cpp_runtime_helper_02fd9d00()
// asm:   0x5c6a379: mov rdi, rbx
// asm:   0x5c6a37c: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c6a381: mov rdi, rax
// asm:   0x5c6a384: call 0x2ab61e0  ; __clang_call_terminate()

void UI_MobileControlsOverlay__RegisterSlideButtons
               (UI_MobileControlsOverlay_o *__this,UI_MobileInputHoldControl_o *hold,
               System_Collections_Generic_List_GameObject__o *buttons,MethodInfo *method)

{
  Settings_MobileInput_array *pSVar1;
  Il2CppObject *pIVar2;
  System_Collections_Generic_List_Enumerator_object__o *pSVar3;
  bool bVar4;
  UI_MobileInputButton_o *pUVar5;
  UnityEngine_RectTransform_o *rectTransform;
  System_Collections_Generic_List_Enumerator_object__o local_68;
  UI_MobileInputHoldControl_o *local_50;
  undefined1 local_48 [16];
  UnityEngine_GameObject_o *local_38;
  
  local_50 = hold;
  if (Il2CppMethodInitialized_075478bc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_MobileInputButton);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075478bc = '\x01';
  }
  local_68.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_68.fields._index = 0;
  local_68.fields._version = 0;
  local_68.fields._current = (Il2CppObject *)0x0;
  if (buttons == (System_Collections_Generic_List_GameObject__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
             (System_Collections_Generic_List_object__o *)buttons,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_GameObject_GetEnumerator);
  local_68.fields._current = (Il2CppObject *)local_38;
  local_68.fields._list = (System_Collections_Generic_List_T__o *)local_48._0_8_;
  local_68.fields._index = local_48._8_4_;
  local_68.fields._version = local_48._12_4_;
  local_48._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_48._8_8_ = &local_68;
  pSVar3 = &local_68;
  if (local_50 == (UI_MobileInputHoldControl_o *)0x0) {
    while (local_48._8_8_ = pSVar3,
          bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (&local_68,
                             (MethodInfo_4C45C50 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext),
          pIVar2 = local_68.fields._current, bVar4) {
      if ((UnityEngine_GameObject_o *)local_68.fields._current == (UnityEngine_GameObject_o *)0x0)
      goto label_05c6a307;
      pUVar5 = UnityEngine_GameObject__GetComponent_object_
                         ((UnityEngine_GameObject_o *)local_68.fields._current,
                          (MethodInfo_353B730 *)
                          MethodInfo_UnityEngine_GameObject_GetComponent_MobileInputButton);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      pSVar3 = (System_Collections_Generic_List_Enumerator_object__o *)local_48._8_8_;
      if (bVar4) {
        if (pUVar5 == (UI_MobileInputButton_o *)0x0) goto label_05c6a30c;
        pSVar1 = (pUVar5->fields)._inputs;
        if ((pSVar1 != (Settings_MobileInput_array *)0x0) && ((int)pSVar1->max_length != 0)) {
          UnityEngine_GameObject__GetComponent_object_
                    ((UnityEngine_GameObject_o *)pIVar2,
                     (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
          ThrowNullReferenceException();
        }
      }
    }
  }
  else {
    while (bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             (&local_68,
                              (MethodInfo_4C45C50 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_MoveNext),
          pIVar2 = local_68.fields._current, bVar4) {
      if ((UnityEngine_GameObject_o *)local_68.fields._current == (UnityEngine_GameObject_o *)0x0) {
label_05c6a307:
        ThrowNullReferenceException();
      }
      pUVar5 = UnityEngine_GameObject__GetComponent_object_
                         ((UnityEngine_GameObject_o *)local_68.fields._current,
                          (MethodInfo_353B730 *)
                          MethodInfo_UnityEngine_GameObject_GetComponent_MobileInputButton);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar4) {
        if (pUVar5 == (UI_MobileInputButton_o *)0x0) {
label_05c6a30c:
          ThrowNullReferenceException();
        }
        pSVar1 = (pUVar5->fields)._inputs;
        if ((pSVar1 != (Settings_MobileInput_array *)0x0) && ((int)pSVar1->max_length != 0)) {
          rectTransform =
               UnityEngine_GameObject__GetComponent_object_
                         ((UnityEngine_GameObject_o *)pIVar2,
                          (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
          UI_MobileInputHoldControl__RegisterSlideButton(local_50,rectTransform,pUVar5,method);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose
            (&local_68,
             (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_GameObject_Dispose);
  return;
}


// UI.MobileControlsOverlay$$AddGasModeButton
// il2cpp: void UI_MobileControlsOverlay__AddGasModeButton (UI_MobileControlsOverlay_o* __this, UnityEngine_RectTransform_o* parent, UI_MobileInputControlLayout_o* control, System_Collections_Generic_List_GameObject__o* group, const MethodInfo* method);
// 0x5c6aea0

void UI_MobileControlsOverlay__AddGasModeButton
               (UI_MobileControlsOverlay_o *__this,UnityEngine_RectTransform_o *parent,
               UI_MobileInputControlLayout_o *control,System_Collections_Generic_List_GameObject__o *group,
               MethodInfo *method)

{
  int32_t *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  UnityEngine_GameObject_array *pUVar7;
  UnityEngine_Vector2_o UVar8;
  UnityEngine_Vector2_o size;
  int32_t iVar9;
  System_String_o *name;
  UI_MobileControlsOverlay_o *pUVar10;
  UnityEngine_RectTransform_o *pUVar11;
  UnityEngine_UI_Image_o *image;
  UI_MobileInputSkin_o *pUVar12;
  UI_MobileGasModeButton_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *pMVar13;
  UI_MobileInputControlLayout_o *extraout_RDX;
  UI_MobileInputControlLayout_o *method_01;
  MethodInfo *method_02;
  MethodInfo *pMVar14;
  System_String_o **ppSVar15;
  UI_MobileControlsOverlay_o *__this_01;
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  UnityEngine_Vector2_o anchoredPosition;
  
  pMVar13 = (MethodInfo *)group;
  method_01 = control;
  if (Il2CppMethodInitialized_075478bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_MobileGasModeButton);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileControlSkinManager);
    ppSVar15 = &"Button";
    il2cpp_codegen_initialize_runtime_metadata(&"Button");
    Il2CppMethodInitialized_075478bd = '\x01';
    method_01 = extraout_RDX;
    __this = (UI_MobileControlsOverlay_o *)ppSVar15;
  }
  UVar8 = UI_MobileControlsOverlay__GetLayoutReferenceSize(__this,parent,(MethodInfo *)method_01);
  if (control == (UI_MobileInputControlLayout_o *)0x0) goto label_05c6b2c8;
  fVar17 = UVar8.fields.x;
  if (UVar8.fields.y <= UVar8.fields.x) {
    fVar17 = UVar8.fields.y;
  }
  fVar18 = 1.0;
  if (1.0 <= fVar17) {
    fVar18 = fVar17;
  }
  uVar2 = (control->fields).Width;
  uVar4 = (control->fields).Height;
  auVar16._4_4_ = uVar4;
  auVar16._0_4_ = uVar2;
  auVar16._8_8_ = 0;
  auVar16 = maxps(_DAT_0100a840,auVar16);
  fVar17 = fVar18 * auVar16._0_4_;
  fVar18 = fVar18 * auVar16._4_4_;
  pUVar10 = (UI_MobileControlsOverlay_o *)(control->fields).Id;
  name = System_String__Concat_52f0320((System_String_o *)pUVar10,"Button",(MethodInfo *)0x0);
  UVar8 = UI_MobileControlsOverlay__GetLayoutReferenceSize(pUVar10,parent,method_02);
  uVar3 = (control->fields).X;
  uVar5 = (control->fields).Y;
  anchoredPosition.fields.x = ((float)uVar3 + -0.5) * UVar8.fields.x;
  anchoredPosition.fields.y = ((float)uVar5 + -0.5) * UVar8.fields.y;
  UVar8.fields.y = fVar18;
  UVar8.fields.x = fVar17;
  pUVar10 = (UI_MobileControlsOverlay_o *)
            UI_MobileControlsOverlay__CreateRect
                      (pUVar10,name,parent,(UnityEngine_Vector2_o)0x3f0000003f000000,
                       (UnityEngine_Vector2_o)0x3f0000003f000000,UVar8,anchoredPosition,pMVar13);
  pMVar13 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
  if (group == (System_Collections_Generic_List_GameObject__o *)0x0) goto label_05c6b2c8;
  piVar1 = &(group->fields)._version;
  *piVar1 = *piVar1 + 1;
  pUVar7 = (group->fields)._items;
  if (pUVar7 == (UnityEngine_GameObject_array *)0x0) goto label_05c6b2c8;
  uVar6 = (group->fields)._size;
  if (uVar6 < (uint)pUVar7->max_length) {
    pMVar13 = (MethodInfo *)(ulong)(uVar6 + 1);
    (group->fields)._size = uVar6 + 1;
    pUVar7->m_Items[(int)uVar6] = (UnityEngine_GameObject_o *)pUVar10;
    Il2CppCodeGenWriteBarrier(pUVar7->m_Items + (int)uVar6);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize
              ((System_Collections_Generic_List_object__o *)group,(Il2CppObject *)pUVar10,
               (MethodInfo_395D230 *)pMVar13->klass->rgctx_data[0xe].method);
  }
  if (pUVar10 == (UI_MobileControlsOverlay_o *)0x0) goto label_05c6b2c8;
  __this_01 = pUVar10;
  pUVar11 = UnityEngine_GameObject__GetComponent_object_
                      ((UnityEngine_GameObject_o *)pUVar10,
                       (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
  UI_MobileControlsOverlay__RegisterButtonRect(__this_01,pUVar11,control,pMVar13);
  pMVar14 = MethodInfo_UnityEngine_GameObject_AddComponent_Image;
  image = UnityEngine_GameObject__AddComponent_object_
                    ((UnityEngine_GameObject_o *)pUVar10,
                     (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_Image);
  if (Il2CppMethodInitialized_0754791c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputSkin);
    Il2CppMethodInitialized_0754791c = '\x01';
  }
  pUVar12 = (control->fields).Skin;
  if (pUVar12 == (UI_MobileInputSkin_o *)0x0) {
    pUVar12 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileInputSkin);
    (pUVar12->fields).Image = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    Il2CppCodeGenWriteBarrier(&(pUVar12->fields).Image);
    (pUVar12->fields).PreserveAspect = true;
    pMVar14 = (MethodInfo *)0x0;
    System_Object___ctor((Il2CppObject *)pUVar12,(MethodInfo *)0x0);
    (pUVar12->fields).R = 0.0;
    (pUVar12->fields).G = 0.0;
    (pUVar12->fields).B = 0.0;
    (pUVar12->fields).A = 0.38;
  }
  iVar9 = UI_MobileInputControlLayout__GetShape(control,pMVar14);
  if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
  }
  UI_MobileControlSkinManager__ApplySkin(image,pUVar12,iVar9,pMVar13);
  pMVar14 = MethodInfo_UnityEngine_GameObject_AddComponent_MobileGasModeButton;
  __this_00 = UnityEngine_GameObject__AddComponent_object_
                        ((UnityEngine_GameObject_o *)pUVar10,
                         (MethodInfo_353B6A0 *)
                         MethodInfo_UnityEngine_GameObject_AddComponent_MobileGasModeButton);
  if (Il2CppMethodInitialized_0754791c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputSkin);
    Il2CppMethodInitialized_0754791c = '\x01';
    pUVar12 = (control->fields).Skin;
    if (pUVar12 != (UI_MobileInputSkin_o *)0x0) goto label_05c6b116;
label_05c6b1df:
    pUVar12 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileInputSkin);
    (pUVar12->fields).Image = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    Il2CppCodeGenWriteBarrier(&(pUVar12->fields).Image);
    (pUVar12->fields).PreserveAspect = true;
    pMVar14 = (MethodInfo *)0x0;
    System_Object___ctor((Il2CppObject *)pUVar12,(MethodInfo *)0x0);
    (pUVar12->fields).R = 0.0;
    (pUVar12->fields).G = 0.0;
    (pUVar12->fields).B = 0.0;
    (pUVar12->fields).A = 0.38;
    if (g_data_0754791d != '\0') goto label_05c6b128;
label_05c6b243:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputSkin);
    g_data_0754791d = '\x01';
    method_00 = (MethodInfo *)(control->fields).OnSkin;
  }
  else {
    pUVar12 = (control->fields).Skin;
    if (pUVar12 == (UI_MobileInputSkin_o *)0x0) goto label_05c6b1df;
label_05c6b116:
    if (g_data_0754791d == '\0') goto label_05c6b243;
label_05c6b128:
    method_00 = (MethodInfo *)(control->fields).OnSkin;
  }
  if (method_00 == (MethodInfo *)0x0) {
    method_00 = (MethodInfo *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileInputSkin);
    method_00->klass = (Il2CppClass *)**(undefined8 **)(g_data_07556758 + 0xb8);
    Il2CppCodeGenWriteBarrier(&method_00->klass);
    *(bool *)&method_00->return_type = true;
    pMVar14 = (MethodInfo *)0x0;
    System_Object___ctor((Il2CppObject *)method_00,(MethodInfo *)0x0);
    *(float *)&method_00->invoker_method = 1.0;
    *(float *)((long)&method_00->invoker_method + 4) = 1.0;
    method_00->name = (char *)0x3ec28f5c3f800000;
    iVar9 = UI_MobileInputControlLayout__GetShape(control,pMVar14);
  }
  else {
    iVar9 = UI_MobileInputControlLayout__GetShape(control,pMVar14);
  }
  if (__this_00 != (UI_MobileGasModeButton_o *)0x0) {
    (__this_00->fields)._image = image;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields)._image);
    (__this_00->fields)._offSkin = pUVar12;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields)._offSkin);
    (__this_00->fields)._onSkin = (UI_MobileInputSkin_o *)method_00;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields)._onSkin);
    (__this_00->fields)._shape = iVar9;
    UI_MobileGasModeButton__Refresh(__this_00,method_00);
    pUVar11 = UnityEngine_GameObject__GetComponent_object_
                        ((UnityEngine_GameObject_o *)pUVar10,
                         (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    size.fields.y = fVar18;
    size.fields.x = fVar17;
    UI_MobileControlsOverlay__AddButtonLabel(pUVar10,pUVar11,control,size,pMVar13);
    return;
  }
label_05c6b2c8:
  ThrowNullReferenceException();
}


// UI.MobileControlsOverlay$$CreateTitanButtons
// il2cpp: void UI_MobileControlsOverlay__CreateTitanButtons (UI_MobileControlsOverlay_o* __this, UnityEngine_RectTransform_o* parent, const MethodInfo* method);
// 0x5c66dd0

void UI_MobileControlsOverlay__CreateTitanButtons
               (UI_MobileControlsOverlay_o *__this,UnityEngine_RectTransform_o *parent,MethodInfo *method)

{
  MethodInfo *in_R8;
  
  UI_MobileControlsOverlay__AddLayoutControls(__this,parent,2,(__this->fields)._titanButtons,in_R8);
  return;
}


// UI.MobileControlsOverlay$$CreateAnnieShifterButtons
// il2cpp: void UI_MobileControlsOverlay__CreateAnnieShifterButtons (UI_MobileControlsOverlay_o* __this, UnityEngine_RectTransform_o* parent, const MethodInfo* method);
// 0x5c66de0

void UI_MobileControlsOverlay__CreateAnnieShifterButtons
               (UI_MobileControlsOverlay_o *__this,UnityEngine_RectTransform_o *parent,MethodInfo *method)

{
  MethodInfo *in_R8;
  
  UI_MobileControlsOverlay__AddLayoutControls(__this,parent,3,(__this->fields)._annieShifterButtons,in_R8);
  return;
}


// UI.MobileControlsOverlay$$CreateErenShifterButtons
// il2cpp: void UI_MobileControlsOverlay__CreateErenShifterButtons (UI_MobileControlsOverlay_o* __this, UnityEngine_RectTransform_o* parent, const MethodInfo* method);
// 0x5c66df0

void UI_MobileControlsOverlay__CreateErenShifterButtons
               (UI_MobileControlsOverlay_o *__this,UnityEngine_RectTransform_o *parent,MethodInfo *method)

{
  MethodInfo *in_R8;
  
  UI_MobileControlsOverlay__AddLayoutControls(__this,parent,4,(__this->fields)._erenShifterButtons,in_R8);
  return;
}


// UI.MobileControlsOverlay$$IsMapEditorOverlay
// il2cpp: bool UI_MobileControlsOverlay__IsMapEditorOverlay (UI_MobileControlsOverlay_o* __this, const MethodInfo* method);
// 0x5c644d0

bool UI_MobileControlsOverlay__IsMapEditorOverlay(UI_MobileControlsOverlay_o *__this,MethodInfo *method)

{
  UI_MapEditorMenu_o *x;
  bool bVar1;
  
  if (Il2CppMethodInitialized_075478be == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075478be = '\x01';
  }
  x = (__this->fields)._mapEditorMenu;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  return bVar1;
}


// UI.MobileControlsOverlay$$AddLayoutControls
// il2cpp: void UI_MobileControlsOverlay__AddLayoutControls (UI_MobileControlsOverlay_o* __this, UnityEngine_RectTransform_o* parent, int32_t role, System_Collections_Generic_List_GameObject__o* group, const MethodInfo* method);
// 0x5c66270
// eh: try 0x5c663f0..0x5c66c1a -> pad 0x5c66c67 (+40 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c66cb1..0x5c66cb6 -> pad 0x5c66cdb cleanup
// eh: try 0x5c66cde..0x5c66ce8 -> pad 0x5c66d99 catch (...) [compiler noexcept guard]
// eh: try 0x5c66d05..0x5c66d0a -> pad 0x5c66d2e cleanup
// eh: try 0x5c66d31..0x5c66d3b -> pad 0x5c66d99 catch (...) [compiler noexcept guard]
// eh: try 0x5c66d55..0x5c66d5a -> pad 0x5c66d84 cleanup
// eh: try 0x5c66d87..0x5c66d91 -> pad 0x5c66d99 catch (...) [compiler noexcept guard]
// asm: 98 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c6633b: jmp 0x5c66a7d
// asm:   0x5c669ac: jmp 0x5c66a4f
// asm:   0x5c66c1a: jmp 0x5c66ced
// asm:   0x5c66c1f: jmp 0x5c66d3d
// asm:   0x5c66c24: jmp 0x5c66ced
// asm:   0x5c66c29: jmp 0x5c66d3d
// asm:   0x5c66c2e: jmp 0x5c66d3d
// asm:   0x5c66c33: jmp 0x5c66d3d
// asm:   0x5c66c38: jmp 0x5c66d3d
// asm:   0x5c66c3d: jmp 0x5c66d3d
// asm:   0x5c66c42: jmp 0x5c66d3d
// asm:   0x5c66c47: jmp 0x5c66d3d
// asm:   0x5c66c4c: jmp 0x5c66d3d
// asm:   0x5c66c51: jmp 0x5c66d3d
// asm:   0x5c66c56: jmp 0x5c66d3d
// asm:   0x5c66c5b: jmp 0x5c66d3d
// asm:   0x5c66c60: jmp 0x5c66d3d
// asm:   0x5c66c65: jmp 0x5c66c99
// asm:   0x5c66c67: jmp 0x5c66d3d
// asm:   0x5c66c6c: jmp 0x5c66d3d
// asm:   0x5c66c71: jmp 0x5c66d3d
// asm:   0x5c66c76: jmp 0x5c66c99
// asm:   0x5c66c78: jmp 0x5c66c99
// asm:   0x5c66c7a: jmp 0x5c66c99
// asm:   0x5c66c7c: jmp 0x5c66d3d
// asm:   0x5c66c81: jmp 0x5c66c99
// asm:   0x5c66c83: jmp 0x5c66c99
// asm:   0x5c66c85: jmp 0x5c66ced
// asm:   0x5c66c87: jmp 0x5c66c99
// asm:   0x5c66c89: jmp 0x5c66ced
// asm:   0x5c66c8b: jmp 0x5c66c99
// asm:   0x5c66c8d: jmp 0x5c66d3d
// asm:   0x5c66c92: jmp 0x5c66c99
// asm:   0x5c66c94: jmp 0x5c66d3d
// asm:   0x5c66c99: mov rbp, rax
// asm:   0x5c66c9c: cmp edx, 1
// asm:   0x5c66c9f: jne 0x5c66cde
// asm:   0x5c66ca1: mov rdi, rbp
// asm:   0x5c66ca4: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c66ca9: mov rbx, qword ptr [rax]
// asm:   0x5c66cac: mov qword ptr [rsp + 0x40], rbx
// asm:   0x5c66cb1: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c66cb6: lea rax, [rip + 0x16278cb]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MobileInputControlLayout_Dispose
// asm:   0x5c66cbd: mov rsi, qword ptr [rax]
// asm:   0x5c66cc0: lea rdi, [rsp + 0x20]
// asm:   0x5c66cc5: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5c66cca: test rbx, rbx
// asm:   0x5c66ccd: je 0x5c66a7d
// asm:   0x5c66cd3: mov rdi, rbx
// asm:   0x5c66cd6: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c66cdb: mov rbp, rax
// asm:   0x5c66cde: lea rdi, [rsp + 0x40]
// asm:   0x5c66ce3: call 0x2fd9d90  ; il2cpp_runtime_helper_02fd9d90()
// asm:   0x5c66ce8: jmp 0x5c66d91
// asm:   0x5c66ced: mov rbp, rax
// asm:   0x5c66cf0: cmp edx, 1
// asm:   0x5c66cf3: jne 0x5c66d31
// asm:   0x5c66cf5: mov rdi, rbp
// asm:   0x5c66cf8: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c66cfd: mov rbp, qword ptr [rax]
// asm:   0x5c66d00: mov qword ptr [rsp + 0x40], rbp
// asm:   0x5c66d05: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c66d0a: lea rax, [rip + 0x1627877]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MobileInputControlLayout_Dispose
// asm:   0x5c66d11: mov rsi, qword ptr [rax]
// asm:   0x5c66d14: lea rdi, [rsp + 0x20]
// asm:   0x5c66d19: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5c66d1e: test rbp, rbp
// asm:   0x5c66d21: lea r15, [rsp + 0x20]
// asm:   0x5c66d26: je 0x5c66957
// asm:   0x5c66d2c: jmp 0x5c66d7c
// asm:   0x5c66d2e: mov rbp, rax
// asm:   0x5c66d31: lea rdi, [rsp + 0x40]
// asm:   0x5c66d36: call 0x2fd9d60  ; il2cpp_runtime_helper_02fd9d60()
// asm:   0x5c66d3b: jmp 0x5c66d91
// asm:   0x5c66d3d: mov rbp, rax
// asm:   0x5c66d40: cmp edx, 1
// asm:   0x5c66d43: jne 0x5c66d87
// asm:   0x5c66d45: mov rdi, rbp
// asm:   0x5c66d48: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c66d4d: mov rbp, qword ptr [rax]
// asm:   0x5c66d50: mov qword ptr [rsp + 0x40], rbp
// asm:   0x5c66d55: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c66d5a: lea rax, [rip + 0x1627827]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MobileInputControlLayout_Dispose
// asm:   0x5c66d61: mov rsi, qword ptr [rax]
// asm:   0x5c66d64: lea rdi, [rsp + 0x20]
// asm:   0x5c66d69: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5c66d6e: test rbp, rbp
// asm:   0x5c66d71: lea r15, [rsp + 0x20]
// asm:   0x5c66d76: je 0x5c66849
// asm:   0x5c66d7c: mov rdi, rbp
// asm:   0x5c66d7f: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c66d84: mov rbp, rax
// asm:   0x5c66d87: lea rdi, [rsp + 0x40]
// asm:   0x5c66d8c: call 0x2fd9d30  ; il2cpp_runtime_helper_02fd9d30()
// asm:   0x5c66d91: mov rdi, rbp
// asm:   0x5c66d94: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c66d99: mov rdi, rax
// asm:   0x5c66d9c: call 0x2ab61e0  ; __clang_call_terminate()

void UI_MobileControlsOverlay__AddLayoutControls
               (UI_MobileControlsOverlay_o *__this,UnityEngine_RectTransform_o *parent,int32_t role,
               System_Collections_Generic_List_GameObject__o *group,MethodInfo *method)

{
  int32_t *piVar1;
  System_Collections_Generic_List_MobileInputControlLayout__o *__this_00;
  System_String_o *pSVar2;
  UI_MobileInputControlLayout_array *pUVar3;
  UnityEngine_GameObject_array *pUVar4;
  MethodInfo *pMVar5;
  UI_MobileInputControlLayout_o *pUVar6;
  bool bVar7;
  UI_MobileInputLayout_o *pUVar8;
  System_Collections_Generic_List_MobileInputControlLayout__o *__this_01;
  System_String_array *pSVar9;
  UnityEngine_GameObject_o *pUVar10;
  uint uVar11;
  ulong uVar12;
  MethodInfo *pMVar13;
  MethodInfo *in_R9;
  ulong uVar14;
  int32_t local_8c;
  UI_MobileControlsOverlay_o *local_88;
  UnityEngine_RectTransform_o *local_80;
  undefined1 local_78 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_70;
  UI_MobileInputControlLayout_o *local_68;
  undefined1 local_58 [16];
  UI_MobileInputControlLayout_o *local_48;
  uint local_3c;
  System_Collections_Generic_List_MobileInputControlLayout__o *local_38;
  
  local_88 = __this;
  local_80 = parent;
  if (Il2CppMethodInitialized_075478bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MobileInputControlLayout_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MobileInputControlLayout_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MobileInputControlLayout_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_MobileInputControlLayout);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutManager);
    Il2CppMethodInitialized_075478bf = '\x01';
  }
  local_78 = (undefined1  [8])0x0;
  pSStack_70 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  local_68 = (UI_MobileInputControlLayout_o *)0x0;
  if ((TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager);
    pUVar8 = UI_MobileInputLayoutManager__GetSelectedLayout(role,(MethodInfo *)parent);
  }
  else {
    pUVar8 = UI_MobileInputLayoutManager__GetSelectedLayout(role,(MethodInfo *)parent);
  }
  if (pUVar8 == (UI_MobileInputLayout_o *)0x0) {
    return;
  }
  local_38 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MobileInputControlLayout);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)local_38,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_ctor);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MobileInputControlLayout);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_ctor);
  __this_00 = (pUVar8->fields).Controls;
  if (__this_00 != (System_Collections_Generic_List_MobileInputControlLayout__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_58,
               (System_Collections_Generic_List_object__o *)__this_00,
               (MethodInfo_395E050 *)
               MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_GetEnumerator);
    local_68 = local_48;
    local_78 = (undefined1  [8])local_58._0_8_;
    pSStack_70 = (System_Collections_Generic_List_Enumerator_object__o *)local_58._8_8_;
    local_58._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_58._8_8_ = local_78;
label_05c66400:
    bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      ((System_Collections_Generic_List_Enumerator_object__o *)local_78,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_MobileInputControlLayout_MoveNext
                      );
    pUVar6 = local_68;
    if (bVar7) {
      if (local_68 == (UI_MobileInputControlLayout_o *)0x0) {
        ThrowNullReferenceException();
      }
      if (Il2CppMethodInitialized_07547919 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Enum_TryParse_MobileInputControlKind);
        Il2CppMethodInitialized_07547919 = '\x01';
      }
      local_3c = 0;
      pSVar2 = (pUVar6->fields).Kind;
      if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_07556760);
      }
      pMVar13 = (MethodInfo *)&local_3c;
      bVar7 = System_Enum__TryParse_Int32Enum_
                        (pSVar2,(int32_t *)pMVar13,
                         (MethodInfo_34DC610 *)MethodInfo_System_Enum_TryParse_MobileInputControlKind);
      pMVar5 = MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_Add;
      uVar11 = 0;
      if (bVar7) {
        uVar11 = local_3c;
      }
      if ((uVar11 & 0xfffffffe) != 6) {
        if ((role != 1) || (uVar11 != 3)) {
          switch(uVar11) {
          case 0x5c6651b:
            pSVar9 = UI_MobileInputControlLayout__GetActionIds(pUVar6,pMVar13);
            if (Il2CppMethodInitialized_075478c0 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&"None");
              Il2CppMethodInitialized_075478c0 = '\x01';
            }
            if ((pSVar9 != (System_String_array *)0x0) && (0 < (int)pSVar9->max_length)) {
              uVar12 = pSVar9->max_length & 0xffffffff;
              uVar14 = 0;
              do {
                if (uVar12 <= uVar14) {
                  ThrowIndexOutOfRangeException();
                }
                bVar7 = System_String__op_Inequality
                                  (pSVar9->m_Items[uVar14],"None",(MethodInfo *)0x0);
                pMVar13 = MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_Add;
                if (bVar7) {
                  if (local_38 != (System_Collections_Generic_List_MobileInputControlLayout__o *)0x0) {
                    piVar1 = &(local_38->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pUVar3 = (local_38->fields)._items;
                    if (pUVar3 != (UI_MobileInputControlLayout_array *)0x0) {
                      uVar11 = (local_38->fields)._size;
                      if (uVar11 < (uint)pUVar3->max_length) {
                        (local_38->fields)._size = uVar11 + 1;
                        pUVar3->m_Items[(int)uVar11] = pUVar6;
                        Il2CppCodeGenWriteBarrier(pUVar3->m_Items + (int)uVar11);
                      }
                      else {
                        System_Collections_Generic_List_object___AddWithResize
                                  ((System_Collections_Generic_List_object__o *)local_38,
                                   (Il2CppObject *)pUVar6,
                                   (MethodInfo_395D230 *)pMVar13->klass->rgctx_data[0xe].method);
                      }
                      goto label_05c66400;
                    }
                  }
                  ThrowNullReferenceException();
                }
                uVar14 = uVar14 + 1;
                uVar11 = (uint)pSVar9->max_length;
                uVar12 = (ulong)uVar11;
              } while ((long)uVar14 < (long)(int)uVar11);
            }
          }
          pUVar10 = UI_MobileControlsOverlay__CreateLayoutButton(local_88,local_80,pUVar6,role,method);
          pMVar13 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
          if (group != (System_Collections_Generic_List_GameObject__o *)0x0) {
            piVar1 = &(group->fields)._version;
            *piVar1 = *piVar1 + 1;
            pUVar4 = (group->fields)._items;
            if (pUVar4 != (UnityEngine_GameObject_array *)0x0) {
              uVar11 = (group->fields)._size;
              if (uVar11 < (uint)pUVar4->max_length) {
                (group->fields)._size = uVar11 + 1;
                pUVar4->m_Items[(int)uVar11] = pUVar10;
                Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar11);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)group,(Il2CppObject *)pUVar10,
                           (MethodInfo_395D230 *)pMVar13->klass->rgctx_data[0xe].method);
              }
              goto label_05c66400;
            }
          }
          ThrowNullReferenceException();
        }
        if (__this_01 != (System_Collections_Generic_List_MobileInputControlLayout__o *)0x0) {
          piVar1 = &(__this_01->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar3 = (__this_01->fields)._items;
          if (pUVar3 != (UI_MobileInputControlLayout_array *)0x0) {
            uVar11 = (__this_01->fields)._size;
            if (uVar11 < (uint)pUVar3->max_length) {
              (__this_01->fields)._size = uVar11 + 1;
              pUVar3->m_Items[(int)uVar11] = pUVar6;
              Il2CppCodeGenWriteBarrier(pUVar3->m_Items + (int)uVar11);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pUVar6,
                         (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
            }
            goto label_05c66400;
          }
        }
        ThrowNullReferenceException();
      }
      goto label_05c66400;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)local_78,
               (MethodInfo_4C45C40 *)
               MethodInfo_System_Collections_Generic_List_Enumerator_MobileInputControlLayout_Dispose);
    if (local_38 != (System_Collections_Generic_List_MobileInputControlLayout__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_58,
                 (System_Collections_Generic_List_object__o *)local_38,
                 (MethodInfo_395E050 *)
                 MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_GetEnumerator);
      local_68 = local_48;
      local_78 = (undefined1  [8])local_58._0_8_;
      pSStack_70 = (System_Collections_Generic_List_Enumerator_object__o *)local_58._8_8_;
      local_58._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_58._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)local_78;
      if (group == (System_Collections_Generic_List_GameObject__o *)0x0) {
        bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          ((System_Collections_Generic_List_Enumerator_object__o *)local_78,
                           (MethodInfo_4C45C50 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_MobileInputControlLayout_MoveNext
                          );
        if (bVar7) {
          UI_MobileControlsOverlay__CreateLayoutButton(local_88,local_80,local_68,role,method);
label_05c66c15:
          ThrowNullReferenceException();
        }
      }
      else {
        while (bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                 ((System_Collections_Generic_List_Enumerator_object__o *)local_78,
                                  (MethodInfo_4C45C50 *)
                                  MethodInfo_System_Collections_Generic_List_Enumerator_MobileInputControlLayout_MoveNext
                                 ), bVar7) {
          pUVar10 = UI_MobileControlsOverlay__CreateLayoutButton(local_88,local_80,local_68,role,method);
          pMVar13 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
          piVar1 = &(group->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar4 = (group->fields)._items;
          if (pUVar4 == (UnityEngine_GameObject_array *)0x0) goto label_05c66c15;
          uVar11 = (group->fields)._size;
          if (uVar11 < (uint)pUVar4->max_length) {
            (group->fields)._size = uVar11 + 1;
            pUVar4->m_Items[(int)uVar11] = pUVar10;
            Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar11);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)group,(Il2CppObject *)pUVar10,
                       (MethodInfo_395D230 *)pMVar13->klass->rgctx_data[0xe].method);
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)local_78,
                 (MethodInfo_4C45C40 *)
                 MethodInfo_System_Collections_Generic_List_Enumerator_MobileInputControlLayout_Dispose);
      if (__this_01 != (System_Collections_Generic_List_MobileInputControlLayout__o *)0x0) {
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_58,
                   (System_Collections_Generic_List_object__o *)__this_01,
                   (MethodInfo_395E050 *)
                   MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_GetEnumerator);
        local_68 = local_48;
        local_78 = (undefined1  [8])local_58._0_8_;
        pSStack_70 = (System_Collections_Generic_List_Enumerator_object__o *)local_58._8_8_;
        local_58._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        local_58._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)local_78;
        if (group == (System_Collections_Generic_List_GameObject__o *)0x0) {
          while (bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                   ((System_Collections_Generic_List_Enumerator_object__o *)local_78,
                                    (MethodInfo_4C45C50 *)
                                    MethodInfo_System_Collections_Generic_List_Enumerator_MobileInputControlLayout_MoveNext
                                   ), pUVar6 = local_68, bVar7) {
            if (local_68 == (UI_MobileInputControlLayout_o *)0x0) {
label_05c66baf:
              ThrowNullReferenceException();
            }
            if (Il2CppMethodInitialized_07547919 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_System_Enum_TryParse_MobileInputControlKind);
              Il2CppMethodInitialized_07547919 = '\x01';
            }
            local_8c = 0;
            pSVar2 = (pUVar6->fields).Kind;
            if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init(g_data_07556760);
            }
            bVar7 = System_Enum__TryParse_Int32Enum_
                              (pSVar2,&local_8c,
                               (MethodInfo_34DC610 *)MethodInfo_System_Enum_TryParse_MobileInputControlKind);
            if (!bVar7 || local_8c != 3) {
              UI_MobileControlsOverlay__CreateHoldButton
                        (local_88,local_80,pUVar6,role,(System_Collections_Generic_List_GameObject__o *)0x0,
                         in_R9);
label_05c66bd6:
              ThrowNullReferenceException();
            }
            UI_MobileControlsOverlay__AddHookButton
                      (local_88,local_80,pUVar6,role,(System_Collections_Generic_List_GameObject__o *)0x0,
                       in_R9);
          }
        }
        else {
          while (bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                   ((System_Collections_Generic_List_Enumerator_object__o *)local_78,
                                    (MethodInfo_4C45C50 *)
                                    MethodInfo_System_Collections_Generic_List_Enumerator_MobileInputControlLayout_MoveNext
                                   ), pUVar6 = local_68, bVar7) {
            if (local_68 == (UI_MobileInputControlLayout_o *)0x0) goto label_05c66baf;
            if (Il2CppMethodInitialized_07547919 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_System_Enum_TryParse_MobileInputControlKind);
              Il2CppMethodInitialized_07547919 = '\x01';
            }
            local_8c = 0;
            pSVar2 = (pUVar6->fields).Kind;
            if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init(g_data_07556760);
            }
            bVar7 = System_Enum__TryParse_Int32Enum_
                              (pSVar2,&local_8c,
                               (MethodInfo_34DC610 *)MethodInfo_System_Enum_TryParse_MobileInputControlKind);
            if (bVar7 && local_8c == 3) {
              UI_MobileControlsOverlay__AddHookButton(local_88,local_80,pUVar6,role,group,in_R9);
            }
            else {
              pUVar10 = UI_MobileControlsOverlay__CreateHoldButton(local_88,local_80,pUVar6,role,group,in_R9);
              pMVar13 = MethodInfo_System_Collections_Generic_List_GameObject_Add;
              piVar1 = &(group->fields)._version;
              *piVar1 = *piVar1 + 1;
              pUVar4 = (group->fields)._items;
              if (pUVar4 == (UnityEngine_GameObject_array *)0x0) goto label_05c66bd6;
              uVar11 = (group->fields)._size;
              if (uVar11 < (uint)pUVar4->max_length) {
                (group->fields)._size = uVar11 + 1;
                pUVar4->m_Items[(int)uVar11] = pUVar10;
                Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar11);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)group,(Il2CppObject *)pUVar10,
                           (MethodInfo_395D230 *)pMVar13->klass->rgctx_data[0xe].method);
              }
            }
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((System_Collections_Generic_List_Enumerator_object__o *)local_78,
                   (MethodInfo_4C45C40 *)
                   MethodInfo_System_Collections_Generic_List_Enumerator_MobileInputControlLayout_Dispose);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MobileControlsOverlay$$HasButtonAction
// il2cpp: bool UI_MobileControlsOverlay__HasButtonAction (UI_MobileControlsOverlay_o* __this, System_String_array* actionIds, const MethodInfo* method);
// 0x5c6b680
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c6b6bc: nop dword ptr [rax]

bool UI_MobileControlsOverlay__HasButtonAction
               (UI_MobileControlsOverlay_o *__this,System_String_array *actionIds,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (Il2CppMethodInitialized_075478c0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    Il2CppMethodInitialized_075478c0 = '\x01';
  }
  if ((actionIds == (System_String_array *)0x0) || ((int)actionIds->max_length < 1)) {
    return false;
  }
  uVar3 = actionIds->max_length & 0xffffffff;
  uVar4 = 0;
  while( true ) {
    if (uVar3 <= uVar4) {
      ThrowIndexOutOfRangeException();
    }
    bVar2 = System_String__op_Inequality(actionIds->m_Items[uVar4],"None",(MethodInfo *)0x0);
    if (bVar2) break;
    uVar4 = uVar4 + 1;
    uVar1 = (uint)actionIds->max_length;
    uVar3 = (ulong)uVar1;
    if ((long)(int)uVar1 <= (long)uVar4) {
      return false;
    }
  }
  return true;
}


// UI.MobileControlsOverlay$$GetControlInputs
// il2cpp: Settings_MobileInput_array* UI_MobileControlsOverlay__GetControlInputs (UI_MobileControlsOverlay_o* __this, UI_MobileInputControlLayout_o* control, const MethodInfo* method);
// 0x5c6a6b0

Settings_MobileInput_array *
UI_MobileControlsOverlay__GetControlInputs
          (UI_MobileControlsOverlay_o *__this,UI_MobileInputControlLayout_o *control,MethodInfo *method)

{
  System_String_array *actionIds;
  Settings_MobileInput_array *pSVar1;
  UI_MobileInputControlLayout_o *method_00;
  
  method_00 = control;
  if (Il2CppMethodInitialized_075478c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBridge);
    Il2CppMethodInitialized_075478c1 = '\x01';
  }
  if (control == (UI_MobileInputControlLayout_o *)0x0) {
    ThrowNullReferenceException();
  }
  actionIds = UI_MobileInputControlLayout__GetActionIds(control,(MethodInfo *)method_00);
  if ((TypeInfo_Settings_MobileInputBridge->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBridge);
    pSVar1 = Settings_MobileInputBridge__GetActionInputs(actionIds,(MethodInfo *)0x0);
    return pSVar1;
  }
  pSVar1 = Settings_MobileInputBridge__GetActionInputs(actionIds,(MethodInfo *)0x0);
  return pSVar1;
}


// UI.MobileControlsOverlay$$CreateLayoutButton
// il2cpp: UnityEngine_GameObject_o* UI_MobileControlsOverlay__CreateLayoutButton (UI_MobileControlsOverlay_o* __this, UnityEngine_RectTransform_o* parent, UI_MobileInputControlLayout_o* control, int32_t role, const MethodInfo* method);
// 0x5c6c0f0

UnityEngine_GameObject_o *
UI_MobileControlsOverlay__CreateLayoutButton
          (UI_MobileControlsOverlay_o *__this,UnityEngine_RectTransform_o *parent,
          UI_MobileInputControlLayout_o *control,int32_t role,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  UnityEngine_Vector2_o UVar5;
  UnityEngine_Vector2_o size;
  bool bVar6;
  int32_t iVar7;
  System_String_o *pSVar8;
  UI_MobileControlsOverlay_o *pUVar9;
  UnityEngine_RectTransform_o *pUVar10;
  UnityEngine_UI_Image_o *image;
  UI_MobileInputSkin_o *pUVar11;
  System_String_array *actionIds;
  MethodInfo *pMVar12;
  undefined4 in_register_0000000c;
  MethodInfo *pMVar13;
  UI_MobileInputControlLayout_o *extraout_RDX;
  UI_MobileInputControlLayout_o *method_00;
  MethodInfo *method_01;
  char cVar14;
  System_String_o **__this_00;
  UI_MobileControlsOverlay_o *pUVar15;
  bool aimAssistOnRelease;
  float fVar16;
  undefined1 auVar17 [16];
  UnityEngine_Vector2_o anchoredPosition;
  MethodInfo *in_stack_ffffffffffffff90;
  int local_68;
  int32_t local_64;
  Settings_MobileInput_array *local_60;
  UI_MobileControlsOverlay_o *local_58;
  UI_MobileControlsOverlay_o *local_50;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  pMVar13 = (MethodInfo *)CONCAT44(in_register_0000000c,role);
  method_00 = control;
  __this_00 = (System_String_o **)__this;
  if (Il2CppMethodInitialized_075478c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_MobileInputButton);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileControlSkinManager);
    __this_00 = &"Button";
    il2cpp_codegen_initialize_runtime_metadata(&"Button");
    Il2CppMethodInitialized_075478c2 = '\x01';
    method_00 = extraout_RDX;
  }
  UVar5 = UI_MobileControlsOverlay__GetLayoutReferenceSize
                    ((UI_MobileControlsOverlay_o *)__this_00,parent,(MethodInfo *)method_00);
  if (control == (UI_MobileInputControlLayout_o *)0x0) goto label_05c6c58f;
  fVar16 = UVar5.fields.x;
  if (UVar5.fields.y <= UVar5.fields.x) {
    fVar16 = UVar5.fields.y;
  }
  fStack_3c = 1.0;
  if (1.0 <= fVar16) {
    fStack_3c = fVar16;
  }
  uVar1 = (control->fields).Width;
  uVar3 = (control->fields).Height;
  auVar17._4_4_ = uVar3;
  auVar17._0_4_ = uVar1;
  auVar17._8_8_ = 0;
  auVar17 = maxps(_DAT_0100a840,auVar17);
  local_48 = fStack_3c * auVar17._0_4_;
  fStack_44 = fStack_3c * auVar17._4_4_;
  fStack_40 = fStack_3c * auVar17._8_4_;
  fStack_3c = fStack_3c * auVar17._12_4_;
  pUVar9 = (UI_MobileControlsOverlay_o *)(control->fields).Id;
  local_58 = __this;
  pSVar8 = System_String__Concat_52f0320((System_String_o *)pUVar9,"Button",(MethodInfo *)0x0);
  UVar5 = UI_MobileControlsOverlay__GetLayoutReferenceSize(pUVar9,parent,method_01);
  uVar2 = (control->fields).X;
  uVar4 = (control->fields).Y;
  anchoredPosition.fields.x = ((float)uVar2 + -0.5) * UVar5.fields.x;
  anchoredPosition.fields.y = ((float)uVar4 + -0.5) * UVar5.fields.y;
  UVar5.fields.y = fStack_44;
  UVar5.fields.x = local_48;
  pUVar9 = (UI_MobileControlsOverlay_o *)
           UI_MobileControlsOverlay__CreateRect
                     (pUVar9,pSVar8,parent,(UnityEngine_Vector2_o)0x3f0000003f000000,
                      (UnityEngine_Vector2_o)0x3f0000003f000000,UVar5,anchoredPosition,pMVar13);
  if (pUVar9 == (UI_MobileControlsOverlay_o *)0x0) goto label_05c6c58f;
  pUVar15 = pUVar9;
  pUVar10 = UnityEngine_GameObject__GetComponent_object_
                      ((UnityEngine_GameObject_o *)pUVar9,
                       (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
  UI_MobileControlsOverlay__RegisterButtonRect(pUVar15,pUVar10,control,pMVar13);
  pMVar12 = MethodInfo_UnityEngine_GameObject_AddComponent_Image;
  image = UnityEngine_GameObject__AddComponent_object_
                    ((UnityEngine_GameObject_o *)pUVar9,
                     (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_Image);
  if (Il2CppMethodInitialized_0754791c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputSkin);
    Il2CppMethodInitialized_0754791c = '\x01';
  }
  pUVar11 = (control->fields).Skin;
  if (pUVar11 == (UI_MobileInputSkin_o *)0x0) {
    pUVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileInputSkin);
    (pUVar11->fields).Image = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    Il2CppCodeGenWriteBarrier(&(pUVar11->fields).Image);
    (pUVar11->fields).PreserveAspect = true;
    pMVar12 = (MethodInfo *)0x0;
    System_Object___ctor((Il2CppObject *)pUVar11,(MethodInfo *)0x0);
    (pUVar11->fields).R = 0.0;
    (pUVar11->fields).G = 0.0;
    (pUVar11->fields).B = 0.0;
    (pUVar11->fields).A = 0.38;
  }
  iVar7 = UI_MobileInputControlLayout__GetShape(control,pMVar12);
  if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
  }
  UI_MobileControlSkinManager__ApplySkin(image,pUVar11,iVar7,pMVar13);
  pMVar13 = MethodInfo_UnityEngine_GameObject_AddComponent_MobileInputButton;
  local_50 = (UI_MobileControlsOverlay_o *)
             UnityEngine_GameObject__AddComponent_object_
                       ((UnityEngine_GameObject_o *)pUVar9,
                        (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_MobileInputButton
                       );
  bVar6 = true;
  if (role == 1) {
    if (Il2CppMethodInitialized_07547919 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Enum_TryParse_MobileInputControlKind);
      Il2CppMethodInitialized_07547919 = '\x01';
    }
    local_68 = 0;
    pSVar8 = (control->fields).Kind;
    if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_07556760);
    }
    pMVar13 = (MethodInfo *)&local_68;
    bVar6 = System_Enum__TryParse_Int32Enum_
                      (pSVar8,(int32_t *)pMVar13,
                       (MethodInfo_34DC610 *)MethodInfo_System_Enum_TryParse_MobileInputControlKind);
    bVar6 = local_68 != 0 && bVar6;
  }
  if (Il2CppMethodInitialized_075478c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBridge);
    Il2CppMethodInitialized_075478c1 = '\x01';
  }
  local_64 = role;
  actionIds = UI_MobileInputControlLayout__GetActionIds(control,pMVar13);
  if ((TypeInfo_Settings_MobileInputBridge->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBridge);
  }
  cVar14 = '\0';
  pMVar13 = (MethodInfo *)0x0;
  local_60 = Settings_MobileInputBridge__GetActionInputs(actionIds,(MethodInfo *)0x0);
  aimAssistOnRelease = false;
  if (bVar6) {
    if (Il2CppMethodInitialized_0754791c == '\0') goto label_05c6c499;
label_05c6c3c8:
    pMVar12 = (MethodInfo *)(control->fields).Skin;
    if (pMVar12 == (MethodInfo *)0x0) goto label_05c6c4ba;
label_05c6c3d6:
    if (g_data_0754791d == '\0') goto label_05c6c519;
label_05c6c3e3:
    pUVar11 = (control->fields).OnSkin;
  }
  else {
    cVar14 = (control->fields).AimAssistOnPress;
    aimAssistOnRelease = (control->fields).AimAssistOnRelease != false;
    if (Il2CppMethodInitialized_0754791c != '\0') goto label_05c6c3c8;
label_05c6c499:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputSkin);
    Il2CppMethodInitialized_0754791c = '\x01';
    pMVar12 = (MethodInfo *)(control->fields).Skin;
    if (pMVar12 != (MethodInfo *)0x0) goto label_05c6c3d6;
label_05c6c4ba:
    pMVar12 = (MethodInfo *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileInputSkin);
    pMVar12->klass = (Il2CppClass *)**(undefined8 **)(g_data_07556758 + 0xb8);
    Il2CppCodeGenWriteBarrier(&pMVar12->klass);
    *(bool *)&pMVar12->return_type = true;
    pMVar13 = (MethodInfo *)0x0;
    System_Object___ctor((Il2CppObject *)pMVar12,(MethodInfo *)0x0);
    *(float *)&pMVar12->invoker_method = 0.0;
    *(float *)((long)&pMVar12->invoker_method + 4) = 0.0;
    pMVar12->name = (char *)0x3ec28f5c00000000;
    if (g_data_0754791d != '\0') goto label_05c6c3e3;
label_05c6c519:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputSkin);
    g_data_0754791d = '\x01';
    pUVar11 = (control->fields).OnSkin;
  }
  if (pUVar11 == (UI_MobileInputSkin_o *)0x0) {
    pUVar11 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileInputSkin);
    (pUVar11->fields).Image = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    Il2CppCodeGenWriteBarrier(&(pUVar11->fields).Image);
    (pUVar11->fields).PreserveAspect = true;
    pMVar13 = (MethodInfo *)0x0;
    System_Object___ctor((Il2CppObject *)pUVar11,(MethodInfo *)0x0);
    (pUVar11->fields).R = 1.0;
    (pUVar11->fields).G = 1.0;
    (pUVar11->fields).B = 1.0;
    (pUVar11->fields).A = 0.38;
  }
  iVar7 = UI_MobileInputControlLayout__GetShape(control,pMVar13);
  if ((local_50 != (UI_MobileControlsOverlay_o *)0x0) &&
     (pUVar15 = local_50,
     UI_MobileInputButton__Setup
               ((UI_MobileInputButton_o *)local_50,local_60,cVar14 != '\0',aimAssistOnRelease,
                (UI_MobileInputSkin_o *)pMVar12,pUVar11,iVar7,in_stack_ffffffffffffff90),
     local_58 != (UI_MobileControlsOverlay_o *)0x0)) {
    pMVar13 = (MethodInfo *)(control->fields).Label;
    UI_MobileControlsOverlay__RegisterControlDisplayNames_5b6cf80
              (pUVar15,local_64,control,(System_String_o *)pMVar13,pMVar12);
    pUVar15 = pUVar9;
    pUVar10 = UnityEngine_GameObject__GetComponent_object_
                        ((UnityEngine_GameObject_o *)pUVar9,
                         (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    size.fields.y = fStack_44;
    size.fields.x = local_48;
    UI_MobileControlsOverlay__AddButtonLabel(pUVar15,pUVar10,control,size,pMVar13);
    return (UnityEngine_GameObject_o *)pUVar9;
  }
label_05c6c58f:
  ThrowNullReferenceException();
}


// UI.MobileControlsOverlay$$CreateLayoutPopup
// il2cpp: UnityEngine_GameObject_o* UI_MobileControlsOverlay__CreateLayoutPopup (UI_MobileControlsOverlay_o* __this, UnityEngine_RectTransform_o* parent, UI_MobileInputControlLayout_o* control, int32_t role, const MethodInfo* method);
// 0x5c6bae0
// eh: try 0x5c6bfe3..0x5c6c07d -> pad 0x5c6c08c (+5 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c6c0a4..0x5c6c0a9 -> pad 0x5c6c0ca cleanup
// eh: try 0x5c6c0cd..0x5c6c0d7 -> pad 0x5c6c0df catch (...) [compiler noexcept guard]
// asm: 29 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c6bdc9: jmp 0x5c6c07d
// asm:   0x5c6c082: jmp 0x5c6c08c
// asm:   0x5c6c084: jmp 0x5c6c08c
// asm:   0x5c6c086: jmp 0x5c6c08c
// asm:   0x5c6c088: jmp 0x5c6c08c
// asm:   0x5c6c08a: jmp 0x5c6c08c
// asm:   0x5c6c08c: mov rbx, rax
// asm:   0x5c6c08f: cmp edx, 1
// asm:   0x5c6c092: jne 0x5c6c0cd
// asm:   0x5c6c094: mov rdi, rbx
// asm:   0x5c6c097: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c6c09c: mov rbx, qword ptr [rax]
// asm:   0x5c6c09f: mov qword ptr [rsp + 0x10], rbx
// asm:   0x5c6c0a4: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c6c0a9: lea rax, [rip + 0x16224d8]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MobileInputControlLayout_Dispose
// asm:   0x5c6c0b0: mov rsi, qword ptr [rax]
// asm:   0x5c6c0b3: lea rdi, [rsp + 0x30]
// asm:   0x5c6c0b8: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5c6c0bd: test rbx, rbx
// asm:   0x5c6c0c0: je 0x5c6c061
// asm:   0x5c6c0c2: mov rdi, rbx
// asm:   0x5c6c0c5: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c6c0ca: mov rbx, rax
// asm:   0x5c6c0cd: lea rdi, [rsp + 0x10]
// asm:   0x5c6c0d2: call 0x2fd9dc0  ; il2cpp_runtime_helper_02fd9dc0()
// asm:   0x5c6c0d7: mov rdi, rbx
// asm:   0x5c6c0da: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c6c0df: mov rdi, rax
// asm:   0x5c6c0e2: call 0x2ab61e0  ; __clang_call_terminate()

UnityEngine_GameObject_o *
UI_MobileControlsOverlay__CreateLayoutPopup
          (UI_MobileControlsOverlay_o *__this,UnityEngine_RectTransform_o *parent,
          UI_MobileInputControlLayout_o *control,int32_t role,MethodInfo *method)

{
  System_Collections_Generic_List_Enumerator_T__o *__return_storage_ptr__;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  System_Collections_Generic_List_MobileInputControlLayout__o *__this_00;
  UnityEngine_Vector2_o UVar5;
  UnityEngine_Vector2_o size;
  _union_13 parent_00;
  bool bVar6;
  int32_t iVar7;
  int32_t iVar8;
  System_String_o *pSVar9;
  UI_MobileControlsOverlay_o *pUVar10;
  UnityEngine_RectTransform_o *pUVar11;
  UnityEngine_UI_Image_o *pUVar12;
  UI_MobileInputSkin_o *pUVar13;
  UI_MobileControlsOverlay_o *pUVar14;
  UI_MobileInputSkin_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  UI_MobileInputButton_o *button;
  undefined4 in_register_0000000c;
  MethodInfo *pMVar15;
  UI_MobileInputControlLayout_o *extraout_RDX;
  UI_MobileInputControlLayout_o *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  System_String_o **ppSVar16;
  UI_MobileControlsOverlay_o *__this_03;
  MethodInfo *in_R9;
  float fVar17;
  undefined1 auVar18 [16];
  UnityEngine_Vector2_o anchoredPosition;
  undefined1 local_88 [40];
  Il2CppType *pIStack_60;
  UI_MobileInputControlLayout_o *local_58;
  _union_13 local_50;
  _union_14 local_48;
  float fStack_40;
  float fStack_3c;
  
  pMVar15 = (MethodInfo *)CONCAT44(in_register_0000000c,role);
  method_00 = control;
  local_88._24_8_ = __this;
  if (Il2CppMethodInitialized_075478c3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MobileInputControlLayout_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MobileInputControlLayout_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MobileInputControlLayout_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_MobileInputPopupButton);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_MobileInputButton);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileControlSkinManager);
    ppSVar16 = &"Popup";
    il2cpp_codegen_initialize_runtime_metadata(&"Popup");
    Il2CppMethodInitialized_075478c3 = '\x01';
    method_00 = extraout_RDX;
    __this = (UI_MobileControlsOverlay_o *)ppSVar16;
  }
  local_88._32_8_ = (Il2CppClass *)0x0;
  pIStack_60 = (Il2CppType *)0x0;
  local_58 = (UI_MobileInputControlLayout_o *)0x0;
  UVar5 = UI_MobileControlsOverlay__GetLayoutReferenceSize(__this,parent,(MethodInfo *)method_00);
  if (control == (UI_MobileInputControlLayout_o *)0x0) goto label_05c6c07d;
  fVar17 = UVar5.fields.x;
  if (UVar5.fields.y <= UVar5.fields.x) {
    fVar17 = UVar5.fields.y;
  }
  fStack_3c = 1.0;
  if (1.0 <= fVar17) {
    fStack_3c = fVar17;
  }
  uVar1 = (control->fields).Width;
  uVar3 = (control->fields).Height;
  auVar18._4_4_ = uVar3;
  auVar18._0_4_ = uVar1;
  auVar18._8_8_ = 0;
  auVar18 = maxps(_DAT_0100a840,auVar18);
  local_48._0_4_ = fStack_3c * auVar18._0_4_;
  local_48._4_4_ = fStack_3c * auVar18._4_4_;
  fStack_40 = fStack_3c * auVar18._8_4_;
  fStack_3c = fStack_3c * auVar18._12_4_;
  pUVar10 = (UI_MobileControlsOverlay_o *)(control->fields).Id;
  pSVar9 = System_String__Concat_52f0320((System_String_o *)pUVar10,"Popup",(MethodInfo *)0x0);
  UVar5 = UI_MobileControlsOverlay__GetLayoutReferenceSize(pUVar10,parent,method_01);
  uVar2 = (control->fields).X;
  uVar4 = (control->fields).Y;
  anchoredPosition.fields.x = ((float)uVar2 + -0.5) * UVar5.fields.x;
  anchoredPosition.fields.y = ((float)uVar4 + -0.5) * UVar5.fields.y;
  UVar5.fields.y = (float)local_48._4_4_;
  UVar5.fields.x = (float)local_48._0_4_;
  pUVar10 = (UI_MobileControlsOverlay_o *)
            UI_MobileControlsOverlay__CreateRect
                      (pUVar10,pSVar9,parent,(UnityEngine_Vector2_o)0x3f0000003f000000,
                       (UnityEngine_Vector2_o)0x3f0000003f000000,UVar5,anchoredPosition,pMVar15);
  if (pUVar10 == (UI_MobileControlsOverlay_o *)0x0) goto label_05c6c07d;
  pUVar14 = pUVar10;
  pUVar11 = UnityEngine_GameObject__GetComponent_object_
                      ((UnityEngine_GameObject_o *)pUVar10,
                       (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
  UI_MobileControlsOverlay__RegisterButtonRect(pUVar14,pUVar11,control,pMVar15);
  method_03 = MethodInfo_UnityEngine_GameObject_AddComponent_Image;
  pUVar12 = UnityEngine_GameObject__AddComponent_object_
                      ((UnityEngine_GameObject_o *)pUVar10,
                       (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_Image);
  if (Il2CppMethodInitialized_0754791c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputSkin);
    Il2CppMethodInitialized_0754791c = '\x01';
  }
  pUVar13 = (control->fields).Skin;
  if (pUVar13 == (UI_MobileInputSkin_o *)0x0) {
    pUVar13 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileInputSkin);
    (pUVar13->fields).Image = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    Il2CppCodeGenWriteBarrier(&(pUVar13->fields).Image);
    (pUVar13->fields).PreserveAspect = true;
    method_03 = (MethodInfo *)0x0;
    System_Object___ctor((Il2CppObject *)pUVar13,(MethodInfo *)0x0);
    (pUVar13->fields).R = 0.0;
    (pUVar13->fields).G = 0.0;
    (pUVar13->fields).B = 0.0;
    (pUVar13->fields).A = 0.38;
  }
  iVar7 = UI_MobileInputControlLayout__GetShape(control,method_03);
  if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
  }
  UI_MobileControlSkinManager__ApplySkin(pUVar12,pUVar13,iVar7,pMVar15);
  pUVar14 = (UI_MobileControlsOverlay_o *)
            UnityEngine_GameObject__AddComponent_object_
                      ((UnityEngine_GameObject_o *)pUVar10,
                       (MethodInfo_353B6A0 *)
                       MethodInfo_UnityEngine_GameObject_AddComponent_MobileInputPopupButton);
  if (Il2CppMethodInitialized_0754791b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Enum_TryParse_MobileInputPopupMode);
    Il2CppMethodInitialized_0754791b = '\x01';
  }
  local_88._0_8_ = (ulong)(uint)local_88._4_4_ << 0x20;
  pSVar9 = (control->fields).PopupMode;
  local_50.rgctx_data = (Il2CppRGCTXData *)parent;
  if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_07556760);
  }
  pMVar15 = (MethodInfo *)local_88;
  bVar6 = System_Enum__TryParse_Int32Enum_
                    (pSVar9,(int32_t *)pMVar15,
                     (MethodInfo_34DC610 *)MethodInfo_System_Enum_TryParse_MobileInputPopupMode);
  local_88._16_8_ = pUVar10;
  if (bVar6) {
    iVar7 = local_88._0_4_;
    if (Il2CppMethodInitialized_0754791c == '\0') goto label_05c6bde1;
label_05c6bd92:
    pUVar13 = (control->fields).Skin;
    if (pUVar13 != (UI_MobileInputSkin_o *)0x0) goto label_05c6bd9b;
label_05c6bdfd:
    pUVar13 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileInputSkin);
    (pUVar13->fields).Image = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    Il2CppCodeGenWriteBarrier(&(pUVar13->fields).Image);
    (pUVar13->fields).PreserveAspect = true;
    pMVar15 = (MethodInfo *)0x0;
    System_Object___ctor((Il2CppObject *)pUVar13,(MethodInfo *)0x0);
    (pUVar13->fields).R = 0.0;
    (pUVar13->fields).G = 0.0;
    (pUVar13->fields).B = 0.0;
    (pUVar13->fields).A = 0.38;
    if (g_data_0754791d == '\0') goto label_05c6be59;
label_05c6bda8:
    __this_01 = (control->fields).OnSkin;
    if (__this_01 != (UI_MobileInputSkin_o *)0x0) goto label_05c6bdb5;
label_05c6be79:
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileInputSkin);
    (__this_01->fields).Image = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).Image);
    (__this_01->fields).PreserveAspect = true;
    pMVar15 = (MethodInfo *)0x0;
    System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
    (__this_01->fields).R = 1.0;
    (__this_01->fields).G = 1.0;
    (__this_01->fields).B = 1.0;
    (__this_01->fields).A = 0.38;
    iVar8 = UI_MobileInputControlLayout__GetShape(control,pMVar15);
  }
  else {
    iVar7 = 0;
    if (Il2CppMethodInitialized_0754791c != '\0') goto label_05c6bd92;
label_05c6bde1:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputSkin);
    Il2CppMethodInitialized_0754791c = '\x01';
    pUVar13 = (control->fields).Skin;
    if (pUVar13 == (UI_MobileInputSkin_o *)0x0) goto label_05c6bdfd;
label_05c6bd9b:
    if (g_data_0754791d != '\0') goto label_05c6bda8;
label_05c6be59:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputSkin);
    g_data_0754791d = '\x01';
    __this_01 = (control->fields).OnSkin;
    if (__this_01 == (UI_MobileInputSkin_o *)0x0) goto label_05c6be79;
label_05c6bdb5:
    iVar8 = UI_MobileInputControlLayout__GetShape(control,pMVar15);
  }
  if (pUVar14 != (UI_MobileControlsOverlay_o *)0x0) {
    if (Il2CppMethodInitialized_075478ff == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Image);
      Il2CppMethodInitialized_075478ff = '\x01';
    }
    *(int32_t *)&(pUVar14->fields)._mapEditorMenu = iVar7;
    (pUVar14->fields)._buttonsLayer = (UnityEngine_RectTransform_o *)pUVar13;
    Il2CppCodeGenWriteBarrier(&(pUVar14->fields)._buttonsLayer);
    (pUVar14->fields)._generalButtons = (System_Collections_Generic_List_GameObject__o *)__this_01;
    Il2CppCodeGenWriteBarrier(&(pUVar14->fields)._generalButtons);
    *(int32_t *)&(pUVar14->fields)._humanButtons = iVar8;
    pUVar12 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar14,
                         (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
    *(UnityEngine_UI_Image_o **)&(pUVar14->fields)._visible = pUVar12;
    Il2CppCodeGenWriteBarrier((void **)&(pUVar14->fields)._visible);
    pUVar10 = pUVar14;
    UI_MobileInputPopupButton__SetOpen((UI_MobileInputPopupButton_o *)pUVar14,false,method_02);
    if ((UI_MobileControlsOverlay_o *)local_88._24_8_ != (UI_MobileControlsOverlay_o *)0x0) {
      pMVar15 = (MethodInfo *)(control->fields).Label;
      UI_MobileControlsOverlay__RegisterControlDisplayNames_5b6cf80
                (pUVar10,role,control,(System_String_o *)pMVar15,method);
      pUVar10 = (UI_MobileControlsOverlay_o *)local_88._16_8_;
      __this_03 = (UI_MobileControlsOverlay_o *)local_88._16_8_;
      pUVar11 = UnityEngine_GameObject__GetComponent_object_
                          ((UnityEngine_GameObject_o *)local_88._16_8_,
                           (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform)
      ;
      size.fields.y = (float)local_48._4_4_;
      size.fields.x = (float)local_48._0_4_;
      UI_MobileControlsOverlay__AddButtonLabel(__this_03,pUVar11,control,size,pMVar15);
      parent_00.methodMetadataHandle = local_50.methodMetadataHandle;
      __this_00 = (control->fields).Children;
      if (__this_00 != (System_Collections_Generic_List_MobileInputControlLayout__o *)0x0) {
        __return_storage_ptr__ = (System_Collections_Generic_List_Enumerator_T__o *)(local_88 + 0x20);
        System_Collections_Generic_List_object___GetEnumerator
                  (__return_storage_ptr__,(System_Collections_Generic_List_object__o *)__this_00,
                   (MethodInfo_395E050 *)
                   MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_GetEnumerator);
        local_88._0_8_ = (Il2CppMethodPointer)0x0;
        local_88._8_8_ = __return_storage_ptr__;
        while (bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                 ((System_Collections_Generic_List_Enumerator_object__o *)
                                  __return_storage_ptr__,
                                  (MethodInfo_4C45C50 *)
                                  MethodInfo_System_Collections_Generic_List_Enumerator_MobileInputControlLayout_MoveNext
                                 ), bVar6) {
          pMVar15 = (MethodInfo *)(ulong)(uint)role;
          __this_02 = UI_MobileControlsOverlay__CreatePopupChildButton
                                ((UI_MobileControlsOverlay_o *)local_88._24_8_,
                                 (UnityEngine_RectTransform_o *)parent_00.rgctx_data,control,local_58,role,
                                 in_R9);
          if (__this_02 == (UnityEngine_GameObject_o *)0x0) {
            ThrowNullReferenceException();
          }
          pUVar11 = UnityEngine_GameObject__GetComponent_object_
                              (__this_02,
                               (MethodInfo_353B730 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
          button = UnityEngine_GameObject__GetComponent_object_
                             (__this_02,
                              (MethodInfo_353B730 *)
                              MethodInfo_UnityEngine_GameObject_GetComponent_MobileInputButton);
          UI_MobileInputPopupButton__RegisterChild
                    ((UI_MobileInputPopupButton_o *)pUVar14,__this_02,pUVar11,button,pMVar15);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((System_Collections_Generic_List_Enumerator_object__o *)(local_88 + 0x20),
                   (MethodInfo_4C45C40 *)
                   MethodInfo_System_Collections_Generic_List_Enumerator_MobileInputControlLayout_Dispose);
        pUVar10 = (UI_MobileControlsOverlay_o *)local_88._16_8_;
      }
      return (UnityEngine_GameObject_o *)pUVar10;
    }
  }
label_05c6c07d:
  ThrowNullReferenceException();
}


// UI.MobileControlsOverlay$$CreatePopupChildButton
// il2cpp: UnityEngine_GameObject_o* UI_MobileControlsOverlay__CreatePopupChildButton (UI_MobileControlsOverlay_o* __this, UnityEngine_RectTransform_o* parent, UI_MobileInputControlLayout_o* popupControl, UI_MobileInputControlLayout_o* childControl, int32_t role, const MethodInfo* method);
// 0x5c6c7b0

UnityEngine_GameObject_o *
UI_MobileControlsOverlay__CreatePopupChildButton
          (UI_MobileControlsOverlay_o *__this,UnityEngine_RectTransform_o *parent,
          UI_MobileInputControlLayout_o *popupControl,UI_MobileInputControlLayout_o *childControl,int32_t role
          ,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  UnityEngine_Vector2_o UVar7;
  UnityEngine_Vector2_o UVar8;
  UnityEngine_Vector2_o UVar9;
  int32_t iVar10;
  System_String_o *name;
  UI_MobileControlsOverlay_o *pUVar11;
  UnityEngine_RectTransform_o *pUVar12;
  UnityEngine_UI_Image_o *image;
  UI_MobileInputSkin_o *pUVar13;
  UI_MobileControlsOverlay_o *pUVar14;
  System_String_array *actionIds;
  Settings_MobileInput_array *inputs;
  MethodInfo *method_00;
  UI_MobileInputControlLayout_o *method_01;
  UI_MobileInputControlLayout_o *extraout_RDX;
  UI_MobileInputControlLayout_o *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  char cVar15;
  MethodInfo *pMVar16;
  MethodInfo *method_05;
  System_String_o **ppSVar17;
  undefined1 auVar18 [16];
  float fVar19;
  MethodInfo *in_stack_ffffffffffffff80;
  float local_78;
  float fStack_74;
  UnityEngine_Vector2_o local_58;
  
  method_01 = childControl;
  method_02 = popupControl;
  if (Il2CppMethodInitialized_075478c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_MobileInputButton);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileControlSkinManager);
    ppSVar17 = &"Button";
    il2cpp_codegen_initialize_runtime_metadata(&"Button");
    Il2CppMethodInitialized_075478c4 = '\x01';
    method_02 = extraout_RDX;
    __this = (UI_MobileControlsOverlay_o *)ppSVar17;
  }
  UVar7 = UI_MobileControlsOverlay__GetLayoutReferenceSize(__this,parent,(MethodInfo *)method_02);
  if (childControl == (UI_MobileInputControlLayout_o *)0x0) goto label_05c6cc3f;
  uVar1 = (childControl->fields).Width;
  uVar4 = (childControl->fields).Height;
  auVar18._4_4_ = uVar4;
  auVar18._0_4_ = uVar1;
  pUVar11 = (UI_MobileControlsOverlay_o *)(childControl->fields).Id;
  name = System_String__Concat_52f0320((System_String_o *)pUVar11,"Button",(MethodInfo *)0x0);
  UVar8 = UI_MobileControlsOverlay__GetLayoutReferenceSize(pUVar11,parent,method_03);
  UVar9 = UI_MobileControlsOverlay__GetLayoutReferenceSize(pUVar11,parent,method_04);
  if (popupControl == (UI_MobileInputControlLayout_o *)0x0) goto label_05c6cc3f;
  local_58.fields.x = UVar7.fields.x;
  local_58.fields.y = UVar7.fields.y;
  if (local_58.fields.y <= local_58.fields.x) {
    local_58.fields.x = local_58.fields.y;
  }
  local_58.fields.y = 1.0;
  if (1.0 <= local_58.fields.x) {
    local_58.fields.y = local_58.fields.x;
  }
  auVar18._8_8_ = 0;
  auVar18 = maxps(_DAT_0100a840,auVar18);
  local_58.fields.x = local_58.fields.y * auVar18._0_4_;
  local_58.fields.y = local_58.fields.y * auVar18._4_4_;
  local_78 = UVar8.fields.x;
  fStack_74 = UVar8.fields.y;
  if (fStack_74 <= local_78) {
    local_78 = fStack_74;
  }
  fVar19 = 1.0;
  if (1.0 <= local_78) {
    fVar19 = local_78;
  }
  uVar2 = (popupControl->fields).X;
  uVar5 = (popupControl->fields).Y;
  uVar3 = (childControl->fields).X;
  uVar6 = (childControl->fields).Y;
  UVar7.fields.y = local_58.fields.y;
  UVar7.fields.x = local_58.fields.x;
  UVar8.fields.y = fVar19 * (float)uVar6 + UVar9.fields.y * ((float)uVar5 + -0.5);
  UVar8.fields.x = fVar19 * (float)uVar3 + UVar9.fields.x * ((float)uVar2 + -0.5);
  pUVar11 = (UI_MobileControlsOverlay_o *)
            UI_MobileControlsOverlay__CreateRect
                      (pUVar11,name,parent,(UnityEngine_Vector2_o)0x3f0000003f000000,
                       (UnityEngine_Vector2_o)0x3f0000003f000000,UVar7,UVar8,(MethodInfo *)method_01);
  if (pUVar11 == (UI_MobileControlsOverlay_o *)0x0) goto label_05c6cc3f;
  pUVar14 = pUVar11;
  pUVar12 = UnityEngine_GameObject__GetComponent_object_
                      ((UnityEngine_GameObject_o *)pUVar11,
                       (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
  UI_MobileControlsOverlay__RegisterButtonRect(pUVar14,pUVar12,childControl,(MethodInfo *)method_01);
  pMVar16 = MethodInfo_UnityEngine_GameObject_AddComponent_Image;
  image = UnityEngine_GameObject__AddComponent_object_
                    ((UnityEngine_GameObject_o *)pUVar11,
                     (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_Image);
  if (Il2CppMethodInitialized_0754791c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputSkin);
    Il2CppMethodInitialized_0754791c = '\x01';
  }
  pUVar13 = (childControl->fields).Skin;
  if (pUVar13 == (UI_MobileInputSkin_o *)0x0) {
    pUVar13 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileInputSkin);
    (pUVar13->fields).Image = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    Il2CppCodeGenWriteBarrier(&(pUVar13->fields).Image);
    (pUVar13->fields).PreserveAspect = true;
    pMVar16 = (MethodInfo *)0x0;
    System_Object___ctor((Il2CppObject *)pUVar13,(MethodInfo *)0x0);
    (pUVar13->fields).R = 0.0;
    (pUVar13->fields).G = 0.0;
    (pUVar13->fields).B = 0.0;
    (pUVar13->fields).A = 0.38;
  }
  iVar10 = UI_MobileInputControlLayout__GetShape(childControl,pMVar16);
  if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
  }
  UI_MobileControlSkinManager__ApplySkin(image,pUVar13,iVar10,(MethodInfo *)method_01);
  pMVar16 = MethodInfo_UnityEngine_GameObject_AddComponent_MobileInputButton;
  pUVar14 = (UI_MobileControlsOverlay_o *)
            UnityEngine_GameObject__AddComponent_object_
                      ((UnityEngine_GameObject_o *)pUVar11,
                       (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_MobileInputButton)
  ;
  if (Il2CppMethodInitialized_075478c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBridge);
    Il2CppMethodInitialized_075478c1 = '\x01';
  }
  actionIds = UI_MobileInputControlLayout__GetActionIds(childControl,pMVar16);
  if ((TypeInfo_Settings_MobileInputBridge->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBridge);
  }
  cVar15 = '\0';
  method_05 = (MethodInfo *)0x0;
  inputs = Settings_MobileInputBridge__GetActionInputs(actionIds,(MethodInfo *)0x0);
  pMVar16 = (MethodInfo *)0x0;
  if (role == 1) {
    cVar15 = (childControl->fields).AimAssistOnPress;
    pMVar16 = (MethodInfo *)(ulong)((childControl->fields).AimAssistOnRelease != false);
    if (Il2CppMethodInitialized_0754791c != '\0') goto label_05c6ca5a;
label_05c6cb3f:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputSkin);
    Il2CppMethodInitialized_0754791c = '\x01';
    method_00 = (MethodInfo *)(childControl->fields).Skin;
    if (method_00 != (MethodInfo *)0x0) goto label_05c6ca6d;
label_05c6cb65:
    method_00 = (MethodInfo *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileInputSkin);
    method_00->klass = (Il2CppClass *)**(undefined8 **)(g_data_07556758 + 0xb8);
    Il2CppCodeGenWriteBarrier(&method_00->klass);
    *(bool *)&method_00->return_type = true;
    method_05 = (MethodInfo *)0x0;
    System_Object___ctor((Il2CppObject *)method_00,(MethodInfo *)0x0);
    *(float *)&method_00->invoker_method = 0.0;
    *(float *)((long)&method_00->invoker_method + 4) = 0.0;
    method_00->name = (char *)0x3ec28f5c00000000;
    if (g_data_0754791d != '\0') goto label_05c6ca7d;
label_05c6cbc7:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputSkin);
    g_data_0754791d = '\x01';
    pUVar13 = (childControl->fields).OnSkin;
  }
  else {
    if (Il2CppMethodInitialized_0754791c == '\0') goto label_05c6cb3f;
label_05c6ca5a:
    method_00 = (MethodInfo *)(childControl->fields).Skin;
    if (method_00 == (MethodInfo *)0x0) goto label_05c6cb65;
label_05c6ca6d:
    if (g_data_0754791d == '\0') goto label_05c6cbc7;
label_05c6ca7d:
    pUVar13 = (childControl->fields).OnSkin;
  }
  if (pUVar13 == (UI_MobileInputSkin_o *)0x0) {
    pUVar13 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileInputSkin);
    (pUVar13->fields).Image = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    Il2CppCodeGenWriteBarrier(&(pUVar13->fields).Image);
    (pUVar13->fields).PreserveAspect = true;
    method_05 = (MethodInfo *)0x0;
    System_Object___ctor((Il2CppObject *)pUVar13,(MethodInfo *)0x0);
    (pUVar13->fields).R = 1.0;
    (pUVar13->fields).G = 1.0;
    (pUVar13->fields).B = 1.0;
    (pUVar13->fields).A = 0.38;
  }
  iVar10 = UI_MobileInputControlLayout__GetShape(childControl,method_05);
  if (pUVar14 != (UI_MobileControlsOverlay_o *)0x0) {
    UI_MobileInputButton__Setup
              ((UI_MobileInputButton_o *)pUVar14,inputs,cVar15 != '\0',SUB81(pMVar16,0),
               (UI_MobileInputSkin_o *)method_00,pUVar13,iVar10,in_stack_ffffffffffffff80);
    pMVar16 = (MethodInfo *)
              UI_MobileControlsOverlay__GetPopupChildDisplayName(pUVar14,popupControl,childControl,pMVar16);
    UI_MobileControlsOverlay__RegisterControlDisplayNames_5b6cf80
              (pUVar14,role,childControl,(System_String_o *)pMVar16,method_00);
    pUVar14 = pUVar11;
    pUVar12 = UnityEngine_GameObject__GetComponent_object_
                        ((UnityEngine_GameObject_o *)pUVar11,
                         (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    UI_MobileControlsOverlay__AddButtonLabel(pUVar14,pUVar12,childControl,local_58,pMVar16);
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pUVar11,false,(MethodInfo *)0x0);
    return (UnityEngine_GameObject_o *)pUVar11;
  }
label_05c6cc3f:
  ThrowNullReferenceException();
}


// UI.MobileControlsOverlay$$CreateLayoutToggle
// il2cpp: UnityEngine_GameObject_o* UI_MobileControlsOverlay__CreateLayoutToggle (UI_MobileControlsOverlay_o* __this, UnityEngine_RectTransform_o* parent, UI_MobileInputControlLayout_o* control, int32_t role, const MethodInfo* method);
// 0x5c6b700
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c6b97e: jmp 0x5c6badb

UnityEngine_GameObject_o *
UI_MobileControlsOverlay__CreateLayoutToggle
          (UI_MobileControlsOverlay_o *__this,UnityEngine_RectTransform_o *parent,
          UI_MobileInputControlLayout_o *control,int32_t role,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  UnityEngine_Vector2_o UVar5;
  UnityEngine_Vector2_o size;
  int32_t shape;
  uint shape_00;
  System_String_o *name;
  UI_MobileControlsOverlay_o *pUVar6;
  UnityEngine_RectTransform_o *pUVar7;
  UnityEngine_UI_Image_o *image;
  UI_MobileInputSkin_o *pUVar8;
  UI_MobileControlsOverlay_o *pUVar9;
  System_String_array *actionIds;
  Settings_MobileInput_array *inputs;
  UI_MobileInputSkin_o *onSkin;
  undefined4 in_register_0000000c;
  MethodInfo *pMVar10;
  MethodInfo *pMVar11;
  UI_MobileInputControlLayout_o *extraout_RDX;
  UI_MobileInputControlLayout_o *method_00;
  MethodInfo *method_01;
  System_String_o **__this_00;
  MethodInfo *in_R9;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  UnityEngine_Vector2_o anchoredPosition;
  
  pMVar10 = (MethodInfo *)CONCAT44(in_register_0000000c,role);
  method_00 = control;
  __this_00 = (System_String_o **)__this;
  if (Il2CppMethodInitialized_075478c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_MobileInputToggleButton);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileControlSkinManager);
    __this_00 = &"Toggle";
    il2cpp_codegen_initialize_runtime_metadata(&"Toggle");
    Il2CppMethodInitialized_075478c5 = '\x01';
    method_00 = extraout_RDX;
  }
  UVar5 = UI_MobileControlsOverlay__GetLayoutReferenceSize
                    ((UI_MobileControlsOverlay_o *)__this_00,parent,(MethodInfo *)method_00);
  if (control == (UI_MobileInputControlLayout_o *)0x0) goto label_05c6badb;
  fVar13 = UVar5.fields.x;
  if (UVar5.fields.y <= UVar5.fields.x) {
    fVar13 = UVar5.fields.y;
  }
  fVar14 = 1.0;
  if (1.0 <= fVar13) {
    fVar14 = fVar13;
  }
  uVar1 = (control->fields).Width;
  uVar3 = (control->fields).Height;
  auVar12._4_4_ = uVar3;
  auVar12._0_4_ = uVar1;
  auVar12._8_8_ = 0;
  auVar12 = maxps(_DAT_0100a840,auVar12);
  fVar13 = fVar14 * auVar12._0_4_;
  fVar14 = fVar14 * auVar12._4_4_;
  pUVar6 = (UI_MobileControlsOverlay_o *)(control->fields).Id;
  name = System_String__Concat_52f0320((System_String_o *)pUVar6,"Toggle",(MethodInfo *)0x0);
  UVar5 = UI_MobileControlsOverlay__GetLayoutReferenceSize(pUVar6,parent,method_01);
  uVar2 = (control->fields).X;
  uVar4 = (control->fields).Y;
  anchoredPosition.fields.x = ((float)uVar2 + -0.5) * UVar5.fields.x;
  anchoredPosition.fields.y = ((float)uVar4 + -0.5) * UVar5.fields.y;
  UVar5.fields.y = fVar14;
  UVar5.fields.x = fVar13;
  pUVar6 = (UI_MobileControlsOverlay_o *)
           UI_MobileControlsOverlay__CreateRect
                     (pUVar6,name,parent,(UnityEngine_Vector2_o)0x3f0000003f000000,
                      (UnityEngine_Vector2_o)0x3f0000003f000000,UVar5,anchoredPosition,pMVar10);
  if (pUVar6 == (UI_MobileControlsOverlay_o *)0x0) goto label_05c6badb;
  pUVar9 = pUVar6;
  pUVar7 = UnityEngine_GameObject__GetComponent_object_
                     ((UnityEngine_GameObject_o *)pUVar6,
                      (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
  UI_MobileControlsOverlay__RegisterButtonRect(pUVar9,pUVar7,control,pMVar10);
  pMVar11 = MethodInfo_UnityEngine_GameObject_AddComponent_Image;
  image = UnityEngine_GameObject__AddComponent_object_
                    ((UnityEngine_GameObject_o *)pUVar6,
                     (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_Image);
  if (Il2CppMethodInitialized_0754791c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputSkin);
    Il2CppMethodInitialized_0754791c = '\x01';
  }
  pUVar8 = (control->fields).Skin;
  if (pUVar8 == (UI_MobileInputSkin_o *)0x0) {
    pUVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileInputSkin);
    (pUVar8->fields).Image = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    Il2CppCodeGenWriteBarrier(&(pUVar8->fields).Image);
    (pUVar8->fields).PreserveAspect = true;
    pMVar11 = (MethodInfo *)0x0;
    System_Object___ctor((Il2CppObject *)pUVar8,(MethodInfo *)0x0);
    (pUVar8->fields).R = 0.0;
    (pUVar8->fields).G = 0.0;
    (pUVar8->fields).B = 0.0;
    (pUVar8->fields).A = 0.38;
  }
  shape = UI_MobileInputControlLayout__GetShape(control,pMVar11);
  if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
  }
  UI_MobileControlSkinManager__ApplySkin(image,pUVar8,shape,pMVar10);
  pMVar10 = MethodInfo_UnityEngine_GameObject_AddComponent_MobileInputToggleButton;
  pUVar9 = (UI_MobileControlsOverlay_o *)
           UnityEngine_GameObject__AddComponent_object_
                     ((UnityEngine_GameObject_o *)pUVar6,
                      (MethodInfo_353B6A0 *)
                      MethodInfo_UnityEngine_GameObject_AddComponent_MobileInputToggleButton);
  if (Il2CppMethodInitialized_075478c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBridge);
    Il2CppMethodInitialized_075478c1 = '\x01';
  }
  actionIds = UI_MobileInputControlLayout__GetActionIds(control,pMVar10);
  if ((TypeInfo_Settings_MobileInputBridge->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBridge);
  }
  pMVar10 = (MethodInfo *)0x0;
  inputs = Settings_MobileInputBridge__GetActionInputs(actionIds,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_0754791c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputSkin);
    Il2CppMethodInitialized_0754791c = '\x01';
    pUVar8 = (control->fields).Skin;
    if (pUVar8 == (UI_MobileInputSkin_o *)0x0) goto label_05c6b99f;
label_05c6b953:
    if (g_data_0754791d != '\0') goto label_05c6b960;
label_05c6b9fe:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputSkin);
    g_data_0754791d = '\x01';
    onSkin = (control->fields).OnSkin;
    if (onSkin == (UI_MobileInputSkin_o *)0x0) goto label_05c6ba1e;
label_05c6b96d:
    shape_00 = UI_MobileInputControlLayout__GetShape(control,pMVar10);
  }
  else {
    pUVar8 = (control->fields).Skin;
    if (pUVar8 != (UI_MobileInputSkin_o *)0x0) goto label_05c6b953;
label_05c6b99f:
    pUVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileInputSkin);
    (pUVar8->fields).Image = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    Il2CppCodeGenWriteBarrier(&(pUVar8->fields).Image);
    (pUVar8->fields).PreserveAspect = true;
    pMVar10 = (MethodInfo *)0x0;
    System_Object___ctor((Il2CppObject *)pUVar8,(MethodInfo *)0x0);
    (pUVar8->fields).R = 0.0;
    (pUVar8->fields).G = 0.0;
    (pUVar8->fields).B = 0.0;
    (pUVar8->fields).A = 0.38;
    if (g_data_0754791d == '\0') goto label_05c6b9fe;
label_05c6b960:
    onSkin = (control->fields).OnSkin;
    if (onSkin != (UI_MobileInputSkin_o *)0x0) goto label_05c6b96d;
label_05c6ba1e:
    onSkin = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileInputSkin);
    (onSkin->fields).Image = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    Il2CppCodeGenWriteBarrier(&(onSkin->fields).Image);
    (onSkin->fields).PreserveAspect = true;
    pMVar10 = (MethodInfo *)0x0;
    System_Object___ctor((Il2CppObject *)onSkin,(MethodInfo *)0x0);
    (onSkin->fields).R = 1.0;
    (onSkin->fields).G = 1.0;
    (onSkin->fields).B = 1.0;
    (onSkin->fields).A = 0.38;
    shape_00 = UI_MobileInputControlLayout__GetShape(control,pMVar10);
  }
  if (pUVar9 != (UI_MobileControlsOverlay_o *)0x0) {
    pMVar10 = (MethodInfo *)(ulong)shape_00;
    UI_MobileInputToggleButton__Setup
              ((UI_MobileInputToggleButton_o *)pUVar9,inputs,pUVar8,onSkin,shape_00,in_R9);
    if (__this != (UI_MobileControlsOverlay_o *)0x0) {
      pMVar11 = (MethodInfo *)(control->fields).Label;
      UI_MobileControlsOverlay__RegisterControlDisplayNames_5b6cf80
                (pUVar9,role,control,(System_String_o *)pMVar11,pMVar10);
      pUVar9 = pUVar6;
      pUVar7 = UnityEngine_GameObject__GetComponent_object_
                         ((UnityEngine_GameObject_o *)pUVar6,
                          (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
      size.fields.y = fVar14;
      size.fields.x = fVar13;
      UI_MobileControlsOverlay__AddButtonLabel(pUVar9,pUVar7,control,size,pMVar11);
      return (UnityEngine_GameObject_o *)pUVar6;
    }
  }
label_05c6badb:
  ThrowNullReferenceException();
}


// UI.MobileControlsOverlay$$RegisterControlDisplayNames
// il2cpp: void UI_MobileControlsOverlay__RegisterControlDisplayNames (UI_MobileControlsOverlay_o* __this, int32_t role, UI_MobileInputControlLayout_o* control, const MethodInfo* method);
// 0x5c6a090

void UI_MobileControlsOverlay__RegisterControlDisplayNames
               (UI_MobileControlsOverlay_o *__this,int32_t role,UI_MobileInputControlLayout_o *control,
               MethodInfo *method)

{
  System_String_o *displayName;
  MethodInfo *in_R8;
  
  if (control == (UI_MobileInputControlLayout_o *)0x0) {
    displayName = (System_String_o *)0x0;
  }
  else {
    displayName = (control->fields).Label;
  }
  if (__this == (UI_MobileControlsOverlay_o *)0x0) {
    ThrowNullReferenceException();
  }
  UI_MobileControlsOverlay__RegisterControlDisplayNames_5b6cf80(__this,role,control,displayName,in_R8);
  return;
}


// UI.MobileControlsOverlay$$RegisterControlDisplayNames
// il2cpp: void UI_MobileControlsOverlay__RegisterControlDisplayNames (UI_MobileControlsOverlay_o* __this, int32_t role, UI_MobileInputControlLayout_o* control, System_String_o* displayName, const MethodInfo* method);
// 0x5c6cf80

void UI_MobileControlsOverlay__RegisterControlDisplayNames_5b6cf80
               (UI_MobileControlsOverlay_o *__this,int32_t role,UI_MobileInputControlLayout_o *control,
               System_String_o *displayName,MethodInfo *method)

{
  System_String_o *value;
  bool bVar1;
  System_String_array *actionIds;
  undefined4 in_register_00000034;
  MethodInfo *method_00;
  int32_t local_2c;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000034,role);
  if (Il2CppMethodInitialized_075478c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBridge);
    il2cpp_codegen_initialize_runtime_metadata(&"Human.HookRight");
    il2cpp_codegen_initialize_runtime_metadata(&"Human.HookLeft");
    Il2CppMethodInitialized_075478c6 = '\x01';
  }
  if (control != (UI_MobileInputControlLayout_o *)0x0) {
    actionIds = UI_MobileInputControlLayout__GetActionIds(control,method_00);
    if ((TypeInfo_Settings_MobileInputBridge->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBridge);
    }
    Settings_MobileInputBridge__RegisterActionDisplayNames(actionIds,role,displayName,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_07547919 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Enum_TryParse_MobileInputControlKind);
      Il2CppMethodInitialized_07547919 = '\x01';
    }
    local_2c = 0;
    value = (control->fields).Kind;
    if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_07556760);
    }
    bVar1 = System_Enum__TryParse_Int32Enum_
                      (value,&local_2c,
                       (MethodInfo_34DC610 *)MethodInfo_System_Enum_TryParse_MobileInputControlKind);
    if ((bVar1) && (local_2c == 3)) {
      if ((TypeInfo_Settings_MobileInputBridge->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBridge);
      }
      Settings_MobileInputBridge__RegisterActionDisplayName
                ("Human.HookLeft",role,displayName,(MethodInfo *)0x0);
      Settings_MobileInputBridge__RegisterActionDisplayName
                ("Human.HookRight",role,displayName,(MethodInfo *)0x0);
    }
  }
  return;
}


// UI.MobileControlsOverlay$$GetPopupChildDisplayName
// il2cpp: System_String_o* UI_MobileControlsOverlay__GetPopupChildDisplayName (UI_MobileControlsOverlay_o* __this, UI_MobileInputControlLayout_o* popupControl, UI_MobileInputControlLayout_o* childControl, const MethodInfo* method);
// 0x5c6ced0

System_String_o *
UI_MobileControlsOverlay__GetPopupChildDisplayName
          (UI_MobileControlsOverlay_o *__this,UI_MobileInputControlLayout_o *popupControl,
          UI_MobileInputControlLayout_o *childControl,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_075478c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"[");
    il2cpp_codegen_initialize_runtime_metadata(&"]");
    Il2CppMethodInitialized_075478c7 = '\x01';
  }
  if (popupControl != (UI_MobileInputControlLayout_o *)0x0) {
    bVar1 = System_String__IsNullOrWhiteSpace((popupControl->fields).Label,(MethodInfo *)0x0);
    if (!bVar1) {
      if (childControl != (UI_MobileInputControlLayout_o *)0x0) {
        bVar1 = System_String__IsNullOrWhiteSpace((childControl->fields).Label,(MethodInfo *)0x0);
        if (!bVar1) {
          pSVar2 = System_String__Concat_5302810
                             ((popupControl->fields).Label,"[",(childControl->fields).Label,
                              "]",(MethodInfo *)0x0);
          return pSVar2;
        }
      }
      return (popupControl->fields).Label;
    }
  }
  if (childControl == (UI_MobileInputControlLayout_o *)0x0) {
    return (System_String_o *)0x0;
  }
  return (childControl->fields).Label;
}


// UI.MobileControlsOverlay$$RegisterMoveJoystickDisplayNames
// il2cpp: void UI_MobileControlsOverlay__RegisterMoveJoystickDisplayNames (UI_MobileControlsOverlay_o* __this, int32_t role, const MethodInfo* method);
// 0x5c68d90
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c68e50: cmp byte ptr [rip + 0x18deb0f], 0
// asm:   0x5c68e57: je 0x5c68fc1

void UI_MobileControlsOverlay__RegisterMoveJoystickDisplayNames
               (UI_MobileControlsOverlay_o *__this,int32_t role,MethodInfo *method)

{
  uint32_t uVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  MethodInfo *pMVar5;
  UI_MobileControlsOverlay_o *pUVar6;
  System_Enum_o SStack_38;
  undefined4 uStack_28;
  
  if (Il2CppMethodInitialized_075478c8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBindingRegistry);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_MobileInputBridge);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputControlKind);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Right");
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    il2cpp_codegen_initialize_runtime_metadata(&"Forward");
    il2cpp_codegen_initialize_runtime_metadata(&"Left");
    Il2CppMethodInitialized_075478c8 = '\x01';
  }
  SStack_38.klass = (System_Enum_c *)TypeInfo_UI_MobileInputControlKind;
  SStack_38.monitor = (void *)0xffffffffffffffff;
  uStack_28 = 6;
  pSVar2 = System_Enum__ToString(&SStack_38,(MethodInfo *)0x0);
  if ((TypeInfo_UI_MobileInputLayoutManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLayoutManager);
  }
  if (Il2CppMethodInitialized_07547966 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"MobileLayout.Kind");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547966 = '\x01';
    uVar1 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_UI_UIManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pMVar5 = (MethodInfo *)"";
  pSVar2 = UI_UIManager__GetLocale
                     ("SettingsPopup","MobileLayout.Kind",pSVar2,"",pSVar2,
                      (MethodInfo *)0x0);
  if ((TypeInfo_Settings_MobileInputBindingRegistry->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBindingRegistry);
  }
  pUVar6 = (UI_MobileControlsOverlay_o *)(ulong)(uint)role;
  pSVar3 = Settings_MobileInputBindingRegistry__GetMovementId(role,"Forward",(MethodInfo *)0x0);
  pSVar4 = UI_MobileControlsOverlay__GetMoveJoystickDisplayName(pUVar6,pSVar2,"Forward",pMVar5);
  if ((TypeInfo_Settings_MobileInputBridge->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Settings_MobileInputBridge);
  }
  pMVar5 = (MethodInfo *)0x0;
  Settings_MobileInputBridge__RegisterActionDisplayName(pSVar3,role,pSVar4,(MethodInfo *)0x0);
  pUVar6 = (UI_MobileControlsOverlay_o *)(ulong)(uint)role;
  pSVar3 = Settings_MobileInputBindingRegistry__GetMovementId(role,"Back",(MethodInfo *)0x0);
  pSVar4 = UI_MobileControlsOverlay__GetMoveJoystickDisplayName(pUVar6,pSVar2,"Back",pMVar5);
  pMVar5 = (MethodInfo *)0x0;
  Settings_MobileInputBridge__RegisterActionDisplayName(pSVar3,role,pSVar4,(MethodInfo *)0x0);
  pUVar6 = (UI_MobileControlsOverlay_o *)(ulong)(uint)role;
  pSVar3 = Settings_MobileInputBindingRegistry__GetMovementId(role,"Left",(MethodInfo *)0x0);
  pSVar4 = UI_MobileControlsOverlay__GetMoveJoystickDisplayName(pUVar6,pSVar2,"Left",pMVar5);
  pMVar5 = (MethodInfo *)0x0;
  Settings_MobileInputBridge__RegisterActionDisplayName(pSVar3,role,pSVar4,(MethodInfo *)0x0);
  pUVar6 = (UI_MobileControlsOverlay_o *)(ulong)(uint)role;
  pSVar3 = Settings_MobileInputBindingRegistry__GetMovementId(role,"Right",(MethodInfo *)0x0);
  pSVar2 = UI_MobileControlsOverlay__GetMoveJoystickDisplayName(pUVar6,pSVar2,"Right",pMVar5);
  Settings_MobileInputBridge__RegisterActionDisplayName(pSVar3,role,pSVar2,(MethodInfo *)0x0);
  return;
}


// UI.MobileControlsOverlay$$GetMoveJoystickDisplayName
// il2cpp: System_String_o* UI_MobileControlsOverlay__GetMoveJoystickDisplayName (UI_MobileControlsOverlay_o* __this, System_String_o* joystickName, System_String_o* direction, const MethodInfo* method);
// 0x5c6d240

System_String_o *
UI_MobileControlsOverlay__GetMoveJoystickDisplayName
          (UI_MobileControlsOverlay_o *__this,System_String_o *joystickName,System_String_o *direction,
          MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_075478c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Keybinds");
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditorSettings");
    il2cpp_codegen_initialize_runtime_metadata(&"[");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"]");
    Il2CppMethodInitialized_075478c9 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("MapEditorSettings","Keybinds",direction,"",
                      "",(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_5302810
                     (joystickName,"[",pSVar1,"]",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.MobileControlsOverlay$$GetLayoutPosition
// il2cpp: UnityEngine_Vector2_o UI_MobileControlsOverlay__GetLayoutPosition (UI_MobileControlsOverlay_o* __this, UnityEngine_RectTransform_o* parent, UI_MobileInputControlLayout_o* control, const MethodInfo* method);
// 0x5c67db0

UnityEngine_Vector2_o
UI_MobileControlsOverlay__GetLayoutPosition
          (UI_MobileControlsOverlay_o *__this,UnityEngine_RectTransform_o *parent,
          UI_MobileInputControlLayout_o *control,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_Vector2_o UVar3;
  UnityEngine_Vector2_o UVar4;
  
  UVar3 = UI_MobileControlsOverlay__GetLayoutReferenceSize(__this,parent,(MethodInfo *)control);
  if (control == (UI_MobileInputControlLayout_o *)0x0) {
    ThrowNullReferenceException();
  }
  uVar1 = (control->fields).X;
  uVar2 = (control->fields).Y;
  UVar4.fields.x = UVar3.fields.x * ((float)uVar1 + -0.5);
  UVar4.fields.y = UVar3.fields.y * ((float)uVar2 + -0.5);
  return (UnityEngine_Vector2_o)UVar4.fields;
}


// UI.MobileControlsOverlay$$GetPopupChildLayoutPosition
// il2cpp: UnityEngine_Vector2_o UI_MobileControlsOverlay__GetPopupChildLayoutPosition (UI_MobileControlsOverlay_o* __this, UnityEngine_RectTransform_o* parent, UI_MobileInputControlLayout_o* popupControl, UI_MobileInputControlLayout_o* childControl, const MethodInfo* method);
// 0x5c6ce50

UnityEngine_Vector2_o
UI_MobileControlsOverlay__GetPopupChildLayoutPosition
          (UI_MobileControlsOverlay_o *__this,UnityEngine_RectTransform_o *parent,
          UI_MobileInputControlLayout_o *popupControl,UI_MobileInputControlLayout_o *childControl,
          MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  UnityEngine_Vector2_o UVar5;
  UnityEngine_Vector2_o UVar6;
  MethodInfo *method_00;
  float fVar7;
  float fStack_28;
  float fStack_24;
  
  UVar5 = UI_MobileControlsOverlay__GetLayoutReferenceSize(__this,parent,(MethodInfo *)popupControl);
  UVar6 = UI_MobileControlsOverlay__GetLayoutReferenceSize(__this,parent,method_00);
  if ((popupControl == (UI_MobileInputControlLayout_o *)0x0) ||
     (childControl == (UI_MobileInputControlLayout_o *)0x0)) {
    ThrowNullReferenceException();
  }
  fStack_28 = UVar5.fields.x;
  fStack_24 = UVar5.fields.y;
  if (fStack_24 <= fStack_28) {
    fStack_28 = fStack_24;
  }
  fVar7 = 1.0;
  if (1.0 <= fStack_28) {
    fVar7 = fStack_28;
  }
  uVar1 = (popupControl->fields).X;
  uVar3 = (popupControl->fields).Y;
  uVar2 = (childControl->fields).X;
  uVar4 = (childControl->fields).Y;
  UVar5.fields.y = fVar7 * (float)uVar4 + UVar6.fields.y * ((float)uVar3 + -0.5);
  UVar5.fields.x = fVar7 * (float)uVar2 + UVar6.fields.x * ((float)uVar1 + -0.5);
  return (UnityEngine_Vector2_o)UVar5.fields;
}


// UI.MobileControlsOverlay$$GetLayoutSize
// il2cpp: UnityEngine_Vector2_o UI_MobileControlsOverlay__GetLayoutSize (UI_MobileControlsOverlay_o* __this, UnityEngine_RectTransform_o* parent, UI_MobileInputControlLayout_o* control, const MethodInfo* method);
// 0x5c67d60

UnityEngine_Vector2_o
UI_MobileControlsOverlay__GetLayoutSize
          (UI_MobileControlsOverlay_o *__this,UnityEngine_RectTransform_o *parent,
          UI_MobileInputControlLayout_o *control,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_Vector2_o UVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  
  UVar3 = UI_MobileControlsOverlay__GetLayoutReferenceSize(__this,parent,(MethodInfo *)control);
  if (control == (UI_MobileInputControlLayout_o *)0x0) {
    ThrowNullReferenceException();
  }
  fVar4 = UVar3.fields.x;
  if (UVar3.fields.y <= UVar3.fields.x) {
    fVar4 = UVar3.fields.y;
  }
  fVar5 = 1.0;
  if (1.0 <= fVar4) {
    fVar5 = fVar4;
  }
  uVar1 = (control->fields).Width;
  uVar2 = (control->fields).Height;
  auVar6._4_4_ = uVar2;
  auVar6._0_4_ = uVar1;
  auVar6._8_8_ = 0;
  auVar6 = maxps(_DAT_0100a840,auVar6);
  UVar3.fields.y = fVar5 * auVar6._4_4_;
  UVar3.fields.x = fVar5 * auVar6._0_4_;
  return (UnityEngine_Vector2_o)UVar3.fields;
}


// UI.MobileControlsOverlay$$GetLayoutReferenceSize
// il2cpp: UnityEngine_Vector2_o UI_MobileControlsOverlay__GetLayoutReferenceSize (UI_MobileControlsOverlay_o* __this, UnityEngine_RectTransform_o* rect, const MethodInfo* method);
// 0x5c6d310

UnityEngine_Vector2_o
UI_MobileControlsOverlay__GetLayoutReferenceSize
          (UI_MobileControlsOverlay_o *__this,UnityEngine_RectTransform_o *rect,MethodInfo *method)

{
  UnityEngine_Vector2_o UVar1;
  bool bVar2;
  UnityEngine_Canvas_o *__this_00;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  UnityEngine_Rect_o UVar6;
  undefined1 local_28 [16];
  
  if (Il2CppMethodInitialized_075478ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponentInParent_Canvas);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_075478ca = '\x01';
  }
  if (rect == (UnityEngine_RectTransform_o *)0x0) {
label_05c6d42a:
    ThrowNullReferenceException();
  }
  __this_00 = UnityEngine_Component__GetComponentInParent_object__34b0d00
                        ((UnityEngine_Component_o *)rect,
                         (MethodInfo_34B0D00 *)MethodInfo_UnityEngine_Component_GetComponentInParent_Canvas);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    if (__this_00 == (UnityEngine_Canvas_o *)0x0) goto label_05c6d42a;
    fVar3 = UnityEngine_Canvas__get_scaleFactor(__this_00,(MethodInfo *)0x0);
    local_28._8_4_ = 0;
    local_28._12_4_ = 0;
    if (0.0 < fVar3) {
      UVar6 = UnityEngine_Canvas__get_pixelRect(__this_00,(MethodInfo *)0x0);
      local_28._0_8_ = UVar6.fields._8_8_;
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      }
      fVar3 = UnityEngine_Canvas__get_scaleFactor(__this_00,(MethodInfo *)0x0);
      auVar5._4_4_ = fVar3;
      auVar5._0_4_ = fVar3;
      auVar5._8_4_ = fVar3;
      auVar5._12_4_ = fVar3;
      auVar5 = divps(local_28,auVar5);
      fVar3 = auVar5._0_4_;
      fVar4 = auVar5._4_4_;
      goto label_05c6d3ed;
    }
  }
  UVar6 = UnityEngine_RectTransform__get_rect(rect,(MethodInfo *)0x0);
  fVar3 = UVar6.fields.m_Width;
  fVar4 = UVar6.fields.m_Height;
  if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    return (UnityEngine_Vector2_o)UVar6.fields._8_8_;
  }
label_05c6d3ed:
  UVar1.fields.y = fVar4;
  UVar1.fields.x = fVar3;
  return (UnityEngine_Vector2_o)UVar1.fields;
}


// UI.MobileControlsOverlay$$RegisterButtonRect
// il2cpp: void UI_MobileControlsOverlay__RegisterButtonRect (UI_MobileControlsOverlay_o* __this, UnityEngine_RectTransform_o* rect, UI_MobileInputControlLayout_o* control, const MethodInfo* method);
// 0x5c68430

void UI_MobileControlsOverlay__RegisterButtonRect
               (UI_MobileControlsOverlay_o *__this,UnityEngine_RectTransform_o *rect,
               UI_MobileInputControlLayout_o *control,MethodInfo *method)

{
  bool bVar1;
  UI_MobileInputLookAreaForwarder_o *x;
  UnityEngine_GameObject_o *__this_00;
  
  if (Il2CppMethodInitialized_075478cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_MobileInputLookAreaForwarder);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_MobileInputLookAreaForwarder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075478cb = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((control == (UI_MobileInputControlLayout_o *)0x0) || (bVar1)) ||
     ((control->fields).AllowLookAreaThrough == false)) {
    return;
  }
  if (rect != (UnityEngine_RectTransform_o *)0x0) {
    x = UnityEngine_Component__GetComponent_object_
                  ((UnityEngine_Component_o *)rect,
                   (MethodInfo_34B0830 *)
                   MethodInfo_UnityEngine_Component_GetComponent_MobileInputLookAreaForwarder);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)rect,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__AddComponent_object_
                (__this_00,
                 (MethodInfo_353B6A0 *)
                 MethodInfo_UnityEngine_GameObject_AddComponent_MobileInputLookAreaForwarder);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MobileControlsOverlay$$AddButtonLabel
// il2cpp: UnityEngine_RectTransform_o* UI_MobileControlsOverlay__AddButtonLabel (UI_MobileControlsOverlay_o* __this, UnityEngine_RectTransform_o* parent, UI_MobileInputControlLayout_o* control, UnityEngine_Vector2_o size, const MethodInfo* method);
// 0x5c6a7c0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c6a8b3: movaps xmm0, xmmword ptr [rsp + 0x10]
// asm:   0x5c6a8f7: cmp byte ptr [rip + 0x18dd05a], 0
// asm:   0x5c6a8fe: jne 0x5c6a91f
// asm:   0x5c6ab2f: jmp 0x5c6a91f

UnityEngine_RectTransform_o *
UI_MobileControlsOverlay__AddButtonLabel
          (UI_MobileControlsOverlay_o *__this,UnityEngine_RectTransform_o *parent,
          UI_MobileInputControlLayout_o *control,UnityEngine_Vector2_o size,MethodInfo *method)

{
  UnityEngine_Vector2_Fields anchorMin;
  UnityEngine_Vector2_Fields UVar1;
  uint32_t uVar2;
  Settings_GeneralSettings_o *pSVar3;
  Settings_BoolSetting_o *pSVar4;
  System_String_o *pSVar5;
  UnityEngine_Vector2_o anchorMax;
  UnityEngine_Color_o UVar6;
  UnityEngine_Color_o UVar7;
  bool bVar8;
  UnityEngine_Vector2_StaticFields *pUVar9;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *parent_00;
  TMPro_TMP_Text_o *__this_01;
  UI_MobileInputSkin_o *__this_02;
  UnityEngine_UI_Image_o *__this_03;
  UnityEngine_Sprite_o *value;
  UnityEngine_RectTransform_o *pUVar10;
  MethodInfo *pMVar11;
  System_String_o **ppSVar12;
  UnityEngine_Vector2_c **__this_04;
  MethodInfo *method_00;
  double x;
  double dVar13;
  UnityEngine_Vector2_o value_00;
  undefined1 auVar14 [12];
  float fVar15;
  float fVar16;
  float local_68;
  float fStack_64;
  Il2CppMethodPointer local_40;
  UnityEngine_Vector2_Fields local_38;
  InvokerMethod pIStack_30;
  
  __this_04 = (UnityEngine_Vector2_c **)__this;
  if (Il2CppMethodInitialized_075478cc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgMobileUi);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileControlSkinManager);
    ppSVar12 = &"Label";
    il2cpp_codegen_initialize_runtime_metadata(&"Label");
    Il2CppMethodInitialized_075478cc = '\x01';
    __this_04 = (UnityEngine_Vector2_c **)ppSVar12;
  }
  if (Il2CppMethodInitialized_0753ecc8 == '\0') {
    __this_04 = &TypeInfo_UnityEngine_Vector2;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0753ecc8 = '\x01';
  }
  pUVar9 = TypeInfo_UnityEngine_Vector2->static_fields;
  anchorMin = (pUVar9->zeroVector).fields;
  if (Il2CppMethodInitialized_07542885 == '\0') {
    __this_04 = &TypeInfo_UnityEngine_Vector2;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_07542885 = '\x01';
    pUVar9 = TypeInfo_UnityEngine_Vector2->static_fields;
    UVar1 = (pUVar9->oneVector).fields;
    fVar15 = UVar1.x;
    fVar16 = UVar1.y;
    if (Il2CppMethodInitialized_0753ecc8 == '\0') {
      __this_04 = &TypeInfo_UnityEngine_Vector2;
      pIStack_30 = (InvokerMethod)0x0;
      local_38 = UVar1;
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_0753ecc8 = '\x01';
      pUVar9 = TypeInfo_UnityEngine_Vector2->static_fields;
      fVar15 = local_38.x;
      fVar16 = local_38.y;
    }
  }
  else {
    UVar1 = (pUVar9->oneVector).fields;
    fVar15 = UVar1.x;
    fVar16 = UVar1.y;
  }
  UVar1 = (pUVar9->zeroVector).fields;
  anchorMax.fields.y = fVar16;
  anchorMax.fields.x = fVar15;
  __this_00 = UI_MobileControlsOverlay__CreateRect
                        ((UI_MobileControlsOverlay_o *)__this_04,"Label",parent,
                         (UnityEngine_Vector2_o)anchorMin,anchorMax,(UnityEngine_Vector2_o)UVar1,
                         (UnityEngine_Vector2_o)UVar1,method);
  if (control == (UI_MobileInputControlLayout_o *)0x0) goto label_05c6ad39;
  if (Il2CppMethodInitialized_07547923 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputSkin);
    Il2CppMethodInitialized_07547923 = '\x01';
    __this_02 = (control->fields).Icon;
  }
  else {
    __this_02 = (control->fields).Icon;
  }
  if (__this_02 == (UI_MobileInputSkin_o *)0x0) {
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileInputSkin);
    (__this_02->fields).Image = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    Il2CppCodeGenWriteBarrier(&(__this_02->fields).Image);
    (__this_02->fields).PreserveAspect = true;
    System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
    (__this_02->fields).R = 1.0;
    (__this_02->fields).G = 1.0;
    (__this_02->fields).B = 1.0;
    (__this_02->fields).A = 0.9;
  }
  if (Il2CppMethodInitialized_07547958 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_07547958 = '\x01';
  }
  pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
  local_68 = size.fields.x;
  fStack_64 = size.fields.y;
  if (pSVar3 == (Settings_GeneralSettings_o *)0x0) {
label_05c6a94f:
    bVar8 = System_String__IsNullOrWhiteSpace((__this_02->fields).Image,(MethodInfo *)0x0);
    if (!bVar8) {
      if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
        pMVar11 = MethodInfo_UnityEngine_GameObject_AddComponent_Image;
        __this_03 = UnityEngine_GameObject__AddComponent_object_
                              (__this_00,
                               (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_Image);
        pSVar5 = (__this_02->fields).Image;
        if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
        }
        value = UI_MobileControlSkinManager__GetSprite(pSVar5,pMVar11);
        if (__this_03 != (UnityEngine_UI_Image_o *)0x0) {
          UnityEngine_UI_Image__set_sprite(__this_03,value,(MethodInfo *)0x0);
          UnityEngine_UI_Image__set_preserveAspect
                    (__this_03,(__this_02->fields).PreserveAspect,(MethodInfo *)0x0);
          UVar7.fields.r = (__this_02->fields).R;
          UVar7.fields.g = (__this_02->fields).G;
          UVar7.fields.b = (__this_02->fields).B;
          UVar7.fields.a = (__this_02->fields).A;
          (*(__this_03->klass->vtable)._23_set_color.methodPtr)
                    (__this_03,UVar7,(__this_03->klass->vtable)._23_set_color.method);
          (*(__this_03->klass->vtable)._25_set_raycastTarget.methodPtr)
                    (__this_03,false,(__this_03->klass->vtable)._25_set_raycastTarget.method);
          pUVar10 = UnityEngine_GameObject__GetComponent_object_
                              (__this_00,
                               (MethodInfo_353B730 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
          if (pUVar10 != (UnityEngine_RectTransform_o *)0x0) {
            if (fStack_64 <= local_68) {
              local_68 = fStack_64;
            }
            fVar15 = (control->fields).IconSize;
            fVar16 = 2.0;
            if (fVar15 <= 2.0) {
              fVar16 = fVar15;
            }
            value_00.fields.x =
                 (float)(~-(uint)(0.0 <= fVar15) & 0x3f800000 | (uint)(1.0 - fVar16) & -(uint)(0.0 <= fVar15))
                 * local_68 * 0.5;
            value_00.fields.y = value_00.fields.x;
            UnityEngine_RectTransform__set_offsetMin(pUVar10,value_00,(MethodInfo *)0x0);
            UnityEngine_RectTransform__set_offsetMax
                      (pUVar10,(UnityEngine_Vector2_o)((ulong)value_00.fields ^ 0x8000000080000000),
                       (MethodInfo *)0x0);
            return pUVar10;
          }
        }
      }
      goto label_05c6ad39;
    }
  }
  else {
    pSVar4 = (pSVar3->fields).MobileButtonIcons;
    if (pSVar4 == (Settings_BoolSetting_o *)0x0) goto label_05c6ad39;
    if ((pSVar4->fields)._value != false) goto label_05c6a94f;
  }
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    parent_00 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    pSVar5 = (control->fields).Label;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgMobileUi->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMobileUi);
    }
    __this_01 = Gisketch_Aottg2UI_Game_AottgMobileUi__AddText(parent_00,pSVar5,(MethodInfo *)0x0);
    if (__this_01 != (TMPro_TMP_Text_o *)0x0) {
      (*(__this_01->klass->vtable)._66_set_text.methodPtr)
                (__this_01,(control->fields).Label,(__this_01->klass->vtable)._66_set_text.method);
      TMPro_TMP_Text__set_alignment(__this_01,0x202,(MethodInfo *)0x0);
      UVar6.fields.r = (__this_02->fields).R;
      UVar6.fields.g = (__this_02->fields).G;
      UVar6.fields.b = (__this_02->fields).B;
      UVar6.fields.a = (__this_02->fields).A;
      pMVar11 = (__this_01->klass->vtable)._23_set_color.method;
      (*(__this_01->klass->vtable)._23_set_color.methodPtr)(__this_01,UVar6,pMVar11);
      if (fStack_64 <= local_68) {
        local_68 = fStack_64;
      }
      local_68 = local_68 * 0.28;
      auVar14 = ZEXT812(0x41f00000);
      if (local_68 <= auVar14._0_4_) {
        auVar14._4_8_ = auVar14._4_8_;
        auVar14._0_4_ = local_68;
      }
      local_68 = (float)(~-(uint)(18.0 <= local_68) & 0x41900000 | auVar14._0_4_ & -(uint)(18.0 <= local_68));
      if (Il2CppMethodInitialized_07541320 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        Il2CppMethodInitialized_07541320 = '\x01';
        uVar2 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
      }
      else {
        uVar2 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
      }
      if (uVar2 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      x = (double)local_68;
      method_00 = (MethodInfo *)&local_40;
      dVar13 = modf(x,(double *)method_00,pMVar11);
      if (0.0 <= local_68) {
        if ((dVar13 != 0.5) || (NAN(dVar13))) {
          local_40 = (Il2CppMethodPointer)floor(x + 0.5,method_00);
        }
        else if (((long)(double)local_40 & 1U) != 0) {
          local_40 = (Il2CppMethodPointer)((double)local_40 + 1.0);
        }
      }
      else if ((dVar13 != -0.5) || (NAN(dVar13))) {
        local_40 = (Il2CppMethodPointer)ceil(x + -0.5,method_00);
      }
      else if (((long)(double)local_40 & 1U) != 0) {
        local_40 = (Il2CppMethodPointer)((double)local_40 + -1.0);
      }
      TMPro_TMP_Text__set_fontSize(__this_01,(float)(int)(double)local_40,(MethodInfo *)0x0);
      (*(__this_01->klass->vtable)._25_set_raycastTarget.methodPtr)
                (__this_01,false,(__this_01->klass->vtable)._25_set_raycastTarget.method);
      pUVar10 = UnityEngine_GameObject__GetComponent_object_
                          (__this_00,
                           (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform)
      ;
      return pUVar10;
    }
  }
label_05c6ad39:
  ThrowNullReferenceException();
}


// UI.MobileControlsOverlay$$CreateRect
// il2cpp: UnityEngine_GameObject_o* UI_MobileControlsOverlay__CreateRect (UI_MobileControlsOverlay_o* __this, System_String_o* name, UnityEngine_RectTransform_o* parent, UnityEngine_Vector2_o anchorMin, UnityEngine_Vector2_o anchorMax, UnityEngine_Vector2_o size, UnityEngine_Vector2_o anchoredPosition, const MethodInfo* method);
// 0x5c638e0

UnityEngine_GameObject_o *
UI_MobileControlsOverlay__CreateRect
          (UI_MobileControlsOverlay_o *__this,System_String_o *name,UnityEngine_RectTransform_o *parent,
          UnityEngine_Vector2_o anchorMin,UnityEngine_Vector2_o anchorMax,UnityEngine_Vector2_o size,
          UnityEngine_Vector2_o anchoredPosition,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_Vector2_StaticFields *pUVar2;
  float local_58;
  float fStack_54;
  float local_48;
  float fStack_44;
  
  if (Il2CppMethodInitialized_075478cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgMobileUi);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    Il2CppMethodInitialized_075478cd = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgMobileUi->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMobileUi);
  }
  __this_00 = Gisketch_Aottg2UI_Game_AottgMobileUi__CreateRect
                        ((UnityEngine_Transform_o *)parent,name,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    __this_01 = UnityEngine_GameObject__GetComponent_object_
                          (__this_00,
                           (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform)
    ;
    if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
      UnityEngine_Transform__SetParent_692d510
                ((UnityEngine_Transform_o *)__this_01,(UnityEngine_Transform_o *)parent,false,
                 (MethodInfo *)0x0);
      UnityEngine_RectTransform__set_anchorMin(__this_01,anchorMin,(MethodInfo *)0x0);
      UnityEngine_RectTransform__set_anchorMax(__this_01,anchorMax,(MethodInfo *)0x0);
      UnityEngine_RectTransform__set_sizeDelta(__this_01,size,(MethodInfo *)0x0);
      UnityEngine_RectTransform__set_anchoredPosition(__this_01,anchoredPosition,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_0753ecc8 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_0753ecc8 = '\x01';
      }
      pUVar2 = TypeInfo_UnityEngine_Vector2->static_fields;
      UVar1 = (pUVar2->zeroVector).fields;
      local_48 = anchorMin.fields.x;
      fStack_44 = anchorMin.fields.y;
      local_48 = local_48 - UVar1.x;
      fStack_44 = fStack_44 - UVar1.y;
      if (fStack_44 * fStack_44 + local_48 * local_48 < 9.9999994e-11) {
        if (Il2CppMethodInitialized_07542885 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
          Il2CppMethodInitialized_07542885 = '\x01';
          pUVar2 = TypeInfo_UnityEngine_Vector2->static_fields;
        }
        UVar1 = (pUVar2->oneVector).fields;
        local_58 = anchorMax.fields.x;
        fStack_54 = anchorMax.fields.y;
        local_58 = local_58 - UVar1.x;
        fStack_54 = fStack_54 - UVar1.y;
        if (fStack_54 * fStack_54 + local_58 * local_58 < 9.9999994e-11) {
          if (Il2CppMethodInitialized_0753ecc8 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
            Il2CppMethodInitialized_0753ecc8 = '\x01';
            pUVar2 = TypeInfo_UnityEngine_Vector2->static_fields;
          }
          UnityEngine_RectTransform__set_offsetMin
                    (__this_01,(UnityEngine_Vector2_o)(pUVar2->zeroVector).fields,(MethodInfo *)0x0);
          if (Il2CppMethodInitialized_0753ecc8 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
            Il2CppMethodInitialized_0753ecc8 = '\x01';
          }
          UnityEngine_RectTransform__set_offsetMax
                    (__this_01,
                     (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                     (MethodInfo *)0x0);
        }
      }
      return __this_00;
    }
  }
  ThrowNullReferenceException();
}


// UI.MobileControlsOverlay$$ScalePosition
// il2cpp: UnityEngine_Vector2_o UI_MobileControlsOverlay__ScalePosition (UI_MobileControlsOverlay_o* __this, UnityEngine_Vector2_o position, const MethodInfo* method);
// 0x5c67e20

UnityEngine_Vector2_o
UI_MobileControlsOverlay__ScalePosition
          (UI_MobileControlsOverlay_o *__this,UnityEngine_Vector2_o position,MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector2_Fields UVar2;
  float local_18;
  float fStack_14;
  
  fVar1 = UI_MobileControlsOverlay__GetReferenceScale(__this,method);
  fVar1 = (float)((uint)fVar1 & -(uint)(0.0 < fVar1) | ~-(uint)(0.0 < fVar1) & 0x3f800000);
  local_18 = position.fields.x;
  fStack_14 = position.fields.y;
  UVar2.x = fVar1 * local_18;
  UVar2.y = fVar1 * fStack_14;
  return (UnityEngine_Vector2_o)UVar2;
}


// UI.MobileControlsOverlay$$ScaleSize
// il2cpp: UnityEngine_Vector2_o UI_MobileControlsOverlay__ScaleSize (UI_MobileControlsOverlay_o* __this, UnityEngine_Vector2_o size, const MethodInfo* method);
// 0x5c67de0

UnityEngine_Vector2_o
UI_MobileControlsOverlay__ScaleSize
          (UI_MobileControlsOverlay_o *__this,UnityEngine_Vector2_o size,MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector2_Fields UVar2;
  float fStack_18;
  float fStack_14;
  
  fVar1 = UI_MobileControlsOverlay__GetReferenceScale(__this,method);
  fVar1 = (float)((uint)fVar1 & -(uint)(0.0 < fVar1) | ~-(uint)(0.0 < fVar1) & 0x3f800000);
  fStack_18 = size.fields.x;
  fStack_14 = size.fields.y;
  UVar2.x = fVar1 * fStack_18;
  UVar2.y = fVar1 * fStack_14;
  return (UnityEngine_Vector2_o)UVar2;
}


// UI.MobileControlsOverlay$$ScaleReferenceVector
// il2cpp: UnityEngine_Vector2_o UI_MobileControlsOverlay__ScaleReferenceVector (UI_MobileControlsOverlay_o* __this, UnityEngine_Vector2_o value, const MethodInfo* method);
// 0x5c6d670

UnityEngine_Vector2_o
UI_MobileControlsOverlay__ScaleReferenceVector
          (UI_MobileControlsOverlay_o *__this,UnityEngine_Vector2_o value,MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector2_Fields UVar2;
  float local_18;
  float fStack_14;
  
  fVar1 = UI_MobileControlsOverlay__GetReferenceScale(__this,method);
  fVar1 = (float)((uint)fVar1 & -(uint)(0.0 < fVar1) | ~-(uint)(0.0 < fVar1) & 0x3f800000);
  local_18 = value.fields.x;
  fStack_14 = value.fields.y;
  UVar2.x = fVar1 * local_18;
  UVar2.y = fVar1 * fStack_14;
  return (UnityEngine_Vector2_o)UVar2;
}


// UI.MobileControlsOverlay$$ScaleReferenceLength
// il2cpp: float UI_MobileControlsOverlay__ScaleReferenceLength (UI_MobileControlsOverlay_o* __this, float value, const MethodInfo* method);
// 0x5c685a0

float UI_MobileControlsOverlay__ScaleReferenceLength
                (UI_MobileControlsOverlay_o *__this,float value,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = UI_MobileControlsOverlay__GetReferenceScale(__this,method);
  return fVar1 * value;
}


// UI.MobileControlsOverlay$$GetReferenceScale
// il2cpp: float UI_MobileControlsOverlay__GetReferenceScale (UI_MobileControlsOverlay_o* __this, const MethodInfo* method);
// 0x5c6d6b0

float UI_MobileControlsOverlay__GetReferenceScale(UI_MobileControlsOverlay_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_RectTransform_o *rect;
  MethodInfo *method_00;
  UI_InGameMenu_o *pUVar2;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (Il2CppMethodInitialized_075478ce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075478ce = '\x01';
  }
  pUVar2 = (__this->fields)._menu;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar2 = (__this->fields)._menu;
  }
  else {
    pUVar2 = (UI_InGameMenu_o *)(__this->fields)._mapEditorMenu;
  }
  if (pUVar2 == (UI_InGameMenu_o *)0x0) {
    ThrowNullReferenceException();
  }
  rect = UnityEngine_Component__GetComponent_object_
                   ((UnityEngine_Component_o *)pUVar2,
                    (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
  auVar3._0_8_ = UI_MobileControlsOverlay__GetLayoutReferenceSize
                           ((UI_MobileControlsOverlay_o *)pUVar2,rect,method_00);
  auVar3._8_8_ = extraout_XMM0_Qb;
  auVar4 = divps(auVar3,_DAT_0100a420);
  if (auVar4._4_4_ <= auVar4._0_4_) {
    auVar4._0_4_ = auVar4._4_4_;
  }
  return auVar4._0_4_;
}


// UI.MobileControlsOverlay$$.ctor
// il2cpp: void UI_MobileControlsOverlay___ctor (UI_MobileControlsOverlay_o* __this, const MethodInfo* method);
// 0x5c6d750

void UI_MobileControlsOverlay___ctor(UI_MobileControlsOverlay_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GameObject__o *pSVar1;
  System_Collections_Generic_List_MobileInputJoystick__o *__this_00;
  
  if (Il2CppMethodInitialized_075478cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GameObject_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MobileInputJoystick_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_MobileInputJoystick);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_GameObject);
    Il2CppMethodInitialized_075478cf = '\x01';
  }
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_GameObject_ctor);
  (__this->fields)._generalButtons = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._generalButtons);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_GameObject_ctor);
  (__this->fields)._humanButtons = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._humanButtons);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_GameObject_ctor);
  (__this->fields)._titanButtons = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._titanButtons);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_GameObject_ctor);
  (__this->fields)._annieShifterButtons = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._annieShifterButtons);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_GameObject_ctor);
  (__this->fields)._erenShifterButtons = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._erenShifterButtons);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_GameObject_ctor);
  (__this->fields)._mapEditorButtons = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._mapEditorButtons);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_GameObject);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_GameObject_ctor);
  (__this->fields)._coreInputControls = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._coreInputControls);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MobileInputJoystick);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_MobileInputJoystick_ctor);
  (__this->fields)._moveJoysticks = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._moveJoysticks);
  (__this->fields)._coreLayoutRole = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


