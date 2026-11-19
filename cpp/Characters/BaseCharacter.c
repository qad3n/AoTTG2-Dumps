// Type: Characters.BaseCharacter
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/Characters/BaseCharacter.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/BaseCharacter.cs
// --------------------------------

// Characters.BaseCharacter.<FadeSoundOverTime>d__129$$.ctor
// il2cpp: void Characters_BaseCharacter__FadeSoundOverTime_d__129___ctor (Characters_BaseCharacter__FadeSoundOverTime_d__129_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5bb5a90

void Characters_BaseCharacter__FadeSoundOverTime_d__129___ctor
               (Characters_BaseCharacter__FadeSoundOverTime_d__129_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Characters.BaseCharacter.<FadeSoundOverTime>d__129$$System.IDisposable.Dispose
// il2cpp: void Characters_BaseCharacter__FadeSoundOverTime_d__129__System_IDisposable_Dispose (Characters_BaseCharacter__FadeSoundOverTime_d__129_o* __this, const MethodInfo* method);
// 0x5bb9be0

void Characters_BaseCharacter__FadeSoundOverTime_d__129__System_IDisposable_Dispose
               (Characters_BaseCharacter__FadeSoundOverTime_d__129_o *__this,MethodInfo *method)

{
  return;
}


// Characters.BaseCharacter.<FadeSoundOverTime>d__129$$MoveNext
// il2cpp: bool Characters_BaseCharacter__FadeSoundOverTime_d__129__MoveNext (Characters_BaseCharacter__FadeSoundOverTime_d__129_o* __this, const MethodInfo* method);
// 0x5bb9bf0

bool Characters_BaseCharacter__FadeSoundOverTime_d__129__MoveNext
               (Characters_BaseCharacter__FadeSoundOverTime_d__129_o *__this,MethodInfo *method)

{
  int iVar1;
  Characters_BaseCharacter_o *pCVar2;
  UnityEngine_AudioSource_o *pUVar3;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (Il2CppMethodInitialized_07547516 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_AudioSource_Coroutine_Remove);
    Il2CppMethodInitialized_07547516 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  pCVar2 = (__this->fields).__4__this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    fVar4 = (__this->fields)._elapsed_5__3;
    fVar5 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar5 = fVar5 + fVar4;
    (__this->fields)._elapsed_5__3 = fVar5;
    pUVar3 = (__this->fields).source;
    if (pUVar3 == (UnityEngine_AudioSource_o *)0x0) goto label_05bb9d2b;
    fVar4 = (__this->fields)._startVolume_5__2;
    fVar5 = fVar5 / (__this->fields).time;
    fVar6 = 1.0;
    if (fVar5 <= 1.0) {
      fVar6 = fVar5;
    }
    UnityEngine_AudioSource__set_volume
              (pUVar3,(float)(-(uint)(0.0 <= fVar5) & (uint)fVar6) * ((__this->fields).volume - fVar4) + fVar4
               ,(MethodInfo *)0x0);
    if ((__this->fields)._elapsed_5__3 < (__this->fields).time) goto label_05bb9d07;
  }
  else {
    if (iVar1 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    pUVar3 = (__this->fields).source;
    if (pUVar3 == (UnityEngine_AudioSource_o *)0x0) goto label_05bb9d2b;
    fVar4 = UnityEngine_AudioSource__get_volume(pUVar3,(MethodInfo *)0x0);
    (__this->fields)._startVolume_5__2 = fVar4;
    (__this->fields)._elapsed_5__3 = 0.0;
    if (0.0 < (__this->fields).time) {
label_05bb9d07:
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
      (__this->fields).__1__state = 1;
      return true;
    }
  }
  if ((pCVar2 != (Characters_BaseCharacter_o *)0x0) &&
     (__this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar2->fields)._soundFades,
     __this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    System_Collections_Generic_Dictionary_object__object___Remove
              (__this_00,(Il2CppObject *)(__this->fields).source,
               (MethodInfo_4AAED10 *)
               MethodInfo_System_Collections_Generic_Dictionary_AudioSource_Coroutine_Remove);
    return false;
  }
label_05bb9d2b:
  ThrowNullReferenceException();
}


// Characters.BaseCharacter.<FadeSoundOverTime>d__129$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Characters_BaseCharacter__FadeSoundOverTime_d__129__System_Collections_Generic_IEnumerator_System_Object__get_Current (Characters_BaseCharacter__FadeSoundOverTime_d__129_o* __this, const MethodInfo* method);
// 0x5bb9d30

Il2CppObject *
Characters_BaseCharacter__FadeSoundOverTime_d__129__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Characters_BaseCharacter__FadeSoundOverTime_d__129_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseCharacter.<FadeSoundOverTime>d__129$$System.Collections.IEnumerator.Reset
// il2cpp: void Characters_BaseCharacter__FadeSoundOverTime_d__129__System_Collections_IEnumerator_Reset (Characters_BaseCharacter__FadeSoundOverTime_d__129_o* __this, const MethodInfo* method);
// 0x5bb9d40

void Characters_BaseCharacter__FadeSoundOverTime_d__129__System_Collections_IEnumerator_Reset
               (Characters_BaseCharacter__FadeSoundOverTime_d__129_o *__this,MethodInfo *method)

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
                  MethodInfo_Characters_BaseCharacter_FadeSoundOverTime_d__129_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Characters.BaseCharacter.<FadeSoundOverTime>d__129$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Characters_BaseCharacter__FadeSoundOverTime_d__129__System_Collections_IEnumerator_get_Current (Characters_BaseCharacter__FadeSoundOverTime_d__129_o* __this, const MethodInfo* method);
// 0x5bb9d80

Il2CppObject *
Characters_BaseCharacter__FadeSoundOverTime_d__129__System_Collections_IEnumerator_get_Current
          (Characters_BaseCharacter__FadeSoundOverTime_d__129_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseCharacter.<RevealAndRemove>d__81$$.ctor
// il2cpp: void Characters_BaseCharacter__RevealAndRemove_d__81___ctor (Characters_BaseCharacter__RevealAndRemove_d__81_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5bb33b0

void Characters_BaseCharacter__RevealAndRemove_d__81___ctor
               (Characters_BaseCharacter__RevealAndRemove_d__81_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Characters.BaseCharacter.<RevealAndRemove>d__81$$System.IDisposable.Dispose
// il2cpp: void Characters_BaseCharacter__RevealAndRemove_d__81__System_IDisposable_Dispose (Characters_BaseCharacter__RevealAndRemove_d__81_o* __this, const MethodInfo* method);
// 0x5bb9d90

void Characters_BaseCharacter__RevealAndRemove_d__81__System_IDisposable_Dispose
               (Characters_BaseCharacter__RevealAndRemove_d__81_o *__this,MethodInfo *method)

{
  return;
}


// Characters.BaseCharacter.<RevealAndRemove>d__81$$MoveNext
// il2cpp: bool Characters_BaseCharacter__RevealAndRemove_d__81__MoveNext (Characters_BaseCharacter__RevealAndRemove_d__81_o* __this, const MethodInfo* method);
// 0x5bb9da0

bool Characters_BaseCharacter__RevealAndRemove_d__81__MoveNext
               (Characters_BaseCharacter__RevealAndRemove_d__81_o *__this,MethodInfo *method)

{
  float fVar1;
  int iVar2;
  Characters_BaseCharacter_o *__this_00;
  Outline_o *pOVar3;
  bool bVar4;
  UnityEngine_WaitForSeconds_o *pUVar5;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  bool bVar6;
  UnityEngine_Color_o color;
  
  if (Il2CppMethodInitialized_07547517 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    Il2CppMethodInitialized_07547517 = '\x01';
    in_RDX = extraout_RDX;
  }
  iVar2 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar2 == 2) {
    (__this->fields).__1__state = -1;
    if (__this_00 == (Characters_BaseCharacter_o *)0x0) {
label_05bb9f2b:
      ThrowNullReferenceException();
    }
    if (Il2CppMethodInitialized_075474dd == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_075474dd = '\x01';
    }
    pOVar3 = (__this_00->fields).OutlineComponent;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar6 = false;
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pOVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      pOVar3 = (__this_00->fields).OutlineComponent;
      if (pOVar3 == (Outline_o *)0x0) goto label_05bb9f2b;
      bVar6 = false;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pOVar3,false,(MethodInfo *)0x0);
    }
  }
  else if (iVar2 == 1) {
    (__this->fields).__1__state = -1;
    if (__this_00 == (Characters_BaseCharacter_o *)0x0) goto label_05bb9f2b;
    color.fields.b = 1.0;
    color.fields.a = 1.0;
    color.fields.r = 1.0;
    color.fields.g = 1.0;
    Characters_BaseCharacter__AddOutlineWithColor(__this_00,color,0,in_RDX);
    fVar1 = (__this->fields).seconds;
    pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(pUVar5,fVar1,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)pUVar5;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 2;
    bVar6 = true;
  }
  else if (iVar2 == 0) {
    (__this->fields).__1__state = -1;
    fVar1 = (__this->fields).startDelay;
    pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(pUVar5,fVar1,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)pUVar5;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 1;
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  return bVar6;
}


// Characters.BaseCharacter.<RevealAndRemove>d__81$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Characters_BaseCharacter__RevealAndRemove_d__81__System_Collections_Generic_IEnumerator_System_Object__get_Current (Characters_BaseCharacter__RevealAndRemove_d__81_o* __this, const MethodInfo* method);
// 0x5bb9f30

Il2CppObject *
Characters_BaseCharacter__RevealAndRemove_d__81__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Characters_BaseCharacter__RevealAndRemove_d__81_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseCharacter.<RevealAndRemove>d__81$$System.Collections.IEnumerator.Reset
// il2cpp: void Characters_BaseCharacter__RevealAndRemove_d__81__System_Collections_IEnumerator_Reset (Characters_BaseCharacter__RevealAndRemove_d__81_o* __this, const MethodInfo* method);
// 0x5bb9f40

void Characters_BaseCharacter__RevealAndRemove_d__81__System_Collections_IEnumerator_Reset
               (Characters_BaseCharacter__RevealAndRemove_d__81_o *__this,MethodInfo *method)

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
                  MethodInfo_Characters_BaseCharacter_RevealAndRemove_d__81_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Characters.BaseCharacter.<RevealAndRemove>d__81$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Characters_BaseCharacter__RevealAndRemove_d__81__System_Collections_IEnumerator_get_Current (Characters_BaseCharacter__RevealAndRemove_d__81_o* __this, const MethodInfo* method);
// 0x5bb9f80

Il2CppObject *
Characters_BaseCharacter__RevealAndRemove_d__81__System_Collections_IEnumerator_get_Current
          (Characters_BaseCharacter__RevealAndRemove_d__81_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseCharacter.<WaitAndDie>d__103$$.ctor
// il2cpp: void Characters_BaseCharacter__WaitAndDie_d__103___ctor (Characters_BaseCharacter__WaitAndDie_d__103_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5bb4090

void Characters_BaseCharacter__WaitAndDie_d__103___ctor
               (Characters_BaseCharacter__WaitAndDie_d__103_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Characters.BaseCharacter.<WaitAndDie>d__103$$System.IDisposable.Dispose
// il2cpp: void Characters_BaseCharacter__WaitAndDie_d__103__System_IDisposable_Dispose (Characters_BaseCharacter__WaitAndDie_d__103_o* __this, const MethodInfo* method);
// 0x5bb9f90

void Characters_BaseCharacter__WaitAndDie_d__103__System_IDisposable_Dispose
               (Characters_BaseCharacter__WaitAndDie_d__103_o *__this,MethodInfo *method)

{
  return;
}


// Characters.BaseCharacter.<WaitAndDie>d__103$$MoveNext
// il2cpp: bool Characters_BaseCharacter__WaitAndDie_d__103__MoveNext (Characters_BaseCharacter__WaitAndDie_d__103_o* __this, const MethodInfo* method);
// 0x5bb9fa0

bool Characters_BaseCharacter__WaitAndDie_d__103__MoveNext
               (Characters_BaseCharacter__WaitAndDie_d__103_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *__this_00;
  UnityEngine_GameObject_o *targetGo;
  
  if (Il2CppMethodInitialized_07547518 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_07547518 = '\x01';
  }
  if ((__this->fields).__1__state != 0) {
    return false;
  }
  __this_00 = (__this->fields).__4__this;
  (__this->fields).__1__state = -1;
  if (__this_00 == (Characters_BaseCharacter_o *)0x0) {
    ThrowNullReferenceException();
  }
  targetGo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  Photon_Pun_PhotonNetwork__Destroy_56d7e70(targetGo,(MethodInfo *)0x0);
  return false;
}


// Characters.BaseCharacter.<WaitAndDie>d__103$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Characters_BaseCharacter__WaitAndDie_d__103__System_Collections_Generic_IEnumerator_System_Object__get_Current (Characters_BaseCharacter__WaitAndDie_d__103_o* __this, const MethodInfo* method);
// 0x5bba010

Il2CppObject *
Characters_BaseCharacter__WaitAndDie_d__103__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Characters_BaseCharacter__WaitAndDie_d__103_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseCharacter.<WaitAndDie>d__103$$System.Collections.IEnumerator.Reset
// il2cpp: void Characters_BaseCharacter__WaitAndDie_d__103__System_Collections_IEnumerator_Reset (Characters_BaseCharacter__WaitAndDie_d__103_o* __this, const MethodInfo* method);
// 0x5bba020

void Characters_BaseCharacter__WaitAndDie_d__103__System_Collections_IEnumerator_Reset
               (Characters_BaseCharacter__WaitAndDie_d__103_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_Characters_BaseCharacter_WaitAndDie_d__103_System_Collections_IEnumerator_Reset)
  ;
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Characters.BaseCharacter.<WaitAndDie>d__103$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Characters_BaseCharacter__WaitAndDie_d__103__System_Collections_IEnumerator_get_Current (Characters_BaseCharacter__WaitAndDie_d__103_o* __this, const MethodInfo* method);
// 0x5bba060

Il2CppObject *
Characters_BaseCharacter__WaitAndDie_d__103__System_Collections_IEnumerator_get_Current
          (Characters_BaseCharacter__WaitAndDie_d__103_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseCharacter.<WaitAndNotifyReloaded>d__152$$.ctor
// il2cpp: void Characters_BaseCharacter__WaitAndNotifyReloaded_d__152___ctor (Characters_BaseCharacter__WaitAndNotifyReloaded_d__152_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5bb8790

void Characters_BaseCharacter__WaitAndNotifyReloaded_d__152___ctor
               (Characters_BaseCharacter__WaitAndNotifyReloaded_d__152_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Characters.BaseCharacter.<WaitAndNotifyReloaded>d__152$$System.IDisposable.Dispose
// il2cpp: void Characters_BaseCharacter__WaitAndNotifyReloaded_d__152__System_IDisposable_Dispose (Characters_BaseCharacter__WaitAndNotifyReloaded_d__152_o* __this, const MethodInfo* method);
// 0x5bba070

void Characters_BaseCharacter__WaitAndNotifyReloaded_d__152__System_IDisposable_Dispose
               (Characters_BaseCharacter__WaitAndNotifyReloaded_d__152_o *__this,MethodInfo *method)

{
  return;
}


// Characters.BaseCharacter.<WaitAndNotifyReloaded>d__152$$MoveNext
// il2cpp: bool Characters_BaseCharacter__WaitAndNotifyReloaded_d__152__MoveNext (Characters_BaseCharacter__WaitAndNotifyReloaded_d__152_o* __this, const MethodInfo* method);
// 0x5bba080

bool Characters_BaseCharacter__WaitAndNotifyReloaded_d__152__MoveNext
               (Characters_BaseCharacter__WaitAndNotifyReloaded_d__152_o *__this,MethodInfo *method)

{
  uint uVar1;
  Characters_BaseCharacter_o *character;
  CustomLogic_CustomLogicEvaluator_o *pCVar2;
  Il2CppObject *pIVar3;
  bool bVar4;
  
  if (Il2CppMethodInitialized_07547519 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForEndOfFrame);
    Il2CppMethodInitialized_07547519 = '\x01';
  }
  uVar1 = (__this->fields).__1__state;
  bVar4 = false;
  if (uVar1 < 2) {
    (__this->fields).__1__state = -1;
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    pCVar2 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    pIVar3 = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar3,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    if (pCVar2 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      (__this->fields).__1__state = 1;
      bVar4 = true;
    }
    else {
      (__this->fields).__1__state = 2;
      bVar4 = true;
    }
  }
  else if (uVar1 == 2) {
    (__this->fields).__1__state = -1;
    pIVar3 = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar3,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 3;
    bVar4 = true;
  }
  else if (uVar1 == 3) {
    character = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    }
    else {
      pCVar2 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    }
    if (pCVar2 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      bVar4 = false;
    }
    else {
      if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
        pCVar2 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
        if (pCVar2 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          ThrowNullReferenceException();
        }
      }
      bVar4 = false;
      CustomLogic_CustomLogicEvaluator__OnCharacterReloaded(pCVar2,character,(MethodInfo *)0x0);
    }
  }
  return bVar4;
}


// Characters.BaseCharacter.<WaitAndNotifyReloaded>d__152$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Characters_BaseCharacter__WaitAndNotifyReloaded_d__152__System_Collections_Generic_IEnumerator_System_Object__get_Current (Characters_BaseCharacter__WaitAndNotifyReloaded_d__152_o* __this, const MethodInfo* method);
// 0x5bba220

Il2CppObject *
Characters_BaseCharacter__WaitAndNotifyReloaded_d__152__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Characters_BaseCharacter__WaitAndNotifyReloaded_d__152_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseCharacter.<WaitAndNotifyReloaded>d__152$$System.Collections.IEnumerator.Reset
// il2cpp: void Characters_BaseCharacter__WaitAndNotifyReloaded_d__152__System_Collections_IEnumerator_Reset (Characters_BaseCharacter__WaitAndNotifyReloaded_d__152_o* __this, const MethodInfo* method);
// 0x5bba230

void Characters_BaseCharacter__WaitAndNotifyReloaded_d__152__System_Collections_IEnumerator_Reset
               (Characters_BaseCharacter__WaitAndNotifyReloaded_d__152_o *__this,MethodInfo *method)

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
                  MethodInfo_Characters_BaseCharacter_WaitAndNotifyReloaded_d__152_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Characters.BaseCharacter.<WaitAndNotifyReloaded>d__152$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Characters_BaseCharacter__WaitAndNotifyReloaded_d__152__System_Collections_IEnumerator_get_Current (Characters_BaseCharacter__WaitAndNotifyReloaded_d__152_o* __this, const MethodInfo* method);
// 0x5bba270

Il2CppObject *
Characters_BaseCharacter__WaitAndNotifyReloaded_d__152__System_Collections_IEnumerator_get_Current
          (Characters_BaseCharacter__WaitAndNotifyReloaded_d__152_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseCharacter.<WaitAndNotifySpawn>d__151$$.ctor
// il2cpp: void Characters_BaseCharacter__WaitAndNotifySpawn_d__151___ctor (Characters_BaseCharacter__WaitAndNotifySpawn_d__151_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5bb8700

void Characters_BaseCharacter__WaitAndNotifySpawn_d__151___ctor
               (Characters_BaseCharacter__WaitAndNotifySpawn_d__151_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Characters.BaseCharacter.<WaitAndNotifySpawn>d__151$$System.IDisposable.Dispose
// il2cpp: void Characters_BaseCharacter__WaitAndNotifySpawn_d__151__System_IDisposable_Dispose (Characters_BaseCharacter__WaitAndNotifySpawn_d__151_o* __this, const MethodInfo* method);
// 0x5bba280

void Characters_BaseCharacter__WaitAndNotifySpawn_d__151__System_IDisposable_Dispose
               (Characters_BaseCharacter__WaitAndNotifySpawn_d__151_o *__this,MethodInfo *method)

{
  return;
}


// Characters.BaseCharacter.<WaitAndNotifySpawn>d__151$$MoveNext
// il2cpp: bool Characters_BaseCharacter__WaitAndNotifySpawn_d__151__MoveNext (Characters_BaseCharacter__WaitAndNotifySpawn_d__151_o* __this, const MethodInfo* method);
// 0x5bba290
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5bba311: jmp 0x5bba42b

bool Characters_BaseCharacter__WaitAndNotifySpawn_d__151__MoveNext
               (Characters_BaseCharacter__WaitAndNotifySpawn_d__151_o *__this,MethodInfo *method)

{
  uint uVar1;
  Characters_BaseCharacter_o *character;
  Utility_BaseComponentCache_o *pUVar2;
  Photon_Pun_PhotonView_o *pPVar3;
  Il2CppObject *pIVar4;
  CustomLogic_CustomLogicEvaluator_o *pCVar5;
  bool bVar6;
  
  if (Il2CppMethodInitialized_0754751a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForEndOfFrame);
    Il2CppMethodInitialized_0754751a = '\x01';
  }
  uVar1 = (__this->fields).__1__state;
  if (uVar1 < 2) {
    (__this->fields).__1__state = -1;
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    pCVar5 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    pIVar4 = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar4,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    if (pCVar5 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      (__this->fields).__1__state = 1;
      bVar6 = true;
    }
    else {
      (__this->fields).__1__state = 2;
      bVar6 = true;
    }
  }
  else {
    if (uVar1 == 2) {
      (__this->fields).__1__state = -1;
      pIVar4 = (Il2CppObject *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
      UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar4,(MethodInfo *)0x0);
      (__this->fields).__2__current = pIVar4;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
      (__this->fields).__1__state = 3;
      return true;
    }
    if (uVar1 != 3) {
      return false;
    }
    character = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      pCVar5 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    }
    else {
      pCVar5 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    }
    if (pCVar5 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
        pCVar5 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
        if (pCVar5 == (CustomLogic_CustomLogicEvaluator_o *)0x0) goto label_05bba483;
      }
      CustomLogic_CustomLogicEvaluator__OnCharacterSpawn(pCVar5,character,(MethodInfo *)0x0);
      if (character == (Characters_BaseCharacter_o *)0x0) {
label_05bba483:
        ThrowNullReferenceException();
      }
      if ((character->fields).AI == false) {
        if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
        }
        pUVar2 = (character->fields).Cache;
        if (((pUVar2 != (Utility_BaseComponentCache_o *)0x0) &&
            (pPVar3 = (pUVar2->fields).PhotonView, pPVar3 != (Photon_Pun_PhotonView_o *)0x0)) &&
           (pCVar5 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator,
           pCVar5 != (CustomLogic_CustomLogicEvaluator_o *)0x0)) {
          CustomLogic_CustomLogicEvaluator__OnPlayerSpawn
                    (pCVar5,(pPVar3->fields)._Owner_k__BackingField,character,(MethodInfo *)0x0);
          return false;
        }
        goto label_05bba483;
      }
    }
    bVar6 = false;
  }
  return bVar6;
}


// Characters.BaseCharacter.<WaitAndNotifySpawn>d__151$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Characters_BaseCharacter__WaitAndNotifySpawn_d__151__System_Collections_Generic_IEnumerator_System_Object__get_Current (Characters_BaseCharacter__WaitAndNotifySpawn_d__151_o* __this, const MethodInfo* method);
// 0x5bba490

Il2CppObject *
Characters_BaseCharacter__WaitAndNotifySpawn_d__151__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Characters_BaseCharacter__WaitAndNotifySpawn_d__151_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseCharacter.<WaitAndNotifySpawn>d__151$$System.Collections.IEnumerator.Reset
// il2cpp: void Characters_BaseCharacter__WaitAndNotifySpawn_d__151__System_Collections_IEnumerator_Reset (Characters_BaseCharacter__WaitAndNotifySpawn_d__151_o* __this, const MethodInfo* method);
// 0x5bba4a0

void Characters_BaseCharacter__WaitAndNotifySpawn_d__151__System_Collections_IEnumerator_Reset
               (Characters_BaseCharacter__WaitAndNotifySpawn_d__151_o *__this,MethodInfo *method)

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
                  MethodInfo_Characters_BaseCharacter_WaitAndNotifySpawn_d__151_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Characters.BaseCharacter.<WaitAndNotifySpawn>d__151$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Characters_BaseCharacter__WaitAndNotifySpawn_d__151__System_Collections_IEnumerator_get_Current (Characters_BaseCharacter__WaitAndNotifySpawn_d__151_o* __this, const MethodInfo* method);
// 0x5bba4e0

Il2CppObject *
Characters_BaseCharacter__WaitAndNotifySpawn_d__151__System_Collections_IEnumerator_get_Current
          (Characters_BaseCharacter__WaitAndNotifySpawn_d__151_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseCharacter.<WaitAndPlaySound>d__124$$.ctor
// il2cpp: void Characters_BaseCharacter__WaitAndPlaySound_d__124___ctor (Characters_BaseCharacter__WaitAndPlaySound_d__124_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5bb5310

void Characters_BaseCharacter__WaitAndPlaySound_d__124___ctor
               (Characters_BaseCharacter__WaitAndPlaySound_d__124_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Characters.BaseCharacter.<WaitAndPlaySound>d__124$$System.IDisposable.Dispose
// il2cpp: void Characters_BaseCharacter__WaitAndPlaySound_d__124__System_IDisposable_Dispose (Characters_BaseCharacter__WaitAndPlaySound_d__124_o* __this, const MethodInfo* method);
// 0x5bba4f0

void Characters_BaseCharacter__WaitAndPlaySound_d__124__System_IDisposable_Dispose
               (Characters_BaseCharacter__WaitAndPlaySound_d__124_o *__this,MethodInfo *method)

{
  return;
}


// Characters.BaseCharacter.<WaitAndPlaySound>d__124$$MoveNext
// il2cpp: bool Characters_BaseCharacter__WaitAndPlaySound_d__124__MoveNext (Characters_BaseCharacter__WaitAndPlaySound_d__124_o* __this, const MethodInfo* method);
// 0x5bba500

bool Characters_BaseCharacter__WaitAndPlaySound_d__124__MoveNext
               (Characters_BaseCharacter__WaitAndPlaySound_d__124_o *__this,MethodInfo *method)

{
  float seconds;
  int iVar1;
  Characters_BaseCharacter_o *__this_00;
  UnityEngine_WaitForSeconds_o *__this_01;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (Il2CppMethodInitialized_0754751b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    Il2CppMethodInitialized_0754751b = '\x01';
    in_RDX = extraout_RDX;
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    seconds = (__this->fields).delay;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(__this_01,seconds,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_01;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 1;
  }
  else if (iVar1 == 1) {
    __this_00 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (__this_00 == (Characters_BaseCharacter_o *)0x0) {
      ThrowNullReferenceException();
    }
    Characters_BaseCharacter__PlaySound(__this_00,(__this->fields).sound,in_RDX);
  }
  return iVar1 == 0;
}


// Characters.BaseCharacter.<WaitAndPlaySound>d__124$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Characters_BaseCharacter__WaitAndPlaySound_d__124__System_Collections_Generic_IEnumerator_System_Object__get_Current (Characters_BaseCharacter__WaitAndPlaySound_d__124_o* __this, const MethodInfo* method);
// 0x5bba5b0

Il2CppObject *
Characters_BaseCharacter__WaitAndPlaySound_d__124__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Characters_BaseCharacter__WaitAndPlaySound_d__124_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseCharacter.<WaitAndPlaySound>d__124$$System.Collections.IEnumerator.Reset
// il2cpp: void Characters_BaseCharacter__WaitAndPlaySound_d__124__System_Collections_IEnumerator_Reset (Characters_BaseCharacter__WaitAndPlaySound_d__124_o* __this, const MethodInfo* method);
// 0x5bba5c0

void Characters_BaseCharacter__WaitAndPlaySound_d__124__System_Collections_IEnumerator_Reset
               (Characters_BaseCharacter__WaitAndPlaySound_d__124_o *__this,MethodInfo *method)

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
                  MethodInfo_Characters_BaseCharacter_WaitAndPlaySound_d__124_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Characters.BaseCharacter.<WaitAndPlaySound>d__124$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Characters_BaseCharacter__WaitAndPlaySound_d__124__System_Collections_IEnumerator_get_Current (Characters_BaseCharacter__WaitAndPlaySound_d__124_o* __this, const MethodInfo* method);
// 0x5bba600

Il2CppObject *
Characters_BaseCharacter__WaitAndPlaySound_d__124__System_Collections_IEnumerator_get_Current
          (Characters_BaseCharacter__WaitAndPlaySound_d__124_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseCharacter$$get_DefaultMaxHealth
// il2cpp: int32_t Characters_BaseCharacter__get_DefaultMaxHealth (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x5bb29d0

int32_t Characters_BaseCharacter__get_DefaultMaxHealth(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  return 1;
}


// Characters.BaseCharacter$$get_Gravity
// il2cpp: UnityEngine_Vector3_o Characters_BaseCharacter__get_Gravity (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x5bb29e0

UnityEngine_Vector3_o
Characters_BaseCharacter__get_Gravity(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_Vector3_StaticFields *pUVar3;
  UnityEngine_Vector3_o UVar4;
  
  if (Il2CppMethodInitialized_075450a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_075450a5 = '\x01';
  }
  pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar1 = (pUVar3->downVector).fields.x;
  uVar2 = (pUVar3->downVector).fields.y;
  UVar4.fields.x = (float)uVar1 * 20.0;
  UVar4.fields.y = (float)uVar2 * 20.0;
  UVar4.fields.z = (pUVar3->downVector).fields.z * 20.0;
  return (UnityEngine_Vector3_o)UVar4.fields;
}


// Characters.BaseCharacter$$get_EmoteActions
// il2cpp: System_Collections_Generic_List_string__o* Characters_BaseCharacter__get_EmoteActions (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x5bb2a30

System_Collections_Generic_List_string__o *
Characters_BaseCharacter__get_EmoteActions(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  
  if (Il2CppMethodInitialized_075474d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    Il2CppMethodInitialized_075474d4 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  return __this_00;
}


// Characters.BaseCharacter$$get_MaxFootstepDistance
// il2cpp: float Characters_BaseCharacter__get_MaxFootstepDistance (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x5bb2a90

float Characters_BaseCharacter__get_MaxFootstepDistance(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  return 200.0;
}


// Characters.BaseCharacter$$get_MaxSoundDistance
// il2cpp: float Characters_BaseCharacter__get_MaxSoundDistance (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x5bb2aa0

float Characters_BaseCharacter__get_MaxSoundDistance(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  return 500.0;
}


// Characters.BaseCharacter$$get_LODQualityMediumDistance
// il2cpp: float Characters_BaseCharacter__get_LODQualityMediumDistance (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x5bb2ab0

float Characters_BaseCharacter__get_LODQualityMediumDistance
                (Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  return 500.0;
}


// Characters.BaseCharacter$$get_LODQualityLowDistance
// il2cpp: float Characters_BaseCharacter__get_LODQualityLowDistance (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x5bb2ac0

float Characters_BaseCharacter__get_LODQualityLowDistance
                (Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  return 1000.0;
}


// Characters.BaseCharacter$$get_CullShadowsDistance
// il2cpp: float Characters_BaseCharacter__get_CullShadowsDistance (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x5bb2ad0

float Characters_BaseCharacter__get_CullShadowsDistance(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  return 1000.0;
}


// Characters.BaseCharacter$$get_CullRendererDistance
// il2cpp: float Characters_BaseCharacter__get_CullRendererDistance (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x5bb2ae0

float Characters_BaseCharacter__get_CullRendererDistance
                (Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  return 5000.0;
}


// Characters.BaseCharacter$$get_CullEffectsDistance
// il2cpp: float Characters_BaseCharacter__get_CullEffectsDistance (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x5bb2af0

float Characters_BaseCharacter__get_CullEffectsDistance(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  return 1000.0;
}


// Characters.BaseCharacter$$get_Name
// il2cpp: System_String_o* Characters_BaseCharacter__get_Name (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x5bb2b00

System_String_o * Characters_BaseCharacter__get_Name(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  return (__this->fields).RichTextName;
}


// Characters.BaseCharacter$$set_Name
// il2cpp: void Characters_BaseCharacter__set_Name (Characters_BaseCharacter_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5bb2b10

void Characters_BaseCharacter__set_Name
               (Characters_BaseCharacter_o *__this,System_String_o *value,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_075474d5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    Il2CppMethodInitialized_075474d5 = '\x01';
  }
  (__this->fields).RichTextName = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields).RichTextName);
  pSVar1 = (__this->fields).RichTextName;
  if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  pSVar1 = MiscExtensions__StripColor(pSVar1,(MethodInfo *)0x0);
  (__this->fields).VisibleName = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).VisibleName);
  return;
}


// Characters.BaseCharacter$$get_GroundMask
// il2cpp: UnityEngine_LayerMask_o Characters_BaseCharacter__get_GroundMask (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x5bb2b90

UnityEngine_LayerMask_o
Characters_BaseCharacter__get_GroundMask(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  return (UnityEngine_LayerMask_Fields)
         (UnityEngine_LayerMask_Fields)(__this->fields).GroundMaskLayers.fields.m_Mask;
}


// Characters.BaseCharacter$$get_GroundDistance
// il2cpp: float Characters_BaseCharacter__get_GroundDistance (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x5bb2ba0

float Characters_BaseCharacter__get_GroundDistance(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  return 0.3;
}


// Characters.BaseCharacter$$add_OnPlayerPropertiesChanged
// il2cpp: void Characters_BaseCharacter__add_OnPlayerPropertiesChanged (Characters_BaseCharacter_o* __this, System_Action_Hashtable__o* value, const MethodInfo* method);
// 0x5bb2bb0

void Characters_BaseCharacter__add_OnPlayerPropertiesChanged
               (Characters_BaseCharacter_o *__this,System_Action_Hashtable__o *value,MethodInfo *method)

{
  System_Action_Hashtable__c *pSVar1;
  System_Action_Hashtable__o *pSVar2;
  System_Delegate_o *obj;
  Il2CppObject *value_00;
  System_Action_Hashtable__o *a;
  bool bVar3;
  
  if (Il2CppMethodInitialized_075474d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_Hashtable);
    Il2CppMethodInitialized_075474d6 = '\x01';
  }
  a = (__this->fields).OnPlayerPropertiesChanged;
  do {
    obj = System_Delegate__Combine((System_Delegate_o *)a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    pSVar1 = TypeInfo_System_Action_Hashtable;
    value_00 = (Il2CppObject *)0x0;
    if (obj != (System_Delegate_o *)0x0) {
      value_00 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_System_Action_Hashtable);
      if (value_00 == (Il2CppObject *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(obj,pSVar1);
      }
    }
    pSVar2 = il2cpp_codegen_interlocked_compare_exchange_ref
                       (&(__this->fields).OnPlayerPropertiesChanged,value_00,a);
    bVar3 = pSVar2 != a;
    a = pSVar2;
  } while (bVar3);
  return;
}


// Characters.BaseCharacter$$remove_OnPlayerPropertiesChanged
// il2cpp: void Characters_BaseCharacter__remove_OnPlayerPropertiesChanged (Characters_BaseCharacter_o* __this, System_Action_Hashtable__o* value, const MethodInfo* method);
// 0x5bb2c60

void Characters_BaseCharacter__remove_OnPlayerPropertiesChanged
               (Characters_BaseCharacter_o *__this,System_Action_Hashtable__o *value,MethodInfo *method)

{
  System_Action_Hashtable__c *pSVar1;
  System_Action_Hashtable__o *pSVar2;
  System_Delegate_o *obj;
  Il2CppObject *value_00;
  System_Action_Hashtable__o *source;
  bool bVar3;
  
  if (Il2CppMethodInitialized_075474d7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_Hashtable);
    Il2CppMethodInitialized_075474d7 = '\x01';
  }
  source = (__this->fields).OnPlayerPropertiesChanged;
  do {
    obj = System_Delegate__Remove((System_Delegate_o *)source,(System_Delegate_o *)value,(MethodInfo *)0x0);
    pSVar1 = TypeInfo_System_Action_Hashtable;
    value_00 = (Il2CppObject *)0x0;
    if (obj != (System_Delegate_o *)0x0) {
      value_00 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_System_Action_Hashtable);
      if (value_00 == (Il2CppObject *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(obj,pSVar1);
      }
    }
    pSVar2 = il2cpp_codegen_interlocked_compare_exchange_ref
                       (&(__this->fields).OnPlayerPropertiesChanged,value_00,source);
    bVar3 = pSVar2 != source;
    source = pSVar2;
  } while (bVar3);
  return;
}


// Characters.BaseCharacter$$AlwaysAnimate
// il2cpp: bool Characters_BaseCharacter__AlwaysAnimate (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x5bb2d10

bool Characters_BaseCharacter__AlwaysAnimate(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  return false;
}


// Characters.BaseCharacter$$RefreshRenderers
// il2cpp: void Characters_BaseCharacter__RefreshRenderers (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x5bb2d20

void Characters_BaseCharacter__RefreshRenderers(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  Characters_AnimationHandler_o *__this_00;
  
  __this_00 = (__this->fields).Animation;
  if (__this_00 == (Characters_AnimationHandler_o *)0x0) {
    return;
  }
  Characters_AnimationHandler__RefreshRenderers(__this_00,method);
  return;
}


// Characters.BaseCharacter$$ToggleParticles
// il2cpp: void Characters_BaseCharacter__ToggleParticles (Characters_BaseCharacter_o* __this, UnityEngine_ParticleSystem_o* system, bool toggle, const MethodInfo* method);
// 0x5bb2d40

void Characters_BaseCharacter__ToggleParticles
               (Characters_BaseCharacter_o *__this,UnityEngine_ParticleSystem_o *system,bool toggle,
               MethodInfo *method)

{
  bool bVar1;
  
  if (system == (UnityEngine_ParticleSystem_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = UnityEngine_ParticleSystem__get_isEmitting(system,(MethodInfo *)0x0);
  if (bVar1 == toggle) {
    return;
  }
  if (toggle) {
    UnityEngine_ParticleSystem__Play_69c2630(system,(MethodInfo *)0x0);
    return;
  }
  UnityEngine_ParticleSystem__Stop_69c2810(system,(MethodInfo *)0x0);
  return;
}


// Characters.BaseCharacter$$OnDistanceUpdate
// il2cpp: void Characters_BaseCharacter__OnDistanceUpdate (Characters_BaseCharacter_o* __this, float distance, float soundDistance, const MethodInfo* method);
// 0x5bb2d90

void Characters_BaseCharacter__OnDistanceUpdate
               (Characters_BaseCharacter_o *__this,float distance,float soundDistance,MethodInfo *method)

{
  Characters_AnimationHandler_o *__this_00;
  MethodInfo *method_00;
  float fVar1;
  
  fVar1 = (*(__this->klass->vtable)._60_get_MaxFootstepDistance.methodPtr)
                    (__this,(__this->klass->vtable)._60_get_MaxFootstepDistance.method);
  (__this->fields).FootstepsEnabled = soundDistance < fVar1;
  fVar1 = (*(__this->klass->vtable)._61_get_MaxSoundDistance.methodPtr)
                    (__this,(__this->klass->vtable)._61_get_MaxSoundDistance.method);
  (__this->fields).SoundsEnabled = soundDistance < fVar1;
  method_00 = (__this->klass->vtable)._66_get_CullEffectsDistance.method;
  fVar1 = (*(__this->klass->vtable)._66_get_CullEffectsDistance.methodPtr)(__this,method_00);
  (__this->fields).EffectsEnabled = distance < fVar1;
  __this_00 = (__this->fields).Animation;
  if (__this_00 == (Characters_AnimationHandler_o *)0x0) {
    ThrowNullReferenceException();
  }
  Characters_AnimationHandler__OnDistanceUpdate(__this_00,distance,method_00);
  return;
}


// Characters.BaseCharacter$$OnPlayerPropertiesUpdate
// il2cpp: void Characters_BaseCharacter__OnPlayerPropertiesUpdate (Characters_BaseCharacter_o* __this, Photon_Realtime_Player_o* targetPlayer, ExitGames_Client_Photon_Hashtable_o* changedProps, const MethodInfo* method);
// 0x5bb2e20

void Characters_BaseCharacter__OnPlayerPropertiesUpdate
               (Characters_BaseCharacter_o *__this,Photon_Realtime_Player_o *targetPlayer,
               ExitGames_Client_Photon_Hashtable_o *changedProps,MethodInfo *method)

{
  System_Action_Hashtable__o *pSVar1;
  code *vtableDispatch;
  Photon_Pun_PhotonView_o *pPVar2;
  
  pPVar2 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar2 == (Photon_Pun_PhotonView_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (((pPVar2->fields)._Owner_k__BackingField == targetPlayer) &&
     (pSVar1 = (__this->fields).OnPlayerPropertiesChanged, pSVar1 != (System_Action_Hashtable__o *)0x0)) {
    vtableDispatch = (code *)(pSVar1->fields).invoke_impl;
    (*vtableDispatch)
              ((pSVar1->fields).method_code,changedProps,(pSVar1->fields).method,vtableDispatch);
    return;
  }
  return;
}


// Characters.BaseCharacter$$SetKinematic
// il2cpp: void Characters_BaseCharacter__SetKinematic (Characters_BaseCharacter_o* __this, bool kinematic, float forTime, const MethodInfo* method);
// 0x5bb2e70

void Characters_BaseCharacter__SetKinematic
               (Characters_BaseCharacter_o *__this,bool kinematic,float forTime,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  UnityEngine_Rigidbody_o *__this_00;
  
  pUVar1 = (__this->fields).Cache;
  if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
    __this_00 = (pUVar1->fields).Rigidbody;
    if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
      UnityEngine_Rigidbody__set_isKinematic(__this_00,kinematic,(MethodInfo *)0x0);
      (__this->fields)._disableKinematicTimeLeft = forTime;
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$GetVelocity
// il2cpp: UnityEngine_Vector3_o Characters_BaseCharacter__GetVelocity (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x5bb2ec0

UnityEngine_Vector3_o
Characters_BaseCharacter__GetVelocity(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  Characters_BaseMovementSync_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  UnityEngine_Rigidbody_o *__this_00;
  bool bVar3;
  UnityEngine_Vector3_Fields UVar4;
  
  if (Il2CppMethodInitialized_075474d8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075474d8 = '\x01';
  }
  bVar3 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method);
  if (!bVar3) {
    pCVar1 = (__this->fields).MovementSync;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      pCVar1 = (__this->fields).MovementSync;
      if (pCVar1 != (Characters_BaseMovementSync_o *)0x0) {
        return (UnityEngine_Vector3_o)(pCVar1->fields)._correctVelocity.fields;
      }
      goto label_05bb2f6b;
    }
  }
  pUVar2 = (__this->fields).Cache;
  if ((pUVar2 != (Utility_BaseComponentCache_o *)0x0) &&
     (__this_00 = (pUVar2->fields).Rigidbody, __this_00 != (UnityEngine_Rigidbody_o *)0x0)) {
    UVar4 = (UnityEngine_Vector3_Fields)UnityEngine_Rigidbody__get_linearVelocity(__this_00,(MethodInfo *)0x0)
    ;
    return (UnityEngine_Vector3_o)UVar4;
  }
label_05bb2f6b:
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$Reveal
// il2cpp: void Characters_BaseCharacter__Reveal (Characters_BaseCharacter_o* __this, float startDelay, float activeTime, const MethodInfo* method);
// 0x5bb2f70

void Characters_BaseCharacter__Reveal
               (Characters_BaseCharacter_o *__this,float startDelay,float activeTime,MethodInfo *method)

{
  Characters_BaseCharacter__RevealAndRemove_d__81_o *__this_00;
  
  if (Il2CppMethodInitialized_075474de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseCharacter_RevealAndRemove_d__81);
    Il2CppMethodInitialized_075474de = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Characters_BaseCharacter_RevealAndRemove_d__81);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).startDelay = startDelay;
  (__this_00->fields).seconds = activeTime;
  UnityEngine_MonoBehaviour__StartCoroutine_691c390
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
             (MethodInfo *)0x0);
  return;
}


// Characters.BaseCharacter$$AddOutline
// il2cpp: void Characters_BaseCharacter__AddOutline (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x5bb3090

void Characters_BaseCharacter__AddOutline(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  UnityEngine_Color_o color;
  
  color.fields.b = 1.0;
  color.fields.a = 1.0;
  color.fields.r = 1.0;
  color.fields.g = 1.0;
  Characters_BaseCharacter__AddOutlineWithColor(__this,color,0,in_RDX);
  return;
}


// Characters.BaseCharacter$$AddVisibleOutlineWithColor
// il2cpp: void Characters_BaseCharacter__AddVisibleOutlineWithColor (Characters_BaseCharacter_o* __this, UnityEngine_Color_o color, const MethodInfo* method);
// 0x5bb3180

void Characters_BaseCharacter__AddVisibleOutlineWithColor
               (Characters_BaseCharacter_o *__this,UnityEngine_Color_o color,MethodInfo *method)

{
  MethodInfo *in_RDX;
  
  Characters_BaseCharacter__AddOutlineWithColor(__this,color,1,in_RDX);
  return;
}


// Characters.BaseCharacter$$AddOutlineWithColor
// il2cpp: void Characters_BaseCharacter__AddOutlineWithColor (Characters_BaseCharacter_o* __this, UnityEngine_Color_o color, int32_t mode, const MethodInfo* method);
// 0x5bb30b0

void Characters_BaseCharacter__AddOutlineWithColor
               (Characters_BaseCharacter_o *__this,UnityEngine_Color_o color,int32_t mode,MethodInfo *method)

{
  Outline_o *pOVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_075474d9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075474d9 = '\x01';
  }
  pOVar1 = (__this->fields).OutlineComponent;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pOVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pOVar1 = (__this->fields).OutlineComponent;
    if (pOVar1 != (Outline_o *)0x0) {
      Outline__set_OutlineMode(pOVar1,mode,(MethodInfo *)0x0);
      pOVar1 = (__this->fields).OutlineComponent;
      if (pOVar1 != (Outline_o *)0x0) {
        Outline__set_OutlineColor(pOVar1,color,(MethodInfo *)0x0);
        pOVar1 = (__this->fields).OutlineComponent;
        if (pOVar1 != (Outline_o *)0x0) {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pOVar1,true,(MethodInfo *)0x0);
          return;
        }
      }
    }
    ThrowNullReferenceException();
  }
  return;
}


// Characters.BaseCharacter$$ChangeOutlineColor
// il2cpp: void Characters_BaseCharacter__ChangeOutlineColor (Characters_BaseCharacter_o* __this, UnityEngine_Color_o color, const MethodInfo* method);
// 0x5bb3190

void Characters_BaseCharacter__ChangeOutlineColor
               (Characters_BaseCharacter_o *__this,UnityEngine_Color_o color,MethodInfo *method)

{
  Outline_o *pOVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_075474da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075474da = '\x01';
  }
  pOVar1 = (__this->fields).OutlineComponent;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pOVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pOVar1 = (__this->fields).OutlineComponent;
    if (pOVar1 == (Outline_o *)0x0) {
      ThrowNullReferenceException();
    }
    Outline__set_OutlineColor(pOVar1,color,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Characters.BaseCharacter$$ChangeOutlineMode
// il2cpp: void Characters_BaseCharacter__ChangeOutlineMode (Characters_BaseCharacter_o* __this, int32_t mode, const MethodInfo* method);
// 0x5bb3220

void Characters_BaseCharacter__ChangeOutlineMode
               (Characters_BaseCharacter_o *__this,int32_t mode,MethodInfo *method)

{
  Outline_o *pOVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_075474db == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075474db = '\x01';
  }
  pOVar1 = (__this->fields).OutlineComponent;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pOVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pOVar1 = (__this->fields).OutlineComponent;
    if (pOVar1 == (Outline_o *)0x0) {
      ThrowNullReferenceException();
    }
    Outline__set_OutlineMode(pOVar1,mode,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Characters.BaseCharacter$$ChangeOutlineWidth
// il2cpp: void Characters_BaseCharacter__ChangeOutlineWidth (Characters_BaseCharacter_o* __this, float width, const MethodInfo* method);
// 0x5bb32a0

void Characters_BaseCharacter__ChangeOutlineWidth
               (Characters_BaseCharacter_o *__this,float width,MethodInfo *method)

{
  Outline_o *pOVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_075474dc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075474dc = '\x01';
  }
  pOVar1 = (__this->fields).OutlineComponent;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pOVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pOVar1 = (__this->fields).OutlineComponent;
    if (pOVar1 == (Outline_o *)0x0) {
      ThrowNullReferenceException();
    }
    Outline__set_OutlineWidth(pOVar1,width,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Characters.BaseCharacter$$RemoveOutline
// il2cpp: void Characters_BaseCharacter__RemoveOutline (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x5bb3330

void Characters_BaseCharacter__RemoveOutline(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  Outline_o *pOVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_075474dd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075474dd = '\x01';
  }
  pOVar1 = (__this->fields).OutlineComponent;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pOVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pOVar1 = (__this->fields).OutlineComponent;
    if (pOVar1 == (Outline_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pOVar1,false,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Characters.BaseCharacter$$RevealAndRemove
// il2cpp: System_Collections_IEnumerator_o* Characters_BaseCharacter__RevealAndRemove (Characters_BaseCharacter_o* __this, float startDelay, float seconds, const MethodInfo* method);
// 0x5bb3000

System_Collections_IEnumerator_o *
Characters_BaseCharacter__RevealAndRemove
          (Characters_BaseCharacter_o *__this,float startDelay,float seconds,MethodInfo *method)

{
  Characters_BaseCharacter__RevealAndRemove_d__81_o *__this_00;
  
  if (Il2CppMethodInitialized_075474de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseCharacter_RevealAndRemove_d__81);
    Il2CppMethodInitialized_075474de = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Characters_BaseCharacter_RevealAndRemove_d__81);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).startDelay = startDelay;
  (__this_00->fields).seconds = seconds;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Characters.BaseCharacter$$GetTeam
// il2cpp: System_String_o* Characters_BaseCharacter__GetTeam (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x5bb33d0

System_String_o * Characters_BaseCharacter__GetTeam(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  return (__this->fields).Team;
}


// Characters.BaseCharacter$$GetPosition
// il2cpp: UnityEngine_Vector3_o Characters_BaseCharacter__GetPosition (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x5bb33e0

UnityEngine_Vector3_o
Characters_BaseCharacter__GetPosition(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  UnityEngine_Transform_o *pUVar2;
  bool bVar3;
  UnityEngine_Vector3_Fields UVar4;
  
  if (Il2CppMethodInitialized_075474df == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075474df = '\x01';
  }
  pUVar1 = (__this->fields).Cache;
  if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
    pUVar2 = (pUVar1->fields).Transform;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      pUVar1 = (__this->fields).Cache;
      if ((pUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
         (pUVar2 = (pUVar1->fields).Transform, pUVar2 == (UnityEngine_Transform_o *)0x0)) {
        ThrowNullReferenceException();
      }
      UVar4 = (UnityEngine_Vector3_Fields)UnityEngine_Transform__get_position(pUVar2,(MethodInfo *)0x0);
      return (UnityEngine_Vector3_o)UVar4;
    }
  }
  if (Il2CppMethodInitialized_0753e4b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b6 = '\x01';
  }
  return (UnityEngine_Vector3_o)(TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields;
}


// Characters.BaseCharacter$$ValidTarget
// il2cpp: bool Characters_BaseCharacter__ValidTarget (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x5bb34b0

bool Characters_BaseCharacter__ValidTarget(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_075474e0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075474e0 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = false;
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    bVar2 = (__this->fields).Dead == false;
  }
  return bVar2;
}


// Characters.BaseCharacter$$IsMine
// il2cpp: bool Characters_BaseCharacter__IsMine (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x5bb3510

bool Characters_BaseCharacter__IsMine(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
     (pPVar2 = (pUVar1->fields).PhotonView, pPVar2 == (Photon_Pun_PhotonView_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return (pPVar2->fields)._IsMine_k__BackingField;
}


// Characters.BaseCharacter$$IsMainCharacter
// il2cpp: bool Characters_BaseCharacter__IsMainCharacter (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x5bb3540

bool Characters_BaseCharacter__IsMainCharacter(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  GameManagers_InGameManager_o *pGVar1;
  Characters_BaseCharacter_o *x;
  bool bVar2;
  
  if (Il2CppMethodInitialized_075474e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075474e1 = '\x01';
  }
  pGVar1 = (__this->fields)._inGameManager;
  if (pGVar1 == (GameManagers_InGameManager_o *)0x0) {
    ThrowNullReferenceException();
  }
  x = (pGVar1->fields).CurrentCharacter;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
  return bVar2;
}


// Characters.BaseCharacter$$Init
// il2cpp: void Characters_BaseCharacter__Init (Characters_BaseCharacter_o* __this, bool ai, System_String_o* team, const MethodInfo* method);
// 0x5bb35b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5bb35ef: jmp 0x5bb38c2

void Characters_BaseCharacter__Init
               (Characters_BaseCharacter_o *__this,bool ai,System_String_o *team,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *__this_00;
  undefined8 in_RAX;
  Photon_Realtime_Player_o *pPVar2;
  System_String_o *pSVar3;
  System_Object_array *parameters;
  Il2CppObject *pIVar4;
  Il2CppObject *pIVar5;
  MethodInfo *method_00;
  undefined8 uStack_38;
  
  uStack_38 = in_RAX;
  if (Il2CppMethodInitialized_075474e2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&"InitRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_075474e2 = '\x01';
    (__this->fields).AI = ai;
    (__this->fields).HasExplicitNameTag = false;
    if (!ai) goto label_05bb3655;
label_05bb35de:
    pUVar1 = (__this->fields).Cache;
  }
  else {
    (__this->fields).AI = ai;
    (__this->fields).HasExplicitNameTag = false;
    if (ai) goto label_05bb35de;
label_05bb3655:
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    pPVar2 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    pSVar3 = PhotonExtensions__GetStringProperty
                       (pPVar2,TypeInfo_GameManagers_PlayerProperty->static_fields->Name,""
                        ,(MethodInfo *)0x0);
    if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    }
    pSVar3 = MiscExtensions__StripIllegalRichText(pSVar3,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_075474d5 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
      Il2CppMethodInitialized_075474d5 = '\x01';
    }
    (__this->fields).RichTextName = pSVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields).RichTextName);
    pSVar3 = (__this->fields).RichTextName;
    if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    }
    pSVar3 = MiscExtensions__StripColor(pSVar3,(MethodInfo *)0x0);
    (__this->fields).VisibleName = pSVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields).VisibleName);
    pPVar2 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    pSVar3 = PhotonExtensions__GetStringProperty
                       (pPVar2,TypeInfo_GameManagers_PlayerProperty->static_fields->Guild,
                        "",(MethodInfo *)0x0);
    pSVar3 = MiscExtensions__StripIllegalRichText(pSVar3,(MethodInfo *)0x0);
    (__this->fields).Guild = pSVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Guild);
    pUVar1 = (__this->fields).Cache;
  }
  if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
    __this_00 = (pUVar1->fields).PhotonView;
    parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,3);
    uStack_38 = CONCAT17((__this->fields).AI,(undefined7)uStack_38);
    pIVar4 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_38 + 7));
    if (parameters != (System_Object_array *)0x0) {
      if ((pIVar4 != (Il2CppObject *)0x0) &&
         (pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((parameters->obj).klass)->_1).element_class),
         pIVar5 == (Il2CppObject *)0x0)) {
label_05bb38c7:
        pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
      }
      if ((int)parameters->max_length != 0) {
        parameters->m_Items[0] = pIVar4;
        Il2CppCodeGenWriteBarrier(parameters->m_Items);
        pSVar3 = (__this->fields).RichTextName;
        if ((pSVar3 != (System_String_o *)0x0) &&
           (pIVar4 = il2cpp_vm_Object_IsInst
                               ((Il2CppObject *)pSVar3,(((parameters->obj).klass)->_1).element_class),
           pIVar4 == (Il2CppObject *)0x0)) goto label_05bb38c7;
        if ((parameters->max_length & 0xfffffffe) != 0) {
          parameters->m_Items[1] = (Il2CppObject *)pSVar3;
          Il2CppCodeGenWriteBarrier(parameters->m_Items + 1);
          pSVar3 = (__this->fields).Guild;
          if ((pSVar3 != (System_String_o *)0x0) &&
             (pIVar4 = il2cpp_vm_Object_IsInst
                                 ((Il2CppObject *)pSVar3,(((parameters->obj).klass)->_1).element_class),
             pIVar4 == (Il2CppObject *)0x0)) goto label_05bb38c7;
          if (2 < (uint)parameters->max_length) {
            parameters->m_Items[2] = (Il2CppObject *)pSVar3;
            Il2CppCodeGenWriteBarrier(parameters->m_Items + 2);
            if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
              Photon_Pun_PhotonView__RPC(__this_00,"InitRPC",3,parameters,(MethodInfo *)0x0);
              Characters_BaseCharacter__SetTeam(__this,team,method_00);
              return;
            }
            goto label_05bb38c2;
          }
        }
      }
      ThrowIndexOutOfRangeException();
    }
  }
label_05bb38c2:
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$GetAimPoint
// il2cpp: UnityEngine_Vector3_o Characters_BaseCharacter__GetAimPoint (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x5bb39b0

UnityEngine_Vector3_o
Characters_BaseCharacter__GetAimPoint(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  Cameras_BaseCamera_o *pCVar1;
  UnityEngine_Camera_o *__this_00;
  UnityEngine_Vector3_o UVar2;
  UnityEngine_Ray_o local_20;
  
  if (Il2CppMethodInitialized_075474e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_075474e3 = '\x01';
  }
  pCVar1 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if (pCVar1 != (Cameras_BaseCamera_o *)0x0) {
    __this_00 = (pCVar1->fields).Camera;
    if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
    }
    UVar2 = UI_CursorManager__GetInGameMousePosition((MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Camera_o *)0x0) {
      UnityEngine_Camera__ScreenPointToRay_68c1290(&local_20,__this_00,UVar2,(MethodInfo *)0x0);
      UVar2.fields.z = local_20.fields.m_Direction.fields.z * 1000.0 + local_20.fields.m_Origin.fields.z;
      UVar2.fields.x = local_20.fields.m_Direction.fields.x * 1000.0 + local_20.fields.m_Origin.fields.x;
      UVar2.fields.y = local_20.fields.m_Direction.fields.y * 1000.0 + local_20.fields.m_Origin.fields.y;
      return (UnityEngine_Vector3_o)UVar2.fields;
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$SetTeam
// il2cpp: void Characters_BaseCharacter__SetTeam (Characters_BaseCharacter_o* __this, System_String_o* team, const MethodInfo* method);
// 0x5bb38e0

void Characters_BaseCharacter__SetTeam
               (Characters_BaseCharacter_o *__this,System_String_o *team,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *__this_00;
  System_Object_array *parameters;
  Il2CppObject *pIVar2;
  
  if (Il2CppMethodInitialized_075474e4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"SetTeamRPC");
    Il2CppMethodInitialized_075474e4 = '\x01';
  }
  pUVar1 = (__this->fields).Cache;
  if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
    __this_00 = (pUVar1->fields).PhotonView;
    parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
    if (parameters != (System_Object_array *)0x0) {
      if (team != (System_String_o *)0x0) {
        pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)team,(((parameters->obj).klass)->_1).element_class);
        if (pIVar2 == (Il2CppObject *)0x0) {
          pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
        }
      }
      if ((int)parameters->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      parameters->m_Items[0] = (Il2CppObject *)team;
      Il2CppCodeGenWriteBarrier(parameters->m_Items);
      if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(__this_00,"SetTeamRPC",0,parameters,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$GetCameraAnchor
// il2cpp: UnityEngine_Transform_o* Characters_BaseCharacter__GetCameraAnchor (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x5bb3a70

UnityEngine_Transform_o *
Characters_BaseCharacter__GetCameraAnchor(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  
  pUVar1 = (__this->fields).Cache;
  if (pUVar1 == (Utility_BaseComponentCache_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pUVar1->fields).Transform;
}


// Characters.BaseCharacter$$CreateCache
// il2cpp: void Characters_BaseCharacter__CreateCache (Characters_BaseCharacter_o* __this, Utility_BaseComponentCache_o* cache, const MethodInfo* method);
// 0x5bb3a90

void Characters_BaseCharacter__CreateCache
               (Characters_BaseCharacter_o *__this,Utility_BaseComponentCache_o *cache,MethodInfo *method)

{
  Utility_BaseComponentCache_o **targetAddress;
  UnityEngine_GameObject_o *owner;
  Utility_BaseComponentCache_o *__this_00;
  
  if (Il2CppMethodInitialized_075474e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_BaseComponentCache);
    Il2CppMethodInitialized_075474e5 = '\x01';
  }
  targetAddress = &(__this->fields).Cache;
  (__this->fields).Cache = cache;
  Il2CppCodeGenWriteBarrier(targetAddress);
  if (cache == (Utility_BaseComponentCache_o *)0x0) {
    owner = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_BaseComponentCache);
    Utility_BaseComponentCache___ctor(__this_00,owner,(MethodInfo *)0x0);
    (__this->fields).Cache = __this_00;
    Il2CppCodeGenWriteBarrier(targetAddress);
    return;
  }
  return;
}


// Characters.BaseCharacter$$CreateDetection
// il2cpp: void Characters_BaseCharacter__CreateDetection (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x5bb3b30

void Characters_BaseCharacter__CreateDetection(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  (__this->fields).Detection = (Characters_BaseDetection_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Detection);
  return;
}


// Characters.BaseCharacter$$Emote
// il2cpp: void Characters_BaseCharacter__Emote (Characters_BaseCharacter_o* __this, System_String_o* emote, const MethodInfo* method);
// 0x5bb3b50

void Characters_BaseCharacter__Emote
               (Characters_BaseCharacter_o *__this,System_String_o *emote,MethodInfo *method)

{
  return;
}


// Characters.BaseCharacter$$ForceAnimation
// il2cpp: void Characters_BaseCharacter__ForceAnimation (Characters_BaseCharacter_o* __this, System_String_o* animation, float fade, const MethodInfo* method);
// 0x5bb3b60

void Characters_BaseCharacter__ForceAnimation
               (Characters_BaseCharacter_o *__this,System_String_o *animation,float fade,MethodInfo *method)

{
  return;
}


// Characters.BaseCharacter$$InitRPC
// il2cpp: void Characters_BaseCharacter__InitRPC (Characters_BaseCharacter_o* __this, bool ai, System_String_o* name, System_String_o* guild, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5bb3b70

void Characters_BaseCharacter__InitRPC
               (Characters_BaseCharacter_o *__this,bool ai,System_String_o *name,System_String_o *guild,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_075474e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_RoleSpriteHelpers);
    Il2CppMethodInitialized_075474e6 = '\x01';
  }
  if (info.fields.Sender != (Photon_Realtime_Player_o *)0x0) {
    pPVar1 = Photon_Pun_MonoBehaviourPun__get_photonView
                       ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
    if (pPVar1 == (Photon_Pun_PhotonView_o *)0x0) {
      ThrowNullReferenceException();
    }
    if (info.fields.Sender != (pPVar1->fields)._Owner_k__BackingField) {
      return;
    }
  }
  (__this->fields).AI = ai;
  if ((TypeInfo_PatreonEffects_RoleSpriteHelpers->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers);
  }
  pSVar2 = PatreonEffects_RoleSpriteHelpers__SanitizePlayerText(info.fields.Sender,name,(MethodInfo *)0x0);
  if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  pSVar2 = MiscExtensions__StripIllegalRichText(pSVar2,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_075474d5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    Il2CppMethodInitialized_075474d5 = '\x01';
  }
  (__this->fields).RichTextName = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).RichTextName);
  pSVar2 = (__this->fields).RichTextName;
  if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  pSVar2 = MiscExtensions__StripColor(pSVar2,(MethodInfo *)0x0);
  (__this->fields).VisibleName = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).VisibleName);
  pSVar2 = PatreonEffects_RoleSpriteHelpers__SanitizePlayerText(info.fields.Sender,guild,(MethodInfo *)0x0);
  pSVar2 = MiscExtensions__StripIllegalRichText(pSVar2,(MethodInfo *)0x0);
  (__this->fields).Guild = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Guild);
  return;
}


// Characters.BaseCharacter$$SetHealthRPC
// il2cpp: void Characters_BaseCharacter__SetHealthRPC (Characters_BaseCharacter_o* __this, int32_t currentHealth, int32_t maxHealth, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5bb3cd0

void Characters_BaseCharacter__SetHealthRPC
               (Characters_BaseCharacter_o *__this,int32_t currentHealth,int32_t maxHealth,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  
  pPVar1 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar1 == (Photon_Pun_PhotonView_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (info.fields.Sender == (pPVar1->fields)._Owner_k__BackingField) {
    (__this->fields).CurrentHealth = currentHealth;
    (__this->fields).MaxHealth = maxHealth;
  }
  return;
}


// Characters.BaseCharacter$$SetTeamRPC
// il2cpp: void Characters_BaseCharacter__SetTeamRPC (Characters_BaseCharacter_o* __this, System_String_o* team, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5bb3d20

void Characters_BaseCharacter__SetTeamRPC
               (Characters_BaseCharacter_o *__this,System_String_o *team,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  System_String_o *b;
  Characters_BaseDetection_o *__this_00;
  bool bVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  
  pPVar2 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar2 == (Photon_Pun_PhotonView_o *)0x0) {
label_05bb3d9b:
    ThrowNullReferenceException();
  }
  if (info.fields.Sender == (pPVar2->fields)._Owner_k__BackingField) {
    b = (__this->fields).Team;
    (__this->fields).Team = team;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Team);
    if ((__this->fields).Detection != (Characters_BaseDetection_o *)0x0) {
      bVar1 = System_String__op_Inequality(team,b,(MethodInfo *)0x0);
      if (bVar1) {
        __this_00 = (__this->fields).Detection;
        if (__this_00 != (Characters_BaseDetection_o *)0x0) {
          Characters_BaseDetection__OnTeamChanged(__this_00,(MethodInfo *)0x0);
          return;
        }
        goto label_05bb3d9b;
      }
    }
  }
  return;
}


// Characters.BaseCharacter$$SetCurrentHealth
// il2cpp: void Characters_BaseCharacter__SetCurrentHealth (Characters_BaseCharacter_o* __this, int32_t currentHealth, const MethodInfo* method);
// 0x5bb3da0

void Characters_BaseCharacter__SetCurrentHealth
               (Characters_BaseCharacter_o *__this,int32_t currentHealth,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (__this->fields).MaxHealth;
  if (currentHealth < iVar1) {
    iVar1 = currentHealth;
  }
  iVar2 = 0;
  if (0 < iVar1) {
    iVar2 = iVar1;
  }
  (__this->fields).CurrentHealth = iVar2;
  (*(__this->klass->vtable)._88_OnHealthChange.methodPtr)
            (__this,(__this->klass->vtable)._88_OnHealthChange.method);
  if ((__this->fields).CurrentHealth < 1) {
    (*(__this->klass->vtable)._83_Die.methodPtr)(__this,(__this->klass->vtable)._83_Die.method);
    return;
  }
  return;
}


// Characters.BaseCharacter$$SetMaxHealth
// il2cpp: void Characters_BaseCharacter__SetMaxHealth (Characters_BaseCharacter_o* __this, int32_t maxHealth, const MethodInfo* method);
// 0x5bb3df0

void Characters_BaseCharacter__SetMaxHealth
               (Characters_BaseCharacter_o *__this,int32_t maxHealth,MethodInfo *method)

{
  int iVar1;
  
  (__this->fields).MaxHealth = maxHealth;
  iVar1 = (__this->fields).CurrentHealth;
  if (iVar1 < maxHealth) {
    maxHealth = iVar1;
  }
  iVar1 = 0;
  if (0 < maxHealth) {
    iVar1 = maxHealth;
  }
  (__this->fields).CurrentHealth = iVar1;
  (*(__this->klass->vtable)._88_OnHealthChange.methodPtr)
            (__this,(__this->klass->vtable)._88_OnHealthChange.method);
  if ((__this->fields).CurrentHealth < 1) {
    (*(__this->klass->vtable)._83_Die.methodPtr)(__this,(__this->klass->vtable)._83_Die.method);
    return;
  }
  return;
}


// Characters.BaseCharacter$$SetHealth
// il2cpp: void Characters_BaseCharacter__SetHealth (Characters_BaseCharacter_o* __this, int32_t health, const MethodInfo* method);
// 0x5bb3e50

void Characters_BaseCharacter__SetHealth(Characters_BaseCharacter_o *__this,int32_t health,MethodInfo *method)

{
  int32_t iVar1;
  
  iVar1 = 0;
  if (0 < health) {
    iVar1 = health;
  }
  (__this->fields).MaxHealth = health;
  (__this->fields).CurrentHealth = iVar1;
  (*(__this->klass->vtable)._88_OnHealthChange.methodPtr)
            (__this,(__this->klass->vtable)._88_OnHealthChange.method);
  if ((__this->fields).CurrentHealth < 1) {
    (*(__this->klass->vtable)._83_Die.methodPtr)(__this,(__this->klass->vtable)._83_Die.method);
    return;
  }
  return;
}


// Characters.BaseCharacter$$TakeDamage
// il2cpp: void Characters_BaseCharacter__TakeDamage (Characters_BaseCharacter_o* __this, int32_t damage, const MethodInfo* method);
// 0x5bb3ea0

void Characters_BaseCharacter__TakeDamage
               (Characters_BaseCharacter_o *__this,int32_t damage,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (__this->fields).CurrentHealth - damage;
  iVar1 = (__this->fields).MaxHealth;
  if (iVar1 <= iVar2) {
    iVar2 = iVar1;
  }
  iVar1 = 0;
  if (0 < iVar2) {
    iVar1 = iVar2;
  }
  (__this->fields).CurrentHealth = iVar1;
  (*(__this->klass->vtable)._88_OnHealthChange.methodPtr)
            (__this,(__this->klass->vtable)._88_OnHealthChange.method);
  if ((__this->fields).CurrentHealth < 1) {
    (*(__this->klass->vtable)._83_Die.methodPtr)(__this,(__this->klass->vtable)._83_Die.method);
    return;
  }
  return;
}


// Characters.BaseCharacter$$Die
// il2cpp: void Characters_BaseCharacter__Die (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x5bb3f00

void Characters_BaseCharacter__Die(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *__this_00;
  GameManagers_InGameManager_o *pGVar2;
  Characters_BaseCharacter_o *x;
  bool bVar3;
  System_Object_array *parameters;
  System_Collections_IEnumerator_o *routine;
  
  if (Il2CppMethodInitialized_075474e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"MarkDeadRPC");
    Il2CppMethodInitialized_075474e7 = '\x01';
  }
  pUVar1 = (__this->fields).Cache;
  if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
    __this_00 = (pUVar1->fields).PhotonView;
    parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,0);
    if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
      Photon_Pun_PhotonView__RPC(__this_00,"MarkDeadRPC",3,parameters,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_075474e1 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_075474e1 = '\x01';
      }
      pGVar2 = (__this->fields)._inGameManager;
      if (pGVar2 != (GameManagers_InGameManager_o *)0x0) {
        x = (pGVar2->fields).CurrentCharacter;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar3 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
        if (bVar3) {
          pGVar2 = (__this->fields)._inGameManager;
          if (pGVar2 == (GameManagers_InGameManager_o *)0x0) goto label_05bb400c;
          GameManagers_InGameManager__RegisterMainCharacterDie(pGVar2,(MethodInfo *)0x0);
        }
        routine = (*(__this->klass->vtable)._84_WaitAndDie.methodPtr)
                            (__this,(__this->klass->vtable)._84_WaitAndDie.method);
        UnityEngine_MonoBehaviour__StartCoroutine_691c390
                  ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_05bb400c:
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$WaitAndDie
// il2cpp: System_Collections_IEnumerator_o* Characters_BaseCharacter__WaitAndDie (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x5bb4020

System_Collections_IEnumerator_o *
Characters_BaseCharacter__WaitAndDie(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter__WaitAndDie_d__103_o *__this_00;
  
  if (Il2CppMethodInitialized_075474e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseCharacter_WaitAndDie_d__103);
    Il2CppMethodInitialized_075474e8 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_BaseCharacter_WaitAndDie_d__103);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Characters.BaseCharacter$$UseItem
// il2cpp: void Characters_BaseCharacter__UseItem (Characters_BaseCharacter_o* __this, int32_t item, const MethodInfo* method);
// 0x5bb40b0

void Characters_BaseCharacter__UseItem(Characters_BaseCharacter_o *__this,int32_t item,MethodInfo *method)

{
  System_Collections_Generic_List_BaseUseable__o *__this_00;
  Characters_BaseUseable_o *pCVar1;
  
  if (Il2CppMethodInitialized_075474e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseUseable_get_Item);
    Il2CppMethodInitialized_075474e9 = '\x01';
  }
  __this_00 = (__this->fields).Items;
  if (__this_00 != (System_Collections_Generic_List_BaseUseable__o *)0x0) {
    pCVar1 = System_Collections_Generic_List_object___get_Item
                       ((System_Collections_Generic_List_object__o *)__this_00,item,
                        (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_BaseUseable_get_Item)
    ;
    if (pCVar1 != (Characters_BaseUseable_o *)0x0) {
      (*(pCVar1->klass->vtable)._12_SetInput.methodPtr)
                (pCVar1,true,(pCVar1->klass->vtable)._12_SetInput.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$OnPlayerEnteredRoom
// il2cpp: void Characters_BaseCharacter__OnPlayerEnteredRoom (Characters_BaseCharacter_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x5bb4120

void Characters_BaseCharacter__OnPlayerEnteredRoom
               (Characters_BaseCharacter_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  System_String_o *obj;
  Characters_AnimationHandler_o *pCVar3;
  bool bVar4;
  System_Object_array *pSVar5;
  Il2CppObject *pIVar6;
  Il2CppObject *pIVar7;
  MethodInfo *pMVar8;
  float local_3c;
  int32_t local_38;
  int32_t local_34;
  
  if (Il2CppMethodInitialized_075474ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"PlayAnimationRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"SetTeamRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"SetHealthRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_075474ea = '\x01';
  }
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
     (pPVar2 = (pUVar1->fields).PhotonView, pPVar2 != (Photon_Pun_PhotonView_o *)0x0)) {
    if ((pPVar2->fields)._IsMine_k__BackingField == false) {
      return;
    }
    pSVar5 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
    local_34 = (__this->fields).CurrentHealth;
    pIVar6 = il2cpp_vm_Object_Box(g_data_07556710,&local_34);
    if (pSVar5 != (System_Object_array *)0x0) {
      if ((pIVar6 != (Il2CppObject *)0x0) &&
         (pIVar7 = il2cpp_vm_Object_IsInst(pIVar6,(((pSVar5->obj).klass)->_1).element_class),
         pIVar7 == (Il2CppObject *)0x0)) {
label_05bb4471:
        pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
      }
      if ((int)pSVar5->max_length != 0) {
        pSVar5->m_Items[0] = pIVar6;
        Il2CppCodeGenWriteBarrier(pSVar5->m_Items);
        local_38 = (__this->fields).MaxHealth;
        pIVar6 = il2cpp_vm_Object_Box(g_data_07556710,&local_38);
        if ((pIVar6 != (Il2CppObject *)0x0) &&
           (pIVar7 = il2cpp_vm_Object_IsInst(pIVar6,(((pSVar5->obj).klass)->_1).element_class),
           pIVar7 == (Il2CppObject *)0x0)) goto label_05bb4471;
        if ((pSVar5->max_length & 0xfffffffe) != 0) {
          pSVar5->m_Items[1] = pIVar6;
          Il2CppCodeGenWriteBarrier(pSVar5->m_Items + 1);
          Photon_Pun_PhotonView__RPC_56e5850(pPVar2,"SetHealthRPC",player,pSVar5,(MethodInfo *)0x0);
          pUVar1 = (__this->fields).Cache;
          if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
            pPVar2 = (pUVar1->fields).PhotonView;
            pSVar5 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
            if (pSVar5 != (System_Object_array *)0x0) {
              obj = (__this->fields).Team;
              if ((obj != (System_String_o *)0x0) &&
                 (pIVar6 = il2cpp_vm_Object_IsInst
                                     ((Il2CppObject *)obj,(((pSVar5->obj).klass)->_1).element_class),
                 pIVar6 == (Il2CppObject *)0x0)) goto label_05bb4471;
              if ((int)pSVar5->max_length == 0) goto label_05bb446c;
              pSVar5->m_Items[0] = (Il2CppObject *)obj;
              Il2CppCodeGenWriteBarrier(pSVar5->m_Items);
              if (pPVar2 != (Photon_Pun_PhotonView_o *)0x0) {
                pMVar8 = (MethodInfo *)"SetTeamRPC";
                Photon_Pun_PhotonView__RPC_56e5850
                          (pPVar2,"SetTeamRPC",player,pSVar5,(MethodInfo *)0x0);
                pCVar3 = (__this->fields).Animation;
                if (pCVar3 != (Characters_AnimationHandler_o *)0x0) {
                  pMVar8 = (MethodInfo *)Characters_AnimationHandler__GetCurrentAnimation(pCVar3,pMVar8);
                  bVar4 = System_String__op_Inequality
                                    ((System_String_o *)pMVar8,"",(MethodInfo *)0x0);
                  if (!bVar4) {
                    return;
                  }
                  pUVar1 = (__this->fields).Cache;
                  if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
                    pPVar2 = (pUVar1->fields).PhotonView;
                    pSVar5 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
                    if (pSVar5 != (System_Object_array *)0x0) {
                      if ((pMVar8 != (MethodInfo *)0x0) &&
                         (pIVar6 = il2cpp_vm_Object_IsInst
                                             ((Il2CppObject *)pMVar8,(((pSVar5->obj).klass)->_1).element_class
                                             ), pIVar6 == (Il2CppObject *)0x0)) goto label_05bb4471;
                      if ((int)pSVar5->max_length == 0) goto label_05bb446c;
                      pSVar5->m_Items[0] = (Il2CppObject *)pMVar8;
                      Il2CppCodeGenWriteBarrier(pSVar5->m_Items);
                      pCVar3 = (__this->fields).Animation;
                      if (pCVar3 != (Characters_AnimationHandler_o *)0x0) {
                        local_3c = Characters_AnimationHandler__GetCurrentNormalizedTime(pCVar3,pMVar8);
                        pIVar6 = il2cpp_vm_Object_Box(g_data_07556740,&local_3c);
                        if ((pIVar6 != (Il2CppObject *)0x0) &&
                           (pIVar7 = il2cpp_vm_Object_IsInst(pIVar6,(((pSVar5->obj).klass)->_1).element_class)
                           , pIVar7 == (Il2CppObject *)0x0)) goto label_05bb4471;
                        if ((pSVar5->max_length & 0xfffffffe) == 0) goto label_05bb446c;
                        pSVar5->m_Items[1] = pIVar6;
                        Il2CppCodeGenWriteBarrier(pSVar5->m_Items + 1);
                        if (pPVar2 != (Photon_Pun_PhotonView_o *)0x0) {
                          Photon_Pun_PhotonView__RPC_56e5850
                                    (pPVar2,"PlayAnimationRPC",player,pSVar5,(MethodInfo *)0x0);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          goto label_05bb4467;
        }
      }
label_05bb446c:
      ThrowIndexOutOfRangeException();
    }
  }
label_05bb4467:
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$PlayAnimation
// il2cpp: void Characters_BaseCharacter__PlayAnimation (Characters_BaseCharacter_o* __this, System_String_o* animation, float startTime, const MethodInfo* method);
// 0x5bb44a0

void Characters_BaseCharacter__PlayAnimation
               (Characters_BaseCharacter_o *__this,System_String_o *animation,float startTime,
               MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *__this_00;
  bool bVar2;
  System_Object_array *parameters;
  Il2CppObject *pIVar3;
  Il2CppObject *pIVar4;
  float local_1c;
  
  if (Il2CppMethodInitialized_075474eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"PlayAnimationRPC");
    Il2CppMethodInitialized_075474eb = '\x01';
  }
  bVar2 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method);
  if (!bVar2) {
    return;
  }
  pUVar1 = (__this->fields).Cache;
  if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
    __this_00 = (pUVar1->fields).PhotonView;
    parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
    if (parameters != (System_Object_array *)0x0) {
      if ((animation != (System_String_o *)0x0) &&
         (pIVar3 = il2cpp_vm_Object_IsInst
                             ((Il2CppObject *)animation,(((parameters->obj).klass)->_1).element_class),
         pIVar3 == (Il2CppObject *)0x0)) {
label_05bb45ef:
        pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
      }
      if ((int)parameters->max_length != 0) {
        parameters->m_Items[0] = (Il2CppObject *)animation;
        Il2CppCodeGenWriteBarrier(parameters->m_Items);
        local_1c = startTime;
        pIVar3 = il2cpp_vm_Object_Box(g_data_07556740,&local_1c);
        if ((pIVar3 != (Il2CppObject *)0x0) &&
           (pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((parameters->obj).klass)->_1).element_class),
           pIVar4 == (Il2CppObject *)0x0)) goto label_05bb45ef;
        if ((parameters->max_length & 0xfffffffe) != 0) {
          parameters->m_Items[1] = pIVar3;
          Il2CppCodeGenWriteBarrier(parameters->m_Items + 1);
          if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
            Photon_Pun_PhotonView__RPC(__this_00,"PlayAnimationRPC",0,parameters,(MethodInfo *)0x0);
            return;
          }
          goto label_05bb45e5;
        }
      }
      ThrowIndexOutOfRangeException();
    }
  }
label_05bb45e5:
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$PlayAnimationReset
// il2cpp: void Characters_BaseCharacter__PlayAnimationReset (Characters_BaseCharacter_o* __this, System_String_o* animation, const MethodInfo* method);
// 0x5bb4600

void Characters_BaseCharacter__PlayAnimationReset
               (Characters_BaseCharacter_o *__this,System_String_o *animation,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *__this_00;
  bool bVar2;
  System_Object_array *parameters;
  Il2CppObject *pIVar3;
  
  if (Il2CppMethodInitialized_075474ec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"PlayAnimationResetRPC");
    Il2CppMethodInitialized_075474ec = '\x01';
  }
  bVar2 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method);
  if (!bVar2) {
    return;
  }
  pUVar1 = (__this->fields).Cache;
  if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
    __this_00 = (pUVar1->fields).PhotonView;
    parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
    if (parameters != (System_Object_array *)0x0) {
      if (animation != (System_String_o *)0x0) {
        pIVar3 = il2cpp_vm_Object_IsInst
                           ((Il2CppObject *)animation,(((parameters->obj).klass)->_1).element_class);
        if (pIVar3 == (Il2CppObject *)0x0) {
          pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
        }
      }
      if ((int)parameters->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      parameters->m_Items[0] = (Il2CppObject *)animation;
      Il2CppCodeGenWriteBarrier(parameters->m_Items);
      if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(__this_00,"PlayAnimationResetRPC",0,parameters,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$PlayAnimationRPC
// il2cpp: void Characters_BaseCharacter__PlayAnimationRPC (Characters_BaseCharacter_o* __this, System_String_o* animation, float startTime, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5bb46f0

void Characters_BaseCharacter__PlayAnimationRPC
               (Characters_BaseCharacter_o *__this,System_String_o *animation,float startTime,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  Characters_AnimationHandler_o *__this_00;
  
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
     (pPVar2 = (pUVar1->fields).PhotonView, pPVar2 != (Photon_Pun_PhotonView_o *)0x0)) {
    if (info.fields.Sender != (pPVar2->fields)._Owner_k__BackingField) {
      return;
    }
    __this_00 = (__this->fields).Animation;
    if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
      Characters_AnimationHandler__Play(__this_00,animation,startTime,false,(MethodInfo *)info.fields.Sender);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$PlayAnimationResetRPC
// il2cpp: void Characters_BaseCharacter__PlayAnimationResetRPC (Characters_BaseCharacter_o* __this, System_String_o* animation, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5bb4730

void Characters_BaseCharacter__PlayAnimationResetRPC
               (Characters_BaseCharacter_o *__this,System_String_o *animation,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  Characters_AnimationHandler_o *__this_00;
  
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
     (pPVar2 = (pUVar1->fields).PhotonView, pPVar2 != (Photon_Pun_PhotonView_o *)0x0)) {
    if (info.fields.Sender != (pPVar2->fields)._Owner_k__BackingField) {
      return;
    }
    __this_00 = (__this->fields).Animation;
    if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
      Characters_AnimationHandler__Play(__this_00,animation,0.0,true,(MethodInfo *)info.fields.Sender);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$PlayAnimationIfNotPlaying
// il2cpp: void Characters_BaseCharacter__PlayAnimationIfNotPlaying (Characters_BaseCharacter_o* __this, System_String_o* animation, float startTime, const MethodInfo* method);
// 0x5bb4780

void Characters_BaseCharacter__PlayAnimationIfNotPlaying
               (Characters_BaseCharacter_o *__this,System_String_o *animation,float startTime,
               MethodInfo *method)

{
  Characters_AnimationHandler_o *pCVar1;
  UnityEngine_Animation_o *__this_00;
  MethodInfo *method_00;
  bool bVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  pCVar1 = (__this->fields).Animation;
  if (pCVar1 == (Characters_AnimationHandler_o *)0x0) {
label_05bb47eb:
    ThrowNullReferenceException();
  }
  if ((pCVar1->fields)._isLegacy == false) {
    bVar2 = System_String__op_Equality((pCVar1->fields)._currentAnimation,animation,(MethodInfo *)0x0);
    method_00 = extraout_RDX_00;
  }
  else {
    __this_00 = (pCVar1->fields).Animation;
    if (__this_00 == (UnityEngine_Animation_o *)0x0) goto label_05bb47eb;
    bVar2 = UnityEngine_Animation__IsPlaying(__this_00,animation,(MethodInfo *)0x0);
    method_00 = extraout_RDX;
  }
  if (bVar2) {
    return;
  }
  Characters_BaseCharacter__PlayAnimation(__this,animation,startTime,method_00);
  return;
}


// Characters.BaseCharacter$$CrossFade
// il2cpp: void Characters_BaseCharacter__CrossFade (Characters_BaseCharacter_o* __this, System_String_o* animation, float fadeTime, float startTime, const MethodInfo* method);
// 0x5bb47f0

void Characters_BaseCharacter__CrossFade
               (Characters_BaseCharacter_o *__this,System_String_o *animation,float fadeTime,float startTime,
               MethodInfo *method)

{
  System_Object_array *pSVar1;
  Utility_BaseComponentCache_o *pUVar2;
  Photon_Pun_PhotonView_o *__this_00;
  bool bVar3;
  Il2CppObject *pIVar4;
  Il2CppObject *pIVar5;
  float local_28;
  float local_24;
  
  if (Il2CppMethodInitialized_075474ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"CrossFadeRPC");
    Il2CppMethodInitialized_075474ed = '\x01';
  }
  bVar3 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method);
  if (!bVar3) {
    return;
  }
  pSVar1 = (__this->fields).crossfadeCache;
  if (pSVar1 != (System_Object_array *)0x0) {
    if ((animation != (System_String_o *)0x0) &&
       (pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)animation,(((pSVar1->obj).klass)->_1).element_class),
       pIVar4 == (Il2CppObject *)0x0)) {
label_05bb49a2:
      pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
    }
    if ((int)pSVar1->max_length == 0) {
label_05bb499d:
      ThrowIndexOutOfRangeException();
    }
    pSVar1->m_Items[0] = (Il2CppObject *)animation;
    Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
    pSVar1 = (__this->fields).crossfadeCache;
    local_24 = fadeTime;
    pIVar4 = il2cpp_vm_Object_Box(g_data_07556740,&local_24);
    if (pSVar1 != (System_Object_array *)0x0) {
      if ((pIVar4 != (Il2CppObject *)0x0) &&
         (pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((pSVar1->obj).klass)->_1).element_class),
         pIVar5 == (Il2CppObject *)0x0)) goto label_05bb49a2;
      if ((pSVar1->max_length & 0xfffffffe) == 0) goto label_05bb499d;
      pSVar1->m_Items[1] = pIVar4;
      Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
      pSVar1 = (__this->fields).crossfadeCache;
      local_28 = startTime;
      pIVar4 = il2cpp_vm_Object_Box(g_data_07556740,&local_28);
      if (pSVar1 != (System_Object_array *)0x0) {
        if ((pIVar4 != (Il2CppObject *)0x0) &&
           (pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((pSVar1->obj).klass)->_1).element_class),
           pIVar5 == (Il2CppObject *)0x0)) goto label_05bb49a2;
        if ((uint)pSVar1->max_length < 3) goto label_05bb499d;
        pSVar1->m_Items[2] = pIVar4;
        Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 2);
        pUVar2 = (__this->fields).Cache;
        if ((pUVar2 != (Utility_BaseComponentCache_o *)0x0) &&
           (__this_00 = (pUVar2->fields).PhotonView, __this_00 != (Photon_Pun_PhotonView_o *)0x0)) {
          Photon_Pun_PhotonView__RPC
                    (__this_00,"CrossFadeRPC",0,(__this->fields).crossfadeCache,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$CrossFadeWithSpeed
// il2cpp: void Characters_BaseCharacter__CrossFadeWithSpeed (Characters_BaseCharacter_o* __this, System_String_o* animation, float speed, float fadeTime, float startTime, const MethodInfo* method);
// 0x5bb49c0

void Characters_BaseCharacter__CrossFadeWithSpeed
               (Characters_BaseCharacter_o *__this,System_String_o *animation,float speed,float fadeTime,
               float startTime,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *__this_00;
  bool bVar2;
  System_Object_array *parameters;
  Il2CppObject *pIVar3;
  Il2CppObject *pIVar4;
  float local_2c;
  float local_28;
  float local_24;
  
  if (Il2CppMethodInitialized_075474ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"CrossFadeWithSpeedRPC");
    Il2CppMethodInitialized_075474ee = '\x01';
  }
  bVar2 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method);
  if (!bVar2) {
    return;
  }
  pUVar1 = (__this->fields).Cache;
  if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
    __this_00 = (pUVar1->fields).PhotonView;
    parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,4);
    if (parameters != (System_Object_array *)0x0) {
      if ((animation != (System_String_o *)0x0) &&
         (pIVar3 = il2cpp_vm_Object_IsInst
                             ((Il2CppObject *)animation,(((parameters->obj).klass)->_1).element_class),
         pIVar3 == (Il2CppObject *)0x0)) {
label_05bb4bcb:
        pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
      }
      if ((int)parameters->max_length != 0) {
        parameters->m_Items[0] = (Il2CppObject *)animation;
        Il2CppCodeGenWriteBarrier(parameters->m_Items);
        local_24 = speed;
        pIVar3 = il2cpp_vm_Object_Box(g_data_07556740,&local_24);
        if ((pIVar3 != (Il2CppObject *)0x0) &&
           (pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((parameters->obj).klass)->_1).element_class),
           pIVar4 == (Il2CppObject *)0x0)) goto label_05bb4bcb;
        if ((parameters->max_length & 0xfffffffe) != 0) {
          parameters->m_Items[1] = pIVar3;
          Il2CppCodeGenWriteBarrier(parameters->m_Items + 1);
          local_28 = fadeTime;
          pIVar3 = il2cpp_vm_Object_Box(g_data_07556740,&local_28);
          if ((pIVar3 != (Il2CppObject *)0x0) &&
             (pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((parameters->obj).klass)->_1).element_class),
             pIVar4 == (Il2CppObject *)0x0)) goto label_05bb4bcb;
          if (2 < (uint)parameters->max_length) {
            parameters->m_Items[2] = pIVar3;
            Il2CppCodeGenWriteBarrier(parameters->m_Items + 2);
            local_2c = startTime;
            pIVar3 = il2cpp_vm_Object_Box(g_data_07556740,&local_2c);
            if ((pIVar3 != (Il2CppObject *)0x0) &&
               (pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((parameters->obj).klass)->_1).element_class),
               pIVar4 == (Il2CppObject *)0x0)) goto label_05bb4bcb;
            if ((parameters->max_length & 0xfffffffc) != 0) {
              parameters->m_Items[3] = pIVar3;
              Il2CppCodeGenWriteBarrier(parameters->m_Items + 3);
              if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
                Photon_Pun_PhotonView__RPC(__this_00,"CrossFadeWithSpeedRPC",0,parameters,(MethodInfo *)0x0);
                return;
              }
              goto label_05bb4bc6;
            }
          }
        }
      }
      ThrowIndexOutOfRangeException();
    }
  }
label_05bb4bc6:
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$CrossFadeIfNotPlaying
// il2cpp: void Characters_BaseCharacter__CrossFadeIfNotPlaying (Characters_BaseCharacter_o* __this, System_String_o* animation, float fadeTime, float startTime, const MethodInfo* method);
// 0x5bb4be0

void Characters_BaseCharacter__CrossFadeIfNotPlaying
               (Characters_BaseCharacter_o *__this,System_String_o *animation,float fadeTime,float startTime,
               MethodInfo *method)

{
  Characters_AnimationHandler_o *pCVar1;
  UnityEngine_Animation_o *__this_00;
  MethodInfo *method_00;
  bool bVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  pCVar1 = (__this->fields).Animation;
  if (pCVar1 == (Characters_AnimationHandler_o *)0x0) {
label_05bb4c55:
    ThrowNullReferenceException();
  }
  if ((pCVar1->fields)._isLegacy == false) {
    bVar2 = System_String__op_Equality((pCVar1->fields)._currentAnimation,animation,(MethodInfo *)0x0);
    method_00 = extraout_RDX_00;
  }
  else {
    __this_00 = (pCVar1->fields).Animation;
    if (__this_00 == (UnityEngine_Animation_o *)0x0) goto label_05bb4c55;
    bVar2 = UnityEngine_Animation__IsPlaying(__this_00,animation,(MethodInfo *)0x0);
    method_00 = extraout_RDX;
  }
  if (bVar2) {
    return;
  }
  Characters_BaseCharacter__CrossFade(__this,animation,fadeTime,startTime,method_00);
  return;
}


// Characters.BaseCharacter$$GetAnimationSpeed
// il2cpp: float Characters_BaseCharacter__GetAnimationSpeed (Characters_BaseCharacter_o* __this, System_String_o* animation, const MethodInfo* method);
// 0x5bb4c60

float Characters_BaseCharacter__GetAnimationSpeed
                (Characters_BaseCharacter_o *__this,System_String_o *animation,MethodInfo *method)

{
  Characters_AnimationHandler_o *pCVar1;
  System_Collections_Generic_Dictionary_string__float__o *__this_00;
  float fVar2;
  
  pCVar1 = (__this->fields).Animation;
  if (pCVar1 != (Characters_AnimationHandler_o *)0x0) {
    if (Il2CppMethodInitialized_075474c9 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_Dictionary_string_float_get_Item);
      Il2CppMethodInitialized_075474c9 = '\x01';
    }
    __this_00 = (pCVar1->fields)._animationSpeed;
    if (__this_00 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
      fVar2 = System_Collections_Generic_Dictionary_object__float___get_Item
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                         (Il2CppObject *)animation,
                         (MethodInfo_4AB53E0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_float_get_Item);
      return fVar2;
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$SetAnimationSpeed
// il2cpp: void Characters_BaseCharacter__SetAnimationSpeed (Characters_BaseCharacter_o* __this, System_String_o* animation, float speed, const MethodInfo* method);
// 0x5bb4cc0

void Characters_BaseCharacter__SetAnimationSpeed
               (Characters_BaseCharacter_o *__this,System_String_o *animation,float speed,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *__this_00;
  System_Object_array *parameters;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  float local_1c;
  
  if (Il2CppMethodInitialized_075474ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"SetAnimationSpeedRPC");
    Il2CppMethodInitialized_075474ef = '\x01';
  }
  pUVar1 = (__this->fields).Cache;
  if (pUVar1 == (Utility_BaseComponentCache_o *)0x0) {
label_05bb4dea:
    ThrowNullReferenceException();
  }
  __this_00 = (pUVar1->fields).PhotonView;
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
  if (parameters == (System_Object_array *)0x0) goto label_05bb4dea;
  if (animation != (System_String_o *)0x0) {
    pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)animation,(((parameters->obj).klass)->_1).element_class);
    if (pIVar2 == (Il2CppObject *)0x0) goto label_05bb4df4;
  }
  if ((int)parameters->max_length != 0) {
    parameters->m_Items[0] = (Il2CppObject *)animation;
    Il2CppCodeGenWriteBarrier(parameters->m_Items);
    local_1c = speed;
    pIVar2 = il2cpp_vm_Object_Box(g_data_07556740,&local_1c);
    if (pIVar2 != (Il2CppObject *)0x0) {
      pIVar3 = il2cpp_vm_Object_IsInst(pIVar2,(((parameters->obj).klass)->_1).element_class);
      if (pIVar3 == (Il2CppObject *)0x0) {
label_05bb4df4:
        pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
      }
    }
    if ((parameters->max_length & 0xfffffffe) != 0) {
      parameters->m_Items[1] = pIVar2;
      Il2CppCodeGenWriteBarrier(parameters->m_Items + 1);
      if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(__this_00,"SetAnimationSpeedRPC",0,parameters,(MethodInfo *)0x0);
        return;
      }
      goto label_05bb4dea;
    }
  }
  ThrowIndexOutOfRangeException();
}


// Characters.BaseCharacter$$SetAnimationSpeedNonRPC
// il2cpp: void Characters_BaseCharacter__SetAnimationSpeedNonRPC (Characters_BaseCharacter_o* __this, System_String_o* animation, float speed, const MethodInfo* method);
// 0x5bb4e10

void Characters_BaseCharacter__SetAnimationSpeedNonRPC
               (Characters_BaseCharacter_o *__this,System_String_o *animation,float speed,MethodInfo *method)

{
  Characters_AnimationHandler_o *__this_00;
  System_Collections_Generic_Dictionary_string__float__o *__this_01;
  MethodInfo *method_00;
  
  __this_00 = (__this->fields).Animation;
  if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
    if (Il2CppMethodInitialized_075474cd == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_Dictionary_string_float_set_Item);
      Il2CppMethodInitialized_075474cd = '\x01';
    }
    __this_01 = (__this_00->fields)._animationSpeed;
    if (__this_01 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
      System_Collections_Generic_Dictionary_object__float___set_Item
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,(Il2CppObject *)animation,
                 speed,(MethodInfo_4AB5450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_float_set_Item);
      Characters_AnimationHandler__ApplySpeed(__this_00,animation,method_00);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$SetAnimationSpeedRPC
// il2cpp: void Characters_BaseCharacter__SetAnimationSpeedRPC (Characters_BaseCharacter_o* __this, System_String_o* animation, float speed, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5bb4e80

void Characters_BaseCharacter__SetAnimationSpeedRPC
               (Characters_BaseCharacter_o *__this,System_String_o *animation,float speed,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  Characters_AnimationHandler_o *__this_00;
  System_Collections_Generic_Dictionary_string__float__o *__this_01;
  MethodInfo *method_00;
  
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
     (pPVar2 = (pUVar1->fields).PhotonView, pPVar2 != (Photon_Pun_PhotonView_o *)0x0)) {
    if (info.fields.Sender != (pPVar2->fields)._Owner_k__BackingField) {
      return;
    }
    __this_00 = (__this->fields).Animation;
    if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
      if (Il2CppMethodInitialized_075474cd == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_Dictionary_string_float_set_Item);
        Il2CppMethodInitialized_075474cd = '\x01';
      }
      __this_01 = (__this_00->fields)._animationSpeed;
      if (__this_01 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
        System_Collections_Generic_Dictionary_object__float___set_Item
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                   (Il2CppObject *)animation,speed,
                   (MethodInfo_4AB5450 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_float_set_Item);
        Characters_AnimationHandler__ApplySpeed(__this_00,animation,method_00);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$CrossFadeRPC
// il2cpp: void Characters_BaseCharacter__CrossFadeRPC (Characters_BaseCharacter_o* __this, System_String_o* animation, float fadeTime, float startTime, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5bb4f20

void Characters_BaseCharacter__CrossFadeRPC
               (Characters_BaseCharacter_o *__this,System_String_o *animation,float fadeTime,float startTime,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  Characters_AnimationHandler_o *__this_00;
  
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
     (pPVar2 = (pUVar1->fields).PhotonView, pPVar2 != (Photon_Pun_PhotonView_o *)0x0)) {
    if (info.fields.Sender != (pPVar2->fields)._Owner_k__BackingField) {
      return;
    }
    __this_00 = (__this->fields).Animation;
    if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
      Characters_AnimationHandler__CrossFade(__this_00,animation,fadeTime,startTime,method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$CrossFadeWithSpeedRPC
// il2cpp: void Characters_BaseCharacter__CrossFadeWithSpeedRPC (Characters_BaseCharacter_o* __this, System_String_o* animation, float speed, float fadeTime, float startTime, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5bb4f60

void Characters_BaseCharacter__CrossFadeWithSpeedRPC
               (Characters_BaseCharacter_o *__this,System_String_o *animation,float speed,float fadeTime,
               float startTime,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  Characters_AnimationHandler_o *pCVar3;
  System_Collections_Generic_Dictionary_string__float__o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
     (pPVar2 = (pUVar1->fields).PhotonView, pPVar2 != (Photon_Pun_PhotonView_o *)0x0)) {
    if (info.fields.Sender != (pPVar2->fields)._Owner_k__BackingField) {
      return;
    }
    pCVar3 = (__this->fields).Animation;
    if (pCVar3 != (Characters_AnimationHandler_o *)0x0) {
      if (Il2CppMethodInitialized_075474cd == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_Dictionary_string_float_set_Item);
        Il2CppMethodInitialized_075474cd = '\x01';
      }
      __this_00 = (pCVar3->fields)._animationSpeed;
      if (__this_00 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
        System_Collections_Generic_Dictionary_object__float___set_Item
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                   (Il2CppObject *)animation,speed,
                   (MethodInfo_4AB5450 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_float_set_Item);
        Characters_AnimationHandler__ApplySpeed(pCVar3,animation,method_00);
        pCVar3 = (__this->fields).Animation;
        if (pCVar3 != (Characters_AnimationHandler_o *)0x0) {
          Characters_AnimationHandler__CrossFade(pCVar3,animation,fadeTime,startTime,method_01);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$PlaySound
// il2cpp: void Characters_BaseCharacter__PlaySound (Characters_BaseCharacter_o* __this, System_String_o* sound, const MethodInfo* method);
// 0x5bb5040

void Characters_BaseCharacter__PlaySound
               (Characters_BaseCharacter_o *__this,System_String_o *sound,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Photon_Pun_PhotonView_o *__this_01;
  bool bVar2;
  System_Object_array *parameters;
  Il2CppObject *pIVar3;
  
  if (Il2CppMethodInitialized_075474f0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"PlaySoundRPC");
    Il2CppMethodInitialized_075474f0 = '\x01';
  }
  bVar2 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method);
  if (!bVar2) {
    return;
  }
  if (Il2CppMethodInitialized_075474f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_ContainsKey);
    Il2CppMethodInitialized_075474f1 = '\x01';
  }
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
     (__this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(pUVar1->fields).AudioSources,
     __this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (__this_00,(Il2CppObject *)sound,
                       (MethodInfo_4AAD6F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_ContainsKey);
    if (!bVar2) {
      return;
    }
    pUVar1 = (__this->fields).Cache;
    if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
      __this_01 = (pUVar1->fields).PhotonView;
      parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
      if (parameters != (System_Object_array *)0x0) {
        if ((sound != (System_String_o *)0x0) &&
           (pIVar3 = il2cpp_vm_Object_IsInst
                               ((Il2CppObject *)sound,(((parameters->obj).klass)->_1).element_class),
           pIVar3 == (Il2CppObject *)0x0)) {
          pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
        }
        if ((int)parameters->max_length == 0) {
          ThrowIndexOutOfRangeException();
        }
        parameters->m_Items[0] = (Il2CppObject *)sound;
        Il2CppCodeGenWriteBarrier(parameters->m_Items);
        if (__this_01 != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC(__this_01,"PlaySoundRPC",0,parameters,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$HasSound
// il2cpp: bool Characters_BaseCharacter__HasSound (Characters_BaseCharacter_o* __this, System_String_o* sound, const MethodInfo* method);
// 0x5bb5190

bool Characters_BaseCharacter__HasSound
               (Characters_BaseCharacter_o *__this,System_String_o *sound,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar2;
  
  if (Il2CppMethodInitialized_075474f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_ContainsKey);
    Il2CppMethodInitialized_075474f1 = '\x01';
  }
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
     (__this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(pUVar1->fields).AudioSources,
     __this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    ThrowNullReferenceException();
  }
  bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                    (__this_00,(Il2CppObject *)sound,
                     (MethodInfo_4AAD6F0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_ContainsKey);
  return bVar2;
}


// Characters.BaseCharacter$$IsPlayingSound
// il2cpp: bool Characters_BaseCharacter__IsPlayingSound (Characters_BaseCharacter_o* __this, System_String_o* sound, const MethodInfo* method);
// 0x5bb51f0

bool Characters_BaseCharacter__IsPlayingSound
               (Characters_BaseCharacter_o *__this,System_String_o *sound,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar2;
  UnityEngine_AudioSource_o *local_18;
  
  if (Il2CppMethodInitialized_075474f2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_TryGetValue);
    Il2CppMethodInitialized_075474f2 = '\x01';
  }
  local_18 = (UnityEngine_AudioSource_o *)0x0;
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
     (__this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(pUVar1->fields).AudioSources,
     __this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    bVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this_00,(Il2CppObject *)sound,(Il2CppObject **)&local_18,
                       (MethodInfo_4AAF440 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_TryGetValue);
    if (!bVar2) {
      return false;
    }
    if (local_18 != (UnityEngine_AudioSource_o *)0x0) {
      bVar2 = UnityEngine_AudioSource__get_isPlaying(local_18,(MethodInfo *)0x0);
      return bVar2;
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$WaitAndPlaySound
// il2cpp: System_Collections_IEnumerator_o* Characters_BaseCharacter__WaitAndPlaySound (Characters_BaseCharacter_o* __this, System_String_o* sound, float delay, const MethodInfo* method);
// 0x5bb5280

System_Collections_IEnumerator_o *
Characters_BaseCharacter__WaitAndPlaySound
          (Characters_BaseCharacter_o *__this,System_String_o *sound,float delay,MethodInfo *method)

{
  Characters_BaseCharacter__WaitAndPlaySound_d__124_o *__this_00;
  
  if (Il2CppMethodInitialized_075474f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseCharacter_WaitAndPlaySound_d__124);
    Il2CppMethodInitialized_075474f3 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Characters_BaseCharacter_WaitAndPlaySound_d__124);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).sound = sound;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).sound);
  (__this_00->fields).delay = delay;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Characters.BaseCharacter$$PlaySoundRPC
// il2cpp: void Characters_BaseCharacter__PlaySoundRPC (Characters_BaseCharacter_o* __this, System_String_o* sound, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5bb5330

void Characters_BaseCharacter__PlaySoundRPC
               (Characters_BaseCharacter_o *__this,System_String_o *sound,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  bool bVar4;
  UnityEngine_AudioSource_o *__this_00;
  
  if (Il2CppMethodInitialized_075474f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_get_Item);
    Il2CppMethodInitialized_075474f4 = '\x01';
  }
  if (info.fields.Sender != (Photon_Realtime_Player_o *)0x0) {
    pUVar1 = (__this->fields).Cache;
    if ((pUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
       (pPVar2 = (pUVar1->fields).PhotonView, pPVar2 == (Photon_Pun_PhotonView_o *)0x0)) goto label_05bb5405;
    if (info.fields.Sender != (pPVar2->fields)._Owner_k__BackingField) {
      return;
    }
  }
  if ((__this->fields).SoundsEnabled == false) {
    return;
  }
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
     (pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(pUVar1->fields).AudioSources,
     pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    bVar4 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar3,(Il2CppObject *)sound,
                       (MethodInfo_4AAD6F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_ContainsKey);
    if (!bVar4) {
      return;
    }
    pUVar1 = (__this->fields).Cache;
    if (((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
        (pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(pUVar1->fields).AudioSources,
        pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) &&
       (__this_00 = System_Collections_Generic_Dictionary_object__object___get_Item
                              (pSVar3,(Il2CppObject *)sound,
                               (MethodInfo_4AAD450 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_get_Item),
       __this_00 != (UnityEngine_AudioSource_o *)0x0)) {
      UnityEngine_AudioSource__Play_68b06a0(__this_00,(MethodInfo *)0x0);
      return;
    }
  }
label_05bb5405:
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$StopSound
// il2cpp: void Characters_BaseCharacter__StopSound (Characters_BaseCharacter_o* __this, System_String_o* sound, const MethodInfo* method);
// 0x5bb5410

void Characters_BaseCharacter__StopSound
               (Characters_BaseCharacter_o *__this,System_String_o *sound,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Photon_Pun_PhotonView_o *__this_01;
  bool bVar2;
  System_Object_array *parameters;
  Il2CppObject *pIVar3;
  
  if (Il2CppMethodInitialized_075474f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"StopSoundRPC");
    Il2CppMethodInitialized_075474f5 = '\x01';
  }
  bVar2 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method);
  if (!bVar2) {
    return;
  }
  if (Il2CppMethodInitialized_075474f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_ContainsKey);
    Il2CppMethodInitialized_075474f1 = '\x01';
  }
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
     (__this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(pUVar1->fields).AudioSources,
     __this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (__this_00,(Il2CppObject *)sound,
                       (MethodInfo_4AAD6F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_ContainsKey);
    if (!bVar2) {
      return;
    }
    pUVar1 = (__this->fields).Cache;
    if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
      __this_01 = (pUVar1->fields).PhotonView;
      parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
      if (parameters != (System_Object_array *)0x0) {
        if ((sound != (System_String_o *)0x0) &&
           (pIVar3 = il2cpp_vm_Object_IsInst
                               ((Il2CppObject *)sound,(((parameters->obj).klass)->_1).element_class),
           pIVar3 == (Il2CppObject *)0x0)) {
          pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
        }
        if ((int)parameters->max_length == 0) {
          ThrowIndexOutOfRangeException();
        }
        parameters->m_Items[0] = (Il2CppObject *)sound;
        Il2CppCodeGenWriteBarrier(parameters->m_Items);
        if (__this_01 != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC(__this_01,"StopSoundRPC",0,parameters,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$FadeSound
// il2cpp: void Characters_BaseCharacter__FadeSound (Characters_BaseCharacter_o* __this, System_String_o* sound, float volume, float time, const MethodInfo* method);
// 0x5bb5560

void Characters_BaseCharacter__FadeSound
               (Characters_BaseCharacter_o *__this,System_String_o *sound,float volume,float time,
               MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Photon_Pun_PhotonView_o *__this_01;
  bool bVar2;
  System_Object_array *parameters;
  Il2CppObject *pIVar3;
  Il2CppObject *pIVar4;
  float local_28;
  float fStack_24;
  
  if (Il2CppMethodInitialized_075474f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"FadeSoundRPC");
    Il2CppMethodInitialized_075474f6 = '\x01';
  }
  bVar2 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method);
  if (!bVar2) {
    return;
  }
  if (Il2CppMethodInitialized_075474f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_ContainsKey);
    Il2CppMethodInitialized_075474f1 = '\x01';
  }
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
     (__this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(pUVar1->fields).AudioSources,
     __this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (__this_00,(Il2CppObject *)sound,
                       (MethodInfo_4AAD6F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_ContainsKey);
    if (!bVar2) {
      return;
    }
    pUVar1 = (__this->fields).Cache;
    if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
      __this_01 = (pUVar1->fields).PhotonView;
      parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,3);
      if (parameters != (System_Object_array *)0x0) {
        if ((sound != (System_String_o *)0x0) &&
           (pIVar3 = il2cpp_vm_Object_IsInst
                               ((Il2CppObject *)sound,(((parameters->obj).klass)->_1).element_class),
           pIVar3 == (Il2CppObject *)0x0)) {
label_05bb5762:
          pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
        }
        if ((int)parameters->max_length != 0) {
          parameters->m_Items[0] = (Il2CppObject *)sound;
          Il2CppCodeGenWriteBarrier(parameters->m_Items);
          fStack_24 = volume;
          pIVar3 = il2cpp_vm_Object_Box(g_data_07556740,&fStack_24);
          if ((pIVar3 != (Il2CppObject *)0x0) &&
             (pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((parameters->obj).klass)->_1).element_class),
             pIVar4 == (Il2CppObject *)0x0)) goto label_05bb5762;
          if ((parameters->max_length & 0xfffffffe) != 0) {
            parameters->m_Items[1] = pIVar3;
            Il2CppCodeGenWriteBarrier(parameters->m_Items + 1);
            local_28 = time;
            pIVar3 = il2cpp_vm_Object_Box(g_data_07556740,&local_28);
            if ((pIVar3 != (Il2CppObject *)0x0) &&
               (pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((parameters->obj).klass)->_1).element_class),
               pIVar4 == (Il2CppObject *)0x0)) goto label_05bb5762;
            if (2 < (uint)parameters->max_length) {
              parameters->m_Items[2] = pIVar3;
              Il2CppCodeGenWriteBarrier(parameters->m_Items + 2);
              if (__this_01 != (Photon_Pun_PhotonView_o *)0x0) {
                Photon_Pun_PhotonView__RPC(__this_01,"FadeSoundRPC",0,parameters,(MethodInfo *)0x0);
                return;
              }
              goto label_05bb5758;
            }
          }
        }
        ThrowIndexOutOfRangeException();
      }
    }
  }
label_05bb5758:
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$FadeSoundRPC
// il2cpp: void Characters_BaseCharacter__FadeSoundRPC (Characters_BaseCharacter_o* __this, System_String_o* sound, float volume, float time, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5bb5780
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5bb583e: jmp 0x5bb5849

void Characters_BaseCharacter__FadeSoundRPC
               (Characters_BaseCharacter_o *__this,System_String_o *sound,float volume,float time,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_AudioSource__Coroutine__o **targetAddress;
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  UnityEngine_AudioSource_o *key;
  bool bVar4;
  System_Collections_Generic_Dictionary_AudioSource__Coroutine__o *pSVar5;
  Characters_BaseCharacter__FadeSoundOverTime_d__129_o *__this_00;
  UnityEngine_Coroutine_o *value;
  UnityEngine_AudioSource_o *pUStack_38;
  float fStack_30;
  float fStack_2c;
  UnityEngine_Coroutine_o *pUStack_28;
  
  fStack_30 = volume;
  fStack_2c = time;
  if (Il2CppMethodInitialized_075474f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_AudioSource_Coroutine_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_AudioSource_Coroutine_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_AudioSource_Coroutine_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_AudioSource_Coroutine_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_AudioSource_Coroutine);
    Il2CppMethodInitialized_075474f7 = '\x01';
  }
  pUStack_38 = (UnityEngine_AudioSource_o *)0x0;
  pUStack_28 = (UnityEngine_Coroutine_o *)0x0;
  pUVar1 = (__this->fields).Cache;
  if (info.fields.Sender == (Photon_Realtime_Player_o *)0x0) {
    if (pUVar1 == (Utility_BaseComponentCache_o *)0x0) goto label_05bb59e8;
  }
  else {
    if ((pUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
       (pPVar2 = (pUVar1->fields).PhotonView, pPVar2 == (Photon_Pun_PhotonView_o *)0x0)) goto label_05bb59e8;
    if (info.fields.Sender != (pPVar2->fields)._Owner_k__BackingField) {
      return;
    }
  }
  pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(pUVar1->fields).AudioSources;
  if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05bb59e8;
  bVar4 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                    (pSVar3,(Il2CppObject *)sound,(Il2CppObject **)&pUStack_38,
                     (MethodInfo_4AAF440 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_TryGetValue);
  if (bVar4) {
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._soundFades;
    if ((pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
       (bVar4 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                          (pSVar3,(Il2CppObject *)pUStack_38,(Il2CppObject **)&pUStack_28,
                           (MethodInfo_4AAF440 *)
                           MethodInfo_System_Collections_Generic_Dictionary_AudioSource_Coroutine_TryGetValue)
       , bVar4)) {
      UnityEngine_MonoBehaviour__StopCoroutine_691c6e0
                ((UnityEngine_MonoBehaviour_o *)__this,pUStack_28,(MethodInfo *)0x0);
      pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._soundFades;
      if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05bb59e8;
      System_Collections_Generic_Dictionary_object__object___Remove
                (pSVar3,(Il2CppObject *)pUStack_38,
                 (MethodInfo_4AAED10 *)
                 MethodInfo_System_Collections_Generic_Dictionary_AudioSource_Coroutine_Remove);
    }
    if ((fStack_2c <= 0.0) || ((__this->fields).SoundsEnabled == false)) {
      if (pUStack_38 == (UnityEngine_AudioSource_o *)0x0) goto label_05bb59e8;
      UnityEngine_AudioSource__set_volume(pUStack_38,fStack_30,(MethodInfo *)0x0);
    }
    else {
      targetAddress = &(__this->fields)._soundFades;
      pSVar5 = *targetAddress;
      if (pSVar5 == (System_Collections_Generic_Dictionary_AudioSource__Coroutine__o *)0x0) {
        pSVar5 = il2cpp_codegen_object_new
                           ((Il2CppClass *)
                            TypeInfo_System_Collections_Generic_Dictionary_AudioSource_Coroutine);
        System_Collections_Generic_Dictionary_object__object____ctor
                  ((System_Collections_Generic_Dictionary_object__object__o *)pSVar5,
                   (MethodInfo_4AAC8D0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_AudioSource_Coroutine_ctor);
        *targetAddress = pSVar5;
        Il2CppCodeGenWriteBarrier(targetAddress);
        pSVar5 = *targetAddress;
      }
      key = pUStack_38;
      if (Il2CppMethodInitialized_075474f8 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Characters_BaseCharacter_FadeSoundOverTime_d__129);
        Il2CppMethodInitialized_075474f8 = '\x01';
      }
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Characters_BaseCharacter_FadeSoundOverTime_d__129);
      System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
      (__this_00->fields).__1__state = 0;
      (__this_00->fields).__4__this = __this;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
      (__this_00->fields).source = key;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).source);
      (__this_00->fields).volume = fStack_30;
      (__this_00->fields).time = fStack_2c;
      value = UnityEngine_MonoBehaviour__StartCoroutine_691c390
                        ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
                         (MethodInfo *)0x0);
      if (pSVar5 == (System_Collections_Generic_Dictionary_AudioSource__Coroutine__o *)0x0) {
label_05bb59e8:
        ThrowNullReferenceException();
      }
      System_Collections_Generic_Dictionary_object__object___set_Item
                ((System_Collections_Generic_Dictionary_object__object__o *)pSVar5,(Il2CppObject *)key,
                 (Il2CppObject *)value,
                 (MethodInfo_4AAD4C0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_AudioSource_Coroutine_set_Item);
    }
  }
  return;
}


// Characters.BaseCharacter$$FadeSoundOverTime
// il2cpp: System_Collections_IEnumerator_o* Characters_BaseCharacter__FadeSoundOverTime (Characters_BaseCharacter_o* __this, UnityEngine_AudioSource_o* source, float volume, float time, const MethodInfo* method);
// 0x5bb59f0

System_Collections_IEnumerator_o *
Characters_BaseCharacter__FadeSoundOverTime
          (Characters_BaseCharacter_o *__this,UnityEngine_AudioSource_o *source,float volume,float time,
          MethodInfo *method)

{
  Characters_BaseCharacter__FadeSoundOverTime_d__129_o *__this_00;
  
  if (Il2CppMethodInitialized_075474f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseCharacter_FadeSoundOverTime_d__129);
    Il2CppMethodInitialized_075474f8 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Characters_BaseCharacter_FadeSoundOverTime_d__129);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).source = source;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).source);
  (__this_00->fields).volume = volume;
  (__this_00->fields).time = time;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Characters.BaseCharacter$$StopSoundRPC
// il2cpp: void Characters_BaseCharacter__StopSoundRPC (Characters_BaseCharacter_o* __this, System_String_o* sound, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5bb5ab0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5bb5b0f: jmp 0x5bb5b16

void Characters_BaseCharacter__StopSoundRPC
               (Characters_BaseCharacter_o *__this,System_String_o *sound,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  bool bVar4;
  UnityEngine_AudioSource_o *__this_00;
  
  if (Il2CppMethodInitialized_075474f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_get_Item);
    Il2CppMethodInitialized_075474f9 = '\x01';
  }
  pUVar1 = (__this->fields).Cache;
  if (info.fields.Sender == (Photon_Realtime_Player_o *)0x0) {
    if (pUVar1 == (Utility_BaseComponentCache_o *)0x0) goto label_05bb5b76;
  }
  else {
    if ((pUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
       (pPVar2 = (pUVar1->fields).PhotonView, pPVar2 == (Photon_Pun_PhotonView_o *)0x0)) goto label_05bb5b76;
    if (info.fields.Sender != (pPVar2->fields)._Owner_k__BackingField) {
      return;
    }
  }
  pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(pUVar1->fields).AudioSources;
  if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar4 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar3,(Il2CppObject *)sound,
                       (MethodInfo_4AAD6F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_ContainsKey);
    if (!bVar4) {
      return;
    }
    pUVar1 = (__this->fields).Cache;
    if (((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
        (pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(pUVar1->fields).AudioSources,
        pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) &&
       (__this_00 = System_Collections_Generic_Dictionary_object__object___get_Item
                              (pSVar3,(Il2CppObject *)sound,
                               (MethodInfo_4AAD450 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_get_Item),
       __this_00 != (UnityEngine_AudioSource_o *)0x0)) {
      UnityEngine_AudioSource__Stop_68b0850(__this_00,(MethodInfo *)0x0);
      return;
    }
  }
label_05bb5b76:
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$OnHealthChange
// il2cpp: void Characters_BaseCharacter__OnHealthChange (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x5bb5b80

void Characters_BaseCharacter__OnHealthChange(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *__this_00;
  bool bVar2;
  System_Object_array *parameters;
  Il2CppObject *pIVar3;
  Il2CppObject *pIVar4;
  int32_t local_30;
  int32_t local_2c;
  
  if (Il2CppMethodInitialized_075474fa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"SetHealthRPC");
    Il2CppMethodInitialized_075474fa = '\x01';
  }
  bVar2 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method);
  if (!bVar2) {
    return;
  }
  pUVar1 = (__this->fields).Cache;
  if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
    __this_00 = (pUVar1->fields).PhotonView;
    parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
    local_2c = (__this->fields).CurrentHealth;
    pIVar3 = il2cpp_vm_Object_Box(g_data_07556710,&local_2c);
    if (parameters != (System_Object_array *)0x0) {
      if ((pIVar3 != (Il2CppObject *)0x0) &&
         (pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((parameters->obj).klass)->_1).element_class),
         pIVar4 == (Il2CppObject *)0x0)) {
label_05bb5ced:
        pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
      }
      if ((int)parameters->max_length != 0) {
        parameters->m_Items[0] = pIVar3;
        Il2CppCodeGenWriteBarrier(parameters->m_Items);
        local_30 = (__this->fields).MaxHealth;
        pIVar3 = il2cpp_vm_Object_Box(g_data_07556710,&local_30);
        if ((pIVar3 != (Il2CppObject *)0x0) &&
           (pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((parameters->obj).klass)->_1).element_class),
           pIVar4 == (Il2CppObject *)0x0)) goto label_05bb5ced;
        if ((parameters->max_length & 0xfffffffe) != 0) {
          parameters->m_Items[1] = pIVar3;
          Il2CppCodeGenWriteBarrier(parameters->m_Items + 1);
          if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
            Photon_Pun_PhotonView__RPC(__this_00,"SetHealthRPC",0,parameters,(MethodInfo *)0x0);
            return;
          }
          goto label_05bb5ce3;
        }
      }
      ThrowIndexOutOfRangeException();
    }
  }
label_05bb5ce3:
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$OnHit
// il2cpp: void Characters_BaseCharacter__OnHit (Characters_BaseCharacter_o* __this, Characters_BaseHitbox_o* hitbox, Il2CppObject* victim, UnityEngine_Collider_o* collider, System_String_o* type, bool firstHit, const MethodInfo* method);
// 0x5bb5d00

void Characters_BaseCharacter__OnHit
               (Characters_BaseCharacter_o *__this,Characters_BaseHitbox_o *hitbox,Il2CppObject *victim,
               UnityEngine_Collider_o *collider,System_String_o *type,bool firstHit,MethodInfo *method)

{
  return;
}


// Characters.BaseCharacter$$GetHitRPC
// il2cpp: void Characters_BaseCharacter__GetHitRPC (Characters_BaseCharacter_o* __this, int32_t viewId, System_String_o* name, int32_t damage, System_String_o* type, System_String_o* collider, const MethodInfo* method);
// 0x5bb5d10
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5bb5fb8: jmp 0x5bb622f

void Characters_BaseCharacter__GetHitRPC
               (Characters_BaseCharacter_o *__this,int32_t viewId,System_String_o *name,int32_t damage,
               System_String_o *type,System_String_o *collider,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  System_String_o *obj;
  bool bVar3;
  Characters_BaseCharacter_o *x;
  System_Object_array *pSVar4;
  Il2CppObject *pIVar5;
  Il2CppObject *pIVar6;
  CustomLogic_CustomLogicEvaluator_o *pCVar7;
  MethodInfo *pMVar8;
  int32_t local_58;
  int32_t local_54;
  int32_t local_50;
  int32_t local_4c;
  Photon_Pun_PhotonView_o *local_48;
  Characters_BaseCharacter_o *local_40;
  MethodInfo *local_38;
  
  local_38 = (MethodInfo *)type;
  if (Il2CppMethodInitialized_075474fb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&"NotifyDamagedRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"NotifyDieRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowKillFeedWithPlayersRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_075474fb = '\x01';
  }
  if ((damage == 0) || ((__this->fields).Dead != false)) {
    return;
  }
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  x = Utility_Util__FindCharacterByViewId(viewId,(MethodInfo *)0x0);
  bVar3 = System_String__op_Equality(name,"",(MethodInfo *)0x0);
  if (bVar3) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      if (x == (Characters_BaseCharacter_o *)0x0) goto label_05bb6318;
      name = (x->fields).RichTextName;
    }
  }
  local_40 = x;
  (*(__this->klass->vtable)._82_TakeDamage.methodPtr)
            (__this,damage,(__this->klass->vtable)._82_TakeDamage.method);
  pUVar1 = (__this->fields).Cache;
  if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
    pPVar2 = (pUVar1->fields).PhotonView;
    pSVar4 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,3);
    local_58 = viewId;
    local_50 = viewId;
    pIVar5 = il2cpp_vm_Object_Box(g_data_07556710,&local_58);
    if (pSVar4 != (System_Object_array *)0x0) {
      if ((pIVar5 != (Il2CppObject *)0x0) &&
         (pIVar6 = il2cpp_vm_Object_IsInst(pIVar5,(((pSVar4->obj).klass)->_1).element_class),
         pIVar6 == (Il2CppObject *)0x0)) {
label_05bb6322:
        pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
      }
      if ((int)pSVar4->max_length != 0) {
        pSVar4->m_Items[0] = pIVar5;
        Il2CppCodeGenWriteBarrier(pSVar4->m_Items);
        if ((name != (System_String_o *)0x0) &&
           (pIVar5 = il2cpp_vm_Object_IsInst((Il2CppObject *)name,(((pSVar4->obj).klass)->_1).element_class),
           pIVar5 == (Il2CppObject *)0x0)) goto label_05bb6322;
        if ((pSVar4->max_length & 0xfffffffe) != 0) {
          pSVar4->m_Items[1] = (Il2CppObject *)name;
          Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 1);
          local_54 = damage;
          pIVar5 = il2cpp_vm_Object_Box(g_data_07556710,&local_54);
          if ((pIVar5 != (Il2CppObject *)0x0) &&
             (pIVar6 = il2cpp_vm_Object_IsInst(pIVar5,(((pSVar4->obj).klass)->_1).element_class),
             pIVar6 == (Il2CppObject *)0x0)) goto label_05bb6322;
          if (2 < (uint)pSVar4->max_length) {
            pSVar4->m_Items[2] = pIVar5;
            Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 2);
            if (pPVar2 == (Photon_Pun_PhotonView_o *)0x0) goto label_05bb6318;
            Photon_Pun_PhotonView__RPC(pPVar2,"NotifyDamagedRPC",0,pSVar4,(MethodInfo *)0x0);
            if (0 < (__this->fields).CurrentHealth) {
              return;
            }
            if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
              pCVar7 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
            }
            else {
              pCVar7 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
            }
            if (pCVar7 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
              if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
                pCVar7 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
                if (pCVar7 == (CustomLogic_CustomLogicEvaluator_o *)0x0) goto label_05bb6318;
              }
              if ((pCVar7->fields).DefaultShowKillFeed != false) {
                pPVar2 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
                pSVar4 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,6);
                if (pSVar4 == (System_Object_array *)0x0) goto label_05bb6318;
                if ((name != (System_String_o *)0x0) &&
                   (pIVar5 = il2cpp_vm_Object_IsInst
                                       ((Il2CppObject *)name,(((pSVar4->obj).klass)->_1).element_class),
                   pIVar5 == (Il2CppObject *)0x0)) goto label_05bb6322;
                local_48 = pPVar2;
                if ((int)pSVar4->max_length == 0) goto label_05bb631d;
                pSVar4->m_Items[0] = (Il2CppObject *)name;
                Il2CppCodeGenWriteBarrier(pSVar4->m_Items);
                obj = (__this->fields).RichTextName;
                if ((obj != (System_String_o *)0x0) &&
                   (pIVar5 = il2cpp_vm_Object_IsInst
                                       ((Il2CppObject *)obj,(((pSVar4->obj).klass)->_1).element_class),
                   pIVar5 == (Il2CppObject *)0x0)) goto label_05bb6322;
                if ((pSVar4->max_length & 0xfffffffe) == 0) goto label_05bb631d;
                pSVar4->m_Items[1] = (Il2CppObject *)obj;
                Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 1);
                local_58 = damage;
                pIVar5 = il2cpp_vm_Object_Box(g_data_07556710,&local_58);
                if ((pIVar5 != (Il2CppObject *)0x0) &&
                   (pIVar6 = il2cpp_vm_Object_IsInst(pIVar5,(((pSVar4->obj).klass)->_1).element_class),
                   pIVar6 == (Il2CppObject *)0x0)) goto label_05bb6322;
                pMVar8 = local_38;
                if ((uint)pSVar4->max_length < 3) goto label_05bb631d;
                pSVar4->m_Items[2] = pIVar5;
                Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 2);
                if ((pMVar8 != (MethodInfo *)0x0) &&
                   (pIVar5 = il2cpp_vm_Object_IsInst
                                       ((Il2CppObject *)pMVar8,(((pSVar4->obj).klass)->_1).element_class),
                   pIVar5 == (Il2CppObject *)0x0)) goto label_05bb6322;
                if ((pSVar4->max_length & 0xfffffffc) == 0) goto label_05bb631d;
                pSVar4->m_Items[3] = (Il2CppObject *)pMVar8;
                Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 3);
                local_54 = Characters_BaseCharacter__KillFeedActorNumber(local_40,pMVar8);
                pMVar8 = (MethodInfo *)il2cpp_vm_Object_Box(g_data_07556710,&local_54);
                if ((pMVar8 != (MethodInfo *)0x0) &&
                   (pIVar5 = il2cpp_vm_Object_IsInst
                                       ((Il2CppObject *)pMVar8,(((pSVar4->obj).klass)->_1).element_class),
                   pIVar5 == (Il2CppObject *)0x0)) goto label_05bb6322;
                if ((uint)pSVar4->max_length < 5) goto label_05bb631d;
                pSVar4->m_Items[4] = (Il2CppObject *)pMVar8;
                Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 4);
                local_4c = Characters_BaseCharacter__KillFeedActorNumber(__this,pMVar8);
                pIVar5 = il2cpp_vm_Object_Box(g_data_07556710,&local_4c);
                if ((pIVar5 != (Il2CppObject *)0x0) &&
                   (pIVar6 = il2cpp_vm_Object_IsInst(pIVar5,(((pSVar4->obj).klass)->_1).element_class),
                   pIVar6 == (Il2CppObject *)0x0)) goto label_05bb6322;
                if ((uint)pSVar4->max_length < 6) goto label_05bb631d;
                pSVar4->m_Items[5] = pIVar5;
                Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 5);
                if (local_48 == (Photon_Pun_PhotonView_o *)0x0) goto label_05bb6318;
                Photon_Pun_PhotonView__RPC(local_48,"ShowKillFeedWithPlayersRPC",0,pSVar4,(MethodInfo *)0x0);
              }
            }
            pUVar1 = (__this->fields).Cache;
            if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
              pPVar2 = (pUVar1->fields).PhotonView;
              pSVar4 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
              local_58 = local_50;
              pIVar5 = il2cpp_vm_Object_Box(g_data_07556710,&local_58);
              if (pSVar4 != (System_Object_array *)0x0) {
                if ((pIVar5 != (Il2CppObject *)0x0) &&
                   (pIVar6 = il2cpp_vm_Object_IsInst(pIVar5,(((pSVar4->obj).klass)->_1).element_class),
                   pIVar6 == (Il2CppObject *)0x0)) goto label_05bb6322;
                if ((int)pSVar4->max_length != 0) {
                  pSVar4->m_Items[0] = pIVar5;
                  Il2CppCodeGenWriteBarrier(pSVar4->m_Items);
                  if ((name != (System_String_o *)0x0) &&
                     (pIVar5 = il2cpp_vm_Object_IsInst
                                         ((Il2CppObject *)name,(((pSVar4->obj).klass)->_1).element_class),
                     pIVar5 == (Il2CppObject *)0x0)) goto label_05bb6322;
                  if ((pSVar4->max_length & 0xfffffffe) != 0) {
                    pSVar4->m_Items[1] = (Il2CppObject *)name;
                    Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 1);
                    if (pPVar2 != (Photon_Pun_PhotonView_o *)0x0) {
                      Photon_Pun_PhotonView__RPC(pPVar2,"NotifyDieRPC",0,pSVar4,(MethodInfo *)0x0);
                      return;
                    }
                    goto label_05bb6318;
                  }
                }
                goto label_05bb631d;
              }
            }
            goto label_05bb6318;
          }
        }
      }
label_05bb631d:
      ThrowIndexOutOfRangeException();
    }
  }
label_05bb6318:
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$GetDamagedRPC
// il2cpp: void Characters_BaseCharacter__GetDamagedRPC (Characters_BaseCharacter_o* __this, System_String_o* name, int32_t damage, const MethodInfo* method);
// 0x5bb6410

void Characters_BaseCharacter__GetDamagedRPC
               (Characters_BaseCharacter_o *__this,System_String_o *name,int32_t damage,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  System_String_o *obj;
  System_Object_array *pSVar3;
  Il2CppObject *pIVar4;
  Il2CppObject *pIVar5;
  CustomLogic_CustomLogicEvaluator_o *pCVar6;
  MethodInfo *method_00;
  int32_t iStack_3c;
  int32_t iStack_38;
  int32_t iStack_34;
  
  if (Il2CppMethodInitialized_075474fc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&"NotifyDamagedRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"NotifyDieRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowKillFeedWithPlayersRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_075474fc = '\x01';
  }
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
     (pPVar2 = (pUVar1->fields).PhotonView, pPVar2 != (Photon_Pun_PhotonView_o *)0x0)) {
    if (((pPVar2->fields)._IsMine_k__BackingField == false) || ((__this->fields).Dead != false)) {
      return;
    }
    (*(__this->klass->vtable)._82_TakeDamage.methodPtr)
              (__this,damage,(__this->klass->vtable)._82_TakeDamage.method);
    pUVar1 = (__this->fields).Cache;
    if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
      pPVar2 = (pUVar1->fields).PhotonView;
      pSVar3 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,3);
      iStack_3c = -1;
      pIVar4 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_3c);
      if (pSVar3 != (System_Object_array *)0x0) {
        if ((pIVar4 != (Il2CppObject *)0x0) &&
           (pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((pSVar3->obj).klass)->_1).element_class),
           pIVar5 == (Il2CppObject *)0x0)) {
label_05bb6999:
          pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
        }
        if ((int)pSVar3->max_length != 0) {
          pSVar3->m_Items[0] = pIVar4;
          Il2CppCodeGenWriteBarrier(pSVar3->m_Items);
          if ((name != (System_String_o *)0x0) &&
             (pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)name,(((pSVar3->obj).klass)->_1).element_class)
             , pIVar4 == (Il2CppObject *)0x0)) goto label_05bb6999;
          if ((pSVar3->max_length & 0xfffffffe) != 0) {
            pSVar3->m_Items[1] = (Il2CppObject *)name;
            Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 1);
            iStack_38 = damage;
            pIVar4 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_38);
            if ((pIVar4 != (Il2CppObject *)0x0) &&
               (pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((pSVar3->obj).klass)->_1).element_class),
               pIVar5 == (Il2CppObject *)0x0)) goto label_05bb6999;
            if (2 < (uint)pSVar3->max_length) {
              pSVar3->m_Items[2] = pIVar4;
              Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 2);
              if (pPVar2 == (Photon_Pun_PhotonView_o *)0x0) goto label_05bb698f;
              Photon_Pun_PhotonView__RPC(pPVar2,"NotifyDamagedRPC",0,pSVar3,(MethodInfo *)0x0);
              if (0 < (__this->fields).CurrentHealth) {
                return;
              }
              if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
              }
              pCVar6 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
              if (pCVar6 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
                if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
                  pCVar6 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
                  if (pCVar6 == (CustomLogic_CustomLogicEvaluator_o *)0x0) goto label_05bb698f;
                }
                if ((pCVar6->fields).DefaultShowKillFeed != false) {
                  pPVar2 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
                  pSVar3 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,6);
                  if (pSVar3 == (System_Object_array *)0x0) goto label_05bb698f;
                  if ((name != (System_String_o *)0x0) &&
                     (pIVar4 = il2cpp_vm_Object_IsInst
                                         ((Il2CppObject *)name,(((pSVar3->obj).klass)->_1).element_class),
                     pIVar4 == (Il2CppObject *)0x0)) goto label_05bb6999;
                  if ((int)pSVar3->max_length == 0) goto label_05bb6994;
                  pSVar3->m_Items[0] = (Il2CppObject *)name;
                  Il2CppCodeGenWriteBarrier(pSVar3->m_Items);
                  obj = (__this->fields).RichTextName;
                  if ((obj != (System_String_o *)0x0) &&
                     (pIVar4 = il2cpp_vm_Object_IsInst
                                         ((Il2CppObject *)obj,(((pSVar3->obj).klass)->_1).element_class),
                     pIVar4 == (Il2CppObject *)0x0)) goto label_05bb6999;
                  if ((pSVar3->max_length & 0xfffffffe) == 0) goto label_05bb6994;
                  pSVar3->m_Items[1] = (Il2CppObject *)obj;
                  Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 1);
                  iStack_3c = damage;
                  pIVar4 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_3c);
                  if ((pIVar4 != (Il2CppObject *)0x0) &&
                     (pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((pSVar3->obj).klass)->_1).element_class),
                     pIVar5 == (Il2CppObject *)0x0)) goto label_05bb6999;
                  if ((uint)pSVar3->max_length < 3) goto label_05bb6994;
                  pSVar3->m_Items[2] = pIVar4;
                  Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 2);
                  if (("" != (System_String_o *)0x0) &&
                     (pIVar4 = il2cpp_vm_Object_IsInst
                                         ((Il2CppObject *)"",
                                          (((pSVar3->obj).klass)->_1).element_class),
                     pIVar4 == (Il2CppObject *)0x0)) goto label_05bb6999;
                  if ((pSVar3->max_length & 0xfffffffc) == 0) goto label_05bb6994;
                  pSVar3->m_Items[3] = (Il2CppObject *)"";
                  Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 3);
                  iStack_38 = -1;
                  method_00 = (MethodInfo *)il2cpp_vm_Object_Box(g_data_07556710,&iStack_38);
                  if ((method_00 != (MethodInfo *)0x0) &&
                     (pIVar4 = il2cpp_vm_Object_IsInst
                                         ((Il2CppObject *)method_00,(((pSVar3->obj).klass)->_1).element_class)
                     , pIVar4 == (Il2CppObject *)0x0)) goto label_05bb6999;
                  if ((uint)pSVar3->max_length < 5) goto label_05bb6994;
                  pSVar3->m_Items[4] = (Il2CppObject *)method_00;
                  Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 4);
                  iStack_34 = Characters_BaseCharacter__KillFeedActorNumber(__this,method_00);
                  pIVar4 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_34);
                  if ((pIVar4 != (Il2CppObject *)0x0) &&
                     (pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((pSVar3->obj).klass)->_1).element_class),
                     pIVar5 == (Il2CppObject *)0x0)) goto label_05bb6999;
                  if ((uint)pSVar3->max_length < 6) goto label_05bb6994;
                  pSVar3->m_Items[5] = pIVar4;
                  Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 5);
                  if (pPVar2 == (Photon_Pun_PhotonView_o *)0x0) goto label_05bb698f;
                  Photon_Pun_PhotonView__RPC(pPVar2,"ShowKillFeedWithPlayersRPC",0,pSVar3,(MethodInfo *)0x0);
                }
              }
              pUVar1 = (__this->fields).Cache;
              if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
                pPVar2 = (pUVar1->fields).PhotonView;
                pSVar3 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
                iStack_3c = -1;
                pIVar4 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_3c);
                if (pSVar3 != (System_Object_array *)0x0) {
                  if ((pIVar4 != (Il2CppObject *)0x0) &&
                     (pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((pSVar3->obj).klass)->_1).element_class),
                     pIVar5 == (Il2CppObject *)0x0)) goto label_05bb6999;
                  if ((int)pSVar3->max_length != 0) {
                    pSVar3->m_Items[0] = pIVar4;
                    Il2CppCodeGenWriteBarrier(pSVar3->m_Items);
                    if ((name != (System_String_o *)0x0) &&
                       (pIVar4 = il2cpp_vm_Object_IsInst
                                           ((Il2CppObject *)name,(((pSVar3->obj).klass)->_1).element_class),
                       pIVar4 == (Il2CppObject *)0x0)) goto label_05bb6999;
                    if ((pSVar3->max_length & 0xfffffffe) != 0) {
                      pSVar3->m_Items[1] = (Il2CppObject *)name;
                      Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 1);
                      if (pPVar2 != (Photon_Pun_PhotonView_o *)0x0) {
                        Photon_Pun_PhotonView__RPC(pPVar2,"NotifyDieRPC",0,pSVar3,(MethodInfo *)0x0);
                        return;
                      }
                      goto label_05bb698f;
                    }
                  }
                  goto label_05bb6994;
                }
              }
              goto label_05bb698f;
            }
          }
        }
label_05bb6994:
        ThrowIndexOutOfRangeException();
      }
    }
  }
label_05bb698f:
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$GetKilledRPC
// il2cpp: void Characters_BaseCharacter__GetKilledRPC (Characters_BaseCharacter_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5bb69b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5bb6a97: jmp 0x5bb6d47

void Characters_BaseCharacter__GetKilledRPC
               (Characters_BaseCharacter_o *__this,System_String_o *name,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  System_String_o *obj;
  CustomLogic_CustomLogicEvaluator_o *pCVar3;
  MethodInfo *method_00;
  System_Object_array *pSVar4;
  Il2CppObject *pIVar5;
  Il2CppObject *pIVar6;
  undefined4 uStack_44;
  int32_t iStack_40;
  int32_t iStack_3c;
  Photon_Pun_PhotonView_o *pPStack_38;
  
  if (Il2CppMethodInitialized_075474fd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&"NotifyDieRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowKillFeedWithPlayersRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_075474fd = '\x01';
  }
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
     (pPVar2 = (pUVar1->fields).PhotonView, pPVar2 == (Photon_Pun_PhotonView_o *)0x0)) goto label_05bb6e31;
  if ((pPVar2->fields)._IsMine_k__BackingField == false) {
    return;
  }
  if ((__this->fields).Dead != false) {
    return;
  }
  (__this->fields).CurrentHealth = 0;
  (*(__this->klass->vtable)._88_OnHealthChange.methodPtr)
            (__this,(__this->klass->vtable)._88_OnHealthChange.method);
  if ((__this->fields).CurrentHealth < 1) {
    (*(__this->klass->vtable)._83_Die.methodPtr)(__this,(__this->klass->vtable)._83_Die.method);
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor != 0) goto label_05bb6a87;
label_05bb6ac3:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    pCVar3 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  }
  else {
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) goto label_05bb6ac3;
label_05bb6a87:
    pCVar3 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  }
  if (pCVar3 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      pCVar3 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
      if (pCVar3 == (CustomLogic_CustomLogicEvaluator_o *)0x0) goto label_05bb6e31;
    }
    if ((pCVar3->fields).DefaultShowKillFeed != false) {
      pPVar2 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
      pSVar4 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,6);
      if (pSVar4 == (System_Object_array *)0x0) goto label_05bb6e31;
      if ((name != (System_String_o *)0x0) &&
         (pIVar5 = il2cpp_vm_Object_IsInst((Il2CppObject *)name,(((pSVar4->obj).klass)->_1).element_class),
         pIVar5 == (Il2CppObject *)0x0)) goto label_05bb6e3b;
      if ((int)pSVar4->max_length == 0) goto label_05bb6e36;
      pSVar4->m_Items[0] = (Il2CppObject *)name;
      Il2CppCodeGenWriteBarrier(pSVar4->m_Items);
      obj = (__this->fields).RichTextName;
      if ((obj != (System_String_o *)0x0) &&
         (pIVar5 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((pSVar4->obj).klass)->_1).element_class),
         pIVar5 == (Il2CppObject *)0x0)) goto label_05bb6e3b;
      pPStack_38 = pPVar2;
      if ((pSVar4->max_length & 0xfffffffe) == 0) goto label_05bb6e36;
      pSVar4->m_Items[1] = (Il2CppObject *)obj;
      Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 1);
      uStack_44 = 0;
      pIVar5 = il2cpp_vm_Object_Box(g_data_07556710,&uStack_44);
      if ((pIVar5 != (Il2CppObject *)0x0) &&
         (pIVar6 = il2cpp_vm_Object_IsInst(pIVar5,(((pSVar4->obj).klass)->_1).element_class),
         pIVar6 == (Il2CppObject *)0x0)) goto label_05bb6e3b;
      if ((uint)pSVar4->max_length < 3) goto label_05bb6e36;
      pSVar4->m_Items[2] = pIVar5;
      Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 2);
      if (("" != (System_String_o *)0x0) &&
         (pIVar5 = il2cpp_vm_Object_IsInst
                             ((Il2CppObject *)"",(((pSVar4->obj).klass)->_1).element_class)
         , pIVar5 == (Il2CppObject *)0x0)) goto label_05bb6e3b;
      if ((pSVar4->max_length & 0xfffffffc) == 0) goto label_05bb6e36;
      pSVar4->m_Items[3] = (Il2CppObject *)"";
      Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 3);
      iStack_3c = -1;
      method_00 = (MethodInfo *)il2cpp_vm_Object_Box(g_data_07556710,&iStack_3c);
      if ((method_00 != (MethodInfo *)0x0) &&
         (pIVar5 = il2cpp_vm_Object_IsInst
                             ((Il2CppObject *)method_00,(((pSVar4->obj).klass)->_1).element_class),
         pIVar5 == (Il2CppObject *)0x0)) goto label_05bb6e3b;
      if ((uint)pSVar4->max_length < 5) goto label_05bb6e36;
      pSVar4->m_Items[4] = (Il2CppObject *)method_00;
      Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 4);
      iStack_40 = Characters_BaseCharacter__KillFeedActorNumber(__this,method_00);
      pIVar5 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_40);
      if ((pIVar5 != (Il2CppObject *)0x0) &&
         (pIVar6 = il2cpp_vm_Object_IsInst(pIVar5,(((pSVar4->obj).klass)->_1).element_class),
         pIVar6 == (Il2CppObject *)0x0)) goto label_05bb6e3b;
      pPVar2 = pPStack_38;
      if ((uint)pSVar4->max_length < 6) goto label_05bb6e36;
      pSVar4->m_Items[5] = pIVar5;
      Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 5);
      if (pPVar2 == (Photon_Pun_PhotonView_o *)0x0) goto label_05bb6e31;
      Photon_Pun_PhotonView__RPC(pPVar2,"ShowKillFeedWithPlayersRPC",0,pSVar4,(MethodInfo *)0x0);
    }
  }
  pUVar1 = (__this->fields).Cache;
  if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
    pPVar2 = (pUVar1->fields).PhotonView;
    pSVar4 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
    uStack_44 = 0xffffffff;
    pIVar5 = il2cpp_vm_Object_Box(g_data_07556710,&uStack_44);
    if (pSVar4 != (System_Object_array *)0x0) {
      if ((pIVar5 != (Il2CppObject *)0x0) &&
         (pIVar6 = il2cpp_vm_Object_IsInst(pIVar5,(((pSVar4->obj).klass)->_1).element_class),
         pIVar6 == (Il2CppObject *)0x0)) {
label_05bb6e3b:
        pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
      }
      if ((int)pSVar4->max_length != 0) {
        pSVar4->m_Items[0] = pIVar5;
        Il2CppCodeGenWriteBarrier(pSVar4->m_Items);
        if ((name != (System_String_o *)0x0) &&
           (pIVar5 = il2cpp_vm_Object_IsInst((Il2CppObject *)name,(((pSVar4->obj).klass)->_1).element_class),
           pIVar5 == (Il2CppObject *)0x0)) goto label_05bb6e3b;
        if ((pSVar4->max_length & 0xfffffffe) != 0) {
          pSVar4->m_Items[1] = (Il2CppObject *)name;
          Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 1);
          if (pPVar2 != (Photon_Pun_PhotonView_o *)0x0) {
            Photon_Pun_PhotonView__RPC(pPVar2,"NotifyDieRPC",0,pSVar4,(MethodInfo *)0x0);
            return;
          }
          goto label_05bb6e31;
        }
      }
label_05bb6e36:
      ThrowIndexOutOfRangeException();
    }
  }
label_05bb6e31:
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$KillFeedActorNumber
// il2cpp: int32_t Characters_BaseCharacter__KillFeedActorNumber (Characters_BaseCharacter_o* character, const MethodInfo* method);
// 0x5bb6340

int32_t Characters_BaseCharacter__KillFeedActorNumber
                  (Characters_BaseCharacter_o *character,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  Photon_Realtime_Player_o *pPVar3;
  bool bVar4;
  int32_t iVar5;
  
  if (Il2CppMethodInitialized_075474fe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075474fe = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)character,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  iVar5 = -1;
  if (!bVar4) {
    if (character == (Characters_BaseCharacter_o *)0x0) {
label_05bb6405:
      ThrowNullReferenceException();
    }
    if (((character->fields).AI == false) &&
       (pUVar1 = (character->fields).Cache, pUVar1 != (Utility_BaseComponentCache_o *)0x0)) {
      pPVar2 = (pUVar1->fields).PhotonView;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pPVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar4) {
        pUVar1 = (character->fields).Cache;
        if ((pUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
           (pPVar2 = (pUVar1->fields).PhotonView, pPVar2 == (Photon_Pun_PhotonView_o *)0x0))
        goto label_05bb6405;
        pPVar3 = (pPVar2->fields)._Owner_k__BackingField;
        if (pPVar3 != (Photon_Realtime_Player_o *)0x0) {
          iVar5 = (pPVar3->fields).actorNumber;
        }
      }
    }
  }
  return iVar5;
}


// Characters.BaseCharacter$$MarkDeadRPC
// il2cpp: void Characters_BaseCharacter__MarkDeadRPC (Characters_BaseCharacter_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5bb6e50

void Characters_BaseCharacter__MarkDeadRPC
               (Characters_BaseCharacter_o *__this,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
     (pPVar2 = (pUVar1->fields).PhotonView, pPVar2 == (Photon_Pun_PhotonView_o *)0x0)) {
    ThrowNullReferenceException();
  }
  if (info.fields.Sender == (pPVar2->fields)._Owner_k__BackingField) {
    (__this->fields).Dead = true;
    return;
  }
  return;
}


// Characters.BaseCharacter$$OnNotifyDie
// il2cpp: void Characters_BaseCharacter__OnNotifyDie (Characters_BaseCharacter_o* __this, Characters_BaseCharacter_o* killer, const MethodInfo* method);
// 0x5bb6e90

void Characters_BaseCharacter__OnNotifyDie
               (Characters_BaseCharacter_o *__this,Characters_BaseCharacter_o *killer,MethodInfo *method)

{
  return;
}


// Characters.BaseCharacter$$NotifyDieRPC
// il2cpp: void Characters_BaseCharacter__NotifyDieRPC (Characters_BaseCharacter_o* __this, int32_t viewId, System_String_o* name, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5bb6ea0

void Characters_BaseCharacter__NotifyDieRPC
               (Characters_BaseCharacter_o *__this,int32_t viewId,System_String_o *name,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  GameManagers_InGameManager_o *pGVar3;
  Characters_BaseCharacter_o *x;
  Photon_Realtime_Player_o *player;
  bool bVar4;
  Characters_BaseCharacter_o *pCVar5;
  CustomLogic_CustomLogicEvaluator_o *pCVar6;
  
  if (Il2CppMethodInitialized_075474ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_075474ff = '\x01';
  }
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
     (pPVar2 = (pUVar1->fields).PhotonView, pPVar2 == (Photon_Pun_PhotonView_o *)0x0)) goto label_05bb7181;
  if (info.fields.Sender != (pPVar2->fields)._Owner_k__BackingField) {
    return;
  }
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  pCVar5 = Utility_Util__FindCharacterByViewId(viewId,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    if (pCVar5 == (Characters_BaseCharacter_o *)0x0) goto label_05bb7181;
    name = (pCVar5->fields).RichTextName;
  }
  (*(__this->klass->vtable)._94_OnNotifyDie.methodPtr)
            (__this,pCVar5,(__this->klass->vtable)._94_OnNotifyDie.method);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    if (pCVar5 == (Characters_BaseCharacter_o *)0x0) goto label_05bb7181;
    if (Il2CppMethodInitialized_075474e1 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_075474e1 = '\x01';
    }
    pGVar3 = (pCVar5->fields)._inGameManager;
    if (pGVar3 == (GameManagers_InGameManager_o *)0x0) goto label_05bb7181;
    x = (pGVar3->fields).CurrentCharacter;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)pCVar5,(MethodInfo *)0x0);
    if (bVar4) {
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      pCVar6 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
      if (pCVar6 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
          pCVar6 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
          if (pCVar6 == (CustomLogic_CustomLogicEvaluator_o *)0x0) goto label_05bb7181;
        }
        if ((pCVar6->fields).DefaultAddKillScore != false) {
          pGVar3 = (__this->fields)._inGameManager;
          if (pGVar3 == (GameManagers_InGameManager_o *)0x0) goto label_05bb7181;
          GameManagers_InGameManager__RegisterMainCharacterKill(pGVar3,__this,(MethodInfo *)0x0);
        }
      }
    }
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  pCVar6 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  if (pCVar6 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    return;
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    pCVar6 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    if (pCVar6 == (CustomLogic_CustomLogicEvaluator_o *)0x0) goto label_05bb7181;
  }
  CustomLogic_CustomLogicEvaluator__OnCharacterDie(pCVar6,__this,pCVar5,name,(MethodInfo *)0x0);
  pGVar3 = (__this->fields)._inGameManager;
  if (pGVar3 != (GameManagers_InGameManager_o *)0x0) {
    pCVar5 = (pGVar3->fields).CurrentCharacter;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pCVar5,(UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
    if (!bVar4) {
      return;
    }
    pUVar1 = (__this->fields).Cache;
    if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
       (pPVar2 = (pUVar1->fields).PhotonView, pPVar2 != (Photon_Pun_PhotonView_o *)0x0)) {
      player = (pPVar2->fields)._Owner_k__BackingField;
      if ((TypeInfo_GameManagers_InGameManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_InGameManager);
      }
      GameManagers_InGameManager__OnLocalPlayerDied(player,(MethodInfo *)0x0);
      return;
    }
  }
label_05bb7181:
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$NotifyDamagedRPC
// il2cpp: void Characters_BaseCharacter__NotifyDamagedRPC (Characters_BaseCharacter_o* __this, int32_t viewId, System_String_o* name, int32_t damage, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5bb7190
// asm: 13 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5bb762b: lea rax, [rip + 0x1718ba6]  ; ")"
// asm:   0x5bb7632: mov rsi, qword ptr [rax]
// asm:   0x5bb7635: mov rdi, rbx
// asm:   0x5bb7638: add rdi, 0x50
// asm:   0x5bb763c: mov qword ptr [rbx + 0x50], rsi
// asm:   0x5bb7640: call 0x30d5fb0  ; Il2CppCodeGenWriteBarrier()
// asm:   0x5bb7645: mov rdi, rbx
// asm:   0x5bb7648: xor esi, esi
// asm:   0x5bb764a: call 0x5402910  ; System_String__Concat()
// asm:   0x5bb764f: mov rdi, rax
// asm:   0x5bb7652: xor esi, esi
// asm:   0x5bb7654: call 0x5932c30  ; GameManagers_ChatManager__AddFeed()
// asm:   0x5bb7659: jmp 0x5bb7289

void Characters_BaseCharacter__NotifyDamagedRPC
               (Characters_BaseCharacter_o *__this,int32_t viewId,System_String_o *name,int32_t damage,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  float num;
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  GameManagers_InGameManager_o *pGVar3;
  Characters_BaseCharacter_o *x;
  Settings_UISettings_o *pSVar4;
  Settings_BoolSetting_o *pSVar5;
  bool bVar6;
  Characters_BaseCharacter_o *killer;
  CustomLogic_CustomLogicEvaluator_o *pCVar7;
  System_String_o **ppSVar8;
  System_String_array *values;
  System_String_o *pSVar9;
  System_String_o *pSVar10;
  int32_t iStack_34;
  
  if (Il2CppMethodInitialized_07547500 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&" damaged ");
    il2cpp_codegen_initialize_runtime_metadata(&"(");
    il2cpp_codegen_initialize_runtime_metadata(&")");
    il2cpp_codegen_initialize_runtime_metadata(&") ");
    il2cpp_codegen_initialize_runtime_metadata(&" (");
    il2cpp_codegen_initialize_runtime_metadata(&" killed ");
    Il2CppMethodInitialized_07547500 = '\x01';
  }
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
     (pPVar2 = (pUVar1->fields).PhotonView, pPVar2 == (Photon_Pun_PhotonView_o *)0x0)) goto label_05bb765e;
  if (info.fields.Sender != (pPVar2->fields)._Owner_k__BackingField) {
    return;
  }
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  killer = Utility_Util__FindCharacterByViewId(viewId,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)killer,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    if (killer == (Characters_BaseCharacter_o *)0x0) goto label_05bb765e;
    name = (killer->fields).RichTextName;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)killer,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    if (killer == (Characters_BaseCharacter_o *)0x0) goto label_05bb765e;
    if (Il2CppMethodInitialized_075474e1 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_075474e1 = '\x01';
    }
    pGVar3 = (killer->fields)._inGameManager;
    if (pGVar3 == (GameManagers_InGameManager_o *)0x0) goto label_05bb765e;
    x = (pGVar3->fields).CurrentCharacter;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar6 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)killer,(MethodInfo *)0x0);
    if (bVar6) {
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      pCVar7 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
      if (pCVar7 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
          pCVar7 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
          if (pCVar7 == (CustomLogic_CustomLogicEvaluator_o *)0x0) goto label_05bb765e;
        }
        if ((pCVar7->fields).DefaultAddKillScore != false) {
          pGVar3 = (__this->fields)._inGameManager;
          if (pGVar3 == (GameManagers_InGameManager_o *)0x0) goto label_05bb765e;
          GameManagers_InGameManager__RegisterMainCharacterDamage(pGVar3,__this,damage,(MethodInfo *)0x0);
        }
      }
    }
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  pCVar7 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  if (pCVar7 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    return;
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    pCVar7 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    if (pCVar7 == (CustomLogic_CustomLogicEvaluator_o *)0x0) goto label_05bb765e;
  }
  CustomLogic_CustomLogicEvaluator__OnCharacterDamaged(pCVar7,__this,killer,name,damage,(MethodInfo *)0x0);
  pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if ((pSVar4 != (Settings_UISettings_o *)0x0) &&
     (pSVar5 = (pSVar4->fields).GameFeed, pSVar5 != (Settings_BoolSetting_o *)0x0)) {
    if ((pSVar5->fields)._value == false) {
      return;
    }
    if ((__this->fields).CurrentHealth < 1) {
      ppSVar8 = &" killed ";
    }
    else {
      ppSVar8 = &" damaged ";
    }
    pSVar10 = *ppSVar8;
    values = (System_String_array *)SZArrayNew(TypeInfo_string_array,7);
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    pCVar7 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    if (pCVar7 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      num = (pCVar7->fields).CurrentTime;
      if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
      }
      pSVar9 = Utility_Util__FormatFloat(num,2,(MethodInfo *)0x0);
      pSVar9 = System_String__Concat_5301f10
                         ("(",pSVar9,") ",(MethodInfo *)0x0);
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      pSVar9 = GameManagers_ChatManager__GetColorString(pSVar9,3,false,(MethodInfo *)0x0);
      if (values != (System_String_array *)0x0) {
        if ((int)values->max_length != 0) {
          values->m_Items[0] = pSVar9;
          Il2CppCodeGenWriteBarrier(values->m_Items);
          if ((values->max_length & 0xfffffffe) != 0) {
            values->m_Items[1] = name;
            Il2CppCodeGenWriteBarrier(values->m_Items + 1);
            if (2 < (uint)values->max_length) {
              values->m_Items[2] = pSVar10;
              Il2CppCodeGenWriteBarrier(values->m_Items + 2);
              if ((values->max_length & 0xfffffffc) != 0) {
                values->m_Items[3] = (__this->fields).RichTextName;
                Il2CppCodeGenWriteBarrier(values->m_Items + 3);
                if (4 < (uint)values->max_length) {
                  values->m_Items[4] = " (";
                  Il2CppCodeGenWriteBarrier(values->m_Items + 4);
                  pSVar10 = System_Int32__ToString(&iStack_34,(MethodInfo *)0x0);
                  if (5 < (uint)values->max_length) {
                    values->m_Items[5] = pSVar10;
                    Il2CppCodeGenWriteBarrier(values->m_Items + 5);
                    if (6 < (uint)values->max_length) {
                      values->m_Items[6] = ")";
                      Il2CppCodeGenWriteBarrier(values->m_Items + 6);
                      pSVar10 = System_String__Concat_5302910(values,(MethodInfo *)0x0);
                      GameManagers_ChatManager__AddFeed(pSVar10,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
        ThrowIndexOutOfRangeException();
      }
    }
  }
label_05bb765e:
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$GetHit
// il2cpp: void Characters_BaseCharacter__GetHit (Characters_BaseCharacter_o* __this, Characters_BaseCharacter_o* enemy, int32_t damage, System_String_o* type, System_String_o* collider, const MethodInfo* method);
// 0x5bb7670

void Characters_BaseCharacter__GetHit
               (Characters_BaseCharacter_o *__this,Characters_BaseCharacter_o *enemy,int32_t damage,
               System_String_o *type,System_String_o *collider,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  System_String_o *pSVar3;
  bool bVar4;
  System_Object_array *parameters;
  Il2CppObject *pIVar5;
  Il2CppObject *pIVar6;
  int32_t iVar7;
  int32_t iStack_48;
  int32_t iStack_44;
  Photon_Realtime_Player_o *pPStack_40;
  System_String_o *pSStack_38;
  
  pSStack_38 = collider;
  if (Il2CppMethodInitialized_07547501 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"GetHitRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547501 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)enemy,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  iVar7 = -1;
  if (bVar4) {
    if (((enemy == (Characters_BaseCharacter_o *)0x0) ||
        (pUVar1 = (enemy->fields).Cache, pUVar1 == (Utility_BaseComponentCache_o *)0x0)) ||
       (pPVar2 = (pUVar1->fields).PhotonView, pPVar2 == (Photon_Pun_PhotonView_o *)0x0)) goto label_05bb78f2;
    iVar7 = (pPVar2->fields).viewIdField;
  }
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
     (pPVar2 = (pUVar1->fields).PhotonView, pPVar2 == (Photon_Pun_PhotonView_o *)0x0)) {
label_05bb78f2:
    ThrowNullReferenceException();
  }
  pPStack_40 = (pPVar2->fields)._Owner_k__BackingField;
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,5);
  iStack_44 = iVar7;
  pIVar5 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_44);
  if (parameters == (System_Object_array *)0x0) goto label_05bb78f2;
  if (pIVar5 != (Il2CppObject *)0x0) {
    pIVar6 = il2cpp_vm_Object_IsInst(pIVar5,(((parameters->obj).klass)->_1).element_class);
    if (pIVar6 == (Il2CppObject *)0x0) goto label_05bb78f7;
  }
  if ((int)parameters->max_length != 0) {
    parameters->m_Items[0] = pIVar5;
    Il2CppCodeGenWriteBarrier(parameters->m_Items);
    if ("" != (System_String_o *)0x0) {
      pIVar5 = il2cpp_vm_Object_IsInst
                         ((Il2CppObject *)"",(((parameters->obj).klass)->_1).element_class)
      ;
      if (pIVar5 == (Il2CppObject *)0x0) goto label_05bb78f7;
    }
    if ((parameters->max_length & 0xfffffffe) == 0) goto label_05bb78ed;
    parameters->m_Items[1] = (Il2CppObject *)"";
    Il2CppCodeGenWriteBarrier(parameters->m_Items + 1);
    iStack_48 = damage;
    pIVar5 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_48);
    if (pIVar5 != (Il2CppObject *)0x0) {
      pIVar6 = il2cpp_vm_Object_IsInst(pIVar5,(((parameters->obj).klass)->_1).element_class);
      if (pIVar6 == (Il2CppObject *)0x0) goto label_05bb78f7;
    }
    if ((uint)parameters->max_length < 3) goto label_05bb78ed;
    parameters->m_Items[2] = pIVar5;
    Il2CppCodeGenWriteBarrier(parameters->m_Items + 2);
    if (type != (System_String_o *)0x0) {
      pIVar5 = il2cpp_vm_Object_IsInst((Il2CppObject *)type,(((parameters->obj).klass)->_1).element_class);
      if (pIVar5 == (Il2CppObject *)0x0) goto label_05bb78f7;
    }
    if ((parameters->max_length & 0xfffffffc) != 0) {
      parameters->m_Items[3] = (Il2CppObject *)type;
      Il2CppCodeGenWriteBarrier(parameters->m_Items + 3);
      pSVar3 = pSStack_38;
      if (pSStack_38 != (System_String_o *)0x0) {
        pIVar5 = il2cpp_vm_Object_IsInst
                           ((Il2CppObject *)pSStack_38,(((parameters->obj).klass)->_1).element_class);
        if (pIVar5 == (Il2CppObject *)0x0) {
label_05bb78f7:
          pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
        }
      }
      if (4 < (uint)parameters->max_length) {
        parameters->m_Items[4] = (Il2CppObject *)pSVar3;
        Il2CppCodeGenWriteBarrier(parameters->m_Items + 4);
        Photon_Pun_PhotonView__RPC_56e5850
                  (pPVar2,"GetHitRPC",pPStack_40,parameters,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_05bb78ed:
  ThrowIndexOutOfRangeException();
}


// Characters.BaseCharacter$$GetHit
// il2cpp: void Characters_BaseCharacter__GetHit (Characters_BaseCharacter_o* __this, System_String_o* name, int32_t damage, System_String_o* type, System_String_o* collider, const MethodInfo* method);
// 0x5bb7910

void Characters_BaseCharacter__GetHit_5ab7910
               (Characters_BaseCharacter_o *__this,System_String_o *name,int32_t damage,System_String_o *type,
               System_String_o *collider,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  System_Object_array *parameters;
  Il2CppObject *pIVar3;
  Il2CppObject *pIVar4;
  int32_t aiStack_48 [2];
  Photon_Realtime_Player_o *pPStack_40;
  Photon_Pun_PhotonView_o *pPStack_38;
  
  if (Il2CppMethodInitialized_07547502 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"GetHitRPC");
    Il2CppMethodInitialized_07547502 = '\x01';
  }
  if ((__this->fields).Dead != false) {
    return;
  }
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
     (pPVar2 = (pUVar1->fields).PhotonView, pPVar2 != (Photon_Pun_PhotonView_o *)0x0)) {
    pPStack_40 = (pPVar2->fields)._Owner_k__BackingField;
    pPStack_38 = pPVar2;
    parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,5);
    aiStack_48[1] = 0xffffffff;
    pIVar3 = il2cpp_vm_Object_Box(g_data_07556710,aiStack_48 + 1);
    if (parameters != (System_Object_array *)0x0) {
      if ((pIVar3 != (Il2CppObject *)0x0) &&
         (pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((parameters->obj).klass)->_1).element_class),
         pIVar4 == (Il2CppObject *)0x0)) {
label_05bb7b2d:
        pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
      }
      if ((int)parameters->max_length != 0) {
        parameters->m_Items[0] = pIVar3;
        Il2CppCodeGenWriteBarrier(parameters->m_Items);
        if ((name != (System_String_o *)0x0) &&
           (pIVar3 = il2cpp_vm_Object_IsInst
                               ((Il2CppObject *)name,(((parameters->obj).klass)->_1).element_class),
           pIVar3 == (Il2CppObject *)0x0)) goto label_05bb7b2d;
        if ((parameters->max_length & 0xfffffffe) != 0) {
          parameters->m_Items[1] = (Il2CppObject *)name;
          Il2CppCodeGenWriteBarrier(parameters->m_Items + 1);
          aiStack_48[0] = damage;
          pIVar3 = il2cpp_vm_Object_Box(g_data_07556710,aiStack_48);
          if ((pIVar3 != (Il2CppObject *)0x0) &&
             (pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((parameters->obj).klass)->_1).element_class),
             pIVar4 == (Il2CppObject *)0x0)) goto label_05bb7b2d;
          if (2 < (uint)parameters->max_length) {
            parameters->m_Items[2] = pIVar3;
            Il2CppCodeGenWriteBarrier(parameters->m_Items + 2);
            if ((type != (System_String_o *)0x0) &&
               (pIVar3 = il2cpp_vm_Object_IsInst
                                   ((Il2CppObject *)type,(((parameters->obj).klass)->_1).element_class),
               pIVar3 == (Il2CppObject *)0x0)) goto label_05bb7b2d;
            if ((parameters->max_length & 0xfffffffc) != 0) {
              parameters->m_Items[3] = (Il2CppObject *)type;
              Il2CppCodeGenWriteBarrier(parameters->m_Items + 3);
              if ((collider != (System_String_o *)0x0) &&
                 (pIVar3 = il2cpp_vm_Object_IsInst
                                     ((Il2CppObject *)collider,(((parameters->obj).klass)->_1).element_class),
                 pIVar3 == (Il2CppObject *)0x0)) goto label_05bb7b2d;
              if (4 < (uint)parameters->max_length) {
                parameters->m_Items[4] = (Il2CppObject *)collider;
                Il2CppCodeGenWriteBarrier(parameters->m_Items + 4);
                Photon_Pun_PhotonView__RPC_56e5850
                          (pPStack_38,"GetHitRPC",pPStack_40,parameters,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
      ThrowIndexOutOfRangeException();
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$GetDamaged
// il2cpp: void Characters_BaseCharacter__GetDamaged (Characters_BaseCharacter_o* __this, System_String_o* name, int32_t damage, const MethodInfo* method);
// 0x5bb7b40

void Characters_BaseCharacter__GetDamaged
               (Characters_BaseCharacter_o *__this,System_String_o *name,int32_t damage,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *__this_00;
  Photon_Realtime_Player_o *targetPlayer;
  System_Object_array *parameters;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  int32_t iStack_2c;
  
  if (Il2CppMethodInitialized_07547503 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"GetDamagedRPC");
    Il2CppMethodInitialized_07547503 = '\x01';
  }
  if ((__this->fields).Dead != false) {
    return;
  }
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
     (__this_00 = (pUVar1->fields).PhotonView, __this_00 != (Photon_Pun_PhotonView_o *)0x0)) {
    targetPlayer = (__this_00->fields)._Owner_k__BackingField;
    parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
    if (parameters != (System_Object_array *)0x0) {
      if ((name != (System_String_o *)0x0) &&
         (pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)name,(((parameters->obj).klass)->_1).element_class)
         , pIVar2 == (Il2CppObject *)0x0)) {
label_05bb7c86:
        pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
      }
      if ((int)parameters->max_length != 0) {
        parameters->m_Items[0] = (Il2CppObject *)name;
        Il2CppCodeGenWriteBarrier(parameters->m_Items);
        iStack_2c = damage;
        pIVar2 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_2c);
        if ((pIVar2 != (Il2CppObject *)0x0) &&
           (pIVar3 = il2cpp_vm_Object_IsInst(pIVar2,(((parameters->obj).klass)->_1).element_class),
           pIVar3 == (Il2CppObject *)0x0)) goto label_05bb7c86;
        if ((parameters->max_length & 0xfffffffe) != 0) {
          parameters->m_Items[1] = pIVar2;
          Il2CppCodeGenWriteBarrier(parameters->m_Items + 1);
          Photon_Pun_PhotonView__RPC_56e5850
                    (__this_00,"GetDamagedRPC",targetPlayer,parameters,(MethodInfo *)0x0);
          return;
        }
      }
      ThrowIndexOutOfRangeException();
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$GetKilled
// il2cpp: void Characters_BaseCharacter__GetKilled (Characters_BaseCharacter_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5bb7ca0

void Characters_BaseCharacter__GetKilled
               (Characters_BaseCharacter_o *__this,System_String_o *name,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *__this_00;
  Photon_Realtime_Player_o *targetPlayer;
  System_Object_array *parameters;
  Il2CppObject *pIVar2;
  
  if (Il2CppMethodInitialized_07547504 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"GetKilledRPC");
    Il2CppMethodInitialized_07547504 = '\x01';
  }
  if ((__this->fields).Dead != false) {
    return;
  }
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
     (__this_00 = (pUVar1->fields).PhotonView, __this_00 != (Photon_Pun_PhotonView_o *)0x0)) {
    targetPlayer = (__this_00->fields)._Owner_k__BackingField;
    parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
    if (parameters != (System_Object_array *)0x0) {
      if (name != (System_String_o *)0x0) {
        pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)name,(((parameters->obj).klass)->_1).element_class);
        if (pIVar2 == (Il2CppObject *)0x0) {
          pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
        }
      }
      if ((int)parameters->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      parameters->m_Items[0] = (Il2CppObject *)name;
      Il2CppCodeGenWriteBarrier(parameters->m_Items);
      Photon_Pun_PhotonView__RPC_56e5850
                (__this_00,"GetKilledRPC",targetPlayer,parameters,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$BlowAway
// il2cpp: void Characters_BaseCharacter__BlowAway (Characters_BaseCharacter_o* __this, UnityEngine_Vector3_o source, float force, float maxDistance, const MethodInfo* method);
// 0x5bb7da0

void Characters_BaseCharacter__BlowAway
               (Characters_BaseCharacter_o *__this,UnityEngine_Vector3_o source,float force,float maxDistance,
               MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *__this_00;
  Photon_Realtime_Player_o *targetPlayer;
  System_Object_array *parameters;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  float local_50;
  float local_4c;
  undefined8 local_48;
  float local_40;
  undefined1 local_38 [16];
  
  local_38._8_4_ = in_XMM0_Dc;
  local_38._0_8_ = source.fields._0_8_;
  local_38._12_4_ = in_XMM0_Dd;
  if (Il2CppMethodInitialized_07547505 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    il2cpp_codegen_initialize_runtime_metadata(&"BlowAwayRPC");
    Il2CppMethodInitialized_07547505 = '\x01';
  }
  if ((__this->fields).Dead != false) {
    return;
  }
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
     (__this_00 = (pUVar1->fields).PhotonView, __this_00 != (Photon_Pun_PhotonView_o *)0x0)) {
    targetPlayer = (__this_00->fields)._Owner_k__BackingField;
    parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,3);
    local_48 = local_38._0_8_;
    local_40 = source.fields.z;
    pIVar2 = il2cpp_vm_Object_Box((Il2CppClass *)TypeInfo_UnityEngine_Vector3,&local_48);
    if (parameters != (System_Object_array *)0x0) {
      if ((pIVar2 != (Il2CppObject *)0x0) &&
         (pIVar3 = il2cpp_vm_Object_IsInst(pIVar2,(((parameters->obj).klass)->_1).element_class),
         pIVar3 == (Il2CppObject *)0x0)) {
label_05bb7f95:
        pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
      }
      if ((int)parameters->max_length != 0) {
        parameters->m_Items[0] = pIVar2;
        Il2CppCodeGenWriteBarrier(parameters->m_Items);
        local_4c = force;
        pIVar2 = il2cpp_vm_Object_Box(g_data_07556740,&local_4c);
        if ((pIVar2 != (Il2CppObject *)0x0) &&
           (pIVar3 = il2cpp_vm_Object_IsInst(pIVar2,(((parameters->obj).klass)->_1).element_class),
           pIVar3 == (Il2CppObject *)0x0)) goto label_05bb7f95;
        if ((parameters->max_length & 0xfffffffe) != 0) {
          parameters->m_Items[1] = pIVar2;
          Il2CppCodeGenWriteBarrier(parameters->m_Items + 1);
          local_50 = maxDistance;
          pIVar2 = il2cpp_vm_Object_Box(g_data_07556740,&local_50);
          if ((pIVar2 != (Il2CppObject *)0x0) &&
             (pIVar3 = il2cpp_vm_Object_IsInst(pIVar2,(((parameters->obj).klass)->_1).element_class),
             pIVar3 == (Il2CppObject *)0x0)) goto label_05bb7f95;
          if (2 < (uint)parameters->max_length) {
            parameters->m_Items[2] = pIVar2;
            Il2CppCodeGenWriteBarrier(parameters->m_Items + 2);
            Photon_Pun_PhotonView__RPC_56e5850
                      (__this_00,"BlowAwayRPC",targetPlayer,parameters,(MethodInfo *)0x0);
            return;
          }
        }
      }
      ThrowIndexOutOfRangeException();
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$BlowAwayRPC
// il2cpp: void Characters_BaseCharacter__BlowAwayRPC (Characters_BaseCharacter_o* __this, UnityEngine_Vector3_o source, float force, float maxDistance, const MethodInfo* method);
// 0x5bb7fb0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5bb81a5: jmp 0x5bb8314

void Characters_BaseCharacter__BlowAwayRPC
               (Characters_BaseCharacter_o *__this,UnityEngine_Vector3_o source,float force,float maxDistance,
               MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  char cVar5;
  uint32_t uVar6;
  Utility_BaseComponentCache_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_Vector3_StaticFields *pUVar9;
  UnityEngine_Rigidbody_o *pUVar10;
  undefined1 auVar11 [16];
  bool bVar12;
  float fVar13;
  float fVar14;
  undefined4 extraout_XMM0_Db;
  float in_XMM0_Dc;
  float extraout_XMM0_Dc;
  float in_XMM0_Dd;
  float extraout_XMM0_Dd;
  undefined4 uVar15;
  undefined1 auVar16 [16];
  UnityEngine_Vector3_o UVar17;
  UnityEngine_Vector3_o force_00;
  float fStack_28;
  float fStack_24;
  
  if (((__this->fields).Dead != false) ||
     (bVar12 = (*(__this->klass->vtable)._74_IsMine.methodPtr)
                         (__this,(__this->klass->vtable)._74_IsMine.method), !bVar12)) {
    return;
  }
  pUVar7 = (__this->fields).Cache;
  if ((pUVar7 == (Utility_BaseComponentCache_o *)0x0) ||
     (pUVar8 = (pUVar7->fields).Transform, pUVar8 == (UnityEngine_Transform_o *)0x0)) goto label_05bb834c;
  UVar17 = UnityEngine_Transform__get_position(pUVar8,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_0753e7b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e7b7 = '\x01';
    uVar6 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar6 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  if (uVar6 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  fStack_28 = source.fields.x;
  fStack_24 = source.fields.y;
  fVar14 = UVar17.fields.y - fStack_24;
  fVar1 = UVar17.fields.z - source.fields.z;
  fVar3 = UVar17.fields.x - fStack_28;
  fVar14 = fVar14 * fVar14 + fVar3 * fVar3 + fVar1 * fVar1;
  if (fVar14 < 0.0) {
    fVar14 = sqrtf(fVar14);
  }
  else {
    fVar14 = SQRT(fVar14);
  }
  if (maxDistance < fVar14) {
    return;
  }
  uVar15 = 0;
  pUVar7 = (__this->fields).Cache;
  if ((pUVar7 == (Utility_BaseComponentCache_o *)0x0) ||
     (pUVar8 = (pUVar7->fields).Transform, pUVar8 == (UnityEngine_Transform_o *)0x0)) goto label_05bb834c;
  UVar17 = UnityEngine_Transform__get_position(pUVar8,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    uVar15 = 0;
    Il2CppMethodInitialized_0753e72d = '\x01';
  }
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    uVar15 = 0;
    Il2CppMethodInitialized_0753e729 = '\x01';
  }
  auVar16._0_4_ = UVar17.fields.x - fStack_28;
  auVar16._4_4_ = UVar17.fields.y - fStack_24;
  auVar16._8_4_ = extraout_XMM0_Dc - in_XMM0_Dc;
  auVar16._12_4_ = extraout_XMM0_Dd - in_XMM0_Dd;
  fVar14 = UVar17.fields.z - source.fields.z;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    uVar15 = 0;
  }
  fVar1 = fVar14 * fVar14 + auVar16._4_4_ * auVar16._4_4_ + auVar16._0_4_ * auVar16._0_4_;
  if (fVar1 < 0.0) {
    fVar1 = sqrtf(fVar1);
    uVar15 = extraout_XMM0_Db;
    if (1e-05 < fVar1) goto label_05bb824a;
label_05bb817e:
    pUVar9 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar14 = (pUVar9->zeroVector).fields.z;
    fVar1 = (pUVar9->zeroVector).fields.x;
    fVar3 = (pUVar9->zeroVector).fields.y;
    cVar5 = (__this->fields).Grounded;
  }
  else {
    fVar1 = SQRT(fVar1);
    if (fVar1 <= 1e-05) goto label_05bb817e;
label_05bb824a:
    fVar14 = fVar14 / fVar1;
    auVar11._4_4_ = fVar1;
    auVar11._0_4_ = fVar1;
    auVar11._8_4_ = uVar15;
    auVar11._12_4_ = uVar15;
    auVar16 = divps(auVar16,auVar11);
    fVar1 = auVar16._0_4_;
    fVar3 = auVar16._4_4_;
    cVar5 = (__this->fields).Grounded;
  }
  if ((cVar5 != '\0') && (0.0 <= fVar3)) {
    pUVar7 = (__this->fields).Cache;
    if (pUVar7 == (Utility_BaseComponentCache_o *)0x0) goto label_05bb834c;
    pUVar10 = (pUVar7->fields).Rigidbody;
    if (Il2CppMethodInitialized_0753e72c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e72c = '\x01';
    }
    if (pUVar10 == (UnityEngine_Rigidbody_o *)0x0) goto label_05bb834c;
    pUVar9 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar13 = 10.0;
    if (force <= 10.0) {
      fVar13 = force;
    }
    UVar17.fields.z = (pUVar9->upVector).fields.z * fVar13;
    uVar2 = (pUVar9->upVector).fields.x;
    uVar4 = (pUVar9->upVector).fields.y;
    UVar17.fields.x = fVar13 * (float)uVar2;
    UVar17.fields.y = fVar13 * (float)uVar4;
    UnityEngine_Rigidbody__AddForce(pUVar10,UVar17,2,(MethodInfo *)0x0);
  }
  pUVar7 = (__this->fields).Cache;
  if ((pUVar7 != (Utility_BaseComponentCache_o *)0x0) &&
     (pUVar10 = (pUVar7->fields).Rigidbody, pUVar10 != (UnityEngine_Rigidbody_o *)0x0)) {
    force_00.fields.z = fVar14 * force;
    force_00.fields.x = fVar1 * force;
    force_00.fields.y = fVar3 * force;
    UnityEngine_Rigidbody__AddForce(pUVar10,force_00,2,(MethodInfo *)0x0);
    return;
  }
label_05bb834c:
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$Awake
// il2cpp: void Characters_BaseCharacter__Awake (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x5bb8360

void Characters_BaseCharacter__Awake(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  byte bVar1;
  GameManagers_InGameManager_o *pGVar2;
  Utility_BaseComponentCache_o *pUVar3;
  UnityEngine_Rigidbody_o *__this_00;
  GameManagers_InGameManager_c *pGVar4;
  bool bVar5;
  int32_t iVar6;
  Characters_BaseMovementSync_o *pCVar7;
  UnityEngine_GameObject_o *pUVar8;
  Outline_o *pOVar9;
  Characters_AnimationHandler_o *__this_01;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547506 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_AnimationHandler);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_BaseMovementSync);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Outline);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_07547506 = '\x01';
  }
  pGVar4 = TypeInfo_GameManagers_InGameManager;
  pGVar2 = (GameManagers_InGameManager_o *)
           TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (pGVar2 != (GameManagers_InGameManager_o *)0x0) {
    bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
    if ((bVar1 <= (pGVar2->klass->_2).typeHierarchyDepth) &&
       ((pGVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
      (__this->fields)._inGameManager = pGVar2;
      if (((pGVar2->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pGVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)pGVar4)) {
        il2cpp_codegen_raise_invalid_cast_exception(pGVar2,pGVar4);
      }
      Il2CppCodeGenWriteBarrier(&(__this->fields)._inGameManager);
    }
  }
  (*(__this->klass->vtable)._78_CreateCache.methodPtr)
            (__this,(Utility_BaseComponentCache_o *)0x0,(__this->klass->vtable)._78_CreateCache.method);
  (*(__this->klass->vtable)._103_SetColliders.methodPtr)
            (__this,(__this->klass->vtable)._103_SetColliders.method);
  iVar6 = (*(__this->klass->vtable)._57_get_DefaultMaxHealth.methodPtr)
                    (__this,(__this->klass->vtable)._57_get_DefaultMaxHealth.method);
  (__this->fields).MaxHealth = iVar6;
  (__this->fields).CurrentHealth = iVar6;
  pCVar7 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_BaseMovementSync);
  (__this->fields).MovementSync = pCVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields).MovementSync);
  pUVar8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
    pOVar9 = UnityEngine_GameObject__AddComponent_object_
                       (pUVar8,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_Outline);
    (__this->fields).OutlineComponent = pOVar9;
    Il2CppCodeGenWriteBarrier(&(__this->fields).OutlineComponent);
    pOVar9 = (__this->fields).OutlineComponent;
    if (pOVar9 != (Outline_o *)0x0) {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pOVar9,false,(MethodInfo *)0x0);
      pUVar8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_AnimationHandler);
      Characters_AnimationHandler___ctor(__this_01,pUVar8,method_00);
      (__this->fields).Animation = __this_01;
      Il2CppCodeGenWriteBarrier(&(__this->fields).Animation);
      bVar5 = (*(__this->klass->vtable)._74_IsMine.methodPtr)
                        (__this,(__this->klass->vtable)._74_IsMine.method);
      if (!bVar5) {
        pUVar3 = (__this->fields).Cache;
        if ((pUVar3 == (Utility_BaseComponentCache_o *)0x0) ||
           (__this_00 = (pUVar3->fields).Rigidbody, __this_00 == (UnityEngine_Rigidbody_o *)0x0))
        goto label_05bb8577;
        UnityEngine_Rigidbody__set_isKinematic(__this_00,true,(MethodInfo *)0x0);
        (__this->fields)._disableKinematicTimeLeft = 0.0;
      }
      return;
    }
  }
label_05bb8577:
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$CreateCharacterIcon
// il2cpp: void Characters_BaseCharacter__CreateCharacterIcon (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x5bb8590

void Characters_BaseCharacter__CreateCharacterIcon(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  return;
}


// Characters.BaseCharacter$$SetColliders
// il2cpp: void Characters_BaseCharacter__SetColliders (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x5bb85a0

void Characters_BaseCharacter__SetColliders(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  return;
}


// Characters.BaseCharacter$$Start
// il2cpp: void Characters_BaseCharacter__Start (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x5bb85b0

void Characters_BaseCharacter__Start(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  bool bVar1;
  Characters_BaseCharacter__WaitAndNotifySpawn_d__151_o *__this_00;
  
  if (Il2CppMethodInitialized_07547507 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MinimapHandler);
    Il2CppMethodInitialized_07547507 = '\x01';
  }
  if ((TypeInfo_UI_MinimapHandler->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MinimapHandler);
  }
  UI_MinimapHandler__CreateMinimapIcon_5c37950(__this,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_07547508 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseCharacter_WaitAndNotifySpawn_d__151);
    Il2CppMethodInitialized_07547508 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Characters_BaseCharacter_WaitAndNotifySpawn_d__151);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  UnityEngine_MonoBehaviour__StartCoroutine_691c390
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
             (MethodInfo *)0x0);
  bVar1 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method);
  if (bVar1) {
    (*(__this->klass->vtable)._79_CreateDetection.methodPtr)
              (__this,(__this->klass->vtable)._79_CreateDetection.method);
    return;
  }
  return;
}


// Characters.BaseCharacter$$WaitAndNotifySpawn
// il2cpp: System_Collections_IEnumerator_o* Characters_BaseCharacter__WaitAndNotifySpawn (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x5bb8690

System_Collections_IEnumerator_o *
Characters_BaseCharacter__WaitAndNotifySpawn(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter__WaitAndNotifySpawn_d__151_o *__this_00;
  
  if (Il2CppMethodInitialized_07547508 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseCharacter_WaitAndNotifySpawn_d__151);
    Il2CppMethodInitialized_07547508 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Characters_BaseCharacter_WaitAndNotifySpawn_d__151);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Characters.BaseCharacter$$WaitAndNotifyReloaded
// il2cpp: System_Collections_IEnumerator_o* Characters_BaseCharacter__WaitAndNotifyReloaded (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x5bb8720

System_Collections_IEnumerator_o *
Characters_BaseCharacter__WaitAndNotifyReloaded(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter__WaitAndNotifyReloaded_d__152_o *__this_00;
  
  if (Il2CppMethodInitialized_07547509 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Characters_BaseCharacter_WaitAndNotifyReloaded_d__152);
    Il2CppMethodInitialized_07547509 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Characters_BaseCharacter_WaitAndNotifyReloaded_d__152);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Characters.BaseCharacter$$GetCurrentAnimation
// il2cpp: System_String_o* Characters_BaseCharacter__GetCurrentAnimation (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x5bb4480

System_String_o *
Characters_BaseCharacter__GetCurrentAnimation(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  Characters_AnimationHandler_o *__this_00;
  System_String_o *pSVar1;
  
  __this_00 = (__this->fields).Animation;
  if (__this_00 == (Characters_AnimationHandler_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar1 = Characters_AnimationHandler__GetCurrentAnimation(__this_00,method);
  return pSVar1;
}


// Characters.BaseCharacter$$GetTargetRotation
// il2cpp: UnityEngine_Quaternion_o Characters_BaseCharacter__GetTargetRotation (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x5bb87b0

UnityEngine_Quaternion_o
Characters_BaseCharacter__GetTargetRotation(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  UnityEngine_Quaternion_Fields UVar1;
  UnityEngine_Vector3_o local_10;
  
  local_10.fields.x = 0.0;
  local_10.fields.y = (__this->fields).TargetAngle * 0.017453292;
  local_10.fields.z = 0.0;
  UVar1 = (UnityEngine_Quaternion_Fields)
          UnityEngine_Quaternion__Internal_FromEulerRad(&local_10,(MethodInfo *)0x0);
  return (UnityEngine_Quaternion_o)UVar1;
}


// Characters.BaseCharacter$$GetTargetDirection
// il2cpp: UnityEngine_Vector3_o Characters_BaseCharacter__GetTargetDirection (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x5bb87f0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5bb883d: mov qword ptr [rsp + 8], 0
// asm:   0x5bb8846: cmp byte ptr [rip + 0x1985edc], 0
// asm:   0x5bb884d: je 0x5bb8928

UnityEngine_Vector3_o
Characters_BaseCharacter__GetTargetDirection(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined1 auVar5 [16];
  undefined4 uVar6;
  UnityEngine_Vector3_o UVar7;
  
  fVar2 = (90.0 - (__this->fields).TargetAngle) * 0.017453292;
  fVar3 = cosf(fVar2);
  fVar2 = sinf(fVar2);
  uVar6 = extraout_XMM0_Db;
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    uVar6 = 0;
    Il2CppMethodInitialized_0753e72d = '\x01';
  }
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    uVar6 = 0;
    Il2CppMethodInitialized_0753e729 = '\x01';
    uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_System_Math)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    uVar6 = 0;
  }
  fVar4 = fVar2 * fVar2 + fVar3 * fVar3 + 0.0;
  if (fVar4 < 0.0) {
    fVar4 = sqrtf(fVar4);
    uVar6 = extraout_XMM0_Db_00;
  }
  else {
    fVar4 = SQRT(fVar4);
  }
  if (fVar4 <= 1e-05) {
    return (UnityEngine_Vector3_o)(TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields;
  }
  auVar5._4_4_ = fVar4;
  auVar5._0_4_ = fVar4;
  auVar5._8_4_ = uVar6;
  auVar5._12_4_ = uVar6;
  auVar5 = divps(ZEXT416((uint)fVar3),auVar5);
  UVar7.fields.z = fVar2 / fVar4;
  UVar7.fields.x = (float)auVar5._0_4_;
  UVar7.fields.y = (float)auVar5._4_4_;
  return (UnityEngine_Vector3_o)UVar7.fields;
}


// Characters.BaseCharacter$$GetAngleToTarget
// il2cpp: float Characters_BaseCharacter__GetAngleToTarget (Characters_BaseCharacter_o* __this, UnityEngine_Vector3_o targetDirection, const MethodInfo* method);
// 0x5bb8970

float Characters_BaseCharacter__GetAngleToTarget
                (Characters_BaseCharacter_o *__this,UnityEngine_Vector3_o targetDirection,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  UnityEngine_Transform_o *__this_00;
  float fVar2;
  float fVar3;
  UnityEngine_Vector3_o UVar4;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_o local_18;
  
  fVar2 = atan2f(targetDirection.fields.z,targetDirection.fields.x);
  pUVar1 = (__this->fields).Cache;
  if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
    __this_00 = (pUVar1->fields).Transform;
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      local_18 = UnityEngine_Transform__get_rotation(__this_00,(MethodInfo *)0x0);
      UVar4 = UnityEngine_Quaternion__Internal_ToEulerRad(&local_18,(MethodInfo *)0x0);
      euler.fields.x = UVar4.fields.x * 57.29578;
      euler.fields.y = UVar4.fields.y * 57.29578;
      euler.fields.z = UVar4.fields.z * 57.29578;
      UVar4 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
      fVar3 = UVar4.fields.y + -90.0 + fVar2 * 57.29578;
      fVar2 = floorf(fVar3 / 360.0);
      fVar3 = fVar2 * -360.0 + fVar3;
      fVar2 = 360.0;
      if (fVar3 <= 360.0) {
        fVar2 = fVar3;
      }
      fVar2 = (float)(-(uint)(0.0 <= fVar3) & (uint)fVar2);
      return -(float)(~-(uint)(180.0 < fVar2) & (uint)fVar2 | (uint)(fVar2 + -360.0) & -(uint)(180.0 < fVar2))
      ;
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$CheckGround
// il2cpp: void Characters_BaseCharacter__CheckGround (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x5bb8a70

void Characters_BaseCharacter__CheckGround(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Utility_BaseComponentCache_o *pUVar3;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_StaticFields *pUVar4;
  bool bVar5;
  int32_t iVar6;
  bool bVar7;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  UnityEngine_Vector3_o UVar8;
  UnityEngine_Vector3_o UVar9;
  UnityEngine_LayerMask_o UStack_50;
  float fStack_4c;
  undefined1 auStack_48 [8];
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  float fStack_28;
  float fStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  (__this->fields).JustGrounded = false;
  pUVar3 = (__this->fields).Cache;
  if ((pUVar3 == (Utility_BaseComponentCache_o *)0x0) ||
     (__this_00 = (pUVar3->fields).Transform, __this_00 == (UnityEngine_Transform_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UVar8 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
  auStack_48._0_4_ = UVar8.fields.x;
  auStack_48._4_4_ = UVar8.fields.y;
  fStack_40 = extraout_XMM0_Dc;
  fStack_3c = extraout_XMM0_Dd;
  if (Il2CppMethodInitialized_0753e72c == '\0') {
    auStack_48 = (undefined1  [8])UVar8.fields._0_8_;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72c = '\x01';
  }
  pUVar4 = TypeInfo_UnityEngine_Vector3->static_fields;
  uVar1 = (pUVar4->upVector).fields.x;
  uVar2 = (pUVar4->upVector).fields.y;
  fStack_38 = (pUVar4->upVector).fields.z;
  auStack_48._4_4_ = (float)auStack_48._4_4_ + (float)uVar2 * 0.1;
  auStack_48._0_4_ = (float)auStack_48._0_4_ + (float)uVar1 * 0.1;
  fStack_40 = fStack_40 + 0.0;
  fStack_3c = fStack_3c + 0.0;
  UVar8.fields.z = UVar8.fields.z + fStack_38 * 0.1;
  fStack_28 = -(float)uVar1;
  fStack_24 = -(float)uVar2;
  uStack_20 = 0x80000000;
  uStack_1c = 0x80000000;
  fStack_38 = -fStack_38;
  uStack_34 = 0x80000000;
  uStack_30 = 0x80000000;
  uStack_2c = 0x80000000;
  fStack_4c = (*(__this->klass->vtable)._68_get_GroundDistance.methodPtr)
                        (__this,(__this->klass->vtable)._68_get_GroundDistance.method);
  UStack_50 = (*(__this->klass->vtable)._67_get_GroundMask.methodPtr)
                        (__this,(__this->klass->vtable)._67_get_GroundMask.method);
  bVar7 = false;
  iVar6 = UnityEngine_LayerMask__get_value(&UStack_50,(MethodInfo *)0x0);
  UVar9.fields.y = fStack_24;
  UVar9.fields.x = fStack_28;
  UVar8.fields.x = (float)auStack_48._0_4_;
  UVar8.fields.y = (float)auStack_48._4_4_;
  UVar9.fields.z = fStack_38;
  bVar5 = (*(__this->klass->vtable)._108_CheckRaycastIgnoreTriggers.methodPtr)
                    (__this,UVar8,UVar9,fStack_4c,iVar6,
                     (__this->klass->vtable)._108_CheckRaycastIgnoreTriggers.method);
  if (bVar5) {
    if ((__this->fields).Grounded != false) {
      return;
    }
    (__this->fields).JustGrounded = true;
    bVar7 = true;
  }
  (__this->fields).Grounded = bVar7;
  return;
}


// Characters.BaseCharacter$$CheckRaycastIgnoreTriggers
// il2cpp: bool Characters_BaseCharacter__CheckRaycastIgnoreTriggers (Characters_BaseCharacter_o* __this, UnityEngine_Vector3_o origin, UnityEngine_Vector3_o direction, float distance, int32_t layerMask, const MethodInfo* method);
// 0x5bb8be0

bool Characters_BaseCharacter__CheckRaycastIgnoreTriggers
               (Characters_BaseCharacter_o *__this,UnityEngine_Vector3_o origin,
               UnityEngine_Vector3_o direction,float distance,int32_t layerMask,MethodInfo *method)

{
  System_Nullable_RaycastHit__o SStack_40;
  
  if (Il2CppMethodInitialized_0754750a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_RaycastHit_get_HasValue);
    Il2CppMethodInitialized_0754750a = '\x01';
  }
  (*(__this->klass->vtable)._109_RaycastIgnoreTriggers.methodPtr)
            (&SStack_40,__this,origin,direction,distance,layerMask,
             (__this->klass->vtable)._109_RaycastIgnoreTriggers.method);
  return SStack_40.fields.hasValue != false;
}


// Characters.BaseCharacter$$RaycastIgnoreTriggers
// il2cpp: System_Nullable_RaycastHit__o Characters_BaseCharacter__RaycastIgnoreTriggers (Characters_BaseCharacter_o* __this, UnityEngine_Vector3_o origin, UnityEngine_Vector3_o direction, float distance, int32_t layerMask, const MethodInfo* method);
// 0x5bb8c70

System_Nullable_RaycastHit__o *
Characters_BaseCharacter__RaycastIgnoreTriggers
          (System_Nullable_RaycastHit__o *__return_storage_ptr__,Characters_BaseCharacter_o *__this,
          UnityEngine_Vector3_o origin,UnityEngine_Vector3_o direction,float distance,int32_t layerMask,
          MethodInfo *method)

{
  UnityEngine_RaycastHit_o value;
  UnityEngine_RaycastHit_o *pUVar1;
  bool bVar2;
  UnityEngine_RaycastHit_o UStack_48;
  
  if (Il2CppMethodInitialized_0754750b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_RaycastHit_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    Il2CppMethodInitialized_0754750b = '\x01';
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
  if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
  }
  bVar2 = UnityEngine_Physics__Raycast_69d9950
                    (origin,direction,&UStack_48,distance,layerMask,1,(MethodInfo *)0x0);
  (__return_storage_ptr__->fields).hasValue = false;
  *(undefined3 *)&(__return_storage_ptr__->fields).field_0x1 = 0;
  (__return_storage_ptr__->fields).value.fields.m_Point.fields.x = 0.0;
  pUVar1 = &(__return_storage_ptr__->fields).value;
  (pUVar1->fields).m_Point.fields.y = 0.0;
  (pUVar1->fields).m_Point.fields.z = 0.0;
  pUVar1 = &(__return_storage_ptr__->fields).value;
  (pUVar1->fields).m_Normal.fields.x = 0.0;
  (pUVar1->fields).m_Normal.fields.y = 0.0;
  *(undefined8 *)&(__return_storage_ptr__->fields).value.fields.m_Normal.fields.z = 0;
  (__return_storage_ptr__->fields).value.fields.m_Distance = 0.0;
  (__return_storage_ptr__->fields).value.fields.m_UV.fields.x = 0.0;
  *(undefined8 *)&(__return_storage_ptr__->fields).value.fields.m_UV.fields.y = 0;
  if (bVar2) {
    value.fields.m_Point.fields.z = UStack_48.fields.m_Point.fields.z;
    value.fields.m_Normal.fields.x = UStack_48.fields.m_Normal.fields.x;
    value.fields.m_Point.fields.x = UStack_48.fields.m_Point.fields.x;
    value.fields.m_Point.fields.y = UStack_48.fields.m_Point.fields.y;
    value.fields.m_Normal.fields.y = UStack_48.fields.m_Normal.fields.y;
    value.fields.m_Normal.fields.z = UStack_48.fields.m_Normal.fields.z;
    value.fields.m_FaceID = UStack_48.fields.m_FaceID;
    value.fields.m_Distance = UStack_48.fields.m_Distance;
    value.fields.m_UV.fields.x = UStack_48.fields.m_UV.fields.x;
    value.fields.m_UV.fields.y = UStack_48.fields.m_UV.fields.y;
    value.fields.m_Collider.fields.m_Data = UStack_48.fields.m_Collider.fields.m_Data;
    System_Nullable_RaycastHit____ctor
              (__return_storage_ptr__,value,(MethodInfo_3CD7290 *)MethodInfo_System_Nullable_RaycastHit_ctor);
  }
  return __return_storage_ptr__;
}


// Characters.BaseCharacter$$IsSoundLoopActive
// il2cpp: bool Characters_BaseCharacter__IsSoundLoopActive (Characters_BaseCharacter_o* __this, System_String_o* sound, const MethodInfo* method);
// 0x5bb8db0

bool Characters_BaseCharacter__IsSoundLoopActive
               (Characters_BaseCharacter_o *__this,System_String_o *sound,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_0754750c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    Il2CppMethodInitialized_0754750c = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._activeSoundLoops;
  if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = System_Collections_Generic_HashSet_object___Contains
                    (__this_00,(Il2CppObject *)sound,
                     (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
  return bVar1;
}


// Characters.BaseCharacter$$ToggleSoundLoop
// il2cpp: void Characters_BaseCharacter__ToggleSoundLoop (Characters_BaseCharacter_o* __this, System_String_o* sound, bool toggle, const MethodInfo* method);
// 0x5bb8e00

void Characters_BaseCharacter__ToggleSoundLoop
               (Characters_BaseCharacter_o *__this,System_String_o *sound,bool toggle,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  bool bVar2;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (Il2CppMethodInitialized_0754750d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Remove);
    Il2CppMethodInitialized_0754750d = '\x01';
  }
  pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._activeSoundLoops;
  if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    bVar2 = System_Collections_Generic_HashSet_object___Contains
                      (pSVar1,(Il2CppObject *)sound,
                       (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
    if (bVar2 == toggle) {
      return;
    }
    pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._activeSoundLoops;
    if (toggle) {
      if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___Add
                  (pSVar1,(Il2CppObject *)sound,
                   (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
        Characters_BaseCharacter__PlaySound(__this,sound,method_00);
        return;
      }
    }
    else if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___Remove
                (pSVar1,(Il2CppObject *)sound,
                 (MethodInfo_4FB39F0 *)MethodInfo_System_Collections_Generic_HashSet_string_Remove);
      Characters_BaseCharacter__StopSound(__this,sound,method_01);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$ToggleSound
// il2cpp: void Characters_BaseCharacter__ToggleSound (Characters_BaseCharacter_o* __this, System_String_o* sound, bool toggle, const MethodInfo* method);
// 0x5bb8ec0

void Characters_BaseCharacter__ToggleSound
               (Characters_BaseCharacter_o *__this,System_String_o *sound,bool toggle,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar2;
  MethodInfo *method_00;
  UnityEngine_AudioSource_o *pUStack_20;
  
  if (Il2CppMethodInitialized_0754750e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_TryGetValue);
    Il2CppMethodInitialized_0754750e = '\x01';
  }
  pUStack_20 = (UnityEngine_AudioSource_o *)0x0;
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
     (__this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(pUVar1->fields).AudioSources,
     __this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
label_05bb8f5b:
    ThrowNullReferenceException();
  }
  bVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                    (__this_00,(Il2CppObject *)sound,(Il2CppObject **)&pUStack_20,
                     (MethodInfo_4AAF440 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_TryGetValue);
  if (bVar2) {
    if (pUStack_20 == (UnityEngine_AudioSource_o *)0x0) goto label_05bb8f5b;
    bVar2 = UnityEngine_AudioSource__get_isPlaying(pUStack_20,(MethodInfo *)0x0);
    if (bVar2 != toggle) {
      if (toggle) {
        Characters_BaseCharacter__PlaySound(__this,sound,method_00);
      }
      else {
        Characters_BaseCharacter__StopSound(__this,sound,method_00);
      }
    }
  }
  return;
}


// Characters.BaseCharacter$$ToggleSoundLocal
// il2cpp: void Characters_BaseCharacter__ToggleSoundLocal (Characters_BaseCharacter_o* __this, System_String_o* sound, bool toggle, const MethodInfo* method);
// 0x5bb8f60

void Characters_BaseCharacter__ToggleSoundLocal
               (Characters_BaseCharacter_o *__this,System_String_o *sound,bool toggle,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar2;
  bool bVar3;
  UnityEngine_AudioSource_o *pUStack_20;
  
  if (Il2CppMethodInitialized_0754750f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_TryGetValue);
    Il2CppMethodInitialized_0754750f = '\x01';
  }
  pUStack_20 = (UnityEngine_AudioSource_o *)0x0;
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
     (__this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(pUVar1->fields).AudioSources,
     __this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
label_05bb9014:
    ThrowNullReferenceException();
  }
  bVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                    (__this_00,(Il2CppObject *)sound,(Il2CppObject **)&pUStack_20,
                     (MethodInfo_4AAF440 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_TryGetValue);
  if (bVar2) {
    if (pUStack_20 == (UnityEngine_AudioSource_o *)0x0) goto label_05bb9014;
    bVar2 = (bool)((__this->fields).SoundsEnabled & toggle);
    bVar3 = UnityEngine_AudioSource__get_isPlaying(pUStack_20,(MethodInfo *)0x0);
    if (bVar2 != bVar3) {
      if (bVar2 == false) {
        if (pUStack_20 == (UnityEngine_AudioSource_o *)0x0) goto label_05bb9014;
        UnityEngine_AudioSource__Stop_68b0850(pUStack_20,(MethodInfo *)0x0);
      }
      else {
        if (pUStack_20 == (UnityEngine_AudioSource_o *)0x0) goto label_05bb9014;
        UnityEngine_AudioSource__Play_68b06a0(pUStack_20,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


// Characters.BaseCharacter$$OnDestroy
// il2cpp: void Characters_BaseCharacter__OnDestroy (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x5bb9020

void Characters_BaseCharacter__OnDestroy(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  return;
}


// Characters.BaseCharacter$$FixedUpdate
// il2cpp: void Characters_BaseCharacter__FixedUpdate (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x5bb9030
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5bb909a: jmp 0x5bb90c8

void Characters_BaseCharacter__FixedUpdate(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  Characters_BaseDetection_o *pCVar2;
  float fVar3;
  float fVar4;
  UnityEngine_Vector3_o UVar5;
  
  UVar5 = Characters_BaseCharacter__GetVelocity(__this,method);
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
    uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  fVar4 = UVar5.fields.z * UVar5.fields.z + UVar5.fields.y * UVar5.fields.y + UVar5.fields.x * UVar5.fields.x;
  if (fVar4 < 0.0) {
    fVar4 = sqrtf(fVar4);
    (__this->fields).CurrentSpeed = fVar4;
    pCVar2 = (__this->fields).Detection;
  }
  else {
    (__this->fields).CurrentSpeed = SQRT(fVar4);
    pCVar2 = (__this->fields).Detection;
  }
  if (pCVar2 != (Characters_BaseDetection_o *)0x0) {
    (*(pCVar2->klass->vtable)._6_OnFixedUpdate.methodPtr)
              (pCVar2,(pCVar2->klass->vtable)._6_OnFixedUpdate.method);
  }
  fVar4 = (__this->fields)._disableKinematicTimeLeft;
  fVar3 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  (__this->fields)._disableKinematicTimeLeft = fVar4 - fVar3;
  return;
}


// Characters.BaseCharacter$$LateUpdate
// il2cpp: void Characters_BaseCharacter__LateUpdate (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x5bb9150

void Characters_BaseCharacter__LateUpdate(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  (*(__this->klass->vtable)._115_LateUpdateFootstep.methodPtr)
            (__this,(__this->klass->vtable)._115_LateUpdateFootstep.method);
  (*(__this->klass->vtable)._116_LateUpdateFPS.methodPtr)
            (__this,(__this->klass->vtable)._116_LateUpdateFPS.method);
  return;
}


// Characters.BaseCharacter$$LateUpdateFootstep
// il2cpp: void Characters_BaseCharacter__LateUpdateFootstep (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x5bb9180

void Characters_BaseCharacter__LateUpdateFootstep(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  int iVar1;
  Photon_Pun_PhotonMessageInfo_o info;
  Photon_Pun_PhotonMessageInfo_o PVar2;
  bool bVar3;
  int32_t iVar4;
  System_String_o *a;
  MethodInfo *method_00;
  Photon_Pun_PhotonMessageInfo_Fields PStack_50;
  Photon_Pun_PhotonMessageInfo_Fields PStack_38;
  
  if (Il2CppMethodInitialized_07547510 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_07547510 = '\x01';
  }
  if ((__this->fields).FootstepsEnabled != false) {
    iVar4 = (*(__this->klass->vtable)._117_GetFootstepPhase.methodPtr)
                      (__this,(__this->klass->vtable)._117_GetFootstepPhase.method);
    iVar1 = (__this->fields)._stepPhase;
    if (iVar1 != iVar4) {
      a = (*(__this->klass->vtable)._118_GetFootstepAudio.methodPtr)
                    (__this,iVar1,(__this->klass->vtable)._118_GetFootstepAudio.method);
      bVar3 = System_String__op_Inequality
                        (a,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
      if (bVar3) {
        (__this->fields)._stepPhase = iVar4;
        if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
        }
        Utility_Util__CreateLocalPhotonInfo((Photon_Pun_PhotonMessageInfo_o *)&PStack_50,(MethodInfo *)0x0);
        PStack_38.photonView = PStack_50.photonView;
        PStack_38.timeInt = PStack_50.timeInt;
        PStack_38._4_4_ = PStack_50._4_4_;
        PStack_38.Sender = PStack_50.Sender;
        info.fields.Sender = PStack_50.Sender;
        info.fields.timeInt = PStack_50.timeInt;
        info.fields._4_4_ = PStack_50._4_4_;
        info.fields.photonView = PStack_50.photonView;
        Characters_BaseCharacter__StopSoundRPC(__this,a,info,method_00);
        PVar2.fields.Sender = PStack_38.Sender;
        PVar2.fields.timeInt = PStack_38.timeInt;
        PVar2.fields._4_4_ = PStack_38._4_4_;
        PVar2.fields.photonView = PStack_38.photonView;
        (*(__this->klass->vtable)._86_PlaySoundRPC.methodPtr)
                  (__this,a,PVar2,(__this->klass->vtable)._86_PlaySoundRPC.method);
      }
    }
  }
  return;
}


// Characters.BaseCharacter$$LateUpdateFPS
// il2cpp: void Characters_BaseCharacter__LateUpdateFPS (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x5bb92b0
// eh: try 0x5bb9473..0x5bb949d -> pad 0x5bb94a9 (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5bb94c5..0x5bb94ca -> pad 0x5bb95dd cleanup
// eh: try 0x5bb9593..0x5bb95d8 -> pad 0x5bb95f0 (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5bb95e0..0x5bb95ea -> pad 0x5bb9641 catch (...) [compiler noexcept guard]
// eh: try 0x5bb9608..0x5bb960d -> pad 0x5bb962c cleanup
// eh: try 0x5bb962f..0x5bb9639 -> pad 0x5bb9641 catch (...) [compiler noexcept guard]
// asm: 47 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5bb94a5: jmp 0x5bb94a9
// asm:   0x5bb94a7: jmp 0x5bb94a9
// asm:   0x5bb94a9: mov r14, rax
// asm:   0x5bb94ac: cmp edx, 1
// asm:   0x5bb94af: jne 0x5bb95e0
// asm:   0x5bb94b5: mov rdi, r14
// asm:   0x5bb94b8: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5bb94bd: mov rbx, qword ptr [rax]
// asm:   0x5bb94c0: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5bb94c5: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5bb94ca: lea rax, [rip + 0x16d53ff]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_Dispose
// asm:   0x5bb94d1: mov rsi, qword ptr [rax]
// asm:   0x5bb94d4: mov rdi, rsp
// asm:   0x5bb94d7: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5bb94dc: test rbx, rbx
// asm:   0x5bb94df: jne 0x5bb9624
// asm:   0x5bb952c: jmp 0x5bb95c9
// asm:   0x5bb958f: nop 
// asm:   0x5bb95dd: mov r14, rax
// asm:   0x5bb95e0: lea rdi, [rsp + 0x18]
// asm:   0x5bb95e5: call 0x2fd8950  ; il2cpp_runtime_helper_02fd8950()
// asm:   0x5bb95ea: jmp 0x5bb9639
// asm:   0x5bb95ec: jmp 0x5bb95f0
// asm:   0x5bb95ee: jmp 0x5bb95f0
// asm:   0x5bb95f0: mov r14, rax
// asm:   0x5bb95f3: cmp edx, 1
// asm:   0x5bb95f6: jne 0x5bb962f
// asm:   0x5bb95f8: mov rdi, r14
// asm:   0x5bb95fb: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5bb9600: mov rbx, qword ptr [rax]
// asm:   0x5bb9603: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5bb9608: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5bb960d: lea rax, [rip + 0x16d52bc]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_Dispose
// asm:   0x5bb9614: mov rsi, qword ptr [rax]
// asm:   0x5bb9617: mov rdi, rsp
// asm:   0x5bb961a: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5bb961f: test rbx, rbx
// asm:   0x5bb9622: je 0x5bb95c9
// asm:   0x5bb9624: mov rdi, rbx
// asm:   0x5bb9627: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5bb962c: mov r14, rax
// asm:   0x5bb962f: lea rdi, [rsp + 0x18]
// asm:   0x5bb9634: call 0x2fd8980  ; il2cpp_runtime_helper_02fd8980()
// asm:   0x5bb9639: mov rdi, r14
// asm:   0x5bb963c: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5bb9641: mov rdi, rax
// asm:   0x5bb9644: call 0x2ab61e0  ; __clang_call_terminate()

void Characters_BaseCharacter__LateUpdateFPS(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  byte bVar1;
  Cameras_InGameCamera_o *__this_00;
  Characters_BaseCharacter_o *x;
  bool bVar2;
  System_Collections_Generic_List_Renderer__o *pSVar3;
  Characters_BaseCharacter_c *pCVar4;
  float fVar5;
  System_Collections_Generic_List_Enumerator_object__o local_48;
  undefined1 local_30 [16];
  UnityEngine_Renderer_o *local_20;
  
  if (Il2CppMethodInitialized_07547511 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Renderer_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_07547511 = '\x01';
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  bVar2 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method);
  if (!bVar2) {
    return;
  }
  __this_00 = (Cameras_InGameCamera_o *)TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera
  ;
  if (__this_00 != (Cameras_InGameCamera_o *)0x0) {
    bVar1 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
    if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Cameras_InGameCamera
       )) {
      il2cpp_codegen_raise_invalid_cast_exception(__this_00);
    }
    x = (__this_00->fields)._follow;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
    if (bVar2) {
      fVar5 = Cameras_InGameCamera__GetCameraDistance(__this_00,(MethodInfo *)0x0);
      if ((fVar5 == 0.0) && (!NAN(fVar5))) {
        if ((__this->fields)._cameraFPS != false) {
          return;
        }
        (__this->fields)._cameraFPS = true;
        pSVar3 = (*(__this->klass->vtable)._119_GetFPSDisabledRenderers.methodPtr)
                           (__this,(__this->klass->vtable)._119_GetFPSDisabledRenderers.method);
        if (pSVar3 == (System_Collections_Generic_List_Renderer__o *)0x0) goto label_05bb95d8;
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_30,
                   (System_Collections_Generic_List_object__o *)pSVar3,
                   (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_Renderer_GetEnumerator);
        local_48.fields._current = (Il2CppObject *)local_20;
        local_48.fields._list = (System_Collections_Generic_List_T__o *)local_30._0_8_;
        local_48.fields._index = local_30._8_4_;
        local_48.fields._version = local_30._12_4_;
        local_30._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        local_30._8_8_ = &local_48;
        while (bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                 (&local_48,
                                  (MethodInfo_4C45C50 *)
                                  MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_MoveNext),
              bVar2) {
          if ((UnityEngine_Renderer_o *)local_48.fields._current == (UnityEngine_Renderer_o *)0x0) {
            ThrowNullReferenceException();
          }
          UnityEngine_Renderer__set_enabled
                    ((UnityEngine_Renderer_o *)local_48.fields._current,false,(MethodInfo *)0x0);
        }
        goto label_05bb95b7;
      }
    }
    if ((__this->fields)._cameraFPS == false) {
      return;
    }
    (__this->fields)._cameraFPS = false;
    if ((__this->fields).Dead == false) {
      pCVar4 = __this->klass;
    }
    else {
      pCVar4 = __this->klass;
      bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
      if ((bVar1 <= (pCVar4->_2).typeHierarchyDepth) &&
         ((pCVar4->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_Human)) {
        return;
      }
    }
    pSVar3 = (*(pCVar4->vtable)._119_GetFPSDisabledRenderers.methodPtr)
                       (__this,(pCVar4->vtable)._119_GetFPSDisabledRenderers.method);
    if (pSVar3 != (System_Collections_Generic_List_Renderer__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_30,
                 (System_Collections_Generic_List_object__o *)pSVar3,
                 (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_Renderer_GetEnumerator);
      local_48.fields._current = (Il2CppObject *)local_20;
      local_48.fields._list = (System_Collections_Generic_List_T__o *)local_30._0_8_;
      local_48.fields._index = local_30._8_4_;
      local_48.fields._version = local_30._12_4_;
      local_30._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_30._8_8_ = &local_48;
      while (bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               (&local_48,
                                (MethodInfo_4C45C50 *)
                                MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_MoveNext),
            bVar2) {
        if ((UnityEngine_Renderer_o *)local_48.fields._current == (UnityEngine_Renderer_o *)0x0) {
          ThrowNullReferenceException();
        }
        UnityEngine_Renderer__set_enabled
                  ((UnityEngine_Renderer_o *)local_48.fields._current,true,(MethodInfo *)0x0);
      }
label_05bb95b7:
      System_Collections_Generic_List_Enumerator_object___Dispose
                (&local_48,
                 (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_Dispose)
      ;
      return;
    }
  }
label_05bb95d8:
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$GetFootstepPhase
// il2cpp: int32_t Characters_BaseCharacter__GetFootstepPhase (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x5bb9650

int32_t Characters_BaseCharacter__GetFootstepPhase(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  return 0;
}


// Characters.BaseCharacter$$GetFootstepAudio
// il2cpp: System_String_o* Characters_BaseCharacter__GetFootstepAudio (Characters_BaseCharacter_o* __this, int32_t phase, const MethodInfo* method);
// 0x5bb9660

System_String_o *
Characters_BaseCharacter__GetFootstepAudio
          (Characters_BaseCharacter_o *__this,int32_t phase,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07547512 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547512 = '\x01';
  }
  return "";
}


// Characters.BaseCharacter$$GetFPSDisabledRenderers
// il2cpp: System_Collections_Generic_List_Renderer__o* Characters_BaseCharacter__GetFPSDisabledRenderers (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x5bb9690

System_Collections_Generic_List_Renderer__o *
Characters_BaseCharacter__GetFPSDisabledRenderers(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Renderer__o *__this_00;
  
  if (Il2CppMethodInitialized_07547513 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Renderer_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Renderer);
    Il2CppMethodInitialized_07547513 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Renderer);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_Renderer_ctor);
  return __this_00;
}


// Characters.BaseCharacter$$AddRendererIfExists
// il2cpp: void Characters_BaseCharacter__AddRendererIfExists (Characters_BaseCharacter_o* __this, System_Collections_Generic_List_Renderer__o* renderers, UnityEngine_GameObject_o* go, bool multiple, const MethodInfo* method);
// 0x5bb96f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5bb990e: nop 

void Characters_BaseCharacter__AddRendererIfExists
               (Characters_BaseCharacter_o *__this,System_Collections_Generic_List_Renderer__o *renderers,
               UnityEngine_GameObject_o *go,bool multiple,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_Renderer_array *pUVar3;
  MethodInfo *pMVar4;
  bool bVar5;
  System_Object_array *pSVar6;
  ulong uVar7;
  UnityEngine_Object_o *pUVar8;
  int iVar9;
  ulong uVar10;
  
  if (Il2CppMethodInitialized_07547514 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Renderer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Renderer_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547514 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)go,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar5) {
    return;
  }
  if (multiple) {
    if ((go != (UnityEngine_GameObject_o *)0x0) &&
       (pSVar6 = UnityEngine_GameObject__GetComponentsInChildren_object__353c030
                           (go,(MethodInfo_353C030 *)
                               MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer),
       pSVar6 != (System_Object_array *)0x0)) {
      iVar9 = (int)pSVar6->max_length;
      uVar7 = pSVar6->max_length & 0xffffffff;
      if (renderers == (System_Collections_Generic_List_Renderer__o *)0x0) {
        if (iVar9 < 1) {
          return;
        }
        uVar10 = 0;
        while (uVar10 < uVar7) {
          pUVar8 = (UnityEngine_Object_o *)pSVar6->m_Items[uVar10];
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar5 = UnityEngine_Object__op_Inequality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar5) goto label_05bb9989;
          uVar10 = uVar10 + 1;
          uVar2 = (uint)pSVar6->max_length;
          uVar7 = (ulong)uVar2;
          if ((long)(int)uVar2 <= (long)uVar10) {
            return;
          }
        }
      }
      else {
        if (iVar9 < 1) {
          return;
        }
        uVar10 = 0;
        while (uVar10 < uVar7) {
          pUVar8 = (UnityEngine_Object_o *)pSVar6->m_Items[uVar10];
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar5 = UnityEngine_Object__op_Inequality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          pMVar4 = MethodInfo_System_Collections_Generic_List_Renderer_Add;
          if (bVar5) {
            piVar1 = &(renderers->fields)._version;
            *piVar1 = *piVar1 + 1;
            pUVar3 = (renderers->fields)._items;
            if (pUVar3 == (UnityEngine_Renderer_array *)0x0) goto label_05bb9989;
            uVar2 = (renderers->fields)._size;
            if (uVar2 < (uint)pUVar3->max_length) {
              (renderers->fields)._size = uVar2 + 1;
              pUVar3->m_Items[(int)uVar2] = (UnityEngine_Renderer_o *)pUVar8;
              Il2CppCodeGenWriteBarrier(pUVar3->m_Items + (int)uVar2);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)renderers,(Il2CppObject *)pUVar8,
                         (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
            }
          }
          uVar10 = uVar10 + 1;
          uVar2 = (uint)pSVar6->max_length;
          uVar7 = (ulong)uVar2;
          if ((long)(int)uVar2 <= (long)uVar10) {
            return;
          }
        }
      }
      ThrowIndexOutOfRangeException();
    }
  }
  else if (go != (UnityEngine_GameObject_o *)0x0) {
    pUVar8 = (UnityEngine_Object_o *)
             UnityEngine_GameObject__GetComponentInChildren_object_
                       (go,(MethodInfo_353B8D0 *)
                           MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Renderer);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Inequality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pMVar4 = MethodInfo_System_Collections_Generic_List_Renderer_Add;
    if (!bVar5) {
      return;
    }
    if (renderers != (System_Collections_Generic_List_Renderer__o *)0x0) {
      piVar1 = &(renderers->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar3 = (renderers->fields)._items;
      if (pUVar3 != (UnityEngine_Renderer_array *)0x0) {
        uVar2 = (renderers->fields)._size;
        if (uVar2 < (uint)pUVar3->max_length) {
          (renderers->fields)._size = uVar2 + 1;
          pUVar3->m_Items[(int)uVar2] = (UnityEngine_Renderer_o *)pUVar8;
          Il2CppCodeGenWriteBarrier(pUVar3->m_Items + (int)uVar2);
          return;
        }
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)renderers,(Il2CppObject *)pUVar8,
                   (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
        return;
      }
    }
  }
label_05bb9989:
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$GetCenterPosition
// il2cpp: UnityEngine_Vector3_o Characters_BaseCharacter__GetCenterPosition (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x5bb9990

UnityEngine_Vector3_o
Characters_BaseCharacter__GetCenterPosition(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_Fields UVar2;
  
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
     (__this_00 = (pUVar1->fields).Transform, __this_00 == (UnityEngine_Transform_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UVar2 = (UnityEngine_Vector3_Fields)UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
  return (UnityEngine_Vector3_o)UVar2;
}


// Characters.BaseCharacter$$.ctor
// il2cpp: void Characters_BaseCharacter___ctor (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x5bb99c0

void Characters_BaseCharacter___ctor(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  uint uVar1;
  Utility_PhysicsLayer_StaticFields *pUVar2;
  UnityEngine_LayerMask_o UVar3;
  System_Collections_Generic_HashSet_string__o *__this_00;
  System_Collections_Generic_List_BaseUseable__o *__this_01;
  System_Int32_array *layers;
  System_Object_array *pSVar4;
  
  if (Il2CppMethodInitialized_07547515 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BaseUseable_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_BaseUseable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547515 = '\x01';
  }
  (__this->fields).FootstepsEnabled = true;
  (__this->fields).SoundsEnabled = true;
  (__this->fields).EffectsEnabled = true;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_00,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  (__this->fields)._activeSoundLoops = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._activeSoundLoops);
  (__this->fields).IsVisible = true;
  (__this->fields).RichTextName = "";
  Il2CppCodeGenWriteBarrier(&(__this->fields).RichTextName);
  (__this->fields).VisibleName = "";
  Il2CppCodeGenWriteBarrier(&(__this->fields).VisibleName);
  (__this->fields).Guild = "";
  Il2CppCodeGenWriteBarrier(&(__this->fields).Guild);
  (__this->fields).FeedKillerName = "";
  Il2CppCodeGenWriteBarrier(&(__this->fields).FeedKillerName);
  (__this->fields).FeedVictimName = "";
  Il2CppCodeGenWriteBarrier(&(__this->fields).FeedVictimName);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_BaseUseable);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_BaseUseable_ctor);
  (__this->fields).Items = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Items);
  layers = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,4);
  if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
  }
  if (layers == (System_Int32_array *)0x0) {
    ThrowNullReferenceException();
  }
  uVar1 = (uint)layers->max_length;
  if (uVar1 != 0) {
    pUVar2 = TypeInfo_Utility_PhysicsLayer->static_fields;
    layers->m_Items[0] = pUVar2->TitanMovebox;
    if (((uVar1 != 1) && (layers->m_Items[1] = pUVar2->MapObjectEntities, 2 < uVar1)) &&
       (layers->m_Items[2] = pUVar2->MapObjectCharacters, uVar1 != 3)) {
      layers->m_Items[3] = pUVar2->MapObjectAll;
      UVar3 = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
      (__this->fields).GroundMaskLayers.fields.m_Mask = (int32_t)UVar3.fields.m_Mask;
      pSVar4 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,3);
      (__this->fields).crossfadeCache = pSVar4;
      Il2CppCodeGenWriteBarrier(&(__this->fields).crossfadeCache);
      Photon_Pun_MonoBehaviourPunCallbacks___ctor
                ((Photon_Pun_MonoBehaviourPunCallbacks_o *)__this,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowIndexOutOfRangeException();
}


