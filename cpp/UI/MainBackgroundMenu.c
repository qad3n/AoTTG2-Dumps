// Type: UI.MainBackgroundMenu
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/MainBackgroundMenu.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/MainBackgroundMenu.cs
// --------------------------------

// UI.MainBackgroundMenu.<WaitAndFinishBackground>d__12$$.ctor
// il2cpp: void UI_MainBackgroundMenu__WaitAndFinishBackground_d__12___ctor (UI_MainBackgroundMenu__WaitAndFinishBackground_d__12_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
UI_MainBackgroundMenu__WaitAndFinishBackground_d__12___ctor(UI_MainBackgroundMenu__WaitAndFinishBackground_d__12_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.MainBackgroundMenu.<WaitAndFinishBackground>d__12$$System.IDisposable.Dispose
// il2cpp: void UI_MainBackgroundMenu__WaitAndFinishBackground_d__12__System_IDisposable_Dispose (UI_MainBackgroundMenu__WaitAndFinishBackground_d__12_o* __this, const MethodInfo* method);
// 0x180547020

void
UI_MainBackgroundMenu__WaitAndFinishBackground_d__12__System_IDisposable_Dispose(UI_MainBackgroundMenu__WaitAndFinishBackground_d__12_o* __this, MethodInfo* method)

{
  return;
}


// UI.MainBackgroundMenu.<WaitAndFinishBackground>d__12$$MoveNext
// il2cpp: bool UI_MainBackgroundMenu__WaitAndFinishBackground_d__12__MoveNext (UI_MainBackgroundMenu__WaitAndFinishBackground_d__12_o* __this, const MethodInfo* method);
// 0x18229d550

bool UI_MainBackgroundMenu__WaitAndFinishBackground_d__12__MoveNext
               (UI_MainBackgroundMenu__WaitAndFinishBackground_d__12_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_MainBackgroundMenu_o *pUVar2;
  UI_MainMenuBackgroundPanel_o *pUVar3;
  UI_LoadingBackgroundPanel_o *__this_00;
  Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *__this_01;
  
  if (Il2CppMethodInitialized_184347437 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    il2cpp_codegen_initialize_runtime_metadata(&"MainBackgrounds");
    Il2CppMethodInitialized_184347437 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 != 0) {
    if (iVar1 != 1) {
      return false;
    }
    pUVar2 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (((pUVar2 != (UI_MainBackgroundMenu_o *)0x0) &&
        (pUVar3 = (pUVar2->fields)._mainBackgroundPanelFront, pUVar3 != (UI_MainMenuBackgroundPanel_o *)0x0))
       && (__this_00 = (UI_LoadingBackgroundPanel_o *)(pUVar2->fields)._mainBackgroundPanelBack,
          __this_00 != (UI_LoadingBackgroundPanel_o *)0x0)) {
      UI_LoadingBackgroundPanel__SetBackground
                (__this_00,false,(pUVar3->fields).BackgroundIndex,"MainBackgrounds",(MethodInfo *)0x0);
      pUVar3 = (pUVar2->fields)._mainBackgroundPanelFront;
      if (pUVar3 != (UI_MainMenuBackgroundPanel_o *)0x0) {
        (*(pUVar3->klass->vtable)._58_HideImmediate.methodPtr)
                  (pUVar3,(pUVar3->klass->vtable)._58_HideImmediate.method);
        return false;
      }
    }
    ThrowNullReferenceException();
  }
  (__this->fields).__1__state = -1;
  __this_01 = (Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
  UnityEngine_WaitForSeconds___ctor(__this_01,1.5,(MethodInfo *)0x0);
  (__this->fields).__2__current = (Il2CppObject *)__this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,__this_01);
  (__this->fields).__1__state = 1;
  return true;
}


// UI.MainBackgroundMenu.<WaitAndFinishBackground>d__12$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_MainBackgroundMenu__WaitAndFinishBackground_d__12__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_MainBackgroundMenu__WaitAndFinishBackground_d__12_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_MainBackgroundMenu__WaitAndFinishBackground_d__12__System_Collections_Generic_IEnumerator_System_Object__get_Current(UI_MainBackgroundMenu__WaitAndFinishBackground_d__12_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.MainBackgroundMenu.<WaitAndFinishBackground>d__12$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_MainBackgroundMenu__WaitAndFinishBackground_d__12__System_Collections_IEnumerator_Reset (UI_MainBackgroundMenu__WaitAndFinishBackground_d__12_o* __this, const MethodInfo* method);
// 0x18229d660

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
// 0x180573e90

Il2CppObject*
UI_MainBackgroundMenu__WaitAndFinishBackground_d__12__System_Collections_IEnumerator_get_Current(UI_MainBackgroundMenu__WaitAndFinishBackground_d__12_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.MainBackgroundMenu$$Setup
// il2cpp: void UI_MainBackgroundMenu__Setup (UI_MainBackgroundMenu_o* __this, const MethodInfo* method);
// 0x18228da50

void UI_MainBackgroundMenu__Setup(UI_MainBackgroundMenu_o *__this,MethodInfo *method)

{
  UI_MainBackgroundMenu__SetupMainBackground(__this,(MethodInfo *)0x0);
  return;
}


// UI.MainBackgroundMenu$$SetupMainBackground
// il2cpp: void UI_MainBackgroundMenu__SetupMainBackground (UI_MainBackgroundMenu_o* __this, const MethodInfo* method);
// 0x18228d750

void UI_MainBackgroundMenu__SetupMainBackground(UI_MainBackgroundMenu_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  UI_LoadingBackgroundPanel_o *__this_00;
  UnityEngine_Vector3_StaticFields *pUVar6;
  UI_MainMenuBackgroundPanel_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  UI_MainMenuBackgroundPanel_o *pUVar9;
  UnityEngine_RectTransform_o *pUVar10;
  UnityEngine_GameObject_o *pUVar11;
  ParallaxEffect_o *pPVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  UnityEngine_Vector3_Fields local_18;
  
  if (Il2CppMethodInitialized_184347433 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateDefaultPopup_MainMenuBackgroundPanel);
    Il2CppMethodInitialized_184347433 = '\x01';
  }
  pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar9 = UI_ElementFactory__CreateHeadedPanel_object_
                     (pUVar8,false,
                      (MethodInfo_6ABA40 *)
                      MethodInfo_UI_ElementFactory_CreateDefaultPopup_MainMenuBackgroundPanel);
  (__this->fields)._mainBackgroundPanelBack = pUVar9;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._mainBackgroundPanelBack,pUVar9);
  pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar9 = UI_ElementFactory__CreateHeadedPanel_object_
                     (pUVar8,false,
                      (MethodInfo_6ABA40 *)
                      MethodInfo_UI_ElementFactory_CreateDefaultPopup_MainMenuBackgroundPanel);
  (__this->fields)._mainBackgroundPanelFront = pUVar9;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._mainBackgroundPanelFront,pUVar9);
  __this_00 = (UI_LoadingBackgroundPanel_o *)(__this->fields)._mainBackgroundPanelBack;
  if (__this_00 != (UI_LoadingBackgroundPanel_o *)0x0) {
    UI_LoadingBackgroundPanel__SetRandomBackground(__this_00,false,true,(MethodInfo *)0x0);
    pUVar9 = (__this->fields)._mainBackgroundPanelBack;
    if (pUVar9 != (UI_MainMenuBackgroundPanel_o *)0x0) {
      pUVar10 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar9,
                           (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
      if (Il2CppMethodInitialized_18433dbeb == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433dbeb = '\x01';
      }
      fVar1 = (__this->fields).backgroundScale;
      pUVar6 = TypeInfo_UnityEngine_Vector3->static_fields;
      uVar2 = (pUVar6->oneVector).fields.x;
      uVar4 = (pUVar6->oneVector).fields.y;
      uVar13._0_4_ = (float)uVar2 * fVar1;
      uVar13._4_4_ = (float)uVar4 * fVar1;
      if (pUVar10 != (UnityEngine_RectTransform_o *)0x0) {
        local_18.z = fVar1 * (pUVar6->oneVector).fields.z;
        local_18._0_8_ = uVar13;
        UnityEngine_Transform__set_localScale
                  ((UnityEngine_Transform_o *)pUVar10,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
        pUVar9 = (__this->fields)._mainBackgroundPanelFront;
        if (pUVar9 != (UI_MainMenuBackgroundPanel_o *)0x0) {
          pUVar10 = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pUVar9,
                               (MethodInfo_6651A0 *)
                               MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
          if (Il2CppMethodInitialized_18433dbeb == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_18433dbeb = '\x01';
          }
          fVar1 = (__this->fields).backgroundScale;
          pUVar6 = TypeInfo_UnityEngine_Vector3->static_fields;
          uVar3 = (pUVar6->oneVector).fields.x;
          uVar5 = (pUVar6->oneVector).fields.y;
          uVar14._0_4_ = (float)uVar3 * fVar1;
          uVar14._4_4_ = (float)uVar5 * fVar1;
          if (pUVar10 != (UnityEngine_RectTransform_o *)0x0) {
            local_18.z = fVar1 * (pUVar6->oneVector).fields.z;
            local_18._0_8_ = uVar14;
            UnityEngine_Transform__set_localScale
                      ((UnityEngine_Transform_o *)pUVar10,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0
                      );
            pUVar9 = (__this->fields)._mainBackgroundPanelBack;
            if (pUVar9 != (UI_MainMenuBackgroundPanel_o *)0x0) {
              UI_BasePopup__ShowImmediate((UI_BasePopup_o *)pUVar9,(MethodInfo *)0x0);
              pUVar9 = (__this->fields)._mainBackgroundPanelBack;
              if ((pUVar9 != (UI_MainMenuBackgroundPanel_o *)0x0) &&
                 (pUVar7 = (__this->fields)._mainBackgroundPanelFront,
                 pUVar7 != (UI_MainMenuBackgroundPanel_o *)0x0)) {
                (pUVar7->fields).BackgroundIndex = (pUVar9->fields).BackgroundIndex;
                pUVar9 = (__this->fields)._mainBackgroundPanelBack;
                if (pUVar9 != (UI_MainMenuBackgroundPanel_o *)0x0) {
                  pUVar11 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
                  if (Il2CppMethodInitialized_184347434 == '\0') {
                    il2cpp_codegen_initialize_runtime_metadata
                              (&MethodInfo_UnityEngine_GameObject_AddComponent_ParallaxEffect);
                    Il2CppMethodInitialized_184347434 = '\x01';
                  }
                  if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
                    pPVar12 = UnityEngine_GameObject__AddComponent_object_
                                        (pUVar11,(MethodInfo_6F4D60 *)
                                                 MethodInfo_UnityEngine_GameObject_AddComponent_ParallaxEffect
                                        );
                    if (pPVar12 != (ParallaxEffect_o *)0x0) {
                      (pPVar12->fields).parallaxIntensity = 0.5;
                      (pPVar12->fields).scale = 1.1;
                      (pPVar12->fields).smoothTime = 0.6;
                      pUVar9 = (__this->fields)._mainBackgroundPanelFront;
                      if (pUVar9 != (UI_MainMenuBackgroundPanel_o *)0x0) {
                        pUVar11 = UnityEngine_Component__get_gameObject
                                            ((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
                        if (Il2CppMethodInitialized_184347434 == '\0') {
                          il2cpp_codegen_initialize_runtime_metadata
                                    (&MethodInfo_UnityEngine_GameObject_AddComponent_ParallaxEffect);
                          Il2CppMethodInitialized_184347434 = '\x01';
                        }
                        if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
                          pPVar12 = UnityEngine_GameObject__AddComponent_object_
                                              (pUVar11,(MethodInfo_6F4D60 *)
                                                       MethodInfo_UnityEngine_GameObject_AddComponent_ParallaxEffect
                                              );
                          if (pPVar12 != (ParallaxEffect_o *)0x0) {
                            (pPVar12->fields).parallaxIntensity = 0.5;
                            (pPVar12->fields).scale = 1.1;
                            (pPVar12->fields).smoothTime = 0.6;
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
  ThrowNullReferenceException();
}


// UI.MainBackgroundMenu$$AddParallaxEffect
// il2cpp: void UI_MainBackgroundMenu__AddParallaxEffect (UI_MainBackgroundMenu_o* __this, UnityEngine_GameObject_o* target, float intensity, const MethodInfo* method);
// 0x18228d4e0

void UI_MainBackgroundMenu__AddParallaxEffect
               (UI_MainBackgroundMenu_o *__this,UnityEngine_GameObject_o *target,float intensity,
               MethodInfo *method)

{
  ParallaxEffect_o *pPVar1;
  
  if (Il2CppMethodInitialized_184347434 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_ParallaxEffect)
    ;
    Il2CppMethodInitialized_184347434 = '\x01';
  }
  if (target != (UnityEngine_GameObject_o *)0x0) {
    pPVar1 = UnityEngine_GameObject__AddComponent_object_
                       (target,(MethodInfo_6F4D60 *)
                               MethodInfo_UnityEngine_GameObject_AddComponent_ParallaxEffect);
    if (pPVar1 != (ParallaxEffect_o *)0x0) {
      (pPVar1->fields).parallaxIntensity = intensity;
      (pPVar1->fields).scale = 1.1;
      (pPVar1->fields).smoothTime = 0.6;
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MainBackgroundMenu$$Update
// il2cpp: void UI_MainBackgroundMenu__Update (UI_MainBackgroundMenu_o* __this, const MethodInfo* method);
// 0x18228da60

void UI_MainBackgroundMenu__Update(UI_MainBackgroundMenu_o *__this,MethodInfo *method)

{
  float fVar1;
  UI_MainMenuBackgroundPanel_o *pUVar2;
  int32_t iVar3;
  UnityEngine_Vector3_o *pUVar4;
  UnityEngine_RectTransform_o *pUVar5;
  UnityEngine_RectTransform_o *pUVar6;
  UnityEngine_Vector2_o UVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  UnityEngine_Vector2_o local_res8;
  UnityEngine_Vector2_Fields local_res18 [2];
  UnityEngine_Vector3_o local_88 [10];
  
  if (Il2CppMethodInitialized_184347435 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    Il2CppMethodInitialized_184347435 = '\x01';
  }
  pUVar4 = UnityEngine_Input__get_mousePosition(local_88,(MethodInfo *)0x0);
  fVar9 = (__this->fields).backgroundScale;
  fVar1 = (pUVar4->fields).x;
  fVar8 = (pUVar4->fields).y;
  iVar3 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  fVar11 = (float)(iVar3 / 2) * (fVar9 - 1.0);
  fVar9 = (__this->fields).backgroundScale;
  iVar3 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  fVar12 = (float)(iVar3 / 2) * (fVar9 - 1.0);
  fVar9 = -fVar11;
  fVar10 = -fVar12;
  iVar3 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  fVar9 = ((fVar1 - 0.0) / ((float)iVar3 - 0.0)) * (fVar11 - fVar9) + fVar9;
  iVar3 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  pUVar2 = (__this->fields)._mainBackgroundPanelBack;
  fVar10 = ((fVar8 - 0.0) / ((float)iVar3 - 0.0)) * (fVar12 - fVar10) + fVar10;
  if (pUVar2 != (UI_MainMenuBackgroundPanel_o *)0x0) {
    pUVar5 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)pUVar2,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    pUVar2 = (__this->fields)._mainBackgroundPanelBack;
    if (pUVar2 != (UI_MainMenuBackgroundPanel_o *)0x0) {
      pUVar6 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)pUVar2,
                          (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
      if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
        local_res18[0] =
             (UnityEngine_Vector2_Fields)
             UnityEngine_RectTransform__get_anchoredPosition(pUVar6,(MethodInfo *)0x0);
        fVar1 = (__this->fields).smoothTime;
        local_res8.fields.x = fVar9;
        local_res8.fields.y = fVar10;
        fVar8 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        UVar7 = UnityEngine_Vector2__SmoothDamp_2f0b1f0
                          ((UnityEngine_Vector2_o *)local_res18,&local_res8,&(__this->fields).currentVelocity,
                           fVar1,INFINITY,fVar8,(MethodInfo *)0x0);
        if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
          UnityEngine_RectTransform__set_anchoredPosition(pUVar5,UVar7,(MethodInfo *)0x0);
          pUVar2 = (__this->fields)._mainBackgroundPanelFront;
          if (pUVar2 != (UI_MainMenuBackgroundPanel_o *)0x0) {
            pUVar5 = UnityEngine_Component__GetComponent_object_
                               ((UnityEngine_Component_o *)pUVar2,
                                (MethodInfo_6651A0 *)
                                MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
            pUVar2 = (__this->fields)._mainBackgroundPanelFront;
            if (pUVar2 != (UI_MainMenuBackgroundPanel_o *)0x0) {
              pUVar6 = UnityEngine_Component__GetComponent_object_
                                 ((UnityEngine_Component_o *)pUVar2,
                                  (MethodInfo_6651A0 *)
                                  MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
              if (pUVar6 != (UnityEngine_RectTransform_o *)0x0) {
                local_res18[0] =
                     (UnityEngine_Vector2_Fields)
                     UnityEngine_RectTransform__get_anchoredPosition(pUVar6,(MethodInfo *)0x0);
                fVar1 = (__this->fields).smoothTime;
                local_res8.fields.x = fVar9;
                local_res8.fields.y = fVar10;
                fVar9 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
                UVar7 = UnityEngine_Vector2__SmoothDamp_2f0b1f0
                                  ((UnityEngine_Vector2_o *)local_res18,&local_res8,
                                   &(__this->fields).currentVelocity,fVar1,INFINITY,fVar9,(MethodInfo *)0x0);
                if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
                  UnityEngine_RectTransform__set_anchoredPosition(pUVar5,UVar7,(MethodInfo *)0x0);
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
// 0x18228d610

UnityEngine_Vector2_o
UI_MainBackgroundMenu__GetConstrainedTargetPosition
          (UI_MainBackgroundMenu_o *__this,UnityEngine_Vector2_o mousePosition,MethodInfo *method)

{
  int32_t iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  UnityEngine_Vector2_Fields UVar6;
  float fStackX_c;
  
  fVar2 = (__this->fields).backgroundScale;
  iVar1 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  fVar4 = (float)(iVar1 / 2) * (fVar2 - 1.0);
  fVar2 = (__this->fields).backgroundScale;
  iVar1 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  fVar5 = (float)(iVar1 / 2) * (fVar2 - 1.0);
  fVar2 = -fVar4;
  fVar3 = -fVar5;
  iVar1 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  UVar6.x = ((mousePosition.fields.x - 0.0) / ((float)iVar1 - 0.0)) * (fVar4 - fVar2) + fVar2;
  fStackX_c = mousePosition.fields.y;
  iVar1 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  UVar6.y = ((fStackX_c - 0.0) / ((float)iVar1 - 0.0)) * (fVar5 - fVar3) + fVar3;
  return (UnityEngine_Vector2_o)UVar6;
}


// UI.MainBackgroundMenu$$MapRange
// il2cpp: float UI_MainBackgroundMenu__MapRange (UI_MainBackgroundMenu_o* __this, float value, float fromSource, float toSource, float fromTarget, float toTarget, const MethodInfo* method);
// 0x181dabc40

float UI_MainBackgroundMenu__MapRange
                (UI_MainBackgroundMenu_o *__this,float value,float fromSource,float toSource,float fromTarget,
                float toTarget,MethodInfo *method)

{
  return ((value - fromSource) / (toSource - fromSource)) * (toTarget - fromTarget) + fromTarget;
}


// UI.MainBackgroundMenu$$ChangeMainBackground
// il2cpp: void UI_MainBackgroundMenu__ChangeMainBackground (UI_MainBackgroundMenu_o* __this, const MethodInfo* method);
// 0x18228d550

void UI_MainBackgroundMenu__ChangeMainBackground(UI_MainBackgroundMenu_o *__this,MethodInfo *method)

{
  UI_LoadingBackgroundPanel_o *__this_00;
  UI_MainMenuBackgroundPanel_o *pUVar1;
  UI_MainBackgroundMenu__WaitAndFinishBackground_d__12_o *routine;
  
  __this_00 = (UI_LoadingBackgroundPanel_o *)(__this->fields)._mainBackgroundPanelFront;
  if (__this_00 != (UI_LoadingBackgroundPanel_o *)0x0) {
    UI_LoadingBackgroundPanel__SetRandomBackground(__this_00,false,false,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._mainBackgroundPanelFront;
    if (pUVar1 != (UI_MainMenuBackgroundPanel_o *)0x0) {
      (*(pUVar1->klass->vtable)._21_Show.methodPtr)(pUVar1,(pUVar1->klass->vtable)._21_Show.method);
      if (Il2CppMethodInitialized_184347436 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_UI_MainBackgroundMenu_WaitAndFinishBackground_d__12);
        Il2CppMethodInitialized_184347436 = '\x01';
      }
      routine = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_UI_MainBackgroundMenu_WaitAndFinishBackground_d__12);
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
      (routine->fields).__1__state = 0;
      (routine->fields).__4__this = __this;
      Il2CppCodeGenWriteBarrier(&(routine->fields).__4__this,__this);
      UnityEngine_MonoBehaviour__StartCoroutine_Auto
                ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)routine,
                 (MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MainBackgroundMenu$$WaitAndFinishBackground
// il2cpp: System_Collections_IEnumerator_o* UI_MainBackgroundMenu__WaitAndFinishBackground (UI_MainBackgroundMenu_o* __this, const MethodInfo* method);
// 0x18228dd60

System_Collections_IEnumerator_o *
UI_MainBackgroundMenu__WaitAndFinishBackground(UI_MainBackgroundMenu_o *__this,MethodInfo *method)

{
  UI_MainBackgroundMenu__WaitAndFinishBackground_d__12_o *__this_00;
  
  if (Il2CppMethodInitialized_184347436 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MainBackgroundMenu_WaitAndFinishBackground_d__12);
    Il2CppMethodInitialized_184347436 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UI_MainBackgroundMenu_WaitAndFinishBackground_d__12);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.MainBackgroundMenu$$.ctor
// il2cpp: void UI_MainBackgroundMenu___ctor (UI_MainBackgroundMenu_o* __this, const MethodInfo* method);
// 0x18228ddd0

void UI_MainBackgroundMenu___ctor(UI_MainBackgroundMenu_o *__this,MethodInfo *method)

{
  (__this->fields).smoothTime = 0.3;
  (__this->fields).backgroundScale = 1.1;
  UI_BaseMenu___ctor((UI_BaseMenu_o *)__this,(MethodInfo *)0x0);
  return;
}


