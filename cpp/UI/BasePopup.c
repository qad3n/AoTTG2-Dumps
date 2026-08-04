// Type: UI.BasePopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/BasePopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/BasePopup.cs
// --------------------------------

// UI.BasePopup.AnimationKeyframe$$.ctor
// il2cpp: void UI_BasePopup_AnimationKeyframe___ctor (UI_BasePopup_AnimationKeyframe_o __this, float time, float scale, const MethodInfo* method);
// 0x4345f10

void UI_BasePopup_AnimationKeyframe___ctor
               (UI_BasePopup_AnimationKeyframe_o __this,float time,float scale,MethodInfo *method)

{
  *(float *)&method->methodPointer = __this.fields.time;
  *(float *)((long)&method->methodPointer + 4) = time;
  return;
}


// UI.BasePopup.<FadeIn>d__38$$.ctor
// il2cpp: void UI_BasePopup__FadeIn_d__38___ctor (UI_BasePopup__FadeIn_d__38_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4345940

void UI_BasePopup__FadeIn_d__38___ctor
               (UI_BasePopup__FadeIn_d__38_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.BasePopup.<FadeIn>d__38$$System.IDisposable.Dispose
// il2cpp: void UI_BasePopup__FadeIn_d__38__System_IDisposable_Dispose (UI_BasePopup__FadeIn_d__38_o* __this, const MethodInfo* method);
// 0x4345fa0

void UI_BasePopup__FadeIn_d__38__System_IDisposable_Dispose
               (UI_BasePopup__FadeIn_d__38_o *__this,MethodInfo *method)

{
  return;
}


// UI.BasePopup.<FadeIn>d__38$$MoveNext
// il2cpp: bool UI_BasePopup__FadeIn_d__38__MoveNext (UI_BasePopup__FadeIn_d__38_o* __this, const MethodInfo* method);
// 0x4345fb0

bool_conflict UI_BasePopup__FadeIn_d__38__MoveNext(UI_BasePopup__FadeIn_d__38_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_BasePopup_o *pUVar2;
  UnityEngine_CanvasGroup_o *pUVar3;
  UI_BasePopup_o *__this_00;
  UI_BasePopup_o *pUVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  
  iVar1 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  pUVar4 = (UI_BasePopup_o *)__this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if (__this_00 == (UI_BasePopup_o *)0x0) goto label_043461ae;
  }
  else {
    if (iVar1 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    if (__this_00 == (UI_BasePopup_o *)0x0) goto label_043461ae;
    fVar5 = (float)(*(__this_00->klass->vtable)._47_get_MinFadeAlpha.methodPtr)
                             (__this_00,(__this_00->klass->vtable)._47_get_MinFadeAlpha.method);
    (__this_00->fields)._currentAnimationValue = fVar5;
  }
  fVar5 = (__this_00->fields)._currentAnimationValue;
  fVar6 = (float)(*(__this_00->klass->vtable)._48_get_MaxFadeAlpha.methodPtr)(__this_00);
  if (fVar5 < fVar6) {
    fVar5 = (__this_00->fields)._currentAnimationValue;
    if (g_data_057ae0e3 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_CanvasGroup_GetComponent_CanvasGroup);
      g_data_057ae0e3 = '\x01';
    }
    pUVar4 = __this_00;
    pUVar2 = (UI_BasePopup_o *)
             UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if ((pUVar2 != (UI_BasePopup_o *)0x0) &&
       (pUVar3 = (UnityEngine_CanvasGroup_o *)
                 UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar2,MethodInfo_CanvasGroup_GetComponent_CanvasGroup),
       pUVar4 = pUVar2, pUVar3 != (UnityEngine_CanvasGroup_o *)0x0)) {
      UnityEngine_CanvasGroup__set_alpha(pUVar3,fVar5,(MethodInfo *)0x0);
      fVar5 = (__this_00->fields)._currentAnimationValue;
      uVar7 = (*(__this_00->klass->vtable)._47_get_MinFadeAlpha.methodPtr)
                        (__this_00,(__this_00->klass->vtable)._47_get_MinFadeAlpha.method);
      uVar8 = (*(__this_00->klass->vtable)._48_get_MaxFadeAlpha.methodPtr)
                        (__this_00,(__this_00->klass->vtable)._48_get_MaxFadeAlpha.method);
      fVar6 = (float)(*(__this_00->klass->vtable)._58_GetAnimationSpeed.methodPtr)
                               (uVar7,uVar8,__this_00,(__this_00->klass->vtable)._58_GetAnimationSpeed.method)
      ;
      fVar9 = UnityEngine_Time__get_unscaledDeltaTime((MethodInfo *)0x0);
      (__this_00->fields)._currentAnimationValue = fVar9 * fVar6 + fVar5;
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,0);
      (__this->fields).__1__state = 1;
      return (bool_conflict)CONCAT71((int7)((ulong)__this_00 >> 8),1);
    }
  }
  else {
    fVar5 = (float)(*(__this_00->klass->vtable)._48_get_MaxFadeAlpha.methodPtr)(__this_00);
    if (g_data_057ae0e3 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_CanvasGroup_GetComponent_CanvasGroup);
      g_data_057ae0e3 = '\x01';
    }
    pUVar2 = (UI_BasePopup_o *)
             UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    pUVar4 = __this_00;
    if ((pUVar2 != (UI_BasePopup_o *)0x0) &&
       (pUVar3 = (UnityEngine_CanvasGroup_o *)
                 UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar2,MethodInfo_CanvasGroup_GetComponent_CanvasGroup),
       pUVar4 = pUVar2, pUVar3 != (UnityEngine_CanvasGroup_o *)0x0)) {
      UnityEngine_CanvasGroup__set_alpha(pUVar3,fVar5,(MethodInfo *)0x0);
      return 0;
    }
  }
label_043461ae:
  il2cpp_runtime_helper_022b2c90();
  return (bool_conflict)(pUVar4->fields).m_CancellationTokenSource;
}


// UI.BasePopup.<FadeIn>d__38$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_BasePopup__FadeIn_d__38__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_BasePopup__FadeIn_d__38_o* __this, const MethodInfo* method);
// 0x43461c0

Il2CppObject *
UI_BasePopup__FadeIn_d__38__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_BasePopup__FadeIn_d__38_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.BasePopup.<FadeIn>d__38$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_BasePopup__FadeIn_d__38__System_Collections_IEnumerator_Reset (UI_BasePopup__FadeIn_d__38_o* __this, const MethodInfo* method);
// 0x43461d0

void UI_BasePopup__FadeIn_d__38__System_Collections_IEnumerator_Reset
               (UI_BasePopup__FadeIn_d__38_o *__this,MethodInfo *method)

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


// UI.BasePopup.<FadeIn>d__38$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_BasePopup__FadeIn_d__38__System_Collections_IEnumerator_get_Current (UI_BasePopup__FadeIn_d__38_o* __this, const MethodInfo* method);
// 0x4346210

Il2CppObject *
UI_BasePopup__FadeIn_d__38__System_Collections_IEnumerator_get_Current
          (UI_BasePopup__FadeIn_d__38_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.BasePopup.<FadeOut>d__39$$.ctor
// il2cpp: void UI_BasePopup__FadeOut_d__39___ctor (UI_BasePopup__FadeOut_d__39_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4345960

void UI_BasePopup__FadeOut_d__39___ctor
               (UI_BasePopup__FadeOut_d__39_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.BasePopup.<FadeOut>d__39$$System.IDisposable.Dispose
// il2cpp: void UI_BasePopup__FadeOut_d__39__System_IDisposable_Dispose (UI_BasePopup__FadeOut_d__39_o* __this, const MethodInfo* method);
// 0x4346220

void UI_BasePopup__FadeOut_d__39__System_IDisposable_Dispose
               (UI_BasePopup__FadeOut_d__39_o *__this,MethodInfo *method)

{
  return;
}


// UI.BasePopup.<FadeOut>d__39$$MoveNext
// il2cpp: bool UI_BasePopup__FadeOut_d__39__MoveNext (UI_BasePopup__FadeOut_d__39_o* __this, const MethodInfo* method);
// 0x4346230

bool_conflict UI_BasePopup__FadeOut_d__39__MoveNext(UI_BasePopup__FadeOut_d__39_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_BasePopup_o *__this_00;
  UI_BasePopup_o *pUVar2;
  UnityEngine_CanvasGroup_o *pUVar3;
  UI_BasePopup_o *pUVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  
  iVar1 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  pUVar4 = (UI_BasePopup_o *)__this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if (__this_00 == (UI_BasePopup_o *)0x0) goto label_04346451;
  }
  else {
    if (iVar1 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    if (__this_00 == (UI_BasePopup_o *)0x0) goto label_04346451;
    fVar5 = (float)(*(__this_00->klass->vtable)._48_get_MaxFadeAlpha.methodPtr)
                             (__this_00,(__this_00->klass->vtable)._48_get_MaxFadeAlpha.method);
    (__this_00->fields)._currentAnimationValue = fVar5;
  }
  fVar5 = (__this_00->fields)._currentAnimationValue;
  fVar6 = (float)(*(__this_00->klass->vtable)._47_get_MinFadeAlpha.methodPtr)(__this_00);
  pUVar4 = __this_00;
  if (fVar6 < fVar5) {
    fVar5 = (__this_00->fields)._currentAnimationValue;
    if (g_data_057ae0e3 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_CanvasGroup_GetComponent_CanvasGroup);
      g_data_057ae0e3 = '\x01';
    }
    pUVar2 = (UI_BasePopup_o *)
             UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if ((pUVar2 != (UI_BasePopup_o *)0x0) &&
       (pUVar3 = (UnityEngine_CanvasGroup_o *)
                 UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar2,MethodInfo_CanvasGroup_GetComponent_CanvasGroup),
       pUVar4 = pUVar2, pUVar3 != (UnityEngine_CanvasGroup_o *)0x0)) {
      UnityEngine_CanvasGroup__set_alpha(pUVar3,fVar5,(MethodInfo *)0x0);
      fVar5 = (__this_00->fields)._currentAnimationValue;
      uVar7 = (*(__this_00->klass->vtable)._47_get_MinFadeAlpha.methodPtr)
                        (__this_00,(__this_00->klass->vtable)._47_get_MinFadeAlpha.method);
      uVar8 = (*(__this_00->klass->vtable)._48_get_MaxFadeAlpha.methodPtr)
                        (__this_00,(__this_00->klass->vtable)._48_get_MaxFadeAlpha.method);
      fVar6 = (float)(*(__this_00->klass->vtable)._58_GetAnimationSpeed.methodPtr)
                               (uVar7,uVar8,__this_00,(__this_00->klass->vtable)._58_GetAnimationSpeed.method)
      ;
      fVar9 = UnityEngine_Time__get_unscaledDeltaTime((MethodInfo *)0x0);
      (__this_00->fields)._currentAnimationValue = fVar5 - fVar9 * fVar6;
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,0);
      (__this->fields).__1__state = 1;
      return (bool_conflict)CONCAT71((int7)((ulong)__this >> 8),1);
    }
  }
  else {
    fVar5 = (float)(*(__this_00->klass->vtable)._47_get_MinFadeAlpha.methodPtr)(__this_00);
    if (g_data_057ae0e3 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_CanvasGroup_GetComponent_CanvasGroup);
      g_data_057ae0e3 = '\x01';
    }
    pUVar2 = (UI_BasePopup_o *)
             UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if ((pUVar2 != (UI_BasePopup_o *)0x0) &&
       (pUVar3 = (UnityEngine_CanvasGroup_o *)
                 UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar2,MethodInfo_CanvasGroup_GetComponent_CanvasGroup),
       pUVar4 = pUVar2, pUVar3 != (UnityEngine_CanvasGroup_o *)0x0)) {
      UnityEngine_CanvasGroup__set_alpha(pUVar3,fVar5,(MethodInfo *)0x0);
      (*(__this_00->klass->vtable)._57_FinishHide.methodPtr)
                (__this_00,(__this_00->klass->vtable)._57_FinishHide.method);
      return 0;
    }
  }
label_04346451:
  il2cpp_runtime_helper_022b2c90();
  return (bool_conflict)(pUVar4->fields).m_CancellationTokenSource;
}


// UI.BasePopup.<FadeOut>d__39$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_BasePopup__FadeOut_d__39__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_BasePopup__FadeOut_d__39_o* __this, const MethodInfo* method);
// 0x4346460

Il2CppObject *
UI_BasePopup__FadeOut_d__39__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_BasePopup__FadeOut_d__39_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.BasePopup.<FadeOut>d__39$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_BasePopup__FadeOut_d__39__System_Collections_IEnumerator_Reset (UI_BasePopup__FadeOut_d__39_o* __this, const MethodInfo* method);
// 0x4346470

void UI_BasePopup__FadeOut_d__39__System_Collections_IEnumerator_Reset
               (UI_BasePopup__FadeOut_d__39_o *__this,MethodInfo *method)

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


// UI.BasePopup.<FadeOut>d__39$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_BasePopup__FadeOut_d__39__System_Collections_IEnumerator_get_Current (UI_BasePopup__FadeOut_d__39_o* __this, const MethodInfo* method);
// 0x43464b0

Il2CppObject *
UI_BasePopup__FadeOut_d__39__System_Collections_IEnumerator_get_Current
          (UI_BasePopup__FadeOut_d__39_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.BasePopup.<KillPopupIn>d__36$$.ctor
// il2cpp: void UI_BasePopup__KillPopupIn_d__36___ctor (UI_BasePopup__KillPopupIn_d__36_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4345900

void UI_BasePopup__KillPopupIn_d__36___ctor
               (UI_BasePopup__KillPopupIn_d__36_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.BasePopup.<KillPopupIn>d__36$$System.IDisposable.Dispose
// il2cpp: void UI_BasePopup__KillPopupIn_d__36__System_IDisposable_Dispose (UI_BasePopup__KillPopupIn_d__36_o* __this, const MethodInfo* method);
// 0x43464c0

void UI_BasePopup__KillPopupIn_d__36__System_IDisposable_Dispose
               (UI_BasePopup__KillPopupIn_d__36_o *__this,MethodInfo *method)

{
  return;
}


// UI.BasePopup.<KillPopupIn>d__36$$MoveNext
// il2cpp: bool UI_BasePopup__KillPopupIn_d__36__MoveNext (UI_BasePopup__KillPopupIn_d__36_o* __this, const MethodInfo* method);
// 0x43464d0

bool_conflict
UI_BasePopup__KillPopupIn_d__36__MoveNext(UI_BasePopup__KillPopupIn_d__36_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_BasePopup_o *__this_00;
  undefined8 uVar2;
  MethodInfo *method_00;
  MethodInfo *pMVar3;
  long lVar4;
  float fVar5;
  
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
    fVar5 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    (__this->fields)._startTime_5__2 = fVar5;
    (__this->fields)._endTime_5__3 = fVar5 + 0.6;
  }
  lVar4 = 0;
  fVar5 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  if (fVar5 < (__this->fields)._endTime_5__3) {
    lVar4 = 0;
    fVar5 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    if (__this_00 != (UI_BasePopup_o *)0x0) {
      pMVar3 = (MethodInfo *)(__this_00->fields).killPopupKeyframesIn;
      fVar5 = UI_BasePopup__EvaluateKeyframes
                        (__this_00,(fVar5 - (__this->fields)._startTime_5__2) / 0.6,
                         (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)pMVar3,method_00);
      UI_BasePopup__SetTransformScale(__this_00,fVar5,pMVar3);
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      uVar2 = il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,0);
      (__this->fields).__1__state = 1;
      return (bool_conflict)CONCAT71((int7)((ulong)uVar2 >> 8),1);
    }
  }
  else if (__this_00 != (UI_BasePopup_o *)0x0) {
    pMVar3 = (__this_00->klass->vtable)._46_get_MaxTweenScale.method;
    fVar5 = (float)(*(__this_00->klass->vtable)._46_get_MaxTweenScale.methodPtr)(__this_00);
    UI_BasePopup__SetTransformScale(__this_00,fVar5,pMVar3);
    return 0;
  }
  il2cpp_runtime_helper_022b2c90();
  return (bool_conflict)*(undefined8 *)(lVar4 + 0x18);
}


// UI.BasePopup.<KillPopupIn>d__36$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_BasePopup__KillPopupIn_d__36__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_BasePopup__KillPopupIn_d__36_o* __this, const MethodInfo* method);
// 0x43465b0

Il2CppObject *
UI_BasePopup__KillPopupIn_d__36__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_BasePopup__KillPopupIn_d__36_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.BasePopup.<KillPopupIn>d__36$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_BasePopup__KillPopupIn_d__36__System_Collections_IEnumerator_Reset (UI_BasePopup__KillPopupIn_d__36_o* __this, const MethodInfo* method);
// 0x43465c0

void UI_BasePopup__KillPopupIn_d__36__System_Collections_IEnumerator_Reset
               (UI_BasePopup__KillPopupIn_d__36_o *__this,MethodInfo *method)

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


// UI.BasePopup.<KillPopupIn>d__36$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_BasePopup__KillPopupIn_d__36__System_Collections_IEnumerator_get_Current (UI_BasePopup__KillPopupIn_d__36_o* __this, const MethodInfo* method);
// 0x4346600

Il2CppObject *
UI_BasePopup__KillPopupIn_d__36__System_Collections_IEnumerator_get_Current
          (UI_BasePopup__KillPopupIn_d__36_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.BasePopup.<KillPopupOut>d__37$$.ctor
// il2cpp: void UI_BasePopup__KillPopupOut_d__37___ctor (UI_BasePopup__KillPopupOut_d__37_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4345920

void UI_BasePopup__KillPopupOut_d__37___ctor
               (UI_BasePopup__KillPopupOut_d__37_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.BasePopup.<KillPopupOut>d__37$$System.IDisposable.Dispose
// il2cpp: void UI_BasePopup__KillPopupOut_d__37__System_IDisposable_Dispose (UI_BasePopup__KillPopupOut_d__37_o* __this, const MethodInfo* method);
// 0x4346610

void UI_BasePopup__KillPopupOut_d__37__System_IDisposable_Dispose
               (UI_BasePopup__KillPopupOut_d__37_o *__this,MethodInfo *method)

{
  return;
}


// UI.BasePopup.<KillPopupOut>d__37$$MoveNext
// il2cpp: bool UI_BasePopup__KillPopupOut_d__37__MoveNext (UI_BasePopup__KillPopupOut_d__37_o* __this, const MethodInfo* method);
// 0x4346620

bool_conflict
UI_BasePopup__KillPopupOut_d__37__MoveNext(UI_BasePopup__KillPopupOut_d__37_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_BasePopup_o *__this_00;
  undefined8 uVar2;
  MethodInfo *method_00;
  MethodInfo *pMVar3;
  long lVar4;
  float fVar5;
  
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
    fVar5 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    (__this->fields)._startTime_5__2 = fVar5;
    (__this->fields)._endTime_5__3 = fVar5 + 1.0;
  }
  lVar4 = 0;
  fVar5 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  if (fVar5 < (__this->fields)._endTime_5__3) {
    lVar4 = 0;
    fVar5 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    if (__this_00 != (UI_BasePopup_o *)0x0) {
      pMVar3 = (MethodInfo *)(__this_00->fields).killPopupKeyframesOut;
      fVar5 = UI_BasePopup__EvaluateKeyframes
                        (__this_00,((__this->fields)._startTime_5__2 - fVar5) + 1.0,
                         (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)pMVar3,method_00);
      UI_BasePopup__SetTransformScale(__this_00,fVar5,pMVar3);
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      uVar2 = il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,0);
      (__this->fields).__1__state = 1;
      return (bool_conflict)CONCAT71((int7)((ulong)uVar2 >> 8),1);
    }
  }
  else if (__this_00 != (UI_BasePopup_o *)0x0) {
    pMVar3 = (__this_00->klass->vtable)._45_get_MinTweenScale.method;
    fVar5 = (float)(*(__this_00->klass->vtable)._45_get_MinTweenScale.methodPtr)(__this_00);
    UI_BasePopup__SetTransformScale(__this_00,fVar5,pMVar3);
    (*(__this_00->klass->vtable)._57_FinishHide.methodPtr)
              (__this_00,(__this_00->klass->vtable)._57_FinishHide.method);
    return 0;
  }
  il2cpp_runtime_helper_022b2c90();
  return (bool_conflict)*(undefined8 *)(lVar4 + 0x18);
}


// UI.BasePopup.<KillPopupOut>d__37$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_BasePopup__KillPopupOut_d__37__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_BasePopup__KillPopupOut_d__37_o* __this, const MethodInfo* method);
// 0x4346720

Il2CppObject *
UI_BasePopup__KillPopupOut_d__37__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_BasePopup__KillPopupOut_d__37_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.BasePopup.<KillPopupOut>d__37$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_BasePopup__KillPopupOut_d__37__System_Collections_IEnumerator_Reset (UI_BasePopup__KillPopupOut_d__37_o* __this, const MethodInfo* method);
// 0x4346730

void UI_BasePopup__KillPopupOut_d__37__System_Collections_IEnumerator_Reset
               (UI_BasePopup__KillPopupOut_d__37_o *__this,MethodInfo *method)

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


// UI.BasePopup.<KillPopupOut>d__37$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_BasePopup__KillPopupOut_d__37__System_Collections_IEnumerator_get_Current (UI_BasePopup__KillPopupOut_d__37_o* __this, const MethodInfo* method);
// 0x4346770

Il2CppObject *
UI_BasePopup__KillPopupOut_d__37__System_Collections_IEnumerator_get_Current
          (UI_BasePopup__KillPopupOut_d__37_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.BasePopup.<TweenIn>d__30$$.ctor
// il2cpp: void UI_BasePopup__TweenIn_d__30___ctor (UI_BasePopup__TweenIn_d__30_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4345670

void UI_BasePopup__TweenIn_d__30___ctor
               (UI_BasePopup__TweenIn_d__30_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.BasePopup.<TweenIn>d__30$$System.IDisposable.Dispose
// il2cpp: void UI_BasePopup__TweenIn_d__30__System_IDisposable_Dispose (UI_BasePopup__TweenIn_d__30_o* __this, const MethodInfo* method);
// 0x4346780

void UI_BasePopup__TweenIn_d__30__System_IDisposable_Dispose
               (UI_BasePopup__TweenIn_d__30_o *__this,MethodInfo *method)

{
  return;
}


// UI.BasePopup.<TweenIn>d__30$$MoveNext
// il2cpp: bool UI_BasePopup__TweenIn_d__30__MoveNext (UI_BasePopup__TweenIn_d__30_o* __this, const MethodInfo* method);
// 0x4346790

bool_conflict UI_BasePopup__TweenIn_d__30__MoveNext(UI_BasePopup__TweenIn_d__30_o *__this,MethodInfo *method)

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
    if (__this_00 == (UI_BasePopup_o *)0x0) goto label_043468df;
  }
  else {
    if (iVar1 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    if (__this_00 == (UI_BasePopup_o *)0x0) {
label_043468df:
      il2cpp_runtime_helper_022b2c90();
      return (bool_conflict)(__this->fields).__2__current;
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
                           (uVar6,uVar7,__this_00,(__this_00->klass->vtable)._58_GetAnimationSpeed.method);
  fVar8 = UnityEngine_Time__get_unscaledDeltaTime((MethodInfo *)0x0);
  (__this_00->fields)._currentAnimationValue = fVar8 * fVar5 + fVar4;
  (__this->fields).__2__current = (Il2CppObject *)0x0;
  uVar2 = il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,0);
  (__this->fields).__1__state = 1;
  return (bool_conflict)CONCAT71((int7)((ulong)uVar2 >> 8),1);
}


// UI.BasePopup.<TweenIn>d__30$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_BasePopup__TweenIn_d__30__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_BasePopup__TweenIn_d__30_o* __this, const MethodInfo* method);
// 0x43468f0

Il2CppObject *
UI_BasePopup__TweenIn_d__30__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_BasePopup__TweenIn_d__30_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.BasePopup.<TweenIn>d__30$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_BasePopup__TweenIn_d__30__System_Collections_IEnumerator_Reset (UI_BasePopup__TweenIn_d__30_o* __this, const MethodInfo* method);
// 0x4346900

void UI_BasePopup__TweenIn_d__30__System_Collections_IEnumerator_Reset
               (UI_BasePopup__TweenIn_d__30_o *__this,MethodInfo *method)

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


// UI.BasePopup.<TweenIn>d__30$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_BasePopup__TweenIn_d__30__System_Collections_IEnumerator_get_Current (UI_BasePopup__TweenIn_d__30_o* __this, const MethodInfo* method);
// 0x4346940

Il2CppObject *
UI_BasePopup__TweenIn_d__30__System_Collections_IEnumerator_get_Current
          (UI_BasePopup__TweenIn_d__30_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.BasePopup.<TweenOut>d__31$$.ctor
// il2cpp: void UI_BasePopup__TweenOut_d__31___ctor (UI_BasePopup__TweenOut_d__31_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4345690

void UI_BasePopup__TweenOut_d__31___ctor
               (UI_BasePopup__TweenOut_d__31_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.BasePopup.<TweenOut>d__31$$System.IDisposable.Dispose
// il2cpp: void UI_BasePopup__TweenOut_d__31__System_IDisposable_Dispose (UI_BasePopup__TweenOut_d__31_o* __this, const MethodInfo* method);
// 0x4346950

void UI_BasePopup__TweenOut_d__31__System_IDisposable_Dispose
               (UI_BasePopup__TweenOut_d__31_o *__this,MethodInfo *method)

{
  return;
}


// UI.BasePopup.<TweenOut>d__31$$MoveNext
// il2cpp: bool UI_BasePopup__TweenOut_d__31__MoveNext (UI_BasePopup__TweenOut_d__31_o* __this, const MethodInfo* method);
// 0x4346960

bool_conflict
UI_BasePopup__TweenOut_d__31__MoveNext(UI_BasePopup__TweenOut_d__31_o *__this,MethodInfo *method)

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
    if (__this_00 == (UI_BasePopup_o *)0x0) goto label_04346aca;
  }
  else {
    if (iVar1 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    if (__this_00 == (UI_BasePopup_o *)0x0) {
label_04346aca:
      il2cpp_runtime_helper_022b2c90();
      return (bool_conflict)(__this->fields).__2__current;
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
                           (uVar6,uVar7,__this_00,(__this_00->klass->vtable)._58_GetAnimationSpeed.method);
  fVar8 = UnityEngine_Time__get_unscaledDeltaTime((MethodInfo *)0x0);
  (__this_00->fields)._currentAnimationValue = fVar4 - fVar8 * fVar5;
  (__this->fields).__2__current = (Il2CppObject *)0x0;
  uVar2 = il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,0);
  (__this->fields).__1__state = 1;
  return (bool_conflict)CONCAT71((int7)((ulong)uVar2 >> 8),1);
}


// UI.BasePopup.<TweenOut>d__31$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_BasePopup__TweenOut_d__31__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_BasePopup__TweenOut_d__31_o* __this, const MethodInfo* method);
// 0x4346ad0

Il2CppObject *
UI_BasePopup__TweenOut_d__31__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (UI_BasePopup__TweenOut_d__31_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.BasePopup.<TweenOut>d__31$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_BasePopup__TweenOut_d__31__System_Collections_IEnumerator_Reset (UI_BasePopup__TweenOut_d__31_o* __this, const MethodInfo* method);
// 0x4346ae0

void UI_BasePopup__TweenOut_d__31__System_Collections_IEnumerator_Reset
               (UI_BasePopup__TweenOut_d__31_o *__this,MethodInfo *method)

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


// UI.BasePopup.<TweenOut>d__31$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_BasePopup__TweenOut_d__31__System_Collections_IEnumerator_get_Current (UI_BasePopup__TweenOut_d__31_o* __this, const MethodInfo* method);
// 0x4346b20

Il2CppObject *
UI_BasePopup__TweenOut_d__31__System_Collections_IEnumerator_get_Current
          (UI_BasePopup__TweenOut_d__31_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.BasePopup$$get_MinTweenScale
// il2cpp: float UI_BasePopup__get_MinTweenScale (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x4344860

float UI_BasePopup__get_MinTweenScale(UI_BasePopup_o *__this,MethodInfo *method)

{
  return 0.3;
}


// UI.BasePopup$$get_MaxTweenScale
// il2cpp: float UI_BasePopup__get_MaxTweenScale (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x4344870

float UI_BasePopup__get_MaxTweenScale(UI_BasePopup_o *__this,MethodInfo *method)

{
  return 1.0;
}


// UI.BasePopup$$get_MinFadeAlpha
// il2cpp: float UI_BasePopup__get_MinFadeAlpha (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x4344880

float UI_BasePopup__get_MinFadeAlpha(UI_BasePopup_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.BasePopup$$get_MaxFadeAlpha
// il2cpp: float UI_BasePopup__get_MaxFadeAlpha (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x4344890

float UI_BasePopup__get_MaxFadeAlpha(UI_BasePopup_o *__this,MethodInfo *method)

{
  return 1.0;
}


// UI.BasePopup$$get_SpringDamping
// il2cpp: float UI_BasePopup__get_SpringDamping (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x43448a0

float UI_BasePopup__get_SpringDamping(UI_BasePopup_o *__this,MethodInfo *method)

{
  return 0.5;
}


// UI.BasePopup$$get_SpringStiffness
// il2cpp: float UI_BasePopup__get_SpringStiffness (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x43448b0

float UI_BasePopup__get_SpringStiffness(UI_BasePopup_o *__this,MethodInfo *method)

{
  return 0.1;
}


// UI.BasePopup$$get_AnimationTime
// il2cpp: float UI_BasePopup__get_AnimationTime (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x43448c0

float UI_BasePopup__get_AnimationTime(UI_BasePopup_o *__this,MethodInfo *method)

{
  return 0.1;
}


// UI.BasePopup$$get_ShowOnTop
// il2cpp: bool UI_BasePopup__get_ShowOnTop (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x43448d0

bool_conflict UI_BasePopup__get_ShowOnTop(UI_BasePopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.BasePopup$$get_UseSound
// il2cpp: bool UI_BasePopup__get_UseSound (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x43448e0

bool_conflict UI_BasePopup__get_UseSound(UI_BasePopup_o *__this,MethodInfo *method)

{
  return 0;
}


// UI.BasePopup$$get_PopupAnimationType
// il2cpp: int32_t UI_BasePopup__get_PopupAnimationType (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x43448f0

int32_t UI_BasePopup__get_PopupAnimationType(UI_BasePopup_o *__this,MethodInfo *method)

{
  return 2;
}


// UI.BasePopup$$Show
// il2cpp: void UI_BasePopup__Show (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x4344900

void UI_BasePopup__Show(UI_BasePopup_o *__this,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  char cVar2;
  int iVar3;
  bool_conflict bVar4;
  UnityEngine_Transform_o *pUVar5;
  UI_BasePopup_o *__this_04;
  undefined8 *puVar6;
  Il2CppClass *__this_05;
  MethodInfo *__this_06;
  Il2CppRGCTXData *pIVar7;
  Il2CppRGCTXData *__this_07;
  UnityEngine_CanvasGroup_o *__this_08;
  UnityEngine_Object_o *pUVar8;
  long *plVar9;
  MethodInfo *pMVar10;
  UI_BasePopup_o *pUVar11;
  Il2CppClass *pIVar12;
  Il2CppRGCTXData *__this_09;
  float fVar13;
  float fVar14;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  undefined1 auVar15 [12];
  undefined1 in_stack_ffffffffffffff10 [12];
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar16;
  System_Collections_Generic_HashSet_Enumerator_T__o SStack_c0;
  Il2CppRGCTXData *pIStack_a8;
  
  if (g_data_057ae0d7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae0d7 = '\x01';
  }
  if ((char)(__this->fields).IsActive != '\0') {
    return;
  }
  *(undefined1 *)&(__this->fields).IsActive = 1;
  cVar2 = (*(__this->klass->vtable)._53_get_UseSound.methodPtr)(__this);
  if (cVar2 != '\0') {
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UI_UIManager__PlaySound(0,(MethodInfo *)0x0);
  }
  UI_BasePanel__Show((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  cVar2 = (*(__this->klass->vtable)._52_get_ShowOnTop.methodPtr)(__this);
  if (cVar2 == '\0') {
label_043449b2:
    UnityEngine_MonoBehaviour__StopAllCoroutines((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
    iVar3 = (*(__this->klass->vtable)._54_get_PopupAnimationType.methodPtr)(__this);
    if (iVar3 == 2) {
      if (g_data_057ae0db == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_TweenIn_d__30);
        g_data_057ae0db = '\x01';
      }
      __this_04 = (UI_BasePopup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenIn_d__30);
      pUVar11 = __this_04;
      System_Object___ctor((Il2CppObject *)__this_04,(MethodInfo *)0x0);
      *(undefined4 *)&(__this_04->fields).m_CachedPtr = 0;
      if (__this_04 != (UI_BasePopup_o *)0x0) {
        (__this_04->fields).SinglePanel = (UnityEngine_Transform_o *)__this;
        il2cpp_runtime_helper_022b4080(&(__this_04->fields).SinglePanel,__this);
label_04344af1:
        UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                  ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_04,
                   (MethodInfo *)0x0);
        return;
      }
    }
    else {
      iVar3 = (*(__this->klass->vtable)._54_get_PopupAnimationType.methodPtr)(__this);
      if (iVar3 == 1) {
        if (g_data_057ae0e0 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_FadeIn_d__38);
          g_data_057ae0e0 = '\x01';
        }
        puVar6 = &TypeInfo_FadeIn_d__38;
      }
      else {
        iVar3 = (*(__this->klass->vtable)._54_get_PopupAnimationType.methodPtr)(__this);
        if (iVar3 != 3) {
          return;
        }
        if (g_data_057ae0de == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_KillPopupIn_d__36);
          g_data_057ae0de = '\x01';
        }
        puVar6 = &TypeInfo_KillPopupIn_d__36;
      }
      __this_04 = (UI_BasePopup_o *)il2cpp_runtime_helper_023052d0(*puVar6);
      pUVar11 = __this_04;
      System_Object___ctor((Il2CppObject *)__this_04,(MethodInfo *)0x0);
      *(undefined4 *)&(__this_04->fields).m_CachedPtr = 0;
      if (__this_04 != (UI_BasePopup_o *)0x0) {
        (__this_04->fields).SinglePanel = (UnityEngine_Transform_o *)__this;
        il2cpp_runtime_helper_022b4080(&(__this_04->fields).SinglePanel,__this);
        goto label_04344af1;
      }
    }
  }
  else {
    pUVar11 = __this;
    pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetAsLastSibling(pUVar5,(MethodInfo *)0x0);
      goto label_043449b2;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae0db == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenIn_d__30);
    g_data_057ae0db = '\x01';
  }
  __this_05 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenIn_d__30);
  pIVar12 = __this_05;
  System_Object___ctor((Il2CppObject *)__this_05,(MethodInfo *)0x0);
  *(undefined4 *)&(__this_05->_1).name = 0;
  if (__this_05 != (Il2CppClass *)0x0) {
    (__this_05->_1).byval_arg.data = pUVar11;
    il2cpp_runtime_helper_022b4080(&(__this_05->_1).byval_arg,pUVar11);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae0e0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_FadeIn_d__38);
    g_data_057ae0e0 = '\x01';
  }
  __this_06 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_FadeIn_d__38);
  pMVar10 = __this_06;
  System_Object___ctor((Il2CppObject *)__this_06,(MethodInfo *)0x0);
  *(undefined4 *)&__this_06->invoker_method = 0;
  if (__this_06 != (MethodInfo *)0x0) {
    __this_06->klass = pIVar12;
    il2cpp_runtime_helper_022b4080(&__this_06->klass,pIVar12);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae0de == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_KillPopupIn_d__36);
    g_data_057ae0de = '\x01';
  }
  pIVar7 = (Il2CppRGCTXData *)il2cpp_runtime_helper_023052d0(TypeInfo_KillPopupIn_d__36);
  __this_09 = pIVar7;
  System_Object___ctor((Il2CppObject *)pIVar7,(MethodInfo *)0x0);
  *(undefined4 *)(pIVar7 + 2) = 0;
  if (pIVar7 != (Il2CppRGCTXData *)0x0) {
    pIVar7[4].method = pMVar10;
    il2cpp_runtime_helper_022b4080(pIVar7 + 4,pMVar10);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae0d8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae0d8 = '\x01';
  }
  if (*(char *)(__this_09 + 0x12) != '\0') {
    return;
  }
  *(undefined1 *)(__this_09 + 0x12) = 1;
  cVar2 = (*__this_09->klass->vtable[0x35].methodPtr)(__this_09);
  if (cVar2 != '\0') {
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UI_UIManager__PlaySound(0,(MethodInfo *)0x0);
  }
  UI_BasePanel__Show((UI_BasePanel_o *)__this_09,(MethodInfo *)0x0);
  cVar2 = (*__this_09->klass->vtable[0x34].methodPtr)(__this_09);
  if (cVar2 == '\0') {
label_04344d10:
    UnityEngine_MonoBehaviour__StopAllCoroutines((UnityEngine_MonoBehaviour_o *)__this_09,(MethodInfo *)0x0);
    iVar3 = (*__this_09->klass->vtable[0x36].methodPtr)(__this_09,__this_09->klass->vtable[0x36].method);
    pIVar12 = __this_09->klass;
    if (iVar3 == 2) {
      pMVar10 = pIVar12->vtable[0x2e].method;
      fVar13 = (float)(*pIVar12->vtable[0x2e].methodPtr)(__this_09);
      UI_BasePopup__SetTransformScale((UI_BasePopup_o *)__this_09,fVar13,pMVar10);
      return;
    }
    iVar3 = (*pIVar12->vtable[0x36].methodPtr)(__this_09,pIVar12->vtable[0x36].method);
    if (iVar3 != 1) {
      return;
    }
    fVar13 = (float)(*__this_09->klass->vtable[0x30].methodPtr)(__this_09);
    if (g_data_057ae0e3 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_CanvasGroup_GetComponent_CanvasGroup);
      g_data_057ae0e3 = '\x01';
    }
    pIVar7 = __this_09;
    __this_07 = (Il2CppRGCTXData *)
                UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_09,(MethodInfo *)0x0);
    if ((__this_07 != (Il2CppRGCTXData *)0x0) &&
       (__this_08 = (UnityEngine_CanvasGroup_o *)
                    UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)__this_07,MethodInfo_CanvasGroup_GetComponent_CanvasGroup), pIVar7 = __this_07,
       __this_08 != (UnityEngine_CanvasGroup_o *)0x0)) {
      UnityEngine_CanvasGroup__set_alpha(__this_08,fVar13,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    pIVar7 = __this_09;
    pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_09,(MethodInfo *)0x0);
    if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetAsLastSibling(pUVar5,(MethodInfo *)0x0);
      goto label_04344d10;
    }
  }
  fVar13 = (float)il2cpp_runtime_helper_022b2c90();
  pIStack_a8 = __this_09;
  if (g_data_057ae0e2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_IgnoreScaler_GetComponent_IgnoreScaler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Transform_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_UnityEngine_Transform_GetEnumerat);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae0e2 = '\x01';
  }
  pSVar16 = (System_Collections_Generic_HashSet_Enumerator_T__c *)0x0;
  pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pIVar7,(MethodInfo *)0x0);
  if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
    pUVar8 = (UnityEngine_Object_o *)
             UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar5,MethodInfo_IgnoreScaler_GetComponent_IgnoreScaler);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar4 = UnityEngine_Object__op_Inequality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pIVar7,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      fVar14 = fVar13;
      if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_04345003;
    }
    else {
      if ((pUVar8 == (UnityEngine_Object_o *)0x0) || (pUVar5 == (UnityEngine_Transform_o *)0x0))
      goto label_04345003;
      fVar14 = *(float *)&pUVar8[1].monitor * fVar13;
    }
    value.fields.y = fVar14;
    value.fields.x = fVar14;
    value.fields.z = fVar14;
    UnityEngine_Transform__set_localScale(pUVar5,value,(MethodInfo *)0x0);
    if (pIVar7[0x11].method != (MethodInfo *)0x0) {
      System_Collections_Generic_HashSet_object___GetEnumerator
                (&SStack_c0,(System_Collections_Generic_HashSet_object__o *)pIVar7[0x11].method,MethodInfo_HashSet_1_T_Enumerator_UnityEngine_Transform_GetEnumerat);
      if (fVar13 <= 0.1) {
        fVar13 = 0.1;
      }
      pSVar16 = (System_Collections_Generic_HashSet_Enumerator_T__c *)SStack_c0.fields._set;
      while( true ) {
        __this_00.fields._version = (int32_t)fVar13;
        __this_00.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff10._0_8_;
        __this_00.fields._index = in_stack_ffffffffffffff10._8_4_;
        __this_00.fields._current = (Il2CppObject *)pSVar16;
        bVar4 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                          (__this_00,(MethodInfo_3219C40 *)&stack0xffffffffffffff20);
        if ((char)bVar4 == '\0') {
          __this_01.fields._version = (int32_t)fVar13;
          __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff10._0_8_;
          __this_01.fields._index = in_stack_ffffffffffffff10._8_4_;
          __this_01.fields._current = (Il2CppObject *)pSVar16;
          System_Collections_Generic_HashSet_Enumerator_object___Dispose
                    (__this_01,(MethodInfo_3219C30 *)&stack0xffffffffffffff20);
          return;
        }
        if ((UnityEngine_Transform_o *)SStack_c0.fields._current == (UnityEngine_Transform_o *)0x0) break;
        pUVar8 = (UnityEngine_Object_o *)
                 UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)SStack_c0.fields._current,MethodInfo_IgnoreScaler_GetComponent_IgnoreScaler);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar4 = UnityEngine_Object__op_Inequality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        fVar14 = 1.0;
        if ((char)bVar4 != '\0') {
          if (pUVar8 == (UnityEngine_Object_o *)0x0) goto label_04344ffe;
          fVar14 = *(float *)&pUVar8[1].monitor;
        }
        value_00.fields.z = fVar14 / fVar13;
        value_00.fields.y = value_00.fields.z;
        value_00.fields.x = value_00.fields.z;
        UnityEngine_Transform__set_localScale
                  ((UnityEngine_Transform_o *)SStack_c0.fields._current,value_00,(MethodInfo *)0x0);
      }
      il2cpp_runtime_helper_022b2c90();
label_04344ffe:
      il2cpp_runtime_helper_022b2c90();
    }
  }
label_04345003:
  auVar15 = il2cpp_runtime_helper_022b2c90();
  if (auVar15._8_4_ == 1) {
    plVar9 = (long *)__cxa_begin_catch(auVar15._0_8_);
    lVar1 = *plVar9;
    __cxa_end_catch();
    __this_02.fields._version = (int32_t)fVar13;
    __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff10._0_8_;
    __this_02.fields._index = in_stack_ffffffffffffff10._8_4_;
    __this_02.fields._current = (Il2CppObject *)pSVar16;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_02,(MethodInfo_3219C30 *)&stack0xffffffffffffff20);
    if (lVar1 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_03.fields._version = (int32_t)fVar13;
  __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff10._0_8_;
  __this_03.fields._index = in_stack_ffffffffffffff10._8_4_;
  __this_03.fields._current = (Il2CppObject *)pSVar16;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            (__this_03,(MethodInfo_3219C30 *)&stack0xffffffffffffff20);
  _Unwind_Resume(auVar15._0_8_);
}


// UI.BasePopup$$ShowImmediate
// il2cpp: void UI_BasePopup__ShowImmediate (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x4344c60

void UI_BasePopup__ShowImmediate(UI_BasePopup_o *__this,MethodInfo *method)

{
  UI_BasePopup_c *pUVar1;
  System_Collections_Generic_HashSet_object__o *__this_00;
  long lVar2;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  char cVar3;
  int iVar4;
  bool_conflict bVar5;
  UnityEngine_Transform_o *pUVar6;
  UI_BasePopup_o *__this_05;
  UnityEngine_CanvasGroup_o *__this_06;
  UnityEngine_Object_o *pUVar7;
  long *plVar8;
  MethodInfo *method_00;
  UI_BasePopup_o *__this_07;
  float fVar9;
  float fVar10;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  undefined1 auVar11 [12];
  undefined1 in_stack_ffffffffffffff70 [12];
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar12;
  System_Collections_Generic_HashSet_Enumerator_T__o SStack_60;
  Il2CppRGCTXData *pIStack_48;
  
  if (g_data_057ae0d8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae0d8 = '\x01';
  }
  if ((char)(__this->fields).IsActive != '\0') {
    return;
  }
  *(undefined1 *)&(__this->fields).IsActive = 1;
  cVar3 = (*(__this->klass->vtable)._53_get_UseSound.methodPtr)(__this);
  if (cVar3 != '\0') {
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UI_UIManager__PlaySound(0,(MethodInfo *)0x0);
  }
  UI_BasePanel__Show((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  cVar3 = (*(__this->klass->vtable)._52_get_ShowOnTop.methodPtr)(__this);
  if (cVar3 == '\0') {
label_04344d10:
    UnityEngine_MonoBehaviour__StopAllCoroutines((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
    iVar4 = (*(__this->klass->vtable)._54_get_PopupAnimationType.methodPtr)
                      (__this,(__this->klass->vtable)._54_get_PopupAnimationType.method);
    pUVar1 = __this->klass;
    if (iVar4 == 2) {
      method_00 = (pUVar1->vtable)._46_get_MaxTweenScale.method;
      fVar9 = (float)(*(pUVar1->vtable)._46_get_MaxTweenScale.methodPtr)(__this);
      UI_BasePopup__SetTransformScale(__this,fVar9,method_00);
      return;
    }
    iVar4 = (*(pUVar1->vtable)._54_get_PopupAnimationType.methodPtr)
                      (__this,(pUVar1->vtable)._54_get_PopupAnimationType.method);
    if (iVar4 != 1) {
      return;
    }
    fVar9 = (float)(*(__this->klass->vtable)._48_get_MaxFadeAlpha.methodPtr)(__this);
    if (g_data_057ae0e3 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_CanvasGroup_GetComponent_CanvasGroup);
      g_data_057ae0e3 = '\x01';
    }
    __this_07 = __this;
    __this_05 = (UI_BasePopup_o *)
                UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if ((__this_05 != (UI_BasePopup_o *)0x0) &&
       (__this_06 = (UnityEngine_CanvasGroup_o *)
                    UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)__this_05,MethodInfo_CanvasGroup_GetComponent_CanvasGroup), __this_07 = __this_05,
       __this_06 != (UnityEngine_CanvasGroup_o *)0x0)) {
      UnityEngine_CanvasGroup__set_alpha(__this_06,fVar9,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    __this_07 = __this;
    pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetAsLastSibling(pUVar6,(MethodInfo *)0x0);
      goto label_04344d10;
    }
  }
  fVar9 = (float)il2cpp_runtime_helper_022b2c90();
  pIStack_48 = (Il2CppRGCTXData *)__this;
  if (g_data_057ae0e2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_IgnoreScaler_GetComponent_IgnoreScaler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Transform_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_UnityEngine_Transform_GetEnumerat);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae0e2 = '\x01';
  }
  pSVar12 = (System_Collections_Generic_HashSet_Enumerator_T__c *)0x0;
  pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_07,(MethodInfo *)0x0);
  if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
    pUVar7 = (UnityEngine_Object_o *)
             UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar6,MethodInfo_IgnoreScaler_GetComponent_IgnoreScaler);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = UnityEngine_Object__op_Inequality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_07,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      fVar10 = fVar9;
      if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_04345003;
    }
    else {
      if ((pUVar7 == (UnityEngine_Object_o *)0x0) || (pUVar6 == (UnityEngine_Transform_o *)0x0))
      goto label_04345003;
      fVar10 = *(float *)&pUVar7[1].monitor * fVar9;
    }
    value.fields.y = fVar10;
    value.fields.x = fVar10;
    value.fields.z = fVar10;
    UnityEngine_Transform__set_localScale(pUVar6,value,(MethodInfo *)0x0);
    __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this_07->fields)._staticTransforms;
    if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___GetEnumerator(&SStack_60,__this_00,MethodInfo_HashSet_1_T_Enumerator_UnityEngine_Transform_GetEnumerat);
      if (fVar9 <= 0.1) {
        fVar9 = 0.1;
      }
      pSVar12 = (System_Collections_Generic_HashSet_Enumerator_T__c *)SStack_60.fields._set;
      while( true ) {
        __this_01.fields._version = (int32_t)fVar9;
        __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff70._0_8_;
        __this_01.fields._index = in_stack_ffffffffffffff70._8_4_;
        __this_01.fields._current = (Il2CppObject *)pSVar12;
        bVar5 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                          (__this_01,(MethodInfo_3219C40 *)&stack0xffffffffffffff80);
        if ((char)bVar5 == '\0') {
          __this_02.fields._version = (int32_t)fVar9;
          __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff70._0_8_;
          __this_02.fields._index = in_stack_ffffffffffffff70._8_4_;
          __this_02.fields._current = (Il2CppObject *)pSVar12;
          System_Collections_Generic_HashSet_Enumerator_object___Dispose
                    (__this_02,(MethodInfo_3219C30 *)&stack0xffffffffffffff80);
          return;
        }
        if ((UnityEngine_Transform_o *)SStack_60.fields._current == (UnityEngine_Transform_o *)0x0) break;
        pUVar7 = (UnityEngine_Object_o *)
                 UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)SStack_60.fields._current,MethodInfo_IgnoreScaler_GetComponent_IgnoreScaler);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar5 = UnityEngine_Object__op_Inequality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        fVar10 = 1.0;
        if ((char)bVar5 != '\0') {
          if (pUVar7 == (UnityEngine_Object_o *)0x0) goto label_04344ffe;
          fVar10 = *(float *)&pUVar7[1].monitor;
        }
        value_00.fields.z = fVar10 / fVar9;
        value_00.fields.y = value_00.fields.z;
        value_00.fields.x = value_00.fields.z;
        UnityEngine_Transform__set_localScale
                  ((UnityEngine_Transform_o *)SStack_60.fields._current,value_00,(MethodInfo *)0x0);
      }
      il2cpp_runtime_helper_022b2c90();
label_04344ffe:
      il2cpp_runtime_helper_022b2c90();
    }
  }
label_04345003:
  auVar11 = il2cpp_runtime_helper_022b2c90();
  if (auVar11._8_4_ == 1) {
    plVar8 = (long *)__cxa_begin_catch(auVar11._0_8_);
    lVar2 = *plVar8;
    __cxa_end_catch();
    __this_03.fields._version = (int32_t)fVar9;
    __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff70._0_8_;
    __this_03.fields._index = in_stack_ffffffffffffff70._8_4_;
    __this_03.fields._current = (Il2CppObject *)pSVar12;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_03,(MethodInfo_3219C30 *)&stack0xffffffffffffff80);
    if (lVar2 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_04.fields._version = (int32_t)fVar9;
  __this_04.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff70._0_8_;
  __this_04.fields._index = in_stack_ffffffffffffff70._8_4_;
  __this_04.fields._current = (Il2CppObject *)pSVar12;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            (__this_04,(MethodInfo_3219C30 *)&stack0xffffffffffffff80);
  _Unwind_Resume(auVar11._0_8_);
}


// UI.BasePopup$$HideAllPopups
// il2cpp: void UI_BasePopup__HideAllPopups (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x4345130

void UI_BasePopup__HideAllPopups(UI_BasePopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_BasePopup__o *__this_00;
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar2;
  long *plVar3;
  undefined1 auVar4 [12];
  System_Collections_Generic_List_T__o *pSVar5;
  Il2CppMethodPointer pIVar6;
  Il2CppObject *pIVar7;
  
  if (g_data_057ae0d9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UI_BasePopup_GetEnumerator);
    g_data_057ae0d9 = '\x01';
  }
  pSVar5 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar6 = (Il2CppMethodPointer)0x0;
  pIVar7 = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._popups;
  if (__this_00 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffd8,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_UI_BasePopup_GetEnumerator);
    while( true ) {
      __this_01.fields._8_8_ = pIVar6;
      __this_01.fields._list = pSVar5;
      __this_01.fields._current = pIVar7;
      bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffd8);
      if ((char)bVar2 == '\0') {
        __this_02.fields._8_8_ = pIVar6;
        __this_02.fields._list = pSVar5;
        __this_02.fields._current = pIVar7;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffd8);
        return;
      }
      if (pIVar7 == (Il2CppObject *)0x0) break;
      (*pIVar7->klass->vtable[0x37].methodPtr)(pIVar7,pIVar7->klass->vtable[0x37].method);
    }
    il2cpp_runtime_helper_022b2c90();
  }
  auVar4 = il2cpp_runtime_helper_022b2c90();
  if (auVar4._8_4_ == 1) {
    plVar3 = (long *)__cxa_begin_catch(auVar4._0_8_);
    lVar1 = *plVar3;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar6;
    __this_03.fields._list = pSVar5;
    __this_03.fields._current = pIVar7;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffd8);
    if (lVar1 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_04.fields._8_8_ = pIVar6;
  __this_04.fields._list = pSVar5;
  __this_04.fields._current = pIVar7;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffd8);
  _Unwind_Resume(auVar4._0_8_);
}


// UI.BasePopup$$Hide
// il2cpp: void UI_BasePopup__Hide (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x4345280

void UI_BasePopup__Hide(UI_BasePopup_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  char cVar1;
  int iVar2;
  bool_conflict bVar3;
  Il2CppClass *pIVar4;
  undefined8 *puVar5;
  Il2CppObject *__this_00;
  UnityEngine_MonoBehaviour_o *pUVar6;
  UnityEngine_GameObject_o *__this_01;
  undefined8 extraout_RDX;
  Il2CppClass *pIVar7;
  Il2CppObject *pIVar8;
  UnityEngine_MonoBehaviour_o *__this_02;
  
  if (g_data_057ae0da == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae0da = '\x01';
  }
  if ((char)(__this->fields).IsActive == '\0') {
    return;
  }
  *(undefined1 *)&(__this->fields).IsActive = 0;
  cVar1 = (*(__this->klass->vtable)._53_get_UseSound.methodPtr)(__this);
  if (cVar1 != '\0') {
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UI_UIManager__PlaySound(1,(MethodInfo *)0x0);
  }
  (*(__this->klass->vtable)._26_HideAllPopups.methodPtr)(__this);
  UnityEngine_MonoBehaviour__StopAllCoroutines((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  iVar2 = (*(__this->klass->vtable)._54_get_PopupAnimationType.methodPtr)(__this);
  if (iVar2 == 2) {
    if (g_data_057ae0dc == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_TweenOut_d__31);
      g_data_057ae0dc = '\x01';
    }
    pIVar4 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenOut_d__31);
    pIVar7 = pIVar4;
    System_Object___ctor((Il2CppObject *)pIVar4,(MethodInfo *)0x0);
    *(undefined4 *)&(pIVar4->_1).name = 0;
    if (pIVar4 == (Il2CppClass *)0x0) {
label_04345487:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae0dc == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_TweenOut_d__31);
        g_data_057ae0dc = '\x01';
      }
      __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenOut_d__31);
      pIVar8 = __this_00;
      System_Object___ctor(__this_00,(MethodInfo *)0x0);
      *(undefined4 *)&__this_00[1].klass = 0;
      if (__this_00 != (Il2CppObject *)0x0) {
        __this_00[2].klass = pIVar7;
        il2cpp_runtime_helper_022b4080(__this_00 + 2,pIVar7);
        return;
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae0e1 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_FadeOut_d__39);
        g_data_057ae0e1 = '\x01';
      }
      pIVar4 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_FadeOut_d__39);
      pIVar7 = pIVar4;
      System_Object___ctor((Il2CppObject *)pIVar4,(MethodInfo *)0x0);
      *(undefined4 *)&(pIVar4->_1).name = 0;
      if (pIVar4 != (Il2CppClass *)0x0) {
        (pIVar4->_1).byval_arg.data = pIVar8;
        il2cpp_runtime_helper_022b4080(&(pIVar4->_1).byval_arg,pIVar8);
        return;
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae0df == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_KillPopupOut_d__37);
        g_data_057ae0df = '\x01';
      }
      pUVar6 = (UnityEngine_MonoBehaviour_o *)il2cpp_runtime_helper_023052d0(TypeInfo_KillPopupOut_d__37);
      __this_02 = pUVar6;
      System_Object___ctor((Il2CppObject *)pUVar6,(MethodInfo *)0x0);
      *(undefined4 *)&(pUVar6->fields).m_CachedPtr = 0;
      if (pUVar6 == (UnityEngine_MonoBehaviour_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        *(undefined1 *)&__this_02[4].fields.m_CachedPtr = 0;
        pUVar6 = __this_02;
        __this_01 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
        if (__this_01 == (UnityEngine_GameObject_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          *(undefined1 *)&pUVar6[4].fields.m_CachedPtr = 0;
          return;
        }
        bVar3 = UnityEngine_GameObject__get_activeSelf(__this_01,(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') {
          return;
        }
        (*(code *)__this_02->klass[1].vtable._2_GetHashCode.method)(__this_02);
        UnityEngine_MonoBehaviour__StopAllCoroutines(__this_02,(MethodInfo *)0x0);
        (*__this_02->klass[3]._1.generic_class)(__this_02,__this_02->klass[3]._1.typeMetadataHandle);
        return;
      }
      pUVar6[1].klass = (UnityEngine_MonoBehaviour_c *)pIVar7;
      il2cpp_runtime_helper_022b4080(pUVar6 + 1,pIVar7);
      return;
    }
    (pIVar4->_1).byval_arg.data = __this;
    il2cpp_runtime_helper_022b4080(&(pIVar4->_1).byval_arg,__this);
  }
  else {
    iVar2 = (*(__this->klass->vtable)._54_get_PopupAnimationType.methodPtr)(__this);
    if (iVar2 == 1) {
      if (g_data_057ae0e1 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_FadeOut_d__39);
        g_data_057ae0e1 = '\x01';
      }
      puVar5 = &TypeInfo_FadeOut_d__39;
    }
    else {
      iVar2 = (*(__this->klass->vtable)._54_get_PopupAnimationType.methodPtr)(__this);
      if (iVar2 != 3) {
        iVar2 = (*(__this->klass->vtable)._54_get_PopupAnimationType.methodPtr)
                          (__this,(__this->klass->vtable)._54_get_PopupAnimationType.method);
        if (iVar2 != 0) {
          return;
        }
        vtableDispatch = (__this->klass->vtable)._57_FinishHide.methodPtr;
        (*vtableDispatch)
                  (__this,(__this->klass->vtable)._57_FinishHide.method,extraout_RDX,vtableDispatch);
        return;
      }
      if (g_data_057ae0df == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_KillPopupOut_d__37);
        g_data_057ae0df = '\x01';
      }
      puVar5 = &TypeInfo_KillPopupOut_d__37;
    }
    pIVar4 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(*puVar5);
    pIVar7 = pIVar4;
    System_Object___ctor((Il2CppObject *)pIVar4,(MethodInfo *)0x0);
    *(undefined4 *)&(pIVar4->_1).name = 0;
    if (pIVar4 == (Il2CppClass *)0x0) goto label_04345487;
    (pIVar4->_1).byval_arg.data = __this;
    il2cpp_runtime_helper_022b4080(&(pIVar4->_1).byval_arg,__this);
  }
  UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)pIVar4,
             (MethodInfo *)0x0);
  return;
}


// UI.BasePopup$$HideImmediate
// il2cpp: void UI_BasePopup__HideImmediate (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x43455e0

void UI_BasePopup__HideImmediate(UI_BasePopup_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar1;
  UnityEngine_GameObject_o *__this_00;
  undefined8 extraout_RDX;
  UI_BasePopup_o *pUVar2;
  
  *(undefined1 *)&(__this->fields).IsActive = 0;
  pUVar2 = __this;
  __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    *(undefined1 *)&(pUVar2->fields).IsActive = 0;
    return;
  }
  bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    (*(__this->klass->vtable)._26_HideAllPopups.methodPtr)(__this);
    UnityEngine_MonoBehaviour__StopAllCoroutines((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
    vtableDispatch = (__this->klass->vtable)._57_FinishHide.methodPtr;
    (*vtableDispatch)
              (__this,(__this->klass->vtable)._57_FinishHide.method,extraout_RDX,vtableDispatch);
    return;
  }
  return;
}


// UI.BasePopup$$OnDisable
// il2cpp: void UI_BasePopup__OnDisable (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x4345640

void UI_BasePopup__OnDisable(UI_BasePopup_o *__this,MethodInfo *method)

{
  *(undefined1 *)&(__this->fields).IsActive = 0;
  return;
}


// UI.BasePopup$$FinishHide
// il2cpp: void UI_BasePopup__FinishHide (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x4345650

void UI_BasePopup__FinishHide(UI_BasePopup_o *__this,MethodInfo *method)

{
  long lVar1;
  UnityEngine_GameObject_o *obj;
  long lVar2;
  intptr_t iVar3;
  undefined4 uVar4;
  MethodInfo *method_00;
  
  uVar4 = 0;
  obj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (obj == (UnityEngine_GameObject_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    *(undefined4 *)&(__this->fields).m_CachedPtr = uVar4;
    return;
  }
  if (g_data_057b4d24 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_IntPtr_MarshalNullCheck_GameObject,0,0);
    g_data_057b4d24 = '\x01';
  }
  lVar1 = MethodInfo_IntPtr_MarshalNullCheck_GameObject;
  lVar2 = *(long *)(MethodInfo_IntPtr_MarshalNullCheck_GameObject + 0x38);
  if (lVar2 == 0) {
    il2cpp_runtime_helper_02300a20(MethodInfo_IntPtr_MarshalNullCheck_GameObject);
    lVar2 = *(long *)(lVar1 + 0x38);
  }
  method_00 = *(MethodInfo **)(lVar2 + 8);
  iVar3 = UnityEngine_Object_MarshalledUnityObject__MarshalAssumeNotNull_object_
                    ((Il2CppObject *)obj,(MethodInfo_26701D0 *)method_00);
  if (iVar3 != 0) {
    if (g_data_057b4d90 == (code *)0x0) {
      g_data_057b4d90 = (code *)il2cpp_runtime_helper_022b28d0(
                                         "UnityEngine.GameObject::SetActive_Injected(System.IntPtr,System.Boolean)"
                                         );
    }
    (*g_data_057b4d90)(iVar3,0);
    return;
  }
  UnityEngine_Object_MarshalledUnityObject__ThrowNullExceptionObjectImpl((Il2CppObject *)obj,method_00);
  if (g_data_057b4d90 == (code *)0x0) {
    g_data_057b4d90 = (code *)il2cpp_runtime_helper_022b28d0(
                                       "UnityEngine.GameObject::SetActive_Injected(System.IntPtr,System.Boolean)"
                                       );
  }
  (*g_data_057b4d90)(obj,(ulong)method_00 & 0xff);
  return;
}


// UI.BasePopup$$TweenIn
// il2cpp: System_Collections_IEnumerator_o* UI_BasePopup__TweenIn (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x4344b10

System_Collections_IEnumerator_o * UI_BasePopup__TweenIn(UI_BasePopup_o *__this,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  char cVar2;
  int iVar3;
  bool_conflict bVar4;
  Il2CppClass *__this_04;
  MethodInfo *__this_05;
  Il2CppRGCTXData *pIVar5;
  System_Collections_IEnumerator_o *pSVar6;
  UnityEngine_Transform_o *pUVar7;
  System_Collections_IEnumerator_o *extraout_RAX;
  Il2CppRGCTXData *__this_06;
  UnityEngine_CanvasGroup_o *__this_07;
  System_Collections_IEnumerator_o *extraout_RAX_00;
  UnityEngine_Object_o *pUVar8;
  System_Collections_IEnumerator_o *extraout_RAX_01;
  long *plVar9;
  System_Collections_IEnumerator_o *extraout_RAX_02;
  MethodInfo *pMVar10;
  Il2CppClass *pIVar11;
  Il2CppRGCTXData *__this_08;
  float fVar12;
  float fVar13;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  undefined1 auVar14 [12];
  undefined1 in_stack_ffffffffffffff28 [12];
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar15;
  System_Collections_Generic_HashSet_Enumerator_T__o SStack_a8;
  Il2CppRGCTXData *pIStack_90;
  
  if (g_data_057ae0db == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenIn_d__30);
    g_data_057ae0db = '\x01';
  }
  __this_04 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenIn_d__30);
  pIVar11 = __this_04;
  System_Object___ctor((Il2CppObject *)__this_04,(MethodInfo *)0x0);
  *(undefined4 *)&(__this_04->_1).name = 0;
  if (__this_04 != (Il2CppClass *)0x0) {
    (__this_04->_1).byval_arg.data = __this;
    il2cpp_runtime_helper_022b4080(&(__this_04->_1).byval_arg,__this);
    return (System_Collections_IEnumerator_o *)__this_04;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae0e0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_FadeIn_d__38);
    g_data_057ae0e0 = '\x01';
  }
  __this_05 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_FadeIn_d__38);
  pMVar10 = __this_05;
  System_Object___ctor((Il2CppObject *)__this_05,(MethodInfo *)0x0);
  *(undefined4 *)&__this_05->invoker_method = 0;
  if (__this_05 != (MethodInfo *)0x0) {
    __this_05->klass = pIVar11;
    il2cpp_runtime_helper_022b4080(&__this_05->klass,pIVar11);
    return (System_Collections_IEnumerator_o *)__this_05;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae0de == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_KillPopupIn_d__36);
    g_data_057ae0de = '\x01';
  }
  pIVar5 = (Il2CppRGCTXData *)il2cpp_runtime_helper_023052d0(TypeInfo_KillPopupIn_d__36);
  __this_08 = pIVar5;
  System_Object___ctor((Il2CppObject *)pIVar5,(MethodInfo *)0x0);
  *(undefined4 *)(pIVar5 + 2) = 0;
  if (pIVar5 != (Il2CppRGCTXData *)0x0) {
    pIVar5[4].method = pMVar10;
    il2cpp_runtime_helper_022b4080(pIVar5 + 4,pMVar10);
    return (System_Collections_IEnumerator_o *)pIVar5;
  }
  pSVar6 = (System_Collections_IEnumerator_o *)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae0d8 == '\0') {
    pSVar6 = (System_Collections_IEnumerator_o *)il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae0d8 = '\x01';
  }
  if (*(char *)(__this_08 + 0x12) != '\0') {
    return pSVar6;
  }
  *(undefined1 *)(__this_08 + 0x12) = 1;
  cVar2 = (*__this_08->klass->vtable[0x35].methodPtr)(__this_08);
  if (cVar2 != '\0') {
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UI_UIManager__PlaySound(0,(MethodInfo *)0x0);
  }
  UI_BasePanel__Show((UI_BasePanel_o *)__this_08,(MethodInfo *)0x0);
  cVar2 = (*__this_08->klass->vtable[0x34].methodPtr)(__this_08);
  if (cVar2 == '\0') {
label_04344d10:
    UnityEngine_MonoBehaviour__StopAllCoroutines((UnityEngine_MonoBehaviour_o *)__this_08,(MethodInfo *)0x0);
    iVar3 = (*__this_08->klass->vtable[0x36].methodPtr)(__this_08,__this_08->klass->vtable[0x36].method);
    pIVar11 = __this_08->klass;
    if (iVar3 == 2) {
      pMVar10 = pIVar11->vtable[0x2e].method;
      fVar12 = (float)(*pIVar11->vtable[0x2e].methodPtr)(__this_08);
      UI_BasePopup__SetTransformScale((UI_BasePopup_o *)__this_08,fVar12,pMVar10);
      return extraout_RAX;
    }
    pSVar6 = (System_Collections_IEnumerator_o *)
             (*pIVar11->vtable[0x36].methodPtr)(__this_08,pIVar11->vtable[0x36].method);
    if ((int)pSVar6 != 1) {
      return pSVar6;
    }
    fVar12 = (float)(*__this_08->klass->vtable[0x30].methodPtr)(__this_08);
    if (g_data_057ae0e3 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_CanvasGroup_GetComponent_CanvasGroup);
      g_data_057ae0e3 = '\x01';
    }
    pIVar5 = __this_08;
    __this_06 = (Il2CppRGCTXData *)
                UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_08,(MethodInfo *)0x0);
    if ((__this_06 != (Il2CppRGCTXData *)0x0) &&
       (__this_07 = (UnityEngine_CanvasGroup_o *)
                    UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)__this_06,MethodInfo_CanvasGroup_GetComponent_CanvasGroup), pIVar5 = __this_06,
       __this_07 != (UnityEngine_CanvasGroup_o *)0x0)) {
      UnityEngine_CanvasGroup__set_alpha(__this_07,fVar12,(MethodInfo *)0x0);
      return extraout_RAX_00;
    }
  }
  else {
    pIVar5 = __this_08;
    pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_08,(MethodInfo *)0x0);
    if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetAsLastSibling(pUVar7,(MethodInfo *)0x0);
      goto label_04344d10;
    }
  }
  fVar12 = (float)il2cpp_runtime_helper_022b2c90();
  pIStack_90 = __this_08;
  if (g_data_057ae0e2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_IgnoreScaler_GetComponent_IgnoreScaler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Transform_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_UnityEngine_Transform_GetEnumerat);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae0e2 = '\x01';
  }
  pSVar15 = (System_Collections_Generic_HashSet_Enumerator_T__c *)0x0;
  pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pIVar5,(MethodInfo *)0x0);
  if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
    pUVar8 = (UnityEngine_Object_o *)
             UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar7,MethodInfo_IgnoreScaler_GetComponent_IgnoreScaler);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar4 = UnityEngine_Object__op_Inequality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pIVar5,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      fVar13 = fVar12;
      if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_04345003;
    }
    else {
      if ((pUVar8 == (UnityEngine_Object_o *)0x0) || (pUVar7 == (UnityEngine_Transform_o *)0x0))
      goto label_04345003;
      fVar13 = *(float *)&pUVar8[1].monitor * fVar12;
    }
    value.fields.y = fVar13;
    value.fields.x = fVar13;
    value.fields.z = fVar13;
    UnityEngine_Transform__set_localScale(pUVar7,value,(MethodInfo *)0x0);
    if (pIVar5[0x11].method != (MethodInfo *)0x0) {
      System_Collections_Generic_HashSet_object___GetEnumerator
                (&SStack_a8,(System_Collections_Generic_HashSet_object__o *)pIVar5[0x11].method,MethodInfo_HashSet_1_T_Enumerator_UnityEngine_Transform_GetEnumerat);
      if (fVar12 <= 0.1) {
        fVar12 = 0.1;
      }
      pSVar15 = (System_Collections_Generic_HashSet_Enumerator_T__c *)SStack_a8.fields._set;
      while( true ) {
        __this_00.fields._version = (int32_t)fVar12;
        __this_00.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff28._0_8_;
        __this_00.fields._index = in_stack_ffffffffffffff28._8_4_;
        __this_00.fields._current = (Il2CppObject *)pSVar15;
        bVar4 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                          (__this_00,(MethodInfo_3219C40 *)&stack0xffffffffffffff38);
        if ((char)bVar4 == '\0') {
          __this_01.fields._version = (int32_t)fVar12;
          __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff28._0_8_;
          __this_01.fields._index = in_stack_ffffffffffffff28._8_4_;
          __this_01.fields._current = (Il2CppObject *)pSVar15;
          System_Collections_Generic_HashSet_Enumerator_object___Dispose
                    (__this_01,(MethodInfo_3219C30 *)&stack0xffffffffffffff38);
          return extraout_RAX_01;
        }
        if ((UnityEngine_Transform_o *)SStack_a8.fields._current == (UnityEngine_Transform_o *)0x0) break;
        pUVar8 = (UnityEngine_Object_o *)
                 UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)SStack_a8.fields._current,MethodInfo_IgnoreScaler_GetComponent_IgnoreScaler);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar4 = UnityEngine_Object__op_Inequality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        fVar13 = 1.0;
        if ((char)bVar4 != '\0') {
          if (pUVar8 == (UnityEngine_Object_o *)0x0) goto label_04344ffe;
          fVar13 = *(float *)&pUVar8[1].monitor;
        }
        value_00.fields.z = fVar13 / fVar12;
        value_00.fields.y = value_00.fields.z;
        value_00.fields.x = value_00.fields.z;
        UnityEngine_Transform__set_localScale
                  ((UnityEngine_Transform_o *)SStack_a8.fields._current,value_00,(MethodInfo *)0x0);
      }
      il2cpp_runtime_helper_022b2c90();
label_04344ffe:
      il2cpp_runtime_helper_022b2c90();
    }
  }
label_04345003:
  auVar14 = il2cpp_runtime_helper_022b2c90();
  if (auVar14._8_4_ == 1) {
    plVar9 = (long *)__cxa_begin_catch(auVar14._0_8_);
    lVar1 = *plVar9;
    __cxa_end_catch();
    __this_02.fields._version = (int32_t)fVar12;
    __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff28._0_8_;
    __this_02.fields._index = in_stack_ffffffffffffff28._8_4_;
    __this_02.fields._current = (Il2CppObject *)pSVar15;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_02,(MethodInfo_3219C30 *)&stack0xffffffffffffff38);
    if (lVar1 == 0) {
      return extraout_RAX_02;
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_03.fields._version = (int32_t)fVar12;
  __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff28._0_8_;
  __this_03.fields._index = in_stack_ffffffffffffff28._8_4_;
  __this_03.fields._current = (Il2CppObject *)pSVar15;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            (__this_03,(MethodInfo_3219C30 *)&stack0xffffffffffffff38);
  _Unwind_Resume(auVar14._0_8_);
}


// UI.BasePopup$$TweenOut
// il2cpp: System_Collections_IEnumerator_o* UI_BasePopup__TweenOut (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x4345490

System_Collections_IEnumerator_o * UI_BasePopup__TweenOut(UI_BasePopup_o *__this,MethodInfo *method)

{
  code *vtableDispatch;
  bool_conflict bVar1;
  Il2CppObject *__this_00;
  Il2CppClass *__this_01;
  UnityEngine_MonoBehaviour_o *pUVar2;
  UnityEngine_GameObject_o *__this_02;
  undefined4 extraout_var;
  System_Collections_IEnumerator_o *pSVar3;
  undefined8 extraout_RDX;
  Il2CppObject *pIVar4;
  Il2CppClass *pIVar5;
  UnityEngine_MonoBehaviour_o *__this_03;
  
  if (g_data_057ae0dc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenOut_d__31);
    g_data_057ae0dc = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenOut_d__31);
  pIVar4 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_helper_022b4080(__this_00 + 2,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae0e1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_FadeOut_d__39);
    g_data_057ae0e1 = '\x01';
  }
  __this_01 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_FadeOut_d__39);
  pIVar5 = __this_01;
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&(__this_01->_1).name = 0;
  if (__this_01 != (Il2CppClass *)0x0) {
    (__this_01->_1).byval_arg.data = pIVar4;
    il2cpp_runtime_helper_022b4080(&(__this_01->_1).byval_arg,pIVar4);
    return (System_Collections_IEnumerator_o *)__this_01;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae0df == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_KillPopupOut_d__37);
    g_data_057ae0df = '\x01';
  }
  pUVar2 = (UnityEngine_MonoBehaviour_o *)il2cpp_runtime_helper_023052d0(TypeInfo_KillPopupOut_d__37);
  __this_03 = pUVar2;
  System_Object___ctor((Il2CppObject *)pUVar2,(MethodInfo *)0x0);
  *(undefined4 *)&(pUVar2->fields).m_CachedPtr = 0;
  if (pUVar2 != (UnityEngine_MonoBehaviour_o *)0x0) {
    pUVar2[1].klass = (UnityEngine_MonoBehaviour_c *)pIVar5;
    il2cpp_runtime_helper_022b4080(pUVar2 + 1,pIVar5);
    return (System_Collections_IEnumerator_o *)pUVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined1 *)&__this_03[4].fields.m_CachedPtr = 0;
  pUVar2 = __this_03;
  __this_02 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
  if (__this_02 == (UnityEngine_GameObject_o *)0x0) {
    pSVar3 = (System_Collections_IEnumerator_o *)il2cpp_runtime_helper_022b2c90();
    *(undefined1 *)&pUVar2[4].fields.m_CachedPtr = 0;
    return pSVar3;
  }
  bVar1 = UnityEngine_GameObject__get_activeSelf(__this_02,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    (*(code *)__this_03->klass[1].vtable._2_GetHashCode.method)(__this_03);
    UnityEngine_MonoBehaviour__StopAllCoroutines(__this_03,(MethodInfo *)0x0);
    vtableDispatch = __this_03->klass[3]._1.generic_class;
    pSVar3 = (System_Collections_IEnumerator_o *)
             (*vtableDispatch)
                       (__this_03,__this_03->klass[3]._1.typeMetadataHandle,extraout_RDX,vtableDispatch
                       );
    return pSVar3;
  }
  return (System_Collections_IEnumerator_o *)CONCAT44(extraout_var,bVar1);
}


// UI.BasePopup$$EvaluateKeyframes
// il2cpp: float UI_BasePopup__EvaluateKeyframes (UI_BasePopup_o* __this, float timePercentage, System_Collections_Generic_List_BasePopup_AnimationKeyframe__o* keyframes, const MethodInfo* method);
// 0x43456b0

float UI_BasePopup__EvaluateKeyframes
                (UI_BasePopup_o *__this,float timePercentage,
                System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *keyframes,MethodInfo *method)

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
  
  if (g_data_057ae0dd == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_AnimationKeyframe_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UI_BasePopup_AnimationKeyframe_GetEn);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_AnimationKeyframe_get_Item);
    g_data_057ae0dd = '\x01';
    method = extraout_RDX;
  }
  if ((keyframes == (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)0x0) ||
     ((keyframes->fields)._size == 0)) {
    fVar3 = (float)(*(__this->klass->vtable)._45_get_MinTweenScale.methodPtr)
                             (__this,(__this->klass->vtable)._45_get_MinTweenScale.method,method);
    return fVar3;
  }
  UVar1 = System_Collections_Generic_List_BasePopup_AnimationKeyframe___get_Item(keyframes,0,MethodInfo_BasePopup_AnimationKeyframe_get_Item);
  local_48._8_4_ = extraout_XMM0_Dc;
  local_48._0_4_ = UVar1.fields.time;
  local_48._4_4_ = UVar1.fields.scale;
  local_48._12_4_ = extraout_XMM0_Dd;
  UVar1 = System_Collections_Generic_List_BasePopup_AnimationKeyframe___get_Item
                    (keyframes,(keyframes->fields)._size + -1,MethodInfo_BasePopup_AnimationKeyframe_get_Item);
  System_Collections_Generic_List_BasePopup_AnimationKeyframe___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_28,keyframes,MethodInfo_List_1_T_Enumerator_UI_BasePopup_AnimationKeyframe_GetEn);
  do {
    while( true ) {
      __this_00.fields._8_8_ = local_28._8_8_;
      __this_00.fields._list = (System_Collections_Generic_List_T__o *)local_28._0_8_;
      __this_00.fields._current = local_18;
      bVar2 = System_Collections_Generic_List_Enumerator_BasePopup_AnimationKeyframe___MoveNext
                        (__this_00,(MethodInfo_322CCE0 *)&stack0xffffffffffffff88);
      if ((char)bVar2 == '\0') {
        local_58 = UVar1.fields.time;
        fStack_54 = UVar1.fields.scale;
        goto label_04345804;
      }
      local_58 = SUB84(local_18,0);
      fStack_54 = (float)((ulong)local_18 >> 0x20);
      if ((timePercentage <= local_58) || (local_58 <= (float)local_48._0_4_)) break;
      local_48._8_8_ = 0;
      local_48._0_8_ = local_18;
    }
  } while (local_58 < timePercentage);
label_04345804:
  __this_01.fields._8_8_ = local_28._8_8_;
  __this_01.fields._list = (System_Collections_Generic_List_T__o *)local_28._0_8_;
  __this_01.fields._current = local_18;
  System_Collections_Generic_List_Enumerator_BasePopup_AnimationKeyframe___Dispose
            (__this_01,(MethodInfo_322CCD0 *)&stack0xffffffffffffff88);
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
// 0x4344bf0

System_Collections_IEnumerator_o * UI_BasePopup__KillPopupIn(UI_BasePopup_o *__this,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  long lVar2;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  char cVar3;
  int iVar4;
  bool_conflict bVar5;
  Il2CppRGCTXData *pIVar6;
  System_Collections_IEnumerator_o *pSVar7;
  UnityEngine_Transform_o *pUVar8;
  System_Collections_IEnumerator_o *extraout_RAX;
  Il2CppRGCTXData *__this_04;
  UnityEngine_CanvasGroup_o *__this_05;
  System_Collections_IEnumerator_o *extraout_RAX_00;
  UnityEngine_Object_o *pUVar9;
  System_Collections_IEnumerator_o *extraout_RAX_01;
  long *plVar10;
  System_Collections_IEnumerator_o *extraout_RAX_02;
  MethodInfo *method_00;
  Il2CppRGCTXData *__this_06;
  float fVar11;
  float fVar12;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  undefined1 auVar13 [12];
  undefined1 in_stack_ffffffffffffff58 [12];
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar14;
  System_Collections_Generic_HashSet_Enumerator_T__o SStack_78;
  Il2CppRGCTXData *pIStack_60;
  
  if (g_data_057ae0de == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_KillPopupIn_d__36);
    g_data_057ae0de = '\x01';
  }
  pIVar6 = (Il2CppRGCTXData *)il2cpp_runtime_helper_023052d0(TypeInfo_KillPopupIn_d__36);
  __this_06 = pIVar6;
  System_Object___ctor((Il2CppObject *)pIVar6,(MethodInfo *)0x0);
  *(undefined4 *)(pIVar6 + 2) = 0;
  if (pIVar6 != (Il2CppRGCTXData *)0x0) {
    pIVar6[4].method = (MethodInfo *)__this;
    il2cpp_runtime_helper_022b4080(pIVar6 + 4,__this);
    return (System_Collections_IEnumerator_o *)pIVar6;
  }
  pSVar7 = (System_Collections_IEnumerator_o *)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae0d8 == '\0') {
    pSVar7 = (System_Collections_IEnumerator_o *)il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae0d8 = '\x01';
  }
  if (*(char *)(__this_06 + 0x12) != '\0') {
    return pSVar7;
  }
  *(undefined1 *)(__this_06 + 0x12) = 1;
  cVar3 = (*__this_06->klass->vtable[0x35].methodPtr)(__this_06);
  if (cVar3 != '\0') {
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UI_UIManager__PlaySound(0,(MethodInfo *)0x0);
  }
  UI_BasePanel__Show((UI_BasePanel_o *)__this_06,(MethodInfo *)0x0);
  cVar3 = (*__this_06->klass->vtable[0x34].methodPtr)(__this_06);
  if (cVar3 == '\0') {
label_04344d10:
    UnityEngine_MonoBehaviour__StopAllCoroutines((UnityEngine_MonoBehaviour_o *)__this_06,(MethodInfo *)0x0);
    iVar4 = (*__this_06->klass->vtable[0x36].methodPtr)(__this_06,__this_06->klass->vtable[0x36].method);
    pIVar1 = __this_06->klass;
    if (iVar4 == 2) {
      method_00 = pIVar1->vtable[0x2e].method;
      fVar11 = (float)(*pIVar1->vtable[0x2e].methodPtr)(__this_06);
      UI_BasePopup__SetTransformScale((UI_BasePopup_o *)__this_06,fVar11,method_00);
      return extraout_RAX;
    }
    pSVar7 = (System_Collections_IEnumerator_o *)
             (*pIVar1->vtable[0x36].methodPtr)(__this_06,pIVar1->vtable[0x36].method);
    if ((int)pSVar7 != 1) {
      return pSVar7;
    }
    fVar11 = (float)(*__this_06->klass->vtable[0x30].methodPtr)(__this_06);
    if (g_data_057ae0e3 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_CanvasGroup_GetComponent_CanvasGroup);
      g_data_057ae0e3 = '\x01';
    }
    pIVar6 = __this_06;
    __this_04 = (Il2CppRGCTXData *)
                UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_06,(MethodInfo *)0x0);
    if ((__this_04 != (Il2CppRGCTXData *)0x0) &&
       (__this_05 = (UnityEngine_CanvasGroup_o *)
                    UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)__this_04,MethodInfo_CanvasGroup_GetComponent_CanvasGroup), pIVar6 = __this_04,
       __this_05 != (UnityEngine_CanvasGroup_o *)0x0)) {
      UnityEngine_CanvasGroup__set_alpha(__this_05,fVar11,(MethodInfo *)0x0);
      return extraout_RAX_00;
    }
  }
  else {
    pIVar6 = __this_06;
    pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_06,(MethodInfo *)0x0);
    if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetAsLastSibling(pUVar8,(MethodInfo *)0x0);
      goto label_04344d10;
    }
  }
  fVar11 = (float)il2cpp_runtime_helper_022b2c90();
  pIStack_60 = __this_06;
  if (g_data_057ae0e2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_IgnoreScaler_GetComponent_IgnoreScaler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Transform_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_UnityEngine_Transform_GetEnumerat);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae0e2 = '\x01';
  }
  pSVar14 = (System_Collections_Generic_HashSet_Enumerator_T__c *)0x0;
  pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pIVar6,(MethodInfo *)0x0);
  if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
    pUVar9 = (UnityEngine_Object_o *)
             UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar8,MethodInfo_IgnoreScaler_GetComponent_IgnoreScaler);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = UnityEngine_Object__op_Inequality(pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pIVar6,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      fVar12 = fVar11;
      if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto label_04345003;
    }
    else {
      if ((pUVar9 == (UnityEngine_Object_o *)0x0) || (pUVar8 == (UnityEngine_Transform_o *)0x0))
      goto label_04345003;
      fVar12 = *(float *)&pUVar9[1].monitor * fVar11;
    }
    value.fields.y = fVar12;
    value.fields.x = fVar12;
    value.fields.z = fVar12;
    UnityEngine_Transform__set_localScale(pUVar8,value,(MethodInfo *)0x0);
    if (pIVar6[0x11].method != (MethodInfo *)0x0) {
      System_Collections_Generic_HashSet_object___GetEnumerator
                (&SStack_78,(System_Collections_Generic_HashSet_object__o *)pIVar6[0x11].method,MethodInfo_HashSet_1_T_Enumerator_UnityEngine_Transform_GetEnumerat);
      if (fVar11 <= 0.1) {
        fVar11 = 0.1;
      }
      pSVar14 = (System_Collections_Generic_HashSet_Enumerator_T__c *)SStack_78.fields._set;
      while( true ) {
        __this_00.fields._version = (int32_t)fVar11;
        __this_00.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff58._0_8_;
        __this_00.fields._index = in_stack_ffffffffffffff58._8_4_;
        __this_00.fields._current = (Il2CppObject *)pSVar14;
        bVar5 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                          (__this_00,(MethodInfo_3219C40 *)&stack0xffffffffffffff68);
        if ((char)bVar5 == '\0') {
          __this_01.fields._version = (int32_t)fVar11;
          __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff58._0_8_;
          __this_01.fields._index = in_stack_ffffffffffffff58._8_4_;
          __this_01.fields._current = (Il2CppObject *)pSVar14;
          System_Collections_Generic_HashSet_Enumerator_object___Dispose
                    (__this_01,(MethodInfo_3219C30 *)&stack0xffffffffffffff68);
          return extraout_RAX_01;
        }
        if ((UnityEngine_Transform_o *)SStack_78.fields._current == (UnityEngine_Transform_o *)0x0) break;
        pUVar9 = (UnityEngine_Object_o *)
                 UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)SStack_78.fields._current,MethodInfo_IgnoreScaler_GetComponent_IgnoreScaler);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar5 = UnityEngine_Object__op_Inequality(pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        fVar12 = 1.0;
        if ((char)bVar5 != '\0') {
          if (pUVar9 == (UnityEngine_Object_o *)0x0) goto label_04344ffe;
          fVar12 = *(float *)&pUVar9[1].monitor;
        }
        value_00.fields.z = fVar12 / fVar11;
        value_00.fields.y = value_00.fields.z;
        value_00.fields.x = value_00.fields.z;
        UnityEngine_Transform__set_localScale
                  ((UnityEngine_Transform_o *)SStack_78.fields._current,value_00,(MethodInfo *)0x0);
      }
      il2cpp_runtime_helper_022b2c90();
label_04344ffe:
      il2cpp_runtime_helper_022b2c90();
    }
  }
label_04345003:
  auVar13 = il2cpp_runtime_helper_022b2c90();
  if (auVar13._8_4_ == 1) {
    plVar10 = (long *)__cxa_begin_catch(auVar13._0_8_);
    lVar2 = *plVar10;
    __cxa_end_catch();
    __this_02.fields._version = (int32_t)fVar11;
    __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff58._0_8_;
    __this_02.fields._index = in_stack_ffffffffffffff58._8_4_;
    __this_02.fields._current = (Il2CppObject *)pSVar14;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_02,(MethodInfo_3219C30 *)&stack0xffffffffffffff68);
    if (lVar2 == 0) {
      return extraout_RAX_02;
    }
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_03.fields._version = (int32_t)fVar11;
  __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff58._0_8_;
  __this_03.fields._index = in_stack_ffffffffffffff58._8_4_;
  __this_03.fields._current = (Il2CppObject *)pSVar14;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            (__this_03,(MethodInfo_3219C30 *)&stack0xffffffffffffff68);
  _Unwind_Resume(auVar13._0_8_);
}


// UI.BasePopup$$KillPopupOut
// il2cpp: System_Collections_IEnumerator_o* UI_BasePopup__KillPopupOut (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x4345570

System_Collections_IEnumerator_o * UI_BasePopup__KillPopupOut(UI_BasePopup_o *__this,MethodInfo *method)

{
  code *vtableDispatch;
  bool_conflict bVar1;
  UnityEngine_MonoBehaviour_o *pUVar2;
  UnityEngine_GameObject_o *__this_00;
  undefined4 extraout_var;
  System_Collections_IEnumerator_o *pSVar3;
  undefined8 extraout_RDX;
  UnityEngine_MonoBehaviour_o *__this_01;
  
  if (g_data_057ae0df == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_KillPopupOut_d__37);
    g_data_057ae0df = '\x01';
  }
  pUVar2 = (UnityEngine_MonoBehaviour_o *)il2cpp_runtime_helper_023052d0(TypeInfo_KillPopupOut_d__37);
  __this_01 = pUVar2;
  System_Object___ctor((Il2CppObject *)pUVar2,(MethodInfo *)0x0);
  *(undefined4 *)&(pUVar2->fields).m_CachedPtr = 0;
  if (pUVar2 != (UnityEngine_MonoBehaviour_o *)0x0) {
    pUVar2[1].klass = (UnityEngine_MonoBehaviour_c *)__this;
    il2cpp_runtime_helper_022b4080(pUVar2 + 1,__this);
    return (System_Collections_IEnumerator_o *)pUVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined1 *)&__this_01[4].fields.m_CachedPtr = 0;
  pUVar2 = __this_01;
  __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
    pSVar3 = (System_Collections_IEnumerator_o *)il2cpp_runtime_helper_022b2c90();
    *(undefined1 *)&pUVar2[4].fields.m_CachedPtr = 0;
    return pSVar3;
  }
  bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    (*(code *)__this_01->klass[1].vtable._2_GetHashCode.method)(__this_01);
    UnityEngine_MonoBehaviour__StopAllCoroutines(__this_01,(MethodInfo *)0x0);
    vtableDispatch = __this_01->klass[3]._1.generic_class;
    pSVar3 = (System_Collections_IEnumerator_o *)
             (*vtableDispatch)
                       (__this_01,__this_01->klass[3]._1.typeMetadataHandle,extraout_RDX,vtableDispatch
                       );
    return pSVar3;
  }
  return (System_Collections_IEnumerator_o *)CONCAT44(extraout_var,bVar1);
}


// UI.BasePopup$$FadeIn
// il2cpp: System_Collections_IEnumerator_o* UI_BasePopup__FadeIn (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x4344b80

System_Collections_IEnumerator_o * UI_BasePopup__FadeIn(UI_BasePopup_o *__this,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  long lVar2;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  char cVar3;
  int iVar4;
  bool_conflict bVar5;
  MethodInfo *__this_04;
  Il2CppRGCTXData *pIVar6;
  System_Collections_IEnumerator_o *pSVar7;
  UnityEngine_Transform_o *pUVar8;
  System_Collections_IEnumerator_o *extraout_RAX;
  Il2CppRGCTXData *__this_05;
  UnityEngine_CanvasGroup_o *__this_06;
  System_Collections_IEnumerator_o *extraout_RAX_00;
  UnityEngine_Object_o *pUVar9;
  System_Collections_IEnumerator_o *extraout_RAX_01;
  long *plVar10;
  System_Collections_IEnumerator_o *extraout_RAX_02;
  MethodInfo *pMVar11;
  Il2CppRGCTXData *__this_07;
  float fVar12;
  float fVar13;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  undefined1 auVar14 [12];
  undefined1 in_stack_ffffffffffffff40 [12];
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar15;
  System_Collections_Generic_HashSet_Enumerator_T__o SStack_90;
  Il2CppRGCTXData *pIStack_78;
  
  if (g_data_057ae0e0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_FadeIn_d__38);
    g_data_057ae0e0 = '\x01';
  }
  __this_04 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_FadeIn_d__38);
  pMVar11 = __this_04;
  System_Object___ctor((Il2CppObject *)__this_04,(MethodInfo *)0x0);
  *(undefined4 *)&__this_04->invoker_method = 0;
  if (__this_04 != (MethodInfo *)0x0) {
    __this_04->klass = (Il2CppClass *)__this;
    il2cpp_runtime_helper_022b4080(&__this_04->klass,__this);
    return (System_Collections_IEnumerator_o *)__this_04;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae0de == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_KillPopupIn_d__36);
    g_data_057ae0de = '\x01';
  }
  pIVar6 = (Il2CppRGCTXData *)il2cpp_runtime_helper_023052d0(TypeInfo_KillPopupIn_d__36);
  __this_07 = pIVar6;
  System_Object___ctor((Il2CppObject *)pIVar6,(MethodInfo *)0x0);
  *(undefined4 *)(pIVar6 + 2) = 0;
  if (pIVar6 != (Il2CppRGCTXData *)0x0) {
    pIVar6[4].method = pMVar11;
    il2cpp_runtime_helper_022b4080(pIVar6 + 4,pMVar11);
    return (System_Collections_IEnumerator_o *)pIVar6;
  }
  pSVar7 = (System_Collections_IEnumerator_o *)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae0d8 == '\0') {
    pSVar7 = (System_Collections_IEnumerator_o *)il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae0d8 = '\x01';
  }
  if (*(char *)(__this_07 + 0x12) != '\0') {
    return pSVar7;
  }
  *(undefined1 *)(__this_07 + 0x12) = 1;
  cVar3 = (*__this_07->klass->vtable[0x35].methodPtr)(__this_07);
  if (cVar3 != '\0') {
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UI_UIManager__PlaySound(0,(MethodInfo *)0x0);
  }
  UI_BasePanel__Show((UI_BasePanel_o *)__this_07,(MethodInfo *)0x0);
  cVar3 = (*__this_07->klass->vtable[0x34].methodPtr)(__this_07);
  if (cVar3 == '\0') {
label_04344d10:
    UnityEngine_MonoBehaviour__StopAllCoroutines((UnityEngine_MonoBehaviour_o *)__this_07,(MethodInfo *)0x0);
    iVar4 = (*__this_07->klass->vtable[0x36].methodPtr)(__this_07,__this_07->klass->vtable[0x36].method);
    pIVar1 = __this_07->klass;
    if (iVar4 == 2) {
      pMVar11 = pIVar1->vtable[0x2e].method;
      fVar12 = (float)(*pIVar1->vtable[0x2e].methodPtr)(__this_07);
      UI_BasePopup__SetTransformScale((UI_BasePopup_o *)__this_07,fVar12,pMVar11);
      return extraout_RAX;
    }
    pSVar7 = (System_Collections_IEnumerator_o *)
             (*pIVar1->vtable[0x36].methodPtr)(__this_07,pIVar1->vtable[0x36].method);
    if ((int)pSVar7 != 1) {
      return pSVar7;
    }
    fVar12 = (float)(*__this_07->klass->vtable[0x30].methodPtr)(__this_07);
    if (g_data_057ae0e3 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_CanvasGroup_GetComponent_CanvasGroup);
      g_data_057ae0e3 = '\x01';
    }
    pIVar6 = __this_07;
    __this_05 = (Il2CppRGCTXData *)
                UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_07,(MethodInfo *)0x0);
    if ((__this_05 != (Il2CppRGCTXData *)0x0) &&
       (__this_06 = (UnityEngine_CanvasGroup_o *)
                    UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)__this_05,MethodInfo_CanvasGroup_GetComponent_CanvasGroup), pIVar6 = __this_05,
       __this_06 != (UnityEngine_CanvasGroup_o *)0x0)) {
      UnityEngine_CanvasGroup__set_alpha(__this_06,fVar12,(MethodInfo *)0x0);
      return extraout_RAX_00;
    }
  }
  else {
    pIVar6 = __this_07;
    pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_07,(MethodInfo *)0x0);
    if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetAsLastSibling(pUVar8,(MethodInfo *)0x0);
      goto label_04344d10;
    }
  }
  fVar12 = (float)il2cpp_runtime_helper_022b2c90();
  pIStack_78 = __this_07;
  if (g_data_057ae0e2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_IgnoreScaler_GetComponent_IgnoreScaler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Transform_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_UnityEngine_Transform_GetEnumerat);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae0e2 = '\x01';
  }
  pSVar15 = (System_Collections_Generic_HashSet_Enumerator_T__c *)0x0;
  pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pIVar6,(MethodInfo *)0x0);
  if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
    pUVar9 = (UnityEngine_Object_o *)
             UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar8,MethodInfo_IgnoreScaler_GetComponent_IgnoreScaler);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = UnityEngine_Object__op_Inequality(pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pIVar6,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      fVar13 = fVar12;
      if (pUVar8 == (UnityEngine_Transform_o *)0x0) goto label_04345003;
    }
    else {
      if ((pUVar9 == (UnityEngine_Object_o *)0x0) || (pUVar8 == (UnityEngine_Transform_o *)0x0))
      goto label_04345003;
      fVar13 = *(float *)&pUVar9[1].monitor * fVar12;
    }
    value.fields.y = fVar13;
    value.fields.x = fVar13;
    value.fields.z = fVar13;
    UnityEngine_Transform__set_localScale(pUVar8,value,(MethodInfo *)0x0);
    if (pIVar6[0x11].method != (MethodInfo *)0x0) {
      System_Collections_Generic_HashSet_object___GetEnumerator
                (&SStack_90,(System_Collections_Generic_HashSet_object__o *)pIVar6[0x11].method,MethodInfo_HashSet_1_T_Enumerator_UnityEngine_Transform_GetEnumerat);
      if (fVar12 <= 0.1) {
        fVar12 = 0.1;
      }
      pSVar15 = (System_Collections_Generic_HashSet_Enumerator_T__c *)SStack_90.fields._set;
      while( true ) {
        __this_00.fields._version = (int32_t)fVar12;
        __this_00.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff40._0_8_;
        __this_00.fields._index = in_stack_ffffffffffffff40._8_4_;
        __this_00.fields._current = (Il2CppObject *)pSVar15;
        bVar5 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                          (__this_00,(MethodInfo_3219C40 *)&stack0xffffffffffffff50);
        if ((char)bVar5 == '\0') {
          __this_01.fields._version = (int32_t)fVar12;
          __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff40._0_8_;
          __this_01.fields._index = in_stack_ffffffffffffff40._8_4_;
          __this_01.fields._current = (Il2CppObject *)pSVar15;
          System_Collections_Generic_HashSet_Enumerator_object___Dispose
                    (__this_01,(MethodInfo_3219C30 *)&stack0xffffffffffffff50);
          return extraout_RAX_01;
        }
        if ((UnityEngine_Transform_o *)SStack_90.fields._current == (UnityEngine_Transform_o *)0x0) break;
        pUVar9 = (UnityEngine_Object_o *)
                 UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)SStack_90.fields._current,MethodInfo_IgnoreScaler_GetComponent_IgnoreScaler);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar5 = UnityEngine_Object__op_Inequality(pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        fVar13 = 1.0;
        if ((char)bVar5 != '\0') {
          if (pUVar9 == (UnityEngine_Object_o *)0x0) goto label_04344ffe;
          fVar13 = *(float *)&pUVar9[1].monitor;
        }
        value_00.fields.z = fVar13 / fVar12;
        value_00.fields.y = value_00.fields.z;
        value_00.fields.x = value_00.fields.z;
        UnityEngine_Transform__set_localScale
                  ((UnityEngine_Transform_o *)SStack_90.fields._current,value_00,(MethodInfo *)0x0);
      }
      il2cpp_runtime_helper_022b2c90();
label_04344ffe:
      il2cpp_runtime_helper_022b2c90();
    }
  }
label_04345003:
  auVar14 = il2cpp_runtime_helper_022b2c90();
  if (auVar14._8_4_ == 1) {
    plVar10 = (long *)__cxa_begin_catch(auVar14._0_8_);
    lVar2 = *plVar10;
    __cxa_end_catch();
    __this_02.fields._version = (int32_t)fVar12;
    __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff40._0_8_;
    __this_02.fields._index = in_stack_ffffffffffffff40._8_4_;
    __this_02.fields._current = (Il2CppObject *)pSVar15;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_02,(MethodInfo_3219C30 *)&stack0xffffffffffffff50);
    if (lVar2 == 0) {
      return extraout_RAX_02;
    }
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_03.fields._version = (int32_t)fVar12;
  __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff40._0_8_;
  __this_03.fields._index = in_stack_ffffffffffffff40._8_4_;
  __this_03.fields._current = (Il2CppObject *)pSVar15;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            (__this_03,(MethodInfo_3219C30 *)&stack0xffffffffffffff50);
  _Unwind_Resume(auVar14._0_8_);
}


// UI.BasePopup$$FadeOut
// il2cpp: System_Collections_IEnumerator_o* UI_BasePopup__FadeOut (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x4345500

System_Collections_IEnumerator_o * UI_BasePopup__FadeOut(UI_BasePopup_o *__this,MethodInfo *method)

{
  code *vtableDispatch;
  bool_conflict bVar1;
  Il2CppClass *__this_00;
  UnityEngine_MonoBehaviour_o *pUVar2;
  UnityEngine_GameObject_o *__this_01;
  undefined4 extraout_var;
  System_Collections_IEnumerator_o *pSVar3;
  undefined8 extraout_RDX;
  Il2CppClass *pIVar4;
  UnityEngine_MonoBehaviour_o *__this_02;
  
  if (g_data_057ae0e1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_FadeOut_d__39);
    g_data_057ae0e1 = '\x01';
  }
  __this_00 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_FadeOut_d__39);
  pIVar4 = __this_00;
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&(__this_00->_1).name = 0;
  if (__this_00 != (Il2CppClass *)0x0) {
    (__this_00->_1).byval_arg.data = __this;
    il2cpp_runtime_helper_022b4080(&(__this_00->_1).byval_arg,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae0df == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_KillPopupOut_d__37);
    g_data_057ae0df = '\x01';
  }
  pUVar2 = (UnityEngine_MonoBehaviour_o *)il2cpp_runtime_helper_023052d0(TypeInfo_KillPopupOut_d__37);
  __this_02 = pUVar2;
  System_Object___ctor((Il2CppObject *)pUVar2,(MethodInfo *)0x0);
  *(undefined4 *)&(pUVar2->fields).m_CachedPtr = 0;
  if (pUVar2 != (UnityEngine_MonoBehaviour_o *)0x0) {
    pUVar2[1].klass = (UnityEngine_MonoBehaviour_c *)pIVar4;
    il2cpp_runtime_helper_022b4080(pUVar2 + 1,pIVar4);
    return (System_Collections_IEnumerator_o *)pUVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined1 *)&__this_02[4].fields.m_CachedPtr = 0;
  pUVar2 = __this_02;
  __this_01 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
  if (__this_01 == (UnityEngine_GameObject_o *)0x0) {
    pSVar3 = (System_Collections_IEnumerator_o *)il2cpp_runtime_helper_022b2c90();
    *(undefined1 *)&pUVar2[4].fields.m_CachedPtr = 0;
    return pSVar3;
  }
  bVar1 = UnityEngine_GameObject__get_activeSelf(__this_01,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    (*(code *)__this_02->klass[1].vtable._2_GetHashCode.method)(__this_02);
    UnityEngine_MonoBehaviour__StopAllCoroutines(__this_02,(MethodInfo *)0x0);
    vtableDispatch = __this_02->klass[3]._1.generic_class;
    pSVar3 = (System_Collections_IEnumerator_o *)
             (*vtableDispatch)
                       (__this_02,__this_02->klass[3]._1.typeMetadataHandle,extraout_RDX,vtableDispatch
                       );
    return pSVar3;
  }
  return (System_Collections_IEnumerator_o *)CONCAT44(extraout_var,bVar1);
}


// UI.BasePopup$$SetTransformScale
// il2cpp: void UI_BasePopup__SetTransformScale (UI_BasePopup_o* __this, float scale, const MethodInfo* method);
// 0x4344de0

void UI_BasePopup__SetTransformScale(UI_BasePopup_o *__this,float scale,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  long lVar1;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  bool_conflict bVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Object_o *pUVar4;
  long *plVar5;
  float fVar6;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  undefined1 auVar7 [12];
  undefined1 in_stack_ffffffffffffff88 [12];
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar8;
  System_Collections_Generic_HashSet_Enumerator_T__o local_48;
  
  if (g_data_057ae0e2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_IgnoreScaler_GetComponent_IgnoreScaler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Transform_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_UnityEngine_Transform_GetEnumerat);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae0e2 = '\x01';
  }
  pSVar8 = (System_Collections_Generic_HashSet_Enumerator_T__c *)0x0;
  pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
    pUVar4 = (UnityEngine_Object_o *)
             UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar3,MethodInfo_IgnoreScaler_GetComponent_IgnoreScaler);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar2 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      fVar6 = scale;
      if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_04345003;
    }
    else {
      if ((pUVar4 == (UnityEngine_Object_o *)0x0) || (pUVar3 == (UnityEngine_Transform_o *)0x0))
      goto label_04345003;
      fVar6 = *(float *)&pUVar4[1].monitor * scale;
    }
    value.fields.y = fVar6;
    value.fields.x = fVar6;
    value.fields.z = fVar6;
    UnityEngine_Transform__set_localScale(pUVar3,value,(MethodInfo *)0x0);
    __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._staticTransforms;
    if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___GetEnumerator(&local_48,__this_00,MethodInfo_HashSet_1_T_Enumerator_UnityEngine_Transform_GetEnumerat);
      if (scale <= 0.1) {
        scale = 0.1;
      }
      pSVar8 = (System_Collections_Generic_HashSet_Enumerator_T__c *)local_48.fields._set;
      while( true ) {
        __this_01.fields._version = (int32_t)scale;
        __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff88._0_8_;
        __this_01.fields._index = in_stack_ffffffffffffff88._8_4_;
        __this_01.fields._current = (Il2CppObject *)pSVar8;
        bVar2 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                          (__this_01,(MethodInfo_3219C40 *)&stack0xffffffffffffff98);
        if ((char)bVar2 == '\0') {
          __this_02.fields._version = (int32_t)scale;
          __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff88._0_8_;
          __this_02.fields._index = in_stack_ffffffffffffff88._8_4_;
          __this_02.fields._current = (Il2CppObject *)pSVar8;
          System_Collections_Generic_HashSet_Enumerator_object___Dispose
                    (__this_02,(MethodInfo_3219C30 *)&stack0xffffffffffffff98);
          return;
        }
        if ((UnityEngine_Transform_o *)local_48.fields._current == (UnityEngine_Transform_o *)0x0) break;
        pUVar4 = (UnityEngine_Object_o *)
                 UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)local_48.fields._current,MethodInfo_IgnoreScaler_GetComponent_IgnoreScaler);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar2 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        fVar6 = 1.0;
        if ((char)bVar2 != '\0') {
          if (pUVar4 == (UnityEngine_Object_o *)0x0) goto label_04344ffe;
          fVar6 = *(float *)&pUVar4[1].monitor;
        }
        value_00.fields.z = fVar6 / scale;
        value_00.fields.y = value_00.fields.z;
        value_00.fields.x = value_00.fields.z;
        UnityEngine_Transform__set_localScale
                  ((UnityEngine_Transform_o *)local_48.fields._current,value_00,(MethodInfo *)0x0);
      }
      il2cpp_runtime_helper_022b2c90();
label_04344ffe:
      il2cpp_runtime_helper_022b2c90();
    }
  }
label_04345003:
  auVar7 = il2cpp_runtime_helper_022b2c90();
  if (auVar7._8_4_ == 1) {
    plVar5 = (long *)__cxa_begin_catch(auVar7._0_8_);
    lVar1 = *plVar5;
    __cxa_end_catch();
    __this_03.fields._version = (int32_t)scale;
    __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff88._0_8_;
    __this_03.fields._index = in_stack_ffffffffffffff88._8_4_;
    __this_03.fields._current = (Il2CppObject *)pSVar8;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_03,(MethodInfo_3219C30 *)&stack0xffffffffffffff98);
    if (lVar1 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_04.fields._version = (int32_t)scale;
  __this_04.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_ffffffffffffff88._0_8_;
  __this_04.fields._index = in_stack_ffffffffffffff88._8_4_;
  __this_04.fields._current = (Il2CppObject *)pSVar8;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            (__this_04,(MethodInfo_3219C30 *)&stack0xffffffffffffff98);
  _Unwind_Resume(auVar7._0_8_);
}


// UI.BasePopup$$SetTransformAlpha
// il2cpp: void UI_BasePopup__SetTransformAlpha (UI_BasePopup_o* __this, float alpha, const MethodInfo* method);
// 0x43450c0

void UI_BasePopup__SetTransformAlpha(UI_BasePopup_o *__this,float alpha,MethodInfo *method)

{
  System_Collections_Generic_List_BasePopup__o *__this_00;
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar2;
  UI_BasePopup_o *__this_05;
  UnityEngine_CanvasGroup_o *__this_06;
  long *plVar3;
  undefined1 auVar4 [12];
  System_Collections_Generic_List_T__o *pSVar5;
  Il2CppMethodPointer pIVar6;
  Il2CppObject *pIVar7;
  
  if (g_data_057ae0e3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CanvasGroup_GetComponent_CanvasGroup);
    g_data_057ae0e3 = '\x01';
  }
  __this_05 = (UI_BasePopup_o *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((__this_05 != (UI_BasePopup_o *)0x0) &&
     (__this_06 = (UnityEngine_CanvasGroup_o *)
                  UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)__this_05,MethodInfo_CanvasGroup_GetComponent_CanvasGroup), __this = __this_05,
     __this_06 != (UnityEngine_CanvasGroup_o *)0x0)) {
    UnityEngine_CanvasGroup__set_alpha(__this_06,alpha,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae0d9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePopup_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UI_BasePopup_GetEnumerator);
    g_data_057ae0d9 = '\x01';
  }
  pSVar5 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar6 = (Il2CppMethodPointer)0x0;
  pIVar7 = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._popups;
  if (__this_00 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc0,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_UI_BasePopup_GetEnumerator);
    while( true ) {
      __this_01.fields._8_8_ = pIVar6;
      __this_01.fields._list = pSVar5;
      __this_01.fields._current = pIVar7;
      bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffc0);
      if ((char)bVar2 == '\0') {
        __this_02.fields._8_8_ = pIVar6;
        __this_02.fields._list = pSVar5;
        __this_02.fields._current = pIVar7;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc0);
        return;
      }
      if (pIVar7 == (Il2CppObject *)0x0) break;
      (*pIVar7->klass->vtable[0x37].methodPtr)(pIVar7,pIVar7->klass->vtable[0x37].method);
    }
    il2cpp_runtime_helper_022b2c90();
  }
  auVar4 = il2cpp_runtime_helper_022b2c90();
  if (auVar4._8_4_ == 1) {
    plVar3 = (long *)__cxa_begin_catch(auVar4._0_8_);
    lVar1 = *plVar3;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar6;
    __this_03.fields._list = pSVar5;
    __this_03.fields._current = pIVar7;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc0);
    if (lVar1 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_04.fields._8_8_ = pIVar6;
  __this_04.fields._list = pSVar5;
  __this_04.fields._current = pIVar7;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc0);
  _Unwind_Resume(auVar4._0_8_);
}


// UI.BasePopup$$GetVectorFromScale
// il2cpp: UnityEngine_Vector3_o UI_BasePopup__GetVectorFromScale (UI_BasePopup_o* __this, float scale, const MethodInfo* method);
// 0x4345980

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
// 0x4345990

float UI_BasePopup__GetAnimationSpeed(UI_BasePopup_o *__this,float min,float max,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = (float)(*(__this->klass->vtable)._51_get_AnimationTime.methodPtr)
                           (__this,(__this->klass->vtable)._51_get_AnimationTime.method);
  return (max - min) / fVar1;
}


// UI.BasePopup$$.ctor
// il2cpp: void UI_BasePopup___ctor (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x43459c0

void UI_BasePopup___ctor(UI_TooltipPopup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_o *defaultValue;
  UI_BasePopup_AnimationKeyframe_array *pUVar3;
  long lVar4;
  System_Collections_Generic_List_BasePopup__o *__this_00;
  Settings_StringSetting_o *__this_01;
  System_Collections_Generic_HashSet_object__o *__this_02;
  System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *pSVar5;
  System_Collections_Generic_Dictionary_object__object__o *pSVar6;
  System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *pSVar7;
  undefined4 uVar8;
  undefined4 in_XMM1_Da;
  
  if (g_data_057ae0e4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_UnityEngine_Transform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_Transform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UI_BasePopup_AnimationKeyframe);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_AnimationKeyframe);
    g_data_057ae0e4 = '\x01';
  }
  __this_02 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_Transform);
  System_Collections_Generic_HashSet_object____ctor(__this_02,MethodInfo_HashSet_1_UnityEngine_Transform);
  (__this->fields)._staticTransforms = (System_Collections_Generic_HashSet_Transform__o *)__this_02;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._staticTransforms,__this_02);
  pSVar5 = (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_AnimationKeyframe);
  pSVar7 = pSVar5;
  System_Collections_Generic_List_BasePopup_AnimationKeyframe____ctor(pSVar5,MethodInfo_List_1_UI_BasePopup_AnimationKeyframe);
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
        pSVar7 = pSVar5;
        System_Collections_Generic_List_BasePopup_AnimationKeyframe___AddWithResize
                  (pSVar5,(UI_BasePopup_AnimationKeyframe_o)0x0,
                   *(MethodInfo_36B7030 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
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
          pSVar7 = pSVar5;
          System_Collections_Generic_List_BasePopup_AnimationKeyframe___AddWithResize
                    (pSVar5,(UI_BasePopup_AnimationKeyframe_o)0x3fa666663e19999a,
                     *(MethodInfo_36B7030 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
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
            pSVar7 = pSVar5;
            System_Collections_Generic_List_BasePopup_AnimationKeyframe___AddWithResize
                      (pSVar5,(UI_BasePopup_AnimationKeyframe_o)0x3f4ccccd3e99999a,
                       *(MethodInfo_36B7030 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
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
              pSVar7 = pSVar5;
              System_Collections_Generic_List_BasePopup_AnimationKeyframe___AddWithResize
                        (pSVar5,(UI_BasePopup_AnimationKeyframe_o)0x3f8ccccd3ee66666,
                         *(MethodInfo_36B7030 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
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
                pSVar7 = pSVar5;
                System_Collections_Generic_List_BasePopup_AnimationKeyframe___AddWithResize
                          (pSVar5,(UI_BasePopup_AnimationKeyframe_o)0x3f7333333f19999a,
                           *(MethodInfo_36B7030 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
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
                  pSVar7 = pSVar5;
                  System_Collections_Generic_List_BasePopup_AnimationKeyframe___AddWithResize
                            (pSVar5,(UI_BasePopup_AnimationKeyframe_o)0x3f8666663f400000,
                             *(MethodInfo_36B7030 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
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
                    System_Collections_Generic_List_BasePopup_AnimationKeyframe___AddWithResize
                              (pSVar5,(UI_BasePopup_AnimationKeyframe_o)0x3f8000003f800000,
                               *(MethodInfo_36B7030 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                  }
                  (__this->fields).killPopupKeyframesIn = pSVar5;
                  il2cpp_runtime_helper_022b4080(&(__this->fields).killPopupKeyframesIn,pSVar5);
                  pSVar5 = (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)
                           il2cpp_runtime_helper_023052d0(TypeInfo_List_AnimationKeyframe);
                  pSVar7 = pSVar5;
                  System_Collections_Generic_List_BasePopup_AnimationKeyframe____ctor(pSVar5,MethodInfo_List_1_UI_BasePopup_AnimationKeyframe);
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
                        pSVar7 = pSVar5;
                        System_Collections_Generic_List_BasePopup_AnimationKeyframe___AddWithResize
                                  (pSVar5,(UI_BasePopup_AnimationKeyframe_o)0x0,
                                   *(MethodInfo_36B7030 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70))
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
                          pUVar3->m_Items[(int)uVar2].fields.scale = 0.0;
                        }
                        else {
                          pSVar7 = pSVar5;
                          System_Collections_Generic_List_BasePopup_AnimationKeyframe___AddWithResize
                                    (pSVar5,(UI_BasePopup_AnimationKeyframe_o)0x3f19999a,
                                     *(MethodInfo_36B7030 **)
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
                            pSVar7 = pSVar5;
                            System_Collections_Generic_List_BasePopup_AnimationKeyframe___AddWithResize
                                      (pSVar5,(UI_BasePopup_AnimationKeyframe_o)0x3f59999a3f333333,
                                       *(MethodInfo_36B7030 **)
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
                              pSVar7 = pSVar5;
                              System_Collections_Generic_List_BasePopup_AnimationKeyframe___AddWithResize
                                        (pSVar5,(UI_BasePopup_AnimationKeyframe_o)0x3f4ccccd3f59999a,
                                         *(MethodInfo_36B7030 **)
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
                                System_Collections_Generic_List_BasePopup_AnimationKeyframe___AddWithResize
                                          (pSVar5,(UI_BasePopup_AnimationKeyframe_o)0x3f8000003f800000,
                                           *(MethodInfo_36B7030 **)
                                            (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                              }
                              (__this->fields).killPopupKeyframesOut = pSVar5;
                              il2cpp_runtime_helper_022b4080(&(__this->fields).killPopupKeyframesOut,pSVar5);
                              if (g_data_057ae115 == '\0') {
                                il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_UnityEngine_UI_Button);
                                il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Button);
                                g_data_057ae115 = '\x01';
                              }
                              pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
                                       il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Button);
                              System_Collections_Generic_Dictionary_object__object____ctor
                                        (pSVar6,MethodInfo_Dictionary_2_System_String_UnityEngine_UI_Button);
                              (__this->fields)._topButtons =
                                   (System_Collections_Generic_Dictionary_string__Button__o *)pSVar6;
                              il2cpp_runtime_helper_022b4080(&(__this->fields)._topButtons,pSVar6);
                              if (g_data_057ae02c == '\0') {
                                il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Type,0);
                                il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Type);
                                il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UI_BasePopup);
                                il2cpp_runtime_helper_023445d0(&TypeInfo_List_BasePopup);
                                il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
                                g_data_057ae02c = '\x01';
                              }
                              __this_00 = (System_Collections_Generic_List_BasePopup__o *)
                                          il2cpp_runtime_helper_023052d0(TypeInfo_List_BasePopup);
                              System_Collections_Generic_List_object____ctor
                                        ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UI_BasePopup);
                              (__this->fields)._popups = __this_00;
                              il2cpp_runtime_helper_022b4080(&(__this->fields)._popups,__this_00);
                              defaultValue = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
                              __this_01 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
                              Settings_StringSetting___ctor_40f74f0
                                        (__this_01,defaultValue,0x7fffffff,(MethodInfo *)0x0);
                              (__this->fields)._currentCategoryPanelName = __this_01;
                              il2cpp_runtime_helper_022b4080(&(__this->fields)._currentCategoryPanelName,__this_01);
                              pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
                                       il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Type);
                              System_Collections_Generic_Dictionary_object__object____ctor
                                        (pSVar6,MethodInfo_Dictionary_2_System_String_System_Type);
                              (__this->fields)._categoryPanelTypes =
                                   (System_Collections_Generic_Dictionary_string__Type__o *)pSVar6;
                              il2cpp_runtime_helper_022b4080(&(__this->fields)._categoryPanelTypes);
                              UnityEngine_MonoBehaviour___ctor
                                        ((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
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
  uVar8 = il2cpp_runtime_helper_022b2c90();
  *(undefined4 *)&pSVar7->klass = uVar8;
  *(undefined4 *)((long)&pSVar7->klass + 4) = in_XMM1_Da;
  return;
}


