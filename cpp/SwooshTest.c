// Type: SwooshTest
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/SwooshTest.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/ThirdParty/MeleeWeaponTrail/Example/Scripts/SwooshTest.cs  [prior source available (delta unverified)]
// --------------------------------

// SwooshTest$$Start
// il2cpp: void SwooshTest__Start (SwooshTest_o* __this, const MethodInfo* method);
// 0x3d69db0

void SwooshTest__Start(SwooshTest_o *__this,MethodInfo *method)

{
  UnityEngine_AnimationClip_o *pUVar1;
  MeleeWeaponTrail_o *pMVar2;
  UnityEngine_Animation_o *__this_00;
  System_String_o *name;
  UnityEngine_AnimationState_o *pUVar3;
  float fVar4;
  float fVar5;
  
  if (DAT_057025e9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Animation_GetComponent_Animation);
    DAT_057025e9 = '\x01';
  }
  pUVar1 = (__this->fields)._animation;
  if (pUVar1 != (UnityEngine_AnimationClip_o *)0x0) {
    fVar4 = UnityEngine_AnimationClip__get_frameRate(pUVar1,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._animation;
    if (pUVar1 != (UnityEngine_AnimationClip_o *)0x0) {
      fVar5 = UnityEngine_AnimationClip__get_length(pUVar1,(MethodInfo *)0x0);
      (__this->fields)._startN = (float)(__this->fields)._start / (fVar4 * fVar5);
      (__this->fields)._endN = (float)(__this->fields)._end / (fVar4 * fVar5);
      __this_00 = (UnityEngine_Animation_o *)
                  UnityEngine_Component__GetComponent<object>
                            ((UnityEngine_Component_o *)__this,MethodInfo_Animation_GetComponent_Animation);
      pUVar1 = (__this->fields)._animation;
      if (pUVar1 != (UnityEngine_AnimationClip_o *)0x0) {
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)pUVar1,(MethodInfo *)0x0);
        if (__this_00 != (UnityEngine_Animation_o *)0x0) {
          pUVar3 = UnityEngine_Animation__get_Item(__this_00,name,(MethodInfo *)0x0);
          (__this->fields)._animationState = pUVar3;
          il2cpp_runtime_glue(&(__this->fields)._animationState,pUVar3);
          pMVar2 = (__this->fields)._trail;
          if (pMVar2 != (MeleeWeaponTrail_o *)0x0) {
            *(undefined1 *)&(pMVar2->fields)._emit = 0;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// SwooshTest$$Update
// il2cpp: void SwooshTest__Update (SwooshTest_o* __this, const MethodInfo* method);
// 0x3d69e90

void SwooshTest__Update(SwooshTest_o *__this,MethodInfo *method)

{
  float fVar1;
  char cVar2;
  UnityEngine_AnimationState_o *pUVar3;
  MeleeWeaponTrail_o *pMVar4;
  undefined1 uVar5;
  float fVar6;
  float fVar7;
  
  pUVar3 = (__this->fields)._animationState;
  if (pUVar3 == (UnityEngine_AnimationState_o *)0x0) goto LAB_03d69f59;
  fVar7 = (__this->fields)._time;
  fVar6 = UnityEngine_AnimationState__get_normalizedTime(pUVar3,(MethodInfo *)0x0);
  fVar7 = (fVar6 - (__this->fields)._prevAnimTime) + fVar7;
  (__this->fields)._time = fVar7;
  cVar2 = (char)(__this->fields)._firstFrame;
  if (1.0 < fVar7) {
    if (cVar2 == '\0') {
      fVar7 = fVar7 + -1.0;
      (__this->fields)._time = fVar7;
    }
LAB_03d69efa:
    *(undefined1 *)&(__this->fields)._firstFrame = 0;
  }
  else if (cVar2 != '\0') goto LAB_03d69efa;
  fVar6 = (__this->fields)._startN;
  fVar1 = (__this->fields)._prevTime;
  if ((fVar6 <= fVar1) || (fVar7 < fVar6)) {
    fVar6 = (__this->fields)._endN;
    if ((fVar1 < fVar6) && (fVar6 <= fVar7)) {
      pMVar4 = (__this->fields)._trail;
      if (pMVar4 == (MeleeWeaponTrail_o *)0x0) goto LAB_03d69f59;
      uVar5 = 0;
      goto LAB_03d69f38;
    }
  }
  else {
    pMVar4 = (__this->fields)._trail;
    uVar5 = 1;
    if (pMVar4 == (MeleeWeaponTrail_o *)0x0) goto LAB_03d69f59;
LAB_03d69f38:
    *(undefined1 *)&(pMVar4->fields)._emit = uVar5;
  }
  (__this->fields)._prevTime = fVar7;
  pUVar3 = (__this->fields)._animationState;
  if (pUVar3 != (UnityEngine_AnimationState_o *)0x0) {
    fVar7 = UnityEngine_AnimationState__get_normalizedTime(pUVar3,(MethodInfo *)0x0);
    (__this->fields)._prevAnimTime = fVar7;
    return;
  }
LAB_03d69f59:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// SwooshTest$$.ctor
// il2cpp: void SwooshTest___ctor (SwooshTest_o* __this, const MethodInfo* method);
// 0x3d69f60

void SwooshTest___ctor(SwooshTest_o *__this,MethodInfo *method)

{
  *(undefined1 *)&(__this->fields)._firstFrame = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


