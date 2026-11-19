// Type: UI.MainBackgroundMenu
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/MainBackgroundMenu.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/MainBackgroundMenu.cs
// --------------------------------

// UI.MainBackgroundMenu.<WaitAndFinishBackground>d__12$$.ctor
// il2cpp: void UI_MainBackgroundMenu__WaitAndFinishBackground_d__12___ctor (UI_MainBackgroundMenu__WaitAndFinishBackground_d__12_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5d57920

void UI_MainBackgroundMenu__WaitAndFinishBackground_d__12___ctor
               (UI_MainBackgroundMenu__WaitAndFinishBackground_d__12_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.MainBackgroundMenu.<WaitAndFinishBackground>d__12$$System.IDisposable.Dispose
// il2cpp: void UI_MainBackgroundMenu__WaitAndFinishBackground_d__12__System_IDisposable_Dispose (UI_MainBackgroundMenu__WaitAndFinishBackground_d__12_o* __this, const MethodInfo* method);
// 0x5d57960

void UI_MainBackgroundMenu__WaitAndFinishBackground_d__12__System_IDisposable_Dispose
               (UI_MainBackgroundMenu__WaitAndFinishBackground_d__12_o *__this,MethodInfo *method)

{
  return;
}


// UI.MainBackgroundMenu.<WaitAndFinishBackground>d__12$$MoveNext
// il2cpp: bool UI_MainBackgroundMenu__WaitAndFinishBackground_d__12__MoveNext (UI_MainBackgroundMenu__WaitAndFinishBackground_d__12_o* __this, const MethodInfo* method);
// 0x5d57970

bool UI_MainBackgroundMenu__WaitAndFinishBackground_d__12__MoveNext
               (UI_MainBackgroundMenu__WaitAndFinishBackground_d__12_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_MainBackgroundMenu_o *pUVar2;
  UI_MainMenuBackgroundPanel_o *pUVar3;
  UI_LoadingBackgroundPanel_o *__this_00;
  UnityEngine_WaitForSeconds_o *__this_01;
  MethodInfo *in_R8;
  
  if (Il2CppMethodInitialized_07547f3b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    il2cpp_codegen_initialize_runtime_metadata(&"MainBackgrounds");
    Il2CppMethodInitialized_07547f3b = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(__this_01,1.5,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_01;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 1;
  }
  else if (iVar1 == 1) {
    pUVar2 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (((pUVar2 != (UI_MainBackgroundMenu_o *)0x0) &&
        (pUVar3 = (pUVar2->fields)._mainBackgroundPanelFront, pUVar3 != (UI_MainMenuBackgroundPanel_o *)0x0))
       && (__this_00 = (UI_LoadingBackgroundPanel_o *)(pUVar2->fields)._mainBackgroundPanelBack,
          __this_00 != (UI_LoadingBackgroundPanel_o *)0x0)) {
      UI_LoadingBackgroundPanel__SetBackground
                (__this_00,false,(pUVar3->fields).BackgroundIndex,"MainBackgrounds",in_R8);
      pUVar3 = (pUVar2->fields)._mainBackgroundPanelFront;
      if (pUVar3 != (UI_MainMenuBackgroundPanel_o *)0x0) {
        (*(pUVar3->klass->vtable)._58_HideImmediate.methodPtr)
                  (pUVar3,(pUVar3->klass->vtable)._58_HideImmediate.method);
        goto label_05d57a5a;
      }
    }
    ThrowNullReferenceException();
  }
label_05d57a5a:
  return iVar1 == 0;
}


// UI.MainBackgroundMenu.<WaitAndFinishBackground>d__12$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_MainBackgroundMenu__WaitAndFinishBackground_d__12__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_MainBackgroundMenu__WaitAndFinishBackground_d__12_o* __this, const MethodInfo* method);
// 0x5d57a70

Il2CppObject *
UI_MainBackgroundMenu__WaitAndFinishBackground_d__12__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_MainBackgroundMenu__WaitAndFinishBackground_d__12_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.MainBackgroundMenu.<WaitAndFinishBackground>d__12$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_MainBackgroundMenu__WaitAndFinishBackground_d__12__System_Collections_IEnumerator_Reset (UI_MainBackgroundMenu__WaitAndFinishBackground_d__12_o* __this, const MethodInfo* method);
// 0x5d57a80

void UI_MainBackgroundMenu__WaitAndFinishBackground_d__12__System_Collections_IEnumerator_Reset
               (UI_MainBackgroundMenu__WaitAndFinishBackground_d__12_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_UI_MainBackgroundMenu_WaitAndFinishBackground_d__12_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// UI.MainBackgroundMenu.<WaitAndFinishBackground>d__12$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_MainBackgroundMenu__WaitAndFinishBackground_d__12__System_Collections_IEnumerator_get_Current (UI_MainBackgroundMenu__WaitAndFinishBackground_d__12_o* __this, const MethodInfo* method);
// 0x5d57ac0

Il2CppObject *
UI_MainBackgroundMenu__WaitAndFinishBackground_d__12__System_Collections_IEnumerator_get_Current
          (UI_MainBackgroundMenu__WaitAndFinishBackground_d__12_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.MainBackgroundMenu$$Setup
// il2cpp: void UI_MainBackgroundMenu__Setup (UI_MainBackgroundMenu_o* __this, const MethodInfo* method);
// 0x5d571b0

void UI_MainBackgroundMenu__Setup(UI_MainBackgroundMenu_o *__this,MethodInfo *method)

{
  UI_MainBackgroundMenu__SetupMainBackground(__this,method);
  return;
}


// UI.MainBackgroundMenu$$SetupMainBackground
// il2cpp: void UI_MainBackgroundMenu__SetupMainBackground (UI_MainBackgroundMenu_o* __this, const MethodInfo* method);
// 0x5d571c0

void UI_MainBackgroundMenu__SetupMainBackground(UI_MainBackgroundMenu_o *__this,MethodInfo *method)

{
  UI_MainMenuBackgroundPanel_o **targetAddress;
  UI_MainMenuBackgroundPanel_o **targetAddress_00;
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  UI_LoadingBackgroundPanel_o *__this_00;
  UnityEngine_Vector3_StaticFields *pUVar6;
  UnityEngine_Transform_o *pUVar7;
  UI_MainMenuBackgroundPanel_o *pUVar8;
  UnityEngine_RectTransform_o *pUVar9;
  UnityEngine_GameObject_o *pUVar10;
  ParallaxEffect_o *pPVar11;
  MethodInfo *in_RCX;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  
  if (Il2CppMethodInitialized_07547f37 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_MainMenuBackgroundPanel);
    Il2CppMethodInitialized_07547f37 = '\x01';
  }
  pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar8 = UI_ElementFactory__CreateDefaultPopup_object_
                     (pUVar7,false,
                      (MethodInfo_34D7290 *)
                      MethodInfo_UI_ElementFactory_CreateDefaultPopup_MainMenuBackgroundPanel);
  targetAddress = &(__this->fields)._mainBackgroundPanelBack;
  (__this->fields)._mainBackgroundPanelBack = pUVar8;
  Il2CppCodeGenWriteBarrier(targetAddress);
  pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar8 = UI_ElementFactory__CreateDefaultPopup_object_
                     (pUVar7,false,
                      (MethodInfo_34D7290 *)
                      MethodInfo_UI_ElementFactory_CreateDefaultPopup_MainMenuBackgroundPanel);
  targetAddress_00 = &(__this->fields)._mainBackgroundPanelFront;
  (__this->fields)._mainBackgroundPanelFront = pUVar8;
  Il2CppCodeGenWriteBarrier(targetAddress_00);
  __this_00 = (UI_LoadingBackgroundPanel_o *)(__this->fields)._mainBackgroundPanelBack;
  if (__this_00 != (UI_LoadingBackgroundPanel_o *)0x0) {
    UI_LoadingBackgroundPanel__SetRandomBackground(__this_00,false,true,in_RCX);
    if (*targetAddress != (UI_MainMenuBackgroundPanel_o *)0x0) {
      pUVar9 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)*targetAddress,
                          (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
      if (Il2CppMethodInitialized_0753e4b7 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_0753e4b7 = '\x01';
      }
      if (pUVar9 != (UnityEngine_RectTransform_o *)0x0) {
        pUVar6 = TypeInfo_UnityEngine_Vector3->static_fields;
        fVar1 = (__this->fields).backgroundScale;
        value.fields.z = (pUVar6->oneVector).fields.z * fVar1;
        uVar2 = (pUVar6->oneVector).fields.x;
        uVar4 = (pUVar6->oneVector).fields.y;
        value.fields.x = fVar1 * (float)uVar2;
        value.fields.y = fVar1 * (float)uVar4;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)pUVar9,value,(MethodInfo *)0x0);
        pUVar8 = (__this->fields)._mainBackgroundPanelFront;
        if (pUVar8 != (UI_MainMenuBackgroundPanel_o *)0x0) {
          pUVar9 = UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)pUVar8,
                              (MethodInfo_34B0830 *)
                              MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
          if (Il2CppMethodInitialized_0753e4b7 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_0753e4b7 = '\x01';
          }
          if (pUVar9 != (UnityEngine_RectTransform_o *)0x0) {
            pUVar6 = TypeInfo_UnityEngine_Vector3->static_fields;
            fVar1 = (__this->fields).backgroundScale;
            value_00.fields.z = (pUVar6->oneVector).fields.z * fVar1;
            uVar3 = (pUVar6->oneVector).fields.x;
            uVar5 = (pUVar6->oneVector).fields.y;
            value_00.fields.x = fVar1 * (float)uVar3;
            value_00.fields.y = fVar1 * (float)uVar5;
            UnityEngine_Transform__set_localScale
                      ((UnityEngine_Transform_o *)pUVar9,value_00,(MethodInfo *)0x0);
            pUVar8 = (__this->fields)._mainBackgroundPanelBack;
            if (pUVar8 != (UI_MainMenuBackgroundPanel_o *)0x0) {
              UI_BasePopup__ShowImmediate((UI_BasePopup_o *)pUVar8,(MethodInfo *)0x0);
              pUVar8 = *targetAddress;
              if ((pUVar8 != (UI_MainMenuBackgroundPanel_o *)0x0) &&
                 (*targetAddress_00 != (UI_MainMenuBackgroundPanel_o *)0x0)) {
                ((*targetAddress_00)->fields).BackgroundIndex = (pUVar8->fields).BackgroundIndex;
                pUVar10 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0);
                if (Il2CppMethodInitialized_07547f38 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata
                            (&MethodInfo_UnityEngine_GameObject_AddComponent_ParallaxEffect);
                  Il2CppMethodInitialized_07547f38 = '\x01';
                }
                if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
                  pPVar11 = UnityEngine_GameObject__AddComponent_object_
                                      (pUVar10,(MethodInfo_353B6A0 *)
                                               MethodInfo_UnityEngine_GameObject_AddComponent_ParallaxEffect);
                  if (pPVar11 != (ParallaxEffect_o *)0x0) {
                    (pPVar11->fields).scale = 1.1;
                    (pPVar11->fields).parallaxIntensity = 0.5;
                    (pPVar11->fields).smoothTime = 0.6;
                    if (*targetAddress_00 != (UI_MainMenuBackgroundPanel_o *)0x0) {
                      pUVar10 = UnityEngine_Component__get_gameObject
                                          ((UnityEngine_Component_o *)*targetAddress_00,(MethodInfo *)0x0);
                      if (Il2CppMethodInitialized_07547f38 == '\0') {
                        il2cpp_codegen_initialize_runtime_metadata
                                  (&MethodInfo_UnityEngine_GameObject_AddComponent_ParallaxEffect);
                        Il2CppMethodInitialized_07547f38 = '\x01';
                      }
                      if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
                        pPVar11 = UnityEngine_GameObject__AddComponent_object_
                                            (pUVar10,(MethodInfo_353B6A0 *)
                                                     MethodInfo_UnityEngine_GameObject_AddComponent_ParallaxEffect
                                            );
                        if (pPVar11 != (ParallaxEffect_o *)0x0) {
                          (pPVar11->fields).scale = 1.1;
                          (pPVar11->fields).parallaxIntensity = 0.5;
                          (pPVar11->fields).smoothTime = 0.6;
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
  ThrowNullReferenceException();
}


// UI.MainBackgroundMenu$$AddParallaxEffect
// il2cpp: void UI_MainBackgroundMenu__AddParallaxEffect (UI_MainBackgroundMenu_o* __this, UnityEngine_GameObject_o* target, float intensity, const MethodInfo* method);
// 0x5d57470

void UI_MainBackgroundMenu__AddParallaxEffect
               (UI_MainBackgroundMenu_o *__this,UnityEngine_GameObject_o *target,float intensity,
               MethodInfo *method)

{
  ParallaxEffect_o *pPVar1;
  
  if (Il2CppMethodInitialized_07547f38 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_ParallaxEffect)
    ;
    Il2CppMethodInitialized_07547f38 = '\x01';
  }
  if (target != (UnityEngine_GameObject_o *)0x0) {
    pPVar1 = UnityEngine_GameObject__AddComponent_object_
                       (target,(MethodInfo_353B6A0 *)
                               MethodInfo_UnityEngine_GameObject_AddComponent_ParallaxEffect);
    if (pPVar1 != (ParallaxEffect_o *)0x0) {
      (pPVar1->fields).parallaxIntensity = intensity;
      (pPVar1->fields).smoothTime = 0.6;
      (pPVar1->fields).scale = 1.1;
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MainBackgroundMenu$$Update
// il2cpp: void UI_MainBackgroundMenu__Update (UI_MainBackgroundMenu_o* __this, const MethodInfo* method);
// 0x5d574e0

void UI_MainBackgroundMenu__Update(UI_MainBackgroundMenu_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_o *currentVelocity;
  UI_MainMenuBackgroundPanel_o *pUVar1;
  int32_t iVar2;
  int32_t iVar3;
  int32_t iVar4;
  UnityEngine_RectTransform_o *pUVar5;
  UnityEngine_RectTransform_o *pUVar6;
  float fVar7;
  float fVar9;
  UnityEngine_Vector2_o UVar8;
  float fVar10;
  undefined8 extraout_XMM0_Qb;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  UnityEngine_Vector3_o UVar14;
  UnityEngine_Vector2_o UStack_80;
  UnityEngine_Vector2_o UStack_78;
  int32_t iStack_6c;
  undefined1 auStack_68 [16];
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined1 auStack_48 [24];
  
  if (Il2CppMethodInitialized_07547f39 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    Il2CppMethodInitialized_07547f39 = '\x01';
  }
  UVar14 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
  fStack_58 = UVar14.fields.x;
  fStack_54 = UVar14.fields.y;
  fStack_50 = (float)extraout_XMM0_Qb;
  fStack_4c = (float)((ulong)extraout_XMM0_Qb >> 0x20);
  auStack_68 = ZEXT416((uint)(__this->fields).backgroundScale);
  iVar2 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  auStack_48._0_16_ = ZEXT416((uint)(__this->fields).backgroundScale);
  iVar3 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  iStack_6c = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  iVar4 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  pUVar1 = (__this->fields)._mainBackgroundPanelBack;
  if (pUVar1 != (UI_MainMenuBackgroundPanel_o *)0x0) {
    pUVar5 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)pUVar1,
                        (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    pUVar1 = (__this->fields)._mainBackgroundPanelBack;
    if (pUVar1 != (UI_MainMenuBackgroundPanel_o *)0x0) {
      pUVar6 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)pUVar1,
                          (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
      if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
        fVar7 = (float)(iVar2 / 2) * ((float)auStack_68._0_4_ + -1.0);
        fVar9 = (float)(iVar3 / 2) * ((float)auStack_48._0_4_ + -1.0);
        fVar10 = ((float)auStack_68._4_4_ + 0.0) * 0.0;
        fVar11 = ((float)auStack_48._4_4_ + 0.0) * 0.0;
        auVar12._0_4_ = (float)iStack_6c;
        auVar12._4_4_ = (float)iVar4;
        auVar12._8_8_ = 0;
        auVar13._4_4_ = fStack_54;
        auVar13._0_4_ = fStack_58;
        auVar13._8_4_ = fStack_50;
        auVar13._12_4_ = fStack_4c;
        auVar13 = divps(auVar13,auVar12);
        fStack_58 = (fVar7 + fVar7) * auVar13._0_4_ - fVar7;
        fStack_54 = (fVar9 + fVar9) * auVar13._4_4_ - fVar9;
        fStack_50 = (fVar10 + fVar10) * auVar13._8_4_ - fVar10;
        fStack_4c = (fVar11 + fVar11) * auVar13._12_4_ - fVar11;
        UStack_78 = UnityEngine_RectTransform__get_anchoredPosition(pUVar6,(MethodInfo *)0x0);
        currentVelocity = &(__this->fields).currentVelocity;
        auStack_68._0_4_ = (__this->fields).smoothTime;
        UStack_80.fields.y = fStack_54;
        UStack_80.fields.x = fStack_58;
        fVar7 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        UVar8 = UnityEngine_Vector2__SmoothDamp_69087f0
                          (&UStack_78,&UStack_80,currentVelocity,(float)auStack_68._0_4_,INFINITY,fVar7,
                           (MethodInfo *)0x0);
        if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
          UnityEngine_RectTransform__set_anchoredPosition(pUVar5,UVar8,(MethodInfo *)0x0);
          pUVar1 = (__this->fields)._mainBackgroundPanelFront;
          if (pUVar1 != (UI_MainMenuBackgroundPanel_o *)0x0) {
            pUVar5 = UnityEngine_Component__GetComponent_object_
                               ((UnityEngine_Component_o *)pUVar1,
                                (MethodInfo_34B0830 *)
                                MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
            pUVar1 = (__this->fields)._mainBackgroundPanelFront;
            if (pUVar1 != (UI_MainMenuBackgroundPanel_o *)0x0) {
              pUVar6 = UnityEngine_Component__GetComponent_object_
                                 ((UnityEngine_Component_o *)pUVar1,
                                  (MethodInfo_34B0830 *)
                                  MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
              if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
                UStack_78 = UnityEngine_RectTransform__get_anchoredPosition(pUVar6,(MethodInfo *)0x0);
                auStack_68._0_4_ = (__this->fields).smoothTime;
                UStack_80.fields.y = fStack_54;
                UStack_80.fields.x = fStack_58;
                fVar7 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
                UVar8 = UnityEngine_Vector2__SmoothDamp_69087f0
                                  (&UStack_78,&UStack_80,currentVelocity,(float)auStack_68._0_4_,INFINITY,
                                   fVar7,(MethodInfo *)0x0);
                if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
                  UnityEngine_RectTransform__set_anchoredPosition(pUVar5,UVar8,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MainBackgroundMenu$$GetConstrainedTargetPosition
// il2cpp: UnityEngine_Vector2_o UI_MainBackgroundMenu__GetConstrainedTargetPosition (UI_MainBackgroundMenu_o* __this, UnityEngine_Vector2_o mousePosition, const MethodInfo* method);
// 0x5d57730

UnityEngine_Vector2_o
UI_MainBackgroundMenu__GetConstrainedTargetPosition
          (UI_MainBackgroundMenu_o *__this,UnityEngine_Vector2_o mousePosition,MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  float fVar3;
  UnityEngine_Vector2_Fields UVar4;
  float fVar6;
  undefined8 in_XMM0_Qb;
  undefined1 auVar5 [16];
  undefined1 auVar7 [16];
  
  fVar3 = (__this->fields).backgroundScale;
  iVar1 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  fVar6 = (__this->fields).backgroundScale;
  iVar2 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  fVar3 = (float)(iVar1 / 2) * (fVar3 + -1.0);
  fVar6 = (float)(iVar2 / 2) * (fVar6 + -1.0);
  iVar1 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  iVar2 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  auVar5._0_4_ = (float)iVar1;
  auVar5._4_4_ = (float)iVar2;
  auVar5._8_8_ = 0;
  auVar7._8_8_ = in_XMM0_Qb;
  auVar7._0_8_ = mousePosition.fields;
  auVar7 = divps(auVar7,auVar5);
  UVar4.x = (fVar3 + fVar3) * auVar7._0_4_ - fVar3;
  UVar4.y = (fVar6 + fVar6) * auVar7._4_4_ - fVar6;
  return (UnityEngine_Vector2_o)UVar4;
}


// UI.MainBackgroundMenu$$MapRange
// il2cpp: float UI_MainBackgroundMenu__MapRange (UI_MainBackgroundMenu_o* __this, float value, float fromSource, float toSource, float fromTarget, float toTarget, const MethodInfo* method);
// 0x5d577e0

float UI_MainBackgroundMenu__MapRange
                (UI_MainBackgroundMenu_o *__this,float value,float fromSource,float toSource,float fromTarget,
                float toTarget,MethodInfo *method)

{
  return ((value - fromSource) / (toSource - fromSource)) * (toTarget - fromTarget) + fromTarget;
}


// UI.MainBackgroundMenu$$ChangeMainBackground
// il2cpp: void UI_MainBackgroundMenu__ChangeMainBackground (UI_MainBackgroundMenu_o* __this, const MethodInfo* method);
// 0x5d57800

void UI_MainBackgroundMenu__ChangeMainBackground(UI_MainBackgroundMenu_o *__this,MethodInfo *method)

{
  UI_LoadingBackgroundPanel_o *__this_00;
  UI_MainMenuBackgroundPanel_o *pUVar1;
  UI_MainBackgroundMenu__WaitAndFinishBackground_d__12_o *__this_01;
  MethodInfo *in_RCX;
  
  __this_00 = (UI_LoadingBackgroundPanel_o *)(__this->fields)._mainBackgroundPanelFront;
  if (__this_00 != (UI_LoadingBackgroundPanel_o *)0x0) {
    UI_LoadingBackgroundPanel__SetRandomBackground(__this_00,false,false,in_RCX);
    pUVar1 = (__this->fields)._mainBackgroundPanelFront;
    if (pUVar1 != (UI_MainMenuBackgroundPanel_o *)0x0) {
      (*(pUVar1->klass->vtable)._21_Show.methodPtr)(pUVar1,(pUVar1->klass->vtable)._21_Show.method);
      if (Il2CppMethodInitialized_07547f3a == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_UI_MainBackgroundMenu_WaitAndFinishBackground_d__12);
        Il2CppMethodInitialized_07547f3a = '\x01';
      }
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_UI_MainBackgroundMenu_WaitAndFinishBackground_d__12);
      System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
      (__this_01->fields).__1__state = 0;
      (__this_01->fields).__4__this = __this;
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).__4__this);
      UnityEngine_MonoBehaviour__StartCoroutine_691c390
                ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_01,
                 (MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MainBackgroundMenu$$WaitAndFinishBackground
// il2cpp: System_Collections_IEnumerator_o* UI_MainBackgroundMenu__WaitAndFinishBackground (UI_MainBackgroundMenu_o* __this, const MethodInfo* method);
// 0x5d578b0

System_Collections_IEnumerator_o *
UI_MainBackgroundMenu__WaitAndFinishBackground(UI_MainBackgroundMenu_o *__this,MethodInfo *method)

{
  UI_MainBackgroundMenu__WaitAndFinishBackground_d__12_o *__this_00;
  
  if (Il2CppMethodInitialized_07547f3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MainBackgroundMenu_WaitAndFinishBackground_d__12);
    Il2CppMethodInitialized_07547f3a = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UI_MainBackgroundMenu_WaitAndFinishBackground_d__12);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.MainBackgroundMenu$$.ctor
// il2cpp: void UI_MainBackgroundMenu___ctor (UI_MainBackgroundMenu_o* __this, const MethodInfo* method);
// 0x5d57940

void UI_MainBackgroundMenu___ctor(UI_MainBackgroundMenu_o *__this,MethodInfo *method)

{
  (__this->fields).smoothTime = 0.3;
  (__this->fields).backgroundScale = 1.1;
  UI_BaseMenu___ctor((UI_BaseMenu_o *)__this,(MethodInfo *)0x0);
  return;
}


