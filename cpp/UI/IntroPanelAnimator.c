// Type: UI.IntroPanelAnimator
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/IntroPanelAnimator.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/IntroPanelAnimator.cs
// --------------------------------

// UI.IntroPanelAnimator.<AnimateButtons>d__8$$.ctor
// il2cpp: void UI_IntroPanelAnimator__AnimateButtons_d__8___ctor (UI_IntroPanelAnimator__AnimateButtons_d__8_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x44023e0

void UI_IntroPanelAnimator__AnimateButtons_d__8___ctor
               (UI_IntroPanelAnimator__AnimateButtons_d__8_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.IntroPanelAnimator.<AnimateButtons>d__8$$System.IDisposable.Dispose
// il2cpp: void UI_IntroPanelAnimator__AnimateButtons_d__8__System_IDisposable_Dispose (UI_IntroPanelAnimator__AnimateButtons_d__8_o* __this, const MethodInfo* method);
// 0x4402450

void UI_IntroPanelAnimator__AnimateButtons_d__8__System_IDisposable_Dispose
               (UI_IntroPanelAnimator__AnimateButtons_d__8_o *__this,MethodInfo *method)

{
  return;
}


// UI.IntroPanelAnimator.<AnimateButtons>d__8$$MoveNext
// il2cpp: bool UI_IntroPanelAnimator__AnimateButtons_d__8__MoveNext (UI_IntroPanelAnimator__AnimateButtons_d__8_o* __this, const MethodInfo* method);
// 0x4402460

bool_conflict
UI_IntroPanelAnimator__AnimateButtons_d__8__MoveNext
          (UI_IntroPanelAnimator__AnimateButtons_d__8_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  int iVar2;
  UI_IntroPanelAnimator_o *pUVar3;
  UnityEngine_RectTransform_o *pUVar4;
  CustomLogic_CustomLogicMathBuiltin_o *__this_00;
  UI_IntroPanelAnimator__AnimateButtons_d__8_o *pUVar5;
  float fVar6;
  UnityEngine_Vector2_Fields UVar7;
  float fVar8;
  UnityEngine_Vector2_o value;
  float fVar9;
  
  iVar2 = (__this->fields).__1__state;
  pUVar3 = (__this->fields).__4__this;
  pUVar5 = __this;
  if (iVar2 == 1) {
    (__this->fields).__1__state = -1;
    if (pUVar3 == (UI_IntroPanelAnimator_o *)0x0) goto label_044025aa;
    fVar9 = (__this->fields)._elapsedTime_5__3;
    if ((pUVar3->fields).buttonsSlideDuration <= fVar9) {
label_04402585:
      pUVar4 = (pUVar3->fields).buttonsContainer;
      pUVar5 = (UI_IntroPanelAnimator__AnimateButtons_d__8_o *)0x0;
      if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
        UnityEngine_RectTransform__set_anchoredPosition
                  (pUVar4,(UnityEngine_Vector2_o)(__this->fields).endPos.fields,(MethodInfo *)0x0);
        return 0;
      }
      goto label_044025aa;
    }
  }
  else {
    if (iVar2 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    if (pUVar3 == (UI_IntroPanelAnimator_o *)0x0) goto label_044025aa;
    pUVar4 = (pUVar3->fields).buttonsContainer;
    pUVar5 = (UI_IntroPanelAnimator__AnimateButtons_d__8_o *)0x0;
    if (pUVar4 == (UnityEngine_RectTransform_o *)0x0) goto label_044025aa;
    method = (MethodInfo *)0x0;
    UVar7 = (UnityEngine_Vector2_Fields)
            UnityEngine_RectTransform__get_anchoredPosition(pUVar4,(MethodInfo *)0x0);
    (__this->fields)._startPos_5__2.fields = UVar7;
    (__this->fields)._elapsedTime_5__3 = 0.0;
    fVar9 = 0.0;
    if ((pUVar3->fields).buttonsSlideDuration <= 0.0) goto label_04402585;
  }
  __this_00 = (CustomLogic_CustomLogicMathBuiltin_o *)0x0;
  fVar6 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  (__this->fields)._elapsedTime_5__3 = fVar9 + fVar6;
  fVar9 = powf(__this_00,1.0 - (fVar9 + fVar6) / (pUVar3->fields).buttonsSlideDuration,3.0,method);
  pUVar4 = (pUVar3->fields).buttonsContainer;
  pUVar5 = (UI_IntroPanelAnimator__AnimateButtons_d__8_o *)0x0;
  if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
    fVar9 = 1.0 - fVar9;
    UVar7 = (__this->fields)._startPos_5__2.fields;
    fVar6 = 1.0;
    if (fVar9 <= 1.0) {
      fVar6 = fVar9;
    }
    fVar6 = (float)(-(uint)(0.0 <= fVar9) & (uint)fVar6);
    UVar1 = (__this->fields).endPos.fields;
    fVar9 = UVar7.x;
    fVar8 = UVar7.y;
    value.fields.y = fVar6 * (UVar1.y - fVar8) + fVar8;
    value.fields.x = fVar6 * (UVar1.x - fVar9) + fVar9;
    UnityEngine_RectTransform__set_anchoredPosition(pUVar4,value,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)0x0;
    il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,0);
    (__this->fields).__1__state = 1;
    return (bool_conflict)CONCAT71((int7)((ulong)__this >> 8),1);
  }
label_044025aa:
  il2cpp_runtime_helper_022b2c90();
  return (bool_conflict)(pUVar5->fields).__2__current;
}


// UI.IntroPanelAnimator.<AnimateButtons>d__8$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_IntroPanelAnimator__AnimateButtons_d__8__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_IntroPanelAnimator__AnimateButtons_d__8_o* __this, const MethodInfo* method);
// 0x44025b0

Il2CppObject *
UI_IntroPanelAnimator__AnimateButtons_d__8__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_IntroPanelAnimator__AnimateButtons_d__8_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.IntroPanelAnimator.<AnimateButtons>d__8$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_IntroPanelAnimator__AnimateButtons_d__8__System_Collections_IEnumerator_Reset (UI_IntroPanelAnimator__AnimateButtons_d__8_o* __this, const MethodInfo* method);
// 0x44025c0

void UI_IntroPanelAnimator__AnimateButtons_d__8__System_Collections_IEnumerator_Reset
               (UI_IntroPanelAnimator__AnimateButtons_d__8_o *__this,MethodInfo *method)

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


// UI.IntroPanelAnimator.<AnimateButtons>d__8$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_IntroPanelAnimator__AnimateButtons_d__8__System_Collections_IEnumerator_get_Current (UI_IntroPanelAnimator__AnimateButtons_d__8_o* __this, const MethodInfo* method);
// 0x4402600

Il2CppObject *
UI_IntroPanelAnimator__AnimateButtons_d__8__System_Collections_IEnumerator_get_Current
          (UI_IntroPanelAnimator__AnimateButtons_d__8_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.IntroPanelAnimator.<AnimatePanelAndButtons>d__7$$.ctor
// il2cpp: void UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7___ctor (UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4402340

void UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7___ctor
               (UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.IntroPanelAnimator.<AnimatePanelAndButtons>d__7$$System.IDisposable.Dispose
// il2cpp: void UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7__System_IDisposable_Dispose (UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7_o* __this, const MethodInfo* method);
// 0x4402610

void UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7__System_IDisposable_Dispose
               (UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7_o *__this,MethodInfo *method)

{
  return;
}


// UI.IntroPanelAnimator.<AnimatePanelAndButtons>d__7$$MoveNext
// il2cpp: bool UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7__MoveNext (UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7_o* __this, const MethodInfo* method);
// 0x4402620

bool_conflict
UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7__MoveNext
          (UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_IntroPanelAnimator_o *__this_00;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_RectTransform_o *pUVar3;
  bool_conflict bVar4;
  UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7_o *unaff_RBX;
  UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7_o *__this_01;
  float fVar5;
  UnityEngine_Vector2_o UVar6;
  UnityEngine_Vector2_Fields UVar7;
  UnityEngine_Vector2_o value;
  float fVar8;
  UnityEngine_Rect_o UVar9;
  float local_58;
  float local_38;
  
  __this_01 = __this;
  if (g_data_057ae58f == '\0') {
    __this_01 = (UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7_o *)&TypeInfo_WaitForSeconds;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae58f = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 2) {
    (__this->fields).__1__state = -1;
label_044028ea:
    bVar4 = 0;
  }
  else {
    __this_00 = (__this->fields).__4__this;
    if (iVar1 == 1) {
      (__this->fields).__1__state = -1;
      if (__this_00 == (UI_IntroPanelAnimator_o *)0x0) goto label_044029ca;
      fVar8 = (__this->fields)._elapsedTime_5__3;
      if (fVar8 < (__this_00->fields).panelSlideDuration) goto label_0440271d;
label_04402919:
      pUVar2 = (__this_00->fields).panelRect;
      if (g_data_057a694c == '\0') {
        __this_01 = (UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7_o *)&TypeInfo_Vector2;
        il2cpp_runtime_helper_023445d0();
        g_data_057a694c = '\x01';
      }
      if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) goto label_044029ca;
      UnityEngine_RectTransform__set_anchoredPosition
                (pUVar2,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                 (MethodInfo *)0x0);
      if ((char)(__this->fields)._buttonAnimationStarted_5__4 == '\0') {
        return 0;
      }
      fVar8 = (__this_00->fields).buttonsSlideDuration;
      unaff_RBX = (UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForSeconds);
      UnityEngine_WaitForSeconds___ctor
                ((UnityEngine_WaitForSeconds_o *)unaff_RBX,fVar8 * 0.5,(MethodInfo *)0x0);
      (__this->fields).__2__current = (Il2CppObject *)unaff_RBX;
      il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,unaff_RBX);
      (__this->fields).__1__state = 2;
    }
    else {
      if (iVar1 != 0) goto label_044028ea;
      (__this->fields).__1__state = -1;
      if ((__this_00 == (UI_IntroPanelAnimator_o *)0x0) ||
         (pUVar2 = (__this_00->fields).panelRect, pUVar2 == (UnityEngine_RectTransform_o *)0x0))
      goto label_044029ca;
      UVar9 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
      pUVar3 = (__this_00->fields).panelRect;
      __this_01 = (UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7_o *)0x0;
      if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto label_044029ca;
      UVar6 = UnityEngine_RectTransform__get_anchoredPosition(pUVar3,(MethodInfo *)0x0);
      local_58 = UVar9.fields.m_Width;
      UnityEngine_RectTransform__set_anchoredPosition
                (pUVar2,(UnityEngine_Vector2_o)(CONCAT44(UVar6.fields.y,local_58) ^ 0x80000000),
                 (MethodInfo *)0x0);
      pUVar2 = (__this_00->fields).buttonsContainer;
      __this_01 = (UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7_o *)0x0;
      if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) goto label_044029ca;
      UVar7 = (UnityEngine_Vector2_Fields)
              UnityEngine_RectTransform__get_anchoredPosition(pUVar2,(MethodInfo *)0x0);
      (__this->fields)._buttonsStartPos_5__2.fields = UVar7;
      __this_01 = (UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7_o *)(__this_00->fields).buttonsContainer
      ;
      if (__this_01 == (UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7_o *)0x0) goto label_044029ca;
      UVar6.fields.y = UVar7.y;
      UVar6.fields.x = UVar7.x - (__this_00->fields).buttonsSlideOffset;
      method = (MethodInfo *)0x0;
      UnityEngine_RectTransform__set_anchoredPosition
                ((UnityEngine_RectTransform_o *)__this_01,UVar6,(MethodInfo *)0x0);
      (__this->fields)._elapsedTime_5__3 = 0.0;
      *(undefined1 *)&(__this->fields)._buttonAnimationStarted_5__4 = 0;
      fVar8 = 0.0;
      if ((__this_00->fields).panelSlideDuration <= 0.0) goto label_04402919;
label_0440271d:
      __this_01 = (UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7_o *)0x0;
      fVar5 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      (__this->fields)._elapsedTime_5__3 = fVar8 + fVar5;
      fVar8 = powf((CustomLogic_CustomLogicMathBuiltin_o *)__this_01,
                   1.0 - (fVar8 + fVar5) / (__this_00->fields).panelSlideDuration,3.0,method);
      pUVar2 = (__this_00->fields).panelRect;
      if (pUVar2 == (UnityEngine_RectTransform_o *)0x0) {
label_044029ca:
        il2cpp_runtime_helper_022b2c90();
        return (bool_conflict)(__this_01->fields).__2__current;
      }
      UVar9 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
      pUVar3 = (__this_00->fields).panelRect;
      __this_01 = (UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7_o *)0x0;
      if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto label_044029ca;
      fVar8 = 1.0 - fVar8;
      UVar6 = UnityEngine_RectTransform__get_anchoredPosition(pUVar3,(MethodInfo *)0x0);
      if (g_data_057a694c == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
        g_data_057a694c = '\x01';
      }
      fVar5 = 1.0;
      if (fVar8 <= 1.0) {
        fVar5 = fVar8;
      }
      fVar5 = (float)(-(uint)(0.0 <= fVar8) & (uint)fVar5);
      local_38 = UVar9.fields.m_Width;
      value.fields.x = (local_38 + (float)**(undefined8 **)(TypeInfo_Vector2 + 0xb8)) * fVar5 - local_38;
      value.fields.y =
           ((float)((ulong)**(undefined8 **)(TypeInfo_Vector2 + 0xb8) >> 0x20) - UVar6.fields.y) * fVar5 +
           UVar6.fields.y;
      UnityEngine_RectTransform__set_anchoredPosition(pUVar2,value,(MethodInfo *)0x0);
      if ((0.5 <= fVar8) && ((char)(__this->fields)._buttonAnimationStarted_5__4 == '\0')) {
        *(undefined1 *)&(__this->fields)._buttonAnimationStarted_5__4 = 1;
        UVar7 = (__this->fields)._buttonsStartPos_5__2.fields;
        if (g_data_057ae58e == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_AnimateButtons_d__8);
          g_data_057ae58e = '\x01';
        }
        unaff_RBX = (UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AnimateButtons_d__8);
        __this_01 = unaff_RBX;
        System_Object___ctor((Il2CppObject *)unaff_RBX,(MethodInfo *)0x0);
        (unaff_RBX->fields).__1__state = 0;
        if (unaff_RBX == (UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7_o *)0x0) goto label_044029ca;
        (unaff_RBX->fields).__4__this = __this_00;
        il2cpp_runtime_helper_022b4080(&(unaff_RBX->fields).__4__this,__this_00);
        (unaff_RBX->fields)._buttonsStartPos_5__2.fields = UVar7;
        UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                  ((UnityEngine_MonoBehaviour_o *)__this_00,(System_Collections_IEnumerator_o *)unaff_RBX,
                   (MethodInfo *)0x0);
      }
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,0);
      (__this->fields).__1__state = 1;
    }
    bVar4 = (bool_conflict)CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
  }
  return bVar4;
}


// UI.IntroPanelAnimator.<AnimatePanelAndButtons>d__7$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7_o* __this, const MethodInfo* method);
// 0x44029d0

Il2CppObject *
UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.IntroPanelAnimator.<AnimatePanelAndButtons>d__7$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7__System_Collections_IEnumerator_Reset (UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7_o* __this, const MethodInfo* method);
// 0x44029e0

void UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7__System_Collections_IEnumerator_Reset
               (UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7_o *__this,MethodInfo *method)

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


// UI.IntroPanelAnimator.<AnimatePanelAndButtons>d__7$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7__System_Collections_IEnumerator_get_Current (UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7_o* __this, const MethodInfo* method);
// 0x4402a20

Il2CppObject *
UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7__System_Collections_IEnumerator_get_Current
          (UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.IntroPanelAnimator$$Awake
// il2cpp: void UI_IntroPanelAnimator__Awake (UI_IntroPanelAnimator_o* __this, const MethodInfo* method);
// 0x44021a0

void UI_IntroPanelAnimator__Awake(UI_IntroPanelAnimator_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_Component_o *__this_00;
  Il2CppClass *__this_01;
  Il2CppObject *__this_02;
  undefined4 uVar3;
  UI_IntroPanelAnimator_o *__this_03;
  Il2CppClass *pIVar4;
  Il2CppObject *__this_04;
  
  if (g_data_057ae58c == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_VerticalLayoutGroup_GetComponentInChildren_VerticalLayou);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    g_data_057ae58c = '\x01';
  }
  pUVar2 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_RectTransform_GetComponent_RectTransform);
  (__this->fields).panelRect = pUVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).panelRect,pUVar2);
  __this_03 = __this;
  __this_00 = (UnityEngine_Component_o *)
              UnityEngine_Component__GetComponentInChildren_object__24e7d50
                        ((UnityEngine_Component_o *)__this,MethodInfo_VerticalLayoutGroup_GetComponentInChildren_VerticalLayou);
  if (__this_00 != (UnityEngine_Component_o *)0x0) {
    pUVar2 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__GetComponent_object_(__this_00,MethodInfo_RectTransform_GetComponent_RectTransform);
    (__this->fields).buttonsContainer = pUVar2;
    il2cpp_runtime_helper_022b4080(&(__this->fields).buttonsContainer,pUVar2);
    iVar1 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
    (__this->fields).buttonsSlideOffset = (float)iVar1 / 2.5;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae58d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AnimatePanelAndButtons_d__7);
    g_data_057ae58d = '\x01';
  }
  __this_01 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_AnimatePanelAndButtons_d__7);
  pIVar4 = __this_01;
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&(__this_01->_1).name = 0;
  if (__this_01 != (Il2CppClass *)0x0) {
    (__this_01->_1).byval_arg.data = __this_03;
    il2cpp_runtime_helper_022b4080(&(__this_01->_1).byval_arg,__this_03);
    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
              ((UnityEngine_MonoBehaviour_o *)__this_03,(System_Collections_IEnumerator_o *)__this_01,
               (MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae58d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AnimatePanelAndButtons_d__7);
    g_data_057ae58d = '\x01';
  }
  __this_02 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_AnimatePanelAndButtons_d__7);
  uVar3 = 0;
  __this_04 = __this_02;
  System_Object___ctor(__this_02,(MethodInfo *)0x0);
  *(undefined4 *)&__this_02[1].klass = 0;
  if (__this_02 != (Il2CppObject *)0x0) {
    __this_02[2].klass = pIVar4;
    il2cpp_runtime_helper_022b4080(__this_02 + 2,pIVar4);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_04,(MethodInfo *)0x0);
  *(undefined4 *)&__this_04[1].klass = uVar3;
  return;
}


// UI.IntroPanelAnimator$$StartAnimation
// il2cpp: void UI_IntroPanelAnimator__StartAnimation (UI_IntroPanelAnimator_o* __this, const MethodInfo* method);
// 0x4402250

void UI_IntroPanelAnimator__StartAnimation(UI_IntroPanelAnimator_o *__this,MethodInfo *method)

{
  Il2CppClass *__this_00;
  Il2CppObject *__this_01;
  undefined4 uVar1;
  Il2CppClass *pIVar2;
  Il2CppObject *__this_02;
  
  if (g_data_057ae58d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AnimatePanelAndButtons_d__7);
    g_data_057ae58d = '\x01';
  }
  __this_00 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_AnimatePanelAndButtons_d__7);
  pIVar2 = __this_00;
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&(__this_00->_1).name = 0;
  if (__this_00 != (Il2CppClass *)0x0) {
    (__this_00->_1).byval_arg.data = __this;
    il2cpp_runtime_helper_022b4080(&(__this_00->_1).byval_arg,__this);
    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
              ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
               (MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae58d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AnimatePanelAndButtons_d__7);
    g_data_057ae58d = '\x01';
  }
  __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_AnimatePanelAndButtons_d__7);
  uVar1 = 0;
  __this_02 = __this_01;
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = 0;
  if (__this_01 != (Il2CppObject *)0x0) {
    __this_01[2].klass = pIVar2;
    il2cpp_runtime_helper_022b4080(__this_01 + 2,pIVar2);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_02,(MethodInfo *)0x0);
  *(undefined4 *)&__this_02[1].klass = uVar1;
  return;
}


// UI.IntroPanelAnimator$$AnimatePanelAndButtons
// il2cpp: System_Collections_IEnumerator_o* UI_IntroPanelAnimator__AnimatePanelAndButtons (UI_IntroPanelAnimator_o* __this, const MethodInfo* method);
// 0x44022d0

System_Collections_IEnumerator_o *
UI_IntroPanelAnimator__AnimatePanelAndButtons(UI_IntroPanelAnimator_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar1;
  Il2CppObject *__this_01;
  
  if (g_data_057ae58d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AnimatePanelAndButtons_d__7);
    g_data_057ae58d = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_AnimatePanelAndButtons_d__7);
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


// UI.IntroPanelAnimator$$AnimateButtons
// il2cpp: System_Collections_IEnumerator_o* UI_IntroPanelAnimator__AnimateButtons (UI_IntroPanelAnimator_o* __this, UnityEngine_Vector2_o endPos, const MethodInfo* method);
// 0x4402360

System_Collections_IEnumerator_o *
UI_IntroPanelAnimator__AnimateButtons
          (UI_IntroPanelAnimator_o *__this,UnityEngine_Vector2_o endPos,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar1;
  Il2CppObject *__this_01;
  
  if (g_data_057ae58e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AnimateButtons_d__8);
    g_data_057ae58e = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_AnimateButtons_d__8);
  uVar1 = 0;
  __this_01 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_helper_022b4080(__this_00 + 2,__this);
    __this_00[2].monitor = (void *)endPos.fields;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = uVar1;
  return extraout_RAX;
}


// UI.IntroPanelAnimator$$EaseOutCubic
// il2cpp: float UI_IntroPanelAnimator__EaseOutCubic (UI_IntroPanelAnimator_o* __this, float t, const MethodInfo* method);
// 0x4402400

float UI_IntroPanelAnimator__EaseOutCubic(UI_IntroPanelAnimator_o *__this,float t,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = powf((CustomLogic_CustomLogicMathBuiltin_o *)__this,1.0 - t,3.0,method);
  return 1.0 - fVar1;
}


// UI.IntroPanelAnimator$$.ctor
// il2cpp: void UI_IntroPanelAnimator___ctor (UI_IntroPanelAnimator_o* __this, const MethodInfo* method);
// 0x4402430

void UI_IntroPanelAnimator___ctor(UI_IntroPanelAnimator_o *__this,MethodInfo *method)

{
  (__this->fields).panelSlideDuration = 1.5;
  (__this->fields).buttonsSlideDuration = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


