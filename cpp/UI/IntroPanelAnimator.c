// Type: UI.IntroPanelAnimator
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/IntroPanelAnimator.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/IntroPanelAnimator.cs
// --------------------------------

// UI.IntroPanelAnimator.<AnimateButtons>d__8$$.ctor
// il2cpp: void UI_IntroPanelAnimator__AnimateButtons_d__8___ctor (UI_IntroPanelAnimator__AnimateButtons_d__8_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
UI_IntroPanelAnimator__AnimateButtons_d__8___ctor(UI_IntroPanelAnimator__AnimateButtons_d__8_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.IntroPanelAnimator.<AnimateButtons>d__8$$System.IDisposable.Dispose
// il2cpp: void UI_IntroPanelAnimator__AnimateButtons_d__8__System_IDisposable_Dispose (UI_IntroPanelAnimator__AnimateButtons_d__8_o* __this, const MethodInfo* method);
// 0x180547020

void
UI_IntroPanelAnimator__AnimateButtons_d__8__System_IDisposable_Dispose(UI_IntroPanelAnimator__AnimateButtons_d__8_o* __this, MethodInfo* method)

{
  return;
}


// UI.IntroPanelAnimator.<AnimateButtons>d__8$$MoveNext
// il2cpp: bool UI_IntroPanelAnimator__AnimateButtons_d__8__MoveNext (UI_IntroPanelAnimator__AnimateButtons_d__8_o* __this, const MethodInfo* method);
// 0x18229c350

bool UI_IntroPanelAnimator__AnimateButtons_d__8__MoveNext
               (UI_IntroPanelAnimator__AnimateButtons_d__8_o *__this,MethodInfo *method)

{
  float *pfVar1;
  int iVar2;
  UI_IntroPanelAnimator_o *pUVar3;
  UnityEngine_RectTransform_o *pUVar4;
  UnityEngine_Vector2_o UVar5;
  float fVar6;
  float fVar7;
  float fStackX_c;
  
  iVar2 = (__this->fields).__1__state;
  pUVar3 = (__this->fields).__4__this;
  if (iVar2 == 0) {
    (__this->fields).__1__state = -1;
    if ((pUVar3 == (UI_IntroPanelAnimator_o *)0x0) ||
       (pUVar4 = (pUVar3->fields).buttonsContainer, pUVar4 == (UnityEngine_RectTransform_o *)0x0))
    goto label_18229c4c7;
    UVar5 = UnityEngine_RectTransform__get_anchoredPosition(pUVar4,(MethodInfo *)0x0);
    fStackX_c = UVar5.fields.y;
    (__this->fields)._startPos_5__2.fields.y = fStackX_c;
    (__this->fields)._startPos_5__2.fields.x = UVar5.fields.x;
    (__this->fields)._elapsedTime_5__3 = 0.0;
  }
  else {
    if (iVar2 != 1) {
      return false;
    }
    (__this->fields).__1__state = -1;
    if (pUVar3 == (UI_IntroPanelAnimator_o *)0x0) goto label_18229c4c7;
  }
  fVar7 = (pUVar3->fields).buttonsSlideDuration;
  pfVar1 = &(__this->fields)._elapsedTime_5__3;
  if (fVar7 < *pfVar1 || fVar7 == *pfVar1) {
    pUVar4 = (pUVar3->fields).buttonsContainer;
    if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
      UnityEngine_RectTransform__set_anchoredPosition
                (pUVar4,(UnityEngine_Vector2_o)(__this->fields).endPos.fields,(MethodInfo *)0x0);
      return false;
    }
  }
  else {
    fVar7 = (__this->fields)._elapsedTime_5__3;
    fVar6 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar6 = fVar6 + fVar7;
    (__this->fields)._elapsedTime_5__3 = fVar6;
    fVar7 = (float)il2cpp_runtime_helper_1804f6b50(1.0 - fVar6 / (pUVar3->fields).buttonsSlideDuration,0x40400000);
    fVar7 = 1.0 - fVar7;
    if (fVar7 < 0.0) {
      fVar7 = 0.0;
    }
    else if (1.0 < fVar7) {
      fVar7 = 1.0;
    }
    if ((pUVar3->fields).buttonsContainer != (UnityEngine_RectTransform_o *)0x0) {
      UVar5.fields.y =
           ((__this->fields).endPos.fields.y - (__this->fields)._startPos_5__2.fields.y) * fVar7 +
           (__this->fields)._startPos_5__2.fields.y;
      UVar5.fields.x =
           ((__this->fields).endPos.fields.x - (__this->fields)._startPos_5__2.fields.x) * fVar7 +
           (__this->fields)._startPos_5__2.fields.x;
      UnityEngine_RectTransform__set_anchoredPosition
                ((pUVar3->fields).buttonsContainer,UVar5,(MethodInfo *)0x0);
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,(void *)0x0);
      (__this->fields).__1__state = 1;
      return true;
    }
  }
label_18229c4c7:
  ThrowNullReferenceException();
}


// UI.IntroPanelAnimator.<AnimateButtons>d__8$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_IntroPanelAnimator__AnimateButtons_d__8__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_IntroPanelAnimator__AnimateButtons_d__8_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_IntroPanelAnimator__AnimateButtons_d__8__System_Collections_Generic_IEnumerator_System_Object__get_Current(UI_IntroPanelAnimator__AnimateButtons_d__8_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.IntroPanelAnimator.<AnimateButtons>d__8$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_IntroPanelAnimator__AnimateButtons_d__8__System_Collections_IEnumerator_Reset (UI_IntroPanelAnimator__AnimateButtons_d__8_o* __this, const MethodInfo* method);
// 0x18229c4d0

void UI_IntroPanelAnimator__AnimateButtons_d__8__System_Collections_IEnumerator_Reset
               (UI_IntroPanelAnimator__AnimateButtons_d__8_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_UI_IntroPanelAnimator_AnimateButtons_d__8_System_Collections_IEnumerator_Reset);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// UI.IntroPanelAnimator.<AnimateButtons>d__8$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_IntroPanelAnimator__AnimateButtons_d__8__System_Collections_IEnumerator_get_Current (UI_IntroPanelAnimator__AnimateButtons_d__8_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_IntroPanelAnimator__AnimateButtons_d__8__System_Collections_IEnumerator_get_Current(UI_IntroPanelAnimator__AnimateButtons_d__8_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.IntroPanelAnimator.<AnimatePanelAndButtons>d__7$$.ctor
// il2cpp: void UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7___ctor (UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7___ctor(UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.IntroPanelAnimator.<AnimatePanelAndButtons>d__7$$System.IDisposable.Dispose
// il2cpp: void UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7__System_IDisposable_Dispose (UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7_o* __this, const MethodInfo* method);
// 0x180547020

void
UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7__System_IDisposable_Dispose(UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7_o* __this, MethodInfo* method)

{
  return;
}


// UI.IntroPanelAnimator.<AnimatePanelAndButtons>d__7$$MoveNext
// il2cpp: bool UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7__MoveNext (UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7_o* __this, const MethodInfo* method);
// 0x18229c510
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18229c59d: jmp 0x18229c678

bool UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7__MoveNext
               (UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7_o *__this,MethodInfo *method)

{
  float *pfVar1;
  int iVar2;
  UI_IntroPanelAnimator_o *__this_00;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_RectTransform_o *pUVar4;
  UnityEngine_Rect_o *pUVar5;
  UnityEngine_Vector2_o UVar6;
  UI_IntroPanelAnimator__AnimateButtons_d__8_o *routine;
  Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *__this_01;
  bool bVar7;
  float fVar8;
  float fVar9;
  float fStackX_c;
  UnityEngine_Rect_o local_48 [4];
  
  if (Il2CppMethodInitialized_184347420 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    Il2CppMethodInitialized_184347420 = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar2 == 0) {
    (__this->fields).__1__state = -1;
    if ((__this_00 == (UI_IntroPanelAnimator_o *)0x0) ||
       (pUVar3 = (__this_00->fields).panelRect, pUVar3 == (UnityEngine_RectTransform_o *)0x0))
    goto label_18229c8bf;
    pUVar5 = UnityEngine_RectTransform__get_rect(local_48,pUVar3,(MethodInfo *)0x0);
    fVar9 = (pUVar5->fields).m_Width;
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
    pUVar4 = (__this_00->fields).panelRect;
    if (pUVar4 == (UnityEngine_RectTransform_o *)0x0) goto label_18229c8bf;
    UVar6 = UnityEngine_RectTransform__get_anchoredPosition(pUVar4,(MethodInfo *)0x0);
    fStackX_c = UVar6.fields.y;
    UnityEngine_RectTransform__set_anchoredPosition
              (pUVar3,(UnityEngine_Vector2_o)(CONCAT44(fStackX_c,fVar9) ^ 0x80000000),(MethodInfo *)0x0);
    pUVar3 = (__this_00->fields).buttonsContainer;
    if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto label_18229c8bf;
    UVar6 = UnityEngine_RectTransform__get_anchoredPosition(pUVar3,(MethodInfo *)0x0);
    (__this->fields)._buttonsStartPos_5__2.fields.x = UVar6.fields.x;
    fStackX_c = UVar6.fields.y;
    (__this->fields)._buttonsStartPos_5__2.fields.y = fStackX_c;
    pUVar3 = (__this_00->fields).buttonsContainer;
    UVar6.fields.x = UVar6.fields.x - (__this_00->fields).buttonsSlideOffset;
    if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto label_18229c8bf;
    UVar6.fields.y = fStackX_c;
    UnityEngine_RectTransform__set_anchoredPosition(pUVar3,UVar6,(MethodInfo *)0x0);
    (__this->fields)._elapsedTime_5__3 = 0.0;
    (__this->fields)._buttonAnimationStarted_5__4 = false;
label_18229c678:
    fVar9 = (__this_00->fields).panelSlideDuration;
    pfVar1 = &(__this->fields)._elapsedTime_5__3;
    if (fVar9 < *pfVar1 || fVar9 == *pfVar1) {
      pUVar3 = (__this_00->fields).panelRect;
      if (Il2CppMethodInitialized_18433e3c9 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_18433e3c9 = '\x01';
      }
      if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto label_18229c8bf;
      UnityEngine_RectTransform__set_anchoredPosition
                (pUVar3,(UnityEngine_Vector2_o)
                        (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,(MethodInfo *)0x0);
      if ((__this->fields)._buttonAnimationStarted_5__4 == false) goto label_18229c578;
      fVar9 = (__this_00->fields).buttonsSlideDuration;
      __this_01 = (Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
      UnityEngine_WaitForSeconds___ctor(__this_01,fVar9 * 0.5,(MethodInfo *)0x0);
      (__this->fields).__2__current = (Il2CppObject *)__this_01;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,__this_01);
      (__this->fields).__1__state = 2;
    }
    else {
      fVar9 = (__this->fields)._elapsedTime_5__3;
      fVar8 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      fVar8 = fVar8 + fVar9;
      (__this->fields)._elapsedTime_5__3 = fVar8;
      fVar9 = (float)il2cpp_runtime_helper_1804f6b50(1.0 - fVar8 / (__this_00->fields).panelSlideDuration,0x40400000);
      pUVar3 = (__this_00->fields).panelRect;
      if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) {
label_18229c8bf:
        ThrowNullReferenceException();
      }
      pUVar5 = UnityEngine_RectTransform__get_rect(local_48,pUVar3,(MethodInfo *)0x0);
      fVar8 = (pUVar5->fields).m_Width;
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      }
      pUVar4 = (__this_00->fields).panelRect;
      if (pUVar4 == (UnityEngine_RectTransform_o *)0x0) goto label_18229c8bf;
      UVar6 = UnityEngine_RectTransform__get_anchoredPosition(pUVar4,(MethodInfo *)0x0);
      fStackX_c = UVar6.fields.y;
      if (Il2CppMethodInitialized_18433e3c9 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
        Il2CppMethodInitialized_18433e3c9 = '\x01';
      }
      UVar6 = UnityEngine_Vector2__Lerp
                        ((UnityEngine_Vector2_o)(CONCAT44(fStackX_c,fVar8) ^ 0x80000000),
                         (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,1.0 - fVar9,
                         (MethodInfo *)0x0);
      UnityEngine_RectTransform__set_anchoredPosition(pUVar3,UVar6,(MethodInfo *)0x0);
      if (((__this->fields)._buttonAnimationStarted_5__4 == false) && (0.5 <= 1.0 - fVar9)) {
        bVar7 = Il2CppMethodInitialized_18434741f == '\0';
        fVar9 = (__this->fields)._buttonsStartPos_5__2.fields.x;
        fVar8 = (__this->fields)._buttonsStartPos_5__2.fields.y;
        (__this->fields)._buttonAnimationStarted_5__4 = true;
        if (bVar7) {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_IntroPanelAnimator_AnimateButtons_d__8);
          Il2CppMethodInitialized_18434741f = '\x01';
        }
        routine = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_IntroPanelAnimator_AnimateButtons_d__8)
        ;
        System_Configuration_ConfigurationCollectionAttribute___ctor
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
        (routine->fields).__1__state = 0;
        (routine->fields).__4__this = __this_00;
        Il2CppCodeGenWriteBarrier(&(routine->fields).__4__this,__this_00);
        (routine->fields).endPos.fields.x = fVar9;
        (routine->fields).endPos.fields.y = fVar8;
        UnityEngine_MonoBehaviour__StartCoroutine_Auto
                  ((UnityEngine_MonoBehaviour_o *)__this_00,(System_Collections_IEnumerator_o *)routine,
                   (MethodInfo *)0x0);
      }
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,(void *)0x0);
      (__this->fields).__1__state = 1;
    }
    bVar7 = true;
  }
  else {
    if (iVar2 == 1) {
      (__this->fields).__1__state = -1;
      if (__this_00 == (UI_IntroPanelAnimator_o *)0x0) goto label_18229c8bf;
      goto label_18229c678;
    }
    if (iVar2 == 2) {
      (__this->fields).__1__state = -1;
      return false;
    }
label_18229c578:
    bVar7 = false;
  }
  return bVar7;
}


// UI.IntroPanelAnimator.<AnimatePanelAndButtons>d__7$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7__System_Collections_Generic_IEnumerator_System_Object__get_Current(UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.IntroPanelAnimator.<AnimatePanelAndButtons>d__7$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7__System_Collections_IEnumerator_Reset (UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7_o* __this, const MethodInfo* method);
// 0x18229c8d0

void UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7__System_Collections_IEnumerator_Reset
               (UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7_o *__this,MethodInfo *method)

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
                  MethodInfo_UI_IntroPanelAnimator_AnimatePanelAndButtons_d__7_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// UI.IntroPanelAnimator.<AnimatePanelAndButtons>d__7$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7__System_Collections_IEnumerator_get_Current (UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7__System_Collections_IEnumerator_get_Current(UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.IntroPanelAnimator$$Awake
// il2cpp: void UI_IntroPanelAnimator__Awake (UI_IntroPanelAnimator_o* __this, const MethodInfo* method);
// 0x18228a940

void UI_IntroPanelAnimator__Awake(UI_IntroPanelAnimator_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_UI_VerticalLayoutGroup_o *__this_00;
  
  if (Il2CppMethodInitialized_18434741d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInChildren_VerticalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    Il2CppMethodInitialized_18434741d = '\x01';
  }
  pUVar2 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
  (__this->fields).panelRect = pUVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).panelRect,pUVar2);
  __this_00 = UnityEngine_Component__GetComponentInChildren_object__664b50
                        ((UnityEngine_Component_o *)__this,
                         (MethodInfo_664B50 *)
                         MethodInfo_UnityEngine_Component_GetComponentInChildren_VerticalLayoutGroup);
  if (__this_00 != (UnityEngine_UI_VerticalLayoutGroup_o *)0x0) {
    pUVar2 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this_00,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    (__this->fields).buttonsContainer = pUVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).buttonsContainer,pUVar2);
    iVar1 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
    (__this->fields).buttonsSlideOffset = (float)iVar1 / 2.5;
    return;
  }
  ThrowNullReferenceException();
}


// UI.IntroPanelAnimator$$StartAnimation
// il2cpp: void UI_IntroPanelAnimator__StartAnimation (UI_IntroPanelAnimator_o* __this, const MethodInfo* method);
// 0x18228aa30

void UI_IntroPanelAnimator__StartAnimation(UI_IntroPanelAnimator_o *__this,MethodInfo *method)

{
  UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7_o *routine;
  
  if (Il2CppMethodInitialized_18434741e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_IntroPanelAnimator_AnimatePanelAndButtons_d__7);
    Il2CppMethodInitialized_18434741e = '\x01';
  }
  routine = il2cpp_codegen_object_new
                      ((Il2CppClass *)TypeInfo_UI_IntroPanelAnimator_AnimatePanelAndButtons_d__7);
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


// UI.IntroPanelAnimator$$AnimatePanelAndButtons
// il2cpp: System_Collections_IEnumerator_o* UI_IntroPanelAnimator__AnimatePanelAndButtons (UI_IntroPanelAnimator_o* __this, const MethodInfo* method);
// 0x18228a8d0

System_Collections_IEnumerator_o *
UI_IntroPanelAnimator__AnimatePanelAndButtons(UI_IntroPanelAnimator_o *__this,MethodInfo *method)

{
  UI_IntroPanelAnimator__AnimatePanelAndButtons_d__7_o *__this_00;
  
  if (Il2CppMethodInitialized_18434741e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_IntroPanelAnimator_AnimatePanelAndButtons_d__7);
    Il2CppMethodInitialized_18434741e = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_UI_IntroPanelAnimator_AnimatePanelAndButtons_d__7);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.IntroPanelAnimator$$AnimateButtons
// il2cpp: System_Collections_IEnumerator_o* UI_IntroPanelAnimator__AnimateButtons (UI_IntroPanelAnimator_o* __this, UnityEngine_Vector2_o endPos, const MethodInfo* method);
// 0x18228a840

System_Collections_IEnumerator_o *
UI_IntroPanelAnimator__AnimateButtons
          (UI_IntroPanelAnimator_o *__this,UnityEngine_Vector2_o endPos,MethodInfo *method)

{
  UI_IntroPanelAnimator__AnimateButtons_d__8_o *__this_00;
  float fStack_24;
  
  if (Il2CppMethodInitialized_18434741f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_IntroPanelAnimator_AnimateButtons_d__8);
    Il2CppMethodInitialized_18434741f = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_IntroPanelAnimator_AnimateButtons_d__8);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  fStack_24 = endPos.fields.y;
  (__this_00->fields).endPos.fields.x = endPos.fields.x;
  (__this_00->fields).endPos.fields.y = fStack_24;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.IntroPanelAnimator$$EaseOutCubic
// il2cpp: float UI_IntroPanelAnimator__EaseOutCubic (UI_IntroPanelAnimator_o* __this, float t, const MethodInfo* method);
// 0x18228a9f0

float UI_IntroPanelAnimator__EaseOutCubic(UI_IntroPanelAnimator_o *__this,float t,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = (float)il2cpp_runtime_helper_1804f6b50(1.0 - t,0x40400000);
  return 1.0 - fVar1;
}


// UI.IntroPanelAnimator$$.ctor
// il2cpp: void UI_IntroPanelAnimator___ctor (UI_IntroPanelAnimator_o* __this, const MethodInfo* method);
// 0x18228aab0

void UI_IntroPanelAnimator___ctor(UI_IntroPanelAnimator_o *__this,MethodInfo *method)

{
  (__this->fields).panelSlideDuration = 1.5;
  (__this->fields).buttonsSlideDuration = 1.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


