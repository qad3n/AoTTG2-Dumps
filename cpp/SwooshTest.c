// Type: SwooshTest
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/SwooshTest.cs
// Prior real C# source (older reference): Assets/Scripts/ThirdParty/MeleeWeaponTrail/Example/Scripts/SwooshTest.cs
// --------------------------------

// SwooshTest$$Start
// il2cpp: void SwooshTest__Start (SwooshTest_o* __this, const MethodInfo* method);
// 0x58492f0

void SwooshTest__Start(SwooshTest_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_AnimationClip_o *pUVar3;
  MeleeWeaponTrail_o *pMVar4;
  UnityEngine_Animation_o *__this_00;
  System_String_o *name;
  UnityEngine_AnimationState_o *pUVar5;
  float fVar6;
  float fVar7;
  undefined4 extraout_XMM0_Db;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  if (Il2CppMethodInitialized_07545019 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Animation);
    Il2CppMethodInitialized_07545019 = '\x01';
  }
  pUVar3 = (__this->fields)._animation;
  if (pUVar3 != (UnityEngine_AnimationClip_o *)0x0) {
    fVar6 = UnityEngine_AnimationClip__get_frameRate(pUVar3,(MethodInfo *)0x0);
    pUVar3 = (__this->fields)._animation;
    if (pUVar3 != (UnityEngine_AnimationClip_o *)0x0) {
      fVar7 = UnityEngine_AnimationClip__get_length(pUVar3,(MethodInfo *)0x0);
      uVar1 = (__this->fields)._start;
      uVar2 = (__this->fields)._end;
      auVar8._0_4_ = (float)(int)uVar1;
      auVar8._4_4_ = (float)(int)uVar2;
      auVar8._8_8_ = 0;
      auVar9._4_4_ = fVar6 * fVar7;
      auVar9._0_4_ = fVar6 * fVar7;
      auVar9._8_4_ = extraout_XMM0_Db;
      auVar9._12_4_ = extraout_XMM0_Db;
      auVar9 = divps(auVar8,auVar9);
      (__this->fields)._startN = (float)auVar9._0_4_;
      (__this->fields)._endN = (float)auVar9._4_4_;
      __this_00 = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)__this,
                             (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Animation);
      pUVar3 = (__this->fields)._animation;
      if (pUVar3 != (UnityEngine_AnimationClip_o *)0x0) {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)pUVar3,(MethodInfo *)0x0);
        if (__this_00 != (UnityEngine_Animation_o *)0x0) {
          pUVar5 = UnityEngine_Animation__get_Item(__this_00,name,(MethodInfo *)0x0);
          (__this->fields)._animationState = pUVar5;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._animationState);
          pMVar4 = (__this->fields)._trail;
          if (pMVar4 != (MeleeWeaponTrail_o *)0x0) {
            (pMVar4->fields)._emit = false;
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// SwooshTest$$Update
// il2cpp: void SwooshTest__Update (SwooshTest_o* __this, const MethodInfo* method);
// 0x58493c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x584943e: jmp 0x584947d

void SwooshTest__Update(SwooshTest_o *__this,MethodInfo *method)

{
  float fVar1;
  UnityEngine_AnimationState_o *pUVar2;
  MeleeWeaponTrail_o *pMVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  
  pUVar2 = (__this->fields)._animationState;
  if (pUVar2 == (UnityEngine_AnimationState_o *)0x0) goto label_0584947d;
  fVar6 = (__this->fields)._time;
  fVar5 = UnityEngine_AnimationState__get_normalizedTime(pUVar2,(MethodInfo *)0x0);
  fVar6 = (fVar5 - (__this->fields)._prevAnimTime) + fVar6;
  (__this->fields)._time = fVar6;
  bVar4 = (__this->fields)._firstFrame;
  if (fVar6 <= 1.0) {
    if (bVar4 != false) goto label_0584941b;
  }
  else {
    if (bVar4 == false) {
      fVar6 = fVar6 + -1.0;
      (__this->fields)._time = fVar6;
    }
label_0584941b:
    (__this->fields)._firstFrame = false;
  }
  fVar5 = (__this->fields)._startN;
  fVar1 = (__this->fields)._prevTime;
  if ((fVar5 <= fVar1) || (fVar6 < fVar5)) {
    fVar5 = (__this->fields)._endN;
    if ((fVar1 < fVar5) && (fVar5 <= fVar6)) {
      pMVar3 = (__this->fields)._trail;
      if (pMVar3 == (MeleeWeaponTrail_o *)0x0) goto label_0584947d;
      bVar4 = false;
      goto label_0584945a;
    }
  }
  else {
    pMVar3 = (__this->fields)._trail;
    bVar4 = true;
    if (pMVar3 == (MeleeWeaponTrail_o *)0x0) goto label_0584947d;
label_0584945a:
    (pMVar3->fields)._emit = bVar4;
  }
  (__this->fields)._prevTime = fVar6;
  pUVar2 = (__this->fields)._animationState;
  if (pUVar2 != (UnityEngine_AnimationState_o *)0x0) {
    fVar6 = UnityEngine_AnimationState__get_normalizedTime(pUVar2,(MethodInfo *)0x0);
    (__this->fields)._prevAnimTime = fVar6;
    return;
  }
label_0584947d:
  ThrowNullReferenceException();
}


// SwooshTest$$.ctor
// il2cpp: void SwooshTest___ctor (SwooshTest_o* __this, const MethodInfo* method);
// 0x5849490

void SwooshTest___ctor(SwooshTest_o *__this,MethodInfo *method)

{
  (__this->fields)._firstFrame = true;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


