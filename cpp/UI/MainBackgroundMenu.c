// Type: UI.MainBackgroundMenu
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/MainBackgroundMenu.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/MainBackgroundMenu.cs
// --------------------------------

// UI.MainBackgroundMenu.<WaitAndFinishBackground>d__12$$.ctor
// il2cpp: void UI_MainBackgroundMenu__WaitAndFinishBackground_d__12___ctor (UI_MainBackgroundMenu__WaitAndFinishBackground_d__12_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4406260

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
// 0x44062a0

void UI_MainBackgroundMenu__WaitAndFinishBackground_d__12__System_IDisposable_Dispose
               (UI_MainBackgroundMenu__WaitAndFinishBackground_d__12_o *__this,MethodInfo *method)

{
  return;
}


// UI.MainBackgroundMenu.<WaitAndFinishBackground>d__12$$MoveNext
// il2cpp: bool UI_MainBackgroundMenu__WaitAndFinishBackground_d__12__MoveNext (UI_MainBackgroundMenu__WaitAndFinishBackground_d__12_o* __this, const MethodInfo* method);
// 0x44062b0

bool_conflict
UI_MainBackgroundMenu__WaitAndFinishBackground_d__12__MoveNext
          (UI_MainBackgroundMenu__WaitAndFinishBackground_d__12_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_MainBackgroundMenu_o *pUVar2;
  UI_MainMenuBackgroundPanel_o *pUVar3;
  UI_LoadingBackgroundPanel_o *__this_00;
  UnityEngine_WaitForSeconds_o *__this_01;
  undefined8 uVar4;
  System_String_o **ppSVar5;
  
  ppSVar5 = (System_String_o **)__this;
  if (g_data_057ae5a6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitForSeconds);
    ppSVar5 = &"MainBackgrounds";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae5a6 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    pUVar2 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if ((pUVar2 != (UI_MainBackgroundMenu_o *)0x0) &&
       (pUVar3 = (pUVar2->fields)._mainBackgroundPanelFront, pUVar3 != (UI_MainMenuBackgroundPanel_o *)0x0)) {
      __this_00 = (UI_LoadingBackgroundPanel_o *)(pUVar2->fields)._mainBackgroundPanelBack;
      ppSVar5 = (System_String_o **)0x0;
      if (__this_00 != (UI_LoadingBackgroundPanel_o *)0x0) {
        UI_LoadingBackgroundPanel__SetBackground
                  (__this_00,0,(pUVar3->fields).BackgroundIndex,"MainBackgrounds",(MethodInfo *)0x0);
        pUVar3 = (pUVar2->fields)._mainBackgroundPanelFront;
        ppSVar5 = (System_String_o **)0x0;
        if (pUVar3 != (UI_MainMenuBackgroundPanel_o *)0x0) {
          (*(pUVar3->klass->vtable)._55_HideImmediate.methodPtr)
                    (pUVar3,(pUVar3->klass->vtable)._55_HideImmediate.method);
          return 0;
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    return (bool_conflict)
           (((UI_MainBackgroundMenu__WaitAndFinishBackground_d__12_o *)ppSVar5)->fields).__2__current;
  }
  if (iVar1 != 0) {
    return 0;
  }
  (__this->fields).__1__state = -1;
  __this_01 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForSeconds);
  UnityEngine_WaitForSeconds___ctor(__this_01,1.5,(MethodInfo *)0x0);
  (__this->fields).__2__current = (Il2CppObject *)__this_01;
  uVar4 = il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,__this_01);
  (__this->fields).__1__state = 1;
  return (bool_conflict)CONCAT71((int7)((ulong)uVar4 >> 8),1);
}


// UI.MainBackgroundMenu.<WaitAndFinishBackground>d__12$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_MainBackgroundMenu__WaitAndFinishBackground_d__12__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_MainBackgroundMenu__WaitAndFinishBackground_d__12_o* __this, const MethodInfo* method);
// 0x44063b0

Il2CppObject *
UI_MainBackgroundMenu__WaitAndFinishBackground_d__12__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_MainBackgroundMenu__WaitAndFinishBackground_d__12_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.MainBackgroundMenu.<WaitAndFinishBackground>d__12$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_MainBackgroundMenu__WaitAndFinishBackground_d__12__System_Collections_IEnumerator_Reset (UI_MainBackgroundMenu__WaitAndFinishBackground_d__12_o* __this, const MethodInfo* method);
// 0x44063c0

void UI_MainBackgroundMenu__WaitAndFinishBackground_d__12__System_Collections_IEnumerator_Reset
               (UI_MainBackgroundMenu__WaitAndFinishBackground_d__12_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// UI.MainBackgroundMenu.<WaitAndFinishBackground>d__12$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_MainBackgroundMenu__WaitAndFinishBackground_d__12__System_Collections_IEnumerator_get_Current (UI_MainBackgroundMenu__WaitAndFinishBackground_d__12_o* __this, const MethodInfo* method);
// 0x4406400

Il2CppObject *
UI_MainBackgroundMenu__WaitAndFinishBackground_d__12__System_Collections_IEnumerator_get_Current
          (UI_MainBackgroundMenu__WaitAndFinishBackground_d__12_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.MainBackgroundMenu$$Setup
// il2cpp: void UI_MainBackgroundMenu__Setup (UI_MainBackgroundMenu_o* __this, const MethodInfo* method);
// 0x4405a90

void UI_MainBackgroundMenu__Setup(UI_MainBackgroundMenu_o *__this,MethodInfo *method)

{
  UI_MainMenuBackgroundPanel_o **ppUVar1;
  UI_MainMenuBackgroundPanel_o **ppUVar2;
  UnityEngine_GameObject_o **currentVelocity;
  undefined8 uVar3;
  UI_LoadingBackgroundPanel_o *__this_00;
  System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *pSVar4;
  UnityEngine_Vector2_o UVar5;
  UnityEngine_Vector2_o target;
  int32_t iVar6;
  int32_t iVar7;
  int32_t iVar8;
  int32_t iVar9;
  UnityEngine_Transform_o *pUVar10;
  UI_MainMenuBackgroundPanel_o *pUVar11;
  UI_MainMenuBackgroundPanel_o *__this_01;
  UI_MainMenuBackgroundPanel_o *pUVar12;
  Il2CppObject *pIVar13;
  UnityEngine_RectTransform_o *pUVar14;
  UnityEngine_RectTransform_o *pUVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o UVar20;
  float fStack_98;
  float fStack_94;
  
  if (g_data_057ae5a2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MainMenuBackgroundPanel_CreateDefaultPopup_MainMenuBackg);
    g_data_057ae5a2 = '\x01';
  }
  pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar11 = (UI_MainMenuBackgroundPanel_o *)
            UI_ElementFactory__CreateDefaultPopup_object_(pUVar10,0,MethodInfo_MainMenuBackgroundPanel_CreateDefaultPopup_MainMenuBackg);
  ppUVar1 = &(__this->fields)._mainBackgroundPanelBack;
  (__this->fields)._mainBackgroundPanelBack = pUVar11;
  il2cpp_runtime_helper_022b4080(ppUVar1);
  pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  __this_01 = (UI_MainMenuBackgroundPanel_o *)
              UI_ElementFactory__CreateDefaultPopup_object_(pUVar10,0,MethodInfo_MainMenuBackgroundPanel_CreateDefaultPopup_MainMenuBackg);
  ppUVar2 = &(__this->fields)._mainBackgroundPanelFront;
  (__this->fields)._mainBackgroundPanelFront = __this_01;
  il2cpp_runtime_helper_022b4080(ppUVar2);
  __this_00 = (UI_LoadingBackgroundPanel_o *)(__this->fields)._mainBackgroundPanelBack;
  pUVar11 = (UI_MainMenuBackgroundPanel_o *)0x0;
  if (__this_00 != (UI_LoadingBackgroundPanel_o *)0x0) {
    __this_01 = (UI_MainMenuBackgroundPanel_o *)0x0;
    UI_LoadingBackgroundPanel__SetRandomBackground(__this_00,0,1,(MethodInfo *)0x0);
    pUVar11 = *ppUVar1;
    if (pUVar11 != (UI_MainMenuBackgroundPanel_o *)0x0) {
      __this_01 = MethodInfo_RectTransform_GetComponent_RectTransform;
      pUVar10 = (UnityEngine_Transform_o *)
                UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar11,(MethodInfo_24E7B40 *)MethodInfo_RectTransform_GetComponent_RectTransform);
      if (g_data_057a6932 == '\0') {
        pUVar11 = (UI_MainMenuBackgroundPanel_o *)&TypeInfo_Vector3;
        il2cpp_runtime_helper_023445d0();
        g_data_057a6932 = '\x01';
      }
      if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
        fVar18 = (__this->fields).backgroundScale;
        uVar3 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
        UVar20.fields.x = fVar18 * (float)uVar3;
        UVar20.fields.y = fVar18 * (float)((ulong)uVar3 >> 0x20);
        UVar20.fields.z = fVar18 * *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
        __this_01 = (UI_MainMenuBackgroundPanel_o *)0x0;
        UnityEngine_Transform__set_localScale(pUVar10,UVar20,(MethodInfo *)0x0);
        pUVar11 = *ppUVar2;
        if (pUVar11 != (UI_MainMenuBackgroundPanel_o *)0x0) {
          __this_01 = MethodInfo_RectTransform_GetComponent_RectTransform;
          pUVar10 = (UnityEngine_Transform_o *)
                    UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pUVar11,(MethodInfo_24E7B40 *)MethodInfo_RectTransform_GetComponent_RectTransform);
          if (g_data_057a6932 == '\0') {
            pUVar11 = (UI_MainMenuBackgroundPanel_o *)&TypeInfo_Vector3;
            il2cpp_runtime_helper_023445d0();
            g_data_057a6932 = '\x01';
          }
          if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
            fVar18 = (__this->fields).backgroundScale;
            uVar3 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
            value.fields.x = fVar18 * (float)uVar3;
            value.fields.y = fVar18 * (float)((ulong)uVar3 >> 0x20);
            value.fields.z = fVar18 * *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
            __this_01 = (UI_MainMenuBackgroundPanel_o *)0x0;
            UnityEngine_Transform__set_localScale(pUVar10,value,(MethodInfo *)0x0);
            pUVar11 = (UI_MainMenuBackgroundPanel_o *)0x0;
            if (*ppUVar1 != (UI_MainMenuBackgroundPanel_o *)0x0) {
              __this_01 = (UI_MainMenuBackgroundPanel_o *)0x0;
              UI_BasePopup__ShowImmediate((UI_BasePopup_o *)*ppUVar1,(MethodInfo *)0x0);
              pUVar11 = *ppUVar1;
              if ((pUVar11 != (UI_MainMenuBackgroundPanel_o *)0x0) &&
                 (*ppUVar2 != (UI_MainMenuBackgroundPanel_o *)0x0)) {
                ((*ppUVar2)->fields).BackgroundIndex = (pUVar11->fields).BackgroundIndex;
                __this_01 = (UI_MainMenuBackgroundPanel_o *)0x0;
                pUVar12 = (UI_MainMenuBackgroundPanel_o *)
                          UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pUVar11,(MethodInfo *)0x0);
                if (g_data_057ae5a3 == '\0') {
                  pUVar11 = (UI_MainMenuBackgroundPanel_o *)&MethodInfo_ParallaxEffect_AddComponent_ParallaxEffect;
                  il2cpp_runtime_helper_023445d0();
                  g_data_057ae5a3 = '\x01';
                }
                if (pUVar12 != (UI_MainMenuBackgroundPanel_o *)0x0) {
                  __this_01 = MethodInfo_ParallaxEffect_AddComponent_ParallaxEffect;
                  pIVar13 = UnityEngine_GameObject__AddComponent_object_
                                      ((UnityEngine_GameObject_o *)pUVar12,(MethodInfo_255A020 *)MethodInfo_ParallaxEffect_AddComponent_ParallaxEffect)
                  ;
                  pUVar11 = pUVar12;
                  if (pIVar13 != (Il2CppObject *)0x0) {
                    pIVar13[2].klass = (Il2CppClass *)0x3f19999a3f000000;
                    *(undefined4 *)&pIVar13[2].monitor = 0x3f8ccccd;
                    pUVar11 = *ppUVar2;
                    if (pUVar11 != (UI_MainMenuBackgroundPanel_o *)0x0) {
                      __this_01 = (UI_MainMenuBackgroundPanel_o *)0x0;
                      pUVar12 = (UI_MainMenuBackgroundPanel_o *)
                                UnityEngine_Component__get_gameObject
                                          ((UnityEngine_Component_o *)pUVar11,(MethodInfo *)0x0);
                      if (g_data_057ae5a3 == '\0') {
                        pUVar11 = (UI_MainMenuBackgroundPanel_o *)&MethodInfo_ParallaxEffect_AddComponent_ParallaxEffect;
                        il2cpp_runtime_helper_023445d0();
                        g_data_057ae5a3 = '\x01';
                      }
                      if (pUVar12 != (UI_MainMenuBackgroundPanel_o *)0x0) {
                        __this_01 = MethodInfo_ParallaxEffect_AddComponent_ParallaxEffect;
                        pIVar13 = UnityEngine_GameObject__AddComponent_object_
                                            ((UnityEngine_GameObject_o *)pUVar12,
                                             (MethodInfo_255A020 *)MethodInfo_ParallaxEffect_AddComponent_ParallaxEffect);
                        pUVar11 = pUVar12;
                        if (pIVar13 != (Il2CppObject *)0x0) {
                          pIVar13[2].klass = (Il2CppClass *)0x3f19999a3f000000;
                          *(undefined4 *)&pIVar13[2].monitor = 0x3f8ccccd;
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
  uVar16 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae5a3 == '\0') {
    pUVar11 = (UI_MainMenuBackgroundPanel_o *)&MethodInfo_ParallaxEffect_AddComponent_ParallaxEffect;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae5a3 = '\x01';
  }
  if (__this_01 != (UI_MainMenuBackgroundPanel_o *)0x0) {
    pIVar13 = UnityEngine_GameObject__AddComponent_object_
                        ((UnityEngine_GameObject_o *)__this_01,(MethodInfo_255A020 *)MethodInfo_ParallaxEffect_AddComponent_ParallaxEffect);
    pUVar11 = __this_01;
    if (pIVar13 != (Il2CppObject *)0x0) {
      *(undefined4 *)&pIVar13[2].klass = uVar16;
      *(undefined8 *)((long)&pIVar13[2].klass + 4) = 0x3f8ccccd3f19999a;
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae5a4 == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057ae5a4 = '\x01';
  }
  UVar20 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
  fVar18 = *(float *)&(pUVar11->fields).field_0xa4;
  iVar6 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  fVar17 = *(float *)&(pUVar11->fields).field_0xa4;
  iVar7 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  iVar8 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  iVar9 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  pSVar4 = (pUVar11->fields).killPopupKeyframesIn;
  if (pSVar4 != (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)0x0) {
    pUVar14 = (UnityEngine_RectTransform_o *)
              UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pSVar4,(MethodInfo_24E7B40 *)MethodInfo_RectTransform_GetComponent_RectTransform);
    pSVar4 = (pUVar11->fields).killPopupKeyframesIn;
    if (pSVar4 != (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)0x0) {
      pUVar15 = (UnityEngine_RectTransform_o *)
                UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pSVar4,(MethodInfo_24E7B40 *)MethodInfo_RectTransform_GetComponent_RectTransform);
      if (pUVar15 != (UnityEngine_RectTransform_o *)0x0) {
        fVar19 = (fVar18 + -1.0) * (float)(iVar6 / 2);
        fVar18 = (fVar17 + -1.0) * (float)(iVar7 / 2);
        fStack_98 = UVar20.fields.x;
        fStack_94 = UVar20.fields.y;
        target.fields.y = (fVar18 + fVar18) * (fStack_94 / (float)iVar9) - fVar18;
        target.fields.x = (fVar19 + fVar19) * (fStack_98 / (float)iVar8) - fVar19;
        UVar5 = UnityEngine_RectTransform__get_anchoredPosition(pUVar15,(MethodInfo *)0x0);
        currentVelocity = &(pUVar11->fields)._background;
        fVar18 = (float)(pUVar11->fields).BackgroundIndex;
        fVar17 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        UVar5 = UnityEngine_Vector2__SmoothDamp_4def270
                          (UVar5,target,(UnityEngine_Vector2_o *)currentVelocity,fVar18,INFINITY,fVar17,
                           (MethodInfo *)0x0);
        if (pUVar14 != (UnityEngine_RectTransform_o *)0x0) {
          UnityEngine_RectTransform__set_anchoredPosition(pUVar14,UVar5,(MethodInfo *)0x0);
          pSVar4 = (pUVar11->fields).killPopupKeyframesOut;
          if (pSVar4 != (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)0x0) {
            pUVar14 = (UnityEngine_RectTransform_o *)
                      UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)pSVar4,(MethodInfo_24E7B40 *)MethodInfo_RectTransform_GetComponent_RectTransform);
            pSVar4 = (pUVar11->fields).killPopupKeyframesOut;
            if (pSVar4 != (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)0x0) {
              pUVar15 = (UnityEngine_RectTransform_o *)
                        UnityEngine_Component__GetComponent_object_
                                  ((UnityEngine_Component_o *)pSVar4,(MethodInfo_24E7B40 *)MethodInfo_RectTransform_GetComponent_RectTransform);
              if (pUVar15 != (UnityEngine_RectTransform_o *)0x0) {
                UVar5 = UnityEngine_RectTransform__get_anchoredPosition(pUVar15,(MethodInfo *)0x0);
                fVar18 = (float)(pUVar11->fields).BackgroundIndex;
                fVar17 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
                UVar5 = UnityEngine_Vector2__SmoothDamp_4def270
                                  (UVar5,target,(UnityEngine_Vector2_o *)currentVelocity,fVar18,INFINITY,
                                   fVar17,(MethodInfo *)0x0);
                if (pUVar14 != (UnityEngine_RectTransform_o *)0x0) {
                  UnityEngine_RectTransform__set_anchoredPosition(pUVar14,UVar5,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_Screen__get_width((MethodInfo *)0x0);
  UnityEngine_Screen__get_height((MethodInfo *)0x0);
  UnityEngine_Screen__get_width((MethodInfo *)0x0);
  UnityEngine_Screen__get_height((MethodInfo *)0x0);
  return;
}


// UI.MainBackgroundMenu$$SetupMainBackground
// il2cpp: void UI_MainBackgroundMenu__SetupMainBackground (UI_MainBackgroundMenu_o* __this, const MethodInfo* method);
// 0x4405aa0

void UI_MainBackgroundMenu__SetupMainBackground(UI_MainBackgroundMenu_o *__this,MethodInfo *method)

{
  UI_MainMenuBackgroundPanel_o **ppUVar1;
  UI_MainMenuBackgroundPanel_o **ppUVar2;
  UnityEngine_GameObject_o **currentVelocity;
  undefined8 uVar3;
  UI_LoadingBackgroundPanel_o *__this_00;
  System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *pSVar4;
  UnityEngine_Vector2_o UVar5;
  UnityEngine_Vector2_o target;
  int32_t iVar6;
  int32_t iVar7;
  int32_t iVar8;
  int32_t iVar9;
  UnityEngine_Transform_o *pUVar10;
  UI_MainMenuBackgroundPanel_o *pUVar11;
  UI_MainMenuBackgroundPanel_o *__this_01;
  UI_MainMenuBackgroundPanel_o *pUVar12;
  Il2CppObject *pIVar13;
  UnityEngine_RectTransform_o *pUVar14;
  UnityEngine_RectTransform_o *pUVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o UVar20;
  float fStack_98;
  float fStack_94;
  
  if (g_data_057ae5a2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MainMenuBackgroundPanel_CreateDefaultPopup_MainMenuBackg);
    g_data_057ae5a2 = '\x01';
  }
  pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar11 = (UI_MainMenuBackgroundPanel_o *)
            UI_ElementFactory__CreateDefaultPopup_object_(pUVar10,0,MethodInfo_MainMenuBackgroundPanel_CreateDefaultPopup_MainMenuBackg);
  ppUVar1 = &(__this->fields)._mainBackgroundPanelBack;
  (__this->fields)._mainBackgroundPanelBack = pUVar11;
  il2cpp_runtime_helper_022b4080(ppUVar1);
  pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  __this_01 = (UI_MainMenuBackgroundPanel_o *)
              UI_ElementFactory__CreateDefaultPopup_object_(pUVar10,0,MethodInfo_MainMenuBackgroundPanel_CreateDefaultPopup_MainMenuBackg);
  ppUVar2 = &(__this->fields)._mainBackgroundPanelFront;
  (__this->fields)._mainBackgroundPanelFront = __this_01;
  il2cpp_runtime_helper_022b4080(ppUVar2);
  __this_00 = (UI_LoadingBackgroundPanel_o *)(__this->fields)._mainBackgroundPanelBack;
  pUVar11 = (UI_MainMenuBackgroundPanel_o *)0x0;
  if (__this_00 != (UI_LoadingBackgroundPanel_o *)0x0) {
    __this_01 = (UI_MainMenuBackgroundPanel_o *)0x0;
    UI_LoadingBackgroundPanel__SetRandomBackground(__this_00,0,1,(MethodInfo *)0x0);
    pUVar11 = *ppUVar1;
    if (pUVar11 != (UI_MainMenuBackgroundPanel_o *)0x0) {
      __this_01 = MethodInfo_RectTransform_GetComponent_RectTransform;
      pUVar10 = (UnityEngine_Transform_o *)
                UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pUVar11,(MethodInfo_24E7B40 *)MethodInfo_RectTransform_GetComponent_RectTransform);
      if (g_data_057a6932 == '\0') {
        pUVar11 = (UI_MainMenuBackgroundPanel_o *)&TypeInfo_Vector3;
        il2cpp_runtime_helper_023445d0();
        g_data_057a6932 = '\x01';
      }
      if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
        fVar18 = (__this->fields).backgroundScale;
        uVar3 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
        UVar20.fields.x = fVar18 * (float)uVar3;
        UVar20.fields.y = fVar18 * (float)((ulong)uVar3 >> 0x20);
        UVar20.fields.z = fVar18 * *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
        __this_01 = (UI_MainMenuBackgroundPanel_o *)0x0;
        UnityEngine_Transform__set_localScale(pUVar10,UVar20,(MethodInfo *)0x0);
        pUVar11 = *ppUVar2;
        if (pUVar11 != (UI_MainMenuBackgroundPanel_o *)0x0) {
          __this_01 = MethodInfo_RectTransform_GetComponent_RectTransform;
          pUVar10 = (UnityEngine_Transform_o *)
                    UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pUVar11,(MethodInfo_24E7B40 *)MethodInfo_RectTransform_GetComponent_RectTransform);
          if (g_data_057a6932 == '\0') {
            pUVar11 = (UI_MainMenuBackgroundPanel_o *)&TypeInfo_Vector3;
            il2cpp_runtime_helper_023445d0();
            g_data_057a6932 = '\x01';
          }
          if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
            fVar18 = (__this->fields).backgroundScale;
            uVar3 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
            value.fields.x = fVar18 * (float)uVar3;
            value.fields.y = fVar18 * (float)((ulong)uVar3 >> 0x20);
            value.fields.z = fVar18 * *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
            __this_01 = (UI_MainMenuBackgroundPanel_o *)0x0;
            UnityEngine_Transform__set_localScale(pUVar10,value,(MethodInfo *)0x0);
            pUVar11 = (UI_MainMenuBackgroundPanel_o *)0x0;
            if (*ppUVar1 != (UI_MainMenuBackgroundPanel_o *)0x0) {
              __this_01 = (UI_MainMenuBackgroundPanel_o *)0x0;
              UI_BasePopup__ShowImmediate((UI_BasePopup_o *)*ppUVar1,(MethodInfo *)0x0);
              pUVar11 = *ppUVar1;
              if ((pUVar11 != (UI_MainMenuBackgroundPanel_o *)0x0) &&
                 (*ppUVar2 != (UI_MainMenuBackgroundPanel_o *)0x0)) {
                ((*ppUVar2)->fields).BackgroundIndex = (pUVar11->fields).BackgroundIndex;
                __this_01 = (UI_MainMenuBackgroundPanel_o *)0x0;
                pUVar12 = (UI_MainMenuBackgroundPanel_o *)
                          UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pUVar11,(MethodInfo *)0x0);
                if (g_data_057ae5a3 == '\0') {
                  pUVar11 = (UI_MainMenuBackgroundPanel_o *)&MethodInfo_ParallaxEffect_AddComponent_ParallaxEffect;
                  il2cpp_runtime_helper_023445d0();
                  g_data_057ae5a3 = '\x01';
                }
                if (pUVar12 != (UI_MainMenuBackgroundPanel_o *)0x0) {
                  __this_01 = MethodInfo_ParallaxEffect_AddComponent_ParallaxEffect;
                  pIVar13 = UnityEngine_GameObject__AddComponent_object_
                                      ((UnityEngine_GameObject_o *)pUVar12,(MethodInfo_255A020 *)MethodInfo_ParallaxEffect_AddComponent_ParallaxEffect)
                  ;
                  pUVar11 = pUVar12;
                  if (pIVar13 != (Il2CppObject *)0x0) {
                    pIVar13[2].klass = (Il2CppClass *)0x3f19999a3f000000;
                    *(undefined4 *)&pIVar13[2].monitor = 0x3f8ccccd;
                    pUVar11 = *ppUVar2;
                    if (pUVar11 != (UI_MainMenuBackgroundPanel_o *)0x0) {
                      __this_01 = (UI_MainMenuBackgroundPanel_o *)0x0;
                      pUVar12 = (UI_MainMenuBackgroundPanel_o *)
                                UnityEngine_Component__get_gameObject
                                          ((UnityEngine_Component_o *)pUVar11,(MethodInfo *)0x0);
                      if (g_data_057ae5a3 == '\0') {
                        pUVar11 = (UI_MainMenuBackgroundPanel_o *)&MethodInfo_ParallaxEffect_AddComponent_ParallaxEffect;
                        il2cpp_runtime_helper_023445d0();
                        g_data_057ae5a3 = '\x01';
                      }
                      if (pUVar12 != (UI_MainMenuBackgroundPanel_o *)0x0) {
                        __this_01 = MethodInfo_ParallaxEffect_AddComponent_ParallaxEffect;
                        pIVar13 = UnityEngine_GameObject__AddComponent_object_
                                            ((UnityEngine_GameObject_o *)pUVar12,
                                             (MethodInfo_255A020 *)MethodInfo_ParallaxEffect_AddComponent_ParallaxEffect);
                        pUVar11 = pUVar12;
                        if (pIVar13 != (Il2CppObject *)0x0) {
                          pIVar13[2].klass = (Il2CppClass *)0x3f19999a3f000000;
                          *(undefined4 *)&pIVar13[2].monitor = 0x3f8ccccd;
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
  uVar16 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae5a3 == '\0') {
    pUVar11 = (UI_MainMenuBackgroundPanel_o *)&MethodInfo_ParallaxEffect_AddComponent_ParallaxEffect;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae5a3 = '\x01';
  }
  if (__this_01 != (UI_MainMenuBackgroundPanel_o *)0x0) {
    pIVar13 = UnityEngine_GameObject__AddComponent_object_
                        ((UnityEngine_GameObject_o *)__this_01,(MethodInfo_255A020 *)MethodInfo_ParallaxEffect_AddComponent_ParallaxEffect);
    pUVar11 = __this_01;
    if (pIVar13 != (Il2CppObject *)0x0) {
      *(undefined4 *)&pIVar13[2].klass = uVar16;
      *(undefined8 *)((long)&pIVar13[2].klass + 4) = 0x3f8ccccd3f19999a;
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae5a4 == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057ae5a4 = '\x01';
  }
  UVar20 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
  fVar18 = *(float *)&(pUVar11->fields).field_0xa4;
  iVar6 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  fVar17 = *(float *)&(pUVar11->fields).field_0xa4;
  iVar7 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  iVar8 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  iVar9 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  pSVar4 = (pUVar11->fields).killPopupKeyframesIn;
  if (pSVar4 != (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)0x0) {
    pUVar14 = (UnityEngine_RectTransform_o *)
              UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pSVar4,(MethodInfo_24E7B40 *)MethodInfo_RectTransform_GetComponent_RectTransform);
    pSVar4 = (pUVar11->fields).killPopupKeyframesIn;
    if (pSVar4 != (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)0x0) {
      pUVar15 = (UnityEngine_RectTransform_o *)
                UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)pSVar4,(MethodInfo_24E7B40 *)MethodInfo_RectTransform_GetComponent_RectTransform);
      if (pUVar15 != (UnityEngine_RectTransform_o *)0x0) {
        fVar19 = (fVar18 + -1.0) * (float)(iVar6 / 2);
        fVar18 = (fVar17 + -1.0) * (float)(iVar7 / 2);
        fStack_98 = UVar20.fields.x;
        fStack_94 = UVar20.fields.y;
        target.fields.y = (fVar18 + fVar18) * (fStack_94 / (float)iVar9) - fVar18;
        target.fields.x = (fVar19 + fVar19) * (fStack_98 / (float)iVar8) - fVar19;
        UVar5 = UnityEngine_RectTransform__get_anchoredPosition(pUVar15,(MethodInfo *)0x0);
        currentVelocity = &(pUVar11->fields)._background;
        fVar18 = (float)(pUVar11->fields).BackgroundIndex;
        fVar17 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        UVar5 = UnityEngine_Vector2__SmoothDamp_4def270
                          (UVar5,target,(UnityEngine_Vector2_o *)currentVelocity,fVar18,INFINITY,fVar17,
                           (MethodInfo *)0x0);
        if (pUVar14 != (UnityEngine_RectTransform_o *)0x0) {
          UnityEngine_RectTransform__set_anchoredPosition(pUVar14,UVar5,(MethodInfo *)0x0);
          pSVar4 = (pUVar11->fields).killPopupKeyframesOut;
          if (pSVar4 != (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)0x0) {
            pUVar14 = (UnityEngine_RectTransform_o *)
                      UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)pSVar4,(MethodInfo_24E7B40 *)MethodInfo_RectTransform_GetComponent_RectTransform);
            pSVar4 = (pUVar11->fields).killPopupKeyframesOut;
            if (pSVar4 != (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)0x0) {
              pUVar15 = (UnityEngine_RectTransform_o *)
                        UnityEngine_Component__GetComponent_object_
                                  ((UnityEngine_Component_o *)pSVar4,(MethodInfo_24E7B40 *)MethodInfo_RectTransform_GetComponent_RectTransform);
              if (pUVar15 != (UnityEngine_RectTransform_o *)0x0) {
                UVar5 = UnityEngine_RectTransform__get_anchoredPosition(pUVar15,(MethodInfo *)0x0);
                fVar18 = (float)(pUVar11->fields).BackgroundIndex;
                fVar17 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
                UVar5 = UnityEngine_Vector2__SmoothDamp_4def270
                                  (UVar5,target,(UnityEngine_Vector2_o *)currentVelocity,fVar18,INFINITY,
                                   fVar17,(MethodInfo *)0x0);
                if (pUVar14 != (UnityEngine_RectTransform_o *)0x0) {
                  UnityEngine_RectTransform__set_anchoredPosition(pUVar14,UVar5,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_Screen__get_width((MethodInfo *)0x0);
  UnityEngine_Screen__get_height((MethodInfo *)0x0);
  UnityEngine_Screen__get_width((MethodInfo *)0x0);
  UnityEngine_Screen__get_height((MethodInfo *)0x0);
  return;
}


// UI.MainBackgroundMenu$$AddParallaxEffect
// il2cpp: void UI_MainBackgroundMenu__AddParallaxEffect (UI_MainBackgroundMenu_o* __this, UnityEngine_GameObject_o* target, float intensity, const MethodInfo* method);
// 0x4405d40

void UI_MainBackgroundMenu__AddParallaxEffect
               (UI_MainBackgroundMenu_o *__this,UnityEngine_GameObject_o *target,float intensity,
               MethodInfo *method)

{
  UnityEngine_Vector2_o *currentVelocity;
  UI_MainMenuBackgroundPanel_o *pUVar1;
  UnityEngine_Vector2_o UVar2;
  UnityEngine_Vector2_o target_00;
  int32_t iVar3;
  int32_t iVar4;
  int32_t iVar5;
  int32_t iVar6;
  Il2CppObject *pIVar7;
  UnityEngine_RectTransform_o *pUVar8;
  UnityEngine_RectTransform_o *pUVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  UnityEngine_Vector3_o UVar13;
  float local_60;
  float fStack_5c;
  
  if (g_data_057ae5a3 == '\0') {
    __this = (UI_MainBackgroundMenu_o *)&MethodInfo_ParallaxEffect_AddComponent_ParallaxEffect;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae5a3 = '\x01';
  }
  if (target != (UnityEngine_GameObject_o *)0x0) {
    pIVar7 = UnityEngine_GameObject__AddComponent_object_(target,MethodInfo_ParallaxEffect_AddComponent_ParallaxEffect);
    __this = (UI_MainBackgroundMenu_o *)target;
    if (pIVar7 != (Il2CppObject *)0x0) {
      *(float *)&pIVar7[2].klass = intensity;
      *(undefined8 *)((long)&pIVar7[2].klass + 4) = 0x3f8ccccd3f19999a;
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae5a4 == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057ae5a4 = '\x01';
  }
  UVar13 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
  fVar11 = (__this->fields).backgroundScale;
  iVar3 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  fVar10 = (__this->fields).backgroundScale;
  iVar4 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  iVar5 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  iVar6 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  pUVar1 = (__this->fields)._mainBackgroundPanelBack;
  if (pUVar1 != (UI_MainMenuBackgroundPanel_o *)0x0) {
    pUVar8 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar1,MethodInfo_RectTransform_GetComponent_RectTransform);
    pUVar1 = (__this->fields)._mainBackgroundPanelBack;
    if (pUVar1 != (UI_MainMenuBackgroundPanel_o *)0x0) {
      pUVar9 = (UnityEngine_RectTransform_o *)
               UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar1,MethodInfo_RectTransform_GetComponent_RectTransform);
      if (pUVar9 != (UnityEngine_RectTransform_o *)0x0) {
        fVar12 = (fVar11 + -1.0) * (float)(iVar3 / 2);
        fVar11 = (fVar10 + -1.0) * (float)(iVar4 / 2);
        local_60 = UVar13.fields.x;
        fStack_5c = UVar13.fields.y;
        target_00.fields.y = (fVar11 + fVar11) * (fStack_5c / (float)iVar6) - fVar11;
        target_00.fields.x = (fVar12 + fVar12) * (local_60 / (float)iVar5) - fVar12;
        UVar2 = UnityEngine_RectTransform__get_anchoredPosition(pUVar9,(MethodInfo *)0x0);
        currentVelocity = &(__this->fields).currentVelocity;
        fVar11 = (__this->fields).smoothTime;
        fVar10 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        UVar2 = UnityEngine_Vector2__SmoothDamp_4def270
                          (UVar2,target_00,currentVelocity,fVar11,INFINITY,fVar10,(MethodInfo *)0x0);
        if (pUVar8 != (UnityEngine_RectTransform_o *)0x0) {
          UnityEngine_RectTransform__set_anchoredPosition(pUVar8,UVar2,(MethodInfo *)0x0);
          pUVar1 = (__this->fields)._mainBackgroundPanelFront;
          if (pUVar1 != (UI_MainMenuBackgroundPanel_o *)0x0) {
            pUVar8 = (UnityEngine_RectTransform_o *)
                     UnityEngine_Component__GetComponent_object_
                               ((UnityEngine_Component_o *)pUVar1,MethodInfo_RectTransform_GetComponent_RectTransform);
            pUVar1 = (__this->fields)._mainBackgroundPanelFront;
            if (pUVar1 != (UI_MainMenuBackgroundPanel_o *)0x0) {
              pUVar9 = (UnityEngine_RectTransform_o *)
                       UnityEngine_Component__GetComponent_object_
                                 ((UnityEngine_Component_o *)pUVar1,MethodInfo_RectTransform_GetComponent_RectTransform);
              if (pUVar9 != (UnityEngine_RectTransform_o *)0x0) {
                UVar2 = UnityEngine_RectTransform__get_anchoredPosition(pUVar9,(MethodInfo *)0x0);
                fVar11 = (__this->fields).smoothTime;
                fVar10 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
                UVar2 = UnityEngine_Vector2__SmoothDamp_4def270
                                  (UVar2,target_00,currentVelocity,fVar11,INFINITY,fVar10,(MethodInfo *)0x0);
                if (pUVar8 != (UnityEngine_RectTransform_o *)0x0) {
                  UnityEngine_RectTransform__set_anchoredPosition(pUVar8,UVar2,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_Screen__get_width((MethodInfo *)0x0);
  UnityEngine_Screen__get_height((MethodInfo *)0x0);
  UnityEngine_Screen__get_width((MethodInfo *)0x0);
  UnityEngine_Screen__get_height((MethodInfo *)0x0);
  return;
}


// UI.MainBackgroundMenu$$Update
// il2cpp: void UI_MainBackgroundMenu__Update (UI_MainBackgroundMenu_o* __this, const MethodInfo* method);
// 0x4405db0

void UI_MainBackgroundMenu__Update(UI_MainBackgroundMenu_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_o *currentVelocity;
  UI_MainMenuBackgroundPanel_o *pUVar1;
  UnityEngine_Vector2_o UVar2;
  UnityEngine_Vector2_o target;
  int32_t iVar3;
  int32_t iVar4;
  int32_t iVar5;
  int32_t iVar6;
  UnityEngine_RectTransform_o *pUVar7;
  UnityEngine_RectTransform_o *pUVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  UnityEngine_Vector3_o UVar12;
  float fStack_48;
  float fStack_44;
  
  if (g_data_057ae5a4 == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057ae5a4 = '\x01';
  }
  UVar12 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
  fVar10 = (__this->fields).backgroundScale;
  iVar3 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  fVar9 = (__this->fields).backgroundScale;
  iVar4 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  iVar5 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  iVar6 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  pUVar1 = (__this->fields)._mainBackgroundPanelBack;
  if (pUVar1 != (UI_MainMenuBackgroundPanel_o *)0x0) {
    pUVar7 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar1,MethodInfo_RectTransform_GetComponent_RectTransform);
    pUVar1 = (__this->fields)._mainBackgroundPanelBack;
    if (pUVar1 != (UI_MainMenuBackgroundPanel_o *)0x0) {
      pUVar8 = (UnityEngine_RectTransform_o *)
               UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar1,MethodInfo_RectTransform_GetComponent_RectTransform);
      if (pUVar8 != (UnityEngine_RectTransform_o *)0x0) {
        fVar11 = (fVar10 + -1.0) * (float)(iVar3 / 2);
        fVar10 = (fVar9 + -1.0) * (float)(iVar4 / 2);
        fStack_48 = UVar12.fields.x;
        fStack_44 = UVar12.fields.y;
        target.fields.y = (fVar10 + fVar10) * (fStack_44 / (float)iVar6) - fVar10;
        target.fields.x = (fVar11 + fVar11) * (fStack_48 / (float)iVar5) - fVar11;
        UVar2 = UnityEngine_RectTransform__get_anchoredPosition(pUVar8,(MethodInfo *)0x0);
        currentVelocity = &(__this->fields).currentVelocity;
        fVar10 = (__this->fields).smoothTime;
        fVar9 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        UVar2 = UnityEngine_Vector2__SmoothDamp_4def270
                          (UVar2,target,currentVelocity,fVar10,INFINITY,fVar9,(MethodInfo *)0x0);
        if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
          UnityEngine_RectTransform__set_anchoredPosition(pUVar7,UVar2,(MethodInfo *)0x0);
          pUVar1 = (__this->fields)._mainBackgroundPanelFront;
          if (pUVar1 != (UI_MainMenuBackgroundPanel_o *)0x0) {
            pUVar7 = (UnityEngine_RectTransform_o *)
                     UnityEngine_Component__GetComponent_object_
                               ((UnityEngine_Component_o *)pUVar1,MethodInfo_RectTransform_GetComponent_RectTransform);
            pUVar1 = (__this->fields)._mainBackgroundPanelFront;
            if (pUVar1 != (UI_MainMenuBackgroundPanel_o *)0x0) {
              pUVar8 = (UnityEngine_RectTransform_o *)
                       UnityEngine_Component__GetComponent_object_
                                 ((UnityEngine_Component_o *)pUVar1,MethodInfo_RectTransform_GetComponent_RectTransform);
              if (pUVar8 != (UnityEngine_RectTransform_o *)0x0) {
                UVar2 = UnityEngine_RectTransform__get_anchoredPosition(pUVar8,(MethodInfo *)0x0);
                fVar10 = (__this->fields).smoothTime;
                fVar9 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
                UVar2 = UnityEngine_Vector2__SmoothDamp_4def270
                                  (UVar2,target,currentVelocity,fVar10,INFINITY,fVar9,(MethodInfo *)0x0);
                if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
                  UnityEngine_RectTransform__set_anchoredPosition(pUVar7,UVar2,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_Screen__get_width((MethodInfo *)0x0);
  UnityEngine_Screen__get_height((MethodInfo *)0x0);
  UnityEngine_Screen__get_width((MethodInfo *)0x0);
  UnityEngine_Screen__get_height((MethodInfo *)0x0);
  return;
}


// UI.MainBackgroundMenu$$GetConstrainedTargetPosition
// il2cpp: UnityEngine_Vector2_o UI_MainBackgroundMenu__GetConstrainedTargetPosition (UI_MainBackgroundMenu_o* __this, UnityEngine_Vector2_o mousePosition, const MethodInfo* method);
// 0x4406020

UnityEngine_Vector2_o
UI_MainBackgroundMenu__GetConstrainedTargetPosition
          (UI_MainBackgroundMenu_o *__this,UnityEngine_Vector2_o mousePosition,MethodInfo *method)

{
  UnityEngine_Vector2_o UVar1;
  int32_t iVar2;
  int32_t iVar3;
  float fVar4;
  float fVar5;
  float local_18;
  float fStack_14;
  
  fVar5 = (__this->fields).backgroundScale;
  iVar2 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  fVar4 = (float)(iVar2 / 2) * (fVar5 + -1.0);
  fVar5 = (__this->fields).backgroundScale;
  iVar2 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  fVar5 = (float)(iVar2 / 2) * (fVar5 + -1.0);
  iVar2 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  local_18 = mousePosition.fields.x;
  fStack_14 = mousePosition.fields.y;
  iVar3 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  UVar1.fields.y = (fVar5 + fVar5) * (fStack_14 / (float)iVar3) - fVar5;
  UVar1.fields.x = (local_18 / (float)iVar2) * (fVar4 + fVar4) - fVar4;
  return (UnityEngine_Vector2_o)UVar1.fields;
}


// UI.MainBackgroundMenu$$MapRange
// il2cpp: float UI_MainBackgroundMenu__MapRange (UI_MainBackgroundMenu_o* __this, float value, float fromSource, float toSource, float fromTarget, float toTarget, const MethodInfo* method);
// 0x4406120

float UI_MainBackgroundMenu__MapRange
                (UI_MainBackgroundMenu_o *__this,float value,float fromSource,float toSource,float fromTarget,
                float toTarget,MethodInfo *method)

{
  return ((value - fromSource) / (toSource - fromSource)) * (toTarget - fromTarget) + fromTarget;
}


// UI.MainBackgroundMenu$$ChangeMainBackground
// il2cpp: void UI_MainBackgroundMenu__ChangeMainBackground (UI_MainBackgroundMenu_o* __this, const MethodInfo* method);
// 0x4406140

void UI_MainBackgroundMenu__ChangeMainBackground(UI_MainBackgroundMenu_o *__this,MethodInfo *method)

{
  UI_LoadingBackgroundPanel_o *__this_00;
  UI_MainMenuBackgroundPanel_o *pUVar1;
  Il2CppClass *__this_01;
  Il2CppObject *__this_02;
  undefined4 uVar2;
  Il2CppClass *pIVar3;
  Il2CppObject *__this_03;
  
  __this_00 = (UI_LoadingBackgroundPanel_o *)(__this->fields)._mainBackgroundPanelFront;
  pIVar3 = (Il2CppClass *)0x0;
  if (__this_00 != (UI_LoadingBackgroundPanel_o *)0x0) {
    UI_LoadingBackgroundPanel__SetRandomBackground(__this_00,0,0,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._mainBackgroundPanelFront;
    pIVar3 = (Il2CppClass *)0x0;
    if (pUVar1 != (UI_MainMenuBackgroundPanel_o *)0x0) {
      (*(pUVar1->klass->vtable)._21_Show.methodPtr)();
      if (g_data_057ae5a5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishBackground_d__12);
        g_data_057ae5a5 = '\x01';
      }
      __this_01 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishBackground_d__12);
      pIVar3 = __this_01;
      System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
      *(undefined4 *)&(__this_01->_1).name = 0;
      if (__this_01 != (Il2CppClass *)0x0) {
        (__this_01->_1).byval_arg.data = __this;
        il2cpp_runtime_helper_022b4080(&(__this_01->_1).byval_arg,__this);
        UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                  ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_01,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae5a5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishBackground_d__12);
    g_data_057ae5a5 = '\x01';
  }
  __this_02 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishBackground_d__12);
  uVar2 = 0;
  __this_03 = __this_02;
  System_Object___ctor(__this_02,(MethodInfo *)0x0);
  *(undefined4 *)&__this_02[1].klass = 0;
  if (__this_02 != (Il2CppObject *)0x0) {
    __this_02[2].klass = pIVar3;
    il2cpp_runtime_helper_022b4080(__this_02 + 2,pIVar3);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_03,(MethodInfo *)0x0);
  *(undefined4 *)&__this_03[1].klass = uVar2;
  return;
}


// UI.MainBackgroundMenu$$WaitAndFinishBackground
// il2cpp: System_Collections_IEnumerator_o* UI_MainBackgroundMenu__WaitAndFinishBackground (UI_MainBackgroundMenu_o* __this, const MethodInfo* method);
// 0x44061f0

System_Collections_IEnumerator_o *
UI_MainBackgroundMenu__WaitAndFinishBackground(UI_MainBackgroundMenu_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar1;
  Il2CppObject *__this_01;
  
  if (g_data_057ae5a5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishBackground_d__12);
    g_data_057ae5a5 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishBackground_d__12);
  uVar1 = 0;
  __this_01 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_helper_022b4080(__this_00 + 2,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = uVar1;
  return extraout_RAX;
}


// UI.MainBackgroundMenu$$.ctor
// il2cpp: void UI_MainBackgroundMenu___ctor (UI_MainBackgroundMenu_o* __this, const MethodInfo* method);
// 0x4406280

void UI_MainBackgroundMenu___ctor(UI_MainBackgroundMenu_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_BasePopup__o *__this_00;
  
  (__this->fields).smoothTime = 0.3;
  (__this->fields).backgroundScale = 1.1;
  if (g_data_057ae015 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UI_BasePopup,0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_BasePopup);
    g_data_057ae015 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_BasePopup__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_BasePopup);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UI_BasePopup);
  (__this->fields)._popups = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._popups);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


