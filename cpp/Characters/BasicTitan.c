// Type: Characters.BasicTitan
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/Characters/BasicTitan.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Titan/BasicTitan.cs
// --------------------------------

// Characters.BasicTitan.<>c__DisplayClass182_0$$.ctor
// il2cpp: void Characters_BasicTitan___c__DisplayClass182_0___ctor (Characters_BasicTitan___c__DisplayClass182_0_o* __this, const MethodInfo* method);
// 0x5c3e470

void Characters_BasicTitan___c__DisplayClass182_0___ctor
               (Characters_BasicTitan___c__DisplayClass182_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.BasicTitan.<>c__DisplayClass182_0$$<UpdateDeathDissolve>b__0
// il2cpp: bool Characters_BasicTitan___c__DisplayClass182_0___UpdateDeathDissolve_b__0 (Characters_BasicTitan___c__DisplayClass182_0_o* __this, UnityEngine_Renderer_o* renderer, const MethodInfo* method);
// 0x5c3e480

bool Characters_BasicTitan___c__DisplayClass182_0___UpdateDeathDissolve_b__0
               (Characters_BasicTitan___c__DisplayClass182_0_o *__this,UnityEngine_Renderer_o *renderer,
               MethodInfo *method)

{
  UnityEngine_Object_o *y;
  UnityEngine_Transform_o *y_00;
  bool bVar1;
  UnityEngine_Transform_o *x;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_075477f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Left limb regrowth");
    il2cpp_codegen_initialize_runtime_metadata(&"Right limb regrowth");
    Il2CppMethodInitialized_075477f8 = '\x01';
  }
  y = (UnityEngine_Object_o *)(__this->fields).body;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)renderer,y,(MethodInfo *)0x0);
  if (!bVar1) {
    if (renderer == (UnityEngine_Renderer_o *)0x0) {
      ThrowNullReferenceException();
    }
    x = UnityEngine_Component__get_transform((UnityEngine_Component_o *)renderer,(MethodInfo *)0x0);
    y_00 = (__this->fields).head;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)y_00,(MethodInfo *)0x0);
    if (!bVar1) {
      pSVar2 = UnityEngine_Object__get_name((UnityEngine_Object_o *)renderer,(MethodInfo *)0x0);
      bVar1 = System_String__op_Equality(pSVar2,"Left limb regrowth",(MethodInfo *)0x0);
      if (!bVar1) {
        pSVar2 = UnityEngine_Object__get_name((UnityEngine_Object_o *)renderer,(MethodInfo *)0x0);
        bVar1 = System_String__op_Equality(pSVar2,"Right limb regrowth",(MethodInfo *)0x0);
        return bVar1;
      }
    }
  }
  return true;
}


// Characters.BasicTitan.<PlayDecapitationBlood>d__167$$.ctor
// il2cpp: void Characters_BasicTitan__PlayDecapitationBlood_d__167___ctor (Characters_BasicTitan__PlayDecapitationBlood_d__167_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5c3e590

void Characters_BasicTitan__PlayDecapitationBlood_d__167___ctor
               (Characters_BasicTitan__PlayDecapitationBlood_d__167_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Characters.BasicTitan.<PlayDecapitationBlood>d__167$$System.IDisposable.Dispose
// il2cpp: void Characters_BasicTitan__PlayDecapitationBlood_d__167__System_IDisposable_Dispose (Characters_BasicTitan__PlayDecapitationBlood_d__167_o* __this, const MethodInfo* method);
// 0x5c3e5b0

void Characters_BasicTitan__PlayDecapitationBlood_d__167__System_IDisposable_Dispose
               (Characters_BasicTitan__PlayDecapitationBlood_d__167_o *__this,MethodInfo *method)

{
  return;
}


// Characters.BasicTitan.<PlayDecapitationBlood>d__167$$MoveNext
// il2cpp: bool Characters_BasicTitan__PlayDecapitationBlood_d__167__MoveNext (Characters_BasicTitan__PlayDecapitationBlood_d__167_o* __this, const MethodInfo* method);
// 0x5c3e5c0

bool Characters_BasicTitan__PlayDecapitationBlood_d__167__MoveNext
               (Characters_BasicTitan__PlayDecapitationBlood_d__167_o *__this,MethodInfo *method)

{
  int iVar1;
  Characters_BasicTitan_o *pCVar2;
  Characters_BasicTitanComponentCache_o *pCVar3;
  UnityEngine_ParticleSystem_o *pUVar4;
  UnityEngine_WaitForSeconds_o *__this_00;
  
  if (Il2CppMethodInitialized_075477f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    Il2CppMethodInitialized_075477f9 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  pCVar2 = (__this->fields).__4__this;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    if (((pCVar2 == (Characters_BasicTitan_o *)0x0) ||
        (pCVar3 = (pCVar2->fields).BasicCache, pCVar3 == (Characters_BasicTitanComponentCache_o *)0x0)) ||
       (pUVar4 = (pCVar3->fields).DecapitationBlood, pUVar4 == (UnityEngine_ParticleSystem_o *)0x0)) {
label_05c3e6aa:
      ThrowNullReferenceException();
    }
    UnityEngine_ParticleSystem__Play_69c2630(pUVar4,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(__this_00,3.0,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 1;
  }
  else if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if (((pCVar2 == (Characters_BasicTitan_o *)0x0) ||
        (pCVar3 = (pCVar2->fields).BasicCache, pCVar3 == (Characters_BasicTitanComponentCache_o *)0x0)) ||
       (pUVar4 = (pCVar3->fields).DecapitationBlood, pUVar4 == (UnityEngine_ParticleSystem_o *)0x0))
    goto label_05c3e6aa;
    UnityEngine_ParticleSystem__Stop(pUVar4,true,1,(MethodInfo *)0x0);
  }
  return iVar1 == 0;
}


// Characters.BasicTitan.<PlayDecapitationBlood>d__167$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Characters_BasicTitan__PlayDecapitationBlood_d__167__System_Collections_Generic_IEnumerator_System_Object__get_Current (Characters_BasicTitan__PlayDecapitationBlood_d__167_o* __this, const MethodInfo* method);
// 0x5c3e6b0

Il2CppObject *
Characters_BasicTitan__PlayDecapitationBlood_d__167__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Characters_BasicTitan__PlayDecapitationBlood_d__167_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.BasicTitan.<PlayDecapitationBlood>d__167$$System.Collections.IEnumerator.Reset
// il2cpp: void Characters_BasicTitan__PlayDecapitationBlood_d__167__System_Collections_IEnumerator_Reset (Characters_BasicTitan__PlayDecapitationBlood_d__167_o* __this, const MethodInfo* method);
// 0x5c3e6c0

void Characters_BasicTitan__PlayDecapitationBlood_d__167__System_Collections_IEnumerator_Reset
               (Characters_BasicTitan__PlayDecapitationBlood_d__167_o *__this,MethodInfo *method)

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
                  MethodInfo_Characters_BasicTitan_PlayDecapitationBlood_d__167_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Characters.BasicTitan.<PlayDecapitationBlood>d__167$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Characters_BasicTitan__PlayDecapitationBlood_d__167__System_Collections_IEnumerator_get_Current (Characters_BasicTitan__PlayDecapitationBlood_d__167_o* __this, const MethodInfo* method);
// 0x5c3e700

Il2CppObject *
Characters_BasicTitan__PlayDecapitationBlood_d__167__System_Collections_IEnumerator_get_Current
          (Characters_BasicTitan__PlayDecapitationBlood_d__167_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.BasicTitan.<WaitAndDie>d__141$$.ctor
// il2cpp: void Characters_BasicTitan__WaitAndDie_d__141___ctor (Characters_BasicTitan__WaitAndDie_d__141_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5c3e710

void Characters_BasicTitan__WaitAndDie_d__141___ctor
               (Characters_BasicTitan__WaitAndDie_d__141_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Characters.BasicTitan.<WaitAndDie>d__141$$System.IDisposable.Dispose
// il2cpp: void Characters_BasicTitan__WaitAndDie_d__141__System_IDisposable_Dispose (Characters_BasicTitan__WaitAndDie_d__141_o* __this, const MethodInfo* method);
// 0x5c3e730

void Characters_BasicTitan__WaitAndDie_d__141__System_IDisposable_Dispose
               (Characters_BasicTitan__WaitAndDie_d__141_o *__this,MethodInfo *method)

{
  return;
}


// Characters.BasicTitan.<WaitAndDie>d__141$$MoveNext
// il2cpp: bool Characters_BasicTitan__WaitAndDie_d__141__MoveNext (Characters_BasicTitan__WaitAndDie_d__141_o* __this, const MethodInfo* method);
// 0x5c3e740

bool Characters_BasicTitan__WaitAndDie_d__141__MoveNext
               (Characters_BasicTitan__WaitAndDie_d__141_o *__this,MethodInfo *method)

{
  System_String_o **targetAddress;
  uint uVar1;
  Characters_BasicTitan_o *__this_00;
  Characters_BasicTitanAnimations_o *pCVar2;
  Characters_TitanDeathDissolve_o *__this_01;
  bool bVar3;
  int32_t iVar4;
  UnityEngine_WaitForSeconds_o *pUVar5;
  UnityEngine_GameObject_o *targetGo;
  System_String_o *pSVar6;
  
  if (Il2CppMethodInitialized_075477fa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    Il2CppMethodInitialized_075477fa = '\x01';
  }
  uVar1 = (__this->fields).__1__state;
  if (4 < uVar1) {
    return false;
  }
  __this_00 = (__this->fields).__4__this;
  switch(uVar1) {
  case 0:
    (__this->fields).__1__state = -1;
    if ((__this_00 == (Characters_BasicTitan_o *)0x0) ||
       (pCVar2 = (__this_00->fields).BasicAnimations, pCVar2 == (Characters_BasicTitanAnimations_o *)0x0))
    break;
    targetAddress = &(__this->fields)._dieAnimation_5__2;
    (__this->fields)._dieAnimation_5__2 = (pCVar2->fields).DieFront;
    Il2CppCodeGenWriteBarrier(targetAddress);
    if ((__this_00->fields).State == 0xd) {
      pCVar2 = (__this_00->fields).BasicAnimations;
      if (pCVar2 == (Characters_BasicTitanAnimations_o *)0x0) break;
      *targetAddress = (pCVar2->fields).DieBack;
      Il2CppCodeGenWriteBarrier(targetAddress);
    }
    if ((__this_00->fields).IsCrawler == false) {
      bVar3 = Characters_BasicTitan__get_IsBellyFlopping(__this_00,(MethodInfo *)0x0);
      if (bVar3) {
        pCVar2 = (__this_00->fields).BasicAnimations;
        if (pCVar2 == (Characters_BasicTitanAnimations_o *)0x0) break;
        pSVar6 = (pCVar2->fields).DieGround;
      }
      else {
        bVar3 = Characters_BaseTitan__get_IsSitting((Characters_BaseTitan_o *)__this_00,(MethodInfo *)0x0);
        if (!bVar3) goto label_05c3ea63;
        pCVar2 = (__this_00->fields).BasicAnimations;
        if (pCVar2 == (Characters_BasicTitanAnimations_o *)0x0) break;
        pSVar6 = (*(pCVar2->klass->vtable)._13_get_DieSit.methodPtr)
                           (pCVar2,(pCVar2->klass->vtable)._13_get_DieSit.method);
      }
    }
    else {
      pCVar2 = (__this_00->fields).BasicAnimations;
      if (pCVar2 == (Characters_BasicTitanAnimations_o *)0x0) break;
      pSVar6 = (pCVar2->fields).DieCrawler;
    }
    *targetAddress = pSVar6;
    Il2CppCodeGenWriteBarrier(targetAddress);
label_05c3ea63:
    (__this_00->fields)._pendingDeathAnimation = *targetAddress;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields)._pendingDeathAnimation);
    iVar4 = 3;
    if ((__this_00->fields)._launched == false) {
      iVar4 = 2 - (uint)((__this_00->fields)._decapitated == false);
    }
    (__this_00->fields)._pendingDeathType = iVar4;
    (__this_00->fields).State = 0xf;
    (*(__this_00->klass->vtable)._173_Ungrab.methodPtr)
              (__this_00,(__this_00->klass->vtable)._173_Ungrab.method);
    (*(__this_00->klass->vtable)._189_DeactivateAllHitboxes.methodPtr)
              (__this_00,(__this_00->klass->vtable)._189_DeactivateAllHitboxes.method);
    (__this->fields).__2__current = (Il2CppObject *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 1;
    return true;
  case 1:
    (__this->fields).__1__state = -1;
    if (__this_00 != (Characters_BasicTitan_o *)0x0) {
      (__this->fields)._dieAnimation_5__2 = (__this_00->fields)._currentStateAnimation;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._dieAnimation_5__2);
      pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
      UnityEngine_WaitForSeconds___ctor(pUVar5,1.4,(MethodInfo *)0x0);
      (__this->fields).__2__current = (Il2CppObject *)pUVar5;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
      (__this->fields).__1__state = 2;
      return true;
    }
    break;
  case 2:
    (__this->fields).__1__state = -1;
    if ((__this_00 != (Characters_BasicTitan_o *)0x0) &&
       (pCVar2 = (__this_00->fields).BasicAnimations, pCVar2 != (Characters_BasicTitanAnimations_o *)0x0)) {
      bVar3 = System_String__op_Inequality
                        ((__this->fields)._dieAnimation_5__2,(pCVar2->fields).DieGround,(MethodInfo *)0x0);
      if (bVar3) {
        pCVar2 = (__this_00->fields).BasicAnimations;
        if (pCVar2 == (Characters_BasicTitanAnimations_o *)0x0) break;
        bVar3 = System_String__op_Inequality
                          ((__this->fields)._dieAnimation_5__2,(pCVar2->fields).DieCrawler,(MethodInfo *)0x0);
        if (bVar3) {
          if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
          }
          Characters_BaseCharacter__PlaySound
                    ((Characters_BaseCharacter_o *)__this_00,
                     TypeInfo_Characters_TitanSounds->static_fields->DeathFall,(MethodInfo *)0x0);
        }
      }
      pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
      UnityEngine_WaitForSeconds___ctor(pUVar5,7.6,(MethodInfo *)0x0);
      (__this->fields).__2__current = (Il2CppObject *)pUVar5;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
      (__this->fields).__1__state = 3;
      return true;
    }
    break;
  case 3:
    (__this->fields).__1__state = -1;
    if (__this_00 != (Characters_BasicTitan_o *)0x0) {
      __this_01 = (__this_00->fields).DeathDissolve;
      if (__this_01 != (Characters_TitanDeathDissolve_o *)0x0) {
        Characters_TitanDeathDissolve__Finish(__this_01,method);
      }
      pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
      UnityEngine_WaitForSeconds___ctor(pUVar5,1.25,(MethodInfo *)0x0);
      (__this->fields).__2__current = (Il2CppObject *)pUVar5;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
      (__this->fields).__1__state = 4;
      return true;
    }
    break;
  case 4:
    (__this->fields).__1__state = -1;
    if (__this_00 != (Characters_BasicTitan_o *)0x0) {
      targetGo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0)
      ;
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      Photon_Pun_PhotonNetwork__Destroy_56d7e70(targetGo,(MethodInfo *)0x0);
      return false;
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan.<WaitAndDie>d__141$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Characters_BasicTitan__WaitAndDie_d__141__System_Collections_Generic_IEnumerator_System_Object__get_Current (Characters_BasicTitan__WaitAndDie_d__141_o* __this, const MethodInfo* method);
// 0x5c3ec80

Il2CppObject *
Characters_BasicTitan__WaitAndDie_d__141__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Characters_BasicTitan__WaitAndDie_d__141_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.BasicTitan.<WaitAndDie>d__141$$System.Collections.IEnumerator.Reset
// il2cpp: void Characters_BasicTitan__WaitAndDie_d__141__System_Collections_IEnumerator_Reset (Characters_BasicTitan__WaitAndDie_d__141_o* __this, const MethodInfo* method);
// 0x5c3ec90

void Characters_BasicTitan__WaitAndDie_d__141__System_Collections_IEnumerator_Reset
               (Characters_BasicTitan__WaitAndDie_d__141_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_Characters_BasicTitan_WaitAndDie_d__141_System_Collections_IEnumerator_Reset);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Characters.BasicTitan.<WaitAndDie>d__141$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Characters_BasicTitan__WaitAndDie_d__141__System_Collections_IEnumerator_get_Current (Characters_BasicTitan__WaitAndDie_d__141_o* __this, const MethodInfo* method);
// 0x5c3ecd0

Il2CppObject *
Characters_BasicTitan__WaitAndDie_d__141__System_Collections_IEnumerator_get_Current
          (Characters_BasicTitan__WaitAndDie_d__141_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.BasicTitan$$get_ArmEffectOffset
// il2cpp: UnityEngine_Vector3_o Characters_BasicTitan__get_ArmEffectOffset (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x5c2e170

UnityEngine_Vector3_o
Characters_BasicTitan__get_ArmEffectOffset(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_Vector3_StaticFields *pUVar3;
  float fVar4;
  UnityEngine_Vector3_o UVar5;
  
  if (Il2CppMethodInitialized_075450a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_075450a5 = '\x01';
  }
  pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar4 = (__this->fields).Size * 0.1;
  uVar1 = (pUVar3->downVector).fields.x;
  uVar2 = (pUVar3->downVector).fields.y;
  UVar5.fields.x = fVar4 * (float)uVar1;
  UVar5.fields.y = fVar4 * (float)uVar2;
  UVar5.fields.z = fVar4 * (pUVar3->downVector).fields.z;
  return (UnityEngine_Vector3_o)UVar5.fields;
}


// Characters.BasicTitan$$get_CanSprint
// il2cpp: bool Characters_BasicTitan__get_CanSprint (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x5c2e1d0

bool Characters_BasicTitan__get_CanSprint(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  return true;
}


// Characters.BasicTitan$$get_CanWallClimb
// il2cpp: bool Characters_BasicTitan__get_CanWallClimb (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x5c2e1e0

bool Characters_BasicTitan__get_CanWallClimb(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  return true;
}


// Characters.BasicTitan$$get_IsBald
// il2cpp: bool Characters_BasicTitan__get_IsBald (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x5c2e1f0

bool Characters_BasicTitan__get_IsBald(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  return (__this->fields)._hairCut;
}


// Characters.BasicTitan$$get_EmoteActions
// il2cpp: System_Collections_Generic_List_string__o* Characters_BasicTitan__get_EmoteActions (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x5c2e200

System_Collections_Generic_List_string__o *
Characters_BasicTitan__get_EmoteActions(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_array *pSVar3;
  MethodInfo *pMVar4;
  System_String_o *pSVar5;
  System_Collections_Generic_List_string__o *__this_00;
  
  if (Il2CppMethodInitialized_075477af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Shake");
    il2cpp_codegen_initialize_runtime_metadata(&"Nod");
    il2cpp_codegen_initialize_runtime_metadata(&"Laugh");
    il2cpp_codegen_initialize_runtime_metadata(&"Roar2");
    il2cpp_codegen_initialize_runtime_metadata(&"Roar1");
    Il2CppMethodInitialized_075477af = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  pSVar5 = "Laugh";
  pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
  if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (__this_00->fields)._items;
    if (pSVar3 != (System_String_array *)0x0) {
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        pSVar3->m_Items[(int)uVar2] = pSVar5;
        Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar5,
                   (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
      }
      pSVar5 = "Nod";
      pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (__this_00->fields)._items;
      if (pSVar3 != (System_String_array *)0x0) {
        uVar2 = (__this_00->fields)._size;
        if (uVar2 < (uint)pSVar3->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          pSVar3->m_Items[(int)uVar2] = pSVar5;
          Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar5,
                     (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
        }
        pSVar5 = "Shake";
        pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
        piVar1 = &(__this_00->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (__this_00->fields)._items;
        if (pSVar3 != (System_String_array *)0x0) {
          uVar2 = (__this_00->fields)._size;
          if (uVar2 < (uint)pSVar3->max_length) {
            (__this_00->fields)._size = uVar2 + 1;
            pSVar3->m_Items[(int)uVar2] = pSVar5;
            Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar5,
                       (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
          }
          pSVar5 = "Roar1";
          pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar3 = (__this_00->fields)._items;
          if (pSVar3 != (System_String_array *)0x0) {
            uVar2 = (__this_00->fields)._size;
            if (uVar2 < (uint)pSVar3->max_length) {
              (__this_00->fields)._size = uVar2 + 1;
              pSVar3->m_Items[(int)uVar2] = pSVar5;
              Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar5,
                         (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
            }
            pSVar5 = "Roar2";
            pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
            piVar1 = &(__this_00->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar3 = (__this_00->fields)._items;
            if (pSVar3 != (System_String_array *)0x0) {
              uVar2 = (__this_00->fields)._size;
              if (uVar2 < (uint)pSVar3->max_length) {
                (__this_00->fields)._size = uVar2 + 1;
                pSVar3->m_Items[(int)uVar2] = pSVar5;
                Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar5,
                           (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
              }
              return __this_00;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$Init
// il2cpp: void Characters_BasicTitan__Init (Characters_BasicTitan_o* __this, bool ai, System_String_o* team, SimpleJSONFixed_JSONNode_o* data, Settings_TitanCustomSet_o* customSet, int32_t skinSlot, const MethodInfo* method);
// 0x5c2e470

void Characters_BasicTitan__Init
               (Characters_BasicTitan_o *__this,bool ai,System_String_o *team,SimpleJSONFixed_JSONNode_o *data
               ,Settings_TitanCustomSet_o *customSet,int32_t skinSlot,MethodInfo *method)

{
  Characters_BasicTitanAnimations_o *pCVar1;
  System_String_array *pSVar2;
  Utility_BaseComponentCache_o *pUVar3;
  Photon_Pun_PhotonView_o *__this_00;
  Characters_AnimationHandler_o *__this_01;
  bool bVar4;
  int32_t iVar5;
  uint uVar6;
  UnityEngine_GameObject_o *__this_02;
  Controllers_BaseTitanAIController_o *pCVar7;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  System_String_o *pSVar9;
  System_Object_array *parameters;
  Il2CppObject *pIVar10;
  Il2CppObject *pIVar11;
  MethodInfo *method_00;
  undefined1 local_39;
  System_String_o *local_38;
  
  local_38 = team;
  if (Il2CppMethodInitialized_075477b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_BaseTitanAIController);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_BasicTitanPlayerController);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"SetCrawlerRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"RunAnimation");
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"IsCrawler");
    Il2CppMethodInitialized_075477b0 = '\x01';
  }
  (__this->fields)._customSet = customSet;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._customSet);
  (__this->fields)._skinSlot = skinSlot;
  __this_02 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (ai) {
    if (__this_02 == (UnityEngine_GameObject_o *)0x0) goto label_05c2e85d;
    pCVar7 = UnityEngine_GameObject__AddComponent_object_
                       (__this_02,
                        (MethodInfo_353B6A0 *)
                        MethodInfo_UnityEngine_GameObject_AddComponent_BaseTitanAIController);
    if (pCVar7 == (Controllers_BaseTitanAIController_o *)0x0) goto label_05c2e85d;
    (*(pCVar7->klass->vtable)._11_Init.methodPtr)(pCVar7,data,(pCVar7->klass->vtable)._11_Init.method);
    if (data == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05c2e85d;
    pSVar8 = (*(data->klass->vtable)._7_get_Item.methodPtr)
                       (data,"Name",(data->klass->vtable)._7_get_Item.method);
    if (pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05c2e85d;
    pSVar9 = (*(pSVar8->klass->vtable)._9_get_Value.methodPtr)
                       (pSVar8,(pSVar8->klass->vtable)._9_get_Value.method);
    Characters_BaseCharacter__set_Name((Characters_BaseCharacter_o *)__this,pSVar9,(MethodInfo *)0x0);
    pSVar8 = (*(data->klass->vtable)._7_get_Item.methodPtr)
                       (data,"IsCrawler",(data->klass->vtable)._7_get_Item.method);
    if (pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05c2e85d;
    bVar4 = (*(pSVar8->klass->vtable)._39_get_AsBool.methodPtr)
                      (pSVar8,(pSVar8->klass->vtable)._39_get_AsBool.method);
    (__this->fields).IsCrawler = bVar4;
    if (bVar4) goto label_05c2e6f1;
label_05c2e602:
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar4 = SimpleJSONFixed_JSONNode__op_Inequality(data,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    iVar5 = 1;
    if (bVar4) {
      if (data == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05c2e85d;
      bVar4 = (*(data->klass->vtable)._28_HasKey.methodPtr)
                        (data,"RunAnimation",(data->klass->vtable)._28_HasKey.method);
      if (bVar4) {
        pSVar8 = (*(data->klass->vtable)._7_get_Item.methodPtr)
                           (data,"RunAnimation",(data->klass->vtable)._7_get_Item.method);
        if (pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05c2e85d;
        iVar5 = (*(pSVar8->klass->vtable)._35_get_AsInt.methodPtr)
                          (pSVar8,(pSVar8->klass->vtable)._35_get_AsInt.method);
        if (iVar5 == 0) {
          pCVar1 = (__this->fields).BasicAnimations;
          if ((pCVar1 == (Characters_BasicTitanAnimations_o *)0x0) ||
             (pSVar2 = (pCVar1->fields).Runs, pSVar2 == (System_String_array *)0x0)) goto label_05c2e85d;
          uVar6 = UnityEngine_Random__Range_690e2b0(0,(int32_t)pSVar2->max_length,(MethodInfo *)0x0);
          if ((uint)pSVar2->max_length <= uVar6) goto label_05c2e862;
          pSVar9 = pSVar2->m_Items[(int)uVar6];
          goto label_05c2e705;
        }
      }
    }
    pCVar1 = (__this->fields).BasicAnimations;
    if ((pCVar1 == (Characters_BasicTitanAnimations_o *)0x0) ||
       (pSVar2 = (pCVar1->fields).Runs, pSVar2 == (System_String_array *)0x0)) goto label_05c2e85d;
    if ((uint)pSVar2->max_length <= iVar5 - 1U) goto label_05c2e862;
    pSVar9 = pSVar2->m_Items[(int)(iVar5 - 1U)];
  }
  else {
    if (__this_02 == (UnityEngine_GameObject_o *)0x0) goto label_05c2e85d;
    UnityEngine_GameObject__AddComponent_object_
              (__this_02,
               (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_BasicTitanPlayerController
              );
    if ((__this->fields).IsCrawler == false) goto label_05c2e602;
label_05c2e6f1:
    pCVar1 = (__this->fields).BasicAnimations;
    if (pCVar1 == (Characters_BasicTitanAnimations_o *)0x0) goto label_05c2e85d;
    pSVar9 = (pCVar1->fields).RunCrawler;
  }
label_05c2e705:
  (__this->fields)._runAnimation = pSVar9;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._runAnimation);
  pUVar3 = (__this->fields).Cache;
  if (pUVar3 != (Utility_BaseComponentCache_o *)0x0) {
    __this_00 = (pUVar3->fields).PhotonView;
    parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
    local_39 = (__this->fields).IsCrawler;
    pIVar10 = il2cpp_vm_Object_Box(g_data_075566f0,&local_39);
    if (parameters != (System_Object_array *)0x0) {
      if (pIVar10 != (Il2CppObject *)0x0) {
        pIVar11 = il2cpp_vm_Object_IsInst(pIVar10,(((parameters->obj).klass)->_1).element_class);
        if (pIVar11 == (Il2CppObject *)0x0) {
          pIVar10 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar10,(MethodInfo *)0x0);
        }
      }
      if ((int)parameters->max_length == 0) {
label_05c2e862:
        ThrowIndexOutOfRangeException();
      }
      parameters->m_Items[0] = pIVar10;
      Il2CppCodeGenWriteBarrier(parameters->m_Items);
      if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
        method_00 = (MethodInfo *)0x0;
        Photon_Pun_PhotonView__RPC(__this_00,"SetCrawlerRPC",3,parameters,(MethodInfo *)0x0);
        (__this->fields).CurrentWardedWeakSpot = 0;
        Characters_BaseTitan__Init((Characters_BaseTitan_o *)__this,ai,local_38,data,method_00);
        pCVar1 = (__this->fields).BasicAnimations;
        if ((pCVar1 != (Characters_BasicTitanAnimations_o *)0x0) &&
           (__this_01 = (__this->fields).Animation, __this_01 != (Characters_AnimationHandler_o *)0x0)) {
          Characters_AnimationHandler__SetSpeed(__this_01,(pCVar1->fields).CoverNape,1.2,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_05c2e85d:
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$SetWarded
// il2cpp: void Characters_BasicTitan__SetWarded (Characters_BasicTitan_o* __this, bool warded, const MethodInfo* method);
// 0x5c2e880

void Characters_BasicTitan__SetWarded(Characters_BasicTitan_o *__this,bool warded,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *__this_00;
  bool bVar2;
  int32_t iVar3;
  undefined8 in_RAX;
  System_Object_array *parameters;
  Il2CppObject *pIVar4;
  Il2CppObject *pIVar5;
  undefined8 uStack_28;
  
  uStack_28 = in_RAX;
  if (Il2CppMethodInitialized_075477b1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_WardedWeakSpot);
    il2cpp_codegen_initialize_runtime_metadata(&"SetWardedRPC");
    Il2CppMethodInitialized_075477b1 = '\x01';
  }
  bVar2 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method);
  if (!bVar2) {
    return;
  }
  iVar3 = 0;
  if (warded) {
    iVar3 = UnityEngine_Random__Range_690e2b0(1,5,(MethodInfo *)0x0);
  }
  pUVar1 = (__this->fields).Cache;
  if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
    __this_00 = (pUVar1->fields).PhotonView;
    parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
    uStack_28._0_4_ = CONCAT13(warded,(undefined3)uStack_28);
    pIVar4 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_28 + 3));
    if (parameters != (System_Object_array *)0x0) {
      if ((pIVar4 != (Il2CppObject *)0x0) &&
         (pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((parameters->obj).klass)->_1).element_class),
         pIVar5 == (Il2CppObject *)0x0)) {
label_05c2ea04:
        pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
      }
      if ((int)parameters->max_length != 0) {
        parameters->m_Items[0] = pIVar4;
        Il2CppCodeGenWriteBarrier(parameters->m_Items);
        uStack_28 = CONCAT44(iVar3,(undefined4)uStack_28);
        pIVar4 = il2cpp_vm_Object_Box
                           ((Il2CppClass *)TypeInfo_Characters_WardedWeakSpot,(void *)((long)&uStack_28 + 4));
        if ((pIVar4 != (Il2CppObject *)0x0) &&
           (pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((parameters->obj).klass)->_1).element_class),
           pIVar5 == (Il2CppObject *)0x0)) goto label_05c2ea04;
        if ((parameters->max_length & 0xfffffffe) != 0) {
          parameters->m_Items[1] = pIVar4;
          Il2CppCodeGenWriteBarrier(parameters->m_Items + 1);
          if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
            Photon_Pun_PhotonView__RPC(__this_00,"SetWardedRPC",0,parameters,(MethodInfo *)0x0);
            return;
          }
          goto label_05c2e9fa;
        }
      }
      ThrowIndexOutOfRangeException();
    }
  }
label_05c2e9fa:
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$OnPlayerEnteredRoom
// il2cpp: void Characters_BasicTitan__OnPlayerEnteredRoom (Characters_BasicTitan_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x5c2ea20
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c2ec13: test r15, r15
// asm:   0x5c2ec16: je 0x5c2ec96

void Characters_BasicTitan__OnPlayerEnteredRoom
               (Characters_BasicTitan_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  byte bVar1;
  Utility_BaseComponentCache_o *pUVar2;
  Photon_Pun_PhotonView_o *pPVar3;
  MethodInfo *pMVar4;
  undefined8 in_RAX;
  System_Object_array *parameters;
  Il2CppObject *pIVar5;
  Il2CppObject *pIVar6;
  Il2CppClass *pIVar7;
  MethodInfo *extraout_RDX;
  undefined8 uStack_38;
  
  uStack_38 = in_RAX;
  if (Il2CppMethodInitialized_075477b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Empty_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_WardedWeakSpot);
    il2cpp_codegen_initialize_runtime_metadata(&"DisableWardedEffectsRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"SetWardedRPC");
    Il2CppMethodInitialized_075477b2 = '\x01';
    method = extraout_RDX;
  }
  Characters_BaseTitan__OnPlayerEnteredRoom((Characters_BaseTitan_o *)__this,player,method);
  pUVar2 = (__this->fields).Cache;
  if ((pUVar2 == (Utility_BaseComponentCache_o *)0x0) ||
     (pPVar3 = (pUVar2->fields).PhotonView, pPVar3 == (Photon_Pun_PhotonView_o *)0x0)) goto label_05c2ec96;
  if ((pPVar3->fields)._IsMine_k__BackingField == false) {
    return;
  }
  if ((__this->fields).isWarded == false) {
    return;
  }
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
  uStack_38._0_4_ = CONCAT13((__this->fields).isWarded,(undefined3)uStack_38);
  pIVar5 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_38 + 3));
  if (parameters == (System_Object_array *)0x0) goto label_05c2ec96;
  if ((pIVar5 != (Il2CppObject *)0x0) &&
     (pIVar6 = il2cpp_vm_Object_IsInst(pIVar5,(((parameters->obj).klass)->_1).element_class),
     pIVar6 == (Il2CppObject *)0x0)) {
label_05c2eca0:
    pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
    il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
  }
  if ((int)parameters->max_length == 0) {
label_05c2ec9b:
    ThrowIndexOutOfRangeException();
  }
  parameters->m_Items[0] = pIVar5;
  Il2CppCodeGenWriteBarrier(parameters->m_Items);
  uStack_38 = CONCAT44((__this->fields).LastWardedWeakSpot,(undefined4)uStack_38);
  pIVar5 = il2cpp_vm_Object_Box
                     ((Il2CppClass *)TypeInfo_Characters_WardedWeakSpot,(void *)((long)&uStack_38 + 4));
  if ((pIVar5 != (Il2CppObject *)0x0) &&
     (pIVar6 = il2cpp_vm_Object_IsInst(pIVar5,(((parameters->obj).klass)->_1).element_class),
     pIVar6 == (Il2CppObject *)0x0)) goto label_05c2eca0;
  if ((parameters->max_length & 0xfffffffe) == 0) goto label_05c2ec9b;
  parameters->m_Items[1] = pIVar5;
  Il2CppCodeGenWriteBarrier(parameters->m_Items + 1);
  Photon_Pun_PhotonView__RPC_56e5850(pPVar3,"SetWardedRPC",player,parameters,(MethodInfo *)0x0);
  pMVar4 = MethodInfo_System_Array_Empty_object;
  if ((__this->fields).CurrentWardedWeakSpot != 0) {
    return;
  }
  pUVar2 = (__this->fields).Cache;
  if (pUVar2 == (Utility_BaseComponentCache_o *)0x0) goto label_05c2ec96;
  pPVar3 = (pUVar2->fields).PhotonView;
  if ((MethodInfo_System_Array_Empty_object->field7_0x38).methodMetadataHandle == (void *)0x0) {
    il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_object);
    pIVar7 = *(Il2CppClass **)((long)(pMVar4->field7_0x38).methodMetadataHandle + 0x10);
    if (((pIVar7->_2).bitflags1 & 1) == 0) goto label_05c2ec62;
label_05c2ebf9:
    if ((pIVar7->_2).cctor_finished_or_no_cctor != 0) goto label_05c2ec02;
label_05c2ec73:
    il2cpp_codegen_runtime_class_init(pIVar7);
    pIVar7 = (pMVar4->field7_0x38).rgctx_data[2].klass;
    bVar1 = (pIVar7->_2).bitflags1;
  }
  else {
    pIVar7 = *(Il2CppClass **)
              ((long)(MethodInfo_System_Array_Empty_object->field7_0x38).methodMetadataHandle + 0x10);
    if (((pIVar7->_2).bitflags1 & 1) != 0) goto label_05c2ebf9;
label_05c2ec62:
    pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
    if ((pIVar7->_2).cctor_finished_or_no_cctor == 0) goto label_05c2ec73;
label_05c2ec02:
    pIVar7 = (pMVar4->field7_0x38).rgctx_data[2].klass;
    bVar1 = (pIVar7->_2).bitflags1;
  }
  if ((bVar1 & 1) == 0) {
    pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
  }
  if (pPVar3 != (Photon_Pun_PhotonView_o *)0x0) {
    Photon_Pun_PhotonView__RPC_56e5850
              (pPVar3,"DisableWardedEffectsRPC",player,*(System_Object_array **)pIVar7->static_fields,
               (MethodInfo *)0x0);
    return;
  }
label_05c2ec96:
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$IsGrabAttack
// il2cpp: bool Characters_BasicTitan__IsGrabAttack (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x5c2ecb0

bool Characters_BasicTitan__IsGrabAttack(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  System_String_o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_075477b3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrab");
    Il2CppMethodInitialized_075477b3 = '\x01';
  }
  __this_00 = (__this->fields)._currentAttack;
  if (__this_00 == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = System_String__StartsWith(__this_00,"AttackGrab",(MethodInfo *)0x0);
  return bVar1;
}


// Characters.BasicTitan$$GetRootMotionAnimations
// il2cpp: System_Collections_Generic_Dictionary_string__float__o* Characters_BasicTitan__GetRootMotionAnimations (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x5c2ed00

System_Collections_Generic_Dictionary_string__float__o *
Characters_BasicTitan__GetRootMotionAnimations(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  Characters_BasicTitanAnimations_o *pCVar1;
  System_Collections_Generic_Dictionary_string__float__o *__this_00;
  
  if (Il2CppMethodInitialized_075477b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_float);
    Il2CppMethodInitialized_075477b4 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_float);
  System_Collections_Generic_Dictionary_object__float____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_4AB4860 *)MethodInfo_System_Collections_Generic_Dictionary_string_float_ctor);
  pCVar1 = (__this->fields).BasicAnimations;
  if ((pCVar1 != (Characters_BasicTitanAnimations_o *)0x0) &&
     (__this_00 != (System_Collections_Generic_Dictionary_string__float__o *)0x0)) {
    System_Collections_Generic_Dictionary_object__float___Add
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               (Il2CppObject *)(pCVar1->fields).AttackBellyFlop,1.0,
               (MethodInfo_4AB5470 *)MethodInfo_System_Collections_Generic_Dictionary_string_float_Add);
    pCVar1 = (__this->fields).BasicAnimations;
    if (pCVar1 != (Characters_BasicTitanAnimations_o *)0x0) {
      System_Collections_Generic_Dictionary_object__float___Add
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                 (Il2CppObject *)(pCVar1->fields).AttackBellyFlopGetup,1.0,
                 (MethodInfo_4AB5470 *)MethodInfo_System_Collections_Generic_Dictionary_string_float_Add);
      pCVar1 = (__this->fields).BasicAnimations;
      if (pCVar1 != (Characters_BasicTitanAnimations_o *)0x0) {
        System_Collections_Generic_Dictionary_object__float___Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                   (Il2CppObject *)(pCVar1->fields).AttackPunch,1.0,
                   (MethodInfo_4AB5470 *)MethodInfo_System_Collections_Generic_Dictionary_string_float_Add);
        pCVar1 = (__this->fields).BasicAnimations;
        if (pCVar1 != (Characters_BasicTitanAnimations_o *)0x0) {
          System_Collections_Generic_Dictionary_object__float___Add
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                     (Il2CppObject *)(pCVar1->fields).AttackPunchCombo,1.0,
                     (MethodInfo_4AB5470 *)MethodInfo_System_Collections_Generic_Dictionary_string_float_Add);
          return __this_00;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$SetSizeParticles
// il2cpp: void Characters_BasicTitan__SetSizeParticles (Characters_BasicTitan_o* __this, float size, const MethodInfo* method);
// 0x5c2ee20

void Characters_BasicTitan__SetSizeParticles(Characters_BasicTitan_o *__this,float size,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  Characters_BasicTitanComponentCache_o *pCVar6;
  Il2CppClass *particles;
  UnityEngine_ParticleSystem_o *pUVar7;
  UnityEngine_Vector3_StaticFields *pUVar8;
  Il2CppObject *pIVar9;
  ulong uVar10;
  UnityEngine_Transform_o *pUVar11;
  ulong uVar12;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  
  if (Il2CppMethodInitialized_075477b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_ParticleSystem_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSteamEffect);
    Il2CppMethodInitialized_075477b5 = '\x01';
  }
  Characters_BaseTitan__SetSizeParticles((Characters_BaseTitan_o *)__this,size,method);
  pIVar9 = SZArrayNew(TypeInfo_UnityEngine_ParticleSystem_array,2);
  pCVar6 = (__this->fields).BasicCache;
  if ((pCVar6 != (Characters_BasicTitanComponentCache_o *)0x0) && (pIVar9 != (Il2CppObject *)0x0)) {
    if (*(int *)&pIVar9[1].monitor == 0) {
label_05c2f05d:
      ThrowIndexOutOfRangeException();
    }
    pIVar9[2].klass = (Il2CppClass *)(pCVar6->fields).ForearmSmokeL;
    Il2CppCodeGenWriteBarrier(&pIVar9[2].klass);
    pCVar6 = (__this->fields).BasicCache;
    if (pCVar6 != (Characters_BasicTitanComponentCache_o *)0x0) {
      if (((ulong)pIVar9[1].monitor & 0xfffffffe) == 0) goto label_05c2f05d;
      pIVar9[2].monitor = (pCVar6->fields).ForearmSmokeR;
      Il2CppCodeGenWriteBarrier(&pIVar9[2].monitor);
      if (0 < (int)pIVar9[1].monitor) {
        uVar10 = (ulong)pIVar9[1].monitor & 0xffffffff;
        uVar12 = 0;
        do {
          if (uVar10 <= uVar12) goto label_05c2f05d;
          particles = (&pIVar9[2].klass)[uVar12];
          if ((TypeInfo_Characters_TitanSteamEffect->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSteamEffect);
          }
          Characters_TitanSteamEffect__ConfigureRegrowth
                    ((UnityEngine_ParticleSystem_o *)particles,size,(MethodInfo *)0x0);
          uVar12 = uVar12 + 1;
          uVar10 = (ulong)*(uint *)&pIVar9[1].monitor;
        } while ((long)uVar12 < (long)(int)*(uint *)&pIVar9[1].monitor);
      }
      pCVar6 = (__this->fields).BasicCache;
      if ((pCVar6 != (Characters_BasicTitanComponentCache_o *)0x0) &&
         (pUVar7 = (pCVar6->fields).ForearmSmokeL, pUVar7 != (UnityEngine_ParticleSystem_o *)0x0)) {
        pUVar11 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
        if (Il2CppMethodInitialized_0753e4b7 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_0753e4b7 = '\x01';
        }
        if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
          pUVar8 = TypeInfo_UnityEngine_Vector3->static_fields;
          fVar1 = (__this->fields).Size;
          value.fields.z = (pUVar8->oneVector).fields.z * fVar1;
          uVar2 = (pUVar8->oneVector).fields.x;
          uVar4 = (pUVar8->oneVector).fields.y;
          value.fields.x = fVar1 * (float)uVar2;
          value.fields.y = fVar1 * (float)uVar4;
          UnityEngine_Transform__set_localScale(pUVar11,value,(MethodInfo *)0x0);
          pCVar6 = (__this->fields).BasicCache;
          if ((pCVar6 != (Characters_BasicTitanComponentCache_o *)0x0) &&
             (pUVar7 = (pCVar6->fields).ForearmSmokeR, pUVar7 != (UnityEngine_ParticleSystem_o *)0x0)) {
            pUVar11 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
            if (Il2CppMethodInitialized_0753e4b7 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
              Il2CppMethodInitialized_0753e4b7 = '\x01';
            }
            if (pUVar11 != (UnityEngine_Transform_o *)0x0) {
              pUVar8 = TypeInfo_UnityEngine_Vector3->static_fields;
              fVar1 = (__this->fields).Size;
              value_00.fields.z = (pUVar8->oneVector).fields.z * fVar1;
              uVar3 = (pUVar8->oneVector).fields.x;
              uVar5 = (pUVar8->oneVector).fields.y;
              value_00.fields.x = fVar1 * (float)uVar3;
              value_00.fields.y = fVar1 * (float)uVar5;
              UnityEngine_Transform__set_localScale(pUVar11,value_00,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$SetSizeAnimations
// il2cpp: void Characters_BasicTitan__SetSizeAnimations (Characters_BasicTitan_o* __this, float size, const MethodInfo* method);
// 0x5c2f070
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c2f0ab: jmp 0x5c2f191

void Characters_BasicTitan__SetSizeAnimations(Characters_BasicTitan_o *__this,float size,MethodInfo *method)

{
  uint32_t uVar1;
  uint uVar2;
  System_String_array *pSVar3;
  Characters_AnimationHandler_o *__this_00;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  
  if (Il2CppMethodInitialized_075477b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitan);
    Il2CppMethodInitialized_075477b6 = '\x01';
    uVar1 = (TypeInfo_Characters_BasicTitan->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_BasicTitan->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitan);
    pSVar3 = TypeInfo_Characters_BasicTitan->static_fields->SizeScaledAnimations;
  }
  else {
    pSVar3 = *(System_String_array **)((Il2CppClass *)TypeInfo_Characters_BasicTitan)->static_fields;
  }
  if (pSVar3 == (System_String_array *)0x0) {
label_05c2f191:
    ThrowNullReferenceException();
  }
  if (0 < (int)pSVar3->max_length) {
    fVar7 = (size + -0.7) * -0.15 + 1.4;
    fVar6 = 1.5;
    if (fVar7 <= 1.5) {
      fVar6 = fVar7;
    }
    uVar4 = pSVar3->max_length & 0xffffffff;
    uVar5 = 0;
    do {
      if (uVar4 <= uVar5) {
        ThrowIndexOutOfRangeException();
      }
      __this_00 = (__this->fields).Animation;
      if (__this_00 == (Characters_AnimationHandler_o *)0x0) goto label_05c2f191;
      Characters_AnimationHandler__SetSpeedMultiplier
                (__this_00,pSVar3->m_Items[uVar5],
                 (float)(~-(uint)(0.9 <= fVar7) & 0x3f666666 | (uint)fVar6 & -(uint)(0.9 <= fVar7)),
                 (MethodInfo *)0x0);
      uVar5 = uVar5 + 1;
      uVar2 = (uint)pSVar3->max_length;
      uVar4 = (ulong)uVar2;
    } while ((long)uVar5 < (long)(int)uVar2);
  }
  return;
}


// Characters.BasicTitan$$SetSizeHead
// il2cpp: void Characters_BasicTitan__SetSizeHead (Characters_BasicTitan_o* __this, float size, const MethodInfo* method);
// 0x5c2f1e0

void Characters_BasicTitan__SetSizeHead(Characters_BasicTitan_o *__this,float size,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = Characters_BasicTitan__GetHeadSize(__this,size,method);
  (__this->fields).HeadSize = fVar1;
  if ((__this->fields)._headDetached == false) {
    Characters_BasicTitan__UpdateHeadScale(__this,method);
    Characters_BasicTitan__ResetHairCloth(__this,method);
    return;
  }
  return;
}


// Characters.BasicTitan$$UpdateHeadScale
// il2cpp: void Characters_BasicTitan__UpdateHeadScale (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x5c2f3c0

void Characters_BasicTitan__UpdateHeadScale(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  UnityEngine_Vector3_o *pUVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  Characters_BasicTitanComponentCache_o *pCVar6;
  UnityEngine_Transform_o *pUVar7;
  MethodInfo *method_00;
  UnityEngine_Vector3_o UVar8;
  
  fVar2 = (__this->fields).HeadSize;
  fVar3 = (__this->fields)._headScale.fields.x;
  if ((fVar3 != fVar2) || (NAN(fVar3) || NAN(fVar2))) {
    (__this->fields)._headScale.fields.x = fVar2;
    (__this->fields)._headScale.fields.y = fVar2;
    (__this->fields)._headScale.fields.z = fVar2;
    pCVar6 = (__this->fields).BasicCache;
    if ((pCVar6 != (Characters_BasicTitanComponentCache_o *)0x0) &&
       (pUVar7 = (pCVar6->fields).Head, pUVar7 != (UnityEngine_Transform_o *)0x0)) {
      uVar4 = (__this->fields)._headScale.fields.x;
      uVar5 = (__this->fields)._headScale.fields.y;
      UVar8.fields.y = (float)uVar5;
      UVar8.fields.x = (float)uVar4;
      method_00 = (MethodInfo *)0x0;
      UVar8.fields.z = fVar2;
      UnityEngine_Transform__set_localScale(pUVar7,UVar8,(MethodInfo *)0x0);
      Characters_BasicTitan__ResetHairCloth(__this,method_00);
      return;
    }
  }
  else {
    pCVar6 = (__this->fields).BasicCache;
    if ((pCVar6 != (Characters_BasicTitanComponentCache_o *)0x0) &&
       (pUVar7 = (pCVar6->fields).Head, pUVar7 != (UnityEngine_Transform_o *)0x0)) {
      UVar8 = UnityEngine_Transform__get_localScale(pUVar7,(MethodInfo *)0x0);
      pUVar1 = &(__this->fields)._headScale;
      if ((UVar8.fields.x == (pUVar1->fields).x) && (!NAN(UVar8.fields.x) && !NAN((pUVar1->fields).x))) {
        return;
      }
      pCVar6 = (__this->fields).BasicCache;
      if ((pCVar6 != (Characters_BasicTitanComponentCache_o *)0x0) &&
         (pUVar7 = (pCVar6->fields).Head, pUVar7 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__set_localScale
                  (pUVar7,(UnityEngine_Vector3_o)(__this->fields)._headScale.fields,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$ResetHairCloth
// il2cpp: void Characters_BasicTitan__ResetHairCloth (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x5c2f490

void Characters_BasicTitan__ResetHairCloth(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  Characters_BasicTitanComponentCache_o *pCVar1;
  UnityEngine_Transform_o *pUVar2;
  Characters_AnimationHandler_o *__this_00;
  bool bVar3;
  UnityEngine_Object_o *x;
  float fVar4;
  UnityEngine_Vector3_o UVar5;
  
  if (Il2CppMethodInitialized_075477b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitanSetup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponentInChildren_Cloth)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075477b7 = '\x01';
  }
  pCVar1 = (__this->fields).BasicCache;
  if ((pCVar1 != (Characters_BasicTitanComponentCache_o *)0x0) &&
     (pUVar2 = (pCVar1->fields).HairSocket, pUVar2 != (UnityEngine_Transform_o *)0x0)) {
    UVar5 = UnityEngine_Transform__get_lossyScale(pUVar2,(MethodInfo *)0x0);
    fVar4 = UVar5.fields.x;
    if (ABS(fVar4 - (__this->fields)._hairScale) <= fVar4 * 0.001) {
      return;
    }
    (__this->fields)._hairScale = fVar4;
    pCVar1 = (__this->fields).BasicCache;
    if ((pCVar1 != (Characters_BasicTitanComponentCache_o *)0x0) &&
       (pUVar2 = (pCVar1->fields).HairSocket, pUVar2 != (UnityEngine_Transform_o *)0x0)) {
      x = (UnityEngine_Object_o *)
          UnityEngine_Component__GetComponentInChildren_object__34b09d0
                    ((UnityEngine_Component_o *)pUVar2,
                     (MethodInfo_34B09D0 *)MethodInfo_UnityEngine_Component_GetComponentInChildren_Cloth);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        return;
      }
      __this_00 = (__this->fields).Animation;
      if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
        Characters_AnimationHandler__RestoreDefaultShadows(__this_00,pUVar2,(MethodInfo *)0x0);
        if ((TypeInfo_Characters_BasicTitanSetup->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanSetup);
        }
        Characters_BasicTitanSetup__ResetCloth(pUVar2,(MethodInfo *)0x0);
        Characters_BaseCharacter__RefreshRenderers((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$GetSizeSpeedMultiplier
// il2cpp: float Characters_BasicTitan__GetSizeSpeedMultiplier (float size, const MethodInfo* method);
// 0x5c2f1a0

float Characters_BasicTitan__GetSizeSpeedMultiplier(float size,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (size + -0.7) * -0.15 + 1.4;
  fVar2 = 1.5;
  if (fVar1 <= 1.5) {
    fVar2 = fVar1;
  }
  return (float)(~-(uint)(0.9 <= fVar1) & 0x3f666666 | (uint)fVar2 & -(uint)(0.9 <= fVar1));
}


// Characters.BasicTitan$$GetHeadSize
// il2cpp: float Characters_BasicTitan__GetHeadSize (Characters_BasicTitan_o* __this, float size, const MethodInfo* method);
// 0x5c2f210

float Characters_BasicTitan__GetHeadSize(Characters_BasicTitan_o *__this,float size,MethodInfo *method)

{
  float fVar1;
  int32_t Seed;
  Settings_InGameSet_o *pSVar2;
  Settings_InGameTitanSettings_o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  Settings_FloatSetting_o *pSVar5;
  Settings_FloatSetting_o *pSVar6;
  Utility_BaseComponentCache_o *pUVar7;
  Photon_Pun_PhotonView_o *pPVar8;
  System_Random_o *__this_00;
  MethodInfo **__this_01;
  float fVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  
  __this_01 = (MethodInfo **)__this;
  if (Il2CppMethodInitialized_075477b8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Random);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    __this_01 = &MethodInfo_Settings_TypedSetting_int_get_Value;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_075477b8 = '\x01';
  }
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (((pSVar2 != (Settings_InGameSet_o *)0x0) &&
      (pSVar3 = (pSVar2->fields).Titan, pSVar3 != (Settings_InGameTitanSettings_o *)0x0)) &&
     (pSVar4 = (pSVar3->fields).TitanHeadMode, pSVar4 != (Settings_IntSetting_o *)0x0)) {
    if ((pSVar4->fields)._value != 1) {
      fVar9 = powf((CustomLogic_CustomLogicMathBuiltin_o *)__this_01,2.0 / size,0.35,method);
      fVar11 = 1.25;
      if (fVar9 <= 1.25) {
        fVar11 = fVar9;
      }
      return (float)(~-(uint)(0.75 <= fVar9) & 0x3f400000 | (uint)fVar11 & -(uint)(0.75 <= fVar9));
    }
    pSVar5 = (pSVar3->fields).TitanHeadRandomMin;
    if (((pSVar5 != (Settings_FloatSetting_o *)0x0) &&
        (pSVar6 = (pSVar3->fields).TitanHeadRandomMax, pSVar6 != (Settings_FloatSetting_o *)0x0)) &&
       ((pUVar7 = (__this->fields).Cache, pUVar7 != (Utility_BaseComponentCache_o *)0x0 &&
        (pPVar8 = (pUVar7->fields).PhotonView, pPVar8 != (Photon_Pun_PhotonView_o *)0x0)))) {
      fVar11 = (pSVar5->fields)._value;
      fVar9 = (pSVar6->fields)._value;
      fVar1 = fVar11;
      if (fVar11 <= fVar9) {
        fVar1 = fVar9;
      }
      Seed = (pPVar8->fields).viewIdField;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Random);
      System_Random___ctor_54cebf0(__this_00,Seed,(MethodInfo *)0x0);
      if (__this_00 != (System_Random_o *)0x0) {
        dVar10 = (*(__this_00->klass->vtable)._8_NextDouble.methodPtr)
                           (__this_00,(__this_00->klass->vtable)._8_NextDouble.method);
        fVar12 = (float)dVar10;
        fVar9 = 1.0;
        if (fVar12 <= 1.0) {
          fVar9 = fVar12;
        }
        return (fVar1 - fVar11) * (float)(-(uint)(0.0 <= fVar12) & (uint)fVar9) + fVar11;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$SetCrawlerRPC
// il2cpp: void Characters_BasicTitan__SetCrawlerRPC (Characters_BasicTitan_o* __this, bool crawler, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5c2f5d0

void Characters_BasicTitan__SetCrawlerRPC
               (Characters_BasicTitan_o *__this,bool crawler,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  byte bVar1;
  Utility_BaseComponentCache_o *pUVar2;
  Photon_Pun_PhotonView_o *pPVar3;
  Characters_AnimationHandler_o *pCVar4;
  Characters_BasicTitanComponentCache_o *pCVar5;
  undefined1 auVar6 [12];
  UnityEngine_CapsuleCollider_o *__this_00;
  float fVar7;
  
  if (Il2CppMethodInitialized_075477b9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_CapsuleCollider);
    Il2CppMethodInitialized_075477b9 = '\x01';
  }
  pUVar2 = (__this->fields).Cache;
  if ((pUVar2 != (Utility_BaseComponentCache_o *)0x0) &&
     (pPVar3 = (pUVar2->fields).PhotonView, pPVar3 != (Photon_Pun_PhotonView_o *)0x0)) {
    if (info.fields.Sender != (pPVar3->fields)._Owner_k__BackingField) {
      return;
    }
    (__this->fields).IsCrawler = crawler;
    pCVar4 = (__this->fields).Animation;
    if (pCVar4 != (Characters_AnimationHandler_o *)0x0) {
      (pCVar4->fields).LegacyCrossFadeTiming = !crawler;
      pCVar5 = (__this->fields).BasicCache;
      if ((pCVar5 != (Characters_BasicTitanComponentCache_o *)0x0) &&
         (__this_00 = (UnityEngine_CapsuleCollider_o *)(pCVar5->fields).Movebox,
         __this_00 != (UnityEngine_CapsuleCollider_o *)0x0)) {
        bVar1 = (TypeInfo_UnityEngine_CapsuleCollider->_2).typeHierarchyDepth;
        if ((bVar1 <= (__this_00->klass->_2).typeHierarchyDepth) &&
           ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
            (Il2CppClass *)TypeInfo_UnityEngine_CapsuleCollider)) {
          if (!crawler) {
            fVar7 = UnityEngine_CapsuleCollider__get_radius(__this_00,(MethodInfo *)0x0);
            (__this->fields)._originalCapsuleValue = fVar7;
            return;
          }
          UnityEngine_CapsuleCollider__set_direction(__this_00,2,(MethodInfo *)0x0);
          fVar7 = UnityEngine_CapsuleCollider__get_radius(__this_00,(MethodInfo *)0x0);
          UnityEngine_CapsuleCollider__set_radius(__this_00,fVar7 * 0.5,(MethodInfo *)0x0);
          fVar7 = UnityEngine_CapsuleCollider__get_radius(__this_00,(MethodInfo *)0x0);
          auVar6._4_8_ = 0;
          auVar6._0_4_ = fVar7;
          UnityEngine_CapsuleCollider__set_center
                    (__this_00,(UnityEngine_Vector3_o)(auVar6 << 0x20),(MethodInfo *)0x0);
          fVar7 = UnityEngine_CapsuleCollider__get_height(__this_00,(MethodInfo *)0x0);
          (__this->fields)._originalCapsuleValue = fVar7;
          pCVar5 = (__this->fields).BasicCache;
          if ((pCVar5 == (Characters_BasicTitanComponentCache_o *)0x0) ||
             (__this_00 = (UnityEngine_CapsuleCollider_o *)(pCVar5->fields).NapeHurtbox,
             __this_00 == (UnityEngine_CapsuleCollider_o *)0x0)) goto label_05c2f776;
          bVar1 = (TypeInfo_UnityEngine_CapsuleCollider->_2).typeHierarchyDepth;
          if ((bVar1 <= (__this_00->klass->_2).typeHierarchyDepth) &&
             ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
              (Il2CppClass *)TypeInfo_UnityEngine_CapsuleCollider)) {
            fVar7 = UnityEngine_CapsuleCollider__get_radius(__this_00,(MethodInfo *)0x0);
            UnityEngine_CapsuleCollider__set_radius(__this_00,fVar7,(MethodInfo *)0x0);
            return;
          }
        }
        il2cpp_codegen_raise_invalid_cast_exception(__this_00);
      }
    }
  }
label_05c2f776:
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$SetWardedRPC
// il2cpp: void Characters_BasicTitan__SetWardedRPC (Characters_BasicTitan_o* __this, bool warded, int32_t wardedWeakSpot, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5c2f790

void Characters_BasicTitan__SetWardedRPC
               (Characters_BasicTitan_o *__this,bool warded,int32_t wardedWeakSpot,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  Characters_BasicTitanComponentCache_o *pCVar3;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_ParticleSystem_o *pUVar4;
  
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
     (pPVar2 = (pUVar1->fields).PhotonView, pPVar2 != (Photon_Pun_PhotonView_o *)0x0)) {
    if (info.fields.Sender != (pPVar2->fields)._Owner_k__BackingField) {
switchD_05c2f8c5_default:
      return;
    }
    (__this->fields).isWarded = warded;
    (__this->fields).CurrentWardedWeakSpot = wardedWeakSpot;
    (__this->fields).LastWardedWeakSpot = wardedWeakSpot;
    pCVar3 = (__this->fields).BasicCache;
    if ((pCVar3 != (Characters_BasicTitanComponentCache_o *)0x0) &&
       (pUVar4 = (pCVar3->fields).WardedWeakSpotForearmL, pUVar4 != (UnityEngine_ParticleSystem_o *)0x0)) {
      UnityEngine_ParticleSystem__Stop_69c2780(pUVar4,true,(MethodInfo *)0x0);
      pCVar3 = (__this->fields).BasicCache;
      if ((pCVar3 != (Characters_BasicTitanComponentCache_o *)0x0) &&
         (pUVar4 = (pCVar3->fields).WardedWeakSpotForearmR, pUVar4 != (UnityEngine_ParticleSystem_o *)0x0)) {
        UnityEngine_ParticleSystem__Stop_69c2780(pUVar4,true,(MethodInfo *)0x0);
        pCVar3 = (__this->fields).BasicCache;
        if ((pCVar3 != (Characters_BasicTitanComponentCache_o *)0x0) &&
           (pUVar4 = (pCVar3->fields).WardedWeakSpotLegL, pUVar4 != (UnityEngine_ParticleSystem_o *)0x0)) {
          UnityEngine_ParticleSystem__Stop_69c2780(pUVar4,true,(MethodInfo *)0x0);
          pCVar3 = (__this->fields).BasicCache;
          if ((pCVar3 != (Characters_BasicTitanComponentCache_o *)0x0) &&
             (pUVar4 = (pCVar3->fields).WardedWeakSpotLegR, pUVar4 != (UnityEngine_ParticleSystem_o *)0x0)) {
            UnityEngine_ParticleSystem__Stop_69c2780(pUVar4,true,(MethodInfo *)0x0);
            __this_00 = (__this->fields).hardenedNape;
            if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
              UnityEngine_GameObject__SetActive(__this_00,warded,(MethodInfo *)0x0);
              switch(wardedWeakSpot) {
              case 1:
                pCVar3 = (__this->fields).BasicCache;
                if (pCVar3 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c2f92e;
                pUVar4 = (pCVar3->fields).WardedWeakSpotForearmL;
                break;
              case 2:
                pCVar3 = (__this->fields).BasicCache;
                if (pCVar3 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c2f92e;
                pUVar4 = (pCVar3->fields).WardedWeakSpotForearmR;
                break;
              case 3:
                pCVar3 = (__this->fields).BasicCache;
                if (pCVar3 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c2f92e;
                pUVar4 = (pCVar3->fields).WardedWeakSpotLegL;
                break;
              case 4:
                pCVar3 = (__this->fields).BasicCache;
                if (pCVar3 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c2f92e;
                pUVar4 = (pCVar3->fields).WardedWeakSpotLegR;
                break;
              default:
                goto switchD_05c2f8c5_default;
              }
              if (pUVar4 != (UnityEngine_ParticleSystem_o *)0x0) {
                UnityEngine_ParticleSystem__Play(pUVar4,true,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
label_05c2f92e:
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$DisableWardedEffectsRPC
// il2cpp: void Characters_BasicTitan__DisableWardedEffectsRPC (Characters_BasicTitan_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5c2f940

void Characters_BasicTitan__DisableWardedEffectsRPC
               (Characters_BasicTitan_o *__this,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  Characters_BasicTitanComponentCache_o *pCVar3;
  UnityEngine_ParticleSystem_o *pUVar4;
  UnityEngine_GameObject_o *__this_00;
  
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
     (pPVar2 = (pUVar1->fields).PhotonView, pPVar2 != (Photon_Pun_PhotonView_o *)0x0)) {
    if (info.fields.Sender != (pPVar2->fields)._Owner_k__BackingField) {
      return;
    }
    (__this->fields).CurrentWardedWeakSpot = 0;
    pCVar3 = (__this->fields).BasicCache;
    if ((pCVar3 != (Characters_BasicTitanComponentCache_o *)0x0) &&
       (pUVar4 = (pCVar3->fields).WardedWeakSpotForearmL, pUVar4 != (UnityEngine_ParticleSystem_o *)0x0)) {
      UnityEngine_ParticleSystem__Stop_69c2780(pUVar4,true,(MethodInfo *)0x0);
      pCVar3 = (__this->fields).BasicCache;
      if ((pCVar3 != (Characters_BasicTitanComponentCache_o *)0x0) &&
         (pUVar4 = (pCVar3->fields).WardedWeakSpotForearmR, pUVar4 != (UnityEngine_ParticleSystem_o *)0x0)) {
        UnityEngine_ParticleSystem__Stop_69c2780(pUVar4,true,(MethodInfo *)0x0);
        pCVar3 = (__this->fields).BasicCache;
        if ((pCVar3 != (Characters_BasicTitanComponentCache_o *)0x0) &&
           (pUVar4 = (pCVar3->fields).WardedWeakSpotLegL, pUVar4 != (UnityEngine_ParticleSystem_o *)0x0)) {
          UnityEngine_ParticleSystem__Stop_69c2780(pUVar4,true,(MethodInfo *)0x0);
          pCVar3 = (__this->fields).BasicCache;
          if ((pCVar3 != (Characters_BasicTitanComponentCache_o *)0x0) &&
             (pUVar4 = (pCVar3->fields).WardedWeakSpotLegR, pUVar4 != (UnityEngine_ParticleSystem_o *)0x0)) {
            UnityEngine_ParticleSystem__Stop_69c2780(pUVar4,true,(MethodInfo *)0x0);
            __this_00 = (__this->fields).hardenedNape;
            if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
              UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$ClearRockRPC
// il2cpp: void Characters_BasicTitan__ClearRockRPC (Characters_BasicTitan_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5c2fa30

void Characters_BasicTitan__ClearRockRPC
               (Characters_BasicTitan_o *__this,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  Characters_BasicTitanComponentCache_o *pCVar3;
  Characters_BaseHitbox_o *__this_00;
  uint uVar4;
  System_Object_array *pSVar5;
  UnityEngine_Object_o *obj;
  uint uVar6;
  
  if (Il2CppMethodInitialized_075477ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_Rock1Spawnable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075477ba = '\x01';
  }
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
     (pPVar2 = (pUVar1->fields).PhotonView, pPVar2 != (Photon_Pun_PhotonView_o *)0x0)) {
    if (info.fields.Sender != (pPVar2->fields)._Owner_k__BackingField) {
      return;
    }
    pCVar3 = (__this->fields).BasicCache;
    if (((pCVar3 != (Characters_BasicTitanComponentCache_o *)0x0) &&
        (__this_00 = (pCVar3->fields).HandRHitbox, __this_00 != (Characters_BaseHitbox_o *)0x0)) &&
       (pSVar5 = UnityEngine_Component__GetComponentsInChildren_object__34b11b0
                           ((UnityEngine_Component_o *)__this_00,
                            (MethodInfo_34B11B0 *)
                            MethodInfo_UnityEngine_Component_GetComponentsInChildren_Rock1Spawnable),
       pSVar5 != (System_Object_array *)0x0)) {
      uVar4 = (uint)pSVar5->max_length;
      if ((int)uVar4 < 1) {
        return;
      }
      uVar6 = 0;
      while( true ) {
        if (uVar4 <= uVar6) {
          ThrowIndexOutOfRangeException();
        }
        if ((UnityEngine_Component_o *)pSVar5->m_Items[(int)uVar6] == (UnityEngine_Component_o *)0x0) break;
        obj = (UnityEngine_Object_o *)
              UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)pSVar5->m_Items[(int)uVar6],(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_69214e0(obj,(MethodInfo *)0x0);
        uVar6 = uVar6 + 1;
        uVar4 = (uint)pSVar5->max_length;
        if ((int)uVar4 <= (int)uVar6) {
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$GetCameraAnchor
// il2cpp: UnityEngine_Transform_o* Characters_BasicTitan__GetCameraAnchor (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x5c2fb40

UnityEngine_Transform_o *
Characters_BasicTitan__GetCameraAnchor(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  
  pUVar1 = (__this->fields).Cache;
  if (pUVar1 == (Utility_BaseComponentCache_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pUVar1->fields).Transform;
}


// Characters.BasicTitan$$Start
// il2cpp: void Characters_BasicTitan__Start (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x5c2fb60

void Characters_BasicTitan__Start(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  float fVar1;
  GameManagers_InGameManager_o *__this_00;
  Settings_TitanCustomSet_o *pSVar2;
  Utility_BaseComponentCache_o *pUVar3;
  Photon_Pun_PhotonView_o *__this_01;
  UnityEngine_Transform_o *__this_02;
  bool bVar4;
  System_String_o *pSVar5;
  System_Object_array *parameters;
  Il2CppObject *pIVar6;
  Characters_BasicTitan_o *method_00;
  MethodInfo *method_01;
  float fVar7;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Quaternion_o UVar8;
  UnityEngine_Vector3_o UVar9;
  UnityEngine_Vector3_Fields UStack_68;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  
  if (Il2CppMethodInitialized_075477bb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectSpawner);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"SetupRPC");
    Il2CppMethodInitialized_075477bb = '\x01';
  }
  __this_00 = (__this->fields)._inGameManager;
  if (__this_00 != (GameManagers_InGameManager_o *)0x0) {
    method_00 = __this;
    GameManagers_InGameManager__RegisterCharacter
              (__this_00,(Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
    Characters_BaseTitan__Start((Characters_BaseTitan_o *)__this,(MethodInfo *)method_00);
    bVar4 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method);
    if (!bVar4) {
      return;
    }
    pSVar2 = (__this->fields)._customSet;
    if (pSVar2 != (Settings_TitanCustomSet_o *)0x0) {
      pSVar5 = (*(pSVar2->klass->vtable)._8_SerializeToJsonString.methodPtr)
                         (pSVar2,(pSVar2->klass->vtable)._8_SerializeToJsonString.method);
      pUVar3 = (__this->fields).Cache;
      if (pUVar3 != (Utility_BaseComponentCache_o *)0x0) {
        __this_01 = (pUVar3->fields).PhotonView;
        parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
        if (parameters != (System_Object_array *)0x0) {
          if ((pSVar5 != (System_String_o *)0x0) &&
             (pIVar6 = il2cpp_vm_Object_IsInst
                                 ((Il2CppObject *)pSVar5,(((parameters->obj).klass)->_1).element_class),
             pIVar6 == (Il2CppObject *)0x0)) {
            pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
          }
          if ((int)parameters->max_length == 0) {
            ThrowIndexOutOfRangeException();
          }
          parameters->m_Items[0] = (Il2CppObject *)pSVar5;
          Il2CppCodeGenWriteBarrier(parameters->m_Items);
          if (__this_01 != (Photon_Pun_PhotonView_o *)0x0) {
            method_01 = (MethodInfo *)"SetupRPC";
            Photon_Pun_PhotonView__RPC(__this_01,"SetupRPC",3,parameters,(MethodInfo *)0x0);
            Characters_BasicTitan__LoadSkin(__this,method_01);
            if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
            }
            pUVar3 = (__this->fields).Cache;
            if ((pUVar3 != (Utility_BaseComponentCache_o *)0x0) &&
               (__this_02 = (pUVar3->fields).Transform, __this_02 != (UnityEngine_Transform_o *)0x0)) {
              pSVar5 = TypeInfo_Effects_EffectPrefabs->static_fields->TitanSpawn;
              UVar9 = UnityEngine_Transform__get_position(__this_02,(MethodInfo *)0x0);
              auStack_38._8_4_ = extraout_XMM0_Dc;
              auStack_38._0_8_ = UVar9.fields._0_8_;
              auStack_38._12_4_ = extraout_XMM0_Dd;
              UStack_68.x = -1.5707964;
              UStack_68.y = 0.0;
              UStack_68.z = 0.0;
              UVar8 = UnityEngine_Quaternion__Internal_FromEulerRad
                                ((UnityEngine_Vector3_o *)&UStack_68,(MethodInfo *)0x0);
              auStack_48._8_4_ = extraout_XMM0_Dc_00;
              auStack_48._0_8_ = UVar8.fields._0_8_;
              auStack_48._12_4_ = extraout_XMM0_Dd_00;
              auStack_58._8_4_ = in_XMM1_Dc;
              auStack_58._0_8_ = UVar8.fields._8_8_;
              auStack_58._12_4_ = in_XMM1_Dd;
              fVar1 = (__this->fields).Size;
              fVar7 = (*(__this->klass->vtable)._134_get_SizeMultiplier.methodPtr)
                                (__this,(__this->klass->vtable)._134_get_SizeMultiplier.method);
              if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
              }
              UVar8.fields.z = (float)auStack_58._0_4_;
              UVar8.fields.w = (float)auStack_58._4_4_;
              UVar8.fields.x = (float)auStack_48._0_4_;
              UVar8.fields.y = (float)auStack_48._4_4_;
              UVar9.fields.x = (float)auStack_38._0_4_;
              UVar9.fields.y = (float)auStack_38._4_4_;
              Effects_EffectSpawner__Spawn
                        (pSVar5,UVar9,UVar8,fVar7 * fVar1,true,(System_Object_array *)0x0,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$SetupRPC
// il2cpp: void Characters_BasicTitan__SetupRPC (Characters_BasicTitan_o* __this, System_String_o* json, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5c2fff0

void Characters_BasicTitan__SetupRPC
               (Characters_BasicTitan_o *__this,System_String_o *json,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  Characters_BasicTitanSetup_o *__this_00;
  Characters_BasicTitanComponentCache_o *pCVar3;
  UnityEngine_Transform_o *__this_01;
  Settings_TitanCustomSet_o *__this_02;
  UnityEngine_GameObject_o *__this_03;
  
  if (Il2CppMethodInitialized_075477bc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_TitanCustomSet);
    Il2CppMethodInitialized_075477bc = '\x01';
  }
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
     (pPVar2 = (pUVar1->fields).PhotonView, pPVar2 != (Photon_Pun_PhotonView_o *)0x0)) {
    if (info.fields.Sender != (pPVar2->fields)._Owner_k__BackingField) {
      return;
    }
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_TitanCustomSet);
    Settings_TitanCustomSet___ctor(__this_02,(MethodInfo *)0x0);
    if (__this_02 != (Settings_TitanCustomSet_o *)0x0) {
      (*(__this_02->klass->vtable)._9_DeserializeFromJsonString.methodPtr)
                (__this_02,json,(__this_02->klass->vtable)._9_DeserializeFromJsonString.method);
      __this_00 = (__this->fields).Setup;
      if (__this_00 != (Characters_BasicTitanSetup_o *)0x0) {
        Characters_BasicTitanSetup__Load(__this_00,__this_02,(MethodInfo *)0x0);
        if ((__this->fields)._hairCut == false) {
          return;
        }
        pCVar3 = (__this->fields).BasicCache;
        if (((pCVar3 != (Characters_BasicTitanComponentCache_o *)0x0) &&
            (__this_01 = (pCVar3->fields).HairSocket, __this_01 != (UnityEngine_Transform_o *)0x0)) &&
           (__this_03 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
           __this_03 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(__this_03,false,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$IsHaircutHit
// il2cpp: bool Characters_BasicTitan__IsHaircutHit (Characters_BasicTitan_o* __this, UnityEngine_Collider_o* collider, UnityEngine_Vector3_o bladePosition, const MethodInfo* method);
// 0x5c300e0
// asm: 28 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c30258: movaps xmm0, xmm3
// asm:   0x5c3025b: unpcklps xmm0, xmm2
// asm:   0x5c3025e: mulps xmm0, xmm0
// asm:   0x5c30261: movaps xmmword ptr [rsp + 0x10], xmm0
// asm:   0x5c30266: movaps xmm1, xmmword ptr [rsp]
// asm:   0x5c3026a: unpcklps xmm1, xmmword ptr [rsp + 0x20]
// asm:   0x5c3026f: movaps xmm0, xmmword ptr [rsp + 0x40]
// asm:   0x5c30274: unpcklps xmm0, xmmword ptr [rsp + 0x30]
// asm:   0x5c30279: subps xmm1, xmm0
// asm:   0x5c3027c: mulps xmm1, xmm1
// asm:   0x5c3027f: movaps xmmword ptr [rsp], xmm1
// asm:   0x5c30283: mov rdi, r14
// asm:   0x5c30286: xor esi, esi
// asm:   0x5c30288: call 0x6ad7590  ; UnityEngine_CapsuleCollider__get_radius()
// asm:   0x5c3028d: movss dword ptr [rsp + 0x20], xmm0
// asm:   0x5c30293: mov rdi, r14
// asm:   0x5c30296: xor esi, esi
// asm:   0x5c30298: call 0x6ad7590  ; UnityEngine_CapsuleCollider__get_radius()
// asm:   0x5c3029d: mulss xmm0, dword ptr [rsp + 0x20]
// asm:   0x5c302a3: movaps xmm1, xmmword ptr [rsp]
// asm:   0x5c302a7: shufps xmm0, xmm1, 0xd4
// asm:   0x5c302ab: shufps xmm0, xmm1, 0x52
// asm:   0x5c302af: addps xmm0, xmmword ptr [rsp + 0x10]
// asm:   0x5c302b4: addss xmm1, xmm0
// asm:   0x5c302b8: shufps xmm0, xmm0, 0x55
// asm:   0x5c302bc: ucomiss xmm0, xmm1
// asm:   0x5c302bf: setae bl
// asm:   0x5c302c2: jmp 0x5c30134

bool Characters_BasicTitan__IsHaircutHit
               (Characters_BasicTitan_o *__this,UnityEngine_Collider_o *collider,
               UnityEngine_Vector3_o bladePosition,MethodInfo *method)

{
  Characters_BasicTitanComponentCache_o *pCVar1;
  UnityEngine_Object_o *y;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_CapsuleCollider_o *__this_01;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  UnityEngine_Vector3_o UVar7;
  UnityEngine_Vector3_o UVar8;
  float local_68;
  float fStack_64;
  float local_58;
  
  if (Il2CppMethodInitialized_075477bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075477bd = '\x01';
  }
  if ((((__this->fields).Dead != false) || ((__this->fields)._headDetached != false)) ||
     ((__this->fields)._hairCut != false)) {
    return false;
  }
  pCVar1 = (__this->fields).BasicCache;
  if (pCVar1 != (Characters_BasicTitanComponentCache_o *)0x0) {
    y = (UnityEngine_Object_o *)(pCVar1->fields).HeadCollider;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)collider,y,(MethodInfo *)0x0);
    if (bVar2) {
      return false;
    }
    pCVar1 = (__this->fields).BasicCache;
    if ((pCVar1 != (Characters_BasicTitanComponentCache_o *)0x0) &&
       (collider != (UnityEngine_Collider_o *)0x0)) {
      __this_00 = (pCVar1->fields).Head;
      UVar7 = UnityEngine_Collider__ClosestPoint(collider,bladePosition,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        UVar7 = UnityEngine_Transform__InverseTransformPoint(__this_00,UVar7,(MethodInfo *)0x0);
        pCVar1 = (__this->fields).BasicCache;
        if ((pCVar1 != (Characters_BasicTitanComponentCache_o *)0x0) &&
           (__this_01 = (pCVar1->fields).HeadCollider, __this_01 != (UnityEngine_CapsuleCollider_o *)0x0)) {
          UVar8 = UnityEngine_CapsuleCollider__get_center(__this_01,(MethodInfo *)0x0);
          fStack_64 = UVar7.fields.y;
          fStack_64 = fStack_64 - UVar8.fields.y;
          fVar3 = UnityEngine_CapsuleCollider__get_height(__this_01,(MethodInfo *)0x0);
          fVar4 = UnityEngine_CapsuleCollider__get_radius(__this_01,(MethodInfo *)0x0);
          fVar6 = fVar3 * 0.5;
          if (fVar3 * 0.5 <= fVar4) {
            fVar6 = fVar4;
          }
          if (fStack_64 < fVar6 * 0.5) {
            return false;
          }
          local_68 = UVar7.fields.x;
          local_58 = UVar8.fields.x;
          fVar5 = UVar7.fields.z - UVar8.fields.z;
          fVar3 = UnityEngine_CapsuleCollider__get_radius(__this_01,(MethodInfo *)0x0);
          fVar4 = UnityEngine_CapsuleCollider__get_radius(__this_01,(MethodInfo *)0x0);
          return fVar5 * fVar5 + (local_68 - local_58) * (local_68 - local_58) + fStack_64 * fStack_64 <=
                 fVar4 * fVar3 + fVar6 * fVar6;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$IsTopOfHead
// il2cpp: bool Characters_BasicTitan__IsTopOfHead (Characters_BasicTitan_o* __this, UnityEngine_Vector3_o localHitPoint, const MethodInfo* method);
// 0x5c302d0

bool Characters_BasicTitan__IsTopOfHead
               (Characters_BasicTitan_o *__this,UnityEngine_Vector3_o localHitPoint,MethodInfo *method)

{
  Characters_BasicTitanComponentCache_o *pCVar1;
  UnityEngine_CapsuleCollider_o *__this_00;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  UnityEngine_Vector3_o UVar7;
  float fStack_78;
  float fStack_74;
  float fStack_48;
  
  pCVar1 = (__this->fields).BasicCache;
  if (pCVar1 != (Characters_BasicTitanComponentCache_o *)0x0) {
    __this_00 = (pCVar1->fields).HeadCollider;
    if (__this_00 != (UnityEngine_CapsuleCollider_o *)0x0) {
      bVar2 = false;
      UVar7 = UnityEngine_CapsuleCollider__get_center(__this_00,(MethodInfo *)0x0);
      fStack_74 = localHitPoint.fields.y;
      fStack_74 = fStack_74 - UVar7.fields.y;
      fVar3 = UnityEngine_CapsuleCollider__get_height(__this_00,(MethodInfo *)0x0);
      fVar4 = UnityEngine_CapsuleCollider__get_radius(__this_00,(MethodInfo *)0x0);
      fVar6 = fVar3 * 0.5;
      if (fVar3 * 0.5 <= fVar4) {
        fVar6 = fVar4;
      }
      if (fVar6 * 0.5 <= fStack_74) {
        fStack_78 = localHitPoint.fields.x;
        fStack_48 = UVar7.fields.x;
        fVar5 = localHitPoint.fields.z - UVar7.fields.z;
        fVar3 = UnityEngine_CapsuleCollider__get_radius(__this_00,(MethodInfo *)0x0);
        fVar4 = UnityEngine_CapsuleCollider__get_radius(__this_00,(MethodInfo *)0x0);
        bVar2 = fVar5 * fVar5 + (fStack_78 - fStack_48) * (fStack_78 - fStack_48) + fStack_74 * fStack_74 <=
                fVar4 * fVar3 + fVar6 * fVar6;
      }
      return bVar2;
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$ApplyHaircutRPC
// il2cpp: void Characters_BasicTitan__ApplyHaircutRPC (Characters_BasicTitan_o* __this, int32_t attackerViewId, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5c303e0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c30494: xor ebx, ebx
// asm:   0x5c30622: jmp 0x5c304a9

void Characters_BasicTitan__ApplyHaircutRPC
               (Characters_BasicTitan_o *__this,int32_t attackerViewId,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  Utility_BaseComponentCache_o *pUVar3;
  Photon_Pun_PhotonView_o *pPVar4;
  Characters_BasicTitanComponentCache_o *pCVar5;
  UnityEngine_Collider_o *__this_00;
  UnityEngine_Transform_o *pUVar6;
  bool bVar7;
  Characters_BaseCharacter_o *pCVar8;
  UnityEngine_GameObject_o *__this_01;
  Characters_BaseCharacter_o *x;
  float fVar9;
  undefined8 uStack_40;
  float fStack_38;
  UnityEngine_Bounds_o UStack_30;
  
  if (Il2CppMethodInitialized_075477be == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HaircutEffect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_075477be = '\x01';
  }
  fStack_38 = 0.0;
  uStack_40 = 0;
  if ((__this->fields)._hairCut != false) {
    return;
  }
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  pCVar8 = Utility_Util__FindCharacterByViewId(attackerViewId,(MethodInfo *)0x0);
  if (pCVar8 == (Characters_BaseCharacter_o *)0x0) {
label_05c30496:
    x = (Characters_BaseCharacter_o *)0x0;
    uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
    if ((pCVar8->klass->_2).typeHierarchyDepth < bVar1) goto label_05c30496;
    x = (Characters_BaseCharacter_o *)0x0;
    if ((pCVar8->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_Human) {
      x = pCVar8;
    }
    uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar7) {
    if (((x == (Characters_BaseCharacter_o *)0x0) ||
        (pUVar3 = (x->fields).Cache, pUVar3 == (Utility_BaseComponentCache_o *)0x0)) ||
       (pPVar4 = (pUVar3->fields).PhotonView, pPVar4 == (Photon_Pun_PhotonView_o *)0x0)) {
label_05c30627:
      ThrowNullReferenceException();
    }
    if ((pPVar4->fields)._Owner_k__BackingField == info.fields.Sender) {
      (__this->fields)._hairCut = true;
      if ((((__this->fields).EffectsEnabled != false) &&
          ((__this->fields)._GoreEnabled_k__BackingField != false)) &&
         ((__this->fields)._headDetached == false)) {
        pCVar5 = (__this->fields).BasicCache;
        if ((pCVar5 == (Characters_BasicTitanComponentCache_o *)0x0) ||
           (__this_00 = (UnityEngine_Collider_o *)(pCVar5->fields).HeadCollider,
           __this_00 == (UnityEngine_Collider_o *)0x0)) goto label_05c30627;
        pUVar6 = (pCVar5->fields).HairSocket;
        UnityEngine_Collider__get_bounds(&UStack_30,__this_00,(MethodInfo *)0x0);
        uStack_40 = CONCAT44(UStack_30.fields.m_Extents.fields.y + UStack_30.fields.m_Extents.fields.y,
                             UStack_30.fields.m_Extents.fields.x + UStack_30.fields.m_Extents.fields.x);
        fStack_38 = UStack_30.fields.m_Extents.fields.z + UStack_30.fields.m_Extents.fields.z;
        fVar9 = (float)il2cpp_runtime_helper_0599adc0(&uStack_40);
        if ((TypeInfo_Characters_HaircutEffect->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HaircutEffect);
        }
        Characters_HaircutEffect__Play(pUVar6,fVar9 * 0.25,(MethodInfo *)0x0);
      }
      pCVar5 = (__this->fields).BasicCache;
      if (((pCVar5 == (Characters_BasicTitanComponentCache_o *)0x0) ||
          (pUVar6 = (pCVar5->fields).HairSocket, pUVar6 == (UnityEngine_Transform_o *)0x0)) ||
         (__this_01 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0),
         __this_01 == (UnityEngine_GameObject_o *)0x0)) goto label_05c30627;
      UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
    }
  }
  return;
}


// Characters.BasicTitan$$LoadSkin
// il2cpp: void Characters_BasicTitan__LoadSkin (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x5c2fdd0

void Characters_BasicTitan__LoadSkin(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  byte bVar1;
  int32_t slotIndex;
  Settings_CustomSkinSettings_o *pSVar2;
  Settings_BaseCustomSkinSettings_TitanCustomSkinSet__o *__this_00;
  Settings_BoolSetting_o *pSVar3;
  Settings_TitanCustomSet_o *pSVar4;
  Utility_BaseComponentCache_o *pUVar5;
  Photon_Pun_PhotonView_o *__this_01;
  bool bVar6;
  int32_t body;
  int32_t head;
  Settings_TitanCustomSkinSet_o *skinSet;
  System_String_o *obj;
  System_Object_array *parameters;
  Il2CppObject *pIVar7;
  
  if (Il2CppMethodInitialized_075477bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_TitanCustomSkinSet_GetSelectedSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_TitanCustomSkinSet);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"LoadSkinRPC");
    Il2CppMethodInitialized_075477bf = '\x01';
  }
  bVar6 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method);
  if (!bVar6) {
    return;
  }
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
  if (((pSVar2 != (Settings_CustomSkinSettings_o *)0x0) &&
      (__this_00 = (pSVar2->fields).Titan,
      __this_00 != (Settings_BaseCustomSkinSettings_TitanCustomSkinSet__o *)0x0)) &&
     (pSVar3 = (__this_00->fields).SkinsEnabled, pSVar3 != (Settings_BoolSetting_o *)0x0)) {
    if ((pSVar3->fields)._value == false) {
      return;
    }
    skinSet = (Settings_TitanCustomSkinSet_o *)
              Settings_SetSettingsContainer_object___GetSelectedSet
                        ((Settings_SetSettingsContainer_T__o *)__this_00,
                         (MethodInfo_40477A0 *)
                         MethodInfo_Settings_SetSettingsContainer_TitanCustomSkinSet_GetSelectedSet);
    pSVar4 = (__this->fields)._customSet;
    if (pSVar4 != (Settings_TitanCustomSet_o *)0x0) {
      slotIndex = (__this->fields)._skinSlot;
      body = Settings_TitanCustomSet__GetBody(pSVar4,(MethodInfo *)0x0);
      pSVar4 = (__this->fields)._customSet;
      if (pSVar4 != (Settings_TitanCustomSet_o *)0x0) {
        head = Settings_TitanCustomSet__GetHead(pSVar4,(MethodInfo *)0x0);
        if (skinSet != (Settings_TitanCustomSkinSet_o *)0x0) {
          bVar1 = (TypeInfo_Settings_TitanCustomSkinSet->_2).typeHierarchyDepth;
          if (((skinSet->klass->_2).typeHierarchyDepth < bVar1) ||
             ((skinSet->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_Settings_TitanCustomSkinSet)) {
            il2cpp_codegen_raise_invalid_cast_exception(skinSet);
          }
        }
        obj = CustomSkins_TitanSkinPicker__GetSkinUrls
                        (skinSet,slotIndex,body,head,(__this->fields).AI,(MethodInfo *)0x0);
        pUVar5 = (__this->fields).Cache;
        if (pUVar5 != (Utility_BaseComponentCache_o *)0x0) {
          __this_01 = (pUVar5->fields).PhotonView;
          parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
          if (parameters != (System_Object_array *)0x0) {
            if ((obj != (System_String_o *)0x0) &&
               (pIVar7 = il2cpp_vm_Object_IsInst
                                   ((Il2CppObject *)obj,(((parameters->obj).klass)->_1).element_class),
               pIVar7 == (Il2CppObject *)0x0)) {
              pIVar7 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar7,(MethodInfo *)0x0);
            }
            if ((int)parameters->max_length == 0) {
              ThrowIndexOutOfRangeException();
            }
            parameters->m_Items[0] = (Il2CppObject *)obj;
            Il2CppCodeGenWriteBarrier(parameters->m_Items);
            if (__this_01 != (Photon_Pun_PhotonView_o *)0x0) {
              Photon_Pun_PhotonView__RPC(__this_01,"LoadSkinRPC",3,parameters,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$LoadSkinRPC
// il2cpp: void Characters_BasicTitan__LoadSkinRPC (Characters_BasicTitan_o* __this, System_String_o* url, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5c30630

void Characters_BasicTitan__LoadSkinRPC
               (Characters_BasicTitan_o *__this,System_String_o *url,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  CustomSkins_TitanCustomSkinLoader_o *pCVar3;
  Settings_CustomSkinSettings_o *pSVar4;
  Settings_BaseCustomSkinSettings_TitanCustomSkinSet__o *pSVar5;
  Settings_BoolSetting_o *pSVar6;
  bool bVar7;
  System_Object_array *pSVar8;
  Il2CppObject *pIVar9;
  System_Collections_IEnumerator_o *routine;
  
  if (Il2CppMethodInitialized_075477c0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_075477c0 = '\x01';
  }
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
     (pPVar2 = (pUVar1->fields).PhotonView, pPVar2 == (Photon_Pun_PhotonView_o *)0x0)) goto label_05c30807;
  if (info.fields.Sender == (pPVar2->fields)._Owner_k__BackingField) {
    pCVar3 = (__this->fields)._customSkinLoader;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar7 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pCVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((!bVar7) && (bVar7 = System_String__IsNullOrEmpty(url,(MethodInfo *)0x0), !bVar7)) {
      pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
      if ((pSVar4 != (Settings_CustomSkinSettings_o *)0x0) &&
         ((pSVar5 = (pSVar4->fields).Titan,
          pSVar5 != (Settings_BaseCustomSkinSettings_TitanCustomSkinSet__o *)0x0 &&
          (pSVar6 = (pSVar5->fields).SkinsEnabled, pSVar6 != (Settings_BoolSetting_o *)0x0)))) {
        if ((pSVar6->fields)._value == false) {
          return;
        }
        pSVar6 = (pSVar5->fields).SkinsLocal;
        if (pSVar6 != (Settings_BoolSetting_o *)0x0) {
          if ((pSVar6->fields)._value != false) {
            pUVar1 = (__this->fields).Cache;
            if ((pUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
               (pPVar2 = (pUVar1->fields).PhotonView, pPVar2 == (Photon_Pun_PhotonView_o *)0x0))
            goto label_05c30807;
            if ((pPVar2->fields)._IsMine_k__BackingField == false) {
              return;
            }
          }
          pCVar3 = (__this->fields)._customSkinLoader;
          pSVar8 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
          if (pSVar8 != (System_Object_array *)0x0) {
            if ((url != (System_String_o *)0x0) &&
               (pIVar9 = il2cpp_vm_Object_IsInst
                                   ((Il2CppObject *)url,(((pSVar8->obj).klass)->_1).element_class),
               pIVar9 == (Il2CppObject *)0x0)) {
              pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
            }
            if ((int)pSVar8->max_length == 0) {
              ThrowIndexOutOfRangeException();
            }
            pSVar8->m_Items[0] = (Il2CppObject *)url;
            Il2CppCodeGenWriteBarrier(pSVar8->m_Items);
            if (pCVar3 != (CustomSkins_TitanCustomSkinLoader_o *)0x0) {
              routine = (*(pCVar3->klass->vtable)._7_LoadSkinsFromRPC.methodPtr)
                                  (pCVar3,pSVar8,(pCVar3->klass->vtable)._7_LoadSkinsFromRPC.method);
              UnityEngine_MonoBehaviour__StartCoroutine_691c390
                        ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
label_05c30807:
      ThrowNullReferenceException();
    }
  }
  return;
}


// Characters.BasicTitan$$CreateCache
// il2cpp: void Characters_BasicTitan__CreateCache (Characters_BasicTitan_o* __this, Utility_BaseComponentCache_o* cache, const MethodInfo* method);
// 0x5c30820

void Characters_BasicTitan__CreateCache
               (Characters_BasicTitan_o *__this,Utility_BaseComponentCache_o *cache,MethodInfo *method)

{
  UnityEngine_GameObject_o *owner;
  Characters_BasicTitanComponentCache_o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075477c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitanComponentCache);
    Il2CppMethodInitialized_075477c1 = '\x01';
  }
  owner = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_BasicTitanComponentCache);
  Characters_BasicTitanComponentCache___ctor(__this_00,owner,(MethodInfo *)0x0);
  (__this->fields).BasicCache = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).BasicCache);
  Characters_BaseTitan__CreateCache
            ((Characters_BaseTitan_o *)__this,(Utility_BaseComponentCache_o *)(__this->fields).BasicCache,
             method_00);
  return;
}


// Characters.BasicTitan$$ScaleSounds
// il2cpp: void Characters_BasicTitan__ScaleSounds (Characters_BasicTitan_o* __this, float size, const MethodInfo* method);
// 0x5c308a0

void Characters_BasicTitan__ScaleSounds(Characters_BasicTitan_o *__this,float size,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  UnityEngine_AudioSource_o *__this_01;
  float fVar2;
  
  if (Il2CppMethodInitialized_075477c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_075477c2 = '\x01';
  }
  Characters_BaseTitan__ScaleSounds((Characters_BaseTitan_o *)__this,size,method);
  pUVar1 = (__this->fields).Cache;
  if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(pUVar1->fields).AudioSources;
    if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    }
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      __this_01 = System_Collections_Generic_Dictionary_object__object___get_Item
                            (__this_00,(Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Steam,
                             (MethodInfo_4AAD450 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_get_Item);
      if (__this_01 != (UnityEngine_AudioSource_o *)0x0) {
        fVar2 = UnityEngine_AudioSource__get_volume(__this_01,(MethodInfo *)0x0);
        (__this->fields)._steamSoundVolume = fVar2;
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$CreateAnimations
// il2cpp: void Characters_BasicTitan__CreateAnimations (Characters_BasicTitan_o* __this, Characters_BaseTitanAnimations_o* animations, const MethodInfo* method);
// 0x5c30960

void Characters_BasicTitan__CreateAnimations
               (Characters_BasicTitan_o *__this,Characters_BaseTitanAnimations_o *animations,
               MethodInfo *method)

{
  Characters_BasicTitanAnimations_o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075477c3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitanAnimations);
    Il2CppMethodInitialized_075477c3 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_BasicTitanAnimations);
  Characters_BasicTitanAnimations___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields).BasicAnimations = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).BasicAnimations);
  Characters_BaseTitan__CreateAnimations
            ((Characters_BaseTitan_o *)__this,
             (Characters_BaseTitanAnimations_o *)(__this->fields).BasicAnimations,method_00);
  return;
}


// Characters.BasicTitan$$Emote
// il2cpp: void Characters_BasicTitan__Emote (Characters_BasicTitan_o* __this, System_String_o* emote, const MethodInfo* method);
// 0x5c309d0

void Characters_BasicTitan__Emote(Characters_BasicTitan_o *__this,System_String_o *emote,MethodInfo *method)

{
  Characters_BasicTitanAnimations_o *pCVar1;
  Characters_AnimationHandler_o *pCVar2;
  bool bVar3;
  System_String_o *sound;
  System_Collections_IEnumerator_o *routine;
  System_String_o *a;
  float fVar4;
  
  if (Il2CppMethodInitialized_075477c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    il2cpp_codegen_initialize_runtime_metadata(&"Shake");
    il2cpp_codegen_initialize_runtime_metadata(&"Nod");
    il2cpp_codegen_initialize_runtime_metadata(&"Laugh");
    il2cpp_codegen_initialize_runtime_metadata(&"Roar2");
    il2cpp_codegen_initialize_runtime_metadata(&"Roar1");
    Il2CppMethodInitialized_075477c4 = '\x01';
  }
  bVar3 = (*(__this->klass->vtable)._146_CanEmote.methodPtr)
                    (__this,(__this->klass->vtable)._146_CanEmote.method);
  if (!bVar3) {
    return;
  }
  a = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  bVar3 = System_String__op_Equality(emote,"Laugh",(MethodInfo *)0x0);
  if (bVar3) {
    pCVar1 = (__this->fields).BasicAnimations;
    if (pCVar1 == (Characters_BasicTitanAnimations_o *)0x0) goto label_05c30ce5;
    a = (pCVar1->fields).EmoteLaugh;
    if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    }
    sound = Characters_TitanSounds__GetRandomLaugh((MethodInfo *)0x0);
    fVar4 = 0.5;
label_05c30ac6:
    routine = Characters_BaseCharacter__WaitAndPlaySound
                        ((Characters_BaseCharacter_o *)__this,sound,fVar4,(MethodInfo *)0x0);
    UnityEngine_MonoBehaviour__StartCoroutine_691c390
              ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
  }
  else {
    bVar3 = System_String__op_Equality(emote,"Nod",(MethodInfo *)0x0);
    if (bVar3) {
      pCVar1 = (__this->fields).BasicAnimations;
      if (pCVar1 == (Characters_BasicTitanAnimations_o *)0x0) goto label_05c30ce5;
      a = (pCVar1->fields).EmoteNod;
    }
    else {
      bVar3 = System_String__op_Equality(emote,"Shake",(MethodInfo *)0x0);
      if (!bVar3) {
        bVar3 = System_String__op_Equality(emote,"Roar1",(MethodInfo *)0x0);
        if (bVar3) {
          pCVar1 = (__this->fields).BasicAnimations;
          if (pCVar1 == (Characters_BasicTitanAnimations_o *)0x0) goto label_05c30ce5;
          a = (pCVar1->fields).EmoteRoar;
          if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
          }
          sound = TypeInfo_Characters_TitanSounds->static_fields->Roar1;
        }
        else {
          bVar3 = System_String__op_Equality(emote,"Roar2",(MethodInfo *)0x0);
          if (!bVar3) goto label_05c30c09;
          pCVar1 = (__this->fields).BasicAnimations;
          if (pCVar1 == (Characters_BasicTitanAnimations_o *)0x0) goto label_05c30ce5;
          a = (pCVar1->fields).EmoteRoar;
          if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
          }
          sound = TypeInfo_Characters_TitanSounds->static_fields->Roar2;
        }
        fVar4 = 1.4;
        goto label_05c30ac6;
      }
      pCVar1 = (__this->fields).BasicAnimations;
      if (pCVar1 == (Characters_BasicTitanAnimations_o *)0x0) goto label_05c30ce5;
      a = (pCVar1->fields).EmoteShake;
    }
  }
label_05c30c09:
  bVar3 = System_String__op_Inequality
                    (a,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
  if (!bVar3) {
    return;
  }
  pCVar2 = (__this->fields).Animation;
  if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
    fVar4 = Characters_AnimationHandler__GetLength(pCVar2,a,(MethodInfo *)0x0);
    (__this->fields)._needFreshCore = true;
    pCVar2 = (__this->fields).Animation;
    if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
      Characters_AnimationHandler__SetCullingType(pCVar2,false,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._173_Ungrab.methodPtr)(__this,(__this->klass->vtable)._173_Ungrab.method);
      (*(__this->klass->vtable)._189_DeactivateAllHitboxes.methodPtr)
                (__this,(__this->klass->vtable)._189_DeactivateAllHitboxes.method);
      Characters_BaseCharacter__CrossFade((Characters_BaseCharacter_o *)__this,a,0.1,0.0,(MethodInfo *)0x0);
      (__this->fields).State = 8;
      (__this->fields)._currentStateAnimation = a;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._currentStateAnimation);
      (__this->fields)._stateTimeLeft = fVar4;
      return;
    }
  }
label_05c30ce5:
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$CoverNape
// il2cpp: void Characters_BasicTitan__CoverNape (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x5c30cf0

void Characters_BasicTitan__CoverNape(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  Characters_BasicTitanAnimations_o *pCVar1;
  Characters_AnimationHandler_o *pCVar2;
  System_String_o *name;
  bool bVar3;
  float fVar4;
  
  bVar3 = (*(__this->klass->vtable)._145_CanAction.methodPtr)
                    (__this,(__this->klass->vtable)._145_CanAction.method);
  if (!bVar3) {
    return;
  }
  pCVar1 = (__this->fields).BasicAnimations;
  if ((pCVar1 != (Characters_BasicTitanAnimations_o *)0x0) &&
     (pCVar2 = (__this->fields).Animation, pCVar2 != (Characters_AnimationHandler_o *)0x0)) {
    name = (pCVar1->fields).CoverNape;
    fVar4 = Characters_AnimationHandler__GetTotalTime(pCVar2,name,(MethodInfo *)0x0);
    (__this->fields)._needFreshCore = true;
    pCVar2 = (__this->fields).Animation;
    if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
      Characters_AnimationHandler__SetCullingType(pCVar2,false,(MethodInfo *)0x0);
      (*(__this->klass->vtable)._173_Ungrab.methodPtr)(__this,(__this->klass->vtable)._173_Ungrab.method);
      (*(__this->klass->vtable)._189_DeactivateAllHitboxes.methodPtr)
                (__this,(__this->klass->vtable)._189_DeactivateAllHitboxes.method);
      Characters_BaseCharacter__CrossFade((Characters_BaseCharacter_o *)__this,name,0.1,0.0,(MethodInfo *)0x0)
      ;
      (__this->fields).State = 0x1a;
      (__this->fields)._currentStateAnimation = name;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._currentStateAnimation);
      (__this->fields)._stateTimeLeft = fVar4;
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$UncoverNape
// il2cpp: void Characters_BasicTitan__UncoverNape (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x5c30de0

void Characters_BasicTitan__UncoverNape(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  if ((__this->fields).State == 0x1a) {
    (*(__this->klass->vtable)._163_Idle.methodPtr)(__this,0.3,(__this->klass->vtable)._163_Idle.method);
    return;
  }
  return;
}


// Characters.BasicTitan$$DisableArm
// il2cpp: void Characters_BasicTitan__DisableArm (Characters_BasicTitan_o* __this, bool left, const MethodInfo* method);
// 0x5c30e10

void Characters_BasicTitan__DisableArm(Characters_BasicTitan_o *__this,bool left,MethodInfo *method)

{
  MethodInfo *in_RCX;
  
  Characters_BasicTitan__DisableLimb(__this,left,false,in_RCX);
  return;
}


// Characters.BasicTitan$$DisableHand
// il2cpp: void Characters_BasicTitan__DisableHand (Characters_BasicTitan_o* __this, bool left, const MethodInfo* method);
// 0x5c31070

void Characters_BasicTitan__DisableHand(Characters_BasicTitan_o *__this,bool left,MethodInfo *method)

{
  MethodInfo *in_RCX;
  
  Characters_BasicTitan__DisableLimb(__this,left,true,in_RCX);
  return;
}


// Characters.BasicTitan$$DisableLimb
// il2cpp: void Characters_BasicTitan__DisableLimb (Characters_BasicTitan_o* __this, bool left, bool hand, const MethodInfo* method);
// 0x5c30e20

void Characters_BasicTitan__DisableLimb
               (Characters_BasicTitan_o *__this,bool left,bool hand,MethodInfo *method)

{
  uint uVar1;
  Utility_BaseComponentCache_o *pUVar2;
  Photon_Pun_PhotonView_o *__this_00;
  System_String_o *methodName;
  Characters_Human_o *x;
  Characters_BasicTitanAnimations_o *pCVar3;
  bool bVar4;
  undefined8 in_RAX;
  System_Object_array *parameters;
  Il2CppObject *pIVar5;
  Il2CppObject *pIVar6;
  System_String_o **ppSVar7;
  MethodInfo *method_00;
  MethodInfo *method_01;
  undefined8 uStack_38;
  
  uStack_38 = in_RAX;
  if (Il2CppMethodInitialized_075477c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"DisableHandRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"DisableArmRPC");
    Il2CppMethodInitialized_075477c5 = '\x01';
  }
  if ((((__this->fields).AI == false) || (*(char *)((long)__this + (0x1ae - (ulong)left)) != '\0')) ||
     ((hand && (*(char *)((long)__this + (0x1b0 - (ulong)left)) != '\0')))) {
    return;
  }
  pUVar2 = (__this->fields).Cache;
  if (pUVar2 != (Utility_BaseComponentCache_o *)0x0) {
    if (hand) {
      ppSVar7 = &"DisableHandRPC";
    }
    else {
      ppSVar7 = &"DisableArmRPC";
    }
    __this_00 = (pUVar2->fields).PhotonView;
    methodName = *ppSVar7;
    parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
    uStack_38 = CONCAT17(left,(undefined7)uStack_38);
    pIVar5 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_38 + 7));
    if (parameters != (System_Object_array *)0x0) {
      if ((pIVar5 != (Il2CppObject *)0x0) &&
         (pIVar6 = il2cpp_vm_Object_IsInst(pIVar5,(((parameters->obj).klass)->_1).element_class),
         pIVar6 == (Il2CppObject *)0x0)) {
        pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
      }
      if ((int)parameters->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      parameters->m_Items[0] = pIVar5;
      Il2CppCodeGenWriteBarrier(parameters->m_Items);
      if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
        method_01 = (MethodInfo *)0x0;
        Photon_Pun_PhotonView__RPC(__this_00,methodName,0,parameters,(MethodInfo *)0x0);
        x = (__this->fields).HoldHuman;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        method_00 = (MethodInfo *)0x0;
        bVar4 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((bVar4) && ((__this->fields).HoldHumanLeft == left)) {
          method_00 = (__this->klass->vtable)._173_Ungrab.method;
          (*(__this->klass->vtable)._173_Ungrab.methodPtr)(__this,method_00);
        }
        uVar1 = (__this->fields).State;
        if (((0x16 < uVar1) || ((0x7e00f0U >> (uVar1 & 0x1f) & 1) == 0)) &&
           (bVar4 = Characters_BasicTitan__get_IsBellyFlopping(__this,method_00), !bVar4)) {
          pCVar3 = (__this->fields).BasicAnimations;
          if (left) {
            if (pCVar3 == (Characters_BasicTitanAnimations_o *)0x0) goto label_05c31048;
            ppSVar7 = &(pCVar3->fields).ArmHurtL;
          }
          else {
            if (pCVar3 == (Characters_BasicTitanAnimations_o *)0x0) goto label_05c31048;
            ppSVar7 = &(pCVar3->fields).ArmHurtR;
          }
          Characters_BaseTitan__StateAction((Characters_BaseTitan_o *)__this,0xb,*ppSVar7,0.1,true,method_01);
        }
        (*(__this->klass->vtable)._196_DamagedGrunt.methodPtr)
                  (__this,1.0,(__this->klass->vtable)._196_DamagedGrunt.method);
        return;
      }
    }
  }
label_05c31048:
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$get_IsBellyFlopping
// il2cpp: bool Characters_BasicTitan__get_IsBellyFlopping (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x5c31080

bool Characters_BasicTitan__get_IsBellyFlopping(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  Characters_BasicTitanAnimations_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).BasicAnimations;
  if (pCVar1 != (Characters_BasicTitanAnimations_o *)0x0) {
    bVar2 = System_String__op_Equality
                      ((__this->fields)._currentStateAnimation,(pCVar1->fields).AttackBellyFlop,
                       (MethodInfo *)0x0);
    if (bVar2) {
      return true;
    }
    pCVar1 = (__this->fields).BasicAnimations;
    if (pCVar1 != (Characters_BasicTitanAnimations_o *)0x0) {
      bVar2 = System_String__op_Equality
                        ((__this->fields)._currentStateAnimation,(pCVar1->fields).AttackBellyFlopGetup,
                         (MethodInfo *)0x0);
      return bVar2;
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$CanAttack
// il2cpp: bool Characters_BasicTitan__CanAttack (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x5c310e0

bool Characters_BasicTitan__CanAttack(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = (*(__this->klass->vtable)._145_CanAction.methodPtr)
                    (__this,(__this->klass->vtable)._145_CanAction.method);
  return bVar1;
}


// Characters.BasicTitan$$DisableArmRPC
// il2cpp: void Characters_BasicTitan__DisableArmRPC (Characters_BasicTitan_o* __this, bool left, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5c31100

void Characters_BasicTitan__DisableArmRPC
               (Characters_BasicTitan_o *__this,bool left,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
     (pPVar2 = (pUVar1->fields).PhotonView, pPVar2 == (Photon_Pun_PhotonView_o *)0x0)) {
    ThrowNullReferenceException();
  }
  if (info.fields.Sender == (pPVar2->fields)._Owner_k__BackingField) {
    Characters_BasicTitan__ApplyDisabledLimb(__this,left,false,(MethodInfo *)info.fields.Sender);
    return;
  }
  return;
}


// Characters.BasicTitan$$DisableHandRPC
// il2cpp: void Characters_BasicTitan__DisableHandRPC (Characters_BasicTitan_o* __this, bool left, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5c316c0

void Characters_BasicTitan__DisableHandRPC
               (Characters_BasicTitan_o *__this,bool left,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
     (pPVar2 = (pUVar1->fields).PhotonView, pPVar2 == (Photon_Pun_PhotonView_o *)0x0)) {
    ThrowNullReferenceException();
  }
  if (info.fields.Sender == (pPVar2->fields)._Owner_k__BackingField) {
    Characters_BasicTitan__ApplyDisabledLimb(__this,left,true,(MethodInfo *)info.fields.Sender);
    return;
  }
  return;
}


// Characters.BasicTitan$$ApplyDisabledLimb
// il2cpp: void Characters_BasicTitan__ApplyDisabledLimb (Characters_BasicTitan_o* __this, bool left, bool hand, const MethodInfo* method);
// 0x5c31140

void Characters_BasicTitan__ApplyDisabledLimb
               (Characters_BasicTitan_o *__this,bool left,bool hand,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool handDisabled;
  Characters_TitanLimbMesh_o *__this_00;
  UnityEngine_Vector3_StaticFields *pUVar5;
  ulong uVar6;
  uint uVar7;
  Characters_BasicTitanComponentCache_o *pCVar8;
  System_Object_array *pSVar9;
  UnityEngine_Transform_o *pUVar10;
  UnityEngine_Transform_o **ppUVar11;
  UnityEngine_Transform_o *__this_01;
  uint uVar12;
  undefined7 in_register_00000031;
  MethodInfo *method_00;
  MethodInfo *in_R8;
  undefined8 unaff_R14;
  undefined8 uVar13;
  UnityEngine_ParticleSystem_o *__this_02;
  float fVar14;
  float fVar15;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar16;
  UnityEngine_Quaternion_o value;
  UnityEngine_Vector3_o UVar17;
  UnityEngine_Vector3_o value_00;
  UnityEngine_ParticleSystem_o *pUStack_70;
  UnityEngine_ParticleSystem_MainModule_o UStack_60;
  undefined1 auStack_58 [16];
  undefined8 uStack_48;
  UnityEngine_Vector3_Fields UStack_40;
  
  method_00 = (MethodInfo *)CONCAT71(in_register_00000031,left);
  if (Il2CppMethodInitialized_075477c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitan);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_ParticleSystem_71a4fc0);
    Il2CppMethodInitialized_075477c6 = '\x01';
  }
  UStack_60.fields.m_ParticleSystem =
       (UnityEngine_ParticleSystem_MainModule_Fields)(UnityEngine_ParticleSystem_o *)0x0;
  uVar6 = (ulong)left;
  if (*(char *)((long)__this + (0x1ae - uVar6)) != '\0') {
    return;
  }
  if ((hand) && (*(char *)((long)__this + (0x1b0 - uVar6)) != '\0')) {
    return;
  }
  uVar13 = CONCAT71((int7)((ulong)unaff_R14 >> 8),1);
  if (((__this->fields).EffectsEnabled == false) || ((__this->fields)._GoreEnabled_k__BackingField == false))
  {
label_05c311d7:
    pCVar8 = (__this->fields).BasicCache;
    uStack_48 = uVar13;
    if (left) goto label_05c311ed;
label_05c312eb:
    if (pCVar8 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c316ad;
    __this_02 = (pCVar8->fields).ForearmBloodR;
    pUStack_70 = (pCVar8->fields).ForearmSmokeR;
    if (hand) {
      ppUVar11 = &(pCVar8->fields).HandR;
    }
    else {
      ppUVar11 = &(pCVar8->fields).ForearmR;
    }
  }
  else {
    if ((__this->fields).Dead != false) {
      uVar13 = 0;
      goto label_05c311d7;
    }
    Characters_BasicTitan__EnsureLimbMesh(__this,method_00);
    fVar14 = (&(__this->fields)._leftArmDisabledTimeLeft)[!left];
    if ((TypeInfo_Characters_BasicTitan->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitan);
    }
    __this_00 = (__this->fields)._limbMesh;
    handDisabled = *(bool *)((long)__this + (0x1b0 - uVar6));
    UVar17 = Characters_BaseCharacter__GetVelocity((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
    if (__this_00 == (Characters_TitanLimbMesh_o *)0x0) goto label_05c316ad;
    fVar14 = 6.5 - fVar14;
    fVar15 = 0.0;
    if (0.0 <= fVar14) {
      fVar15 = 6.5;
      if (fVar14 <= 6.5) {
        fVar15 = fVar14;
      }
      fVar15 = fVar15 / 6.5;
    }
    in_R8 = (MethodInfo *)0x0;
    Characters_TitanLimbMesh__Detach(__this_00,left,!hand,handDisabled,fVar15,UVar17,(MethodInfo *)0x0);
    pCVar8 = (__this->fields).BasicCache;
    uStack_48 = 0;
    if (!left) goto label_05c312eb;
label_05c311ed:
    if (pCVar8 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c316ad;
    __this_02 = (pCVar8->fields).ForearmBloodL;
    pUStack_70 = (pCVar8->fields).ForearmSmokeL;
    if (hand) {
      ppUVar11 = &(pCVar8->fields).HandL;
    }
    else {
      ppUVar11 = &(pCVar8->fields).ForearmL;
    }
  }
  if (__this_02 != (UnityEngine_ParticleSystem_o *)0x0) {
    auStack_58._0_8_ = *ppUVar11;
    UnityEngine_ParticleSystem__Stop(__this_02,true,0,(MethodInfo *)0x0);
    pSVar9 = UnityEngine_Component__GetComponentsInChildren_object_
                       ((UnityEngine_Component_o *)__this_02,true,
                        (MethodInfo_34B1260 *)
                        MethodInfo_UnityEngine_Component_GetComponentsInChildren_ParticleSystem_71a4fc0);
    if (pSVar9 != (System_Object_array *)0x0) {
      uVar7 = (uint)pSVar9->max_length;
      if (0 < (int)uVar7) {
        uVar12 = 0;
        do {
          if (uVar7 <= uVar12) {
            ThrowIndexOutOfRangeException();
          }
          if ((UnityEngine_ParticleSystem_o *)pSVar9->m_Items[(int)uVar12] ==
              (UnityEngine_ParticleSystem_o *)0x0) goto label_05c316ad;
          UStack_60 = UnityEngine_ParticleSystem__get_main
                                ((UnityEngine_ParticleSystem_o *)pSVar9->m_Items[(int)uVar12],
                                 (MethodInfo *)0x0);
          UnityEngine_ParticleSystem_MainModule__set_duration(&UStack_60,4.0,(MethodInfo *)0x0);
          uVar12 = uVar12 + 1;
          uVar7 = (uint)pSVar9->max_length;
        } while ((int)uVar12 < (int)uVar7);
      }
      if (pUStack_70 != (UnityEngine_ParticleSystem_o *)0x0) {
        UnityEngine_ParticleSystem__Stop(pUStack_70,true,0,(MethodInfo *)0x0);
        pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0)
        ;
        if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent_692d510
                    (pUVar10,(UnityEngine_Transform_o *)auStack_58._0_8_,false,(MethodInfo *)0x0);
          pUVar10 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
          if (Il2CppMethodInitialized_0753e4b6 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
            Il2CppMethodInitialized_0753e4b6 = '\x01';
          }
          if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__set_localPosition
                      (pUVar10,(UnityEngine_Vector3_o)
                               (TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields,
                       (MethodInfo *)0x0);
            pUVar10 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
            UStack_40.x = -1.5707964;
            UStack_40.y = 0.0;
            UStack_40.z = 0.0;
            value = UnityEngine_Quaternion__Internal_FromEulerRad
                              ((UnityEngine_Vector3_o *)&UStack_40,(MethodInfo *)0x0);
            if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__set_localRotation(pUVar10,value,(MethodInfo *)0x0);
              pUVar10 = UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
              if (Il2CppMethodInitialized_0753e4b7 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                Il2CppMethodInitialized_0753e4b7 = '\x01';
              }
              if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
                pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
                UVar17.fields.z = (pUVar5->oneVector).fields.z * 0.01;
                uVar1 = (pUVar5->oneVector).fields.x;
                uVar3 = (pUVar5->oneVector).fields.y;
                UVar17.fields.x = (float)uVar1 * 0.01;
                UVar17.fields.y = (float)uVar3 * 0.01;
                UnityEngine_Transform__set_localScale(pUVar10,UVar17,(MethodInfo *)0x0);
                pUVar10 = UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
                pCVar8 = (__this->fields).BasicCache;
                if (hand) {
                  if (left) {
                    if (pCVar8 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c316ad;
                    ppUVar11 = &(pCVar8->fields).HandL;
                  }
                  else {
                    if (pCVar8 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c316ad;
                    ppUVar11 = &(pCVar8->fields).HandR;
                  }
                  if (*ppUVar11 == (UnityEngine_Transform_o *)0x0) goto label_05c316ad;
                  UVar17 = UnityEngine_Transform__get_position(*ppUVar11,(MethodInfo *)0x0);
                  fVar16 = UVar17.fields.z;
                  fVar14 = UVar17.fields.x;
                  fVar15 = UVar17.fields.y;
                }
                else {
                  if (left) {
                    if (pCVar8 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c316ad;
                    ppUVar11 = &(pCVar8->fields).ForearmL;
                  }
                  else {
                    if (pCVar8 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c316ad;
                    ppUVar11 = &(pCVar8->fields).ForearmR;
                  }
                  if (*ppUVar11 == (UnityEngine_Transform_o *)0x0) goto label_05c316ad;
                  UVar17 = UnityEngine_Transform__get_position(*ppUVar11,(MethodInfo *)0x0);
                  fVar14 = UVar17.fields.x;
                  fVar15 = UVar17.fields.y;
                  if (Il2CppMethodInitialized_075450a5 == '\0') {
                    auStack_58._8_4_ = extraout_XMM0_Dc;
                    auStack_58._0_8_ = UVar17.fields._0_8_;
                    auStack_58._12_4_ = extraout_XMM0_Dd;
                    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                    Il2CppMethodInitialized_075450a5 = '\x01';
                    fVar14 = (float)auStack_58._0_4_;
                    fVar15 = (float)auStack_58._4_4_;
                  }
                  pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
                  uVar2 = (pUVar5->downVector).fields.x;
                  uVar4 = (pUVar5->downVector).fields.y;
                  fVar16 = (__this->fields).Size * 0.1;
                  fVar14 = fVar14 + fVar16 * (float)uVar2;
                  fVar15 = fVar15 + fVar16 * (float)uVar4;
                  fVar16 = UVar17.fields.z + (pUVar5->downVector).fields.z * fVar16;
                }
                if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
                  value_00.fields.y = fVar15;
                  value_00.fields.x = fVar14;
                  value_00.fields.z = fVar16;
                  UnityEngine_Transform__set_position(pUVar10,value_00,(MethodInfo *)0x0);
                  pUVar10 = UnityEngine_Component__get_transform
                                      ((UnityEngine_Component_o *)pUStack_70,(MethodInfo *)0x0);
                  __this_01 = UnityEngine_Component__get_transform
                                        ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
                  if ((__this_01 != (UnityEngine_Transform_o *)0x0) &&
                     (UVar17 = UnityEngine_Transform__get_position(__this_01,(MethodInfo *)0x0),
                     pUVar10 != (UnityEngine_Transform_o *)0x0)) {
                    UnityEngine_Transform__set_position(pUVar10,UVar17,(MethodInfo *)0x0);
                    if ((char)uStack_48 == '\0') {
                      UnityEngine_ParticleSystem__Play(__this_02,true,(MethodInfo *)0x0);
                    }
                    fVar14 = (__this->fields).ArmDisableTime;
                    if (left) {
                      (__this->fields)._leftArmDisabledTimeLeft = fVar14;
                    }
                    else {
                      (__this->fields)._rightArmDisabledTimeLeft = fVar14;
                    }
                    Characters_BasicTitan__SetLimbDisabled(__this,left,!hand,hand,in_R8);
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
label_05c316ad:
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$SetLimbDisabled
// il2cpp: void Characters_BasicTitan__SetLimbDisabled (Characters_BasicTitan_o* __this, bool left, bool arm, bool hand, const MethodInfo* method);
// 0x5c319f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c31a8d: jmp 0x5c31af5

void Characters_BasicTitan__SetLimbDisabled
               (Characters_BasicTitan_o *__this,bool left,bool arm,bool hand,MethodInfo *method)

{
  char cVar1;
  Characters_TitanColliderToggler_o *pCVar2;
  Characters_BasicTitanComponentCache_o *pCVar3;
  UnityEngine_Collider_o *__this_00;
  UnityEngine_Collider_o *__this_01;
  bool bVar4;
  undefined7 in_register_00000031;
  
  if ((int)CONCAT71(in_register_00000031,left) == 0) {
    (__this->fields).RightArmDisabled = arm;
    (__this->fields).RightHandDisabled = hand;
    pCVar2 = (__this->fields).TitanColliderToggler;
    if ((pCVar2 == (Characters_TitanColliderToggler_o *)0x0) ||
       (pCVar3 = (__this->fields).BasicCache, pCVar3 == (Characters_BasicTitanComponentCache_o *)0x0))
    goto label_05c31af5;
    cVar1 = (pCVar2->fields)._enabled;
    __this_00 = (pCVar3->fields).HandRHurtbox;
    __this_01 = (pCVar3->fields).ForearmRHurtbox;
  }
  else {
    (__this->fields).LeftArmDisabled = arm;
    (__this->fields).LeftHandDisabled = hand;
    pCVar2 = (__this->fields).TitanColliderToggler;
    if ((pCVar2 == (Characters_TitanColliderToggler_o *)0x0) ||
       (pCVar3 = (__this->fields).BasicCache, pCVar3 == (Characters_BasicTitanComponentCache_o *)0x0))
    goto label_05c31af5;
    cVar1 = (pCVar2->fields)._enabled;
    __this_00 = (pCVar3->fields).HandLHurtbox;
    __this_01 = (pCVar3->fields).ForearmLHurtbox;
  }
  if (cVar1 == '\0') {
    if (__this_00 == (UnityEngine_Collider_o *)0x0) goto label_05c31af5;
    bVar4 = false;
    UnityEngine_Collider__set_enabled(__this_00,false,(MethodInfo *)0x0);
  }
  else {
    bVar4 = (*(__this->klass->vtable)._179_IsToggleColliderActive.methodPtr)
                      (__this,__this_00,(__this->klass->vtable)._179_IsToggleColliderActive.method);
    if (__this_00 == (UnityEngine_Collider_o *)0x0) goto label_05c31af5;
    UnityEngine_Collider__set_enabled(__this_00,bVar4,(MethodInfo *)0x0);
    bVar4 = (*(__this->klass->vtable)._179_IsToggleColliderActive.methodPtr)
                      (__this,__this_01,(__this->klass->vtable)._179_IsToggleColliderActive.method);
  }
  if (__this_01 != (UnityEngine_Collider_o *)0x0) {
    UnityEngine_Collider__set_enabled(__this_01,bVar4,(MethodInfo *)0x0);
    return;
  }
label_05c31af5:
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$IsToggleColliderActive
// il2cpp: bool Characters_BasicTitan__IsToggleColliderActive (Characters_BasicTitan_o* __this, UnityEngine_Collider_o* collider, const MethodInfo* method);
// 0x5c31b00

bool Characters_BasicTitan__IsToggleColliderActive
               (Characters_BasicTitan_o *__this,UnityEngine_Collider_o *collider,MethodInfo *method)

{
  Characters_BasicTitanComponentCache_o *pCVar1;
  UnityEngine_Object_o *pUVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_075477c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075477c7 = '\x01';
  }
  pCVar1 = (__this->fields).BasicCache;
  if (pCVar1 == (Characters_BasicTitanComponentCache_o *)0x0) {
label_05c31c70:
    ThrowNullReferenceException();
  }
  pUVar2 = (UnityEngine_Object_o *)(pCVar1->fields).HandLHurtbox;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)collider,pUVar2,(MethodInfo *)0x0);
  if (bVar3) {
    if ((__this->fields).LeftArmDisabled != false) {
      return false;
    }
    bVar3 = (__this->fields).LeftHandDisabled == false;
  }
  else {
    pCVar1 = (__this->fields).BasicCache;
    if (pCVar1 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c31c70;
    pUVar2 = (UnityEngine_Object_o *)(pCVar1->fields).HandRHurtbox;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)collider,pUVar2,(MethodInfo *)0x0);
    if (bVar3) {
      if ((__this->fields).RightArmDisabled != false) {
        return false;
      }
      bVar3 = (__this->fields).RightHandDisabled == false;
    }
    else {
      pCVar1 = (__this->fields).BasicCache;
      if (pCVar1 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c31c70;
      pUVar2 = (UnityEngine_Object_o *)(pCVar1->fields).ForearmLHurtbox;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)collider,pUVar2,(MethodInfo *)0x0);
      if (bVar3) {
        bVar3 = (__this->fields).LeftArmDisabled == false;
      }
      else {
        pCVar1 = (__this->fields).BasicCache;
        if (pCVar1 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c31c70;
        pUVar2 = (UnityEngine_Object_o *)(pCVar1->fields).ForearmRHurtbox;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar3 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)collider,pUVar2,(MethodInfo *)0x0);
        if (!bVar3) {
          return true;
        }
        bVar3 = (__this->fields).RightArmDisabled == false;
      }
    }
  }
  return bVar3;
}


// Characters.BasicTitan$$Laugh
// il2cpp: void Characters_BasicTitan__Laugh (Characters_BasicTitan_o* __this, Characters_BaseCharacter_o* character, const MethodInfo* method);
// 0x5c31c80

void Characters_BasicTitan__Laugh
               (Characters_BasicTitan_o *__this,Characters_BaseCharacter_o *character,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *__this_00;
  Photon_Realtime_Player_o *targetPlayer;
  UnityEngine_Transform_o *__this_01;
  System_Object_array *parameters;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  UnityEngine_Vector3_o local_38;
  
  if (Il2CppMethodInitialized_075477c8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    il2cpp_codegen_initialize_runtime_metadata(&"LaughRPC");
    Il2CppMethodInitialized_075477c8 = '\x01';
  }
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
     (__this_00 = (pUVar1->fields).PhotonView, __this_00 != (Photon_Pun_PhotonView_o *)0x0)) {
    targetPlayer = (__this_00->fields)._Owner_k__BackingField;
    parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
    if ((character != (Characters_BaseCharacter_o *)0x0) &&
       ((pUVar1 = (character->fields).Cache, pUVar1 != (Utility_BaseComponentCache_o *)0x0 &&
        (__this_01 = (pUVar1->fields).Transform, __this_01 != (UnityEngine_Transform_o *)0x0)))) {
      local_38 = UnityEngine_Transform__get_position(__this_01,(MethodInfo *)0x0);
      pIVar2 = il2cpp_vm_Object_Box((Il2CppClass *)TypeInfo_UnityEngine_Vector3,&local_38);
      if (parameters != (System_Object_array *)0x0) {
        if (pIVar2 != (Il2CppObject *)0x0) {
          pIVar3 = il2cpp_vm_Object_IsInst(pIVar2,(((parameters->obj).klass)->_1).element_class);
          if (pIVar3 == (Il2CppObject *)0x0) {
            pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
          }
        }
        if ((int)parameters->max_length == 0) {
          ThrowIndexOutOfRangeException();
        }
        parameters->m_Items[0] = pIVar2;
        Il2CppCodeGenWriteBarrier(parameters->m_Items);
        Photon_Pun_PhotonView__RPC_56e5850
                  (__this_00,"LaughRPC",targetPlayer,parameters,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$Distract
// il2cpp: void Characters_BasicTitan__Distract (Characters_BasicTitan_o* __this, Characters_BaseCharacter_o* character, const MethodInfo* method);
// 0x5c31dd0

void Characters_BasicTitan__Distract
               (Characters_BasicTitan_o *__this,Characters_BaseCharacter_o *character,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *__this_00;
  Photon_Realtime_Player_o *targetPlayer;
  Photon_Pun_PhotonView_o *pPVar2;
  System_Object_array *parameters;
  Il2CppObject *pIVar3;
  Il2CppObject *pIVar4;
  int32_t local_2c;
  
  if (Il2CppMethodInitialized_075477c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"DistractRPC");
    Il2CppMethodInitialized_075477c9 = '\x01';
  }
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
     (__this_00 = (pUVar1->fields).PhotonView, __this_00 != (Photon_Pun_PhotonView_o *)0x0)) {
    targetPlayer = (__this_00->fields)._Owner_k__BackingField;
    parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
    if ((character != (Characters_BaseCharacter_o *)0x0) &&
       ((pUVar1 = (character->fields).Cache, pUVar1 != (Utility_BaseComponentCache_o *)0x0 &&
        (pPVar2 = (pUVar1->fields).PhotonView, pPVar2 != (Photon_Pun_PhotonView_o *)0x0)))) {
      local_2c = (pPVar2->fields).viewIdField;
      pIVar3 = il2cpp_vm_Object_Box(g_data_07556710,&local_2c);
      if (parameters != (System_Object_array *)0x0) {
        if (pIVar3 != (Il2CppObject *)0x0) {
          pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((parameters->obj).klass)->_1).element_class);
          if (pIVar4 == (Il2CppObject *)0x0) {
            pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
          }
        }
        if ((int)parameters->max_length == 0) {
          ThrowIndexOutOfRangeException();
        }
        parameters->m_Items[0] = pIVar3;
        Il2CppCodeGenWriteBarrier(parameters->m_Items);
        Photon_Pun_PhotonView__RPC_56e5850
                  (__this_00,"DistractRPC",targetPlayer,parameters,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$LaughRPC
// il2cpp: void Characters_BasicTitan__LaughRPC (Characters_BasicTitan_o* __this, UnityEngine_Vector3_o source, const MethodInfo* method);
// 0x5c31f10
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c32129: mulss xmm0, xmm3
// asm:   0x5c3212d: xorps xmm1, xmm1
// asm:   0x5c32130: ucomiss xmm0, xmm1
// asm:   0x5c32133: jb 0x5c321f8
// asm:   0x5c3214e: jmp 0x5c322a2

void Characters_BasicTitan__LaughRPC
               (Characters_BasicTitan_o *__this,UnityEngine_Vector3_o source,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Utility_BaseComponentCache_o *pUVar3;
  Photon_Pun_PhotonView_o *pPVar4;
  UnityEngine_Transform_o *pUVar5;
  double dVar6;
  UnityEngine_Vector3_StaticFields *pUVar7;
  Il2CppClass *klass;
  float fVar8;
  undefined4 extraout_XMM0_Db;
  float in_XMM0_Dc;
  undefined4 extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  float in_XMM0_Dd;
  undefined4 extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  float in_XMM1_Db;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  undefined1 auVar9 [16];
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  UnityEngine_Vector3_o UVar13;
  undefined1 auStack_68 [8];
  float fStack_60;
  float fStack_5c;
  UnityEngine_Vector3_Fields UStack_40;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  undefined1 auStack_28 [24];
  
  if (Il2CppMethodInitialized_075477ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Laugh");
    in_XMM1_Db = 0.0;
    in_XMM1_Dc = 0.0;
    in_XMM1_Dd = 0.0;
    Il2CppMethodInitialized_075477ca = '\x01';
  }
  if ((__this->fields).AI == false) {
    return;
  }
  pUVar3 = (__this->fields).Cache;
  if ((pUVar3 != (Utility_BaseComponentCache_o *)0x0) &&
     (pPVar4 = (pUVar3->fields).PhotonView, pPVar4 != (Photon_Pun_PhotonView_o *)0x0)) {
    if ((pPVar4->fields)._IsMine_k__BackingField == false) {
      return;
    }
    pUVar5 = (pUVar3->fields).Transform;
    if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
      UVar13 = UnityEngine_Transform__get_forward(pUVar5,(MethodInfo *)0x0);
      auStack_28._8_4_ = extraout_XMM0_Dc;
      auStack_28._0_8_ = UVar13.fields._0_8_;
      auStack_28._12_4_ = extraout_XMM0_Dd;
      pUVar3 = (__this->fields).Cache;
      if ((pUVar3 != (Utility_BaseComponentCache_o *)0x0) &&
         (pUVar5 = (pUVar3->fields).Transform, UStack_40.z = UVar13.fields.z, fStack_34 = in_XMM1_Db,
         fStack_30 = in_XMM1_Dc, fStack_2c = in_XMM1_Dd, pUVar5 != (UnityEngine_Transform_o *)0x0)) {
        UVar13 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
        if (Il2CppMethodInitialized_0753e72d == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_0753e72d = '\x01';
          UStack_40.x = 0.0;
          UStack_40.y = 0.0;
        }
        else {
          UStack_40.x = 0.0;
          UStack_40.y = 0.0;
        }
        UStack_40.x = 0.0;
        UStack_40.y = 0.0;
        if (Il2CppMethodInitialized_0753e729 == '\0') {
          UStack_40.x = 0.0;
          UStack_40.y = 0.0;
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
          Il2CppMethodInitialized_0753e729 = '\x01';
        }
        auStack_68._0_4_ = source.fields.x;
        auStack_68._4_4_ = source.fields.y;
        auStack_68._0_4_ = (float)auStack_68._0_4_ - UVar13.fields.x;
        auStack_68._4_4_ = (float)auStack_68._4_4_ - UVar13.fields.y;
        fVar10 = source.fields.z - UVar13.fields.z;
        fStack_60 = in_XMM0_Dc - extraout_XMM0_Dc_00;
        fStack_5c = in_XMM0_Dd - extraout_XMM0_Dd_00;
        if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
        }
        uVar11 = 0;
        fVar8 = fVar10 * fVar10 +
                (float)auStack_68._4_4_ * (float)auStack_68._4_4_ +
                (float)auStack_68._0_4_ * (float)auStack_68._0_4_;
        if (fVar8 < 0.0) {
          fVar8 = sqrtf(fVar8);
          uVar11 = extraout_XMM0_Db;
        }
        else {
          fVar8 = SQRT(fVar8);
        }
        if (fVar8 <= 1e-05) {
          pUVar7 = *(UnityEngine_Vector3_StaticFields **)((long)TypeInfo_UnityEngine_Vector3 + 0xb8);
          fVar10 = (pUVar7->zeroVector).fields.z;
        }
        else {
          fVar10 = fVar10 / fVar8;
          auVar9._4_4_ = fVar8;
          auVar9._0_4_ = fVar8;
          auVar9._8_4_ = uVar11;
          auVar9._12_4_ = uVar11;
          auVar9 = divps(_auStack_68,auVar9);
          UStack_40.x = auVar9._0_4_;
          UStack_40.y = auVar9._4_4_;
          pUVar7 = (UnityEngine_Vector3_StaticFields *)&UStack_40;
        }
        uVar1 = (pUVar7->zeroVector).fields.x;
        uVar2 = (pUVar7->zeroVector).fields.y;
        if (Il2CppMethodInitialized_075450a4 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
          Il2CppMethodInitialized_075450a4 = '\x01';
        }
        fVar8 = UStack_40.z * UStack_40.z +
                (float)auStack_28._4_4_ * (float)auStack_28._4_4_ +
                (float)auStack_28._0_4_ * (float)auStack_28._0_4_;
        fVar12 = fVar10 * fVar10 + (float)uVar2 * (float)uVar2 + (float)uVar1 * (float)uVar1;
        if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
        }
        if (fVar8 * fVar12 < 0.0) {
          fVar8 = sqrtf(fVar8 * fVar12);
          klass = (Il2CppClass *)TypeInfo_System_Math;
          fVar12 = UStack_40.z;
        }
        else {
          fVar8 = SQRT(fVar8 * fVar12);
          klass = (Il2CppClass *)TypeInfo_System_Math;
          fVar12 = UStack_40.z;
        }
        TypeInfo_System_Math = (System_Math_c *)klass;
        UStack_40.z = fVar12;
        if (1e-15 <= fVar8) {
          fVar8 = (fVar12 * fVar10 +
                  (float)auStack_28._4_4_ * (float)uVar2 + (float)auStack_28._0_4_ * (float)uVar1) / fVar8;
          fVar10 = 1.0;
          if (fVar8 <= 1.0) {
            fVar10 = fVar8;
          }
          UStack_40.z = (float)(~-(uint)(-1.0 <= fVar8) & 0xbf800000 | (uint)fVar10 & -(uint)(-1.0 <= fVar8));
          fVar10 = UStack_40.z;
          if ((klass->_2).cctor_finished_or_no_cctor == 0) {
            fStack_34 = 0.0;
            fStack_30 = 0.0;
            fStack_2c = 0.0;
            il2cpp_codegen_runtime_class_init(klass);
            fVar10 = UStack_40.z;
            fVar12 = UStack_40.z;
          }
          UStack_40.z = fVar12;
          dVar6 = acos((double)fVar10,(MethodInfo *)klass);
          if (80.0 <= (float)dVar6 * 57.29578) {
            return;
          }
        }
        (*(__this->klass->vtable)._80_Emote.methodPtr)
                  (__this,"Laugh",(__this->klass->vtable)._80_Emote.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$DistractRPC
// il2cpp: void Characters_BasicTitan__DistractRPC (Characters_BasicTitan_o* __this, int32_t viewId, const MethodInfo* method);
// 0x5c322e0

void Characters_BasicTitan__DistractRPC(Characters_BasicTitan_o *__this,int32_t viewId,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  Characters_BaseCharacter_o *enemy;
  Controllers_BaseTitanAIController_o *__this_00;
  
  if (Il2CppMethodInitialized_075477cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_BaseTitanAIController);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_075477cb = '\x01';
  }
  if ((__this->fields).AI == false) {
    return;
  }
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
     (pPVar2 = (pUVar1->fields).PhotonView, pPVar2 != (Photon_Pun_PhotonView_o *)0x0)) {
    if ((pPVar2->fields)._IsMine_k__BackingField == false) {
      return;
    }
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    enemy = Utility_Util__FindCharacterByViewId(viewId,(MethodInfo *)0x0);
    __this_00 = UnityEngine_Component__GetComponent_object_
                          ((UnityEngine_Component_o *)__this,
                           (MethodInfo_34B0830 *)
                           MethodInfo_UnityEngine_Component_GetComponent_BaseTitanAIController);
    if (__this_00 != (Controllers_BaseTitanAIController_o *)0x0) {
      Controllers_BaseTitanAIController__SetEnemy
                (__this_00,(Characters_ITargetable_o *)enemy,10.0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$UpdateDisableArm
// il2cpp: void Characters_BasicTitan__UpdateDisableArm (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x5c323a0

void Characters_BasicTitan__UpdateDisableArm(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  Characters_BasicTitanComponentCache_o *pCVar1;
  UnityEngine_ParticleSystem_o *pUVar2;
  bool bVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_2c;
  float local_28;
  
  if ((__this->fields).Dead != false) {
    return;
  }
  if (((__this->fields).LeftArmDisabled != false) || ((__this->fields).LeftHandDisabled != false)) {
    fVar7 = (__this->fields)._leftArmDisabledTimeLeft;
    fVar6 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar7 = fVar7 - fVar6;
    Characters_BasicTitan__UpdateDisabledLimb(__this,true,fVar7,method_00);
    (__this->fields)._leftArmDisabledTimeLeft = fVar7;
  }
  if (((__this->fields).RightArmDisabled != false) || ((__this->fields).RightHandDisabled != false)) {
    fVar7 = (__this->fields)._rightArmDisabledTimeLeft;
    fVar6 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar7 = fVar7 - fVar6;
    Characters_BasicTitan__UpdateDisabledLimb(__this,false,fVar7,method_01);
    (__this->fields)._rightArmDisabledTimeLeft = fVar7;
  }
  pCVar1 = (__this->fields).BasicCache;
  if ((pCVar1 == (Characters_BasicTitanComponentCache_o *)0x0) ||
     (pUVar2 = (pCVar1->fields).ForearmSmokeL, pUVar2 == (UnityEngine_ParticleSystem_o *)0x0)) {
label_05c32571:
    ThrowNullReferenceException();
  }
  method_02 = (MethodInfo *)0x0;
  bVar3 = UnityEngine_ParticleSystem__get_isEmitting(pUVar2,(MethodInfo *)0x0);
  local_2c = 0.3;
  local_28 = 1.0;
  if (!bVar3) {
    pCVar1 = (__this->fields).BasicCache;
    if ((pCVar1 == (Characters_BasicTitanComponentCache_o *)0x0) ||
       (pUVar2 = (pCVar1->fields).ForearmSmokeR, pUVar2 == (UnityEngine_ParticleSystem_o *)0x0))
    goto label_05c32571;
    method_02 = (MethodInfo *)0x0;
    bVar3 = UnityEngine_ParticleSystem__get_isEmitting(pUVar2,(MethodInfo *)0x0);
    if (!bVar3) {
      if ((__this->fields)._limbSteamSoundFade <= 0.0) {
        return;
      }
      local_28 = 0.0;
      local_2c = 0.5;
    }
  }
  fVar7 = (__this->fields)._limbSteamSoundFade;
  fVar6 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  fVar6 = fVar6 / local_2c;
  fVar8 = local_28 - fVar7;
  uVar4 = -(uint)(0.0 <= fVar8);
  uVar5 = -(uint)(fVar6 < ABS(fVar8));
  fVar7 = (float)(~uVar5 & (uint)local_28 |
                 (uint)((float)(~uVar4 & (uint)-fVar6 | uVar4 & (uint)fVar6) + fVar7) & uVar5);
  (__this->fields)._limbSteamSoundFade = fVar7;
  Characters_BasicTitan__SetSteamVolume(__this,fVar7,method_02);
  return;
}


// Characters.BasicTitan$$SetSteamVolume
// il2cpp: void Characters_BasicTitan__SetSteamVolume (Characters_BasicTitan_o* __this, float fade, const MethodInfo* method);
// 0x5c327c0

void Characters_BasicTitan__SetSteamVolume(Characters_BasicTitan_o *__this,float fade,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  UnityEngine_AudioSource_o *__this_01;
  float fVar2;
  
  if (Il2CppMethodInitialized_075477cc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_075477cc = '\x01';
  }
  pUVar1 = (__this->fields).Cache;
  if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
    fVar2 = (__this->fields)._steamSoundVolume;
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(pUVar1->fields).AudioSources;
    if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    }
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      __this_01 = System_Collections_Generic_Dictionary_object__object___get_Item
                            (__this_00,(Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->Steam,
                             (MethodInfo_4AAD450 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_get_Item);
      if (__this_01 != (UnityEngine_AudioSource_o *)0x0) {
        fVar2 = fVar2 * fade;
        UnityEngine_AudioSource__set_volume(__this_01,fVar2,(MethodInfo *)0x0);
        (*(__this->klass->vtable)._111_ToggleSoundLocal.methodPtr)
                  (__this,TypeInfo_Characters_TitanSounds->static_fields->Steam,0.0 < fVar2,
                   (__this->klass->vtable)._111_ToggleSoundLocal.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$UpdateDisabledLimb
// il2cpp: float Characters_BasicTitan__UpdateDisabledLimb (Characters_BasicTitan_o* __this, bool left, float timeLeft, const MethodInfo* method);
// 0x5c32580

float Characters_BasicTitan__UpdateDisabledLimb
                (Characters_BasicTitan_o *__this,bool left,float timeLeft,MethodInfo *method)

{
  Characters_BasicTitanComponentCache_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  Photon_Pun_PhotonView_o *__this_00;
  bool bVar3;
  UnityEngine_ParticleSystem_o **ppUVar4;
  System_Object_array *parameters;
  Il2CppObject *pIVar5;
  Il2CppObject *pIVar6;
  MethodInfo *extraout_RDX;
  MethodInfo *in_R8;
  bool bVar7;
  undefined1 local_31;
  float local_30;
  int32_t local_2c;
  
  local_30 = timeLeft;
  if (Il2CppMethodInitialized_075477cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_WardedWeakSpot);
    il2cpp_codegen_initialize_runtime_metadata(&"SetWardedRPC");
    Il2CppMethodInitialized_075477cd = '\x01';
    method = extraout_RDX;
  }
  Characters_BasicTitan__UpdateLimbParticles(__this,left,local_30,method);
  if (0.0 < local_30) {
    return local_30;
  }
  bVar3 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method);
  bVar7 = false;
  if ((bVar3) && (*(char *)((long)__this + (0x1ae - (ulong)left)) != '\0')) {
    bVar7 = (__this->fields).LastWardedWeakSpot == 2 - (uint)left;
  }
  Characters_BasicTitan__SetLimbDisabled(__this,left,false,false,in_R8);
  pCVar1 = (__this->fields).BasicCache;
  if (left) {
    if (pCVar1 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c327a0;
    ppUVar4 = &(pCVar1->fields).ForearmSmokeL;
  }
  else {
    if (pCVar1 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c327a0;
    ppUVar4 = &(pCVar1->fields).ForearmSmokeR;
  }
  if (*ppUVar4 != (UnityEngine_ParticleSystem_o *)0x0) {
    UnityEngine_ParticleSystem__Stop_69c2810(*ppUVar4,(MethodInfo *)0x0);
    if (!bVar7) {
      return local_30;
    }
    pUVar2 = (__this->fields).Cache;
    if (pUVar2 != (Utility_BaseComponentCache_o *)0x0) {
      __this_00 = (pUVar2->fields).PhotonView;
      parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
      local_31 = (__this->fields).isWarded;
      pIVar5 = il2cpp_vm_Object_Box(g_data_075566f0,&local_31);
      if (parameters != (System_Object_array *)0x0) {
        if ((pIVar5 != (Il2CppObject *)0x0) &&
           (pIVar6 = il2cpp_vm_Object_IsInst(pIVar5,(((parameters->obj).klass)->_1).element_class),
           pIVar6 == (Il2CppObject *)0x0)) {
label_05c327aa:
          pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
        }
        if ((int)parameters->max_length != 0) {
          parameters->m_Items[0] = pIVar5;
          Il2CppCodeGenWriteBarrier(parameters->m_Items);
          local_2c = (__this->fields).LastWardedWeakSpot;
          pIVar5 = il2cpp_vm_Object_Box((Il2CppClass *)TypeInfo_Characters_WardedWeakSpot,&local_2c);
          if ((pIVar5 != (Il2CppObject *)0x0) &&
             (pIVar6 = il2cpp_vm_Object_IsInst(pIVar5,(((parameters->obj).klass)->_1).element_class),
             pIVar6 == (Il2CppObject *)0x0)) goto label_05c327aa;
          if ((parameters->max_length & 0xfffffffe) != 0) {
            parameters->m_Items[1] = pIVar5;
            Il2CppCodeGenWriteBarrier(parameters->m_Items + 1);
            if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
              Photon_Pun_PhotonView__RPC(__this_00,"SetWardedRPC",0,parameters,(MethodInfo *)0x0);
              return local_30;
            }
            goto label_05c327a0;
          }
        }
        ThrowIndexOutOfRangeException();
      }
    }
  }
label_05c327a0:
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$UpdateLimbParticles
// il2cpp: void Characters_BasicTitan__UpdateLimbParticles (Characters_BasicTitan_o* __this, bool left, float timeLeft, const MethodInfo* method);
// 0x5c328d0

void Characters_BasicTitan__UpdateLimbParticles
               (Characters_BasicTitan_o *__this,bool left,float timeLeft,MethodInfo *method)

{
  Characters_BasicTitanComponentCache_o *pCVar1;
  UnityEngine_ParticleSystem_o *__this_00;
  UnityEngine_ParticleSystem_o *__this_01;
  bool bVar2;
  UnityEngine_ParticleSystem_o **ppUVar3;
  UnityEngine_ParticleSystem_o **ppUVar4;
  
  if (timeLeft <= (__this->fields).ArmDisableTime + -4.0) {
    pCVar1 = (__this->fields).BasicCache;
    if (left) {
      if (pCVar1 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c3298d;
      ppUVar4 = &(pCVar1->fields).ForearmBloodL;
      ppUVar3 = &(pCVar1->fields).ForearmSmokeL;
    }
    else {
      if (pCVar1 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c3298d;
      ppUVar4 = &(pCVar1->fields).ForearmBloodR;
      ppUVar3 = &(pCVar1->fields).ForearmSmokeR;
    }
    __this_00 = *ppUVar4;
    if (__this_00 == (UnityEngine_ParticleSystem_o *)0x0) {
label_05c3298d:
      ThrowNullReferenceException();
    }
    __this_01 = *ppUVar3;
    bVar2 = UnityEngine_ParticleSystem__IsAlive(__this_00,true,(MethodInfo *)0x0);
    if (bVar2) {
      UnityEngine_ParticleSystem__Stop(__this_00,true,1,(MethodInfo *)0x0);
      return;
    }
    if ((__this->fields).EffectsEnabled != false) {
      if (__this_01 == (UnityEngine_ParticleSystem_o *)0x0) goto label_05c3298d;
      bVar2 = UnityEngine_ParticleSystem__get_isPlaying(__this_01,(MethodInfo *)0x0);
      if (!bVar2) {
        UnityEngine_ParticleSystem__Play_69c2630(__this_01,(MethodInfo *)0x0);
        return;
      }
    }
  }
  return;
}


// Characters.BasicTitan$$Run
// il2cpp: void Characters_BasicTitan__Run (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x5c329a0

void Characters_BasicTitan__Run(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  System_String_o *animation;
  Characters_AnimationHandler_o *__this_00;
  Characters_BasicTitanComponentCache_o *pCVar1;
  Characters_BaseHitbox_o *pCVar2;
  bool bVar3;
  
  (__this->fields)._stepPhase = 0;
  animation = (__this->fields)._runAnimation;
  (__this->fields)._needFreshCore = true;
  __this_00 = (__this->fields).Animation;
  if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
    Characters_AnimationHandler__SetCullingType(__this_00,false,(MethodInfo *)0x0);
    (*(__this->klass->vtable)._173_Ungrab.methodPtr)(__this,(__this->klass->vtable)._173_Ungrab.method);
    (*(__this->klass->vtable)._189_DeactivateAllHitboxes.methodPtr)
              (__this,(__this->klass->vtable)._189_DeactivateAllHitboxes.method);
    Characters_BaseCharacter__CrossFade
              ((Characters_BaseCharacter_o *)__this,animation,0.5,0.0,(MethodInfo *)0x0);
    (__this->fields).State = 1;
    (__this->fields)._currentStateAnimation = animation;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._currentStateAnimation);
    (__this->fields)._stateTimeLeft = 0.0;
    if ((__this->fields).IsCrawler == false) {
      return;
    }
    pCVar1 = (__this->fields).BasicCache;
    if ((pCVar1 != (Characters_BasicTitanComponentCache_o *)0x0) &&
       (pCVar2 = (pCVar1->fields).MouthHitbox, pCVar2 != (Characters_BaseHitbox_o *)0x0)) {
      bVar3 = Characters_BaseHitbox__IsActive(pCVar2,(MethodInfo *)0x0);
      if (!bVar3) {
        pCVar1 = (__this->fields).BasicCache;
        if ((pCVar1 == (Characters_BasicTitanComponentCache_o *)0x0) ||
           (pCVar2 = (pCVar1->fields).MouthHitbox, pCVar2 == (Characters_BaseHitbox_o *)0x0))
        goto label_05c32b0d;
        (*(pCVar2->klass->vtable)._5_Activate.methodPtr)
                  (pCVar2,0.0,0.0,(pCVar2->klass->vtable)._5_Activate.method);
      }
      pCVar1 = (__this->fields).BasicCache;
      if ((pCVar1 != (Characters_BasicTitanComponentCache_o *)0x0) &&
         (pCVar2 = (pCVar1->fields).CrawlerHitbox, pCVar2 != (Characters_BaseHitbox_o *)0x0)) {
        bVar3 = Characters_BaseHitbox__IsActive(pCVar2,(MethodInfo *)0x0);
        if (bVar3) {
          return;
        }
        pCVar1 = (__this->fields).BasicCache;
        if ((pCVar1 != (Characters_BasicTitanComponentCache_o *)0x0) &&
           (pCVar2 = (pCVar1->fields).CrawlerHitbox, pCVar2 != (Characters_BaseHitbox_o *)0x0)) {
          (*(pCVar2->klass->vtable)._5_Activate.methodPtr)
                    (pCVar2,0.0,0.0,(pCVar2->klass->vtable)._5_Activate.method);
          return;
        }
      }
    }
  }
label_05c32b0d:
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$WallClimb
// il2cpp: void Characters_BasicTitan__WallClimb (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x5c32b20

void Characters_BasicTitan__WallClimb(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  Characters_BasicTitanAnimations_o *pCVar1;
  System_String_o *animation;
  Characters_AnimationHandler_o *__this_00;
  bool bVar2;
  
  bVar2 = (*(__this->klass->vtable)._122_get_CanWallClimb.methodPtr)
                    (__this,(__this->klass->vtable)._122_get_CanWallClimb.method);
  if ((bVar2) && ((__this->fields)._climbCooldownLeft <= 0.0)) {
    (__this->fields)._climbCooldownLeft = (__this->fields).ClimbCooldown;
    (__this->fields)._stepPhase = 0;
    pCVar1 = (__this->fields).BasicAnimations;
    if (pCVar1 != (Characters_BasicTitanAnimations_o *)0x0) {
      animation = (pCVar1->fields).RunCrawler;
      (__this->fields)._needFreshCore = true;
      __this_00 = (__this->fields).Animation;
      if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
        Characters_AnimationHandler__SetCullingType(__this_00,false,(MethodInfo *)0x0);
        (*(__this->klass->vtable)._173_Ungrab.methodPtr)(__this,(__this->klass->vtable)._173_Ungrab.method);
        (*(__this->klass->vtable)._189_DeactivateAllHitboxes.methodPtr)
                  (__this,(__this->klass->vtable)._189_DeactivateAllHitboxes.method);
        Characters_BaseCharacter__CrossFade
                  ((Characters_BaseCharacter_o *)__this,animation,0.1,0.0,(MethodInfo *)0x0);
        (__this->fields).State = 0x19;
        (__this->fields)._currentStateAnimation = animation;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._currentStateAnimation);
        (__this->fields)._stateTimeLeft = 0.0;
        return;
      }
    }
    ThrowNullReferenceException();
  }
  return;
}


// Characters.BasicTitan$$Jump
// il2cpp: void Characters_BasicTitan__Jump (Characters_BasicTitan_o* __this, UnityEngine_Vector3_o direction, const MethodInfo* method);
// 0x5c32c20

void Characters_BasicTitan__Jump
               (Characters_BasicTitan_o *__this,UnityEngine_Vector3_o direction,MethodInfo *method)

{
  Characters_BasicTitanAnimations_o *pCVar1;
  Characters_AnimationHandler_o *pCVar2;
  Characters_BaseTitanAnimations_o *pCVar3;
  System_String_o *pSVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_075477ce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_075477ce = '\x01';
  }
  (__this->fields)._jumpDirection.fields.x = direction.fields.x;
  (__this->fields)._jumpDirection.fields.y = direction.fields.y;
  (__this->fields)._jumpDirection.fields.z = direction.fields.z;
  if ((__this->fields).IsCrawler == false) {
    pCVar1 = (__this->fields).BasicAnimations;
    if (pCVar1 != (Characters_BasicTitanAnimations_o *)0x0) {
      pCVar2 = (__this->fields).Animation;
      pSVar4 = (*(pCVar1->klass->vtable)._8_get_Jump.methodPtr)
                         (pCVar1,(pCVar1->klass->vtable)._8_get_Jump.method);
      if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
        fVar5 = Characters_AnimationHandler__GetLength(pCVar2,pSVar4,(MethodInfo *)0x0);
        pCVar3 = (__this->fields).BaseTitanAnimations;
        if (pCVar3 != (Characters_BaseTitanAnimations_o *)0x0) {
          pSVar4 = (*(pCVar3->klass->vtable)._8_get_Jump.methodPtr)
                             (pCVar3,(pCVar3->klass->vtable)._8_get_Jump.method);
          (__this->fields)._needFreshCore = true;
          pCVar2 = (__this->fields).Animation;
          if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
            Characters_AnimationHandler__SetCullingType(pCVar2,false,(MethodInfo *)0x0);
            (*(__this->klass->vtable)._173_Ungrab.methodPtr)
                      (__this,(__this->klass->vtable)._173_Ungrab.method);
            (*(__this->klass->vtable)._189_DeactivateAllHitboxes.methodPtr)
                      (__this,(__this->klass->vtable)._189_DeactivateAllHitboxes.method);
            Characters_BaseCharacter__CrossFade
                      ((Characters_BaseCharacter_o *)__this,pSVar4,0.1,0.0,(MethodInfo *)0x0);
            (__this->fields).State = 4;
            (__this->fields)._currentStateAnimation = pSVar4;
            Il2CppCodeGenWriteBarrier(&(__this->fields)._currentStateAnimation);
            (__this->fields)._stateTimeLeft = fVar5 * 0.5;
            if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
            }
            Characters_BaseCharacter__PlaySound
                      ((Characters_BaseCharacter_o *)__this,
                       TypeInfo_Characters_TitanSounds->static_fields->TitanJump,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  else {
    pCVar1 = (__this->fields).BasicAnimations;
    if ((pCVar1 != (Characters_BasicTitanAnimations_o *)0x0) &&
       (pCVar2 = (__this->fields).Animation, pCVar2 != (Characters_AnimationHandler_o *)0x0)) {
      pSVar4 = (pCVar1->fields).JumpCrawler;
      fVar5 = Characters_AnimationHandler__GetLength(pCVar2,pSVar4,(MethodInfo *)0x0);
      (__this->fields)._needFreshCore = true;
      pCVar2 = (__this->fields).Animation;
      if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
        Characters_AnimationHandler__SetCullingType(pCVar2,false,(MethodInfo *)0x0);
        (*(__this->klass->vtable)._173_Ungrab.methodPtr)(__this,(__this->klass->vtable)._173_Ungrab.method);
        (*(__this->klass->vtable)._189_DeactivateAllHitboxes.methodPtr)
                  (__this,(__this->klass->vtable)._189_DeactivateAllHitboxes.method);
        Characters_BaseCharacter__CrossFade
                  ((Characters_BaseCharacter_o *)__this,pSVar4,0.1,0.0,(MethodInfo *)0x0);
        (__this->fields).State = 4;
        (__this->fields)._currentStateAnimation = pSVar4;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._currentStateAnimation);
        (__this->fields)._stateTimeLeft = fVar5;
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$StunDirectional
// il2cpp: void Characters_BasicTitan__StunDirectional (Characters_BasicTitan_o* __this, bool left, float time, bool refresh, const MethodInfo* method);
// 0x5c32e90
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c32efe: jmp 0x5c32f98

void Characters_BasicTitan__StunDirectional
               (Characters_BasicTitan_o *__this,bool left,float time,bool refresh,MethodInfo *method)

{
  Characters_BasicTitanAnimations_o *pCVar1;
  Characters_AnimationHandler_o *__this_00;
  bool bVar2;
  System_String_o *animation;
  
  bVar2 = (*(__this->klass->vtable)._147_CanStun.methodPtr)
                    (__this,(__this->klass->vtable)._147_CanStun.method);
  if ((bVar2) ||
     ((((refresh && ((__this->fields).State == 0xd)) && ((__this->fields).Dead == false)) &&
      ((__this->fields).EnableAI != false)))) {
    pCVar1 = (__this->fields).BasicAnimations;
    if (left) {
      if (pCVar1 == (Characters_BasicTitanAnimations_o *)0x0) goto label_05c32fa1;
      animation = (pCVar1->fields).StunLeft;
    }
    else {
      if (pCVar1 == (Characters_BasicTitanAnimations_o *)0x0) goto label_05c32fa1;
      animation = (pCVar1->fields).StunRight;
    }
    (__this->fields)._needFreshCore = true;
    __this_00 = (__this->fields).Animation;
    if (__this_00 == (Characters_AnimationHandler_o *)0x0) {
label_05c32fa1:
      ThrowNullReferenceException();
    }
    Characters_AnimationHandler__SetCullingType(__this_00,false,(MethodInfo *)0x0);
    (*(__this->klass->vtable)._173_Ungrab.methodPtr)(__this,(__this->klass->vtable)._173_Ungrab.method);
    (*(__this->klass->vtable)._189_DeactivateAllHitboxes.methodPtr)
              (__this,(__this->klass->vtable)._189_DeactivateAllHitboxes.method);
    Characters_BaseCharacter__CrossFade
              ((Characters_BaseCharacter_o *)__this,animation,0.1,0.0,(MethodInfo *)0x0);
    (__this->fields).State = 0xd;
    (__this->fields)._currentStateAnimation = animation;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._currentStateAnimation);
    (__this->fields)._stateTimeLeft = time;
  }
  return;
}


// Characters.BasicTitan$$StartJump
// il2cpp: void Characters_BasicTitan__StartJump (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x5c32fb0

void Characters_BasicTitan__StartJump(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  Characters_BasicTitanComponentCache_o *pCVar1;
  Characters_BaseHitbox_o *pCVar2;
  
  Characters_BaseTitan__StartJump((Characters_BaseTitan_o *)__this,method);
  pCVar1 = (__this->fields).BasicCache;
  if ((pCVar1 == (Characters_BasicTitanComponentCache_o *)0x0) ||
     (pCVar2 = (pCVar1->fields).MouthHitbox, pCVar2 == (Characters_BaseHitbox_o *)0x0)) {
    ThrowNullReferenceException();
  }
  (*(pCVar2->klass->vtable)._5_Activate.methodPtr)(pCVar2,0.0,0.0,(pCVar2->klass->vtable)._5_Activate.method);
  return;
}


// Characters.BasicTitan$$JumpImmediate
// il2cpp: void Characters_BasicTitan__JumpImmediate (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x5c32ff0

void Characters_BasicTitan__JumpImmediate(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  Characters_BasicTitanAnimations_o *pCVar1;
  System_String_o *animation;
  
  (*(__this->klass->vtable)._149_StartJump.methodPtr)(__this,(__this->klass->vtable)._149_StartJump.method);
  pCVar1 = (__this->fields).BasicAnimations;
  if (pCVar1 == (Characters_BasicTitanAnimations_o *)0x0) {
    ThrowNullReferenceException();
  }
  animation = (*(pCVar1->klass->vtable)._8_get_Jump.methodPtr)
                        (pCVar1,(pCVar1->klass->vtable)._8_get_Jump.method);
  Characters_BaseCharacter__CrossFade
            ((Characters_BaseCharacter_o *)__this,animation,0.1,0.85,(MethodInfo *)0x0);
  return;
}


// Characters.BasicTitan$$Eat
// il2cpp: void Characters_BasicTitan__Eat (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x5c33050

void Characters_BasicTitan__Eat(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  Characters_Human_o *x;
  Characters_BasicTitanAnimations_o *pCVar1;
  bool bVar2;
  Characters_AnimationHandler_o *pCVar3;
  System_String_o *name;
  float fVar4;
  
  if (Il2CppMethodInitialized_075477cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075477cf = '\x01';
  }
  x = (__this->fields).HoldHuman;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  pCVar1 = (__this->fields).BasicAnimations;
  if ((__this->fields).HoldHumanLeft == false) {
    if ((pCVar1 == (Characters_BasicTitanAnimations_o *)0x0) ||
       (pCVar3 = (__this->fields).Animation, pCVar3 == (Characters_AnimationHandler_o *)0x0))
    goto label_05c331b7;
    name = (pCVar1->fields).AttackEatR;
  }
  else {
    if ((pCVar1 == (Characters_BasicTitanAnimations_o *)0x0) ||
       (pCVar3 = (__this->fields).Animation, pCVar3 == (Characters_AnimationHandler_o *)0x0))
    goto label_05c331b7;
    name = (pCVar1->fields).AttackEatL;
  }
  fVar4 = Characters_AnimationHandler__GetLength(pCVar3,name,(MethodInfo *)0x0);
  (__this->fields)._needFreshCore = true;
  pCVar3 = (__this->fields).Animation;
  if (pCVar3 != (Characters_AnimationHandler_o *)0x0) {
    Characters_AnimationHandler__SetCullingType(pCVar3,false,(MethodInfo *)0x0);
    (*(__this->klass->vtable)._189_DeactivateAllHitboxes.methodPtr)
              (__this,(__this->klass->vtable)._189_DeactivateAllHitboxes.method);
    Characters_BaseCharacter__CrossFade((Characters_BaseCharacter_o *)__this,name,0.1,0.0,(MethodInfo *)0x0);
    (__this->fields).State = 0x17;
    (__this->fields)._currentStateAnimation = name;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._currentStateAnimation);
    (__this->fields)._stateTimeLeft = fVar4;
    (*(__this->klass->vtable)._197_GrabGrunt.methodPtr)
              (__this,1.0,(__this->klass->vtable)._197_GrabGrunt.method);
    return;
  }
label_05c331b7:
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$Land
// il2cpp: void Characters_BasicTitan__Land (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x5c331c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c33251: mov r14, rax

void Characters_BasicTitan__Land(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  float fVar1;
  Characters_BasicTitanAnimations_o *pCVar2;
  Characters_BaseTitanAnimations_o *pCVar3;
  Utility_BaseComponentCache_o *pUVar4;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_StaticFields *pUVar5;
  System_String_o *pSVar6;
  Characters_AnimationHandler_o *pCVar7;
  float fVar8;
  float fVar9;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 uVar10;
  undefined4 uVar11;
  UnityEngine_Quaternion_o UVar12;
  UnityEngine_Vector3_o UVar13;
  UnityEngine_Vector3_Fields UStack_78;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 auStack_28 [24];
  
  if (Il2CppMethodInitialized_075477d0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectSpawner);
    Il2CppMethodInitialized_075477d0 = '\x01';
  }
  if ((__this->fields).IsCrawler == false) {
    pCVar3 = (__this->fields).BaseTitanAnimations;
    if (pCVar3 == (Characters_BaseTitanAnimations_o *)0x0) goto label_05c33460;
    pSVar6 = (*(pCVar3->klass->vtable)._10_get_Land.methodPtr)
                       (pCVar3,(pCVar3->klass->vtable)._10_get_Land.method);
    pCVar7 = (__this->fields).Animation;
    if (pCVar7 == (Characters_AnimationHandler_o *)0x0) goto label_05c33460;
  }
  else {
    pCVar2 = (__this->fields).BasicAnimations;
    if ((pCVar2 == (Characters_BasicTitanAnimations_o *)0x0) ||
       (pCVar7 = (__this->fields).Animation, pCVar7 == (Characters_AnimationHandler_o *)0x0))
    goto label_05c33460;
    pSVar6 = (pCVar2->fields).LandCrawler;
  }
  fVar8 = Characters_AnimationHandler__GetLength(pCVar7,pSVar6,(MethodInfo *)0x0);
  (__this->fields)._needFreshCore = true;
  pCVar7 = (__this->fields).Animation;
  if (pCVar7 != (Characters_AnimationHandler_o *)0x0) {
    Characters_AnimationHandler__SetCullingType(pCVar7,false,(MethodInfo *)0x0);
    (*(__this->klass->vtable)._173_Ungrab.methodPtr)(__this,(__this->klass->vtable)._173_Ungrab.method);
    (*(__this->klass->vtable)._189_DeactivateAllHitboxes.methodPtr)
              (__this,(__this->klass->vtable)._189_DeactivateAllHitboxes.method);
    uVar10 = 0;
    uVar11 = 0;
    Characters_BaseCharacter__CrossFade((Characters_BaseCharacter_o *)__this,pSVar6,0.1,0.0,(MethodInfo *)0x0)
    ;
    (__this->fields).State = 9;
    (__this->fields)._currentStateAnimation = pSVar6;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._currentStateAnimation);
    (__this->fields)._stateTimeLeft = fVar8;
    if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
    }
    pUVar4 = (__this->fields).Cache;
    if ((pUVar4 != (Utility_BaseComponentCache_o *)0x0) &&
       (__this_00 = (pUVar4->fields).Transform, __this_00 != (UnityEngine_Transform_o *)0x0)) {
      pSVar6 = TypeInfo_Effects_EffectPrefabs->static_fields->Boom2;
      UVar13 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
      auStack_28._8_4_ = extraout_XMM0_Dc;
      auStack_28._0_8_ = UVar13.fields._0_8_;
      auStack_28._12_4_ = extraout_XMM0_Dd;
      if (Il2CppMethodInitialized_075450a5 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_075450a5 = '\x01';
      }
      pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
      uStack_38._0_4_ = (pUVar5->downVector).fields.x;
      uStack_38._4_4_ = (pUVar5->downVector).fields.y;
      uStack_30 = 0;
      fVar8 = (pUVar5->downVector).fields.z;
      auStack_68 = ZEXT416((uint)(__this->fields)._currentGroundDistance);
      UStack_78.x = 4.712389;
      UStack_78.y = 0.0;
      UStack_78.z = 0.0;
      UVar12 = UnityEngine_Quaternion__Internal_FromEulerRad
                         ((UnityEngine_Vector3_o *)&UStack_78,(MethodInfo *)0x0);
      auStack_48._8_4_ = extraout_XMM0_Dc_00;
      auStack_48._0_8_ = UVar12.fields._0_8_;
      auStack_48._12_4_ = extraout_XMM0_Dd_00;
      auStack_58._8_4_ = uVar10;
      auStack_58._0_8_ = UVar12.fields._8_8_;
      auStack_58._12_4_ = uVar11;
      fVar1 = (__this->fields).Size;
      fVar9 = (*(__this->klass->vtable)._134_get_SizeMultiplier.methodPtr)
                        (__this,(__this->klass->vtable)._134_get_SizeMultiplier.method);
      if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
      }
      UVar13.fields.z = UVar13.fields.z + fVar8 * (float)auStack_68._0_4_;
      UVar13.fields.x = (float)auStack_28._0_4_ + (float)uStack_38 * (float)auStack_68._0_4_;
      UVar13.fields.y = (float)auStack_28._4_4_ + uStack_38._4_4_ * (float)auStack_68._0_4_;
      UVar12.fields.z = (float)auStack_58._0_4_;
      UVar12.fields.w = (float)auStack_58._4_4_;
      UVar12.fields.x = (float)auStack_48._0_4_;
      UVar12.fields.y = (float)auStack_48._4_4_;
      Effects_EffectSpawner__Spawn
                (pSVar6,UVar13,UVar12,fVar1 * fVar9,true,(System_Object_array *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
label_05c33460:
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$Fall
// il2cpp: void Characters_BasicTitan__Fall (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x5c33470
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c334a7: jmp 0x5c3355b
// asm:   0x5c334df: mov r14, rax

void Characters_BasicTitan__Fall(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  Characters_BasicTitanAnimations_o *pCVar1;
  Characters_BaseTitanAnimations_o *pCVar2;
  System_String_o *animation;
  Characters_AnimationHandler_o *__this_00;
  
  if ((__this->fields).IsCrawler == false) {
    pCVar2 = (__this->fields).BaseTitanAnimations;
    if (pCVar2 != (Characters_BaseTitanAnimations_o *)0x0) {
      animation = (*(pCVar2->klass->vtable)._9_get_Fall.methodPtr)
                            (pCVar2,(pCVar2->klass->vtable)._9_get_Fall.method);
      (__this->fields)._needFreshCore = true;
      __this_00 = (__this->fields).Animation;
      if (__this_00 != (Characters_AnimationHandler_o *)0x0) goto label_05c334e2;
    }
  }
  else {
    pCVar1 = (__this->fields).BasicAnimations;
    if (pCVar1 != (Characters_BasicTitanAnimations_o *)0x0) {
      animation = (pCVar1->fields).FallCrawler;
      (__this->fields)._needFreshCore = true;
      __this_00 = (__this->fields).Animation;
      if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
label_05c334e2:
        Characters_AnimationHandler__SetCullingType(__this_00,false,(MethodInfo *)0x0);
        (*(__this->klass->vtable)._173_Ungrab.methodPtr)(__this,(__this->klass->vtable)._173_Ungrab.method);
        (*(__this->klass->vtable)._189_DeactivateAllHitboxes.methodPtr)
                  (__this,(__this->klass->vtable)._189_DeactivateAllHitboxes.method);
        Characters_BaseCharacter__CrossFade
                  ((Characters_BaseCharacter_o *)__this,animation,0.1,0.0,(MethodInfo *)0x0);
        (__this->fields).State = 7;
        (__this->fields)._currentStateAnimation = animation;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._currentStateAnimation);
        (__this->fields)._stateTimeLeft = 0.0;
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$Idle
// il2cpp: void Characters_BasicTitan__Idle (Characters_BasicTitan_o* __this, float fadeTime, const MethodInfo* method);
// 0x5c33560

void Characters_BasicTitan__Idle(Characters_BasicTitan_o *__this,float fadeTime,MethodInfo *method)

{
  Characters_BasicTitanAnimations_o *pCVar1;
  System_String_o *animation;
  MethodInfo *in_R8;
  
  pCVar1 = (__this->fields).BasicAnimations;
  if ((__this->fields).IsCrawler == false) {
    if (pCVar1 == (Characters_BasicTitanAnimations_o *)0x0) goto label_05c335c4;
    animation = (*(pCVar1->klass->vtable)._4_get_Idle.methodPtr)
                          (pCVar1,(pCVar1->klass->vtable)._4_get_Idle.method);
  }
  else {
    if (pCVar1 == (Characters_BasicTitanAnimations_o *)0x0) {
label_05c335c4:
      ThrowNullReferenceException();
    }
    animation = (pCVar1->fields).IdleCrawler;
  }
  Characters_BaseTitan__StateActionWithTime
            ((Characters_BaseTitan_o *)__this,0,animation,0.0,fadeTime,true,0.0,in_R8);
  return;
}


// Characters.BasicTitan$$Turn
// il2cpp: void Characters_BasicTitan__Turn (Characters_BasicTitan_o* __this, UnityEngine_Vector3_o targetDirection, const MethodInfo* method);
// 0x5c335d0

void Characters_BasicTitan__Turn
               (Characters_BasicTitan_o *__this,UnityEngine_Vector3_o targetDirection,MethodInfo *method)

{
  Characters_BasicTitanAnimations_o *pCVar1;
  Characters_BaseTitanAnimations_o *pCVar2;
  Characters_AnimationHandler_o *pCVar3;
  Utility_BaseComponentCache_o *pUVar4;
  UnityEngine_Transform_o *__this_00;
  VirtualInvokeData_bccba1ebf973 *pVVar5;
  bool bVar6;
  System_String_o **ppSVar7;
  System_String_o *pSVar8;
  VirtualInvokeData_bccba1ebf973 *pVVar9;
  MethodInfo *method_00;
  MethodInfo *in_R8;
  float fVar10;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined1 auVar11 [12];
  float fVar12;
  UnityEngine_Vector3_o targetDirection_00;
  UnityEngine_Vector3_o UVar13;
  UnityEngine_Quaternion_Fields UVar14;
  UnityEngine_Vector3_o UStack_48;
  undefined1 auStack_38 [16];
  float fStack_28;
  
  UVar13.fields.z = targetDirection.fields.z;
  auStack_38._8_4_ = in_XMM0_Dc;
  auStack_38._0_8_ = targetDirection.fields._0_8_;
  auStack_38._12_4_ = in_XMM0_Dd;
  if (Il2CppMethodInitialized_075477d1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitan);
    Il2CppMethodInitialized_075477d1 = '\x01';
  }
  bVar6 = (*(__this->klass->vtable)._145_CanAction.methodPtr)
                    (__this,(__this->klass->vtable)._145_CanAction.method);
  if (!bVar6) {
    return;
  }
  UVar13.fields.x = (float)auStack_38._0_4_;
  UVar13.fields.y = (float)auStack_38._4_4_;
  fVar10 = Characters_BaseCharacter__GetAngleToTarget
                     ((Characters_BaseCharacter_o *)__this,UVar13,(MethodInfo *)0x0);
  if ((__this->fields).IsCrawler == false) {
    pCVar2 = (__this->fields).BaseTitanAnimations;
    fStack_28 = fVar10;
    if (fVar10 <= 0.0) {
      if (pCVar2 == (Characters_BaseTitanAnimations_o *)0x0) goto label_05c3387a;
      pVVar9 = &(pCVar2->klass->vtable)._19_get_Turn90L;
      pVVar5 = &(pCVar2->klass->vtable)._19_get_Turn90L;
    }
    else {
      if (pCVar2 == (Characters_BaseTitanAnimations_o *)0x0) goto label_05c3387a;
      pVVar9 = &(pCVar2->klass->vtable)._20_get_Turn90R;
      pVVar5 = &(pCVar2->klass->vtable)._20_get_Turn90R;
    }
    pSVar8 = (*pVVar9->methodPtr)(pCVar2,pVVar5->method);
    fVar10 = 120.0;
    if (fStack_28 <= 120.0) {
      fVar10 = fStack_28;
    }
    (__this->fields)._turnDegrees =
         (float)(~-(uint)(-120.0 <= fStack_28) & 0xc2f00000 | (uint)fVar10 & -(uint)(-120.0 <= fStack_28));
    pUVar4 = (__this->fields).Cache;
    if ((pUVar4 != (Utility_BaseComponentCache_o *)0x0) &&
       (__this_00 = (pUVar4->fields).Transform, __this_00 != (UnityEngine_Transform_o *)0x0)) {
      UVar13 = UnityEngine_Transform__get_eulerAngles(__this_00,(MethodInfo *)0x0);
      UStack_48.fields.x = 0.0;
      UStack_48.fields.y = (UVar13.fields.y + (__this->fields)._turnDegrees) * 0.017453292;
      UStack_48.fields.z = 0.0;
      UVar14 = (UnityEngine_Quaternion_Fields)
               UnityEngine_Quaternion__Internal_FromEulerRad(&UStack_48,(MethodInfo *)0x0);
      (__this->fields)._turnTargetRotation.fields = UVar14;
      fVar10 = (__this->fields).TurnSpeed;
      if ((__this->fields).SizeScaledTurnSpeed != false) {
        fVar12 = (__this->fields).Size;
        if ((TypeInfo_Characters_BasicTitan->_2).cctor_finished_or_no_cctor == 0) {
          auStack_38 = ZEXT416((uint)fVar12);
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitan);
          fVar12 = auStack_38._0_4_;
        }
        fVar12 = (fVar12 + -0.7) * -0.15 + 1.4;
        auVar11 = ZEXT812(0x3fc00000);
        if (fVar12 <= auVar11._0_4_) {
          auVar11._4_8_ = auVar11._4_8_;
          auVar11._0_4_ = fVar12;
        }
        fVar10 = fVar10 * (float)(~-(uint)(0.9 <= fVar12) & 0x3f666666 |
                                 auVar11._0_4_ & -(uint)(0.9 <= fVar12));
      }
      if (fVar10 <= 0.0) {
        pCVar3 = (__this->fields).Animation;
        if (pCVar3 == (Characters_AnimationHandler_o *)0x0) goto label_05c3387a;
        fVar10 = Characters_AnimationHandler__GetSpeed(pCVar3,pSVar8,(MethodInfo *)0x0);
      }
      pCVar3 = (__this->fields).Animation;
      if (pCVar3 != (Characters_AnimationHandler_o *)0x0) {
        fVar12 = Characters_AnimationHandler__GetLength(pCVar3,pSVar8,(MethodInfo *)0x0);
        Characters_BaseTitan__StateActionWithTime
                  ((Characters_BaseTitan_o *)__this,0x18,pSVar8,fVar12 / fVar10,0.0,true,fVar10,in_R8);
        return;
      }
    }
  }
  else {
    pCVar1 = (__this->fields).BasicAnimations;
    if (fVar10 <= 0.0) {
      if (pCVar1 == (Characters_BasicTitanAnimations_o *)0x0) goto label_05c3387a;
      ppSVar7 = &(pCVar1->fields).Turn90LCrawler;
    }
    else {
      if (pCVar1 == (Characters_BasicTitanAnimations_o *)0x0) goto label_05c3387a;
      ppSVar7 = &(pCVar1->fields).Turn90RCrawler;
    }
    pCVar3 = (__this->fields).Animation;
    if (pCVar3 != (Characters_AnimationHandler_o *)0x0) {
      pSVar8 = *ppSVar7;
      fVar10 = Characters_AnimationHandler__GetTotalTime(pCVar3,pSVar8,(MethodInfo *)0x0);
      targetDirection_00.fields.z = UVar13.fields.z;
      targetDirection_00.fields.x = (float)auStack_38._0_4_;
      targetDirection_00.fields.y = (float)auStack_38._4_4_;
      Characters_BaseTitan__StartTurn
                ((Characters_BaseTitan_o *)__this,targetDirection_00,pSVar8,fVar10 * 0.71,method_00);
      return;
    }
  }
label_05c3387a:
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$UpdateTurn
// il2cpp: void Characters_BasicTitan__UpdateTurn (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x5c33880
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c3391d: jmp 0x5c339b8

void Characters_BasicTitan__UpdateTurn(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  UnityEngine_Transform_o *__this_00;
  float fVar4;
  float fVar5;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Quaternion_o UVar6;
  UnityEngine_Quaternion_Fields UStack_58;
  UnityEngine_Quaternion_Fields UStack_48;
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [16];
  
  if ((__this->fields).IsCrawler == false) {
    pUVar1 = (__this->fields).Cache;
    if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
       (__this_00 = (pUVar1->fields).Transform, __this_00 != (UnityEngine_Transform_o *)0x0)) {
      UVar6 = UnityEngine_Transform__get_rotation(__this_00,(MethodInfo *)0x0);
      auStack_28._8_4_ = extraout_XMM0_Dc;
      auStack_28._0_8_ = UVar6.fields._0_8_;
      auStack_28._12_4_ = extraout_XMM0_Dd;
      auStack_38._8_4_ = in_XMM1_Dc;
      auStack_38._0_8_ = UVar6.fields._8_8_;
      auStack_38._12_4_ = in_XMM1_Dd;
      uVar2._0_4_ = (__this->fields)._turnTargetRotation.fields.x;
      uVar2._4_4_ = (__this->fields)._turnTargetRotation.fields.y;
      uVar3._0_4_ = (__this->fields)._turnTargetRotation.fields.z;
      uVar3._4_4_ = (__this->fields)._turnTargetRotation.fields.w;
      fVar5 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      UStack_48._0_8_ = auStack_28._0_8_;
      UStack_48._8_8_ = auStack_38._0_8_;
      UStack_58._0_8_ = uVar2;
      UStack_58._8_8_ = uVar3;
      UVar6 = UnityEngine_Quaternion__Internal_Lerp
                        ((UnityEngine_Quaternion_o *)&UStack_48,(UnityEngine_Quaternion_o *)&UStack_58,
                         fVar5 * ABS((__this->fields)._turnDegrees) * 0.015,(MethodInfo *)0x0);
      UVar6.fields.z = UVar6.fields.z;
      UVar6.fields.w = UVar6.fields.w;
      fVar5 = UVar6.fields.x;
      fVar4 = UVar6.fields.y;
label_05c339a6:
      UVar6.fields.y = fVar4;
      UVar6.fields.x = fVar5;
      UVar6.fields.w = UVar6.fields.w;
      UVar6.fields.z = UVar6.fields.z;
      UnityEngine_Transform__set_rotation(__this_00,UVar6,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    fVar5 = (__this->fields)._currentTurnTime;
    fVar4 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar4 = fVar4 + fVar5;
    (__this->fields)._currentTurnTime = fVar4;
    pUVar1 = (__this->fields).Cache;
    if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
      __this_00 = (pUVar1->fields).Transform;
      UStack_48.x = (__this->fields)._turnStartRotation.fields.x;
      UStack_48.y = (__this->fields)._turnStartRotation.fields.y;
      UStack_48.z = (__this->fields)._turnStartRotation.fields.z;
      UStack_48.w = (__this->fields)._turnStartRotation.fields.w;
      fVar4 = fVar4 / (__this->fields)._maxTurnTime;
      UStack_58.x = (__this->fields)._turnTargetRotation.fields.x;
      UStack_58.y = (__this->fields)._turnTargetRotation.fields.y;
      UStack_58.z = (__this->fields)._turnTargetRotation.fields.z;
      UStack_58.w = (__this->fields)._turnTargetRotation.fields.w;
      fVar5 = 1.0;
      if (fVar4 <= 1.0) {
        fVar5 = fVar4;
      }
      UVar6 = UnityEngine_Quaternion__Internal_Slerp
                        ((UnityEngine_Quaternion_o *)&UStack_48,(UnityEngine_Quaternion_o *)&UStack_58,
                         (float)(-(uint)(0.0 <= fVar4) & (uint)fVar5),(MethodInfo *)0x0);
      UVar6.fields.z = UVar6.fields.z;
      UVar6.fields.w = UVar6.fields.w;
      fVar5 = UVar6.fields.x;
      fVar4 = UVar6.fields.y;
      if (__this_00 != (UnityEngine_Transform_o *)0x0) goto label_05c339a6;
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$MarkDeadRPC
// il2cpp: void Characters_BasicTitan__MarkDeadRPC (Characters_BasicTitan_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5c339c0

void Characters_BasicTitan__MarkDeadRPC
               (Characters_BasicTitan_o *__this,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Characters_AnimationHandler_o *__this_01;
  Settings_GraphicsSettings_o *pSVar3;
  Settings_BoolSetting_o *pSVar4;
  Characters_BasicTitanComponentCache_o *pCVar5;
  UnityEngine_ParticleSystem_o *__this_02;
  UnityEngine_AudioSource_o *__this_03;
  float fVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  
  if (Il2CppMethodInitialized_075477d2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_075477d2 = '\x01';
  }
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
     (pPVar2 = (pUVar1->fields).PhotonView, pPVar2 != (Photon_Pun_PhotonView_o *)0x0)) {
    if (info.fields.Sender != (pPVar2->fields)._Owner_k__BackingField) {
      return;
    }
    if ((__this->fields).Dead != false) {
      return;
    }
    (__this->fields).Dead = true;
    fVar6 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    dVar7 = Photon_Pun_PhotonNetwork__get_Time((MethodInfo *)0x0);
    dVar8 = Photon_Pun_PhotonMessageInfo__get_SentServerTime(&info,(MethodInfo *)0x0);
    fVar9 = 0.0;
    if (0.0 <= (float)(dVar7 - dVar8)) {
      fVar9 = (float)(dVar7 - dVar8);
    }
    (__this->fields)._deathVisualStartTime = fVar6 - fVar9;
    pUVar1 = (__this->fields).Cache;
    if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
      __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(pUVar1->fields).AudioSources;
      if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
      }
      if ((__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
         (__this_03 = System_Collections_Generic_Dictionary_object__object___get_Item
                                (__this_00,
                                 (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->DeathFall,
                                 (MethodInfo_4AAD450 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_get_Item)
         , __this_03 != (UnityEngine_AudioSource_o *)0x0)) {
        fVar6 = UnityEngine_AudioSource__get_volume(__this_03,(MethodInfo *)0x0);
        (__this->fields)._deathFallSoundVolume = fVar6;
        __this_01 = (__this->fields).Animation;
        if (__this_01 != (Characters_AnimationHandler_o *)0x0) {
          Characters_AnimationHandler__SetCullingType(__this_01,true,(MethodInfo *)0x0);
          if ((__this->fields).EffectsEnabled != false) {
            pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->GraphicsSettings;
            if ((pSVar3 == (Settings_GraphicsSettings_o *)0x0) ||
               (pSVar4 = (pSVar3->fields).NapeBloodEnabled, pSVar4 == (Settings_BoolSetting_o *)0x0))
            goto label_05c33bb4;
            if ((pSVar4->fields)._value != false) {
              pCVar5 = (__this->fields).BasicCache;
              if ((pCVar5 == (Characters_BasicTitanComponentCache_o *)0x0) ||
                 (__this_02 = (pCVar5->fields).NapeBlood, __this_02 == (UnityEngine_ParticleSystem_o *)0x0))
              goto label_05c33bb4;
              UnityEngine_ParticleSystem__Play(__this_02,true,(MethodInfo *)0x0);
            }
          }
          return;
        }
      }
    }
  }
label_05c33bb4:
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$TakeDamage
// il2cpp: void Characters_BasicTitan__TakeDamage (Characters_BasicTitan_o* __this, int32_t damage, const MethodInfo* method);
// 0x5c33bc0

void Characters_BasicTitan__TakeDamage(Characters_BasicTitan_o *__this,int32_t damage,MethodInfo *method)

{
  Settings_InGameSet_o *pSVar1;
  Settings_InGameTitanSettings_o *pSVar2;
  Settings_BoolSetting_o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  
  if (Il2CppMethodInitialized_075477d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_075477d3 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (pSVar1 == (Settings_InGameSet_o *)0x0) {
label_05c33c72:
    ThrowNullReferenceException();
  }
  if (((0 < damage) && ((__this->fields).Dead == false)) && ((__this->fields).CurrentHealth <= damage)) {
    pSVar2 = (pSVar1->fields).Titan;
    if ((pSVar2 == (Settings_InGameTitanSettings_o *)0x0) ||
       (pSVar3 = (pSVar2->fields).TitanDecapitationEnabled, pSVar3 == (Settings_BoolSetting_o *)0x0))
    goto label_05c33c72;
    if ((pSVar3->fields)._value != false) {
      pSVar4 = (pSVar2->fields).TitanDecapitationMinDamage;
      if (pSVar4 == (Settings_IntSetting_o *)0x0) goto label_05c33c72;
      if ((pSVar4->fields)._value <= damage) {
        (__this->fields)._decapitated = true;
      }
    }
  }
  Characters_BaseCharacter__TakeDamage((Characters_BaseCharacter_o *)__this,damage,(MethodInfo *)0x0);
  return;
}


// Characters.BasicTitan$$Die
// il2cpp: void Characters_BasicTitan__Die (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x5c33c80

void Characters_BasicTitan__Die(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  if ((__this->fields).Dead == false) {
    Characters_BaseCharacter__Die((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Characters.BasicTitan$$WaitAndDie
// il2cpp: System_Collections_IEnumerator_o* Characters_BasicTitan__WaitAndDie (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x5c33c90

System_Collections_IEnumerator_o *
Characters_BasicTitan__WaitAndDie(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  Characters_BasicTitan__WaitAndDie_d__141_o *__this_00;
  
  if (Il2CppMethodInitialized_075477d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitan_WaitAndDie_d__141);
    Il2CppMethodInitialized_075477d4 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_BasicTitan_WaitAndDie_d__141);
  Characters_BasicTitan__WaitAndDie_d__141___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 == (Characters_BasicTitan__WaitAndDie_d__141_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Characters.BasicTitan$$StartDeathAnimation
// il2cpp: void Characters_BasicTitan__StartDeathAnimation (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x5c33d00

void Characters_BasicTitan__StartDeathAnimation(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  float fVar1;
  Characters_BasicTitanAnimations_o *pCVar2;
  Characters_AnimationHandler_o *__this_00;
  Utility_BaseComponentCache_o *pUVar3;
  Photon_Pun_PhotonView_o *__this_01;
  UnityEngine_Vector3_o *pUVar4;
  System_Nullable_Vector3__o *pSVar5;
  bool bVar6;
  UnityEngine_Vector3_o *pUVar7;
  System_String_o **ppSVar8;
  System_Object_array *parameters;
  Il2CppObject *pIVar9;
  Il2CppObject *pIVar10;
  int iVar11;
  MethodInfo *pMVar12;
  float time;
  UnityEngine_Vector3_o UVar13;
  undefined8 local_48;
  float local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  if (Il2CppMethodInitialized_075477d5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    il2cpp_codegen_initialize_runtime_metadata(&"PlayNapeChunkRPC");
    Il2CppMethodInitialized_075477d5 = '\x01';
  }
  pMVar12 = (MethodInfo *)(__this->fields)._pendingDeathAnimation;
  if (pMVar12 == (MethodInfo *)0x0) {
    return;
  }
  (__this->fields)._pendingDeathAnimation = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._pendingDeathAnimation);
  iVar11 = (__this->fields).DeathType;
  if (iVar11 == 0) {
    iVar11 = (__this->fields)._pendingDeathType;
    pUVar7 = &(__this->fields)._finisherDeathVelocity;
    pUVar4 = &(__this->fields)._finisherDeathVelocity;
  }
  else {
    pUVar7 = &(__this->fields).DeathVelocity;
    pUVar4 = &(__this->fields).DeathVelocity;
  }
  fVar1 = (pUVar4->fields).z;
  local_38._0_4_ = (pUVar7->fields).x;
  local_38._4_4_ = (pUVar7->fields).y;
  uStack_30 = 0;
  (__this->fields)._launched = iVar11 == 3;
  (__this->fields)._decapitated = iVar11 == 2;
  pCVar2 = (__this->fields).BasicAnimations;
  if (pCVar2 == (Characters_BasicTitanAnimations_o *)0x0) goto label_05c34008;
  bVar6 = System_String__op_Equality((System_String_o *)pMVar12,(pCVar2->fields).DieFront,(MethodInfo *)0x0);
  if (bVar6) {
label_05c33e1d:
    if ((__this->fields)._launched == false) {
      if ((__this->fields)._decapitated == false) goto label_05c33e5c;
      pCVar2 = (__this->fields).BasicAnimations;
      if (pCVar2 == (Characters_BasicTitanAnimations_o *)0x0) goto label_05c34008;
      ppSVar8 = &(pCVar2->fields).DieHeadOff;
    }
    else {
      pCVar2 = (__this->fields).BasicAnimations;
      if (pCVar2 == (Characters_BasicTitanAnimations_o *)0x0) goto label_05c34008;
      ppSVar8 = &(pCVar2->fields).DieBlow;
    }
    pMVar12 = (MethodInfo *)*ppSVar8;
  }
  else {
    pCVar2 = (__this->fields).BasicAnimations;
    if (pCVar2 == (Characters_BasicTitanAnimations_o *)0x0) goto label_05c34008;
    bVar6 = System_String__op_Equality((System_String_o *)pMVar12,(pCVar2->fields).DieBack,(MethodInfo *)0x0);
    if (bVar6) goto label_05c33e1d;
  }
label_05c33e5c:
  (__this->fields)._needFreshCore = true;
  __this_00 = (__this->fields).Animation;
  if (__this_00 == (Characters_AnimationHandler_o *)0x0) {
label_05c34008:
    ThrowNullReferenceException();
  }
  Characters_AnimationHandler__SetCullingType(__this_00,true,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._173_Ungrab.methodPtr)(__this,(__this->klass->vtable)._173_Ungrab.method);
  (*(__this->klass->vtable)._189_DeactivateAllHitboxes.methodPtr)
            (__this,(__this->klass->vtable)._189_DeactivateAllHitboxes.method);
  Characters_BaseCharacter__CrossFade
            ((Characters_BaseCharacter_o *)__this,(System_String_o *)pMVar12,0.05,0.0,(MethodInfo *)0x0);
  (__this->fields).State = 0xf;
  (__this->fields)._currentStateAnimation = (System_String_o *)pMVar12;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._currentStateAnimation);
  (__this->fields)._stateTimeLeft = 0.0;
  if (iVar11 == 2) {
    Characters_BasicTitan__DetachHead(__this,pMVar12);
  }
  else {
    if (iVar11 == 3) {
      pMVar12 = (__this->klass->vtable)._127_get_LaunchTime.method;
      time = (*(__this->klass->vtable)._127_get_LaunchTime.methodPtr)(__this,pMVar12);
      UVar13.fields.z = fVar1;
      UVar13.fields.x = (float)(undefined4)local_38;
      UVar13.fields.y = (float)local_38._4_4_;
      Characters_BaseTitan__SetLaunchVelocity((Characters_BaseTitan_o *)__this,UVar13,time,pMVar12);
    }
    if ((__this->fields)._napeChunkVelocity.fields.hasValue != false) {
      pUVar3 = (__this->fields).Cache;
      if (pUVar3 != (Utility_BaseComponentCache_o *)0x0) {
        __this_01 = (pUVar3->fields).PhotonView;
        parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
        UVar13 = System_Nullable_Vector3___get_Value
                           (&(__this->fields)._napeChunkVelocity,
                            (MethodInfo_3CDCAC0 *)MethodInfo_System_Nullable_Vector3_get_Value);
        local_40 = UVar13.fields.z;
        local_48 = UVar13.fields._0_8_;
        pIVar9 = il2cpp_vm_Object_Box((Il2CppClass *)TypeInfo_UnityEngine_Vector3,&local_48);
        if (parameters != (System_Object_array *)0x0) {
          if ((pIVar9 != (Il2CppObject *)0x0) &&
             (pIVar10 = il2cpp_vm_Object_IsInst(pIVar9,(((parameters->obj).klass)->_1).element_class),
             pIVar10 == (Il2CppObject *)0x0)) {
            pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
          }
          if ((int)parameters->max_length == 0) {
            ThrowIndexOutOfRangeException();
          }
          parameters->m_Items[0] = pIVar9;
          Il2CppCodeGenWriteBarrier(parameters->m_Items);
          if (__this_01 != (Photon_Pun_PhotonView_o *)0x0) {
            Photon_Pun_PhotonView__RPC(__this_01,"PlayNapeChunkRPC",0,parameters,(MethodInfo *)0x0);
            goto label_05c33ff1;
          }
        }
      }
      goto label_05c34008;
    }
  }
label_05c33ff1:
  (__this->fields)._napeChunkVelocity.fields.hasValue = false;
  *(undefined3 *)&(__this->fields)._napeChunkVelocity.fields.field_0x1 = 0;
  (__this->fields)._napeChunkVelocity.fields.value.fields.x = 0.0;
  pSVar5 = &(__this->fields)._napeChunkVelocity;
  (pSVar5->fields).value.fields.y = 0.0;
  (pSVar5->fields).value.fields.z = 0.0;
  return;
}


// Characters.BasicTitan$$Awake
// il2cpp: void Characters_BasicTitan__Awake (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x5c34190

void Characters_BasicTitan__Awake(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  Characters_BasicTitanAnimations_o *pCVar1;
  Characters_AnimationHandler_o *__this_00;
  UnityEngine_GameObject_o *pUVar2;
  Characters_BasicTitanSetup_o *pCVar3;
  CustomSkins_TitanCustomSkinLoader_o *pCVar4;
  System_String_o *name;
  
  if (Il2CppMethodInitialized_075477d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_BasicTitanSetup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_TitanCustomSkinLoader);
    Il2CppMethodInitialized_075477d6 = '\x01';
  }
  Characters_BaseTitan__Awake((Characters_BaseTitan_o *)__this,method);
  pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
    pCVar3 = UnityEngine_GameObject__AddComponent_object_
                       (pUVar2,(MethodInfo_353B6A0 *)
                               MethodInfo_UnityEngine_GameObject_AddComponent_BasicTitanSetup);
    (__this->fields).Setup = pCVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Setup);
    pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
      pCVar4 = UnityEngine_GameObject__AddComponent_object_
                         (pUVar2,(MethodInfo_353B6A0 *)
                                 MethodInfo_UnityEngine_GameObject_AddComponent_TitanCustomSkinLoader);
      (__this->fields)._customSkinLoader = pCVar4;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._customSkinLoader);
      pCVar1 = (__this->fields).BasicAnimations;
      if (pCVar1 != (Characters_BasicTitanAnimations_o *)0x0) {
        __this_00 = (__this->fields).Animation;
        name = (*(pCVar1->klass->vtable)._8_get_Jump.methodPtr)
                         (pCVar1,(pCVar1->klass->vtable)._8_get_Jump.method);
        if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
          Characters_AnimationHandler__SetSpeed(__this_00,name,2.0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$GetHitRPC
// il2cpp: void Characters_BasicTitan__GetHitRPC (Characters_BasicTitan_o* __this, int32_t viewId, System_String_o* name, int32_t damage, System_String_o* type, System_String_o* collider, const MethodInfo* method);
// 0x5c34280

void Characters_BasicTitan__GetHitRPC
               (Characters_BasicTitan_o *__this,int32_t viewId,System_String_o *name,int32_t damage,
               System_String_o *type,System_String_o *collider,MethodInfo *method)

{
  bool bVar1;
  undefined4 in_register_00000034;
  MethodInfo *in_stack_ffffffffffffffe8;
  
  Characters_BasicTitan__ApplyHit(__this,viewId,name,damage,type,collider,in_stack_ffffffffffffffe8);
  bVar1 = UnityEngine_Time__get_inFixedTimeStep((MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  Characters_BasicTitan__StartDeathAnimation(__this,(MethodInfo *)CONCAT44(in_register_00000034,viewId));
  return;
}


// Characters.BasicTitan$$ApplyHit
// il2cpp: void Characters_BasicTitan__ApplyHit (Characters_BasicTitan_o* __this, int32_t viewId, System_String_o* name, int32_t damage, System_String_o* type, System_String_o* collider, const MethodInfo* method);
// 0x5c342b0
// asm: 10 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c34555: mov ebp, dword ptr [rsp + 0x18]
// asm:   0x5c34614: mov dword ptr [rsp + 0x1c], edx
// asm:   0x5c34b15: mov rdi, r15
// asm:   0x5c34b18: mov esi, ebp
// asm:   0x5c34b1a: mov rdx, r13
// asm:   0x5c34b1d: mov ecx, dword ptr [rsp + 0x1c]
// asm:   0x5c34b21: mov r8, r14
// asm:   0x5c34b24: mov r9, rbx
// asm:   0x5c34b27: call 0x5c27410  ; Characters_BaseTitan__GetMeleeHit()
// asm:   0x5c34b2c: jmp 0x5c345aa

void Characters_BasicTitan__ApplyHit
               (Characters_BasicTitan_o *__this,int32_t viewId,System_String_o *name,int32_t damage,
               System_String_o *type,System_String_o *collider,MethodInfo *method)

{
  uint32_t uVar1;
  Settings_InGameSet_o *pSVar2;
  Settings_InGameTitanSettings_o *pSVar3;
  Characters_BaseTitanComponentCache_o *pCVar4;
  Photon_Pun_PhotonView_o *__this_00;
  Settings_BoolSetting_o *pSVar5;
  Settings_IntSetting_o *pSVar6;
  Characters_BasicTitanComponentCache_o *pCVar7;
  Utility_BaseComponentCache_o *pUVar8;
  UnityEngine_Transform_o *pUVar9;
  Utility_BaseComponentCache_o *pUVar10;
  UnityEngine_Transform_o *__this_01;
  undefined8 uVar11;
  System_Nullable_Vector3__o *pSVar12;
  bool bVar13;
  bool bVar14;
  System_String_o *pSVar15;
  Il2CppClass *pIVar16;
  Characters_BaseCharacter_o *x;
  Characters_BasicTitan_c *pCVar17;
  undefined4 in_register_0000000c;
  System_Object_array *parameters;
  uint *puVar18;
  _func_24 *vtableDispatch;
  MethodInfo *pMVar19;
  MethodInfo *method_00;
  UnityEngine_Object_o *pUVar20;
  float fVar21;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar22;
  UnityEngine_Vector3_o UVar23;
  MethodInfo *in_stack_ffffffffffffff68;
  int32_t local_7c;
  ulong local_68;
  float local_60;
  float local_5c;
  System_Nullable_Vector3__Fields local_58;
  undefined1 local_48 [16];
  
  parameters = (System_Object_array *)CONCAT44(in_register_0000000c,damage);
  if (Il2CppMethodInitialized_075477d7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Empty_object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Vector3_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&"DisableWardedEffectsRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"Rock");
    il2cpp_codegen_initialize_runtime_metadata(&"CannonBall");
    Il2CppMethodInitialized_075477d7 = '\x01';
  }
  local_60 = 0.0;
  local_68 = 0;
  if ((__this->fields).Dead != false) {
    return;
  }
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->InGameCurrent;
  if (pSVar2 == (Settings_InGameSet_o *)0x0) goto label_05c34c65;
  pSVar3 = (pSVar2->fields).Titan;
  local_7c = damage;
  if (((__this->fields).isWarded == false) || ((__this->fields).CurrentWardedWeakSpot == 0))
  goto switchD_05c34430_default;
  pCVar4 = (__this->fields).BaseTitanCache;
  if (pCVar4 == (Characters_BaseTitanComponentCache_o *)0x0) goto label_05c34c65;
  pUVar20 = (UnityEngine_Object_o *)(pCVar4->fields).NapeHurtbox;
  if (pUVar20 == (UnityEngine_Object_o *)0x0) goto label_05c34c65;
  pSVar15 = UnityEngine_Object__get_name(pUVar20,(MethodInfo *)0x0);
  bVar13 = System_String__op_Equality(collider,pSVar15,(MethodInfo *)0x0);
  if (bVar13) {
    local_7c = 0;
  }
  if ((__this->fields).isWarded != false) {
    puVar18 = &switchD_05c34430::switchdataD_010a5ccc;
    switch((__this->fields).CurrentWardedWeakSpot) {
    case 1:
      pCVar7 = (__this->fields).BasicCache;
      if (pCVar7 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c34c65;
      pUVar20 = (UnityEngine_Object_o *)(pCVar7->fields).ForearmLHurtbox;
      break;
    case 2:
      pCVar7 = (__this->fields).BasicCache;
      if (pCVar7 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c34c65;
      pUVar20 = (UnityEngine_Object_o *)(pCVar7->fields).ForearmRHurtbox;
      break;
    case 3:
      pCVar4 = (__this->fields).BaseTitanCache;
      if (pCVar4 == (Characters_BaseTitanComponentCache_o *)0x0) goto label_05c34c65;
      pUVar20 = (UnityEngine_Object_o *)(pCVar4->fields).LegLHurtbox;
      break;
    case 4:
      pCVar4 = (__this->fields).BaseTitanCache;
      if (pCVar4 == (Characters_BaseTitanComponentCache_o *)0x0) goto label_05c34c65;
      pUVar20 = (UnityEngine_Object_o *)(pCVar4->fields).LegRHurtbox;
      break;
    default:
      goto switchD_05c34430_default;
    }
    if (pUVar20 == (UnityEngine_Object_o *)0x0) goto label_05c34c65;
    pSVar15 = UnityEngine_Object__get_name(pUVar20,(MethodInfo *)0x0);
    bVar13 = System_String__op_Equality(collider,pSVar15,(MethodInfo *)0x0);
    pMVar19 = MethodInfo_System_Array_Empty_object;
    parameters = (System_Object_array *)puVar18;
    if (!bVar13) goto switchD_05c34430_default;
    pUVar8 = (__this->fields).Cache;
    if ((pUVar8 == (Utility_BaseComponentCache_o *)0x0) ||
       (__this_00 = (pUVar8->fields).PhotonView, __this_00 == (Photon_Pun_PhotonView_o *)0x0))
    goto label_05c34c65;
    if ((__this_00->fields)._IsMine_k__BackingField == false) goto switchD_05c34430_default;
    if ((MethodInfo_System_Array_Empty_object->field7_0x38).methodMetadataHandle == (void *)0x0) {
      il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_object);
      pIVar16 = *(Il2CppClass **)((long)(pMVar19->field7_0x38).methodMetadataHandle + 0x10);
      if (((pIVar16->_2).bitflags1 & 1) == 0) goto label_05c348d7;
label_05c34509:
      uVar1 = (pIVar16->_2).cctor_finished_or_no_cctor;
    }
    else {
      pIVar16 = *(Il2CppClass **)
                 ((long)(MethodInfo_System_Array_Empty_object->field7_0x38).methodMetadataHandle + 0x10);
      if (((pIVar16->_2).bitflags1 & 1) != 0) goto label_05c34509;
label_05c348d7:
      pIVar16 = il2cpp_codegen_class_init_checked(pIVar16);
      uVar1 = (pIVar16->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init(pIVar16);
    }
    pIVar16 = (pMVar19->field7_0x38).rgctx_data[2].klass;
    if (((pIVar16->_2).bitflags1 & 1) == 0) {
      pIVar16 = il2cpp_codegen_class_init_checked(pIVar16);
    }
    parameters = *(System_Object_array **)pIVar16->static_fields;
    Photon_Pun_PhotonView__RPC(__this_00,"DisableWardedEffectsRPC",0,parameters,(MethodInfo *)0x0);
  }
switchD_05c34430_default:
  bVar13 = System_String__op_Equality(type,"CannonBall",(MethodInfo *)0x0);
  if (bVar13) {
label_05c34589:
    Characters_BaseCharacter__GetHitRPC
              ((Characters_BaseCharacter_o *)__this,viewId,name,local_7c,type,collider,(MethodInfo *)0x0);
    return;
  }
  pMVar19 = (MethodInfo *)"Rock";
  bVar13 = System_String__op_Equality(type,"Rock",(MethodInfo *)0x0);
  if (bVar13) goto label_05c34589;
  if (pSVar3 == (Settings_InGameTitanSettings_o *)0x0) goto label_05c34c65;
  pSVar5 = (pSVar3->fields).TitanArmorEnabled;
  if (pSVar5 == (Settings_BoolSetting_o *)0x0) goto label_05c34c65;
  if ((pSVar5->fields)._value != false) {
    if ((__this->fields).IsCrawler != false) {
      pSVar5 = (pSVar3->fields).TitanArmorCrawlerEnabled;
      if (pSVar5 == (Settings_BoolSetting_o *)0x0) goto label_05c34c65;
      if ((pSVar5->fields)._value == false) goto label_05c34618;
    }
    pSVar6 = (pSVar3->fields).TitanArmor;
    if (pSVar6 == (Settings_IntSetting_o *)0x0) goto label_05c34c65;
    parameters = (System_Object_array *)0x0;
    if (local_7c < (pSVar6->fields)._value) {
      local_7c = 0;
    }
  }
label_05c34618:
  bVar13 = Characters_BaseTitan__IsMeleeHitType(type,pMVar19);
  if (bVar13) {
    if ((__this->fields).IsCrawler == false) {
      bVar13 = Characters_BaseTitan__IsComboStunType(type,pMVar19);
      if (bVar13) {
        pMVar19 = (__this->klass->vtable)._124_get_ComboStunTime.method;
        fVar21 = (*(__this->klass->vtable)._124_get_ComboStunTime.methodPtr)(__this,pMVar19);
      }
      else {
        bVar13 = Characters_BaseTitan__IsKnockbackType(type,pMVar19);
        if (bVar13) {
          pMVar19 = (__this->klass->vtable)._129_get_PushTime.method;
          fVar21 = (*(__this->klass->vtable)._129_get_PushTime.methodPtr)(__this,pMVar19);
        }
        else {
          fVar21 = (__this->fields).StunTime;
        }
      }
      bVar13 = Characters_BaseTitan__IsComboStunType(type,pMVar19);
      if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
      }
      x = Utility_Util__FindCharacterByViewId(viewId,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar14 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar14) {
        if (x != (Characters_BaseCharacter_o *)0x0) {
          pUVar8 = (x->fields).Cache;
          if (pUVar8 != (Utility_BaseComponentCache_o *)0x0) {
            pUVar9 = (pUVar8->fields).Transform;
            if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
              UVar23 = UnityEngine_Transform__get_position(pUVar9,(MethodInfo *)0x0);
              pUVar8 = (__this->fields).Cache;
              if (pUVar8 != (Utility_BaseComponentCache_o *)0x0) {
                local_48._8_4_ = extraout_XMM0_Dc;
                local_48._0_8_ = UVar23.fields._0_8_;
                local_48._12_4_ = extraout_XMM0_Dd;
                pUVar9 = (pUVar8->fields).Transform;
                local_5c = UVar23.fields.z;
                if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
                  UVar23 = UnityEngine_Transform__get_position(pUVar9,(MethodInfo *)0x0);
                  fVar22 = UVar23.fields.z;
                  local_60 = local_5c - fVar22;
                  local_68 = (ulong)(uint)((float)local_48._0_4_ - UVar23.fields.x);
                  pUVar8 = (__this->fields).Cache;
                  if (pUVar8 != (Utility_BaseComponentCache_o *)0x0) {
                    pUVar9 = (pUVar8->fields).Transform;
                    uVar11 = il2cpp_runtime_helper_059d80e0(&local_68);
                    if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
                      UVar23.fields.z = fVar22;
                      UVar23.fields.x = (float)(int)uVar11;
                      UVar23.fields.y = (float)(int)((ulong)uVar11 >> 0x20);
                      UnityEngine_Transform__set_forward(pUVar9,UVar23,(MethodInfo *)0x0);
                      pUVar8 = (__this->fields).Cache;
                      if (((pUVar8 != (Utility_BaseComponentCache_o *)0x0) &&
                          (pUVar10 = (x->fields).Cache, pUVar10 != (Utility_BaseComponentCache_o *)0x0)) &&
                         (pUVar9 = (pUVar10->fields).Transform, pUVar9 != (UnityEngine_Transform_o *)0x0)) {
                        __this_01 = (pUVar8->fields).Transform;
                        UVar23 = UnityEngine_Transform__get_position(pUVar9,(MethodInfo *)0x0);
                        if (__this_01 != (UnityEngine_Transform_o *)0x0) {
                          UVar23 = UnityEngine_Transform__InverseTransformPoint
                                             (__this_01,UVar23,(MethodInfo *)0x0);
                          (*(__this->klass->vtable)._207_StunDirectional.methodPtr)
                                    (__this,UVar23.fields.x < 0.0,fVar21,bVar13,
                                     (__this->klass->vtable)._207_StunDirectional.method);
                          goto label_05c34b15;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto label_05c34c65;
      }
      (*(__this->klass->vtable)._207_StunDirectional.methodPtr)
                (__this,true,fVar21,bVar13,(__this->klass->vtable)._207_StunDirectional.method);
    }
label_05c34b15:
    Characters_BaseTitan__GetMeleeHit
              ((Characters_BaseTitan_o *)__this,viewId,name,local_7c,type,collider,in_stack_ffffffffffffff68);
    return;
  }
  pCVar4 = (__this->fields).BaseTitanCache;
  if (pCVar4 == (Characters_BaseTitanComponentCache_o *)0x0) goto label_05c34c65;
  pUVar20 = (UnityEngine_Object_o *)(pCVar4->fields).EyesHurtbox;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar13 = UnityEngine_Object__op_Inequality(pUVar20,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar13) {
    pCVar4 = (__this->fields).BaseTitanCache;
    if ((pCVar4 == (Characters_BaseTitanComponentCache_o *)0x0) ||
       (pUVar20 = (UnityEngine_Object_o *)(pCVar4->fields).EyesHurtbox, pUVar20 == (UnityEngine_Object_o *)0x0
       )) goto label_05c34c65;
    pSVar15 = UnityEngine_Object__get_name(pUVar20,(MethodInfo *)0x0);
    bVar13 = System_String__op_Equality(collider,pSVar15,(MethodInfo *)0x0);
    if (bVar13) {
      (*(__this->klass->vtable)._168_Blind.methodPtr)(__this,(__this->klass->vtable)._168_Blind.method);
      return;
    }
  }
  pCVar4 = (__this->fields).BaseTitanCache;
  if (pCVar4 == (Characters_BaseTitanComponentCache_o *)0x0) goto label_05c34c65;
  pUVar20 = (UnityEngine_Object_o *)(pCVar4->fields).LegLHurtbox;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar13 = UnityEngine_Object__op_Inequality(pUVar20,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar13) {
    pCVar4 = (__this->fields).BaseTitanCache;
    if ((pCVar4 == (Characters_BaseTitanComponentCache_o *)0x0) ||
       (pUVar20 = (UnityEngine_Object_o *)(pCVar4->fields).LegLHurtbox, pUVar20 == (UnityEngine_Object_o *)0x0
       )) goto label_05c34c65;
    pSVar15 = UnityEngine_Object__get_name(pUVar20,(MethodInfo *)0x0);
    bVar13 = System_String__op_Equality(collider,pSVar15,(MethodInfo *)0x0);
    if (!bVar13) {
      pCVar4 = (__this->fields).BaseTitanCache;
      if ((pCVar4 == (Characters_BaseTitanComponentCache_o *)0x0) ||
         (pUVar20 = (UnityEngine_Object_o *)(pCVar4->fields).LegRHurtbox,
         pUVar20 == (UnityEngine_Object_o *)0x0)) goto label_05c34c65;
      pSVar15 = UnityEngine_Object__get_name(pUVar20,(MethodInfo *)0x0);
      bVar13 = System_String__op_Equality(collider,pSVar15,(MethodInfo *)0x0);
      if (!bVar13) goto label_05c347ba;
    }
  }
  else {
label_05c347ba:
    pCVar7 = (__this->fields).BasicCache;
    if ((pCVar7 == (Characters_BasicTitanComponentCache_o *)0x0) ||
       (pUVar20 = (UnityEngine_Object_o *)(pCVar7->fields).ForearmLHurtbox,
       pUVar20 == (UnityEngine_Object_o *)0x0)) goto label_05c34c65;
    pSVar15 = UnityEngine_Object__get_name(pUVar20,(MethodInfo *)0x0);
    bVar13 = System_String__op_Equality(collider,pSVar15,(MethodInfo *)0x0);
    if (bVar13) {
      pCVar17 = __this->klass;
      if ((__this->fields).IsCrawler == false) {
        vtableDispatch = (pCVar17->vtable)._178_DisableArm.methodPtr;
        pMVar19 = (pCVar17->vtable)._178_DisableArm.method;
        bVar13 = true;
label_05c3487b:
        (*vtableDispatch)(__this,bVar13,pMVar19);
        return;
      }
      goto label_05c34b7a;
    }
    pCVar7 = (__this->fields).BasicCache;
    if ((pCVar7 == (Characters_BasicTitanComponentCache_o *)0x0) ||
       (pUVar20 = (UnityEngine_Object_o *)(pCVar7->fields).ForearmRHurtbox,
       pUVar20 == (UnityEngine_Object_o *)0x0)) goto label_05c34c65;
    pSVar15 = UnityEngine_Object__get_name(pUVar20,(MethodInfo *)0x0);
    bVar13 = System_String__op_Equality(collider,pSVar15,(MethodInfo *)0x0);
    if (bVar13) {
      pCVar17 = __this->klass;
      if ((__this->fields).IsCrawler == false) {
        vtableDispatch = (pCVar17->vtable)._178_DisableArm.methodPtr;
        pMVar19 = (pCVar17->vtable)._178_DisableArm.method;
        bVar13 = false;
        goto label_05c3487b;
      }
      goto label_05c34b7a;
    }
    pCVar7 = (__this->fields).BasicCache;
    if ((pCVar7 == (Characters_BasicTitanComponentCache_o *)0x0) ||
       (pUVar20 = (UnityEngine_Object_o *)(pCVar7->fields).HandLHurtbox,
       pUVar20 == (UnityEngine_Object_o *)0x0)) goto label_05c34c65;
    pSVar15 = UnityEngine_Object__get_name(pUVar20,(MethodInfo *)0x0);
    bVar13 = System_String__op_Equality(collider,pSVar15,(MethodInfo *)0x0);
    if (bVar13) {
      if ((__this->fields).IsCrawler == false) {
        bVar13 = true;
label_05c34c4d:
        Characters_BasicTitan__DisableLimb(__this,bVar13,true,(MethodInfo *)parameters);
        return;
      }
    }
    else {
      pCVar7 = (__this->fields).BasicCache;
      if ((pCVar7 == (Characters_BasicTitanComponentCache_o *)0x0) ||
         (pUVar20 = (UnityEngine_Object_o *)(pCVar7->fields).HandRHurtbox,
         pUVar20 == (UnityEngine_Object_o *)0x0)) {
label_05c34c65:
        ThrowNullReferenceException();
      }
      pSVar15 = UnityEngine_Object__get_name(pUVar20,(MethodInfo *)0x0);
      bVar13 = System_String__op_Equality(collider,pSVar15,(MethodInfo *)0x0);
      if (!bVar13) {
        pCVar4 = (__this->fields).BaseTitanCache;
        if ((pCVar4 != (Characters_BaseTitanComponentCache_o *)0x0) &&
           (pUVar20 = (UnityEngine_Object_o *)(pCVar4->fields).NapeHurtbox,
           pUVar20 != (UnityEngine_Object_o *)0x0)) {
          pSVar15 = UnityEngine_Object__get_name(pUVar20,(MethodInfo *)0x0);
          bVar13 = System_String__op_Equality(collider,pSVar15,(MethodInfo *)0x0);
          if ((bVar13) &&
             ((Characters_BaseCharacter__GetHitRPC
                         ((Characters_BaseCharacter_o *)__this,viewId,name,local_7c,type,collider,
                          (MethodInfo *)0x0), 0 < local_7c && ((__this->fields).CurrentHealth < 1)))) {
            UVar23 = Characters_BasicTitan__GetNapeChunkVelocity(__this,viewId,method_00);
            local_58.hasValue = false;
            local_58._1_3_ = 0;
            local_58.value.fields.x = 0.0;
            local_58.value.fields.y = 0.0;
            local_58.value.fields.z = 0.0;
            System_Nullable_Vector3____ctor
                      ((System_Nullable_Vector3__o *)&local_58,UVar23,
                       (MethodInfo_3CDCAA0 *)MethodInfo_System_Nullable_Vector3_ctor);
            (__this->fields)._napeChunkVelocity.fields.hasValue = local_58.hasValue;
            *(undefined3 *)&(__this->fields)._napeChunkVelocity.fields.field_0x1 = local_58._1_3_;
            (__this->fields)._napeChunkVelocity.fields.value.fields.x = local_58.value.fields.x;
            pSVar12 = &(__this->fields)._napeChunkVelocity;
            (pSVar12->fields).value.fields.y = local_58.value.fields.y;
            (pSVar12->fields).value.fields.z = local_58.value.fields.z;
          }
          return;
        }
        goto label_05c34c65;
      }
      if ((__this->fields).IsCrawler == false) {
        bVar13 = false;
        goto label_05c34c4d;
      }
    }
  }
  pCVar17 = __this->klass;
label_05c34b7a:
  (*(pCVar17->vtable)._169_Cripple.methodPtr)(__this,0.0,(pCVar17->vtable)._169_Cripple.method);
  return;
}


// Characters.BasicTitan$$GetNapeChunkVelocity
// il2cpp: UnityEngine_Vector3_o Characters_BasicTitan__GetNapeChunkVelocity (Characters_BasicTitan_o* __this, int32_t killerViewId, const MethodInfo* method);
// 0x5c34c70
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c34dde: movaps xmm2, xmmword ptr [rsp + 0x10]
// asm:   0x5c34de3: movss xmm1, dword ptr [rsp + 4]
// asm:   0x5c34de9: jmp 0x5c34e77
// asm:   0x5c34dee: movaps xmm2, xmmword ptr [rsp + 0x10]
// asm:   0x5c34df3: movss xmm1, dword ptr [rsp + 4]
// asm:   0x5c34df9: jmp 0x5c34e61

UnityEngine_Vector3_o
Characters_BasicTitan__GetNapeChunkVelocity
          (Characters_BasicTitan_o *__this,int32_t killerViewId,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  UnityEngine_Transform_o *__this_00;
  undefined1 auVar2 [16];
  bool bVar3;
  Characters_BaseCharacter_o *__this_01;
  float fVar4;
  float fVar5;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar6;
  undefined1 auVar7 [16];
  UnityEngine_Vector3_o UVar8;
  float local_38;
  float fStack_34;
  
  if (Il2CppMethodInitialized_075477d8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_075477d8 = '\x01';
  }
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
     (__this_00 = (pUVar1->fields).Transform, __this_00 == (UnityEngine_Transform_o *)0x0)) {
label_05c34e81:
    ThrowNullReferenceException();
  }
  UVar8 = UnityEngine_Transform__get_forward(__this_00,(MethodInfo *)0x0);
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  __this_01 = Utility_Util__FindCharacterByViewId(killerViewId,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  local_38 = UVar8.fields.x;
  fStack_34 = UVar8.fields.y;
  local_38 = local_38 * -10.0;
  fStack_34 = fStack_34 * -10.0;
  fVar4 = UVar8.fields.z * -10.0;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) goto label_05c34e77;
  if (__this_01 == (Characters_BaseCharacter_o *)0x0) goto label_05c34e81;
  UVar8 = Characters_BaseCharacter__GetVelocity(__this_01,(MethodInfo *)0x0);
  fVar6 = UVar8.fields.z;
  auVar7._0_8_ = UVar8.fields._0_8_;
  auVar7._8_4_ = extraout_XMM0_Dc;
  auVar7._12_4_ = extraout_XMM0_Dd;
  if (Il2CppMethodInitialized_0753e72a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e72a = '\x01';
  }
  fVar5 = fVar6 * fVar6 + UVar8.fields.y * UVar8.fields.y + UVar8.fields.x * UVar8.fields.x;
  if (1.0 < fVar5) {
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      if (fVar5 < 0.0) goto label_05c34e30;
label_05c34dd8:
      fVar5 = SQRT(fVar5);
    }
    else {
      if (0.0 <= fVar5) goto label_05c34dd8;
label_05c34e30:
      fVar5 = sqrtf(fVar5);
    }
    fVar6 = fVar6 / fVar5;
    auVar2._4_4_ = fVar5;
    auVar2._0_4_ = fVar5;
    auVar2._8_4_ = fVar5;
    auVar2._12_4_ = fVar5;
    auVar7 = divps(auVar7,auVar2);
  }
  local_38 = local_38 + (float)auVar7._0_8_ * 15.0;
  fStack_34 = fStack_34 + (float)((ulong)auVar7._0_8_ >> 0x20) * 15.0;
  fVar4 = fVar4 + fVar6 * 15.0;
label_05c34e77:
  UVar8.fields.y = fStack_34;
  UVar8.fields.x = local_38;
  UVar8.fields.z = fVar4;
  return (UnityEngine_Vector3_o)UVar8.fields;
}


// Characters.BasicTitan$$PlayNapeChunkRPC
// il2cpp: void Characters_BasicTitan__PlayNapeChunkRPC (Characters_BasicTitan_o* __this, UnityEngine_Vector3_o velocity, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5c34e90

void Characters_BasicTitan__PlayNapeChunkRPC
               (Characters_BasicTitan_o *__this,UnityEngine_Vector3_o velocity,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  float scale;
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  Characters_BasicTitanComponentCache_o *pCVar3;
  UnityEngine_Transform_o *neck;
  
  if (Il2CppMethodInitialized_075477d9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanNapeChunkEffect);
    Il2CppMethodInitialized_075477d9 = '\x01';
  }
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
     (pPVar2 = (pUVar1->fields).PhotonView, pPVar2 != (Photon_Pun_PhotonView_o *)0x0)) {
    if ((info.fields.Sender != (pPVar2->fields)._Owner_k__BackingField) ||
       ((((__this->fields)._napeChunkPlayed != false || ((__this->fields).EffectsEnabled == false)) ||
        ((__this->fields)._GoreEnabled_k__BackingField == false)))) {
      return;
    }
    (__this->fields)._napeChunkPlayed = true;
    pCVar3 = (__this->fields).BasicCache;
    if (pCVar3 != (Characters_BasicTitanComponentCache_o *)0x0) {
      neck = (pCVar3->fields).Neck;
      scale = (__this->fields).Size;
      if ((TypeInfo_Characters_TitanNapeChunkEffect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanNapeChunkEffect);
      }
      Characters_TitanNapeChunkEffect__Play(neck,scale,velocity,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$Kick
// il2cpp: void Characters_BasicTitan__Kick (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x5c34f90

void Characters_BasicTitan__Kick(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075477da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"AttackKick");
    Il2CppMethodInitialized_075477da = '\x01';
  }
  (*(__this->klass->vtable)._150_Attack.methodPtr)
            (__this,"AttackKick",(__this->klass->vtable)._150_Attack.method);
  return;
}


// Characters.BasicTitan$$Attack
// il2cpp: void Characters_BasicTitan__Attack (Characters_BasicTitan_o* __this, System_String_o* attack, const MethodInfo* method);
// 0x5c34fe0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c3532e: jmp 0x5c35b31
// body from a decompile with inferred signatures (Il2CppDecompileFallback.java): the final configuration did not decompile it


void Characters_BasicTitan__Attack(undefined8 param_1,float param_2,long *param_3,System_String_o *param_4)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  uint32_t uVar5;
  UnityEngine_Rigidbody_o *pUVar6;
  UnityEngine_Transform_o *pUVar7;
  long *plVar8;
  System_String_o *a;
  Il2CppObject *pIVar9;
  Il2CppClass *pIVar10;
  Il2CppRuntimeInterfaceOffsetPair *pIVar11;
  undefined1 auVar12 [16];
  long lVar13;
  bool bVar14;
  char cVar15;
  System_Collections_Generic_Dictionary_object__object__o *pSVar16;
  System_String_o *b;
  VirtualInvokeData *pVVar17;
  UnityEngine_Vector3_StaticFields *pUVar18;
  ulong uVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined4 uVar23;
  undefined4 extraout_XMM0_Db;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  UnityEngine_Vector3_o UVar27;
  UnityEngine_Vector3_o UVar28;
  float fStack_a8;
  Il2CppObject *pIStack_48;
  UnityEngine_Vector3_Fields UStack_40;
  float fStack_34;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  if (Il2CppMethodInitialized_075477db == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_CharacterData);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_TitanAttackInfo_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_TitanAttackInfo_get_Item
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ITargetable);
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBellyFlop");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackRockThrow");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan");
    Il2CppMethodInitialized_075477db = '\x01';
  }
  pIStack_48 = (Il2CppObject *)0x0;
  if ((((*(char *)((long)param_3 + 0x1ad) != '\0') || (*(char *)((long)param_3 + 0x1ae) != '\0')) ||
      (*(char *)((long)param_3 + 0x1af) != '\0')) || ((char)param_3[0x36] != '\0')) {
    if ((TypeInfo_Characters_CharacterData->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_CharacterData);
    }
    pSVar16 = (System_Collections_Generic_Dictionary_object__object__o *)
              TypeInfo_Characters_CharacterData->static_fields->TitanAttackInfos;
    if ((pSVar16 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
       (pSVar16 = (System_Collections_Generic_Dictionary_object__object__o *)
                  System_Collections_Generic_Dictionary_object__object___get_Item
                            (pSVar16,(Il2CppObject *)"Titan",
                             (MethodInfo_4AAD450 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_TitanAttackInfo_get_Item
                            ), pSVar16 == (System_Collections_Generic_Dictionary_object__object__o *)0x0))
    goto label_05c35b3e;
    bVar14 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                       (pSVar16,(Il2CppObject *)param_4,&pIStack_48,
                        (MethodInfo_4AAF440 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_TitanAttackInfo_TryGetValue);
    if (bVar14) {
      if (pIStack_48 == (Il2CppObject *)0x0) goto label_05c35b3e;
      if (*(char *)((long)&pIStack_48[1].klass + 3) != '\0') {
        if (*(char *)((long)param_3 + 0x1ad) != '\0') {
          return;
        }
        if (*(char *)((long)param_3 + 0x1af) != '\0') {
          return;
        }
      }
      if (*(char *)((long)&pIStack_48[1].klass + 4) != '\0') {
        if (*(char *)((long)param_3 + 0x1ae) != '\0') {
          return;
        }
        if ((char)param_3[0x36] != '\0') {
          return;
        }
      }
    }
  }
  if (*(char *)((long)param_3 + 0xd4) == '\0') {
    bVar14 = System_String__op_Equality(param_4,"AttackBellyFlop",(MethodInfo *)0x0);
    if (bVar14) {
      return;
    }
    bVar14 = System_String__op_Equality(param_4,"AttackRockThrow",(MethodInfo *)0x0);
    if (bVar14) {
      return;
    }
  }
  if ((char)param_3[0x11] == '\0') {
    if ((param_3[0x10] == 0) ||
       (pUVar6 = *(UnityEngine_Rigidbody_o **)(param_3[0x10] + 0x18), pUVar6 == (UnityEngine_Rigidbody_o *)0x0
       )) goto label_05c35b3e;
    UVar27 = UnityEngine_Rigidbody__get_linearVelocity(pUVar6,(MethodInfo *)0x0);
    if ((param_3[0x10] == 0) ||
       (pUVar6 = *(UnityEngine_Rigidbody_o **)(param_3[0x10] + 0x18), pUVar6 == (UnityEngine_Rigidbody_o *)0x0
       )) goto label_05c35b3e;
    UVar28 = UnityEngine_Rigidbody__get_linearVelocity(pUVar6,(MethodInfo *)0x0);
    param_2 = UVar28.fields.z;
    fStack_a8 = UVar27.fields.x;
    *(float *)(param_3 + 0x4b) = fStack_a8;
    *(undefined4 *)((long)param_3 + 0x25c) = 0;
    *(float *)(param_3 + 0x4c) = param_2;
  }
  (**(code **)(*param_3 + 0xab8))(param_3,param_4,*(undefined8 *)(*param_3 + 0xac0));
  if (param_3[0x55] == 0) goto label_05c35b3e;
  bVar14 = System_String__op_Equality
                     ((System_String_o *)param_3[0x46],*(System_String_o **)(param_3[0x55] + 0x98),
                      (MethodInfo *)0x0);
  if (bVar14) {
    lVar20 = param_3[0x46];
    lVar13 = param_3[0x66];
    *(undefined1 *)((long)param_3 + 0x256) = 1;
    if ((Characters_AnimationHandler_o *)param_3[0x18] != (Characters_AnimationHandler_o *)0x0) {
      Characters_AnimationHandler__SetCullingType
                ((Characters_AnimationHandler_o *)param_3[0x18],true,(MethodInfo *)0x0);
      (**(code **)(*param_3 + 0xc08))(param_3,*(undefined8 *)(*param_3 + 0xc10));
      (**(code **)(*param_3 + 0xd08))(param_3,*(undefined8 *)(*param_3 + 0xd10));
      Characters_BaseCharacter__CrossFade(0x3dcccccd,0,param_3,lVar20,0);
      *(undefined4 *)(param_3 + 0x20) = 10;
      param_3[0x48] = lVar20;
      Il2CppCodeGenWriteBarrier((void **)(param_3 + 0x48));
      *(int *)((long)param_3 + 0x22c) = (int)lVar13;
      return;
    }
    goto label_05c35b3e;
  }
  if (param_3[0x55] == 0) goto label_05c35b3e;
  bVar14 = System_String__op_Equality
                     ((System_String_o *)param_3[0x46],*(System_String_o **)(param_3[0x55] + 0x1e0),
                      (MethodInfo *)0x0);
  if (bVar14) {
    if ((char)param_3[0x11] == '\0') {
      lVar20 = (**(code **)(*param_3 + 0x5f8))(param_3,*(undefined8 *)(*param_3 + 0x600));
      param_3[0x6b] = lVar20;
      *(float *)(param_3 + 0x6c) = param_2;
    }
    else {
      param_3[0x6d] = 0;
      Il2CppCodeGenWriteBarrier((void **)(param_3 + 0x6d));
      if ((param_3[0x10] == 0) ||
         (pUVar7 = *(UnityEngine_Transform_o **)(param_3[0x10] + 0x10),
         pUVar7 == (UnityEngine_Transform_o *)0x0)) goto label_05c35b3e;
      UVar27 = UnityEngine_Transform__get_forward(pUVar7,(MethodInfo *)0x0);
      param_3[0x6e] = UVar27.fields._0_8_;
      *(float *)(param_3 + 0x6f) = UVar27.fields.z;
      *(undefined1 *)((long)param_3 + 0x37c) = 0;
    }
label_05c35524:
    Characters_BaseTitan__StateAttack(0x3dcccccd,param_3,param_3[0x46],1);
    return;
  }
  plVar8 = (long *)param_3[0x55];
  if (plVar8 == (long *)0x0) goto label_05c35b3e;
  a = (System_String_o *)param_3[0x46];
  b = (System_String_o *)(**(code **)(*plVar8 + 0x1b8))(plVar8,*(undefined8 *)(*plVar8 + 0x1c0));
  bVar14 = System_String__op_Equality(a,b,(MethodInfo *)0x0);
  if (!bVar14) {
    if (param_3[0x55] == 0) goto label_05c35b3e;
    bVar14 = System_String__op_Equality
                       ((System_String_o *)param_3[0x46],*(System_String_o **)(param_3[0x55] + 0x28),
                        (MethodInfo *)0x0);
    if (!bVar14) goto label_05c35524;
    pIVar9 = (Il2CppObject *)param_3[0x2d];
    if (pIVar9 != (Il2CppObject *)0x0) {
      pIVar10 = pIVar9->klass;
      uVar19 = (ulong)(pIVar10->_2).interface_offsets_count;
      if (uVar19 != 0) {
        pIVar11 = (pIVar10->_1).interfaceOffsets;
        lVar20 = 0;
        do {
          if (*(Characters_ITargetable_c **)((long)&pIVar11->interfaceType + lVar20) ==
              TypeInfo_Characters_ITargetable) {
            pVVar17 = pIVar10->vtable + (*(int *)((long)&pIVar11->offset + lVar20) + 2);
            goto label_05c359be;
          }
          lVar20 = lVar20 + 0x10;
        } while (uVar19 * 0x10 != lVar20);
      }
      pVVar17 = GetInterfaceInvokeDataFromVTableSlowPath
                          (pIVar9,(Il2CppClass *)TypeInfo_Characters_ITargetable,2);
label_05c359be:
      cVar15 = (*pVVar17->methodPtr)(pIVar9);
      if (cVar15 != '\0') {
        if (param_3[0x2d] == 0) goto label_05c35b3e;
        il2cpp_runtime_helper_02fd8410();
        if ((param_3[0x54] == 0) ||
           (pUVar7 = *(UnityEngine_Transform_o **)(param_3[0x54] + 0x38),
           pUVar7 == (UnityEngine_Transform_o *)0x0)) goto label_05c35b3e;
        UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
        il2cpp_runtime_helper_0599adc0();
        (**(code **)(*param_3 + 0x4d8))(param_3,*(undefined8 *)(*param_3 + 0x4e0));
        il2cpp_runtime_helper_0599adc0();
        goto label_05c35aa2;
      }
    }
    if ((param_3[0x10] == 0) ||
       (pUVar7 = *(UnityEngine_Transform_o **)(param_3[0x10] + 0x10), pUVar7 == (UnityEngine_Transform_o *)0x0
       )) {
label_05c35b3e:
      ThrowNullReferenceException();
    }
    UVar27 = UnityEngine_Transform__get_forward(pUVar7,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_0753e72c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e72c = '\x01';
    }
    uVar4 = (TypeInfo_UnityEngine_Vector3->static_fields->upVector).fields.x;
    fVar3 = UVar27.fields.x + (float)uVar4;
    goto label_05c35b1e;
  }
  if ((char)param_3[0x11] != '\0') {
    pIVar9 = (Il2CppObject *)param_3[0x2d];
    if (pIVar9 != (Il2CppObject *)0x0) {
      pIVar10 = pIVar9->klass;
      uVar19 = (ulong)(pIVar10->_2).interface_offsets_count;
      if (uVar19 != 0) {
        pIVar11 = (pIVar10->_1).interfaceOffsets;
        lVar20 = 0;
        do {
          if (*(Characters_ITargetable_c **)((long)&pIVar11->interfaceType + lVar20) ==
              TypeInfo_Characters_ITargetable) {
            pVVar17 = pIVar10->vtable + (*(int *)((long)&pIVar11->offset + lVar20) + 2);
            goto label_05c35881;
          }
          lVar20 = lVar20 + 0x10;
        } while (uVar19 * 0x10 != lVar20);
      }
      pVVar17 = GetInterfaceInvokeDataFromVTableSlowPath
                          (pIVar9,(Il2CppClass *)TypeInfo_Characters_ITargetable,2);
label_05c35881:
      cVar15 = (*pVVar17->methodPtr)(pIVar9,pVVar17->method);
      if (cVar15 != '\0') {
        if (param_3[0x2d] == 0) goto label_05c35b3e;
        il2cpp_runtime_helper_02fd8410();
        if ((param_3[0x54] == 0) ||
           (pUVar7 = *(UnityEngine_Transform_o **)(param_3[0x54] + 0x38),
           pUVar7 == (UnityEngine_Transform_o *)0x0)) goto label_05c35b3e;
        UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
        il2cpp_runtime_helper_0599adc0();
        (**(code **)(*param_3 + 0x4d8))(param_3,*(undefined8 *)(*param_3 + 0x4e0));
        il2cpp_runtime_helper_0599adc0();
label_05c35aa2:
        fVar3 = (float)il2cpp_runtime_helper_059d80e0();
        goto label_05c35b1e;
      }
    }
    if (Il2CppMethodInitialized_0753e72c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e72c = '\x01';
    }
    fVar3 = (TypeInfo_UnityEngine_Vector3->static_fields->upVector).fields.x;
    goto label_05c35b1e;
  }
  uVar21 = (**(code **)(*param_3 + 0x5f8))(param_3);
  if ((param_3[0x54] == 0) ||
     (pUVar7 = *(UnityEngine_Transform_o **)(param_3[0x54] + 0x38), pUVar7 == (UnityEngine_Transform_o *)0x0))
  goto label_05c35b3e;
  UVar27 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
  auVar26._0_4_ = (float)uVar21 - UVar27.fields.x;
  auVar25._4_4_ = (float)((ulong)uVar21 >> 0x20) - UVar27.fields.y;
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
  }
  param_2 = param_2 - UVar27.fields.z;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  fStack_28 = auVar26._0_4_ * auVar26._0_4_;
  param_2 = param_2 * param_2;
  fVar3 = auVar25._4_4_ * auVar25._4_4_ + fStack_28 + param_2;
  fVar24 = 0.0;
  fStack_24 = auVar25._4_4_;
  fStack_20 = extraout_XMM0_Dc - extraout_XMM0_Dc_00;
  fStack_1c = extraout_XMM0_Dd - extraout_XMM0_Dd_00;
  if (fVar3 < 0.0) {
    fVar3 = sqrtf(fVar3);
  }
  else {
    fVar3 = SQRT(fVar3);
  }
  fVar1 = *(float *)(param_3 + 0x34);
  uVar22 = (**(code **)(*param_3 + 0x4d8))(param_3,*(undefined8 *)(*param_3 + 0x4e0));
  uVar21._4_4_ = fStack_34;
  uVar21._0_4_ = UStack_40.z;
  unique0x1000113a = uVar22;
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
    uVar21 = stack0xffffffffffffffc8;
  }
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    uVar21 = stack0xffffffffffffffc8;
  }
  fVar24 = fVar24 * fVar24 +
           SUB84(unique0x10000bda,4) * SUB84(unique0x10000bda,4) +
           (float)unique0x10000bda * (float)unique0x10000bda;
  unique0x10001186 = uVar21;
  if (fVar24 < 0.0) {
    fVar24 = sqrtf(fVar24);
  }
  else {
    fVar24 = SQRT(fVar24);
  }
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72d = '\x01';
    UStack_40.x = 0.0;
    UStack_40.y = 0.0;
    if (Il2CppMethodInitialized_0753e729 != '\0') goto label_05c3573c;
label_05c3581d:
    UStack_40.x = 0.0;
    UStack_40.y = 0.0;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
    uVar5 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  else {
    UStack_40.x = 0.0;
    UStack_40.y = 0.0;
    if (Il2CppMethodInitialized_0753e729 == '\0') goto label_05c3581d;
label_05c3573c:
    UStack_40.x = 0.0;
    UStack_40.y = 0.0;
    uVar5 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  fVar3 = auVar25._4_4_ + (fVar3 / fVar1) * fVar24 * 0.5 * (fVar3 / fVar1);
  if (uVar5 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  param_2 = param_2 + fStack_28 + fVar3 * fVar3;
  uVar23 = 0;
  if (param_2 < 0.0) {
    param_2 = sqrtf(param_2);
    uVar23 = extraout_XMM0_Db;
  }
  else {
    param_2 = SQRT(param_2);
  }
  if (param_2 <= 1e-05) {
    pUVar18 = TypeInfo_UnityEngine_Vector3->static_fields;
  }
  else {
    auVar25._0_4_ = auVar26._0_4_;
    auVar25._8_4_ = auVar25._4_4_;
    auVar25._12_4_ = auVar25._4_4_;
    auVar26._8_8_ = auVar25._8_8_;
    auVar26._4_4_ = fVar3;
    auVar12._4_4_ = param_2;
    auVar12._0_4_ = param_2;
    auVar12._8_4_ = uVar23;
    auVar12._12_4_ = uVar23;
    auVar26 = divps(auVar26,auVar12);
    UStack_40.x = auVar26._0_4_;
    UStack_40.y = auVar26._4_4_;
    pUVar18 = (UnityEngine_Vector3_StaticFields *)&UStack_40;
  }
  uVar2 = (pUVar18->zeroVector).fields.x;
  fVar3 = (float)uVar2;
label_05c35b1e:
  (**(code **)(*param_3 + 0xa78))(fVar3,param_3,*(undefined8 *)(*param_3 + 0xa80));
  return;
}

// Characters.BasicTitan$$UpdateAttack
// il2cpp: void Characters_BasicTitan__UpdateAttack (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x5c35b50
// asm: 98 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c35e91: jmp 0x5c38970
// asm:   0x5c360a8: jmp 0x5c38970
// asm:   0x5c36627: mov rdi, rbp
// asm:   0x5c3662a: movaps xmm1, xmm2
// asm:   0x5c36a72: mov esi, 1
// asm:   0x5c36a77: xor edx, edx
// asm:   0x5c36a79: xor ecx, ecx
// asm:   0x5c36a7b: call 0x595bae0  ; Effects_EffectSpawner__Spawn()
// asm:   0x5c36a80: jmp 0x5c367e6
// asm:   0x5c36abd: mov rsi, qword ptr [rax + 0xa0]
// asm:   0x5c36ac4: movss xmm0, dword ptr [rip - 0x4c74fb4]
// asm:   0x5c36acc: xorps xmm1, xmm1
// asm:   0x5c36acf: mov rdi, rbx
// asm:   0x5c36ad2: xor edx, edx
// asm:   0x5c36ad4: call 0x5bb47f0  ; Characters_BaseCharacter__CrossFade()
// asm:   0x5c36ad9: jmp 0x5c367e6
// asm:   0x5c36c27: jmp 0x5c38970
// asm:   0x5c36cae: jmp 0x5c38970
// asm:   0x5c36e54: mov rdi, rbp
// asm:   0x5c36e57: movaps xmm0, xmmword ptr [rsp + 0x10]
// asm:   0x5c36e5c: movss xmm1, dword ptr [rsp + 0x50]
// asm:   0x5c36e62: mov esi, 1
// asm:   0x5c36e67: xor edx, edx
// asm:   0x5c36e69: xor ecx, ecx
// asm:   0x5c36e6b: call 0x595bae0  ; Effects_EffectSpawner__Spawn()
// asm:   0x5c36e70: mov rax, qword ptr [rbx]
// asm:   0x5c36e73: mov rsi, qword ptr [rax + 0xdd0]
// asm:   0x5c36e7a: mov rdi, rbx
// asm:   0x5c36e7d: movaps xmm0, xmmword ptr [rsp + 0x10]
// asm:   0x5c36e82: movss xmm1, dword ptr [rsp + 0x50]
// asm:   0x5c36e88: call qword ptr [rax + 0xdc8]  ; vtable slot 201
// asm:   0x5c36e8e: jmp 0x5c367e6
// asm:   0x5c3705b: mov rdi, rbp
// asm:   0x5c3705e: movss xmm1, dword ptr [rsp + 0x20]
// asm:   0x5c37064: movaps xmm2, xmmword ptr [rsp + 0x40]
// asm:   0x5c37069: movaps xmm3, xmmword ptr [rsp + 0x50]
// asm:   0x5c3706e: mov esi, 1
// asm:   0x5c37073: xor edx, edx
// asm:   0x5c37075: xor ecx, ecx
// asm:   0x5c37077: call 0x595bae0  ; Effects_EffectSpawner__Spawn()
// asm:   0x5c3707c: mov rax, qword ptr [rbx]
// asm:   0x5c3707f: mov rsi, qword ptr [rax + 0xdd0]
// asm:   0x5c37086: mov rdi, rbx
// asm:   0x5c37089: movaps xmm0, xmmword ptr [rsp + 0x10]
// asm:   0x5c3708e: movss xmm1, dword ptr [rsp + 0x20]
// asm:   0x5c37094: call qword ptr [rax + 0xdc8]  ; vtable slot 201
// asm:   0x5c3709a: jmp 0x5c367e6
// asm:   0x5c37301: jmp 0x5c38970
// asm:   0x5c375e6: mov rdi, rbp
// asm:   0x5c375e9: movss xmm1, dword ptr [rsp + 0x20]
// asm:   0x5c375ef: jmp 0x5c3662d
// asm:   0x5c3776f: movaps xmm1, xmm0
// asm:   0x5c37772: mov rax, qword ptr [rbp]
// asm:   0x5c37776: mov rsi, qword ptr [rax + 0x190]
// asm:   0x5c3777d: mov rdi, rbp
// asm:   0x5c37780: movss xmm0, dword ptr [rsp + 0x10]
// asm:   0x5c37786: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x5c3778c: jmp 0x5c367e6
// asm:   0x5c37e30: jmp 0x5c38086
// asm:   0x5c38259: mov rax, qword ptr [rbx]
// asm:   0x5c3825c: mov rsi, qword ptr [rax + 0xae0]
// asm:   0x5c38263: mov rdi, rbx
// asm:   0x5c38266: call qword ptr [rax + 0xad8]  ; vtable slot 154
// asm:   0x5c3826c: jmp 0x5c367e6
// asm:   0x5c38346: mov rbp, rax
// asm:   0x5c38349: movaps xmm0, xmmword ptr [rsp + 0xe0]
// asm:   0x5c38351: movss xmm1, dword ptr [rsp + 0x20]
// asm:   0x5c38357: mulss xmm1, xmm0
// asm:   0x5c3835b: movss dword ptr [rsp + 0x20], xmm1
// asm:   0x5c38361: shufps xmm0, xmm0, 0
// asm:   0x5c38365: movaps xmm1, xmmword ptr [rsp + 0x10]
// asm:   0x5c3836a: mulps xmm1, xmm0
// asm:   0x5c3836d: movaps xmmword ptr [rsp + 0x10], xmm1
// asm:   0x5c38372: mov rdi, rbx
// asm:   0x5c38375: mov rsi, rax
// asm:   0x5c38378: call 0x2ac8d60  ; il2cpp_codegen_array_element_type_check()
// asm:   0x5c3837d: mov rdi, rbx
// asm:   0x5c38380: xor esi, esi
// asm:   0x5c38382: mov rdx, rbp
// asm:   0x5c38385: call 0x2ac8d90  ; il2cpp_runtime_helper_02ac8d90()
// asm:   0x5c3838a: lea rax, [rip + 0x1695697]  ; ""
// asm:   0x5c38391: mov rdx, qword ptr [rax]
// asm:   0x5c38394: mov dword ptr [rsp], 0x41200000
// asm:   0x5c3839b: mov rdi, r14
// asm:   0x5c3839e: movaps xmm0, xmmword ptr [rsp + 0x50]
// asm:   0x5c383a3: movss xmm1, dword ptr [rsp + 0x40]
// asm:   0x5c383a9: movaps xmm2, xmmword ptr [rsp + 0x30]
// asm:   0x5c383ae: movaps xmm3, xmmword ptr [rsp + 0x60]
// asm:   0x5c383b3: movaps xmm4, xmmword ptr [rsp + 0x10]
// asm:   0x5c383b8: movss xmm5, dword ptr [rsp + 0x20]
// asm:   0x5c383be: movaps xmm6, xmmword ptr [rsp + 0x90]
// asm:   0x5c383c6: movss xmm7, dword ptr [rsp + 0x8c]
// asm:   0x5c383cf: mov esi, r15d
// asm:   0x5c383d2: mov rcx, rbx
// asm:   0x5c383d5: xor r8d, r8d
// asm:   0x5c383d8: call 0x58726c0  ; Projectiles_ProjectileSpawner__Spawn()
// asm:   0x5c383dd: jmp 0x5c367e6
// asm:   0x5c388ef: jmp 0x5c38970

void Characters_BasicTitan__UpdateAttack(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  Characters_BasicTitanAnimations_o **ppCVar1;
  System_String_o **ppSVar2;
  Characters_BaseCharacter_o **targetAddress;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte bVar8;
  int iVar9;
  uint32_t uVar10;
  Characters_BasicTitanAnimations_o *pCVar11;
  Characters_BasicTitanComponentCache_o *pCVar12;
  Utility_BaseComponentCache_o *pUVar13;
  Photon_Pun_PhotonView_o *pPVar14;
  bool bVar15;
  bool bVar16;
  int32_t iVar17;
  Characters_BaseHitbox_c *pCVar18;
  UnityEngine_Transform_o *pUVar19;
  undefined *puVar20;
  System_String_o *pSVar21;
  Controllers_BaseTitanAIController_o *__this_00;
  Characters_BaseCharacter_o *pCVar22;
  System_Object_array *pSVar23;
  Il2CppObject *pIVar24;
  long lVar25;
  Characters_BasicTitan_c *pCVar26;
  ulong uVar27;
  Characters_BaseCharacter_o *target;
  Characters_BaseHitbox_o *pCVar28;
  float *pfVar29;
  MethodInfo *pMVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float extraout_XMM0_Db;
  undefined8 uVar34;
  float extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  float extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 uVar35;
  undefined4 uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  UnityEngine_Vector3_o UVar40;
  UnityEngine_Vector3_o UVar41;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o UVar42;
  UnityEngine_Vector3_o position_00;
  UnityEngine_Vector3_o UVar43;
  UnityEngine_Vector3_o position_01;
  UnityEngine_Vector3_o UVar44;
  UnityEngine_Vector3_o position_02;
  UnityEngine_Vector3_o UVar45;
  UnityEngine_Quaternion_o UVar46;
  UnityEngine_Vector3_o direction;
  UnityEngine_Vector3_o direction_00;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Quaternion_o rotation_00;
  UnityEngine_Quaternion_o rotation_01;
  UnityEngine_Vector3_o gravity;
  UnityEngine_Vector3_o velocity;
  undefined8 uStack_118;
  UnityEngine_Quaternion_Fields UStack_108;
  undefined8 uStack_f8;
  float fStack_e8;
  float fStack_e4;
  float fStack_d8;
  float fStack_d4;
  UnityEngine_Quaternion_Fields UStack_c8;
  UnityEngine_Quaternion_Fields UStack_b0;
  float fStack_9c;
  undefined1 auStack_98 [8];
  float fStack_90;
  float fStack_8c;
  undefined8 uStack_88;
  float fStack_80;
  undefined8 uStack_78;
  float fStack_70;
  undefined8 uStack_68;
  float fStack_60;
  UnityEngine_Quaternion_Fields UStack_58;
  undefined1 auStack_48 [16];
  UnityEngine_Quaternion_Fields UStack_38;
  
  if (Il2CppMethodInitialized_075477dc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseCharacter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_BaseTitanAIController);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Effects_EffectSpawner);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Projectiles_ProjectilePrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Spawnables_SpawnablePrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSwing");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBite");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSlap");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackGrab");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackBrush");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"ClearRockRPC");
    Il2CppMethodInitialized_075477dc = '\x01';
  }
  UStack_38 = (UnityEngine_Quaternion_Fields)ZEXT816(0);
  fStack_70 = 0.0;
  uStack_78 = 0;
  fStack_80 = 0.0;
  uStack_88 = 0;
  fStack_60 = 0.0;
  uStack_68 = 0;
  fVar31 = (*(__this->klass->vtable)._194_GetAnimationTime.methodPtr)
                     (__this,(__this->klass->vtable)._194_GetAnimationTime.method);
  UStack_b0.x = 4.712389;
  UStack_b0.y = 0.0;
  UStack_b0.z = 0.0;
  UVar46 = UnityEngine_Quaternion__Internal_FromEulerRad
                     ((UnityEngine_Vector3_o *)&UStack_b0,(MethodInfo *)0x0);
  fVar32 = UVar46.fields.w;
  pCVar11 = (__this->fields).BasicAnimations;
  if (pCVar11 == (Characters_BasicTitanAnimations_o *)0x0) goto label_05c38970;
  fVar37 = fVar32;
  bVar15 = System_String__op_Equality
                     ((__this->fields)._currentAttackAnimation,(pCVar11->fields).AttackPunchCombo,
                      (MethodInfo *)0x0);
  if (bVar15) {
    iVar9 = (__this->fields)._currentAttackStage;
    if ((0.115 < fVar31) && (iVar9 == 0)) {
      if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
      }
      Characters_BaseCharacter__PlaySound
                ((Characters_BaseCharacter_o *)__this,TypeInfo_Characters_TitanSounds->static_fields->Swing1,
                 (MethodInfo *)0x0);
      pCVar12 = (__this->fields).BasicCache;
      if (pCVar12 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c38970;
      pCVar28 = (pCVar12->fields).HandRHitbox;
      fVar31 = (*(__this->klass->vtable)._195_GetHitboxTime.methodPtr)
                         (__this,0.005,(__this->klass->vtable)._195_GetHitboxTime.method);
      fVar32 = (*(__this->klass->vtable)._195_GetHitboxTime.methodPtr)
                         (__this,0.025,(__this->klass->vtable)._195_GetHitboxTime.method);
joined_r0x05c35da3:
      if (pCVar28 != (Characters_BaseHitbox_o *)0x0) {
        pCVar18 = pCVar28->klass;
        pMVar30 = (pCVar18->vtable)._5_Activate.method;
        goto label_05c36315;
      }
      goto label_05c38970;
    }
    if ((fVar31 <= 0.265) || (iVar9 != 1)) {
      if ((fVar31 <= 0.48) || (iVar9 != 2)) {
        if (fVar31 <= 0.52) {
          return;
        }
        if (iVar9 != 3) {
          return;
        }
        pCVar12 = (__this->fields).BasicCache;
        if (pCVar12 != (Characters_BasicTitanComponentCache_o *)0x0) {
          pUVar19 = (pCVar12->fields).Transform;
          if (pUVar19 != (UnityEngine_Transform_o *)0x0) {
            UVar40 = UnityEngine_Transform__get_position(pUVar19,(MethodInfo *)0x0);
            pCVar12 = (__this->fields).BasicCache;
            if (pCVar12 != (Characters_BasicTitanComponentCache_o *)0x0) {
              pUVar19 = (pCVar12->fields).Transform;
              if (pUVar19 != (UnityEngine_Transform_o *)0x0) {
                UVar41 = UnityEngine_Transform__get_forward(pUVar19,(MethodInfo *)0x0);
                fVar31 = (__this->fields).Size;
                fVar32 = UVar41.fields.z * 7.0 * fVar31;
                fVar37 = fVar31 * UVar41.fields.x * 7.0;
                fVar39 = fVar31 * UVar41.fields.y * 7.0;
                if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
                  fVar31 = (__this->fields).Size;
                }
                uStack_118._0_4_ = UVar40.fields.x;
                uStack_118._4_4_ = UVar40.fields.y;
                UVar41.fields.x = (float)uStack_118 + fVar37;
                UVar41.fields.y = uStack_118._4_4_ + fVar39;
                fVar32 = UVar40.fields.z + fVar32;
                pSVar21 = TypeInfo_Effects_EffectPrefabs->static_fields->Boom1;
                if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
                }
                UVar41.fields.z = fVar32;
                Effects_EffectSpawner__Spawn
                          (pSVar21,UVar41,UVar46,fVar31,true,(System_Object_array *)0x0,(MethodInfo *)0x0);
                UVar40.fields.z = fVar32;
                UVar40.fields.x = UVar41.fields.x;
                UVar40.fields.y = UVar41.fields.y;
                (*(__this->klass->vtable)._201_SpawnShatter.methodPtr)
                          (__this,UVar40,(__this->klass->vtable)._201_SpawnShatter.method);
                (__this->fields)._currentAttackStage = 4;
                return;
              }
            }
          }
        }
      }
      else {
        if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
        }
        Characters_BaseCharacter__PlaySound
                  ((Characters_BaseCharacter_o *)__this,TypeInfo_Characters_TitanSounds->static_fields->Swing3
                   ,(MethodInfo *)0x0);
        pCVar12 = (__this->fields).BasicCache;
        if (pCVar12 != (Characters_BasicTitanComponentCache_o *)0x0) {
          pCVar28 = (pCVar12->fields).HandLHitbox;
          fVar31 = (*(__this->klass->vtable)._195_GetHitboxTime.methodPtr)
                             (__this,0.02,(__this->klass->vtable)._195_GetHitboxTime.method);
          fVar32 = (*(__this->klass->vtable)._195_GetHitboxTime.methodPtr)
                             (__this,0.02,(__this->klass->vtable)._195_GetHitboxTime.method);
          if (pCVar28 != (Characters_BaseHitbox_o *)0x0) {
            (*(pCVar28->klass->vtable)._5_Activate.methodPtr)
                      (pCVar28,fVar31,fVar32,(pCVar28->klass->vtable)._5_Activate.method);
            pCVar12 = (__this->fields).BasicCache;
            if (pCVar12 != (Characters_BasicTitanComponentCache_o *)0x0) {
              pCVar28 = (pCVar12->fields).HandRHitbox;
              fVar31 = (*(__this->klass->vtable)._195_GetHitboxTime.methodPtr)
                                 (__this,0.02,(__this->klass->vtable)._195_GetHitboxTime.method);
              fVar32 = (*(__this->klass->vtable)._195_GetHitboxTime.methodPtr)
                                 (__this,0.02,(__this->klass->vtable)._195_GetHitboxTime.method);
              if (pCVar28 != (Characters_BaseHitbox_o *)0x0) {
                (*(pCVar28->klass->vtable)._5_Activate.methodPtr)
                          (pCVar28,fVar31,fVar32,(pCVar28->klass->vtable)._5_Activate.method);
                (__this->fields)._currentAttackStage = 3;
                return;
              }
            }
          }
        }
      }
      goto label_05c38970;
    }
    if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    }
    Characters_BaseCharacter__PlaySound
              ((Characters_BaseCharacter_o *)__this,TypeInfo_Characters_TitanSounds->static_fields->Swing2,
               (MethodInfo *)0x0);
    pCVar12 = (__this->fields).BasicCache;
    if (pCVar12 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c38970;
    pCVar28 = (pCVar12->fields).HandLHitbox;
    fVar32 = (*(__this->klass->vtable)._195_GetHitboxTime.methodPtr)
                       (__this,0.005,(__this->klass->vtable)._195_GetHitboxTime.method);
    fVar31 = (*(__this->klass->vtable)._195_GetHitboxTime.methodPtr)
                       (__this,0.025,(__this->klass->vtable)._195_GetHitboxTime.method);
    if (pCVar28 == (Characters_BaseHitbox_o *)0x0) goto label_05c38970;
    pCVar18 = pCVar28->klass;
    pMVar30 = (pCVar18->vtable)._5_Activate.method;
label_05c367d6:
    (*(pCVar18->vtable)._5_Activate.methodPtr)(pCVar28,fVar32,fVar31,pMVar30);
    goto label_05c367dc;
  }
  ppCVar1 = &(__this->fields).BasicAnimations;
  if (*ppCVar1 == (Characters_BasicTitanAnimations_o *)0x0) goto label_05c38970;
  bVar15 = System_String__op_Equality
                     ((__this->fields)._currentAttackAnimation,((*ppCVar1)->fields).AttackPunch,
                      (MethodInfo *)0x0);
  if (bVar15) {
    iVar9 = (__this->fields)._currentAttackStage;
    if ((__this->fields).AI == false) {
      if ((fVar31 <= 0.2) || (iVar9 != 0)) {
        if (fVar31 <= 0.49) {
          return;
        }
        if (iVar9 != 1) {
          return;
        }
        if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
        }
        Characters_BaseCharacter__PlaySound
                  ((Characters_BaseCharacter_o *)__this,TypeInfo_Characters_TitanSounds->static_fields->Swing2
                   ,(MethodInfo *)0x0);
        pCVar12 = (__this->fields).BasicCache;
        if (pCVar12 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c38970;
        pCVar28 = (pCVar12->fields).HandLHitbox;
        pCVar26 = __this->klass;
        pMVar30 = (pCVar26->vtable)._195_GetHitboxTime.method;
        fVar31 = 0.06;
        goto label_05c367b0;
      }
      if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
      }
      Characters_BaseCharacter__PlaySound
                ((Characters_BaseCharacter_o *)__this,TypeInfo_Characters_TitanSounds->static_fields->Swing1,
                 (MethodInfo *)0x0);
      pCVar12 = (__this->fields).BasicCache;
      if (pCVar12 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c38970;
      pCVar28 = (pCVar12->fields).HandRHitbox;
label_05c362dd:
      fVar32 = (*(__this->klass->vtable)._195_GetHitboxTime.methodPtr)
                         (__this,0.06,(__this->klass->vtable)._195_GetHitboxTime.method);
    }
    else {
      if ((fVar31 <= 0.22) || (iVar9 != 0)) {
        if (fVar31 <= 0.505) {
          return;
        }
        if (iVar9 != 1) {
          return;
        }
        if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
        }
        Characters_BaseCharacter__PlaySound
                  ((Characters_BaseCharacter_o *)__this,TypeInfo_Characters_TitanSounds->static_fields->Swing2
                   ,(MethodInfo *)0x0);
        pCVar12 = (__this->fields).BasicCache;
        if (pCVar12 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c38970;
        pCVar28 = (pCVar12->fields).HandLHitbox;
        pCVar26 = __this->klass;
        pMVar30 = (pCVar26->vtable)._195_GetHitboxTime.method;
        fVar31 = 0.04;
label_05c367b0:
        fVar31 = (*(pCVar26->vtable)._195_GetHitboxTime.methodPtr)(__this,fVar31,pMVar30);
        if (pCVar28 == (Characters_BaseHitbox_o *)0x0) goto label_05c38970;
        pCVar18 = pCVar28->klass;
        pMVar30 = (pCVar18->vtable)._5_Activate.method;
        fVar32 = 0.0;
        goto label_05c367d6;
      }
      if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
      }
      Characters_BaseCharacter__PlaySound
                ((Characters_BaseCharacter_o *)__this,TypeInfo_Characters_TitanSounds->static_fields->Swing1,
                 (MethodInfo *)0x0);
      pCVar12 = (__this->fields).BasicCache;
      if (pCVar12 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c38970;
      pCVar28 = (pCVar12->fields).HandRHitbox;
      fVar32 = (*(__this->klass->vtable)._195_GetHitboxTime.methodPtr)
                         (__this,0.04,(__this->klass->vtable)._195_GetHitboxTime.method);
    }
joined_r0x05c35e8b:
    if (pCVar28 != (Characters_BaseHitbox_o *)0x0) {
      pCVar18 = pCVar28->klass;
      pMVar30 = (pCVar18->vtable)._5_Activate.method;
      fVar31 = 0.0;
label_05c36315:
      (*(pCVar18->vtable)._5_Activate.methodPtr)(pCVar28,fVar31,fVar32,pMVar30);
      (__this->fields)._currentAttackStage = 1;
      return;
    }
    goto label_05c38970;
  }
  if (*ppCVar1 == (Characters_BasicTitanAnimations_o *)0x0) goto label_05c38970;
  bVar15 = System_String__op_Equality
                     ((__this->fields)._currentAttackAnimation,((*ppCVar1)->fields).AttackSlam,
                      (MethodInfo *)0x0);
  if (bVar15) {
    iVar9 = (__this->fields)._currentAttackStage;
    if ((fVar31 <= 0.42) || (iVar9 != 0)) {
      if (fVar31 <= 0.45) {
        return;
      }
      if (iVar9 != 1) {
        return;
      }
      pCVar12 = (__this->fields).BasicCache;
      if (pCVar12 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c38970;
      pUVar19 = (pCVar12->fields).Transform;
      if (pUVar19 == (UnityEngine_Transform_o *)0x0) goto label_05c38970;
      UVar40 = UnityEngine_Transform__get_position(pUVar19,(MethodInfo *)0x0);
      pCVar12 = (__this->fields).BasicCache;
      if (pCVar12 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c38970;
      pUVar19 = (pCVar12->fields).Transform;
      if (pUVar19 == (UnityEngine_Transform_o *)0x0) goto label_05c38970;
      UVar41 = UnityEngine_Transform__get_forward(pUVar19,(MethodInfo *)0x0);
      fVar31 = (__this->fields).Size;
      fVar37 = UVar41.fields.z * 7.0 * fVar31;
      uStack_f8._0_4_ = fVar31 * UVar41.fields.x * 7.0;
      fVar32 = fVar31 * UVar41.fields.y * 7.0;
      if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
        fVar31 = (__this->fields).Size;
      }
      uStack_118._0_4_ = UVar40.fields.x;
      uStack_118._4_4_ = UVar40.fields.y;
      uStack_f8._0_4_ = (float)uStack_118 + (float)uStack_f8;
      fVar32 = uStack_118._4_4_ + fVar32;
      fVar37 = UVar40.fields.z + fVar37;
      pSVar21 = TypeInfo_Effects_EffectPrefabs->static_fields->Boom1;
      uStack_118 = CONCAT44(fVar32,(float)uStack_f8);
      if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
      }
label_05c3662d:
      position.fields.y = fVar32;
      position.fields.x = (float)uStack_f8;
      position.fields.z = fVar37;
      Effects_EffectSpawner__Spawn
                (pSVar21,position,UVar46,fVar31,true,(System_Object_array *)0x0,(MethodInfo *)0x0);
      UVar42.fields.z = fVar37;
      UVar42.fields.x = (float)uStack_118;
      UVar42.fields.y = uStack_118._4_4_;
      (*(__this->klass->vtable)._201_SpawnShatter.methodPtr)
                (__this,UVar42,(__this->klass->vtable)._201_SpawnShatter.method);
      goto label_05c367dc;
    }
    if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    }
    Characters_BaseCharacter__PlaySound
              ((Characters_BaseCharacter_o *)__this,TypeInfo_Characters_TitanSounds->static_fields->Swing3,
               (MethodInfo *)0x0);
    pCVar12 = (__this->fields).BasicCache;
    if (pCVar12 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c38970;
    pCVar28 = (pCVar12->fields).HandLHitbox;
    fVar31 = (*(__this->klass->vtable)._195_GetHitboxTime.methodPtr)
                       (__this,0.02,(__this->klass->vtable)._195_GetHitboxTime.method);
    fVar32 = (*(__this->klass->vtable)._195_GetHitboxTime.methodPtr)
                       (__this,0.01,(__this->klass->vtable)._195_GetHitboxTime.method);
    if (pCVar28 == (Characters_BaseHitbox_o *)0x0) goto label_05c38970;
    (*(pCVar28->klass->vtable)._5_Activate.methodPtr)
              (pCVar28,fVar31,fVar32,(pCVar28->klass->vtable)._5_Activate.method);
    pCVar12 = (__this->fields).BasicCache;
    if (pCVar12 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c38970;
    pCVar28 = (pCVar12->fields).HandRHitbox;
    fVar31 = (*(__this->klass->vtable)._195_GetHitboxTime.methodPtr)
                       (__this,0.02,(__this->klass->vtable)._195_GetHitboxTime.method);
    fVar32 = (*(__this->klass->vtable)._195_GetHitboxTime.methodPtr)
                       (__this,0.01,(__this->klass->vtable)._195_GetHitboxTime.method);
    goto joined_r0x05c35da3;
  }
  if (*ppCVar1 == (Characters_BasicTitanAnimations_o *)0x0) goto label_05c38970;
  bVar15 = System_String__op_Equality
                     ((__this->fields)._currentAttackAnimation,((*ppCVar1)->fields).AttackBellyFlop,
                      (MethodInfo *)0x0);
  if (bVar15) {
    iVar9 = (__this->fields)._currentAttackStage;
    if ((fVar31 <= 0.65) || (iVar9 != 0)) {
      if ((fVar31 <= 0.805) || (iVar9 != 1)) {
        if (iVar9 != 2) {
          return;
        }
        pfVar29 = &(__this->fields)._stateTimeLeft;
        if (1.1 < *pfVar29 || *pfVar29 == 1.1) {
          return;
        }
        (__this->fields)._currentAttackStage = 3;
        pCVar11 = (__this->fields).BasicAnimations;
        if (pCVar11 != (Characters_BasicTitanAnimations_o *)0x0) {
          Characters_BaseCharacter__CrossFade
                    ((Characters_BaseCharacter_o *)__this,(pCVar11->fields).AttackBellyFlopGetup,0.1,0.0,
                     (MethodInfo *)0x0);
          return;
        }
        goto label_05c38970;
      }
      (__this->fields)._currentAttackStage = 2;
      pUVar13 = (__this->fields).Cache;
      if (pUVar13 == (Utility_BaseComponentCache_o *)0x0) goto label_05c38970;
      pUVar19 = (pUVar13->fields).Transform;
      if (pUVar19 == (UnityEngine_Transform_o *)0x0) goto label_05c38970;
      UVar40 = UnityEngine_Transform__get_position(pUVar19,(MethodInfo *)0x0);
      pUVar13 = (__this->fields).Cache;
      if (pUVar13 == (Utility_BaseComponentCache_o *)0x0) goto label_05c38970;
      pUVar19 = (pUVar13->fields).Transform;
      if (pUVar19 == (UnityEngine_Transform_o *)0x0) goto label_05c38970;
      UVar41 = UnityEngine_Transform__get_forward(pUVar19,(MethodInfo *)0x0);
      if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
      }
      pUVar13 = (__this->fields).Cache;
      uStack_118._0_4_ = UVar40.fields.x;
      uStack_118._4_4_ = UVar40.fields.y;
      if (pUVar13 == (Utility_BaseComponentCache_o *)0x0) goto label_05c38970;
      pUVar19 = (pUVar13->fields).Transform;
      if (pUVar19 == (UnityEngine_Transform_o *)0x0) goto label_05c38970;
      uStack_118._0_4_ = (float)uStack_118 + UVar41.fields.x * 5.0;
      uStack_118._4_4_ = uStack_118._4_4_ + UVar41.fields.y * 5.0;
      fVar37 = UVar40.fields.z + UVar41.fields.z * 5.0;
      pSVar21 = TypeInfo_Effects_EffectPrefabs->static_fields->Boom4;
      UStack_38 = (UnityEngine_Quaternion_Fields)
                  UnityEngine_Transform__get_rotation(pUVar19,(MethodInfo *)0x0);
      il2cpp_runtime_helper_05bbd050(&UStack_38);
      UStack_b0.y = extraout_XMM0_Db * 0.017453292;
      UStack_b0.x = 4.712389;
      UStack_b0.z = 0.0;
      UVar46 = UnityEngine_Quaternion__Internal_FromEulerRad
                         ((UnityEngine_Vector3_o *)&UStack_b0,(MethodInfo *)0x0);
      fStack_d8 = UVar46.fields.z;
      fVar32 = UVar46.fields.w;
      fStack_e4 = UVar46.fields.y;
      fVar31 = (__this->fields).Size;
      if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
      }
      fStack_e8 = UVar46.fields.x;
      goto label_05c36a72;
    }
    (__this->fields)._currentAttackStage = 1;
    pCVar12 = (__this->fields).BasicCache;
    if (pCVar12 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c38970;
    pCVar28 = (pCVar12->fields).BodyHitbox;
    pCVar26 = __this->klass;
    pMVar30 = (pCVar26->vtable)._195_GetHitboxTime.method;
    fVar31 = 0.155;
label_05c3670e:
    fVar31 = (*(pCVar26->vtable)._195_GetHitboxTime.methodPtr)(__this,fVar31,pMVar30);
    if (pCVar28 != (Characters_BaseHitbox_o *)0x0) {
      (*(pCVar28->klass->vtable)._5_Activate.methodPtr)
                (pCVar28,0.0,fVar31,(pCVar28->klass->vtable)._5_Activate.method);
      return;
    }
    goto label_05c38970;
  }
  pCVar11 = (__this->fields).BasicAnimations;
  if (pCVar11 == (Characters_BasicTitanAnimations_o *)0x0) goto label_05c38970;
  ppSVar2 = &(__this->fields)._currentStateAnimation;
  bVar15 = System_String__op_Equality(*ppSVar2,(pCVar11->fields).AttackHitBack,(MethodInfo *)0x0);
  if (bVar15) {
label_05c366ba:
    iVar9 = (__this->fields)._currentAttackStage;
    if ((fVar31 <= 0.635) || (iVar9 != 0)) {
      if (fVar31 <= 0.68) {
        return;
      }
      if (iVar9 != 1) {
        return;
      }
      (__this->fields)._currentAttackStage = 2;
      if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
      }
      pCVar12 = (__this->fields).BasicCache;
      if (pCVar12 != (Characters_BasicTitanComponentCache_o *)0x0) {
        pCVar28 = (pCVar12->fields).HandRHitbox;
        if (pCVar28 != (Characters_BaseHitbox_o *)0x0) {
          pSVar21 = TypeInfo_Effects_EffectPrefabs->static_fields->Boom3;
          pUVar19 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar28,(MethodInfo *)0x0)
          ;
          if (pUVar19 != (UnityEngine_Transform_o *)0x0) {
            UVar40 = UnityEngine_Transform__get_position(pUVar19,(MethodInfo *)0x0);
            fVar37 = UVar40.fields.z;
            uStack_118._0_4_ = UVar40.fields.x;
            uStack_118._4_4_ = UVar40.fields.y;
            fVar31 = (__this->fields).Size;
            if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
            }
            fStack_e8 = UVar46.fields.x;
            fStack_e4 = UVar46.fields.y;
            fStack_d8 = UVar46.fields.z;
label_05c36a72:
            UVar45.fields.y = uStack_118._4_4_;
            UVar45.fields.x = (float)uStack_118;
            UVar45.fields.z = fVar37;
            UVar46.fields.y = fStack_e4;
            UVar46.fields.x = fStack_e8;
            UVar46.fields.w = fVar32;
            UVar46.fields.z = fStack_d8;
            Effects_EffectSpawner__Spawn
                      (pSVar21,UVar45,UVar46,fVar31,true,(System_Object_array *)0x0,(MethodInfo *)0x0);
            return;
          }
        }
      }
      goto label_05c38970;
    }
    (__this->fields)._currentAttackStage = 1;
    pCVar12 = (__this->fields).BasicCache;
    if (pCVar12 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c38970;
    pCVar28 = (pCVar12->fields).HandRHitbox;
    pCVar26 = __this->klass;
    pMVar30 = (pCVar26->vtable)._195_GetHitboxTime.method;
    fVar31 = 0.055;
    goto label_05c3670e;
  }
  if (*ppCVar1 == (Characters_BasicTitanAnimations_o *)0x0) goto label_05c38970;
  bVar15 = System_String__op_Equality(*ppSVar2,((*ppCVar1)->fields).AttackHitFace,(MethodInfo *)0x0);
  if (bVar15) goto label_05c366ba;
  pSVar21 = (__this->fields)._currentAttack;
  if (pSVar21 == (System_String_o *)0x0) goto label_05c38970;
  bVar15 = System_String__StartsWith(pSVar21,"AttackSlap",(MethodInfo *)0x0);
  if (bVar15) {
    if ((__this->fields)._currentAttackStage != 0) {
      return;
    }
    uVar27 = (ulong)((__this->fields).AI == false);
    if (fVar31 < *(float *)(&g_data_0100ad38 + uVar27 * 4) || fVar31 == *(float *)(&g_data_0100ad38 + uVar27 * 4)) {
      return;
    }
    if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    }
    Characters_BaseCharacter__PlaySound
              ((Characters_BaseCharacter_o *)__this,TypeInfo_Characters_TitanSounds->static_fields->Swing1,
               (MethodInfo *)0x0);
    pCVar11 = (__this->fields).BasicAnimations;
    if (pCVar11 == (Characters_BasicTitanAnimations_o *)0x0) goto label_05c38970;
    uStack_118._0_4_ = *(float *)(&g_data_0100aa78 + uVar27 * 4);
    bVar15 = System_String__op_Equality(*ppSVar2,(pCVar11->fields).AttackSlapL,(MethodInfo *)0x0);
    if (bVar15) {
label_05c36bee:
      pCVar12 = (__this->fields).BasicCache;
      if (pCVar12 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c38970;
      pCVar28 = (pCVar12->fields).HandLHitbox;
    }
    else {
      if (*ppCVar1 == (Characters_BasicTitanAnimations_o *)0x0) goto label_05c38970;
      bVar15 = System_String__op_Equality(*ppSVar2,((*ppCVar1)->fields).AttackSlapHighL,(MethodInfo *)0x0);
      if (bVar15) goto label_05c36bee;
      if (*ppCVar1 == (Characters_BasicTitanAnimations_o *)0x0) goto label_05c38970;
      bVar15 = System_String__op_Equality(*ppSVar2,((*ppCVar1)->fields).AttackSlapLowL,(MethodInfo *)0x0);
      if (bVar15) goto label_05c36bee;
      pCVar12 = (__this->fields).BasicCache;
      if (pCVar12 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c38970;
      pCVar28 = (pCVar12->fields).HandRHitbox;
    }
label_05c36c05:
    fVar32 = (*(__this->klass->vtable)._195_GetHitboxTime.methodPtr)
                       (__this,(float)uStack_118,(__this->klass->vtable)._195_GetHitboxTime.method);
    goto joined_r0x05c35e8b;
  }
  if (*ppCVar1 == (Characters_BasicTitanAnimations_o *)0x0) goto label_05c38970;
  bVar15 = System_String__op_Equality
                     ((__this->fields)._currentAttackAnimation,((*ppCVar1)->fields).AttackKick,
                      (MethodInfo *)0x0);
  if (bVar15) {
    iVar9 = (__this->fields)._currentAttackStage;
    if ((fVar31 <= 0.39) || (iVar9 != 0)) {
      if (fVar31 <= 0.43) {
        return;
      }
      if (iVar9 != 1) {
        return;
      }
      (__this->fields)._currentAttackStage = 2;
      pCVar12 = (__this->fields).BasicCache;
      if (pCVar12 != (Characters_BasicTitanComponentCache_o *)0x0) {
        pCVar28 = (pCVar12->fields).FootLHitbox;
        if (pCVar28 != (Characters_BaseHitbox_o *)0x0) {
          pUVar19 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar28,(MethodInfo *)0x0)
          ;
          if (pUVar19 != (UnityEngine_Transform_o *)0x0) {
            UVar40 = UnityEngine_Transform__get_position(pUVar19,(MethodInfo *)0x0);
            position_00.fields.z = UVar40.fields.z;
            pCVar12 = (__this->fields).BasicCache;
            if (pCVar12 != (Characters_BasicTitanComponentCache_o *)0x0) {
              pUVar19 = (pCVar12->fields).Transform;
              if (pUVar19 != (UnityEngine_Transform_o *)0x0) {
                UVar41 = UnityEngine_Transform__get_position(pUVar19,(MethodInfo *)0x0);
                if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
                }
                pCVar12 = (__this->fields).BasicCache;
                if (pCVar12 != (Characters_BasicTitanComponentCache_o *)0x0) {
                  pUVar19 = (pCVar12->fields).Transform;
                  if (pUVar19 != (UnityEngine_Transform_o *)0x0) {
                    fStack_e8 = UVar40.fields.x;
                    pSVar21 = TypeInfo_Effects_EffectPrefabs->static_fields->Boom5;
                    UVar46 = UnityEngine_Transform__get_rotation(pUVar19,(MethodInfo *)0x0);
                    fVar31 = (__this->fields).Size;
                    if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
                    }
                    position_00.fields.x = fStack_e8;
                    position_00.fields.y = UVar41.fields.y;
                    Effects_EffectSpawner__Spawn
                              (pSVar21,position_00,UVar46,fVar31,true,(System_Object_array *)0x0,
                               (MethodInfo *)0x0);
                    UVar43.fields.z = position_00.fields.z;
                    UVar43.fields.x = fStack_e8;
                    UVar43.fields.y = UVar41.fields.y;
                    (*(__this->klass->vtable)._201_SpawnShatter.methodPtr)
                              (__this,UVar43,(__this->klass->vtable)._201_SpawnShatter.method);
                    return;
                  }
                }
              }
            }
          }
        }
      }
      goto label_05c38970;
    }
    pCVar12 = (__this->fields).BasicCache;
    if (pCVar12 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c38970;
    pCVar28 = (pCVar12->fields).FootLHitbox;
label_05c36c8a:
    fVar32 = (*(__this->klass->vtable)._195_GetHitboxTime.methodPtr)
                       (__this,0.09,(__this->klass->vtable)._195_GetHitboxTime.method);
    goto joined_r0x05c35e8b;
  }
  if (*ppCVar1 == (Characters_BasicTitanAnimations_o *)0x0) goto label_05c38970;
  bVar15 = System_String__op_Equality
                     ((__this->fields)._currentAttackAnimation,((*ppCVar1)->fields).AttackStomp,
                      (MethodInfo *)0x0);
  if (bVar15) {
    iVar9 = (__this->fields)._currentAttackStage;
    if ((fVar31 <= 0.38) || (iVar9 != 0)) {
      if (fVar31 <= 0.43) {
        return;
      }
      if (iVar9 != 1) {
        return;
      }
      (__this->fields)._currentAttackStage = 2;
      pCVar12 = (__this->fields).BasicCache;
      if (pCVar12 != (Characters_BasicTitanComponentCache_o *)0x0) {
        pCVar28 = (pCVar12->fields).FootLHitbox;
        if (pCVar28 != (Characters_BaseHitbox_o *)0x0) {
          pUVar19 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar28,(MethodInfo *)0x0)
          ;
          if (pUVar19 != (UnityEngine_Transform_o *)0x0) {
            UVar40 = UnityEngine_Transform__get_position(pUVar19,(MethodInfo *)0x0);
            position_01.fields.z = UVar40.fields.z;
            pCVar12 = (__this->fields).BasicCache;
            if (pCVar12 != (Characters_BasicTitanComponentCache_o *)0x0) {
              pUVar19 = (pCVar12->fields).Transform;
              if (pUVar19 != (UnityEngine_Transform_o *)0x0) {
                UVar41 = UnityEngine_Transform__get_position(pUVar19,(MethodInfo *)0x0);
                position_01.fields.y = UVar41.fields.y;
                uStack_f8._0_4_ = UVar40.fields.x;
                if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
                }
                pSVar21 = TypeInfo_Effects_EffectPrefabs->static_fields->Boom2;
                fVar31 = (__this->fields).Size;
                if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
                }
                position_01.fields.x = (float)uStack_f8;
                Effects_EffectSpawner__Spawn
                          (pSVar21,position_01,UVar46,fVar31,true,(System_Object_array *)0x0,(MethodInfo *)0x0
                          );
                UVar44.fields.z = position_01.fields.z;
                UVar44.fields.x = (float)uStack_f8;
                UVar44.fields.y = position_01.fields.y;
                (*(__this->klass->vtable)._201_SpawnShatter.methodPtr)
                          (__this,UVar44,(__this->klass->vtable)._201_SpawnShatter.method);
                return;
              }
            }
          }
        }
      }
      goto label_05c38970;
    }
    pCVar12 = (__this->fields).BasicCache;
    if (pCVar12 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c38970;
    pCVar28 = (pCVar12->fields).FootLHitbox;
    goto label_05c362dd;
  }
  pSVar21 = (__this->fields)._currentAttack;
  if (pSVar21 == (System_String_o *)0x0) goto label_05c38970;
  bVar15 = System_String__StartsWith(pSVar21,"AttackSwing",(MethodInfo *)0x0);
  if (bVar15) {
    iVar9 = (__this->fields)._currentAttackStage;
    if ((fVar31 <= 0.41) || (iVar9 != 0)) {
      if (fVar31 <= 0.45) {
        return;
      }
      if (iVar9 != 1) {
        return;
      }
      if (*ppCVar1 == (Characters_BasicTitanAnimations_o *)0x0) goto label_05c38970;
      bVar15 = System_String__op_Equality
                         ((__this->fields)._currentStateAnimation,((*ppCVar1)->fields).AttackSwingL,
                          (MethodInfo *)0x0);
      pCVar12 = (__this->fields).BasicCache;
      if (bVar15) {
        if (pCVar12 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c38970;
        pCVar28 = (pCVar12->fields).HandLHitbox;
      }
      else {
        if (pCVar12 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c38970;
        pCVar28 = (pCVar12->fields).HandRHitbox;
      }
      if (pCVar28 == (Characters_BaseHitbox_o *)0x0) goto label_05c38970;
      pUVar19 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar28,(MethodInfo *)0x0);
      if (pUVar19 == (UnityEngine_Transform_o *)0x0) goto label_05c38970;
      UVar40 = UnityEngine_Transform__get_position(pUVar19,(MethodInfo *)0x0);
      fVar37 = UVar40.fields.z;
      pCVar12 = (__this->fields).BasicCache;
      if (pCVar12 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c38970;
      pUVar19 = (pCVar12->fields).Transform;
      if (pUVar19 == (UnityEngine_Transform_o *)0x0) goto label_05c38970;
      UVar41 = UnityEngine_Transform__get_position(pUVar19,(MethodInfo *)0x0);
      fVar32 = UVar41.fields.y;
      uStack_f8._0_4_ = UVar40.fields.x;
      if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
      }
      pSVar21 = TypeInfo_Effects_EffectPrefabs->static_fields->Boom1;
      fVar31 = (__this->fields).Size;
      uStack_118 = CONCAT44(fVar32,(float)uStack_f8);
      if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
      }
      goto label_05c3662d;
    }
    if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    }
    Characters_BaseCharacter__PlaySound
              ((Characters_BaseCharacter_o *)__this,TypeInfo_Characters_TitanSounds->static_fields->Swing1,
               (MethodInfo *)0x0);
    pCVar11 = (__this->fields).BasicAnimations;
    if (pCVar11 == (Characters_BasicTitanAnimations_o *)0x0) goto label_05c38970;
    bVar15 = System_String__op_Equality
                       ((__this->fields)._currentStateAnimation,(pCVar11->fields).AttackSwingL,
                        (MethodInfo *)0x0);
    pCVar12 = (__this->fields).BasicCache;
    if (bVar15) {
      if (pCVar12 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c38970;
      pCVar28 = (pCVar12->fields).HandLHitbox;
    }
    else {
      if (pCVar12 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c38970;
      pCVar28 = (pCVar12->fields).HandRHitbox;
    }
    fVar31 = (*(__this->klass->vtable)._195_GetHitboxTime.methodPtr)
                       (__this,0.02,(__this->klass->vtable)._195_GetHitboxTime.method);
    fVar32 = (*(__this->klass->vtable)._195_GetHitboxTime.methodPtr)
                       (__this,0.02,(__this->klass->vtable)._195_GetHitboxTime.method);
    goto joined_r0x05c35da3;
  }
  pSVar21 = (__this->fields)._currentAttack;
  if (pSVar21 == (System_String_o *)0x0) goto label_05c38970;
  bVar15 = System_String__StartsWith(pSVar21,"AttackBite",(MethodInfo *)0x0);
  if (bVar15) {
    if (*ppCVar1 == (Characters_BasicTitanAnimations_o *)0x0) goto label_05c38970;
    bVar16 = System_String__op_Equality
                       ((__this->fields)._currentStateAnimation,((*ppCVar1)->fields).AttackBiteF,
                        (MethodInfo *)0x0);
    bVar15 = (__this->fields).AI;
    uVar27 = (ulong)(bVar15 == false);
    pfVar29 = (float *)(&g_data_0100afa8 + uVar27 * 4);
    if (bVar16) {
      pfVar29 = (float *)(&g_data_0100aea0 + uVar27 * 4);
    }
    iVar9 = (__this->fields)._currentAttackStage;
    if ((iVar9 != 0) || (fVar31 < *pfVar29 || fVar31 == *pfVar29)) {
      puVar20 = &g_data_0100ac08;
      if (bVar16) {
        puVar20 = &g_data_0100af30;
      }
      if (iVar9 != 1) {
        return;
      }
      if (fVar31 < *(float *)(puVar20 + (ulong)(bVar15 == false) * 4) ||
          fVar31 == *(float *)(puVar20 + (ulong)(bVar15 == false) * 4)) {
        return;
      }
      pCVar12 = (__this->fields).BasicCache;
      if (pCVar12 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c38970;
      pCVar28 = (pCVar12->fields).MouthHitbox;
      if (pCVar28 == (Characters_BaseHitbox_o *)0x0) goto label_05c38970;
      pUVar19 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar28,(MethodInfo *)0x0);
      if (pUVar19 == (UnityEngine_Transform_o *)0x0) goto label_05c38970;
      UVar40 = UnityEngine_Transform__get_position(pUVar19,(MethodInfo *)0x0);
      UVar41 = UnityEngine_Transform__get_up(pUVar19,(MethodInfo *)0x0);
      fVar31 = (__this->fields).Size;
      fVar32 = UVar41.fields.z * fVar31;
      auStack_98._4_4_ = fVar31 * UVar41.fields.y;
      auStack_98._0_4_ = fVar31 * UVar41.fields.x;
      fStack_90 = fVar31 * extraout_XMM0_Dc;
      fStack_8c = fVar31 * extraout_XMM0_Dd;
      if ((TypeInfo_Effects_EffectPrefabs->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectPrefabs);
        fVar31 = (__this->fields).Size;
      }
      uStack_118._0_4_ = UVar40.fields.x;
      uStack_118._4_4_ = UVar40.fields.y;
      position_02.fields.x = (float)uStack_118 + (float)auStack_98._0_4_;
      position_02.fields.y = uStack_118._4_4_ + (float)auStack_98._4_4_;
      position_02.fields.z = UVar40.fields.z + fVar32;
      pSVar21 = TypeInfo_Effects_EffectPrefabs->static_fields->TitanBite;
      if ((TypeInfo_Effects_EffectSpawner->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Effects_EffectSpawner);
      }
      Effects_EffectSpawner__Spawn
                (pSVar21,position_02,UVar46,fVar31,true,(System_Object_array *)0x0,(MethodInfo *)0x0);
      if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
      }
      pSVar21 = Characters_TitanSounds__GetRandomBite((MethodInfo *)0x0);
      Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)__this,pSVar21,(MethodInfo *)0x0);
      goto label_05c367dc;
    }
    pCVar12 = (__this->fields).BasicCache;
    if (pCVar12 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c38970;
    pCVar28 = (pCVar12->fields).MouthHitbox;
    goto label_05c36c8a;
  }
  pSVar21 = (__this->fields)._currentAttack;
  if (pSVar21 == (System_String_o *)0x0) goto label_05c38970;
  bVar15 = System_String__StartsWith(pSVar21,"AttackBrush",(MethodInfo *)0x0);
  if (bVar15) {
    if ((__this->fields)._currentAttackStage != 0) {
      return;
    }
    uVar27 = (ulong)((__this->fields).AI == false);
    if (fVar31 < *(float *)(&g_data_0100ac48 + uVar27 * 4) || fVar31 == *(float *)(&g_data_0100ac48 + uVar27 * 4)) {
      return;
    }
    if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    }
    Characters_BaseCharacter__PlaySound
              ((Characters_BaseCharacter_o *)__this,TypeInfo_Characters_TitanSounds->static_fields->Swing1,
               (MethodInfo *)0x0);
    pCVar11 = (__this->fields).BasicAnimations;
    if (pCVar11 == (Characters_BasicTitanAnimations_o *)0x0) goto label_05c38970;
    uStack_118._0_4_ = *(float *)(&g_data_0100ab98 + uVar27 * 4);
    bVar15 = System_String__op_Equality
                       ((__this->fields)._currentStateAnimation,(pCVar11->fields).AttackBrushChestL,
                        (MethodInfo *)0x0);
    pCVar12 = (__this->fields).BasicCache;
    if (bVar15) {
      if (pCVar12 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c38970;
      pCVar28 = (pCVar12->fields).HandLHitbox;
    }
    else {
      if (pCVar12 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c38970;
      pCVar28 = (pCVar12->fields).HandRHitbox;
    }
    goto label_05c36c05;
  }
  pSVar21 = (__this->fields)._currentAttack;
  if (pSVar21 == (System_String_o *)0x0) goto label_05c38970;
  bVar15 = System_String__StartsWith(pSVar21,"AttackGrab",(MethodInfo *)0x0);
  if (bVar15) {
    if ((__this->fields)._currentAttackStage != 0) {
      return;
    }
    (__this->fields)._currentAttackStage = 1;
    pCVar11 = (__this->fields).BasicAnimations;
    if (pCVar11 == (Characters_BasicTitanAnimations_o *)0x0) goto label_05c38970;
    bVar15 = System_String__op_Equality(*ppSVar2,(pCVar11->fields).AttackGrabCoreL,(MethodInfo *)0x0);
    if (bVar15) {
      pCVar12 = (__this->fields).BasicCache;
      if (pCVar12 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c38970;
      pCVar28 = (pCVar12->fields).HandLHitbox;
label_05c3772a:
      fVar31 = (*(__this->klass->vtable)._195_GetHitboxTime.methodPtr)
                         (__this,0.41,(__this->klass->vtable)._195_GetHitboxTime.method);
      pCVar26 = __this->klass;
      pMVar30 = (pCVar26->vtable)._195_GetHitboxTime.method;
      fVar32 = 0.12;
label_05c3775d:
      fVar32 = (*(pCVar26->vtable)._195_GetHitboxTime.methodPtr)(__this,fVar32,pMVar30);
    }
    else {
      if (*ppCVar1 == (Characters_BasicTitanAnimations_o *)0x0) goto label_05c38970;
      bVar15 = System_String__op_Equality(*ppSVar2,((*ppCVar1)->fields).AttackGrabCoreR,(MethodInfo *)0x0);
      if (bVar15) {
        pCVar12 = (__this->fields).BasicCache;
        if (pCVar12 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c38970;
        pCVar28 = (pCVar12->fields).HandRHitbox;
        goto label_05c3772a;
      }
      if (*ppCVar1 == (Characters_BasicTitanAnimations_o *)0x0) goto label_05c38970;
      bVar15 = System_String__op_Equality(*ppSVar2,((*ppCVar1)->fields).AttackGrabBackL,(MethodInfo *)0x0);
      if (bVar15) {
        pCVar12 = (__this->fields).BasicCache;
        if (pCVar12 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c38970;
        pCVar28 = (pCVar12->fields).HandLHitbox;
        pCVar26 = __this->klass;
        pMVar30 = (pCVar26->vtable)._195_GetHitboxTime.method;
        fVar31 = 0.32;
label_05c37954:
        fVar31 = (*(pCVar26->vtable)._195_GetHitboxTime.methodPtr)(__this,fVar31,pMVar30);
        pCVar26 = __this->klass;
        pMVar30 = (pCVar26->vtable)._195_GetHitboxTime.method;
        fVar32 = 0.16;
        goto label_05c3775d;
      }
      if (*ppCVar1 == (Characters_BasicTitanAnimations_o *)0x0) goto label_05c38970;
      bVar15 = System_String__op_Equality(*ppSVar2,((*ppCVar1)->fields).AttackGrabBackR,(MethodInfo *)0x0);
      if (bVar15) {
        pCVar12 = (__this->fields).BasicCache;
        if (pCVar12 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c38970;
        pCVar28 = (pCVar12->fields).HandRHitbox;
        fVar31 = (*(__this->klass->vtable)._195_GetHitboxTime.methodPtr)
                           (__this,0.38,(__this->klass->vtable)._195_GetHitboxTime.method);
        pCVar26 = __this->klass;
        pMVar30 = (pCVar26->vtable)._195_GetHitboxTime.method;
        fVar32 = 0.3;
        goto label_05c3775d;
      }
      if (*ppCVar1 == (Characters_BasicTitanAnimations_o *)0x0) goto label_05c38970;
      bVar15 = System_String__op_Equality(*ppSVar2,((*ppCVar1)->fields).AttackGrabStomachL,(MethodInfo *)0x0);
      if (bVar15) {
        pCVar12 = (__this->fields).BasicCache;
        if (pCVar12 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c38970;
        pCVar28 = (pCVar12->fields).HandLHitbox;
label_05c384c7:
        fVar31 = (*(__this->klass->vtable)._195_GetHitboxTime.methodPtr)
                           (__this,0.35,(__this->klass->vtable)._195_GetHitboxTime.method);
        pCVar26 = __this->klass;
        pMVar30 = (pCVar26->vtable)._195_GetHitboxTime.method;
        fVar32 = 0.19;
        goto label_05c3775d;
      }
      if (*ppCVar1 == (Characters_BasicTitanAnimations_o *)0x0) goto label_05c38970;
      bVar15 = System_String__op_Equality(*ppSVar2,((*ppCVar1)->fields).AttackGrabStomachR,(MethodInfo *)0x0);
      if (bVar15) {
        pCVar12 = (__this->fields).BasicCache;
        if (pCVar12 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c38970;
        pCVar28 = (pCVar12->fields).HandRHitbox;
        goto label_05c384c7;
      }
      if (*ppCVar1 == (Characters_BasicTitanAnimations_o *)0x0) goto label_05c38970;
      bVar15 = System_String__op_Equality(*ppSVar2,((*ppCVar1)->fields).AttackGrabHeadBackL,(MethodInfo *)0x0)
      ;
      if (bVar15) {
        pCVar12 = (__this->fields).BasicCache;
        if (pCVar12 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c38970;
        pCVar28 = (pCVar12->fields).HandRHitbox;
label_05c38573:
        pCVar26 = __this->klass;
        pMVar30 = (pCVar26->vtable)._195_GetHitboxTime.method;
        fVar31 = 0.46;
label_05c38585:
        fVar31 = (*(pCVar26->vtable)._195_GetHitboxTime.methodPtr)(__this,fVar31,pMVar30);
        pCVar26 = __this->klass;
        pMVar30 = (pCVar26->vtable)._195_GetHitboxTime.method;
        fVar32 = 0.05;
        goto label_05c3775d;
      }
      if (*ppCVar1 == (Characters_BasicTitanAnimations_o *)0x0) goto label_05c38970;
      bVar15 = System_String__op_Equality(*ppSVar2,((*ppCVar1)->fields).AttackGrabHeadBackR,(MethodInfo *)0x0)
      ;
      if (bVar15) {
        pCVar12 = (__this->fields).BasicCache;
        if (pCVar12 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c38970;
        pCVar28 = (pCVar12->fields).HandLHitbox;
        goto label_05c38573;
      }
      if (*ppCVar1 == (Characters_BasicTitanAnimations_o *)0x0) goto label_05c38970;
      bVar15 = System_String__op_Equality
                         (*ppSVar2,((*ppCVar1)->fields).AttackGrabHeadFrontL,(MethodInfo *)0x0);
      if (bVar15) {
        pCVar12 = (__this->fields).BasicCache;
        if (pCVar12 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c38970;
        pCVar28 = (pCVar12->fields).HandLHitbox;
label_05c3861f:
        fVar31 = (*(__this->klass->vtable)._195_GetHitboxTime.methodPtr)
                           (__this,0.42,(__this->klass->vtable)._195_GetHitboxTime.method);
        pCVar26 = __this->klass;
        pMVar30 = (pCVar26->vtable)._195_GetHitboxTime.method;
        fVar32 = 0.25;
        goto label_05c3775d;
      }
      if (*ppCVar1 == (Characters_BasicTitanAnimations_o *)0x0) goto label_05c38970;
      bVar15 = System_String__op_Equality
                         (*ppSVar2,((*ppCVar1)->fields).AttackGrabHeadFrontR,(MethodInfo *)0x0);
      if (bVar15) {
        pCVar12 = (__this->fields).BasicCache;
        if (pCVar12 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c38970;
        pCVar28 = (pCVar12->fields).HandRHitbox;
        goto label_05c3861f;
      }
      if (*ppCVar1 == (Characters_BasicTitanAnimations_o *)0x0) goto label_05c38970;
      bVar15 = System_String__op_Equality
                         (*ppSVar2,((*ppCVar1)->fields).AttackGrabGroundFrontL,(MethodInfo *)0x0);
      if (bVar15) {
        pCVar12 = (__this->fields).BasicCache;
        if (pCVar12 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c38970;
        pCVar28 = (pCVar12->fields).HandLHitbox;
label_05c386cb:
        pCVar26 = __this->klass;
        pMVar30 = (pCVar26->vtable)._195_GetHitboxTime.method;
        fVar31 = 0.42;
        goto label_05c37954;
      }
      if (*ppCVar1 == (Characters_BasicTitanAnimations_o *)0x0) goto label_05c38970;
      bVar15 = System_String__op_Equality
                         (*ppSVar2,((*ppCVar1)->fields).AttackGrabGroundFrontR,(MethodInfo *)0x0);
      if (bVar15) {
        pCVar12 = (__this->fields).BasicCache;
        if (pCVar12 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c38970;
        pCVar28 = (pCVar12->fields).HandRHitbox;
        goto label_05c386cb;
      }
      if (*ppCVar1 == (Characters_BasicTitanAnimations_o *)0x0) goto label_05c38970;
      bVar15 = System_String__op_Equality
                         (*ppSVar2,((*ppCVar1)->fields).AttackGrabGroundBackL,(MethodInfo *)0x0);
      if (bVar15) {
        pCVar12 = (__this->fields).BasicCache;
        if (pCVar12 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c38970;
        pCVar28 = (pCVar12->fields).HandLHitbox;
        pCVar26 = __this->klass;
        pMVar30 = (pCVar26->vtable)._195_GetHitboxTime.method;
        fVar31 = 0.35;
        goto label_05c38585;
      }
      if (*ppCVar1 == (Characters_BasicTitanAnimations_o *)0x0) goto label_05c38970;
      bVar15 = System_String__op_Equality
                         (*ppSVar2,((*ppCVar1)->fields).AttackGrabGroundBackR,(MethodInfo *)0x0);
      if (bVar15) {
        pCVar12 = (__this->fields).BasicCache;
        if (pCVar12 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c38970;
        pCVar28 = (pCVar12->fields).HandRHitbox;
        fVar31 = (*(__this->klass->vtable)._195_GetHitboxTime.methodPtr)
                           (__this,0.35,(__this->klass->vtable)._195_GetHitboxTime.method);
        pCVar26 = __this->klass;
        pMVar30 = (pCVar26->vtable)._195_GetHitboxTime.method;
        fVar32 = 0.05;
      }
      else {
        if (*ppCVar1 == (Characters_BasicTitanAnimations_o *)0x0) goto label_05c38970;
        bVar15 = System_String__op_Equality(*ppSVar2,((*ppCVar1)->fields).AttackGrabAirL,(MethodInfo *)0x0);
        if (bVar15) {
          pCVar12 = (__this->fields).BasicCache;
          if (pCVar12 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c38970;
          pCVar28 = (pCVar12->fields).HandLHitbox;
          fVar31 = (*(__this->klass->vtable)._195_GetHitboxTime.methodPtr)
                             (__this,0.3,(__this->klass->vtable)._195_GetHitboxTime.method);
          pCVar26 = __this->klass;
          pMVar30 = (pCVar26->vtable)._195_GetHitboxTime.method;
          fVar32 = 0.15;
        }
        else {
          if (*ppCVar1 == (Characters_BasicTitanAnimations_o *)0x0) goto label_05c38970;
          bVar15 = System_String__op_Equality(*ppSVar2,((*ppCVar1)->fields).AttackGrabAirR,(MethodInfo *)0x0);
          if (bVar15) {
label_05c38893:
            pCVar12 = (__this->fields).BasicCache;
            if (pCVar12 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c38970;
            pCVar28 = (pCVar12->fields).HandRHitbox;
label_05c388aa:
            pCVar26 = __this->klass;
            pMVar30 = (pCVar26->vtable)._195_GetHitboxTime.method;
            fVar31 = 0.38;
          }
          else {
            if (*ppCVar1 == (Characters_BasicTitanAnimations_o *)0x0) goto label_05c38970;
            bVar15 = System_String__op_Equality
                               (*ppSVar2,((*ppCVar1)->fields).AttackGrabAirFarL,(MethodInfo *)0x0);
            if (bVar15) {
              pCVar12 = (__this->fields).BasicCache;
              if (pCVar12 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c38970;
              pCVar28 = (pCVar12->fields).HandLHitbox;
              goto label_05c388aa;
            }
            if (*ppCVar1 == (Characters_BasicTitanAnimations_o *)0x0) goto label_05c38970;
            bVar15 = System_String__op_Equality
                               (*ppSVar2,((*ppCVar1)->fields).AttackGrabAirFarR,(MethodInfo *)0x0);
            if (bVar15) goto label_05c38893;
            if (*ppCVar1 == (Characters_BasicTitanAnimations_o *)0x0) goto label_05c38970;
            bVar15 = System_String__op_Equality
                               (*ppSVar2,((*ppCVar1)->fields).AttackGrabHighL,(MethodInfo *)0x0);
            if (bVar15) {
              pCVar12 = (__this->fields).BasicCache;
              if (pCVar12 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c38970;
              pCVar28 = (pCVar12->fields).HandLHitbox;
            }
            else {
              if (*ppCVar1 == (Characters_BasicTitanAnimations_o *)0x0) goto label_05c38970;
              bVar15 = System_String__op_Equality
                                 (*ppSVar2,((*ppCVar1)->fields).AttackGrabHighR,(MethodInfo *)0x0);
              if (!bVar15) {
                return;
              }
              pCVar12 = (__this->fields).BasicCache;
              if (pCVar12 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c38970;
              pCVar28 = (pCVar12->fields).HandRHitbox;
            }
            pCVar26 = __this->klass;
            pMVar30 = (pCVar26->vtable)._195_GetHitboxTime.method;
            fVar31 = 0.3;
          }
          fVar31 = (*(pCVar26->vtable)._195_GetHitboxTime.methodPtr)(__this,fVar31,pMVar30);
          pCVar26 = __this->klass;
          pMVar30 = (pCVar26->vtable)._195_GetHitboxTime.method;
          fVar32 = 0.17;
        }
      }
      fVar32 = (*(pCVar26->vtable)._195_GetHitboxTime.methodPtr)(__this,fVar32,pMVar30);
    }
    if (pCVar28 != (Characters_BaseHitbox_o *)0x0) {
      (*(pCVar28->klass->vtable)._5_Activate.methodPtr)
                (pCVar28,fVar31,fVar32,(pCVar28->klass->vtable)._5_Activate.method);
      return;
    }
    goto label_05c38970;
  }
  if (*ppCVar1 == (Characters_BasicTitanAnimations_o *)0x0) goto label_05c38970;
  bVar15 = System_String__op_Equality
                     ((__this->fields)._currentAttackAnimation,((*ppCVar1)->fields).AttackRockThrow,
                      (MethodInfo *)0x0);
  if (!bVar15) {
    return;
  }
  pCVar12 = (__this->fields).BasicCache;
  if (pCVar12 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c38970;
  pCVar28 = (pCVar12->fields).HandRHitbox;
  if (pCVar28 == (Characters_BaseHitbox_o *)0x0) goto label_05c38970;
  pUVar19 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pCVar28,(MethodInfo *)0x0);
  if (pUVar19 == (UnityEngine_Transform_o *)0x0) goto label_05c38970;
  UVar40 = UnityEngine_Transform__get_position(pUVar19,(MethodInfo *)0x0);
  fVar32 = UVar40.fields.z;
  fStack_d8 = UVar40.fields.x;
  if ((__this->fields).AI == false) {
    UVar41 = (*(__this->klass->vtable)._76_GetAimPoint.methodPtr)
                       (__this,(__this->klass->vtable)._76_GetAimPoint.method);
    fVar39 = UVar41.fields.z;
    (__this->fields)._rockThrowTarget.fields.x = UVar41.fields.x;
    (__this->fields)._rockThrowTarget.fields.y = UVar41.fields.y;
    (__this->fields)._rockThrowTarget.fields.z = fVar39;
    if ((0.1 < fVar31) && ((__this->fields)._currentAttackStage == 0)) {
      if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
      }
      Characters_BaseCharacter__PlaySound
                ((Characters_BaseCharacter_o *)__this,
                 TypeInfo_Characters_TitanSounds->static_fields->RockPickup,(MethodInfo *)0x0);
      (__this->fields)._currentAttackStage = 1;
      if ((TypeInfo_Spawnables_SpawnablePrefabs->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Spawnables_SpawnablePrefabs);
      }
      pSVar21 = TypeInfo_Spawnables_SpawnablePrefabs->static_fields->Rock1;
      uStack_f8 = il2cpp_runtime_helper_05c3e430(0);
      fVar38 = (__this->fields).Size;
      pSVar23 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
      pUVar13 = (__this->fields).Cache;
      if ((pUVar13 == (Utility_BaseComponentCache_o *)0x0) ||
         (pPVar14 = (pUVar13->fields).PhotonView, pPVar14 == (Photon_Pun_PhotonView_o *)0x0))
      goto label_05c38970;
      UStack_b0.x = (float)(pPVar14->fields).viewIdField;
      pIVar24 = il2cpp_vm_Object_Box(g_data_07556710,&UStack_b0);
      if (pSVar23 == (System_Object_array *)0x0) goto label_05c38970;
      il2cpp_codegen_array_element_type_check((System_Array_o *)pSVar23,pIVar24);
      il2cpp_runtime_helper_02ac8d90(pSVar23,0,pIVar24);
      rotation.fields.z = fVar39;
      rotation.fields.w = fVar37;
      rotation.fields.x = (float)uStack_f8;
      rotation.fields.y = (float)uStack_f8._4_4_;
      Spawnables_SpawnableSpawner__Spawn(pSVar21,UVar40,rotation,fVar38 * 1.5,pSVar23,(MethodInfo *)0x0);
    }
  }
  else {
    if ((0.1 < fVar31) && ((__this->fields)._currentAttackStage == 0)) {
      __this_00 = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)__this,
                             (MethodInfo_34B0830 *)
                             MethodInfo_UnityEngine_Component_GetComponent_BaseTitanAIController);
      pCVar22 = (Characters_BaseCharacter_o *)(__this->fields).TargetEnemy;
      if (pCVar22 == (Characters_BaseCharacter_o *)0x0) {
label_05c376d1:
        target = (Characters_BaseCharacter_o *)0x0;
      }
      else {
        bVar8 = (TypeInfo_Characters_BaseCharacter->_2).typeHierarchyDepth;
        if ((pCVar22->klass->_2).typeHierarchyDepth < bVar8) goto label_05c376d1;
        target = (Characters_BaseCharacter_o *)0x0;
        if ((pCVar22->klass->_2).typeHierarchy[(ulong)bVar8 - 1] ==
            (Il2CppClass *)TypeInfo_Characters_BaseCharacter) {
          target = pCVar22;
        }
      }
      if (__this_00 == (Controllers_BaseTitanAIController_o *)0x0) goto label_05c38970;
      uVar35 = 0;
      fVar37 = fVar32;
      bVar15 = Controllers_BaseTitanAIController__HasRockThrowLineOfSight
                         (__this_00,UVar40,target,(MethodInfo *)0x0);
      if (bVar15) {
        (__this->fields)._rockThrowTargetCharacter = target;
      }
      else {
        uVar35 = 0;
        fVar37 = fVar32;
        pCVar22 = Controllers_BaseTitanAIController__FindRockThrowTarget
                            (__this_00,UVar40,true,(MethodInfo *)0x0);
        (__this->fields)._rockThrowTargetCharacter = pCVar22;
      }
      Il2CppCodeGenWriteBarrier(&(__this->fields)._rockThrowTargetCharacter);
      pCVar22 = (__this->fields)._rockThrowTargetCharacter;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar15 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)pCVar22,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar15) {
        targetAddress = &(__this->fields)._rockThrowTargetCharacter;
        uVar35 = 0;
        fVar37 = fVar32;
        pCVar22 = Controllers_BaseTitanAIController__FindRockThrowTarget
                            (__this_00,UVar40,false,(MethodInfo *)0x0);
        *targetAddress = pCVar22;
        Il2CppCodeGenWriteBarrier(targetAddress);
      }
      if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
      }
      Characters_BaseCharacter__PlaySound
                ((Characters_BaseCharacter_o *)__this,
                 TypeInfo_Characters_TitanSounds->static_fields->RockPickup,(MethodInfo *)0x0);
      (__this->fields)._currentAttackStage = 1;
      if ((TypeInfo_Spawnables_SpawnablePrefabs->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Spawnables_SpawnablePrefabs);
      }
      pSVar21 = TypeInfo_Spawnables_SpawnablePrefabs->static_fields->Rock1;
      uStack_f8 = il2cpp_runtime_helper_05c3e430(0);
      fVar39 = (__this->fields).Size;
      pSVar23 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
      pUVar13 = (__this->fields).Cache;
      if (pUVar13 == (Utility_BaseComponentCache_o *)0x0) goto label_05c38970;
      pPVar14 = (pUVar13->fields).PhotonView;
      if (pPVar14 == (Photon_Pun_PhotonView_o *)0x0) goto label_05c38970;
      UStack_b0.x = (float)(pPVar14->fields).viewIdField;
      pIVar24 = il2cpp_vm_Object_Box(g_data_07556710,&UStack_b0);
      if (pSVar23 == (System_Object_array *)0x0) goto label_05c38970;
      il2cpp_codegen_array_element_type_check((System_Array_o *)pSVar23,pIVar24);
      il2cpp_runtime_helper_02ac8d90(pSVar23,0,pIVar24);
      rotation_00.fields.z = fVar37;
      rotation_00.fields.w = (float)uVar35;
      rotation_00.fields.x = (float)uStack_f8;
      rotation_00.fields.y = (float)uStack_f8._4_4_;
      Spawnables_SpawnableSpawner__Spawn(pSVar21,UVar40,rotation_00,fVar39 * 1.5,pSVar23,(MethodInfo *)0x0);
    }
    pCVar22 = (__this->fields)._rockThrowTargetCharacter;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar15 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pCVar22,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar15) {
      pCVar22 = (__this->fields)._rockThrowTargetCharacter;
      if (pCVar22 == (Characters_BaseCharacter_o *)0x0) goto label_05c38970;
      bVar15 = (*(pCVar22->klass->vtable)._73_ValidTarget.methodPtr)
                         (pCVar22,(pCVar22->klass->vtable)._73_ValidTarget.method);
      if (bVar15) {
        pCVar22 = (__this->fields)._rockThrowTargetCharacter;
        if (pCVar22 == (Characters_BaseCharacter_o *)0x0) goto label_05c38970;
        UVar41 = (*(pCVar22->klass->vtable)._72_GetPosition.methodPtr)
                           (pCVar22,(pCVar22->klass->vtable)._72_GetPosition.method);
        fVar37 = (float)il2cpp_runtime_helper_05956b50(fStack_d8,fVar32,UVar41.fields.x,UVar41.fields.z,0);
        pCVar22 = (__this->fields)._rockThrowTargetCharacter;
        if (pCVar22 == (Characters_BaseCharacter_o *)0x0) goto label_05c38970;
        fVar39 = fVar37 / (__this->fields).RockThrow1Speed;
        UVar41 = (*(pCVar22->klass->vtable)._72_GetPosition.methodPtr)
                           (pCVar22,(pCVar22->klass->vtable)._72_GetPosition.method);
        auStack_98._0_4_ = UVar41.fields.z;
        pCVar22 = (__this->fields)._rockThrowTargetCharacter;
        if (pCVar22 == (Characters_BaseCharacter_o *)0x0) goto label_05c38970;
        fVar37 = fVar37 / 120.0;
        fVar38 = 1.0;
        if (fVar37 <= 1.0) {
          fVar38 = fVar37;
        }
        fVar38 = (float)(-(uint)(0.0 <= fVar37) & (uint)fVar38);
        UVar45 = Characters_BaseCharacter__GetVelocity(pCVar22,(MethodInfo *)0x0);
        UStack_c8.x = UVar41.fields.x;
        UStack_c8.y = UVar41.fields.y;
        (__this->fields)._rockThrowTarget.fields.x = UStack_c8.x + fVar38 * fVar39 * UVar45.fields.x;
        (__this->fields)._rockThrowTarget.fields.y = UStack_c8.y + fVar38 * fVar39 * UVar45.fields.y;
        (__this->fields)._rockThrowTarget.fields.z =
             (float)auStack_98._0_4_ + UVar45.fields.z * fVar39 * fVar38;
      }
    }
  }
  fStack_d4 = UVar40.fields.y;
  if ((__this->fields).AI == false) {
label_05c37d3c:
    pUVar13 = (__this->fields).Cache;
    if ((pUVar13 == (Utility_BaseComponentCache_o *)0x0) ||
       (pUVar19 = (pUVar13->fields).Transform, pUVar19 == (UnityEngine_Transform_o *)0x0)) goto label_05c38970;
    UVar41 = UnityEngine_Transform__get_forward(pUVar19,(MethodInfo *)0x0);
    UStack_c8._0_8_ = UVar41.fields._0_8_;
    auStack_98._0_4_ = UVar41.fields.z;
label_05c37d6e:
    uVar3 = (__this->fields)._rockThrowTarget.fields.x;
    uVar6 = (__this->fields)._rockThrowTarget.fields.y;
    fVar39 = (__this->fields)._rockThrowTarget.fields.z - fVar32;
    uStack_78 = CONCAT44((float)uVar6 - fStack_d4,(float)uVar3 - fStack_d8);
    fVar37 = fVar39;
    fStack_70 = fVar39;
    uVar35 = il2cpp_runtime_helper_05bbcf10(0);
    uStack_88 = il2cpp_runtime_helper_05bbcf50((float)uVar3 - fStack_d8,fVar39,uVar35,fVar37,0);
    fStack_80 = fVar39;
    if ((__this->fields).AI == false) {
      (__this->fields)._rockThrowWillHitSelf = false;
    }
    else {
      UStack_108._0_8_ = il2cpp_runtime_helper_059d80e0(&uStack_78);
      pMVar30 = (MethodInfo *)0x0;
      fVar37 = (float)il2cpp_runtime_helper_0599adc0(&uStack_78);
      direction.fields.z = fVar39;
      direction.fields.x = UStack_108.x;
      direction.fields.y = UStack_108.y;
      bVar15 = Characters_BasicTitan__WouldRockHitSelf(__this,UVar40,direction,fVar37,pMVar30);
      (__this->fields)._rockThrowWillHitSelf = bVar15;
      if (bVar15) goto label_05c38086;
    }
    fVar37 = (__this->fields).RockThrowCloseAimAngle;
    fVar39 = (__this->fields).RockThrowMaxAimAngle;
    fVar38 = (__this->fields).Size;
    fStack_9c = (__this->fields).RockThrowCloseAimDistance * fVar38;
    auStack_48._0_4_ = fVar38 * (__this->fields).RockThrowFullAimDistance;
    fVar33 = (float)il2cpp_runtime_helper_0599adc0(&uStack_88,0);
    fVar38 = 0.0;
    if ((fStack_9c != (float)auStack_48._0_4_) || (NAN(fStack_9c) || NAN((float)auStack_48._0_4_))) {
      fVar33 = (fVar33 - fStack_9c) / ((float)auStack_48._0_4_ - fStack_9c);
      fVar38 = 1.0;
      if (fVar33 <= 1.0) {
        fVar38 = fVar33;
      }
      fVar38 = (float)(-(uint)(0.0 <= fVar33) & (uint)fVar38);
    }
    fVar33 = 0.0;
    if (0.0 <= fVar38) {
      fVar33 = fVar38;
    }
    fVar39 = (fVar39 - fVar37) * fVar33;
    UStack_58._0_8_ = il2cpp_runtime_helper_059d80e0(&uStack_88,0);
    UStack_b0.x = UStack_c8.x;
    UStack_b0.y = UStack_c8.y;
    UStack_b0.z = (float)auStack_98._0_4_;
    UStack_58.z = fVar33;
    UVar41 = UnityEngine_Vector3__Internal_RotateTowards
                       ((UnityEngine_Vector3_o *)&UStack_b0,(UnityEngine_Vector3_o *)&UStack_58,
                        (fVar39 + fVar37) * 0.017453292,0.0,(MethodInfo *)0x0);
    fVar38 = UVar41.fields.z;
    fVar37 = (float)il2cpp_runtime_helper_0599adc0(&uStack_88);
    uVar35 = 0;
    uVar36 = 0;
    fVar39 = fVar38 * fVar37 + fVar32;
    auStack_98._0_4_ = fVar39;
    uVar34 = il2cpp_runtime_helper_05bbcf10(0);
    UStack_108.x = UVar41.fields.x;
    UStack_108.y = UVar41.fields.y;
    (__this->fields)._rockThrowTarget.fields.x =
         uStack_78._4_4_ * (float)uVar34 + fVar37 * UStack_108.x + fStack_d8;
    (__this->fields)._rockThrowTarget.fields.y =
         uStack_78._4_4_ * (float)((ulong)uVar34 >> 0x20) + fVar37 * UStack_108.y + fStack_d4;
    (__this->fields)._rockThrowTarget.fields.z = fVar39 * uStack_78._4_4_ + (float)auStack_98._0_4_;
    pUVar13 = (__this->fields).Cache;
    if ((pUVar13 == (Utility_BaseComponentCache_o *)0x0) ||
       (pUVar19 = (pUVar13->fields).Transform, pUVar19 == (UnityEngine_Transform_o *)0x0)) goto label_05c38970;
    UVar46 = UnityEngine_Transform__get_rotation(pUVar19,(MethodInfo *)0x0);
    fStack_90 = (float)uVar35;
    auStack_98 = (undefined1  [8])UVar46.fields._8_8_;
    fStack_8c = (float)uVar36;
    fVar39 = 0.0;
    UStack_108._0_8_ = il2cpp_runtime_helper_05be1910(UStack_108.x);
    fVar37 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    UStack_b0.z = auStack_98._0_4_;
    UStack_b0.w = auStack_98._4_4_;
    UStack_58.x = UStack_108.x;
    UStack_58.y = UStack_108.y;
    UStack_b0._0_8_ = UVar46.fields._0_8_;
    UStack_58.z = fVar38;
    UStack_58.w = fVar39;
    UVar46 = UnityEngine_Quaternion__Internal_Lerp
                       ((UnityEngine_Quaternion_o *)&UStack_b0,(UnityEngine_Quaternion_o *)&UStack_58,
                        fVar37 * 5.0,(MethodInfo *)0x0);
    UnityEngine_Transform__set_rotation(pUVar19,UVar46,(MethodInfo *)0x0);
  }
  else {
    pCVar22 = (__this->fields)._rockThrowTargetCharacter;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar15 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pCVar22,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar15) {
      if ((__this->fields).AI == false) goto label_05c37d3c;
      UStack_c8.x = (__this->fields)._rockThrowForward.fields.x;
      UStack_c8.y = (__this->fields)._rockThrowForward.fields.y;
      auStack_98._0_4_ = (__this->fields)._rockThrowForward.fields.z;
      goto label_05c37d6e;
    }
  }
label_05c38086:
  if (fVar31 <= 0.61) {
    return;
  }
  if ((__this->fields)._currentAttackStage != 1) {
    return;
  }
  pUVar13 = (__this->fields).Cache;
  if (pUVar13 != (Utility_BaseComponentCache_o *)0x0) {
    pPVar14 = (pUVar13->fields).PhotonView;
    pSVar23 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,0);
    if (pPVar14 != (Photon_Pun_PhotonView_o *)0x0) {
      Photon_Pun_PhotonView__RPC(pPVar14,"ClearRockRPC",0,pSVar23,(MethodInfo *)0x0);
      if ((__this->fields).AI != false) {
        pCVar22 = (__this->fields)._rockThrowTargetCharacter;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar15 = UnityEngine_Object__op_Equality
                           ((UnityEngine_Object_o *)pCVar22,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar15) {
label_05c367dc:
          (__this->fields)._currentAttackStage = 2;
          return;
        }
        pCVar22 = (__this->fields)._rockThrowTargetCharacter;
        if (pCVar22 == (Characters_BaseCharacter_o *)0x0) goto label_05c38970;
        bVar15 = (*(pCVar22->klass->vtable)._73_ValidTarget.methodPtr)
                           (pCVar22,(pCVar22->klass->vtable)._73_ValidTarget.method);
        if (!bVar15) goto label_05c367dc;
      }
      iVar17 = UnityEngine_Random__Range_690e2b0(0,2,(MethodInfo *)0x0);
      uVar10 = (TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor;
      if (iVar17 == 0) {
        if (uVar10 == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
        }
        lVar25 = 0x150;
      }
      else {
        if (uVar10 == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
        }
        lVar25 = 0x158;
      }
      Characters_BaseCharacter__PlaySound
                ((Characters_BaseCharacter_o *)__this,
                 *(System_String_o **)
                  ((long)&TypeInfo_Characters_TitanSounds->static_fields->Footstep1 + lVar25),
                 (MethodInfo *)0x0);
      (__this->fields)._currentAttackStage = 2;
      uVar4 = (__this->fields)._rockThrowTarget.fields.x;
      uVar7 = (__this->fields)._rockThrowTarget.fields.y;
      fVar31 = (__this->fields)._rockThrowTarget.fields.z - fVar32;
      uStack_68 = CONCAT44((float)uVar7 - fStack_d4,(float)uVar4 - fStack_d8);
      pMVar30 = (MethodInfo *)0x0;
      fStack_60 = fVar31;
      uVar34 = il2cpp_runtime_helper_059d80e0(&uStack_68);
      if ((__this->fields).AI != false) {
        if ((__this->fields)._rockThrowWillHitSelf != false) {
label_05c38259:
          (*(__this->klass->vtable)._154_Stun.methodPtr)(__this,(__this->klass->vtable)._154_Stun.method);
          return;
        }
        uVar5 = (__this->fields)._rockThrowTarget.fields.x;
        fVar32 = (float)il2cpp_runtime_helper_05956b50(fStack_d8,fVar32,uVar5,(__this->fields)._rockThrowTarget.fields.z,0);
        direction_00.fields.z = fVar31;
        direction_00.fields.x = (float)(int)uVar34;
        direction_00.fields.y = (float)(int)((ulong)uVar34 >> 0x20);
        bVar15 = Characters_BasicTitan__WouldRockHitSelf(__this,UVar40,direction_00,fVar32,pMVar30);
        if (bVar15) goto label_05c38259;
      }
      if ((TypeInfo_Projectiles_ProjectilePrefabs->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Projectiles_ProjectilePrefabs);
      }
      pSVar21 = TypeInfo_Projectiles_ProjectilePrefabs->static_fields->Rock1;
      uVar35 = 0;
      fVar32 = fVar31;
      uStack_f8 = il2cpp_runtime_helper_05be1910((float)uVar34,0);
      auStack_48 = ZEXT416((uint)(__this->fields).RockThrow1Speed);
      fVar37 = fVar32;
      auStack_98 = (undefined1  [8])il2cpp_runtime_helper_05b8d690(0);
      fStack_90 = (float)extraout_XMM0_Dc_00;
      fStack_8c = (float)extraout_XMM0_Dd_00;
      pUVar13 = (__this->fields).Cache;
      fStack_9c = fVar37;
      if ((pUVar13 != (Utility_BaseComponentCache_o *)0x0) &&
         (pPVar14 = (pUVar13->fields).PhotonView, pPVar14 != (Photon_Pun_PhotonView_o *)0x0)) {
        iVar17 = (pPVar14->fields).viewIdField;
        pSVar23 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
        UStack_b0.x = (__this->fields).Size * 1.5;
        pIVar24 = il2cpp_vm_Object_Box(g_data_07556740,&UStack_b0);
        if (pSVar23 != (System_Object_array *)0x0) {
          fVar31 = fVar31 * (float)auStack_48._0_4_;
          fVar37 = (float)uVar34 * (float)auStack_48._0_4_;
          fVar39 = (float)((ulong)uVar34 >> 0x20) * (float)auStack_48._0_4_;
          il2cpp_codegen_array_element_type_check((System_Array_o *)pSVar23,pIVar24);
          il2cpp_runtime_helper_02ac8d90(pSVar23,0,pIVar24);
          rotation_01.fields.z = fVar32;
          rotation_01.fields.w = (float)uVar35;
          rotation_01.fields.x = (float)uStack_f8;
          rotation_01.fields.y = (float)uStack_f8._4_4_;
          gravity.fields.z = fStack_9c;
          gravity.fields.x = (float)auStack_98._0_4_;
          gravity.fields.y = (float)auStack_98._4_4_;
          velocity.fields.z = fVar31;
          velocity.fields.x = fVar37;
          velocity.fields.y = fVar39;
          Projectiles_ProjectileSpawner__Spawn
                    (pSVar21,UVar40,rotation_01,velocity,gravity,10.0,iVar17,"",pSVar23,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_05c38970:
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$WouldRockHitSelf
// il2cpp: bool Characters_BasicTitan__WouldRockHitSelf (Characters_BasicTitan_o* __this, UnityEngine_Vector3_o hand, UnityEngine_Vector3_o direction, float distance, const MethodInfo* method);
// 0x5c38980
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c38a5c: jmp 0x5c38a88

bool Characters_BasicTitan__WouldRockHitSelf
               (Characters_BasicTitan_o *__this,UnityEngine_Vector3_o hand,UnityEngine_Vector3_o direction,
               float distance,MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  Characters_BasicTitanComponentCache_o *pCVar3;
  UnityEngine_Collider_o *__this_00;
  UnityEngine_CapsuleCollider_o *__this_01;
  Utility_BaseComponentCache_o *pUVar4;
  undefined1 auVar5 [16];
  UnityEngine_Ray_o ray;
  bool bVar6;
  UnityEngine_Transform_o *pUVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined4 in_XMM2_Dc;
  undefined4 in_XMM2_Dd;
  UnityEngine_Vector3_o UVar13;
  UnityEngine_Vector3_o UVar14;
  undefined8 local_a8;
  float local_88;
  float fStack_84;
  undefined4 uStack_64;
  undefined4 uStack_60;
  float local_58;
  UnityEngine_RaycastHit_o local_48;
  
  fVar9 = direction.fields.z;
  auVar12._8_4_ = in_XMM2_Dc;
  auVar12._0_8_ = direction.fields._0_8_;
  auVar12._12_4_ = in_XMM2_Dd;
  if (Il2CppMethodInitialized_075477dd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_CapsuleCollider);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_075477dd = '\x01';
  }
  local_48.fields.m_UV.fields.x = 0.0;
  local_48.fields.m_UV.fields.y = 0.0;
  local_48.fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
  local_48.fields.m_Normal.fields.y = 0.0;
  local_48.fields.m_Normal.fields.z = 0.0;
  local_48.fields.m_FaceID = 0;
  local_48.fields.m_Distance = 0.0;
  local_48.fields.m_Point.fields.x = 0.0;
  local_48.fields.m_Point.fields.y = 0.0;
  local_48.fields.m_Point.fields.z = 0.0;
  local_48.fields.m_Normal.fields.x = 0.0;
  pCVar3 = (__this->fields).BasicCache;
  if (pCVar3 != (Characters_BasicTitanComponentCache_o *)0x0) {
    __this_00 = (pCVar3->fields).Movebox;
    if (Il2CppMethodInitialized_0753e729 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_0753e729 = '\x01';
      uVar2 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar2 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    }
    if (uVar2 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    local_a8._0_4_ = direction.fields.x;
    local_a8._4_4_ = direction.fields.y;
    fVar8 = fVar9 * fVar9 + local_a8._4_4_ * local_a8._4_4_ + (float)local_a8 * (float)local_a8;
    if (fVar8 < 0.0) {
      fVar8 = sqrtf(fVar8);
    }
    else {
      fVar8 = SQRT(fVar8);
    }
    uVar11 = 0;
    fVar10 = 0.0;
    if (1e-05 < fVar8) {
      fVar10 = fVar9 / fVar8;
      auVar5._4_4_ = fVar8;
      auVar5._0_4_ = fVar8;
      auVar5._8_4_ = fVar8;
      auVar5._12_4_ = fVar8;
      auVar12 = divps(auVar12,auVar5);
      uVar11 = auVar12._0_8_;
    }
    if (__this_00 != (UnityEngine_Collider_o *)0x0) {
      uStack_64 = (undefined4)uVar11;
      uStack_60 = (undefined4)((ulong)uVar11 >> 0x20);
      ray.fields.m_Direction.fields.z = fVar10;
      ray.fields.m_Direction.fields.y = (float)uStack_60;
      ray.fields.m_Direction.fields.x = (float)uStack_64;
      ray.fields.m_Origin.fields.z = hand.fields.z;
      ray.fields.m_Origin.fields.x = hand.fields.x;
      ray.fields.m_Origin.fields.y = hand.fields.y;
      bVar6 = UnityEngine_Collider__Raycast_69d8af0(__this_00,ray,&local_48,distance,(MethodInfo *)0x0);
      if (bVar6) {
        return true;
      }
      pCVar3 = (__this->fields).BasicCache;
      if (pCVar3 != (Characters_BasicTitanComponentCache_o *)0x0) {
        __this_01 = (UnityEngine_CapsuleCollider_o *)(pCVar3->fields).Movebox;
        if (__this_01 != (UnityEngine_CapsuleCollider_o *)0x0) {
          bVar1 = (TypeInfo_UnityEngine_CapsuleCollider->_2).typeHierarchyDepth;
          if (((__this_01->klass->_2).typeHierarchyDepth < bVar1) ||
             ((__this_01->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_UnityEngine_CapsuleCollider)) {
            il2cpp_codegen_raise_invalid_cast_exception(__this_01);
          }
        }
        if (__this_01 != (UnityEngine_CapsuleCollider_o *)0x0) {
          fVar8 = UnityEngine_CapsuleCollider__get_radius(__this_01,(MethodInfo *)0x0);
          pUVar7 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
          if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
            UVar13 = UnityEngine_Transform__get_lossyScale(pUVar7,(MethodInfo *)0x0);
            pUVar7 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
            if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
              local_88 = hand.fields.x;
              fStack_84 = hand.fields.y;
              fVar10 = distance * local_a8._4_4_ + fStack_84;
              bVar6 = false;
              UVar14 = UnityEngine_Transform__get_lossyScale(pUVar7,(MethodInfo *)0x0);
              if (fVar10 < fStack_84) {
                pUVar4 = (__this->fields).Cache;
                if ((pUVar4 == (Utility_BaseComponentCache_o *)0x0) ||
                   (pUVar7 = (pUVar4->fields).Transform, pUVar7 == (UnityEngine_Transform_o *)0x0))
                goto label_05c38cb1;
                local_58 = UVar13.fields.x;
                if (local_58 <= UVar14.fields.z) {
                  local_58 = UVar14.fields.z;
                }
                UVar13 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
                if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
                }
                UVar14.fields.z = fVar9 * distance + hand.fields.z;
                UVar14.fields.x = distance * (float)local_a8 + local_88;
                UVar14.fields.y = fVar10;
                fVar9 = Utility_Util__DistanceIgnoreY(UVar14,UVar13,(MethodInfo *)0x0);
                bVar6 = fVar9 <= fVar8 * local_58 * 1.5;
              }
              return bVar6;
            }
          }
        }
      }
    }
  }
label_05c38cb1:
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$UpdateEat
// il2cpp: void Characters_BasicTitan__UpdateEat (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x5c38cc0

void Characters_BasicTitan__UpdateEat(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  Characters_Human_o *pCVar1;
  bool bVar2;
  MethodInfo *method_00;
  int32_t iVar3;
  
  if (Il2CppMethodInitialized_075477de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"TitanEat");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_075477de = '\x01';
  }
  if ((__this->fields).State != 0x1b) {
    pCVar1 = (__this->fields).HoldHuman;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((bVar2) && (4.72 < (__this->fields)._stateTimeLeft)) {
      (*(__this->klass->vtable)._164_IdleWait.methodPtr)
                (__this,0.5,(__this->klass->vtable)._164_IdleWait.method);
      return;
    }
    if (((__this->fields).State != 0x1b) && ((__this->fields)._stateTimeLeft <= 4.72)) {
      pCVar1 = (__this->fields).HoldHuman;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        if ((__this->fields).CustomDamageEnabled == false) {
          iVar3 = 100;
        }
        else {
          iVar3 = (__this->fields).CustomDamage;
        }
        pCVar1 = (__this->fields).HoldHuman;
        (*(__this->klass->vtable)._173_Ungrab.methodPtr)(__this,(__this->klass->vtable)._173_Ungrab.method);
        if (pCVar1 == (Characters_Human_o *)0x0) goto label_05c38e8d;
        (*(pCVar1->klass->vtable)._95_GetHit.methodPtr)
                  (pCVar1,(Characters_BaseCharacter_o *)__this,iVar3,"TitanEat",
                   "",(pCVar1->klass->vtable)._95_GetHit.method);
      }
    }
  }
  if ((__this->fields).AI == false) {
    pCVar1 = (__this->fields).HoldHuman;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    method_00 = (MethodInfo *)0x0;
    bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pCVar1,(MethodInfo *)0x0);
    if (bVar2) {
      pCVar1 = (__this->fields).HoldHuman;
      if (pCVar1 == (Characters_Human_o *)0x0) {
label_05c38e8d:
        ThrowNullReferenceException();
      }
      if (((pCVar1->fields).Dead == false) && ((__this->fields).HoldHumanLeft == false)) {
        bVar2 = UnityEngine_Input__get_anyKeyDown((MethodInfo *)0x0);
        if ((bVar2) || ((__this->fields).State == 0x1b)) {
          Characters_BasicTitan__UpdateThrowHuman(__this,method_00);
          return;
        }
      }
    }
  }
  return;
}


// Characters.BasicTitan$$UpdateThrowHuman
// il2cpp: void Characters_BasicTitan__UpdateThrowHuman (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x5c38ea0

void Characters_BasicTitan__UpdateThrowHuman(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Characters_BasicTitanAnimations_o *pCVar5;
  Characters_AnimationHandler_o *pCVar6;
  System_String_o *name;
  Utility_BaseComponentCache_o *pUVar7;
  Characters_BasicTitanComponentCache_o *pCVar8;
  Characters_BaseHitbox_o *__this_00;
  Characters_Human_o *__this_01;
  Photon_Realtime_Player_o *targetPlayer;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  bool bVar13;
  UnityEngine_Vector3_StaticFields *pUVar14;
  UnityEngine_Transform_o *pUVar15;
  Photon_Pun_PhotonView_o *pPVar16;
  UnityEngine_Object_o *x;
  Photon_Pun_PhotonView_o *pPVar17;
  System_Object_array *parameters;
  Il2CppObject *pIVar18;
  Il2CppObject *pIVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  float fVar23;
  undefined4 extraout_XMM0_Dc_01;
  float extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  float fVar24;
  undefined4 extraout_XMM0_Dd_01;
  float extraout_XMM0_Dd_02;
  undefined1 auVar25 [4];
  undefined4 uVar26;
  undefined4 uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  UnityEngine_Quaternion_o UVar30;
  UnityEngine_Quaternion_o UVar31;
  UnityEngine_Vector3_o UVar32;
  UnityEngine_Vector3_o UVar33;
  UnityEngine_Vector3_o UVar34;
  float fStack_a8;
  UnityEngine_Vector3_Fields UStack_98;
  UnityEngine_Vector3_Fields UStack_88;
  float fStack_7c;
  undefined1 auStack_78 [4];
  undefined1 auStack_74 [8];
  float fStack_6c;
  undefined1 auStack_68 [12];
  float fStack_5c;
  UnityEngine_Quaternion_Fields UStack_58;
  undefined1 auStack_48 [8];
  float fStack_40;
  float fStack_3c;
  
  if (Il2CppMethodInitialized_075477df == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    il2cpp_codegen_initialize_runtime_metadata(&"BlowAwayRPC");
    Il2CppMethodInitialized_075477df = '\x01';
  }
  if ((__this->fields).State != 0x1b) {
    pCVar5 = (__this->fields).BasicAnimations;
    if ((pCVar5 == (Characters_BasicTitanAnimations_o *)0x0) ||
       (pCVar6 = (__this->fields).Animation, pCVar6 == (Characters_AnimationHandler_o *)0x0))
    goto label_05c395e2;
    name = (pCVar5->fields).AttackRockThrow;
    fVar20 = Characters_AnimationHandler__GetLength(pCVar6,name,(MethodInfo *)0x0);
    (__this->fields)._needFreshCore = true;
    pCVar6 = (__this->fields).Animation;
    if (pCVar6 == (Characters_AnimationHandler_o *)0x0) goto label_05c395e2;
    Characters_AnimationHandler__SetCullingType(pCVar6,false,(MethodInfo *)0x0);
    (*(__this->klass->vtable)._189_DeactivateAllHitboxes.methodPtr)
              (__this,(__this->klass->vtable)._189_DeactivateAllHitboxes.method);
    Characters_BaseCharacter__CrossFade((Characters_BaseCharacter_o *)__this,name,0.1,0.0,(MethodInfo *)0x0);
    (__this->fields).State = 0x1b;
    (__this->fields)._currentStateAnimation = name;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._currentStateAnimation);
    (__this->fields)._stateTimeLeft = fVar20;
  }
  UVar32 = (*(__this->klass->vtable)._76_GetAimPoint.methodPtr)
                     (__this,(__this->klass->vtable)._76_GetAimPoint.method);
  pUVar7 = (__this->fields).Cache;
  if (pUVar7 == (Utility_BaseComponentCache_o *)0x0) goto label_05c395e2;
  auStack_68._8_4_ = extraout_XMM0_Dc;
  auStack_68._0_8_ = UVar32.fields._0_8_;
  fStack_5c = (float)extraout_XMM0_Dd;
  pUVar15 = (pUVar7->fields).Transform;
  if (pUVar15 == (UnityEngine_Transform_o *)0x0) goto label_05c395e2;
  UVar33 = UnityEngine_Transform__get_position(pUVar15,(MethodInfo *)0x0);
  pUVar7 = (__this->fields).Cache;
  if ((pUVar7 == (Utility_BaseComponentCache_o *)0x0) ||
     (pUVar15 = (pUVar7->fields).Transform, pUVar15 == (UnityEngine_Transform_o *)0x0)) goto label_05c395e2;
  UVar34 = UnityEngine_Transform__get_position(pUVar15,(MethodInfo *)0x0);
  auVar25 = (undefined1  [4])UVar34.fields.z;
  fVar20 = UVar34.fields.x;
  fVar21 = UVar34.fields.y;
  UStack_98.y = UVar33.fields.y;
  uVar22 = auStack_68._0_4_;
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    auStack_78 = auVar25;
    fStack_40 = extraout_XMM0_Dc_00;
    auStack_48 = (undefined1  [8])UVar34.fields._0_8_;
    fStack_3c = extraout_XMM0_Dd_00;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72d = '\x01';
    UStack_88.x = 0.0;
    UStack_88.y = 0.0;
    fVar20 = (float)auStack_48._0_4_;
    fVar21 = (float)auStack_48._4_4_;
    fVar23 = fStack_40;
    fVar24 = fStack_3c;
    auVar25 = auStack_78;
    fVar11 = (float)auStack_68._8_4_;
    fVar12 = fStack_5c;
  }
  else {
    UStack_88.x = 0.0;
    UStack_88.y = 0.0;
    fVar23 = extraout_XMM0_Dc_00;
    fVar24 = extraout_XMM0_Dd_00;
    fVar11 = (float)auStack_68._8_4_;
    fVar12 = fStack_5c;
  }
  UStack_88.x = 0.0;
  UStack_88.y = 0.0;
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    UStack_88.x = 0.0;
    UStack_88.y = 0.0;
    auStack_78 = auVar25;
    auStack_48._4_4_ = fVar21;
    auStack_48._0_4_ = fVar20;
    fStack_40 = fVar23;
    fStack_3c = fVar24;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
    fVar20 = (float)auStack_48._0_4_;
    fVar21 = (float)auStack_48._4_4_;
    fVar23 = fStack_40;
    fVar24 = fStack_3c;
    auVar25 = auStack_78;
  }
  auVar29._0_4_ = (float)uVar22 - fVar20;
  auVar29._4_4_ = UStack_98.y - fVar21;
  auVar29._8_4_ = fVar11 - fVar23;
  auVar29._12_4_ = fVar12 - fVar24;
  fVar20 = UVar32.fields.z - (float)auVar25;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  uVar22 = 0;
  fVar21 = fVar20 * fVar20 + auVar29._4_4_ * auVar29._4_4_ + auVar29._0_4_ * auVar29._0_4_;
  uVar26 = 0;
  uVar27 = 0;
  if (fVar21 < 0.0) {
    fVar21 = sqrtf(fVar21);
    uVar22 = extraout_XMM0_Db;
    if (1e-05 < fVar21) goto label_05c39100;
label_05c390c6:
    pUVar14 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar20 = (pUVar14->zeroVector).fields.z;
  }
  else {
    fVar21 = SQRT(fVar21);
    if (fVar21 <= 1e-05) goto label_05c390c6;
label_05c39100:
    fVar20 = fVar20 / fVar21;
    auVar10._4_4_ = fVar21;
    auVar10._0_4_ = fVar21;
    auVar10._8_4_ = uVar22;
    auVar10._12_4_ = uVar22;
    auVar29 = divps(auVar29,auVar10);
    UStack_88.x = auVar29._0_4_;
    UStack_88.y = auVar29._4_4_;
    pUVar14 = (UnityEngine_Vector3_StaticFields *)&UStack_88;
  }
  pUVar7 = (__this->fields).Cache;
  if ((pUVar7 == (Utility_BaseComponentCache_o *)0x0) ||
     (pUVar15 = (pUVar7->fields).Transform, pUVar15 == (UnityEngine_Transform_o *)0x0)) goto label_05c395e2;
  uVar1 = (pUVar14->zeroVector).fields.x;
  uVar3 = (pUVar14->zeroVector).fields.y;
  auStack_74._0_4_ = uVar3;
  auStack_78 = (undefined1  [4])uVar1;
  stack0xffffffffffffff90 = 0;
  UVar30 = UnityEngine_Transform__get_rotation(pUVar15,(MethodInfo *)0x0);
  auStack_68._8_4_ = uVar26;
  auStack_68._0_8_ = UVar30.fields._8_8_;
  fStack_5c = (float)uVar27;
  UStack_88.x = (float)auStack_78;
  UStack_88.y = (float)auStack_74._0_4_;
  UStack_88.z = fVar20;
  if (Il2CppMethodInitialized_0753e72c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72c = '\x01';
  }
  pUVar14 = TypeInfo_UnityEngine_Vector3->static_fields;
  UStack_58.x = (pUVar14->upVector).fields.x;
  UStack_58.y = (pUVar14->upVector).fields.y;
  UStack_58.z = (pUVar14->upVector).fields.z;
  uVar22 = 0;
  uVar26 = 0;
  UVar31 = UnityEngine_Quaternion__Internal_LookRotation
                     ((UnityEngine_Vector3_o *)&UStack_88,(UnityEngine_Vector3_o *)&UStack_58,
                      (MethodInfo *)0x0);
  auStack_74._4_4_ = uVar22;
  _auStack_78 = UVar31.fields._8_8_;
  fStack_6c = (float)uVar26;
  fVar20 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  UStack_88.z = auStack_68._0_4_;
  fStack_7c = auStack_68._4_4_;
  UStack_58.z = auStack_78;
  UStack_58.w = auStack_78._4_4_;
  pUVar14 = (UnityEngine_Vector3_StaticFields *)&UStack_88;
  UStack_88._0_8_ = UVar30.fields._0_8_;
  UStack_58._0_8_ = UVar31.fields._0_8_;
  UVar30 = UnityEngine_Quaternion__Internal_Lerp
                     ((UnityEngine_Quaternion_o *)pUVar14,(UnityEngine_Quaternion_o *)&UStack_58,fVar20 * 5.0,
                      (MethodInfo *)0x0);
  fVar20 = UVar30.fields.w;
  UnityEngine_Transform__set_rotation(pUVar15,UVar30,(MethodInfo *)0x0);
  fVar21 = (*(__this->klass->vtable)._194_GetAnimationTime.methodPtr)
                     (__this,(__this->klass->vtable)._194_GetAnimationTime.method);
  if (fVar21 <= 0.61) {
    return;
  }
  pCVar8 = (__this->fields).BasicCache;
  if ((pCVar8 == (Characters_BasicTitanComponentCache_o *)0x0) ||
     (__this_00 = (pCVar8->fields).HandRHitbox, __this_00 == (Characters_BaseHitbox_o *)0x0))
  goto label_05c395e2;
  __this_01 = (__this->fields).HoldHuman;
  pUVar15 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
  if (pUVar15 == (UnityEngine_Transform_o *)0x0) goto label_05c395e2;
  UVar32 = UnityEngine_Transform__get_position(pUVar15,(MethodInfo *)0x0);
  auStack_74._4_4_ = extraout_XMM0_Dc_01;
  _auStack_78 = UVar32.fields._0_8_;
  fStack_6c = (float)extraout_XMM0_Dd_01;
  auStack_68._0_4_ = UVar32.fields.z;
  UVar32 = (*(__this->klass->vtable)._76_GetAimPoint.methodPtr)
                     (__this,(__this->klass->vtable)._76_GetAimPoint.method);
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    fVar20 = 0.0;
    Il2CppMethodInitialized_0753e72d = '\x01';
    UStack_88.x = 0.0;
    UStack_88.y = 0.0;
  }
  else {
    UStack_88.x = 0.0;
    UStack_88.y = 0.0;
  }
  UStack_88.x = 0.0;
  UStack_88.y = 0.0;
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    UStack_88.x = 0.0;
    UStack_88.y = 0.0;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    fVar20 = 0.0;
    Il2CppMethodInitialized_0753e729 = '\x01';
  }
  auVar28._0_4_ = UVar32.fields.x - (float)auStack_78;
  auVar28._4_4_ = UVar32.fields.y - (float)auStack_74._0_4_;
  auVar28._8_4_ = extraout_XMM0_Dc_02 - (float)auStack_74._4_4_;
  auVar28._12_4_ = extraout_XMM0_Dd_02 - fStack_6c;
  fStack_a8 = UVar32.fields.z - (float)auStack_68._0_4_;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    fVar20 = 0.0;
  }
  fVar21 = fStack_a8 * fStack_a8 + auVar28._4_4_ * auVar28._4_4_ + auVar28._0_4_ * auVar28._0_4_;
  if (fVar21 < 0.0) {
    fVar21 = sqrtf(fVar21);
    fVar20 = extraout_XMM0_Db_00;
    if (1e-05 < fVar21) goto label_05c393f1;
label_05c39326:
    pUVar14 = TypeInfo_UnityEngine_Vector3->static_fields;
    fStack_a8 = ((UnityEngine_Quaternion_Fields *)&pUVar14->zeroVector)->z;
  }
  else {
    fVar21 = SQRT(fVar21);
    if (fVar21 <= 1e-05) goto label_05c39326;
label_05c393f1:
    fStack_a8 = fStack_a8 / fVar21;
    auVar9._4_4_ = fVar21;
    auVar9._0_4_ = fVar21;
    auVar9._8_4_ = fVar20;
    auVar9._12_4_ = fVar20;
    auVar29 = divps(auVar28,auVar9);
    UStack_88.x = auVar29._0_4_;
    UStack_88.y = auVar29._4_4_;
  }
  uVar2 = (pUVar14->zeroVector).fields.x;
  uVar4 = (pUVar14->zeroVector).fields.y;
  (*(__this->klass->vtable)._173_Ungrab.methodPtr)(__this,(__this->klass->vtable)._173_Ungrab.method);
  if ((__this_01 != (Characters_Human_o *)0x0) &&
     (pPVar16 = Photon_Pun_MonoBehaviourPun__get_photonView
                          ((Photon_Pun_MonoBehaviourPun_o *)__this_01,(MethodInfo *)0x0),
     pPVar16 != (Photon_Pun_PhotonView_o *)0x0)) {
    x = (UnityEngine_Object_o *)
        UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pPVar16,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar13 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar13) {
      return;
    }
    pPVar16 = Photon_Pun_MonoBehaviourPun__get_photonView
                        ((Photon_Pun_MonoBehaviourPun_o *)__this_01,(MethodInfo *)0x0);
    pPVar17 = Photon_Pun_MonoBehaviourPun__get_photonView
                        ((Photon_Pun_MonoBehaviourPun_o *)__this_01,(MethodInfo *)0x0);
    if (pPVar17 != (Photon_Pun_PhotonView_o *)0x0) {
      targetPlayer = (pPVar17->fields)._Owner_k__BackingField;
      parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
      UStack_88.x = (float)uVar2 * 150.0;
      UStack_88.y = (float)uVar4 * 150.0;
      UStack_88.z = fStack_a8 * 150.0;
      pIVar18 = il2cpp_vm_Object_Box((Il2CppClass *)TypeInfo_UnityEngine_Vector3,&UStack_88);
      if (parameters != (System_Object_array *)0x0) {
        if ((pIVar18 != (Il2CppObject *)0x0) &&
           (pIVar19 = il2cpp_vm_Object_IsInst(pIVar18,(((parameters->obj).klass)->_1).element_class),
           pIVar19 == (Il2CppObject *)0x0)) {
          pIVar18 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar18,(MethodInfo *)0x0);
        }
        if ((int)parameters->max_length == 0) {
          ThrowIndexOutOfRangeException();
        }
        parameters->m_Items[0] = pIVar18;
        Il2CppCodeGenWriteBarrier(parameters->m_Items);
        if (pPVar16 != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC_56e5850
                    (pPVar16,"BlowAwayRPC",targetPlayer,parameters,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_05c395e2:
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$Blind
// il2cpp: void Characters_BasicTitan__Blind (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x5c39600

void Characters_BasicTitan__Blind(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  System_String_o **targetAddress;
  Characters_BasicTitanAnimations_o *pCVar1;
  Characters_AnimationHandler_o *pCVar2;
  System_String_o *name;
  bool bVar3;
  MethodInfo *method_00;
  float fVar4;
  
  pCVar1 = (__this->fields).BasicAnimations;
  if (pCVar1 == (Characters_BasicTitanAnimations_o *)0x0) {
label_05c3978d:
    ThrowNullReferenceException();
  }
  targetAddress = &(__this->fields)._currentStateAnimation;
  bVar3 = System_String__op_Equality(*targetAddress,(pCVar1->fields).AttackBellyFlop,(MethodInfo *)0x0);
  if (!bVar3) {
    pCVar1 = (__this->fields).BasicAnimations;
    if (pCVar1 == (Characters_BasicTitanAnimations_o *)0x0) goto label_05c3978d;
    method_00 = (MethodInfo *)(pCVar1->fields).AttackBellyFlopGetup;
    bVar3 = System_String__op_Equality(*targetAddress,(System_String_o *)method_00,(MethodInfo *)0x0);
    if (!bVar3) {
      if ((__this->fields).IsCrawler == false) {
        Characters_BaseTitan__Blind((Characters_BaseTitan_o *)__this,method_00);
        return;
      }
      if (((__this->fields).State != 0x10) && ((__this->fields).AI != false)) {
        pCVar1 = (__this->fields).BasicAnimations;
        if ((pCVar1 != (Characters_BasicTitanAnimations_o *)0x0) &&
           (pCVar2 = (__this->fields).Animation, pCVar2 != (Characters_AnimationHandler_o *)0x0)) {
          name = (pCVar1->fields).BlindCrawler;
          fVar4 = Characters_AnimationHandler__GetLength(pCVar2,name,(MethodInfo *)0x0);
          (__this->fields)._needFreshCore = true;
          pCVar2 = (__this->fields).Animation;
          if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
            Characters_AnimationHandler__SetCullingType(pCVar2,false,(MethodInfo *)0x0);
            (*(__this->klass->vtable)._173_Ungrab.methodPtr)
                      (__this,(__this->klass->vtable)._173_Ungrab.method);
            (*(__this->klass->vtable)._189_DeactivateAllHitboxes.methodPtr)
                      (__this,(__this->klass->vtable)._189_DeactivateAllHitboxes.method);
            Characters_BaseCharacter__CrossFade
                      ((Characters_BaseCharacter_o *)__this,name,0.1,0.0,(MethodInfo *)0x0);
            (__this->fields).State = 0x10;
            (__this->fields)._currentStateAnimation = name;
            Il2CppCodeGenWriteBarrier(targetAddress);
            (__this->fields)._stateTimeLeft = fVar4;
            (*(__this->klass->vtable)._196_DamagedGrunt.methodPtr)
                      (__this,1.0,(__this->klass->vtable)._196_DamagedGrunt.method);
            return;
          }
        }
        goto label_05c3978d;
      }
    }
  }
  return;
}


// Characters.BasicTitan$$GetSitIdleAniamtion
// il2cpp: System_String_o* Characters_BasicTitan__GetSitIdleAniamtion (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x5c397a0

System_String_o *
Characters_BasicTitan__GetSitIdleAniamtion(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  Characters_BasicTitanAnimations_o *pCVar1;
  Characters_BaseTitanAnimations_o *pCVar2;
  System_String_o *pSVar3;
  
  if ((__this->fields).IsCrawler == false) {
    pCVar2 = (__this->fields).BaseTitanAnimations;
    if (pCVar2 != (Characters_BaseTitanAnimations_o *)0x0) {
      pSVar3 = (*(pCVar2->klass->vtable)._14_get_SitIdle.methodPtr)
                         (pCVar2,(pCVar2->klass->vtable)._14_get_SitIdle.method);
      return pSVar3;
    }
  }
  else {
    pCVar1 = (__this->fields).BasicAnimations;
    if (pCVar1 != (Characters_BasicTitanAnimations_o *)0x0) {
      return (pCVar1->fields).SitIdleCrawler;
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$GetSitFallAnimation
// il2cpp: System_String_o* Characters_BasicTitan__GetSitFallAnimation (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x5c397f0

System_String_o *
Characters_BasicTitan__GetSitFallAnimation(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  Characters_BasicTitanAnimations_o *pCVar1;
  Characters_BaseTitanAnimations_o *pCVar2;
  System_String_o *pSVar3;
  
  if ((__this->fields).IsCrawler == false) {
    pCVar2 = (__this->fields).BaseTitanAnimations;
    if (pCVar2 != (Characters_BaseTitanAnimations_o *)0x0) {
      pSVar3 = (*(pCVar2->klass->vtable)._17_get_SitFall.methodPtr)
                         (pCVar2,(pCVar2->klass->vtable)._17_get_SitFall.method);
      return pSVar3;
    }
  }
  else {
    pCVar1 = (__this->fields).BasicAnimations;
    if (pCVar1 != (Characters_BasicTitanAnimations_o *)0x0) {
      return (pCVar1->fields).SitFallCrawler;
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$GetSitUpAnimation
// il2cpp: System_String_o* Characters_BasicTitan__GetSitUpAnimation (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x5c39840

System_String_o * Characters_BasicTitan__GetSitUpAnimation(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  Characters_BasicTitanAnimations_o *pCVar1;
  Characters_BaseTitanAnimations_o *pCVar2;
  System_String_o *pSVar3;
  
  if ((__this->fields).IsCrawler == false) {
    pCVar2 = (__this->fields).BaseTitanAnimations;
    if (pCVar2 != (Characters_BaseTitanAnimations_o *)0x0) {
      pSVar3 = (*(pCVar2->klass->vtable)._16_get_SitUp.methodPtr)
                         (pCVar2,(pCVar2->klass->vtable)._16_get_SitUp.method);
      return pSVar3;
    }
  }
  else {
    pCVar1 = (__this->fields).BasicAnimations;
    if (pCVar1 != (Characters_BasicTitanAnimations_o *)0x0) {
      return (pCVar1->fields).SitUpCrawler;
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$Cripple
// il2cpp: void Characters_BasicTitan__Cripple (Characters_BasicTitan_o* __this, float time, const MethodInfo* method);
// 0x5c39890

void Characters_BasicTitan__Cripple(Characters_BasicTitan_o *__this,float time,MethodInfo *method)

{
  Characters_BasicTitanAnimations_o *pCVar1;
  Characters_AnimationHandler_o *pCVar2;
  System_String_o *name;
  bool bVar3;
  MethodInfo *method_00;
  float fVar4;
  
  if ((__this->fields).IsCrawler == false) {
    pCVar1 = (__this->fields).BasicAnimations;
    if (pCVar1 != (Characters_BasicTitanAnimations_o *)0x0) {
      bVar3 = System_String__op_Equality
                        ((__this->fields)._currentStateAnimation,(pCVar1->fields).AttackBellyFlop,
                         (MethodInfo *)0x0);
      if (!bVar3) {
        pCVar1 = (__this->fields).BasicAnimations;
        if (pCVar1 == (Characters_BasicTitanAnimations_o *)0x0) goto label_05c39a36;
        method_00 = (MethodInfo *)(pCVar1->fields).AttackBellyFlopGetup;
        bVar3 = System_String__op_Equality
                          ((__this->fields)._currentStateAnimation,(System_String_o *)method_00,
                           (MethodInfo *)0x0);
        if (!bVar3) {
          Characters_BaseTitan__Cripple((Characters_BaseTitan_o *)__this,time,method_00);
          return;
        }
      }
      return;
    }
  }
  else {
    if ((__this->fields).State == 0x11) {
      return;
    }
    if ((__this->fields).AI == false) {
      return;
    }
    if (time <= 0.0) {
      time = (*(__this->klass->vtable)._121_get_DefaultCrippleTime.methodPtr)
                       (__this,(__this->klass->vtable)._121_get_DefaultCrippleTime.method);
    }
    (__this->fields)._currentCrippleTime = time;
    pCVar1 = (__this->fields).BasicAnimations;
    if ((pCVar1 != (Characters_BasicTitanAnimations_o *)0x0) &&
       (pCVar2 = (__this->fields).Animation, pCVar2 != (Characters_AnimationHandler_o *)0x0)) {
      name = (pCVar1->fields).SitFallCrawler;
      fVar4 = Characters_AnimationHandler__GetLength(pCVar2,name,(MethodInfo *)0x0);
      (__this->fields)._needFreshCore = true;
      pCVar2 = (__this->fields).Animation;
      if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
        Characters_AnimationHandler__SetCullingType(pCVar2,false,(MethodInfo *)0x0);
        (*(__this->klass->vtable)._173_Ungrab.methodPtr)(__this,(__this->klass->vtable)._173_Ungrab.method);
        (*(__this->klass->vtable)._189_DeactivateAllHitboxes.methodPtr)
                  (__this,(__this->klass->vtable)._189_DeactivateAllHitboxes.method);
        Characters_BaseCharacter__CrossFade
                  ((Characters_BaseCharacter_o *)__this,name,0.1,0.0,(MethodInfo *)0x0);
        (__this->fields).State = 0x13;
        (__this->fields)._currentStateAnimation = name;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._currentStateAnimation);
        (__this->fields)._stateTimeLeft = fVar4;
        (*(__this->klass->vtable)._196_DamagedGrunt.methodPtr)
                  (__this,1.0,(__this->klass->vtable)._196_DamagedGrunt.method);
        return;
      }
    }
  }
label_05c39a36:
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$RegenerateWardedWeakSpot
// il2cpp: void Characters_BasicTitan__RegenerateWardedWeakSpot (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x5c39a40

void Characters_BasicTitan__RegenerateWardedWeakSpot(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *__this_00;
  undefined8 in_RAX;
  System_Object_array *parameters;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  undefined8 uStack_28;
  
  uStack_28 = in_RAX;
  if (Il2CppMethodInitialized_075477e0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_WardedWeakSpot);
    il2cpp_codegen_initialize_runtime_metadata(&"SetWardedRPC");
    Il2CppMethodInitialized_075477e0 = '\x01';
  }
  if ((((__this->fields).isWarded == false) || ((__this->fields).CurrentWardedWeakSpot != 0)) ||
     (1 < (__this->fields).LastWardedWeakSpot - 3U)) {
    return;
  }
  pUVar1 = (__this->fields).Cache;
  if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
    __this_00 = (pUVar1->fields).PhotonView;
    parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
    uStack_28._0_4_ = CONCAT13((__this->fields).isWarded,(undefined3)uStack_28);
    pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_28 + 3));
    if (parameters != (System_Object_array *)0x0) {
      if ((pIVar2 != (Il2CppObject *)0x0) &&
         (pIVar3 = il2cpp_vm_Object_IsInst(pIVar2,(((parameters->obj).klass)->_1).element_class),
         pIVar3 == (Il2CppObject *)0x0)) {
label_05c39bc6:
        pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
      }
      if ((int)parameters->max_length != 0) {
        parameters->m_Items[0] = pIVar2;
        Il2CppCodeGenWriteBarrier(parameters->m_Items);
        uStack_28 = CONCAT44((__this->fields).LastWardedWeakSpot,(undefined4)uStack_28);
        pIVar2 = il2cpp_vm_Object_Box
                           ((Il2CppClass *)TypeInfo_Characters_WardedWeakSpot,(void *)((long)&uStack_28 + 4));
        if ((pIVar2 != (Il2CppObject *)0x0) &&
           (pIVar3 = il2cpp_vm_Object_IsInst(pIVar2,(((parameters->obj).klass)->_1).element_class),
           pIVar3 == (Il2CppObject *)0x0)) goto label_05c39bc6;
        if ((parameters->max_length & 0xfffffffe) != 0) {
          parameters->m_Items[1] = pIVar2;
          Il2CppCodeGenWriteBarrier(parameters->m_Items + 1);
          if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
            Photon_Pun_PhotonView__RPC(__this_00,"SetWardedRPC",0,parameters,(MethodInfo *)0x0);
            return;
          }
          goto label_05c39bbc;
        }
      }
      ThrowIndexOutOfRangeException();
    }
  }
label_05c39bbc:
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$OnHit
// il2cpp: void Characters_BasicTitan__OnHit (Characters_BasicTitan_o* __this, Characters_BaseHitbox_o* hitbox, Il2CppObject* victim, UnityEngine_Collider_o* collider, System_String_o* type, bool firstHit, const MethodInfo* method);
// 0x5c39be0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c39d4c: jmp 0x5c39db7
// asm:   0x5c39f50: mov r12d, r14d
// asm:   0x5c39f53: jmp 0x5c3a01f
// asm:   0x5c39f63: jmp 0x5c3a0e1

void Characters_BasicTitan__OnHit
               (Characters_BasicTitan_o *__this,Characters_BaseHitbox_o *hitbox,Il2CppObject *victim,
               UnityEngine_Collider_o *collider,System_String_o *type,bool firstHit,MethodInfo *method)

{
  byte bVar1;
  Characters_BasicTitanComponentCache_o *pCVar2;
  Characters_BaseHitbox_o *pCVar3;
  Characters_Human_o *x;
  UI_BaseMenu_o *obj;
  bool bVar4;
  System_String_o *pSVar5;
  Il2CppClass *pIVar6;
  UnityEngine_Transform_o *__this_00;
  Il2CppObject *pIVar7;
  UI_InGameMenu_o *__this_01;
  byte bVar8;
  System_String_o **ppSVar9;
  System_String_o *pSVar10;
  ulong uVar11;
  MethodInfo *pMVar12;
  Il2CppMethodPointer vtableDispatch;
  uint damage;
  UnityEngine_Vector3_o position;
  MethodInfo *in_stack_ffffffffffffffa8;
  
  if (Il2CppMethodInitialized_075477e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseCharacter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseTitan);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCollisionHandler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"GrabRight");
    il2cpp_codegen_initialize_runtime_metadata(&"GrabLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"Titan");
    Il2CppMethodInitialized_075477e1 = '\x01';
  }
  pCVar2 = (__this->fields).BasicCache;
  if (pCVar2 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c3a0e1;
  pCVar3 = (pCVar2->fields).HandLHitbox;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)hitbox,(UnityEngine_Object_o *)pCVar3,(MethodInfo *)0x0);
  if (bVar4) {
    if ((__this->fields).LeftArmDisabled != false) {
      return;
    }
    if ((__this->fields).LeftHandDisabled != false) {
      return;
    }
  }
  pCVar2 = (__this->fields).BasicCache;
  if (pCVar2 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c3a0e1;
  pCVar3 = (pCVar2->fields).HandRHitbox;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)hitbox,(UnityEngine_Object_o *)pCVar3,(MethodInfo *)0x0);
  if (bVar4) {
    if ((__this->fields).RightArmDisabled != false) {
      return;
    }
    if ((__this->fields).RightHandDisabled != false) {
      return;
    }
  }
  if ((__this->fields).CustomDamageEnabled == false) {
    damage = 100;
  }
  else {
    damage = (__this->fields).CustomDamage;
  }
  if (victim != (Il2CppObject *)0x0) {
    pIVar6 = victim->klass;
    bVar8 = (pIVar6->_2).typeHierarchyDepth;
    bVar1 = (TypeInfo_CustomLogic_CustomLogicCollisionHandler->_2).typeHierarchyDepth;
    if ((bVar1 <= bVar8) &&
       ((pIVar6->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollisionHandler)) {
      if (hitbox != (Characters_BaseHitbox_o *)0x0) {
        pSVar5 = (__this->fields).RichTextName;
        __this_00 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)hitbox,(MethodInfo *)0x0);
        if (__this_00 != (UnityEngine_Transform_o *)0x0) {
          position = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
          bVar8 = (TypeInfo_CustomLogic_CustomLogicCollisionHandler->_2).typeHierarchyDepth;
          if ((bVar8 <= (victim->klass->_2).typeHierarchyDepth) &&
             ((victim->klass->_2).typeHierarchy[(ulong)bVar8 - 1] ==
              (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollisionHandler)) {
            CustomLogic_CustomLogicCollisionHandler__GetHit
                      ((CustomLogic_CustomLogicCollisionHandler_o *)victim,
                       (Characters_BaseCharacter_o *)__this,pSVar5,damage,type,position,(MethodInfo *)0x0);
            return;
          }
          goto label_05c3a0e6;
        }
      }
      goto label_05c3a0e1;
    }
    bVar1 = (TypeInfo_Characters_BaseCharacter->_2).typeHierarchyDepth;
    if ((bVar8 < bVar1) ||
       ((pIVar6->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_BaseCharacter)) {
label_05c3a0e6:
      il2cpp_codegen_raise_invalid_cast_exception(victim);
    }
  }
  if (((__this->fields).State == 10) &&
     (bVar4 = (*(__this->klass->vtable)._139_IsGrabAttack.methodPtr)
                        (__this,(__this->klass->vtable)._139_IsGrabAttack.method), bVar4)) {
    if (victim == (Il2CppObject *)0x0) {
label_05c39f58:
      if (!firstHit) {
        return;
      }
      goto label_05c3a0e1;
    }
    pIVar6 = victim->klass;
    bVar8 = (pIVar6->_2).typeHierarchyDepth;
    bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
    if ((bVar1 <= bVar8) &&
       ((pIVar6->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_Human)) {
      victim = il2cpp_codegen_is_inst_class(victim,(Il2CppClass *)TypeInfo_Characters_Human);
      x = (__this->fields).HoldHuman;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar4) {
        return;
      }
      if (!firstHit) {
        return;
      }
      if (victim == (Il2CppObject *)0x0) goto label_05c3a0e1;
      if (*(char *)&victim[7].monitor != '\0') {
        return;
      }
      pCVar2 = (__this->fields).BasicCache;
      if (pCVar2 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c3a0e1;
      pCVar3 = (pCVar2->fields).HandLHitbox;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)hitbox,(UnityEngine_Object_o *)pCVar3,(MethodInfo *)0x0);
      (__this->fields).HoldHumanLeft = bVar4;
      if (bVar4) {
        if (collider == (UnityEngine_Collider_o *)0x0) goto label_05c3a0e1;
        pSVar5 = UnityEngine_Object__get_name((UnityEngine_Object_o *)collider,(MethodInfo *)0x0);
        ppSVar9 = &"GrabLeft";
      }
      else {
        if (collider == (UnityEngine_Collider_o *)0x0) goto label_05c3a0e1;
        pSVar5 = UnityEngine_Object__get_name((UnityEngine_Object_o *)collider,(MethodInfo *)0x0);
        ppSVar9 = &"GrabRight";
      }
      vtableDispatch = victim->klass->vtable[0x5f].methodPtr;
      pMVar12 = victim->klass->vtable[0x5f].method;
      uVar11 = 0;
      pSVar10 = *ppSVar9;
      goto label_05c3a097;
    }
  }
  else {
    if (victim == (Il2CppObject *)0x0) goto label_05c39f58;
    pIVar6 = victim->klass;
    bVar8 = (pIVar6->_2).typeHierarchyDepth;
  }
  bVar1 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
  if ((bVar1 <= bVar8) &&
     ((pIVar6->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_BaseTitan)) {
    Characters_BaseTitan__OnHitTitan
              ((Characters_BaseTitan_o *)__this,hitbox,(Characters_BaseTitan_o *)victim,collider,damage,
               firstHit,in_stack_ffffffffffffffa8);
    return;
  }
  if (!firstHit) {
    return;
  }
  if (*(char *)&victim[7].monitor != '\0') {
    return;
  }
  bVar4 = Characters_BaseCharacter__IsMainCharacter((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
  if (bVar4) {
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    obj = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    pIVar7 = il2cpp_codegen_is_inst_class((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_UI_InGameMenu);
    if (pIVar7 == (Il2CppObject *)0x0) goto label_05c3a0e1;
    __this_01 = (UI_InGameMenu_o *)
                il2cpp_codegen_is_inst_class((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_UI_InGameMenu);
    UI_InGameMenu__ShowKillScore(__this_01,damage,false,(MethodInfo *)0x0);
  }
  if (collider != (UnityEngine_Collider_o *)0x0) {
    pSVar5 = UnityEngine_Object__get_name((UnityEngine_Object_o *)collider,(MethodInfo *)0x0);
    vtableDispatch = victim->klass->vtable[0x5f].methodPtr;
    pMVar12 = victim->klass->vtable[0x5f].method;
    uVar11 = (ulong)damage;
    pSVar10 = "Titan";
label_05c3a097:
    (*vtableDispatch)(victim,__this,uVar11,pSVar10,pSVar5,pMVar12);
    return;
  }
label_05c3a0e1:
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$OnNotifyDie
// il2cpp: void Characters_BasicTitan__OnNotifyDie (Characters_BasicTitan_o* __this, Characters_BaseCharacter_o* killer, const MethodInfo* method);
// 0x5c3a0f0

void Characters_BasicTitan__OnNotifyDie
               (Characters_BasicTitan_o *__this,Characters_BaseCharacter_o *killer,MethodInfo *method)

{
  byte bVar1;
  Characters_BasicTitanComponentCache_o *pCVar2;
  UnityEngine_ParticleSystem_o *__this_00;
  
  if (Il2CppMethodInitialized_075477e2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseTitan);
    Il2CppMethodInitialized_075477e2 = '\x01';
  }
  if (killer != (Characters_BaseCharacter_o *)0x0) {
    bVar1 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
    if ((bVar1 <= (killer->klass->_2).typeHierarchyDepth) &&
       ((killer->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_BaseTitan))
    {
      pCVar2 = (__this->fields).BasicCache;
      if ((pCVar2 == (Characters_BasicTitanComponentCache_o *)0x0) ||
         (__this_00 = (pCVar2->fields).NapeBlood, __this_00 == (UnityEngine_ParticleSystem_o *)0x0)) {
        ThrowNullReferenceException();
      }
      UnityEngine_ParticleSystem__Stop(__this_00,true,0,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Characters.BasicTitan$$get_TreatAsSmall
// il2cpp: bool Characters_BasicTitan__get_TreatAsSmall (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x5c3a180

bool Characters_BasicTitan__get_TreatAsSmall(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  return (__this->fields).IsCrawler;
}


// Characters.BasicTitan$$OnFinisherKill
// il2cpp: void Characters_BasicTitan__OnFinisherKill (Characters_BasicTitan_o* __this, UnityEngine_Vector3_o direction, bool launch, bool decapitate, const MethodInfo* method);
// 0x5c3a190
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c3a1a2: test bpl, bpl
// asm:   0x5c3a1a5: jne 0x5c3a200

void Characters_BasicTitan__OnFinisherKill
               (Characters_BasicTitan_o *__this,UnityEngine_Vector3_o direction,bool launch,bool decapitate,
               MethodInfo *method)

{
  undefined7 in_register_00000031;
  float fVar1;
  
  if ((int)CONCAT71(in_register_00000031,launch) != 0) {
    fVar1 = (*(__this->klass->vtable)._126_get_LaunchForce.methodPtr)
                      (__this,(__this->klass->vtable)._126_get_LaunchForce.method);
    fVar1 = fVar1 / (__this->fields).Size;
    (__this->fields)._finisherDeathVelocity.fields.x = fVar1 * direction.fields.x;
    (__this->fields)._finisherDeathVelocity.fields.y = fVar1 * direction.fields.y;
    (__this->fields)._finisherDeathVelocity.fields.z = fVar1 * direction.fields.z;
  }
  if (decapitate) {
    (__this->fields)._headLaunchVelocity.fields.x = direction.fields.x * 45.0;
    (__this->fields)._headLaunchVelocity.fields.y = direction.fields.y * 45.0;
    (__this->fields)._headLaunchVelocity.fields.z = direction.fields.z * 45.0;
    return;
  }
  return;
}


// Characters.BasicTitan$$DetachHead
// il2cpp: void Characters_BasicTitan__DetachHead (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x5c34030

void Characters_BasicTitan__DetachHead(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *__this_00;
  System_Object_array *parameters;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  undefined8 local_30;
  float local_28;
  
  if (Il2CppMethodInitialized_075477e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    il2cpp_codegen_initialize_runtime_metadata(&"DetachHeadRPC");
    Il2CppMethodInitialized_075477e3 = '\x01';
  }
  if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
  }
  Characters_BaseCharacter__PlaySound
            ((Characters_BaseCharacter_o *)__this,TypeInfo_Characters_TitanSounds->static_fields->Decapitate,
             (MethodInfo *)0x0);
  pUVar1 = (__this->fields).Cache;
  if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
    __this_00 = (pUVar1->fields).PhotonView;
    parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
    local_28 = (__this->fields)._headLaunchVelocity.fields.z;
    local_30._0_4_ = (__this->fields)._headLaunchVelocity.fields.x;
    local_30._4_4_ = (__this->fields)._headLaunchVelocity.fields.y;
    pIVar2 = il2cpp_vm_Object_Box((Il2CppClass *)TypeInfo_UnityEngine_Vector3,&local_30);
    if (parameters != (System_Object_array *)0x0) {
      if (pIVar2 != (Il2CppObject *)0x0) {
        pIVar3 = il2cpp_vm_Object_IsInst(pIVar2,(((parameters->obj).klass)->_1).element_class);
        if (pIVar3 == (Il2CppObject *)0x0) {
          pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
        }
      }
      if ((int)parameters->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      parameters->m_Items[0] = pIVar2;
      Il2CppCodeGenWriteBarrier(parameters->m_Items);
      if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(__this_00,"DetachHeadRPC",0,parameters,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$DetachHeadRPC
// il2cpp: void Characters_BasicTitan__DetachHeadRPC (Characters_BasicTitan_o* __this, UnityEngine_Vector3_o launch, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5c3a230
// eh: try 0x5c3a3a4..0x5c3a6fc -> pad 0x5c3a70a (+7 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c3a722..0x5c3a727 -> pad 0x5c3a74c cleanup
// eh: try 0x5c3a74f..0x5c3a759 -> pad 0x5c3a761 catch (...) [compiler noexcept guard]
// asm: 31 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c3a63d: nop dword ptr [rax]
// asm:   0x5c3a6fc: jmp 0x5c3a70a
// asm:   0x5c3a6fe: jmp 0x5c3a70a
// asm:   0x5c3a700: jmp 0x5c3a70a
// asm:   0x5c3a702: jmp 0x5c3a70a
// asm:   0x5c3a704: jmp 0x5c3a70a
// asm:   0x5c3a706: jmp 0x5c3a70a
// asm:   0x5c3a708: jmp 0x5c3a70a
// asm:   0x5c3a70a: mov rbx, rax
// asm:   0x5c3a70d: cmp edx, 1
// asm:   0x5c3a710: jne 0x5c3a74f
// asm:   0x5c3a712: mov rdi, rbx
// asm:   0x5c3a715: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c3a71a: mov rbx, qword ptr [rax]
// asm:   0x5c3a71d: mov qword ptr [rsp + 0x28], rbx
// asm:   0x5c3a722: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c3a727: lea rax, [rip + 0x165373a]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose
// asm:   0x5c3a72e: mov rsi, qword ptr [rax]
// asm:   0x5c3a731: lea rdi, [rsp + 0x10]
// asm:   0x5c3a736: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x5c3a73b: test rbx, rbx
// asm:   0x5c3a73e: je 0x5c3a458
// asm:   0x5c3a744: mov rdi, rbx
// asm:   0x5c3a747: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c3a74c: mov rbx, rax
// asm:   0x5c3a74f: lea rdi, [rsp + 0x28]
// asm:   0x5c3a754: call 0x2fd9370  ; il2cpp_runtime_helper_02fd9370()
// asm:   0x5c3a759: mov rdi, rbx
// asm:   0x5c3a75c: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c3a761: mov rdi, rax
// asm:   0x5c3a764: call 0x2ab61e0  ; __clang_call_terminate()

void Characters_BasicTitan__DetachHeadRPC
               (Characters_BasicTitan_o *__this,UnityEngine_Vector3_o launch,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  bool bVar1;
  Utility_BaseComponentCache_o *pUVar2;
  Photon_Pun_PhotonView_o *pPVar3;
  GameManagers_InGameManager_o *pGVar4;
  System_Collections_Generic_HashSet_object__o *__this_00;
  Characters_HookUseable_o *__this_01;
  Characters_BasicTitanComponentCache_o *pCVar5;
  Il2CppClass *__this_02;
  Settings_GraphicsSettings_o *pSVar6;
  Settings_BoolSetting_o *pSVar7;
  Il2CppObject *pIVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  UnityEngine_Transform_o *pUVar12;
  UnityEngine_SkinnedMeshRenderer_o *source;
  System_Object_array *pSVar13;
  Characters_BasicTitan__PlayDecapitationBlood_d__167_o *__this_03;
  uint uVar14;
  UnityEngine_ParticleSystem_o *pUVar15;
  float fVar16;
  undefined4 in_XMM0_Dc;
  float extraout_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  float extraout_XMM0_Dd;
  float fVar17;
  UnityEngine_Vector3_o UVar18;
  undefined1 auStack_78 [8];
  System_Collections_Generic_HashSet_Enumerator_T__o *pSStack_70;
  Il2CppObject *pIStack_68;
  undefined1 auStack_60 [16];
  Il2CppObject *pIStack_50;
  undefined1 auStack_48 [8];
  float fStack_40;
  float fStack_3c;
  
  fStack_40 = (float)in_XMM0_Dc;
  auStack_48 = (undefined1  [8])launch.fields._0_8_;
  fStack_3c = (float)in_XMM0_Dd;
  if (Il2CppMethodInitialized_075477e4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_SkinnedMeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_Renderer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Human_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanLimbFallEffect);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Head");
    Il2CppMethodInitialized_075477e4 = '\x01';
  }
  auStack_78 = (undefined1  [8])0x0;
  pSStack_70 = (System_Collections_Generic_HashSet_Enumerator_T__o *)0x0;
  pIStack_68 = (Il2CppObject *)0x0;
  pUVar2 = (__this->fields).Cache;
  if ((pUVar2 != (Utility_BaseComponentCache_o *)0x0) &&
     (pPVar3 = (pUVar2->fields).PhotonView, pPVar3 != (Photon_Pun_PhotonView_o *)0x0)) {
    if (info.fields.Sender != (pPVar3->fields)._Owner_k__BackingField) {
      return;
    }
    if ((__this->fields)._headDetached != false) {
      return;
    }
    (__this->fields)._headDetached = true;
    pGVar4 = (__this->fields)._inGameManager;
    if ((pGVar4 != (GameManagers_InGameManager_o *)0x0) &&
       (__this_00 = (System_Collections_Generic_HashSet_object__o *)(pGVar4->fields).Humans,
       __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
      System_Collections_Generic_HashSet_object___GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_60,__this_00,
                 (MethodInfo_4FB3DA0 *)MethodInfo_System_Collections_Generic_HashSet_Human_GetEnumerator);
      pIStack_68 = pIStack_50;
      auStack_78 = (undefined1  [8])auStack_60._0_8_;
      pSStack_70 = (System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_60._8_8_;
      auStack_60._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
      auStack_60._8_8_ = (System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_78;
      while (bVar9 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                               ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_78,
                                (MethodInfo_4C456D0 *)
                                MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_MoveNext),
            pIVar8 = pIStack_68, bVar9) {
        if (pIStack_68 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        cVar10 = (*pIStack_68->klass->vtable[0x4a].methodPtr)
                           (pIStack_68,pIStack_68->klass->vtable[0x4a].method);
        if (cVar10 != '\0') {
          __this_01 = pIVar8[0x12].monitor;
          if (__this_01 != (Characters_HookUseable_o *)0x0) {
            pCVar5 = (__this->fields).BasicCache;
            if (pCVar5 == (Characters_BasicTitanComponentCache_o *)0x0) {
              ThrowNullReferenceException();
            }
            if (__this_01 == (Characters_HookUseable_o *)0x0) {
              ThrowNullReferenceException();
            }
            Characters_HookUseable__MoveHookParents
                      (__this_01,(pCVar5->fields).Head,(pCVar5->fields).Neck,(MethodInfo *)0x0);
          }
          __this_02 = pIVar8[0x13].klass;
          if (__this_02 != (Il2CppClass *)0x0) {
            pCVar5 = (__this->fields).BasicCache;
            if (pCVar5 == (Characters_BasicTitanComponentCache_o *)0x0) {
              ThrowNullReferenceException();
            }
            Characters_HookUseable__MoveHookParents
                      ((Characters_HookUseable_o *)__this_02,(pCVar5->fields).Head,(pCVar5->fields).Neck,
                       (MethodInfo *)0x0);
          }
        }
      }
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_78,
                 (MethodInfo_4C456C0 *)MethodInfo_System_Collections_Generic_HashSet_Enumerator_Human_Dispose)
      ;
      pCVar5 = (__this->fields).BasicCache;
      if ((pCVar5 != (Characters_BasicTitanComponentCache_o *)0x0) &&
         (pUVar15 = (pCVar5->fields).NapeBlood, pUVar15 != (UnityEngine_ParticleSystem_o *)0x0)) {
        UnityEngine_ParticleSystem__Stop(pUVar15,true,0,(MethodInfo *)0x0);
        pUVar2 = (__this->fields).Cache;
        if ((pUVar2 != (Utility_BaseComponentCache_o *)0x0) &&
           ((pUVar12 = (pUVar2->fields).Transform, pUVar12 != (UnityEngine_Transform_o *)0x0 &&
            (pUVar12 = UnityEngine_Transform__Find(pUVar12,"Head",(MethodInfo *)0x0),
            pUVar12 != (UnityEngine_Transform_o *)0x0)))) {
          source = UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)pUVar12,
                              (MethodInfo_34B0830 *)
                              MethodInfo_UnityEngine_Component_GetComponent_SkinnedMeshRenderer);
          if ((__this->fields).EffectsEnabled == false) {
            bVar9 = true;
          }
          else {
            pSVar6 = TypeInfo_Settings_SettingsManager->static_fields->GraphicsSettings;
            if ((pSVar6 == (Settings_GraphicsSettings_o *)0x0) ||
               (pSVar7 = (pSVar6->fields).NapeBloodEnabled, pSVar7 == (Settings_BoolSetting_o *)0x0))
            goto label_05c3a6de;
            bVar1 = (pSVar7->fields)._value;
            bVar9 = bVar1 == false;
            if ((__this->fields)._GoreEnabled_k__BackingField != false) {
              pCVar5 = (__this->fields).BasicCache;
              if (pCVar5 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c3a6de;
              pUVar12 = (pCVar5->fields).Head;
              pUVar15 = (UnityEngine_ParticleSystem_o *)0x0;
              UVar18 = Characters_BaseCharacter__GetVelocity
                                 ((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
              if (bVar1 != false) {
                pCVar5 = (__this->fields).BasicCache;
                if (pCVar5 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c3a6de;
                pUVar15 = (pCVar5->fields).DecapitationBlood;
              }
              auStack_48._4_4_ = UVar18.fields.y + (float)auStack_48._4_4_;
              auStack_48._0_4_ = UVar18.fields.x + (float)auStack_48._0_4_;
              fStack_40 = extraout_XMM0_Dc + fStack_40;
              fStack_3c = extraout_XMM0_Dd + fStack_3c;
              UVar18.fields.z = UVar18.fields.z + launch.fields.z;
              fVar17 = (__this->fields)._deathVisualStartTime;
              fVar16 = UnityEngine_Time__get_time((MethodInfo *)0x0);
              fVar16 = (fVar17 + 3.0) - fVar16;
              fVar17 = 0.0;
              if (0.0 <= fVar16) {
                fVar17 = fVar16;
              }
              if ((TypeInfo_Characters_TitanLimbFallEffect->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanLimbFallEffect);
              }
              UVar18.fields.x = (float)auStack_48._0_4_;
              UVar18.fields.y = (float)auStack_48._4_4_;
              Characters_TitanLimbFallEffect__PlayHead(source,pUVar12,UVar18,pUVar15,fVar17,(MethodInfo *)0x0)
              ;
            }
          }
          if (source != (UnityEngine_SkinnedMeshRenderer_o *)0x0) {
            UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)source,false,(MethodInfo *)0x0);
            pCVar5 = (__this->fields).BasicCache;
            if (((pCVar5 != (Characters_BasicTitanComponentCache_o *)0x0) &&
                (pUVar12 = (pCVar5->fields).Head, pUVar12 != (UnityEngine_Transform_o *)0x0)) &&
               (pSVar13 = UnityEngine_Component__GetComponentsInChildren_object__34b11b0
                                    ((UnityEngine_Component_o *)pUVar12,
                                     (MethodInfo_34B11B0 *)
                                     MethodInfo_UnityEngine_Component_GetComponentsInChildren_Renderer),
               pSVar13 != (System_Object_array *)0x0)) {
              uVar11 = (uint)pSVar13->max_length;
              if (0 < (int)uVar11) {
                uVar14 = 0;
                do {
                  if (uVar11 <= uVar14) {
                    ThrowIndexOutOfRangeException();
                  }
                  if ((UnityEngine_Renderer_o *)pSVar13->m_Items[(int)uVar14] == (UnityEngine_Renderer_o *)0x0
                     ) goto label_05c3a6de;
                  UnityEngine_Renderer__set_enabled
                            ((UnityEngine_Renderer_o *)pSVar13->m_Items[(int)uVar14],false,(MethodInfo *)0x0);
                  uVar14 = uVar14 + 1;
                  uVar11 = (uint)pSVar13->max_length;
                } while ((int)uVar14 < (int)uVar11);
              }
              if (!bVar9) {
                if (Il2CppMethodInitialized_075477e5 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata
                            (&TypeInfo_Characters_BasicTitan_PlayDecapitationBlood_d__167);
                  Il2CppMethodInitialized_075477e5 = '\x01';
                }
                __this_03 = il2cpp_codegen_object_new
                                      ((Il2CppClass *)
                                       TypeInfo_Characters_BasicTitan_PlayDecapitationBlood_d__167);
                Characters_BasicTitan__PlayDecapitationBlood_d__167___ctor(__this_03,0,(MethodInfo *)0x0);
                if (__this_03 == (Characters_BasicTitan__PlayDecapitationBlood_d__167_o *)0x0)
                goto label_05c3a6de;
                (__this_03->fields).__4__this = __this;
                Il2CppCodeGenWriteBarrier(&(__this_03->fields).__4__this);
                UnityEngine_MonoBehaviour__StartCoroutine_691c390
                          ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_03
                           ,(MethodInfo *)0x0);
              }
              return;
            }
          }
        }
      }
    }
  }
label_05c3a6de:
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$PlayDecapitationBlood
// il2cpp: System_Collections_IEnumerator_o* Characters_BasicTitan__PlayDecapitationBlood (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x5c3a770

System_Collections_IEnumerator_o *
Characters_BasicTitan__PlayDecapitationBlood(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  Characters_BasicTitan__PlayDecapitationBlood_d__167_o *__this_00;
  
  if (Il2CppMethodInitialized_075477e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitan_PlayDecapitationBlood_d__167);
    Il2CppMethodInitialized_075477e5 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Characters_BasicTitan_PlayDecapitationBlood_d__167);
  Characters_BasicTitan__PlayDecapitationBlood_d__167___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 == (Characters_BasicTitan__PlayDecapitationBlood_d__167_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Characters.BasicTitan$$GetLookAngle
// il2cpp: UnityEngine_Vector2_o Characters_BasicTitan__GetLookAngle (Characters_BasicTitan_o* __this, UnityEngine_Vector3_o target, const MethodInfo* method);
// 0x5c3a7e0

UnityEngine_Vector2_o
Characters_BasicTitan__GetLookAngle
          (Characters_BasicTitan_o *__this,UnityEngine_Vector3_o target,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  UnityEngine_Transform_o *pUVar2;
  Characters_BasicTitanComponentCache_o *pCVar3;
  float fVar4;
  float fVar5;
  UnityEngine_Vector3_o UVar6;
  UnityEngine_Vector3_o UVar7;
  UnityEngine_Vector3_o b;
  float local_58;
  float fStack_54;
  float fStack_34;
  float fStack_24;
  UnityEngine_Quaternion_o local_18;
  
  if (Il2CppMethodInitialized_075477e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_075477e6 = '\x01';
  }
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
     (pUVar2 = (pUVar1->fields).Transform, pUVar2 != (UnityEngine_Transform_o *)0x0)) {
    UVar6 = UnityEngine_Transform__get_position(pUVar2,(MethodInfo *)0x0);
    local_58 = target.fields.x;
    fVar4 = atan2f(target.fields.z - UVar6.fields.z,local_58 - UVar6.fields.x);
    pUVar1 = (__this->fields).Cache;
    if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
       (pUVar2 = (pUVar1->fields).Transform, pUVar2 != (UnityEngine_Transform_o *)0x0)) {
      local_18 = UnityEngine_Transform__get_rotation(pUVar2,(MethodInfo *)0x0);
      UVar6 = UnityEngine_Quaternion__Internal_ToEulerRad(&local_18,(MethodInfo *)0x0);
      UVar7.fields.x = UVar6.fields.x * 57.29578;
      UVar7.fields.y = UVar6.fields.y * 57.29578;
      UVar7.fields.z = UVar6.fields.z * 57.29578;
      UVar6 = UnityEngine_Quaternion__Internal_MakePositive(UVar7,(MethodInfo *)0x0);
      pCVar3 = (__this->fields).BasicCache;
      if (pCVar3 != (Characters_BasicTitanComponentCache_o *)0x0) {
        pUVar2 = (pCVar3->fields).Neck;
        if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
          UVar7 = UnityEngine_Transform__get_position(pUVar2,(MethodInfo *)0x0);
          pCVar3 = (__this->fields).BasicCache;
          if (pCVar3 != (Characters_BasicTitanComponentCache_o *)0x0) {
            pUVar2 = (pCVar3->fields).Transform;
            if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
              b = UnityEngine_Transform__get_position(pUVar2,(MethodInfo *)0x0);
              if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
              }
              fStack_24 = UVar6.fields.y;
              fVar5 = fVar4 * 57.29578 + fStack_24 + -90.0;
              fVar4 = floorf(fVar5 / 360.0);
              fVar5 = fVar4 * -360.0 + fVar5;
              fVar4 = 360.0;
              if (fVar5 <= 360.0) {
                fVar4 = fVar5;
              }
              fVar4 = (float)(-(uint)(0.0 <= fVar5) & (uint)fVar4);
              fVar5 = Utility_Util__DistanceIgnoreY(target,b,(MethodInfo *)0x0);
              fStack_34 = UVar7.fields.y;
              fStack_54 = target.fields.y;
              fVar5 = atan2f(fStack_34 - fStack_54,fVar5);
              return (UnityEngine_Vector2_o)
                     (CONCAT44(~-(uint)(180.0 < fVar4) & (uint)fVar4 |
                               (uint)(fVar4 + -360.0) & -(uint)(180.0 < fVar4),fVar5 * 57.29578) ^
                     0x8000000000000000);
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$LateUpdateHeadPosition
// il2cpp: void Characters_BasicTitan__LateUpdateHeadPosition (Characters_BasicTitan_o* __this, UnityEngine_Vector3_o position, const MethodInfo* method);
// 0x5c3a9f0

void Characters_BasicTitan__LateUpdateHeadPosition
               (Characters_BasicTitan_o *__this,UnityEngine_Vector3_o position,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Utility_BaseComponentCache_o *pUVar3;
  Cameras_BaseCamera_o *pCVar4;
  UnityEngine_Camera_o *pUVar5;
  Characters_BasicTitanComponentCache_o *pCVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_Vector2_Fields UVar8;
  UnityEngine_Vector2_o UVar9;
  System_Nullable_Quaternion__o *pSVar10;
  UnityEngine_Vector3_StaticFields *pUVar11;
  UnityEngine_Transform_o *pUVar12;
  MethodInfo *pMVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 extraout_XMM0_Db;
  undefined4 uVar19;
  undefined4 in_XMM0_Dc;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dc_04;
  undefined4 extraout_XMM0_Dc_05;
  undefined4 in_XMM0_Dd;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  undefined4 extraout_XMM0_Dd_04;
  undefined4 extraout_XMM0_Dd_05;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  undefined1 auVar24 [16];
  UnityEngine_Quaternion_o UVar25;
  UnityEngine_Quaternion_Fields UVar26;
  UnityEngine_Vector3_o UVar27;
  UnityEngine_Vector3_o UVar28;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o euler_00;
  float fStack_b4;
  undefined1 local_a8 [16];
  undefined1 local_98 [32];
  UnityEngine_Quaternion_Fields local_78;
  float local_60;
  float local_5c;
  UnityEngine_Quaternion_o local_58;
  undefined1 local_48 [16];
  undefined1 local_38 [8];
  float fStack_30;
  float fStack_2c;
  UnityEngine_Quaternion_Fields local_28;
  
  UVar28.fields.z = position.fields.z;
  local_78.z = (float)in_XMM0_Dc;
  local_78._0_8_ = position.fields._0_8_;
  local_78.w = (float)in_XMM0_Dd;
  if (Il2CppMethodInitialized_075477e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Quaternion_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_075477e7 = '\x01';
  }
  local_58.fields = (UnityEngine_Quaternion_Fields)ZEXT816(0);
  pUVar3 = (__this->fields).Cache;
  if ((pUVar3 == (Utility_BaseComponentCache_o *)0x0) ||
     (pUVar12 = (pUVar3->fields).Transform, pUVar12 == (UnityEngine_Transform_o *)0x0)) goto label_05c3afe1;
  pMVar13 = (MethodInfo *)0x0;
  UVar27 = UnityEngine_Transform__get_position(pUVar12,(MethodInfo *)0x0);
  local_5c = UVar27.fields.z;
  fStack_30 = (float)extraout_XMM0_Dc;
  local_38 = UVar27.fields._0_8_;
  fStack_2c = (float)extraout_XMM0_Dd;
  UVar28.fields.x = local_78.x;
  UVar28.fields.y = local_78.y;
  UVar9 = Characters_BasicTitan__GetLookAngle(__this,UVar28,pMVar13);
  fVar17 = UVar9.fields.y;
  auVar21._8_4_ = extraout_XMM0_Dc_00;
  auVar21._0_4_ = UVar9.fields.x;
  auVar21._4_4_ = UVar9.fields.y;
  auVar21._12_4_ = extraout_XMM0_Dd_00;
  if ((-120.0 < fVar17 && fVar17 < -50.0) || (fVar17 < 120.0 && 50.0 < fVar17)) {
    fVar17 = (__this->fields).LastGoodHeadAngle.fields.y;
    if ((fVar17 < -50.0) || (local_a8 = auVar21, 50.0 < fVar17)) {
      pCVar4 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
      if ((pCVar4 == (Cameras_BaseCamera_o *)0x0) ||
         ((pUVar5 = (pCVar4->fields).Camera, pUVar5 == (UnityEngine_Camera_o *)0x0 ||
          (pUVar12 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0)
          , pUVar12 == (UnityEngine_Transform_o *)0x0)))) goto label_05c3afe1;
      pMVar13 = (MethodInfo *)0x0;
      UVar28 = UnityEngine_Transform__get_position(pUVar12,(MethodInfo *)0x0);
      UVar9 = Characters_BasicTitan__GetLookAngle(__this,UVar28,pMVar13);
      local_a8._8_4_ = extraout_XMM0_Dc_02;
      local_a8._0_4_ = UVar9.fields.x;
      local_a8._4_4_ = UVar9.fields.y;
      local_a8._12_4_ = extraout_XMM0_Dd_02;
      fVar17 = (__this->fields).LastGoodHeadAngle.fields.y;
    }
    (__this->fields).LastGoodHeadAngle.fields.x = (float)local_a8._0_4_;
    local_a8._4_4_ = fVar17;
  }
  else {
    pUVar3 = (__this->fields).Cache;
    if ((pUVar3 == (Utility_BaseComponentCache_o *)0x0) ||
       (pUVar12 = (pUVar3->fields).Transform, pUVar12 == (UnityEngine_Transform_o *)0x0)) goto label_05c3afe1;
    UVar27 = UnityEngine_Transform__get_forward(pUVar12,(MethodInfo *)0x0);
    local_48._8_4_ = extraout_XMM0_Dc_01;
    local_48._0_8_ = UVar27.fields._0_8_;
    local_48._12_4_ = extraout_XMM0_Dd_01;
    local_60 = UVar27.fields.z;
    if (Il2CppMethodInitialized_0753e72d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e72d = '\x01';
      local_98[0] = false;
      local_98._1_3_ = 0;
      local_98._4_4_ = 0.0;
    }
    else {
      local_98[0] = false;
      local_98._1_3_ = 0;
      local_98._4_4_ = 0.0;
    }
    local_98[0] = false;
    local_98._1_3_ = 0;
    local_98._4_4_ = 0.0;
    if (Il2CppMethodInitialized_0753e729 == '\0') {
      local_98[0] = false;
      local_98._1_3_ = 0;
      local_98._4_4_ = 0.0;
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_0753e729 = '\x01';
    }
    local_78.x = local_78.x - (float)local_38._0_4_;
    local_78.y = local_78.y - (float)local_38._4_4_;
    fVar23 = UVar28.fields.z - local_5c;
    local_78.z = local_78.z - fStack_30;
    local_78.w = local_78.w - fStack_2c;
    fVar16 = local_78.x;
    fVar18 = local_78.y;
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      fVar16 = local_78.x;
      fVar18 = local_78.y;
    }
    uVar19 = 0;
    fVar16 = fVar23 * fVar23 + fVar18 * fVar18 + fVar16 * fVar16;
    if (fVar16 < 0.0) {
      fVar16 = sqrtf(fVar16);
      uVar19 = extraout_XMM0_Db;
      if (fVar16 <= 1e-05) goto label_05c3aba3;
label_05c3ac73:
      fVar23 = fVar23 / fVar16;
      auVar20._4_4_ = fVar16;
      auVar20._0_4_ = fVar16;
      auVar20._8_4_ = uVar19;
      auVar20._12_4_ = uVar19;
      auVar20 = divps((undefined1  [16])local_78,auVar20);
      local_98[0] = auVar20[0];
      local_98._1_3_ = auVar20._1_3_;
      local_98._4_4_ = auVar20._4_4_;
      pUVar11 = (UnityEngine_Vector3_StaticFields *)local_98;
    }
    else {
      fVar16 = SQRT(fVar16);
      if (1e-05 < fVar16) goto label_05c3ac73;
label_05c3aba3:
      pUVar11 = TypeInfo_UnityEngine_Vector3->static_fields;
      fVar23 = (pUVar11->zeroVector).fields.z;
    }
    uVar1 = (pUVar11->zeroVector).fields.x;
    uVar2 = (pUVar11->zeroVector).fields.y;
    if (0.0 <= local_60 * fVar23 + (float)local_48._4_4_ * (float)uVar2 + (float)local_48._0_4_ * (float)uVar1
       ) {
      local_a8._0_4_ = UVar9.fields.x;
      fVar23 = (float)local_a8._0_4_;
      local_a8 = auVar21;
    }
    else {
      pCVar4 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
      if (((pCVar4 == (Cameras_BaseCamera_o *)0x0) ||
          (pUVar5 = (pCVar4->fields).Camera, pUVar5 == (UnityEngine_Camera_o *)0x0)) ||
         (pUVar12 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0),
         pUVar12 == (UnityEngine_Transform_o *)0x0)) goto label_05c3afe1;
      pMVar13 = (MethodInfo *)0x0;
      UVar28 = UnityEngine_Transform__get_position(pUVar12,(MethodInfo *)0x0);
      UVar9 = Characters_BasicTitan__GetLookAngle(__this,UVar28,pMVar13);
      fVar17 = UVar9.fields.y;
      local_a8._8_4_ = extraout_XMM0_Dc_03;
      local_a8._0_4_ = UVar9.fields.x;
      local_a8._4_4_ = UVar9.fields.y;
      local_a8._12_4_ = extraout_XMM0_Dd_03;
      fVar23 = UVar9.fields.x;
    }
    UVar8.y = fVar17;
    UVar8.x = fVar23;
    (__this->fields).LastGoodHeadAngle.fields = UVar8;
  }
  pCVar6 = (__this->fields).BasicCache;
  if ((pCVar6 != (Characters_BasicTitanComponentCache_o *)0x0) &&
     (pUVar12 = (pCVar6->fields).Head, pUVar12 != (UnityEngine_Transform_o *)0x0)) {
    local_58 = UnityEngine_Transform__get_rotation(pUVar12,(MethodInfo *)0x0);
    UVar28 = UnityEngine_Quaternion__Internal_ToEulerRad(&local_58,(MethodInfo *)0x0);
    UVar27.fields.x = UVar28.fields.x * 57.29578;
    UVar27.fields.y = UVar28.fields.y * 57.29578;
    UVar27.fields.z = UVar28.fields.z * 57.29578;
    UVar28 = UnityEngine_Quaternion__Internal_MakePositive(UVar27,(MethodInfo *)0x0);
    pCVar6 = (__this->fields).BasicCache;
    if (pCVar6 != (Characters_BasicTitanComponentCache_o *)0x0) {
      local_78.z = (float)extraout_XMM0_Dc_04;
      local_78._0_8_ = UVar28.fields._0_8_;
      local_78.w = (float)extraout_XMM0_Dd_04;
      pUVar7 = (pCVar6->fields).Head;
      if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
        local_58 = UnityEngine_Transform__get_rotation(pUVar7,(MethodInfo *)0x0);
        UVar28 = UnityEngine_Quaternion__Internal_ToEulerRad(&local_58,(MethodInfo *)0x0);
        euler.fields.x = UVar28.fields.x * 57.29578;
        euler.fields.y = UVar28.fields.y * 57.29578;
        euler.fields.z = UVar28.fields.z * 57.29578;
        UVar28 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
        pCVar6 = (__this->fields).BasicCache;
        if ((pCVar6 != (Characters_BasicTitanComponentCache_o *)0x0) &&
           (pUVar7 = (pCVar6->fields).Head, pUVar7 != (UnityEngine_Transform_o *)0x0)) {
          auVar21 = minps(_DAT_01007a20,local_a8);
          uVar14 = -(uint)(-80.0 <= local_a8._0_4_);
          uVar15 = -(uint)(-80.0 <= local_a8._4_4_);
          auVar22._0_4_ = auVar21._0_4_ & uVar14;
          auVar22._4_4_ = auVar21._4_4_ & uVar15;
          auVar22._8_4_ = auVar21._8_4_ & -(uint)(0.0 <= local_a8._8_4_);
          auVar22._12_4_ = auVar21._12_4_ & -(uint)(0.0 <= local_a8._12_4_);
          auVar24._0_8_ = CONCAT44(~uVar15,~uVar14) & 0xc2a00000c2a00000;
          auVar24._8_8_ = 0;
          local_58 = UnityEngine_Transform__get_rotation(pUVar7,(MethodInfo *)0x0);
          UVar27 = UnityEngine_Quaternion__Internal_ToEulerRad(&local_58,(MethodInfo *)0x0);
          euler_00.fields.x = UVar27.fields.x * 57.29578;
          euler_00.fields.y = UVar27.fields.y * 57.29578;
          euler_00.fields.z = UVar27.fields.z * 57.29578;
          UVar27 = UnityEngine_Quaternion__Internal_MakePositive(euler_00,(MethodInfo *)0x0);
          fStack_b4 = UVar28.fields.y;
          local_a8._0_4_ = SUB164(auVar24 | auVar22,0);
          local_a8._4_4_ = SUB164(auVar24 | auVar22,4);
          local_98._0_4_ = (local_78.x + (float)local_a8._0_4_) * 0.017453292;
          local_98._4_4_ = (fStack_b4 + (float)local_a8._4_4_) * 0.017453292;
          local_98._8_4_ = UVar27.fields.z * 0.017453292;
          UVar25 = UnityEngine_Quaternion__Internal_FromEulerRad
                             ((UnityEngine_Vector3_o *)local_98,(MethodInfo *)0x0);
          UnityEngine_Transform__set_rotation(pUVar12,UVar25,(MethodInfo *)0x0);
          pCVar6 = (__this->fields).BasicCache;
          if ((pCVar6 != (Characters_BasicTitanComponentCache_o *)0x0) &&
             (pUVar12 = (pCVar6->fields).Head, pUVar12 != (UnityEngine_Transform_o *)0x0)) {
            UVar26 = (__this->fields)._oldHeadRotation.fields;
            UVar25 = UnityEngine_Transform__get_localRotation(pUVar12,(MethodInfo *)0x0);
            local_78.z = (float)extraout_XMM0_Dc_05;
            local_78._0_8_ = UVar25.fields._0_8_;
            local_78.w = (float)extraout_XMM0_Dd_05;
            fVar17 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
            local_a8._0_8_ = UVar26._0_8_;
            local_a8._8_8_ = UVar26._8_8_;
            local_98._0_8_ = local_a8._0_8_;
            local_98._8_8_ = local_a8._8_8_;
            local_28.x = local_78.x;
            local_28.y = local_78.y;
            local_28._8_8_ = UVar25.fields._8_8_;
            UVar25 = UnityEngine_Quaternion__Internal_Lerp
                               ((UnityEngine_Quaternion_o *)local_98,(UnityEngine_Quaternion_o *)&local_28,
                                fVar17 * 10.0,(MethodInfo *)0x0);
            UnityEngine_Transform__set_localRotation(pUVar12,UVar25,(MethodInfo *)0x0);
            pCVar6 = (__this->fields).BasicCache;
            if ((pCVar6 != (Characters_BasicTitanComponentCache_o *)0x0) &&
               (pUVar12 = (pCVar6->fields).Head, pUVar12 != (UnityEngine_Transform_o *)0x0)) {
              UVar26 = (UnityEngine_Quaternion_Fields)
                       UnityEngine_Transform__get_localRotation(pUVar12,(MethodInfo *)0x0);
              (__this->fields)._oldHeadRotation.fields = UVar26;
              pCVar6 = (__this->fields).BasicCache;
              if ((pCVar6 != (Characters_BasicTitanComponentCache_o *)0x0) &&
                 (pUVar12 = (pCVar6->fields).Head, pUVar12 != (UnityEngine_Transform_o *)0x0)) {
                UVar25 = UnityEngine_Transform__get_rotation(pUVar12,(MethodInfo *)0x0);
                local_98[0] = false;
                local_98._1_3_ = 0;
                local_98._4_4_ = 0.0;
                local_98._8_4_ = 0.0;
                local_98._12_4_ = 0.0;
                local_98._16_4_ = 0.0;
                System_Nullable_Quaternion____ctor
                          ((System_Nullable_Quaternion__o *)local_98,UVar25,
                           (MethodInfo_3CD6790 *)MethodInfo_System_Nullable_Quaternion_ctor);
                (__this->fields).LateUpdateHeadRotation.fields.value.fields.w = (float)local_98._16_4_;
                (__this->fields).LateUpdateHeadRotation.fields.hasValue = (bool)local_98[0];
                *(undefined3 *)&(__this->fields).LateUpdateHeadRotation.fields.field_0x1 = local_98._1_3_;
                (__this->fields).LateUpdateHeadRotation.fields.value.fields.x = (float)local_98._4_4_;
                pSVar10 = &(__this->fields).LateUpdateHeadRotation;
                (pSVar10->fields).value.fields.y = (float)local_98._8_4_;
                (pSVar10->fields).value.fields.z = (float)local_98._12_4_;
                return;
              }
            }
          }
        }
      }
    }
  }
label_05c3afe1:
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$LateUpdateHead
// il2cpp: void Characters_BasicTitan__LateUpdateHead (Characters_BasicTitan_o* __this, Characters_BaseCharacter_o* target, const MethodInfo* method);
// 0x5c3aff0

void Characters_BasicTitan__LateUpdateHead
               (Characters_BasicTitan_o *__this,Characters_BaseCharacter_o *target,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  Utility_BaseComponentCache_o *pUVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_Transform_o *pUVar6;
  System_Nullable_Quaternion__o *pSVar7;
  bool bVar8;
  Characters_BasicTitanComponentCache_o *pCVar9;
  uint uVar10;
  float fVar11;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  float fVar12;
  undefined8 uVar13;
  undefined8 in_XMM1_Qb;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar17 [12];
  undefined1 auVar16 [16];
  UnityEngine_Quaternion_o UVar18;
  UnityEngine_Vector3_o UVar19;
  UnityEngine_Vector3_o UVar20;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o euler_00;
  UnityEngine_Vector3_o euler_01;
  UnityEngine_Vector3_o b;
  float local_c8;
  float fStack_c4;
  float local_b8;
  UnityEngine_Quaternion_o local_a8;
  undefined1 local_98 [8];
  undefined8 uStack_90;
  System_Nullable_Quaternion__Fields local_88;
  float local_70;
  float local_6c;
  UnityEngine_Quaternion_Fields local_68;
  float local_58;
  float fStack_54;
  undefined8 uStack_50;
  undefined1 local_48 [16];
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  UnityEngine_Quaternion_Fields local_28;
  
  if (Il2CppMethodInitialized_075477e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseTitan);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Quaternion_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Quaternion_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Quaternion_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_075477e8 = '\x01';
  }
  local_a8.fields = (UnityEngine_Quaternion_Fields)ZEXT816(0);
  if ((__this->fields).Dead != false) {
    return;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)target,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar8) {
    if (((target == (Characters_BaseCharacter_o *)0x0) ||
        (pUVar4 = (target->fields).Cache, pUVar4 == (Utility_BaseComponentCache_o *)0x0)) ||
       (pUVar5 = (pUVar4->fields).Transform, pUVar5 == (UnityEngine_Transform_o *)0x0)) goto label_05c3b69f;
    UVar19 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
    fVar1 = UVar19.fields.y;
    bVar3 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
    if ((bVar3 <= (target->klass->_2).typeHierarchyDepth) &&
       ((target->klass->_2).typeHierarchy[(ulong)bVar3 - 1] == (Il2CppClass *)TypeInfo_Characters_BaseTitan))
    {
      if (((*(uint64_t *)((char *)target + 0x108)) == (void *)0x0) ||
         (pUVar5 = *(UnityEngine_Transform_o **)((long)(*(uint64_t *)((char *)target + 0x108)) + 0x38),
         pUVar5 == (UnityEngine_Transform_o *)0x0)) goto label_05c3b69f;
      UVar19 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
      fVar1 = UVar19.fields.y;
    }
    pUVar4 = (target->fields).Cache;
    if ((pUVar4 == (Utility_BaseComponentCache_o *)0x0) ||
       (pUVar5 = (pUVar4->fields).Transform, pUVar5 == (UnityEngine_Transform_o *)0x0)) goto label_05c3b69f;
    UVar19 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
    pUVar4 = (__this->fields).Cache;
    if (pUVar4 == (Utility_BaseComponentCache_o *)0x0) goto label_05c3b69f;
    local_98._0_4_ = UVar19.fields.z;
    pUVar5 = (pUVar4->fields).Transform;
    if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_05c3b69f;
    UVar20 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
    local_c8 = UVar19.fields.x;
    fVar2 = atan2f((float)local_98._0_4_ - UVar20.fields.z,local_c8 - UVar20.fields.x);
    pUVar4 = (__this->fields).Cache;
    if ((pUVar4 == (Utility_BaseComponentCache_o *)0x0) ||
       (pUVar5 = (pUVar4->fields).Transform, pUVar5 == (UnityEngine_Transform_o *)0x0)) goto label_05c3b69f;
    local_a8 = UnityEngine_Transform__get_rotation(pUVar5,(MethodInfo *)0x0);
    UVar19 = UnityEngine_Quaternion__Internal_ToEulerRad(&local_a8,(MethodInfo *)0x0);
    UVar20.fields.x = UVar19.fields.x * 57.29578;
    UVar20.fields.y = UVar19.fields.y * 57.29578;
    UVar20.fields.z = UVar19.fields.z * 57.29578;
    UVar19 = UnityEngine_Quaternion__Internal_MakePositive(UVar20,(MethodInfo *)0x0);
    fStack_34 = UVar19.fields.y;
    local_38 = fStack_34 + -90.0 + fVar2 * 57.29578;
    fStack_30 = fStack_34;
    fStack_2c = fStack_34;
    fVar2 = floorf(local_38 / 360.0);
    pCVar9 = (__this->fields).BasicCache;
    if ((pCVar9 == (Characters_BasicTitanComponentCache_o *)0x0) ||
       (pUVar5 = (pCVar9->fields).Neck, local_6c = fVar2, pUVar5 == (UnityEngine_Transform_o *)0x0))
    goto label_05c3b69f;
    UVar19 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
    pUVar4 = (target->fields).Cache;
    if ((pUVar4 == (Utility_BaseComponentCache_o *)0x0) ||
       (pUVar5 = (pUVar4->fields).Transform, pUVar5 == (UnityEngine_Transform_o *)0x0)) goto label_05c3b69f;
    local_98._0_4_ = (__this->fields).Size;
    UVar20 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
    pCVar9 = (__this->fields).BasicCache;
    if (pCVar9 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c3b69f;
    local_58 = UVar20.fields.z;
    local_68.z = extraout_XMM0_Dc;
    local_68._0_8_ = UVar20.fields._0_8_;
    local_68.w = extraout_XMM0_Dd;
    pUVar5 = (pCVar9->fields).Transform;
    if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_05c3b69f;
    fStack_c4 = UVar19.fields.y;
    UVar19 = UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
    fVar2 = UVar19.fields.x;
    fVar11 = UVar19.fields.y;
    fVar12 = UVar19.fields.z;
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      local_48._8_4_ = extraout_XMM0_Dc_00;
      local_48._0_8_ = UVar19.fields._0_8_;
      local_48._12_4_ = extraout_XMM0_Dd_00;
      local_70 = UVar19.fields.z;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
      fVar2 = (float)local_48._0_4_;
      fVar11 = (float)local_48._4_4_;
      fVar12 = local_70;
    }
    UVar19.fields.z = local_58;
    UVar19.fields.x = local_68.x;
    UVar19.fields.y = local_68.y;
    b.fields.y = fVar11;
    b.fields.x = fVar2;
    b.fields.z = fVar12;
    fVar2 = Utility_Util__DistanceIgnoreY(UVar19,b,(MethodInfo *)0x0);
    fVar1 = atan2f((fStack_c4 + (float)local_98._0_4_ + (float)local_98._0_4_) - fVar1,fVar2);
    pCVar9 = (__this->fields).BasicCache;
    if ((pCVar9 == (Characters_BasicTitanComponentCache_o *)0x0) ||
       (pUVar5 = (pCVar9->fields).Head, pUVar5 == (UnityEngine_Transform_o *)0x0)) goto label_05c3b69f;
    local_a8 = UnityEngine_Transform__get_rotation(pUVar5,(MethodInfo *)0x0);
    UVar19 = UnityEngine_Quaternion__Internal_ToEulerRad(&local_a8,(MethodInfo *)0x0);
    euler.fields.x = UVar19.fields.x * 57.29578;
    euler.fields.y = UVar19.fields.y * 57.29578;
    euler.fields.z = UVar19.fields.z * 57.29578;
    UVar19 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
    pCVar9 = (__this->fields).BasicCache;
    if ((pCVar9 == (Characters_BasicTitanComponentCache_o *)0x0) ||
       (pUVar6 = (pCVar9->fields).Head, pUVar6 == (UnityEngine_Transform_o *)0x0)) goto label_05c3b69f;
    local_a8 = UnityEngine_Transform__get_rotation(pUVar6,(MethodInfo *)0x0);
    UVar20 = UnityEngine_Quaternion__Internal_ToEulerRad(&local_a8,(MethodInfo *)0x0);
    euler_00.fields.x = UVar20.fields.x * 57.29578;
    euler_00.fields.y = UVar20.fields.y * 57.29578;
    euler_00.fields.z = UVar20.fields.z * 57.29578;
    UVar20 = UnityEngine_Quaternion__Internal_MakePositive(euler_00,(MethodInfo *)0x0);
    pCVar9 = (__this->fields).BasicCache;
    if (pCVar9 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c3b69f;
    unique0x1000037b = extraout_XMM0_Dc_01;
    local_98 = (undefined1  [8])UVar20.fields._0_8_;
    unique0x1000037f = extraout_XMM0_Dd_01;
    pUVar6 = (pCVar9->fields).Head;
    if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_05c3b69f;
    fVar2 = local_38 + local_6c * -360.0;
    auVar17 = ZEXT812(0x43b40000);
    if (fVar2 <= auVar17._0_4_) {
      auVar17._4_8_ = auVar17._4_8_;
      auVar17._0_4_ = fVar2;
    }
    fVar2 = (float)(-(uint)(0.0 <= fVar2) & auVar17._0_4_);
    fVar12 = (float)(~-(uint)(180.0 < fVar2) & (uint)fVar2 | (uint)(fVar2 + -360.0) & -(uint)(180.0 < fVar2));
    fVar11 = -fVar12;
    fVar2 = 40.0;
    if (fVar11 <= 40.0) {
      fVar2 = fVar11;
    }
    uVar10 = -(uint)(fVar12 <= 40.0);
    fVar1 = fVar1 * 57.29578;
    local_68 = (UnityEngine_Quaternion_Fields)ZEXT416(~uVar10 & 0xc2200000 | (uint)fVar2 & uVar10);
    fVar2 = 30.0;
    if (fVar1 <= 30.0) {
      fVar2 = fVar1;
    }
    auVar14._0_12_ = ZEXT812(0xc2200000);
    auVar14._12_4_ = 0;
    fVar11 = auVar14._0_4_;
    uVar10 = -(uint)(fVar11 <= fVar1);
    local_a8 = UnityEngine_Transform__get_rotation(pUVar6,(MethodInfo *)0x0);
    auVar15._8_8_ = auVar14._8_8_;
    auVar15._0_8_ = local_a8.fields._8_8_;
    UVar20 = UnityEngine_Quaternion__Internal_ToEulerRad(&local_a8,(MethodInfo *)0x0);
    auVar17 = auVar15._4_12_;
    euler_01.fields.x = UVar20.fields.x * 57.29578;
    euler_01.fields.y = UVar20.fields.y * 57.29578;
    euler_01.fields.z = UVar20.fields.z * 57.29578;
    UVar20 = UnityEngine_Quaternion__Internal_MakePositive(euler_01,(MethodInfo *)0x0);
    local_c8 = UVar19.fields.x;
    local_88.value.fields.x = ((float)local_98._4_4_ + local_68.x) * 0.017453292;
    local_88._0_4_ = (local_c8 + (float)(~uVar10 & (uint)fVar11 | (uint)fVar2 & uVar10)) * 0.017453292;
    auVar16._0_4_ = UVar20.fields.z * 0.017453292;
    auVar16._4_12_ = auVar17;
    local_88.value.fields.y = auVar16._0_4_;
    UVar18 = UnityEngine_Quaternion__Internal_FromEulerRad
                       ((UnityEngine_Vector3_o *)&local_88,(MethodInfo *)0x0);
    in_XMM1_Qb = auVar16._8_8_;
    UnityEngine_Transform__set_rotation(pUVar5,UVar18,(MethodInfo *)0x0);
  }
  bVar8 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method);
  local_b8 = 10.0;
  if ((bVar8) && (uVar10 = (__this->fields).State - 10, uVar10 < 9)) {
    local_b8 = *(float *)(&g_data_010a5cdc + (long)(int)uVar10 * 4);
  }
  pCVar9 = (__this->fields).BasicCache;
  if (pCVar9 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c3b69f;
  pUVar5 = (pCVar9->fields).Head;
  if ((__this->fields)._aiHeadRotation.fields.hasValue == false) {
    if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_05c3b69f;
    UVar18 = UnityEngine_Transform__get_rotation(pUVar5,(MethodInfo *)0x0);
    uVar13 = UVar18.fields._8_8_;
    fVar1 = UVar18.fields.x;
    fVar2 = UVar18.fields.y;
    pCVar9 = (__this->fields).BasicCache;
    if (pCVar9 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c3b69f;
  }
  else {
    pSVar7 = &(__this->fields)._aiHeadRotation;
    fVar1 = (pSVar7->fields).value.fields.x;
    fVar2 = (pSVar7->fields).value.fields.y;
    pSVar7 = &(__this->fields)._aiHeadRotation;
    uVar13._0_4_ = (pSVar7->fields).value.fields.z;
    uVar13._4_4_ = (pSVar7->fields).value.fields.w;
    in_XMM1_Qb = 0;
  }
  uStack_90 = in_XMM1_Qb;
  local_98 = (undefined1  [8])uVar13;
  pUVar6 = (pCVar9->fields).Head;
  if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
    UVar18 = UnityEngine_Transform__get_rotation(pUVar6,(MethodInfo *)0x0);
    _local_58 = UVar18.fields._8_8_;
    local_68.z = extraout_XMM0_Dc_02;
    local_68._0_8_ = UVar18.fields._0_8_;
    local_68.w = extraout_XMM0_Dd_02;
    uStack_50 = in_XMM1_Qb;
    fVar11 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    local_c8._0_1_ = SUB41(fVar1,0);
    local_c8._1_3_ = (undefined3)((uint)fVar1 >> 8);
    local_88.hasValue = local_c8._0_1_;
    local_88._1_3_ = local_c8._1_3_;
    local_88.value.fields.x = fVar2;
    local_88.value.fields.y = (float)local_98._0_4_;
    local_88.value.fields.z = (float)local_98._4_4_;
    local_28.x = local_68.x;
    local_28.y = local_68.y;
    local_28.z = local_58;
    local_28.w = fStack_54;
    UVar18 = UnityEngine_Quaternion__Internal_Lerp
                       ((UnityEngine_Quaternion_o *)&local_88,(UnityEngine_Quaternion_o *)&local_28,
                        fVar11 * local_b8,(MethodInfo *)0x0);
    if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__set_rotation(pUVar5,UVar18,(MethodInfo *)0x0);
      pCVar9 = (__this->fields).BasicCache;
      if ((pCVar9 != (Characters_BasicTitanComponentCache_o *)0x0) &&
         (pUVar5 = (pCVar9->fields).Head, pUVar5 != (UnityEngine_Transform_o *)0x0)) {
        UVar18 = UnityEngine_Transform__get_rotation(pUVar5,(MethodInfo *)0x0);
        local_88.hasValue = false;
        local_88._1_3_ = 0;
        local_88.value.fields.x = 0.0;
        local_88.value.fields.y = 0.0;
        local_88.value.fields.z = 0.0;
        local_88.value.fields.w = 0.0;
        System_Nullable_Quaternion____ctor
                  ((System_Nullable_Quaternion__o *)&local_88,UVar18,
                   (MethodInfo_3CD6790 *)MethodInfo_System_Nullable_Quaternion_ctor);
        (__this->fields)._aiHeadRotation.fields.value.fields.w = local_88.value.fields.w;
        (__this->fields)._aiHeadRotation.fields.hasValue = local_88.hasValue;
        *(undefined3 *)&(__this->fields)._aiHeadRotation.fields.field_0x1 = local_88._1_3_;
        (__this->fields)._aiHeadRotation.fields.value.fields.x = local_88.value.fields.x;
        pSVar7 = &(__this->fields)._aiHeadRotation;
        (pSVar7->fields).value.fields.y = local_88.value.fields.y;
        (pSVar7->fields).value.fields.z = local_88.value.fields.z;
        return;
      }
    }
  }
label_05c3b69f:
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$Update
// il2cpp: void Characters_BasicTitan__Update (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x5c3b6b0

void Characters_BasicTitan__Update(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  Characters_BasicTitan__StartDeathAnimation(__this,method);
  Characters_BaseTitan__Update((Characters_BaseTitan_o *)__this,method);
  return;
}


// Characters.BasicTitan$$FixedUpdate
// il2cpp: void Characters_BasicTitan__FixedUpdate (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x5c3b6d0

void Characters_BasicTitan__FixedUpdate(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  Characters_TitanDeathDissolve_o *pCVar1;
  Characters_AnimationHandler_o *pCVar2;
  Characters_BasicTitanComponentCache_o *pCVar3;
  Characters_BaseHitbox_o *pCVar4;
  UnityEngine_Collider_o *pUVar5;
  bool bVar6;
  System_String_o *__this_00;
  MethodInfo *in_RCX;
  bool bVar7;
  float fVar8;
  
  if (Il2CppMethodInitialized_075477e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitan);
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|grab.");
    Il2CppMethodInitialized_075477e9 = '\x01';
  }
  pCVar1 = (__this->fields).DeathDissolve;
  if ((pCVar1 != (Characters_TitanDeathDissolve_o *)0x0) &&
     ((pCVar1->fields)._CollidersDisabled_k__BackingField != false)) {
    return;
  }
  Characters_BaseTitan__FixedUpdate((Characters_BaseTitan_o *)__this,method);
  bVar7 = true;
  if ((__this->fields).Dead == false) {
    pCVar2 = (__this->fields).Animation;
    if (pCVar2 == (Characters_AnimationHandler_o *)0x0) goto label_05c3b893;
    __this_00 = Characters_AnimationHandler__GetCurrentAnimation(pCVar2,(MethodInfo *)0x0);
    if (__this_00 == (System_String_o *)0x0) goto label_05c3b893;
    in_RCX = (MethodInfo *)0x0;
    bVar6 = System_String__StartsWith_53002b0(__this_00,"Amarture_VER2|grab.",4,(MethodInfo *)0x0);
    if (bVar6) {
      pCVar2 = (__this->fields).Animation;
      if (pCVar2 == (Characters_AnimationHandler_o *)0x0) goto label_05c3b893;
      fVar8 = Characters_AnimationHandler__GetCurrentNormalizedTime(pCVar2,(MethodInfo *)0x0);
      bVar7 = 1.0 <= fVar8;
    }
  }
  pCVar3 = (__this->fields).BasicCache;
  if (pCVar3 != (Characters_BasicTitanComponentCache_o *)0x0) {
    if ((bVar7) || ((__this->fields).LeftArmDisabled != false)) {
      bVar6 = false;
    }
    else {
      bVar6 = (__this->fields).LeftHandDisabled == false;
    }
    pCVar4 = (pCVar3->fields).HandLHitbox;
    pUVar5 = (pCVar3->fields).HandLHurtbox;
    fVar8 = (pCVar3->fields).HandLHurtboxRadius;
    if ((TypeInfo_Characters_BasicTitan->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitan);
    }
    Characters_BasicTitan__UpdateHandHurtbox(pUVar5,pCVar4,fVar8,bVar6,in_RCX);
    pCVar3 = (__this->fields).BasicCache;
    if (pCVar3 != (Characters_BasicTitanComponentCache_o *)0x0) {
      if ((bVar7) || ((__this->fields).RightArmDisabled != false)) {
        bVar7 = false;
      }
      else {
        bVar7 = (__this->fields).RightHandDisabled == false;
      }
      pCVar4 = (pCVar3->fields).HandRHitbox;
      pUVar5 = (pCVar3->fields).HandRHurtbox;
      fVar8 = (pCVar3->fields).HandRHurtboxRadius;
      if ((TypeInfo_Characters_BasicTitan->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitan);
      }
      Characters_BasicTitan__UpdateHandHurtbox(pUVar5,pCVar4,fVar8,bVar7,in_RCX);
      return;
    }
  }
label_05c3b893:
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$UpdateHandHurtbox
// il2cpp: void Characters_BasicTitan__UpdateHandHurtbox (UnityEngine_Collider_o* hurtbox, Characters_BaseHitbox_o* hitbox, float normalRadius, bool grabbing, const MethodInfo* method);
// 0x5c3b8a0

void Characters_BasicTitan__UpdateHandHurtbox
               (UnityEngine_Collider_o *hurtbox,Characters_BaseHitbox_o *hitbox,float normalRadius,
               bool grabbing,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_SphereCollider_o *__this;
  float fVar2;
  
  if (Il2CppMethodInitialized_075477ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_SphereCollider);
    Il2CppMethodInitialized_075477ea = '\x01';
  }
  if (hurtbox != (UnityEngine_Collider_o *)0x0) {
    bVar1 = (TypeInfo_UnityEngine_SphereCollider->_2).typeHierarchyDepth;
    if ((bVar1 <= (hurtbox->klass->_2).typeHierarchyDepth) &&
       ((hurtbox->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_UnityEngine_SphereCollider)) {
      if (hitbox == (Characters_BaseHitbox_o *)0x0) {
        ThrowNullReferenceException();
      }
      __this = (UnityEngine_SphereCollider_o *)(hitbox->fields)._collider;
      if (((__this != (UnityEngine_SphereCollider_o *)0x0) &&
          (bVar1 <= (__this->klass->_2).typeHierarchyDepth)) &&
         ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_UnityEngine_SphereCollider)) {
        if (grabbing) {
          normalRadius = UnityEngine_SphereCollider__get_radius(__this,(MethodInfo *)0x0);
        }
        fVar2 = UnityEngine_SphereCollider__get_radius
                          ((UnityEngine_SphereCollider_o *)hurtbox,(MethodInfo *)0x0);
        if ((fVar2 != normalRadius) || (NAN(fVar2) || NAN(normalRadius))) {
          UnityEngine_SphereCollider__set_radius
                    ((UnityEngine_SphereCollider_o *)hurtbox,normalRadius,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  return;
}


// Characters.BasicTitan$$LateUpdate
// il2cpp: void Characters_BasicTitan__LateUpdate (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x5c3b980
// fidelity: the machine code has facts this C leaves out:
//   1 call(s) printed without their arguments
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c3baf8: mov rdi, rbx
// asm:   0x5c3bafb: mov rsi, rax
// asm:   0x5c3bafe: jmp 0x5c3bcb4
// body from a decompile with inferred signatures (Il2CppDecompileFallback.java): the final configuration did not decompile it


void Characters_BasicTitan__LateUpdate(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  code cVar1;
  uint uVar2;
  int32_t viewId;
  Il2CppObject *obj;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  Characters_BasicTitanAnimations_o *pCVar5;
  Characters_AnimationHandler_o *__this_00;
  Characters_BasicTitanComponentCache_o *pCVar6;
  UnityEngine_Transform_o *pUVar7;
  void *pvVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  System_Nullable_Quaternion__o *pSVar14;
  bool bVar15;
  char cVar16;
  bool bVar17;
  VirtualInvokeData *pVVar18;
  Characters_BaseCharacter_o *target;
  ulong uVar19;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *pMVar20;
  MethodInfo *extraout_RDX_03;
  long lVar21;
  bool bVar22;
  float fVar23;
  undefined8 uVar24;
  float extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  float extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float in_XMM1_Da;
  float in_XMM1_Db;
  float fVar25;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Vector3_o UVar26;
  UnityEngine_Vector3_o a;
  UnityEngine_Quaternion_o UVar27;
  UnityEngine_Vector3_o b;
  UnityEngine_Quaternion_Fields UStack_78;
  undefined1 auStack_68 [8];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  UnityEngine_Quaternion_Fields UStack_58;
  undefined8 uStack_48;
  float fStack_40;
  float fStack_3c;
  UnityEngine_Quaternion_Fields UStack_30;
  
  if (Il2CppMethodInitialized_075477eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseCharacter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ITargetable);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Quaternion_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Quaternion_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_075477eb = '\x01';
  }
  Characters_BaseTitan__LateUpdate((Characters_BaseTitan_o *)__this,method);
  if ((__this->fields)._headDetached != false) {
    Characters_BasicTitan__UpdateHiddenLimbs(__this,method);
    Characters_BasicTitan__UpdateDeathDissolve(__this,method);
    return;
  }
  Characters_BasicTitan__UpdateHeadScale(__this,method);
  uVar2 = (__this->fields).State;
  if ((3 < uVar2) || (bVar22 = true, uVar2 == 2)) {
    bVar22 = uVar2 == 0x18;
  }
  target = (Characters_BaseCharacter_o *)(__this->klass->vtable)._74_IsMine.method;
  bVar15 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(MethodInfo *)target);
  bVar17 = (__this->fields).AI;
  pMVar20 = extraout_RDX;
  if (bVar15) {
    if (bVar17 == false) {
      if (bVar22 == false) {
        (__this->fields).LateUpdateHeadRotation.fields.hasValue = false;
        *(undefined3 *)&(__this->fields).LateUpdateHeadRotation.fields.field_0x1 = 0;
        (__this->fields).LateUpdateHeadRotation.fields.value.fields.x = 0.0;
        pSVar14 = &(__this->fields).LateUpdateHeadRotation;
        (pSVar14->fields).value.fields.y = 0.0;
        (pSVar14->fields).value.fields.z = 0.0;
        (__this->fields).LateUpdateHeadRotation.fields.value.fields.w = 0.0;
        goto label_05c3bc0e;
      }
      target = (Characters_BaseCharacter_o *)(__this->klass->vtable)._76_GetAimPoint.method;
      UVar26 = (*(__this->klass->vtable)._76_GetAimPoint.methodPtr)(__this,(MethodInfo *)target);
      Characters_BasicTitan__LateUpdateHeadPosition(__this,UVar26,(MethodInfo *)target);
      goto label_05c3bcb9;
    }
    obj = (Il2CppObject *)(__this->fields).TargetEnemy;
    if (obj == (Il2CppObject *)0x0) {
label_05c3bc9e:
      (__this->fields).TargetViewId = -1;
    }
    else {
      pIVar3 = obj->klass;
      uVar19 = (ulong)(pIVar3->_2).interface_offsets_count;
      if (uVar19 != 0) {
        pIVar4 = (pIVar3->_1).interfaceOffsets;
        lVar21 = 0;
        do {
          if (*(Characters_ITargetable_c **)((long)&pIVar4->interfaceType + lVar21) ==
              TypeInfo_Characters_ITargetable) {
            pVVar18 = (VirtualInvokeData *)
                      &pIVar3->vtable[*(int *)((long)&pIVar4->offset + lVar21) + 2].methodPtr;
            goto label_05c3bc56;
          }
          lVar21 = lVar21 + 0x10;
        } while (uVar19 * 0x10 != lVar21);
      }
      pVVar18 = GetInterfaceInvokeDataFromVTableSlowPath(obj,(Il2CppClass *)TypeInfo_Characters_ITargetable,2)
      ;
label_05c3bc56:
      cVar16 = (*pVVar18->methodPtr)(obj);
      uVar11._4_4_ = UStack_30.y;
      uVar11._0_4_ = UStack_30.x;
      uVar9._4_4_ = UStack_58.y;
      uVar9._0_4_ = UStack_58.x;
      pMVar20 = extraout_RDX_01;
      if ((cVar16 == '\0') ||
         (pMVar20 = (MethodInfo *)(__this->fields).TargetEnemy, pMVar20 == (MethodInfo *)0x0))
      goto label_05c3bc9e;
      cVar1 = (code)(TypeInfo_Characters_BaseCharacter->_2).typeHierarchyDepth;
      if (((byte)pMVar20->methodPointer[0x130] < (byte)cVar1) ||
         (*(Characters_BaseCharacter_c **)
           (*(long *)(pMVar20->methodPointer + 200) + -8 + (ulong)(byte)cVar1 * 8) !=
          TypeInfo_Characters_BaseCharacter)) goto label_05c3bc9e;
      uStack_48 = CONCAT44(uStack_48._4_4_,(float)uStack_48);
      if (pMVar20[1].return_type == (Il2CppType *)0x0) goto label_05c3be7e;
      pvVar8 = pMVar20[1].return_type[2].data;
      UStack_58._0_8_ = uVar9;
      uStack_48 = CONCAT44(uStack_48._4_4_,(float)uStack_48);
      UStack_30._0_8_ = uVar11;
      if (pvVar8 == (void *)0x0) goto label_05c3be7e;
      (__this->fields).TargetViewId = *(int32_t *)((long)pvVar8 + 0x94);
      bVar17 = false;
      if ((__this->fields).IsCrawler == false) {
        uVar24 = il2cpp_runtime_helper_02fd8410();
        uVar12._4_4_ = UStack_30.y;
        uVar12._0_4_ = UStack_30.x;
        uVar10._4_4_ = UStack_58.y;
        uVar10._0_4_ = in_XMM1_Da;
        pCVar6 = (__this->fields).BasicCache;
        uStack_48 = CONCAT44(uStack_48._4_4_,(float)uStack_48);
        if (pCVar6 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c3be7e;
        pUVar7 = (pCVar6->fields).Transform;
        fStack_40 = extraout_XMM0_Dc;
        fStack_3c = extraout_XMM0_Dd;
        UStack_58._0_8_ = uVar10;
        uStack_48 = uVar24;
        UStack_30._0_8_ = uVar12;
        if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_05c3be7e;
        UStack_58.x = in_XMM1_Da;
        UVar26 = UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
        fVar23 = UVar26.fields.x;
        fVar25 = UVar26.fields.y;
        if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
          uStack_60 = extraout_XMM0_Dc_00;
          auStack_68 = (undefined1  [8])UVar26.fields._0_8_;
          uStack_5c = extraout_XMM0_Dd_00;
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
          fVar23 = (float)auStack_68._0_4_;
          fVar25 = (float)auStack_68._4_4_;
        }
        a.fields.z = UStack_58.x;
        a.fields.x = (float)(int)uStack_48;
        a.fields.y = (float)(int)((ulong)uStack_48 >> 0x20);
        b.fields.y = fVar25;
        b.fields.x = fVar23;
        b.fields.z = UVar26.fields.z;
        fVar23 = Utility_Util__DistanceIgnoreY(a,b,(MethodInfo *)0x0);
        bVar17 = fVar23 < 100.0;
        pMVar20 = extraout_RDX_02;
      }
      if ((bVar17 & bVar22) != 0) {
        (__this->fields).LookAtTarget = true;
        target = (Characters_BaseCharacter_o *)
                 il2cpp_codegen_is_inst_class
                           ((Il2CppObject *)(__this->fields).TargetEnemy,
                            (Il2CppClass *)TypeInfo_Characters_BaseCharacter);
        pMVar20 = extraout_RDX_03;
        goto label_05c3bcb4;
      }
    }
    (__this->fields).LookAtTarget = false;
label_05c3bcaf:
    target = (Characters_BaseCharacter_o *)0x0;
label_05c3bcb4:
    Characters_BasicTitan__LateUpdateHead(__this,target,pMVar20);
  }
  else {
    if (bVar17 != false) {
      if (((__this->fields).LookAtTarget == false) || (viewId = (__this->fields).TargetViewId, viewId < 0))
      goto label_05c3bcaf;
      if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
      }
      target = Utility_Util__FindCharacterByViewId(viewId,(MethodInfo *)0x0);
      pMVar20 = extraout_RDX_00;
      goto label_05c3bcb4;
    }
    if ((bVar22 & (__this->fields).LateUpdateHeadRotationRecv.fields.hasValue) != 0) {
      pCVar6 = (__this->fields).BasicCache;
      if (pCVar6 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c3be7e;
      pUVar7 = (pCVar6->fields).Head;
      UVar27 = System_Nullable_Quaternion___get_Value
                         (&(__this->fields).LateUpdateHeadRotationRecv,
                          (MethodInfo_3CD67B0 *)MethodInfo_System_Nullable_Quaternion_get_Value);
      uStack_48 = CONCAT44(uStack_48._4_4_,(float)uStack_48);
      if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_05c3be7e;
      fVar23 = UVar27.fields.z;
      fVar25 = UVar27.fields.w;
      UnityEngine_Transform__set_rotation(pUVar7,UVar27,(MethodInfo *)0x0);
      uVar13._4_4_ = UStack_30.y;
      uVar13._0_4_ = UStack_30.x;
      uVar24._4_4_ = UStack_58.y;
      uVar24._0_4_ = UStack_58.x;
      pCVar6 = (__this->fields).BasicCache;
      uStack_48 = CONCAT44(uStack_48._4_4_,(float)uStack_48);
      if (pCVar6 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c3be7e;
      pUVar7 = (pCVar6->fields).Head;
      UStack_58._0_8_ = uVar24;
      uStack_48 = CONCAT44(uStack_48._4_4_,(float)uStack_48);
      UStack_30._0_8_ = uVar13;
      if (pUVar7 == (UnityEngine_Transform_o *)0x0) goto label_05c3be7e;
      uStack_48._0_4_ = (__this->fields)._oldHeadRotation.fields.x;
      uStack_48._4_4_ = (__this->fields)._oldHeadRotation.fields.y;
      fStack_40 = (__this->fields)._oldHeadRotation.fields.z;
      fStack_3c = (__this->fields)._oldHeadRotation.fields.w;
      UStack_58._0_8_ = UnityEngine_Transform__get_localRotation(pUVar7,0);
      auStack_68._4_4_ = fVar25;
      auStack_68._0_4_ = fVar23;
      uStack_60 = in_XMM1_Dc;
      uStack_5c = in_XMM1_Dd;
      fVar23 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      UStack_78.y = uStack_48._4_4_;
      UStack_78.x = (float)uStack_48;
      UStack_78._8_8_ = CONCAT44(fStack_3c,fStack_40);
      UStack_30.z = auStack_68._0_4_;
      UStack_30.w = auStack_68._4_4_;
      UStack_30._0_8_ = UStack_58._0_8_;
      UVar27 = UnityEngine_Quaternion__Internal_Lerp
                         ((UnityEngine_Quaternion_o *)&UStack_78,(UnityEngine_Quaternion_o *)&UStack_30,
                          fVar23 * 10.0,(MethodInfo *)0x0);
      in_XMM1_Da = UVar27.fields.z;
      in_XMM1_Db = UVar27.fields.w;
      UnityEngine_Transform__set_localRotation(pUVar7,UVar27,(MethodInfo *)0x0);
label_05c3bc0e:
      pCVar6 = (__this->fields).BasicCache;
      uStack_48 = CONCAT44(uStack_48._4_4_,(float)uStack_48);
      if (pCVar6 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c3be7e;
      uStack_48 = CONCAT44(uStack_48._4_4_,(float)uStack_48);
      if ((pCVar6->fields).Head == (UnityEngine_Transform_o *)0x0) goto label_05c3be7e;
      target = (Characters_BaseCharacter_o *)0x0;
      uVar24 = UnityEngine_Transform__get_localRotation();
      (__this->fields)._oldHeadRotation.fields.x = (float)(int)uVar24;
      (__this->fields)._oldHeadRotation.fields.y = (float)(int)((ulong)uVar24 >> 0x20);
      (__this->fields)._oldHeadRotation.fields.z = in_XMM1_Da;
      (__this->fields)._oldHeadRotation.fields.w = in_XMM1_Db;
    }
  }
label_05c3bcb9:
  Characters_BasicTitan__UpdateHiddenLimbs(__this,(MethodInfo *)target);
  Characters_BasicTitan__UpdateLimbCuts(__this,(MethodInfo *)target);
  if ((__this->fields).AI != false) {
label_05c3bd7e:
    Characters_BasicTitan__UpdateDeathDissolve(__this,(MethodInfo *)target);
    return;
  }
  pCVar5 = (__this->fields).BasicAnimations;
  if (pCVar5 != (Characters_BasicTitanAnimations_o *)0x0) {
    __this_00 = (__this->fields).Animation;
    if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
      target = (Characters_BaseCharacter_o *)(pCVar5->fields).RunCrawler;
      bVar22 = Characters_AnimationHandler__IsPlaying(__this_00,(System_String_o *)target,(MethodInfo *)0x0);
      if (!bVar22) goto label_05c3bd7e;
      pCVar6 = (__this->fields).BasicCache;
      if (pCVar6 != (Characters_BasicTitanComponentCache_o *)0x0) {
        pUVar7 = (pCVar6->fields).Body;
        UStack_78.x = -1.5707964;
        UStack_78.y = 0.0;
        UStack_78._8_8_ = UStack_78._8_8_ & 0xffffffff00000000;
        UVar27 = UnityEngine_Quaternion__Internal_FromEulerRad
                           ((UnityEngine_Vector3_o *)&UStack_78,(MethodInfo *)0x0);
        if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__set_localRotation(pUVar7,UVar27,(MethodInfo *)0x0);
          pCVar6 = (__this->fields).BasicCache;
          if (pCVar6 != (Characters_BasicTitanComponentCache_o *)0x0) {
            pUVar7 = (pCVar6->fields).Core;
            if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
              target = (Characters_BaseCharacter_o *)0x0;
              UnityEngine_Transform__set_localPosition
                        (pUVar7,(UnityEngine_Vector3_o)ZEXT812(0xbd4ccccd00000000),(MethodInfo *)0x0);
              goto label_05c3bd7e;
            }
          }
        }
      }
    }
  }
label_05c3be7e:
  ThrowNullReferenceException();
}

// Characters.BasicTitan$$UpdateHiddenLimbs
// il2cpp: void Characters_BasicTitan__UpdateHiddenLimbs (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x5c3be90
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c3c072: jmp 0x5c3c11a
// asm:   0x5c3c373: test bpl, bpl

void Characters_BasicTitan__UpdateHiddenLimbs(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  UnityEngine_Vector3_o *pUVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint32_t uVar10;
  Characters_BasicTitanComponentCache_o *pCVar11;
  UnityEngine_Transform_o *pUVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o UVar17;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o value_01;
  
  if (Il2CppMethodInitialized_075477ec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitan);
    Il2CppMethodInitialized_075477ec = '\x01';
  }
  pCVar11 = (__this->fields).BasicCache;
  if (pCVar11 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c3c4bd;
  if ((__this->fields).LeftArmDisabled == false) {
    bVar13 = false;
  }
  else if ((__this->fields)._GoreEnabled_k__BackingField == false) {
    bVar13 = true;
  }
  else {
    bVar13 = 6.5 <= (__this->fields)._leftArmDisabledTimeLeft;
  }
  pUVar12 = (pCVar11->fields).ForearmL;
  if ((TypeInfo_Characters_BasicTitan->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitan);
    if (bVar13) goto label_05c3bf19;
label_05c3bf8a:
    if (pUVar12 == (UnityEngine_Transform_o *)0x0) goto label_05c3c4bd;
    UVar17 = UnityEngine_Transform__get_localScale(pUVar12,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_0753e4b7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e4b7 = '\x01';
    }
    pUVar1 = &TypeInfo_UnityEngine_Vector3->static_fields->oneVector;
    uVar2 = (pUVar1->fields).x;
    uVar6 = (pUVar1->fields).y;
    fVar14 = UVar17.fields.y - (float)uVar6;
    fVar15 = UVar17.fields.z - (TypeInfo_UnityEngine_Vector3->static_fields->oneVector).fields.z;
    fVar16 = UVar17.fields.x - (float)uVar2;
    if (9.9999994e-11 <= fVar14 * fVar14 + fVar16 * fVar16 + fVar15 * fVar15) {
      UnityEngine_Transform__set_localScale(pUVar12,(UnityEngine_Vector3_o)pUVar1->fields,(MethodInfo *)0x0);
    }
  }
  else {
    if (!bVar13) goto label_05c3bf8a;
label_05c3bf19:
    if (pUVar12 == (UnityEngine_Transform_o *)0x0) goto label_05c3c4bd;
    UVar17.fields.z = 0.01;
    UVar17.fields.x = 0.01;
    UVar17.fields.y = 0.01;
    UnityEngine_Transform__set_localScale(pUVar12,UVar17,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_0753e72b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
      Il2CppMethodInitialized_0753e72b = '\x01';
    }
    UnityEngine_Transform__set_localRotation
              (pUVar12,(UnityEngine_Quaternion_o)
                       *(UnityEngine_Quaternion_Fields *)TypeInfo_UnityEngine_Quaternion->static_fields,
               (MethodInfo *)0x0);
  }
  pCVar11 = (__this->fields).BasicCache;
  if (pCVar11 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c3c4bd;
  if ((__this->fields).RightArmDisabled == false) {
    bVar13 = false;
    pUVar12 = (pCVar11->fields).ForearmR;
    uVar10 = (TypeInfo_Characters_BasicTitan->_2).cctor_finished_or_no_cctor;
joined_r0x05c3c08a:
    if (uVar10 != 0) goto label_05c3c090;
label_05c3c11a:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitan);
    if (bVar13) goto label_05c3c099;
label_05c3c128:
    if (pUVar12 == (UnityEngine_Transform_o *)0x0) goto label_05c3c4bd;
    UVar17 = UnityEngine_Transform__get_localScale(pUVar12,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_0753e4b7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e4b7 = '\x01';
    }
    pUVar1 = &TypeInfo_UnityEngine_Vector3->static_fields->oneVector;
    uVar3 = (pUVar1->fields).x;
    uVar7 = (pUVar1->fields).y;
    fVar14 = UVar17.fields.y - (float)uVar7;
    fVar15 = UVar17.fields.z - (TypeInfo_UnityEngine_Vector3->static_fields->oneVector).fields.z;
    fVar16 = UVar17.fields.x - (float)uVar3;
    if (9.9999994e-11 <= fVar14 * fVar14 + fVar16 * fVar16 + fVar15 * fVar15) {
      UnityEngine_Transform__set_localScale(pUVar12,(UnityEngine_Vector3_o)pUVar1->fields,(MethodInfo *)0x0);
    }
  }
  else {
    if ((__this->fields)._GoreEnabled_k__BackingField == false) {
      bVar13 = true;
      pUVar12 = (pCVar11->fields).ForearmR;
      uVar10 = (TypeInfo_Characters_BasicTitan->_2).cctor_finished_or_no_cctor;
      goto joined_r0x05c3c08a;
    }
    bVar13 = 6.5 <= (__this->fields)._rightArmDisabledTimeLeft;
    pUVar12 = (pCVar11->fields).ForearmR;
    if ((TypeInfo_Characters_BasicTitan->_2).cctor_finished_or_no_cctor == 0) goto label_05c3c11a;
label_05c3c090:
    if (!bVar13) goto label_05c3c128;
label_05c3c099:
    if (pUVar12 == (UnityEngine_Transform_o *)0x0) goto label_05c3c4bd;
    value.fields.z = 0.01;
    value.fields.x = 0.01;
    value.fields.y = 0.01;
    UnityEngine_Transform__set_localScale(pUVar12,value,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_0753e72b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
      Il2CppMethodInitialized_0753e72b = '\x01';
    }
    UnityEngine_Transform__set_localRotation
              (pUVar12,(UnityEngine_Quaternion_o)
                       *(UnityEngine_Quaternion_Fields *)TypeInfo_UnityEngine_Quaternion->static_fields,
               (MethodInfo *)0x0);
  }
  pCVar11 = (__this->fields).BasicCache;
  if (pCVar11 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c3c4bd;
  if ((__this->fields).LeftHandDisabled == false) {
    bVar13 = false;
    pUVar12 = (pCVar11->fields).HandL;
    if ((TypeInfo_Characters_BasicTitan->_2).cctor_finished_or_no_cctor != 0) goto label_05c3c202;
label_05c3c28b:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitan);
    if (bVar13) goto label_05c3c20b;
label_05c3c299:
    if (pUVar12 == (UnityEngine_Transform_o *)0x0) goto label_05c3c4bd;
    UVar17 = UnityEngine_Transform__get_localScale(pUVar12,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_0753e4b7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e4b7 = '\x01';
    }
    pUVar1 = &TypeInfo_UnityEngine_Vector3->static_fields->oneVector;
    uVar4 = (pUVar1->fields).x;
    uVar8 = (pUVar1->fields).y;
    fVar14 = UVar17.fields.y - (float)uVar8;
    fVar15 = UVar17.fields.z - (TypeInfo_UnityEngine_Vector3->static_fields->oneVector).fields.z;
    fVar16 = UVar17.fields.x - (float)uVar4;
    if (9.9999994e-11 <= fVar14 * fVar14 + fVar16 * fVar16 + fVar15 * fVar15) {
      UnityEngine_Transform__set_localScale(pUVar12,(UnityEngine_Vector3_o)pUVar1->fields,(MethodInfo *)0x0);
    }
  }
  else {
    bVar13 = (__this->fields)._GoreEnabled_k__BackingField == false;
    pUVar12 = (pCVar11->fields).HandL;
    if ((TypeInfo_Characters_BasicTitan->_2).cctor_finished_or_no_cctor == 0) goto label_05c3c28b;
label_05c3c202:
    if (!bVar13) goto label_05c3c299;
label_05c3c20b:
    if (pUVar12 == (UnityEngine_Transform_o *)0x0) goto label_05c3c4bd;
    value_00.fields.z = 0.01;
    value_00.fields.x = 0.01;
    value_00.fields.y = 0.01;
    UnityEngine_Transform__set_localScale(pUVar12,value_00,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_0753e72b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
      Il2CppMethodInitialized_0753e72b = '\x01';
    }
    UnityEngine_Transform__set_localRotation
              (pUVar12,(UnityEngine_Quaternion_o)
                       *(UnityEngine_Quaternion_Fields *)TypeInfo_UnityEngine_Quaternion->static_fields,
               (MethodInfo *)0x0);
  }
  pCVar11 = (__this->fields).BasicCache;
  if (pCVar11 != (Characters_BasicTitanComponentCache_o *)0x0) {
    if ((__this->fields).RightHandDisabled == false) {
      bVar13 = false;
      pUVar12 = (pCVar11->fields).HandR;
      uVar10 = (TypeInfo_Characters_BasicTitan->_2).cctor_finished_or_no_cctor;
    }
    else {
      bVar13 = (__this->fields)._GoreEnabled_k__BackingField == false;
      pUVar12 = (pCVar11->fields).HandR;
      uVar10 = (TypeInfo_Characters_BasicTitan->_2).cctor_finished_or_no_cctor;
    }
    if (uVar10 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitan);
    }
    if (bVar13) {
      if (pUVar12 != (UnityEngine_Transform_o *)0x0) {
        value_01.fields.z = 0.01;
        value_01.fields.x = 0.01;
        value_01.fields.y = 0.01;
        UnityEngine_Transform__set_localScale(pUVar12,value_01,(MethodInfo *)0x0);
        if (Il2CppMethodInitialized_0753e72b == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
          Il2CppMethodInitialized_0753e72b = '\x01';
        }
        UnityEngine_Transform__set_localRotation
                  (pUVar12,(UnityEngine_Quaternion_o)
                           *(UnityEngine_Quaternion_Fields *)TypeInfo_UnityEngine_Quaternion->static_fields,
                   (MethodInfo *)0x0);
        return;
      }
    }
    else if (pUVar12 != (UnityEngine_Transform_o *)0x0) {
      UVar17 = UnityEngine_Transform__get_localScale(pUVar12,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_0753e4b7 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_0753e4b7 = '\x01';
      }
      pUVar1 = &TypeInfo_UnityEngine_Vector3->static_fields->oneVector;
      uVar5 = (pUVar1->fields).x;
      uVar9 = (pUVar1->fields).y;
      fVar14 = UVar17.fields.y - (float)uVar9;
      fVar15 = UVar17.fields.z - (TypeInfo_UnityEngine_Vector3->static_fields->oneVector).fields.z;
      fVar16 = UVar17.fields.x - (float)uVar5;
      if (fVar14 * fVar14 + fVar16 * fVar16 + fVar15 * fVar15 < 9.9999994e-11) {
        return;
      }
      UnityEngine_Transform__set_localScale(pUVar12,(UnityEngine_Vector3_o)pUVar1->fields,(MethodInfo *)0x0);
      return;
    }
  }
label_05c3c4bd:
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$SetLimbHidden
// il2cpp: void Characters_BasicTitan__SetLimbHidden (UnityEngine_Transform_o* limb, bool hidden, const MethodInfo* method);
// 0x5c3cb50

void Characters_BasicTitan__SetLimbHidden(UnityEngine_Transform_o *limb,bool hidden,MethodInfo *method)

{
  UnityEngine_Vector3_o *pUVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined7 in_register_00000031;
  float fVar4;
  float fVar5;
  float fVar6;
  UnityEngine_Vector3_o UVar7;
  
  if ((int)CONCAT71(in_register_00000031,hidden) == 0) {
    if (limb != (UnityEngine_Transform_o *)0x0) {
      UVar7 = UnityEngine_Transform__get_localScale(limb,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_0753e4b7 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_0753e4b7 = '\x01';
      }
      pUVar1 = &TypeInfo_UnityEngine_Vector3->static_fields->oneVector;
      uVar2 = (pUVar1->fields).x;
      uVar3 = (pUVar1->fields).y;
      fVar4 = UVar7.fields.y - (float)uVar3;
      fVar5 = UVar7.fields.z - (TypeInfo_UnityEngine_Vector3->static_fields->oneVector).fields.z;
      fVar6 = UVar7.fields.x - (float)uVar2;
      if (9.9999994e-11 <= fVar4 * fVar4 + fVar6 * fVar6 + fVar5 * fVar5) {
        UnityEngine_Transform__set_localScale(limb,(UnityEngine_Vector3_o)pUVar1->fields,(MethodInfo *)0x0);
        return;
      }
      return;
    }
  }
  else if (limb != (UnityEngine_Transform_o *)0x0) {
    UVar7.fields.z = 0.01;
    UVar7.fields.x = 0.01;
    UVar7.fields.y = 0.01;
    UnityEngine_Transform__set_localScale(limb,UVar7,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_0753e72b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
      Il2CppMethodInitialized_0753e72b = '\x01';
    }
    UnityEngine_Transform__set_localRotation
              (limb,(UnityEngine_Quaternion_o)
                    *(UnityEngine_Quaternion_Fields *)TypeInfo_UnityEngine_Quaternion->static_fields,
               (MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$GetLimbEffectPosition
// il2cpp: UnityEngine_Vector3_o Characters_BasicTitan__GetLimbEffectPosition (Characters_BasicTitan_o* __this, bool left, bool hand, const MethodInfo* method);
// 0x5c318f0

UnityEngine_Vector3_o
Characters_BasicTitan__GetLimbEffectPosition
          (Characters_BasicTitan_o *__this,bool left,bool hand,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Characters_BasicTitanComponentCache_o *pCVar3;
  UnityEngine_Vector3_StaticFields *pUVar4;
  UnityEngine_Transform_o **ppUVar5;
  undefined3 in_register_00000011;
  float fVar6;
  UnityEngine_Vector3_Fields UVar7;
  UnityEngine_Vector3_o UVar8;
  UnityEngine_Vector3_o UVar9;
  
  pCVar3 = (__this->fields).BasicCache;
  if (CONCAT31(in_register_00000011,hand) == 0) {
    if (left) {
      if (pCVar3 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c319ea;
      ppUVar5 = &(pCVar3->fields).ForearmL;
    }
    else {
      if (pCVar3 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c319ea;
      ppUVar5 = &(pCVar3->fields).ForearmR;
    }
    if (*ppUVar5 != (UnityEngine_Transform_o *)0x0) {
      UVar8 = UnityEngine_Transform__get_position(*ppUVar5,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_075450a5 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_075450a5 = '\x01';
      }
      pUVar4 = TypeInfo_UnityEngine_Vector3->static_fields;
      uVar1 = (pUVar4->downVector).fields.x;
      uVar2 = (pUVar4->downVector).fields.y;
      fVar6 = (__this->fields).Size * 0.1;
      UVar9.fields.x = UVar8.fields.x + fVar6 * (float)uVar1;
      UVar9.fields.y = UVar8.fields.y + fVar6 * (float)uVar2;
      UVar9.fields.z = UVar8.fields.z + (pUVar4->downVector).fields.z * fVar6;
      return (UnityEngine_Vector3_o)UVar9.fields;
    }
  }
  else {
    if (left) {
      if (pCVar3 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c319ea;
      ppUVar5 = &(pCVar3->fields).HandL;
    }
    else {
      if (pCVar3 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c319ea;
      ppUVar5 = &(pCVar3->fields).HandR;
    }
    if (*ppUVar5 != (UnityEngine_Transform_o *)0x0) {
      UVar7 = (UnityEngine_Vector3_Fields)UnityEngine_Transform__get_position(*ppUVar5,(MethodInfo *)0x0);
      return (UnityEngine_Vector3_o)UVar7;
    }
  }
label_05c319ea:
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$EnsureLimbMesh
// il2cpp: void Characters_BasicTitan__EnsureLimbMesh (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x5c31700

void Characters_BasicTitan__EnsureLimbMesh(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Characters_BasicTitanComponentCache_o *pCVar2;
  UnityEngine_Transform_o *rightHand;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_SkinnedMeshRenderer_o *renderer;
  UnityEngine_Material_o *woundMaterial;
  Characters_TitanLimbMesh_o *__this_00;
  Characters_TitanLimbMesh_o **targetAddress;
  
  if (Il2CppMethodInitialized_075477ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitanComponentCache);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_SkinnedMeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanLimbMesh);
    il2cpp_codegen_initialize_runtime_metadata(&"Body");
    Il2CppMethodInitialized_075477ed = '\x01';
  }
  if ((__this->fields)._limbMesh != (Characters_TitanLimbMesh_o *)0x0) {
    return;
  }
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
     (pUVar3 = (pUVar1->fields).Transform, pUVar3 != (UnityEngine_Transform_o *)0x0)) {
    pUVar3 = UnityEngine_Transform__Find(pUVar3,"Body",(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
      renderer = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)pUVar3,
                            (MethodInfo_34B0830 *)
                            MethodInfo_UnityEngine_Component_GetComponent_SkinnedMeshRenderer);
      pCVar2 = (__this->fields).BasicCache;
      if (pCVar2 != (Characters_BasicTitanComponentCache_o *)0x0) {
        targetAddress = &(__this->fields)._limbMesh;
        pUVar3 = (pCVar2->fields).HandL;
        rightHand = (pCVar2->fields).HandR;
        if ((TypeInfo_Characters_BasicTitanComponentCache->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitanComponentCache);
        }
        woundMaterial = Characters_BasicTitanComponentCache__LoadWoundMaterial((MethodInfo *)0x0);
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_TitanLimbMesh);
        Characters_TitanLimbMesh___ctor(__this_00,renderer,pUVar3,rightHand,woundMaterial,(MethodInfo *)0x0);
        *targetAddress = __this_00;
        Il2CppCodeGenWriteBarrier(targetAddress);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$UpdateLimbCuts
// il2cpp: void Characters_BasicTitan__UpdateLimbCuts (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x5c3c780
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c3c845: jmp 0x5c3cb4a
// asm:   0x5c3ca9f: jmp 0x5c3cb4a

void Characters_BasicTitan__UpdateLimbCuts(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  Characters_BasicTitanComponentCache_o *pCVar10;
  UnityEngine_ParticleSystem_o *pUVar11;
  UnityEngine_Transform_o *pUVar12;
  Characters_TitanLimbMesh_o *__this_00;
  UnityEngine_Vector3_StaticFields *pUVar13;
  undefined1 auVar14 [14];
  undefined1 auVar15 [12];
  unkbyte10 Var16;
  byte bVar17;
  bool bVar18;
  UnityEngine_Transform_o *pUVar19;
  undefined4 in_ECX;
  undefined4 uVar20;
  MethodInfo *method_00;
  bool leftRegrowing;
  bool bVar21;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar31 [16];
  undefined1 auVar30 [16];
  undefined1 auVar29 [16];
  undefined1 auVar28 [16];
  undefined1 auVar27 [16];
  undefined1 auVar26 [16];
  undefined1 auVar25 [16];
  undefined1 auVar24 [16];
  undefined2 uVar37;
  undefined1 auVar35 [16];
  undefined1 auVar34 [16];
  undefined1 auVar33 [16];
  undefined1 auVar32 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar36 [16];
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar38 [16];
  float fVar39;
  UnityEngine_Vector3_o UVar40;
  UnityEngine_Vector3_o value;
  
  if ((__this->fields).DeathDissolve != (Characters_TitanDeathDissolve_o *)0x0) {
    return;
  }
  bVar21 = (__this->fields).LeftHandDisabled;
  if ((__this->fields)._GoreEnabled_k__BackingField == false) {
    if ((bVar21 != false) || ((__this->fields).LeftArmDisabled != false)) {
      pCVar10 = (__this->fields).BasicCache;
      if ((pCVar10 == (Characters_BasicTitanComponentCache_o *)0x0) ||
         (pUVar11 = (pCVar10->fields).ForearmSmokeL, pUVar11 == (UnityEngine_ParticleSystem_o *)0x0))
      goto label_05c3cb4a;
      pUVar19 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar11,(MethodInfo *)0x0);
      pCVar10 = (__this->fields).BasicCache;
      if ((__this->fields).LeftHandDisabled == false) {
        if ((pCVar10 == (Characters_BasicTitanComponentCache_o *)0x0) ||
           (pUVar12 = (pCVar10->fields).ForearmL, pUVar12 == (UnityEngine_Transform_o *)0x0))
        goto label_05c3cb4a;
        UVar40 = UnityEngine_Transform__get_position(pUVar12,(MethodInfo *)0x0);
        if (Il2CppMethodInitialized_075450a5 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_075450a5 = '\x01';
        }
        pUVar13 = TypeInfo_UnityEngine_Vector3->static_fields;
        uVar2 = (pUVar13->downVector).fields.x;
        uVar4 = (pUVar13->downVector).fields.y;
        fVar39 = (__this->fields).Size * 0.1;
        auVar22._0_4_ = UVar40.fields.x + fVar39 * (float)uVar2;
        auVar22._4_4_ = UVar40.fields.y + fVar39 * (float)uVar4;
        auVar22._8_4_ = (float)extraout_XMM0_Qb_00 + fVar39 * 0.0;
        auVar22._12_4_ = (float)((ulong)extraout_XMM0_Qb_00 >> 0x20) + fVar39 * 0.0;
        fVar39 = UVar40.fields.z + (pUVar13->downVector).fields.z * fVar39;
      }
      else {
        if ((pCVar10 == (Characters_BasicTitanComponentCache_o *)0x0) ||
           (pUVar12 = (pCVar10->fields).HandL, pUVar12 == (UnityEngine_Transform_o *)0x0)) goto label_05c3cb4a;
        UVar40 = UnityEngine_Transform__get_position(pUVar12,(MethodInfo *)0x0);
        fVar39 = UVar40.fields.z;
        auVar22._0_8_ = UVar40.fields._0_8_;
        auVar22._8_8_ = extraout_XMM0_Qb;
      }
      if (pUVar19 == (UnityEngine_Transform_o *)0x0) goto label_05c3cb4a;
      UVar40.fields._0_8_ = auVar22._0_8_;
      UVar40.fields.z = fVar39;
      UnityEngine_Transform__set_position(pUVar19,UVar40,(MethodInfo *)0x0);
    }
    if (((__this->fields).RightHandDisabled == false) && ((__this->fields).RightArmDisabled == false)) {
      return;
    }
    pCVar10 = (__this->fields).BasicCache;
    if ((pCVar10 != (Characters_BasicTitanComponentCache_o *)0x0) &&
       (pUVar11 = (pCVar10->fields).ForearmSmokeR, pUVar11 != (UnityEngine_ParticleSystem_o *)0x0)) {
      pUVar19 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar11,(MethodInfo *)0x0);
      pCVar10 = (__this->fields).BasicCache;
      if ((__this->fields).RightHandDisabled == false) {
        if ((pCVar10 == (Characters_BasicTitanComponentCache_o *)0x0) ||
           (pUVar12 = (pCVar10->fields).ForearmR, pUVar12 == (UnityEngine_Transform_o *)0x0))
        goto label_05c3cb4a;
        UVar40 = UnityEngine_Transform__get_position(pUVar12,(MethodInfo *)0x0);
        if (Il2CppMethodInitialized_075450a5 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_075450a5 = '\x01';
        }
        pUVar13 = TypeInfo_UnityEngine_Vector3->static_fields;
        uVar3 = (pUVar13->downVector).fields.x;
        uVar5 = (pUVar13->downVector).fields.y;
        fVar39 = (__this->fields).Size * 0.1;
        auVar36._0_4_ = UVar40.fields.x + fVar39 * (float)uVar3;
        auVar36._4_4_ = UVar40.fields.y + fVar39 * (float)uVar5;
        auVar36._8_4_ = (float)extraout_XMM0_Qb_02 + fVar39 * 0.0;
        auVar36._12_4_ = (float)((ulong)extraout_XMM0_Qb_02 >> 0x20) + fVar39 * 0.0;
        fVar39 = UVar40.fields.z + (pUVar13->downVector).fields.z * fVar39;
      }
      else {
        if ((pCVar10 == (Characters_BasicTitanComponentCache_o *)0x0) ||
           (pUVar12 = (pCVar10->fields).HandR, pUVar12 == (UnityEngine_Transform_o *)0x0)) goto label_05c3cb4a;
        UVar40 = UnityEngine_Transform__get_position(pUVar12,(MethodInfo *)0x0);
        fVar39 = UVar40.fields.z;
        auVar36._0_8_ = UVar40.fields._0_8_;
        auVar36._8_8_ = extraout_XMM0_Qb_01;
      }
      if (pUVar19 != (UnityEngine_Transform_o *)0x0) {
        value.fields._0_8_ = auVar36._0_8_;
        value.fields.z = fVar39;
        UnityEngine_Transform__set_position(pUVar19,value,(MethodInfo *)0x0);
        return;
      }
    }
    goto label_05c3cb4a;
  }
  if (bVar21 == false) {
    bVar21 = (__this->fields).LeftArmDisabled == false;
    if ((__this->fields).RightHandDisabled != false) goto label_05c3c7c6;
label_05c3c862:
    bVar18 = (__this->fields).RightArmDisabled == false;
    if (!(bool)(bVar21 & bVar18)) goto label_05c3c88d;
    if ((__this->fields)._limbCutsVisible == false) {
      return;
    }
    (__this->fields)._limbCutsVisible = false;
    bVar18 = true;
  }
  else {
    bVar21 = false;
    if ((__this->fields).RightHandDisabled == false) goto label_05c3c862;
label_05c3c7c6:
    bVar18 = false;
label_05c3c88d:
    (__this->fields)._limbCutsVisible = true;
  }
  Characters_BasicTitan__EnsureLimbMesh(__this,method);
  leftRegrowing = false;
  if (!bVar21) {
    pfVar1 = &(__this->fields)._leftArmDisabledTimeLeft;
    leftRegrowing = *pfVar1 <= 6.5 && *pfVar1 != 6.5;
  }
  __this_00 = (__this->fields)._limbMesh;
  if (bVar18) {
    bVar21 = false;
  }
  else {
    pfVar1 = &(__this->fields)._rightArmDisabledTimeLeft;
    bVar21 = *pfVar1 <= 6.5 && *pfVar1 != 6.5;
  }
  if (__this_00 != (Characters_TitanLimbMesh_o *)0x0) {
    uVar6 = (__this->fields).LeftArmDisabled;
    uVar7 = (__this->fields).RightArmDisabled;
    uVar8 = (__this->fields).LeftHandDisabled;
    uVar9 = (__this->fields).RightHandDisabled;
    auVar38[0] = -(uVar6 == '\0');
    auVar38[1] = -(uVar7 == '\0');
    auVar38[2] = -(uVar8 == '\0');
    auVar38[3] = -(uVar9 == '\0');
    auVar38[4] = 0xff;
    auVar38[5] = 0xff;
    auVar38[6] = 0xff;
    auVar38[7] = 0xff;
    auVar38[8] = 0xff;
    auVar38[9] = -(SUB161((undefined1  [16])0x0,9) == '\0');
    auVar38[10] = -(SUB161((undefined1  [16])0x0,10) == '\0');
    auVar38[0xb] = -(SUB161((undefined1  [16])0x0,0xb) == '\0');
    auVar38[0xc] = -(SUB161((undefined1  [16])0x0,0xc) == '\0');
    auVar38[0xd] = -(SUB161((undefined1  [16])0x0,0xd) == '\0');
    auVar38[0xe] = -(SUB161((undefined1  [16])0x0,0xe) == '\0');
    auVar38[0xf] = -(SUB161((undefined1  [16])0x0,0xf) == '\0');
    auVar23._8_4_ = 0xffffffff;
    auVar23._0_8_ = 0xffffffffffffffff;
    auVar23._12_4_ = 0xffffffff;
    auVar23 = auVar23 ^ auVar38;
    auVar31._0_14_ = auVar23._0_14_;
    auVar31[0xe] = auVar23[7];
    auVar31[0xf] = auVar23[7];
    auVar30._14_2_ = auVar31._14_2_;
    auVar30._0_13_ = auVar23._0_13_;
    auVar30[0xd] = auVar23[6];
    auVar29._13_3_ = auVar30._13_3_;
    auVar29._0_12_ = auVar23._0_12_;
    auVar29[0xc] = auVar23[6];
    auVar28._12_4_ = auVar29._12_4_;
    auVar28._0_11_ = auVar23._0_11_;
    auVar28[0xb] = auVar23[5];
    auVar27._11_5_ = auVar28._11_5_;
    auVar27._0_10_ = auVar23._0_10_;
    auVar27[10] = auVar23[5];
    auVar26._10_6_ = auVar27._10_6_;
    auVar26._0_9_ = auVar23._0_9_;
    auVar26[9] = auVar23[4];
    auVar25._9_7_ = auVar26._9_7_;
    auVar25._0_8_ = auVar23._0_8_;
    auVar25[8] = auVar23[4];
    Var16 = CONCAT91(CONCAT81(auVar25._8_8_,auVar23[3]),auVar23[3]);
    auVar15._2_10_ = Var16;
    auVar15[1] = auVar23[2];
    auVar15[0] = auVar23[2];
    auVar14._2_12_ = auVar15;
    auVar14[1] = auVar23[1];
    auVar14[0] = auVar23[1];
    auVar24._0_2_ = CONCAT11(auVar23[0],auVar23[0]);
    auVar24._2_14_ = auVar14;
    uVar37 = (undefined2)Var16;
    auVar35._0_12_ = auVar24._0_12_;
    auVar35._12_2_ = uVar37;
    auVar35._14_2_ = uVar37;
    auVar34._12_4_ = auVar35._12_4_;
    auVar34._0_10_ = auVar24._0_10_;
    auVar34._10_2_ = auVar15._0_2_;
    auVar33._10_6_ = auVar34._10_6_;
    auVar33._0_8_ = auVar24._0_8_;
    auVar33._8_2_ = auVar15._0_2_;
    auVar32._8_8_ = auVar33._8_8_;
    auVar32._6_2_ = auVar14._0_2_;
    auVar32._4_2_ = auVar14._0_2_;
    auVar32._2_2_ = auVar24._0_2_;
    auVar32._0_2_ = auVar24._0_2_;
    uVar20 = movmskps(in_ECX,auVar32);
    bVar17 = (byte)uVar20;
    bVar18 = (bool)((bVar17 & 2) >> 1);
    method_00 = (MethodInfo *)(ulong)bVar18;
    Characters_TitanLimbMesh__SetDisabled
              (__this_00,(bool)((bVar17 & 4) >> 2),(bool)(bVar17 >> 3),(bool)(bVar17 & 1),bVar18,leftRegrowing
               ,bVar21,(MethodInfo *)0x0);
    Characters_BasicTitan__UpdateLimbRegrowth
              (__this,true,(__this->fields).LeftArmDisabled,(__this->fields).LeftHandDisabled,
               (__this->fields)._leftArmDisabledTimeLeft,method_00);
    Characters_BasicTitan__UpdateLimbRegrowth
              (__this,false,(__this->fields).RightArmDisabled,(__this->fields).RightHandDisabled,
               (__this->fields)._rightArmDisabledTimeLeft,method_00);
    return;
  }
label_05c3cb4a:
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$GetLimbRegrowthProgress
// il2cpp: float Characters_BasicTitan__GetLimbRegrowthProgress (float timeLeft, bool arm, const MethodInfo* method);
// 0x5c31840

float Characters_BasicTitan__GetLimbRegrowthProgress(float timeLeft,bool arm,MethodInfo *method)

{
  undefined3 in_register_00000039;
  undefined4 in_register_0000003c;
  float fVar1;
  float fVar2;
  
  fVar1 = 6.5 - timeLeft;
  fVar2 = 6.5;
  if (fVar1 <= 6.5) {
    fVar2 = fVar1;
  }
  fVar2 = (float)(-(uint)(0.0 <= fVar1) & (uint)fVar2);
  if (CONCAT31(in_register_00000039,arm) == 0) {
    return fVar2 / 6.5;
  }
  if (3.5 < fVar2) {
    fVar1 = powf((CustomLogic_CustomLogicMathBuiltin_o *)
                 CONCAT44(in_register_0000003c,CONCAT31(in_register_00000039,arm)),(fVar2 + -3.5) / -3.0 + 1.0
                 ,1.5,method);
    fVar1 = 1.0 - fVar1;
    fVar2 = 1.0;
    if (fVar1 <= 1.0) {
      fVar2 = fVar1;
    }
    return (float)(~-(uint)(0.0 <= fVar1) & 0x3f22e8ba |
                  (uint)(fVar2 * 0.36363637 + 0.6363636) & -(uint)(0.0 <= fVar1));
  }
  return fVar2 / 5.5;
}


// Characters.BasicTitan$$UpdateLimbRegrowth
// il2cpp: void Characters_BasicTitan__UpdateLimbRegrowth (Characters_BasicTitan_o* __this, bool left, bool armDisabled, bool handDisabled, float timeLeft, const MethodInfo* method);
// 0x5c3cc70
// asm: 8 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c3cddd: jmp 0x5c3ce0e
// asm:   0x5c3cde7: test r14b, r14b
// asm:   0x5c3cdea: movaps xmmword ptr [rsp], xmm2
// asm:   0x5c3cdee: je 0x5c3ce0e
// asm:   0x5c3cdf0: mov rdi, r12
// asm:   0x5c3cdf3: test r12, r12
// asm:   0x5c3cdf6: jne 0x5c3ce1a
// asm:   0x5c3cdf8: jmp 0x5c3d194

void Characters_BasicTitan__UpdateLimbRegrowth
               (Characters_BasicTitan_o *__this,bool left,bool armDisabled,bool handDisabled,float timeLeft,
               MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  Characters_BasicTitanComponentCache_o *pCVar7;
  UnityEngine_Transform_o *__this_00;
  Characters_TitanLimbMesh_o *__this_01;
  undefined1 auVar8 [16];
  undefined8 __this_02;
  UnityEngine_ParticleSystem_o **ppUVar9;
  UnityEngine_Transform_o *pUVar10;
  UnityEngine_Vector3_StaticFields *pUVar11;
  UnityEngine_Transform_o *pUVar12;
  UnityEngine_Transform_o **ppUVar13;
  UnityEngine_Transform_o **ppUVar14;
  undefined7 in_register_00000031;
  MethodInfo *method_00;
  Characters_BasicTitan_c *__this_03;
  float fVar15;
  float extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  float extraout_XMM0_Dc_01;
  float fVar16;
  undefined4 extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  float extraout_XMM0_Dd_01;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [12];
  undefined1 auVar21 [12];
  undefined1 auVar22 [16];
  UnityEngine_Vector3_o UVar23;
  UnityEngine_Vector3_o UVar24;
  UnityEngine_Vector3_o UVar25;
  float local_88;
  float fStack_84;
  undefined1 local_70 [12];
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined1 local_58 [16];
  undefined1 local_48 [24];
  
  method_00 = (MethodInfo *)CONCAT71(in_register_00000031,left);
  if (Il2CppMethodInitialized_075477ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitan);
    Il2CppMethodInitialized_075477ee = '\x01';
  }
  pCVar7 = (__this->fields).BasicCache;
  if (left) {
    if (pCVar7 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c3d194;
    ppUVar13 = &(pCVar7->fields).HandL;
    ppUVar14 = &(pCVar7->fields).ForearmL;
    ppUVar9 = &(pCVar7->fields).ForearmSmokeL;
  }
  else {
    if (pCVar7 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c3d194;
    ppUVar13 = &(pCVar7->fields).HandR;
    ppUVar14 = &(pCVar7->fields).ForearmR;
    ppUVar9 = &(pCVar7->fields).ForearmSmokeR;
  }
  pUVar12 = *ppUVar13;
  __this_00 = *ppUVar14;
  local_58._0_8_ = *ppUVar9;
  if ((armDisabled) || (fVar19 = 0.0, handDisabled)) {
    __this_03 = TypeInfo_Characters_BasicTitan;
    if ((TypeInfo_Characters_BasicTitan->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_BasicTitan);
    }
    auVar20 = ZEXT812(0x40d00000);
    fVar19 = 6.5 - timeLeft;
    if (fVar19 <= auVar20._0_4_) {
      auVar20._4_8_ = auVar20._4_8_;
      auVar20._0_4_ = fVar19;
    }
    fVar19 = (float)(-(uint)(0.0 <= fVar19) & auVar20._0_4_);
    if (armDisabled) {
      if (3.5 < fVar19) {
        fVar19 = powf((CustomLogic_CustomLogicMathBuiltin_o *)__this_03,(fVar19 + -3.5) / -3.0 + 1.0,1.5,
                      method_00);
        auVar21 = ZEXT812(0x3f800000);
        fVar19 = 1.0 - fVar19;
        if (fVar19 <= auVar21._0_4_) {
          auVar21._4_8_ = auVar21._4_8_;
          auVar21._0_4_ = fVar19;
        }
        fVar19 = (float)(~-(uint)(0.0 <= fVar19) & 0x3f22e8ba |
                        (uint)(auVar21._0_4_ * 0.36363637 + 0.6363636) & -(uint)(0.0 <= fVar19));
      }
      else {
        fVar19 = fVar19 / 5.5;
      }
    }
    else {
      fVar19 = fVar19 / 6.5;
    }
  }
  pUVar10 = pUVar12;
  if (!handDisabled) {
    pUVar10 = __this_00;
  }
  if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto label_05c3d194;
  UVar23 = UnityEngine_Transform__get_position(pUVar10,(MethodInfo *)0x0);
  fVar18 = UVar23.fields.y;
  __this_01 = (__this->fields)._limbMesh;
  if (__this_01 == (Characters_TitanLimbMesh_o *)0x0) goto label_05c3d194;
  UVar23 = Characters_TitanLimbMesh__UpdateRegrowth
                     (__this_01,left,armDisabled,fVar19,UVar23,(__this->fields).EffectsEnabled,
                      (MethodInfo *)0x0);
  local_48._8_4_ = extraout_XMM0_Dc;
  local_48._0_8_ = UVar23.fields._0_8_;
  local_48._12_4_ = extraout_XMM0_Dd;
  if (armDisabled) {
    pCVar7 = (__this->fields).BasicCache;
    if (left) {
      if (pCVar7 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c3d194;
      ppUVar9 = &(pCVar7->fields).ForearmBloodL;
    }
    else {
      if (pCVar7 == (Characters_BasicTitanComponentCache_o *)0x0) goto label_05c3d194;
      ppUVar9 = &(pCVar7->fields).ForearmBloodR;
    }
    if ((*ppUVar9 == (UnityEngine_ParticleSystem_o *)0x0) ||
       (pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)*ppUVar9,(MethodInfo *)0x0),
       __this_00 == (UnityEngine_Transform_o *)0x0)) goto label_05c3d194;
    UVar24 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_075450a5 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      fVar18 = 0.0;
      Il2CppMethodInitialized_075450a5 = '\x01';
    }
    if (pUVar10 == (UnityEngine_Transform_o *)0x0) goto label_05c3d194;
    fVar19 = (__this->fields).Size * 0.1;
    pUVar11 = TypeInfo_UnityEngine_Vector3->static_fields;
    UVar25.fields.z = UVar24.fields.z + (pUVar11->downVector).fields.z * fVar19;
    uVar1 = (pUVar11->downVector).fields.x;
    uVar4 = (pUVar11->downVector).fields.y;
    UVar25.fields.x = UVar24.fields.x + fVar19 * (float)uVar1;
    UVar25.fields.y = UVar24.fields.y + fVar19 * (float)uVar4;
    UnityEngine_Transform__set_position(pUVar10,UVar25,(MethodInfo *)0x0);
  }
  if (pUVar12 == (UnityEngine_Transform_o *)0x0) goto label_05c3d194;
  UVar24 = UnityEngine_Transform__get_position(pUVar12,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_Transform_o *)0x0) goto label_05c3d194;
  UVar25 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
  fVar19 = UVar25.fields.x;
  fVar15 = UVar25.fields.y;
  fVar16 = extraout_XMM0_Dc_01;
  fVar17 = extraout_XMM0_Dd_01;
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    fStack_60 = extraout_XMM0_Dc_01;
    unique0x10000127 = UVar25.fields._0_8_;
    fStack_5c = extraout_XMM0_Dd_01;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72d = '\x01';
    fVar19 = (float)local_70._8_4_;
    fVar15 = fStack_64;
    fVar16 = fStack_60;
    fVar17 = fStack_5c;
  }
  local_70._0_4_ = 0.0;
  local_70._4_4_ = 0.0;
  __this_02 = local_58._0_8_;
  local_88 = UVar24.fields.x;
  fStack_84 = UVar24.fields.y;
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    fStack_64 = fVar15;
    local_70._8_4_ = fVar19;
    fStack_60 = fVar16;
    fStack_5c = fVar17;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
    fVar19 = (float)local_70._8_4_;
    fVar15 = fStack_64;
    fVar16 = fStack_60;
    fVar17 = fStack_5c;
  }
  auVar22._0_4_ = local_88 - fVar19;
  auVar22._4_4_ = fStack_84 - fVar15;
  auVar22._8_4_ = extraout_XMM0_Dc_00 - fVar16;
  auVar22._12_4_ = extraout_XMM0_Dd_00 - fVar17;
  fVar19 = UVar24.fields.z - UVar25.fields.z;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  fVar15 = fVar19 * fVar19 + auVar22._4_4_ * auVar22._4_4_ + auVar22._0_4_ * auVar22._0_4_;
  if (fVar15 < 0.0) {
    fVar15 = sqrtf(fVar15);
    fVar18 = extraout_XMM0_Db;
    if (1e-05 < fVar15) goto label_05c3d08d;
label_05c3d055:
    pUVar11 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar19 = (pUVar11->zeroVector).fields.z;
  }
  else {
    fVar15 = SQRT(fVar15);
    if (fVar15 <= 1e-05) goto label_05c3d055;
label_05c3d08d:
    fVar19 = fVar19 / fVar15;
    auVar8._4_4_ = fVar15;
    auVar8._0_4_ = fVar15;
    auVar8._8_4_ = fVar18;
    auVar8._12_4_ = fVar18;
    auVar22 = divps(auVar22,auVar8);
    local_70._0_4_ = auVar22._0_4_;
    local_70._4_4_ = auVar22._4_4_;
    pUVar11 = (UnityEngine_Vector3_StaticFields *)local_70;
  }
  if ((UnityEngine_Component_o *)__this_02 != (UnityEngine_Component_o *)0x0) {
    uVar2 = (pUVar11->zeroVector).fields.x;
    uVar5 = (pUVar11->zeroVector).fields.y;
    pUVar12 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
    fVar18 = (__this->fields).Size;
    if (Il2CppMethodInitialized_075450a5 == '\0') {
      local_58 = ZEXT416((uint)fVar18);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_075450a5 = '\x01';
      fVar18 = (float)local_58._0_4_;
    }
    if (pUVar12 != (UnityEngine_Transform_o *)0x0) {
      pUVar11 = TypeInfo_UnityEngine_Vector3->static_fields;
      fVar18 = fVar18 * 0.15;
      fVar15 = (__this->fields).Size * 0.2;
      uVar3 = (pUVar11->downVector).fields.x;
      uVar6 = (pUVar11->downVector).fields.y;
      UVar23.fields.z = (pUVar11->downVector).fields.z * fVar15 + UVar23.fields.z + fVar19 * fVar18;
      UVar23.fields.x = fVar15 * (float)uVar3 + (float)local_48._0_4_ + (float)uVar2 * fVar18;
      UVar23.fields.y = (float)uVar6 * fVar15 + (float)local_48._4_4_ + (float)uVar5 * fVar18;
      UnityEngine_Transform__set_position(pUVar12,UVar23,(MethodInfo *)0x0);
      return;
    }
  }
label_05c3d194:
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$UpdateDeathDissolve
// il2cpp: void Characters_BasicTitan__UpdateDeathDissolve (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x5c3c4d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c3c72e: movaps xmm0, xmmword ptr [rsp + 0x10]

void Characters_BasicTitan__UpdateDeathDissolve(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  Characters_TitanDeathDissolve_o **targetAddress;
  Utility_BaseComponentCache_o *pUVar1;
  Characters_BasicTitanComponentCache_o *pCVar2;
  UnityEngine_ParticleSystem_o *pUVar3;
  Characters_BasicTitan___c__DisplayClass182_0_o *__this_00;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_SkinnedMeshRenderer_o *pUVar5;
  MethodInfo *pMVar6;
  System_Func_Renderer__bool__o *__this_01;
  Characters_TitanDeathDissolve_o *pCVar7;
  float fVar8;
  float fVar9;
  
  if (Il2CppMethodInitialized_075477ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_SkinnedMeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_Renderer_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanDeathDissolve);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Characters_BasicTitan_c__DisplayClass182_0_UpdateDeathDissolve_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitan_c__DisplayClass182_0);
    il2cpp_codegen_initialize_runtime_metadata(&"Body");
    il2cpp_codegen_initialize_runtime_metadata(&"Head");
    Il2CppMethodInitialized_075477ef = '\x01';
  }
  if ((__this->fields).Dead != false) {
    fVar8 = UnityEngine_Time__get_time((MethodInfo *)0x0);
    fVar8 = (fVar8 - (__this->fields)._deathVisualStartTime) + -3.0;
    Characters_BasicTitan__UpdateDeathSounds(__this,fVar8,method);
    if (0.0 <= fVar8) {
      pCVar7 = (__this->fields).DeathDissolve;
      if (pCVar7 != (Characters_TitanDeathDissolve_o *)0x0) {
label_05c3c733:
        fVar8 = fVar8 / 6.0;
        fVar9 = 1.0;
        if (fVar8 <= 1.0) {
          fVar9 = fVar8;
        }
        Characters_TitanDeathDissolve__Update
                  (pCVar7,(float)(-(uint)(0.0 <= fVar8) & (uint)fVar9),(MethodInfo *)0x0);
        return;
      }
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Characters_BasicTitan_c__DisplayClass182_0);
      pMVar6 = (MethodInfo *)0x0;
      Characters_BasicTitan___c__DisplayClass182_0___ctor(__this_00,(MethodInfo *)0x0);
      Characters_BasicTitan__UpdateLimbCuts(__this,pMVar6);
      Characters_BaseCharacter__RemoveOutline((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
      pUVar1 = (__this->fields).Cache;
      if ((((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
           (pUVar4 = (pUVar1->fields).Transform, pUVar4 != (UnityEngine_Transform_o *)0x0)) &&
          (pUVar4 = UnityEngine_Transform__Find(pUVar4,"Body",(MethodInfo *)0x0),
          pUVar4 != (UnityEngine_Transform_o *)0x0)) &&
         (pUVar5 = UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)pUVar4,
                              (MethodInfo_34B0830 *)
                              MethodInfo_UnityEngine_Component_GetComponent_SkinnedMeshRenderer),
         __this_00 != (Characters_BasicTitan___c__DisplayClass182_0_o *)0x0)) {
        (__this_00->fields).body = pUVar5;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).body);
        pUVar1 = (__this->fields).Cache;
        if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
           (pUVar4 = (pUVar1->fields).Transform, pUVar4 != (UnityEngine_Transform_o *)0x0)) {
          targetAddress = &(__this->fields).DeathDissolve;
          pMVar6 = (MethodInfo *)UnityEngine_Transform__Find(pUVar4,"Head",(MethodInfo *)0x0);
          (__this_00->fields).head = (UnityEngine_Transform_o *)pMVar6;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields).head);
          pUVar5 = (__this_00->fields).body;
          fVar9 = Characters_BasicTitan__GetDeathDissolveScale(__this,pMVar6);
          __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Renderer_bool);
          System_Func_object__bool____ctor
                    ((System_Func_object__bool__o *)__this_01,(Il2CppObject *)__this_00,
                     (intptr_t)MethodInfo_Characters_BasicTitan_c__DisplayClass182_0_UpdateDeathDissolve_b__0,
                     (MethodInfo_4F19300 *)0x0);
          pCVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_TitanDeathDissolve);
          Characters_TitanDeathDissolve___ctor
                    (pCVar7,(Characters_BaseTitan_o *)__this,pUVar5,fVar9,__this_01,(MethodInfo *)0x0);
          (__this->fields).DeathDissolve = pCVar7;
          Il2CppCodeGenWriteBarrier(targetAddress);
          pCVar2 = (__this->fields).BasicCache;
          if ((pCVar2 != (Characters_BasicTitanComponentCache_o *)0x0) &&
             (pUVar3 = (pCVar2->fields).ForearmSmokeL, pUVar3 != (UnityEngine_ParticleSystem_o *)0x0)) {
            UnityEngine_ParticleSystem__Stop_69c2810(pUVar3,(MethodInfo *)0x0);
            pCVar2 = (__this->fields).BasicCache;
            if ((pCVar2 != (Characters_BasicTitanComponentCache_o *)0x0) &&
               (pUVar3 = (pCVar2->fields).ForearmSmokeR, pUVar3 != (UnityEngine_ParticleSystem_o *)0x0)) {
              UnityEngine_ParticleSystem__Stop_69c2810(pUVar3,(MethodInfo *)0x0);
              pCVar7 = *targetAddress;
              if (pCVar7 != (Characters_TitanDeathDissolve_o *)0x0) goto label_05c3c733;
            }
          }
        }
      }
      ThrowNullReferenceException();
    }
  }
  return;
}


// Characters.BasicTitan$$GetDeathDissolveScale
// il2cpp: float Characters_BasicTitan__GetDeathDissolveScale (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x5c3d320

float Characters_BasicTitan__GetDeathDissolveScale(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  Utility_BaseComponentCache_o *pUVar2;
  Characters_BasicTitanComponentCache_o *pCVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *__this_02;
  UnityEngine_Transform_o *__this_03;
  float fVar5;
  float fVar6;
  float fVar7;
  UnityEngine_Vector3_o UVar8;
  UnityEngine_Vector3_o UVar9;
  float local_68;
  float fStack_64;
  float local_58;
  float fStack_54;
  
  if (Il2CppMethodInitialized_075477f0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"thigh.L");
    il2cpp_codegen_initialize_runtime_metadata(&"foot.L");
    il2cpp_codegen_initialize_runtime_metadata(&"shin.L");
    Il2CppMethodInitialized_075477f0 = '\x01';
  }
  pUVar2 = (__this->fields).Cache;
  if (((pUVar2 != (Utility_BaseComponentCache_o *)0x0) &&
      (pCVar3 = (__this->fields).BasicCache, pCVar3 != (Characters_BasicTitanComponentCache_o *)0x0)) &&
     (pUVar4 = (pCVar3->fields).Hip, pUVar4 != (UnityEngine_Transform_o *)0x0)) {
    __this_00 = (pUVar2->fields).Transform;
    __this_01 = UnityEngine_Transform__Find(pUVar4,"thigh.L",(MethodInfo *)0x0);
    if ((__this_01 != (UnityEngine_Transform_o *)0x0) &&
       (__this_02 = UnityEngine_Transform__Find(__this_01,"shin.L",(MethodInfo *)0x0),
       __this_02 != (UnityEngine_Transform_o *)0x0)) {
      __this_03 = UnityEngine_Transform__Find(__this_02,"foot.L",(MethodInfo *)0x0);
      UVar8 = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        UVar8 = UnityEngine_Transform__InverseTransformPoint(__this_00,UVar8,(MethodInfo *)0x0);
        pCVar3 = (__this->fields).BasicCache;
        if ((pCVar3 != (Characters_BasicTitanComponentCache_o *)0x0) &&
           (pUVar4 = (pCVar3->fields).Neck, pUVar4 != (UnityEngine_Transform_o *)0x0)) {
          UVar9 = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
          UVar9 = UnityEngine_Transform__InverseTransformPoint(__this_00,UVar9,(MethodInfo *)0x0);
          if (Il2CppMethodInitialized_0753e7b7 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
            Il2CppMethodInitialized_0753e7b7 = '\x01';
            uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
          }
          else {
            uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
          }
          if (uVar1 == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
          }
          fVar5 = UVar8.fields.z - UVar9.fields.z;
          local_68 = UVar8.fields.x;
          fStack_64 = UVar8.fields.y;
          local_68 = local_68 - UVar9.fields.x;
          fStack_64 = fStack_64 - UVar9.fields.y;
          fVar5 = fVar5 * fVar5 + fStack_64 * fStack_64 + local_68 * local_68;
          if (fVar5 < 0.0) {
            fVar5 = sqrtf(fVar5);
          }
          else {
            fVar5 = SQRT(fVar5);
          }
          UVar8 = UnityEngine_Transform__get_position(__this_01,(MethodInfo *)0x0);
          UVar8 = UnityEngine_Transform__InverseTransformPoint(__this_00,UVar8,(MethodInfo *)0x0);
          UVar9 = UnityEngine_Transform__get_position(__this_02,(MethodInfo *)0x0);
          UVar9 = UnityEngine_Transform__InverseTransformPoint(__this_00,UVar9,(MethodInfo *)0x0);
          if (Il2CppMethodInitialized_0753e7b7 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
            Il2CppMethodInitialized_0753e7b7 = '\x01';
            uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
          }
          else {
            uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
          }
          if (uVar1 == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
          }
          fVar6 = UVar8.fields.z - UVar9.fields.z;
          local_68 = UVar8.fields.x;
          fStack_64 = UVar8.fields.y;
          local_68 = local_68 - UVar9.fields.x;
          fStack_64 = fStack_64 - UVar9.fields.y;
          fVar6 = fVar6 * fVar6 + fStack_64 * fStack_64 + local_68 * local_68;
          if (fVar6 < 0.0) {
            fVar6 = sqrtf(fVar6);
          }
          else {
            fVar6 = SQRT(fVar6);
          }
          UVar8 = UnityEngine_Transform__get_position(__this_02,(MethodInfo *)0x0);
          UVar8 = UnityEngine_Transform__InverseTransformPoint(__this_00,UVar8,(MethodInfo *)0x0);
          if (__this_03 != (UnityEngine_Transform_o *)0x0) {
            UVar9 = UnityEngine_Transform__get_position(__this_03,(MethodInfo *)0x0);
            UVar9 = UnityEngine_Transform__InverseTransformPoint(__this_00,UVar9,(MethodInfo *)0x0);
            if (Il2CppMethodInitialized_0753e7b7 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
              Il2CppMethodInitialized_0753e7b7 = '\x01';
              uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
            }
            else {
              uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
            }
            if (uVar1 == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
            }
            local_58 = UVar8.fields.x;
            fStack_54 = UVar8.fields.y;
            fStack_54 = fStack_54 - UVar9.fields.y;
            fVar7 = UVar8.fields.z - UVar9.fields.z;
            local_58 = local_58 - UVar9.fields.x;
            fVar7 = fStack_54 * fStack_54 + local_58 * local_58 + fVar7 * fVar7;
            if (fVar7 < 0.0) {
              fVar7 = sqrtf(fVar7);
            }
            else {
              fVar7 = SQRT(fVar7);
            }
            return (fVar5 + fVar6 + fVar7) * 1.2;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$UpdateDeathSounds
// il2cpp: void Characters_BasicTitan__UpdateDeathSounds (Characters_BasicTitan_o* __this, float dissolveElapsed, const MethodInfo* method);
// 0x5c3d1a0

void Characters_BasicTitan__UpdateDeathSounds
               (Characters_BasicTitan_o *__this,float dissolveElapsed,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar2;
  UnityEngine_AudioSource_o *__this_01;
  MethodInfo *method_00;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (Il2CppMethodInitialized_075477f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanSounds);
    Il2CppMethodInitialized_075477f1 = '\x01';
  }
  pUVar1 = (__this->fields).Cache;
  if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(pUVar1->fields).AudioSources;
    if ((TypeInfo_Characters_TitanSounds->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_TitanSounds);
    }
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      __this_01 = System_Collections_Generic_Dictionary_object__object___get_Item
                            (__this_00,
                             (Il2CppObject *)TypeInfo_Characters_TitanSounds->static_fields->DeathFall,
                             (MethodInfo_4AAD450 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_get_Item);
      if (__this_01 != (UnityEngine_AudioSource_o *)0x0) {
        method_00 = (MethodInfo *)0x0;
        bVar2 = UnityEngine_AudioSource__get_isPlaying(__this_01,(MethodInfo *)0x0);
        if (bVar2) {
          fVar3 = UnityEngine_AudioSource__get_time(__this_01,(MethodInfo *)0x0);
          fVar5 = (1.2 - fVar3) / 0.2;
          fVar3 = 1.0;
          if (fVar5 <= 1.0) {
            fVar3 = fVar5;
          }
          fVar3 = (float)(-(uint)(0.0 <= fVar5) & (uint)fVar3);
          method_00 = (MethodInfo *)0x0;
          UnityEngine_AudioSource__set_volume
                    (__this_01,(__this->fields)._deathFallSoundVolume * fVar3,(MethodInfo *)0x0);
          if ((0.0 <= dissolveElapsed) || (fVar3 <= 0.0)) {
            method_00 = (MethodInfo *)0x0;
            UnityEngine_AudioSource__Stop_68b0850(__this_01,(MethodInfo *)0x0);
          }
        }
        fVar5 = dissolveElapsed + dissolveElapsed;
        fVar3 = 1.0;
        if (fVar5 <= 1.0) {
          fVar3 = fVar5;
        }
        fVar4 = 6.25 - dissolveElapsed;
        fVar6 = 1.0;
        if (fVar4 <= 1.0) {
          fVar6 = fVar4;
        }
        Characters_BasicTitan__SetSteamVolume
                  (__this,(float)(-(uint)(0.0 <= fVar4) & (uint)fVar6) *
                          (float)(-(uint)(0.0 <= fVar5) & (uint)fVar3),method_00);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$OnDestroy
// il2cpp: void Characters_BasicTitan__OnDestroy (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x5c3d710

void Characters_BasicTitan__OnDestroy(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  Characters_TitanLimbMesh_o *__this_00;
  Characters_TitanDeathDissolve_o *__this_01;
  Characters_BasicTitanComponentCache_o *pCVar1;
  UnityEngine_ParticleSystem_o *pUVar2;
  bool bVar3;
  UnityEngine_Object_o *pUVar4;
  
  if (Il2CppMethodInitialized_075477f2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075477f2 = '\x01';
  }
  __this_00 = (__this->fields)._limbMesh;
  if (__this_00 != (Characters_TitanLimbMesh_o *)0x0) {
    Characters_TitanLimbMesh__Dispose(__this_00,(MethodInfo *)0x0);
  }
  __this_01 = (__this->fields).DeathDissolve;
  if (__this_01 != (Characters_TitanDeathDissolve_o *)0x0) {
    Characters_TitanDeathDissolve__Dispose(__this_01,(MethodInfo *)0x0);
  }
  Characters_BaseCharacter__OnDestroy((Characters_BaseCharacter_o *)__this,(MethodInfo *)0x0);
  pCVar1 = (__this->fields).BasicCache;
  if (pCVar1 != (Characters_BasicTitanComponentCache_o *)0x0) {
    pUVar2 = (pCVar1->fields).ForearmSmokeL;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      pCVar1 = (__this->fields).BasicCache;
      if ((pCVar1 == (Characters_BasicTitanComponentCache_o *)0x0) ||
         (pUVar2 = (pCVar1->fields).ForearmSmokeL, pUVar2 == (UnityEngine_ParticleSystem_o *)0x0))
      goto label_05c3d864;
      pUVar4 = (UnityEngine_Object_o *)
               UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__Destroy_69214e0(pUVar4,(MethodInfo *)0x0);
    }
    pCVar1 = (__this->fields).BasicCache;
    if (pCVar1 != (Characters_BasicTitanComponentCache_o *)0x0) {
      pUVar2 = (pCVar1->fields).ForearmSmokeR;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar3) {
        return;
      }
      pCVar1 = (__this->fields).BasicCache;
      if ((pCVar1 != (Characters_BasicTitanComponentCache_o *)0x0) &&
         (pUVar2 = (pCVar1->fields).ForearmSmokeR, pUVar2 != (UnityEngine_ParticleSystem_o *)0x0)) {
        pUVar4 = (UnityEngine_Object_o *)
                 UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_69214e0(pUVar4,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_05c3d864:
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$GetFootstepPhase
// il2cpp: int32_t Characters_BasicTitan__GetFootstepPhase (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x5c3d870

int32_t Characters_BasicTitan__GetFootstepPhase(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  Characters_BasicTitanAnimations_o *pCVar1;
  bool bVar2;
  MethodInfo *method_00;
  System_String_o *pSVar3;
  Characters_AnimationHandler_o *pCVar4;
  float fVar5;
  float fStack_14;
  
  if (Il2CppMethodInitialized_075477f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_075477f3 = '\x01';
  }
  pCVar1 = (__this->fields).BasicAnimations;
  if (pCVar1 != (Characters_BasicTitanAnimations_o *)0x0) {
    pCVar4 = (__this->fields).Animation;
    method_00 = (MethodInfo *)
                (*(pCVar1->klass->vtable)._7_get_Walk.methodPtr)
                          (pCVar1,(pCVar1->klass->vtable)._7_get_Walk.method);
    if (pCVar4 != (Characters_AnimationHandler_o *)0x0) {
      bVar2 = Characters_AnimationHandler__IsPlaying(pCVar4,(System_String_o *)method_00,(MethodInfo *)0x0);
      if (bVar2) {
        pCVar4 = (__this->fields).Animation;
        if (pCVar4 == (Characters_AnimationHandler_o *)0x0) goto label_05c3daca;
        fVar5 = Characters_AnimationHandler__GetCurrentNormalizedTime(pCVar4,(MethodInfo *)0x0);
        fVar5 = fmodf(fVar5,1.0,(MethodInfo *)pCVar4);
        if (fVar5 < 0.1) {
          return 0;
        }
        fStack_14 = 0.6;
label_05c3dab1:
        return (uint)(fVar5 < fStack_14);
      }
      pSVar3 = Characters_BasicTitan__GetPlayingRunAnimation(__this,method_00);
      bVar2 = System_String__op_Inequality(pSVar3,"",(MethodInfo *)0x0);
      pCVar4 = (__this->fields).Animation;
      if (bVar2) {
        if (pCVar4 != (Characters_AnimationHandler_o *)0x0) {
          fVar5 = Characters_AnimationHandler__GetCurrentNormalizedTime(pCVar4,(MethodInfo *)0x0);
          fVar5 = fmodf(fVar5,1.0,(MethodInfo *)pCVar4);
          if (0.0 <= fVar5) {
            return (uint)(0.5 <= fVar5);
          }
          return 1;
        }
      }
      else {
        pCVar1 = (__this->fields).BasicAnimations;
        if ((pCVar1 != (Characters_BasicTitanAnimations_o *)0x0) &&
           (pSVar3 = (*(pCVar1->klass->vtable)._19_get_Turn90L.methodPtr)
                               (pCVar1,(pCVar1->klass->vtable)._19_get_Turn90L.method),
           pCVar4 != (Characters_AnimationHandler_o *)0x0)) {
          bVar2 = Characters_AnimationHandler__IsPlaying(pCVar4,pSVar3,(MethodInfo *)0x0);
          fStack_14 = 0.85;
          if (!bVar2) {
            pCVar1 = (__this->fields).BasicAnimations;
            if ((pCVar1 == (Characters_BasicTitanAnimations_o *)0x0) ||
               (pCVar4 = (__this->fields).Animation, pCVar4 == (Characters_AnimationHandler_o *)0x0))
            goto label_05c3daca;
            bVar2 = Characters_AnimationHandler__IsPlaying
                              (pCVar4,(pCVar1->fields).Turn90LCrawler,(MethodInfo *)0x0);
            if (!bVar2) {
              pCVar1 = (__this->fields).BasicAnimations;
              if (pCVar1 == (Characters_BasicTitanAnimations_o *)0x0) goto label_05c3daca;
              pCVar4 = (__this->fields).Animation;
              pSVar3 = (*(pCVar1->klass->vtable)._20_get_Turn90R.methodPtr)
                                 (pCVar1,(pCVar1->klass->vtable)._20_get_Turn90R.method);
              if (pCVar4 == (Characters_AnimationHandler_o *)0x0) goto label_05c3daca;
              bVar2 = Characters_AnimationHandler__IsPlaying(pCVar4,pSVar3,(MethodInfo *)0x0);
              fStack_14 = 0.8;
              if (!bVar2) {
                pCVar1 = (__this->fields).BasicAnimations;
                if ((pCVar1 == (Characters_BasicTitanAnimations_o *)0x0) ||
                   (pCVar4 = (__this->fields).Animation, pCVar4 == (Characters_AnimationHandler_o *)0x0))
                goto label_05c3daca;
                bVar2 = Characters_AnimationHandler__IsPlaying
                                  (pCVar4,(pCVar1->fields).Turn90RCrawler,(MethodInfo *)0x0);
                if (!bVar2) {
                  return (__this->fields)._stepPhase;
                }
              }
            }
          }
          pCVar4 = (__this->fields).Animation;
          if (pCVar4 != (Characters_AnimationHandler_o *)0x0) {
            fVar5 = Characters_AnimationHandler__GetCurrentNormalizedTime(pCVar4,(MethodInfo *)0x0);
            if (fVar5 < 0.4) {
              (__this->fields)._stepPhase = 0;
              return 0;
            }
            goto label_05c3dab1;
          }
        }
      }
    }
  }
label_05c3daca:
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$GetPlayingRunAnimation
// il2cpp: System_String_o* Characters_BasicTitan__GetPlayingRunAnimation (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x5c3dad0

System_String_o *
Characters_BasicTitan__GetPlayingRunAnimation(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  uint uVar1;
  Characters_BasicTitanAnimations_o *pCVar2;
  Characters_AnimationHandler_o *pCVar3;
  System_String_array *pSVar4;
  System_String_o *name;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (Il2CppMethodInitialized_075477f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_075477f4 = '\x01';
  }
  pCVar2 = (__this->fields).BasicAnimations;
  if ((pCVar2 != (Characters_BasicTitanAnimations_o *)0x0) &&
     (pCVar3 = (__this->fields).Animation, pCVar3 != (Characters_AnimationHandler_o *)0x0)) {
    bVar5 = Characters_AnimationHandler__IsPlaying(pCVar3,(pCVar2->fields).RunCrawler,(MethodInfo *)0x0);
    pCVar2 = (__this->fields).BasicAnimations;
    if (bVar5) {
      if (pCVar2 != (Characters_BasicTitanAnimations_o *)0x0) {
        return (pCVar2->fields).RunCrawler;
      }
    }
    else if ((pCVar2 != (Characters_BasicTitanAnimations_o *)0x0) &&
            (pSVar4 = (pCVar2->fields).Runs, pSVar4 != (System_String_array *)0x0)) {
      if (0 < (int)pSVar4->max_length) {
        uVar6 = pSVar4->max_length & 0xffffffff;
        uVar7 = 0;
        do {
          if (uVar6 <= uVar7) {
            ThrowIndexOutOfRangeException();
          }
          pCVar3 = (__this->fields).Animation;
          if (pCVar3 == (Characters_AnimationHandler_o *)0x0) goto label_05c3dbae;
          name = pSVar4->m_Items[uVar7];
          bVar5 = Characters_AnimationHandler__IsPlaying(pCVar3,name,(MethodInfo *)0x0);
          if (bVar5) {
            return name;
          }
          uVar7 = uVar7 + 1;
          uVar1 = (uint)pSVar4->max_length;
          uVar6 = (ulong)uVar1;
        } while ((long)uVar7 < (long)(int)uVar1);
      }
      return "";
    }
  }
label_05c3dbae:
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$CheckGround
// il2cpp: void Characters_BasicTitan__CheckGround (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x5c3dbc0

void Characters_BasicTitan__CheckGround(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  Characters_BaseTitanComponentCache_o *pCVar4;
  UnityEngine_CapsuleCollider_o *__this_00;
  UnityEngine_Component_o *pUVar5;
  Utility_BaseComponentCache_o *pUVar6;
  UnityEngine_Vector3_StaticFields *pUVar7;
  bool bVar8;
  int32_t layerMask;
  UnityEngine_Transform_o *pUVar9;
  MethodInfo *method_00;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  float extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float extraout_XMM0_Dd_01;
  float fVar14;
  float fVar15;
  UnityEngine_Vector3_o UVar16;
  UnityEngine_Vector3_o UVar17;
  UnityEngine_Vector3_o point2;
  float fStack_b8;
  UnityEngine_LayerMask_o aUStack_90 [2];
  float fStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  float fStack_60;
  float fStack_5c;
  undefined1 auStack_58 [8];
  float fStack_50;
  float fStack_4c;
  UnityEngine_RaycastHit_o UStack_48;
  
  if (Il2CppMethodInitialized_075477f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_CapsuleCollider);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    Il2CppMethodInitialized_075477f5 = '\x01';
  }
  UStack_48.fields.m_UV.fields.x = 0.0;
  UStack_48.fields.m_UV.fields.y = 0.0;
  UStack_48.fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
  UStack_48.fields.m_Normal.fields.y = 0.0;
  UStack_48.fields.m_Normal.fields.z = 0.0;
  UStack_48.fields.m_FaceID = 0;
  UStack_48.fields.m_Distance = 0.0;
  UStack_48.fields.m_Point.fields.x = 0.0;
  UStack_48.fields.m_Point.fields.y = 0.0;
  UStack_48.fields.m_Point.fields.z = 0.0;
  UStack_48.fields.m_Normal.fields.x = 0.0;
  pCVar4 = (__this->fields).BaseTitanCache;
  if (pCVar4 == (Characters_BaseTitanComponentCache_o *)0x0) goto label_05c3e0df;
  __this_00 = (UnityEngine_CapsuleCollider_o *)(pCVar4->fields).Movebox;
  if (__this_00 != (UnityEngine_CapsuleCollider_o *)0x0) {
    bVar3 = (TypeInfo_UnityEngine_CapsuleCollider->_2).typeHierarchyDepth;
    if (((__this_00->klass->_2).typeHierarchyDepth < bVar3) ||
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar3 - 1] !=
        (Il2CppClass *)TypeInfo_UnityEngine_CapsuleCollider)) {
      il2cpp_codegen_raise_invalid_cast_exception(__this_00);
    }
  }
  bVar8 = (__this->fields).IsCrawler;
  if ((__this->fields).State - 5U < 2) {
    if (bVar8 == false) {
      if (__this_00 == (UnityEngine_CapsuleCollider_o *)0x0) goto label_05c3e0df;
      fVar10 = (__this->fields)._originalCapsuleValue * 0.7;
label_05c3dd05:
      method_00 = (MethodInfo *)0x0;
      UnityEngine_CapsuleCollider__set_radius(__this_00,fVar10,(MethodInfo *)0x0);
    }
    else {
      if (__this_00 == (UnityEngine_CapsuleCollider_o *)0x0) goto label_05c3e0df;
      fVar10 = (__this->fields)._originalCapsuleValue * 0.7;
label_05c3dcb9:
      method_00 = (MethodInfo *)0x0;
      UnityEngine_CapsuleCollider__set_height(__this_00,fVar10,(MethodInfo *)0x0);
    }
  }
  else if (bVar8 == false) {
    if (__this_00 == (UnityEngine_CapsuleCollider_o *)0x0) goto label_05c3e0df;
    method_00 = (MethodInfo *)0x0;
    fVar11 = UnityEngine_CapsuleCollider__get_radius(__this_00,(MethodInfo *)0x0);
    fVar10 = (__this->fields)._originalCapsuleValue;
    if ((fVar11 != fVar10) || (NAN(fVar11) || NAN(fVar10))) goto label_05c3dd05;
  }
  else {
    if (__this_00 == (UnityEngine_CapsuleCollider_o *)0x0) goto label_05c3e0df;
    method_00 = (MethodInfo *)0x0;
    fVar11 = UnityEngine_CapsuleCollider__get_height(__this_00,(MethodInfo *)0x0);
    fVar10 = (__this->fields)._originalCapsuleValue;
    if ((fVar11 != fVar10) || (NAN(fVar11) || NAN(fVar10))) goto label_05c3dcb9;
  }
  if ((__this->fields).IsCrawler == false) {
    Characters_BaseTitan__CheckGround((Characters_BaseTitan_o *)__this,method_00);
    return;
  }
  pCVar4 = (__this->fields).BaseTitanCache;
  if ((pCVar4 != (Characters_BaseTitanComponentCache_o *)0x0) &&
     (pUVar5 = (UnityEngine_Component_o *)(pCVar4->fields).Movebox, pUVar5 != (UnityEngine_Component_o *)0x0))
  {
    pUVar9 = UnityEngine_Component__get_transform(pUVar5,(MethodInfo *)0x0);
    if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
      UVar16 = UnityEngine_Transform__get_lossyScale(pUVar9,(MethodInfo *)0x0);
      fStack_88 = UnityEngine_CapsuleCollider__get_radius(__this_00,(MethodInfo *)0x0);
      pCVar4 = (__this->fields).BaseTitanCache;
      if ((pCVar4 != (Characters_BaseTitanComponentCache_o *)0x0) &&
         (pUVar5 = (UnityEngine_Component_o *)(pCVar4->fields).Movebox,
         pUVar5 != (UnityEngine_Component_o *)0x0)) {
        pUVar9 = UnityEngine_Component__get_transform(pUVar5,(MethodInfo *)0x0);
        if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
          UVar17 = UnityEngine_Transform__get_lossyScale(pUVar9,(MethodInfo *)0x0);
          fStack_60 = (float)extraout_XMM0_Dc;
          auStack_68 = (undefined1  [8])UVar17.fields._0_8_;
          fStack_5c = (float)extraout_XMM0_Dd;
          fVar10 = UnityEngine_CapsuleCollider__get_height(__this_00,(MethodInfo *)0x0);
          pUVar6 = (__this->fields).Cache;
          if (pUVar6 != (Utility_BaseComponentCache_o *)0x0) {
            pUVar9 = (pUVar6->fields).Transform;
            if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
              UVar17 = UnityEngine_Transform__get_position(pUVar9,(MethodInfo *)0x0);
              fStack_50 = (float)extraout_XMM0_Dc_00;
              auStack_58 = (undefined1  [8])UVar17.fields._0_8_;
              fStack_4c = (float)extraout_XMM0_Dd_00;
              if (Il2CppMethodInitialized_0753e72c == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                Il2CppMethodInitialized_0753e72c = '\x01';
              }
              pUVar6 = (__this->fields).Cache;
              if ((pUVar6 != (Utility_BaseComponentCache_o *)0x0) &&
                 (pUVar9 = (pUVar6->fields).Transform, pUVar9 != (UnityEngine_Transform_o *)0x0)) {
                fStack_b8 = UVar16.fields.x;
                fStack_88 = fStack_88 * fStack_b8;
                pUVar7 = TypeInfo_UnityEngine_Vector3->static_fields;
                uStack_78._0_4_ = (pUVar7->upVector).fields.x;
                uStack_78._4_4_ = (pUVar7->upVector).fields.y;
                uStack_70 = 0;
                fVar14 = fStack_88 + 1.0;
                fVar11 = (pUVar7->upVector).fields.z;
                UVar16 = UnityEngine_Transform__get_forward(pUVar9,(MethodInfo *)0x0);
                pUVar6 = (__this->fields).Cache;
                if (pUVar6 != (Utility_BaseComponentCache_o *)0x0) {
                  pUVar9 = (pUVar6->fields).Transform;
                  if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
                    fVar15 = (fVar10 * (float)auStack_68._0_4_ - (fStack_88 + fStack_88)) * 0.5;
                    auStack_58._4_4_ = (float)auStack_58._4_4_ + fVar14 * uStack_78._4_4_;
                    auStack_58._0_4_ = (float)auStack_58._0_4_ + fVar14 * (float)uStack_78;
                    fStack_50 = fStack_50 + fVar14 * (float)uStack_70;
                    fStack_4c = fStack_4c + fVar14 * uStack_70._4_4_;
                    fVar10 = UVar17.fields.z + fVar11 * fVar14;
                    uStack_78 = CONCAT44(uStack_78._4_4_,UVar16.fields.z * fVar15);
                    auStack_68._4_4_ = UVar16.fields.y * fVar15;
                    auStack_68._0_4_ = UVar16.fields.x * fVar15;
                    fStack_60 = extraout_XMM0_Dc_01 * fVar15;
                    fStack_5c = extraout_XMM0_Dd_01 * fVar15;
                    UVar16 = UnityEngine_Transform__get_forward(pUVar9,(MethodInfo *)0x0);
                    (__this->fields).JustGrounded = false;
                    if (Il2CppMethodInitialized_075450a5 == '\0') {
                      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                      Il2CppMethodInitialized_075450a5 = '\x01';
                    }
                    auStack_68._4_4_ = (float)auStack_58._4_4_ - (float)auStack_68._4_4_;
                    auStack_68._0_4_ = (float)auStack_58._0_4_ - (float)auStack_68._0_4_;
                    fStack_60 = fStack_50 - fStack_60;
                    fStack_5c = fStack_4c - fStack_5c;
                    uStack_78 = CONCAT44(uStack_78._4_4_,fVar10 - (float)uStack_78);
                    fVar14 = UVar16.fields.x * fVar15 + (float)auStack_58._0_4_;
                    fVar13 = UVar16.fields.y * fVar15 + (float)auStack_58._4_4_;
                    pUVar7 = TypeInfo_UnityEngine_Vector3->static_fields;
                    uVar1 = (pUVar7->downVector).fields.x;
                    uVar2 = (pUVar7->downVector).fields.y;
                    auStack_58._4_4_ = uVar2;
                    auStack_58._0_4_ = uVar1;
                    _fStack_50 = 0;
                    fVar11 = (pUVar7->downVector).fields.z;
                    fVar12 = (*(__this->klass->vtable)._68_get_GroundDistance.methodPtr)
                                       (__this,(__this->klass->vtable)._68_get_GroundDistance.method);
                    aUStack_90[0] =
                         (*(__this->klass->vtable)._67_get_GroundMask.methodPtr)
                                   (__this,(__this->klass->vtable)._67_get_GroundMask.method);
                    layerMask = UnityEngine_LayerMask__get_value(aUStack_90,(MethodInfo *)0x0);
                    if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
                    }
                    point2.fields.y = fVar13;
                    point2.fields.x = fVar14;
                    UVar17.fields.z = (float)uStack_78;
                    UVar17.fields.x = (float)auStack_68._0_4_;
                    UVar17.fields.y = (float)auStack_68._4_4_;
                    point2.fields.z = UVar16.fields.z * fVar15 + fVar10;
                    UVar16.fields.z = fVar11;
                    UVar16.fields.x = (float)auStack_58._0_4_;
                    UVar16.fields.y = (float)auStack_58._4_4_;
                    bVar8 = UnityEngine_Physics__CapsuleCast_69dab20
                                      (UVar17,point2,fStack_88,UVar16,&UStack_48,fVar12 + 1.0,layerMask,
                                       (MethodInfo *)0x0);
                    if (bVar8) {
                      if ((__this->fields).Grounded == false) {
                        (__this->fields).Grounded = true;
                        (__this->fields).JustGrounded = true;
                      }
                      fStack_88 = UnityEngine_RaycastHit__get_distance(&UStack_48,(MethodInfo *)0x0);
                      fVar10 = (*(__this->klass->vtable)._68_get_GroundDistance.methodPtr)
                                         (__this,(__this->klass->vtable)._68_get_GroundDistance.method);
                      fStack_88 = fStack_88 + -1.0;
                      if (fStack_88 <= fVar10) {
                        fVar10 = fStack_88;
                      }
                      (__this->fields)._currentGroundDistance =
                           (float)(-(uint)(0.0 <= fStack_88) & (uint)fVar10);
                    }
                    else {
                      (__this->fields).Grounded = false;
                      fVar10 = (*(__this->klass->vtable)._68_get_GroundDistance.methodPtr)
                                         (__this,(__this->klass->vtable)._68_get_GroundDistance.method);
                      (__this->fields)._currentGroundDistance = fVar10;
                    }
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
label_05c3e0df:
  ThrowNullReferenceException();
}


// Characters.BasicTitan$$.ctor
// il2cpp: void Characters_BasicTitan___ctor (Characters_BasicTitan_o* __this, const MethodInfo* method);
// 0x5c3e0f0

void Characters_BasicTitan___ctor(Characters_BasicTitan_o *__this,MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector3_StaticFields *pUVar2;
  System_Nullable_Quaternion__o *pSVar3;
  float fVar4;
  MethodInfo *method_00;
  System_Nullable_Quaternion__Fields SStack_58;
  System_Nullable_Quaternion__Fields SStack_38;
  
  if (Il2CppMethodInitialized_075477f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_Quaternion_ctor);
    Il2CppMethodInitialized_075477f6 = '\x01';
  }
  if (Il2CppMethodInitialized_0753e72b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
    Il2CppMethodInitialized_0753e72b = '\x01';
  }
  SStack_38.hasValue = false;
  SStack_38._1_3_ = 0;
  SStack_38.value.fields.x = 0.0;
  SStack_38.value.fields.y = 0.0;
  SStack_38.value.fields.z = 0.0;
  SStack_38.value.fields.w = 0.0;
  System_Nullable_Quaternion____ctor
            ((System_Nullable_Quaternion__o *)&SStack_38,
             (UnityEngine_Quaternion_o)
             *(UnityEngine_Quaternion_Fields *)TypeInfo_UnityEngine_Quaternion->static_fields,
             (MethodInfo_3CD6790 *)MethodInfo_System_Nullable_Quaternion_ctor);
  (__this->fields).LateUpdateHeadRotation.fields.value.fields.w = SStack_38.value.fields.w;
  (__this->fields).LateUpdateHeadRotation.fields.hasValue = SStack_38.hasValue;
  *(undefined3 *)&(__this->fields).LateUpdateHeadRotation.fields.field_0x1 = SStack_38._1_3_;
  (__this->fields).LateUpdateHeadRotation.fields.value.fields.x = SStack_38.value.fields.x;
  pSVar3 = &(__this->fields).LateUpdateHeadRotation;
  (pSVar3->fields).value.fields.y = SStack_38.value.fields.y;
  (pSVar3->fields).value.fields.z = SStack_38.value.fields.z;
  if (Il2CppMethodInitialized_0753e72b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
    Il2CppMethodInitialized_0753e72b = '\x01';
  }
  SStack_58.hasValue = false;
  SStack_58._1_3_ = 0;
  SStack_58.value.fields.x = 0.0;
  SStack_58.value.fields.y = 0.0;
  SStack_58.value.fields.z = 0.0;
  SStack_58.value.fields.w = 0.0;
  method_00 = MethodInfo_System_Nullable_Quaternion_ctor;
  System_Nullable_Quaternion____ctor
            ((System_Nullable_Quaternion__o *)&SStack_58,
             (UnityEngine_Quaternion_o)
             *(UnityEngine_Quaternion_Fields *)TypeInfo_UnityEngine_Quaternion->static_fields,
             (MethodInfo_3CD6790 *)MethodInfo_System_Nullable_Quaternion_ctor);
  (__this->fields).LateUpdateHeadRotationRecv.fields.value.fields.w = SStack_58.value.fields.w;
  (__this->fields).LateUpdateHeadRotationRecv.fields.hasValue = SStack_58.hasValue;
  *(undefined3 *)&(__this->fields).LateUpdateHeadRotationRecv.fields.field_0x1 = SStack_58._1_3_;
  (__this->fields).LateUpdateHeadRotationRecv.fields.value.fields.x = SStack_58.value.fields.x;
  pSVar3 = &(__this->fields).LateUpdateHeadRotationRecv;
  (pSVar3->fields).value.fields.y = SStack_58.value.fields.y;
  (pSVar3->fields).value.fields.z = SStack_58.value.fields.z;
  if (Il2CppMethodInitialized_0753ecc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0753ecc8 = '\x01';
  }
  (__this->fields).LastGoodHeadAngle.fields = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields
  ;
  (__this->fields).BellyFlopTime = 5.5;
  (__this->fields).ArmDisableTime = 13.5;
  (__this->fields).RockThrow1Speed = 140.0;
  (__this->fields).RockThrowMaxAimAngle = 60.0;
  (__this->fields).RockThrowCloseAimAngle = 15.0;
  (__this->fields).RockThrowCloseAimDistance = 15.0;
  (__this->fields).RockThrowFullAimDistance = 40.0;
  (__this->fields).TargetViewId = -1;
  (__this->fields).HeadSize = 1.0;
  if (Il2CppMethodInitialized_0753e4b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b7 = '\x01';
  }
  pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar4 = (pUVar2->oneVector).fields.y;
  fVar1 = (pUVar2->oneVector).fields.z;
  (__this->fields)._headScale.fields.x = (pUVar2->oneVector).fields.x;
  (__this->fields)._headScale.fields.y = fVar4;
  (__this->fields)._headScale.fields.z = fVar1;
  (__this->fields)._skinSlot = -1;
  Characters_BaseTitan___ctor((Characters_BaseTitan_o *)__this,method_00);
  return;
}


// Characters.BasicTitan$$.cctor
// il2cpp: void Characters_BasicTitan___cctor (const MethodInfo* method);
// 0x5c3e2d0

void Characters_BasicTitan___cctor(MethodInfo *method)

{
  System_String_array *pSVar1;
  
  if (Il2CppMethodInitialized_075477f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BasicTitan);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|run.abnormal.1");
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|die.front");
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|idle");
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|run.walk");
    il2cpp_codegen_initialize_runtime_metadata(&"Amarture_VER2|run.abnormal");
    Il2CppMethodInitialized_075477f7 = '\x01';
  }
  pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
  if (pSVar1 == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)pSVar1->max_length != 0) {
    pSVar1->m_Items[0] = "Amarture_VER2|idle";
    Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
    if ((pSVar1->max_length & 0xfffffffe) != 0) {
      pSVar1->m_Items[1] = "Amarture_VER2|run.walk";
      Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
      if (2 < (uint)pSVar1->max_length) {
        pSVar1->m_Items[2] = "Amarture_VER2|run.abnormal";
        Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 2);
        if ((pSVar1->max_length & 0xfffffffc) != 0) {
          pSVar1->m_Items[3] = "Amarture_VER2|run.abnormal.1";
          Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 3);
          if (4 < (uint)pSVar1->max_length) {
            pSVar1->m_Items[4] = "Amarture_VER2|die.front";
            Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 4);
            TypeInfo_Characters_BasicTitan->static_fields->SizeScaledAnimations = pSVar1;
            Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_BasicTitan->static_fields->SizeScaledAnimations);
            return;
          }
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


