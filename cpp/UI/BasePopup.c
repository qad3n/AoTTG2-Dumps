// Type: UI.BasePopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/BasePopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/BasePopup.cs
// --------------------------------

// UI.BasePopup.AnimationKeyframe$$.ctor
// il2cpp: void UI_BasePopup_AnimationKeyframe___ctor (UI_BasePopup_AnimationKeyframe_o __this, float time, float scale, const MethodInfo* method);
// 0x5cb76d0

void UI_BasePopup_AnimationKeyframe___ctor
               (UI_BasePopup_AnimationKeyframe_o *__this,float time,float scale,MethodInfo *method)

{
  (__this->fields).time = time;
  (__this->fields).scale = scale;
  return;
}


// UI.BasePopup.<FadeIn>d__44$$.ctor
// il2cpp: void UI_BasePopup__FadeIn_d__44___ctor (UI_BasePopup__FadeIn_d__44_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5cb7110

void UI_BasePopup__FadeIn_d__44___ctor
               (UI_BasePopup__FadeIn_d__44_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.BasePopup.<FadeIn>d__44$$System.IDisposable.Dispose
// il2cpp: void UI_BasePopup__FadeIn_d__44__System_IDisposable_Dispose (UI_BasePopup__FadeIn_d__44_o* __this, const MethodInfo* method);
// 0x5cb7760

void UI_BasePopup__FadeIn_d__44__System_IDisposable_Dispose
               (UI_BasePopup__FadeIn_d__44_o *__this,MethodInfo *method)

{
  return;
}


// UI.BasePopup.<FadeIn>d__44$$MoveNext
// il2cpp: bool UI_BasePopup__FadeIn_d__44__MoveNext (UI_BasePopup__FadeIn_d__44_o* __this, const MethodInfo* method);
// 0x5cb7770

bool UI_BasePopup__FadeIn_d__44__MoveNext(UI_BasePopup__FadeIn_d__44_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_BasePopup_o *__this_00;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_CanvasGroup_o *pUVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  iVar1 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if (__this_00 == (UI_BasePopup_o *)0x0) goto label_05cb796c;
    fVar4 = (__this_00->fields)._currentAnimationValue;
  }
  else {
    if (iVar1 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    if (__this_00 == (UI_BasePopup_o *)0x0) goto label_05cb796c;
    fVar4 = (*(__this_00->klass->vtable)._47_get_MinFadeAlpha.methodPtr)
                      (__this_00,(__this_00->klass->vtable)._47_get_MinFadeAlpha.method);
    (__this_00->fields)._currentAnimationValue = fVar4;
  }
  fVar5 = (*(__this_00->klass->vtable)._48_get_MaxFadeAlpha.methodPtr)
                    (__this_00,(__this_00->klass->vtable)._48_get_MaxFadeAlpha.method);
  if (fVar5 <= fVar4) {
    fVar4 = (*(__this_00->klass->vtable)._48_get_MaxFadeAlpha.methodPtr)
                      (__this_00,(__this_00->klass->vtable)._48_get_MaxFadeAlpha.method);
    if (Il2CppMethodInitialized_07547ad7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_CanvasGroup);
      Il2CppMethodInitialized_07547ad7 = '\x01';
    }
    pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if ((pUVar2 != (UnityEngine_Transform_o *)0x0) &&
       (pUVar3 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)pUVar2,
                            (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_CanvasGroup),
       pUVar3 != (UnityEngine_CanvasGroup_o *)0x0)) {
      UnityEngine_CanvasGroup__set_alpha(pUVar3,fVar4,(MethodInfo *)0x0);
      return false;
    }
  }
  else {
    fVar4 = (__this_00->fields)._currentAnimationValue;
    if (Il2CppMethodInitialized_07547ad7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_CanvasGroup);
      Il2CppMethodInitialized_07547ad7 = '\x01';
    }
    pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if ((pUVar2 != (UnityEngine_Transform_o *)0x0) &&
       (pUVar3 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)pUVar2,
                            (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_CanvasGroup),
       pUVar3 != (UnityEngine_CanvasGroup_o *)0x0)) {
      UnityEngine_CanvasGroup__set_alpha(pUVar3,fVar4,(MethodInfo *)0x0);
      fVar4 = (__this_00->fields)._currentAnimationValue;
      fVar5 = (*(__this_00->klass->vtable)._47_get_MinFadeAlpha.methodPtr)
                        (__this_00,(__this_00->klass->vtable)._47_get_MinFadeAlpha.method);
      fVar6 = (*(__this_00->klass->vtable)._48_get_MaxFadeAlpha.methodPtr)
                        (__this_00,(__this_00->klass->vtable)._48_get_MaxFadeAlpha.method);
      fVar5 = (*(__this_00->klass->vtable)._61_GetAnimationSpeed.methodPtr)
                        (__this_00,fVar5,fVar6,(__this_00->klass->vtable)._61_GetAnimationSpeed.method);
      fVar6 = UnityEngine_Time__get_unscaledDeltaTime((MethodInfo *)0x0);
      (__this_00->fields)._currentAnimationValue = fVar6 * fVar5 + fVar4;
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
      (__this->fields).__1__state = 1;
      return true;
    }
  }
label_05cb796c:
  ThrowNullReferenceException();
}


// UI.BasePopup.<FadeIn>d__44$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_BasePopup__FadeIn_d__44__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_BasePopup__FadeIn_d__44_o* __this, const MethodInfo* method);
// 0x5cb7980

Il2CppObject *
UI_BasePopup__FadeIn_d__44__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_BasePopup__FadeIn_d__44_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.BasePopup.<FadeIn>d__44$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_BasePopup__FadeIn_d__44__System_Collections_IEnumerator_Reset (UI_BasePopup__FadeIn_d__44_o* __this, const MethodInfo* method);
// 0x5cb7990

void UI_BasePopup__FadeIn_d__44__System_Collections_IEnumerator_Reset
               (UI_BasePopup__FadeIn_d__44_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_UI_BasePopup_FadeIn_d__44_System_Collections_IEnumerator_Reset);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// UI.BasePopup.<FadeIn>d__44$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_BasePopup__FadeIn_d__44__System_Collections_IEnumerator_get_Current (UI_BasePopup__FadeIn_d__44_o* __this, const MethodInfo* method);
// 0x5cb79d0

Il2CppObject *
UI_BasePopup__FadeIn_d__44__System_Collections_IEnumerator_get_Current
          (UI_BasePopup__FadeIn_d__44_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.BasePopup.<FadeOut>d__45$$.ctor
// il2cpp: void UI_BasePopup__FadeOut_d__45___ctor (UI_BasePopup__FadeOut_d__45_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5cb7130

void UI_BasePopup__FadeOut_d__45___ctor
               (UI_BasePopup__FadeOut_d__45_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.BasePopup.<FadeOut>d__45$$System.IDisposable.Dispose
// il2cpp: void UI_BasePopup__FadeOut_d__45__System_IDisposable_Dispose (UI_BasePopup__FadeOut_d__45_o* __this, const MethodInfo* method);
// 0x5cb79e0

void UI_BasePopup__FadeOut_d__45__System_IDisposable_Dispose
               (UI_BasePopup__FadeOut_d__45_o *__this,MethodInfo *method)

{
  return;
}


// UI.BasePopup.<FadeOut>d__45$$MoveNext
// il2cpp: bool UI_BasePopup__FadeOut_d__45__MoveNext (UI_BasePopup__FadeOut_d__45_o* __this, const MethodInfo* method);
// 0x5cb79f0

bool UI_BasePopup__FadeOut_d__45__MoveNext(UI_BasePopup__FadeOut_d__45_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_BasePopup_o *__this_00;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_CanvasGroup_o *pUVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  iVar1 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if (__this_00 == (UI_BasePopup_o *)0x0) goto label_05cb7c0e;
    fVar4 = (__this_00->fields)._currentAnimationValue;
  }
  else {
    if (iVar1 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    if (__this_00 == (UI_BasePopup_o *)0x0) goto label_05cb7c0e;
    fVar4 = (*(__this_00->klass->vtable)._48_get_MaxFadeAlpha.methodPtr)
                      (__this_00,(__this_00->klass->vtable)._48_get_MaxFadeAlpha.method);
    (__this_00->fields)._currentAnimationValue = fVar4;
  }
  fVar5 = (*(__this_00->klass->vtable)._47_get_MinFadeAlpha.methodPtr)
                    (__this_00,(__this_00->klass->vtable)._47_get_MinFadeAlpha.method);
  if (fVar4 <= fVar5) {
    fVar4 = (*(__this_00->klass->vtable)._47_get_MinFadeAlpha.methodPtr)
                      (__this_00,(__this_00->klass->vtable)._47_get_MinFadeAlpha.method);
    if (Il2CppMethodInitialized_07547ad7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_CanvasGroup);
      Il2CppMethodInitialized_07547ad7 = '\x01';
    }
    pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if ((pUVar2 != (UnityEngine_Transform_o *)0x0) &&
       (pUVar3 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)pUVar2,
                            (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_CanvasGroup),
       pUVar3 != (UnityEngine_CanvasGroup_o *)0x0)) {
      UnityEngine_CanvasGroup__set_alpha(pUVar3,fVar4,(MethodInfo *)0x0);
      (*(__this_00->klass->vtable)._60_FinishHide.methodPtr)
                (__this_00,(__this_00->klass->vtable)._60_FinishHide.method);
      return false;
    }
  }
  else {
    fVar4 = (__this_00->fields)._currentAnimationValue;
    if (Il2CppMethodInitialized_07547ad7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_CanvasGroup);
      Il2CppMethodInitialized_07547ad7 = '\x01';
    }
    pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if ((pUVar2 != (UnityEngine_Transform_o *)0x0) &&
       (pUVar3 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)pUVar2,
                            (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_CanvasGroup),
       pUVar3 != (UnityEngine_CanvasGroup_o *)0x0)) {
      UnityEngine_CanvasGroup__set_alpha(pUVar3,fVar4,(MethodInfo *)0x0);
      fVar4 = (__this_00->fields)._currentAnimationValue;
      fVar5 = (*(__this_00->klass->vtable)._47_get_MinFadeAlpha.methodPtr)
                        (__this_00,(__this_00->klass->vtable)._47_get_MinFadeAlpha.method);
      fVar6 = (*(__this_00->klass->vtable)._48_get_MaxFadeAlpha.methodPtr)
                        (__this_00,(__this_00->klass->vtable)._48_get_MaxFadeAlpha.method);
      fVar5 = (*(__this_00->klass->vtable)._61_GetAnimationSpeed.methodPtr)
                        (__this_00,fVar5,fVar6,(__this_00->klass->vtable)._61_GetAnimationSpeed.method);
      fVar6 = UnityEngine_Time__get_unscaledDeltaTime((MethodInfo *)0x0);
      (__this_00->fields)._currentAnimationValue = fVar4 - fVar6 * fVar5;
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
      (__this->fields).__1__state = 1;
      return true;
    }
  }
label_05cb7c0e:
  ThrowNullReferenceException();
}


// UI.BasePopup.<FadeOut>d__45$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_BasePopup__FadeOut_d__45__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_BasePopup__FadeOut_d__45_o* __this, const MethodInfo* method);
// 0x5cb7c20

Il2CppObject *
UI_BasePopup__FadeOut_d__45__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_BasePopup__FadeOut_d__45_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.BasePopup.<FadeOut>d__45$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_BasePopup__FadeOut_d__45__System_Collections_IEnumerator_Reset (UI_BasePopup__FadeOut_d__45_o* __this, const MethodInfo* method);
// 0x5cb7c30

void UI_BasePopup__FadeOut_d__45__System_Collections_IEnumerator_Reset
               (UI_BasePopup__FadeOut_d__45_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_UI_BasePopup_FadeOut_d__45_System_Collections_IEnumerator_Reset);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// UI.BasePopup.<FadeOut>d__45$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_BasePopup__FadeOut_d__45__System_Collections_IEnumerator_get_Current (UI_BasePopup__FadeOut_d__45_o* __this, const MethodInfo* method);
// 0x5cb7c70

Il2CppObject *
UI_BasePopup__FadeOut_d__45__System_Collections_IEnumerator_get_Current
          (UI_BasePopup__FadeOut_d__45_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.BasePopup.<KillPopupIn>d__42$$.ctor
// il2cpp: void UI_BasePopup__KillPopupIn_d__42___ctor (UI_BasePopup__KillPopupIn_d__42_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5cb70d0

void UI_BasePopup__KillPopupIn_d__42___ctor
               (UI_BasePopup__KillPopupIn_d__42_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.BasePopup.<KillPopupIn>d__42$$System.IDisposable.Dispose
// il2cpp: void UI_BasePopup__KillPopupIn_d__42__System_IDisposable_Dispose (UI_BasePopup__KillPopupIn_d__42_o* __this, const MethodInfo* method);
// 0x5cb7c80

void UI_BasePopup__KillPopupIn_d__42__System_IDisposable_Dispose
               (UI_BasePopup__KillPopupIn_d__42_o *__this,MethodInfo *method)

{
  return;
}


// UI.BasePopup.<KillPopupIn>d__42$$MoveNext
// il2cpp: bool UI_BasePopup__KillPopupIn_d__42__MoveNext (UI_BasePopup__KillPopupIn_d__42_o* __this, const MethodInfo* method);
// 0x5cb7c90

bool UI_BasePopup__KillPopupIn_d__42__MoveNext(UI_BasePopup__KillPopupIn_d__42_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_BasePopup_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *pMVar2;
  float fVar3;
  
  iVar1 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
  }
  else {
    if (iVar1 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    fVar3 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    (__this->fields)._startTime_5__2 = fVar3;
    (__this->fields)._endTime_5__3 = fVar3 + 0.6;
  }
  fVar3 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  if ((__this->fields)._endTime_5__3 <= fVar3) {
    if (__this_00 != (UI_BasePopup_o *)0x0) {
      pMVar2 = (__this_00->klass->vtable)._46_get_MaxTweenScale.method;
      fVar3 = (*(__this_00->klass->vtable)._46_get_MaxTweenScale.methodPtr)(__this_00,pMVar2);
      UI_BasePopup__SetTransformScale(__this_00,fVar3,pMVar2);
      return false;
    }
  }
  else {
    fVar3 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    if (__this_00 != (UI_BasePopup_o *)0x0) {
      pMVar2 = (MethodInfo *)(__this_00->fields).killPopupKeyframesIn;
      fVar3 = UI_BasePopup__EvaluateKeyframes
                        (__this_00,(fVar3 - (__this->fields)._startTime_5__2) / 0.6,
                         (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)pMVar2,method_00);
      UI_BasePopup__SetTransformScale(__this_00,fVar3,pMVar2);
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
      (__this->fields).__1__state = 1;
      return true;
    }
  }
  ThrowNullReferenceException();
}


// UI.BasePopup.<KillPopupIn>d__42$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_BasePopup__KillPopupIn_d__42__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_BasePopup__KillPopupIn_d__42_o* __this, const MethodInfo* method);
// 0x5cb7d70

Il2CppObject *
UI_BasePopup__KillPopupIn_d__42__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_BasePopup__KillPopupIn_d__42_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.BasePopup.<KillPopupIn>d__42$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_BasePopup__KillPopupIn_d__42__System_Collections_IEnumerator_Reset (UI_BasePopup__KillPopupIn_d__42_o* __this, const MethodInfo* method);
// 0x5cb7d80

void UI_BasePopup__KillPopupIn_d__42__System_Collections_IEnumerator_Reset
               (UI_BasePopup__KillPopupIn_d__42_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_UI_BasePopup_KillPopupIn_d__42_System_Collections_IEnumerator_Reset);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// UI.BasePopup.<KillPopupIn>d__42$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_BasePopup__KillPopupIn_d__42__System_Collections_IEnumerator_get_Current (UI_BasePopup__KillPopupIn_d__42_o* __this, const MethodInfo* method);
// 0x5cb7dc0

Il2CppObject *
UI_BasePopup__KillPopupIn_d__42__System_Collections_IEnumerator_get_Current
          (UI_BasePopup__KillPopupIn_d__42_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.BasePopup.<KillPopupOut>d__43$$.ctor
// il2cpp: void UI_BasePopup__KillPopupOut_d__43___ctor (UI_BasePopup__KillPopupOut_d__43_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5cb70f0

void UI_BasePopup__KillPopupOut_d__43___ctor
               (UI_BasePopup__KillPopupOut_d__43_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.BasePopup.<KillPopupOut>d__43$$System.IDisposable.Dispose
// il2cpp: void UI_BasePopup__KillPopupOut_d__43__System_IDisposable_Dispose (UI_BasePopup__KillPopupOut_d__43_o* __this, const MethodInfo* method);
// 0x5cb7dd0

void UI_BasePopup__KillPopupOut_d__43__System_IDisposable_Dispose
               (UI_BasePopup__KillPopupOut_d__43_o *__this,MethodInfo *method)

{
  return;
}


// UI.BasePopup.<KillPopupOut>d__43$$MoveNext
// il2cpp: bool UI_BasePopup__KillPopupOut_d__43__MoveNext (UI_BasePopup__KillPopupOut_d__43_o* __this, const MethodInfo* method);
// 0x5cb7de0

bool UI_BasePopup__KillPopupOut_d__43__MoveNext(UI_BasePopup__KillPopupOut_d__43_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_BasePopup_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *pMVar2;
  float fVar3;
  
  iVar1 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
  }
  else {
    if (iVar1 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    fVar3 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    (__this->fields)._startTime_5__2 = fVar3;
    (__this->fields)._endTime_5__3 = fVar3 + 1.0;
  }
  fVar3 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  if ((__this->fields)._endTime_5__3 <= fVar3) {
    if (__this_00 != (UI_BasePopup_o *)0x0) {
      pMVar2 = (__this_00->klass->vtable)._45_get_MinTweenScale.method;
      fVar3 = (*(__this_00->klass->vtable)._45_get_MinTweenScale.methodPtr)(__this_00,pMVar2);
      UI_BasePopup__SetTransformScale(__this_00,fVar3,pMVar2);
      (*(__this_00->klass->vtable)._60_FinishHide.methodPtr)
                (__this_00,(__this_00->klass->vtable)._60_FinishHide.method);
      return false;
    }
  }
  else {
    fVar3 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    if (__this_00 != (UI_BasePopup_o *)0x0) {
      pMVar2 = (MethodInfo *)(__this_00->fields).killPopupKeyframesOut;
      fVar3 = UI_BasePopup__EvaluateKeyframes
                        (__this_00,((__this->fields)._startTime_5__2 - fVar3) + 1.0,
                         (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)pMVar2,method_00);
      UI_BasePopup__SetTransformScale(__this_00,fVar3,pMVar2);
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
      (__this->fields).__1__state = 1;
      return true;
    }
  }
  ThrowNullReferenceException();
}


// UI.BasePopup.<KillPopupOut>d__43$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_BasePopup__KillPopupOut_d__43__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_BasePopup__KillPopupOut_d__43_o* __this, const MethodInfo* method);
// 0x5cb7ee0

Il2CppObject *
UI_BasePopup__KillPopupOut_d__43__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_BasePopup__KillPopupOut_d__43_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.BasePopup.<KillPopupOut>d__43$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_BasePopup__KillPopupOut_d__43__System_Collections_IEnumerator_Reset (UI_BasePopup__KillPopupOut_d__43_o* __this, const MethodInfo* method);
// 0x5cb7ef0

void UI_BasePopup__KillPopupOut_d__43__System_Collections_IEnumerator_Reset
               (UI_BasePopup__KillPopupOut_d__43_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_UI_BasePopup_KillPopupOut_d__43_System_Collections_IEnumerator_Reset);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// UI.BasePopup.<KillPopupOut>d__43$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_BasePopup__KillPopupOut_d__43__System_Collections_IEnumerator_get_Current (UI_BasePopup__KillPopupOut_d__43_o* __this, const MethodInfo* method);
// 0x5cb7f30

Il2CppObject *
UI_BasePopup__KillPopupOut_d__43__System_Collections_IEnumerator_get_Current
          (UI_BasePopup__KillPopupOut_d__43_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.BasePopup.<TweenIn>d__36$$.ctor
// il2cpp: void UI_BasePopup__TweenIn_d__36___ctor (UI_BasePopup__TweenIn_d__36_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5cb6e70

void UI_BasePopup__TweenIn_d__36___ctor
               (UI_BasePopup__TweenIn_d__36_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.BasePopup.<TweenIn>d__36$$System.IDisposable.Dispose
// il2cpp: void UI_BasePopup__TweenIn_d__36__System_IDisposable_Dispose (UI_BasePopup__TweenIn_d__36_o* __this, const MethodInfo* method);
// 0x5cb7f40

void UI_BasePopup__TweenIn_d__36__System_IDisposable_Dispose
               (UI_BasePopup__TweenIn_d__36_o *__this,MethodInfo *method)

{
  return;
}


// UI.BasePopup.<TweenIn>d__36$$MoveNext
// il2cpp: bool UI_BasePopup__TweenIn_d__36__MoveNext (UI_BasePopup__TweenIn_d__36_o* __this, const MethodInfo* method);
// 0x5cb7f50

bool UI_BasePopup__TweenIn_d__36__MoveNext(UI_BasePopup__TweenIn_d__36_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_BasePopup_o *__this_00;
  MethodInfo *pMVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  iVar1 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if (__this_00 == (UI_BasePopup_o *)0x0) goto label_05cb80a8;
    fVar3 = (__this_00->fields)._currentAnimationValue;
  }
  else {
    if (iVar1 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    if (__this_00 == (UI_BasePopup_o *)0x0) {
label_05cb80a8:
      ThrowNullReferenceException();
    }
    fVar3 = (*(__this_00->klass->vtable)._45_get_MinTweenScale.methodPtr)
                      (__this_00,(__this_00->klass->vtable)._45_get_MinTweenScale.method);
    (__this_00->fields)._currentAnimationValue = fVar3;
  }
  pMVar2 = (__this_00->klass->vtable)._46_get_MaxTweenScale.method;
  fVar4 = (*(__this_00->klass->vtable)._46_get_MaxTweenScale.methodPtr)(__this_00,pMVar2);
  if (fVar4 <= fVar3) {
    pMVar2 = (__this_00->klass->vtable)._46_get_MaxTweenScale.method;
    fVar3 = (*(__this_00->klass->vtable)._46_get_MaxTweenScale.methodPtr)(__this_00,pMVar2);
    UI_BasePopup__SetTransformScale(__this_00,fVar3,pMVar2);
    return false;
  }
  UI_BasePopup__SetTransformScale(__this_00,(__this_00->fields)._currentAnimationValue,pMVar2);
  fVar3 = (__this_00->fields)._currentAnimationValue;
  fVar4 = (*(__this_00->klass->vtable)._45_get_MinTweenScale.methodPtr)
                    (__this_00,(__this_00->klass->vtable)._45_get_MinTweenScale.method);
  fVar5 = (*(__this_00->klass->vtable)._46_get_MaxTweenScale.methodPtr)
                    (__this_00,(__this_00->klass->vtable)._46_get_MaxTweenScale.method);
  fVar4 = (*(__this_00->klass->vtable)._61_GetAnimationSpeed.methodPtr)
                    (__this_00,fVar4,fVar5,(__this_00->klass->vtable)._61_GetAnimationSpeed.method);
  fVar5 = UnityEngine_Time__get_unscaledDeltaTime((MethodInfo *)0x0);
  (__this_00->fields)._currentAnimationValue = fVar5 * fVar4 + fVar3;
  (__this->fields).__2__current = (Il2CppObject *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
  (__this->fields).__1__state = 1;
  return true;
}


// UI.BasePopup.<TweenIn>d__36$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_BasePopup__TweenIn_d__36__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_BasePopup__TweenIn_d__36_o* __this, const MethodInfo* method);
// 0x5cb80b0

Il2CppObject *
UI_BasePopup__TweenIn_d__36__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_BasePopup__TweenIn_d__36_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.BasePopup.<TweenIn>d__36$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_BasePopup__TweenIn_d__36__System_Collections_IEnumerator_Reset (UI_BasePopup__TweenIn_d__36_o* __this, const MethodInfo* method);
// 0x5cb80c0

void UI_BasePopup__TweenIn_d__36__System_Collections_IEnumerator_Reset
               (UI_BasePopup__TweenIn_d__36_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_UI_BasePopup_TweenIn_d__36_System_Collections_IEnumerator_Reset);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// UI.BasePopup.<TweenIn>d__36$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_BasePopup__TweenIn_d__36__System_Collections_IEnumerator_get_Current (UI_BasePopup__TweenIn_d__36_o* __this, const MethodInfo* method);
// 0x5cb8100

Il2CppObject *
UI_BasePopup__TweenIn_d__36__System_Collections_IEnumerator_get_Current
          (UI_BasePopup__TweenIn_d__36_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.BasePopup.<TweenOut>d__37$$.ctor
// il2cpp: void UI_BasePopup__TweenOut_d__37___ctor (UI_BasePopup__TweenOut_d__37_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5cb6e90

void UI_BasePopup__TweenOut_d__37___ctor
               (UI_BasePopup__TweenOut_d__37_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.BasePopup.<TweenOut>d__37$$System.IDisposable.Dispose
// il2cpp: void UI_BasePopup__TweenOut_d__37__System_IDisposable_Dispose (UI_BasePopup__TweenOut_d__37_o* __this, const MethodInfo* method);
// 0x5cb8110

void UI_BasePopup__TweenOut_d__37__System_IDisposable_Dispose
               (UI_BasePopup__TweenOut_d__37_o *__this,MethodInfo *method)

{
  return;
}


// UI.BasePopup.<TweenOut>d__37$$MoveNext
// il2cpp: bool UI_BasePopup__TweenOut_d__37__MoveNext (UI_BasePopup__TweenOut_d__37_o* __this, const MethodInfo* method);
// 0x5cb8120

bool UI_BasePopup__TweenOut_d__37__MoveNext(UI_BasePopup__TweenOut_d__37_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_BasePopup_o *__this_00;
  MethodInfo *pMVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  iVar1 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if (__this_00 == (UI_BasePopup_o *)0x0) goto label_05cb8293;
    fVar3 = (__this_00->fields)._currentAnimationValue;
  }
  else {
    if (iVar1 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    if (__this_00 == (UI_BasePopup_o *)0x0) {
label_05cb8293:
      ThrowNullReferenceException();
    }
    fVar3 = (*(__this_00->klass->vtable)._46_get_MaxTweenScale.methodPtr)
                      (__this_00,(__this_00->klass->vtable)._46_get_MaxTweenScale.method);
    (__this_00->fields)._currentAnimationValue = fVar3;
  }
  pMVar2 = (__this_00->klass->vtable)._45_get_MinTweenScale.method;
  fVar4 = (*(__this_00->klass->vtable)._45_get_MinTweenScale.methodPtr)(__this_00,pMVar2);
  if (fVar3 <= fVar4) {
    pMVar2 = (__this_00->klass->vtable)._45_get_MinTweenScale.method;
    fVar3 = (*(__this_00->klass->vtable)._45_get_MinTweenScale.methodPtr)(__this_00,pMVar2);
    UI_BasePopup__SetTransformScale(__this_00,fVar3,pMVar2);
    (*(__this_00->klass->vtable)._60_FinishHide.methodPtr)
              (__this_00,(__this_00->klass->vtable)._60_FinishHide.method);
    return false;
  }
  UI_BasePopup__SetTransformScale(__this_00,(__this_00->fields)._currentAnimationValue,pMVar2);
  fVar3 = (__this_00->fields)._currentAnimationValue;
  fVar4 = (*(__this_00->klass->vtable)._45_get_MinTweenScale.methodPtr)
                    (__this_00,(__this_00->klass->vtable)._45_get_MinTweenScale.method);
  fVar5 = (*(__this_00->klass->vtable)._46_get_MaxTweenScale.methodPtr)
                    (__this_00,(__this_00->klass->vtable)._46_get_MaxTweenScale.method);
  fVar4 = (*(__this_00->klass->vtable)._61_GetAnimationSpeed.methodPtr)
                    (__this_00,fVar4,fVar5,(__this_00->klass->vtable)._61_GetAnimationSpeed.method);
  fVar5 = UnityEngine_Time__get_unscaledDeltaTime((MethodInfo *)0x0);
  (__this_00->fields)._currentAnimationValue = fVar3 - fVar5 * fVar4;
  (__this->fields).__2__current = (Il2CppObject *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
  (__this->fields).__1__state = 1;
  return true;
}


// UI.BasePopup.<TweenOut>d__37$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_BasePopup__TweenOut_d__37__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_BasePopup__TweenOut_d__37_o* __this, const MethodInfo* method);
// 0x5cb82a0

Il2CppObject *
UI_BasePopup__TweenOut_d__37__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_BasePopup__TweenOut_d__37_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.BasePopup.<TweenOut>d__37$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_BasePopup__TweenOut_d__37__System_Collections_IEnumerator_Reset (UI_BasePopup__TweenOut_d__37_o* __this, const MethodInfo* method);
// 0x5cb82b0

void UI_BasePopup__TweenOut_d__37__System_Collections_IEnumerator_Reset
               (UI_BasePopup__TweenOut_d__37_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_UI_BasePopup_TweenOut_d__37_System_Collections_IEnumerator_Reset);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// UI.BasePopup.<TweenOut>d__37$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_BasePopup__TweenOut_d__37__System_Collections_IEnumerator_get_Current (UI_BasePopup__TweenOut_d__37_o* __this, const MethodInfo* method);
// 0x5cb82f0

Il2CppObject *
UI_BasePopup__TweenOut_d__37__System_Collections_IEnumerator_get_Current
          (UI_BasePopup__TweenOut_d__37_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.BasePopup$$get_MinTweenScale
// il2cpp: float UI_BasePopup__get_MinTweenScale (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x5cb5e00

float UI_BasePopup__get_MinTweenScale(UI_BasePopup_o *__this,MethodInfo *method)

{
  return 0.3;
}


// UI.BasePopup$$get_MaxTweenScale
// il2cpp: float UI_BasePopup__get_MaxTweenScale (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x5cb5e10

float UI_BasePopup__get_MaxTweenScale(UI_BasePopup_o *__this,MethodInfo *method)

{
  return 1.0;
}


// UI.BasePopup$$get_MinFadeAlpha
// il2cpp: float UI_BasePopup__get_MinFadeAlpha (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x5cb5e20

float UI_BasePopup__get_MinFadeAlpha(UI_BasePopup_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.BasePopup$$get_MaxFadeAlpha
// il2cpp: float UI_BasePopup__get_MaxFadeAlpha (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x5cb5e30

float UI_BasePopup__get_MaxFadeAlpha(UI_BasePopup_o *__this,MethodInfo *method)

{
  return 1.0;
}


// UI.BasePopup$$get_SpringDamping
// il2cpp: float UI_BasePopup__get_SpringDamping (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x5cb5e40

float UI_BasePopup__get_SpringDamping(UI_BasePopup_o *__this,MethodInfo *method)

{
  return 0.5;
}


// UI.BasePopup$$get_SpringStiffness
// il2cpp: float UI_BasePopup__get_SpringStiffness (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x5cb5e50

float UI_BasePopup__get_SpringStiffness(UI_BasePopup_o *__this,MethodInfo *method)

{
  return 0.1;
}


// UI.BasePopup$$get_AnimationTime
// il2cpp: float UI_BasePopup__get_AnimationTime (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x5cb5e60

float UI_BasePopup__get_AnimationTime(UI_BasePopup_o *__this,MethodInfo *method)

{
  return 0.1;
}


// UI.BasePopup$$get_ShowOnTop
// il2cpp: bool UI_BasePopup__get_ShowOnTop (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x5cb5e70

bool UI_BasePopup__get_ShowOnTop(UI_BasePopup_o *__this,MethodInfo *method)

{
  return true;
}


// UI.BasePopup$$get_UseSound
// il2cpp: bool UI_BasePopup__get_UseSound (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x5cb5e80

bool UI_BasePopup__get_UseSound(UI_BasePopup_o *__this,MethodInfo *method)

{
  return false;
}


// UI.BasePopup$$get_PopupAnimationType
// il2cpp: int32_t UI_BasePopup__get_PopupAnimationType (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x5cb5e90

int32_t UI_BasePopup__get_PopupAnimationType(UI_BasePopup_o *__this,MethodInfo *method)

{
  return 2;
}


// UI.BasePopup$$get_EscapeBehavior
// il2cpp: int32_t UI_BasePopup__get_EscapeBehavior (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x5cb5ea0

int32_t UI_BasePopup__get_EscapeBehavior(UI_BasePopup_o *__this,MethodInfo *method)

{
  return 0;
}


// UI.BasePopup$$get_PlayEscapeSound
// il2cpp: bool UI_BasePopup__get_PlayEscapeSound (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x5cb5eb0

bool UI_BasePopup__get_PlayEscapeSound(UI_BasePopup_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = (*(__this->klass->vtable)._53_get_UseSound.methodPtr)
                    (__this,(__this->klass->vtable)._53_get_UseSound.method);
  return !bVar1;
}


// UI.BasePopup$$DismissFromEscape
// il2cpp: bool UI_BasePopup__DismissFromEscape (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x5cb5ed0

bool UI_BasePopup__DismissFromEscape(UI_BasePopup_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  
  iVar1 = (*(__this->klass->vtable)._55_get_EscapeBehavior.methodPtr)
                    (__this,(__this->klass->vtable)._55_get_EscapeBehavior.method);
  if (iVar1 == 0) {
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  }
  iVar1 = (*(__this->klass->vtable)._55_get_EscapeBehavior.methodPtr)
                    (__this,(__this->klass->vtable)._55_get_EscapeBehavior.method);
  return iVar1 != 3;
}


// UI.BasePopup$$Show
// il2cpp: void UI_BasePopup__Show (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x5cb5f20

void UI_BasePopup__Show(UI_BasePopup_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UI_BasePopup__TweenIn_d__36_c **ppUVar3;
  Il2CppObject *__this_02;
  
  if (Il2CppMethodInitialized_07547aca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_07547aca = '\x01';
  }
  if ((__this->fields).IsActive != false) {
    return;
  }
  (__this->fields).IsActive = true;
  bVar1 = (*(__this->klass->vtable)._53_get_UseSound.methodPtr)
                    (__this,(__this->klass->vtable)._53_get_UseSound.method);
  if (bVar1) {
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    UI_UIManager__PlaySound(0,(MethodInfo *)0x0);
  }
  __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
label_05cb60f0:
    ThrowNullReferenceException();
  }
  UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
  bVar1 = (*(__this->klass->vtable)._52_get_ShowOnTop.methodPtr)
                    (__this,(__this->klass->vtable)._52_get_ShowOnTop.method);
  if (bVar1) {
    __this_01 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_01 == (UnityEngine_Transform_o *)0x0) goto label_05cb60f0;
    UnityEngine_Transform__SetAsLastSibling(__this_01,(MethodInfo *)0x0);
  }
  UnityEngine_MonoBehaviour__StopAllCoroutines((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  iVar2 = (*(__this->klass->vtable)._54_get_PopupAnimationType.methodPtr)
                    (__this,(__this->klass->vtable)._54_get_PopupAnimationType.method);
  if (iVar2 == 2) {
    if (Il2CppMethodInitialized_07547acf == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_BasePopup_TweenIn_d__36);
      Il2CppMethodInitialized_07547acf = '\x01';
    }
    ppUVar3 = &TypeInfo_UI_BasePopup_TweenIn_d__36;
  }
  else {
    iVar2 = (*(__this->klass->vtable)._54_get_PopupAnimationType.methodPtr)
                      (__this,(__this->klass->vtable)._54_get_PopupAnimationType.method);
    if (iVar2 == 1) {
      if (Il2CppMethodInitialized_07547ad4 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_BasePopup_FadeIn_d__44);
        Il2CppMethodInitialized_07547ad4 = '\x01';
      }
      ppUVar3 = (UI_BasePopup__TweenIn_d__36_c **)&TypeInfo_UI_BasePopup_FadeIn_d__44;
    }
    else {
      iVar2 = (*(__this->klass->vtable)._54_get_PopupAnimationType.methodPtr)
                        (__this,(__this->klass->vtable)._54_get_PopupAnimationType.method);
      if (iVar2 != 3) {
        return;
      }
      if (Il2CppMethodInitialized_07547ad2 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_BasePopup_KillPopupIn_d__42);
        Il2CppMethodInitialized_07547ad2 = '\x01';
      }
      ppUVar3 = (UI_BasePopup__TweenIn_d__36_c **)&TypeInfo_UI_BasePopup_KillPopupIn_d__42;
    }
  }
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)*ppUVar3);
  System_Object___ctor(__this_02,(MethodInfo *)0x0);
  *(undefined4 *)&__this_02[1].klass = 0;
  __this_02[2].klass = (Il2CppClass *)__this;
  Il2CppCodeGenWriteBarrier(&__this_02[2].klass);
  UnityEngine_MonoBehaviour__StartCoroutine_691c390
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_02,
             (MethodInfo *)0x0);
  return;
}


// UI.BasePopup$$ShowImmediate
// il2cpp: void UI_BasePopup__ShowImmediate (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x5cb6250

void UI_BasePopup__ShowImmediate(UI_BasePopup_o *__this,MethodInfo *method)

{
  UI_BasePopup_c *pUVar1;
  bool bVar2;
  int32_t iVar3;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_CanvasGroup_o *__this_01;
  MethodInfo *method_00;
  float fVar5;
  
  if (Il2CppMethodInitialized_07547acb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_07547acb = '\x01';
  }
  if ((__this->fields).IsActive != false) {
    return;
  }
  (__this->fields).IsActive = true;
  bVar2 = (*(__this->klass->vtable)._53_get_UseSound.methodPtr)
                    (__this,(__this->klass->vtable)._53_get_UseSound.method);
  if (bVar2) {
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    UI_UIManager__PlaySound(0,(MethodInfo *)0x0);
  }
  __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
    bVar2 = (*(__this->klass->vtable)._52_get_ShowOnTop.methodPtr)
                      (__this,(__this->klass->vtable)._52_get_ShowOnTop.method);
    if (bVar2) {
      pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_05cb63e3;
      UnityEngine_Transform__SetAsLastSibling(pUVar4,(MethodInfo *)0x0);
    }
    UnityEngine_MonoBehaviour__StopAllCoroutines((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
    iVar3 = (*(__this->klass->vtable)._54_get_PopupAnimationType.methodPtr)
                      (__this,(__this->klass->vtable)._54_get_PopupAnimationType.method);
    pUVar1 = __this->klass;
    if (iVar3 == 2) {
      method_00 = (pUVar1->vtable)._46_get_MaxTweenScale.method;
      fVar5 = (*(pUVar1->vtable)._46_get_MaxTweenScale.methodPtr)(__this,method_00);
      UI_BasePopup__SetTransformScale(__this,fVar5,method_00);
      return;
    }
    iVar3 = (*(pUVar1->vtable)._54_get_PopupAnimationType.methodPtr)
                      (__this,(pUVar1->vtable)._54_get_PopupAnimationType.method);
    if (iVar3 != 1) {
      return;
    }
    fVar5 = (*(__this->klass->vtable)._48_get_MaxFadeAlpha.methodPtr)
                      (__this,(__this->klass->vtable)._48_get_MaxFadeAlpha.method);
    if (Il2CppMethodInitialized_07547ad7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_CanvasGroup);
      Il2CppMethodInitialized_07547ad7 = '\x01';
    }
    pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if ((pUVar4 != (UnityEngine_Transform_o *)0x0) &&
       (__this_01 = UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)pUVar4,
                               (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_CanvasGroup
                              ), __this_01 != (UnityEngine_CanvasGroup_o *)0x0)) {
      UnityEngine_CanvasGroup__set_alpha(__this_01,fVar5,(MethodInfo *)0x0);
      return;
    }
  }
label_05cb63e3:
  ThrowNullReferenceException();
}


// UI.BasePopup$$HideAllPopups
// il2cpp: void UI_BasePopup__HideAllPopups (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x5cb66f0
// eh: try 0x5cb6783..0x5cb67ca -> pad 0x5cb67d3 (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5cb67eb..0x5cb67f0 -> pad 0x5cb680f cleanup
// eh: try 0x5cb6812..0x5cb681c -> pad 0x5cb6824 catch (...) [compiler noexcept guard]
// asm: 26 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cb677d: nop dword ptr [rax]
// asm:   0x5cb67cf: jmp 0x5cb67d3
// asm:   0x5cb67d1: jmp 0x5cb67d3
// asm:   0x5cb67d3: mov rbx, rax
// asm:   0x5cb67d6: cmp edx, 1
// asm:   0x5cb67d9: jne 0x5cb6812
// asm:   0x5cb67db: mov rdi, rbx
// asm:   0x5cb67de: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5cb67e3: mov rbx, qword ptr [rax]
// asm:   0x5cb67e6: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5cb67eb: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5cb67f0: lea rax, [rip + 0x15d6f69]  ; MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_Dispose
// asm:   0x5cb67f7: mov rsi, qword ptr [rax]
// asm:   0x5cb67fa: mov rdi, rsp
// asm:   0x5cb67fd: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5cb6802: test rbx, rbx
// asm:   0x5cb6805: je 0x5cb67bd
// asm:   0x5cb6807: mov rdi, rbx
// asm:   0x5cb680a: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5cb680f: mov rbx, rax
// asm:   0x5cb6812: lea rdi, [rsp + 0x18]
// asm:   0x5cb6817: call 0x2fdb160  ; il2cpp_runtime_helper_02fdb160()
// asm:   0x5cb681c: mov rdi, rbx
// asm:   0x5cb681f: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5cb6824: mov rdi, rax
// asm:   0x5cb6827: call 0x2ab61e0  ; __clang_call_terminate()

void UI_BasePopup__HideAllPopups(UI_BasePopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_BasePopup__o *__this_00;
  bool bVar1;
  System_Collections_Generic_List_Enumerator_T__o SStack_38;
  undefined8 uStack_20;
  undefined1 *puStack_18;
  
  if (Il2CppMethodInitialized_07547acc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BasePopup_GetEnumerator);
    Il2CppMethodInitialized_07547acc = '\x01';
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
    (*(SStack_38.fields._current)->klass->vtable[0x3a].methodPtr)
              (SStack_38.fields._current,(SStack_38.fields._current)->klass->vtable[0x3a].method);
  }
  ThrowNullReferenceException();
}


// UI.BasePopup$$Hide
// il2cpp: void UI_BasePopup__Hide (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x5cb6830

void UI_BasePopup__Hide(UI_BasePopup_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  UI_BasePopup__TweenOut_d__37_c **ppUVar3;
  Il2CppObject *__this_00;
  
  if (Il2CppMethodInitialized_07547acd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_07547acd = '\x01';
  }
  if ((__this->fields).IsActive == false) {
    return;
  }
  (__this->fields).IsActive = false;
  UI_BasePopup__HideTooltips(__this,method);
  bVar1 = (*(__this->klass->vtable)._53_get_UseSound.methodPtr)
                    (__this,(__this->klass->vtable)._53_get_UseSound.method);
  if (bVar1) {
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    UI_UIManager__PlaySound(1,(MethodInfo *)0x0);
  }
  (*(__this->klass->vtable)._26_HideAllPopups.methodPtr)
            (__this,(__this->klass->vtable)._26_HideAllPopups.method);
  UnityEngine_MonoBehaviour__StopAllCoroutines((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  iVar2 = (*(__this->klass->vtable)._54_get_PopupAnimationType.methodPtr)
                    (__this,(__this->klass->vtable)._54_get_PopupAnimationType.method);
  if (iVar2 == 2) {
    if (Il2CppMethodInitialized_07547ad0 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_BasePopup_TweenOut_d__37);
      Il2CppMethodInitialized_07547ad0 = '\x01';
    }
    ppUVar3 = &TypeInfo_UI_BasePopup_TweenOut_d__37;
  }
  else {
    iVar2 = (*(__this->klass->vtable)._54_get_PopupAnimationType.methodPtr)
                      (__this,(__this->klass->vtable)._54_get_PopupAnimationType.method);
    if (iVar2 == 1) {
      if (Il2CppMethodInitialized_07547ad5 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_BasePopup_FadeOut_d__45);
        Il2CppMethodInitialized_07547ad5 = '\x01';
      }
      ppUVar3 = (UI_BasePopup__TweenOut_d__37_c **)&TypeInfo_UI_BasePopup_FadeOut_d__45;
    }
    else {
      iVar2 = (*(__this->klass->vtable)._54_get_PopupAnimationType.methodPtr)
                        (__this,(__this->klass->vtable)._54_get_PopupAnimationType.method);
      if (iVar2 != 3) {
        iVar2 = (*(__this->klass->vtable)._54_get_PopupAnimationType.methodPtr)
                          (__this,(__this->klass->vtable)._54_get_PopupAnimationType.method);
        if (iVar2 == 0) {
          (*(__this->klass->vtable)._60_FinishHide.methodPtr)
                    (__this,(__this->klass->vtable)._60_FinishHide.method);
          return;
        }
        return;
      }
      if (Il2CppMethodInitialized_07547ad3 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_BasePopup_KillPopupOut_d__43);
        Il2CppMethodInitialized_07547ad3 = '\x01';
      }
      ppUVar3 = (UI_BasePopup__TweenOut_d__37_c **)&TypeInfo_UI_BasePopup_KillPopupOut_d__43;
    }
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)*ppUVar3);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  Il2CppCodeGenWriteBarrier(&__this_00[2].klass);
  UnityEngine_MonoBehaviour__StartCoroutine_691c390
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
             (MethodInfo *)0x0);
  return;
}


// UI.BasePopup$$HideImmediate
// il2cpp: void UI_BasePopup__HideImmediate (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x5cb6c10

void UI_BasePopup__HideImmediate(UI_BasePopup_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *method_00;
  
  (__this->fields).IsActive = false;
  __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
  if (bVar1) {
    UI_BasePopup__HideTooltips(__this,method_00);
    (*(__this->klass->vtable)._26_HideAllPopups.methodPtr)
              (__this,(__this->klass->vtable)._26_HideAllPopups.method);
    UnityEngine_MonoBehaviour__StopAllCoroutines((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
    (*(__this->klass->vtable)._60_FinishHide.methodPtr)(__this,(__this->klass->vtable)._60_FinishHide.method);
    return;
  }
  return;
}


// UI.BasePopup$$OnDisable
// il2cpp: void UI_BasePopup__OnDisable (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x5cb6c80

void UI_BasePopup__OnDisable(UI_BasePopup_o *__this,MethodInfo *method)

{
  (__this->fields).IsActive = false;
  UI_BasePopup__HideTooltips(__this,method);
  return;
}


// UI.BasePopup$$HideTooltips
// il2cpp: void UI_BasePopup__HideTooltips (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x5cb6a00

void UI_BasePopup__HideTooltips(UI_BasePopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Transform_o *pUVar2;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547ace == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_TooltipPopup);
    Il2CppMethodInitialized_07547ace = '\x01';
  }
  if (__this != (UI_BasePopup_o *)0x0) {
    bVar1 = (TypeInfo_UI_TooltipPopup->_2).typeHierarchyDepth;
    if ((bVar1 <= (__this->klass->_2).typeHierarchyDepth) &&
       ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_UI_TooltipPopup)) {
      return;
    }
  }
  method_00 = (MethodInfo *)0x0;
  pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((TypeInfo_UI_TooltipPopup->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_TooltipPopup);
  }
  UI_TooltipPopup__HideWithin(pUVar2,method_00);
  pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger);
  }
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__HideWithin(pUVar2,(MethodInfo *)0x0);
  return;
}


// UI.BasePopup$$FinishHide
// il2cpp: void UI_BasePopup__FinishHide (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x5cb6e50

void UI_BasePopup__FinishHide(UI_BasePopup_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  
  __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
  return;
}


// UI.BasePopup$$TweenIn
// il2cpp: System_Collections_IEnumerator_o* UI_BasePopup__TweenIn (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x5cb6100

System_Collections_IEnumerator_o * UI_BasePopup__TweenIn(UI_BasePopup_o *__this,MethodInfo *method)

{
  UI_BasePopup__TweenIn_d__36_o *__this_00;
  
  if (Il2CppMethodInitialized_07547acf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_BasePopup_TweenIn_d__36);
    Il2CppMethodInitialized_07547acf = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_BasePopup_TweenIn_d__36);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.BasePopup$$TweenOut
// il2cpp: System_Collections_IEnumerator_o* UI_BasePopup__TweenOut (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x5cb6ac0

System_Collections_IEnumerator_o * UI_BasePopup__TweenOut(UI_BasePopup_o *__this,MethodInfo *method)

{
  UI_BasePopup__TweenOut_d__37_o *__this_00;
  
  if (Il2CppMethodInitialized_07547ad0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_BasePopup_TweenOut_d__37);
    Il2CppMethodInitialized_07547ad0 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_BasePopup_TweenOut_d__37);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.BasePopup$$EvaluateKeyframes
// il2cpp: float UI_BasePopup__EvaluateKeyframes (UI_BasePopup_o* __this, float timePercentage, System_Collections_Generic_List_BasePopup_AnimationKeyframe__o* keyframes, const MethodInfo* method);
// 0x5cb6eb0
// eh: try 0x5cb6faa..0x5cb6fb2 -> pad 0x5cb706d catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5cb7085..0x5cb708a -> pad 0x5cb70af cleanup
// eh: try 0x5cb70b2..0x5cb70bc -> pad 0x5cb70c4 catch (...) [compiler noexcept guard]
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cb7029: shufps xmm0, xmm0, 0x55
// asm:   0x5cb702d: jmp 0x5cb7063
// asm:   0x5cb706d: mov rbx, rax
// asm:   0x5cb7070: cmp edx, 1
// asm:   0x5cb7073: jne 0x5cb70b2
// asm:   0x5cb7075: mov rdi, rbx
// asm:   0x5cb7078: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5cb707d: mov rbx, qword ptr [rax]
// asm:   0x5cb7080: mov qword ptr [rsp + 0x50], rbx
// asm:   0x5cb7085: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5cb708a: lea rax, [rip + 0x15d7fbf]  ; MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_AnimationKeyframe_Dispose
// asm:   0x5cb7091: mov rsi, qword ptr [rax]
// asm:   0x5cb7094: lea rdi, [rsp + 0x30]
// asm:   0x5cb7099: call 0x4d7a800  ; System_Collections_Generic_List_Enumerator_BasePopup_AnimationKeyframe___Dispose()
// asm:   0x5cb709e: test rbx, rbx
// asm:   0x5cb70a1: je 0x5cb700f
// asm:   0x5cb70a7: mov rdi, rbx
// asm:   0x5cb70aa: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5cb70af: mov rbx, rax
// asm:   0x5cb70b2: lea rdi, [rsp + 0x50]
// asm:   0x5cb70b7: call 0x2fdb190  ; il2cpp_runtime_helper_02fdb190()
// asm:   0x5cb70bc: mov rdi, rbx
// asm:   0x5cb70bf: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5cb70c4: mov rdi, rax
// asm:   0x5cb70c7: call 0x2ab61e0  ; __clang_call_terminate()

float UI_BasePopup__EvaluateKeyframes
                (UI_BasePopup_o *__this,float timePercentage,
                System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *keyframes,MethodInfo *method)

{
  UI_BasePopup_AnimationKeyframe_o UVar1;
  bool bVar2;
  float fVar3;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float local_78;
  float fStack_74;
  undefined1 local_68 [32];
  System_Collections_Generic_List_Enumerator_T__o local_48;
  undefined8 local_28;
  System_Collections_Generic_List_Enumerator_T__o *local_20;
  
  if (Il2CppMethodInitialized_07547ad1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_AnimationKeyframe_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_AnimationKeyframe_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_AnimationKeyframe_get_Current)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BasePopup_AnimationKeyframe_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BasePopup_AnimationKeyframe_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BasePopup_AnimationKeyframe_get_Item);
    Il2CppMethodInitialized_07547ad1 = '\x01';
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if ((keyframes == (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)0x0) ||
     ((keyframes->fields)._size == 0)) {
    fVar3 = (*(__this->klass->vtable)._45_get_MinTweenScale.methodPtr)
                      (__this,(__this->klass->vtable)._45_get_MinTweenScale.method);
    return fVar3;
  }
  UVar1 = System_Collections_Generic_List_BasePopup_AnimationKeyframe___get_Item
                    (keyframes,0,
                     (MethodInfo_3A635D0 *)
                     MethodInfo_System_Collections_Generic_List_BasePopup_AnimationKeyframe_get_Item);
  local_68._8_4_ = extraout_XMM0_Dc;
  local_68._0_4_ = UVar1.fields.time;
  local_68._4_4_ = UVar1.fields.scale;
  local_68._12_4_ = extraout_XMM0_Dd;
  UVar1 = System_Collections_Generic_List_BasePopup_AnimationKeyframe___get_Item
                    (keyframes,(keyframes->fields)._size + -1,
                     (MethodInfo_3A635D0 *)
                     MethodInfo_System_Collections_Generic_List_BasePopup_AnimationKeyframe_get_Item);
  System_Collections_Generic_List_BasePopup_AnimationKeyframe___GetEnumerator
            (&local_48,keyframes,
             (MethodInfo_3A646F0 *)
             MethodInfo_System_Collections_Generic_List_BasePopup_AnimationKeyframe_GetEnumerator);
  local_28 = 0;
  local_20 = &local_48;
  do {
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator_BasePopup_AnimationKeyframe___MoveNext
                        (&local_48,
                         (MethodInfo_4C7A810 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_AnimationKeyframe_MoveNext
                        );
      if (!bVar2) {
        local_78 = UVar1.fields.time;
        fStack_74 = UVar1.fields.scale;
        goto label_05cb6ff7;
      }
      local_78 = SUB84(local_48.fields._current,0);
      fStack_74 = (float)((ulong)local_48.fields._current >> 0x20);
      if ((timePercentage <= local_78) || (local_78 <= (float)local_68._0_4_)) break;
      local_68._8_8_ = 0;
      local_68._0_8_ = local_48.fields._current;
    }
  } while (local_78 < timePercentage);
label_05cb6ff7:
  System_Collections_Generic_List_Enumerator_BasePopup_AnimationKeyframe___Dispose
            (&local_48,
             (MethodInfo_4C7A800 *)
             MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_AnimationKeyframe_Dispose);
  local_78 = local_78 - (float)local_68._0_4_;
  if ((local_78 != 0.0) || (NAN(local_78))) {
    local_78 = (timePercentage - (float)local_68._0_4_) / local_78;
    fVar3 = 1.0;
    if (local_78 <= 1.0) {
      fVar3 = local_78;
    }
    local_68._4_4_ =
         (float)local_68._4_4_ +
         (fStack_74 - (float)local_68._4_4_) * (float)(-(uint)(0.0 <= local_78) & (uint)fVar3);
  }
  return (float)local_68._4_4_;
}


// UI.BasePopup$$KillPopupIn
// il2cpp: System_Collections_IEnumerator_o* UI_BasePopup__KillPopupIn (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x5cb61e0

System_Collections_IEnumerator_o * UI_BasePopup__KillPopupIn(UI_BasePopup_o *__this,MethodInfo *method)

{
  UI_BasePopup__KillPopupIn_d__42_o *__this_00;
  
  if (Il2CppMethodInitialized_07547ad2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_BasePopup_KillPopupIn_d__42);
    Il2CppMethodInitialized_07547ad2 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_BasePopup_KillPopupIn_d__42);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.BasePopup$$KillPopupOut
// il2cpp: System_Collections_IEnumerator_o* UI_BasePopup__KillPopupOut (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x5cb6ba0

System_Collections_IEnumerator_o * UI_BasePopup__KillPopupOut(UI_BasePopup_o *__this,MethodInfo *method)

{
  UI_BasePopup__KillPopupOut_d__43_o *__this_00;
  
  if (Il2CppMethodInitialized_07547ad3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_BasePopup_KillPopupOut_d__43);
    Il2CppMethodInitialized_07547ad3 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_BasePopup_KillPopupOut_d__43);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.BasePopup$$FadeIn
// il2cpp: System_Collections_IEnumerator_o* UI_BasePopup__FadeIn (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x5cb6170

System_Collections_IEnumerator_o * UI_BasePopup__FadeIn(UI_BasePopup_o *__this,MethodInfo *method)

{
  UI_BasePopup__FadeIn_d__44_o *__this_00;
  
  if (Il2CppMethodInitialized_07547ad4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_BasePopup_FadeIn_d__44);
    Il2CppMethodInitialized_07547ad4 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_BasePopup_FadeIn_d__44);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.BasePopup$$FadeOut
// il2cpp: System_Collections_IEnumerator_o* UI_BasePopup__FadeOut (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x5cb6b30

System_Collections_IEnumerator_o * UI_BasePopup__FadeOut(UI_BasePopup_o *__this,MethodInfo *method)

{
  UI_BasePopup__FadeOut_d__45_o *__this_00;
  
  if (Il2CppMethodInitialized_07547ad5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_BasePopup_FadeOut_d__45);
    Il2CppMethodInitialized_07547ad5 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_BasePopup_FadeOut_d__45);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.BasePopup$$SetTransformScale
// il2cpp: void UI_BasePopup__SetTransformScale (UI_BasePopup_o* __this, float scale, const MethodInfo* method);
// 0x5cb63f0
// eh: try 0x5cb657d..0x5cb6613 -> pad 0x5cb6620 (+6 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5cb663c..0x5cb6641 -> pad 0x5cb6662 cleanup
// eh: try 0x5cb6665..0x5cb666f -> pad 0x5cb6677 catch (...) [compiler noexcept guard]
// asm: 32 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cb6556: movss dword ptr [rsp + 4], xmm0
// asm:   0x5cb655c: lea rbp, [rip + 0x15d874d]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_Transform_MoveNext
// asm:   0x5cb6563: jmp 0x5cb6587
// asm:   0x5cb6618: jmp 0x5cb6624
// asm:   0x5cb661a: jmp 0x5cb6624
// asm:   0x5cb661c: jmp 0x5cb6624
// asm:   0x5cb661e: jmp 0x5cb6624
// asm:   0x5cb6620: jmp 0x5cb6624
// asm:   0x5cb6622: jmp 0x5cb6624
// asm:   0x5cb6624: mov rbx, rax
// asm:   0x5cb6627: cmp edx, 1
// asm:   0x5cb662a: jne 0x5cb6665
// asm:   0x5cb662c: mov rdi, rbx
// asm:   0x5cb662f: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5cb6634: mov rbx, qword ptr [rax]
// asm:   0x5cb6637: mov qword ptr [rsp + 8], rbx
// asm:   0x5cb663c: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5cb6641: lea rax, [rip + 0x15d8660]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_Transform_Dispose
// asm:   0x5cb6648: mov rsi, qword ptr [rax]
// asm:   0x5cb664b: lea rdi, [rsp + 0x20]
// asm:   0x5cb6650: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x5cb6655: test rbx, rbx
// asm:   0x5cb6658: je 0x5cb65fa
// asm:   0x5cb665a: mov rdi, rbx
// asm:   0x5cb665d: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5cb6662: mov rbx, rax
// asm:   0x5cb6665: lea rdi, [rsp + 8]
// asm:   0x5cb666a: call 0x2fdb1c0  ; il2cpp_runtime_helper_02fdb1c0()
// asm:   0x5cb666f: mov rdi, rbx
// asm:   0x5cb6672: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5cb6677: mov rdi, rax
// asm:   0x5cb667a: call 0x2ab61e0  ; __clang_call_terminate()

void UI_BasePopup__SetTransformScale(UI_BasePopup_o *__this,float scale,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  Il2CppObject *__this_01;
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  UI_IgnoreScaler_o *pUVar3;
  float fVar4;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  undefined1 local_60 [16];
  UnityEngine_Transform_o *local_50;
  System_Collections_Generic_HashSet_Enumerator_T__o local_48;
  
  if (Il2CppMethodInitialized_07547ad6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_IgnoreScaler);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Transform_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Transform_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Transform_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Transform_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547ad6 = '\x01';
  }
  pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
    pUVar3 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)pUVar2,
                        (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_IgnoreScaler);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (bVar1) {
      if ((pUVar3 == (UI_IgnoreScaler_o *)0x0) || (pUVar2 == (UnityEngine_Transform_o *)0x0))
      goto label_05cb6613;
      fVar4 = (pUVar3->fields).Scale * scale;
    }
    else {
      fVar4 = scale;
      if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_05cb6613;
    }
    value.fields.y = fVar4;
    value.fields.x = fVar4;
    value.fields.z = fVar4;
    UnityEngine_Transform__set_localScale(pUVar2,value,(MethodInfo *)0x0);
    __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._staticTransforms;
    if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_60,__this_00,
                 (MethodInfo_4FB3DA0 *)MethodInfo_System_Collections_Generic_HashSet_Transform_GetEnumerator);
      local_48.fields._current = (Il2CppObject *)local_50;
      local_48.fields._set = (System_Collections_Generic_HashSet_T__o *)local_60._0_8_;
      local_48.fields._index = local_60._8_4_;
      local_48.fields._version = local_60._12_4_;
      local_60._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
      local_60._8_8_ = &local_48;
      if (scale <= 0.1) {
        scale = 0.1;
      }
      while( true ) {
        bVar1 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                          (&local_48,
                           (MethodInfo_4C456D0 *)
                           MethodInfo_System_Collections_Generic_HashSet_Enumerator_Transform_MoveNext);
        __this_01 = local_48.fields._current;
        if (!bVar1) {
          System_Collections_Generic_HashSet_Enumerator_object___Dispose
                    (&local_48,
                     (MethodInfo_4C456C0 *)
                     MethodInfo_System_Collections_Generic_HashSet_Enumerator_Transform_Dispose);
          return;
        }
        if ((UnityEngine_Transform_o *)local_48.fields._current == (UnityEngine_Transform_o *)0x0) break;
        pUVar3 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)local_48.fields._current,
                            (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_IgnoreScaler);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        fVar4 = 1.0;
        if (bVar1) {
          if (pUVar3 == (UI_IgnoreScaler_o *)0x0) {
            ThrowNullReferenceException();
          }
          fVar4 = (pUVar3->fields).Scale;
        }
        value_00.fields.z = fVar4 / scale;
        value_00.fields.y = value_00.fields.z;
        value_00.fields.x = value_00.fields.z;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)__this_01,value_00,(MethodInfo *)0x0)
        ;
      }
      ThrowNullReferenceException();
    }
  }
label_05cb6613:
  ThrowNullReferenceException();
}


// UI.BasePopup$$SetTransformAlpha
// il2cpp: void UI_BasePopup__SetTransformAlpha (UI_BasePopup_o* __this, float alpha, const MethodInfo* method);
// 0x5cb6680

void UI_BasePopup__SetTransformAlpha(UI_BasePopup_o *__this,float alpha,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_CanvasGroup_o *__this_01;
  
  if (Il2CppMethodInitialized_07547ad7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_CanvasGroup);
    Il2CppMethodInitialized_07547ad7 = '\x01';
  }
  __this_00 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    __this_01 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)__this_00,
                           (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_CanvasGroup);
    if (__this_01 != (UnityEngine_CanvasGroup_o *)0x0) {
      UnityEngine_CanvasGroup__set_alpha(__this_01,alpha,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.BasePopup$$GetVectorFromScale
// il2cpp: UnityEngine_Vector3_o UI_BasePopup__GetVectorFromScale (UI_BasePopup_o* __this, float scale, const MethodInfo* method);
// 0x5cb7150

UnityEngine_Vector3_o UI_BasePopup__GetVectorFromScale(UI_BasePopup_o *__this,float scale,MethodInfo *method)

{
  UnityEngine_Vector3_o UVar1;
  
  UVar1.fields.y = scale;
  UVar1.fields.x = scale;
  UVar1.fields.z = scale;
  return (UnityEngine_Vector3_o)UVar1.fields;
}


// UI.BasePopup$$GetAnimationSpeed
// il2cpp: float UI_BasePopup__GetAnimationSpeed (UI_BasePopup_o* __this, float min, float max, const MethodInfo* method);
// 0x5cb7160

float UI_BasePopup__GetAnimationSpeed(UI_BasePopup_o *__this,float min,float max,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = (*(__this->klass->vtable)._51_get_AnimationTime.methodPtr)
                    (__this,(__this->klass->vtable)._51_get_AnimationTime.method);
  return (max - min) / fVar1;
}


// UI.BasePopup$$.ctor
// il2cpp: void UI_BasePopup___ctor (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x5cb7190

void UI_BasePopup___ctor(UI_TooltipPopup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UI_BasePopup_AnimationKeyframe_array *pUVar3;
  System_Collections_Generic_HashSet_Transform__o *__this_00;
  System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *pSVar4;
  MethodInfo *pMVar5;
  
  if (Il2CppMethodInitialized_07547ad8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Transform_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_Transform);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BasePopup_AnimationKeyframe_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BasePopup_AnimationKeyframe_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_BasePopup_AnimationKeyframe);
    Il2CppMethodInitialized_07547ad8 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_Transform);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_00,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_Transform_ctor);
  (__this->fields)._staticTransforms = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._staticTransforms);
  pSVar4 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_BasePopup_AnimationKeyframe);
  System_Collections_Generic_List_BasePopup_AnimationKeyframe____ctor
            (pSVar4,(MethodInfo_3A62FC0 *)
                    MethodInfo_System_Collections_Generic_List_BasePopup_AnimationKeyframe_ctor);
  pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_AnimationKeyframe_Add;
  if (pSVar4 != (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)0x0) {
    piVar1 = &(pSVar4->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar3 = (pSVar4->fields)._items;
    if (pUVar3 != (UI_BasePopup_AnimationKeyframe_array *)0x0) {
      uVar2 = (pSVar4->fields)._size;
      if (uVar2 < (uint)pUVar3->max_length) {
        (pSVar4->fields)._size = uVar2 + 1;
        pUVar3->m_Items[(int)uVar2].fields.time = 0.0;
        pUVar3->m_Items[(int)uVar2].fields.scale = 0.0;
      }
      else {
        System_Collections_Generic_List_BasePopup_AnimationKeyframe___AddWithResize
                  (pSVar4,(UI_BasePopup_AnimationKeyframe_o)0x0,
                   (MethodInfo_3A638E0 *)pMVar5->klass->rgctx_data[0xe].method);
      }
      pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_AnimationKeyframe_Add;
      piVar1 = &(pSVar4->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar3 = (pSVar4->fields)._items;
      if (pUVar3 != (UI_BasePopup_AnimationKeyframe_array *)0x0) {
        uVar2 = (pSVar4->fields)._size;
        if (uVar2 < (uint)pUVar3->max_length) {
          (pSVar4->fields)._size = uVar2 + 1;
          pUVar3->m_Items[(int)uVar2].fields.time = 0.15;
          pUVar3->m_Items[(int)uVar2].fields.scale = 1.3;
        }
        else {
          System_Collections_Generic_List_BasePopup_AnimationKeyframe___AddWithResize
                    (pSVar4,(UI_BasePopup_AnimationKeyframe_o)0x3fa666663e19999a,
                     (MethodInfo_3A638E0 *)pMVar5->klass->rgctx_data[0xe].method);
        }
        pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_AnimationKeyframe_Add;
        piVar1 = &(pSVar4->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar3 = (pSVar4->fields)._items;
        if (pUVar3 != (UI_BasePopup_AnimationKeyframe_array *)0x0) {
          uVar2 = (pSVar4->fields)._size;
          if (uVar2 < (uint)pUVar3->max_length) {
            (pSVar4->fields)._size = uVar2 + 1;
            pUVar3->m_Items[(int)uVar2].fields.time = 0.3;
            pUVar3->m_Items[(int)uVar2].fields.scale = 0.8;
          }
          else {
            System_Collections_Generic_List_BasePopup_AnimationKeyframe___AddWithResize
                      (pSVar4,(UI_BasePopup_AnimationKeyframe_o)0x3f4ccccd3e99999a,
                       (MethodInfo_3A638E0 *)pMVar5->klass->rgctx_data[0xe].method);
          }
          pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_AnimationKeyframe_Add;
          piVar1 = &(pSVar4->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar3 = (pSVar4->fields)._items;
          if (pUVar3 != (UI_BasePopup_AnimationKeyframe_array *)0x0) {
            uVar2 = (pSVar4->fields)._size;
            if (uVar2 < (uint)pUVar3->max_length) {
              (pSVar4->fields)._size = uVar2 + 1;
              pUVar3->m_Items[(int)uVar2].fields.time = 0.45;
              pUVar3->m_Items[(int)uVar2].fields.scale = 1.1;
            }
            else {
              System_Collections_Generic_List_BasePopup_AnimationKeyframe___AddWithResize
                        (pSVar4,(UI_BasePopup_AnimationKeyframe_o)0x3f8ccccd3ee66666,
                         (MethodInfo_3A638E0 *)pMVar5->klass->rgctx_data[0xe].method);
            }
            pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_AnimationKeyframe_Add;
            piVar1 = &(pSVar4->fields)._version;
            *piVar1 = *piVar1 + 1;
            pUVar3 = (pSVar4->fields)._items;
            if (pUVar3 != (UI_BasePopup_AnimationKeyframe_array *)0x0) {
              uVar2 = (pSVar4->fields)._size;
              if (uVar2 < (uint)pUVar3->max_length) {
                (pSVar4->fields)._size = uVar2 + 1;
                pUVar3->m_Items[(int)uVar2].fields.time = 0.6;
                pUVar3->m_Items[(int)uVar2].fields.scale = 0.95;
              }
              else {
                System_Collections_Generic_List_BasePopup_AnimationKeyframe___AddWithResize
                          (pSVar4,(UI_BasePopup_AnimationKeyframe_o)0x3f7333333f19999a,
                           (MethodInfo_3A638E0 *)pMVar5->klass->rgctx_data[0xe].method);
              }
              pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_AnimationKeyframe_Add;
              piVar1 = &(pSVar4->fields)._version;
              *piVar1 = *piVar1 + 1;
              pUVar3 = (pSVar4->fields)._items;
              if (pUVar3 != (UI_BasePopup_AnimationKeyframe_array *)0x0) {
                uVar2 = (pSVar4->fields)._size;
                if (uVar2 < (uint)pUVar3->max_length) {
                  (pSVar4->fields)._size = uVar2 + 1;
                  pUVar3->m_Items[(int)uVar2].fields.time = 0.75;
                  pUVar3->m_Items[(int)uVar2].fields.scale = 1.05;
                }
                else {
                  System_Collections_Generic_List_BasePopup_AnimationKeyframe___AddWithResize
                            (pSVar4,(UI_BasePopup_AnimationKeyframe_o)0x3f8666663f400000,
                             (MethodInfo_3A638E0 *)pMVar5->klass->rgctx_data[0xe].method);
                }
                pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_AnimationKeyframe_Add;
                piVar1 = &(pSVar4->fields)._version;
                *piVar1 = *piVar1 + 1;
                pUVar3 = (pSVar4->fields)._items;
                if (pUVar3 != (UI_BasePopup_AnimationKeyframe_array *)0x0) {
                  uVar2 = (pSVar4->fields)._size;
                  if (uVar2 < (uint)pUVar3->max_length) {
                    (pSVar4->fields)._size = uVar2 + 1;
                    pUVar3->m_Items[(int)uVar2].fields.time = 1.0;
                    pUVar3->m_Items[(int)uVar2].fields.scale = 1.0;
                  }
                  else {
                    System_Collections_Generic_List_BasePopup_AnimationKeyframe___AddWithResize
                              (pSVar4,(UI_BasePopup_AnimationKeyframe_o)0x3f8000003f800000,
                               (MethodInfo_3A638E0 *)pMVar5->klass->rgctx_data[0xe].method);
                  }
                  (__this->fields).killPopupKeyframesIn = pSVar4;
                  Il2CppCodeGenWriteBarrier(&(__this->fields).killPopupKeyframesIn);
                  pSVar4 = il2cpp_codegen_object_new
                                     ((Il2CppClass *)
                                      TypeInfo_System_Collections_Generic_List_BasePopup_AnimationKeyframe);
                  System_Collections_Generic_List_BasePopup_AnimationKeyframe____ctor
                            (pSVar4,(MethodInfo_3A62FC0 *)
                                    MethodInfo_System_Collections_Generic_List_BasePopup_AnimationKeyframe_ctor
                            );
                  pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_AnimationKeyframe_Add;
                  if (pSVar4 != (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)0x0) {
                    piVar1 = &(pSVar4->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pUVar3 = (pSVar4->fields)._items;
                    if (pUVar3 != (UI_BasePopup_AnimationKeyframe_array *)0x0) {
                      uVar2 = (pSVar4->fields)._size;
                      if (uVar2 < (uint)pUVar3->max_length) {
                        (pSVar4->fields)._size = uVar2 + 1;
                        pUVar3->m_Items[(int)uVar2].fields.time = 0.0;
                        pUVar3->m_Items[(int)uVar2].fields.scale = 0.0;
                      }
                      else {
                        System_Collections_Generic_List_BasePopup_AnimationKeyframe___AddWithResize
                                  (pSVar4,(UI_BasePopup_AnimationKeyframe_o)0x0,
                                   (MethodInfo_3A638E0 *)pMVar5->klass->rgctx_data[0xe].method);
                      }
                      pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_AnimationKeyframe_Add;
                      piVar1 = &(pSVar4->fields)._version;
                      *piVar1 = *piVar1 + 1;
                      pUVar3 = (pSVar4->fields)._items;
                      if (pUVar3 != (UI_BasePopup_AnimationKeyframe_array *)0x0) {
                        uVar2 = (pSVar4->fields)._size;
                        if (uVar2 < (uint)pUVar3->max_length) {
                          (pSVar4->fields)._size = uVar2 + 1;
                          pUVar3->m_Items[(int)uVar2].fields.time = 0.6;
                          pUVar3->m_Items[(int)uVar2].fields.scale = 0.0;
                        }
                        else {
                          System_Collections_Generic_List_BasePopup_AnimationKeyframe___AddWithResize
                                    (pSVar4,(UI_BasePopup_AnimationKeyframe_o)0x3f19999a,
                                     (MethodInfo_3A638E0 *)pMVar5->klass->rgctx_data[0xe].method);
                        }
                        pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_AnimationKeyframe_Add;
                        piVar1 = &(pSVar4->fields)._version;
                        *piVar1 = *piVar1 + 1;
                        pUVar3 = (pSVar4->fields)._items;
                        if (pUVar3 != (UI_BasePopup_AnimationKeyframe_array *)0x0) {
                          uVar2 = (pSVar4->fields)._size;
                          if (uVar2 < (uint)pUVar3->max_length) {
                            (pSVar4->fields)._size = uVar2 + 1;
                            pUVar3->m_Items[(int)uVar2].fields.time = 0.7;
                            pUVar3->m_Items[(int)uVar2].fields.scale = 0.85;
                          }
                          else {
                            System_Collections_Generic_List_BasePopup_AnimationKeyframe___AddWithResize
                                      (pSVar4,(UI_BasePopup_AnimationKeyframe_o)0x3f59999a3f333333,
                                       (MethodInfo_3A638E0 *)pMVar5->klass->rgctx_data[0xe].method);
                          }
                          pMVar5 = MethodInfo_System_Collections_Generic_List_BasePopup_AnimationKeyframe_Add;
                          piVar1 = &(pSVar4->fields)._version;
                          *piVar1 = *piVar1 + 1;
                          pUVar3 = (pSVar4->fields)._items;
                          if (pUVar3 != (UI_BasePopup_AnimationKeyframe_array *)0x0) {
                            uVar2 = (pSVar4->fields)._size;
                            if (uVar2 < (uint)pUVar3->max_length) {
                              (pSVar4->fields)._size = uVar2 + 1;
                              pUVar3->m_Items[(int)uVar2].fields.time = 0.85;
                              pUVar3->m_Items[(int)uVar2].fields.scale = 0.8;
                            }
                            else {
                              System_Collections_Generic_List_BasePopup_AnimationKeyframe___AddWithResize
                                        (pSVar4,(UI_BasePopup_AnimationKeyframe_o)0x3f4ccccd3f59999a,
                                         (MethodInfo_3A638E0 *)pMVar5->klass->rgctx_data[0xe].method);
                            }
                            pMVar5 = 
                            MethodInfo_System_Collections_Generic_List_BasePopup_AnimationKeyframe_Add;
                            piVar1 = &(pSVar4->fields)._version;
                            *piVar1 = *piVar1 + 1;
                            pUVar3 = (pSVar4->fields)._items;
                            if (pUVar3 != (UI_BasePopup_AnimationKeyframe_array *)0x0) {
                              uVar2 = (pSVar4->fields)._size;
                              if (uVar2 < (uint)pUVar3->max_length) {
                                (pSVar4->fields)._size = uVar2 + 1;
                                pUVar3->m_Items[(int)uVar2].fields.time = 1.0;
                                pUVar3->m_Items[(int)uVar2].fields.scale = 1.0;
                              }
                              else {
                                System_Collections_Generic_List_BasePopup_AnimationKeyframe___AddWithResize
                                          (pSVar4,(UI_BasePopup_AnimationKeyframe_o)0x3f8000003f800000,
                                           (MethodInfo_3A638E0 *)pMVar5->klass->rgctx_data[0xe].method);
                              }
                              (__this->fields).killPopupKeyframesOut = pSVar4;
                              Il2CppCodeGenWriteBarrier(&(__this->fields).killPopupKeyframesOut);
                              if (Il2CppMethodInitialized_07547b0b == '\0') {
                                il2cpp_codegen_initialize_runtime_metadata
                                          (&
                                           MethodInfo_System_Collections_Generic_Dictionary_string_Button_ctor
                                          );
                                il2cpp_codegen_initialize_runtime_metadata
                                          (&TypeInfo_System_Collections_Generic_Dictionary_string_Button);
                                Il2CppMethodInitialized_07547b0b = '\x01';
                              }
                              pMVar5 = (MethodInfo *)
                                       il2cpp_codegen_object_new
                                                 ((Il2CppClass *)
                                                  TypeInfo_System_Collections_Generic_Dictionary_string_Button
                                                 );
                              System_Collections_Generic_Dictionary_object__object____ctor
                                        ((System_Collections_Generic_Dictionary_object__object__o *)pMVar5,
                                         (MethodInfo_4AAC8D0 *)
                                         MethodInfo_System_Collections_Generic_Dictionary_string_Button_ctor);
                              (__this->fields)._topButtons =
                                   (System_Collections_Generic_Dictionary_string__Button__o *)pMVar5;
                              Il2CppCodeGenWriteBarrier(&(__this->fields)._topButtons);
                              UI_BasePanel___ctor((UI_SimplePanel_o *)__this,pMVar5);
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
  ThrowNullReferenceException();
}


