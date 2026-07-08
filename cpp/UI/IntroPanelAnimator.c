// Type: UI.IntroPanelAnimator
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/IntroPanelAnimator.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/MainMenu/IntroPanelAnimator.cs  [CHANGED since prior version]
// --------------------------------

// UI.IntroPanelAnimator.<AnimateButtons>d__8$$.ctor
// il2cpp: void UI_IntroPanelAnimator__AnimateButtons_d__8___ctor (UI_IntroPanelAnimator__AnimateButtons_d__8_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x40ee1b0

void UI_IntroPanelAnimator_<AnimateButtons>d__8___ctor
               (UI_IntroPanelAnimator__AnimateButtons_d__8_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.IntroPanelAnimator.<AnimateButtons>d__8$$System.IDisposable.Dispose
// il2cpp: void UI_IntroPanelAnimator__AnimateButtons_d__8__System_IDisposable_Dispose (UI_IntroPanelAnimator__AnimateButtons_d__8_o* __this, const MethodInfo* method);
// 0x40ee220

void UI_IntroPanelAnimator_<AnimateButtons>d__8__System_IDisposable_Dispose
               (UI_IntroPanelAnimator__AnimateButtons_d__8_o *__this,MethodInfo *method)

{
  return;
}


// UI.IntroPanelAnimator.<AnimateButtons>d__8$$MoveNext
// il2cpp: bool UI_IntroPanelAnimator__AnimateButtons_d__8__MoveNext (UI_IntroPanelAnimator__AnimateButtons_d__8_o* __this, const MethodInfo* method);
// 0x40ee230

bool_conflict
UI_IntroPanelAnimator_<AnimateButtons>d__8__MoveNext
          (UI_IntroPanelAnimator__AnimateButtons_d__8_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  int iVar2;
  UI_IntroPanelAnimator_o *pUVar3;
  UnityEngine_RectTransform_o *pUVar4;
  CustomLogic_CustomLogicMathBuiltin_o *__this_00;
  float fVar5;
  UnityEngine_Vector2_Fields UVar6;
  float fVar7;
  UnityEngine_Vector2_o value;
  float fVar8;
  
  iVar2 = (__this->fields).__1__state;
  pUVar3 = (__this->fields).__4__this;
  if (iVar2 == 1) {
    (__this->fields).__1__state = -1;
    if (pUVar3 == (UI_IntroPanelAnimator_o *)0x0) goto LAB_040ee37a;
    fVar8 = (__this->fields)._elapsedTime_5__3;
    if ((pUVar3->fields).buttonsSlideDuration <= fVar8) goto LAB_040ee355;
  }
  else {
    if (iVar2 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    if ((pUVar3 == (UI_IntroPanelAnimator_o *)0x0) ||
       (pUVar4 = (pUVar3->fields).buttonsContainer, pUVar4 == (UnityEngine_RectTransform_o *)0x0))
    goto LAB_040ee37a;
    method = (MethodInfo *)0x0;
    UVar6 = (UnityEngine_Vector2_Fields)
            UnityEngine_RectTransform__get_anchoredPosition(pUVar4,(MethodInfo *)0x0);
    (__this->fields)._startPos_5__2.fields = UVar6;
    (__this->fields)._elapsedTime_5__3 = 0.0;
    fVar8 = 0.0;
    if ((pUVar3->fields).buttonsSlideDuration <= 0.0) {
LAB_040ee355:
      pUVar4 = (pUVar3->fields).buttonsContainer;
      if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
        UnityEngine_RectTransform__set_anchoredPosition
                  (pUVar4,(UnityEngine_Vector2_o)(__this->fields).endPos.fields,(MethodInfo *)0x0);
        return 0;
      }
      goto LAB_040ee37a;
    }
  }
  __this_00 = (CustomLogic_CustomLogicMathBuiltin_o *)0x0;
  fVar5 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  (__this->fields)._elapsedTime_5__3 = fVar8 + fVar5;
  fVar8 = powf(__this_00,1.0 - (fVar8 + fVar5) / (pUVar3->fields).buttonsSlideDuration,3.0,method);
  pUVar4 = (pUVar3->fields).buttonsContainer;
  if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
    fVar8 = 1.0 - fVar8;
    UVar6 = (__this->fields)._startPos_5__2.fields;
    fVar5 = 1.0;
    if (fVar8 <= 1.0) {
      fVar5 = fVar8;
    }
    fVar5 = (float)(-(uint)(0.0 <= fVar8) & (uint)fVar5);
    UVar1 = (__this->fields).endPos.fields;
    fVar8 = UVar6.x;
    fVar7 = UVar6.y;
    value.fields.y = fVar5 * (UVar1.y - fVar7) + fVar7;
    value.fields.x = fVar5 * (UVar1.x - fVar8) + fVar8;
    UnityEngine_RectTransform__set_anchoredPosition(pUVar4,value,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)0x0;
    il2cpp_runtime_glue(&(__this->fields).__2__current,0);
    (__this->fields).__1__state = 1;
    return (bool_conflict)CONCAT71((int7)((ulong)__this >> 8),1);
  }
LAB_040ee37a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.IntroPanelAnimator.<AnimateButtons>d__8$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_IntroPanelAnimator__AnimateButtons_d__8__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_IntroPanelAnimator__AnimateButtons_d__8_o* __this, const MethodInfo* method);
// 0x40ee380

Il2CppObject *
UI_IntroPanelAnimator_<AnimateButtons>d__8__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (UI_IntroPanelAnimator__AnimateButtons_d__8_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.IntroPanelAnimator.<AnimateButtons>d__8$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_IntroPanelAnimator__AnimateButtons_d__8__System_Collections_IEnumerator_Reset (UI_IntroPanelAnimator__AnimateButtons_d__8_o* __this, const MethodInfo* method);
// 0x40ee390

void UI_IntroPanelAnimator_<AnimateButtons>d__8__System_Collections_IEnumerator_Reset
               (UI_IntroPanelAnimator__AnimateButtons_d__8_o *__this,MethodInfo *method)

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


// UI.IntroPanelAnimator.<AnimateButtons>d__8$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_IntroPanelAnimator__AnimateButtons_d__8__System_Collections_IEnumerator_get_Current (UI_IntroPanelAnimator__AnimateButtons_d__8_o* __this, const MethodInfo* method);
// 0x40ee3d0

Il2CppObject *
UI_IntroPanelAnimator_<AnimateButtons>d__8__System_Collections_IEnumerator_get_Current
          (UI_IntroPanelAnimator__AnimateButtons_d__8_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.IntroPanelAnimator.<AnimatePanelAndButtons>d__7$$.ctor
// il2cpp: void UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7___ctor (UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x40ee110

void UI_IntroPanelAnimator_<AnimatePanelAndButtons>d__7___ctor
               (UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.IntroPanelAnimator.<AnimatePanelAndButtons>d__7$$System.IDisposable.Dispose
// il2cpp: void UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7__System_IDisposable_Dispose (UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7_o* __this, const MethodInfo* method);
// 0x40ee3e0

void UI_IntroPanelAnimator_<AnimatePanelAndButtons>d__7__System_IDisposable_Dispose
               (UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7_o *__this,MethodInfo *method)

{
  return;
}


// UI.IntroPanelAnimator.<AnimatePanelAndButtons>d__7$$MoveNext
// il2cpp: bool UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7__MoveNext (UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7_o* __this, const MethodInfo* method);
// 0x40ee3f0

bool_conflict
UI_IntroPanelAnimator_<AnimatePanelAndButtons>d__7__MoveNext
          (UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_IntroPanelAnimator_o *__this_00;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_RectTransform_o *pUVar3;
  bool_conflict bVar4;
  UnityEngine_WaitForSeconds_o *unaff_RBX;
  CustomLogic_CustomLogicMathBuiltin_o *__this_01;
  float fVar5;
  UnityEngine_Vector2_o UVar6;
  UnityEngine_Vector2_Fields UVar7;
  UnityEngine_Vector2_o value;
  float fVar8;
  UnityEngine_Rect_o UVar9;
  float local_58;
  float local_38;
  
  if (DAT_057047f4 == '\0') {
    il2cpp_init_method_metadata();
    DAT_057047f4 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 2) {
    (__this->fields).__1__state = -1;
LAB_040ee6ba:
    bVar4 = 0;
  }
  else {
    __this_00 = (__this->fields).__4__this;
    if (iVar1 == 1) {
      (__this->fields).__1__state = -1;
      if (__this_00 == (UI_IntroPanelAnimator_o *)0x0) goto LAB_040ee79a;
      fVar8 = (__this->fields)._elapsedTime_5__3;
      if (fVar8 < (__this_00->fields).panelSlideDuration) goto LAB_040ee4ed;
LAB_040ee6e9:
      pUVar2 = (__this_00->fields).panelRect;
      if (DAT_056fe093 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector2);
        DAT_056fe093 = '\x01';
      }
      if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) goto LAB_040ee79a;
      UnityEngine_RectTransform__set_anchoredPosition
                (pUVar2,(UnityEngine_Vector2_o)
                        **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0);
      if ((char)(__this->fields)._buttonAnimationStarted_5__4 == '\0') {
        return 0;
      }
      fVar8 = (__this_00->fields).buttonsSlideDuration;
      unaff_RBX = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_glue(TypeInfo_WaitForSeconds);
      UnityEngine_WaitForSeconds___ctor(unaff_RBX,fVar8 * 0.5,(MethodInfo *)0x0);
      (__this->fields).__2__current = (Il2CppObject *)unaff_RBX;
      il2cpp_runtime_glue(&(__this->fields).__2__current,unaff_RBX);
      (__this->fields).__1__state = 2;
    }
    else {
      if (iVar1 != 0) goto LAB_040ee6ba;
      (__this->fields).__1__state = -1;
      if ((__this_00 == (UI_IntroPanelAnimator_o *)0x0) ||
         (pUVar2 = (__this_00->fields).panelRect, pUVar2 == (UnityEngine_RectTransform_o *)0x0))
      goto LAB_040ee79a;
      UVar9 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
      pUVar3 = (__this_00->fields).panelRect;
      if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto LAB_040ee79a;
      UVar6 = UnityEngine_RectTransform__get_anchoredPosition(pUVar3,(MethodInfo *)0x0);
      local_58 = UVar9.fields.m_Width;
      UnityEngine_RectTransform__set_anchoredPosition
                (pUVar2,(UnityEngine_Vector2_o)(CONCAT44(UVar6.fields.y,local_58) ^ 0x80000000),
                 (MethodInfo *)0x0);
      pUVar2 = (__this_00->fields).buttonsContainer;
      if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) goto LAB_040ee79a;
      UVar7 = (UnityEngine_Vector2_Fields)
              UnityEngine_RectTransform__get_anchoredPosition(pUVar2,(MethodInfo *)0x0);
      (__this->fields)._buttonsStartPos_5__2.fields = UVar7;
      pUVar2 = (__this_00->fields).buttonsContainer;
      if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) goto LAB_040ee79a;
      UVar6.fields.y = UVar7.y;
      UVar6.fields.x = UVar7.x - (__this_00->fields).buttonsSlideOffset;
      method = (MethodInfo *)0x0;
      UnityEngine_RectTransform__set_anchoredPosition(pUVar2,UVar6,(MethodInfo *)0x0);
      (__this->fields)._elapsedTime_5__3 = 0.0;
      *(undefined1 *)&(__this->fields)._buttonAnimationStarted_5__4 = 0;
      fVar8 = 0.0;
      if ((__this_00->fields).panelSlideDuration <= 0.0) goto LAB_040ee6e9;
LAB_040ee4ed:
      __this_01 = (CustomLogic_CustomLogicMathBuiltin_o *)0x0;
      fVar5 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      (__this->fields)._elapsedTime_5__3 = fVar8 + fVar5;
      fVar8 = powf(__this_01,1.0 - (fVar8 + fVar5) / (__this_00->fields).panelSlideDuration,3.0,
                   method);
      pUVar2 = (__this_00->fields).panelRect;
      if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) {
LAB_040ee79a:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      UVar9 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
      pUVar3 = (__this_00->fields).panelRect;
      if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto LAB_040ee79a;
      fVar8 = 1.0 - fVar8;
      UVar6 = UnityEngine_RectTransform__get_anchoredPosition(pUVar3,(MethodInfo *)0x0);
      if (DAT_056fe093 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector2);
        DAT_056fe093 = '\x01';
      }
      fVar5 = 1.0;
      if (fVar8 <= 1.0) {
        fVar5 = fVar8;
      }
      fVar5 = (float)(-(uint)(0.0 <= fVar8) & (uint)fVar5);
      local_38 = UVar9.fields.m_Width;
      value.fields.x = (local_38 + (float)**(undefined8 **)(TypeInfo_Vector2 + 0xb8)) * fVar5 - local_38
      ;
      value.fields.y =
           ((float)((ulong)**(undefined8 **)(TypeInfo_Vector2 + 0xb8) >> 0x20) - UVar6.fields.y) * fVar5
           + UVar6.fields.y;
      UnityEngine_RectTransform__set_anchoredPosition(pUVar2,value,(MethodInfo *)0x0);
      if ((0.5 <= fVar8) && ((char)(__this->fields)._buttonAnimationStarted_5__4 == '\0')) {
        *(undefined1 *)&(__this->fields)._buttonAnimationStarted_5__4 = 1;
        UVar7 = (__this->fields)._buttonsStartPos_5__2.fields;
        if (DAT_057047f3 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_AnimateButtons_d__8);
          DAT_057047f3 = '\x01';
        }
        unaff_RBX = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_glue(TypeInfo_AnimateButtons_d__8);
        System_Object___ctor((Il2CppObject *)unaff_RBX,(MethodInfo *)0x0);
        (unaff_RBX->fields).m_Seconds = 0.0;
        if (unaff_RBX == (UnityEngine_WaitForSeconds_o *)0x0) goto LAB_040ee79a;
        unaff_RBX[1].monitor = __this_00;
        il2cpp_runtime_glue(&unaff_RBX[1].monitor,__this_00);
        unaff_RBX[1].fields = (UnityEngine_WaitForSeconds_Fields)UVar7.x;
        *(float *)&unaff_RBX[1].field_0x14 = UVar7.y;
        UnityEngine_MonoBehaviour__StartCoroutine
                  ((UnityEngine_MonoBehaviour_o *)__this_00,
                   (System_Collections_IEnumerator_o *)unaff_RBX,(MethodInfo *)0x0);
      }
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      il2cpp_runtime_glue(&(__this->fields).__2__current,0);
      (__this->fields).__1__state = 1;
    }
    bVar4 = (bool_conflict)CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
  }
  return bVar4;
}


// UI.IntroPanelAnimator.<AnimatePanelAndButtons>d__7$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7_o* __this, const MethodInfo* method);
// 0x40ee7a0

Il2CppObject *
UI_IntroPanelAnimator_<AnimatePanelAndButtons>d__7__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.IntroPanelAnimator.<AnimatePanelAndButtons>d__7$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7__System_Collections_IEnumerator_Reset (UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7_o* __this, const MethodInfo* method);
// 0x40ee7b0

void UI_IntroPanelAnimator_<AnimatePanelAndButtons>d__7__System_Collections_IEnumerator_Reset
               (UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7_o *__this,MethodInfo *method)

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


// UI.IntroPanelAnimator.<AnimatePanelAndButtons>d__7$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7__System_Collections_IEnumerator_get_Current (UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7_o* __this, const MethodInfo* method);
// 0x40ee7f0

Il2CppObject *
UI_IntroPanelAnimator_<AnimatePanelAndButtons>d__7__System_Collections_IEnumerator_get_Current
          (UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.IntroPanelAnimator$$Awake
// il2cpp: void UI_IntroPanelAnimator__Awake (UI_IntroPanelAnimator_o* __this, const MethodInfo* method);
// 0x40edf70

void UI_IntroPanelAnimator__Awake(UI_IntroPanelAnimator_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_Component_o *__this_00;
  
  if (DAT_057047f1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_VerticalLayoutGroup_GetComponentInChildren_Verti);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    DAT_057047f1 = '\x01';
  }
  pUVar2 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)__this,MethodInfo_RectTransform_GetComponent_RectTransform);
  (__this->fields).panelRect = pUVar2;
  il2cpp_runtime_glue(&(__this->fields).panelRect,pUVar2);
  __this_00 = (UnityEngine_Component_o *)
              UnityEngine_Component__GetComponentInChildren<object>
                        ((UnityEngine_Component_o *)__this,MethodInfo_VerticalLayoutGroup_GetComponentInChildren_Verti);
  if (__this_00 != (UnityEngine_Component_o *)0x0) {
    pUVar2 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__GetComponent<object>(__this_00,MethodInfo_RectTransform_GetComponent_RectTransform);
    (__this->fields).buttonsContainer = pUVar2;
    il2cpp_runtime_glue(&(__this->fields).buttonsContainer,pUVar2);
    iVar1 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
    (__this->fields).buttonsSlideOffset = (float)iVar1 / 2.5;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.IntroPanelAnimator$$StartAnimation
// il2cpp: void UI_IntroPanelAnimator__StartAnimation (UI_IntroPanelAnimator_o* __this, const MethodInfo* method);
// 0x40ee020

void UI_IntroPanelAnimator__StartAnimation(UI_IntroPanelAnimator_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_057047f2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AnimatePanelAndButtons_d__7);
    DAT_057047f2 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_AnimatePanelAndButtons_d__7);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 2,__this);
    UnityEngine_MonoBehaviour__StartCoroutine
              ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.IntroPanelAnimator$$AnimatePanelAndButtons
// il2cpp: System_Collections_IEnumerator_o* UI_IntroPanelAnimator__AnimatePanelAndButtons (UI_IntroPanelAnimator_o* __this, const MethodInfo* method);
// 0x40ee0a0

System_Collections_IEnumerator_o *
UI_IntroPanelAnimator__AnimatePanelAndButtons(UI_IntroPanelAnimator_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_057047f2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AnimatePanelAndButtons_d__7);
    DAT_057047f2 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_AnimatePanelAndButtons_d__7);
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


// UI.IntroPanelAnimator$$AnimateButtons
// il2cpp: System_Collections_IEnumerator_o* UI_IntroPanelAnimator__AnimateButtons (UI_IntroPanelAnimator_o* __this, UnityEngine_Vector2_o endPos, const MethodInfo* method);
// 0x40ee130

System_Collections_IEnumerator_o *
UI_IntroPanelAnimator__AnimateButtons
          (UI_IntroPanelAnimator_o *__this,UnityEngine_Vector2_o endPos,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_057047f3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AnimateButtons_d__8);
    DAT_057047f3 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_AnimateButtons_d__8);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 2,__this);
    __this_00[2].monitor = (void *)endPos.fields;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.IntroPanelAnimator$$EaseOutCubic
// il2cpp: float UI_IntroPanelAnimator__EaseOutCubic (UI_IntroPanelAnimator_o* __this, float t, const MethodInfo* method);
// 0x40ee1d0

float UI_IntroPanelAnimator__EaseOutCubic
                (UI_IntroPanelAnimator_o *__this,float t,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = powf((CustomLogic_CustomLogicMathBuiltin_o *)__this,1.0 - t,3.0,method);
  return 1.0 - fVar1;
}


// UI.IntroPanelAnimator$$.ctor
// il2cpp: void UI_IntroPanelAnimator___ctor (UI_IntroPanelAnimator_o* __this, const MethodInfo* method);
// 0x40ee200

void UI_IntroPanelAnimator___ctor(UI_IntroPanelAnimator_o *__this,MethodInfo *method)

{
  (__this->fields).panelSlideDuration = 1.5;
  (__this->fields).buttonsSlideDuration = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


