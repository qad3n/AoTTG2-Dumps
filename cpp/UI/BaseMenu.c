// Type: UI.BaseMenu
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/UI/BaseMenu.cs
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/BaseMenu.cs
// --------------------------------

// UI.BaseMenu.<WaitAndApplyScale>d__17$$.ctor
// il2cpp: void UI_BaseMenu__WaitAndApplyScale_d__17___ctor (UI_BaseMenu__WaitAndApplyScale_d__17_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5cb3310

void UI_BaseMenu__WaitAndApplyScale_d__17___ctor
               (UI_BaseMenu__WaitAndApplyScale_d__17_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.BaseMenu.<WaitAndApplyScale>d__17$$System.IDisposable.Dispose
// il2cpp: void UI_BaseMenu__WaitAndApplyScale_d__17__System_IDisposable_Dispose (UI_BaseMenu__WaitAndApplyScale_d__17_o* __this, const MethodInfo* method);
// 0x5cb3330

void UI_BaseMenu__WaitAndApplyScale_d__17__System_IDisposable_Dispose
               (UI_BaseMenu__WaitAndApplyScale_d__17_o *__this,MethodInfo *method)

{
  return;
}


// UI.BaseMenu.<WaitAndApplyScale>d__17$$MoveNext
// il2cpp: bool UI_BaseMenu__WaitAndApplyScale_d__17__MoveNext (UI_BaseMenu__WaitAndApplyScale_d__17_o* __this, const MethodInfo* method);
// 0x5cb3340
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cb350c: nop dword ptr [rax]

bool UI_BaseMenu__WaitAndApplyScale_d__17__MoveNext
               (UI_BaseMenu__WaitAndApplyScale_d__17_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_BaseMenu_o *__this_00;
  Settings_UISettings_o *__this_01;
  UnityEngine_Vector2_o value;
  int32_t iVar2;
  uint uVar3;
  UnityEngine_UI_CanvasScaler_o *__this_02;
  Il2CppObject *pIVar4;
  UnityEngine_RectTransform_o *__this_03;
  System_Object_array *pSVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  UnityEngine_Vector3_o UVar9;
  
  if (Il2CppMethodInitialized_07547ab1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_CanvasScaler);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_BaseScaler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForEndOfFrame);
    Il2CppMethodInitialized_07547ab1 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar1 == 2) {
    (__this->fields).__1__state = -1;
    if (__this_00 == (UI_BaseMenu_o *)0x0) {
label_05cb3587:
      ThrowNullReferenceException();
    }
    __this_03 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)__this_00,
                           (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    if (__this_03 == (UnityEngine_RectTransform_o *)0x0) goto label_05cb3587;
    UVar9 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)__this_03,(MethodInfo *)0x0);
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    TypeInfo_UI_UIManager->static_fields->CurrentCanvasScale = UVar9.fields.x;
    pSVar5 = UnityEngine_Component__GetComponentsInChildren_object_
                       ((UnityEngine_Component_o *)__this_00,true,
                        (MethodInfo_34B1260 *)
                        MethodInfo_UnityEngine_Component_GetComponentsInChildren_BaseScaler);
    if (pSVar5 == (System_Object_array *)0x0) goto label_05cb3587;
    uVar3 = (uint)pSVar5->max_length;
    uVar6 = 0;
    if ((int)uVar3 < 1) goto label_05cb357c;
    do {
      if (uVar3 <= uVar6) {
        ThrowIndexOutOfRangeException();
      }
      pIVar4 = pSVar5->m_Items[(int)uVar6];
      if (pIVar4 == (Il2CppObject *)0x0) goto label_05cb3587;
      (*pIVar4->klass->vtable[5].methodPtr)(pIVar4,pIVar4->klass->vtable[5].method);
      uVar6 = uVar6 + 1;
      uVar3 = (uint)pSVar5->max_length;
    } while ((int)uVar6 < (int)uVar3);
label_05cb353b:
    uVar6 = 0;
  }
  else {
    if (iVar1 == 1) {
      (__this->fields).__1__state = -1;
      pIVar4 = (Il2CppObject *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
      UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar4,(MethodInfo *)0x0);
      (__this->fields).__2__current = pIVar4;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
      iVar2 = 2;
    }
    else {
      if (iVar1 != 0) goto label_05cb353b;
      (__this->fields).__1__state = -1;
      __this_01 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
      if (__this_01 == (Settings_UISettings_o *)0x0) goto label_05cb3587;
      fVar7 = Settings_UISettings__get_AppliedMasterScale(__this_01,(MethodInfo *)0x0);
      if (__this_00 == (UI_BaseMenu_o *)0x0) goto label_05cb3587;
      iVar1 = (__this->fields).sceneName;
      __this_02 = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)__this_00,
                             (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_CanvasScaler)
      ;
      if (__this_02 == (UnityEngine_UI_CanvasScaler_o *)0x0) goto label_05cb3587;
      fVar8 = 1.0;
      if (3 < iVar1 - 3U) {
        fVar8 = 1.0 / fVar7;
      }
      value.fields.y = fVar8 * 1080.0;
      value.fields.x = fVar8 * 1920.0;
      UnityEngine_UI_CanvasScaler__set_referenceResolution(__this_02,value,(MethodInfo *)0x0);
      pIVar4 = (Il2CppObject *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
      UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar4,(MethodInfo *)0x0);
      (__this->fields).__2__current = pIVar4;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
      iVar2 = 1;
    }
    (__this->fields).__1__state = iVar2;
    uVar6 = 1;
  }
label_05cb357c:
  return SUB41(uVar6,0);
}


// UI.BaseMenu.<WaitAndApplyScale>d__17$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_BaseMenu__WaitAndApplyScale_d__17__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_BaseMenu__WaitAndApplyScale_d__17_o* __this, const MethodInfo* method);
// 0x5cb35a0

Il2CppObject *
UI_BaseMenu__WaitAndApplyScale_d__17__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_BaseMenu__WaitAndApplyScale_d__17_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.BaseMenu.<WaitAndApplyScale>d__17$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_BaseMenu__WaitAndApplyScale_d__17__System_Collections_IEnumerator_Reset (UI_BaseMenu__WaitAndApplyScale_d__17_o* __this, const MethodInfo* method);
// 0x5cb35b0

void UI_BaseMenu__WaitAndApplyScale_d__17__System_Collections_IEnumerator_Reset
               (UI_BaseMenu__WaitAndApplyScale_d__17_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_UI_BaseMenu_WaitAndApplyScale_d__17_System_Collections_IEnumerator_Reset);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// UI.BaseMenu.<WaitAndApplyScale>d__17$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_BaseMenu__WaitAndApplyScale_d__17__System_Collections_IEnumerator_get_Current (UI_BaseMenu__WaitAndApplyScale_d__17_o* __this, const MethodInfo* method);
// 0x5cb35f0

Il2CppObject *
UI_BaseMenu__WaitAndApplyScale_d__17__System_Collections_IEnumerator_get_Current
          (UI_BaseMenu__WaitAndApplyScale_d__17_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.BaseMenu$$Setup
// il2cpp: void UI_BaseMenu__Setup (UI_BaseMenu_o* __this, const MethodInfo* method);
// 0x5cb2270

void UI_BaseMenu__Setup(UI_BaseMenu_o *__this,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Game_AottgMobileMenuSafeArea_o *x;
  UnityEngine_GameObject_o *__this_00;
  
  if (Il2CppMethodInitialized_07547aab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_AottgMobileMenuSafeArea);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgMobileMenuSafeArea);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547aab = '\x01';
  }
  (*(__this->klass->vtable)._5_SetupPopups.methodPtr)(__this,(__this->klass->vtable)._5_SetupPopups.method);
  bVar1 = Utility_MobilePlatformUtility__IsMobileRuntime((MethodInfo *)0x0);
  if (bVar1) {
    x = UnityEngine_Component__GetComponent_object_
                  ((UnityEngine_Component_o *)__this,
                   (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_AottgMobileMenuSafeArea
                  );
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
        ThrowNullReferenceException();
      }
      UnityEngine_GameObject__AddComponent_object_
                (__this_00,
                 (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_AottgMobileMenuSafeArea)
      ;
      return;
    }
  }
  return;
}


// UI.BaseMenu$$ApplyScale
// il2cpp: void UI_BaseMenu__ApplyScale (UI_BaseMenu_o* __this, int32_t sceneName, const MethodInfo* method);
// 0x5cb2340

void UI_BaseMenu__ApplyScale(UI_BaseMenu_o *__this,int32_t sceneName,MethodInfo *method)

{
  UI_BaseMenu__WaitAndApplyScale_d__17_o *__this_00;
  
  if (Il2CppMethodInitialized_07547aac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_BaseMenu_WaitAndApplyScale_d__17);
    Il2CppMethodInitialized_07547aac = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_BaseMenu_WaitAndApplyScale_d__17);
  UI_BaseMenu__WaitAndApplyScale_d__17___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 == (UI_BaseMenu__WaitAndApplyScale_d__17_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).sceneName = sceneName;
  UnityEngine_MonoBehaviour__StartCoroutine_691c390
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
             (MethodInfo *)0x0);
  return;
}


// UI.BaseMenu$$WaitAndApplyScale
// il2cpp: System_Collections_IEnumerator_o* UI_BaseMenu__WaitAndApplyScale (UI_BaseMenu_o* __this, int32_t sceneName, const MethodInfo* method);
// 0x5cb23c0

System_Collections_IEnumerator_o *
UI_BaseMenu__WaitAndApplyScale(UI_BaseMenu_o *__this,int32_t sceneName,MethodInfo *method)

{
  UI_BaseMenu__WaitAndApplyScale_d__17_o *__this_00;
  
  if (Il2CppMethodInitialized_07547aac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_BaseMenu_WaitAndApplyScale_d__17);
    Il2CppMethodInitialized_07547aac = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_BaseMenu_WaitAndApplyScale_d__17);
  UI_BaseMenu__WaitAndApplyScale_d__17___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 == (UI_BaseMenu__WaitAndApplyScale_d__17_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).sceneName = sceneName;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.BaseMenu$$SetupPopups
// il2cpp: void UI_BaseMenu__SetupPopups (UI_BaseMenu_o* __this, const MethodInfo* method);
// 0x5cb2430

void UI_BaseMenu__SetupPopups(UI_BaseMenu_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_BasePopup__o *pSVar3;
  UI_BasePopup_array *pUVar4;
  MethodInfo *pMVar5;
  bool bVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_GameObject_o *pUVar8;
  UI_TooltipPopup_o *pUVar9;
  UI_MessagePopup_o *pUVar10;
  UI_ConfirmPopup_o *pUVar11;
  UI_ExternalLinkPopup_o *pUVar12;
  UI_ColorPickPopup_o *pUVar13;
  UI_Vector3Popup_o *pUVar14;
  UI_ExportPopup_o *pUVar15;
  UI_ImportPopup_o *pUVar16;
  UI_NewImportPopup_o *pUVar17;
  UI_KeybindPopup_o *pUVar18;
  UI_SetNamePopup_o *pUVar19;
  UI_SelectListPopup_o *pUVar20;
  UI_IconPickPopup_o *pUVar21;
  UI_RoleSpritePickPopup_o *pUVar22;
  Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o *x;
  
  if (Il2CppMethodInitialized_07547aad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_AottgExternalLinkDialogHost);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_ColorPickPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_ConfirmPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_ExportPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_ExternalLinkPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_IconPickPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_ImportPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_KeybindPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_MessagePopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_NewImportPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_RoleSpritePickPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_SelectListPopup)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_SetNamePopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Vector3Popup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_ColorPickPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ElementFactory_CreateDefaultPopup_ConfirmPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ElementFactory_CreateDefaultPopup_ExportPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_ExternalLinkPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ElementFactory_CreateDefaultPopup_IconPickPopup)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ElementFactory_CreateDefaultPopup_ImportPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ElementFactory_CreateDefaultPopup_KeybindPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ElementFactory_CreateDefaultPopup_MessagePopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_NewImportPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_RoleSpritePickPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_SelectListPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ElementFactory_CreateDefaultPopup_SetNamePopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ElementFactory_CreateDefaultPopup_Vector3Popup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ElementFactory_CreateTooltipPopup_TooltipPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgExternalLinkDialogHost);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_TooltipPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BasePopup_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547aad = '\x01';
  }
  pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar8 = UI_ElementFactory__CreateTooltipPopup_object_
                     (pUVar7,false,
                      (MethodInfo_34D75C0 *)MethodInfo_UI_ElementFactory_CreateTooltipPopup_TooltipPopup);
  if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
    pUVar9 = UnityEngine_GameObject__GetComponent_object_
                       (pUVar8,(MethodInfo_353B730 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_TooltipPopup);
    (__this->fields).TooltipPopup = pUVar9;
    Il2CppCodeGenWriteBarrier(&(__this->fields).TooltipPopup);
    pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar10 = UI_ElementFactory__CreateDefaultPopup_object_
                        (pUVar7,false,
                         (MethodInfo_34D7290 *)MethodInfo_UI_ElementFactory_CreateDefaultPopup_MessagePopup);
    if (pUVar10 != (UI_MessagePopup_o *)0x0) {
      pUVar10 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar10,
                           (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_MessagePopup);
      (__this->fields).MessagePopup = pUVar10;
      Il2CppCodeGenWriteBarrier(&(__this->fields).MessagePopup);
      pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      pUVar11 = UI_ElementFactory__CreateDefaultPopup_object_
                          (pUVar7,false,
                           (MethodInfo_34D7290 *)MethodInfo_UI_ElementFactory_CreateDefaultPopup_ConfirmPopup)
      ;
      if (pUVar11 != (UI_ConfirmPopup_o *)0x0) {
        pUVar11 = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)pUVar11,
                             (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_ConfirmPopup)
        ;
        (__this->fields).ConfirmPopup = pUVar11;
        Il2CppCodeGenWriteBarrier(&(__this->fields).ConfirmPopup);
        pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        pUVar12 = UI_ElementFactory__CreateDefaultPopup_object_
                            (pUVar7,false,
                             (MethodInfo_34D7290 *)
                             MethodInfo_UI_ElementFactory_CreateDefaultPopup_ExternalLinkPopup);
        if (pUVar12 != (UI_ExternalLinkPopup_o *)0x0) {
          pUVar12 = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pUVar12,
                               (MethodInfo_34B0830 *)
                               MethodInfo_UnityEngine_Component_GetComponent_ExternalLinkPopup);
          (__this->fields).ExternalLinkPopup = pUVar12;
          Il2CppCodeGenWriteBarrier(&(__this->fields).ExternalLinkPopup);
          pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          pUVar13 = UI_ElementFactory__CreateDefaultPopup_object_
                              (pUVar7,false,
                               (MethodInfo_34D7290 *)
                               MethodInfo_UI_ElementFactory_CreateDefaultPopup_ColorPickPopup);
          if (pUVar13 != (UI_ColorPickPopup_o *)0x0) {
            pUVar13 = UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)pUVar13,
                                 (MethodInfo_34B0830 *)
                                 MethodInfo_UnityEngine_Component_GetComponent_ColorPickPopup);
            (__this->fields).ColorPickPopup = pUVar13;
            Il2CppCodeGenWriteBarrier(&(__this->fields).ColorPickPopup);
            pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
            ;
            pUVar14 = UI_ElementFactory__CreateDefaultPopup_object_
                                (pUVar7,false,
                                 (MethodInfo_34D7290 *)
                                 MethodInfo_UI_ElementFactory_CreateDefaultPopup_Vector3Popup);
            if (pUVar14 != (UI_Vector3Popup_o *)0x0) {
              pUVar14 = UnityEngine_Component__GetComponent_object_
                                  ((UnityEngine_Component_o *)pUVar14,
                                   (MethodInfo_34B0830 *)
                                   MethodInfo_UnityEngine_Component_GetComponent_Vector3Popup);
              (__this->fields).Vector3Popup = pUVar14;
              Il2CppCodeGenWriteBarrier(&(__this->fields).Vector3Popup);
              pUVar7 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
              pUVar15 = UI_ElementFactory__CreateDefaultPopup_object_
                                  (pUVar7,false,
                                   (MethodInfo_34D7290 *)
                                   MethodInfo_UI_ElementFactory_CreateDefaultPopup_ExportPopup);
              if (pUVar15 != (UI_ExportPopup_o *)0x0) {
                pUVar15 = UnityEngine_Component__GetComponent_object_
                                    ((UnityEngine_Component_o *)pUVar15,
                                     (MethodInfo_34B0830 *)
                                     MethodInfo_UnityEngine_Component_GetComponent_ExportPopup);
                (__this->fields).ExportPopup = pUVar15;
                Il2CppCodeGenWriteBarrier(&(__this->fields).ExportPopup);
                pUVar7 = UnityEngine_Component__get_transform
                                   ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                pUVar16 = UI_ElementFactory__CreateDefaultPopup_object_
                                    (pUVar7,false,
                                     (MethodInfo_34D7290 *)
                                     MethodInfo_UI_ElementFactory_CreateDefaultPopup_ImportPopup);
                if (pUVar16 != (UI_ImportPopup_o *)0x0) {
                  pUVar16 = UnityEngine_Component__GetComponent_object_
                                      ((UnityEngine_Component_o *)pUVar16,
                                       (MethodInfo_34B0830 *)
                                       MethodInfo_UnityEngine_Component_GetComponent_ImportPopup);
                  (__this->fields).ImportPopup = pUVar16;
                  Il2CppCodeGenWriteBarrier(&(__this->fields).ImportPopup);
                  pUVar7 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                  pUVar17 = UI_ElementFactory__CreateDefaultPopup_object_
                                      (pUVar7,false,
                                       (MethodInfo_34D7290 *)
                                       MethodInfo_UI_ElementFactory_CreateDefaultPopup_NewImportPopup);
                  if (pUVar17 != (UI_NewImportPopup_o *)0x0) {
                    pUVar17 = UnityEngine_Component__GetComponent_object_
                                        ((UnityEngine_Component_o *)pUVar17,
                                         (MethodInfo_34B0830 *)
                                         MethodInfo_UnityEngine_Component_GetComponent_NewImportPopup);
                    (__this->fields).NewImportPopup = pUVar17;
                    Il2CppCodeGenWriteBarrier(&(__this->fields).NewImportPopup);
                    pUVar7 = UnityEngine_Component__get_transform
                                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                    pUVar18 = UI_ElementFactory__CreateDefaultPopup_object_
                                        (pUVar7,false,
                                         (MethodInfo_34D7290 *)
                                         MethodInfo_UI_ElementFactory_CreateDefaultPopup_KeybindPopup);
                    if (pUVar18 != (UI_KeybindPopup_o *)0x0) {
                      pUVar18 = UnityEngine_Component__GetComponent_object_
                                          ((UnityEngine_Component_o *)pUVar18,
                                           (MethodInfo_34B0830 *)
                                           MethodInfo_UnityEngine_Component_GetComponent_KeybindPopup);
                      (__this->fields).KeybindPopup = pUVar18;
                      Il2CppCodeGenWriteBarrier(&(__this->fields).KeybindPopup);
                      pUVar7 = UnityEngine_Component__get_transform
                                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                      pUVar19 = UI_ElementFactory__CreateDefaultPopup_object_
                                          (pUVar7,false,
                                           (MethodInfo_34D7290 *)
                                           MethodInfo_UI_ElementFactory_CreateDefaultPopup_SetNamePopup);
                      if (pUVar19 != (UI_SetNamePopup_o *)0x0) {
                        pUVar19 = UnityEngine_Component__GetComponent_object_
                                            ((UnityEngine_Component_o *)pUVar19,
                                             (MethodInfo_34B0830 *)
                                             MethodInfo_UnityEngine_Component_GetComponent_SetNamePopup);
                        (__this->fields).SetNamePopup = pUVar19;
                        Il2CppCodeGenWriteBarrier(&(__this->fields).SetNamePopup);
                        pUVar7 = UnityEngine_Component__get_transform
                                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                        pUVar20 = UI_ElementFactory__CreateDefaultPopup_object_
                                            (pUVar7,false,
                                             (MethodInfo_34D7290 *)
                                             MethodInfo_UI_ElementFactory_CreateDefaultPopup_SelectListPopup);
                        if (pUVar20 != (UI_SelectListPopup_o *)0x0) {
                          pUVar20 = UnityEngine_Component__GetComponent_object_
                                              ((UnityEngine_Component_o *)pUVar20,
                                               (MethodInfo_34B0830 *)
                                               MethodInfo_UnityEngine_Component_GetComponent_SelectListPopup);
                          (__this->fields).SelectListPopup = pUVar20;
                          Il2CppCodeGenWriteBarrier(&(__this->fields).SelectListPopup);
                          pUVar7 = UnityEngine_Component__get_transform
                                             ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                          pUVar21 = UI_ElementFactory__CreateDefaultPopup_object_
                                              (pUVar7,false,
                                               (MethodInfo_34D7290 *)
                                               MethodInfo_UI_ElementFactory_CreateDefaultPopup_IconPickPopup);
                          if (pUVar21 != (UI_IconPickPopup_o *)0x0) {
                            pUVar21 = UnityEngine_Component__GetComponent_object_
                                                ((UnityEngine_Component_o *)pUVar21,
                                                 (MethodInfo_34B0830 *)
                                                 MethodInfo_UnityEngine_Component_GetComponent_IconPickPopup);
                            (__this->fields).IconPickPopup = pUVar21;
                            Il2CppCodeGenWriteBarrier(&(__this->fields).IconPickPopup);
                            pUVar7 = UnityEngine_Component__get_transform
                                               ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                            pUVar22 = UI_ElementFactory__CreateDefaultPopup_object_
                                                (pUVar7,false,
                                                 (MethodInfo_34D7290 *)
                                                 MethodInfo_UI_ElementFactory_CreateDefaultPopup_RoleSpritePickPopup
                                                );
                            if (pUVar22 != (UI_RoleSpritePickPopup_o *)0x0) {
                              pUVar22 = UnityEngine_Component__GetComponent_object_
                                                  ((UnityEngine_Component_o *)pUVar22,
                                                   (MethodInfo_34B0830 *)
                                                   MethodInfo_UnityEngine_Component_GetComponent_RoleSpritePickPopup
                                                  );
                              (__this->fields).RoleSpritePickPopup = pUVar22;
                              Il2CppCodeGenWriteBarrier(&(__this->fields).RoleSpritePickPopup);
                              x = UnityEngine_Component__GetComponent_object_
                                            ((UnityEngine_Component_o *)__this,
                                             (MethodInfo_34B0830 *)
                                             MethodInfo_UnityEngine_Component_GetComponent_AottgExternalLinkDialogHost
                                            );
                              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                              }
                              bVar6 = UnityEngine_Object__op_Equality
                                                ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,
                                                 (MethodInfo *)0x0);
                              if (bVar6) {
                                pUVar8 = UnityEngine_Component__get_gameObject
                                                   ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                                if (pUVar8 == (UnityEngine_GameObject_o *)0x0) goto label_05cb2f4b;
                                UnityEngine_GameObject__AddComponent_object_
                                          (pUVar8,(MethodInfo_353B6A0 *)
                                                  MethodInfo_UnityEngine_GameObject_AddComponent_AottgExternalLinkDialogHost
                                          );
                              }
                              pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
                              pSVar3 = (__this->fields)._popups;
                              if (pSVar3 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
                                pUVar9 = (__this->fields).TooltipPopup;
                                piVar1 = &(pSVar3->fields)._version;
                                *piVar1 = *piVar1 + 1;
                                pUVar4 = (pSVar3->fields)._items;
                                if (pUVar4 != (UI_BasePopup_array *)0x0) {
                                  uVar2 = (pSVar3->fields)._size;
                                  if (uVar2 < (uint)pUVar4->max_length) {
                                    (pSVar3->fields)._size = uVar2 + 1;
                                    pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar9;
                                    Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2);
                                  }
                                  else {
                                    System_Collections_Generic_List_object___AddWithResize
                                              ((System_Collections_Generic_List_object__o *)pSVar3,
                                               (Il2CppObject *)pUVar9,
                                               (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
                                  }
                                  pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
                                  pSVar3 = (__this->fields)._popups;
                                  if (pSVar3 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
                                    pUVar10 = (__this->fields).MessagePopup;
                                    piVar1 = &(pSVar3->fields)._version;
                                    *piVar1 = *piVar1 + 1;
                                    pUVar4 = (pSVar3->fields)._items;
                                    if (pUVar4 != (UI_BasePopup_array *)0x0) {
                                      uVar2 = (pSVar3->fields)._size;
                                      if (uVar2 < (uint)pUVar4->max_length) {
                                        (pSVar3->fields)._size = uVar2 + 1;
                                        pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar10;
                                        Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2);
                                      }
                                      else {
                                        System_Collections_Generic_List_object___AddWithResize
                                                  ((System_Collections_Generic_List_object__o *)pSVar3,
                                                   (Il2CppObject *)pUVar10,
                                                   (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method
                                                  );
                                      }
                                      pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
                                      pSVar3 = (__this->fields)._popups;
                                      if (pSVar3 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
                                        pUVar11 = (__this->fields).ConfirmPopup;
                                        piVar1 = &(pSVar3->fields)._version;
                                        *piVar1 = *piVar1 + 1;
                                        pUVar4 = (pSVar3->fields)._items;
                                        if (pUVar4 != (UI_BasePopup_array *)0x0) {
                                          uVar2 = (pSVar3->fields)._size;
                                          if (uVar2 < (uint)pUVar4->max_length) {
                                            (pSVar3->fields)._size = uVar2 + 1;
                                            pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar11;
                                            Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2);
                                          }
                                          else {
                                            System_Collections_Generic_List_object___AddWithResize
                                                      ((System_Collections_Generic_List_object__o *)pSVar3,
                                                       (Il2CppObject *)pUVar11,
                                                       (MethodInfo_395D230 *)
                                                       pMVar5->klass->rgctx_data[0xe].method);
                                          }
                                          pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
                                          pSVar3 = (__this->fields)._popups;
                                          if (pSVar3 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
                                            pUVar12 = (__this->fields).ExternalLinkPopup;
                                            piVar1 = &(pSVar3->fields)._version;
                                            *piVar1 = *piVar1 + 1;
                                            pUVar4 = (pSVar3->fields)._items;
                                            if (pUVar4 != (UI_BasePopup_array *)0x0) {
                                              uVar2 = (pSVar3->fields)._size;
                                              if (uVar2 < (uint)pUVar4->max_length) {
                                                (pSVar3->fields)._size = uVar2 + 1;
                                                pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar12;
                                                Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2);
                                              }
                                              else {
                                                System_Collections_Generic_List_object___AddWithResize
                                                          ((System_Collections_Generic_List_object__o *)pSVar3
                                                           ,(Il2CppObject *)pUVar12,
                                                           (MethodInfo_395D230 *)
                                                           pMVar5->klass->rgctx_data[0xe].method);
                                              }
                                              pMVar5 = 
                                              MethodInfo_System_Collections_Generic_List_BasePopup_Add;
                                              pSVar3 = (__this->fields)._popups;
                                              if (pSVar3 != (System_Collections_Generic_List_BasePopup__o *)
                                                            0x0) {
                                                pUVar13 = (__this->fields).ColorPickPopup;
                                                piVar1 = &(pSVar3->fields)._version;
                                                *piVar1 = *piVar1 + 1;
                                                pUVar4 = (pSVar3->fields)._items;
                                                if (pUVar4 != (UI_BasePopup_array *)0x0) {
                                                  uVar2 = (pSVar3->fields)._size;
                                                  if (uVar2 < (uint)pUVar4->max_length) {
                                                    (pSVar3->fields)._size = uVar2 + 1;
                                                    pUVar4->m_Items[(int)uVar2] = (UI_BasePopup_o *)pUVar13;
                                                    Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2);
                                                  }
                                                  else {
                                                    System_Collections_Generic_List_object___AddWithResize
                                                              ((System_Collections_Generic_List_object__o *)
                                                               pSVar3,(Il2CppObject *)pUVar13,
                                                               (MethodInfo_395D230 *)
                                                               pMVar5->klass->rgctx_data[0xe].method);
                                                  }
                                                  pMVar5 = 
                                                  MethodInfo_System_Collections_Generic_List_BasePopup_Add;
                                                  pSVar3 = (__this->fields)._popups;
                                                  if (pSVar3 != (System_Collections_Generic_List_BasePopup__o
                                                                 *)0x0) {
                                                    pUVar14 = (__this->fields).Vector3Popup;
                                                    piVar1 = &(pSVar3->fields)._version;
                                                    *piVar1 = *piVar1 + 1;
                                                    pUVar4 = (pSVar3->fields)._items;
                                                    if (pUVar4 != (UI_BasePopup_array *)0x0) {
                                                      uVar2 = (pSVar3->fields)._size;
                                                      if (uVar2 < (uint)pUVar4->max_length) {
                                                        (pSVar3->fields)._size = uVar2 + 1;
                                                        pUVar4->m_Items[(int)uVar2] =
                                                             (UI_BasePopup_o *)pUVar14;
                                                        Il2CppCodeGenWriteBarrier
                                                                  (pUVar4->m_Items + (int)uVar2);
                                                      }
                                                      else {
                                                        System_Collections_Generic_List_object___AddWithResize
                                                                  ((System_Collections_Generic_List_object__o
                                                                    *)pSVar3,(Il2CppObject *)pUVar14,
                                                                   (MethodInfo_395D230 *)
                                                                   pMVar5->klass->rgctx_data[0xe].method);
                                                      }
                                                      pMVar5 = 
                                                      MethodInfo_System_Collections_Generic_List_BasePopup_Add
                                                      ;
                                                      pSVar3 = (__this->fields)._popups;
                                                      if (pSVar3 != (
                                                       System_Collections_Generic_List_BasePopup__o *)0x0) {
                                                        pUVar15 = (__this->fields).ExportPopup;
                                                        piVar1 = &(pSVar3->fields)._version;
                                                        *piVar1 = *piVar1 + 1;
                                                        pUVar4 = (pSVar3->fields)._items;
                                                        if (pUVar4 != (UI_BasePopup_array *)0x0) {
                                                          uVar2 = (pSVar3->fields)._size;
                                                          if (uVar2 < (uint)pUVar4->max_length) {
                                                            (pSVar3->fields)._size = uVar2 + 1;
                                                            pUVar4->m_Items[(int)uVar2] =
                                                                 (UI_BasePopup_o *)pUVar15;
                                                            Il2CppCodeGenWriteBarrier
                                                                      (pUVar4->m_Items + (int)uVar2);
                                                          }
                                                          else {
                                                                                                                        
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar3,(Il2CppObject *)pUVar15,
                                                                  (MethodInfo_395D230 *)
                                                                  pMVar5->klass->rgctx_data[0xe].method);
                                                       }
                                                       pMVar5 = 
                                                       MethodInfo_System_Collections_Generic_List_BasePopup_Add
                                                       ;
                                                       pSVar3 = (__this->fields)._popups;
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_List_BasePopup__o *)0x0) {
                                                         pUVar16 = (__this->fields).ImportPopup;
                                                         piVar1 = &(pSVar3->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pUVar4 = (pSVar3->fields)._items;
                                                         if (pUVar4 != (UI_BasePopup_array *)0x0) {
                                                           uVar2 = (pSVar3->fields)._size;
                                                           if (uVar2 < (uint)pUVar4->max_length) {
                                                             (pSVar3->fields)._size = uVar2 + 1;
                                                             pUVar4->m_Items[(int)uVar2] =
                                                                  (UI_BasePopup_o *)pUVar16;
                                                             Il2CppCodeGenWriteBarrier
                                                                       (pUVar4->m_Items + (int)uVar2);
                                                           }
                                                           else {
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar3,(Il2CppObject *)pUVar16,
                                                                  (MethodInfo_395D230 *)
                                                                  pMVar5->klass->rgctx_data[0xe].method);
                                                       }
                                                       pMVar5 = 
                                                       MethodInfo_System_Collections_Generic_List_BasePopup_Add
                                                       ;
                                                       pSVar3 = (__this->fields)._popups;
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_List_BasePopup__o *)0x0) {
                                                         pUVar17 = (__this->fields).NewImportPopup;
                                                         piVar1 = &(pSVar3->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pUVar4 = (pSVar3->fields)._items;
                                                         if (pUVar4 != (UI_BasePopup_array *)0x0) {
                                                           uVar2 = (pSVar3->fields)._size;
                                                           if (uVar2 < (uint)pUVar4->max_length) {
                                                             (pSVar3->fields)._size = uVar2 + 1;
                                                             pUVar4->m_Items[(int)uVar2] =
                                                                  (UI_BasePopup_o *)pUVar17;
                                                             Il2CppCodeGenWriteBarrier
                                                                       (pUVar4->m_Items + (int)uVar2);
                                                           }
                                                           else {
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar3,(Il2CppObject *)pUVar17,
                                                                  (MethodInfo_395D230 *)
                                                                  pMVar5->klass->rgctx_data[0xe].method);
                                                       }
                                                       pMVar5 = 
                                                       MethodInfo_System_Collections_Generic_List_BasePopup_Add
                                                       ;
                                                       pSVar3 = (__this->fields)._popups;
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_List_BasePopup__o *)0x0) {
                                                         pUVar18 = (__this->fields).KeybindPopup;
                                                         piVar1 = &(pSVar3->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pUVar4 = (pSVar3->fields)._items;
                                                         if (pUVar4 != (UI_BasePopup_array *)0x0) {
                                                           uVar2 = (pSVar3->fields)._size;
                                                           if (uVar2 < (uint)pUVar4->max_length) {
                                                             (pSVar3->fields)._size = uVar2 + 1;
                                                             pUVar4->m_Items[(int)uVar2] =
                                                                  (UI_BasePopup_o *)pUVar18;
                                                             Il2CppCodeGenWriteBarrier
                                                                       (pUVar4->m_Items + (int)uVar2);
                                                           }
                                                           else {
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar3,(Il2CppObject *)pUVar18,
                                                                  (MethodInfo_395D230 *)
                                                                  pMVar5->klass->rgctx_data[0xe].method);
                                                       }
                                                       pMVar5 = 
                                                       MethodInfo_System_Collections_Generic_List_BasePopup_Add
                                                       ;
                                                       pSVar3 = (__this->fields)._popups;
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_List_BasePopup__o *)0x0) {
                                                         pUVar19 = (__this->fields).SetNamePopup;
                                                         piVar1 = &(pSVar3->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pUVar4 = (pSVar3->fields)._items;
                                                         if (pUVar4 != (UI_BasePopup_array *)0x0) {
                                                           uVar2 = (pSVar3->fields)._size;
                                                           if (uVar2 < (uint)pUVar4->max_length) {
                                                             (pSVar3->fields)._size = uVar2 + 1;
                                                             pUVar4->m_Items[(int)uVar2] =
                                                                  (UI_BasePopup_o *)pUVar19;
                                                             Il2CppCodeGenWriteBarrier
                                                                       (pUVar4->m_Items + (int)uVar2);
                                                           }
                                                           else {
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar3,(Il2CppObject *)pUVar19,
                                                                  (MethodInfo_395D230 *)
                                                                  pMVar5->klass->rgctx_data[0xe].method);
                                                       }
                                                       pMVar5 = 
                                                       MethodInfo_System_Collections_Generic_List_BasePopup_Add
                                                       ;
                                                       pSVar3 = (__this->fields)._popups;
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_List_BasePopup__o *)0x0) {
                                                         pUVar20 = (__this->fields).SelectListPopup;
                                                         piVar1 = &(pSVar3->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pUVar4 = (pSVar3->fields)._items;
                                                         if (pUVar4 != (UI_BasePopup_array *)0x0) {
                                                           uVar2 = (pSVar3->fields)._size;
                                                           if (uVar2 < (uint)pUVar4->max_length) {
                                                             (pSVar3->fields)._size = uVar2 + 1;
                                                             pUVar4->m_Items[(int)uVar2] =
                                                                  (UI_BasePopup_o *)pUVar20;
                                                             Il2CppCodeGenWriteBarrier
                                                                       (pUVar4->m_Items + (int)uVar2);
                                                           }
                                                           else {
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar3,(Il2CppObject *)pUVar20,
                                                                  (MethodInfo_395D230 *)
                                                                  pMVar5->klass->rgctx_data[0xe].method);
                                                       }
                                                       pMVar5 = 
                                                       MethodInfo_System_Collections_Generic_List_BasePopup_Add
                                                       ;
                                                       pSVar3 = (__this->fields)._popups;
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_List_BasePopup__o *)0x0) {
                                                         pUVar21 = (__this->fields).IconPickPopup;
                                                         piVar1 = &(pSVar3->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pUVar4 = (pSVar3->fields)._items;
                                                         if (pUVar4 != (UI_BasePopup_array *)0x0) {
                                                           uVar2 = (pSVar3->fields)._size;
                                                           if (uVar2 < (uint)pUVar4->max_length) {
                                                             (pSVar3->fields)._size = uVar2 + 1;
                                                             pUVar4->m_Items[(int)uVar2] =
                                                                  (UI_BasePopup_o *)pUVar21;
                                                             Il2CppCodeGenWriteBarrier
                                                                       (pUVar4->m_Items + (int)uVar2);
                                                           }
                                                           else {
                                                                                                                          
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar3,(Il2CppObject *)pUVar21,
                                                                  (MethodInfo_395D230 *)
                                                                  pMVar5->klass->rgctx_data[0xe].method);
                                                       }
                                                       pMVar5 = 
                                                       MethodInfo_System_Collections_Generic_List_BasePopup_Add
                                                       ;
                                                       pSVar3 = (__this->fields)._popups;
                                                       if (pSVar3 != (
                                                       System_Collections_Generic_List_BasePopup__o *)0x0) {
                                                         pUVar22 = (__this->fields).RoleSpritePickPopup;
                                                         piVar1 = &(pSVar3->fields)._version;
                                                         *piVar1 = *piVar1 + 1;
                                                         pUVar4 = (pSVar3->fields)._items;
                                                         if (pUVar4 != (UI_BasePopup_array *)0x0) {
                                                           uVar2 = (pSVar3->fields)._size;
                                                           if (uVar2 < (uint)pUVar4->max_length) {
                                                             (pSVar3->fields)._size = uVar2 + 1;
                                                             pUVar4->m_Items[(int)uVar2] =
                                                                  (UI_BasePopup_o *)pUVar22;
                                                             Il2CppCodeGenWriteBarrier
                                                                       (pUVar4->m_Items + (int)uVar2);
                                                             return;
                                                           }
                                                                                                                      
                                                       System_Collections_Generic_List_object___AddWithResize
                                                                 ((System_Collections_Generic_List_object__o *
                                                                  )pSVar3,(Il2CppObject *)pUVar22,
                                                                  (MethodInfo_395D230 *)
                                                                  pMVar5->klass->rgctx_data[0xe].method);
                                                       return;
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
    }
  }
label_05cb2f4b:
  ThrowNullReferenceException();
}


// UI.BaseMenu$$RebuildPopups
// il2cpp: void UI_BaseMenu__RebuildPopups (UI_BaseMenu_o* __this, const MethodInfo* method);
// 0x5cb2f50
// eh: try 0x5cb3010..0x5cb30d8 -> pad 0x5cb30e5 (+5 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5cb30fd..0x5cb3102 -> pad 0x5cb3127 cleanup
// eh: try 0x5cb312a..0x5cb3134 -> pad 0x5cb313c catch (...) [compiler noexcept guard]
// asm: 27 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cb30dd: jmp 0x5cb30e5
// asm:   0x5cb30df: jmp 0x5cb30e5
// asm:   0x5cb30e1: jmp 0x5cb30e5
// asm:   0x5cb30e3: jmp 0x5cb30e5
// asm:   0x5cb30e5: mov rbx, rax
// asm:   0x5cb30e8: cmp edx, 1
// asm:   0x5cb30eb: jne 0x5cb312a
// asm:   0x5cb30ed: mov rdi, rbx
// asm:   0x5cb30f0: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5cb30f5: mov rbx, qword ptr [rax]
// asm:   0x5cb30f8: mov qword ptr [rsp + 8], rbx
// asm:   0x5cb30fd: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5cb3102: lea rax, [rip + 0x15da657]  ; MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_Dispose
// asm:   0x5cb3109: mov rsi, qword ptr [rax]
// asm:   0x5cb310c: lea rdi, [rsp + 0x20]
// asm:   0x5cb3111: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5cb3116: test rbx, rbx
// asm:   0x5cb3119: je 0x5cb308b
// asm:   0x5cb311f: mov rdi, rbx
// asm:   0x5cb3122: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5cb3127: mov rbx, rax
// asm:   0x5cb312a: lea rdi, [rsp + 8]
// asm:   0x5cb312f: call 0x2fdb0d0  ; il2cpp_runtime_helper_02fdb0d0()
// asm:   0x5cb3134: mov rdi, rbx
// asm:   0x5cb3137: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5cb313c: mov rdi, rax
// asm:   0x5cb313f: call 0x2ab61e0  ; __clang_call_terminate()

void UI_BaseMenu__RebuildPopups(UI_BaseMenu_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int length;
  System_Collections_Generic_List_BasePopup__o *pSVar2;
  bool bVar3;
  UnityEngine_Object_o *pUVar4;
  undefined1 auStack_60 [16];
  UnityEngine_Object_o *pUStack_50;
  undefined1 auStack_48 [16];
  UnityEngine_Object_o *pUStack_38;
  
  if (Il2CppMethodInitialized_07547aae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BasePopup_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BasePopup_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547aae = '\x01';
  }
  pSVar2 = (__this->fields)._popups;
  if (pSVar2 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_60,
               (System_Collections_Generic_List_object__o *)pSVar2,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_BasePopup_GetEnumerator);
    pUStack_38 = pUStack_50;
    auStack_48._0_8_ = auStack_60._0_8_;
    auStack_48._8_8_ = auStack_60._8_8_;
    auStack_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    auStack_60._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)auStack_48;
    while( true ) {
      bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)auStack_48,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_MoveNext);
      pUVar4 = pUStack_38;
      if (!bVar3) break;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        if (pUVar4 == (UnityEngine_Object_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar4 = (UnityEngine_Object_o *)
                 UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_69214e0(pUVar4,(MethodInfo *)0x0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)auStack_48,
               (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_Dispose);
    pSVar2 = (__this->fields)._popups;
    if (pSVar2 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
      piVar1 = &(pSVar2->fields)._version;
      *piVar1 = *piVar1 + 1;
      length = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      }
      (*(__this->klass->vtable)._5_SetupPopups.methodPtr)
                (__this,(__this->klass->vtable)._5_SetupPopups.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.BaseMenu$$HideAllPopups
// il2cpp: void UI_BaseMenu__HideAllPopups (UI_BaseMenu_o* __this, const MethodInfo* method);
// 0x5cb3150
// eh: try 0x5cb31e3..0x5cb322a -> pad 0x5cb3233 (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5cb324b..0x5cb3250 -> pad 0x5cb326f cleanup
// eh: try 0x5cb3272..0x5cb327c -> pad 0x5cb3284 catch (...) [compiler noexcept guard]
// asm: 26 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cb31dd: nop dword ptr [rax]
// asm:   0x5cb322f: jmp 0x5cb3233
// asm:   0x5cb3231: jmp 0x5cb3233
// asm:   0x5cb3233: mov rbx, rax
// asm:   0x5cb3236: cmp edx, 1
// asm:   0x5cb3239: jne 0x5cb3272
// asm:   0x5cb323b: mov rdi, rbx
// asm:   0x5cb323e: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5cb3243: mov rbx, qword ptr [rax]
// asm:   0x5cb3246: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5cb324b: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5cb3250: lea rax, [rip + 0x15da509]  ; MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_Dispose
// asm:   0x5cb3257: mov rsi, qword ptr [rax]
// asm:   0x5cb325a: mov rdi, rsp
// asm:   0x5cb325d: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5cb3262: test rbx, rbx
// asm:   0x5cb3265: je 0x5cb321d
// asm:   0x5cb3267: mov rdi, rbx
// asm:   0x5cb326a: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5cb326f: mov rbx, rax
// asm:   0x5cb3272: lea rdi, [rsp + 0x18]
// asm:   0x5cb3277: call 0x2fdb100  ; il2cpp_runtime_helper_02fdb100()
// asm:   0x5cb327c: mov rdi, rbx
// asm:   0x5cb327f: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5cb3284: mov rdi, rax
// asm:   0x5cb3287: call 0x2ab61e0  ; __clang_call_terminate()

void UI_BaseMenu__HideAllPopups(UI_BaseMenu_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_BasePopup__o *__this_00;
  bool bVar1;
  System_Collections_Generic_List_Enumerator_T__o SStack_38;
  undefined8 uStack_20;
  undefined1 *puStack_18;
  
  if (Il2CppMethodInitialized_07547aaf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BasePopup_GetEnumerator);
    Il2CppMethodInitialized_07547aaf = '\x01';
  }
  SStack_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  SStack_38.fields._index = 0;
  SStack_38.fields._version = 0;
  SStack_38.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._popups;
  if (__this_00 == (System_Collections_Generic_List_BasePopup__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            (&SStack_38,(System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_BasePopup_GetEnumerator);
  uStack_20 = 0;
  puStack_18 = (undefined1 *)&SStack_38;
  while( true ) {
    bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      ((System_Collections_Generic_List_Enumerator_object__o *)&SStack_38,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_MoveNext);
    if (!bVar1) {
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)&SStack_38,
                 (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_Dispose
                );
      return;
    }
    if (SStack_38.fields._current == (Il2CppObject *)0x0) break;
    (*(SStack_38.fields._current)->klass->vtable[0x16].methodPtr)
              (SStack_38.fields._current,(SStack_38.fields._current)->klass->vtable[0x16].method);
  }
  ThrowNullReferenceException();
}


// UI.BaseMenu$$.ctor
// il2cpp: void UI_BaseMenu___ctor (UI_BaseMenu_o* __this, const MethodInfo* method);
// 0x5cb3290

void UI_BaseMenu___ctor(UI_BaseMenu_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_BasePopup__o *__this_00;
  
  if (Il2CppMethodInitialized_07547ab0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BasePopup_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_BasePopup);
    Il2CppMethodInitialized_07547ab0 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_BasePopup);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_BasePopup_ctor);
  (__this->fields)._popups = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._popups);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


