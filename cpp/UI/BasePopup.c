// Type: UI.BasePopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/BasePopup.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/BaseMenu/BasePopup.cs  [CHANGED since prior version]
// --------------------------------

// UI.BasePopup.AnimationKeyframe$$.ctor
// il2cpp: void UI_BasePopup_AnimationKeyframe___ctor (UI_BasePopup_AnimationKeyframe_o __this, float time, float scale, const MethodInfo* method);
// 0x401c840

void UI_BasePopup_AnimationKeyframe___ctor
               (UI_BasePopup_AnimationKeyframe_o __this,float time,float scale,MethodInfo *method)

{
  *(float *)&method->methodPointer = __this.fields.time;
  *(float *)((long)&method->methodPointer + 4) = time;
  return;
}


// UI.BasePopup.<FadeIn>d__38$$.ctor
// il2cpp: void UI_BasePopup__FadeIn_d__38___ctor (UI_BasePopup__FadeIn_d__38_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x401c270

void UI_BasePopup_<FadeIn>d__38___ctor
               (UI_BasePopup__FadeIn_d__38_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.BasePopup.<FadeIn>d__38$$System.IDisposable.Dispose
// il2cpp: void UI_BasePopup__FadeIn_d__38__System_IDisposable_Dispose (UI_BasePopup__FadeIn_d__38_o* __this, const MethodInfo* method);
// 0x401c8d0

void UI_BasePopup_<FadeIn>d__38__System_IDisposable_Dispose
               (UI_BasePopup__FadeIn_d__38_o *__this,MethodInfo *method)

{
  return;
}


// UI.BasePopup.<FadeIn>d__38$$MoveNext
// il2cpp: bool UI_BasePopup__FadeIn_d__38__MoveNext (UI_BasePopup__FadeIn_d__38_o* __this, const MethodInfo* method);
// 0x401c8e0

bool_conflict
UI_BasePopup_<FadeIn>d__38__MoveNext(UI_BasePopup__FadeIn_d__38_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_BasePopup_o *__this_00;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_CanvasGroup_o *pUVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  
  iVar1 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if (__this_00 == (UI_BasePopup_o *)0x0) goto LAB_0401cade;
  }
  else {
    if (iVar1 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    if (__this_00 == (UI_BasePopup_o *)0x0) goto LAB_0401cade;
    fVar4 = (float)(*(__this_00->klass->vtable)._47_get_MinFadeAlpha.methodPtr)
                             (__this_00,(__this_00->klass->vtable)._47_get_MinFadeAlpha.method);
    (__this_00->fields)._currentAnimationValue = fVar4;
  }
  fVar4 = (__this_00->fields)._currentAnimationValue;
  fVar5 = (float)(*(__this_00->klass->vtable)._48_get_MaxFadeAlpha.methodPtr)(__this_00);
  if (fVar4 < fVar5) {
    fVar4 = (__this_00->fields)._currentAnimationValue;
    if (DAT_057042cd == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_CanvasGroup_GetComponent_CanvasGroup);
      DAT_057042cd = '\x01';
    }
    pUVar2 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if ((pUVar2 != (UnityEngine_Transform_o *)0x0) &&
       (pUVar3 = (UnityEngine_CanvasGroup_o *)
                 UnityEngine_Component__GetComponent<object>
                           ((UnityEngine_Component_o *)pUVar2,MethodInfo_CanvasGroup_GetComponent_CanvasGroup),
       pUVar3 != (UnityEngine_CanvasGroup_o *)0x0)) {
      UnityEngine_CanvasGroup__set_alpha(pUVar3,fVar4,(MethodInfo *)0x0);
      fVar4 = (__this_00->fields)._currentAnimationValue;
      uVar6 = (*(__this_00->klass->vtable)._47_get_MinFadeAlpha.methodPtr)
                        (__this_00,(__this_00->klass->vtable)._47_get_MinFadeAlpha.method);
      uVar7 = (*(__this_00->klass->vtable)._48_get_MaxFadeAlpha.methodPtr)
                        (__this_00,(__this_00->klass->vtable)._48_get_MaxFadeAlpha.method);
      fVar5 = (float)(*(__this_00->klass->vtable)._58_GetAnimationSpeed.methodPtr)
                               (uVar6,uVar7,__this_00,
                                (__this_00->klass->vtable)._58_GetAnimationSpeed.method);
      fVar8 = UnityEngine_Time__get_unscaledDeltaTime((MethodInfo *)0x0);
      (__this_00->fields)._currentAnimationValue = fVar8 * fVar5 + fVar4;
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      il2cpp_runtime_glue(&(__this->fields).__2__current,0);
      (__this->fields).__1__state = 1;
      return (bool_conflict)CONCAT71((int7)((ulong)__this_00 >> 8),1);
    }
  }
  else {
    fVar4 = (float)(*(__this_00->klass->vtable)._48_get_MaxFadeAlpha.methodPtr)(__this_00);
    if (DAT_057042cd == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_CanvasGroup_GetComponent_CanvasGroup);
      DAT_057042cd = '\x01';
    }
    pUVar2 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if ((pUVar2 != (UnityEngine_Transform_o *)0x0) &&
       (pUVar3 = (UnityEngine_CanvasGroup_o *)
                 UnityEngine_Component__GetComponent<object>
                           ((UnityEngine_Component_o *)pUVar2,MethodInfo_CanvasGroup_GetComponent_CanvasGroup),
       pUVar3 != (UnityEngine_CanvasGroup_o *)0x0)) {
      UnityEngine_CanvasGroup__set_alpha(pUVar3,fVar4,(MethodInfo *)0x0);
      return 0;
    }
  }
LAB_0401cade:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.BasePopup.<FadeIn>d__38$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_BasePopup__FadeIn_d__38__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_BasePopup__FadeIn_d__38_o* __this, const MethodInfo* method);
// 0x401caf0

Il2CppObject *
UI_BasePopup_<FadeIn>d__38__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (UI_BasePopup__FadeIn_d__38_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.BasePopup.<FadeIn>d__38$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_BasePopup__FadeIn_d__38__System_Collections_IEnumerator_Reset (UI_BasePopup__FadeIn_d__38_o* __this, const MethodInfo* method);
// 0x401cb00

void UI_BasePopup_<FadeIn>d__38__System_Collections_IEnumerator_Reset
               (UI_BasePopup__FadeIn_d__38_o *__this,MethodInfo *method)

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


// UI.BasePopup.<FadeIn>d__38$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_BasePopup__FadeIn_d__38__System_Collections_IEnumerator_get_Current (UI_BasePopup__FadeIn_d__38_o* __this, const MethodInfo* method);
// 0x401cb40

Il2CppObject *
UI_BasePopup_<FadeIn>d__38__System_Collections_IEnumerator_get_Current
          (UI_BasePopup__FadeIn_d__38_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.BasePopup.<FadeOut>d__39$$.ctor
// il2cpp: void UI_BasePopup__FadeOut_d__39___ctor (UI_BasePopup__FadeOut_d__39_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x401c290

void UI_BasePopup_<FadeOut>d__39___ctor
               (UI_BasePopup__FadeOut_d__39_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.BasePopup.<FadeOut>d__39$$System.IDisposable.Dispose
// il2cpp: void UI_BasePopup__FadeOut_d__39__System_IDisposable_Dispose (UI_BasePopup__FadeOut_d__39_o* __this, const MethodInfo* method);
// 0x401cb50

void UI_BasePopup_<FadeOut>d__39__System_IDisposable_Dispose
               (UI_BasePopup__FadeOut_d__39_o *__this,MethodInfo *method)

{
  return;
}


// UI.BasePopup.<FadeOut>d__39$$MoveNext
// il2cpp: bool UI_BasePopup__FadeOut_d__39__MoveNext (UI_BasePopup__FadeOut_d__39_o* __this, const MethodInfo* method);
// 0x401cb60

bool_conflict
UI_BasePopup_<FadeOut>d__39__MoveNext(UI_BasePopup__FadeOut_d__39_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_BasePopup_o *__this_00;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_CanvasGroup_o *pUVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  
  iVar1 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if (__this_00 == (UI_BasePopup_o *)0x0) goto LAB_0401cd81;
  }
  else {
    if (iVar1 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    if (__this_00 == (UI_BasePopup_o *)0x0) goto LAB_0401cd81;
    fVar4 = (float)(*(__this_00->klass->vtable)._48_get_MaxFadeAlpha.methodPtr)
                             (__this_00,(__this_00->klass->vtable)._48_get_MaxFadeAlpha.method);
    (__this_00->fields)._currentAnimationValue = fVar4;
  }
  fVar4 = (__this_00->fields)._currentAnimationValue;
  fVar5 = (float)(*(__this_00->klass->vtable)._47_get_MinFadeAlpha.methodPtr)(__this_00);
  if (fVar5 < fVar4) {
    fVar4 = (__this_00->fields)._currentAnimationValue;
    if (DAT_057042cd == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_CanvasGroup_GetComponent_CanvasGroup);
      DAT_057042cd = '\x01';
    }
    pUVar2 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if ((pUVar2 != (UnityEngine_Transform_o *)0x0) &&
       (pUVar3 = (UnityEngine_CanvasGroup_o *)
                 UnityEngine_Component__GetComponent<object>
                           ((UnityEngine_Component_o *)pUVar2,MethodInfo_CanvasGroup_GetComponent_CanvasGroup),
       pUVar3 != (UnityEngine_CanvasGroup_o *)0x0)) {
      UnityEngine_CanvasGroup__set_alpha(pUVar3,fVar4,(MethodInfo *)0x0);
      fVar4 = (__this_00->fields)._currentAnimationValue;
      uVar6 = (*(__this_00->klass->vtable)._47_get_MinFadeAlpha.methodPtr)
                        (__this_00,(__this_00->klass->vtable)._47_get_MinFadeAlpha.method);
      uVar7 = (*(__this_00->klass->vtable)._48_get_MaxFadeAlpha.methodPtr)
                        (__this_00,(__this_00->klass->vtable)._48_get_MaxFadeAlpha.method);
      fVar5 = (float)(*(__this_00->klass->vtable)._58_GetAnimationSpeed.methodPtr)
                               (uVar6,uVar7,__this_00,
                                (__this_00->klass->vtable)._58_GetAnimationSpeed.method);
      fVar8 = UnityEngine_Time__get_unscaledDeltaTime((MethodInfo *)0x0);
      (__this_00->fields)._currentAnimationValue = fVar4 - fVar8 * fVar5;
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      il2cpp_runtime_glue(&(__this->fields).__2__current,0);
      (__this->fields).__1__state = 1;
      return (bool_conflict)CONCAT71((int7)((ulong)__this >> 8),1);
    }
  }
  else {
    fVar4 = (float)(*(__this_00->klass->vtable)._47_get_MinFadeAlpha.methodPtr)(__this_00);
    if (DAT_057042cd == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_CanvasGroup_GetComponent_CanvasGroup);
      DAT_057042cd = '\x01';
    }
    pUVar2 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if ((pUVar2 != (UnityEngine_Transform_o *)0x0) &&
       (pUVar3 = (UnityEngine_CanvasGroup_o *)
                 UnityEngine_Component__GetComponent<object>
                           ((UnityEngine_Component_o *)pUVar2,MethodInfo_CanvasGroup_GetComponent_CanvasGroup),
       pUVar3 != (UnityEngine_CanvasGroup_o *)0x0)) {
      UnityEngine_CanvasGroup__set_alpha(pUVar3,fVar4,(MethodInfo *)0x0);
      (*(__this_00->klass->vtable)._57_FinishHide.methodPtr)
                (__this_00,(__this_00->klass->vtable)._57_FinishHide.method);
      return 0;
    }
  }
LAB_0401cd81:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.BasePopup.<FadeOut>d__39$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_BasePopup__FadeOut_d__39__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_BasePopup__FadeOut_d__39_o* __this, const MethodInfo* method);
// 0x401cd90

Il2CppObject *
UI_BasePopup_<FadeOut>d__39__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (UI_BasePopup__FadeOut_d__39_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.BasePopup.<FadeOut>d__39$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_BasePopup__FadeOut_d__39__System_Collections_IEnumerator_Reset (UI_BasePopup__FadeOut_d__39_o* __this, const MethodInfo* method);
// 0x401cda0

void UI_BasePopup_<FadeOut>d__39__System_Collections_IEnumerator_Reset
               (UI_BasePopup__FadeOut_d__39_o *__this,MethodInfo *method)

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


// UI.BasePopup.<FadeOut>d__39$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_BasePopup__FadeOut_d__39__System_Collections_IEnumerator_get_Current (UI_BasePopup__FadeOut_d__39_o* __this, const MethodInfo* method);
// 0x401cde0

Il2CppObject *
UI_BasePopup_<FadeOut>d__39__System_Collections_IEnumerator_get_Current
          (UI_BasePopup__FadeOut_d__39_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.BasePopup.<KillPopupIn>d__36$$.ctor
// il2cpp: void UI_BasePopup__KillPopupIn_d__36___ctor (UI_BasePopup__KillPopupIn_d__36_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x401c230

void UI_BasePopup_<KillPopupIn>d__36___ctor
               (UI_BasePopup__KillPopupIn_d__36_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.BasePopup.<KillPopupIn>d__36$$System.IDisposable.Dispose
// il2cpp: void UI_BasePopup__KillPopupIn_d__36__System_IDisposable_Dispose (UI_BasePopup__KillPopupIn_d__36_o* __this, const MethodInfo* method);
// 0x401cdf0

void UI_BasePopup_<KillPopupIn>d__36__System_IDisposable_Dispose
               (UI_BasePopup__KillPopupIn_d__36_o *__this,MethodInfo *method)

{
  return;
}


// UI.BasePopup.<KillPopupIn>d__36$$MoveNext
// il2cpp: bool UI_BasePopup__KillPopupIn_d__36__MoveNext (UI_BasePopup__KillPopupIn_d__36_o* __this, const MethodInfo* method);
// 0x401ce00

bool_conflict
UI_BasePopup_<KillPopupIn>d__36__MoveNext
          (UI_BasePopup__KillPopupIn_d__36_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_BasePopup_o *__this_00;
  undefined8 uVar2;
  MethodInfo *method_00;
  MethodInfo *pMVar3;
  float fVar4;
  
  iVar1 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
  }
  else {
    if (iVar1 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    fVar4 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    (__this->fields)._startTime_5__2 = fVar4;
    (__this->fields)._endTime_5__3 = fVar4 + 0.6;
  }
  fVar4 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  if (fVar4 < (__this->fields)._endTime_5__3) {
    fVar4 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    if (__this_00 != (UI_BasePopup_o *)0x0) {
      pMVar3 = (MethodInfo *)(__this_00->fields).killPopupKeyframesIn;
      fVar4 = UI_BasePopup__EvaluateKeyframes
                        (__this_00,(fVar4 - (__this->fields)._startTime_5__2) / 0.6,
                         (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)pMVar3,
                         method_00);
      UI_BasePopup__SetTransformScale(__this_00,fVar4,pMVar3);
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      uVar2 = il2cpp_runtime_glue(&(__this->fields).__2__current,0);
      (__this->fields).__1__state = 1;
      return (bool_conflict)CONCAT71((int7)((ulong)uVar2 >> 8),1);
    }
  }
  else if (__this_00 != (UI_BasePopup_o *)0x0) {
    pMVar3 = (__this_00->klass->vtable)._46_get_MaxTweenScale.method;
    fVar4 = (float)(*(__this_00->klass->vtable)._46_get_MaxTweenScale.methodPtr)(__this_00);
    UI_BasePopup__SetTransformScale(__this_00,fVar4,pMVar3);
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.BasePopup.<KillPopupIn>d__36$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_BasePopup__KillPopupIn_d__36__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_BasePopup__KillPopupIn_d__36_o* __this, const MethodInfo* method);
// 0x401cee0

Il2CppObject *
UI_BasePopup_<KillPopupIn>d__36__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (UI_BasePopup__KillPopupIn_d__36_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.BasePopup.<KillPopupIn>d__36$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_BasePopup__KillPopupIn_d__36__System_Collections_IEnumerator_Reset (UI_BasePopup__KillPopupIn_d__36_o* __this, const MethodInfo* method);
// 0x401cef0

void UI_BasePopup_<KillPopupIn>d__36__System_Collections_IEnumerator_Reset
               (UI_BasePopup__KillPopupIn_d__36_o *__this,MethodInfo *method)

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


// UI.BasePopup.<KillPopupIn>d__36$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_BasePopup__KillPopupIn_d__36__System_Collections_IEnumerator_get_Current (UI_BasePopup__KillPopupIn_d__36_o* __this, const MethodInfo* method);
// 0x401cf30

Il2CppObject *
UI_BasePopup_<KillPopupIn>d__36__System_Collections_IEnumerator_get_Current
          (UI_BasePopup__KillPopupIn_d__36_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.BasePopup.<KillPopupOut>d__37$$.ctor
// il2cpp: void UI_BasePopup__KillPopupOut_d__37___ctor (UI_BasePopup__KillPopupOut_d__37_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x401c250

void UI_BasePopup_<KillPopupOut>d__37___ctor
               (UI_BasePopup__KillPopupOut_d__37_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.BasePopup.<KillPopupOut>d__37$$System.IDisposable.Dispose
// il2cpp: void UI_BasePopup__KillPopupOut_d__37__System_IDisposable_Dispose (UI_BasePopup__KillPopupOut_d__37_o* __this, const MethodInfo* method);
// 0x401cf40

void UI_BasePopup_<KillPopupOut>d__37__System_IDisposable_Dispose
               (UI_BasePopup__KillPopupOut_d__37_o *__this,MethodInfo *method)

{
  return;
}


// UI.BasePopup.<KillPopupOut>d__37$$MoveNext
// il2cpp: bool UI_BasePopup__KillPopupOut_d__37__MoveNext (UI_BasePopup__KillPopupOut_d__37_o* __this, const MethodInfo* method);
// 0x401cf50

bool_conflict
UI_BasePopup_<KillPopupOut>d__37__MoveNext
          (UI_BasePopup__KillPopupOut_d__37_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_BasePopup_o *__this_00;
  undefined8 uVar2;
  MethodInfo *method_00;
  MethodInfo *pMVar3;
  float fVar4;
  
  iVar1 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
  }
  else {
    if (iVar1 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    fVar4 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    (__this->fields)._startTime_5__2 = fVar4;
    (__this->fields)._endTime_5__3 = fVar4 + 1.0;
  }
  fVar4 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  if (fVar4 < (__this->fields)._endTime_5__3) {
    fVar4 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    if (__this_00 != (UI_BasePopup_o *)0x0) {
      pMVar3 = (MethodInfo *)(__this_00->fields).killPopupKeyframesOut;
      fVar4 = UI_BasePopup__EvaluateKeyframes
                        (__this_00,((__this->fields)._startTime_5__2 - fVar4) + 1.0,
                         (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)pMVar3,
                         method_00);
      UI_BasePopup__SetTransformScale(__this_00,fVar4,pMVar3);
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      uVar2 = il2cpp_runtime_glue(&(__this->fields).__2__current,0);
      (__this->fields).__1__state = 1;
      return (bool_conflict)CONCAT71((int7)((ulong)uVar2 >> 8),1);
    }
  }
  else if (__this_00 != (UI_BasePopup_o *)0x0) {
    pMVar3 = (__this_00->klass->vtable)._45_get_MinTweenScale.method;
    fVar4 = (float)(*(__this_00->klass->vtable)._45_get_MinTweenScale.methodPtr)(__this_00);
    UI_BasePopup__SetTransformScale(__this_00,fVar4,pMVar3);
    (*(__this_00->klass->vtable)._57_FinishHide.methodPtr)
              (__this_00,(__this_00->klass->vtable)._57_FinishHide.method);
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.BasePopup.<KillPopupOut>d__37$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_BasePopup__KillPopupOut_d__37__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_BasePopup__KillPopupOut_d__37_o* __this, const MethodInfo* method);
// 0x401d050

Il2CppObject *
UI_BasePopup_<KillPopupOut>d__37__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (UI_BasePopup__KillPopupOut_d__37_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.BasePopup.<KillPopupOut>d__37$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_BasePopup__KillPopupOut_d__37__System_Collections_IEnumerator_Reset (UI_BasePopup__KillPopupOut_d__37_o* __this, const MethodInfo* method);
// 0x401d060

void UI_BasePopup_<KillPopupOut>d__37__System_Collections_IEnumerator_Reset
               (UI_BasePopup__KillPopupOut_d__37_o *__this,MethodInfo *method)

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


// UI.BasePopup.<KillPopupOut>d__37$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_BasePopup__KillPopupOut_d__37__System_Collections_IEnumerator_get_Current (UI_BasePopup__KillPopupOut_d__37_o* __this, const MethodInfo* method);
// 0x401d0a0

Il2CppObject *
UI_BasePopup_<KillPopupOut>d__37__System_Collections_IEnumerator_get_Current
          (UI_BasePopup__KillPopupOut_d__37_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.BasePopup.<TweenIn>d__30$$.ctor
// il2cpp: void UI_BasePopup__TweenIn_d__30___ctor (UI_BasePopup__TweenIn_d__30_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x401bfa0

void UI_BasePopup_<TweenIn>d__30___ctor
               (UI_BasePopup__TweenIn_d__30_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.BasePopup.<TweenIn>d__30$$System.IDisposable.Dispose
// il2cpp: void UI_BasePopup__TweenIn_d__30__System_IDisposable_Dispose (UI_BasePopup__TweenIn_d__30_o* __this, const MethodInfo* method);
// 0x401d0b0

void UI_BasePopup_<TweenIn>d__30__System_IDisposable_Dispose
               (UI_BasePopup__TweenIn_d__30_o *__this,MethodInfo *method)

{
  return;
}


// UI.BasePopup.<TweenIn>d__30$$MoveNext
// il2cpp: bool UI_BasePopup__TweenIn_d__30__MoveNext (UI_BasePopup__TweenIn_d__30_o* __this, const MethodInfo* method);
// 0x401d0c0

bool_conflict
UI_BasePopup_<TweenIn>d__30__MoveNext(UI_BasePopup__TweenIn_d__30_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_BasePopup_o *__this_00;
  undefined8 uVar2;
  MethodInfo *pMVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  
  iVar1 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if (__this_00 == (UI_BasePopup_o *)0x0) goto LAB_0401d20f;
  }
  else {
    if (iVar1 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    if (__this_00 == (UI_BasePopup_o *)0x0) {
LAB_0401d20f:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    fVar4 = (float)(*(__this_00->klass->vtable)._45_get_MinTweenScale.methodPtr)
                             (__this_00,(__this_00->klass->vtable)._45_get_MinTweenScale.method);
    (__this_00->fields)._currentAnimationValue = fVar4;
  }
  fVar4 = (__this_00->fields)._currentAnimationValue;
  pMVar3 = (__this_00->klass->vtable)._46_get_MaxTweenScale.method;
  fVar5 = (float)(*(__this_00->klass->vtable)._46_get_MaxTweenScale.methodPtr)(__this_00);
  if (fVar5 <= fVar4) {
    pMVar3 = (__this_00->klass->vtable)._46_get_MaxTweenScale.method;
    fVar4 = (float)(*(__this_00->klass->vtable)._46_get_MaxTweenScale.methodPtr)(__this_00);
    UI_BasePopup__SetTransformScale(__this_00,fVar4,pMVar3);
    return 0;
  }
  UI_BasePopup__SetTransformScale(__this_00,(__this_00->fields)._currentAnimationValue,pMVar3);
  fVar4 = (__this_00->fields)._currentAnimationValue;
  uVar6 = (*(__this_00->klass->vtable)._45_get_MinTweenScale.methodPtr)
                    (__this_00,(__this_00->klass->vtable)._45_get_MinTweenScale.method);
  uVar7 = (*(__this_00->klass->vtable)._46_get_MaxTweenScale.methodPtr)
                    (__this_00,(__this_00->klass->vtable)._46_get_MaxTweenScale.method);
  fVar5 = (float)(*(__this_00->klass->vtable)._58_GetAnimationSpeed.methodPtr)
                           (uVar6,uVar7,__this_00,
                            (__this_00->klass->vtable)._58_GetAnimationSpeed.method);
  fVar8 = UnityEngine_Time__get_unscaledDeltaTime((MethodInfo *)0x0);
  (__this_00->fields)._currentAnimationValue = fVar8 * fVar5 + fVar4;
  (__this->fields).__2__current = (Il2CppObject *)0x0;
  uVar2 = il2cpp_runtime_glue(&(__this->fields).__2__current,0);
  (__this->fields).__1__state = 1;
  return (bool_conflict)CONCAT71((int7)((ulong)uVar2 >> 8),1);
}


// UI.BasePopup.<TweenIn>d__30$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_BasePopup__TweenIn_d__30__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_BasePopup__TweenIn_d__30_o* __this, const MethodInfo* method);
// 0x401d220

Il2CppObject *
UI_BasePopup_<TweenIn>d__30__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (UI_BasePopup__TweenIn_d__30_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.BasePopup.<TweenIn>d__30$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_BasePopup__TweenIn_d__30__System_Collections_IEnumerator_Reset (UI_BasePopup__TweenIn_d__30_o* __this, const MethodInfo* method);
// 0x401d230

void UI_BasePopup_<TweenIn>d__30__System_Collections_IEnumerator_Reset
               (UI_BasePopup__TweenIn_d__30_o *__this,MethodInfo *method)

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


// UI.BasePopup.<TweenIn>d__30$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_BasePopup__TweenIn_d__30__System_Collections_IEnumerator_get_Current (UI_BasePopup__TweenIn_d__30_o* __this, const MethodInfo* method);
// 0x401d270

Il2CppObject *
UI_BasePopup_<TweenIn>d__30__System_Collections_IEnumerator_get_Current
          (UI_BasePopup__TweenIn_d__30_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.BasePopup.<TweenOut>d__31$$.ctor
// il2cpp: void UI_BasePopup__TweenOut_d__31___ctor (UI_BasePopup__TweenOut_d__31_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x401bfc0

void UI_BasePopup_<TweenOut>d__31___ctor
               (UI_BasePopup__TweenOut_d__31_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.BasePopup.<TweenOut>d__31$$System.IDisposable.Dispose
// il2cpp: void UI_BasePopup__TweenOut_d__31__System_IDisposable_Dispose (UI_BasePopup__TweenOut_d__31_o* __this, const MethodInfo* method);
// 0x401d280

void UI_BasePopup_<TweenOut>d__31__System_IDisposable_Dispose
               (UI_BasePopup__TweenOut_d__31_o *__this,MethodInfo *method)

{
  return;
}


// UI.BasePopup.<TweenOut>d__31$$MoveNext
// il2cpp: bool UI_BasePopup__TweenOut_d__31__MoveNext (UI_BasePopup__TweenOut_d__31_o* __this, const MethodInfo* method);
// 0x401d290

bool_conflict
UI_BasePopup_<TweenOut>d__31__MoveNext(UI_BasePopup__TweenOut_d__31_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_BasePopup_o *__this_00;
  undefined8 uVar2;
  MethodInfo *pMVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  
  iVar1 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if (__this_00 == (UI_BasePopup_o *)0x0) goto LAB_0401d3fa;
  }
  else {
    if (iVar1 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    if (__this_00 == (UI_BasePopup_o *)0x0) {
LAB_0401d3fa:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    fVar4 = (float)(*(__this_00->klass->vtable)._46_get_MaxTweenScale.methodPtr)
                             (__this_00,(__this_00->klass->vtable)._46_get_MaxTweenScale.method);
    (__this_00->fields)._currentAnimationValue = fVar4;
  }
  fVar4 = (__this_00->fields)._currentAnimationValue;
  pMVar3 = (__this_00->klass->vtable)._45_get_MinTweenScale.method;
  fVar5 = (float)(*(__this_00->klass->vtable)._45_get_MinTweenScale.methodPtr)(__this_00);
  if (fVar4 <= fVar5) {
    pMVar3 = (__this_00->klass->vtable)._45_get_MinTweenScale.method;
    fVar4 = (float)(*(__this_00->klass->vtable)._45_get_MinTweenScale.methodPtr)(__this_00);
    UI_BasePopup__SetTransformScale(__this_00,fVar4,pMVar3);
    (*(__this_00->klass->vtable)._57_FinishHide.methodPtr)
              (__this_00,(__this_00->klass->vtable)._57_FinishHide.method);
    return 0;
  }
  UI_BasePopup__SetTransformScale(__this_00,(__this_00->fields)._currentAnimationValue,pMVar3);
  fVar4 = (__this_00->fields)._currentAnimationValue;
  uVar6 = (*(__this_00->klass->vtable)._45_get_MinTweenScale.methodPtr)
                    (__this_00,(__this_00->klass->vtable)._45_get_MinTweenScale.method);
  uVar7 = (*(__this_00->klass->vtable)._46_get_MaxTweenScale.methodPtr)
                    (__this_00,(__this_00->klass->vtable)._46_get_MaxTweenScale.method);
  fVar5 = (float)(*(__this_00->klass->vtable)._58_GetAnimationSpeed.methodPtr)
                           (uVar6,uVar7,__this_00,
                            (__this_00->klass->vtable)._58_GetAnimationSpeed.method);
  fVar8 = UnityEngine_Time__get_unscaledDeltaTime((MethodInfo *)0x0);
  (__this_00->fields)._currentAnimationValue = fVar4 - fVar8 * fVar5;
  (__this->fields).__2__current = (Il2CppObject *)0x0;
  uVar2 = il2cpp_runtime_glue(&(__this->fields).__2__current,0);
  (__this->fields).__1__state = 1;
  return (bool_conflict)CONCAT71((int7)((ulong)uVar2 >> 8),1);
}


// UI.BasePopup.<TweenOut>d__31$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_BasePopup__TweenOut_d__31__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_BasePopup__TweenOut_d__31_o* __this, const MethodInfo* method);
// 0x401d400

Il2CppObject *
UI_BasePopup_<TweenOut>d__31__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (UI_BasePopup__TweenOut_d__31_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.BasePopup.<TweenOut>d__31$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_BasePopup__TweenOut_d__31__System_Collections_IEnumerator_Reset (UI_BasePopup__TweenOut_d__31_o* __this, const MethodInfo* method);
// 0x401d410

void UI_BasePopup_<TweenOut>d__31__System_Collections_IEnumerator_Reset
               (UI_BasePopup__TweenOut_d__31_o *__this,MethodInfo *method)

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


// UI.BasePopup.<TweenOut>d__31$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_BasePopup__TweenOut_d__31__System_Collections_IEnumerator_get_Current (UI_BasePopup__TweenOut_d__31_o* __this, const MethodInfo* method);
// 0x401d450

Il2CppObject *
UI_BasePopup_<TweenOut>d__31__System_Collections_IEnumerator_get_Current
          (UI_BasePopup__TweenOut_d__31_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.BasePopup$$get_MinTweenScale
// il2cpp: float UI_BasePopup__get_MinTweenScale (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x401b190

float UI_BasePopup__get_MinTweenScale(UI_BasePopup_o *__this,MethodInfo *method)

{
  return 0.3;
}


// UI.BasePopup$$get_MaxTweenScale
// il2cpp: float UI_BasePopup__get_MaxTweenScale (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x401b1a0

float UI_BasePopup__get_MaxTweenScale(UI_BasePopup_o *__this,MethodInfo *method)

{
  return 1.0;
}


// UI.BasePopup$$get_MinFadeAlpha
// il2cpp: float UI_BasePopup__get_MinFadeAlpha (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x401b1b0

float UI_BasePopup__get_MinFadeAlpha(UI_BasePopup_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.BasePopup$$get_MaxFadeAlpha
// il2cpp: float UI_BasePopup__get_MaxFadeAlpha (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x401b1c0

float UI_BasePopup__get_MaxFadeAlpha(UI_BasePopup_o *__this,MethodInfo *method)

{
  return 1.0;
}


// UI.BasePopup$$get_SpringDamping
// il2cpp: float UI_BasePopup__get_SpringDamping (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x401b1d0

float UI_BasePopup__get_SpringDamping(UI_BasePopup_o *__this,MethodInfo *method)

{
  return 0.5;
}


// UI.BasePopup$$get_SpringStiffness
// il2cpp: float UI_BasePopup__get_SpringStiffness (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x401b1e0

float UI_BasePopup__get_SpringStiffness(UI_BasePopup_o *__this,MethodInfo *method)

{
  return 0.1;
}


// UI.BasePopup$$get_AnimationTime
// il2cpp: float UI_BasePopup__get_AnimationTime (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x401b1f0

float UI_BasePopup__get_AnimationTime(UI_BasePopup_o *__this,MethodInfo *method)

{
  return 0.1;
}


// UI.BasePopup$$get_ShowOnTop
// il2cpp: bool UI_BasePopup__get_ShowOnTop (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x401b200

bool_conflict UI_BasePopup__get_ShowOnTop(UI_BasePopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.BasePopup$$get_UseSound
// il2cpp: bool UI_BasePopup__get_UseSound (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x401b210

bool_conflict UI_BasePopup__get_UseSound(UI_BasePopup_o *__this,MethodInfo *method)

{
  return 0;
}


// UI.BasePopup$$get_PopupAnimationType
// il2cpp: int32_t UI_BasePopup__get_PopupAnimationType (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x401b220

int32_t UI_BasePopup__get_PopupAnimationType(UI_BasePopup_o *__this,MethodInfo *method)

{
  return 2;
}


// UI.BasePopup$$Show
// il2cpp: void UI_BasePopup__Show (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x401b230

void UI_BasePopup__Show(UI_BasePopup_o *__this,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  UnityEngine_Transform_o *__this_00;
  Il2CppObject *__this_01;
  undefined8 *puVar3;
  
  if (DAT_057042c1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_057042c1 = '\x01';
  }
  if ((char)(__this->fields).IsActive != '\0') {
    return;
  }
  *(undefined1 *)&(__this->fields).IsActive = 1;
  cVar1 = (*(__this->klass->vtable)._53_get_UseSound.methodPtr)(__this);
  if (cVar1 != '\0') {
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UI_UIManager__PlaySound(0,(MethodInfo *)0x0);
  }
  UI_BasePanel__Show((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  cVar1 = (*(__this->klass->vtable)._52_get_ShowOnTop.methodPtr)(__this);
  if (cVar1 != '\0') {
    __this_00 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_Transform_o *)0x0) goto LAB_0401b42d;
    UnityEngine_Transform__SetAsLastSibling(__this_00,(MethodInfo *)0x0);
  }
  UnityEngine_MonoBehaviour__StopAllCoroutines
            ((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  iVar2 = (*(__this->klass->vtable)._54_get_PopupAnimationType.methodPtr)(__this);
  if (iVar2 == 2) {
    if (DAT_057042c5 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_TweenIn_d__30);
      DAT_057042c5 = '\x01';
    }
    __this_01 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_TweenIn_d__30);
    System_Object___ctor(__this_01,(MethodInfo *)0x0);
    *(undefined4 *)&__this_01[1].klass = 0;
    if (__this_01 == (Il2CppObject *)0x0) {
LAB_0401b42d:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    __this_01[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_01 + 2,__this);
  }
  else {
    iVar2 = (*(__this->klass->vtable)._54_get_PopupAnimationType.methodPtr)(__this);
    if (iVar2 == 1) {
      if (DAT_057042ca == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_FadeIn_d__38);
        DAT_057042ca = '\x01';
      }
      puVar3 = &TypeInfo_FadeIn_d__38;
    }
    else {
      iVar2 = (*(__this->klass->vtable)._54_get_PopupAnimationType.methodPtr)(__this);
      if (iVar2 != 3) {
        return;
      }
      if (DAT_057042c8 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_KillPopupIn_d__36);
        DAT_057042c8 = '\x01';
      }
      puVar3 = &TypeInfo_KillPopupIn_d__36;
    }
    __this_01 = (Il2CppObject *)il2cpp_runtime_glue(*puVar3);
    System_Object___ctor(__this_01,(MethodInfo *)0x0);
    *(undefined4 *)&__this_01[1].klass = 0;
    if (__this_01 == (Il2CppObject *)0x0) goto LAB_0401b42d;
    __this_01[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_01 + 2,__this);
  }
  UnityEngine_MonoBehaviour__StartCoroutine
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_01,
             (MethodInfo *)0x0);
  return;
}


// UI.BasePopup$$ShowImmediate
// il2cpp: void UI_BasePopup__ShowImmediate (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x401b590

void UI_BasePopup__ShowImmediate(UI_BasePopup_o *__this,MethodInfo *method)

{
  UI_BasePopup_c *pUVar1;
  char cVar2;
  int iVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_CanvasGroup_o *__this_00;
  MethodInfo *method_00;
  float fVar5;
  
  if (DAT_057042c2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_057042c2 = '\x01';
  }
  if ((char)(__this->fields).IsActive == '\0') {
    *(undefined1 *)&(__this->fields).IsActive = 1;
    cVar2 = (*(__this->klass->vtable)._53_get_UseSound.methodPtr)(__this);
    if (cVar2 != '\0') {
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UI_UIManager__PlaySound(0,(MethodInfo *)0x0);
    }
    UI_BasePanel__Show((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
    cVar2 = (*(__this->klass->vtable)._52_get_ShowOnTop.methodPtr)(__this);
    if (cVar2 != '\0') {
      pUVar4 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto LAB_0401b70b;
      UnityEngine_Transform__SetAsLastSibling(pUVar4,(MethodInfo *)0x0);
    }
    UnityEngine_MonoBehaviour__StopAllCoroutines
              ((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
    iVar3 = (*(__this->klass->vtable)._54_get_PopupAnimationType.methodPtr)
                      (__this,(__this->klass->vtable)._54_get_PopupAnimationType.method);
    pUVar1 = __this->klass;
    if (iVar3 == 2) {
      method_00 = (pUVar1->vtable)._46_get_MaxTweenScale.method;
      fVar5 = (float)(*(pUVar1->vtable)._46_get_MaxTweenScale.methodPtr)(__this);
      UI_BasePopup__SetTransformScale(__this,fVar5,method_00);
      return;
    }
    iVar3 = (*(pUVar1->vtable)._54_get_PopupAnimationType.methodPtr)
                      (__this,(pUVar1->vtable)._54_get_PopupAnimationType.method);
    if (iVar3 == 1) {
      fVar5 = (float)(*(__this->klass->vtable)._48_get_MaxFadeAlpha.methodPtr)(__this);
      if (DAT_057042cd == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CanvasGroup_GetComponent_CanvasGroup);
        DAT_057042cd = '\x01';
      }
      pUVar4 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        __this_00 = (UnityEngine_CanvasGroup_o *)
                    UnityEngine_Component__GetComponent<object>
                              ((UnityEngine_Component_o *)pUVar4,MethodInfo_CanvasGroup_GetComponent_CanvasGroup);
        if (__this_00 != (UnityEngine_CanvasGroup_o *)0x0) {
          UnityEngine_CanvasGroup__set_alpha(__this_00,fVar5,(MethodInfo *)0x0);
          return;
        }
      }
LAB_0401b70b:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// UI.BasePopup$$HideAllPopups
// il2cpp: void UI_BasePopup__HideAllPopups (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x401ba60

void UI_BasePopup__HideAllPopups(UI_BasePopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_BasePopup__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar1;
  System_Collections_Generic_List_T__o *pSVar2;
  Il2CppMethodPointer pIVar3;
  Il2CppObject *pIVar4;
  
  if (DAT_057042c3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_BasePopup_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UI_BasePopup__GetEnumerator);
    DAT_057042c3 = '\x01';
  }
  pSVar2 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar3 = (Il2CppMethodPointer)0x0;
  pIVar4 = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._popups;
  if (__this_00 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffd8,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_UI_BasePopup__GetEnumerator);
    while( true ) {
      __this_01.fields._8_8_ = pIVar3;
      __this_01.fields._list = pSVar2;
      __this_01.fields._current = pIVar4;
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffffd8);
      if ((char)bVar1 == '\0') {
        __this_02.fields._8_8_ = pIVar3;
        __this_02.fields._list = pSVar2;
        __this_02.fields._current = pIVar4;
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffffd8);
        return;
      }
      if (pIVar4 == (Il2CppObject *)0x0) break;
      (*pIVar4->klass->vtable[0x37].methodPtr)(pIVar4,pIVar4->klass->vtable[0x37].method);
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.BasePopup$$Hide
// il2cpp: void UI_BasePopup__Hide (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x401bbb0

void UI_BasePopup__Hide(UI_BasePopup_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  char cVar1;
  int iVar2;
  Il2CppObject *__this_00;
  undefined8 *puVar3;
  undefined8 extraout_RDX;
  
  if (DAT_057042c4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_057042c4 = '\x01';
  }
  if ((char)(__this->fields).IsActive == '\0') {
    return;
  }
  *(undefined1 *)&(__this->fields).IsActive = 0;
  cVar1 = (*(__this->klass->vtable)._53_get_UseSound.methodPtr)(__this);
  if (cVar1 != '\0') {
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UI_UIManager__PlaySound(1,(MethodInfo *)0x0);
  }
  (*(__this->klass->vtable)._26_HideAllPopups.methodPtr)(__this);
  UnityEngine_MonoBehaviour__StopAllCoroutines
            ((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  iVar2 = (*(__this->klass->vtable)._54_get_PopupAnimationType.methodPtr)(__this);
  if (iVar2 == 2) {
    if (DAT_057042c6 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_TweenOut_d__31);
      DAT_057042c6 = '\x01';
    }
    __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_TweenOut_d__31);
    System_Object___ctor(__this_00,(MethodInfo *)0x0);
    *(undefined4 *)&__this_00[1].klass = 0;
    if (__this_00 == (Il2CppObject *)0x0) {
LAB_0401bdb7:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 2,__this);
  }
  else {
    iVar2 = (*(__this->klass->vtable)._54_get_PopupAnimationType.methodPtr)(__this);
    if (iVar2 == 1) {
      if (DAT_057042cb == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_FadeOut_d__39);
        DAT_057042cb = '\x01';
      }
      puVar3 = &TypeInfo_FadeOut_d__39;
    }
    else {
      iVar2 = (*(__this->klass->vtable)._54_get_PopupAnimationType.methodPtr)(__this);
      if (iVar2 != 3) {
        iVar2 = (*(__this->klass->vtable)._54_get_PopupAnimationType.methodPtr)
                          (__this,(__this->klass->vtable)._54_get_PopupAnimationType.method);
        if (iVar2 != 0) {
          return;
        }
        vtable_dispatch = (__this->klass->vtable)._57_FinishHide.methodPtr;
        (*vtable_dispatch)
                  (__this,(__this->klass->vtable)._57_FinishHide.method,extraout_RDX,
                   vtable_dispatch);
        return;
      }
      if (DAT_057042c9 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_KillPopupOut_d__37);
        DAT_057042c9 = '\x01';
      }
      puVar3 = &TypeInfo_KillPopupOut_d__37;
    }
    __this_00 = (Il2CppObject *)il2cpp_runtime_glue(*puVar3);
    System_Object___ctor(__this_00,(MethodInfo *)0x0);
    *(undefined4 *)&__this_00[1].klass = 0;
    if (__this_00 == (Il2CppObject *)0x0) goto LAB_0401bdb7;
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 2,__this);
  }
  UnityEngine_MonoBehaviour__StartCoroutine
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
             (MethodInfo *)0x0);
  return;
}


// UI.BasePopup$$HideImmediate
// il2cpp: void UI_BasePopup__HideImmediate (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x401bf10

void UI_BasePopup__HideImmediate(UI_BasePopup_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  bool_conflict bVar1;
  UnityEngine_GameObject_o *__this_00;
  undefined8 extraout_RDX;
  
  *(undefined1 *)&(__this->fields).IsActive = 0;
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    (*(__this->klass->vtable)._26_HideAllPopups.methodPtr)(__this);
    UnityEngine_MonoBehaviour__StopAllCoroutines
              ((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
    vtable_dispatch = (__this->klass->vtable)._57_FinishHide.methodPtr;
    (*vtable_dispatch)
              (__this,(__this->klass->vtable)._57_FinishHide.method,extraout_RDX,
               vtable_dispatch);
    return;
  }
  return;
}


// UI.BasePopup$$OnDisable
// il2cpp: void UI_BasePopup__OnDisable (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x401bf70

void UI_BasePopup__OnDisable(UI_BasePopup_o *__this,MethodInfo *method)

{
  *(undefined1 *)&(__this->fields).IsActive = 0;
  return;
}


// UI.BasePopup$$FinishHide
// il2cpp: void UI_BasePopup__FinishHide (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x401bf80

void UI_BasePopup__FinishHide(UI_BasePopup_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.BasePopup$$TweenIn
// il2cpp: System_Collections_IEnumerator_o* UI_BasePopup__TweenIn (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x401b440

System_Collections_IEnumerator_o * UI_BasePopup__TweenIn(UI_BasePopup_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_057042c5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TweenIn_d__30);
    DAT_057042c5 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_TweenIn_d__30);
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


// UI.BasePopup$$TweenOut
// il2cpp: System_Collections_IEnumerator_o* UI_BasePopup__TweenOut (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x401bdc0

System_Collections_IEnumerator_o * UI_BasePopup__TweenOut(UI_BasePopup_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_057042c6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_TweenOut_d__31);
    DAT_057042c6 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_TweenOut_d__31);
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


// UI.BasePopup$$EvaluateKeyframes
// il2cpp: float UI_BasePopup__EvaluateKeyframes (UI_BasePopup_o* __this, float timePercentage, System_Collections_Generic_List_BasePopup_AnimationKeyframe__o* keyframes, const MethodInfo* method);
// 0x401bfe0

float UI_BasePopup__EvaluateKeyframes
                (UI_BasePopup_o *__this,float timePercentage,
                System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *keyframes,
                MethodInfo *method)

{
  UI_BasePopup_AnimationKeyframe_o UVar1;
  System_Collections_Generic_List_Enumerator_T__o __this_00;
  System_Collections_Generic_List_Enumerator_T__o __this_01;
  bool_conflict bVar2;
  MethodInfo *extraout_RDX;
  float fVar3;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float local_58;
  float fStack_54;
  undefined1 local_48 [32];
  undefined1 local_28 [16];
  Il2CppObject *local_18;
  
  if (DAT_057042c7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_BasePopup_AnimationKeyframe_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UI_BasePopup_AnimationKeyfr);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_BasePopup_AnimationKeyframe_get_Item);
    DAT_057042c7 = '\x01';
    method = extraout_RDX;
  }
  if ((keyframes == (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)0x0) ||
     ((keyframes->fields)._size == 0)) {
    fVar3 = (float)(*(__this->klass->vtable)._45_get_MinTweenScale.methodPtr)
                             (__this,(__this->klass->vtable)._45_get_MinTweenScale.method,method);
    return fVar3;
  }
  UVar1 = System_Collections_Generic_List<BasePopup_AnimationKeyframe>__get_Item
                    (keyframes,0,MethodInfo_BasePopup_AnimationKeyframe_get_Item);
  local_48._8_4_ = extraout_XMM0_Dc;
  local_48._0_4_ = UVar1.fields.time;
  local_48._4_4_ = UVar1.fields.scale;
  local_48._12_4_ = extraout_XMM0_Dd;
  UVar1 = System_Collections_Generic_List<BasePopup_AnimationKeyframe>__get_Item
                    (keyframes,(keyframes->fields)._size + -1,MethodInfo_BasePopup_AnimationKeyframe_get_Item);
  System_Collections_Generic_List<BasePopup_AnimationKeyframe>__GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_28,keyframes,MethodInfo_List_1_T__Enumerator_UI_BasePopup_AnimationKeyfr);
  do {
    while( true ) {
      __this_00.fields._8_8_ = local_28._8_8_;
      __this_00.fields._list = (System_Collections_Generic_List_T__o *)local_28._0_8_;
      __this_00.fields._current = local_18;
      bVar2 = System_Collections_Generic_List_Enumerator<BasePopup_AnimationKeyframe>__MoveNext
                        (__this_00,(MethodInfo_31ABF00 *)&stack0xffffffffffffff88);
      if ((char)bVar2 == '\0') {
        local_58 = UVar1.fields.time;
        fStack_54 = UVar1.fields.scale;
        goto LAB_0401c134;
      }
      local_58 = SUB84(local_18,0);
      fStack_54 = (float)((ulong)local_18 >> 0x20);
      if ((timePercentage <= local_58) || (local_58 <= (float)local_48._0_4_)) break;
      local_48._8_8_ = 0;
      local_48._0_8_ = local_18;
    }
  } while (local_58 < timePercentage);
LAB_0401c134:
  __this_01.fields._8_8_ = local_28._8_8_;
  __this_01.fields._list = (System_Collections_Generic_List_T__o *)local_28._0_8_;
  __this_01.fields._current = local_18;
  System_Collections_Generic_List_Enumerator<BasePopup_AnimationKeyframe>__Dispose
            (__this_01,(MethodInfo_31ABEF0 *)&stack0xffffffffffffff88);
  local_58 = local_58 - (float)local_48._0_4_;
  if ((local_58 == 0.0) && (!NAN(local_58))) {
    return (float)local_48._4_4_;
  }
  local_58 = (timePercentage - (float)local_48._0_4_) / local_58;
  fVar3 = 1.0;
  if (local_58 <= 1.0) {
    fVar3 = local_58;
  }
  return (float)local_48._4_4_ +
         (fStack_54 - (float)local_48._4_4_) * (float)(-(uint)(0.0 <= local_58) & (uint)fVar3);
}


// UI.BasePopup$$KillPopupIn
// il2cpp: System_Collections_IEnumerator_o* UI_BasePopup__KillPopupIn (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x401b520

System_Collections_IEnumerator_o *
UI_BasePopup__KillPopupIn(UI_BasePopup_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_057042c8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_KillPopupIn_d__36);
    DAT_057042c8 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_KillPopupIn_d__36);
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


// UI.BasePopup$$KillPopupOut
// il2cpp: System_Collections_IEnumerator_o* UI_BasePopup__KillPopupOut (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x401bea0

System_Collections_IEnumerator_o *
UI_BasePopup__KillPopupOut(UI_BasePopup_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_057042c9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_KillPopupOut_d__37);
    DAT_057042c9 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_KillPopupOut_d__37);
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


// UI.BasePopup$$FadeIn
// il2cpp: System_Collections_IEnumerator_o* UI_BasePopup__FadeIn (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x401b4b0

System_Collections_IEnumerator_o * UI_BasePopup__FadeIn(UI_BasePopup_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_057042ca == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_FadeIn_d__38);
    DAT_057042ca = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_FadeIn_d__38);
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


// UI.BasePopup$$FadeOut
// il2cpp: System_Collections_IEnumerator_o* UI_BasePopup__FadeOut (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x401be30

System_Collections_IEnumerator_o * UI_BasePopup__FadeOut(UI_BasePopup_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_057042cb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_FadeOut_d__39);
    DAT_057042cb = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_FadeOut_d__39);
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


// UI.BasePopup$$SetTransformScale
// il2cpp: void UI_BasePopup__SetTransformScale (UI_BasePopup_o* __this, float scale, const MethodInfo* method);
// 0x401b710

void UI_BasePopup__SetTransformScale(UI_BasePopup_o *__this,float scale,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  bool_conflict bVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Object_o *pUVar3;
  float fVar4;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  undefined1 in_stack_ffffffffffffff88 [12];
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar5;
  System_Collections_Generic_HashSet_Enumerator_T__o local_48;
  
  if (DAT_057042cc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_IgnoreScaler_GetComponent_IgnoreScaler);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Transform_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_UnityEngine_Transform__G);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057042cc = '\x01';
  }
  pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
    pUVar3 = (UnityEngine_Object_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)pUVar2,MethodInfo_IgnoreScaler_GetComponent_IgnoreScaler);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pUVar2 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      fVar4 = scale;
      if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto LAB_0401b933;
    }
    else {
      if ((pUVar3 == (UnityEngine_Object_o *)0x0) || (pUVar2 == (UnityEngine_Transform_o *)0x0))
      goto LAB_0401b933;
      fVar4 = *(float *)&pUVar3[1].monitor * scale;
    }
    value.fields.y = fVar4;
    value.fields.x = fVar4;
    value.fields.z = fVar4;
    UnityEngine_Transform__set_localScale(pUVar2,value,(MethodInfo *)0x0);
    __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._staticTransforms;
    if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet<object>__GetEnumerator(&local_48,__this_00,MethodInfo_HashSet_1_T__Enumerator_UnityEngine_Transform__G);
      if (scale <= 0.1) {
        scale = 0.1;
      }
      pSVar5 = (System_Collections_Generic_HashSet_Enumerator_T__c *)local_48.fields._set;
      while( true ) {
        __this_01.fields._version = (int32_t)scale;
        __this_01.fields._set =
             (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff88._0_8_;
        __this_01.fields._index = in_stack_ffffffffffffff88._8_4_;
        __this_01.fields._current = (Il2CppObject *)pSVar5;
        bVar1 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                          (__this_01,(MethodInfo_3185890 *)&stack0xffffffffffffff98);
        if ((char)bVar1 == '\0') {
          __this_02.fields._version = (int32_t)scale;
          __this_02.fields._set =
               (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff88._0_8_;
          __this_02.fields._index = in_stack_ffffffffffffff88._8_4_;
          __this_02.fields._current = (Il2CppObject *)pSVar5;
          System_Collections_Generic_HashSet_Enumerator<object>__Dispose
                    (__this_02,(MethodInfo_3185880 *)&stack0xffffffffffffff98);
          return;
        }
        if ((UnityEngine_Transform_o *)local_48.fields._current == (UnityEngine_Transform_o *)0x0)
        break;
        pUVar3 = (UnityEngine_Object_o *)
                 UnityEngine_Component__GetComponent<object>
                           ((UnityEngine_Component_o *)local_48.fields._current,MethodInfo_IgnoreScaler_GetComponent_IgnoreScaler);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          (pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        fVar4 = 1.0;
        if ((char)bVar1 != '\0') {
          if (pUVar3 == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          fVar4 = *(float *)&pUVar3[1].monitor;
        }
        value_00.fields.z = fVar4 / scale;
        value_00.fields.y = value_00.fields.z;
        value_00.fields.x = value_00.fields.z;
        UnityEngine_Transform__set_localScale
                  ((UnityEngine_Transform_o *)local_48.fields._current,value_00,(MethodInfo *)0x0);
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
LAB_0401b933:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.BasePopup$$SetTransformAlpha
// il2cpp: void UI_BasePopup__SetTransformAlpha (UI_BasePopup_o* __this, float alpha, const MethodInfo* method);
// 0x401b9f0

void UI_BasePopup__SetTransformAlpha(UI_BasePopup_o *__this,float alpha,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_CanvasGroup_o *__this_01;
  
  if (DAT_057042cd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CanvasGroup_GetComponent_CanvasGroup);
    DAT_057042cd = '\x01';
  }
  __this_00 = UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    __this_01 = (UnityEngine_CanvasGroup_o *)
                UnityEngine_Component__GetComponent<object>
                          ((UnityEngine_Component_o *)__this_00,MethodInfo_CanvasGroup_GetComponent_CanvasGroup);
    if (__this_01 != (UnityEngine_CanvasGroup_o *)0x0) {
      UnityEngine_CanvasGroup__set_alpha(__this_01,alpha,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.BasePopup$$GetVectorFromScale
// il2cpp: UnityEngine_Vector3_o UI_BasePopup__GetVectorFromScale (UI_BasePopup_o* __this, float scale, const MethodInfo* method);
// 0x401c2b0

UnityEngine_Vector3_o
UI_BasePopup__GetVectorFromScale(UI_BasePopup_o *__this,float scale,MethodInfo *method)

{
  UnityEngine_Vector3_o UVar1;
  
  UVar1.fields.y = scale;
  UVar1.fields.x = scale;
  UVar1.fields.z = scale;
  return (UnityEngine_Vector3_o)UVar1.fields;
}


// UI.BasePopup$$GetAnimationSpeed
// il2cpp: float UI_BasePopup__GetAnimationSpeed (UI_BasePopup_o* __this, float min, float max, const MethodInfo* method);
// 0x401c2c0

float UI_BasePopup__GetAnimationSpeed(UI_BasePopup_o *__this,float min,float max,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = (float)(*(__this->klass->vtable)._51_get_AnimationTime.methodPtr)
                           (__this,(__this->klass->vtable)._51_get_AnimationTime.method);
  return (max - min) / fVar1;
}


// UI.BasePopup$$.ctor
// il2cpp: void UI_BasePopup___ctor (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x401c2f0

void UI_BasePopup___ctor(UI_TooltipPopup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UI_BasePopup_AnimationKeyframe_array *pUVar3;
  long lVar4;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *pSVar5;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  
  if (DAT_057042ce == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_UnityEngine_Transform);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_Transform);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UI_BasePopup_AnimationKeyframe);
    il2cpp_init_method_metadata(&TypeInfo_List_AnimationKeyframe);
    DAT_057042ce = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_Transform);
  System_Collections_Generic_HashSet<object>___ctor(__this_00,MethodInfo_HashSet_1_UnityEngine_Transform);
  (__this->fields)._staticTransforms = (System_Collections_Generic_HashSet_Transform__o *)__this_00;
  il2cpp_runtime_glue(&(__this->fields)._staticTransforms,__this_00);
  pSVar5 = (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)
           il2cpp_runtime_glue(TypeInfo_List_AnimationKeyframe);
  System_Collections_Generic_List<BasePopup_AnimationKeyframe>___ctor(pSVar5,MethodInfo_List_1_UI_BasePopup_AnimationKeyframe);
  lVar4 = MethodInfo_Void_Add;
  if (pSVar5 != (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)0x0) {
    piVar1 = &(pSVar5->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar3 = (pSVar5->fields)._items;
    if (pUVar3 != (UI_BasePopup_AnimationKeyframe_array *)0x0) {
      uVar2 = (pSVar5->fields)._size;
      if (uVar2 < (uint)pUVar3->max_length) {
        (pSVar5->fields)._size = uVar2 + 1;
        pUVar3->m_Items[(int)uVar2].fields.time = 0.0;
        pUVar3->m_Items[(int)uVar2].fields.scale = 0.0;
      }
      else {
        System_Collections_Generic_List<BasePopup_AnimationKeyframe>__AddWithResize
                  (pSVar5,(UI_BasePopup_AnimationKeyframe_o)0x0,
                   *(MethodInfo_3632160 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      }
      lVar4 = MethodInfo_Void_Add;
      piVar1 = &(pSVar5->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar3 = (pSVar5->fields)._items;
      if (pUVar3 != (UI_BasePopup_AnimationKeyframe_array *)0x0) {
        uVar2 = (pSVar5->fields)._size;
        if (uVar2 < (uint)pUVar3->max_length) {
          (pSVar5->fields)._size = uVar2 + 1;
          pUVar3->m_Items[(int)uVar2].fields.time = 0.15;
          pUVar3->m_Items[(int)uVar2].fields.scale = 1.3;
        }
        else {
          System_Collections_Generic_List<BasePopup_AnimationKeyframe>__AddWithResize
                    (pSVar5,(UI_BasePopup_AnimationKeyframe_o)0x3fa666663e19999a,
                     *(MethodInfo_3632160 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        }
        lVar4 = MethodInfo_Void_Add;
        piVar1 = &(pSVar5->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar3 = (pSVar5->fields)._items;
        if (pUVar3 != (UI_BasePopup_AnimationKeyframe_array *)0x0) {
          uVar2 = (pSVar5->fields)._size;
          if (uVar2 < (uint)pUVar3->max_length) {
            (pSVar5->fields)._size = uVar2 + 1;
            pUVar3->m_Items[(int)uVar2].fields.time = 0.3;
            pUVar3->m_Items[(int)uVar2].fields.scale = 0.8;
          }
          else {
            System_Collections_Generic_List<BasePopup_AnimationKeyframe>__AddWithResize
                      (pSVar5,(UI_BasePopup_AnimationKeyframe_o)0x3f4ccccd3e99999a,
                       *(MethodInfo_3632160 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
          }
          lVar4 = MethodInfo_Void_Add;
          piVar1 = &(pSVar5->fields)._version;
          *piVar1 = *piVar1 + 1;
          pUVar3 = (pSVar5->fields)._items;
          if (pUVar3 != (UI_BasePopup_AnimationKeyframe_array *)0x0) {
            uVar2 = (pSVar5->fields)._size;
            if (uVar2 < (uint)pUVar3->max_length) {
              (pSVar5->fields)._size = uVar2 + 1;
              pUVar3->m_Items[(int)uVar2].fields.time = 0.45;
              pUVar3->m_Items[(int)uVar2].fields.scale = 1.1;
            }
            else {
              System_Collections_Generic_List<BasePopup_AnimationKeyframe>__AddWithResize
                        (pSVar5,(UI_BasePopup_AnimationKeyframe_o)0x3f8ccccd3ee66666,
                         *(MethodInfo_3632160 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70))
              ;
            }
            lVar4 = MethodInfo_Void_Add;
            piVar1 = &(pSVar5->fields)._version;
            *piVar1 = *piVar1 + 1;
            pUVar3 = (pSVar5->fields)._items;
            if (pUVar3 != (UI_BasePopup_AnimationKeyframe_array *)0x0) {
              uVar2 = (pSVar5->fields)._size;
              if (uVar2 < (uint)pUVar3->max_length) {
                (pSVar5->fields)._size = uVar2 + 1;
                pUVar3->m_Items[(int)uVar2].fields.time = 0.6;
                pUVar3->m_Items[(int)uVar2].fields.scale = 0.95;
              }
              else {
                System_Collections_Generic_List<BasePopup_AnimationKeyframe>__AddWithResize
                          (pSVar5,(UI_BasePopup_AnimationKeyframe_o)0x3f7333333f19999a,
                           *(MethodInfo_3632160 **)
                            (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
              }
              lVar4 = MethodInfo_Void_Add;
              piVar1 = &(pSVar5->fields)._version;
              *piVar1 = *piVar1 + 1;
              pUVar3 = (pSVar5->fields)._items;
              if (pUVar3 != (UI_BasePopup_AnimationKeyframe_array *)0x0) {
                uVar2 = (pSVar5->fields)._size;
                if (uVar2 < (uint)pUVar3->max_length) {
                  (pSVar5->fields)._size = uVar2 + 1;
                  pUVar3->m_Items[(int)uVar2].fields.time = 0.75;
                  pUVar3->m_Items[(int)uVar2].fields.scale = 1.05;
                }
                else {
                  System_Collections_Generic_List<BasePopup_AnimationKeyframe>__AddWithResize
                            (pSVar5,(UI_BasePopup_AnimationKeyframe_o)0x3f8666663f400000,
                             *(MethodInfo_3632160 **)
                              (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                }
                lVar4 = MethodInfo_Void_Add;
                piVar1 = &(pSVar5->fields)._version;
                *piVar1 = *piVar1 + 1;
                pUVar3 = (pSVar5->fields)._items;
                if (pUVar3 != (UI_BasePopup_AnimationKeyframe_array *)0x0) {
                  uVar2 = (pSVar5->fields)._size;
                  if (uVar2 < (uint)pUVar3->max_length) {
                    (pSVar5->fields)._size = uVar2 + 1;
                    pUVar3->m_Items[(int)uVar2].fields.time = 1.0;
                    pUVar3->m_Items[(int)uVar2].fields.scale = 1.0;
                  }
                  else {
                    System_Collections_Generic_List<BasePopup_AnimationKeyframe>__AddWithResize
                              (pSVar5,(UI_BasePopup_AnimationKeyframe_o)0x3f8000003f800000,
                               *(MethodInfo_3632160 **)
                                (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                  }
                  (__this->fields).killPopupKeyframesIn = pSVar5;
                  il2cpp_runtime_glue(&(__this->fields).killPopupKeyframesIn,pSVar5);
                  pSVar5 = (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)
                           il2cpp_runtime_glue(TypeInfo_List_AnimationKeyframe);
                  System_Collections_Generic_List<BasePopup_AnimationKeyframe>___ctor
                            (pSVar5,MethodInfo_List_1_UI_BasePopup_AnimationKeyframe);
                  lVar4 = MethodInfo_Void_Add;
                  if (pSVar5 != (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)
                                0x0) {
                    piVar1 = &(pSVar5->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pUVar3 = (pSVar5->fields)._items;
                    if (pUVar3 != (UI_BasePopup_AnimationKeyframe_array *)0x0) {
                      uVar2 = (pSVar5->fields)._size;
                      if (uVar2 < (uint)pUVar3->max_length) {
                        (pSVar5->fields)._size = uVar2 + 1;
                        pUVar3->m_Items[(int)uVar2].fields.time = 0.0;
                        pUVar3->m_Items[(int)uVar2].fields.scale = 0.0;
                      }
                      else {
                        System_Collections_Generic_List<BasePopup_AnimationKeyframe>__AddWithResize
                                  (pSVar5,(UI_BasePopup_AnimationKeyframe_o)0x0,
                                   *(MethodInfo_3632160 **)
                                    (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                      }
                      lVar4 = MethodInfo_Void_Add;
                      piVar1 = &(pSVar5->fields)._version;
                      *piVar1 = *piVar1 + 1;
                      pUVar3 = (pSVar5->fields)._items;
                      if (pUVar3 != (UI_BasePopup_AnimationKeyframe_array *)0x0) {
                        uVar2 = (pSVar5->fields)._size;
                        if (uVar2 < (uint)pUVar3->max_length) {
                          (pSVar5->fields)._size = uVar2 + 1;
                          pUVar3->m_Items[(int)uVar2].fields.time = 0.6;
                          pUVar3->m_Items[(int)uVar2].fields.scale = 0.0;
                        }
                        else {
                          System_Collections_Generic_List<BasePopup_AnimationKeyframe>__AddWithResize
                                    (pSVar5,(UI_BasePopup_AnimationKeyframe_o)0x3f19999a,
                                     *(MethodInfo_3632160 **)
                                      (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                        }
                        lVar4 = MethodInfo_Void_Add;
                        piVar1 = &(pSVar5->fields)._version;
                        *piVar1 = *piVar1 + 1;
                        pUVar3 = (pSVar5->fields)._items;
                        if (pUVar3 != (UI_BasePopup_AnimationKeyframe_array *)0x0) {
                          uVar2 = (pSVar5->fields)._size;
                          if (uVar2 < (uint)pUVar3->max_length) {
                            (pSVar5->fields)._size = uVar2 + 1;
                            pUVar3->m_Items[(int)uVar2].fields.time = 0.7;
                            pUVar3->m_Items[(int)uVar2].fields.scale = 0.85;
                          }
                          else {
                            System_Collections_Generic_List<BasePopup_AnimationKeyframe>__AddWithResize
                                      (pSVar5,(UI_BasePopup_AnimationKeyframe_o)0x3f59999a3f333333,
                                       *(MethodInfo_3632160 **)
                                        (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                          }
                          lVar4 = MethodInfo_Void_Add;
                          piVar1 = &(pSVar5->fields)._version;
                          *piVar1 = *piVar1 + 1;
                          pUVar3 = (pSVar5->fields)._items;
                          if (pUVar3 != (UI_BasePopup_AnimationKeyframe_array *)0x0) {
                            uVar2 = (pSVar5->fields)._size;
                            if (uVar2 < (uint)pUVar3->max_length) {
                              (pSVar5->fields)._size = uVar2 + 1;
                              pUVar3->m_Items[(int)uVar2].fields.time = 0.85;
                              pUVar3->m_Items[(int)uVar2].fields.scale = 0.8;
                            }
                            else {
                              System_Collections_Generic_List<BasePopup_AnimationKeyframe>__AddWithResize
                                        (pSVar5,(UI_BasePopup_AnimationKeyframe_o)0x3f4ccccd3f59999a
                                         ,*(MethodInfo_3632160 **)
                                           (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                            }
                            lVar4 = MethodInfo_Void_Add;
                            piVar1 = &(pSVar5->fields)._version;
                            *piVar1 = *piVar1 + 1;
                            pUVar3 = (pSVar5->fields)._items;
                            if (pUVar3 != (UI_BasePopup_AnimationKeyframe_array *)0x0) {
                              uVar2 = (pSVar5->fields)._size;
                              if (uVar2 < (uint)pUVar3->max_length) {
                                (pSVar5->fields)._size = uVar2 + 1;
                                pUVar3->m_Items[(int)uVar2].fields.time = 1.0;
                                pUVar3->m_Items[(int)uVar2].fields.scale = 1.0;
                              }
                              else {
                                System_Collections_Generic_List<BasePopup_AnimationKeyframe>__AddWithResize
                                          (pSVar5,(UI_BasePopup_AnimationKeyframe_o)
                                                  0x3f8000003f800000,
                                           *(MethodInfo_3632160 **)
                                            (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                              }
                              (__this->fields).killPopupKeyframesOut = pSVar5;
                              il2cpp_runtime_glue(&(__this->fields).killPopupKeyframesOut,pSVar5);
                              if (DAT_057042ff == '\0') {
                                il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_UnityEngine_UI_Button);
                                il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__Button);
                                DAT_057042ff = '\x01';
                              }
                              __this_01 = (System_Collections_Generic_Dictionary_object__object__o *
                                          )il2cpp_runtime_glue(TypeInfo_Dictionary_string__Button);
                              System_Collections_Generic_Dictionary<object__object>___ctor
                                        (__this_01,MethodInfo_Dictionary_2_System_String_UnityEngine_UI_Button);
                              (__this->fields)._topButtons =
                                   (System_Collections_Generic_Dictionary_string__Button__o *)
                                   __this_01;
                              il2cpp_runtime_glue(&(__this->fields)._topButtons);
                              UI_BasePanel___ctor((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


