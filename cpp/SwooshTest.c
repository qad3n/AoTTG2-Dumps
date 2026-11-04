// Type: SwooshTest
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/SwooshTest.cs
// Prior real C# source (older reference): Assets/Scripts/ThirdParty/MeleeWeaponTrail/Example/Scripts/SwooshTest.cs
// --------------------------------

// SwooshTest$$Start
// il2cpp: void SwooshTest__Start (SwooshTest_o* __this, const MethodInfo* method);
// 0x181daeb60

void SwooshTest__Start(SwooshTest_o *__this,MethodInfo *method)

{
  UnityEngine_AnimationClip_o *pUVar1;
  MeleeWeaponTrail_o *pMVar2;
  UnityEngine_Animation_o *__this_00;
  System_String_o *name;
  UnityEngine_AnimationState_o *value;
  float fVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_1843448c8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Animation);
    Il2CppMethodInitialized_1843448c8 = '\x01';
  }
  pUVar1 = (__this->fields)._animation;
  if (pUVar1 != (UnityEngine_AnimationClip_o *)0x0) {
    fVar3 = UnityEngine_AnimationClip__get_frameRate(pUVar1,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._animation;
    if (pUVar1 != (UnityEngine_AnimationClip_o *)0x0) {
      fVar4 = UnityEngine_AnimationClip__get_length(pUVar1,(MethodInfo *)0x0);
      (__this->fields)._startN = (float)(__this->fields)._start / (fVar4 * fVar3);
      (__this->fields)._endN = (float)(__this->fields)._end / (fVar4 * fVar3);
      __this_00 = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)__this,
                             (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Animation);
      pUVar1 = (__this->fields)._animation;
      if (pUVar1 != (UnityEngine_AnimationClip_o *)0x0) {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)pUVar1,(MethodInfo *)0x0);
        if (__this_00 != (UnityEngine_Animation_o *)0x0) {
          value = UnityEngine_Animation__get_Item(__this_00,name,(MethodInfo *)0x0);
          (__this->fields)._animationState = value;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._animationState,value);
          pMVar2 = (__this->fields)._trail;
          if (pMVar2 != (MeleeWeaponTrail_o *)0x0) {
            (pMVar2->fields)._emit = false;
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
// 0x181daec50

void SwooshTest__Update(SwooshTest_o *__this,MethodInfo *method)

{
  float *pfVar1;
  UnityEngine_AnimationState_o *pUVar2;
  MeleeWeaponTrail_o *pMVar3;
  float fVar4;
  float fVar5;
  
  pUVar2 = (__this->fields)._animationState;
  if (pUVar2 != (UnityEngine_AnimationState_o *)0x0) {
    fVar5 = (__this->fields)._time;
    fVar4 = UnityEngine_AnimationState__get_normalizedTime(pUVar2,(MethodInfo *)0x0);
    fVar5 = (fVar4 - (__this->fields)._prevAnimTime) + fVar5;
    (__this->fields)._time = fVar5;
    if ((1.0 < fVar5) || ((__this->fields)._firstFrame != false)) {
      if ((__this->fields)._firstFrame == false) {
        (__this->fields)._time = fVar5 - 1.0;
      }
      (__this->fields)._firstFrame = false;
    }
    fVar5 = (__this->fields)._startN;
    pfVar1 = &(__this->fields)._prevTime;
    if ((fVar5 < *pfVar1 || fVar5 == *pfVar1) || ((__this->fields)._time < (__this->fields)._startN)) {
      fVar5 = (__this->fields)._endN;
      pfVar1 = &(__this->fields)._prevTime;
      if ((*pfVar1 <= fVar5 && fVar5 != *pfVar1) && ((__this->fields)._endN <= (__this->fields)._time)) {
        pMVar3 = (__this->fields)._trail;
        if (pMVar3 == (MeleeWeaponTrail_o *)0x0) goto label_181daed19;
        (pMVar3->fields)._emit = false;
      }
    }
    else {
      pMVar3 = (__this->fields)._trail;
      if (pMVar3 == (MeleeWeaponTrail_o *)0x0) goto label_181daed19;
      (pMVar3->fields)._emit = true;
    }
    pUVar2 = (__this->fields)._animationState;
    (__this->fields)._prevTime = (__this->fields)._time;
    if (pUVar2 != (UnityEngine_AnimationState_o *)0x0) {
      fVar5 = UnityEngine_AnimationState__get_normalizedTime(pUVar2,(MethodInfo *)0x0);
      (__this->fields)._prevAnimTime = fVar5;
      return;
    }
  }
label_181daed19:
  ThrowNullReferenceException();
}


// SwooshTest$$.ctor
// il2cpp: void SwooshTest___ctor (SwooshTest_o* __this, const MethodInfo* method);
// 0x181daed20

void SwooshTest___ctor(SwooshTest_o *__this,MethodInfo *method)

{
  (__this->fields)._firstFrame = true;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


