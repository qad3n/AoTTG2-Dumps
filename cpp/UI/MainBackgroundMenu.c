// Type: UI.MainBackgroundMenu
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/MainBackgroundMenu.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/MainMenu/MainBackgroundMenu.cs  [CHANGED since prior version]
// --------------------------------

// UI.MainBackgroundMenu.<WaitAndFinishBackground>d__12$$.ctor
// il2cpp: void UI_MainBackgroundMenu__WaitAndFinishBackground_d__12___ctor (UI_MainBackgroundMenu__WaitAndFinishBackground_d__12_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x40f2030

void UI_MainBackgroundMenu_<WaitAndFinishBackground>d__12___ctor
               (UI_MainBackgroundMenu__WaitAndFinishBackground_d__12_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.MainBackgroundMenu.<WaitAndFinishBackground>d__12$$System.IDisposable.Dispose
// il2cpp: void UI_MainBackgroundMenu__WaitAndFinishBackground_d__12__System_IDisposable_Dispose (UI_MainBackgroundMenu__WaitAndFinishBackground_d__12_o* __this, const MethodInfo* method);
// 0x40f2070

void UI_MainBackgroundMenu_<WaitAndFinishBackground>d__12__System_IDisposable_Dispose
               (UI_MainBackgroundMenu__WaitAndFinishBackground_d__12_o *__this,MethodInfo *method)

{
  return;
}


// UI.MainBackgroundMenu.<WaitAndFinishBackground>d__12$$MoveNext
// il2cpp: bool UI_MainBackgroundMenu__WaitAndFinishBackground_d__12__MoveNext (UI_MainBackgroundMenu__WaitAndFinishBackground_d__12_o* __this, const MethodInfo* method);
// 0x40f2080

bool_conflict
UI_MainBackgroundMenu_<WaitAndFinishBackground>d__12__MoveNext
          (UI_MainBackgroundMenu__WaitAndFinishBackground_d__12_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_MainBackgroundMenu_o *pUVar2;
  UI_MainMenuBackgroundPanel_o *pUVar3;
  UI_LoadingBackgroundPanel_o *__this_00;
  UnityEngine_WaitForSeconds_o *__this_01;
  undefined8 uVar4;
  
  if (DAT_0570480b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WaitForSeconds);
    il2cpp_init_method_metadata(&"MainBackgrounds");
    DAT_0570480b = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    pUVar2 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (((pUVar2 != (UI_MainBackgroundMenu_o *)0x0) &&
        (pUVar3 = (pUVar2->fields)._mainBackgroundPanelFront,
        pUVar3 != (UI_MainMenuBackgroundPanel_o *)0x0)) &&
       (__this_00 = (UI_LoadingBackgroundPanel_o *)(pUVar2->fields)._mainBackgroundPanelBack,
       __this_00 != (UI_LoadingBackgroundPanel_o *)0x0)) {
      UI_LoadingBackgroundPanel__SetBackground
                (__this_00,0,(pUVar3->fields).BackgroundIndex,"MainBackgrounds",(MethodInfo *)0x0);
      pUVar3 = (pUVar2->fields)._mainBackgroundPanelFront;
      if (pUVar3 != (UI_MainMenuBackgroundPanel_o *)0x0) {
        (*(pUVar3->klass->vtable)._55_HideImmediate.methodPtr)
                  (pUVar3,(pUVar3->klass->vtable)._55_HideImmediate.method);
        return 0;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (iVar1 != 0) {
    return 0;
  }
  (__this->fields).__1__state = -1;
  __this_01 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_glue(TypeInfo_WaitForSeconds);
  UnityEngine_WaitForSeconds___ctor(__this_01,1.5,(MethodInfo *)0x0);
  (__this->fields).__2__current = (Il2CppObject *)__this_01;
  uVar4 = il2cpp_runtime_glue(&(__this->fields).__2__current,__this_01);
  (__this->fields).__1__state = 1;
  return (bool_conflict)CONCAT71((int7)((ulong)uVar4 >> 8),1);
}


// UI.MainBackgroundMenu.<WaitAndFinishBackground>d__12$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_MainBackgroundMenu__WaitAndFinishBackground_d__12__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_MainBackgroundMenu__WaitAndFinishBackground_d__12_o* __this, const MethodInfo* method);
// 0x40f2180

Il2CppObject *
UI_MainBackgroundMenu_<WaitAndFinishBackground>d__12__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (UI_MainBackgroundMenu__WaitAndFinishBackground_d__12_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.MainBackgroundMenu.<WaitAndFinishBackground>d__12$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_MainBackgroundMenu__WaitAndFinishBackground_d__12__System_Collections_IEnumerator_Reset (UI_MainBackgroundMenu__WaitAndFinishBackground_d__12_o* __this, const MethodInfo* method);
// 0x40f2190

void UI_MainBackgroundMenu_<WaitAndFinishBackground>d__12__System_Collections_IEnumerator_Reset
               (UI_MainBackgroundMenu__WaitAndFinishBackground_d__12_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// UI.MainBackgroundMenu.<WaitAndFinishBackground>d__12$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_MainBackgroundMenu__WaitAndFinishBackground_d__12__System_Collections_IEnumerator_get_Current (UI_MainBackgroundMenu__WaitAndFinishBackground_d__12_o* __this, const MethodInfo* method);
// 0x40f21d0

Il2CppObject *
UI_MainBackgroundMenu_<WaitAndFinishBackground>d__12__System_Collections_IEnumerator_get_Current
          (UI_MainBackgroundMenu__WaitAndFinishBackground_d__12_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.MainBackgroundMenu$$Setup
// il2cpp: void UI_MainBackgroundMenu__Setup (UI_MainBackgroundMenu_o* __this, const MethodInfo* method);
// 0x40f1860

void UI_MainBackgroundMenu__Setup(UI_MainBackgroundMenu_o *__this,MethodInfo *method)

{
  UI_MainMenuBackgroundPanel_o **ppUVar1;
  UI_MainMenuBackgroundPanel_o **ppUVar2;
  float fVar3;
  undefined8 uVar4;
  UI_LoadingBackgroundPanel_o *__this_00;
  UnityEngine_Transform_o *pUVar5;
  UI_MainMenuBackgroundPanel_o *pUVar6;
  UnityEngine_GameObject_o *pUVar7;
  Il2CppObject *pIVar8;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  
  if (DAT_05704807 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&MethodInfo_MainMenuBackgroundPanel_CreateDefaultPopup_MainM);
    DAT_05704807 = '\x01';
  }
  pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  pUVar6 = (UI_MainMenuBackgroundPanel_o *)
           UI_ElementFactory__CreateDefaultPopup<object>(pUVar5,0,MethodInfo_MainMenuBackgroundPanel_CreateDefaultPopup_MainM);
  ppUVar1 = &(__this->fields)._mainBackgroundPanelBack;
  (__this->fields)._mainBackgroundPanelBack = pUVar6;
  il2cpp_runtime_glue(ppUVar1);
  pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  pUVar6 = (UI_MainMenuBackgroundPanel_o *)
           UI_ElementFactory__CreateDefaultPopup<object>(pUVar5,0,MethodInfo_MainMenuBackgroundPanel_CreateDefaultPopup_MainM);
  ppUVar2 = &(__this->fields)._mainBackgroundPanelFront;
  (__this->fields)._mainBackgroundPanelFront = pUVar6;
  il2cpp_runtime_glue(ppUVar2);
  __this_00 = (UI_LoadingBackgroundPanel_o *)(__this->fields)._mainBackgroundPanelBack;
  if (__this_00 != (UI_LoadingBackgroundPanel_o *)0x0) {
    UI_LoadingBackgroundPanel__SetRandomBackground(__this_00,0,1,(MethodInfo *)0x0);
    if (*ppUVar1 != (UI_MainMenuBackgroundPanel_o *)0x0) {
      pUVar5 = (UnityEngine_Transform_o *)
               UnityEngine_Component__GetComponent<object>
                         ((UnityEngine_Component_o *)*ppUVar1,MethodInfo_RectTransform_GetComponent_RectTransform);
      if (DAT_056fe077 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fe077 = '\x01';
      }
      if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
        fVar3 = (__this->fields).backgroundScale;
        uVar4 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
        value.fields.x = fVar3 * (float)uVar4;
        value.fields.y = fVar3 * (float)((ulong)uVar4 >> 0x20);
        value.fields.z = fVar3 * *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
        UnityEngine_Transform__set_localScale(pUVar5,value,(MethodInfo *)0x0);
        if (*ppUVar2 != (UI_MainMenuBackgroundPanel_o *)0x0) {
          pUVar5 = (UnityEngine_Transform_o *)
                   UnityEngine_Component__GetComponent<object>
                             ((UnityEngine_Component_o *)*ppUVar2,MethodInfo_RectTransform_GetComponent_RectTransform);
          if (DAT_056fe077 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Vector3);
            DAT_056fe077 = '\x01';
          }
          if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
            fVar3 = (__this->fields).backgroundScale;
            uVar4 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
            value_00.fields.x = fVar3 * (float)uVar4;
            value_00.fields.y = fVar3 * (float)((ulong)uVar4 >> 0x20);
            value_00.fields.z = fVar3 * *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
            UnityEngine_Transform__set_localScale(pUVar5,value_00,(MethodInfo *)0x0);
            if (*ppUVar1 != (UI_MainMenuBackgroundPanel_o *)0x0) {
              UI_BasePopup__ShowImmediate((UI_BasePopup_o *)*ppUVar1,(MethodInfo *)0x0);
              pUVar6 = *ppUVar1;
              if ((pUVar6 != (UI_MainMenuBackgroundPanel_o *)0x0) &&
                 (*ppUVar2 != (UI_MainMenuBackgroundPanel_o *)0x0)) {
                ((*ppUVar2)->fields).BackgroundIndex = (pUVar6->fields).BackgroundIndex;
                pUVar7 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0);
                if (DAT_05704808 == '\0') {
                  il2cpp_init_method_metadata(&MethodInfo_ParallaxEffect_AddComponent_ParallaxEffect);
                  DAT_05704808 = '\x01';
                }
                if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
                  pIVar8 = UnityEngine_GameObject__AddComponent<object>(pUVar7,MethodInfo_ParallaxEffect_AddComponent_ParallaxEffect);
                  if (pIVar8 != (Il2CppObject *)0x0) {
                    pIVar8[2].klass = (Il2CppClass *)0x3f19999a3f000000;
                    *(undefined4 *)&pIVar8[2].monitor = 0x3f8ccccd;
                    if (*ppUVar2 != (UI_MainMenuBackgroundPanel_o *)0x0) {
                      pUVar7 = UnityEngine_Component__get_gameObject
                                         ((UnityEngine_Component_o *)*ppUVar2,(MethodInfo *)0x0);
                      if (DAT_05704808 == '\0') {
                        il2cpp_init_method_metadata(&MethodInfo_ParallaxEffect_AddComponent_ParallaxEffect);
                        DAT_05704808 = '\x01';
                      }
                      if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
                        pIVar8 = UnityEngine_GameObject__AddComponent<object>(pUVar7,MethodInfo_ParallaxEffect_AddComponent_ParallaxEffect);
                        if (pIVar8 != (Il2CppObject *)0x0) {
                          pIVar8[2].klass = (Il2CppClass *)0x3f19999a3f000000;
                          *(undefined4 *)&pIVar8[2].monitor = 0x3f8ccccd;
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MainBackgroundMenu$$SetupMainBackground
// il2cpp: void UI_MainBackgroundMenu__SetupMainBackground (UI_MainBackgroundMenu_o* __this, const MethodInfo* method);
// 0x40f1870

void UI_MainBackgroundMenu__SetupMainBackground(UI_MainBackgroundMenu_o *__this,MethodInfo *method)

{
  UI_MainMenuBackgroundPanel_o **ppUVar1;
  UI_MainMenuBackgroundPanel_o **ppUVar2;
  float fVar3;
  undefined8 uVar4;
  UI_LoadingBackgroundPanel_o *__this_00;
  UnityEngine_Transform_o *pUVar5;
  UI_MainMenuBackgroundPanel_o *pUVar6;
  UnityEngine_GameObject_o *pUVar7;
  Il2CppObject *pIVar8;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  
  if (DAT_05704807 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&MethodInfo_MainMenuBackgroundPanel_CreateDefaultPopup_MainM);
    DAT_05704807 = '\x01';
  }
  pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  pUVar6 = (UI_MainMenuBackgroundPanel_o *)
           UI_ElementFactory__CreateDefaultPopup<object>(pUVar5,0,MethodInfo_MainMenuBackgroundPanel_CreateDefaultPopup_MainM);
  ppUVar1 = &(__this->fields)._mainBackgroundPanelBack;
  (__this->fields)._mainBackgroundPanelBack = pUVar6;
  il2cpp_runtime_glue(ppUVar1);
  pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  pUVar6 = (UI_MainMenuBackgroundPanel_o *)
           UI_ElementFactory__CreateDefaultPopup<object>(pUVar5,0,MethodInfo_MainMenuBackgroundPanel_CreateDefaultPopup_MainM);
  ppUVar2 = &(__this->fields)._mainBackgroundPanelFront;
  (__this->fields)._mainBackgroundPanelFront = pUVar6;
  il2cpp_runtime_glue(ppUVar2);
  __this_00 = (UI_LoadingBackgroundPanel_o *)(__this->fields)._mainBackgroundPanelBack;
  if (__this_00 != (UI_LoadingBackgroundPanel_o *)0x0) {
    UI_LoadingBackgroundPanel__SetRandomBackground(__this_00,0,1,(MethodInfo *)0x0);
    if (*ppUVar1 != (UI_MainMenuBackgroundPanel_o *)0x0) {
      pUVar5 = (UnityEngine_Transform_o *)
               UnityEngine_Component__GetComponent<object>
                         ((UnityEngine_Component_o *)*ppUVar1,MethodInfo_RectTransform_GetComponent_RectTransform);
      if (DAT_056fe077 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fe077 = '\x01';
      }
      if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
        fVar3 = (__this->fields).backgroundScale;
        uVar4 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
        value.fields.x = fVar3 * (float)uVar4;
        value.fields.y = fVar3 * (float)((ulong)uVar4 >> 0x20);
        value.fields.z = fVar3 * *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
        UnityEngine_Transform__set_localScale(pUVar5,value,(MethodInfo *)0x0);
        if (*ppUVar2 != (UI_MainMenuBackgroundPanel_o *)0x0) {
          pUVar5 = (UnityEngine_Transform_o *)
                   UnityEngine_Component__GetComponent<object>
                             ((UnityEngine_Component_o *)*ppUVar2,MethodInfo_RectTransform_GetComponent_RectTransform);
          if (DAT_056fe077 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Vector3);
            DAT_056fe077 = '\x01';
          }
          if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
            fVar3 = (__this->fields).backgroundScale;
            uVar4 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
            value_00.fields.x = fVar3 * (float)uVar4;
            value_00.fields.y = fVar3 * (float)((ulong)uVar4 >> 0x20);
            value_00.fields.z = fVar3 * *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14);
            UnityEngine_Transform__set_localScale(pUVar5,value_00,(MethodInfo *)0x0);
            if (*ppUVar1 != (UI_MainMenuBackgroundPanel_o *)0x0) {
              UI_BasePopup__ShowImmediate((UI_BasePopup_o *)*ppUVar1,(MethodInfo *)0x0);
              pUVar6 = *ppUVar1;
              if ((pUVar6 != (UI_MainMenuBackgroundPanel_o *)0x0) &&
                 (*ppUVar2 != (UI_MainMenuBackgroundPanel_o *)0x0)) {
                ((*ppUVar2)->fields).BackgroundIndex = (pUVar6->fields).BackgroundIndex;
                pUVar7 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0);
                if (DAT_05704808 == '\0') {
                  il2cpp_init_method_metadata(&MethodInfo_ParallaxEffect_AddComponent_ParallaxEffect);
                  DAT_05704808 = '\x01';
                }
                if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
                  pIVar8 = UnityEngine_GameObject__AddComponent<object>(pUVar7,MethodInfo_ParallaxEffect_AddComponent_ParallaxEffect);
                  if (pIVar8 != (Il2CppObject *)0x0) {
                    pIVar8[2].klass = (Il2CppClass *)0x3f19999a3f000000;
                    *(undefined4 *)&pIVar8[2].monitor = 0x3f8ccccd;
                    if (*ppUVar2 != (UI_MainMenuBackgroundPanel_o *)0x0) {
                      pUVar7 = UnityEngine_Component__get_gameObject
                                         ((UnityEngine_Component_o *)*ppUVar2,(MethodInfo *)0x0);
                      if (DAT_05704808 == '\0') {
                        il2cpp_init_method_metadata(&MethodInfo_ParallaxEffect_AddComponent_ParallaxEffect);
                        DAT_05704808 = '\x01';
                      }
                      if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
                        pIVar8 = UnityEngine_GameObject__AddComponent<object>(pUVar7,MethodInfo_ParallaxEffect_AddComponent_ParallaxEffect);
                        if (pIVar8 != (Il2CppObject *)0x0) {
                          pIVar8[2].klass = (Il2CppClass *)0x3f19999a3f000000;
                          *(undefined4 *)&pIVar8[2].monitor = 0x3f8ccccd;
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MainBackgroundMenu$$AddParallaxEffect
// il2cpp: void UI_MainBackgroundMenu__AddParallaxEffect (UI_MainBackgroundMenu_o* __this, UnityEngine_GameObject_o* target, float intensity, const MethodInfo* method);
// 0x40f1b10

void UI_MainBackgroundMenu__AddParallaxEffect
               (UI_MainBackgroundMenu_o *__this,UnityEngine_GameObject_o *target,float intensity,
               MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (DAT_05704808 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_ParallaxEffect_AddComponent_ParallaxEffect);
    DAT_05704808 = '\x01';
  }
  if (target != (UnityEngine_GameObject_o *)0x0) {
    pIVar1 = UnityEngine_GameObject__AddComponent<object>(target,MethodInfo_ParallaxEffect_AddComponent_ParallaxEffect);
    if (pIVar1 != (Il2CppObject *)0x0) {
      *(float *)&pIVar1[2].klass = intensity;
      *(undefined8 *)((long)&pIVar1[2].klass + 4) = 0x3f8ccccd3f19999a;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MainBackgroundMenu$$Update
// il2cpp: void UI_MainBackgroundMenu__Update (UI_MainBackgroundMenu_o* __this, const MethodInfo* method);
// 0x40f1b80

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
  
  if (DAT_05704809 == '\0') {
    il2cpp_init_method_metadata();
    DAT_05704809 = '\x01';
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
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)pUVar1,MethodInfo_RectTransform_GetComponent_RectTransform);
    pUVar1 = (__this->fields)._mainBackgroundPanelBack;
    if (pUVar1 != (UI_MainMenuBackgroundPanel_o *)0x0) {
      pUVar8 = (UnityEngine_RectTransform_o *)
               UnityEngine_Component__GetComponent<object>
                         ((UnityEngine_Component_o *)pUVar1,MethodInfo_RectTransform_GetComponent_RectTransform);
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
        UVar2 = UnityEngine_Vector2__SmoothDamp
                          (UVar2,target,currentVelocity,fVar10,INFINITY,fVar9,(MethodInfo *)0x0);
        if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
          UnityEngine_RectTransform__set_anchoredPosition(pUVar7,UVar2,(MethodInfo *)0x0);
          pUVar1 = (__this->fields)._mainBackgroundPanelFront;
          if (pUVar1 != (UI_MainMenuBackgroundPanel_o *)0x0) {
            pUVar7 = (UnityEngine_RectTransform_o *)
                     UnityEngine_Component__GetComponent<object>
                               ((UnityEngine_Component_o *)pUVar1,MethodInfo_RectTransform_GetComponent_RectTransform);
            pUVar1 = (__this->fields)._mainBackgroundPanelFront;
            if (pUVar1 != (UI_MainMenuBackgroundPanel_o *)0x0) {
              pUVar8 = (UnityEngine_RectTransform_o *)
                       UnityEngine_Component__GetComponent<object>
                                 ((UnityEngine_Component_o *)pUVar1,MethodInfo_RectTransform_GetComponent_RectTransform);
              if (pUVar8 != (UnityEngine_RectTransform_o *)0x0) {
                UVar2 = UnityEngine_RectTransform__get_anchoredPosition(pUVar8,(MethodInfo *)0x0);
                fVar10 = (__this->fields).smoothTime;
                fVar9 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
                UVar2 = UnityEngine_Vector2__SmoothDamp
                                  (UVar2,target,currentVelocity,fVar10,INFINITY,fVar9,
                                   (MethodInfo *)0x0);
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MainBackgroundMenu$$GetConstrainedTargetPosition
// il2cpp: UnityEngine_Vector2_o UI_MainBackgroundMenu__GetConstrainedTargetPosition (UI_MainBackgroundMenu_o* __this, UnityEngine_Vector2_o mousePosition, const MethodInfo* method);
// 0x40f1df0

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
// 0x40f1ef0

float UI_MainBackgroundMenu__MapRange
                (UI_MainBackgroundMenu_o *__this,float value,float fromSource,float toSource,
                float fromTarget,float toTarget,MethodInfo *method)

{
  return ((value - fromSource) / (toSource - fromSource)) * (toTarget - fromTarget) + fromTarget;
}


// UI.MainBackgroundMenu$$ChangeMainBackground
// il2cpp: void UI_MainBackgroundMenu__ChangeMainBackground (UI_MainBackgroundMenu_o* __this, const MethodInfo* method);
// 0x40f1f10

void UI_MainBackgroundMenu__ChangeMainBackground(UI_MainBackgroundMenu_o *__this,MethodInfo *method)

{
  UI_LoadingBackgroundPanel_o *__this_00;
  UI_MainMenuBackgroundPanel_o *pUVar1;
  Il2CppObject *__this_01;
  
  __this_00 = (UI_LoadingBackgroundPanel_o *)(__this->fields)._mainBackgroundPanelFront;
  if (__this_00 != (UI_LoadingBackgroundPanel_o *)0x0) {
    UI_LoadingBackgroundPanel__SetRandomBackground(__this_00,0,0,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._mainBackgroundPanelFront;
    if (pUVar1 != (UI_MainMenuBackgroundPanel_o *)0x0) {
      (*(pUVar1->klass->vtable)._21_Show.methodPtr)();
      if (DAT_0570480a == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_WaitAndFinishBackground_d__12);
        DAT_0570480a = '\x01';
      }
      __this_01 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitAndFinishBackground_d__12);
      System_Object___ctor(__this_01,(MethodInfo *)0x0);
      *(undefined4 *)&__this_01[1].klass = 0;
      if (__this_01 != (Il2CppObject *)0x0) {
        __this_01[2].klass = (Il2CppClass *)__this;
        il2cpp_runtime_glue(__this_01 + 2,__this);
        UnityEngine_MonoBehaviour__StartCoroutine
                  ((UnityEngine_MonoBehaviour_o *)__this,
                   (System_Collections_IEnumerator_o *)__this_01,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MainBackgroundMenu$$WaitAndFinishBackground
// il2cpp: System_Collections_IEnumerator_o* UI_MainBackgroundMenu__WaitAndFinishBackground (UI_MainBackgroundMenu_o* __this, const MethodInfo* method);
// 0x40f1fc0

System_Collections_IEnumerator_o *
UI_MainBackgroundMenu__WaitAndFinishBackground(UI_MainBackgroundMenu_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_0570480a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WaitAndFinishBackground_d__12);
    DAT_0570480a = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitAndFinishBackground_d__12);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 2,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MainBackgroundMenu$$.ctor
// il2cpp: void UI_MainBackgroundMenu___ctor (UI_MainBackgroundMenu_o* __this, const MethodInfo* method);
// 0x40f2050

void UI_MainBackgroundMenu___ctor(UI_MainBackgroundMenu_o *__this,MethodInfo *method)

{
  (__this->fields).smoothTime = 0.3;
  (__this->fields).backgroundScale = 1.1;
  UI_BaseMenu___ctor((UI_BaseMenu_o *)__this,(MethodInfo *)0x0);
  return;
}


