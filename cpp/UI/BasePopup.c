// Type: UI.BasePopup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/BasePopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/BasePopup.cs
// --------------------------------

// UI.BasePopup.AnimationKeyframe$$.ctor
// il2cpp: void UI_BasePopup_AnimationKeyframe___ctor (UI_BasePopup_AnimationKeyframe_o __this, float time, float scale, const MethodInfo* method);
// 0x181028c00

void
UI_BasePopup_AnimationKeyframe___ctor_1028c00(UI_BasePopup_AnimationKeyframe_o __this, float time, float scale, MethodInfo* method)

{
  (__this->fields)._overlap_0._at_UInt0.UInt0 = (uint32_t)a;
  (__this->fields)._overlap_0._at_Float1.Float1 = b;
  return;
}


// UI.BasePopup.<FadeIn>d__44$$.ctor
// il2cpp: void UI_BasePopup__FadeIn_d__44___ctor (UI_BasePopup__FadeIn_d__44_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
UI_BasePopup__FadeIn_d__44___ctor(UI_BasePopup__FadeIn_d__44_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.BasePopup.<FadeIn>d__44$$System.IDisposable.Dispose
// il2cpp: void UI_BasePopup__FadeIn_d__44__System_IDisposable_Dispose (UI_BasePopup__FadeIn_d__44_o* __this, const MethodInfo* method);
// 0x180547020

void
UI_BasePopup__FadeIn_d__44__System_IDisposable_Dispose(UI_BasePopup__FadeIn_d__44_o* __this, MethodInfo* method)

{
  return;
}


// UI.BasePopup.<FadeIn>d__44$$MoveNext
// il2cpp: bool UI_BasePopup__FadeIn_d__44__MoveNext (UI_BasePopup__FadeIn_d__44_o* __this, const MethodInfo* method);
// 0x1821cfa30

bool UI_BasePopup__FadeIn_d__44__MoveNext(UI_BasePopup__FadeIn_d__44_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_BasePopup_o *__this_00;
  float fVar2;
  float fVar3;
  float fVar4;
  
  iVar1 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if (__this_00 == (UI_BasePopup_o *)0x0) {
label_1821cfba1:
      ThrowNullReferenceException();
    }
    fVar2 = (*(__this_00->klass->vtable)._47_get_MinFadeAlpha.methodPtr)
                      (__this_00,(__this_00->klass->vtable)._47_get_MinFadeAlpha.method);
    (__this_00->fields)._currentAnimationValue = fVar2;
  }
  else {
    if (iVar1 != 1) {
      return false;
    }
    (__this->fields).__1__state = -1;
    if (__this_00 == (UI_BasePopup_o *)0x0) goto label_1821cfba1;
  }
  fVar2 = (__this_00->fields)._currentAnimationValue;
  fVar3 = (*(__this_00->klass->vtable)._48_get_MaxFadeAlpha.methodPtr)
                    (__this_00,(__this_00->klass->vtable)._48_get_MaxFadeAlpha.method);
  if (fVar2 < fVar3) {
    UI_BasePopup__SetTransformAlpha(__this_00,(__this_00->fields)._currentAnimationValue,(MethodInfo *)0x0);
    fVar2 = (__this_00->fields)._currentAnimationValue;
    fVar3 = (*(__this_00->klass->vtable)._47_get_MinFadeAlpha.methodPtr)
                      (__this_00,(__this_00->klass->vtable)._47_get_MinFadeAlpha.method);
    fVar4 = (*(__this_00->klass->vtable)._48_get_MaxFadeAlpha.methodPtr)
                      (__this_00,(__this_00->klass->vtable)._48_get_MaxFadeAlpha.method);
    fVar3 = (*(__this_00->klass->vtable)._61_GetAnimationSpeed.methodPtr)
                      (__this_00,fVar3,fVar4,(__this_00->klass->vtable)._61_GetAnimationSpeed.method);
    fVar4 = UnityEngine_Time__get_unscaledDeltaTime((MethodInfo *)0x0);
    (__this_00->fields)._currentAnimationValue = fVar4 * fVar3 + fVar2;
    (__this->fields).__2__current = (Il2CppObject *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,(void *)0x0);
    (__this->fields).__1__state = 1;
    return true;
  }
  fVar2 = (*(__this_00->klass->vtable)._48_get_MaxFadeAlpha.methodPtr)
                    (__this_00,(__this_00->klass->vtable)._48_get_MaxFadeAlpha.method);
  UI_BasePopup__SetTransformAlpha(__this_00,fVar2,(MethodInfo *)0x0);
  return false;
}


// UI.BasePopup.<FadeIn>d__44$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_BasePopup__FadeIn_d__44__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_BasePopup__FadeIn_d__44_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_BasePopup__FadeIn_d__44__System_Collections_Generic_IEnumerator_System_Object__get_Current(UI_BasePopup__FadeIn_d__44_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.BasePopup.<FadeIn>d__44$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_BasePopup__FadeIn_d__44__System_Collections_IEnumerator_Reset (UI_BasePopup__FadeIn_d__44_o* __this, const MethodInfo* method);
// 0x1821cfbb0

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
// 0x180573e90

Il2CppObject*
UI_BasePopup__FadeIn_d__44__System_Collections_IEnumerator_get_Current(UI_BasePopup__FadeIn_d__44_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.BasePopup.<FadeOut>d__45$$.ctor
// il2cpp: void UI_BasePopup__FadeOut_d__45___ctor (UI_BasePopup__FadeOut_d__45_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
UI_BasePopup__FadeOut_d__45___ctor(UI_BasePopup__FadeOut_d__45_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.BasePopup.<FadeOut>d__45$$System.IDisposable.Dispose
// il2cpp: void UI_BasePopup__FadeOut_d__45__System_IDisposable_Dispose (UI_BasePopup__FadeOut_d__45_o* __this, const MethodInfo* method);
// 0x180547020

void
UI_BasePopup__FadeOut_d__45__System_IDisposable_Dispose(UI_BasePopup__FadeOut_d__45_o* __this, MethodInfo* method)

{
  return;
}


// UI.BasePopup.<FadeOut>d__45$$MoveNext
// il2cpp: bool UI_BasePopup__FadeOut_d__45__MoveNext (UI_BasePopup__FadeOut_d__45_o* __this, const MethodInfo* method);
// 0x1821cfbf0

bool UI_BasePopup__FadeOut_d__45__MoveNext(UI_BasePopup__FadeOut_d__45_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_BasePopup_o *__this_00;
  float fVar2;
  float fVar3;
  float fVar4;
  
  iVar1 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if (__this_00 == (UI_BasePopup_o *)0x0) {
label_1821cfd74:
      ThrowNullReferenceException();
    }
    fVar2 = (*(__this_00->klass->vtable)._48_get_MaxFadeAlpha.methodPtr)
                      (__this_00,(__this_00->klass->vtable)._48_get_MaxFadeAlpha.method);
    (__this_00->fields)._currentAnimationValue = fVar2;
  }
  else {
    if (iVar1 != 1) {
      return false;
    }
    (__this->fields).__1__state = -1;
    if (__this_00 == (UI_BasePopup_o *)0x0) goto label_1821cfd74;
  }
  fVar2 = (__this_00->fields)._currentAnimationValue;
  fVar3 = (*(__this_00->klass->vtable)._47_get_MinFadeAlpha.methodPtr)
                    (__this_00,(__this_00->klass->vtable)._47_get_MinFadeAlpha.method);
  if (fVar3 < fVar2) {
    UI_BasePopup__SetTransformAlpha(__this_00,(__this_00->fields)._currentAnimationValue,(MethodInfo *)0x0);
    fVar2 = (__this_00->fields)._currentAnimationValue;
    fVar3 = (*(__this_00->klass->vtable)._47_get_MinFadeAlpha.methodPtr)
                      (__this_00,(__this_00->klass->vtable)._47_get_MinFadeAlpha.method);
    fVar4 = (*(__this_00->klass->vtable)._48_get_MaxFadeAlpha.methodPtr)
                      (__this_00,(__this_00->klass->vtable)._48_get_MaxFadeAlpha.method);
    fVar3 = (*(__this_00->klass->vtable)._61_GetAnimationSpeed.methodPtr)
                      (__this_00,fVar3,fVar4,(__this_00->klass->vtable)._61_GetAnimationSpeed.method);
    fVar4 = UnityEngine_Time__get_unscaledDeltaTime((MethodInfo *)0x0);
    (__this_00->fields)._currentAnimationValue = fVar2 - fVar4 * fVar3;
    (__this->fields).__2__current = (Il2CppObject *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,(void *)0x0);
    (__this->fields).__1__state = 1;
    return true;
  }
  fVar2 = (*(__this_00->klass->vtable)._47_get_MinFadeAlpha.methodPtr)
                    (__this_00,(__this_00->klass->vtable)._47_get_MinFadeAlpha.method);
  UI_BasePopup__SetTransformAlpha(__this_00,fVar2,(MethodInfo *)0x0);
  (*(__this_00->klass->vtable)._60_FinishHide.methodPtr)
            (__this_00,(__this_00->klass->vtable)._60_FinishHide.method);
  return false;
}


// UI.BasePopup.<FadeOut>d__45$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_BasePopup__FadeOut_d__45__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_BasePopup__FadeOut_d__45_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_BasePopup__FadeOut_d__45__System_Collections_Generic_IEnumerator_System_Object__get_Current(UI_BasePopup__FadeOut_d__45_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.BasePopup.<FadeOut>d__45$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_BasePopup__FadeOut_d__45__System_Collections_IEnumerator_Reset (UI_BasePopup__FadeOut_d__45_o* __this, const MethodInfo* method);
// 0x1821cfd80

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
// 0x180573e90

Il2CppObject*
UI_BasePopup__FadeOut_d__45__System_Collections_IEnumerator_get_Current(UI_BasePopup__FadeOut_d__45_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.BasePopup.<KillPopupIn>d__42$$.ctor
// il2cpp: void UI_BasePopup__KillPopupIn_d__42___ctor (UI_BasePopup__KillPopupIn_d__42_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
UI_BasePopup__KillPopupIn_d__42___ctor(UI_BasePopup__KillPopupIn_d__42_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.BasePopup.<KillPopupIn>d__42$$System.IDisposable.Dispose
// il2cpp: void UI_BasePopup__KillPopupIn_d__42__System_IDisposable_Dispose (UI_BasePopup__KillPopupIn_d__42_o* __this, const MethodInfo* method);
// 0x180547020

void
UI_BasePopup__KillPopupIn_d__42__System_IDisposable_Dispose(UI_BasePopup__KillPopupIn_d__42_o* __this, MethodInfo* method)

{
  return;
}


// UI.BasePopup.<KillPopupIn>d__42$$MoveNext
// il2cpp: bool UI_BasePopup__KillPopupIn_d__42__MoveNext (UI_BasePopup__KillPopupIn_d__42_o* __this, const MethodInfo* method);
// 0x1821cfdc0

bool UI_BasePopup__KillPopupIn_d__42__MoveNext(UI_BasePopup__KillPopupIn_d__42_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_BasePopup_o *__this_00;
  float fVar2;
  
  iVar1 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    fVar2 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    (__this->fields)._startTime_5__2 = fVar2;
    (__this->fields)._endTime_5__3 = fVar2 + 0.6;
  }
  else {
    if (iVar1 != 1) {
      return false;
    }
    (__this->fields).__1__state = -1;
  }
  fVar2 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  if ((__this->fields)._endTime_5__3 <= fVar2) {
    if (__this_00 != (UI_BasePopup_o *)0x0) {
      fVar2 = (*(__this_00->klass->vtable)._46_get_MaxTweenScale.methodPtr)
                        (__this_00,(__this_00->klass->vtable)._46_get_MaxTweenScale.method);
      UI_BasePopup__SetTransformScale(__this_00,fVar2,(MethodInfo *)0x0);
      return false;
    }
  }
  else {
    fVar2 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    if (__this_00 != (UI_BasePopup_o *)0x0) {
      fVar2 = UI_BasePopup__EvaluateKeyframes
                        (__this_00,(fVar2 - (__this->fields)._startTime_5__2) / 0.6,
                         (__this_00->fields).killPopupKeyframesIn,(MethodInfo *)0x0);
      UI_BasePopup__SetTransformScale(__this_00,fVar2,(MethodInfo *)0x0);
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,(void *)0x0);
      (__this->fields).__1__state = 1;
      return true;
    }
  }
  ThrowNullReferenceException();
}


// UI.BasePopup.<KillPopupIn>d__42$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_BasePopup__KillPopupIn_d__42__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_BasePopup__KillPopupIn_d__42_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_BasePopup__KillPopupIn_d__42__System_Collections_Generic_IEnumerator_System_Object__get_Current(UI_BasePopup__KillPopupIn_d__42_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.BasePopup.<KillPopupIn>d__42$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_BasePopup__KillPopupIn_d__42__System_Collections_IEnumerator_Reset (UI_BasePopup__KillPopupIn_d__42_o* __this, const MethodInfo* method);
// 0x1821cfec0

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
// 0x180573e90

Il2CppObject*
UI_BasePopup__KillPopupIn_d__42__System_Collections_IEnumerator_get_Current(UI_BasePopup__KillPopupIn_d__42_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.BasePopup.<KillPopupOut>d__43$$.ctor
// il2cpp: void UI_BasePopup__KillPopupOut_d__43___ctor (UI_BasePopup__KillPopupOut_d__43_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
UI_BasePopup__KillPopupOut_d__43___ctor(UI_BasePopup__KillPopupOut_d__43_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.BasePopup.<KillPopupOut>d__43$$System.IDisposable.Dispose
// il2cpp: void UI_BasePopup__KillPopupOut_d__43__System_IDisposable_Dispose (UI_BasePopup__KillPopupOut_d__43_o* __this, const MethodInfo* method);
// 0x180547020

void
UI_BasePopup__KillPopupOut_d__43__System_IDisposable_Dispose(UI_BasePopup__KillPopupOut_d__43_o* __this, MethodInfo* method)

{
  return;
}


// UI.BasePopup.<KillPopupOut>d__43$$MoveNext
// il2cpp: bool UI_BasePopup__KillPopupOut_d__43__MoveNext (UI_BasePopup__KillPopupOut_d__43_o* __this, const MethodInfo* method);
// 0x1821cff00

bool UI_BasePopup__KillPopupOut_d__43__MoveNext(UI_BasePopup__KillPopupOut_d__43_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_BasePopup_o *__this_00;
  float fVar2;
  
  iVar1 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    fVar2 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    (__this->fields)._startTime_5__2 = fVar2;
    (__this->fields)._endTime_5__3 = fVar2 + 1.0;
  }
  else {
    if (iVar1 != 1) {
      return false;
    }
    (__this->fields).__1__state = -1;
  }
  fVar2 = UnityEngine_Time__get_time((MethodInfo *)0x0);
  if ((__this->fields)._endTime_5__3 <= fVar2) {
    if (__this_00 != (UI_BasePopup_o *)0x0) {
      fVar2 = (*(__this_00->klass->vtable)._45_get_MinTweenScale.methodPtr)
                        (__this_00,(__this_00->klass->vtable)._45_get_MinTweenScale.method);
      UI_BasePopup__SetTransformScale(__this_00,fVar2,(MethodInfo *)0x0);
      (*(__this_00->klass->vtable)._60_FinishHide.methodPtr)
                (__this_00,(__this_00->klass->vtable)._60_FinishHide.method);
      return false;
    }
  }
  else {
    fVar2 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    if (__this_00 != (UI_BasePopup_o *)0x0) {
      fVar2 = UI_BasePopup__EvaluateKeyframes
                        (__this_00,1.0 - (fVar2 - (__this->fields)._startTime_5__2),
                         (__this_00->fields).killPopupKeyframesOut,(MethodInfo *)0x0);
      UI_BasePopup__SetTransformScale(__this_00,fVar2,(MethodInfo *)0x0);
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,(void *)0x0);
      (__this->fields).__1__state = 1;
      return true;
    }
  }
  ThrowNullReferenceException();
}


// UI.BasePopup.<KillPopupOut>d__43$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_BasePopup__KillPopupOut_d__43__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_BasePopup__KillPopupOut_d__43_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_BasePopup__KillPopupOut_d__43__System_Collections_Generic_IEnumerator_System_Object__get_Current(UI_BasePopup__KillPopupOut_d__43_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.BasePopup.<KillPopupOut>d__43$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_BasePopup__KillPopupOut_d__43__System_Collections_IEnumerator_Reset (UI_BasePopup__KillPopupOut_d__43_o* __this, const MethodInfo* method);
// 0x1821d0020

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
// 0x180573e90

Il2CppObject*
UI_BasePopup__KillPopupOut_d__43__System_Collections_IEnumerator_get_Current(UI_BasePopup__KillPopupOut_d__43_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.BasePopup.<TweenIn>d__36$$.ctor
// il2cpp: void UI_BasePopup__TweenIn_d__36___ctor (UI_BasePopup__TweenIn_d__36_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
UI_BasePopup__TweenIn_d__36___ctor(UI_BasePopup__TweenIn_d__36_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.BasePopup.<TweenIn>d__36$$System.IDisposable.Dispose
// il2cpp: void UI_BasePopup__TweenIn_d__36__System_IDisposable_Dispose (UI_BasePopup__TweenIn_d__36_o* __this, const MethodInfo* method);
// 0x180547020

void
UI_BasePopup__TweenIn_d__36__System_IDisposable_Dispose(UI_BasePopup__TweenIn_d__36_o* __this, MethodInfo* method)

{
  return;
}


// UI.BasePopup.<TweenIn>d__36$$MoveNext
// il2cpp: bool UI_BasePopup__TweenIn_d__36__MoveNext (UI_BasePopup__TweenIn_d__36_o* __this, const MethodInfo* method);
// 0x1821d0490

bool UI_BasePopup__TweenIn_d__36__MoveNext(UI_BasePopup__TweenIn_d__36_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_BasePopup_o *__this_00;
  float fVar2;
  float fVar3;
  float fVar4;
  
  iVar1 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if (__this_00 == (UI_BasePopup_o *)0x0) {
label_1821d0601:
      ThrowNullReferenceException();
    }
    fVar2 = (*(__this_00->klass->vtable)._45_get_MinTweenScale.methodPtr)
                      (__this_00,(__this_00->klass->vtable)._45_get_MinTweenScale.method);
    (__this_00->fields)._currentAnimationValue = fVar2;
  }
  else {
    if (iVar1 != 1) {
      return false;
    }
    (__this->fields).__1__state = -1;
    if (__this_00 == (UI_BasePopup_o *)0x0) goto label_1821d0601;
  }
  fVar2 = (__this_00->fields)._currentAnimationValue;
  fVar3 = (*(__this_00->klass->vtable)._46_get_MaxTweenScale.methodPtr)
                    (__this_00,(__this_00->klass->vtable)._46_get_MaxTweenScale.method);
  if (fVar2 < fVar3) {
    UI_BasePopup__SetTransformScale(__this_00,(__this_00->fields)._currentAnimationValue,(MethodInfo *)0x0);
    fVar2 = (__this_00->fields)._currentAnimationValue;
    fVar3 = (*(__this_00->klass->vtable)._45_get_MinTweenScale.methodPtr)
                      (__this_00,(__this_00->klass->vtable)._45_get_MinTweenScale.method);
    fVar4 = (*(__this_00->klass->vtable)._46_get_MaxTweenScale.methodPtr)
                      (__this_00,(__this_00->klass->vtable)._46_get_MaxTweenScale.method);
    fVar3 = (*(__this_00->klass->vtable)._61_GetAnimationSpeed.methodPtr)
                      (__this_00,fVar3,fVar4,(__this_00->klass->vtable)._61_GetAnimationSpeed.method);
    fVar4 = UnityEngine_Time__get_unscaledDeltaTime((MethodInfo *)0x0);
    (__this_00->fields)._currentAnimationValue = fVar4 * fVar3 + fVar2;
    (__this->fields).__2__current = (Il2CppObject *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,(void *)0x0);
    (__this->fields).__1__state = 1;
    return true;
  }
  fVar2 = (*(__this_00->klass->vtable)._46_get_MaxTweenScale.methodPtr)
                    (__this_00,(__this_00->klass->vtable)._46_get_MaxTweenScale.method);
  UI_BasePopup__SetTransformScale(__this_00,fVar2,(MethodInfo *)0x0);
  return false;
}


// UI.BasePopup.<TweenIn>d__36$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_BasePopup__TweenIn_d__36__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_BasePopup__TweenIn_d__36_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_BasePopup__TweenIn_d__36__System_Collections_Generic_IEnumerator_System_Object__get_Current(UI_BasePopup__TweenIn_d__36_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.BasePopup.<TweenIn>d__36$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_BasePopup__TweenIn_d__36__System_Collections_IEnumerator_Reset (UI_BasePopup__TweenIn_d__36_o* __this, const MethodInfo* method);
// 0x1821d0610

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
// 0x180573e90

Il2CppObject*
UI_BasePopup__TweenIn_d__36__System_Collections_IEnumerator_get_Current(UI_BasePopup__TweenIn_d__36_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.BasePopup.<TweenOut>d__37$$.ctor
// il2cpp: void UI_BasePopup__TweenOut_d__37___ctor (UI_BasePopup__TweenOut_d__37_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
UI_BasePopup__TweenOut_d__37___ctor(UI_BasePopup__TweenOut_d__37_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.BasePopup.<TweenOut>d__37$$System.IDisposable.Dispose
// il2cpp: void UI_BasePopup__TweenOut_d__37__System_IDisposable_Dispose (UI_BasePopup__TweenOut_d__37_o* __this, const MethodInfo* method);
// 0x180547020

void
UI_BasePopup__TweenOut_d__37__System_IDisposable_Dispose(UI_BasePopup__TweenOut_d__37_o* __this, MethodInfo* method)

{
  return;
}


// UI.BasePopup.<TweenOut>d__37$$MoveNext
// il2cpp: bool UI_BasePopup__TweenOut_d__37__MoveNext (UI_BasePopup__TweenOut_d__37_o* __this, const MethodInfo* method);
// 0x1821d0650

bool UI_BasePopup__TweenOut_d__37__MoveNext(UI_BasePopup__TweenOut_d__37_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_BasePopup_o *__this_00;
  float fVar2;
  float fVar3;
  float fVar4;
  
  iVar1 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if (__this_00 == (UI_BasePopup_o *)0x0) {
label_1821d07d4:
      ThrowNullReferenceException();
    }
    fVar2 = (*(__this_00->klass->vtable)._46_get_MaxTweenScale.methodPtr)
                      (__this_00,(__this_00->klass->vtable)._46_get_MaxTweenScale.method);
    (__this_00->fields)._currentAnimationValue = fVar2;
  }
  else {
    if (iVar1 != 1) {
      return false;
    }
    (__this->fields).__1__state = -1;
    if (__this_00 == (UI_BasePopup_o *)0x0) goto label_1821d07d4;
  }
  fVar2 = (__this_00->fields)._currentAnimationValue;
  fVar3 = (*(__this_00->klass->vtable)._45_get_MinTweenScale.methodPtr)
                    (__this_00,(__this_00->klass->vtable)._45_get_MinTweenScale.method);
  if (fVar3 < fVar2) {
    UI_BasePopup__SetTransformScale(__this_00,(__this_00->fields)._currentAnimationValue,(MethodInfo *)0x0);
    fVar2 = (__this_00->fields)._currentAnimationValue;
    fVar3 = (*(__this_00->klass->vtable)._45_get_MinTweenScale.methodPtr)
                      (__this_00,(__this_00->klass->vtable)._45_get_MinTweenScale.method);
    fVar4 = (*(__this_00->klass->vtable)._46_get_MaxTweenScale.methodPtr)
                      (__this_00,(__this_00->klass->vtable)._46_get_MaxTweenScale.method);
    fVar3 = (*(__this_00->klass->vtable)._61_GetAnimationSpeed.methodPtr)
                      (__this_00,fVar3,fVar4,(__this_00->klass->vtable)._61_GetAnimationSpeed.method);
    fVar4 = UnityEngine_Time__get_unscaledDeltaTime((MethodInfo *)0x0);
    (__this_00->fields)._currentAnimationValue = fVar2 - fVar4 * fVar3;
    (__this->fields).__2__current = (Il2CppObject *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,(void *)0x0);
    (__this->fields).__1__state = 1;
    return true;
  }
  fVar2 = (*(__this_00->klass->vtable)._45_get_MinTweenScale.methodPtr)
                    (__this_00,(__this_00->klass->vtable)._45_get_MinTweenScale.method);
  UI_BasePopup__SetTransformScale(__this_00,fVar2,(MethodInfo *)0x0);
  (*(__this_00->klass->vtable)._60_FinishHide.methodPtr)
            (__this_00,(__this_00->klass->vtable)._60_FinishHide.method);
  return false;
}


// UI.BasePopup.<TweenOut>d__37$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_BasePopup__TweenOut_d__37__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_BasePopup__TweenOut_d__37_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_BasePopup__TweenOut_d__37__System_Collections_Generic_IEnumerator_System_Object__get_Current(UI_BasePopup__TweenOut_d__37_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.BasePopup.<TweenOut>d__37$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_BasePopup__TweenOut_d__37__System_Collections_IEnumerator_Reset (UI_BasePopup__TweenOut_d__37_o* __this, const MethodInfo* method);
// 0x1821d07e0

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
// 0x180573e90

Il2CppObject*
UI_BasePopup__TweenOut_d__37__System_Collections_IEnumerator_get_Current(UI_BasePopup__TweenOut_d__37_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.BasePopup$$get_MinTweenScale
// il2cpp: float UI_BasePopup__get_MinTweenScale (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x18210fb70

float UI_BasePopup__get_MinTweenScale(UI_BasePopup_o *__this,MethodInfo *method)

{
  return 0.3;
}


// UI.BasePopup$$get_MaxTweenScale
// il2cpp: float UI_BasePopup__get_MaxTweenScale (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x1820cf430

float
UI_BasePopup__get_MaxTweenScale(UI_BasePopup_o* __this, MethodInfo* method)

{
  return 1.0;
}


// UI.BasePopup$$get_MinFadeAlpha
// il2cpp: float UI_BasePopup__get_MinFadeAlpha (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x180560480

float
UI_BasePopup__get_MinFadeAlpha(UI_BasePopup_o* __this, MethodInfo* method)

{
  return 0.0;
}


// UI.BasePopup$$get_MaxFadeAlpha
// il2cpp: float UI_BasePopup__get_MaxFadeAlpha (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x1820cf430

float
UI_BasePopup__get_MaxFadeAlpha(UI_BasePopup_o* __this, MethodInfo* method)

{
  return 1.0;
}


// UI.BasePopup$$get_SpringDamping
// il2cpp: float UI_BasePopup__get_SpringDamping (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x1821779b0

float
UI_BasePopup__get_SpringDamping(UI_BasePopup_o* __this, MethodInfo* method)

{
  return 0.5;
}


// UI.BasePopup$$get_SpringStiffness
// il2cpp: float UI_BasePopup__get_SpringStiffness (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x1821bc890

float
UI_BasePopup__get_SpringStiffness(UI_BasePopup_o* __this, MethodInfo* method)

{
  return 0.1;
}


// UI.BasePopup$$get_AnimationTime
// il2cpp: float UI_BasePopup__get_AnimationTime (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x1821bc890

float
UI_BasePopup__get_AnimationTime(UI_BasePopup_o* __this, MethodInfo* method)

{
  return 0.1;
}


// UI.BasePopup$$get_ShowOnTop
// il2cpp: bool UI_BasePopup__get_ShowOnTop (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_BasePopup__get_ShowOnTop(UI_BasePopup_o* __this, MethodInfo* method)

{
  return true;
}


// UI.BasePopup$$get_UseSound
// il2cpp: bool UI_BasePopup__get_UseSound (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x180668280

bool
UI_BasePopup__get_UseSound(UI_BasePopup_o* __this, MethodInfo* method)

{
  return false;
}


// UI.BasePopup$$get_PopupAnimationType
// il2cpp: int32_t UI_BasePopup__get_PopupAnimationType (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x180846f80

int32_t
UI_BasePopup__get_PopupAnimationType(UI_BasePopup_o* __this, MethodInfo* method)

{
  return 2;
}


// UI.BasePopup$$get_EscapeBehavior
// il2cpp: int32_t UI_BasePopup__get_EscapeBehavior (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x18059b2e0

int32_t
UI_BasePopup__get_EscapeBehavior(UI_BasePopup_o* __this, MethodInfo* method)

{
  return (Unity_Collections_AllocatorManager_TryFunction_o *)0x0;
}


// UI.BasePopup$$get_PlayEscapeSound
// il2cpp: bool UI_BasePopup__get_PlayEscapeSound (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x1821bc8a0

bool UI_BasePopup__get_PlayEscapeSound(UI_BasePopup_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = (*(__this->klass->vtable)._53_get_UseSound.methodPtr)
                    (__this,(__this->klass->vtable)._53_get_UseSound.method);
  return !bVar1;
}


// UI.BasePopup$$DismissFromEscape
// il2cpp: bool UI_BasePopup__DismissFromEscape (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x1821bb450

bool UI_BasePopup__DismissFromEscape(UI_BasePopup_o *__this,MethodInfo *method)

{
  System_Xml_Schema_XmlSchema_o *pSVar1;
  
  pSVar1 = (*(__this->klass->vtable)._55_get_EscapeBehavior.methodPtr)
                     (__this,(__this->klass->vtable)._55_get_EscapeBehavior.method);
  if ((int)pSVar1 == 0) {
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  }
  pSVar1 = (*(__this->klass->vtable)._55_get_EscapeBehavior.methodPtr)
                     (__this,(__this->klass->vtable)._55_get_EscapeBehavior.method);
  return (int)pSVar1 != 3;
}


// UI.BasePopup$$Show
// il2cpp: void UI_BasePopup__Show (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x1821bc290
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821bc3c9: mov rcx, qword ptr [rip + 0x1f0d060]  ; TypeInfo_UI_BasePopup_KillPopupIn_d__42
// asm:   0x1821bc3d0: jmp 0x1821bc41a
// asm:   0x1821bc3ee: mov rcx, qword ptr [rip + 0x1f0ce7b]  ; TypeInfo_UI_BasePopup_FadeIn_d__44
// asm:   0x1821bc3f5: jmp 0x1821bc41a
// asm:   0x1821bc413: mov rcx, qword ptr [rip + 0x1f0d1d6]  ; TypeInfo_UI_BasePopup_TweenIn_d__36
// asm:   0x1821bc451: mov rbx, qword ptr [rsp + 0x30]

void UI_BasePopup__Show(UI_BasePopup_o *__this,MethodInfo *method)

{
  UI_BasePopup_c *pUVar1;
  bool bVar2;
  int32_t iVar3;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  Il2CppObject *routine;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_184346ed0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_184346ed0 = '\x01';
  }
  if ((__this->fields).IsActive == false) {
    pUVar1 = __this->klass;
    (__this->fields).IsActive = true;
    bVar2 = (*(pUVar1->vtable)._53_get_UseSound.methodPtr)(__this,(pUVar1->vtable)._53_get_UseSound.method);
    if (bVar2) {
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      UI_UIManager__PlaySound(0,(MethodInfo *)0x0);
    }
    __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
label_1821bc45c:
      ThrowNullReferenceException();
    }
    UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
    bVar2 = (*(__this->klass->vtable)._52_get_ShowOnTop.methodPtr)
                      (__this,(__this->klass->vtable)._52_get_ShowOnTop.method);
    if (bVar2) {
      __this_01 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (__this_01 == (UnityEngine_Transform_o *)0x0) goto label_1821bc45c;
      UnityEngine_Transform__SetAsLastSibling(__this_01,(MethodInfo *)0x0);
    }
    UnityEngine_MonoBehaviour__StopAllCoroutines((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
    iVar3 = (*(__this->klass->vtable)._54_get_PopupAnimationType.methodPtr)
                      (__this,(__this->klass->vtable)._54_get_PopupAnimationType.method);
    if (iVar3 == 2) {
      klass = (Il2CppClass *)TypeInfo_UI_BasePopup_TweenIn_d__36;
      if (Il2CppMethodInitialized_184346ed5 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_BasePopup_TweenIn_d__36);
        Il2CppMethodInitialized_184346ed5 = '\x01';
        klass = (Il2CppClass *)TypeInfo_UI_BasePopup_TweenIn_d__36;
      }
    }
    else {
      iVar3 = (*(__this->klass->vtable)._54_get_PopupAnimationType.methodPtr)
                        (__this,(__this->klass->vtable)._54_get_PopupAnimationType.method);
      if (iVar3 == 1) {
        klass = (Il2CppClass *)TypeInfo_UI_BasePopup_FadeIn_d__44;
        if (Il2CppMethodInitialized_184346eda == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_BasePopup_FadeIn_d__44);
          Il2CppMethodInitialized_184346eda = '\x01';
          klass = (Il2CppClass *)TypeInfo_UI_BasePopup_FadeIn_d__44;
        }
      }
      else {
        iVar3 = (*(__this->klass->vtable)._54_get_PopupAnimationType.methodPtr)
                          (__this,(__this->klass->vtable)._54_get_PopupAnimationType.method);
        if (iVar3 != 3) {
          return;
        }
        klass = (Il2CppClass *)TypeInfo_UI_BasePopup_KillPopupIn_d__42;
        if (Il2CppMethodInitialized_184346ed8 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_BasePopup_KillPopupIn_d__42);
          Il2CppMethodInitialized_184346ed8 = '\x01';
          klass = (Il2CppClass *)TypeInfo_UI_BasePopup_KillPopupIn_d__42;
        }
      }
    }
    routine = il2cpp_codegen_object_new(klass);
    System_Configuration_ConfigurationCollectionAttribute___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
    *(undefined4 *)&routine[1].klass = 0;
    routine[2].klass = (Il2CppClass *)__this;
    Il2CppCodeGenWriteBarrier(&routine[2].klass,__this);
    UnityEngine_MonoBehaviour__StartCoroutine_Auto
              ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)routine,
               (MethodInfo *)0x0);
  }
  return;
}


// UI.BasePopup$$ShowImmediate
// il2cpp: void UI_BasePopup__ShowImmediate (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x1821bc140

void UI_BasePopup__ShowImmediate(UI_BasePopup_o *__this,MethodInfo *method)

{
  UI_BasePopup_c *pUVar1;
  bool bVar2;
  int32_t iVar3;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  float fVar4;
  
  if (Il2CppMethodInitialized_184346ed1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_184346ed1 = '\x01';
  }
  if ((__this->fields).IsActive == false) {
    pUVar1 = __this->klass;
    (__this->fields).IsActive = true;
    bVar2 = (*(pUVar1->vtable)._53_get_UseSound.methodPtr)(__this,(pUVar1->vtable)._53_get_UseSound.method);
    if (bVar2) {
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      UI_UIManager__PlaySound(0,(MethodInfo *)0x0);
    }
    __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
label_1821bc28a:
      ThrowNullReferenceException();
    }
    UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
    bVar2 = (*(__this->klass->vtable)._52_get_ShowOnTop.methodPtr)
                      (__this,(__this->klass->vtable)._52_get_ShowOnTop.method);
    if (bVar2) {
      __this_01 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (__this_01 == (UnityEngine_Transform_o *)0x0) goto label_1821bc28a;
      UnityEngine_Transform__SetAsLastSibling(__this_01,(MethodInfo *)0x0);
    }
    UnityEngine_MonoBehaviour__StopAllCoroutines((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
    iVar3 = (*(__this->klass->vtable)._54_get_PopupAnimationType.methodPtr)
                      (__this,(__this->klass->vtable)._54_get_PopupAnimationType.method);
    pUVar1 = __this->klass;
    if (iVar3 == 2) {
      fVar4 = (*(pUVar1->vtable)._46_get_MaxTweenScale.methodPtr)
                        (__this,(pUVar1->vtable)._46_get_MaxTweenScale.method);
      UI_BasePopup__SetTransformScale(__this,fVar4,(MethodInfo *)0x0);
      return;
    }
    iVar3 = (*(pUVar1->vtable)._54_get_PopupAnimationType.methodPtr)
                      (__this,(pUVar1->vtable)._54_get_PopupAnimationType.method);
    if (iVar3 == 1) {
      fVar4 = (*(__this->klass->vtable)._48_get_MaxFadeAlpha.methodPtr)
                        (__this,(__this->klass->vtable)._48_get_MaxFadeAlpha.method);
      UI_BasePopup__SetTransformAlpha(__this,fVar4,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// UI.BasePopup$$HideAllPopups
// il2cpp: void UI_BasePopup__HideAllPopups (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x1821bb8d0
// eh: try 0x1821bb970..0x1821bb9d9 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821bb96f: nop 
// asm:   0x1821bb9b2: mov rdx, qword ptr [rip + 0x1eba33f]  ; MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_Dispose
// asm:   0x1821bb9b9: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1821bb9be: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821bb9c3: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1821bb9c8: test rcx, rcx
// asm:   0x1821bb9cb: jne 0x1821bb9d9
// asm:   0x1821bb9d9: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void UI_BasePopup__HideAllPopups(UI_BasePopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_BasePopup__o *__this_00;
  bool bVar1;
  undefined1 local_40 [16];
  Il2CppObject *local_30;
  System_Collections_Generic_List_Enumerator_object__o local_28;
  
  if (Il2CppMethodInitialized_184346ed2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BasePopup_GetEnumerator);
    Il2CppMethodInitialized_184346ed2 = '\x01';
  }
  local_28.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._popups;
  if (__this_00 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_T__o *)__this_00,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_BasePopup_GetEnumerator);
    local_28.fields._list = (System_Collections_Generic_List_T__o *)local_40._0_8_;
    local_28.fields._index = local_40._8_4_;
    local_28.fields._version = local_40._12_4_;
    local_28.fields._current = local_30;
    local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_40._8_8_ = &local_28;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_28,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_MoveNext);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                   MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_Dispose);
        return;
      }
      if (local_28.fields._current == (Il2CppObject *)0x0) break;
      (*(local_28.fields._current)->klass->vtable[0x3a].methodPtr)
                (local_28.fields._current,(local_28.fields._current)->klass->vtable[0x3a].method);
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// UI.BasePopup$$Hide
// il2cpp: void UI_BasePopup__Hide (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x1821bbb40
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821bbc7e: mov rcx, qword ptr [rip + 0x1f0d88b]  ; TypeInfo_UI_BasePopup_KillPopupOut_d__43
// asm:   0x1821bbc85: jmp 0x1821bbccf
// asm:   0x1821bbca3: mov rcx, qword ptr [rip + 0x1f0d6a6]  ; TypeInfo_UI_BasePopup_FadeOut_d__45
// asm:   0x1821bbcaa: jmp 0x1821bbccf
// asm:   0x1821bbcc8: mov rcx, qword ptr [rip + 0x1f0da01]  ; TypeInfo_UI_BasePopup_TweenOut_d__37
// asm:   0x1821bbd06: mov rbx, qword ptr [rsp + 0x30]

void UI_BasePopup__Hide(UI_BasePopup_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  Il2CppObject *routine;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_184346ed3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_184346ed3 = '\x01';
  }
  if ((__this->fields).IsActive != false) {
    (__this->fields).IsActive = false;
    UI_BasePopup__HideTooltips(__this,(MethodInfo *)0x0);
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
      klass = (Il2CppClass *)TypeInfo_UI_BasePopup_TweenOut_d__37;
      if (Il2CppMethodInitialized_184346ed6 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_BasePopup_TweenOut_d__37);
        Il2CppMethodInitialized_184346ed6 = '\x01';
        klass = (Il2CppClass *)TypeInfo_UI_BasePopup_TweenOut_d__37;
      }
    }
    else {
      iVar2 = (*(__this->klass->vtable)._54_get_PopupAnimationType.methodPtr)
                        (__this,(__this->klass->vtable)._54_get_PopupAnimationType.method);
      if (iVar2 == 1) {
        klass = (Il2CppClass *)TypeInfo_UI_BasePopup_FadeOut_d__45;
        if (Il2CppMethodInitialized_184346edb == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_BasePopup_FadeOut_d__45);
          Il2CppMethodInitialized_184346edb = '\x01';
          klass = (Il2CppClass *)TypeInfo_UI_BasePopup_FadeOut_d__45;
        }
      }
      else {
        iVar2 = (*(__this->klass->vtable)._54_get_PopupAnimationType.methodPtr)
                          (__this,(__this->klass->vtable)._54_get_PopupAnimationType.method);
        if (iVar2 != 3) {
          iVar2 = (*(__this->klass->vtable)._54_get_PopupAnimationType.methodPtr)
                            (__this,(__this->klass->vtable)._54_get_PopupAnimationType.method);
          if (iVar2 != 0) {
            return;
          }
          (*(__this->klass->vtable)._60_FinishHide.methodPtr)
                    (__this,(__this->klass->vtable)._60_FinishHide.method);
          return;
        }
        klass = (Il2CppClass *)TypeInfo_UI_BasePopup_KillPopupOut_d__43;
        if (Il2CppMethodInitialized_184346ed9 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_BasePopup_KillPopupOut_d__43);
          Il2CppMethodInitialized_184346ed9 = '\x01';
          klass = (Il2CppClass *)TypeInfo_UI_BasePopup_KillPopupOut_d__43;
        }
      }
    }
    routine = il2cpp_codegen_object_new(klass);
    System_Configuration_ConfigurationCollectionAttribute___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
    *(undefined4 *)&routine[1].klass = 0;
    routine[2].klass = (Il2CppClass *)__this;
    Il2CppCodeGenWriteBarrier(&routine[2].klass,__this);
    UnityEngine_MonoBehaviour__StartCoroutine_Auto
              ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)routine,
               (MethodInfo *)0x0);
  }
  return;
}


// UI.BasePopup$$HideImmediate
// il2cpp: void UI_BasePopup__HideImmediate (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x1821bb9f0

void UI_BasePopup__HideImmediate(UI_BasePopup_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  
  (__this->fields).IsActive = false;
  __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
  if (bVar1) {
    UI_BasePopup__HideTooltips(__this,(MethodInfo *)0x0);
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
// 0x1821bbe00

void UI_BasePopup__OnDisable(UI_BasePopup_o *__this,MethodInfo *method)

{
  (__this->fields).IsActive = false;
  UI_BasePopup__HideTooltips(__this,(MethodInfo *)0x0);
  return;
}


// UI.BasePopup$$HideTooltips
// il2cpp: void UI_BasePopup__HideTooltips (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x1821bba70

void UI_BasePopup__HideTooltips(UI_BasePopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Transform_o *pUVar2;
  
  if (Il2CppMethodInitialized_184346ed4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_TooltipPopup);
    Il2CppMethodInitialized_184346ed4 = '\x01';
  }
  if (__this != (UI_BasePopup_o *)0x0) {
    bVar1 = (TypeInfo_UI_TooltipPopup->_2).typeHierarchyDepth;
    if ((bVar1 <= (__this->klass->_2).typeHierarchyDepth) &&
       ((__this->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_UI_TooltipPopup)) {
      return;
    }
  }
  pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((TypeInfo_UI_TooltipPopup->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_TooltipPopup);
  }
  UI_TooltipPopup__HideWithin(pUVar2,(MethodInfo *)0x0);
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
// 0x1821bb840

void UI_BasePopup__FinishHide(UI_BasePopup_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  
  __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.BasePopup$$TweenIn
// il2cpp: System_Collections_IEnumerator_o* UI_BasePopup__TweenIn (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x1821bc470

System_Collections_IEnumerator_o * UI_BasePopup__TweenIn(UI_BasePopup_o *__this,MethodInfo *method)

{
  UI_BasePopup__TweenIn_d__36_o *__this_00;
  
  if (Il2CppMethodInitialized_184346ed5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_BasePopup_TweenIn_d__36);
    Il2CppMethodInitialized_184346ed5 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_BasePopup_TweenIn_d__36);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.BasePopup$$TweenOut
// il2cpp: System_Collections_IEnumerator_o* UI_BasePopup__TweenOut (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x1821bc4e0

System_Collections_IEnumerator_o * UI_BasePopup__TweenOut(UI_BasePopup_o *__this,MethodInfo *method)

{
  UI_BasePopup__TweenOut_d__37_o *__this_00;
  
  if (Il2CppMethodInitialized_184346ed6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_BasePopup_TweenOut_d__37);
    Il2CppMethodInitialized_184346ed6 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_BasePopup_TweenOut_d__37);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.BasePopup$$EvaluateKeyframes
// il2cpp: float UI_BasePopup__EvaluateKeyframes (UI_BasePopup_o* __this, float timePercentage, System_Collections_Generic_List_BasePopup_AnimationKeyframe__o* keyframes, const MethodInfo* method);
// 0x1821bb4a0
// eh: try 0x1821bb600..0x1821bb65c -> pad 0x183318f20 catch Il2CppExceptionWrapper
// asm: 26 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821bb5fe: nop 
// asm:   0x1821bb67e: mov rdx, qword ptr [rip + 0x1ee5043]  ; MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_AnimationKeyframe_Dispose
// asm:   0x1821bb685: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x1821bb68a: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821bb68f: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1821bb694: test rcx, rcx
// asm:   0x1821bb697: jne 0x1821bb74f
// asm:   0x1821bb69d: movss xmm6, dword ptr [rsp + 0xd8]
// asm:   0x1821bb6a6: movss xmm9, dword ptr [rsp + 0xe0]
// asm:   0x1821bb6b0: movss xmm10, dword ptr [rsp + 0x20]
// asm:   0x1821bb6b7: movss xmm8, dword ptr [rsp + 0x24]
// asm:   0x1821bb6be: movss xmm7, dword ptr [rsp + 0x28]
// asm:   0x1821bb6d4: movaps xmm0, xmm8
// asm:   0x1821bb6d8: jmp 0x1821bb725
// asm:   0x1821bb74f: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183318f20: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183318f25: push rbp
// asm:   0x183318f26: sub rsp, 0x20
// asm:   0x183318f2a: mov rbp, rdx
// asm:   0x183318f2d: mov rax, qword ptr [rbp + 0x30]
// asm:   0x183318f31: mov rcx, qword ptr [rax]
// asm:   0x183318f34: mov qword ptr [rbp + 0x38], rcx
// asm:   0x183318f38: movabs rax, 0
// asm:   0x183318f42: add rsp, 0x20
// asm:   0x183318f46: pop rbp
// asm:   0x183318f47: ret 

float UI_BasePopup__EvaluateKeyframes
                (UI_BasePopup_o *__this,float timePercentage,
                System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *keyframes,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  Il2CppObject *pIVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fStackX_1c;
  undefined1 local_90 [16];
  Il2CppObject *local_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  
  if (Il2CppMethodInitialized_184346ed7 == '\0') {
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
    Il2CppMethodInitialized_184346ed7 = '\x01';
  }
  local_78._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
  local_78._8_8_ = 0;
  local_68 = (Il2CppObject *)0x0;
  if ((keyframes == (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)0x0) ||
     ((keyframes->fields)._size == 0)) {
    fVar8 = (*(__this->klass->vtable)._45_get_MinTweenScale.methodPtr)
                      (__this,(__this->klass->vtable)._45_get_MinTweenScale.method);
  }
  else {
    pIVar4 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                       ((System_Collections_Generic_List_object__o *)keyframes,0,
                        (MethodInfo_92B830 *)
                        MethodInfo_System_Collections_Generic_List_BasePopup_AnimationKeyframe_get_Item);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = pIVar4;
    fStackX_1c = (float)((ulonglong)pIVar4 >> 0x20);
    fVar8 = fStackX_1c;
    pIVar4 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                       ((System_Collections_Generic_List_object__o *)keyframes,(keyframes->fields)._size + -1,
                        (MethodInfo_92B830 *)
                        MethodInfo_System_Collections_Generic_List_BasePopup_AnimationKeyframe_get_Item);
    fVar5 = SUB84(pIVar4,0);
    fStackX_1c = (float)((ulonglong)pIVar4 >> 0x20);
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_90,
               (System_Collections_Generic_List_T__o *)keyframes,
               (MethodInfo_91F180 *)
               MethodInfo_System_Collections_Generic_List_BasePopup_AnimationKeyframe_GetEnumerator);
    local_78._0_8_ = local_90._0_8_;
    local_78._8_8_ = local_90._8_8_;
    local_68 = local_80;
    local_90._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_90._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_78;
    do {
      while( true ) {
        bVar3 = System_Collections_Generic_List_Enumerator_BasePopup_AnimationKeyframe___MoveNext
                          ((System_Collections_Generic_List_Enumerator_T__o *)local_78,
                           (MethodInfo_1531E60 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_AnimationKeyframe_MoveNext
                          );
        fVar6 = auVar7._0_4_;
        if (!bVar3) {
          System_Collections_Generic_List_Enumerator_BasePopup_AnimationKeyframe___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_78,
                     MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_AnimationKeyframe_Dispose
                    );
          goto label_1821bb6c4;
        }
        fVar1 = (float)local_68;
        fVar2 = local_68._4_4_;
        if ((timePercentage <= (float)local_68) || ((float)local_68 <= fVar6)) break;
        auVar7 = ZEXT416((uint)(float)local_68);
        fVar8 = local_68._4_4_;
      }
    } while ((float)local_68 < timePercentage);
    System_Collections_Generic_List_Enumerator_BasePopup_AnimationKeyframe___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_78,
               MethodInfo_System_Collections_Generic_List_Enumerator_BasePopup_AnimationKeyframe_Dispose);
    fStackX_1c = fVar2;
    fVar5 = fVar1;
label_1821bb6c4:
    if (fVar5 - fVar6 != 0.0) {
      fVar5 = (timePercentage - fVar6) / (fVar5 - fVar6);
      if (fVar5 < 0.0) {
        fVar5 = 0.0;
      }
      else if (1.0 < fVar5) {
        fVar5 = 1.0;
      }
      fVar8 = (fStackX_1c - fVar8) * fVar5 + fVar8;
    }
  }
  return fVar8;
}


// UI.BasePopup$$KillPopupIn
// il2cpp: System_Collections_IEnumerator_o* UI_BasePopup__KillPopupIn (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x1821bbd20

System_Collections_IEnumerator_o * UI_BasePopup__KillPopupIn(UI_BasePopup_o *__this,MethodInfo *method)

{
  UI_BasePopup__KillPopupIn_d__42_o *__this_00;
  
  if (Il2CppMethodInitialized_184346ed8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_BasePopup_KillPopupIn_d__42);
    Il2CppMethodInitialized_184346ed8 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_BasePopup_KillPopupIn_d__42);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.BasePopup$$KillPopupOut
// il2cpp: System_Collections_IEnumerator_o* UI_BasePopup__KillPopupOut (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x1821bbd90

System_Collections_IEnumerator_o * UI_BasePopup__KillPopupOut(UI_BasePopup_o *__this,MethodInfo *method)

{
  UI_BasePopup__KillPopupOut_d__43_o *__this_00;
  
  if (Il2CppMethodInitialized_184346ed9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_BasePopup_KillPopupOut_d__43);
    Il2CppMethodInitialized_184346ed9 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_BasePopup_KillPopupOut_d__43);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.BasePopup$$FadeIn
// il2cpp: System_Collections_IEnumerator_o* UI_BasePopup__FadeIn (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x1821bb760

System_Collections_IEnumerator_o * UI_BasePopup__FadeIn(UI_BasePopup_o *__this,MethodInfo *method)

{
  UI_BasePopup__FadeIn_d__44_o *__this_00;
  
  if (Il2CppMethodInitialized_184346eda == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_BasePopup_FadeIn_d__44);
    Il2CppMethodInitialized_184346eda = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_BasePopup_FadeIn_d__44);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.BasePopup$$FadeOut
// il2cpp: System_Collections_IEnumerator_o* UI_BasePopup__FadeOut (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x1821bb7d0

System_Collections_IEnumerator_o * UI_BasePopup__FadeOut(UI_BasePopup_o *__this,MethodInfo *method)

{
  UI_BasePopup__FadeOut_d__45_o *__this_00;
  
  if (Il2CppMethodInitialized_184346edb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_BasePopup_FadeOut_d__45);
    Il2CppMethodInitialized_184346edb = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_BasePopup_FadeOut_d__45);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.BasePopup$$SetTransformScale
// il2cpp: void UI_BasePopup__SetTransformScale (UI_BasePopup_o* __this, float scale, const MethodInfo* method);
// 0x1821bbe80
// eh: try 0x1821bc00f..0x1821bc12d -> pad 0x183317870 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 27 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821bbf70: movss dword ptr [rsp + 0x30], xmm7
// asm:   0x1821bbf76: movss dword ptr [rsp + 0x34], xmm7
// asm:   0x1821bbf7c: movss dword ptr [rsp + 0x38], xmm7
// asm:   0x1821bbf82: jmp 0x1821bbfb5
// asm:   0x1821bbfa3: movss dword ptr [rsp + 0x30], xmm0
// asm:   0x1821bbfa9: movss dword ptr [rsp + 0x34], xmm0
// asm:   0x1821bbfaf: movss dword ptr [rsp + 0x38], xmm0
// asm:   0x1821bc098: movaps xmm0, xmm7
// asm:   0x1821bc09b: jmp 0x1821bc0a1
// asm:   0x1821bc0dd: mov rdx, qword ptr [rip + 0x1ede774]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_Transform_Dispose
// asm:   0x1821bc0e4: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x1821bc0e9: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1821bc0ee: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x1821bc0f3: test rcx, rcx
// asm:   0x1821bc0f6: jne 0x1821bc12d
// asm:   0x1821bc12d: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183317870: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317875: push rbp
// asm:   0x183317876: sub rsp, 0x20
// asm:   0x18331787a: mov rbp, rdx
// asm:   0x18331787d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183317881: mov rcx, qword ptr [rax]
// asm:   0x183317884: mov qword ptr [rbp + 0x40], rcx
// asm:   0x183317888: movabs rax, 0
// asm:   0x183317892: add rsp, 0x20
// asm:   0x183317896: pop rbp
// asm:   0x183317897: ret 

void UI_BasePopup__SetTransformScale(UI_BasePopup_o *__this,float scale,MethodInfo *method)

{
  System_Collections_Generic_HashSet_Vector2Int__o *__this_00;
  Il2CppObject *__this_01;
  float fVar1;
  bool bVar2;
  UnityEngine_Transform_o *pUVar3;
  UI_IgnoreScaler_o *pUVar4;
  float fVar5;
  UnityEngine_Vector3_o local_88;
  undefined1 local_78 [16];
  UnityEngine_Transform_o *local_68;
  System_Collections_Generic_HashSet_Enumerator_T__o local_60 [3];
  
  if (Il2CppMethodInitialized_184346edc == '\0') {
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
    Il2CppMethodInitialized_184346edc = '\x01';
  }
  local_60[0].fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_60[0].fields._index = 0;
  local_60[0].fields._version = 0;
  local_60[0].fields._current = (Il2CppObject *)0x0;
  pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  fVar5 = local_88.fields.x;
  if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
    pUVar4 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)pUVar3,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_IgnoreScaler);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      fVar5 = local_88.fields.x;
      if (pUVar4 == (UI_IgnoreScaler_o *)0x0) goto label_1821bc133;
      fVar1 = scale * (pUVar4->fields).Scale;
    }
    else {
      pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      fVar1 = scale;
      fVar5 = local_88.fields.x;
    }
    local_88.fields.x = fVar1;
    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
      local_88.fields.y = local_88.fields.x;
      local_88.fields.z = local_88.fields.x;
      UnityEngine_Transform__set_localScale(pUVar3,&local_88,(MethodInfo *)0x0);
      __this_00 = (System_Collections_Generic_HashSet_Vector2Int__o *)(__this->fields)._staticTransforms;
      fVar5 = local_88.fields.x;
      if (__this_00 != (System_Collections_Generic_HashSet_Vector2Int__o *)0x0) {
        System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
                  ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_78,__this_00,
                   (MethodInfo_175C200 *)MethodInfo_System_Collections_Generic_HashSet_Transform_GetEnumerator
                  );
        local_60[0].fields._set = (System_Collections_Generic_HashSet_T__o *)local_78._0_8_;
        local_60[0].fields._index = local_78._8_4_;
        local_60[0].fields._version = local_78._12_4_;
        local_60[0].fields._current = (Il2CppObject *)local_68;
        local_78._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
        local_78._8_8_ = local_60;
        while( true ) {
          bVar2 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                            (local_60,(MethodInfo_15381F0 *)
                                      MethodInfo_System_Collections_Generic_HashSet_Enumerator_Transform_MoveNext
                            );
          __this_01 = local_60[0].fields._current;
          if (!bVar2) {
            System_Configuration_ConfigurationCollectionAttribute___ctor
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_60,
                       MethodInfo_System_Collections_Generic_HashSet_Enumerator_Transform_Dispose);
            return;
          }
          if ((UnityEngine_Transform_o *)local_60[0].fields._current == (UnityEngine_Transform_o *)0x0) break;
          pUVar4 = UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)local_60[0].fields._current,
                              (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_IgnoreScaler)
          ;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          fVar5 = 1.0;
          bVar2 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar2) {
            if (pUVar4 == (UI_IgnoreScaler_o *)0x0) {
              ThrowNullReferenceException();
            }
            fVar5 = (pUVar4->fields).Scale;
          }
          local_88.fields.x = scale;
          if (scale <= 0.1) {
            local_88.fields.x = 0.1;
          }
          local_88.fields.x = fVar5 / local_88.fields.x;
          local_88.fields.y = local_88.fields.x;
          local_88.fields.z = local_88.fields.x;
          UnityEngine_Transform__set_localScale
                    ((UnityEngine_Transform_o *)__this_01,&local_88,(MethodInfo *)0x0);
        }
        ThrowNullReferenceException();
      }
    }
  }
label_1821bc133:
  local_88.fields.x = fVar5;
  ThrowNullReferenceException();
}


// UI.BasePopup$$SetTransformAlpha
// il2cpp: void UI_BasePopup__SetTransformAlpha (UI_BasePopup_o* __this, float alpha, const MethodInfo* method);
// 0x1821bbe10

void UI_BasePopup__SetTransformAlpha(UI_BasePopup_o *__this,float alpha,MethodInfo *method)

{
  UnityEngine_Transform_o *__this_00;
  UnityEngine_CanvasGroup_o *__this_01;
  
  if (Il2CppMethodInitialized_184346edd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_CanvasGroup);
    Il2CppMethodInitialized_184346edd = '\x01';
  }
  __this_00 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Transform_o *)0x0) {
    __this_01 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)__this_00,
                           (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_CanvasGroup);
    if (__this_01 != (UnityEngine_CanvasGroup_o *)0x0) {
      UnityEngine_CanvasGroup__set_alpha(__this_01,alpha,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.BasePopup$$GetVectorFromScale
// il2cpp: UnityEngine_Vector3_o UI_BasePopup__GetVectorFromScale (UI_BasePopup_o* __this, float scale, const MethodInfo* method);
// 0x1821bb8b0

UnityEngine_Vector3_o *
UI_BasePopup__GetVectorFromScale
          (UnityEngine_Vector3_o *__return_storage_ptr__,UI_BasePopup_o *__this,float scale,MethodInfo *method
          )

{
  (__return_storage_ptr__->fields).x = scale;
  (__return_storage_ptr__->fields).y = scale;
  (__return_storage_ptr__->fields).z = scale;
  return __return_storage_ptr__;
}


// UI.BasePopup$$GetAnimationSpeed
// il2cpp: float UI_BasePopup__GetAnimationSpeed (UI_BasePopup_o* __this, float min, float max, const MethodInfo* method);
// 0x1821bb870

float UI_BasePopup__GetAnimationSpeed(UI_BasePopup_o *__this,float min,float max,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = (*(__this->klass->vtable)._51_get_AnimationTime.methodPtr)(__this);
  return (max - min) / fVar1;
}


// UI.BasePopup$$.ctor
// il2cpp: void UI_BasePopup___ctor (UI_BasePopup_o* __this, const MethodInfo* method);
// 0x1821bc550

void UI_BasePopup___ctor(UI_BasePopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_Transform__o *__this_00;
  System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *pSVar1;
  System_Collections_Generic_Dictionary_string__Button__o *__this_01;
  
  if (Il2CppMethodInitialized_184346ede == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Transform_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_Transform);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BasePopup_AnimationKeyframe_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BasePopup_AnimationKeyframe_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_BasePopup_AnimationKeyframe);
    Il2CppMethodInitialized_184346ede = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_Transform);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_00,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_Transform_ctor);
  (__this->fields)._staticTransforms = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._staticTransforms,__this_00);
  pSVar1 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_BasePopup_AnimationKeyframe);
  System_Collections_Generic_List_BasePopup_AnimationKeyframe____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar1,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_BasePopup_AnimationKeyframe_ctor)
  ;
  if (pSVar1 != (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)0x0) {
    il2cpp_runtime_helper_1800392a0(pSVar1,0,MethodInfo_System_Collections_Generic_List_BasePopup_AnimationKeyframe_Add);
    il2cpp_runtime_helper_1800392a0(pSVar1,0x3fa666663e19999a,
                  MethodInfo_System_Collections_Generic_List_BasePopup_AnimationKeyframe_Add);
    il2cpp_runtime_helper_1800392a0(pSVar1,0x3f4ccccd3e99999a,
                  MethodInfo_System_Collections_Generic_List_BasePopup_AnimationKeyframe_Add);
    il2cpp_runtime_helper_1800392a0(pSVar1,0x3f8ccccd3ee66666,
                  MethodInfo_System_Collections_Generic_List_BasePopup_AnimationKeyframe_Add);
    il2cpp_runtime_helper_1800392a0(pSVar1,0x3f7333333f19999a,
                  MethodInfo_System_Collections_Generic_List_BasePopup_AnimationKeyframe_Add);
    il2cpp_runtime_helper_1800392a0(pSVar1,0x3f8666663f400000,
                  MethodInfo_System_Collections_Generic_List_BasePopup_AnimationKeyframe_Add);
    il2cpp_runtime_helper_1800392a0(pSVar1,0x3f8000003f800000,
                  MethodInfo_System_Collections_Generic_List_BasePopup_AnimationKeyframe_Add);
    (__this->fields).killPopupKeyframesIn = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields).killPopupKeyframesIn,pSVar1);
    pSVar1 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_BasePopup_AnimationKeyframe);
    System_Collections_Generic_List_BasePopup_AnimationKeyframe____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)pSVar1,
               (MethodInfo_92A240 *)
               MethodInfo_System_Collections_Generic_List_BasePopup_AnimationKeyframe_ctor);
    if (pSVar1 != (System_Collections_Generic_List_BasePopup_AnimationKeyframe__o *)0x0) {
      il2cpp_runtime_helper_1800392a0(pSVar1,0,MethodInfo_System_Collections_Generic_List_BasePopup_AnimationKeyframe_Add);
      il2cpp_runtime_helper_1800392a0(pSVar1,0x3f19999a,
                    MethodInfo_System_Collections_Generic_List_BasePopup_AnimationKeyframe_Add);
      il2cpp_runtime_helper_1800392a0(pSVar1,0x3f59999a3f333333,
                    MethodInfo_System_Collections_Generic_List_BasePopup_AnimationKeyframe_Add);
      il2cpp_runtime_helper_1800392a0(pSVar1,0x3f4ccccd3f59999a,
                    MethodInfo_System_Collections_Generic_List_BasePopup_AnimationKeyframe_Add);
      il2cpp_runtime_helper_1800392a0(pSVar1,0x3f8000003f800000,
                    MethodInfo_System_Collections_Generic_List_BasePopup_AnimationKeyframe_Add);
      (__this->fields).killPopupKeyframesOut = pSVar1;
      Il2CppCodeGenWriteBarrier(&(__this->fields).killPopupKeyframesOut,pSVar1);
      if (Il2CppMethodInitialized_184346f11 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_Dictionary_string_Button_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Collections_Generic_Dictionary_string_Button);
        Il2CppMethodInitialized_184346f11 = '\x01';
      }
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_Button);
      System_Collections_Generic_Dictionary_object__ProbeReferenceVolume_CellData_PerScenarioData____ctor
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                 (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_Button_ctor);
      (__this->fields)._topButtons = __this_01;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._topButtons,__this_01);
      UI_BasePanel___ctor((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


