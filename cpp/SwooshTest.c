// Type: SwooshTest
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/SwooshTest.cs
// Prior real C# source (older reference): Assets/Scripts/ThirdParty/MeleeWeaponTrail/Example/Scripts/SwooshTest.cs
// --------------------------------

// SwooshTest$$Start
// il2cpp: void SwooshTest__Start (SwooshTest_o* __this, const MethodInfo* method);
// 0x405f700

void SwooshTest__Start(SwooshTest_o *__this,MethodInfo *method)

{
  float fVar1;
  char cVar2;
  UnityEngine_AnimationClip_o *pUVar3;
  MeleeWeaponTrail_o *pMVar4;
  UnityEngine_Animation_o *__this_00;
  System_String_o *name;
  UnityEngine_AnimationState_o *pUVar5;
  long lVar6;
  undefined1 uVar7;
  UnityEngine_AnimationClip_o *__this_01;
  UnityEngine_MonoBehaviour_o *__this_02;
  float fVar8;
  float fVar9;
  
  if (g_data_057ac299 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Animation_GetComponent_Animation);
    g_data_057ac299 = '\x01';
  }
  pUVar3 = (__this->fields)._animation;
  __this_01 = (UnityEngine_AnimationClip_o *)0x0;
  if (pUVar3 != (UnityEngine_AnimationClip_o *)0x0) {
    fVar8 = UnityEngine_AnimationClip__get_frameRate(pUVar3,(MethodInfo *)0x0);
    pUVar3 = (__this->fields)._animation;
    __this_01 = (UnityEngine_AnimationClip_o *)0x0;
    if (pUVar3 != (UnityEngine_AnimationClip_o *)0x0) {
      fVar9 = UnityEngine_AnimationClip__get_length(pUVar3,(MethodInfo *)0x0);
      (__this->fields)._startN = (float)(__this->fields)._start / (fVar8 * fVar9);
      (__this->fields)._endN = (float)(__this->fields)._end / (fVar8 * fVar9);
      __this_00 = (UnityEngine_Animation_o *)
                  UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_Animation_GetComponent_Animation);
      __this_01 = (__this->fields)._animation;
      if ((__this_01 != (UnityEngine_AnimationClip_o *)0x0) &&
         (name = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this_01,(MethodInfo *)0x0),
         __this_00 != (UnityEngine_Animation_o *)0x0)) {
        pUVar5 = UnityEngine_Animation__get_Item(__this_00,name,(MethodInfo *)0x0);
        __this_01 = (UnityEngine_AnimationClip_o *)&(__this->fields)._animationState;
        (__this->fields)._animationState = pUVar5;
        il2cpp_runtime_helper_022b4080();
        pMVar4 = (__this->fields)._trail;
        if (pMVar4 != (MeleeWeaponTrail_o *)0x0) {
          *(undefined1 *)&(pMVar4->fields)._emit = 0;
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  __this_02 = (UnityEngine_MonoBehaviour_o *)((UnityEngine_Object_Fields *)&__this_01[1].monitor)->m_CachedPtr
  ;
  if (__this_02 == (UnityEngine_MonoBehaviour_o *)0x0) goto label_0405f8a9;
  fVar8 = *(float *)&__this_01[2].klass;
  fVar9 = UnityEngine_AnimationState__get_normalizedTime
                    ((UnityEngine_AnimationState_o *)__this_02,(MethodInfo *)0x0);
  fVar8 = (fVar9 - *(float *)&__this_01[2].monitor) + fVar8;
  *(float *)&__this_01[2].klass = fVar8;
  cVar2 = (char)__this_01[2].fields._isAnimatorMotion_k__BackingField;
  if (1.0 < fVar8) {
    if (cVar2 == '\0') {
      fVar8 = fVar8 + -1.0;
      *(float *)&__this_01[2].klass = fVar8;
    }
label_0405f84a:
    *(undefined1 *)&__this_01[2].fields._isAnimatorMotion_k__BackingField = 0;
  }
  else if (cVar2 != '\0') goto label_0405f84a;
  fVar9 = (float)__this_01[1].fields._isAnimatorMotion_k__BackingField;
  fVar1 = *(float *)((long)&__this_01[2].klass + 4);
  if ((fVar9 <= fVar1) || (fVar8 < fVar9)) {
    fVar9 = *(float *)&__this_01[1].fields.field_0xc;
    if ((fVar1 < fVar9) && (fVar9 <= fVar8)) {
      lVar6 = __this_01[2].fields.m_CachedPtr;
      if (lVar6 == 0) goto label_0405f8a9;
      uVar7 = 0;
      goto label_0405f888;
    }
  }
  else {
    lVar6 = __this_01[2].fields.m_CachedPtr;
    uVar7 = 1;
    if (lVar6 == 0) goto label_0405f8a9;
label_0405f888:
    *(undefined1 *)(lVar6 + 0x20) = uVar7;
  }
  *(float *)((long)&__this_01[2].klass + 4) = fVar8;
  pUVar5 = (UnityEngine_AnimationState_o *)((UnityEngine_Object_Fields *)&__this_01[1].monitor)->m_CachedPtr;
  __this_02 = (UnityEngine_MonoBehaviour_o *)0x0;
  if (pUVar5 != (UnityEngine_AnimationState_o *)0x0) {
    fVar8 = UnityEngine_AnimationState__get_normalizedTime(pUVar5,(MethodInfo *)0x0);
    *(float *)&__this_01[2].monitor = fVar8;
    return;
  }
label_0405f8a9:
  il2cpp_runtime_helper_022b2c90();
  *(undefined1 *)&__this_02[2].fields.m_CancellationTokenSource = 1;
  UnityEngine_MonoBehaviour___ctor(__this_02,(MethodInfo *)0x0);
  return;
}


// SwooshTest$$Update
// il2cpp: void SwooshTest__Update (SwooshTest_o* __this, const MethodInfo* method);
// 0x405f7e0

void SwooshTest__Update(SwooshTest_o *__this,MethodInfo *method)

{
  float fVar1;
  char cVar2;
  UnityEngine_AnimationState_o *__this_00;
  MeleeWeaponTrail_o *pMVar3;
  undefined1 uVar4;
  UnityEngine_MonoBehaviour_o *__this_01;
  float fVar5;
  float fVar6;
  
  __this_01 = (UnityEngine_MonoBehaviour_o *)(__this->fields)._animationState;
  if (__this_01 == (UnityEngine_MonoBehaviour_o *)0x0) goto label_0405f8a9;
  fVar6 = (__this->fields)._time;
  fVar5 = UnityEngine_AnimationState__get_normalizedTime
                    ((UnityEngine_AnimationState_o *)__this_01,(MethodInfo *)0x0);
  fVar6 = (fVar5 - (__this->fields)._prevAnimTime) + fVar6;
  (__this->fields)._time = fVar6;
  cVar2 = (char)(__this->fields)._firstFrame;
  if (1.0 < fVar6) {
    if (cVar2 == '\0') {
      fVar6 = fVar6 + -1.0;
      (__this->fields)._time = fVar6;
    }
label_0405f84a:
    *(undefined1 *)&(__this->fields)._firstFrame = 0;
  }
  else if (cVar2 != '\0') goto label_0405f84a;
  fVar5 = (__this->fields)._startN;
  fVar1 = (__this->fields)._prevTime;
  if ((fVar5 <= fVar1) || (fVar6 < fVar5)) {
    fVar5 = (__this->fields)._endN;
    if ((fVar1 < fVar5) && (fVar5 <= fVar6)) {
      pMVar3 = (__this->fields)._trail;
      if (pMVar3 == (MeleeWeaponTrail_o *)0x0) goto label_0405f8a9;
      uVar4 = 0;
      goto label_0405f888;
    }
  }
  else {
    pMVar3 = (__this->fields)._trail;
    uVar4 = 1;
    if (pMVar3 == (MeleeWeaponTrail_o *)0x0) goto label_0405f8a9;
label_0405f888:
    *(undefined1 *)&(pMVar3->fields)._emit = uVar4;
  }
  (__this->fields)._prevTime = fVar6;
  __this_00 = (__this->fields)._animationState;
  __this_01 = (UnityEngine_MonoBehaviour_o *)0x0;
  if (__this_00 != (UnityEngine_AnimationState_o *)0x0) {
    fVar6 = UnityEngine_AnimationState__get_normalizedTime(__this_00,(MethodInfo *)0x0);
    (__this->fields)._prevAnimTime = fVar6;
    return;
  }
label_0405f8a9:
  il2cpp_runtime_helper_022b2c90();
  *(undefined1 *)&__this_01[2].fields.m_CancellationTokenSource = 1;
  UnityEngine_MonoBehaviour___ctor(__this_01,(MethodInfo *)0x0);
  return;
}


// SwooshTest$$.ctor
// il2cpp: void SwooshTest___ctor (SwooshTest_o* __this, const MethodInfo* method);
// 0x405f8b0

void SwooshTest___ctor(SwooshTest_o *__this,MethodInfo *method)

{
  *(undefined1 *)&(__this->fields)._firstFrame = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


