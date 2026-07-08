// Type: Gisketch.Aottg2UI.Actions.GisketchSectionNavigator
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchSectionNavigator.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator.<>c__DisplayClass27_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator___c__DisplayClass27_0___ctor (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator___c__DisplayClass27_0_o* __this, const MethodInfo* method);
// 0x3b2e7b0

void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_<>c__DisplayClass27_0___ctor
               (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator___c__DisplayClass27_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator.<>c__DisplayClass27_0$$<AnimateSection>b__0
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator___c__DisplayClass27_0___AnimateSection_b__0 (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator___c__DisplayClass27_0_o* __this, float value, const MethodInfo* method);
// 0x3b2ec20

void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_<>c__DisplayClass27_0__<AnimateSection>b__0
               (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator___c__DisplayClass27_0_o *__this,
               float value,MethodInfo *method)

{
  UnityEngine_CanvasGroup_o *__this_00;
  
  __this_00 = (__this->fields).group;
  if (__this_00 != (UnityEngine_CanvasGroup_o *)0x0) {
    UnityEngine_CanvasGroup__set_alpha(__this_00,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$get_ActiveSectionId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__get_ActiveSectionId (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, const MethodInfo* method);
// 0x3b2d1e0

System_String_o *
Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__get_ActiveSectionId
          (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  System_String_array *pSVar3;
  
  pSVar3 = (__this->fields)._sectionIds;
  if (pSVar3 != (System_String_array *)0x0) {
    uVar1 = (__this->fields)._activeIndex;
    if (-1 < (long)(int)uVar1) {
      uVar2 = (uint)pSVar3->max_length;
      if ((int)uVar1 < (int)uVar2) {
        if (uVar1 < uVar2) {
          return pSVar3->m_Items[(int)uVar1];
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
  return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$Setup
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Setup (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, System_String_array* sectionIds, System_String_o* mode, System_String_o* prefix, const MethodInfo* method);
// 0x3b2d230

void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Setup
               (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,
               System_String_array *sectionIds,System_String_o *mode,System_String_o *prefix,
               MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (DAT_057015dd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&"brush-side-panel");
    il2cpp_init_method_metadata(&"Separate");
    DAT_057015dd = '\x01';
  }
  if (sectionIds == (System_String_array *)0x0) {
    sectionIds = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,0);
  }
  if (__this == (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  (__this->fields)._sectionIds = sectionIds;
  il2cpp_runtime_glue(&(__this->fields)._sectionIds);
  bVar1 = System_String__IsNullOrEmpty(prefix,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    prefix = "brush-side-panel";
  }
  (__this->fields)._prefix = prefix;
  il2cpp_runtime_glue(&(__this->fields)._prefix,prefix);
  bVar1 = System_String__Equals(mode,"Separate",5,(MethodInfo *)0x0);
  *(char *)&(__this->fields)._separate = (char)bVar1;
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$Select
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Select (UnityEngine_GameObject_o* source, System_String_o* sectionId, bool instant, const MethodInfo* method);
// 0x3b2bea0

void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Select
               (UnityEngine_GameObject_o *source,System_String_o *sectionId,bool_conflict instant,
               MethodInfo *method)

{
  bool_conflict bVar1;
  Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)sectionId;
  if (DAT_057015de == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057015de = '\x01';
  }
  __this = Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__FindNavigator(source,method_00);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (__this != (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)0x0) {
      Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Select
                (__this,sectionId,instant & 0xff,method);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$Select
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Select (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, System_String_o* sectionId, bool instant, const MethodInfo* method);
// 0x3b2d440

void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Select
               (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,
               System_String_o *sectionId,bool_conflict instant,MethodInfo *method)

{
  UnityEngine_UI_ScrollRect_o *pUVar1;
  UnityEngine_RectTransform_array *pUVar2;
  bool_conflict bVar3;
  System_String_array *pSVar4;
  MethodInfo *pMVar5;
  uint uVar6;
  ulong uVar7;
  
  pMVar5 = (MethodInfo *)sectionId;
  if (DAT_057015df == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057015df = '\x01';
  }
  Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Resolve(__this,pMVar5);
  pSVar4 = (__this->fields)._sectionIds;
  if (pSVar4 != (System_String_array *)0x0) {
    uVar7 = 0;
    do {
      uVar6 = (uint)pSVar4->max_length;
      if ((long)(int)uVar6 <= (long)uVar7) {
        return;
      }
      if (uVar6 <= uVar7) {
LAB_03b2d570:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pMVar5 = (MethodInfo *)0x0;
      bVar3 = System_String__Equals(pSVar4->m_Items[uVar7],sectionId,5,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        uVar6 = (uint)uVar7;
        if ((int)uVar6 < 0) {
          return;
        }
        if ((__this->fields)._activeIndex == uVar6) {
          return;
        }
        Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__SetActive
                  (__this,uVar6,(uint)(byte)(__this->fields)._separate,pMVar5);
        if ((char)(__this->fields)._separate == '\0') {
          pUVar2 = (__this->fields)._sections;
          if (pUVar2 != (UnityEngine_RectTransform_array *)0x0) {
            if (uVar6 < (uint)pUVar2->max_length) {
              Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__ScrollTo
                        (__this,pUVar2->m_Items[uVar7],instant & 0xff,pMVar5);
              return;
            }
            goto LAB_03b2d570;
          }
        }
        else {
          pUVar1 = (__this->fields)._scroll;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pMVar5 = (MethodInfo *)0x0;
          bVar3 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if ((char)bVar3 == '\0') {
            return;
          }
          Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__RefreshSeparateLayout(__this,pMVar5);
          pUVar1 = (__this->fields)._scroll;
          if (pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) {
            UnityEngine_UI_ScrollRect__set_verticalNormalizedPosition(pUVar1,1.0,(MethodInfo *)0x0);
            return;
          }
        }
        break;
      }
      uVar7 = uVar7 + 1;
      pSVar4 = (__this->fields)._sectionIds;
    } while (pSVar4 != (System_String_array *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$Start
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Start (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, const MethodInfo* method);
// 0x3b2e070

void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Start
               (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,MethodInfo *method)

{
  MethodInfo *in_RCX;
  
  Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Resolve(__this,method);
  Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__SetActive(__this,0,0,in_RCX);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$LateUpdate
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__LateUpdate (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, const MethodInfo* method);
// 0x3b2e090

void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__LateUpdate
               (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,MethodInfo *method)

{
  int32_t index;
  MethodInfo *in_RCX;
  
  if ((char)(__this->fields)._separate == '\0') {
    Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Resolve(__this,method);
    index = Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__SectionAtViewportTop(__this,method);
    if ((-1 < index) && (index != (__this->fields)._activeIndex)) {
      Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__SetActive(__this,index,0,in_RCX);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__OnDestroy (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, const MethodInfo* method);
// 0x3b2e340

void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__OnDestroy
               (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o *t;
  
  t = (__this->fields)._scrollTween;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(t,0,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$Resolve
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Resolve (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, const MethodInfo* method);
// 0x3b2d580

void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Resolve
               (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_array **ppUVar1;
  uint uVar2;
  bool_conflict bVar3;
  UnityEngine_Transform_o *pUVar4;
  System_String_o *pSVar5;
  UnityEngine_UI_ScrollRect_o *pUVar6;
  UnityEngine_RectTransform_array *pUVar7;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *pGVar8;
  System_String_array *pSVar9;
  UnityEngine_RectTransform_o *pUVar10;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *pGVar11;
  ulong uVar12;
  
  if (DAT_057015e0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchBrushButtonFeedback);
    il2cpp_init_method_metadata(&MethodInfo_GisketchBrushButtonFeedback_ComponentInNamedChil);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_ComponentInNamedChild_RectTransfor);
    il2cpp_init_method_metadata(&MethodInfo_ScrollRect_ComponentInNamedChild_ScrollRect);
    il2cpp_init_method_metadata(&TypeInfo_RectTransform);
    il2cpp_init_method_metadata(&"brush-side-panel-button-");
    il2cpp_init_method_metadata(&"-scroll");
    DAT_057015e0 = '\x01';
  }
  bVar3 = Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__IsResolved(__this,method);
  if ((char)bVar3 != '\0') {
    return;
  }
  pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
    pUVar4 = UnityEngine_Transform__get_parent(pUVar4,(MethodInfo *)0x0);
    pSVar5 = System_String__Concat((__this->fields)._prefix,"-scroll",(MethodInfo *)0x0);
    pUVar6 = (UnityEngine_UI_ScrollRect_o *)
             Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__ComponentInNamedChild<object>
                       (pUVar4,pSVar5,MethodInfo_ScrollRect_ComponentInNamedChild_ScrollRect);
    (__this->fields)._scroll = pUVar6;
    il2cpp_runtime_glue(&(__this->fields)._scroll,pUVar6);
    pSVar9 = (__this->fields)._sectionIds;
    if (pSVar9 != (System_String_array *)0x0) {
      pUVar7 = (UnityEngine_RectTransform_array *)il2cpp_glue_02274930(TypeInfo_RectTransform,(int)pSVar9->max_length)
      ;
      ppUVar1 = &(__this->fields)._sections;
      (__this->fields)._sections = pUVar7;
      il2cpp_runtime_glue(ppUVar1,pUVar7);
      pSVar9 = (__this->fields)._sectionIds;
      if (pSVar9 != (System_String_array *)0x0) {
        pGVar8 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)
                 il2cpp_glue_02274930(TypeInfo_GisketchBrushButtonFeedback,(int)pSVar9->max_length);
        (__this->fields)._buttons = pGVar8;
        il2cpp_runtime_glue(&(__this->fields)._buttons,pGVar8);
        pSVar9 = (__this->fields)._sectionIds;
        if (pSVar9 != (System_String_array *)0x0) {
          uVar12 = 0;
          do {
            uVar2 = (uint)pSVar9->max_length;
            if ((long)(int)uVar2 <= (long)uVar12) {
              return;
            }
            if (uVar2 <= uVar12) {
LAB_03b2d7ec:
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pUVar7 = *ppUVar1;
            pSVar5 = pSVar9->m_Items[uVar12];
            if (DAT_057015e6 == '\0') {
              il2cpp_init_method_metadata(&"-section-");
              DAT_057015e6 = '\x01';
            }
            pSVar5 = System_String__Concat
                               ((__this->fields)._prefix,"-section-",pSVar5,(MethodInfo *)0x0);
            pUVar10 = (UnityEngine_RectTransform_o *)
                      Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__ComponentInNamedChild<object>
                                (pUVar4,pSVar5,MethodInfo_RectTransform_ComponentInNamedChild_RectTransfor);
            if (pUVar7 == (UnityEngine_RectTransform_array *)0x0) break;
            if ((uint)pUVar7->max_length <= uVar12) goto LAB_03b2d7ec;
            pUVar7->m_Items[uVar12] = pUVar10;
            il2cpp_runtime_glue(pUVar7->m_Items + uVar12,pUVar10);
            pSVar9 = (__this->fields)._sectionIds;
            if (pSVar9 == (System_String_array *)0x0) break;
            if ((uint)pSVar9->max_length <= uVar12) goto LAB_03b2d7ec;
            pGVar8 = (__this->fields)._buttons;
            pSVar5 = System_String__Concat("brush-side-panel-button-",pSVar9->m_Items[uVar12],(MethodInfo *)0x0);
            pGVar11 = (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)
                      Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__ComponentInNamedChild<object>
                                (pUVar4,pSVar5,MethodInfo_GisketchBrushButtonFeedback_ComponentInNamedChil);
            if (pGVar8 == (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)0x0) break;
            if ((uint)pGVar8->max_length <= uVar12) goto LAB_03b2d7ec;
            pGVar8->m_Items[uVar12] = pGVar11;
            il2cpp_runtime_glue(pGVar8->m_Items + uVar12,pGVar11);
            uVar12 = uVar12 + 1;
            pSVar9 = (__this->fields)._sectionIds;
          } while (pSVar9 != (System_String_array *)0x0);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$IsResolved
// il2cpp: bool Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__IsResolved (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, const MethodInfo* method);
// 0x3b2e360

bool_conflict
Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__IsResolved
          (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,MethodInfo *method)

{
  UnityEngine_UI_ScrollRect_o *x;
  UnityEngine_RectTransform_array *pUVar1;
  UnityEngine_RectTransform_o *x_00;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *pGVar2;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *x_01;
  bool_conflict bVar3;
  System_String_array *pSVar4;
  ulong uVar5;
  
  if (DAT_057015e1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057015e1 = '\x01';
  }
  x = (__this->fields)._scroll;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((((char)bVar3 != '\0') ||
      ((__this->fields)._sections == (UnityEngine_RectTransform_array *)0x0)) ||
     ((__this->fields)._buttons ==
      (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)0x0)) {
    return 0;
  }
  pSVar4 = (__this->fields)._sectionIds;
  if (pSVar4 != (System_String_array *)0x0) {
    uVar5 = 0;
    do {
      if ((long)(int)pSVar4->max_length <= (long)uVar5) {
        return 1;
      }
      pUVar1 = (__this->fields)._sections;
      if (pUVar1 == (UnityEngine_RectTransform_array *)0x0) break;
      if ((uint)pUVar1->max_length <= uVar5) {
LAB_03b2e4a6:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      x_00 = pUVar1->m_Items[uVar5];
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar3 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
      ;
      if ((char)bVar3 != '\0') {
        return 0;
      }
      pGVar2 = (__this->fields)._buttons;
      if (pGVar2 == (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)0x0) break;
      if ((uint)pGVar2->max_length <= uVar5) goto LAB_03b2e4a6;
      x_01 = pGVar2->m_Items[uVar5];
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar3 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
      ;
      if ((char)bVar3 != '\0') {
        return 0;
      }
      uVar5 = uVar5 + 1;
      pSVar4 = (__this->fields)._sectionIds;
    } while (pSVar4 != (System_String_array *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$SetActive
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__SetActive (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, int32_t index, bool animate, const MethodInfo* method);
// 0x3b2d870

void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__SetActive
               (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,int32_t index,
               bool_conflict animate,MethodInfo *method)

{
  uint uVar1;
  System_String_array *pSVar2;
  UnityEngine_RectTransform_array *pUVar3;
  UnityEngine_RectTransform_o *pUVar4;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *pGVar5;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *pGVar6;
  int iVar7;
  bool_conflict bVar8;
  UnityEngine_GameObject_o *__this_00;
  ulong uVar9;
  MethodInfo *pMVar10;
  char local_34;
  
  if (DAT_057015e2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057015e2 = '\x01';
  }
  if (-1 < index) {
    pSVar2 = (__this->fields)._sectionIds;
    if (pSVar2 == (System_String_array *)0x0) {
LAB_03b2da9a:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    iVar7 = (int)pSVar2->max_length;
    if (index < iVar7) {
      (__this->fields)._activeIndex = index;
      if (0 < iVar7) {
        uVar9 = 0;
        do {
          pUVar3 = (__this->fields)._sections;
          if ((pUVar3 != (UnityEngine_RectTransform_array *)0x0) &&
             (uVar1 = (uint)pUVar3->max_length, (long)uVar9 < (long)(int)uVar1)) {
            if (uVar1 <= uVar9) goto LAB_03b2da9f;
            pUVar4 = pUVar3->m_Items[uVar9];
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_init_class();
            }
            bVar8 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,
                               (MethodInfo *)0x0);
            if (((char)bVar8 != '\0') && ((char)(__this->fields)._separate != '\0')) {
              pUVar3 = (__this->fields)._sections;
              if (pUVar3 == (UnityEngine_RectTransform_array *)0x0) goto LAB_03b2da9a;
              if ((uint)pUVar3->max_length <= uVar9) goto LAB_03b2da9f;
              if ((pUVar3->m_Items[uVar9] == (UnityEngine_RectTransform_o *)0x0) ||
                 (__this_00 = UnityEngine_Component__get_gameObject
                                        ((UnityEngine_Component_o *)pUVar3->m_Items[uVar9],
                                         (MethodInfo *)0x0),
                 __this_00 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03b2da9a;
              UnityEngine_GameObject__SetActive
                        (__this_00,(uint)((uint)index == uVar9),(MethodInfo *)0x0);
            }
          }
          pGVar5 = (__this->fields)._buttons;
          if ((pGVar5 != (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)0x0) &&
             (uVar1 = (uint)pGVar5->max_length, (long)uVar9 < (long)(int)uVar1)) {
            if (uVar1 <= uVar9) goto LAB_03b2da9f;
            pGVar6 = pGVar5->m_Items[uVar9];
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pMVar10 = (MethodInfo *)0x0;
            bVar8 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pGVar6,(UnityEngine_Object_o *)0x0,
                               (MethodInfo *)0x0);
            if ((char)bVar8 != '\0') {
              pGVar5 = (__this->fields)._buttons;
              if (pGVar5 == (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_array *)0x0)
              goto LAB_03b2da9a;
              if ((uint)pGVar5->max_length <= uVar9) goto LAB_03b2da9f;
              pGVar6 = pGVar5->m_Items[uVar9];
              if (pGVar6 == (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)0x0)
              goto LAB_03b2da9a;
              *(bool *)((long)&(pGVar6->fields)._hovered + 2) = (uint)index == uVar9;
              Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__Refresh(pGVar6,pMVar10);
            }
          }
          pSVar2 = (__this->fields)._sectionIds;
          if (pSVar2 == (System_String_array *)0x0) goto LAB_03b2da9a;
          uVar9 = uVar9 + 1;
        } while ((long)uVar9 < (long)(int)pSVar2->max_length);
      }
      local_34 = (char)animate;
      if ((local_34 != '\0') &&
         (pUVar3 = (__this->fields)._sections, pUVar3 != (UnityEngine_RectTransform_array *)0x0)) {
        if ((uint)index < (uint)pUVar3->max_length) {
          pUVar4 = pUVar3->m_Items[index];
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pMVar10 = (MethodInfo *)0x0;
          bVar8 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if ((char)bVar8 == '\0') {
            return;
          }
          pUVar3 = (__this->fields)._sections;
          if (pUVar3 == (UnityEngine_RectTransform_array *)0x0) goto LAB_03b2da9a;
          if ((uint)index < (uint)pUVar3->max_length) {
            Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__AnimateSection
                      (pUVar3->m_Items[index],pMVar10);
            return;
          }
        }
LAB_03b2da9f:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$RefreshSeparateLayout
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__RefreshSeparateLayout (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, const MethodInfo* method);
// 0x3b2df10

void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__RefreshSeparateLayout
               (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,MethodInfo *method)

{
  UnityEngine_UI_ScrollRect_o *pUVar1;
  UnityEngine_RectTransform_o *pUVar2;
  bool_conflict bVar3;
  Gilzoide_FlexUi_FlexLayout_o *__this_00;
  
  if (DAT_057015e3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_FlexLayout_GetComponent_FlexLayout);
    il2cpp_init_method_metadata(&TypeInfo_LayoutRebuilder);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057015e3 = '\x01';
  }
  pUVar1 = (__this->fields)._scroll;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return;
  }
  pUVar1 = (__this->fields)._scroll;
  if (pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) {
    pUVar2 = (pUVar1->fields).m_Content;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 != '\0') {
      return;
    }
    UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
    pUVar1 = (__this->fields)._scroll;
    if ((pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
       (pUVar2 = (pUVar1->fields).m_Content, pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
      __this_00 = (Gilzoide_FlexUi_FlexLayout_o *)
                  UnityEngine_Component__GetComponent<object>
                            ((UnityEngine_Component_o *)pUVar2,MethodInfo_FlexLayout_GetComponent_FlexLayout);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        if (__this_00 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto LAB_03b2e060;
        Gilzoide_FlexUi_FlexLayout__RefreshRootLayoutImmediate(__this_00,(MethodInfo *)0x0);
      }
      pUVar1 = (__this->fields)._scroll;
      if (pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) {
        pUVar2 = (pUVar1->fields).m_Content;
        if (*(int *)(TypeInfo_LayoutRebuilder + 0xe4) == 0) {
          il2cpp_init_class();
        }
        UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate(pUVar2,(MethodInfo *)0x0);
        UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_03b2e060:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$ScrollTo
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__ScrollTo (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, UnityEngine_RectTransform_o* target, bool instant, const MethodInfo* method);
// 0x3b2dab0

void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__ScrollTo
               (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,
               UnityEngine_RectTransform_o *target,bool_conflict instant,MethodInfo *method)

{
  DG_Tweening_Tween_o **ppDVar1;
  UnityEngine_UI_ScrollRect_o *pUVar2;
  UnityEngine_Object_o *x;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_Transform_o *root;
  bool_conflict bVar4;
  DG_Tweening_Core_DOGetter_float__o *getter;
  DG_Tweening_Core_DOSetter_float__o *setter;
  DG_Tweening_Core_TweenerCore_float__float__FloatOptions__o *t;
  Il2CppObject *t_00;
  DG_Tweening_Tween_o *pDVar5;
  float fVar6;
  float fVar7;
  UnityEngine_Rect_o UVar8;
  UnityEngine_Rect_o UVar9;
  float fStack_84;
  float fStack_74;
  UnityEngine_Bounds_o local_48;
  
  if (DAT_057015e4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Application);
    il2cpp_init_method_metadata(&TypeInfo_DOGetter_float);
    il2cpp_init_method_metadata(&TypeInfo_DOSetter_float);
    il2cpp_init_method_metadata(&TypeInfo_DOTween);
    il2cpp_init_method_metadata(&TypeInfo_GisketchMotionDriver);
    il2cpp_init_method_metadata(&MethodInfo_Single__ScrollTo_b__22_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__ScrollTo_b__22_1);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_RectTransformUtility);
    il2cpp_init_method_metadata(&MethodInfo_TweenerCore_3_System_Single_System_Single_DG_Twe);
    il2cpp_init_method_metadata(&MethodInfo_TweenerCore_3_System_Single_System_Single_DG_Twe);
    DAT_057015e4 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)target,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    pUVar2 = (__this->fields)._scroll;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar4 == '\0') {
      pUVar2 = (__this->fields)._scroll;
      if (pUVar2 != (UnityEngine_UI_ScrollRect_o *)0x0) {
        x = *(UnityEngine_Object_o **)&(pUVar2->fields).m_ScrollSensitivity;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar4 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          return;
        }
        pUVar2 = (__this->fields)._scroll;
        if (pUVar2 != (UnityEngine_UI_ScrollRect_o *)0x0) {
          pUVar3 = (pUVar2->fields).m_Content;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar4 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,
                             (MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            return;
          }
          UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
          pUVar2 = (__this->fields)._scroll;
          if ((pUVar2 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
             (pUVar3 = (pUVar2->fields).m_Content, pUVar3 != (UnityEngine_RectTransform_o *)0x0)) {
            UVar8 = UnityEngine_RectTransform__get_rect(pUVar3,(MethodInfo *)0x0);
            pUVar2 = (__this->fields)._scroll;
            if ((pUVar2 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
               (pUVar3 = *(UnityEngine_RectTransform_o **)&(pUVar2->fields).m_ScrollSensitivity,
               pUVar3 != (UnityEngine_RectTransform_o *)0x0)) {
              UVar9 = UnityEngine_RectTransform__get_rect(pUVar3,(MethodInfo *)0x0);
              fVar6 = UVar8.fields.m_Height - UVar9.fields.m_Height;
              fVar7 = 0.0;
              if (0.0 <= fVar6) {
                fVar7 = fVar6;
              }
              if (fVar7 <= 0.01) {
                return;
              }
              pUVar2 = (__this->fields)._scroll;
              if (pUVar2 != (UnityEngine_UI_ScrollRect_o *)0x0) {
                root = *(UnityEngine_Transform_o **)&(pUVar2->fields).m_ScrollSensitivity;
                if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                UnityEngine_RectTransformUtility__CalculateRelativeRectTransformBounds
                          (&local_48,root,(UnityEngine_Transform_o *)target,(MethodInfo *)0x0);
                pUVar2 = (__this->fields)._scroll;
                if ((pUVar2 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
                   (pUVar3 = *(UnityEngine_RectTransform_o **)&(pUVar2->fields).m_ScrollSensitivity,
                   pUVar3 != (UnityEngine_RectTransform_o *)0x0)) {
                  UVar8 = UnityEngine_RectTransform__get_rect(pUVar3,(MethodInfo *)0x0);
                  pUVar2 = (__this->fields)._scroll;
                  if (pUVar2 != (UnityEngine_UI_ScrollRect_o *)0x0) {
                    fVar6 = UnityEngine_UI_ScrollRect__get_verticalNormalizedPosition
                                      (pUVar2,(MethodInfo *)0x0);
                    pUVar2 = (__this->fields)._scroll;
                    if (pUVar2 != (UnityEngine_UI_ScrollRect_o *)0x0) {
                      fStack_84 = UVar8.fields.m_Height;
                      fStack_74 = UVar8.fields.m_YMin;
                      fVar6 = fVar6 - ((fStack_74 + fStack_84) -
                                      (local_48.fields.m_Extents.fields.y +
                                      local_48.fields.m_Center.fields.y)) / fVar7;
                      fVar7 = 1.0;
                      if (fVar6 <= 1.0) {
                        fVar7 = fVar6;
                      }
                      fVar7 = (float)(-(uint)(0.0 <= fVar6) & (uint)fVar7);
                      (*(pUVar2->klass->vtable)._41_StopMovement.methodPtr)();
                      pDVar5 = (__this->fields)._scrollTween;
                      if (pDVar5 != (DG_Tweening_Tween_o *)0x0) {
                        DG_Tweening_TweenExtensions__Kill(pDVar5,0,(MethodInfo *)0x0);
                      }
                      if ((char)instant == '\0') {
                        if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
                          il2cpp_init_class();
                        }
                        bVar4 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
                        if ((char)bVar4 != '\0') {
                          ppDVar1 = &(__this->fields)._scrollTween;
                          getter = (DG_Tweening_Core_DOGetter_float__o *)
                                   il2cpp_runtime_glue(TypeInfo_DOGetter_float);
                          DG_Tweening_Core_DOGetter<float>___ctor();
                          setter = (DG_Tweening_Core_DOSetter_float__o *)
                                   il2cpp_runtime_glue(TypeInfo_DOSetter_float);
                          DG_Tweening_Core_DOSetter<float>___ctor();
                          if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
                            il2cpp_init_class();
                          }
                          t = DG_Tweening_DOTween__To(getter,setter,fVar7,0.22,(MethodInfo *)0x0);
                          t_00 = DG_Tweening_TweenSettingsExtensions__SetEase<object>
                                           ((Il2CppObject *)t,9,MethodInfo_TweenerCore_3_System_Single_System_Single_DG_Twe);
                          pDVar5 = (DG_Tweening_Tween_o *)
                                   DG_Tweening_TweenSettingsExtensions__SetUpdate<object>
                                             (t_00,1,MethodInfo_TweenerCore_3_System_Single_System_Single_DG_Twe);
                          *ppDVar1 = pDVar5;
                          il2cpp_runtime_glue(ppDVar1);
                          pDVar5 = *ppDVar1;
                          if (*(int *)(TypeInfo_GisketchMotionDriver + 0xe4) == 0) {
                            il2cpp_init_class();
                          }
                          Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track
                                    (pDVar5,0,(MethodInfo *)0x0);
                          return;
                        }
                      }
                      pUVar2 = (__this->fields)._scroll;
                      if (pUVar2 != (UnityEngine_UI_ScrollRect_o *)0x0) {
                        UnityEngine_UI_ScrollRect__set_verticalNormalizedPosition
                                  (pUVar2,fVar7,(MethodInfo *)0x0);
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
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$SectionAtViewportTop
// il2cpp: int32_t Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__SectionAtViewportTop (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, const MethodInfo* method);
// 0x3b2e0c0

int32_t Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__SectionAtViewportTop
                  (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_UI_ScrollRect_o *pUVar2;
  UnityEngine_Object_o *x;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_Transform_o *root;
  bool_conflict bVar4;
  UnityEngine_RectTransform_array *pUVar5;
  UnityEngine_GameObject_o *__this_00;
  ulong uVar6;
  int iVar7;
  float fVar9;
  float fVar10;
  UnityEngine_Rect_o UVar11;
  float local_70;
  UnityEngine_Bounds_o local_48;
  ulong uVar8;
  
  if (DAT_057015e5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_RectTransformUtility);
    DAT_057015e5 = '\x01';
  }
  pUVar2 = (__this->fields)._scroll;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return -1;
  }
  pUVar2 = (__this->fields)._scroll;
  if (pUVar2 != (UnityEngine_UI_ScrollRect_o *)0x0) {
    x = *(UnityEngine_Object_o **)&(pUVar2->fields).m_ScrollSensitivity;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar4 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      return -1;
    }
    if ((__this->fields)._sections == (UnityEngine_RectTransform_array *)0x0) {
      return -1;
    }
    pUVar2 = (__this->fields)._scroll;
    if ((pUVar2 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
       (pUVar3 = *(UnityEngine_RectTransform_o **)&(pUVar2->fields).m_ScrollSensitivity,
       pUVar3 != (UnityEngine_RectTransform_o *)0x0)) {
      UVar11 = UnityEngine_RectTransform__get_rect(pUVar3,(MethodInfo *)0x0);
      pUVar5 = (__this->fields)._sections;
      if (pUVar5 != (UnityEngine_RectTransform_array *)0x0) {
        fVar9 = UVar11.fields.m_YMin + UVar11.fields.m_Height;
        local_70 = 3.4028235e+38;
        uVar8 = 0xffffffff;
        iVar7 = -1;
        uVar6 = 0;
        uVar1 = (uint)pUVar5->max_length;
        if (0 < (int)uVar1) {
          do {
            if (uVar1 <= uVar6) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pUVar3 = pUVar5->m_Items[uVar6];
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_init_class();
            }
            bVar4 = UnityEngine_Object__op_Equality
                              ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,
                               (MethodInfo *)0x0);
            if ((char)bVar4 == '\0') {
              if ((pUVar3 == (UnityEngine_RectTransform_o *)0x0) ||
                 (__this_00 = UnityEngine_Component__get_gameObject
                                        ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
                 __this_00 == (UnityEngine_GameObject_o *)0x0)) goto LAB_03b2e335;
              bVar4 = UnityEngine_GameObject__get_activeInHierarchy(__this_00,(MethodInfo *)0x0);
              if ((char)bVar4 != '\0') {
                pUVar2 = (__this->fields)._scroll;
                if (pUVar2 == (UnityEngine_UI_ScrollRect_o *)0x0) goto LAB_03b2e335;
                root = *(UnityEngine_Transform_o **)&(pUVar2->fields).m_ScrollSensitivity;
                if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                UnityEngine_RectTransformUtility__CalculateRelativeRectTransformBounds
                          (&local_48,root,(UnityEngine_Transform_o *)pUVar3,(MethodInfo *)0x0);
                fVar10 = local_48.fields.m_Center.fields.y + local_48.fields.m_Extents.fields.y;
                if (((UVar11.fields.m_YMin <= fVar10) &&
                    (local_48.fields.m_Center.fields.y - local_48.fields.m_Extents.fields.y <= fVar9
                    )) && (fVar10 = ABS(fVar10 - (fVar9 + -24.0)), fVar10 < local_70)) {
                  uVar8 = uVar6 & 0xffffffff;
                  local_70 = fVar10;
                }
              }
            }
            iVar7 = (int)uVar8;
            uVar6 = uVar6 + 1;
            pUVar5 = (__this->fields)._sections;
            if (pUVar5 == (UnityEngine_RectTransform_array *)0x0) goto LAB_03b2e335;
            uVar1 = (uint)pUVar5->max_length;
          } while ((long)uVar6 < (long)(int)uVar1);
        }
        if (-1 < iVar7) {
          return iVar7;
        }
        return (__this->fields)._activeIndex;
      }
    }
  }
LAB_03b2e335:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$MaxScrollY
// il2cpp: float Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__MaxScrollY (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, const MethodInfo* method);
// 0x3b2e750

float Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__MaxScrollY
                (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,MethodInfo *method)

{
  UnityEngine_UI_ScrollRect_o *pUVar1;
  UnityEngine_RectTransform_o *pUVar2;
  float fVar3;
  float fVar4;
  UnityEngine_Rect_o UVar5;
  UnityEngine_Rect_o UVar6;
  
  pUVar1 = (__this->fields)._scroll;
  if ((pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
     (pUVar2 = (pUVar1->fields).m_Content, pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
    UVar5 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._scroll;
    if ((pUVar1 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
       (pUVar2 = *(UnityEngine_RectTransform_o **)&(pUVar1->fields).m_ScrollSensitivity,
       pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
      UVar6 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
      fVar4 = UVar5.fields.m_Height - UVar6.fields.m_Height;
      fVar3 = 0.0;
      if (0.0 <= fVar4) {
        fVar3 = fVar4;
      }
      return fVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$IndexOf
// il2cpp: int32_t Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__IndexOf (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, System_String_o* sectionId, const MethodInfo* method);
// 0x3b2d800

int32_t Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__IndexOf
                  (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,
                  System_String_o *sectionId,MethodInfo *method)

{
  uint uVar1;
  bool_conflict bVar2;
  System_String_array *pSVar3;
  ulong uVar4;
  
  pSVar3 = (__this->fields)._sectionIds;
  if (pSVar3 != (System_String_array *)0x0) {
    uVar4 = 0;
    do {
      uVar1 = (uint)pSVar3->max_length;
      if ((long)(int)uVar1 <= (long)uVar4) {
        uVar4 = 0xffffffff;
LAB_03b2d85f:
        return (int32_t)uVar4;
      }
      if (uVar1 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      bVar2 = System_String__Equals(pSVar3->m_Items[uVar4],sectionId,5,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') goto LAB_03b2d85f;
      uVar4 = uVar4 + 1;
      pSVar3 = (__this->fields)._sectionIds;
    } while (pSVar3 != (System_String_array *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$SectionName
// il2cpp: System_String_o* Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__SectionName (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, System_String_o* sectionId, const MethodInfo* method);
// 0x3b2e4b0

System_String_o *
Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__SectionName
          (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,System_String_o *sectionId,
          MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (DAT_057015e6 == '\0') {
    il2cpp_init_method_metadata(&"-section-");
    DAT_057015e6 = '\x01';
  }
  pSVar1 = System_String__Concat((__this->fields)._prefix,"-section-",sectionId,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$AnimateSection
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__AnimateSection (UnityEngine_RectTransform_o* section, const MethodInfo* method);
// 0x3b2e500

void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__AnimateSection
               (UnityEngine_RectTransform_o *section,MethodInfo *method)

{
  char cVar1;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  Il2CppClass *pIVar4;
  UnityEngine_GameObject_o *__this;
  DG_Tweening_TweenCallback_float__o *onVirtualUpdate;
  DG_Tweening_Tweener_o *t;
  DG_Tweening_Tween_o *tween;
  Il2CppObject *pIVar5;
  
  if (DAT_057015e7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Application);
    il2cpp_init_method_metadata(&MethodInfo_CanvasGroup_GetComponent_CanvasGroup);
    il2cpp_init_method_metadata(&MethodInfo_CanvasGroup_AddComponent_CanvasGroup);
    il2cpp_init_method_metadata(&TypeInfo_GisketchMotionDriver);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_TweenCallback_float);
    il2cpp_init_method_metadata(&MethodInfo_Tweener_SetEase_Tweener);
    il2cpp_init_method_metadata(&MethodInfo_Tweener_SetUpdate_Tweener);
    il2cpp_init_method_metadata(&MethodInfo_Void__AnimateSection_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass27_0);
    DAT_057015e7 = '\x01';
  }
  pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass27_0);
  System_Object___ctor(pIVar3,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
    il2cpp_init_class();
    bVar2 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    cVar1 = (char)bVar2;
  }
  else {
    bVar2 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    cVar1 = (char)bVar2;
  }
  if (cVar1 == '\0') {
    return;
  }
  if ((section != (UnityEngine_RectTransform_o *)0x0) &&
     (pIVar4 = (Il2CppClass *)
               UnityEngine_Component__GetComponent<object>
                         ((UnityEngine_Component_o *)section,MethodInfo_CanvasGroup_GetComponent_CanvasGroup),
     pIVar3 != (Il2CppObject *)0x0)) {
    pIVar5 = pIVar3 + 1;
    pIVar3[1].klass = pIVar4;
    il2cpp_runtime_glue(pIVar5);
    pIVar4 = pIVar3[1].klass;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pIVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      __this = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)section,(MethodInfo *)0x0);
      if (__this == (UnityEngine_GameObject_o *)0x0) goto LAB_03b2e74a;
      pIVar4 = (Il2CppClass *)UnityEngine_GameObject__AddComponent<object>(__this,MethodInfo_CanvasGroup_AddComponent_CanvasGroup);
      pIVar5->klass = pIVar4;
      il2cpp_runtime_glue(pIVar5);
    }
    if (pIVar5->klass != (Il2CppClass *)0x0) {
      UnityEngine_CanvasGroup__set_alpha
                ((UnityEngine_CanvasGroup_o *)pIVar5->klass,0.0,(MethodInfo *)0x0);
      onVirtualUpdate = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_glue(TypeInfo_TweenCallback_float);
      DG_Tweening_TweenCallback<float>___ctor();
      t = DG_Tweening_DOVirtual__Float(0.0,1.0,0.14,onVirtualUpdate,(MethodInfo *)0x0);
      pIVar3 = DG_Tweening_TweenSettingsExtensions__SetEase<object>
                         ((Il2CppObject *)t,9,MethodInfo_Tweener_SetEase_Tweener);
      tween = (DG_Tweening_Tween_o *)
              DG_Tweening_TweenSettingsExtensions__SetUpdate<object>(pIVar3,1,MethodInfo_Tweener_SetUpdate_Tweener);
      if (*(int *)(TypeInfo_GisketchMotionDriver + 0xe4) == 0) {
        il2cpp_init_class();
      }
      Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track(tween,0,(MethodInfo *)0x0);
      return;
    }
  }
LAB_03b2e74a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$FindNavigator
// il2cpp: Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__FindNavigator (UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x3b2d320

Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *
Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__FindNavigator
          (UnityEngine_GameObject_o *source,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  UnityEngine_Transform_o *__this;
  Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *x;
  
  if (DAT_057015e8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_GisketchSectionNavigator_GetComponentInChildren);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057015e8 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this = (UnityEngine_Transform_o *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (source == (UnityEngine_GameObject_o *)0x0) goto LAB_03b2d42c;
    __this = UnityEngine_GameObject__get_transform(source,(MethodInfo *)0x0);
  }
  iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  while( true ) {
    if (iVar1 == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      return (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)0x0;
    }
    if (__this == (UnityEngine_Transform_o *)0x0) break;
    x = (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)
        UnityEngine_Component__GetComponentInChildren<object>
                  ((UnityEngine_Component_o *)__this,1,MethodInfo_GisketchSectionNavigator_GetComponentInChildren);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      return x;
    }
    __this = UnityEngine_Transform__get_parent(__this,(MethodInfo *)0x0);
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
LAB_03b2d42c:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$ComponentInNamedChild<object>
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__ComponentInNamedChild_object_ (UnityEngine_Transform_o* root, System_String_o* name, const MethodInfo_24F25A0* method);
// 0x25f25a0

Il2CppObject *
Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__ComponentInNamedChild<object>
          (UnityEngine_Transform_o *root,System_String_o *name,MethodInfo_24F25A0 *method)

{
  bool_conflict bVar1;
  UnityEngine_Transform_o *x;
  Il2CppObject *pIVar2;
  
  if (method->rgctx_data == (MethodInfo_24F25A0_RGCTXs *)0x0) {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    if (method->rgctx_data == (MethodInfo_24F25A0_RGCTXs *)0x0) {
      il2cpp_glue_022c2910(method);
    }
  }
  x = Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__FindChild(root,name,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (x != (UnityEngine_Transform_o *)0x0) {
      pIVar2 = UnityEngine_Component__GetComponentInChildren<object>
                         ((UnityEngine_Component_o *)x,1,
                          (MethodInfo_24A4B70 *)
                          method->rgctx_data->_1_UnityEngine_Component_GetComponentInChildren_T_);
      return pIVar2;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return (Il2CppObject *)0x0;
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$FindChild
// il2cpp: UnityEngine_Transform_o* Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__FindChild (UnityEngine_Transform_o* root, System_String_o* name, const MethodInfo* method);
// 0x3b2e7c0

/* WARNING: Removing unreachable block (ram,0x03b2eaae) */

UnityEngine_Transform_o *
Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__FindChild
          (UnityEngine_Transform_o *root,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  System_Collections_IEnumerator_c *pSVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  char cVar6;
  bool_conflict bVar7;
  System_String_o *a;
  System_Collections_IEnumerator_o *pSVar8;
  VirtualInvokeData *pVVar9;
  UnityEngine_Transform_o *x;
  long *plVar10;
  undefined8 *puVar11;
  MethodInfo *method_00;
  long lVar12;
  long lVar13;
  int iVar14;
  UnityEngine_Transform_o *pUVar15;
  undefined1 auVar16 [16];
  
  if (DAT_057015e9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_Transform);
    DAT_057015e9 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pUVar15 = (UnityEngine_Transform_o *)0x0;
  if ((char)bVar7 == '\0') {
    if (root == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    a = UnityEngine_Object__get_name((UnityEngine_Object_o *)root,(MethodInfo *)0x0);
    bVar7 = System_String__op_Equality(a,name,(MethodInfo *)0x0);
    pUVar15 = root;
    if ((char)bVar7 == '\0') {
      pSVar8 = UnityEngine_Transform__GetEnumerator(root,(MethodInfo *)0x0);
      if (pSVar8 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      do {
        pSVar4 = pSVar8->klass;
        uVar2._0_1_ = (pSVar4->_2).rank;
        uVar2._1_1_ = (pSVar4->_2).minimumAlignment;
        if ((ulong)uVar2 != 0) {
          pIVar5 = (pSVar4->_1).interfaceOffsets;
          lVar12 = 0;
          do {
            if (*(long *)((long)&pIVar5->interfaceType + lVar12) == TypeInfo_IEnumerator) {
              pVVar9 = pSVar4->vtable + *(int *)((long)&pIVar5->offset + lVar12);
              goto LAB_03b2e903;
            }
            lVar12 = lVar12 + 0x10;
          } while ((ulong)uVar2 << 4 != lVar12);
        }
        pVVar9 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar8,TypeInfo_IEnumerator,0);
LAB_03b2e903:
        cVar6 = (*pVVar9->methodPtr)(pSVar8,pVVar9->method);
        if (cVar6 == '\0') {
          iVar14 = 7;
          x = (UnityEngine_Transform_o *)0x0;
          goto LAB_03b2ea05;
        }
        pSVar4 = pSVar8->klass;
        uVar3._0_1_ = (pSVar4->_2).rank;
        uVar3._1_1_ = (pSVar4->_2).minimumAlignment;
        if ((ulong)uVar3 != 0) {
          pIVar5 = (pSVar4->_1).interfaceOffsets;
          lVar12 = 0;
          do {
            if (*(long *)((long)&pIVar5->interfaceType + lVar12) == TypeInfo_IEnumerator) {
              pVVar9 = pSVar4->vtable + (*(int *)((long)&pIVar5->offset + lVar12) + 1);
              goto LAB_03b2e988;
            }
            lVar12 = lVar12 + 0x10;
          } while ((ulong)uVar3 << 4 != lVar12);
        }
        pVVar9 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar8,TypeInfo_IEnumerator,1);
LAB_03b2e988:
        auVar16 = (*pVVar9->methodPtr)(pSVar8,pVVar9->method);
        method_00 = auVar16._8_8_;
        pUVar15 = auVar16._0_8_;
        if (pUVar15 != (UnityEngine_Transform_o *)0x0) {
          bVar1 = (TypeInfo_Transform->_2).naturalAligment;
          method_00 = (MethodInfo *)(ulong)bVar1;
          if (((pUVar15->klass->_2).naturalAligment < bVar1) ||
             ((pUVar15->klass->_2).typeHierarchy[(long)&method_00[-1].field_0x57] != TypeInfo_Transform))
          {
                    /* WARNING: Subroutine does not return */
            il2cpp_unwind_resume(pUVar15);
          }
        }
        x = Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__FindChild(pUVar15,name,method_00);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar7 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      } while ((char)bVar7 == '\0');
      iVar14 = 6;
LAB_03b2ea05:
      plVar10 = (long *)il2cpp_runtime_glue(pSVar8,TypeInfo_IDisposable);
      if (plVar10 != (long *)0x0) {
        lVar12 = *plVar10;
        if ((ulong)*(ushort *)(lVar12 + 0x12e) != 0) {
          lVar13 = 0;
          do {
            if (*(long *)(*(long *)(lVar12 + 0xb0) + lVar13) == TypeInfo_IDisposable) {
              puVar11 = (undefined8 *)
                        (lVar12 + (long)*(int *)(*(long *)(lVar12 + 0xb0) + 8 + lVar13) * 0x10 +
                        0x138);
              goto LAB_03b2ea6d;
            }
            lVar13 = lVar13 + 0x10;
          } while ((ulong)*(ushort *)(lVar12 + 0x12e) << 4 != lVar13);
        }
        puVar11 = (undefined8 *)il2cpp_runtime_glue(plVar10,TypeInfo_IDisposable,0);
LAB_03b2ea6d:
        (*(code *)*puVar11)(plVar10,puVar11[1]);
      }
      pUVar15 = (UnityEngine_Transform_o *)0x0;
      if (iVar14 == 6) {
        pUVar15 = x;
      }
    }
  }
  return pUVar15;
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator___ctor (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, const MethodInfo* method);
// 0x3b2ebd0

void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator___ctor
               (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,MethodInfo *method)

{
  (__this->fields)._activeIndex = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$<ScrollTo>b__22_0
// il2cpp: float Gisketch_Aottg2UI_Actions_GisketchSectionNavigator___ScrollTo_b__22_0 (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, const MethodInfo* method);
// 0x3b2ebe0

float Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__<ScrollTo>b__22_0
                (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,MethodInfo *method)

{
  UnityEngine_UI_ScrollRect_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields)._scroll;
  if (__this_00 != (UnityEngine_UI_ScrollRect_o *)0x0) {
    fVar1 = UnityEngine_UI_ScrollRect__get_verticalNormalizedPosition(__this_00,(MethodInfo *)0x0);
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.GisketchSectionNavigator$$<ScrollTo>b__22_1
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator___ScrollTo_b__22_1 (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o* __this, float value, const MethodInfo* method);
// 0x3b2ec00

void Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__<ScrollTo>b__22_1
               (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this,float value,
               MethodInfo *method)

{
  UnityEngine_UI_ScrollRect_o *__this_00;
  
  __this_00 = (__this->fields)._scroll;
  if (__this_00 != (UnityEngine_UI_ScrollRect_o *)0x0) {
    UnityEngine_UI_ScrollRect__set_verticalNormalizedPosition(__this_00,value,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


