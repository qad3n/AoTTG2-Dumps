// Type: Characters.BaseCharacter
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Characters/BaseCharacter.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/BaseCharacter.cs
// --------------------------------

// Characters.BaseCharacter.<FadeSoundOverTime>d__127$$.ctor
// il2cpp: void Characters_BaseCharacter__FadeSoundOverTime_d__127___ctor (Characters_BaseCharacter__FadeSoundOverTime_d__127_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
Characters_BaseCharacter__FadeSoundOverTime_d__127___ctor(Characters_BaseCharacter__FadeSoundOverTime_d__127_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Characters.BaseCharacter.<FadeSoundOverTime>d__127$$System.IDisposable.Dispose
// il2cpp: void Characters_BaseCharacter__FadeSoundOverTime_d__127__System_IDisposable_Dispose (Characters_BaseCharacter__FadeSoundOverTime_d__127_o* __this, const MethodInfo* method);
// 0x180547020

void
Characters_BaseCharacter__FadeSoundOverTime_d__127__System_IDisposable_Dispose(Characters_BaseCharacter__FadeSoundOverTime_d__127_o* __this, MethodInfo* method)

{
  return;
}


// Characters.BaseCharacter.<FadeSoundOverTime>d__127$$MoveNext
// il2cpp: bool Characters_BaseCharacter__FadeSoundOverTime_d__127__MoveNext (Characters_BaseCharacter__FadeSoundOverTime_d__127_o* __this, const MethodInfo* method);
// 0x18211d130

bool Characters_BaseCharacter__FadeSoundOverTime_d__127__MoveNext
               (Characters_BaseCharacter__FadeSoundOverTime_d__127_o *__this,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this_00;
  Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *__this_01;
  float fVar1;
  
  if (Il2CppMethodInitialized_184346b47 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    Il2CppMethodInitialized_184346b47 = '\x01';
  }
  if ((uint)(__this->fields).__1__state < 2) {
    fVar1 = (__this->fields).time;
    (__this->fields).__1__state = -1;
    if (0.0 <= fVar1) {
      __this_00 = (__this->fields).source;
      (__this->fields).time = fVar1 - 0.1;
      if (__this_00 != (UnityEngine_AudioSource_o *)0x0) {
        fVar1 = UnityEngine_AudioSource__get_volume(__this_00,(MethodInfo *)0x0);
        UnityEngine_AudioSource__set_volume
                  (__this_00,(__this->fields).volumeIncrement * 0.1 + fVar1,(MethodInfo *)0x0);
        __this_01 = (Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
        UnityEngine_WaitForSeconds___ctor(__this_01,0.1,(MethodInfo *)0x0);
        (__this->fields).__2__current = (Il2CppObject *)__this_01;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,__this_01);
        (__this->fields).__1__state = 1;
        return true;
      }
      ThrowNullReferenceException();
    }
  }
  return false;
}


// Characters.BaseCharacter.<FadeSoundOverTime>d__127$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Characters_BaseCharacter__FadeSoundOverTime_d__127__System_Collections_Generic_IEnumerator_System_Object__get_Current (Characters_BaseCharacter__FadeSoundOverTime_d__127_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Characters_BaseCharacter__FadeSoundOverTime_d__127__System_Collections_Generic_IEnumerator_System_Object__get_Current(Characters_BaseCharacter__FadeSoundOverTime_d__127_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseCharacter.<FadeSoundOverTime>d__127$$System.Collections.IEnumerator.Reset
// il2cpp: void Characters_BaseCharacter__FadeSoundOverTime_d__127__System_Collections_IEnumerator_Reset (Characters_BaseCharacter__FadeSoundOverTime_d__127_o* __this, const MethodInfo* method);
// 0x18211d210

void Characters_BaseCharacter__FadeSoundOverTime_d__127__System_Collections_IEnumerator_Reset
               (Characters_BaseCharacter__FadeSoundOverTime_d__127_o *__this,MethodInfo *method)

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
                  MethodInfo_Characters_BaseCharacter_FadeSoundOverTime_d__127_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Characters.BaseCharacter.<FadeSoundOverTime>d__127$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Characters_BaseCharacter__FadeSoundOverTime_d__127__System_Collections_IEnumerator_get_Current (Characters_BaseCharacter__FadeSoundOverTime_d__127_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Characters_BaseCharacter__FadeSoundOverTime_d__127__System_Collections_IEnumerator_get_Current(Characters_BaseCharacter__FadeSoundOverTime_d__127_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseCharacter.<RevealAndRemove>d__80$$.ctor
// il2cpp: void Characters_BaseCharacter__RevealAndRemove_d__80___ctor (Characters_BaseCharacter__RevealAndRemove_d__80_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
Characters_BaseCharacter__RevealAndRemove_d__80___ctor(Characters_BaseCharacter__RevealAndRemove_d__80_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Characters.BaseCharacter.<RevealAndRemove>d__80$$System.IDisposable.Dispose
// il2cpp: void Characters_BaseCharacter__RevealAndRemove_d__80__System_IDisposable_Dispose (Characters_BaseCharacter__RevealAndRemove_d__80_o* __this, const MethodInfo* method);
// 0x180547020

void
Characters_BaseCharacter__RevealAndRemove_d__80__System_IDisposable_Dispose(Characters_BaseCharacter__RevealAndRemove_d__80_o* __this, MethodInfo* method)

{
  return;
}


// Characters.BaseCharacter.<RevealAndRemove>d__80$$MoveNext
// il2cpp: bool Characters_BaseCharacter__RevealAndRemove_d__80__MoveNext (Characters_BaseCharacter__RevealAndRemove_d__80_o* __this, const MethodInfo* method);
// 0x18211eae0

bool Characters_BaseCharacter__RevealAndRemove_d__80__MoveNext
               (Characters_BaseCharacter__RevealAndRemove_d__80_o *__this,MethodInfo *method)

{
  float fVar1;
  int iVar2;
  Characters_BaseCharacter_o *pCVar3;
  Outline_o *pOVar4;
  bool bVar5;
  Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *pPVar6;
  UnityEngine_Color_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184346b48 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    Il2CppMethodInitialized_184346b48 = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  pCVar3 = (__this->fields).__4__this;
  if (iVar2 == 0) {
    fVar1 = (__this->fields).startDelay;
    (__this->fields).__1__state = -1;
    pPVar6 = (Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(pPVar6,fVar1,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)pPVar6;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pPVar6);
    (__this->fields).__1__state = 1;
    return true;
  }
  if (iVar2 != 1) {
    if (iVar2 == 2) {
      (__this->fields).__1__state = -1;
      if (pCVar3 == (Characters_BaseCharacter_o *)0x0) goto label_18211ed0e;
      if (Il2CppMethodInitialized_184346b0f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_184346b0f = '\x01';
      }
      pOVar4 = (pCVar3->fields).OutlineComponent;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pOVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar5) {
        pOVar4 = (pCVar3->fields).OutlineComponent;
        if (pOVar4 == (Outline_o *)0x0) goto label_18211ed0e;
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pOVar4,false,(MethodInfo *)0x0);
      }
    }
    return false;
  }
  (__this->fields).__1__state = -1;
  if (pCVar3 != (Characters_BaseCharacter_o *)0x0) {
    if (Il2CppMethodInitialized_184346b0b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_184346b0b = '\x01';
    }
    pOVar4 = (pCVar3->fields).OutlineComponent;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pOVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar5) {
label_18211ec71:
      fVar1 = (__this->fields).seconds;
      pPVar6 = (Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
      UnityEngine_WaitForSeconds___ctor(pPVar6,fVar1,(MethodInfo *)0x0);
      (__this->fields).__2__current = (Il2CppObject *)pPVar6;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pPVar6);
      (__this->fields).__1__state = 2;
      return true;
    }
    pOVar4 = (pCVar3->fields).OutlineComponent;
    if (pOVar4 != (Outline_o *)0x0) {
      Outline__set_OutlineMode(pOVar4,0,(MethodInfo *)0x0);
      pOVar4 = (pCVar3->fields).OutlineComponent;
      if (pOVar4 != (Outline_o *)0x0) {
        local_28[0].r = 1.0;
        local_28[0].g = 1.0;
        local_28[0].b = 1.0;
        local_28[0].a = 1.0;
        Outline__set_OutlineColor(pOVar4,(UnityEngine_Color_o *)local_28,(MethodInfo *)0x0);
        pOVar4 = (pCVar3->fields).OutlineComponent;
        if (pOVar4 != (Outline_o *)0x0) {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pOVar4,true,(MethodInfo *)0x0);
          goto label_18211ec71;
        }
      }
    }
  }
label_18211ed0e:
  ThrowNullReferenceException();
}


// Characters.BaseCharacter.<RevealAndRemove>d__80$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Characters_BaseCharacter__RevealAndRemove_d__80__System_Collections_Generic_IEnumerator_System_Object__get_Current (Characters_BaseCharacter__RevealAndRemove_d__80_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Characters_BaseCharacter__RevealAndRemove_d__80__System_Collections_Generic_IEnumerator_System_Object__get_Current(Characters_BaseCharacter__RevealAndRemove_d__80_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseCharacter.<RevealAndRemove>d__80$$System.Collections.IEnumerator.Reset
// il2cpp: void Characters_BaseCharacter__RevealAndRemove_d__80__System_Collections_IEnumerator_Reset (Characters_BaseCharacter__RevealAndRemove_d__80_o* __this, const MethodInfo* method);
// 0x18211ed20

void Characters_BaseCharacter__RevealAndRemove_d__80__System_Collections_IEnumerator_Reset
               (Characters_BaseCharacter__RevealAndRemove_d__80_o *__this,MethodInfo *method)

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
                  MethodInfo_Characters_BaseCharacter_RevealAndRemove_d__80_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Characters.BaseCharacter.<RevealAndRemove>d__80$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Characters_BaseCharacter__RevealAndRemove_d__80__System_Collections_IEnumerator_get_Current (Characters_BaseCharacter__RevealAndRemove_d__80_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Characters_BaseCharacter__RevealAndRemove_d__80__System_Collections_IEnumerator_get_Current(Characters_BaseCharacter__RevealAndRemove_d__80_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseCharacter.<WaitAndDie>d__102$$.ctor
// il2cpp: void Characters_BaseCharacter__WaitAndDie_d__102___ctor (Characters_BaseCharacter__WaitAndDie_d__102_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
Characters_BaseCharacter__WaitAndDie_d__102___ctor(Characters_BaseCharacter__WaitAndDie_d__102_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Characters.BaseCharacter.<WaitAndDie>d__102$$System.IDisposable.Dispose
// il2cpp: void Characters_BaseCharacter__WaitAndDie_d__102__System_IDisposable_Dispose (Characters_BaseCharacter__WaitAndDie_d__102_o* __this, const MethodInfo* method);
// 0x180547020

void
Characters_BaseCharacter__WaitAndDie_d__102__System_IDisposable_Dispose(Characters_BaseCharacter__WaitAndDie_d__102_o* __this, MethodInfo* method)

{
  return;
}


// Characters.BaseCharacter.<WaitAndDie>d__102$$MoveNext
// il2cpp: bool Characters_BaseCharacter__WaitAndDie_d__102__MoveNext (Characters_BaseCharacter__WaitAndDie_d__102_o* __this, const MethodInfo* method);
// 0x18211f270

bool Characters_BaseCharacter__WaitAndDie_d__102__MoveNext
               (Characters_BaseCharacter__WaitAndDie_d__102_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *__this_00;
  UnityEngine_GameObject_o *targetGo;
  
  if (Il2CppMethodInitialized_184346b49 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_184346b49 = '\x01';
  }
  if ((__this->fields).__1__state == 0) {
    __this_00 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (__this_00 == (Characters_BaseCharacter_o *)0x0) {
      ThrowNullReferenceException();
    }
    targetGo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    Photon_Pun_PhotonNetwork__Destroy_1d35aa0(targetGo,(MethodInfo *)0x0);
  }
  return false;
}


// Characters.BaseCharacter.<WaitAndDie>d__102$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Characters_BaseCharacter__WaitAndDie_d__102__System_Collections_Generic_IEnumerator_System_Object__get_Current (Characters_BaseCharacter__WaitAndDie_d__102_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Characters_BaseCharacter__WaitAndDie_d__102__System_Collections_Generic_IEnumerator_System_Object__get_Current(Characters_BaseCharacter__WaitAndDie_d__102_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseCharacter.<WaitAndDie>d__102$$System.Collections.IEnumerator.Reset
// il2cpp: void Characters_BaseCharacter__WaitAndDie_d__102__System_Collections_IEnumerator_Reset (Characters_BaseCharacter__WaitAndDie_d__102_o* __this, const MethodInfo* method);
// 0x18211f2f0

void Characters_BaseCharacter__WaitAndDie_d__102__System_Collections_IEnumerator_Reset
               (Characters_BaseCharacter__WaitAndDie_d__102_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_Characters_BaseCharacter_WaitAndDie_d__102_System_Collections_IEnumerator_Reset)
  ;
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Characters.BaseCharacter.<WaitAndDie>d__102$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Characters_BaseCharacter__WaitAndDie_d__102__System_Collections_IEnumerator_get_Current (Characters_BaseCharacter__WaitAndDie_d__102_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Characters_BaseCharacter__WaitAndDie_d__102__System_Collections_IEnumerator_get_Current(Characters_BaseCharacter__WaitAndDie_d__102_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseCharacter.<WaitAndNotifyReloaded>d__150$$.ctor
// il2cpp: void Characters_BaseCharacter__WaitAndNotifyReloaded_d__150___ctor (Characters_BaseCharacter__WaitAndNotifyReloaded_d__150_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
Characters_BaseCharacter__WaitAndNotifyReloaded_d__150___ctor(Characters_BaseCharacter__WaitAndNotifyReloaded_d__150_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Characters.BaseCharacter.<WaitAndNotifyReloaded>d__150$$System.IDisposable.Dispose
// il2cpp: void Characters_BaseCharacter__WaitAndNotifyReloaded_d__150__System_IDisposable_Dispose (Characters_BaseCharacter__WaitAndNotifyReloaded_d__150_o* __this, const MethodInfo* method);
// 0x180547020

void
Characters_BaseCharacter__WaitAndNotifyReloaded_d__150__System_IDisposable_Dispose(Characters_BaseCharacter__WaitAndNotifyReloaded_d__150_o* __this, MethodInfo* method)

{
  return;
}


// Characters.BaseCharacter.<WaitAndNotifyReloaded>d__150$$MoveNext
// il2cpp: bool Characters_BaseCharacter__WaitAndNotifyReloaded_d__150__MoveNext (Characters_BaseCharacter__WaitAndNotifyReloaded_d__150_o* __this, const MethodInfo* method);
// 0x18211f330

bool Characters_BaseCharacter__WaitAndNotifyReloaded_d__150__MoveNext
               (Characters_BaseCharacter__WaitAndNotifyReloaded_d__150_o *__this,MethodInfo *method)

{
  int iVar1;
  Characters_BaseCharacter_o *character;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  Il2CppObject *pIVar2;
  
  if (Il2CppMethodInitialized_184346b4a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForEndOfFrame);
    Il2CppMethodInitialized_184346b4a = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if ((iVar1 == 0) || (iVar1 == 1)) {
    (__this->fields).__1__state = -1;
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    if (TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator ==
        (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      pIVar2 = (Il2CppObject *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
      UnityEngine_WaitForEndOfFrame___ctor
                ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pIVar2,(MethodInfo *)0x0);
      (__this->fields).__2__current = pIVar2;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pIVar2);
      (__this->fields).__1__state = 1;
      return true;
    }
    pIVar2 = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pIVar2,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pIVar2);
    (__this->fields).__1__state = 2;
    return true;
  }
  if (iVar1 == 2) {
    (__this->fields).__1__state = -1;
    pIVar2 = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pIVar2,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pIVar2);
    (__this->fields).__1__state = 3;
    return true;
  }
  if (iVar1 == 3) {
    character = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    if (TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator !=
        (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
      if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        CustomLogic_CustomLogicEvaluator__OnCharacterReloaded(__this_00,character,(MethodInfo *)0x0);
        return false;
      }
      ThrowNullReferenceException();
    }
  }
  return false;
}


// Characters.BaseCharacter.<WaitAndNotifyReloaded>d__150$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Characters_BaseCharacter__WaitAndNotifyReloaded_d__150__System_Collections_Generic_IEnumerator_System_Object__get_Current (Characters_BaseCharacter__WaitAndNotifyReloaded_d__150_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Characters_BaseCharacter__WaitAndNotifyReloaded_d__150__System_Collections_Generic_IEnumerator_System_Object__get_Current(Characters_BaseCharacter__WaitAndNotifyReloaded_d__150_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseCharacter.<WaitAndNotifyReloaded>d__150$$System.Collections.IEnumerator.Reset
// il2cpp: void Characters_BaseCharacter__WaitAndNotifyReloaded_d__150__System_Collections_IEnumerator_Reset (Characters_BaseCharacter__WaitAndNotifyReloaded_d__150_o* __this, const MethodInfo* method);
// 0x18211f510

void Characters_BaseCharacter__WaitAndNotifyReloaded_d__150__System_Collections_IEnumerator_Reset
               (Characters_BaseCharacter__WaitAndNotifyReloaded_d__150_o *__this,MethodInfo *method)

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
                  MethodInfo_Characters_BaseCharacter_WaitAndNotifyReloaded_d__150_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Characters.BaseCharacter.<WaitAndNotifyReloaded>d__150$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Characters_BaseCharacter__WaitAndNotifyReloaded_d__150__System_Collections_IEnumerator_get_Current (Characters_BaseCharacter__WaitAndNotifyReloaded_d__150_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Characters_BaseCharacter__WaitAndNotifyReloaded_d__150__System_Collections_IEnumerator_get_Current(Characters_BaseCharacter__WaitAndNotifyReloaded_d__150_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseCharacter.<WaitAndNotifySpawn>d__149$$.ctor
// il2cpp: void Characters_BaseCharacter__WaitAndNotifySpawn_d__149___ctor (Characters_BaseCharacter__WaitAndNotifySpawn_d__149_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
Characters_BaseCharacter__WaitAndNotifySpawn_d__149___ctor(Characters_BaseCharacter__WaitAndNotifySpawn_d__149_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Characters.BaseCharacter.<WaitAndNotifySpawn>d__149$$System.IDisposable.Dispose
// il2cpp: void Characters_BaseCharacter__WaitAndNotifySpawn_d__149__System_IDisposable_Dispose (Characters_BaseCharacter__WaitAndNotifySpawn_d__149_o* __this, const MethodInfo* method);
// 0x180547020

void
Characters_BaseCharacter__WaitAndNotifySpawn_d__149__System_IDisposable_Dispose(Characters_BaseCharacter__WaitAndNotifySpawn_d__149_o* __this, MethodInfo* method)

{
  return;
}


// Characters.BaseCharacter.<WaitAndNotifySpawn>d__149$$MoveNext
// il2cpp: bool Characters_BaseCharacter__WaitAndNotifySpawn_d__149__MoveNext (Characters_BaseCharacter__WaitAndNotifySpawn_d__149_o* __this, const MethodInfo* method);
// 0x18211f550

bool Characters_BaseCharacter__WaitAndNotifySpawn_d__149__MoveNext
               (Characters_BaseCharacter__WaitAndNotifySpawn_d__149_o *__this,MethodInfo *method)

{
  int iVar1;
  Characters_BaseCharacter_o *character;
  CustomLogic_CustomLogicEvaluator_o *pCVar2;
  Utility_BaseComponentCache_o *pUVar3;
  Photon_Pun_PhotonView_o *pPVar4;
  Il2CppObject *pIVar5;
  
  if (Il2CppMethodInitialized_184346b4b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForEndOfFrame);
    Il2CppMethodInitialized_184346b4b = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if ((iVar1 == 0) || (iVar1 == 1)) {
    (__this->fields).__1__state = -1;
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    if (TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator !=
        (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      pIVar5 = (Il2CppObject *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
      UnityEngine_WaitForEndOfFrame___ctor
                ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pIVar5,(MethodInfo *)0x0);
      (__this->fields).__2__current = pIVar5;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pIVar5);
      (__this->fields).__1__state = 2;
      return true;
    }
    pIVar5 = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pIVar5,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar5;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pIVar5);
    (__this->fields).__1__state = 1;
    return true;
  }
  if (iVar1 == 2) {
    (__this->fields).__1__state = -1;
    pIVar5 = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pIVar5,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar5;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pIVar5);
    (__this->fields).__1__state = 3;
    return true;
  }
  if (iVar1 == 3) {
    character = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    if (TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator !=
        (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      pCVar2 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
      if ((pCVar2 != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
         (CustomLogic_CustomLogicEvaluator__OnCharacterSpawn(pCVar2,character,(MethodInfo *)0x0),
         character != (Characters_BaseCharacter_o *)0x0)) {
        if ((character->fields).AI != false) {
          return false;
        }
        if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
        }
        pUVar3 = (character->fields).Cache;
        if (((pUVar3 != (Utility_BaseComponentCache_o *)0x0) &&
            (pPVar4 = (pUVar3->fields).PhotonView, pPVar4 != (Photon_Pun_PhotonView_o *)0x0)) &&
           (pCVar2 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator,
           pCVar2 != (CustomLogic_CustomLogicEvaluator_o *)0x0)) {
          CustomLogic_CustomLogicEvaluator__OnPlayerSpawn
                    (pCVar2,(pPVar4->fields)._Owner_k__BackingField,character,(MethodInfo *)0x0);
          return false;
        }
      }
      ThrowNullReferenceException();
    }
  }
  return false;
}


// Characters.BaseCharacter.<WaitAndNotifySpawn>d__149$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Characters_BaseCharacter__WaitAndNotifySpawn_d__149__System_Collections_Generic_IEnumerator_System_Object__get_Current (Characters_BaseCharacter__WaitAndNotifySpawn_d__149_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Characters_BaseCharacter__WaitAndNotifySpawn_d__149__System_Collections_Generic_IEnumerator_System_Object__get_Current(Characters_BaseCharacter__WaitAndNotifySpawn_d__149_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseCharacter.<WaitAndNotifySpawn>d__149$$System.Collections.IEnumerator.Reset
// il2cpp: void Characters_BaseCharacter__WaitAndNotifySpawn_d__149__System_Collections_IEnumerator_Reset (Characters_BaseCharacter__WaitAndNotifySpawn_d__149_o* __this, const MethodInfo* method);
// 0x18211f7a0

void Characters_BaseCharacter__WaitAndNotifySpawn_d__149__System_Collections_IEnumerator_Reset
               (Characters_BaseCharacter__WaitAndNotifySpawn_d__149_o *__this,MethodInfo *method)

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
                  MethodInfo_Characters_BaseCharacter_WaitAndNotifySpawn_d__149_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Characters.BaseCharacter.<WaitAndNotifySpawn>d__149$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Characters_BaseCharacter__WaitAndNotifySpawn_d__149__System_Collections_IEnumerator_get_Current (Characters_BaseCharacter__WaitAndNotifySpawn_d__149_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Characters_BaseCharacter__WaitAndNotifySpawn_d__149__System_Collections_IEnumerator_get_Current(Characters_BaseCharacter__WaitAndNotifySpawn_d__149_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseCharacter.<WaitAndPlaySound>d__122$$.ctor
// il2cpp: void Characters_BaseCharacter__WaitAndPlaySound_d__122___ctor (Characters_BaseCharacter__WaitAndPlaySound_d__122_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
Characters_BaseCharacter__WaitAndPlaySound_d__122___ctor(Characters_BaseCharacter__WaitAndPlaySound_d__122_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Characters.BaseCharacter.<WaitAndPlaySound>d__122$$System.IDisposable.Dispose
// il2cpp: void Characters_BaseCharacter__WaitAndPlaySound_d__122__System_IDisposable_Dispose (Characters_BaseCharacter__WaitAndPlaySound_d__122_o* __this, const MethodInfo* method);
// 0x180547020

void
Characters_BaseCharacter__WaitAndPlaySound_d__122__System_IDisposable_Dispose(Characters_BaseCharacter__WaitAndPlaySound_d__122_o* __this, MethodInfo* method)

{
  return;
}


// Characters.BaseCharacter.<WaitAndPlaySound>d__122$$MoveNext
// il2cpp: bool Characters_BaseCharacter__WaitAndPlaySound_d__122__MoveNext (Characters_BaseCharacter__WaitAndPlaySound_d__122_o* __this, const MethodInfo* method);
// 0x18211f7e0

bool Characters_BaseCharacter__WaitAndPlaySound_d__122__MoveNext
               (Characters_BaseCharacter__WaitAndPlaySound_d__122_o *__this,MethodInfo *method)

{
  float amplificationFactor;
  int iVar1;
  Characters_BaseCharacter_o *__this_00;
  Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *__this_01;
  
  if (Il2CppMethodInitialized_184346b4c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSeconds);
    Il2CppMethodInitialized_184346b4c = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    amplificationFactor = (__this->fields).delay;
    (__this->fields).__1__state = -1;
    __this_01 = (Photon_Voice_Unity_UtilityScripts_MicAmplifierShort_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor
              (__this_01,amplificationFactor,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_01;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,__this_01);
    (__this->fields).__1__state = 1;
    return true;
  }
  if (iVar1 == 1) {
    __this_00 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (__this_00 == (Characters_BaseCharacter_o *)0x0) {
      ThrowNullReferenceException();
    }
    Characters_BaseCharacter__PlaySound(__this_00,(__this->fields).sound,(MethodInfo *)0x0);
  }
  return false;
}


// Characters.BaseCharacter.<WaitAndPlaySound>d__122$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Characters_BaseCharacter__WaitAndPlaySound_d__122__System_Collections_Generic_IEnumerator_System_Object__get_Current (Characters_BaseCharacter__WaitAndPlaySound_d__122_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Characters_BaseCharacter__WaitAndPlaySound_d__122__System_Collections_Generic_IEnumerator_System_Object__get_Current(Characters_BaseCharacter__WaitAndPlaySound_d__122_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseCharacter.<WaitAndPlaySound>d__122$$System.Collections.IEnumerator.Reset
// il2cpp: void Characters_BaseCharacter__WaitAndPlaySound_d__122__System_Collections_IEnumerator_Reset (Characters_BaseCharacter__WaitAndPlaySound_d__122_o* __this, const MethodInfo* method);
// 0x18211f8a0

void Characters_BaseCharacter__WaitAndPlaySound_d__122__System_Collections_IEnumerator_Reset
               (Characters_BaseCharacter__WaitAndPlaySound_d__122_o *__this,MethodInfo *method)

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
                  MethodInfo_Characters_BaseCharacter_WaitAndPlaySound_d__122_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Characters.BaseCharacter.<WaitAndPlaySound>d__122$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Characters_BaseCharacter__WaitAndPlaySound_d__122__System_Collections_IEnumerator_get_Current (Characters_BaseCharacter__WaitAndPlaySound_d__122_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
Characters_BaseCharacter__WaitAndPlaySound_d__122__System_Collections_IEnumerator_get_Current(Characters_BaseCharacter__WaitAndPlaySound_d__122_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseCharacter$$get_DefaultMaxHealth
// il2cpp: int32_t Characters_BaseCharacter__get_DefaultMaxHealth (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x180564040

int32_t
Characters_BaseCharacter__get_DefaultMaxHealth(Characters_BaseCharacter_o* __this, MethodInfo* method)

{
  return 1;
}


// Characters.BaseCharacter$$get_Gravity
// il2cpp: UnityEngine_Vector3_o Characters_BaseCharacter__get_Gravity (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x18210fb10

UnityEngine_Vector3_o *
Characters_BaseCharacter__get_Gravity
          (UnityEngine_Vector3_o *__return_storage_ptr__,Characters_BaseCharacter_o *__this,MethodInfo *method
          )

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_Vector3_StaticFields *pUVar3;
  
  if (Il2CppMethodInitialized_18434494b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18434494b = '\x01';
  }
  pUVar3 = TypeInfo_UnityEngine_Vector3->static_fields;
  (__return_storage_ptr__->fields).x = (pUVar3->downVector).fields.x * 20.0;
  uVar1 = (pUVar3->downVector).fields.y;
  uVar2 = (pUVar3->downVector).fields.z;
  (__return_storage_ptr__->fields).y = (float)uVar1 * 20.0;
  (__return_storage_ptr__->fields).z = (float)uVar2 * 20.0;
  return __return_storage_ptr__;
}


// Characters.BaseCharacter$$get_EmoteActions
// il2cpp: System_Collections_Generic_List_string__o* Characters_BaseCharacter__get_EmoteActions (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x18210fab0

System_Collections_Generic_List_string__o *
Characters_BaseCharacter__get_EmoteActions(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  
  if (Il2CppMethodInitialized_184346b06 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    Il2CppMethodInitialized_184346b06 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  return __this_00;
}


// Characters.BaseCharacter$$get_MaxFootstepDistance
// il2cpp: float Characters_BaseCharacter__get_MaxFootstepDistance (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x18210fba0

float
Characters_BaseCharacter__get_MaxFootstepDistance(Characters_BaseCharacter_o* __this, MethodInfo* method)

{
  return 200.0;
}


// Characters.BaseCharacter$$get_MaxSoundDistance
// il2cpp: float Characters_BaseCharacter__get_MaxSoundDistance (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x18210fb90

float
Characters_BaseCharacter__get_MaxSoundDistance(Characters_BaseCharacter_o* __this, MethodInfo* method)

{
  return 500.0;
}


// Characters.BaseCharacter$$get_LODQualityMediumDistance
// il2cpp: float Characters_BaseCharacter__get_LODQualityMediumDistance (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x18210fb90

float
Characters_BaseCharacter__get_LODQualityMediumDistance(Characters_BaseCharacter_o* __this, MethodInfo* method)

{
  return 500.0;
}


// Characters.BaseCharacter$$get_LODQualityLowDistance
// il2cpp: float Characters_BaseCharacter__get_LODQualityLowDistance (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x18210fa90

float
Characters_BaseCharacter__get_LODQualityLowDistance(Characters_BaseCharacter_o* __this, MethodInfo* method)

{
  return 1000.0;
}


// Characters.BaseCharacter$$get_CullShadowsDistance
// il2cpp: float Characters_BaseCharacter__get_CullShadowsDistance (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x18210fa90

float
Characters_BaseCharacter__get_CullShadowsDistance(Characters_BaseCharacter_o* __this, MethodInfo* method)

{
  return 1000.0;
}


// Characters.BaseCharacter$$get_CullRendererDistance
// il2cpp: float Characters_BaseCharacter__get_CullRendererDistance (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x18210faa0

float
Characters_BaseCharacter__get_CullRendererDistance(Characters_BaseCharacter_o* __this, MethodInfo* method)

{
  return 5000.0;
}


// Characters.BaseCharacter$$get_CullEffectsDistance
// il2cpp: float Characters_BaseCharacter__get_CullEffectsDistance (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x18210fa90

float
Characters_BaseCharacter__get_CullEffectsDistance(Characters_BaseCharacter_o* __this, MethodInfo* method)

{
  return 1000.0;
}


// Characters.BaseCharacter$$get_Name
// il2cpp: System_String_o* Characters_BaseCharacter__get_Name (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x1805853c0

System_String_o*
Characters_BaseCharacter__get_Name(Characters_BaseCharacter_o* __this, MethodInfo* method)

{
  return *(Unity_Properties_IProperty_TContainer__o **)
          &(__this->fields).m_IndexedCollectionPropertyBag.fields.m_Position;
}


// Characters.BaseCharacter$$set_Name
// il2cpp: void Characters_BaseCharacter__set_Name (Characters_BaseCharacter_o* __this, System_String_o* value, const MethodInfo* method);
// 0x18210fc60

void Characters_BaseCharacter__set_Name
               (Characters_BaseCharacter_o *__this,System_String_o *value,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184346b07 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    Il2CppMethodInitialized_184346b07 = '\x01';
  }
  (__this->fields).RichTextName = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields).RichTextName,value);
  pSVar1 = (__this->fields).RichTextName;
  if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  pSVar1 = MiscExtensions__StripColor(pSVar1,(MethodInfo *)0x0);
  (__this->fields).VisibleName = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).VisibleName,pSVar1);
  return;
}


// Characters.BaseCharacter$$get_GroundMask
// il2cpp: UnityEngine_LayerMask_o Characters_BaseCharacter__get_GroundMask (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x18210fb80

UnityEngine_LayerMask_o
Characters_BaseCharacter__get_GroundMask(Characters_BaseCharacter_o* __this, MethodInfo* method)

{
  return (__this->fields).GroundMaskLayers;
}


// Characters.BaseCharacter$$get_GroundDistance
// il2cpp: float Characters_BaseCharacter__get_GroundDistance (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x18210fb70

float
Characters_BaseCharacter__get_GroundDistance(Characters_BaseCharacter_o* __this, MethodInfo* method)

{
  return 0.3;
}


// Characters.BaseCharacter$$add_OnPlayerPropertiesChanged
// il2cpp: void Characters_BaseCharacter__add_OnPlayerPropertiesChanged (Characters_BaseCharacter_o* __this, System_Action_Hashtable__o* value, const MethodInfo* method);
// 0x18210f9e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18210fa1f: nop 

void Characters_BaseCharacter__add_OnPlayerPropertiesChanged
               (Characters_BaseCharacter_o *__this,System_Action_Hashtable__o *value,MethodInfo *method)

{
  System_Action_Hashtable__c *pSVar1;
  System_Delegate_o *obj;
  Il2CppObject *pIVar2;
  System_Action_Hashtable__o *pSVar3;
  System_Action_Hashtable__o *a;
  bool bVar4;
  
  if (Il2CppMethodInitialized_184346b08 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_Hashtable);
    Il2CppMethodInitialized_184346b08 = '\x01';
  }
  a = (__this->fields).OnPlayerPropertiesChanged;
  do {
    obj = System_Delegate__Combine((System_Delegate_o *)a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    pSVar1 = TypeInfo_System_Action_Hashtable;
    pIVar2 = (Il2CppObject *)0x0;
    if (obj != (System_Delegate_o *)0x0) {
      pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_System_Action_Hashtable);
      if (pIVar2 == (Il2CppObject *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(obj,pSVar1);
      }
    }
    pSVar3 = (System_Action_Hashtable__o *)il2cpp_runtime_helper_1804174a0(&(__this->fields).OnPlayerPropertiesChanged,pIVar2);
    bVar4 = pSVar3 != a;
    a = pSVar3;
  } while (bVar4);
  return;
}


// Characters.BaseCharacter$$remove_OnPlayerPropertiesChanged
// il2cpp: void Characters_BaseCharacter__remove_OnPlayerPropertiesChanged (Characters_BaseCharacter_o* __this, System_Action_Hashtable__o* value, const MethodInfo* method);
// 0x18210fbb0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18210fbef: nop 

void Characters_BaseCharacter__remove_OnPlayerPropertiesChanged
               (Characters_BaseCharacter_o *__this,System_Action_Hashtable__o *value,MethodInfo *method)

{
  System_Action_Hashtable__c *pSVar1;
  System_Delegate_o *obj;
  Il2CppObject *pIVar2;
  System_Action_Hashtable__o *pSVar3;
  System_Action_Hashtable__o *source;
  bool bVar4;
  
  if (Il2CppMethodInitialized_184346b09 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_Hashtable);
    Il2CppMethodInitialized_184346b09 = '\x01';
  }
  source = (__this->fields).OnPlayerPropertiesChanged;
  do {
    obj = System_Delegate__Remove((System_Delegate_o *)source,(System_Delegate_o *)value,(MethodInfo *)0x0);
    pSVar1 = TypeInfo_System_Action_Hashtable;
    pIVar2 = (Il2CppObject *)0x0;
    if (obj != (System_Delegate_o *)0x0) {
      pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(Il2CppClass *)TypeInfo_System_Action_Hashtable);
      if (pIVar2 == (Il2CppObject *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(obj,pSVar1);
      }
    }
    pSVar3 = (System_Action_Hashtable__o *)il2cpp_runtime_helper_1804174a0(&(__this->fields).OnPlayerPropertiesChanged,pIVar2);
    bVar4 = pSVar3 != source;
    source = pSVar3;
  } while (bVar4);
  return;
}


// Characters.BaseCharacter$$AlwaysAnimate
// il2cpp: bool Characters_BaseCharacter__AlwaysAnimate (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x180668280

bool
Characters_BaseCharacter__AlwaysAnimate(Characters_BaseCharacter_o* __this, MethodInfo* method)

{
  return false;
}


// Characters.BaseCharacter$$RefreshRenderers
// il2cpp: void Characters_BaseCharacter__RefreshRenderers (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x18210e670

void Characters_BaseCharacter__RefreshRenderers(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  if ((__this->fields).Animation != (Characters_AnimationHandler_o *)0x0) {
    Characters_AnimationHandler__RefreshRenderers((__this->fields).Animation,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Characters.BaseCharacter$$ToggleParticles
// il2cpp: void Characters_BaseCharacter__ToggleParticles (Characters_BaseCharacter_o* __this, UnityEngine_ParticleSystem_o* system, bool toggle, const MethodInfo* method);
// 0x18210f0f0

void Characters_BaseCharacter__ToggleParticles
               (Characters_BaseCharacter_o *__this,UnityEngine_ParticleSystem_o *system,bool toggle,
               MethodInfo *method)

{
  bool bVar1;
  
  if (system == (UnityEngine_ParticleSystem_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = UnityEngine_ParticleSystem__get_isEmitting(system,(MethodInfo *)0x0);
  if (toggle != bVar1) {
    if (toggle) {
      UnityEngine_ParticleSystem__Play_2fca570(system,(MethodInfo *)0x0);
      return;
    }
    UnityEngine_ParticleSystem__Stop_2fca820(system,(MethodInfo *)0x0);
  }
  return;
}


// Characters.BaseCharacter$$OnDistanceUpdate
// il2cpp: void Characters_BaseCharacter__OnDistanceUpdate (Characters_BaseCharacter_o* __this, float distance, const MethodInfo* method);
// 0x18210d790

void Characters_BaseCharacter__OnDistanceUpdate
               (Characters_BaseCharacter_o *__this,float distance,MethodInfo *method)

{
  Characters_AnimationHandler_o *__this_00;
  float fVar1;
  
  fVar1 = (*(__this->klass->vtable)._60_get_MaxFootstepDistance.methodPtr)
                    (__this,(__this->klass->vtable)._60_get_MaxFootstepDistance.method);
  (__this->fields).FootstepsEnabled = distance < fVar1;
  fVar1 = (*(__this->klass->vtable)._61_get_MaxSoundDistance.methodPtr)
                    (__this,(__this->klass->vtable)._61_get_MaxSoundDistance.method);
  (__this->fields).SoundsEnabled = distance < fVar1;
  fVar1 = (*(__this->klass->vtable)._66_get_CullEffectsDistance.methodPtr)
                    (__this,(__this->klass->vtable)._66_get_CullEffectsDistance.method);
  __this_00 = (__this->fields).Animation;
  (__this->fields).EffectsEnabled = distance < fVar1;
  if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
    Characters_AnimationHandler__OnDistanceUpdate(__this_00,distance,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$OnPlayerPropertiesUpdate
// il2cpp: void Characters_BaseCharacter__OnPlayerPropertiesUpdate (Characters_BaseCharacter_o* __this, Photon_Realtime_Player_o* targetPlayer, ExitGames_Client_Photon_Hashtable_o* changedProps, const MethodInfo* method);
// 0x18210de10

void Characters_BaseCharacter__OnPlayerPropertiesUpdate
               (Characters_BaseCharacter_o *__this,Photon_Realtime_Player_o *targetPlayer,
               ExitGames_Client_Photon_Hashtable_o *changedProps,MethodInfo *method)

{
  System_Action_Hashtable__o *pSVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  
  pPVar2 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar2 != (Photon_Pun_PhotonView_o *)0x0) {
    if ((targetPlayer == (pPVar2->fields)._Owner_k__BackingField) &&
       (pSVar1 = (__this->fields).OnPlayerPropertiesChanged, pSVar1 != (System_Action_Hashtable__o *)0x0)) {
      (*(code *)(pSVar1->fields).invoke_impl)
                ((pSVar1->fields).method_code,changedProps,(pSVar1->fields).method);
    }
    return;
  }
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$SetKinematic
// il2cpp: void Characters_BaseCharacter__SetKinematic (Characters_BaseCharacter_o* __this, bool kinematic, float forTime, const MethodInfo* method);
// 0x18210eb80

void Characters_BaseCharacter__SetKinematic
               (Characters_BaseCharacter_o *__this,bool kinematic,float forTime,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  UnityEngine_Rigidbody_o *__this_00;
  
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
     (__this_00 = (pUVar1->fields).Rigidbody, __this_00 != (UnityEngine_Rigidbody_o *)0x0)) {
    UnityEngine_Rigidbody__set_isKinematic(__this_00,kinematic,(MethodInfo *)0x0);
    (__this->fields)._disableKinematicTimeLeft = forTime;
    return;
  }
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$GetVelocity
// il2cpp: UnityEngine_Vector3_o Characters_BaseCharacter__GetVelocity (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x18210c2e0

UnityEngine_Vector3_o *
Characters_BaseCharacter__GetVelocity
          (UnityEngine_Vector3_o *__return_storage_ptr__,Characters_BaseCharacter_o *__this,MethodInfo *method
          )

{
  float fVar1;
  Characters_BaseMovementSync_o *pCVar2;
  Utility_BaseComponentCache_o *pUVar3;
  UnityEngine_Rigidbody_o *__this_00;
  float fVar4;
  bool bVar5;
  UnityEngine_Vector3_o *pUVar6;
  UnityEngine_Vector3_o local_18;
  
  if (Il2CppMethodInitialized_184346b0a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346b0a = '\x01';
  }
  bVar5 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method);
  if (!bVar5) {
    pCVar2 = (__this->fields).MovementSync;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar5) {
      pCVar2 = (__this->fields).MovementSync;
      if (pCVar2 != (Characters_BaseMovementSync_o *)0x0) {
        fVar4 = (pCVar2->fields)._correctVelocity.fields.y;
        fVar1 = (pCVar2->fields)._correctVelocity.fields.z;
        (__return_storage_ptr__->fields).x = (pCVar2->fields)._correctVelocity.fields.x;
        (__return_storage_ptr__->fields).y = fVar4;
        (__return_storage_ptr__->fields).z = fVar1;
        return __return_storage_ptr__;
      }
      goto label_18210c3be;
    }
  }
  pUVar3 = (__this->fields).Cache;
  if ((pUVar3 != (Utility_BaseComponentCache_o *)0x0) &&
     (__this_00 = (pUVar3->fields).Rigidbody, __this_00 != (UnityEngine_Rigidbody_o *)0x0)) {
    pUVar6 = UnityEngine_Rigidbody__get_linearVelocity(&local_18,__this_00,(MethodInfo *)0x0);
    fVar4 = (pUVar6->fields).y;
    fVar1 = (pUVar6->fields).z;
    (__return_storage_ptr__->fields).x = (pUVar6->fields).x;
    (__return_storage_ptr__->fields).y = fVar4;
    (__return_storage_ptr__->fields).z = fVar1;
    return __return_storage_ptr__;
  }
label_18210c3be:
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$Reveal
// il2cpp: void Characters_BaseCharacter__Reveal (Characters_BaseCharacter_o* __this, float startDelay, float activeTime, const MethodInfo* method);
// 0x18210e7a0

void Characters_BaseCharacter__Reveal
               (Characters_BaseCharacter_o *__this,float startDelay,float activeTime,MethodInfo *method)

{
  Characters_BaseCharacter__RevealAndRemove_d__80_o *routine;
  
  if (Il2CppMethodInitialized_184346b10 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseCharacter_RevealAndRemove_d__80);
    Il2CppMethodInitialized_184346b10 = '\x01';
  }
  routine = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_BaseCharacter_RevealAndRemove_d__80);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
  (routine->fields).__1__state = 0;
  (routine->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(routine->fields).__4__this,__this);
  (routine->fields).startDelay = startDelay;
  (routine->fields).seconds = activeTime;
  UnityEngine_MonoBehaviour__StartCoroutine_Auto
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)routine,
             (MethodInfo *)0x0);
  return;
}


// Characters.BaseCharacter$$AddOutline
// il2cpp: void Characters_BaseCharacter__AddOutline (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x1821086b0

void Characters_BaseCharacter__AddOutline(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  Outline_o *pOVar1;
  bool bVar2;
  UnityEngine_Color_Fields local_18;
  
  if (Il2CppMethodInitialized_184346b0b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346b0b = '\x01';
  }
  pOVar1 = (__this->fields).OutlineComponent;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pOVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    return;
  }
  pOVar1 = (__this->fields).OutlineComponent;
  if (pOVar1 != (Outline_o *)0x0) {
    Outline__set_OutlineMode(pOVar1,0,(MethodInfo *)0x0);
    pOVar1 = (__this->fields).OutlineComponent;
    if (pOVar1 != (Outline_o *)0x0) {
      local_18.r = 1.0;
      local_18.g = 1.0;
      local_18.b = 1.0;
      local_18.a = 1.0;
      Outline__set_OutlineColor(pOVar1,(UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0);
      pOVar1 = (__this->fields).OutlineComponent;
      if (pOVar1 != (Outline_o *)0x0) {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pOVar1,true,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$AddVisibleOutlineWithColor
// il2cpp: void Characters_BaseCharacter__AddVisibleOutlineWithColor (Characters_BaseCharacter_o* __this, UnityEngine_Color_o color, const MethodInfo* method);
// 0x1821088f0

void Characters_BaseCharacter__AddVisibleOutlineWithColor
               (Characters_BaseCharacter_o *__this,UnityEngine_Color_o *color,MethodInfo *method)

{
  Outline_o *pOVar1;
  bool bVar2;
  UnityEngine_Color_Fields local_18;
  
  if (Il2CppMethodInitialized_184346b0b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346b0b = '\x01';
  }
  pOVar1 = (__this->fields).OutlineComponent;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pOVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    return;
  }
  pOVar1 = (__this->fields).OutlineComponent;
  if (pOVar1 != (Outline_o *)0x0) {
    Outline__set_OutlineMode(pOVar1,1,(MethodInfo *)0x0);
    pOVar1 = (__this->fields).OutlineComponent;
    if (pOVar1 != (Outline_o *)0x0) {
      local_18.r = (color->fields).r;
      local_18.g = (color->fields).g;
      local_18.b = (color->fields).b;
      local_18.a = (color->fields).a;
      Outline__set_OutlineColor(pOVar1,(UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0);
      pOVar1 = (__this->fields).OutlineComponent;
      if (pOVar1 != (Outline_o *)0x0) {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pOVar1,true,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$AddOutlineWithColor
// il2cpp: void Characters_BaseCharacter__AddOutlineWithColor (Characters_BaseCharacter_o* __this, UnityEngine_Color_o color, int32_t mode, const MethodInfo* method);
// 0x1821085f0

void Characters_BaseCharacter__AddOutlineWithColor
               (Characters_BaseCharacter_o *__this,UnityEngine_Color_o *color,int32_t mode,MethodInfo *method)

{
  Outline_o *pOVar1;
  bool bVar2;
  UnityEngine_Color_Fields local_38;
  
  if (Il2CppMethodInitialized_184346b0b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346b0b = '\x01';
  }
  pOVar1 = (__this->fields).OutlineComponent;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pOVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    return;
  }
  pOVar1 = (__this->fields).OutlineComponent;
  if (pOVar1 != (Outline_o *)0x0) {
    Outline__set_OutlineMode(pOVar1,mode,(MethodInfo *)0x0);
    pOVar1 = (__this->fields).OutlineComponent;
    if (pOVar1 != (Outline_o *)0x0) {
      local_38.r = (color->fields).r;
      local_38.g = (color->fields).g;
      local_38.b = (color->fields).b;
      local_38.a = (color->fields).a;
      Outline__set_OutlineColor(pOVar1,(UnityEngine_Color_o *)&local_38,(MethodInfo *)0x0);
      pOVar1 = (__this->fields).OutlineComponent;
      if (pOVar1 != (Outline_o *)0x0) {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pOVar1,true,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$ChangeOutlineColor
// il2cpp: void Characters_BaseCharacter__ChangeOutlineColor (Characters_BaseCharacter_o* __this, UnityEngine_Color_o color, const MethodInfo* method);
// 0x182109170

void Characters_BaseCharacter__ChangeOutlineColor
               (Characters_BaseCharacter_o *__this,UnityEngine_Color_o *color,MethodInfo *method)

{
  Outline_o *pOVar1;
  bool bVar2;
  UnityEngine_Color_Fields local_18;
  
  if (Il2CppMethodInitialized_184346b0c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346b0c = '\x01';
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
    local_18.r = (color->fields).r;
    local_18.g = (color->fields).g;
    local_18.b = (color->fields).b;
    local_18.a = (color->fields).a;
    Outline__set_OutlineColor(pOVar1,(UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0);
  }
  return;
}


// Characters.BaseCharacter$$ChangeOutlineMode
// il2cpp: void Characters_BaseCharacter__ChangeOutlineMode (Characters_BaseCharacter_o* __this, int32_t mode, const MethodInfo* method);
// 0x182109210

void Characters_BaseCharacter__ChangeOutlineMode
               (Characters_BaseCharacter_o *__this,int32_t mode,MethodInfo *method)

{
  Outline_o *pOVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184346b0d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346b0d = '\x01';
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
  }
  return;
}


// Characters.BaseCharacter$$ChangeOutlineWidth
// il2cpp: void Characters_BaseCharacter__ChangeOutlineWidth (Characters_BaseCharacter_o* __this, float width, const MethodInfo* method);
// 0x1821092a0

void Characters_BaseCharacter__ChangeOutlineWidth
               (Characters_BaseCharacter_o *__this,float width,MethodInfo *method)

{
  Outline_o *pOVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184346b0e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346b0e = '\x01';
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
  }
  return;
}


// Characters.BaseCharacter$$RemoveOutline
// il2cpp: void Characters_BaseCharacter__RemoveOutline (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x18210e690

void Characters_BaseCharacter__RemoveOutline(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  Outline_o *pOVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184346b0f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346b0f = '\x01';
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
  }
  return;
}


// Characters.BaseCharacter$$RevealAndRemove
// il2cpp: System_Collections_IEnumerator_o* Characters_BaseCharacter__RevealAndRemove (Characters_BaseCharacter_o* __this, float startDelay, float seconds, const MethodInfo* method);
// 0x18210e710

System_Collections_IEnumerator_o *
Characters_BaseCharacter__RevealAndRemove
          (Characters_BaseCharacter_o *__this,float startDelay,float seconds,MethodInfo *method)

{
  Characters_BaseCharacter__RevealAndRemove_d__80_o *__this_00;
  
  if (Il2CppMethodInitialized_184346b10 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseCharacter_RevealAndRemove_d__80);
    Il2CppMethodInitialized_184346b10 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Characters_BaseCharacter_RevealAndRemove_d__80);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  (__this_00->fields).startDelay = startDelay;
  (__this_00->fields).seconds = seconds;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Characters.BaseCharacter$$GetTeam
// il2cpp: System_String_o* Characters_BaseCharacter__GetTeam (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x180a4d3d0

System_String_o*
Characters_BaseCharacter__GetTeam(Characters_BaseCharacter_o* __this, MethodInfo* method)

{
  return (Gilzoide_FlexUi_Yoga_YGValue_o)(__this->fields).Team.fields;
}


// Characters.BaseCharacter$$GetPosition
// il2cpp: UnityEngine_Vector3_o Characters_BaseCharacter__GetPosition (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x18210c0c0

UnityEngine_Vector3_o *
Characters_BaseCharacter__GetPosition
          (UnityEngine_Vector3_o *__return_storage_ptr__,Characters_BaseCharacter_o *__this,MethodInfo *method
          )

{
  float fVar1;
  UnityEngine_Transform_o *pUVar2;
  Utility_BaseComponentCache_o *pUVar3;
  float fVar4;
  bool bVar5;
  UnityEngine_Vector3_StaticFields *pUVar6;
  UnityEngine_Vector3_o local_18;
  
  if (Il2CppMethodInitialized_184346b11 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346b11 = '\x01';
  }
  if ((__this->fields).Cache != (Utility_BaseComponentCache_o *)0x0) {
    pUVar2 = (((__this->fields).Cache)->fields).Transform;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar5) {
      pUVar3 = (__this->fields).Cache;
      if ((pUVar3 == (Utility_BaseComponentCache_o *)0x0) ||
         (pUVar2 = (pUVar3->fields).Transform, pUVar2 == (UnityEngine_Transform_o *)0x0)) {
        ThrowNullReferenceException();
      }
      pUVar6 = (UnityEngine_Vector3_StaticFields *)
               UnityEngine_Transform__get_position(&local_18,pUVar2,(MethodInfo *)0x0);
      goto label_18210c176;
    }
  }
  if (Il2CppMethodInitialized_18433dbea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433dbea = '\x01';
  }
  pUVar6 = TypeInfo_UnityEngine_Vector3->static_fields;
label_18210c176:
  fVar4 = (pUVar6->zeroVector).fields.y;
  fVar1 = (pUVar6->zeroVector).fields.z;
  (__return_storage_ptr__->fields).x = (pUVar6->zeroVector).fields.x;
  (__return_storage_ptr__->fields).y = fVar4;
  (__return_storage_ptr__->fields).z = fVar1;
  return __return_storage_ptr__;
}


// Characters.BaseCharacter$$ValidTarget
// il2cpp: bool Characters_BaseCharacter__ValidTarget (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x18210f520

bool Characters_BaseCharacter__ValidTarget(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184346b12 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346b12 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return (__this->fields).Dead == false;
  }
  return false;
}


// Characters.BaseCharacter$$IsMine
// il2cpp: bool Characters_BaseCharacter__IsMine (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x18210c8d0

bool Characters_BaseCharacter__IsMine(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
     (pPVar2 = (pUVar1->fields).PhotonView, pPVar2 != (Photon_Pun_PhotonView_o *)0x0)) {
    return (pPVar2->fields)._IsMine_k__BackingField;
  }
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$IsMainCharacter
// il2cpp: bool Characters_BaseCharacter__IsMainCharacter (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x18210c860

bool Characters_BaseCharacter__IsMainCharacter(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  GameManagers_InGameManager_o *pGVar1;
  Characters_BaseCharacter_o *x;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184346b13 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346b13 = '\x01';
  }
  pGVar1 = (__this->fields)._inGameManager;
  if (pGVar1 != (GameManagers_InGameManager_o *)0x0) {
    x = (pGVar1->fields).CurrentCharacter;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
    return bVar2;
  }
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$Init
// il2cpp: void Characters_BaseCharacter__Init (Characters_BaseCharacter_o* __this, bool ai, System_String_o* team, const MethodInfo* method);
// 0x18210c4e0

void Characters_BaseCharacter__Init
               (Characters_BaseCharacter_o *__this,bool ai,System_String_o *team,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  Photon_Realtime_Player_o *pPVar3;
  System_String_o *pSVar4;
  System_Object_array *pSVar5;
  Il2CppObject *pIVar6;
  Il2CppObject *pIVar7;
  undefined1 local_res10 [8];
  
  if (Il2CppMethodInitialized_184346b14 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&"InitRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184346b14 = '\x01';
  }
  (__this->fields).AI = ai;
  (__this->fields).HasExplicitNameTag = false;
  if (!ai) {
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    pPVar3 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    pSVar4 = PhotonExtensions__GetStringProperty
                       (pPVar3,TypeInfo_GameManagers_PlayerProperty->static_fields->Name,""
                        ,(MethodInfo *)0x0);
    if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
    }
    pSVar4 = MiscExtensions__StripIllegalRichText(pSVar4,(MethodInfo *)0x0);
    Characters_BaseCharacter__set_Name(__this,pSVar4,(MethodInfo *)0x0);
    pPVar3 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    pSVar4 = PhotonExtensions__GetStringProperty
                       (pPVar3,TypeInfo_GameManagers_PlayerProperty->static_fields->Guild,
                        "",(MethodInfo *)0x0);
    pSVar4 = MiscExtensions__StripIllegalRichText(pSVar4,(MethodInfo *)0x0);
    (__this->fields).Guild = pSVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Guild,pSVar4);
  }
  pUVar1 = (__this->fields).Cache;
  if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
    pPVar2 = (pUVar1->fields).PhotonView;
    pSVar5 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,3);
    local_res10[0] = (__this->fields).AI;
    pIVar6 = il2cpp_value_box(g_data_184354de8,local_res10);
    if (pSVar5 != (System_Object_array *)0x0) {
      if (pIVar6 != (Il2CppObject *)0x0) {
        pIVar7 = il2cpp_vm_Object_IsInst(pIVar6,(((pSVar5->obj).klass)->_1).element_class);
        if (pIVar7 == (Il2CppObject *)0x0) {
          pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
        }
      }
      if ((int)pSVar5->max_length != 0) {
        pSVar5->m_Items[0] = pIVar6;
        Il2CppCodeGenWriteBarrier(pSVar5->m_Items,pIVar6);
        pSVar4 = (__this->fields).RichTextName;
        if (pSVar4 != (System_String_o *)0x0) {
          pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar4,(((pSVar5->obj).klass)->_1).element_class);
          if (pIVar6 == (Il2CppObject *)0x0) {
            pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
          }
        }
        if (1 < (uint)pSVar5->max_length) {
          pSVar5->m_Items[1] = (Il2CppObject *)pSVar4;
          Il2CppCodeGenWriteBarrier(pSVar5->m_Items + 1,pSVar4);
          pSVar4 = (__this->fields).Guild;
          if (pSVar4 != (System_String_o *)0x0) {
            pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar4,(((pSVar5->obj).klass)->_1).element_class)
            ;
            if (pIVar6 == (Il2CppObject *)0x0) {
              pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
            }
          }
          if (2 < (uint)pSVar5->max_length) {
            pSVar5->m_Items[2] = (Il2CppObject *)pSVar4;
            Il2CppCodeGenWriteBarrier(pSVar5->m_Items + 2,pSVar4);
            if (pPVar2 != (Photon_Pun_PhotonView_o *)0x0) {
              Photon_Pun_PhotonView__RPC(pPVar2,"InitRPC",3,pSVar5,(MethodInfo *)0x0);
              if (Il2CppMethodInitialized_184346b16 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
                il2cpp_codegen_initialize_runtime_metadata(&"SetTeamRPC");
                Il2CppMethodInitialized_184346b16 = '\x01';
              }
              pUVar1 = (__this->fields).Cache;
              if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
                pPVar2 = (pUVar1->fields).PhotonView;
                pSVar5 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
                if (pSVar5 != (System_Object_array *)0x0) {
                  if (team != (System_String_o *)0x0) {
                    pIVar6 = il2cpp_vm_Object_IsInst
                                       ((Il2CppObject *)team,(((pSVar5->obj).klass)->_1).element_class);
                    if (pIVar6 == (Il2CppObject *)0x0) {
                      pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
                      il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
                    }
                  }
                  if ((int)pSVar5->max_length == 0) goto label_18210c855;
                  pSVar5->m_Items[0] = (Il2CppObject *)team;
                  Il2CppCodeGenWriteBarrier(pSVar5->m_Items,team);
                  if (pPVar2 != (Photon_Pun_PhotonView_o *)0x0) {
                    Photon_Pun_PhotonView__RPC(pPVar2,"SetTeamRPC",0,pSVar5,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
            goto label_18210c80f;
          }
        }
      }
label_18210c855:
      ThrowIndexOutOfRangeException();
    }
  }
label_18210c80f:
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$GetAimPoint
// il2cpp: UnityEngine_Vector3_o Characters_BaseCharacter__GetAimPoint (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x18210a300

UnityEngine_Vector3_o *
Characters_BaseCharacter__GetAimPoint
          (UnityEngine_Vector3_o *__return_storage_ptr__,Characters_BaseCharacter_o *__this,MethodInfo *method
          )

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  Cameras_BaseCamera_o *pCVar6;
  UnityEngine_Camera_o *__this_00;
  UnityEngine_Vector3_o *pUVar7;
  UnityEngine_Ray_o *pUVar8;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Vector3_o local_38 [2];
  UnityEngine_Ray_o local_20;
  
  if (Il2CppMethodInitialized_184346b15 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_CursorManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_184346b15 = '\x01';
  }
  pCVar6 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if (pCVar6 != (Cameras_BaseCamera_o *)0x0) {
    __this_00 = (pCVar6->fields).Camera;
    if ((TypeInfo_UI_CursorManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_CursorManager);
    }
    pUVar7 = UI_CursorManager__GetInGameMousePosition(local_38,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Camera_o *)0x0) {
      local_48.x = (pUVar7->fields).x;
      local_48.y = (pUVar7->fields).y;
      local_48.z = (pUVar7->fields).z;
      pUVar8 = UnityEngine_Camera__ScreenPointToRay_2ebdb10
                         (&local_20,__this_00,(UnityEngine_Vector3_o *)&local_48,(MethodInfo *)0x0);
      uVar4 = (pUVar8->fields).m_Origin.fields.x;
      uVar5 = (pUVar8->fields).m_Origin.fields.y;
      fVar1 = (pUVar8->fields).m_Direction.fields.z;
      fVar2 = (pUVar8->fields).m_Origin.fields.z;
      (__return_storage_ptr__->fields).x = (pUVar8->fields).m_Direction.fields.x * 1000.0 + (float)uVar4;
      fVar3 = (pUVar8->fields).m_Direction.fields.y;
      (__return_storage_ptr__->fields).z = fVar1 * 1000.0 + fVar2;
      (__return_storage_ptr__->fields).y = fVar3 * 1000.0 + (float)uVar5;
      return __return_storage_ptr__;
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$SetTeam
// il2cpp: void Characters_BaseCharacter__SetTeam (Characters_BaseCharacter_o* __this, System_String_o* team, const MethodInfo* method);
// 0x18210ecd0

void Characters_BaseCharacter__SetTeam
               (Characters_BaseCharacter_o *__this,System_String_o *team,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *__this_00;
  System_Object_array *parameters;
  Il2CppObject *pIVar2;
  
  if (Il2CppMethodInitialized_184346b16 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"SetTeamRPC");
    Il2CppMethodInitialized_184346b16 = '\x01';
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
      Il2CppCodeGenWriteBarrier(parameters->m_Items,team);
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
// 0x18210a580

UnityEngine_Transform_o*
Characters_BaseCharacter__GetCameraAnchor(Characters_BaseCharacter_o* __this, MethodInfo* method)

{
  Utility_BaseComponentCache_o *pUVar1;
  
  pUVar1 = (__this->fields).Cache;
  if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
    return (pUVar1->fields).Transform;
  }
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$CreateCache
// il2cpp: void Characters_BaseCharacter__CreateCache (Characters_BaseCharacter_o* __this, Utility_BaseComponentCache_o* cache, const MethodInfo* method);
// 0x1821095f0

void Characters_BaseCharacter__CreateCache
               (Characters_BaseCharacter_o *__this,Utility_BaseComponentCache_o *cache,MethodInfo *method)

{
  UnityEngine_GameObject_o *owner;
  Utility_BaseComponentCache_o *__this_00;
  
  if (Il2CppMethodInitialized_184346b17 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_BaseComponentCache);
    Il2CppMethodInitialized_184346b17 = '\x01';
  }
  (__this->fields).Cache = cache;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Cache,cache);
  if (cache == (Utility_BaseComponentCache_o *)0x0) {
    owner = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_BaseComponentCache);
    Utility_BaseComponentCache___ctor(__this_00,owner,(MethodInfo *)0x0);
    (__this->fields).Cache = __this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Cache,__this_00);
  }
  return;
}


// Characters.BaseCharacter$$CreateDetection
// il2cpp: void Characters_BaseCharacter__CreateDetection (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x182109680

void Characters_BaseCharacter__CreateDetection(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  (__this->fields).Detection = (Characters_BaseDetection_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Detection,(void *)0x0);
  return;
}


// Characters.BaseCharacter$$Emote
// il2cpp: void Characters_BaseCharacter__Emote (Characters_BaseCharacter_o* __this, System_String_o* emote, const MethodInfo* method);
// 0x180547020

void
Characters_BaseCharacter__Emote(Characters_BaseCharacter_o* __this, System_String_o* emote, MethodInfo* method)

{
  return;
}


// Characters.BaseCharacter$$ForceAnimation
// il2cpp: void Characters_BaseCharacter__ForceAnimation (Characters_BaseCharacter_o* __this, System_String_o* animation, float fade, const MethodInfo* method);
// 0x180547020

void
Characters_BaseCharacter__ForceAnimation(Characters_BaseCharacter_o* __this, System_String_o* animation, float fade, MethodInfo* method)

{
  return;
}


// Characters.BaseCharacter$$InitRPC
// il2cpp: void Characters_BaseCharacter__InitRPC (Characters_BaseCharacter_o* __this, bool ai, System_String_o* name, System_String_o* guild, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x18210c3d0

void Characters_BaseCharacter__InitRPC
               (Characters_BaseCharacter_o *__this,bool ai,System_String_o *name,System_String_o *guild,
               Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184346b18 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_RoleSpriteHelpers);
    Il2CppMethodInitialized_184346b18 = '\x01';
  }
  if ((info->fields).Sender != (Photon_Realtime_Player_o *)0x0) {
    pPVar1 = Photon_Pun_MonoBehaviourPun__get_photonView
                       ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
    if (pPVar1 == (Photon_Pun_PhotonView_o *)0x0) {
      ThrowNullReferenceException();
    }
    if ((info->fields).Sender != (pPVar1->fields)._Owner_k__BackingField) {
      return;
    }
  }
  (__this->fields).AI = ai;
  if ((TypeInfo_PatreonEffects_RoleSpriteHelpers->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers);
  }
  pSVar2 = PatreonEffects_RoleSpriteHelpers__SanitizePlayerText((info->fields).Sender,name,(MethodInfo *)0x0);
  if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  pSVar2 = MiscExtensions__StripIllegalRichText(pSVar2,(MethodInfo *)0x0);
  Characters_BaseCharacter__set_Name(__this,pSVar2,(MethodInfo *)0x0);
  pSVar2 = PatreonEffects_RoleSpriteHelpers__SanitizePlayerText((info->fields).Sender,guild,(MethodInfo *)0x0)
  ;
  pSVar2 = MiscExtensions__StripIllegalRichText(pSVar2,(MethodInfo *)0x0);
  (__this->fields).Guild = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Guild,pSVar2);
  return;
}


// Characters.BaseCharacter$$SetHealthRPC
// il2cpp: void Characters_BaseCharacter__SetHealthRPC (Characters_BaseCharacter_o* __this, int32_t currentHealth, int32_t maxHealth, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x18210ead0

void Characters_BaseCharacter__SetHealthRPC
               (Characters_BaseCharacter_o *__this,int32_t currentHealth,int32_t maxHealth,
               Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  
  pPVar1 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
    if ((info->fields).Sender == (pPVar1->fields)._Owner_k__BackingField) {
      (__this->fields).CurrentHealth = currentHealth;
      (__this->fields).MaxHealth = maxHealth;
    }
    return;
  }
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$SetTeamRPC
// il2cpp: void Characters_BaseCharacter__SetTeamRPC (Characters_BaseCharacter_o* __this, System_String_o* team, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x18210ec30

void Characters_BaseCharacter__SetTeamRPC
               (Characters_BaseCharacter_o *__this,System_String_o *team,Photon_Pun_PhotonMessageInfo_o *info,
               MethodInfo *method)

{
  System_String_o *b;
  Characters_BaseDetection_o *__this_00;
  bool bVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  
  pPVar2 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar2 != (Photon_Pun_PhotonView_o *)0x0) {
    if ((info->fields).Sender == (pPVar2->fields)._Owner_k__BackingField) {
      b = (__this->fields).Team;
      (__this->fields).Team = team;
      Il2CppCodeGenWriteBarrier(&(__this->fields).Team,team);
      if ((__this->fields).Detection != (Characters_BaseDetection_o *)0x0) {
        bVar1 = System_String__op_Inequality(team,b,(MethodInfo *)0x0);
        if (bVar1) {
          __this_00 = (__this->fields).Detection;
          if (__this_00 == (Characters_BaseDetection_o *)0x0) goto label_18210ecbd;
          Characters_BaseDetection__OnTeamChanged(__this_00,(MethodInfo *)0x0);
        }
      }
    }
    return;
  }
label_18210ecbd:
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$SetCurrentHealth
// il2cpp: void Characters_BaseCharacter__SetCurrentHealth (Characters_BaseCharacter_o* __this, int32_t currentHealth, const MethodInfo* method);
// 0x18210ea70

void Characters_BaseCharacter__SetCurrentHealth
               (Characters_BaseCharacter_o *__this,int32_t currentHealth,MethodInfo *method)

{
  int iVar1;
  
  iVar1 = (__this->fields).MaxHealth;
  if (currentHealth < iVar1) {
    iVar1 = currentHealth;
  }
  if (iVar1 < 1) {
    iVar1 = 0;
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


// Characters.BaseCharacter$$SetMaxHealth
// il2cpp: void Characters_BaseCharacter__SetMaxHealth (Characters_BaseCharacter_o* __this, int32_t maxHealth, const MethodInfo* method);
// 0x18210ebd0

void Characters_BaseCharacter__SetMaxHealth
               (Characters_BaseCharacter_o *__this,int32_t maxHealth,MethodInfo *method)

{
  int iVar1;
  Characters_BaseCharacter_c *pCVar2;
  
  iVar1 = (__this->fields).CurrentHealth;
  (__this->fields).MaxHealth = maxHealth;
  if (iVar1 < maxHealth) {
    maxHealth = iVar1;
  }
  if (maxHealth < 1) {
    maxHealth = 0;
  }
  pCVar2 = __this->klass;
  (__this->fields).CurrentHealth = maxHealth;
  (*(pCVar2->vtable)._88_OnHealthChange.methodPtr)(__this,(pCVar2->vtable)._88_OnHealthChange.method);
  if ((__this->fields).CurrentHealth < 1) {
    (*(__this->klass->vtable)._83_Die.methodPtr)(__this,(__this->klass->vtable)._83_Die.method);
    return;
  }
  return;
}


// Characters.BaseCharacter$$SetHealth
// il2cpp: void Characters_BaseCharacter__SetHealth (Characters_BaseCharacter_o* __this, int32_t health, const MethodInfo* method);
// 0x18210eb20

void Characters_BaseCharacter__SetHealth(Characters_BaseCharacter_o *__this,int32_t health,MethodInfo *method)

{
  Characters_BaseCharacter_c *pCVar1;
  
  (__this->fields).MaxHealth = health;
  if (health < 1) {
    health = 0;
  }
  pCVar1 = __this->klass;
  (__this->fields).CurrentHealth = health;
  (*(pCVar1->vtable)._88_OnHealthChange.methodPtr)(__this,(pCVar1->vtable)._88_OnHealthChange.method);
  if ((__this->fields).CurrentHealth < 1) {
    (*(__this->klass->vtable)._83_Die.methodPtr)(__this,(__this->klass->vtable)._83_Die.method);
    return;
  }
  return;
}


// Characters.BaseCharacter$$TakeDamage
// il2cpp: void Characters_BaseCharacter__TakeDamage (Characters_BaseCharacter_o* __this, int32_t damage, const MethodInfo* method);
// 0x18210f080

void Characters_BaseCharacter__TakeDamage
               (Characters_BaseCharacter_o *__this,int32_t damage,MethodInfo *method)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (__this->fields).MaxHealth;
  iVar2 = (__this->fields).CurrentHealth - damage;
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
// 0x182109c70

void Characters_BaseCharacter__Die(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *__this_00;
  GameManagers_InGameManager_o *pGVar2;
  Characters_BaseCharacter_o *x;
  bool bVar3;
  System_Object_array *parameters;
  System_Collections_IEnumerator_o *routine;
  
  if (Il2CppMethodInitialized_184346b19 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"MarkDeadRPC");
    Il2CppMethodInitialized_184346b19 = '\x01';
  }
  pUVar1 = (__this->fields).Cache;
  if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
    __this_00 = (pUVar1->fields).PhotonView;
    parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,0);
    if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
      Photon_Pun_PhotonView__RPC(__this_00,"MarkDeadRPC",3,parameters,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_184346b13 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_184346b13 = '\x01';
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
          if (pGVar2 == (GameManagers_InGameManager_o *)0x0) goto label_182109d80;
          GameManagers_InGameManager__RegisterMainCharacterDie(pGVar2,(MethodInfo *)0x0);
        }
        routine = (*(__this->klass->vtable)._84_WaitAndDie.methodPtr)
                            (__this,(__this->klass->vtable)._84_WaitAndDie.method);
        UnityEngine_MonoBehaviour__StartCoroutine_Auto
                  ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_182109d80:
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$WaitAndDie
// il2cpp: System_Collections_IEnumerator_o* Characters_BaseCharacter__WaitAndDie (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x18210f580

System_Collections_IEnumerator_o *
Characters_BaseCharacter__WaitAndDie(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter__WaitAndDie_d__102_o *__this_00;
  
  if (Il2CppMethodInitialized_184346b1a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseCharacter_WaitAndDie_d__102);
    Il2CppMethodInitialized_184346b1a = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_BaseCharacter_WaitAndDie_d__102);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Characters.BaseCharacter$$UseItem
// il2cpp: void Characters_BaseCharacter__UseItem (Characters_BaseCharacter_o* __this, int32_t item, const MethodInfo* method);
// 0x18210f4b0

void Characters_BaseCharacter__UseItem(Characters_BaseCharacter_o *__this,int32_t item,MethodInfo *method)

{
  System_Collections_Generic_List_BaseUseable__o *__this_00;
  Characters_BaseUseable_o *pCVar1;
  
  if (Il2CppMethodInitialized_184346b1b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_BaseUseable_get_Item);
    Il2CppMethodInitialized_184346b1b = '\x01';
  }
  __this_00 = (__this->fields).Items;
  if (__this_00 != (System_Collections_Generic_List_BaseUseable__o *)0x0) {
    pCVar1 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                       ((System_Collections_Generic_List_object__o *)__this_00,item,
                        (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_BaseUseable_get_Item);
    if (pCVar1 != (Characters_BaseUseable_o *)0x0) {
      (*(pCVar1->klass->vtable)._12_SetInput.methodPtr)
                (pCVar1,(System_Type_o *)0x1,(pCVar1->klass->vtable)._12_SetInput.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$OnPlayerEnteredRoom
// il2cpp: void Characters_BaseCharacter__OnPlayerEnteredRoom (Characters_BaseCharacter_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x18210d9b0

void Characters_BaseCharacter__OnPlayerEnteredRoom
               (Characters_BaseCharacter_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  float fVar1;
  Utility_BaseComponentCache_o *pUVar2;
  Photon_Pun_PhotonView_o *pPVar3;
  Characters_AnimationHandler_o *pCVar4;
  UnityEngine_Animation_o *__this_00;
  bool bVar5;
  System_Object_array *pSVar6;
  Il2CppObject *pIVar7;
  Il2CppObject *pIVar8;
  System_String_o *pSVar9;
  UnityEngine_AnimationState_o *__this_01;
  float fVar10;
  float fVar11;
  float fVar12;
  int32_t local_res8 [2];
  int32_t local_res20 [2];
  float local_58 [16];
  
  if (Il2CppMethodInitialized_184346b1c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"PlayAnimationRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"SetTeamRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"SetHealthRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184346b1c = '\x01';
  }
  pUVar2 = (__this->fields).Cache;
  if ((pUVar2 == (Utility_BaseComponentCache_o *)0x0) ||
     (pPVar3 = (pUVar2->fields).PhotonView, pPVar3 == (Photon_Pun_PhotonView_o *)0x0)) {
    ThrowNullReferenceException();
  }
  if ((pPVar3->fields)._IsMine_k__BackingField == false) {
    return;
  }
  pSVar6 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
  local_res8[0] = (__this->fields).CurrentHealth;
  pIVar7 = il2cpp_value_box(g_data_184354e08,local_res8);
  if (pSVar6 == (System_Object_array *)0x0) goto label_18210de0a;
  if ((pIVar7 != (Il2CppObject *)0x0) &&
     (pIVar8 = il2cpp_vm_Object_IsInst(pIVar7,(((pSVar6->obj).klass)->_1).element_class),
     pIVar8 == (Il2CppObject *)0x0)) {
    pIVar7 = il2cpp_codegen_get_array_type_mismatch_exception();
    il2cpp_codegen_raise_exception(pIVar7,(MethodInfo *)0x0);
  }
  if ((int)pSVar6->max_length != 0) {
    pSVar6->m_Items[0] = pIVar7;
    Il2CppCodeGenWriteBarrier(pSVar6->m_Items,pIVar7);
    local_res20[0] = (__this->fields).MaxHealth;
    pIVar7 = il2cpp_value_box(g_data_184354e08,local_res20);
    if ((pIVar7 != (Il2CppObject *)0x0) &&
       (pIVar8 = il2cpp_vm_Object_IsInst(pIVar7,(((pSVar6->obj).klass)->_1).element_class),
       pIVar8 == (Il2CppObject *)0x0)) {
      pIVar7 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar7,(MethodInfo *)0x0);
    }
    if (1 < (uint)pSVar6->max_length) {
      pSVar6->m_Items[1] = pIVar7;
      Il2CppCodeGenWriteBarrier(pSVar6->m_Items + 1,pIVar7);
      Photon_Pun_PhotonView__RPC_1d4d8d0(pPVar3,"SetHealthRPC",player,pSVar6,(MethodInfo *)0x0);
      pUVar2 = (__this->fields).Cache;
      if (pUVar2 != (Utility_BaseComponentCache_o *)0x0) {
        pPVar3 = (pUVar2->fields).PhotonView;
        pSVar6 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
        if (pSVar6 != (System_Object_array *)0x0) {
          pSVar9 = (__this->fields).Team;
          if ((pSVar9 != (System_String_o *)0x0) &&
             (pIVar7 = il2cpp_vm_Object_IsInst
                                 ((Il2CppObject *)pSVar9,(((pSVar6->obj).klass)->_1).element_class),
             pIVar7 == (Il2CppObject *)0x0)) {
            pIVar7 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar7,(MethodInfo *)0x0);
          }
          if ((int)pSVar6->max_length == 0) goto label_18210de04;
          pSVar6->m_Items[0] = (Il2CppObject *)pSVar9;
          Il2CppCodeGenWriteBarrier(pSVar6->m_Items,pSVar9);
          if (pPVar3 != (Photon_Pun_PhotonView_o *)0x0) {
            Photon_Pun_PhotonView__RPC_1d4d8d0(pPVar3,"SetTeamRPC",player,pSVar6,(MethodInfo *)0x0);
            pCVar4 = (__this->fields).Animation;
            if (pCVar4 != (Characters_AnimationHandler_o *)0x0) {
              pSVar9 = Characters_AnimationHandler__GetCurrentAnimation(pCVar4,(MethodInfo *)0x0);
              bVar5 = System_String__op_Inequality(pSVar9,"",(MethodInfo *)0x0);
              if (!bVar5) {
                return;
              }
              pUVar2 = (__this->fields).Cache;
              if (pUVar2 != (Utility_BaseComponentCache_o *)0x0) {
                pPVar3 = (pUVar2->fields).PhotonView;
                pSVar6 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
                if (pSVar6 != (System_Object_array *)0x0) {
                  if ((pSVar9 != (System_String_o *)0x0) &&
                     (pIVar7 = il2cpp_vm_Object_IsInst
                                         ((Il2CppObject *)pSVar9,(((pSVar6->obj).klass)->_1).element_class),
                     pIVar7 == (Il2CppObject *)0x0)) {
                    pIVar7 = il2cpp_codegen_get_array_type_mismatch_exception();
                    il2cpp_codegen_raise_exception(pIVar7,(MethodInfo *)0x0);
                  }
                  if ((int)pSVar6->max_length == 0) {
label_18210ddf8:
                    ThrowIndexOutOfRangeException();
                  }
                  pSVar6->m_Items[0] = (Il2CppObject *)pSVar9;
                  Il2CppCodeGenWriteBarrier(pSVar6->m_Items,pSVar9);
                  pCVar4 = (__this->fields).Animation;
                  if (pCVar4 != (Characters_AnimationHandler_o *)0x0) {
                    if ((pCVar4->fields)._isLegacy == false) {
                      fVar10 = UnityEngine_Time__get_time((MethodInfo *)0x0);
                      pSVar9 = (pCVar4->fields)._currentAnimation;
                      fVar1 = (pCVar4->fields)._currentAnimationStartTime;
                      fVar11 = Characters_AnimationHandler__GetLength(pCVar4,pSVar9,(MethodInfo *)0x0);
                      fVar12 = Characters_AnimationHandler__GetSpeed(pCVar4,pSVar9,(MethodInfo *)0x0);
                      local_58[0] = (fVar10 - fVar1) / (fVar11 / fVar12);
                    }
                    else {
                      __this_00 = (pCVar4->fields).Animation;
                      if ((__this_00 == (UnityEngine_Animation_o *)0x0) ||
                         (__this_01 = UnityEngine_Animation__get_Item
                                                (__this_00,(pCVar4->fields)._currentAnimation,
                                                 (MethodInfo *)0x0),
                         __this_01 == (UnityEngine_AnimationState_o *)0x0)) goto label_18210ddfe;
                      local_58[0] = UnityEngine_AnimationState__get_normalizedTime
                                              (__this_01,(MethodInfo *)0x0);
                    }
                    pIVar7 = il2cpp_value_box(g_data_184354e38,local_58);
                    if ((pIVar7 != (Il2CppObject *)0x0) &&
                       (pIVar8 = il2cpp_vm_Object_IsInst(pIVar7,(((pSVar6->obj).klass)->_1).element_class),
                       pIVar8 == (Il2CppObject *)0x0)) {
                      pIVar7 = il2cpp_codegen_get_array_type_mismatch_exception();
                      il2cpp_codegen_raise_exception(pIVar7,(MethodInfo *)0x0);
                    }
                    if ((uint)pSVar6->max_length < 2) goto label_18210ddf8;
                    pSVar6->m_Items[1] = pIVar7;
                    Il2CppCodeGenWriteBarrier(pSVar6->m_Items + 1,pIVar7);
                    if (pPVar3 != (Photon_Pun_PhotonView_o *)0x0) {
                      Photon_Pun_PhotonView__RPC_1d4d8d0
                                (pPVar3,"PlayAnimationRPC",player,pSVar6,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
label_18210ddfe:
              ThrowNullReferenceException();
            }
          }
        }
      }
label_18210de0a:
      ThrowNullReferenceException();
    }
  }
label_18210de04:
  ThrowIndexOutOfRangeException();
}


// Characters.BaseCharacter$$PlayAnimation
// il2cpp: void Characters_BaseCharacter__PlayAnimation (Characters_BaseCharacter_o* __this, System_String_o* animation, float startTime, const MethodInfo* method);
// 0x18210e1d0

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
  float local_res8 [2];
  
  if (Il2CppMethodInitialized_184346b1d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"PlayAnimationRPC");
    Il2CppMethodInitialized_184346b1d = '\x01';
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
        pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
      }
      if ((int)parameters->max_length != 0) {
        parameters->m_Items[0] = (Il2CppObject *)animation;
        Il2CppCodeGenWriteBarrier(parameters->m_Items,animation);
        local_res8[0] = startTime;
        pIVar3 = il2cpp_value_box(g_data_184354e38,local_res8);
        if ((pIVar3 != (Il2CppObject *)0x0) &&
           (pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((parameters->obj).klass)->_1).element_class),
           pIVar4 == (Il2CppObject *)0x0)) {
          pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
        }
        if (1 < (uint)parameters->max_length) {
          parameters->m_Items[1] = pIVar3;
          Il2CppCodeGenWriteBarrier(parameters->m_Items + 1,pIVar3);
          if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
            Photon_Pun_PhotonView__RPC(__this_00,"PlayAnimationRPC",0,parameters,(MethodInfo *)0x0);
            return;
          }
          goto label_18210e316;
        }
      }
      ThrowIndexOutOfRangeException();
    }
  }
label_18210e316:
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$PlayAnimationReset
// il2cpp: void Characters_BaseCharacter__PlayAnimationReset (Characters_BaseCharacter_o* __this, System_String_o* animation, const MethodInfo* method);
// 0x18210e0d0

void Characters_BaseCharacter__PlayAnimationReset
               (Characters_BaseCharacter_o *__this,System_String_o *animation,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *__this_00;
  bool bVar2;
  System_Object_array *parameters;
  Il2CppObject *pIVar3;
  
  if (Il2CppMethodInitialized_184346b1e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"PlayAnimationResetRPC");
    Il2CppMethodInitialized_184346b1e = '\x01';
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
      if ((animation != (System_String_o *)0x0) &&
         (pIVar3 = il2cpp_vm_Object_IsInst
                             ((Il2CppObject *)animation,(((parameters->obj).klass)->_1).element_class),
         pIVar3 == (Il2CppObject *)0x0)) {
        pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
      }
      if ((int)parameters->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      parameters->m_Items[0] = (Il2CppObject *)animation;
      Il2CppCodeGenWriteBarrier(parameters->m_Items,animation);
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
// 0x18210e030

void Characters_BaseCharacter__PlayAnimationRPC
               (Characters_BaseCharacter_o *__this,System_String_o *animation,float startTime,
               Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  Characters_AnimationHandler_o *__this_00;
  
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
     (pPVar2 = (pUVar1->fields).PhotonView, pPVar2 != (Photon_Pun_PhotonView_o *)0x0)) {
    if ((info->fields).Sender != (pPVar2->fields)._Owner_k__BackingField) {
      return;
    }
    __this_00 = (__this->fields).Animation;
    if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
      Characters_AnimationHandler__Play(__this_00,animation,startTime,false,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$PlayAnimationResetRPC
// il2cpp: void Characters_BaseCharacter__PlayAnimationResetRPC (Characters_BaseCharacter_o* __this, System_String_o* animation, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x18210e080

void Characters_BaseCharacter__PlayAnimationResetRPC
               (Characters_BaseCharacter_o *__this,System_String_o *animation,
               Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  Characters_AnimationHandler_o *__this_00;
  
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
     (pPVar2 = (pUVar1->fields).PhotonView, pPVar2 != (Photon_Pun_PhotonView_o *)0x0)) {
    if ((info->fields).Sender == (pPVar2->fields)._Owner_k__BackingField) {
      __this_00 = (__this->fields).Animation;
      if (__this_00 == (Characters_AnimationHandler_o *)0x0) goto label_18210e0c8;
      Characters_AnimationHandler__Play(__this_00,animation,0.0,true,(MethodInfo *)0x0);
    }
    return;
  }
label_18210e0c8:
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$PlayAnimationIfNotPlaying
// il2cpp: void Characters_BaseCharacter__PlayAnimationIfNotPlaying (Characters_BaseCharacter_o* __this, System_String_o* animation, float startTime, const MethodInfo* method);
// 0x18210de70

void Characters_BaseCharacter__PlayAnimationIfNotPlaying
               (Characters_BaseCharacter_o *__this,System_String_o *animation,float startTime,
               MethodInfo *method)

{
  Characters_AnimationHandler_o *pCVar1;
  UnityEngine_Animation_o *__this_00;
  Utility_BaseComponentCache_o *pUVar2;
  Photon_Pun_PhotonView_o *__this_01;
  bool bVar3;
  System_Object_array *parameters;
  Il2CppObject *pIVar4;
  Il2CppObject *pIVar5;
  float local_res8 [2];
  
  pCVar1 = (__this->fields).Animation;
  if (pCVar1 == (Characters_AnimationHandler_o *)0x0) {
label_18210dff6:
    ThrowNullReferenceException();
  }
  if ((pCVar1->fields)._isLegacy == false) {
    bVar3 = System_String__op_Equality((pCVar1->fields)._currentAnimation,animation,(MethodInfo *)0x0);
  }
  else {
    __this_00 = (pCVar1->fields).Animation;
    if (__this_00 == (UnityEngine_Animation_o *)0x0) goto label_18210dff6;
    bVar3 = UnityEngine_Animation__IsPlaying(__this_00,animation,(MethodInfo *)0x0);
  }
  if (bVar3 == false) {
    if (Il2CppMethodInitialized_184346b1d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
      il2cpp_codegen_initialize_runtime_metadata(&"PlayAnimationRPC");
      Il2CppMethodInitialized_184346b1d = '\x01';
    }
    bVar3 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method);
    if (bVar3) {
      pUVar2 = (__this->fields).Cache;
      if (pUVar2 != (Utility_BaseComponentCache_o *)0x0) {
        __this_01 = (pUVar2->fields).PhotonView;
        parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
        if (parameters != (System_Object_array *)0x0) {
          if ((animation != (System_String_o *)0x0) &&
             (pIVar4 = il2cpp_vm_Object_IsInst
                                 ((Il2CppObject *)animation,(((parameters->obj).klass)->_1).element_class),
             pIVar4 == (Il2CppObject *)0x0)) {
            pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
          }
          if ((int)parameters->max_length != 0) {
            parameters->m_Items[0] = (Il2CppObject *)animation;
            Il2CppCodeGenWriteBarrier(parameters->m_Items,animation);
            local_res8[0] = startTime;
            pIVar4 = il2cpp_value_box(g_data_184354e38,local_res8);
            if ((pIVar4 != (Il2CppObject *)0x0) &&
               (pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((parameters->obj).klass)->_1).element_class),
               pIVar5 == (Il2CppObject *)0x0)) {
              pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
            }
            if (1 < (uint)parameters->max_length) {
              parameters->m_Items[1] = pIVar4;
              Il2CppCodeGenWriteBarrier(parameters->m_Items + 1,pIVar4);
              if (__this_01 != (Photon_Pun_PhotonView_o *)0x0) {
                Photon_Pun_PhotonView__RPC(__this_01,"PlayAnimationRPC",0,parameters,(MethodInfo *)0x0);
                return;
              }
              goto label_18210e022;
            }
          }
          ThrowIndexOutOfRangeException();
        }
      }
label_18210e022:
      ThrowNullReferenceException();
    }
  }
  return;
}


// Characters.BaseCharacter$$CrossFade
// il2cpp: void Characters_BaseCharacter__CrossFade (Characters_BaseCharacter_o* __this, System_String_o* animation, float fadeTime, float startTime, const MethodInfo* method);
// 0x182109a80

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
  float local_res8 [2];
  float local_38 [12];
  
  if (Il2CppMethodInitialized_184346b1f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"CrossFadeRPC");
    Il2CppMethodInitialized_184346b1f = '\x01';
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
      pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
    }
    if ((int)pSVar1->max_length == 0) {
label_182109c69:
      ThrowIndexOutOfRangeException();
    }
    pSVar1->m_Items[0] = (Il2CppObject *)animation;
    Il2CppCodeGenWriteBarrier(pSVar1->m_Items,animation);
    pSVar1 = (__this->fields).crossfadeCache;
    local_res8[0] = fadeTime;
    pIVar4 = il2cpp_value_box(g_data_184354e38,local_res8);
    if (pSVar1 != (System_Object_array *)0x0) {
      if ((pIVar4 != (Il2CppObject *)0x0) &&
         (pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((pSVar1->obj).klass)->_1).element_class),
         pIVar5 == (Il2CppObject *)0x0)) {
        pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
      }
      if ((uint)pSVar1->max_length < 2) goto label_182109c69;
      pSVar1->m_Items[1] = pIVar4;
      Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1,pIVar4);
      pSVar1 = (__this->fields).crossfadeCache;
      local_38[0] = startTime;
      pIVar4 = il2cpp_value_box(g_data_184354e38,local_38);
      if (pSVar1 != (System_Object_array *)0x0) {
        if ((pIVar4 != (Il2CppObject *)0x0) &&
           (pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((pSVar1->obj).klass)->_1).element_class),
           pIVar5 == (Il2CppObject *)0x0)) {
          pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
        }
        if ((uint)pSVar1->max_length < 3) goto label_182109c69;
        pSVar1->m_Items[2] = pIVar4;
        Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 2,pIVar4);
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
// 0x182109820

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
  float local_res8 [2];
  float local_38;
  float local_34 [11];
  
  if (Il2CppMethodInitialized_184346b20 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"CrossFadeWithSpeedRPC");
    Il2CppMethodInitialized_184346b20 = '\x01';
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
        pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
      }
      if ((int)parameters->max_length != 0) {
        parameters->m_Items[0] = (Il2CppObject *)animation;
        Il2CppCodeGenWriteBarrier(parameters->m_Items,animation);
        local_res8[0] = speed;
        pIVar3 = il2cpp_value_box(g_data_184354e38,local_res8);
        if ((pIVar3 != (Il2CppObject *)0x0) &&
           (pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((parameters->obj).klass)->_1).element_class),
           pIVar4 == (Il2CppObject *)0x0)) {
          pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
        }
        if (1 < (uint)parameters->max_length) {
          parameters->m_Items[1] = pIVar3;
          Il2CppCodeGenWriteBarrier(parameters->m_Items + 1,pIVar3);
          local_38 = fadeTime;
          pIVar3 = il2cpp_value_box(g_data_184354e38,&local_38);
          if ((pIVar3 != (Il2CppObject *)0x0) &&
             (pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((parameters->obj).klass)->_1).element_class),
             pIVar4 == (Il2CppObject *)0x0)) {
            pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
          }
          if (2 < (uint)parameters->max_length) {
            parameters->m_Items[2] = pIVar3;
            Il2CppCodeGenWriteBarrier(parameters->m_Items + 2,pIVar3);
            local_34[0] = startTime;
            pIVar3 = il2cpp_value_box(g_data_184354e38,local_34);
            if ((pIVar3 != (Il2CppObject *)0x0) &&
               (pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((parameters->obj).klass)->_1).element_class),
               pIVar4 == (Il2CppObject *)0x0)) {
              pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
            }
            if (3 < (uint)parameters->max_length) {
              parameters->m_Items[3] = pIVar3;
              Il2CppCodeGenWriteBarrier(parameters->m_Items + 3,pIVar3);
              if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
                Photon_Pun_PhotonView__RPC(__this_00,"CrossFadeWithSpeedRPC",0,parameters,(MethodInfo *)0x0);
                return;
              }
              goto label_182109a29;
            }
          }
        }
      }
      ThrowIndexOutOfRangeException();
    }
  }
label_182109a29:
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$CrossFadeIfNotPlaying
// il2cpp: void Characters_BaseCharacter__CrossFadeIfNotPlaying (Characters_BaseCharacter_o* __this, System_String_o* animation, float fadeTime, float startTime, const MethodInfo* method);
// 0x1821096a0

void Characters_BaseCharacter__CrossFadeIfNotPlaying
               (Characters_BaseCharacter_o *__this,System_String_o *animation,float fadeTime,float startTime,
               MethodInfo *method)

{
  Characters_AnimationHandler_o *pCVar1;
  UnityEngine_Animation_o *__this_00;
  bool bVar2;
  
  pCVar1 = (__this->fields).Animation;
  if (pCVar1 != (Characters_AnimationHandler_o *)0x0) {
    if ((pCVar1->fields)._isLegacy == false) {
      bVar2 = System_String__op_Equality((pCVar1->fields)._currentAnimation,animation,(MethodInfo *)0x0);
    }
    else {
      __this_00 = (pCVar1->fields).Animation;
      if (__this_00 == (UnityEngine_Animation_o *)0x0) goto label_182109724;
      bVar2 = UnityEngine_Animation__IsPlaying(__this_00,animation,(MethodInfo *)0x0);
    }
    if (bVar2 == false) {
      Characters_BaseCharacter__CrossFade(__this,animation,fadeTime,startTime,(MethodInfo *)0x0);
    }
    return;
  }
label_182109724:
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$GetAnimationSpeed
// il2cpp: float Characters_BaseCharacter__GetAnimationSpeed (Characters_BaseCharacter_o* __this, System_String_o* animation, const MethodInfo* method);
// 0x18210a520

float Characters_BaseCharacter__GetAnimationSpeed
                (Characters_BaseCharacter_o *__this,System_String_o *animation,MethodInfo *method)

{
  Characters_AnimationHandler_o *pCVar1;
  System_Collections_Generic_Dictionary_string__float__o *__this_00;
  float fVar2;
  
  pCVar1 = (__this->fields).Animation;
  if (pCVar1 != (Characters_AnimationHandler_o *)0x0) {
    if (Il2CppMethodInitialized_184346afb == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_Dictionary_string_float_get_Item);
      Il2CppMethodInitialized_184346afb = '\x01';
    }
    __this_00 = (pCVar1->fields)._animationSpeed;
    if (__this_00 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
      fVar2 = System_Collections_Generic_Dictionary_object__float___get_Item
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                         (Il2CppObject *)animation,
                         (MethodInfo_1488BA0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_float_get_Item);
      return fVar2;
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$SetAnimationSpeed
// il2cpp: void Characters_BaseCharacter__SetAnimationSpeed (Characters_BaseCharacter_o* __this, System_String_o* animation, float speed, const MethodInfo* method);
// 0x18210e910

void Characters_BaseCharacter__SetAnimationSpeed
               (Characters_BaseCharacter_o *__this,System_String_o *animation,float speed,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *__this_00;
  System_Object_array *parameters;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  float local_res8 [2];
  
  if (Il2CppMethodInitialized_184346b21 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"SetAnimationSpeedRPC");
    Il2CppMethodInitialized_184346b21 = '\x01';
  }
  pUVar1 = (__this->fields).Cache;
  if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
    __this_00 = (pUVar1->fields).PhotonView;
    parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
    if (parameters != (System_Object_array *)0x0) {
      if (animation != (System_String_o *)0x0) {
        pIVar2 = il2cpp_vm_Object_IsInst
                           ((Il2CppObject *)animation,(((parameters->obj).klass)->_1).element_class);
        if (pIVar2 == (Il2CppObject *)0x0) {
          pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
        }
      }
      if ((int)parameters->max_length != 0) {
        parameters->m_Items[0] = (Il2CppObject *)animation;
        Il2CppCodeGenWriteBarrier(parameters->m_Items,animation);
        local_res8[0] = speed;
        pIVar2 = il2cpp_value_box(g_data_184354e38,local_res8);
        if (pIVar2 != (Il2CppObject *)0x0) {
          pIVar3 = il2cpp_vm_Object_IsInst(pIVar2,(((parameters->obj).klass)->_1).element_class);
          if (pIVar3 == (Il2CppObject *)0x0) {
            pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
          }
        }
        if (1 < (uint)parameters->max_length) {
          parameters->m_Items[1] = pIVar2;
          Il2CppCodeGenWriteBarrier(parameters->m_Items + 1,pIVar2);
          if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
            Photon_Pun_PhotonView__RPC(__this_00,"SetAnimationSpeedRPC",0,parameters,(MethodInfo *)0x0);
            return;
          }
          goto label_18210ea3b;
        }
      }
      ThrowIndexOutOfRangeException();
    }
  }
label_18210ea3b:
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$SetAnimationSpeedNonRPC
// il2cpp: void Characters_BaseCharacter__SetAnimationSpeedNonRPC (Characters_BaseCharacter_o* __this, System_String_o* animation, float speed, const MethodInfo* method);
// 0x18210e840

void Characters_BaseCharacter__SetAnimationSpeedNonRPC
               (Characters_BaseCharacter_o *__this,System_String_o *animation,float speed,MethodInfo *method)

{
  Characters_AnimationHandler_o *__this_00;
  System_Collections_Generic_Dictionary_string__float__o *__this_01;
  
  __this_00 = (__this->fields).Animation;
  if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
    if (Il2CppMethodInitialized_184346aff == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_Dictionary_string_float_set_Item);
      Il2CppMethodInitialized_184346aff = '\x01';
    }
    __this_01 = (__this_00->fields)._animationSpeed;
    if (__this_01 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
      System_Collections_Generic_Dictionary_object__float___set_Item
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,(Il2CppObject *)animation,
                 speed,(MethodInfo_1488DA0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_float_set_Item);
      Characters_AnimationHandler__ApplySpeed(__this_00,animation,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$SetAnimationSpeedRPC
// il2cpp: void Characters_BaseCharacter__SetAnimationSpeedRPC (Characters_BaseCharacter_o* __this, System_String_o* animation, float speed, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x18210e8c0

void Characters_BaseCharacter__SetAnimationSpeedRPC
               (Characters_BaseCharacter_o *__this,System_String_o *animation,float speed,
               Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  Characters_AnimationHandler_o *__this_00;
  
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
     (pPVar2 = (pUVar1->fields).PhotonView, pPVar2 != (Photon_Pun_PhotonView_o *)0x0)) {
    if ((info->fields).Sender != (pPVar2->fields)._Owner_k__BackingField) {
      return;
    }
    __this_00 = (__this->fields).Animation;
    if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
      Characters_AnimationHandler__SetSpeed(__this_00,animation,speed,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$CrossFadeRPC
// il2cpp: void Characters_BaseCharacter__CrossFadeRPC (Characters_BaseCharacter_o* __this, System_String_o* animation, float fadeTime, float startTime, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x182109730

void Characters_BaseCharacter__CrossFadeRPC
               (Characters_BaseCharacter_o *__this,System_String_o *animation,float fadeTime,float startTime,
               Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  Characters_AnimationHandler_o *__this_00;
  
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
     (pPVar2 = (pUVar1->fields).PhotonView, pPVar2 != (Photon_Pun_PhotonView_o *)0x0)) {
    if ((info->fields).Sender != (pPVar2->fields)._Owner_k__BackingField) {
      return;
    }
    __this_00 = (__this->fields).Animation;
    if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
      Characters_AnimationHandler__CrossFade(__this_00,animation,fadeTime,startTime,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$CrossFadeWithSpeedRPC
// il2cpp: void Characters_BaseCharacter__CrossFadeWithSpeedRPC (Characters_BaseCharacter_o* __this, System_String_o* animation, float speed, float fadeTime, float startTime, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x182109790

void Characters_BaseCharacter__CrossFadeWithSpeedRPC
               (Characters_BaseCharacter_o *__this,System_String_o *animation,float speed,float fadeTime,
               float startTime,Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  Characters_AnimationHandler_o *pCVar3;
  
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
     (pPVar2 = (pUVar1->fields).PhotonView, pPVar2 != (Photon_Pun_PhotonView_o *)0x0)) {
    if ((info->fields).Sender != (pPVar2->fields)._Owner_k__BackingField) {
      return;
    }
    pCVar3 = (__this->fields).Animation;
    if (pCVar3 != (Characters_AnimationHandler_o *)0x0) {
      Characters_AnimationHandler__SetSpeed(pCVar3,animation,speed,(MethodInfo *)0x0);
      pCVar3 = (__this->fields).Animation;
      if (pCVar3 != (Characters_AnimationHandler_o *)0x0) {
        Characters_AnimationHandler__CrossFade(pCVar3,animation,fadeTime,startTime,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$PlaySound
// il2cpp: void Characters_BaseCharacter__PlaySound (Characters_BaseCharacter_o* __this, System_String_o* sound, const MethodInfo* method);
// 0x18210e430

void Characters_BaseCharacter__PlaySound
               (Characters_BaseCharacter_o *__this,System_String_o *sound,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *__this_00;
  bool bVar2;
  System_Object_array *parameters;
  Il2CppObject *pIVar3;
  
  if (Il2CppMethodInitialized_184346b22 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"PlaySoundRPC");
    Il2CppMethodInitialized_184346b22 = '\x01';
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
      Il2CppCodeGenWriteBarrier(parameters->m_Items,sound);
      if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(__this_00,"PlaySoundRPC",0,parameters,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$IsPlayingSound
// il2cpp: bool Characters_BaseCharacter__IsPlayingSound (Characters_BaseCharacter_o* __this, System_String_o* sound, const MethodInfo* method);
// 0x18210c900

bool Characters_BaseCharacter__IsPlayingSound
               (Characters_BaseCharacter_o *__this,System_String_o *sound,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar2;
  UnityEngine_AudioSource_o *__this_01;
  
  if (Il2CppMethodInitialized_184346b23 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_get_Item);
    Il2CppMethodInitialized_184346b23 = '\x01';
  }
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
     (__this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(pUVar1->fields).AudioSources,
     __this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    __this_01 = System_Collections_Generic_Dictionary_object__object___get_Item
                          (__this_00,(Il2CppObject *)sound,
                           (MethodInfo_147A5B0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_get_Item);
    if (__this_01 != (UnityEngine_AudioSource_o *)0x0) {
      bVar2 = UnityEngine_AudioSource__get_isPlaying(__this_01,(MethodInfo *)0x0);
      return bVar2;
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$WaitAndPlaySound
// il2cpp: System_Collections_IEnumerator_o* Characters_BaseCharacter__WaitAndPlaySound (Characters_BaseCharacter_o* __this, System_String_o* sound, float delay, const MethodInfo* method);
// 0x18210f6d0

System_Collections_IEnumerator_o *
Characters_BaseCharacter__WaitAndPlaySound
          (Characters_BaseCharacter_o *__this,System_String_o *sound,float delay,MethodInfo *method)

{
  Characters_BaseCharacter__WaitAndPlaySound_d__122_o *__this_00;
  
  if (Il2CppMethodInitialized_184346b24 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseCharacter_WaitAndPlaySound_d__122);
    Il2CppMethodInitialized_184346b24 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Characters_BaseCharacter_WaitAndPlaySound_d__122);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  (__this_00->fields).sound = sound;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).sound,sound);
  (__this_00->fields).delay = delay;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Characters.BaseCharacter$$PlaySoundRPC
// il2cpp: void Characters_BaseCharacter__PlaySoundRPC (Characters_BaseCharacter_o* __this, System_String_o* sound, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x18210e350

void Characters_BaseCharacter__PlaySoundRPC
               (Characters_BaseCharacter_o *__this,System_String_o *sound,Photon_Pun_PhotonMessageInfo_o *info
               ,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  System_Collections_Generic_Dictionary_string__AudioSource__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  bool bVar3;
  UnityEngine_AudioSource_o *__this_02;
  
  if (Il2CppMethodInitialized_184346b25 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_get_Item);
    Il2CppMethodInitialized_184346b25 = '\x01';
  }
  if ((info->fields).Sender != (Photon_Realtime_Player_o *)0x0) {
    pUVar1 = (__this->fields).Cache;
    if ((pUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
       (pPVar2 = (pUVar1->fields).PhotonView, pPVar2 == (Photon_Pun_PhotonView_o *)0x0)) goto label_18210e425;
    if ((info->fields).Sender != (pPVar2->fields)._Owner_k__BackingField) {
      return;
    }
  }
  if ((__this->fields).SoundsEnabled == false) {
    return;
  }
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
     (__this_00 = (pUVar1->fields).AudioSources,
     __this_00 != (System_Collections_Generic_Dictionary_string__AudioSource__o *)0x0)) {
    bVar3 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                       (Il2CppObject *)sound,
                       (MethodInfo_1455450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_ContainsKey);
    if (!bVar3) {
      return;
    }
    pUVar1 = (__this->fields).Cache;
    if (((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
        (__this_01 = (System_Collections_Generic_Dictionary_object__object__o *)(pUVar1->fields).AudioSources,
        __this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) &&
       (__this_02 = System_Collections_Generic_Dictionary_object__object___get_Item
                              (__this_01,(Il2CppObject *)sound,
                               (MethodInfo_147A5B0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_get_Item),
       __this_02 != (UnityEngine_AudioSource_o *)0x0)) {
      UnityEngine_AudioSource__Play_2eb4470(__this_02,(MethodInfo *)0x0);
      return;
    }
  }
label_18210e425:
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$StopSound
// il2cpp: void Characters_BaseCharacter__StopSound (Characters_BaseCharacter_o* __this, System_String_o* sound, const MethodInfo* method);
// 0x18210ef80

void Characters_BaseCharacter__StopSound
               (Characters_BaseCharacter_o *__this,System_String_o *sound,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *__this_00;
  bool bVar2;
  System_Object_array *parameters;
  Il2CppObject *pIVar3;
  
  if (Il2CppMethodInitialized_184346b26 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"StopSoundRPC");
    Il2CppMethodInitialized_184346b26 = '\x01';
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
      Il2CppCodeGenWriteBarrier(parameters->m_Items,sound);
      if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(__this_00,"StopSoundRPC",0,parameters,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$FadeSound
// il2cpp: void Characters_BaseCharacter__FadeSound (Characters_BaseCharacter_o* __this, System_String_o* sound, float volume, float time, const MethodInfo* method);
// 0x182109fe0

void Characters_BaseCharacter__FadeSound
               (Characters_BaseCharacter_o *__this,System_String_o *sound,float volume,float time,
               MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *__this_00;
  bool bVar2;
  System_Object_array *parameters;
  Il2CppObject *pIVar3;
  Il2CppObject *pIVar4;
  float local_res8 [2];
  float local_38 [12];
  
  if (Il2CppMethodInitialized_184346b27 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"FadeSoundRPC");
    Il2CppMethodInitialized_184346b27 = '\x01';
  }
  bVar2 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method);
  if (!bVar2) {
    return;
  }
  pUVar1 = (__this->fields).Cache;
  if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
    __this_00 = (pUVar1->fields).PhotonView;
    parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,3);
    if (parameters != (System_Object_array *)0x0) {
      if ((sound != (System_String_o *)0x0) &&
         (pIVar3 = il2cpp_vm_Object_IsInst
                             ((Il2CppObject *)sound,(((parameters->obj).klass)->_1).element_class),
         pIVar3 == (Il2CppObject *)0x0)) {
        pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
      }
      if ((int)parameters->max_length != 0) {
        parameters->m_Items[0] = (Il2CppObject *)sound;
        Il2CppCodeGenWriteBarrier(parameters->m_Items,sound);
        local_res8[0] = volume;
        pIVar3 = il2cpp_value_box(g_data_184354e38,local_res8);
        if ((pIVar3 != (Il2CppObject *)0x0) &&
           (pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((parameters->obj).klass)->_1).element_class),
           pIVar4 == (Il2CppObject *)0x0)) {
          pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
        }
        if (1 < (uint)parameters->max_length) {
          parameters->m_Items[1] = pIVar3;
          Il2CppCodeGenWriteBarrier(parameters->m_Items + 1,pIVar3);
          local_38[0] = time;
          pIVar3 = il2cpp_value_box(g_data_184354e38,local_38);
          if ((pIVar3 != (Il2CppObject *)0x0) &&
             (pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((parameters->obj).klass)->_1).element_class),
             pIVar4 == (Il2CppObject *)0x0)) {
            pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
          }
          if (2 < (uint)parameters->max_length) {
            parameters->m_Items[2] = pIVar3;
            Il2CppCodeGenWriteBarrier(parameters->m_Items + 2,pIVar3);
            if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
              Photon_Pun_PhotonView__RPC(__this_00,"FadeSoundRPC",0,parameters,(MethodInfo *)0x0);
              return;
            }
            goto label_18210a18f;
          }
        }
      }
      ThrowIndexOutOfRangeException();
    }
  }
label_18210a18f:
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$FadeSoundRPC
// il2cpp: void Characters_BaseCharacter__FadeSoundRPC (Characters_BaseCharacter_o* __this, System_String_o* sound, float volume, float time, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x182109e20

void Characters_BaseCharacter__FadeSoundRPC
               (Characters_BaseCharacter_o *__this,System_String_o *sound,float volume,float time,
               Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  System_Collections_Generic_Dictionary_string__AudioSource__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  bool bVar3;
  UnityEngine_AudioSource_o *__this_02;
  Characters_BaseCharacter__FadeSoundOverTime_d__127_o *routine;
  float fVar4;
  
  if (Il2CppMethodInitialized_184346b28 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_get_Item);
    Il2CppMethodInitialized_184346b28 = '\x01';
  }
  if ((info->fields).Sender != (Photon_Realtime_Player_o *)0x0) {
    pUVar1 = (__this->fields).Cache;
    if ((pUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
       (pPVar2 = (pUVar1->fields).PhotonView, pPVar2 == (Photon_Pun_PhotonView_o *)0x0)) goto label_182109fcd;
    if ((info->fields).Sender != (pPVar2->fields)._Owner_k__BackingField) {
      return;
    }
  }
  if ((__this->fields).SoundsEnabled == false) {
    return;
  }
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
     (__this_00 = (pUVar1->fields).AudioSources,
     __this_00 != (System_Collections_Generic_Dictionary_string__AudioSource__o *)0x0)) {
    bVar3 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                       (Il2CppObject *)sound,
                       (MethodInfo_1455450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_ContainsKey);
    if (!bVar3) {
      return;
    }
    pUVar1 = (__this->fields).Cache;
    if (((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
        (__this_01 = (System_Collections_Generic_Dictionary_object__object__o *)(pUVar1->fields).AudioSources,
        __this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) &&
       (__this_02 = System_Collections_Generic_Dictionary_object__object___get_Item
                              (__this_01,(Il2CppObject *)sound,
                               (MethodInfo_147A5B0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_get_Item),
       __this_02 != (UnityEngine_AudioSource_o *)0x0)) {
      if (0.0 < time) {
        fVar4 = UnityEngine_AudioSource__get_volume(__this_02,(MethodInfo *)0x0);
        if (Il2CppMethodInitialized_184346b29 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_Characters_BaseCharacter_FadeSoundOverTime_d__127);
          Il2CppMethodInitialized_184346b29 = '\x01';
        }
        routine = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Characters_BaseCharacter_FadeSoundOverTime_d__127);
        System_Object___ctor
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
        (routine->fields).__1__state = 0;
        (routine->fields).source = __this_02;
        Il2CppCodeGenWriteBarrier(&(routine->fields).source,__this_02);
        (routine->fields).time = time;
        (routine->fields).volumeIncrement = volume - fVar4;
        UnityEngine_MonoBehaviour__StartCoroutine_Auto
                  ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)routine,
                   (MethodInfo *)0x0);
        return;
      }
      UnityEngine_AudioSource__set_volume(__this_02,volume,(MethodInfo *)0x0);
      return;
    }
  }
label_182109fcd:
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$FadeSoundOverTime
// il2cpp: System_Collections_IEnumerator_o* Characters_BaseCharacter__FadeSoundOverTime (Characters_BaseCharacter_o* __this, UnityEngine_AudioSource_o* source, float volumeIncrement, float time, const MethodInfo* method);
// 0x182109d90

System_Collections_IEnumerator_o *
Characters_BaseCharacter__FadeSoundOverTime
          (Characters_BaseCharacter_o *__this,UnityEngine_AudioSource_o *source,float volumeIncrement,
          float time,MethodInfo *method)

{
  Characters_BaseCharacter__FadeSoundOverTime_d__127_o *__this_00;
  
  if (Il2CppMethodInitialized_184346b29 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseCharacter_FadeSoundOverTime_d__127);
    Il2CppMethodInitialized_184346b29 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Characters_BaseCharacter_FadeSoundOverTime_d__127);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).source = source;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).source,source);
  (__this_00->fields).volumeIncrement = volumeIncrement;
  (__this_00->fields).time = time;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Characters.BaseCharacter$$StopSoundRPC
// il2cpp: void Characters_BaseCharacter__StopSoundRPC (Characters_BaseCharacter_o* __this, System_String_o* sound, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x18210eea0

void Characters_BaseCharacter__StopSoundRPC
               (Characters_BaseCharacter_o *__this,System_String_o *sound,Photon_Pun_PhotonMessageInfo_o *info
               ,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  System_Collections_Generic_Dictionary_string__AudioSource__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  bool bVar3;
  UnityEngine_AudioSource_o *__this_02;
  
  if (Il2CppMethodInitialized_184346b2a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_get_Item);
    Il2CppMethodInitialized_184346b2a = '\x01';
  }
  if ((info->fields).Sender != (Photon_Realtime_Player_o *)0x0) {
    pUVar1 = (__this->fields).Cache;
    if ((pUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
       (pPVar2 = (pUVar1->fields).PhotonView, pPVar2 == (Photon_Pun_PhotonView_o *)0x0)) goto label_18210ef6b;
    if ((info->fields).Sender != (pPVar2->fields)._Owner_k__BackingField) {
      return;
    }
  }
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
     (__this_00 = (pUVar1->fields).AudioSources,
     __this_00 != (System_Collections_Generic_Dictionary_string__AudioSource__o *)0x0)) {
    bVar3 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                       (Il2CppObject *)sound,
                       (MethodInfo_1455450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_ContainsKey);
    if (!bVar3) {
      return;
    }
    pUVar1 = (__this->fields).Cache;
    if (((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
        (__this_01 = (System_Collections_Generic_Dictionary_object__object__o *)(pUVar1->fields).AudioSources,
        __this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) &&
       (__this_02 = System_Collections_Generic_Dictionary_object__object___get_Item
                              (__this_01,(Il2CppObject *)sound,
                               (MethodInfo_147A5B0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_get_Item),
       __this_02 != (UnityEngine_AudioSource_o *)0x0)) {
      UnityEngine_AudioSource__Stop_2eb4660(__this_02,(MethodInfo *)0x0);
      return;
    }
  }
label_18210ef6b:
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$OnHealthChange
// il2cpp: void Characters_BaseCharacter__OnHealthChange (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x18210d820

void Characters_BaseCharacter__OnHealthChange(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *__this_00;
  bool bVar2;
  System_Object_array *parameters;
  Il2CppObject *pIVar3;
  Il2CppObject *pIVar4;
  int32_t local_res8 [2];
  int32_t local_res18 [4];
  
  if (Il2CppMethodInitialized_184346b2b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"SetHealthRPC");
    Il2CppMethodInitialized_184346b2b = '\x01';
  }
  bVar2 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method);
  if (!bVar2) {
    return;
  }
  pUVar1 = (__this->fields).Cache;
  if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
    __this_00 = (pUVar1->fields).PhotonView;
    parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
    local_res8[0] = (__this->fields).CurrentHealth;
    pIVar3 = il2cpp_value_box(g_data_184354e08,local_res8);
    if (parameters != (System_Object_array *)0x0) {
      if ((pIVar3 != (Il2CppObject *)0x0) &&
         (pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((parameters->obj).klass)->_1).element_class),
         pIVar4 == (Il2CppObject *)0x0)) {
        pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
      }
      if ((int)parameters->max_length != 0) {
        parameters->m_Items[0] = pIVar3;
        Il2CppCodeGenWriteBarrier(parameters->m_Items,pIVar3);
        local_res18[0] = (__this->fields).MaxHealth;
        pIVar3 = il2cpp_value_box(g_data_184354e08,local_res18);
        if ((pIVar3 != (Il2CppObject *)0x0) &&
           (pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((parameters->obj).klass)->_1).element_class),
           pIVar4 == (Il2CppObject *)0x0)) {
          pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
        }
        if (1 < (uint)parameters->max_length) {
          parameters->m_Items[1] = pIVar3;
          Il2CppCodeGenWriteBarrier(parameters->m_Items + 1,pIVar3);
          if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
            Photon_Pun_PhotonView__RPC(__this_00,"SetHealthRPC",0,parameters,(MethodInfo *)0x0);
            return;
          }
          goto label_18210d983;
        }
      }
      ThrowIndexOutOfRangeException();
    }
  }
label_18210d983:
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$OnHit
// il2cpp: void Characters_BaseCharacter__OnHit (Characters_BaseCharacter_o* __this, Characters_BaseHitbox_o* hitbox, Il2CppObject* victim, UnityEngine_Collider_o* collider, System_String_o* type, bool firstHit, const MethodInfo* method);
// 0x180547020

void
Characters_BaseCharacter__OnHit(Characters_BaseCharacter_o* __this, Characters_BaseHitbox_o* hitbox, Il2CppObject* victim, UnityEngine_Collider_o* collider, System_String_o* type, bool firstHit, MethodInfo* method)

{
  return;
}


// Characters.BaseCharacter$$GetHitRPC
// il2cpp: void Characters_BaseCharacter__GetHitRPC (Characters_BaseCharacter_o* __this, int32_t viewId, System_String_o* name, int32_t damage, System_String_o* type, System_String_o* collider, const MethodInfo* method);
// 0x18210ae70

void Characters_BaseCharacter__GetHitRPC
               (Characters_BaseCharacter_o *__this,int32_t viewId,System_String_o *name,int32_t damage,
               System_String_o *type,System_String_o *collider,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  CustomLogic_CustomLogicEvaluator_o *pCVar3;
  System_String_o *obj;
  bool bVar4;
  Characters_BaseCharacter_o *character;
  System_Object_array *pSVar5;
  Il2CppObject *pIVar6;
  Il2CppObject *pIVar7;
  int32_t local_res8 [2];
  int32_t local_38;
  int32_t local_34 [3];
  
  if (Il2CppMethodInitialized_184346b2c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&"NotifyDamagedRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"NotifyDieRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowKillFeedWithPlayersRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184346b2c = '\x01';
  }
  if (((__this->fields).Dead != false) || (damage == 0)) {
    return;
  }
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  character = Utility_Util__FindCharacterByViewId(viewId,(MethodInfo *)0x0);
  bVar4 = System_String__op_Equality(name,"",(MethodInfo *)0x0);
  if (bVar4) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)character,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      if (character == (Characters_BaseCharacter_o *)0x0) goto label_18210b511;
      name = (character->fields).RichTextName;
    }
  }
  (*(__this->klass->vtable)._82_TakeDamage.methodPtr)
            (__this,damage,(__this->klass->vtable)._82_TakeDamage.method);
  pUVar1 = (__this->fields).Cache;
  if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
    pPVar2 = (pUVar1->fields).PhotonView;
    pSVar5 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,3);
    local_res8[0] = viewId;
    pIVar6 = il2cpp_value_box(g_data_184354e08,local_res8);
    if (pSVar5 != (System_Object_array *)0x0) {
      if ((pIVar6 != (Il2CppObject *)0x0) &&
         (pIVar7 = il2cpp_vm_Object_IsInst(pIVar6,(((pSVar5->obj).klass)->_1).element_class),
         pIVar7 == (Il2CppObject *)0x0)) {
        pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
      }
      if ((int)pSVar5->max_length != 0) {
        pSVar5->m_Items[0] = pIVar6;
        Il2CppCodeGenWriteBarrier(pSVar5->m_Items,pIVar6);
        if ((name != (System_String_o *)0x0) &&
           (pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)name,(((pSVar5->obj).klass)->_1).element_class),
           pIVar6 == (Il2CppObject *)0x0)) {
          pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
        }
        if (1 < (uint)pSVar5->max_length) {
          pSVar5->m_Items[1] = (Il2CppObject *)name;
          Il2CppCodeGenWriteBarrier(pSVar5->m_Items + 1,name);
          local_38 = damage;
          pIVar6 = il2cpp_value_box(g_data_184354e08,&local_38);
          if ((pIVar6 != (Il2CppObject *)0x0) &&
             (pIVar7 = il2cpp_vm_Object_IsInst(pIVar6,(((pSVar5->obj).klass)->_1).element_class),
             pIVar7 == (Il2CppObject *)0x0)) {
            pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
          }
          if (2 < (uint)pSVar5->max_length) {
            pSVar5->m_Items[2] = pIVar6;
            Il2CppCodeGenWriteBarrier(pSVar5->m_Items + 2,pIVar6);
            if (pPVar2 == (Photon_Pun_PhotonView_o *)0x0) goto label_18210b45f;
            Photon_Pun_PhotonView__RPC(pPVar2,"NotifyDamagedRPC",0,pSVar5,(MethodInfo *)0x0);
            if (0.0 < (float)(__this->fields).CurrentHealth) {
              return;
            }
            if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
            }
            if (TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator !=
                (CustomLogic_CustomLogicEvaluator_o *)0x0) {
              if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
              }
              pCVar3 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
              if (pCVar3 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
label_18210b511:
                ThrowNullReferenceException();
              }
              if ((pCVar3->fields).DefaultShowKillFeed != false) {
                pPVar2 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
                pSVar5 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,6);
                if (pSVar5 == (System_Object_array *)0x0) {
label_18210b50b:
                  ThrowNullReferenceException();
                }
                if ((name != (System_String_o *)0x0) &&
                   (pIVar6 = il2cpp_vm_Object_IsInst
                                       ((Il2CppObject *)name,(((pSVar5->obj).klass)->_1).element_class),
                   pIVar6 == (Il2CppObject *)0x0)) {
                  pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
                  il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
                }
                if ((int)pSVar5->max_length == 0) {
label_18210b505:
                  ThrowIndexOutOfRangeException();
                }
                pSVar5->m_Items[0] = (Il2CppObject *)name;
                Il2CppCodeGenWriteBarrier(pSVar5->m_Items,name);
                obj = (__this->fields).RichTextName;
                if ((obj != (System_String_o *)0x0) &&
                   (pIVar6 = il2cpp_vm_Object_IsInst
                                       ((Il2CppObject *)obj,(((pSVar5->obj).klass)->_1).element_class),
                   pIVar6 == (Il2CppObject *)0x0)) {
                  pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
                  il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
                }
                if ((uint)pSVar5->max_length < 2) goto label_18210b505;
                pSVar5->m_Items[1] = (Il2CppObject *)obj;
                Il2CppCodeGenWriteBarrier(pSVar5->m_Items + 1,obj);
                local_res8[0] = damage;
                pIVar6 = il2cpp_value_box(g_data_184354e08,local_res8);
                if ((pIVar6 != (Il2CppObject *)0x0) &&
                   (pIVar7 = il2cpp_vm_Object_IsInst(pIVar6,(((pSVar5->obj).klass)->_1).element_class),
                   pIVar7 == (Il2CppObject *)0x0)) {
                  pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
                  il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
                }
                if ((uint)pSVar5->max_length < 3) goto label_18210b505;
                pSVar5->m_Items[2] = pIVar6;
                Il2CppCodeGenWriteBarrier(pSVar5->m_Items + 2,pIVar6);
                if ((type != (System_String_o *)0x0) &&
                   (pIVar6 = il2cpp_vm_Object_IsInst
                                       ((Il2CppObject *)type,(((pSVar5->obj).klass)->_1).element_class),
                   pIVar6 == (Il2CppObject *)0x0)) {
                  pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
                  il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
                }
                if ((uint)pSVar5->max_length < 4) goto label_18210b505;
                pSVar5->m_Items[3] = (Il2CppObject *)type;
                Il2CppCodeGenWriteBarrier(pSVar5->m_Items + 3,type);
                local_38 = Characters_BaseCharacter__KillFeedActorNumber(character,(MethodInfo *)0x0);
                pIVar6 = il2cpp_value_box(g_data_184354e08,&local_38);
                if ((pIVar6 != (Il2CppObject *)0x0) &&
                   (pIVar7 = il2cpp_vm_Object_IsInst(pIVar6,(((pSVar5->obj).klass)->_1).element_class),
                   pIVar7 == (Il2CppObject *)0x0)) {
                  pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
                  il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
                }
                if ((uint)pSVar5->max_length < 5) goto label_18210b505;
                pSVar5->m_Items[4] = pIVar6;
                Il2CppCodeGenWriteBarrier(pSVar5->m_Items + 4,pIVar6);
                local_34[0] = Characters_BaseCharacter__KillFeedActorNumber(__this,(MethodInfo *)0x0);
                pIVar6 = il2cpp_value_box(g_data_184354e08,local_34);
                if ((pIVar6 != (Il2CppObject *)0x0) &&
                   (pIVar7 = il2cpp_vm_Object_IsInst(pIVar6,(((pSVar5->obj).klass)->_1).element_class),
                   pIVar7 == (Il2CppObject *)0x0)) {
                  pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
                  il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
                }
                if ((uint)pSVar5->max_length < 6) goto label_18210b505;
                pSVar5->m_Items[5] = pIVar6;
                Il2CppCodeGenWriteBarrier(pSVar5->m_Items + 5,pIVar6);
                if (pPVar2 == (Photon_Pun_PhotonView_o *)0x0) goto label_18210b50b;
                Photon_Pun_PhotonView__RPC(pPVar2,"ShowKillFeedWithPlayersRPC",0,pSVar5,(MethodInfo *)0x0);
              }
            }
            pUVar1 = (__this->fields).Cache;
            if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
              pPVar2 = (pUVar1->fields).PhotonView;
              pSVar5 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
              local_res8[0] = viewId;
              pIVar6 = il2cpp_value_box(g_data_184354e08,local_res8);
              if (pSVar5 != (System_Object_array *)0x0) {
                if ((pIVar6 != (Il2CppObject *)0x0) &&
                   (pIVar7 = il2cpp_vm_Object_IsInst(pIVar6,(((pSVar5->obj).klass)->_1).element_class),
                   pIVar7 == (Il2CppObject *)0x0)) {
                  pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
                  il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
                }
                if ((int)pSVar5->max_length != 0) {
                  pSVar5->m_Items[0] = pIVar6;
                  Il2CppCodeGenWriteBarrier(pSVar5->m_Items,pIVar6);
                  if ((name != (System_String_o *)0x0) &&
                     (pIVar6 = il2cpp_vm_Object_IsInst
                                         ((Il2CppObject *)name,(((pSVar5->obj).klass)->_1).element_class),
                     pIVar6 == (Il2CppObject *)0x0)) {
                    pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
                    il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
                  }
                  if (1 < (uint)pSVar5->max_length) {
                    pSVar5->m_Items[1] = (Il2CppObject *)name;
                    Il2CppCodeGenWriteBarrier(pSVar5->m_Items + 1,name);
                    if (pPVar2 != (Photon_Pun_PhotonView_o *)0x0) {
                      Photon_Pun_PhotonView__RPC(pPVar2,"NotifyDieRPC",0,pSVar5,(MethodInfo *)0x0);
                      return;
                    }
                    goto label_18210b52d;
                  }
                }
                ThrowIndexOutOfRangeException();
              }
            }
label_18210b52d:
            ThrowNullReferenceException();
          }
        }
      }
      ThrowIndexOutOfRangeException();
    }
  }
label_18210b45f:
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$GetDamagedRPC
// il2cpp: void Characters_BaseCharacter__GetDamagedRPC (Characters_BaseCharacter_o* __this, System_String_o* name, int32_t damage, const MethodInfo* method);
// 0x18210a620
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18210a9a7: mov rax, qword ptr [rip + 0x1f7457a]  ; ""

void Characters_BaseCharacter__GetDamagedRPC
               (Characters_BaseCharacter_o *__this,System_String_o *name,int32_t damage,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  CustomLogic_CustomLogicEvaluator_o *pCVar3;
  System_String_o *pSVar4;
  System_Object_array *pSVar5;
  Il2CppObject *pIVar6;
  Il2CppObject *pIVar7;
  int32_t local_res8 [2];
  int32_t local_28;
  int32_t local_24 [3];
  
  if (Il2CppMethodInitialized_184346b2d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&"NotifyDamagedRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"NotifyDieRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowKillFeedWithPlayersRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184346b2d = '\x01';
  }
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
     (pPVar2 = (pUVar1->fields).PhotonView, pPVar2 == (Photon_Pun_PhotonView_o *)0x0)) {
label_18210ab92:
    ThrowNullReferenceException();
  }
  if (((pPVar2->fields)._IsMine_k__BackingField == false) || ((__this->fields).Dead != false)) {
    return;
  }
  (*(__this->klass->vtable)._82_TakeDamage.methodPtr)
            (__this,damage,(__this->klass->vtable)._82_TakeDamage.method);
  pUVar1 = (__this->fields).Cache;
  if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
    pPVar2 = (pUVar1->fields).PhotonView;
    pSVar5 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,3);
    local_res8[0] = -1;
    pIVar6 = il2cpp_value_box(g_data_184354e08,local_res8);
    if (pSVar5 != (System_Object_array *)0x0) {
      if ((pIVar6 != (Il2CppObject *)0x0) &&
         (pIVar7 = il2cpp_vm_Object_IsInst(pIVar6,(((pSVar5->obj).klass)->_1).element_class),
         pIVar7 == (Il2CppObject *)0x0)) {
        pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
      }
      if ((int)pSVar5->max_length != 0) {
        pSVar5->m_Items[0] = pIVar6;
        Il2CppCodeGenWriteBarrier(pSVar5->m_Items,pIVar6);
        if ((name != (System_String_o *)0x0) &&
           (pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)name,(((pSVar5->obj).klass)->_1).element_class),
           pIVar6 == (Il2CppObject *)0x0)) {
          pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
        }
        if (1 < (uint)pSVar5->max_length) {
          pSVar5->m_Items[1] = (Il2CppObject *)name;
          Il2CppCodeGenWriteBarrier(pSVar5->m_Items + 1,name);
          local_28 = damage;
          pIVar6 = il2cpp_value_box(g_data_184354e08,&local_28);
          if ((pIVar6 != (Il2CppObject *)0x0) &&
             (pIVar7 = il2cpp_vm_Object_IsInst(pIVar6,(((pSVar5->obj).klass)->_1).element_class),
             pIVar7 == (Il2CppObject *)0x0)) {
            pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
          }
          if (2 < (uint)pSVar5->max_length) {
            pSVar5->m_Items[2] = pIVar6;
            Il2CppCodeGenWriteBarrier(pSVar5->m_Items + 2,pIVar6);
            if (pPVar2 == (Photon_Pun_PhotonView_o *)0x0) goto label_18210ac66;
            Photon_Pun_PhotonView__RPC(pPVar2,"NotifyDamagedRPC",0,pSVar5,(MethodInfo *)0x0);
            if (0.0 < (float)(__this->fields).CurrentHealth) {
              return;
            }
            if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
            }
            if (TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator !=
                (CustomLogic_CustomLogicEvaluator_o *)0x0) {
              if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
              }
              pCVar3 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
              if (pCVar3 == (CustomLogic_CustomLogicEvaluator_o *)0x0) goto label_18210ab92;
              if ((pCVar3->fields).DefaultShowKillFeed != false) {
                pPVar2 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
                pSVar5 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,6);
                if (pSVar5 == (System_Object_array *)0x0) {
label_18210ac3e:
                  ThrowNullReferenceException();
                }
                if ((name != (System_String_o *)0x0) &&
                   (pIVar6 = il2cpp_vm_Object_IsInst
                                       ((Il2CppObject *)name,(((pSVar5->obj).klass)->_1).element_class),
                   pIVar6 == (Il2CppObject *)0x0)) {
                  pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
                  il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
                }
                if ((int)pSVar5->max_length == 0) {
label_18210ac38:
                  ThrowIndexOutOfRangeException();
                }
                pSVar5->m_Items[0] = (Il2CppObject *)name;
                Il2CppCodeGenWriteBarrier(pSVar5->m_Items,name);
                pSVar4 = (__this->fields).RichTextName;
                if ((pSVar4 != (System_String_o *)0x0) &&
                   (pIVar6 = il2cpp_vm_Object_IsInst
                                       ((Il2CppObject *)pSVar4,(((pSVar5->obj).klass)->_1).element_class),
                   pIVar6 == (Il2CppObject *)0x0)) {
                  pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
                  il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
                }
                if ((uint)pSVar5->max_length < 2) goto label_18210ac38;
                pSVar5->m_Items[1] = (Il2CppObject *)pSVar4;
                Il2CppCodeGenWriteBarrier(pSVar5->m_Items + 1,pSVar4);
                local_res8[0] = damage;
                pIVar6 = il2cpp_value_box(g_data_184354e08,local_res8);
                if ((pIVar6 != (Il2CppObject *)0x0) &&
                   (pIVar7 = il2cpp_vm_Object_IsInst(pIVar6,(((pSVar5->obj).klass)->_1).element_class),
                   pIVar7 == (Il2CppObject *)0x0)) {
                  pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
                  il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
                }
                if ((uint)pSVar5->max_length < 3) goto label_18210ac38;
                pSVar5->m_Items[2] = pIVar6;
                Il2CppCodeGenWriteBarrier(pSVar5->m_Items + 2,pIVar6);
                if (("" != (System_String_o *)0x0) &&
                   (pIVar6 = il2cpp_vm_Object_IsInst
                                       ((Il2CppObject *)"",
                                        (((pSVar5->obj).klass)->_1).element_class),
                   pIVar6 == (Il2CppObject *)0x0)) {
                  pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
                  il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
                }
                pSVar4 = "";
                if ((uint)pSVar5->max_length < 4) goto label_18210ac38;
                pSVar5->m_Items[3] = (Il2CppObject *)"";
                Il2CppCodeGenWriteBarrier(pSVar5->m_Items + 3,pSVar4);
                local_28 = -1;
                pIVar6 = il2cpp_value_box(g_data_184354e08,&local_28);
                if ((pIVar6 != (Il2CppObject *)0x0) &&
                   (pIVar7 = il2cpp_vm_Object_IsInst(pIVar6,(((pSVar5->obj).klass)->_1).element_class),
                   pIVar7 == (Il2CppObject *)0x0)) {
                  pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
                  il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
                }
                if ((uint)pSVar5->max_length < 5) goto label_18210ac38;
                pSVar5->m_Items[4] = pIVar6;
                Il2CppCodeGenWriteBarrier(pSVar5->m_Items + 4,pIVar6);
                local_24[0] = Characters_BaseCharacter__KillFeedActorNumber(__this,(MethodInfo *)0x0);
                pIVar6 = il2cpp_value_box(g_data_184354e08,local_24);
                if ((pIVar6 != (Il2CppObject *)0x0) &&
                   (pIVar7 = il2cpp_vm_Object_IsInst(pIVar6,(((pSVar5->obj).klass)->_1).element_class),
                   pIVar7 == (Il2CppObject *)0x0)) {
                  pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
                  il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
                }
                if ((uint)pSVar5->max_length < 6) goto label_18210ac38;
                pSVar5->m_Items[5] = pIVar6;
                Il2CppCodeGenWriteBarrier(pSVar5->m_Items + 5,pIVar6);
                if (pPVar2 == (Photon_Pun_PhotonView_o *)0x0) goto label_18210ac3e;
                Photon_Pun_PhotonView__RPC(pPVar2,"ShowKillFeedWithPlayersRPC",0,pSVar5,(MethodInfo *)0x0);
              }
            }
            pUVar1 = (__this->fields).Cache;
            if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
              pPVar2 = (pUVar1->fields).PhotonView;
              pSVar5 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
              local_res8[0] = -1;
              pIVar6 = il2cpp_value_box(g_data_184354e08,local_res8);
              if (pSVar5 != (System_Object_array *)0x0) {
                if ((pIVar6 != (Il2CppObject *)0x0) &&
                   (pIVar7 = il2cpp_vm_Object_IsInst(pIVar6,(((pSVar5->obj).klass)->_1).element_class),
                   pIVar7 == (Il2CppObject *)0x0)) {
                  pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
                  il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
                }
                if ((int)pSVar5->max_length != 0) {
                  pSVar5->m_Items[0] = pIVar6;
                  Il2CppCodeGenWriteBarrier(pSVar5->m_Items,pIVar6);
                  if ((name != (System_String_o *)0x0) &&
                     (pIVar6 = il2cpp_vm_Object_IsInst
                                         ((Il2CppObject *)name,(((pSVar5->obj).klass)->_1).element_class),
                     pIVar6 == (Il2CppObject *)0x0)) {
                    pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
                    il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
                  }
                  if (1 < (uint)pSVar5->max_length) {
                    pSVar5->m_Items[1] = (Il2CppObject *)name;
                    Il2CppCodeGenWriteBarrier(pSVar5->m_Items + 1,name);
                    if (pPVar2 != (Photon_Pun_PhotonView_o *)0x0) {
                      Photon_Pun_PhotonView__RPC(pPVar2,"NotifyDieRPC",0,pSVar5,(MethodInfo *)0x0);
                      return;
                    }
                    goto label_18210ac5a;
                  }
                }
                ThrowIndexOutOfRangeException();
              }
            }
label_18210ac5a:
            ThrowNullReferenceException();
          }
        }
      }
      ThrowIndexOutOfRangeException();
    }
  }
label_18210ac66:
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$GetKilledRPC
// il2cpp: void Characters_BaseCharacter__GetKilledRPC (Characters_BaseCharacter_o* __this, System_String_o* name, const MethodInfo* method);
// 0x18210bac0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18210bd17: mov rax, qword ptr [rip + 0x1f7320a]  ; ""

void Characters_BaseCharacter__GetKilledRPC
               (Characters_BaseCharacter_o *__this,System_String_o *name,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  Characters_BaseCharacter_c *pCVar3;
  CustomLogic_CustomLogicEvaluator_o *pCVar4;
  System_String_o *pSVar5;
  System_Object_array *pSVar6;
  Il2CppObject *pIVar7;
  Il2CppObject *pIVar8;
  undefined4 local_res8 [2];
  undefined4 local_res20 [2];
  int32_t local_38 [4];
  
  if (Il2CppMethodInitialized_184346b2e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&"NotifyDieRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"ShowKillFeedWithPlayersRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184346b2e = '\x01';
  }
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
     (pPVar2 = (pUVar1->fields).PhotonView, pPVar2 == (Photon_Pun_PhotonView_o *)0x0)) {
label_18210bf03:
    ThrowNullReferenceException();
  }
  if (((pPVar2->fields)._IsMine_k__BackingField == false) || ((__this->fields).Dead != false)) {
    return;
  }
  pCVar3 = __this->klass;
  (__this->fields).CurrentHealth = 0;
  (*(pCVar3->vtable)._88_OnHealthChange.methodPtr)(__this,(pCVar3->vtable)._88_OnHealthChange.method);
  if ((__this->fields).CurrentHealth < 1) {
    (*(__this->klass->vtable)._83_Die.methodPtr)(__this,(__this->klass->vtable)._83_Die.method);
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  if (TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator !=
      (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    pCVar4 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    if (pCVar4 == (CustomLogic_CustomLogicEvaluator_o *)0x0) goto label_18210bf03;
    if ((pCVar4->fields).DefaultShowKillFeed != false) {
      pPVar2 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
      pSVar6 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,6);
      if (pSVar6 == (System_Object_array *)0x0) {
label_18210bf7f:
        ThrowNullReferenceException();
      }
      if ((name != (System_String_o *)0x0) &&
         (pIVar7 = il2cpp_vm_Object_IsInst((Il2CppObject *)name,(((pSVar6->obj).klass)->_1).element_class),
         pIVar7 == (Il2CppObject *)0x0)) {
        pIVar7 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar7,(MethodInfo *)0x0);
      }
      if ((int)pSVar6->max_length == 0) {
label_18210bf79:
        ThrowIndexOutOfRangeException();
      }
      pSVar6->m_Items[0] = (Il2CppObject *)name;
      Il2CppCodeGenWriteBarrier(pSVar6->m_Items,name);
      pSVar5 = (__this->fields).RichTextName;
      if ((pSVar5 != (System_String_o *)0x0) &&
         (pIVar7 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar5,(((pSVar6->obj).klass)->_1).element_class),
         pIVar7 == (Il2CppObject *)0x0)) {
        pIVar7 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar7,(MethodInfo *)0x0);
      }
      if ((uint)pSVar6->max_length < 2) goto label_18210bf79;
      pSVar6->m_Items[1] = (Il2CppObject *)pSVar5;
      Il2CppCodeGenWriteBarrier(pSVar6->m_Items + 1,pSVar5);
      local_res8[0] = 0;
      pIVar7 = il2cpp_value_box(g_data_184354e08,local_res8);
      if ((pIVar7 != (Il2CppObject *)0x0) &&
         (pIVar8 = il2cpp_vm_Object_IsInst(pIVar7,(((pSVar6->obj).klass)->_1).element_class),
         pIVar8 == (Il2CppObject *)0x0)) {
        pIVar7 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar7,(MethodInfo *)0x0);
      }
      if ((uint)pSVar6->max_length < 3) goto label_18210bf79;
      pSVar6->m_Items[2] = pIVar7;
      Il2CppCodeGenWriteBarrier(pSVar6->m_Items + 2,pIVar7);
      if (("" != (System_String_o *)0x0) &&
         (pIVar7 = il2cpp_vm_Object_IsInst
                             ((Il2CppObject *)"",(((pSVar6->obj).klass)->_1).element_class)
         , pIVar7 == (Il2CppObject *)0x0)) {
        pIVar7 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar7,(MethodInfo *)0x0);
      }
      pSVar5 = "";
      if ((uint)pSVar6->max_length < 4) goto label_18210bf79;
      pSVar6->m_Items[3] = (Il2CppObject *)"";
      Il2CppCodeGenWriteBarrier(pSVar6->m_Items + 3,pSVar5);
      local_res20[0] = 0xffffffff;
      pIVar7 = il2cpp_value_box(g_data_184354e08,local_res20);
      if ((pIVar7 != (Il2CppObject *)0x0) &&
         (pIVar8 = il2cpp_vm_Object_IsInst(pIVar7,(((pSVar6->obj).klass)->_1).element_class),
         pIVar8 == (Il2CppObject *)0x0)) {
        pIVar7 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar7,(MethodInfo *)0x0);
      }
      if ((uint)pSVar6->max_length < 5) goto label_18210bf79;
      pSVar6->m_Items[4] = pIVar7;
      Il2CppCodeGenWriteBarrier(pSVar6->m_Items + 4,pIVar7);
      local_38[0] = Characters_BaseCharacter__KillFeedActorNumber(__this,(MethodInfo *)0x0);
      pIVar7 = il2cpp_value_box(g_data_184354e08,local_38);
      if ((pIVar7 != (Il2CppObject *)0x0) &&
         (pIVar8 = il2cpp_vm_Object_IsInst(pIVar7,(((pSVar6->obj).klass)->_1).element_class),
         pIVar8 == (Il2CppObject *)0x0)) {
        pIVar7 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar7,(MethodInfo *)0x0);
      }
      if ((uint)pSVar6->max_length < 6) goto label_18210bf79;
      pSVar6->m_Items[5] = pIVar7;
      Il2CppCodeGenWriteBarrier(pSVar6->m_Items + 5,pIVar7);
      if (pPVar2 == (Photon_Pun_PhotonView_o *)0x0) goto label_18210bf7f;
      Photon_Pun_PhotonView__RPC(pPVar2,"ShowKillFeedWithPlayersRPC",0,pSVar6,(MethodInfo *)0x0);
    }
  }
  pUVar1 = (__this->fields).Cache;
  if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
    pPVar2 = (pUVar1->fields).PhotonView;
    pSVar6 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
    local_res8[0] = 0xffffffff;
    pIVar7 = il2cpp_value_box(g_data_184354e08,local_res8);
    if (pSVar6 != (System_Object_array *)0x0) {
      if ((pIVar7 != (Il2CppObject *)0x0) &&
         (pIVar8 = il2cpp_vm_Object_IsInst(pIVar7,(((pSVar6->obj).klass)->_1).element_class),
         pIVar8 == (Il2CppObject *)0x0)) {
        pIVar7 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar7,(MethodInfo *)0x0);
      }
      if ((int)pSVar6->max_length != 0) {
        pSVar6->m_Items[0] = pIVar7;
        Il2CppCodeGenWriteBarrier(pSVar6->m_Items,pIVar7);
        if ((name != (System_String_o *)0x0) &&
           (pIVar7 = il2cpp_vm_Object_IsInst((Il2CppObject *)name,(((pSVar6->obj).klass)->_1).element_class),
           pIVar7 == (Il2CppObject *)0x0)) {
          pIVar7 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar7,(MethodInfo *)0x0);
        }
        if (1 < (uint)pSVar6->max_length) {
          pSVar6->m_Items[1] = (Il2CppObject *)name;
          Il2CppCodeGenWriteBarrier(pSVar6->m_Items + 1,name);
          if (pPVar2 != (Photon_Pun_PhotonView_o *)0x0) {
            Photon_Pun_PhotonView__RPC(pPVar2,"NotifyDieRPC",0,pSVar6,(MethodInfo *)0x0);
            return;
          }
          goto label_18210bf9b;
        }
      }
      ThrowIndexOutOfRangeException();
    }
  }
label_18210bf9b:
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$KillFeedActorNumber
// il2cpp: int32_t Characters_BaseCharacter__KillFeedActorNumber (Characters_BaseCharacter_o* character, const MethodInfo* method);
// 0x18210c9d0

int32_t Characters_BaseCharacter__KillFeedActorNumber
                  (Characters_BaseCharacter_o *character,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  Utility_BaseComponentCache_o *pUVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_184346b2f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346b2f = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)character,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    if (character == (Characters_BaseCharacter_o *)0x0) {
label_18210ca9e:
      ThrowNullReferenceException();
    }
    if (((character->fields).AI == false) &&
       ((character->fields).Cache != (Utility_BaseComponentCache_o *)0x0)) {
      pPVar1 = (((character->fields).Cache)->fields).PhotonView;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pPVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar3) {
        pUVar2 = (character->fields).Cache;
        if ((pUVar2 == (Utility_BaseComponentCache_o *)0x0) ||
           (pPVar1 = (pUVar2->fields).PhotonView, pPVar1 == (Photon_Pun_PhotonView_o *)0x0))
        goto label_18210ca9e;
        if ((pPVar1->fields)._Owner_k__BackingField != (Photon_Realtime_Player_o *)0x0) {
          return (((pPVar1->fields)._Owner_k__BackingField)->fields).actorNumber;
        }
      }
    }
  }
  return -1;
}


// Characters.BaseCharacter$$MarkDeadRPC
// il2cpp: void Characters_BaseCharacter__MarkDeadRPC (Characters_BaseCharacter_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x18210d030

void Characters_BaseCharacter__MarkDeadRPC
               (Characters_BaseCharacter_o *__this,Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
     (pPVar2 = (pUVar1->fields).PhotonView, pPVar2 != (Photon_Pun_PhotonView_o *)0x0)) {
    if ((info->fields).Sender == (pPVar2->fields)._Owner_k__BackingField) {
      (__this->fields).Dead = true;
    }
    return;
  }
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$OnNotifyDie
// il2cpp: void Characters_BaseCharacter__OnNotifyDie (Characters_BaseCharacter_o* __this, Characters_BaseCharacter_o* killer, const MethodInfo* method);
// 0x180547020

void
Characters_BaseCharacter__OnNotifyDie(Characters_BaseCharacter_o* __this, Characters_BaseCharacter_o* killer, MethodInfo* method)

{
  return;
}


// Characters.BaseCharacter$$NotifyDieRPC
// il2cpp: void Characters_BaseCharacter__NotifyDieRPC (Characters_BaseCharacter_o* __this, int32_t viewId, System_String_o* name, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x18210d500
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18210d6a1: mov rcx, qword ptr [rip + 0x1fe1718]  ; TypeInfo_CustomLogic_CustomLogicManager

void Characters_BaseCharacter__NotifyDieRPC
               (Characters_BaseCharacter_o *__this,int32_t viewId,System_String_o *name,
               Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  CustomLogic_CustomLogicEvaluator_o *pCVar3;
  GameManagers_InGameManager_o *pGVar4;
  Photon_Realtime_Player_o *player;
  bool bVar5;
  Characters_BaseCharacter_o *pCVar6;
  
  if (Il2CppMethodInitialized_184346b30 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_184346b30 = '\x01';
  }
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
     (pPVar2 = (pUVar1->fields).PhotonView, pPVar2 == (Photon_Pun_PhotonView_o *)0x0)) goto label_18210d787;
  if ((info->fields).Sender == (pPVar2->fields)._Owner_k__BackingField) {
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    pCVar6 = Utility_Util__FindCharacterByViewId(viewId,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar5) {
      if (pCVar6 == (Characters_BaseCharacter_o *)0x0) goto label_18210d787;
      name = (pCVar6->fields).RichTextName;
    }
    (*(__this->klass->vtable)._94_OnNotifyDie.methodPtr)
              (__this,(System_Type_o *)pCVar6,(__this->klass->vtable)._94_OnNotifyDie.method);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar5) {
      if (pCVar6 == (Characters_BaseCharacter_o *)0x0) goto label_18210d787;
      bVar5 = Characters_BaseCharacter__IsMainCharacter(pCVar6,(MethodInfo *)0x0);
      if (bVar5) {
        if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
        }
        if (TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator !=
            (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
          }
          pCVar3 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
          if (pCVar3 == (CustomLogic_CustomLogicEvaluator_o *)0x0) goto label_18210d787;
          if ((pCVar3->fields).DefaultAddKillScore != false) {
            pGVar4 = (__this->fields)._inGameManager;
            if (pGVar4 == (GameManagers_InGameManager_o *)0x0) goto label_18210d787;
            GameManagers_InGameManager__RegisterMainCharacterKill(pGVar4,__this,(MethodInfo *)0x0);
          }
        }
      }
    }
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    if (TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator !=
        (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      pCVar3 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
      if (pCVar3 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        CustomLogic_CustomLogicEvaluator__OnCharacterDie(pCVar3,__this,pCVar6,name,(MethodInfo *)0x0);
        pGVar4 = (__this->fields)._inGameManager;
        if (pGVar4 != (GameManagers_InGameManager_o *)0x0) {
          pCVar6 = (pGVar4->fields).CurrentCharacter;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar5 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)pCVar6,(UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
          if (!bVar5) {
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
      }
label_18210d787:
      ThrowNullReferenceException();
    }
  }
  return;
}


// Characters.BaseCharacter$$NotifyDamagedRPC
// il2cpp: void Characters_BaseCharacter__NotifyDamagedRPC (Characters_BaseCharacter_o* __this, int32_t viewId, System_String_o* name, int32_t damage, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x18210d070
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18210d27d: mov rcx, qword ptr [rip + 0x1fe1b3c]  ; TypeInfo_CustomLogic_CustomLogicManager

void Characters_BaseCharacter__NotifyDamagedRPC
               (Characters_BaseCharacter_o *__this,int32_t viewId,System_String_o *name,int32_t damage,
               Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  float num;
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  CustomLogic_CustomLogicEvaluator_o *pCVar3;
  GameManagers_InGameManager_o *__this_00;
  Settings_UISettings_o *pSVar4;
  Settings_BoolSetting_o *pSVar5;
  bool bVar6;
  Characters_BaseCharacter_o *__this_01;
  System_String_array *values;
  System_String_o *pSVar7;
  System_String_o *pSVar8;
  int32_t local_res20 [2];
  
  local_res20[0] = damage;
  if (Il2CppMethodInitialized_184346b31 == '\0') {
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
    Il2CppMethodInitialized_184346b31 = '\x01';
  }
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
     (pPVar2 = (pUVar1->fields).PhotonView, pPVar2 == (Photon_Pun_PhotonView_o *)0x0)) goto label_18210d4ea;
  if ((info->fields).Sender == (pPVar2->fields)._Owner_k__BackingField) {
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    __this_01 = Utility_Util__FindCharacterByViewId(viewId,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar6 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar6) {
      if (__this_01 == (Characters_BaseCharacter_o *)0x0) goto label_18210d4ea;
      name = (__this_01->fields).RichTextName;
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar6 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar6) {
      if (__this_01 == (Characters_BaseCharacter_o *)0x0) goto label_18210d4ea;
      bVar6 = Characters_BaseCharacter__IsMainCharacter(__this_01,(MethodInfo *)0x0);
      if (bVar6) {
        if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
        }
        if (TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator !=
            (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
          }
          pCVar3 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
          if (pCVar3 == (CustomLogic_CustomLogicEvaluator_o *)0x0) goto label_18210d4ea;
          if ((pCVar3->fields).DefaultAddKillScore != false) {
            __this_00 = (__this->fields)._inGameManager;
            if (__this_00 == (GameManagers_InGameManager_o *)0x0) goto label_18210d4ea;
            GameManagers_InGameManager__RegisterMainCharacterDamage
                      (__this_00,__this,local_res20[0],(MethodInfo *)0x0);
          }
        }
      }
    }
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    if (TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator !=
        (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      pCVar3 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
      if (pCVar3 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        CustomLogic_CustomLogicEvaluator__OnCharacterDamaged
                  (pCVar3,__this,__this_01,name,local_res20[0],(MethodInfo *)0x0);
        pSVar4 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
        if ((pSVar4 != (Settings_UISettings_o *)0x0) &&
           (pSVar5 = (pSVar4->fields).GameFeed, pSVar5 != (Settings_BoolSetting_o *)0x0)) {
          if ((pSVar5->fields)._value == false) {
            return;
          }
          pSVar8 = " killed ";
          if (0 < (__this->fields).CurrentHealth) {
            pSVar8 = " damaged ";
          }
          values = (System_String_array *)SZArrayNew(TypeInfo_string_array,7);
          if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
          }
          pCVar3 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
          if (pCVar3 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
            num = (pCVar3->fields).CurrentTime;
            if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
            }
            pSVar7 = Utility_Util__FormatFloat(num,2,(MethodInfo *)0x0);
            pSVar7 = System_String__Concat_1969b70
                               ("(",pSVar7,") ",(MethodInfo *)0x0);
            if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
            }
            pSVar7 = GameManagers_ChatManager__GetColorString(pSVar7,3,false,(MethodInfo *)0x0);
            if (values != (System_String_array *)0x0) {
              if ((int)values->max_length != 0) {
                values->m_Items[0] = pSVar7;
                Il2CppCodeGenWriteBarrier(values->m_Items,pSVar7);
                if (1 < (uint)values->max_length) {
                  values->m_Items[1] = name;
                  Il2CppCodeGenWriteBarrier(values->m_Items + 1,name);
                  if (2 < (uint)values->max_length) {
                    values->m_Items[2] = pSVar8;
                    Il2CppCodeGenWriteBarrier(values->m_Items + 2,pSVar8);
                    if (3 < (uint)values->max_length) {
                      pSVar8 = (__this->fields).RichTextName;
                      values->m_Items[3] = pSVar8;
                      Il2CppCodeGenWriteBarrier(values->m_Items + 3,pSVar8);
                      pSVar8 = " (";
                      if (4 < (uint)values->max_length) {
                        values->m_Items[4] = " (";
                        Il2CppCodeGenWriteBarrier(values->m_Items + 4,pSVar8);
                        pSVar8 = System_Int32__ToString(local_res20,(MethodInfo *)0x0);
                        if (5 < (uint)values->max_length) {
                          values->m_Items[5] = pSVar8;
                          Il2CppCodeGenWriteBarrier(values->m_Items + 5,pSVar8);
                          pSVar8 = ")";
                          if (6 < (uint)values->max_length) {
                            values->m_Items[6] = ")";
                            Il2CppCodeGenWriteBarrier(values->m_Items + 6,pSVar8);
                            pSVar8 = System_String__Concat_1969830(values,(MethodInfo *)0x0);
                            GameManagers_ChatManager__AddFeed(pSVar8,(MethodInfo *)0x0);
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
      }
label_18210d4ea:
      ThrowNullReferenceException();
    }
  }
  return;
}


// Characters.BaseCharacter$$GetHit
// il2cpp: void Characters_BaseCharacter__GetHit (Characters_BaseCharacter_o* __this, Characters_BaseCharacter_o* enemy, int32_t damage, System_String_o* type, System_String_o* collider, const MethodInfo* method);
// 0x18210b7d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18210b93c: mov rax, qword ptr [rip + 0x1f735e5]  ; ""

void Characters_BaseCharacter__GetHit
               (Characters_BaseCharacter_o *__this,Characters_BaseCharacter_o *enemy,int32_t damage,
               System_String_o *type,System_String_o *collider,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  Photon_Realtime_Player_o *targetPlayer;
  System_String_o *value;
  bool bVar3;
  System_Object_array *parameters;
  Il2CppObject *pIVar4;
  Il2CppObject *pIVar5;
  int32_t iVar6;
  int32_t local_res10 [2];
  int32_t local_38 [4];
  
  if (Il2CppMethodInitialized_184346b32 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"GetHitRPC");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184346b32 = '\x01';
  }
  iVar6 = -1;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)enemy,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    if (((enemy == (Characters_BaseCharacter_o *)0x0) ||
        (pUVar1 = (enemy->fields).Cache, pUVar1 == (Utility_BaseComponentCache_o *)0x0)) ||
       (pPVar2 = (pUVar1->fields).PhotonView, pPVar2 == (Photon_Pun_PhotonView_o *)0x0)) {
      ThrowNullReferenceException();
    }
    iVar6 = (pPVar2->fields).viewIdField;
  }
  pUVar1 = (__this->fields).Cache;
  if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
     (pPVar2 = (pUVar1->fields).PhotonView, pPVar2 != (Photon_Pun_PhotonView_o *)0x0)) {
    targetPlayer = (pPVar2->fields)._Owner_k__BackingField;
    parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,5);
    local_res10[0] = iVar6;
    pIVar4 = il2cpp_value_box(g_data_184354e08,local_res10);
    if (parameters != (System_Object_array *)0x0) {
      if ((pIVar4 != (Il2CppObject *)0x0) &&
         (pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((parameters->obj).klass)->_1).element_class),
         pIVar5 == (Il2CppObject *)0x0)) {
        pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
      }
      if ((int)parameters->max_length != 0) {
        parameters->m_Items[0] = pIVar4;
        Il2CppCodeGenWriteBarrier(parameters->m_Items,pIVar4);
        if (("" != (System_String_o *)0x0) &&
           (pIVar4 = il2cpp_vm_Object_IsInst
                               ((Il2CppObject *)"",
                                (((parameters->obj).klass)->_1).element_class), pIVar4 == (Il2CppObject *)0x0)
           ) {
          pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
        }
        value = "";
        if (1 < (uint)parameters->max_length) {
          parameters->m_Items[1] = (Il2CppObject *)"";
          Il2CppCodeGenWriteBarrier(parameters->m_Items + 1,value);
          local_38[0] = damage;
          pIVar4 = il2cpp_value_box(g_data_184354e08,local_38);
          if ((pIVar4 != (Il2CppObject *)0x0) &&
             (pIVar5 = il2cpp_vm_Object_IsInst(pIVar4,(((parameters->obj).klass)->_1).element_class),
             pIVar5 == (Il2CppObject *)0x0)) {
            pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
          }
          if (2 < (uint)parameters->max_length) {
            parameters->m_Items[2] = pIVar4;
            Il2CppCodeGenWriteBarrier(parameters->m_Items + 2,pIVar4);
            if ((type != (System_String_o *)0x0) &&
               (pIVar4 = il2cpp_vm_Object_IsInst
                                   ((Il2CppObject *)type,(((parameters->obj).klass)->_1).element_class),
               pIVar4 == (Il2CppObject *)0x0)) {
              pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
            }
            if (3 < (uint)parameters->max_length) {
              parameters->m_Items[3] = (Il2CppObject *)type;
              Il2CppCodeGenWriteBarrier(parameters->m_Items + 3,type);
              if ((collider != (System_String_o *)0x0) &&
                 (pIVar4 = il2cpp_vm_Object_IsInst
                                     ((Il2CppObject *)collider,(((parameters->obj).klass)->_1).element_class),
                 pIVar4 == (Il2CppObject *)0x0)) {
                pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
                il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
              }
              if (4 < (uint)parameters->max_length) {
                parameters->m_Items[4] = (Il2CppObject *)collider;
                Il2CppCodeGenWriteBarrier(parameters->m_Items + 4,collider);
                Photon_Pun_PhotonView__RPC_1d4d8d0
                          (pPVar2,"GetHitRPC",targetPlayer,parameters,(MethodInfo *)0x0);
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


// Characters.BaseCharacter$$GetHit
// il2cpp: void Characters_BaseCharacter__GetHit (Characters_BaseCharacter_o* __this, System_String_o* name, int32_t damage, System_String_o* type, System_String_o* collider, const MethodInfo* method);
// 0x18210b540

void Characters_BaseCharacter__GetHit_210b540
               (Characters_BaseCharacter_o *__this,System_String_o *name,int32_t damage,System_String_o *type,
               System_String_o *collider,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *__this_00;
  Photon_Realtime_Player_o *targetPlayer;
  System_Object_array *parameters;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  undefined4 local_res8 [2];
  int32_t local_38 [4];
  
  if (Il2CppMethodInitialized_184346b33 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"GetHitRPC");
    Il2CppMethodInitialized_184346b33 = '\x01';
  }
  if ((__this->fields).Dead == false) {
    pUVar1 = (__this->fields).Cache;
    if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
       (__this_00 = (pUVar1->fields).PhotonView, __this_00 != (Photon_Pun_PhotonView_o *)0x0)) {
      targetPlayer = (__this_00->fields)._Owner_k__BackingField;
      parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,5);
      local_res8[0] = 0xffffffff;
      pIVar2 = il2cpp_value_box(g_data_184354e08,local_res8);
      if (parameters != (System_Object_array *)0x0) {
        if ((pIVar2 != (Il2CppObject *)0x0) &&
           (pIVar3 = il2cpp_vm_Object_IsInst(pIVar2,(((parameters->obj).klass)->_1).element_class),
           pIVar3 == (Il2CppObject *)0x0)) {
          pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
        }
        if ((int)parameters->max_length != 0) {
          parameters->m_Items[0] = pIVar2;
          Il2CppCodeGenWriteBarrier(parameters->m_Items,pIVar2);
          if ((name != (System_String_o *)0x0) &&
             (pIVar2 = il2cpp_vm_Object_IsInst
                                 ((Il2CppObject *)name,(((parameters->obj).klass)->_1).element_class),
             pIVar2 == (Il2CppObject *)0x0)) {
            pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
          }
          if (1 < (uint)parameters->max_length) {
            parameters->m_Items[1] = (Il2CppObject *)name;
            Il2CppCodeGenWriteBarrier(parameters->m_Items + 1,name);
            local_38[0] = damage;
            pIVar2 = il2cpp_value_box(g_data_184354e08,local_38);
            if ((pIVar2 != (Il2CppObject *)0x0) &&
               (pIVar3 = il2cpp_vm_Object_IsInst(pIVar2,(((parameters->obj).klass)->_1).element_class),
               pIVar3 == (Il2CppObject *)0x0)) {
              pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
            }
            if (2 < (uint)parameters->max_length) {
              parameters->m_Items[2] = pIVar2;
              Il2CppCodeGenWriteBarrier(parameters->m_Items + 2,pIVar2);
              if ((type != (System_String_o *)0x0) &&
                 (pIVar2 = il2cpp_vm_Object_IsInst
                                     ((Il2CppObject *)type,(((parameters->obj).klass)->_1).element_class),
                 pIVar2 == (Il2CppObject *)0x0)) {
                pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
                il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
              }
              if (3 < (uint)parameters->max_length) {
                parameters->m_Items[3] = (Il2CppObject *)type;
                Il2CppCodeGenWriteBarrier(parameters->m_Items + 3,type);
                if ((collider != (System_String_o *)0x0) &&
                   (pIVar2 = il2cpp_vm_Object_IsInst
                                       ((Il2CppObject *)collider,(((parameters->obj).klass)->_1).element_class
                                       ), pIVar2 == (Il2CppObject *)0x0)) {
                  pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
                  il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
                }
                if (4 < (uint)parameters->max_length) {
                  parameters->m_Items[4] = (Il2CppObject *)collider;
                  Il2CppCodeGenWriteBarrier(parameters->m_Items + 4,collider);
                  Photon_Pun_PhotonView__RPC_1d4d8d0
                            (__this_00,"GetHitRPC",targetPlayer,parameters,(MethodInfo *)0x0);
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
  return;
}


// Characters.BaseCharacter$$GetDamaged
// il2cpp: void Characters_BaseCharacter__GetDamaged (Characters_BaseCharacter_o* __this, System_String_o* name, int32_t damage, const MethodInfo* method);
// 0x18210ac70

void Characters_BaseCharacter__GetDamaged
               (Characters_BaseCharacter_o *__this,System_String_o *name,int32_t damage,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *__this_00;
  Photon_Realtime_Player_o *targetPlayer;
  System_Object_array *parameters;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184346b34 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"GetDamagedRPC");
    Il2CppMethodInitialized_184346b34 = '\x01';
  }
  if ((__this->fields).Dead == false) {
    pUVar1 = (__this->fields).Cache;
    if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
       (__this_00 = (pUVar1->fields).PhotonView, __this_00 != (Photon_Pun_PhotonView_o *)0x0)) {
      targetPlayer = (__this_00->fields)._Owner_k__BackingField;
      parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
      if (parameters != (System_Object_array *)0x0) {
        if ((name != (System_String_o *)0x0) &&
           (pIVar2 = il2cpp_vm_Object_IsInst
                               ((Il2CppObject *)name,(((parameters->obj).klass)->_1).element_class),
           pIVar2 == (Il2CppObject *)0x0)) {
          pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
        }
        if ((int)parameters->max_length != 0) {
          parameters->m_Items[0] = (Il2CppObject *)name;
          Il2CppCodeGenWriteBarrier(parameters->m_Items,name);
          local_res8[0] = damage;
          pIVar2 = il2cpp_value_box(g_data_184354e08,local_res8);
          if ((pIVar2 != (Il2CppObject *)0x0) &&
             (pIVar3 = il2cpp_vm_Object_IsInst(pIVar2,(((parameters->obj).klass)->_1).element_class),
             pIVar3 == (Il2CppObject *)0x0)) {
            pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
          }
          if (1 < (uint)parameters->max_length) {
            parameters->m_Items[1] = pIVar2;
            Il2CppCodeGenWriteBarrier(parameters->m_Items + 1,pIVar2);
            Photon_Pun_PhotonView__RPC_1d4d8d0
                      (__this_00,"GetDamagedRPC",targetPlayer,parameters,(MethodInfo *)0x0);
            return;
          }
        }
        ThrowIndexOutOfRangeException();
      }
    }
    ThrowNullReferenceException();
  }
  return;
}


// Characters.BaseCharacter$$GetKilled
// il2cpp: void Characters_BaseCharacter__GetKilled (Characters_BaseCharacter_o* __this, System_String_o* name, const MethodInfo* method);
// 0x18210bfb0

void Characters_BaseCharacter__GetKilled
               (Characters_BaseCharacter_o *__this,System_String_o *name,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *__this_00;
  Photon_Realtime_Player_o *targetPlayer;
  System_Object_array *parameters;
  Il2CppObject *pIVar2;
  
  if (Il2CppMethodInitialized_184346b35 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"GetKilledRPC");
    Il2CppMethodInitialized_184346b35 = '\x01';
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
      if ((name != (System_String_o *)0x0) &&
         (pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)name,(((parameters->obj).klass)->_1).element_class)
         , pIVar2 == (Il2CppObject *)0x0)) {
        pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
      }
      if ((int)parameters->max_length != 0) {
        parameters->m_Items[0] = (Il2CppObject *)name;
        Il2CppCodeGenWriteBarrier(parameters->m_Items,name);
        Photon_Pun_PhotonView__RPC_1d4d8d0
                  (__this_00,"GetKilledRPC",targetPlayer,parameters,(MethodInfo *)0x0);
        return;
      }
      ThrowIndexOutOfRangeException();
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$BlowAway
// il2cpp: void Characters_BaseCharacter__BlowAway (Characters_BaseCharacter_o* __this, UnityEngine_Vector3_o source, float force, float maxDistance, const MethodInfo* method);
// 0x182108f30

void Characters_BaseCharacter__BlowAway
               (Characters_BaseCharacter_o *__this,UnityEngine_Vector3_o *source,float force,float maxDistance
               ,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  Photon_Pun_PhotonView_o *__this_00;
  Photon_Realtime_Player_o *targetPlayer;
  System_Object_array *parameters;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  float local_res8 [2];
  float local_48 [2];
  undefined8 local_40;
  float local_38;
  
  if (Il2CppMethodInitialized_184346b36 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    il2cpp_codegen_initialize_runtime_metadata(&"BlowAwayRPC");
    Il2CppMethodInitialized_184346b36 = '\x01';
  }
  if ((__this->fields).Dead == false) {
    pUVar1 = (__this->fields).Cache;
    if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
       (__this_00 = (pUVar1->fields).PhotonView, __this_00 != (Photon_Pun_PhotonView_o *)0x0)) {
      targetPlayer = (__this_00->fields)._Owner_k__BackingField;
      parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,3);
      local_38 = (source->fields).z;
      local_40._0_4_ = (source->fields).x;
      local_40._4_4_ = (source->fields).y;
      pIVar2 = il2cpp_value_box((Il2CppClass *)TypeInfo_UnityEngine_Vector3,&local_40);
      if (parameters != (System_Object_array *)0x0) {
        if ((pIVar2 != (Il2CppObject *)0x0) &&
           (pIVar3 = il2cpp_vm_Object_IsInst(pIVar2,(((parameters->obj).klass)->_1).element_class),
           pIVar3 == (Il2CppObject *)0x0)) {
          pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
        }
        if ((int)parameters->max_length != 0) {
          parameters->m_Items[0] = pIVar2;
          Il2CppCodeGenWriteBarrier(parameters->m_Items,pIVar2);
          local_res8[0] = force;
          pIVar2 = il2cpp_value_box(g_data_184354e38,local_res8);
          if ((pIVar2 != (Il2CppObject *)0x0) &&
             (pIVar3 = il2cpp_vm_Object_IsInst(pIVar2,(((parameters->obj).klass)->_1).element_class),
             pIVar3 == (Il2CppObject *)0x0)) {
            pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
          }
          if (1 < (uint)parameters->max_length) {
            parameters->m_Items[1] = pIVar2;
            Il2CppCodeGenWriteBarrier(parameters->m_Items + 1,pIVar2);
            local_48[0] = maxDistance;
            pIVar2 = il2cpp_value_box(g_data_184354e38,local_48);
            if ((pIVar2 != (Il2CppObject *)0x0) &&
               (pIVar3 = il2cpp_vm_Object_IsInst(pIVar2,(((parameters->obj).klass)->_1).element_class),
               pIVar3 == (Il2CppObject *)0x0)) {
              pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
            }
            if (2 < (uint)parameters->max_length) {
              parameters->m_Items[2] = pIVar2;
              Il2CppCodeGenWriteBarrier(parameters->m_Items + 2,pIVar2);
              Photon_Pun_PhotonView__RPC_1d4d8d0
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
  return;
}


// Characters.BaseCharacter$$BlowAwayRPC
// il2cpp: void Characters_BaseCharacter__BlowAwayRPC (Characters_BaseCharacter_o* __this, UnityEngine_Vector3_o source, float force, float maxDistance, const MethodInfo* method);
// 0x182108c50

void Characters_BaseCharacter__BlowAwayRPC
               (Characters_BaseCharacter_o *__this,UnityEngine_Vector3_o *source,float force,float maxDistance
               ,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  Utility_BaseComponentCache_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_Rigidbody_o *pUVar9;
  UnityEngine_Vector3_StaticFields *pUVar10;
  bool bVar11;
  UnityEngine_Vector3_o *pUVar12;
  double dVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  UnityEngine_Vector3_Fields local_68 [8];
  
  if (((__this->fields).Dead != false) ||
     (bVar11 = (*(__this->klass->vtable)._74_IsMine.methodPtr)
                         (__this,(__this->klass->vtable)._74_IsMine.method), !bVar11)) {
    return;
  }
  pUVar7 = (__this->fields).Cache;
  if ((pUVar7 != (Utility_BaseComponentCache_o *)0x0) &&
     (pUVar8 = (pUVar7->fields).Transform, pUVar8 != (UnityEngine_Transform_o *)0x0)) {
    pUVar12 = UnityEngine_Transform__get_position((UnityEngine_Vector3_o *)local_68,pUVar8,(MethodInfo *)0x0);
    fVar17 = (pUVar12->fields).x;
    fVar15 = (pUVar12->fields).y;
    fVar18 = (pUVar12->fields).z;
    if (Il2CppMethodInitialized_18433dee7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_18433dee7 = '\x01';
    }
    fVar17 = fVar17 - (source->fields).x;
    fVar15 = fVar15 - (source->fields).y;
    fVar18 = fVar18 - (source->fields).z;
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    dVar13 = (double)(fVar15 * fVar15 + fVar17 * fVar17 + fVar18 * fVar18);
    if (dVar13 < 0.0) {
      dVar13 = sqrt(dVar13);
    }
    else {
      dVar13 = SQRT(dVar13);
    }
    if (maxDistance < (float)dVar13) {
      return;
    }
    pUVar7 = (__this->fields).Cache;
    if ((pUVar7 != (Utility_BaseComponentCache_o *)0x0) &&
       (pUVar8 = (pUVar7->fields).Transform, pUVar8 != (UnityEngine_Transform_o *)0x0)) {
      pUVar12 = UnityEngine_Transform__get_position
                          ((UnityEngine_Vector3_o *)local_68,pUVar8,(MethodInfo *)0x0);
      uVar1 = (source->fields).x;
      uVar4 = (source->fields).y;
      uVar2 = (pUVar12->fields).x;
      uVar5 = (pUVar12->fields).y;
      fVar17 = (pUVar12->fields).z - (source->fields).z;
      local_68[0].y = (float)uVar5 - (float)uVar4;
      local_68[0].x = (float)uVar2 - (float)uVar1;
      local_68[0].z = fVar17;
      if (Il2CppMethodInitialized_18433de5f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433de5f = '\x01';
      }
      fVar15 = (float)il2cpp_runtime_helper_180546a40(local_68,0);
      if (fVar15 <= 1e-05) {
        pUVar10 = TypeInfo_UnityEngine_Vector3->static_fields;
        fVar18 = (pUVar10->zeroVector).fields.x;
        fVar16 = (pUVar10->zeroVector).fields.y;
        fVar17 = (pUVar10->zeroVector).fields.z;
      }
      else {
        fVar18 = ((float)uVar2 - (float)uVar1) / fVar15;
        fVar16 = ((float)uVar5 - (float)uVar4) / fVar15;
        fVar17 = fVar17 / fVar15;
      }
      if (((__this->fields).Grounded != false) && (0.0 <= fVar16)) {
        pUVar7 = (__this->fields).Cache;
        if (pUVar7 == (Utility_BaseComponentCache_o *)0x0) goto label_182108f2a;
        pUVar9 = (pUVar7->fields).Rigidbody;
        if (Il2CppMethodInitialized_18433de5c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_18433de5c = '\x01';
        }
        pUVar10 = TypeInfo_UnityEngine_Vector3->static_fields;
        fVar15 = 10.0;
        if (force <= 10.0) {
          fVar15 = force;
        }
        uVar3 = (pUVar10->upVector).fields.x;
        uVar6 = (pUVar10->upVector).fields.y;
        uVar14._0_4_ = (float)uVar3 * fVar15;
        uVar14._4_4_ = (float)uVar6 * fVar15;
        if (pUVar9 == (UnityEngine_Rigidbody_o *)0x0) goto label_182108f2a;
        local_68[0].z = fVar15 * (pUVar10->upVector).fields.z;
        local_68[0]._0_8_ = uVar14;
        UnityEngine_Rigidbody__AddForce(pUVar9,(UnityEngine_Vector3_o *)local_68,2,(MethodInfo *)0x0);
      }
      pUVar7 = (__this->fields).Cache;
      if ((pUVar7 != (Utility_BaseComponentCache_o *)0x0) &&
         (pUVar9 = (pUVar7->fields).Rigidbody, pUVar9 != (UnityEngine_Rigidbody_o *)0x0)) {
        local_68[0].z = fVar17 * force;
        local_68[0].y = fVar16 * force;
        local_68[0].x = fVar18 * force;
        UnityEngine_Rigidbody__AddForce(pUVar9,(UnityEngine_Vector3_o *)local_68,2,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_182108f2a:
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$Awake
// il2cpp: void Characters_BaseCharacter__Awake (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x1821089c0

void Characters_BaseCharacter__Awake(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  byte bVar1;
  GameManagers_BaseGameManager_o *pGVar2;
  GameManagers_BaseGameManager_c *pGVar3;
  GameManagers_InGameManager_o *value;
  Utility_BaseComponentCache_o *pUVar4;
  UnityEngine_Rigidbody_o *__this_00;
  bool bVar5;
  int32_t iVar6;
  Characters_BaseMovementSync_o *value_00;
  UnityEngine_GameObject_o *pUVar7;
  Outline_o *pOVar8;
  Characters_AnimationHandler_o *__this_01;
  MethodInfo *pMVar9;
  
  if (Il2CppMethodInitialized_184346b37 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_AnimationHandler);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_BaseMovementSync);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Outline);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_184346b37 = '\x01';
  }
  pGVar2 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
  if (pGVar2 != (GameManagers_BaseGameManager_o *)0x0) {
    pGVar3 = pGVar2->klass;
    bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
    if ((bVar1 <= (pGVar3->_2).typeHierarchyDepth) &&
       ((pGVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_GameManagers_InGameManager
       )) {
      value = (GameManagers_InGameManager_o *)
              TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
      bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
      if (((value->klass->_2).typeHierarchyDepth < bVar1) ||
         ((value->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
        il2cpp_codegen_raise_invalid_cast_exception(value);
      }
      (__this->fields)._inGameManager = value;
      bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
      if (((value->klass->_2).typeHierarchyDepth < bVar1) ||
         ((value->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
        il2cpp_codegen_raise_invalid_cast_exception(value);
      }
      Il2CppCodeGenWriteBarrier(&(__this->fields)._inGameManager,value);
    }
  }
  pMVar9 = (__this->klass->vtable)._78_CreateCache.method;
  (*(__this->klass->vtable)._78_CreateCache.methodPtr)(__this,(Utility_BaseComponentCache_o *)0x0,pMVar9);
  (*(__this->klass->vtable)._103_SetColliders.methodPtr)
            (__this,(System_Type_o *)(__this->klass->vtable)._103_SetColliders.method,pMVar9);
  iVar6 = (*(__this->klass->vtable)._57_get_DefaultMaxHealth.methodPtr)
                    (__this,(__this->klass->vtable)._57_get_DefaultMaxHealth.method);
  (__this->fields).MaxHealth = iVar6;
  (__this->fields).CurrentHealth = iVar6;
  value_00 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)__this,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_BaseMovementSync);
  (__this->fields).MovementSync = value_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).MovementSync,value_00);
  pUVar7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
    pOVar8 = UnityEngine_GameObject__AddComponent_object_
                       (pUVar7,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_Outline);
    (__this->fields).OutlineComponent = pOVar8;
    Il2CppCodeGenWriteBarrier(&(__this->fields).OutlineComponent,pOVar8);
    pOVar8 = (__this->fields).OutlineComponent;
    if (pOVar8 != (Outline_o *)0x0) {
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pOVar8,false,(MethodInfo *)0x0);
      pUVar7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_AnimationHandler);
      Characters_AnimationHandler___ctor(__this_01,pUVar7,(MethodInfo *)0x0);
      (__this->fields).Animation = __this_01;
      Il2CppCodeGenWriteBarrier(&(__this->fields).Animation,__this_01);
      bVar5 = (*(__this->klass->vtable)._74_IsMine.methodPtr)
                        (__this,(__this->klass->vtable)._74_IsMine.method);
      if (!bVar5) {
        pUVar4 = (__this->fields).Cache;
        if ((pUVar4 == (Utility_BaseComponentCache_o *)0x0) ||
           (__this_00 = (pUVar4->fields).Rigidbody, __this_00 == (UnityEngine_Rigidbody_o *)0x0))
        goto label_182108c35;
        UnityEngine_Rigidbody__set_isKinematic(__this_00,true,(MethodInfo *)0x0);
        (__this->fields)._disableKinematicTimeLeft = 0.0;
      }
      return;
    }
  }
label_182108c35:
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$CreateCharacterIcon
// il2cpp: void Characters_BaseCharacter__CreateCharacterIcon (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x180547020

void
Characters_BaseCharacter__CreateCharacterIcon(Characters_BaseCharacter_o* __this, MethodInfo* method)

{
  return;
}


// Characters.BaseCharacter$$SetColliders
// il2cpp: void Characters_BaseCharacter__SetColliders (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x180547020

void
Characters_BaseCharacter__SetColliders(Characters_BaseCharacter_o* __this, MethodInfo* method)

{
  return;
}


// Characters.BaseCharacter$$Start
// il2cpp: void Characters_BaseCharacter__Start (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x18210edc0

void Characters_BaseCharacter__Start(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  bool bVar1;
  Characters_BaseCharacter__WaitAndNotifySpawn_d__149_o *routine;
  
  if (Il2CppMethodInitialized_184346b38 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MinimapHandler);
    Il2CppMethodInitialized_184346b38 = '\x01';
  }
  if ((TypeInfo_UI_MinimapHandler->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MinimapHandler);
  }
  UI_MinimapHandler__CreateMinimapIcon_225aff0(__this,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_184346b39 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseCharacter_WaitAndNotifySpawn_d__149);
    Il2CppMethodInitialized_184346b39 = '\x01';
  }
  routine = il2cpp_codegen_object_new
                      ((Il2CppClass *)TypeInfo_Characters_BaseCharacter_WaitAndNotifySpawn_d__149);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
  (routine->fields).__1__state = 0;
  (routine->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(routine->fields).__4__this,__this);
  UnityEngine_MonoBehaviour__StartCoroutine_Auto
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)routine,
             (MethodInfo *)0x0);
  bVar1 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method);
  if (bVar1) {
    (*(__this->klass->vtable)._79_CreateDetection.methodPtr)
              (__this,(__this->klass->vtable)._79_CreateDetection.method);
  }
  return;
}


// Characters.BaseCharacter$$WaitAndNotifySpawn
// il2cpp: System_Collections_IEnumerator_o* Characters_BaseCharacter__WaitAndNotifySpawn (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x18210f660

System_Collections_IEnumerator_o *
Characters_BaseCharacter__WaitAndNotifySpawn(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter__WaitAndNotifySpawn_d__149_o *__this_00;
  
  if (Il2CppMethodInitialized_184346b39 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseCharacter_WaitAndNotifySpawn_d__149);
    Il2CppMethodInitialized_184346b39 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Characters_BaseCharacter_WaitAndNotifySpawn_d__149);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Characters.BaseCharacter$$WaitAndNotifyReloaded
// il2cpp: System_Collections_IEnumerator_o* Characters_BaseCharacter__WaitAndNotifyReloaded (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x18210f5f0

System_Collections_IEnumerator_o *
Characters_BaseCharacter__WaitAndNotifyReloaded(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter__WaitAndNotifyReloaded_d__150_o *__this_00;
  
  if (Il2CppMethodInitialized_184346b3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Characters_BaseCharacter_WaitAndNotifyReloaded_d__150);
    Il2CppMethodInitialized_184346b3a = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Characters_BaseCharacter_WaitAndNotifyReloaded_d__150);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// Characters.BaseCharacter$$GetCurrentAnimation
// il2cpp: System_String_o* Characters_BaseCharacter__GetCurrentAnimation (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x18210a5f0

System_String_o *
Characters_BaseCharacter__GetCurrentAnimation(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  Characters_AnimationHandler_o *__this_00;
  System_String_o *pSVar1;
  
  __this_00 = (__this->fields).Animation;
  if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
    pSVar1 = Characters_AnimationHandler__GetCurrentAnimation(__this_00,(MethodInfo *)0x0);
    return pSVar1;
  }
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$GetTargetRotation
// il2cpp: UnityEngine_Quaternion_o Characters_BaseCharacter__GetTargetRotation (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x18210c290

UnityEngine_Quaternion_o *
Characters_BaseCharacter__GetTargetRotation
          (UnityEngine_Quaternion_o *__return_storage_ptr__,Characters_BaseCharacter_o *__this,
          MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UnityEngine_Quaternion_o *pUVar4;
  UnityEngine_Vector3_o local_28;
  UnityEngine_Quaternion_o local_18;
  
  local_28.fields.y = (__this->fields).TargetAngle * 0.017453292;
  local_28.fields.x = 0.0;
  local_28.fields.z = 0.0;
  pUVar4 = UnityEngine_Quaternion__Internal_FromEulerRad(&local_18,&local_28,(MethodInfo *)0x0);
  fVar1 = (pUVar4->fields).y;
  fVar2 = (pUVar4->fields).z;
  fVar3 = (pUVar4->fields).w;
  (__return_storage_ptr__->fields).x = (pUVar4->fields).x;
  (__return_storage_ptr__->fields).y = fVar1;
  (__return_storage_ptr__->fields).z = fVar2;
  (__return_storage_ptr__->fields).w = fVar3;
  return __return_storage_ptr__;
}


// Characters.BaseCharacter$$GetTargetDirection
// il2cpp: UnityEngine_Vector3_o Characters_BaseCharacter__GetTargetDirection (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x18210c1a0

UnityEngine_Vector3_o *
Characters_BaseCharacter__GetTargetDirection
          (UnityEngine_Vector3_o *__return_storage_ptr__,Characters_BaseCharacter_o *__this,MethodInfo *method
          )

{
  UnityEngine_Vector3_StaticFields *pUVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_48 [16];
  
  local_48[0] = 0.0;
  local_48[1] = 0.0;
  local_48[2] = 0.0;
  fVar4 = (90.0 - (__this->fields).TargetAngle) * 0.017453292;
  fVar2 = (float)il2cpp_runtime_helper_1804f54c0(fVar4);
  local_48[0] = fVar2;
  fVar4 = (float)il2cpp_runtime_helper_1804f5fc0(fVar4);
  local_48[2] = fVar4;
  if (Il2CppMethodInitialized_18433de5f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433de5f = '\x01';
  }
  fVar3 = (float)il2cpp_runtime_helper_180546a40(local_48,0);
  if (fVar3 <= 1e-05) {
    pUVar1 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar2 = (pUVar1->zeroVector).fields.x;
    fVar5 = (pUVar1->zeroVector).fields.y;
    fVar4 = (pUVar1->zeroVector).fields.z;
  }
  else {
    fVar2 = fVar2 / fVar3;
    fVar5 = 0.0 / fVar3;
    fVar4 = fVar4 / fVar3;
  }
  (__return_storage_ptr__->fields).x = fVar2;
  (__return_storage_ptr__->fields).y = fVar5;
  (__return_storage_ptr__->fields).z = fVar4;
  return __return_storage_ptr__;
}


// Characters.BaseCharacter$$GetAngleToTarget
// il2cpp: float Characters_BaseCharacter__GetAngleToTarget (Characters_BaseCharacter_o* __this, UnityEngine_Vector3_o targetDirection, const MethodInfo* method);
// 0x18210a400

float Characters_BaseCharacter__GetAngleToTarget
                (Characters_BaseCharacter_o *__this,UnityEngine_Vector3_o *targetDirection,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Utility_BaseComponentCache_o *pUVar3;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Quaternion_o *pUVar4;
  UnityEngine_Vector3_o *pUVar5;
  float fVar6;
  float fVar7;
  UnityEngine_Vector3_Fields local_58;
  UnityEngine_Quaternion_o local_48;
  UnityEngine_Quaternion_Fields local_38 [3];
  
  pUVar3 = (__this->fields).Cache;
  local_38[0].x = 0.0;
  local_38[0].y = 0.0;
  local_38[0].z = 0.0;
  local_38[0].w = 0.0;
  if ((pUVar3 != (Utility_BaseComponentCache_o *)0x0) &&
     (__this_00 = (pUVar3->fields).Transform, __this_00 != (UnityEngine_Transform_o *)0x0)) {
    pUVar4 = UnityEngine_Transform__get_rotation(&local_48,__this_00,(MethodInfo *)0x0);
    local_38[0].x = (pUVar4->fields).x;
    local_38[0].y = (pUVar4->fields).y;
    local_38[0].z = (pUVar4->fields).z;
    local_38[0].w = (pUVar4->fields).w;
    pUVar5 = UnityEngine_Quaternion__Internal_ToEulerRad
                       ((UnityEngine_Vector3_o *)&local_48,(UnityEngine_Quaternion_o *)local_38,
                        (MethodInfo *)0x0);
    uVar1 = (pUVar5->fields).x;
    uVar2 = (pUVar5->fields).y;
    local_58.y = (float)uVar2 * 57.29578;
    local_58.x = (float)uVar1 * 57.29578;
    local_58.z = (pUVar5->fields).z * 57.29578;
    pUVar5 = UnityEngine_Quaternion__Internal_MakePositive
                       ((UnityEngine_Vector3_o *)&local_48,(UnityEngine_Vector3_o *)&local_58,
                        (MethodInfo *)0x0);
    fVar7 = (pUVar5->fields).y;
    fVar6 = (float)il2cpp_runtime_helper_1804f3c50((targetDirection->fields).z);
    fVar6 = (fVar7 - 90.0) - -fVar6 * 57.29578;
    fVar7 = (float)il2cpp_runtime_helper_1804f4110(fVar6 / 360.0);
    fVar6 = fVar6 - fVar7 * 360.0;
    if (fVar6 < 0.0) {
      fVar6 = 0.0;
    }
    else if (360.0 < fVar6) {
      fVar6 = 360.0;
    }
    if (180.0 < fVar6) {
      fVar6 = fVar6 - 360.0;
    }
    return -fVar6;
  }
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$CheckGround
// il2cpp: void Characters_BaseCharacter__CheckGround (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x182109330

void Characters_BaseCharacter__CheckGround(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  Utility_BaseComponentCache_o *pUVar8;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_StaticFields *pUVar9;
  ulonglong uVar10;
  bool bVar11;
  int32_t iVar12;
  UnityEngine_Vector3_o *pUVar13;
  float fVar14;
  int32_t local_res8;
  UnityEngine_Vector3_o local_88;
  UnityEngine_Vector3_Fields local_78 [9];
  
  pUVar8 = (__this->fields).Cache;
  local_res8 = 0;
  (__this->fields).JustGrounded = false;
  if ((pUVar8 != (Utility_BaseComponentCache_o *)0x0) &&
     (__this_00 = (pUVar8->fields).Transform, __this_00 != (UnityEngine_Transform_o *)0x0)) {
    pUVar13 = UnityEngine_Transform__get_position
                        ((UnityEngine_Vector3_o *)local_78,__this_00,(MethodInfo *)0x0);
    uVar4 = (pUVar13->fields).x;
    uVar6 = (pUVar13->fields).y;
    fVar1 = (pUVar13->fields).z;
    if (Il2CppMethodInitialized_18433de5c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433de5c = '\x01';
    }
    pUVar9 = TypeInfo_UnityEngine_Vector3->static_fields;
    uVar5 = (pUVar9->upVector).fields.x;
    uVar7 = (pUVar9->upVector).fields.y;
    fVar2 = (pUVar9->upVector).fields.z;
    if (Il2CppMethodInitialized_18433de5c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433de5c = '\x01';
    }
    pUVar9 = TypeInfo_UnityEngine_Vector3->static_fields;
    uVar10._0_4_ = (pUVar9->upVector).fields.x;
    uVar10._4_4_ = (pUVar9->upVector).fields.y;
    fVar3 = (pUVar9->upVector).fields.z;
    fVar14 = (*(__this->klass->vtable)._68_get_GroundDistance.methodPtr)
                       (__this,(__this->klass->vtable)._68_get_GroundDistance.method);
    local_res8 = (*(__this->klass->vtable)._67_get_GroundMask.methodPtr)
                           (__this,(__this->klass->vtable)._67_get_GroundMask.method);
    iVar12 = UnityEngine_Touch__get_fingerId((UnityEngine_Touch_o *)&local_res8,(MethodInfo *)0x0);
    local_78[0].y = (float)uVar7 * 0.1 + (float)uVar6;
    local_78[0].x = (float)uVar5 * 0.1 + (float)uVar4;
    local_88.fields._0_8_ = uVar10 ^ 0x8000000080000000;
    local_88.fields.z = -fVar3;
    local_78[0].z = fVar2 * 0.1 + fVar1;
    bVar11 = (*(__this->klass->vtable)._108_CheckRaycastIgnoreTriggers.methodPtr)
                       (__this,(UnityEngine_Vector3_o *)local_78,&local_88,fVar14,iVar12,
                        (__this->klass->vtable)._108_CheckRaycastIgnoreTriggers.method);
    if (bVar11) {
      if ((__this->fields).Grounded == false) {
        (__this->fields).Grounded = true;
        (__this->fields).JustGrounded = true;
        return;
      }
    }
    else {
      (__this->fields).Grounded = false;
    }
    return;
  }
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$CheckRaycastIgnoreTriggers
// il2cpp: bool Characters_BaseCharacter__CheckRaycastIgnoreTriggers (Characters_BaseCharacter_o* __this, UnityEngine_Vector3_o origin, UnityEngine_Vector3_o direction, float distance, int32_t layerMask, const MethodInfo* method);
// 0x182109530

bool Characters_BaseCharacter__CheckRaycastIgnoreTriggers
               (Characters_BaseCharacter_o *__this,UnityEngine_Vector3_o *origin,
               UnityEngine_Vector3_o *direction,float distance,int32_t layerMask,MethodInfo *method)

{
  System_Nullable_RaycastHit__o *pSVar1;
  UnityEngine_Vector3_Fields local_68;
  UnityEngine_Vector3_Fields local_58;
  System_Nullable_RaycastHit__o local_48;
  
  if (Il2CppMethodInitialized_184346b3b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_RaycastHit_get_HasValue);
    Il2CppMethodInitialized_184346b3b = '\x01';
  }
  local_68.z = (direction->fields).z;
  local_68.x = (direction->fields).x;
  local_68.y = (direction->fields).y;
  local_58.z = (origin->fields).z;
  local_58.x = (origin->fields).x;
  local_58.y = (origin->fields).y;
  pSVar1 = (*(__this->klass->vtable)._109_RaycastIgnoreTriggers.methodPtr)
                     (&local_48,__this,(UnityEngine_Vector3_o *)&local_58,(UnityEngine_Vector3_o *)&local_68,
                      distance,layerMask,(__this->klass->vtable)._109_RaycastIgnoreTriggers.method);
  return (pSVar1->fields).hasValue;
}


// Characters.BaseCharacter$$RaycastIgnoreTriggers
// il2cpp: System_Nullable_RaycastHit__o Characters_BaseCharacter__RaycastIgnoreTriggers (Characters_BaseCharacter_o* __this, UnityEngine_Vector3_o origin, UnityEngine_Vector3_o direction, float distance, int32_t layerMask, const MethodInfo* method);
// 0x18210e530

System_Nullable_RaycastHit__o *
Characters_BaseCharacter__RaycastIgnoreTriggers
          (System_Nullable_RaycastHit__o *__return_storage_ptr__,Characters_BaseCharacter_o *__this,
          UnityEngine_Vector3_o *origin,UnityEngine_Vector3_o *direction,float distance,int32_t layerMask,
          MethodInfo *method)

{
  UnityEngine_RaycastHit_o *pUVar1;
  bool bVar2;
  UnityEngine_Vector3_Fields local_108;
  UnityEngine_Vector3_Fields local_f8;
  UnityEngine_RaycastHit_o local_e8;
  System_Nullable_RaycastHit__Fields local_b8;
  UnityEngine_RaycastHit_o local_88;
  float local_48;
  float fStack_44;
  uint32_t uStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  UnityEngine_EntityId_o UStack_30;
  
  if (Il2CppMethodInitialized_184346b3c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_RaycastHit_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    Il2CppMethodInitialized_184346b3c = '\x01';
  }
  local_e8.fields.m_Normal.fields.y = 0.0;
  local_e8.fields.m_Normal.fields.z = 0.0;
  local_e8.fields.m_FaceID = 0;
  local_e8.fields.m_Point.fields.x = 0.0;
  local_e8.fields.m_Point.fields.y = 0.0;
  local_e8.fields.m_Point.fields.z = 0.0;
  local_e8.fields.m_Normal.fields.x = 0.0;
  local_e8.fields.m_Distance = 0.0;
  local_e8.fields.m_UV.fields.x = 0.0;
  local_e8.fields.m_UV.fields.y = 0.0;
  local_e8.fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
  if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
  }
  local_108.x = (direction->fields).x;
  local_108.y = (direction->fields).y;
  local_108.z = (direction->fields).z;
  local_f8.z = (origin->fields).z;
  local_f8.x = (origin->fields).x;
  local_f8.y = (origin->fields).y;
  bVar2 = UnityEngine_Physics__Raycast_2fe5610
                    ((UnityEngine_Vector3_o *)&local_f8,(UnityEngine_Vector3_o *)&local_108,&local_e8,distance
                     ,layerMask,1,(MethodInfo *)0x0);
  if (bVar2) {
    local_48 = local_e8.fields.m_Normal.fields.y;
    fStack_44 = local_e8.fields.m_Normal.fields.z;
    uStack_40 = local_e8.fields.m_FaceID;
    local_88.fields.m_Point.fields.x = local_e8.fields.m_Point.fields.x;
    local_88.fields.m_Point.fields.y = local_e8.fields.m_Point.fields.y;
    local_88.fields.m_Point.fields.z = local_e8.fields.m_Point.fields.z;
    local_88.fields.m_Normal.fields.x = local_e8.fields.m_Normal.fields.x;
    local_b8.hasValue = false;
    local_b8._1_3_ = 0;
    local_b8.value.fields.m_Point.fields.x = 0.0;
    local_b8.value.fields.m_Point.fields.y = 0.0;
    local_b8.value.fields.m_Point.fields.z = 0.0;
    local_b8.value.fields.m_Normal.fields.x = 0.0;
    local_b8.value.fields.m_Normal.fields.y = 0.0;
    local_b8.value.fields.m_Normal.fields.z = 0.0;
    local_b8.value.fields.m_FaceID = 0;
    local_b8.value.fields.m_Distance = 0.0;
    local_b8.value.fields.m_UV.fields.x = 0.0;
    local_b8.value.fields.m_UV.fields.y = 0.0;
    local_b8.value.fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
    fStack_3c = local_e8.fields.m_Distance;
    fStack_38 = local_e8.fields.m_UV.fields.x;
    fStack_34 = local_e8.fields.m_UV.fields.y;
    UStack_30.fields.m_Data = local_e8.fields.m_Collider.fields.m_Data;
    local_88.fields.m_Normal.fields.y = local_e8.fields.m_Normal.fields.y;
    local_88.fields.m_Normal.fields.z = local_e8.fields.m_Normal.fields.z;
    local_88.fields.m_FaceID = local_e8.fields.m_FaceID;
    local_88.fields.m_Distance = local_e8.fields.m_Distance;
    local_88.fields.m_UV.fields.x = local_e8.fields.m_UV.fields.x;
    local_88.fields.m_UV.fields.y = local_e8.fields.m_UV.fields.y;
    local_88.fields.m_Collider.fields.m_Data = local_e8.fields.m_Collider.fields.m_Data;
    System_Nullable_RaycastHit____ctor
              ((System_Nullable_RaycastHit__o *)&local_b8,&local_88,
               (MethodInfo_AE2600 *)MethodInfo_System_Nullable_RaycastHit_ctor);
    (__return_storage_ptr__->fields).hasValue = local_b8.hasValue;
    *(undefined3 *)&(__return_storage_ptr__->fields).field_0x1 = local_b8._1_3_;
    (__return_storage_ptr__->fields).value.fields.m_Point.fields.x = local_b8.value.fields.m_Point.fields.x;
    pUVar1 = &(__return_storage_ptr__->fields).value;
    (pUVar1->fields).m_Point.fields.y = local_b8.value.fields.m_Point.fields.y;
    (pUVar1->fields).m_Point.fields.z = local_b8.value.fields.m_Point.fields.z;
    pUVar1 = &(__return_storage_ptr__->fields).value;
    (pUVar1->fields).m_Normal.fields.x = local_b8.value.fields.m_Normal.fields.x;
    (pUVar1->fields).m_Normal.fields.y = local_b8.value.fields.m_Normal.fields.y;
    *(undefined8 *)&(__return_storage_ptr__->fields).value.fields.m_Normal.fields.z =
         local_b8.value.fields._20_8_;
  }
  else {
    local_b8.value.fields.m_Distance = 0.0;
    local_b8.value.fields.m_UV.fields.x = 0.0;
    local_b8.value.fields.m_UV.fields.y = 0.0;
    local_b8.value.fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0;
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
  }
  (__return_storage_ptr__->fields).value.fields.m_Distance = local_b8.value.fields.m_Distance;
  (__return_storage_ptr__->fields).value.fields.m_UV.fields.x = local_b8.value.fields.m_UV.fields.x;
  (__return_storage_ptr__->fields).value.fields.m_UV.fields.y = local_b8.value.fields.m_UV.fields.y;
  (__return_storage_ptr__->fields).value.fields.m_Collider.fields.m_Data =
       (int32_t)local_b8.value.fields.m_Collider.fields.m_Data;
  return __return_storage_ptr__;
}


// Characters.BaseCharacter$$IsSoundLoopActive
// il2cpp: bool Characters_BaseCharacter__IsSoundLoopActive (Characters_BaseCharacter_o* __this, System_String_o* sound, const MethodInfo* method);
// 0x18210c970

bool Characters_BaseCharacter__IsSoundLoopActive
               (Characters_BaseCharacter_o *__this,System_String_o *sound,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184346b3d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    Il2CppMethodInitialized_184346b3d = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._activeSoundLoops;
  if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    bVar1 = System_Collections_Generic_HashSet_object___Contains
                      (__this_00,(Il2CppObject *)sound,
                       (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$ToggleSoundLoop
// il2cpp: void Characters_BaseCharacter__ToggleSoundLoop (Characters_BaseCharacter_o* __this, System_String_o* sound, bool toggle, const MethodInfo* method);
// 0x18210f2f0

void Characters_BaseCharacter__ToggleSoundLoop
               (Characters_BaseCharacter_o *__this,System_String_o *sound,bool toggle,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184346b3e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Remove);
    Il2CppMethodInitialized_184346b3e = '\x01';
  }
  pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._activeSoundLoops;
  if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    bVar2 = System_Collections_Generic_HashSet_object___Contains
                      (pSVar1,(Il2CppObject *)sound,
                       (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
    if (toggle != bVar2) {
      pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._activeSoundLoops;
      if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_18210f3be;
      if (toggle) {
        System_Collections_Generic_HashSet_object___Add
                  (pSVar1,(Il2CppObject *)sound,
                   (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
        Characters_BaseCharacter__PlaySound(__this,sound,(MethodInfo *)0x0);
        return;
      }
      System_Collections_Generic_HashSet_object___Remove
                (pSVar1,(Il2CppObject *)sound,
                 (MethodInfo_1766930 *)MethodInfo_System_Collections_Generic_HashSet_string_Remove);
      Characters_BaseCharacter__StopSound(__this,sound,(MethodInfo *)0x0);
    }
    return;
  }
label_18210f3be:
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$ToggleSound
// il2cpp: void Characters_BaseCharacter__ToggleSound (Characters_BaseCharacter_o* __this, System_String_o* sound, bool toggle, const MethodInfo* method);
// 0x18210f3d0

void Characters_BaseCharacter__ToggleSound
               (Characters_BaseCharacter_o *__this,System_String_o *sound,bool toggle,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar2;
  UnityEngine_AudioSource_o *pUVar3;
  
  if (Il2CppMethodInitialized_184346b3f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_get_Item);
    Il2CppMethodInitialized_184346b3f = '\x01';
  }
  pUVar1 = (__this->fields).Cache;
  if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(pUVar1->fields).AudioSources;
    if (toggle) {
      if ((__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
         (pUVar3 = System_Collections_Generic_Dictionary_object__object___get_Item
                             (__this_00,(Il2CppObject *)sound,
                              (MethodInfo_147A5B0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_get_Item),
         pUVar3 != (UnityEngine_AudioSource_o *)0x0)) {
        bVar2 = UnityEngine_AudioSource__get_isPlaying(pUVar3,(MethodInfo *)0x0);
        if (!bVar2) {
          Characters_BaseCharacter__PlaySound(__this,sound,(MethodInfo *)0x0);
        }
        return;
      }
    }
    else if ((__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
            (pUVar3 = System_Collections_Generic_Dictionary_object__object___get_Item
                                (__this_00,(Il2CppObject *)sound,
                                 (MethodInfo_147A5B0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_get_Item)
            , pUVar3 != (UnityEngine_AudioSource_o *)0x0)) {
      bVar2 = UnityEngine_AudioSource__get_isPlaying(pUVar3,(MethodInfo *)0x0);
      if (!bVar2) {
        return;
      }
      Characters_BaseCharacter__StopSound(__this,sound,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$ToggleSoundLocal
// il2cpp: void Characters_BaseCharacter__ToggleSoundLocal (Characters_BaseCharacter_o* __this, System_String_o* sound, bool toggle, const MethodInfo* method);
// 0x18210f150

void Characters_BaseCharacter__ToggleSoundLocal
               (Characters_BaseCharacter_o *__this,System_String_o *sound,bool toggle,MethodInfo *method)

{
  Utility_BaseComponentCache_o *pUVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Collections_Generic_Dictionary_string__AudioSource__o *pSVar3;
  bool bVar4;
  UnityEngine_AudioSource_o *pUVar5;
  
  if (Il2CppMethodInitialized_184346b40 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_get_Item);
    Il2CppMethodInitialized_184346b40 = '\x01';
  }
  pUVar1 = (__this->fields).Cache;
  bVar4 = false;
  if ((__this->fields).SoundsEnabled != false) {
    bVar4 = toggle;
  }
  if (pUVar1 != (Utility_BaseComponentCache_o *)0x0) {
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(pUVar1->fields).AudioSources;
    if (bVar4 == false) {
      if ((pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
         (pUVar5 = System_Collections_Generic_Dictionary_object__object___get_Item
                             (pSVar2,(Il2CppObject *)sound,
                              (MethodInfo_147A5B0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_get_Item),
         pUVar5 != (UnityEngine_AudioSource_o *)0x0)) {
        bVar4 = UnityEngine_AudioSource__get_isPlaying(pUVar5,(MethodInfo *)0x0);
        if (!bVar4) {
          return;
        }
        pUVar1 = (__this->fields).Cache;
        if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
           (pSVar3 = (pUVar1->fields).AudioSources,
           pSVar3 != (System_Collections_Generic_Dictionary_string__AudioSource__o *)0x0)) {
          bVar4 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                             (Il2CppObject *)sound,
                             (MethodInfo_1455450 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_ContainsKey);
          if (!bVar4) {
            return;
          }
          pUVar1 = (__this->fields).Cache;
          if (((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
              (pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                        (pUVar1->fields).AudioSources,
              pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) &&
             (pUVar5 = System_Collections_Generic_Dictionary_object__object___get_Item
                                 (pSVar2,(Il2CppObject *)sound,
                                  (MethodInfo_147A5B0 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_get_Item
                                 ), pUVar5 != (UnityEngine_AudioSource_o *)0x0)) {
            UnityEngine_AudioSource__Stop_2eb4660(pUVar5,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    else if ((pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
            (pUVar5 = System_Collections_Generic_Dictionary_object__object___get_Item
                                (pSVar2,(Il2CppObject *)sound,
                                 (MethodInfo_147A5B0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_get_Item)
            , pUVar5 != (UnityEngine_AudioSource_o *)0x0)) {
      bVar4 = UnityEngine_AudioSource__get_isPlaying(pUVar5,(MethodInfo *)0x0);
      if (bVar4) {
        return;
      }
      pUVar1 = (__this->fields).Cache;
      if ((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
         (pSVar3 = (pUVar1->fields).AudioSources,
         pSVar3 != (System_Collections_Generic_Dictionary_string__AudioSource__o *)0x0)) {
        bVar4 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,
                           (Il2CppObject *)sound,
                           (MethodInfo_1455450 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_ContainsKey);
        if (!bVar4) {
          return;
        }
        pUVar1 = (__this->fields).Cache;
        if (((pUVar1 != (Utility_BaseComponentCache_o *)0x0) &&
            (pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(pUVar1->fields).AudioSources
            , pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) &&
           (pUVar5 = System_Collections_Generic_Dictionary_object__object___get_Item
                               (pSVar2,(Il2CppObject *)sound,
                                (MethodInfo_147A5B0 *)
                                MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_get_Item),
           pUVar5 != (UnityEngine_AudioSource_o *)0x0)) {
          UnityEngine_AudioSource__Play_2eb4470(pUVar5,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$OnDestroy
// il2cpp: void Characters_BaseCharacter__OnDestroy (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x180547020

void
Characters_BaseCharacter__OnDestroy(Characters_BaseCharacter_o* __this, MethodInfo* method)

{
  return;
}


// Characters.BaseCharacter$$FixedUpdate
// il2cpp: void Characters_BaseCharacter__FixedUpdate (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x18210a1d0

void Characters_BaseCharacter__FixedUpdate(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  Characters_BaseMovementSync_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  UnityEngine_Rigidbody_o *__this_00;
  Characters_BaseDetection_o *pCVar3;
  Characters_BaseDetection_c *pCVar4;
  bool bVar5;
  UnityEngine_Vector3_o *pUVar6;
  float fVar7;
  float fVar8;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184346b0a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346b0a = '\x01';
  }
  bVar5 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method);
  if (!bVar5) {
    pCVar1 = (__this->fields).MovementSync;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar5) {
      pCVar1 = (__this->fields).MovementSync;
      if (pCVar1 == (Characters_BaseMovementSync_o *)0x0) goto label_18210a2eb;
      local_28[0].x = (pCVar1->fields)._correctVelocity.fields.x;
      local_28[0].y = (pCVar1->fields)._correctVelocity.fields.y;
      local_28[0].z = (pCVar1->fields)._correctVelocity.fields.z;
      goto label_18210a287;
    }
  }
  pUVar2 = (__this->fields).Cache;
  if ((pUVar2 == (Utility_BaseComponentCache_o *)0x0) ||
     (__this_00 = (pUVar2->fields).Rigidbody, __this_00 == (UnityEngine_Rigidbody_o *)0x0)) {
label_18210a2eb:
    ThrowNullReferenceException();
  }
  pUVar6 = UnityEngine_Rigidbody__get_linearVelocity
                     ((UnityEngine_Vector3_o *)local_28,__this_00,(MethodInfo *)0x0);
  local_28[0].x = (pUVar6->fields).x;
  local_28[0].y = (pUVar6->fields).y;
  local_28[0].z = (pUVar6->fields).z;
label_18210a287:
  fVar7 = (float)il2cpp_runtime_helper_180546a40(local_28,0);
  (__this->fields).CurrentSpeed = fVar7;
  if ((__this->fields).Detection != (Characters_BaseDetection_o *)0x0) {
    pCVar3 = (__this->fields).Detection;
    pCVar4 = pCVar3->klass;
    (*(pCVar4->vtable)._6_OnFixedUpdate.methodPtr)(pCVar3,(pCVar4->vtable)._6_OnFixedUpdate.method);
  }
  fVar7 = (__this->fields)._disableKinematicTimeLeft;
  fVar8 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  (__this->fields)._disableKinematicTimeLeft = fVar7 - fVar8;
  return;
}


// Characters.BaseCharacter$$LateUpdate
// il2cpp: void Characters_BaseCharacter__LateUpdate (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x18210cff0

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
// 0x18210ce20

void Characters_BaseCharacter__LateUpdateFootstep(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  Photon_Realtime_Player_o *pPVar2;
  Utility_BaseComponentCache_o *pUVar3;
  Photon_Pun_PhotonView_o *pPVar4;
  System_Collections_Generic_Dictionary_string__AudioSource__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  undefined8 uVar5;
  Photon_Realtime_Player_o *pPVar6;
  bool bVar7;
  System_Xml_Schema_XmlSchema_o *pSVar8;
  System_String_o *a;
  Photon_Pun_PhotonMessageInfo_o *pPVar9;
  UnityEngine_AudioSource_o *__this_02;
  Photon_Pun_PhotonMessageInfo_Fields local_48 [2];
  
  if (Il2CppMethodInitialized_184346b41 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_184346b41 = '\x01';
  }
  if ((__this->fields).FootstepsEnabled == false) {
    return;
  }
  pSVar8 = (*(__this->klass->vtable)._117_GetFootstepPhase.methodPtr)
                     (__this,(__this->klass->vtable)._117_GetFootstepPhase.method);
  if ((__this->fields)._stepPhase == (int)pSVar8) {
    return;
  }
  a = (*(__this->klass->vtable)._118_GetFootstepAudio.methodPtr)
                (__this,(__this->fields)._stepPhase,(__this->klass->vtable)._118_GetFootstepAudio.method);
  bVar7 = System_String__op_Inequality
                    (a,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
  if (!bVar7) {
    return;
  }
  (__this->fields)._stepPhase = (int)pSVar8;
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  pPVar9 = Utility_Util__CreateLocalPhotonInfo((Photon_Pun_PhotonMessageInfo_o *)local_48,(MethodInfo *)0x0);
  uVar5._0_4_ = (pPVar9->fields).timeInt;
  uVar5._4_4_ = *(undefined4 *)&(pPVar9->fields).field_0x4;
  pPVar6 = (pPVar9->fields).Sender;
  pPVar2 = (pPVar9->fields).Sender;
  pPVar1 = (pPVar9->fields).photonView;
  if (Il2CppMethodInitialized_184346b2a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_get_Item);
    Il2CppMethodInitialized_184346b2a = '\x01';
  }
  if (pPVar2 != (Photon_Realtime_Player_o *)0x0) {
    pUVar3 = (__this->fields).Cache;
    if ((pUVar3 == (Utility_BaseComponentCache_o *)0x0) ||
       (pPVar4 = (pUVar3->fields).PhotonView, pPVar4 == (Photon_Pun_PhotonView_o *)0x0)) goto label_18210cfe5;
    if (pPVar2 != (pPVar4->fields)._Owner_k__BackingField) goto label_18210cfa5;
  }
  pUVar3 = (__this->fields).Cache;
  if ((pUVar3 != (Utility_BaseComponentCache_o *)0x0) &&
     (__this_00 = (pUVar3->fields).AudioSources,
     __this_00 != (System_Collections_Generic_Dictionary_string__AudioSource__o *)0x0)) {
    bVar7 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,(Il2CppObject *)a,
                       (MethodInfo_1455450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_ContainsKey);
    if (bVar7) {
      pUVar3 = (__this->fields).Cache;
      if (((pUVar3 == (Utility_BaseComponentCache_o *)0x0) ||
          (__this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                       (pUVar3->fields).AudioSources,
          __this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) ||
         (__this_02 = System_Collections_Generic_Dictionary_object__object___get_Item
                                (__this_01,(Il2CppObject *)a,
                                 (MethodInfo_147A5B0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_string_AudioSource_get_Item)
         , __this_02 == (UnityEngine_AudioSource_o *)0x0)) goto label_18210cfe5;
      UnityEngine_AudioSource__Stop_2eb4660(__this_02,(MethodInfo *)0x0);
    }
label_18210cfa5:
    local_48[0]._0_8_ = uVar5;
    local_48[0].Sender = pPVar6;
    local_48[0].photonView = pPVar1;
    (*(__this->klass->vtable)._86_PlaySoundRPC.methodPtr)
              (__this,a,(Photon_Pun_PhotonMessageInfo_o *)local_48,
               (__this->klass->vtable)._86_PlaySoundRPC.method);
    return;
  }
label_18210cfe5:
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$LateUpdateFPS
// il2cpp: void Characters_BaseCharacter__LateUpdateFPS (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x18210cab0
// eh: try 0x18210cc70..0x18210cdfc -> pad 0x183317f30 (+3 call sites) catch Il2CppExceptionWrapper
// asm: 38 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18210ccb3: mov rdx, qword ptr [rip + 0x1f86d86]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_Dispose
// asm:   0x18210ccba: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x18210ccbf: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18210ccc4: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18210ccc9: test rcx, rcx
// asm:   0x18210cccc: jne 0x18210cdf0
// asm:   0x18210ccd2: mov rbx, qword ptr [rsp + 0x70]
// asm:   0x18210cd79: nop dword ptr [rax]
// asm:   0x18210cdbc: mov rdx, qword ptr [rip + 0x1f86c7d]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_Dispose
// asm:   0x18210cdc3: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x18210cdc8: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18210cdcd: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18210cdd2: test rcx, rcx
// asm:   0x18210cdd5: jne 0x18210cdfc
// asm:   0x18210cdf0: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18210cdfc: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183317f30: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317f35: push rbp
// asm:   0x183317f36: sub rsp, 0x20
// asm:   0x183317f3a: mov rbp, rdx
// asm:   0x183317f3d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183317f41: mov rcx, qword ptr [rax]
// asm:   0x183317f44: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183317f48: movabs rax, 0
// asm:   0x183317f52: add rsp, 0x20
// asm:   0x183317f56: pop rbp
// asm:   0x183317f57: ret 
// asm:   0x183317fd0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317fd5: push rbp
// asm:   0x183317fd6: sub rsp, 0x20
// asm:   0x183317fda: mov rbp, rdx
// asm:   0x183317fdd: mov rax, qword ptr [rbp + 0x28]
// asm:   0x183317fe1: mov rcx, qword ptr [rax]
// asm:   0x183317fe4: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183317fe8: movabs rax, 0
// asm:   0x183317ff2: add rsp, 0x20
// asm:   0x183317ff6: pop rbp
// asm:   0x183317ff7: ret 

void Characters_BaseCharacter__LateUpdateFPS(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  byte bVar1;
  Cameras_InGameCamera_o *__this_00;
  Characters_BaseCharacter_o *x;
  bool bVar2;
  System_Collections_Generic_List_Renderer__o *pSVar3;
  float fVar4;
  undefined1 local_38 [16];
  UnityEngine_Renderer_o *local_28;
  System_Collections_Generic_List_Enumerator_object__o local_20;
  
  if (Il2CppMethodInitialized_184346b42 == '\0') {
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
    Il2CppMethodInitialized_184346b42 = '\x01';
  }
  local_20.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_20.fields._index = 0;
  local_20.fields._version = 0;
  local_20.fields._current = (Il2CppObject *)0x0;
  bVar2 = (*(__this->klass->vtable)._74_IsMine.methodPtr)(__this,(__this->klass->vtable)._74_IsMine.method);
  if (bVar2) {
    __this_00 = (Cameras_InGameCamera_o *)
                TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
    if (__this_00 == (Cameras_InGameCamera_o *)0x0) {
label_18210ce0b:
      ThrowNullReferenceException();
    }
    bVar1 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
    if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
       ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Cameras_InGameCamera)) {
      il2cpp_codegen_raise_invalid_cast_exception(__this_00);
    }
    x = (__this_00->fields)._follow;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
    if ((bVar2) &&
       (fVar4 = Cameras_InGameCamera__GetCameraDistance(__this_00,(MethodInfo *)0x0), fVar4 == 0.0)) {
      if ((__this->fields)._cameraFPS == false) {
        (__this->fields)._cameraFPS = true;
        pSVar3 = (*(__this->klass->vtable)._119_GetFPSDisabledRenderers.methodPtr)
                           (__this,(__this->klass->vtable)._119_GetFPSDisabledRenderers.method);
        if (pSVar3 == (System_Collections_Generic_List_Renderer__o *)0x0) goto label_18210ce0b;
        System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_38,
                   (System_Collections_Generic_List_T__o *)pSVar3,
                   (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_Renderer_GetEnumerator);
        local_20.fields._list = (System_Collections_Generic_List_T__o *)local_38._0_8_;
        local_20.fields._index = local_38._8_4_;
        local_20.fields._version = local_38._12_4_;
        local_20.fields._current = (Il2CppObject *)local_28;
        local_38._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        local_38._8_8_ = &local_20;
        while (bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                 (&local_20,
                                  (MethodInfo_153A2A0 *)
                                  MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_MoveNext),
              bVar2) {
          if ((UnityEngine_Renderer_o *)local_20.fields._current == (UnityEngine_Renderer_o *)0x0) {
            ThrowNullReferenceException();
          }
          UnityEngine_Renderer__set_enabled
                    ((UnityEngine_Renderer_o *)local_20.fields._current,false,(MethodInfo *)0x0);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_20,
                   MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_Dispose);
      }
    }
    else if ((__this->fields)._cameraFPS != false) {
      (__this->fields)._cameraFPS = false;
      if ((__this->fields).Dead != false) {
        bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
        if ((bVar1 <= (__this->klass->_2).typeHierarchyDepth) &&
           ((__this->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
            (Il2CppClass *)TypeInfo_Characters_Human)) {
          return;
        }
      }
      pSVar3 = (*(__this->klass->vtable)._119_GetFPSDisabledRenderers.methodPtr)
                         (__this,(__this->klass->vtable)._119_GetFPSDisabledRenderers.method);
      if (pSVar3 == (System_Collections_Generic_List_Renderer__o *)0x0) goto label_18210ce0b;
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_38,
                 (System_Collections_Generic_List_T__o *)pSVar3,
                 (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_Renderer_GetEnumerator);
      local_20.fields._list = (System_Collections_Generic_List_T__o *)local_38._0_8_;
      local_20.fields._index = local_38._8_4_;
      local_20.fields._version = local_38._12_4_;
      local_20.fields._current = (Il2CppObject *)local_28;
      local_38._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_38._8_8_ = &local_20;
      while (bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               (&local_20,
                                (MethodInfo_153A2A0 *)
                                MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_MoveNext),
            bVar2) {
        if ((UnityEngine_Renderer_o *)local_20.fields._current == (UnityEngine_Renderer_o *)0x0) {
          ThrowNullReferenceException();
        }
        UnityEngine_Renderer__set_enabled
                  ((UnityEngine_Renderer_o *)local_20.fields._current,true,(MethodInfo *)0x0);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_20,
                 MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_Dispose);
    }
  }
  return;
}


// Characters.BaseCharacter$$GetFootstepPhase
// il2cpp: int32_t Characters_BaseCharacter__GetFootstepPhase (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x18059b2e0

int32_t
Characters_BaseCharacter__GetFootstepPhase(Characters_BaseCharacter_o* __this, MethodInfo* method)

{
  return (Unity_Collections_AllocatorManager_TryFunction_o *)0x0;
}


// Characters.BaseCharacter$$GetFootstepAudio
// il2cpp: System_String_o* Characters_BaseCharacter__GetFootstepAudio (Characters_BaseCharacter_o* __this, int32_t phase, const MethodInfo* method);
// 0x18210ae40

System_String_o *
Characters_BaseCharacter__GetFootstepAudio
          (Characters_BaseCharacter_o *__this,int32_t phase,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346b43 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184346b43 = '\x01';
  }
  return "";
}


// Characters.BaseCharacter$$GetFPSDisabledRenderers
// il2cpp: System_Collections_Generic_List_Renderer__o* Characters_BaseCharacter__GetFPSDisabledRenderers (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x18210ade0

System_Collections_Generic_List_Renderer__o *
Characters_BaseCharacter__GetFPSDisabledRenderers(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Renderer__o *__this_00;
  
  if (Il2CppMethodInitialized_184346b44 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Renderer_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Renderer);
    Il2CppMethodInitialized_184346b44 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Renderer);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Renderer_ctor);
  return __this_00;
}


// Characters.BaseCharacter$$AddRendererIfExists
// il2cpp: void Characters_BaseCharacter__AddRendererIfExists (Characters_BaseCharacter_o* __this, System_Collections_Generic_List_Renderer__o* renderers, UnityEngine_GameObject_o* go, bool multiple, const MethodInfo* method);
// 0x182108770
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182108855: mov rsi, qword ptr [rsp + 0x30]

void Characters_BaseCharacter__AddRendererIfExists
               (Characters_BaseCharacter_o *__this,System_Collections_Generic_List_Renderer__o *renderers,
               UnityEngine_GameObject_o *go,bool multiple,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Object_o *pUVar2;
  System_Object_array *pSVar3;
  uint uVar4;
  
  if (Il2CppMethodInitialized_184346b45 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Renderer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Renderer_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346b45 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)go,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (go == (UnityEngine_GameObject_o *)0x0) {
label_1821088d7:
      ThrowNullReferenceException();
    }
    if (multiple) {
      pSVar3 = UnityEngine_GameObject__GetComponentsInChildren_object__6f5810
                         (go,(MethodInfo_6F5810 *)
                             MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer);
      if (pSVar3 == (System_Object_array *)0x0) goto label_1821088d7;
      for (uVar4 = 0; (int)uVar4 < (int)pSVar3->max_length; uVar4 = uVar4 + 1) {
        if ((uint)pSVar3->max_length <= uVar4) {
          ThrowIndexOutOfRangeException();
        }
        pUVar2 = (UnityEngine_Object_o *)pSVar3->m_Items[(int)uVar4];
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar1 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar1) {
          if (renderers == (System_Collections_Generic_List_Renderer__o *)0x0) goto label_1821088d7;
          il2cpp_runtime_helper_180012890(renderers);
        }
      }
    }
    else {
      pUVar2 = (UnityEngine_Object_o *)
               UnityEngine_GameObject__GetComponentInChildren_object_
                         (go,(MethodInfo_6F5040 *)
                             MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Renderer);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        if (renderers == (System_Collections_Generic_List_Renderer__o *)0x0) goto label_1821088d7;
        il2cpp_runtime_helper_180012890(renderers,pUVar2,MethodInfo_System_Collections_Generic_List_Renderer_Add);
      }
    }
  }
  return;
}


// Characters.BaseCharacter$$GetCenterPosition
// il2cpp: UnityEngine_Vector3_o Characters_BaseCharacter__GetCenterPosition (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x18210a5a0

UnityEngine_Vector3_o *
Characters_BaseCharacter__GetCenterPosition
          (UnityEngine_Vector3_o *__return_storage_ptr__,Characters_BaseCharacter_o *__this,MethodInfo *method
          )

{
  float fVar1;
  Utility_BaseComponentCache_o *pUVar2;
  UnityEngine_Transform_o *__this_00;
  float fVar3;
  UnityEngine_Vector3_o *pUVar4;
  UnityEngine_Vector3_o local_18;
  
  pUVar2 = (__this->fields).Cache;
  if ((pUVar2 != (Utility_BaseComponentCache_o *)0x0) &&
     (__this_00 = (pUVar2->fields).Transform, __this_00 != (UnityEngine_Transform_o *)0x0)) {
    pUVar4 = UnityEngine_Transform__get_position(&local_18,__this_00,(MethodInfo *)0x0);
    fVar3 = (pUVar4->fields).y;
    fVar1 = (pUVar4->fields).z;
    (__return_storage_ptr__->fields).x = (pUVar4->fields).x;
    (__return_storage_ptr__->fields).y = fVar3;
    (__return_storage_ptr__->fields).z = fVar1;
    return __return_storage_ptr__;
  }
  ThrowNullReferenceException();
}


// Characters.BaseCharacter$$.ctor
// il2cpp: void Characters_BaseCharacter___ctor (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x18210f770

void Characters_BaseCharacter___ctor(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  UnityEngine_LayerMask_o UVar1;
  System_Collections_Generic_HashSet_string__o *__this_00;
  System_Collections_Generic_List_BaseUseable__o *__this_01;
  System_Int32_array *layers;
  System_Object_array *value;
  
  if (Il2CppMethodInitialized_184346b46 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_int_array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BaseUseable_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_BaseUseable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184346b46 = '\x01';
  }
  (__this->fields).FootstepsEnabled = true;
  (__this->fields).SoundsEnabled = true;
  (__this->fields).EffectsEnabled = true;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_00,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  (__this->fields)._activeSoundLoops = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._activeSoundLoops,__this_00);
  (__this->fields).IsVisible = true;
  (__this->fields).RichTextName = "";
  Il2CppCodeGenWriteBarrier(&(__this->fields).RichTextName,"");
  (__this->fields).VisibleName = "";
  Il2CppCodeGenWriteBarrier(&(__this->fields).VisibleName,"");
  (__this->fields).Guild = "";
  Il2CppCodeGenWriteBarrier(&(__this->fields).Guild,"");
  (__this->fields).FeedKillerName = "";
  Il2CppCodeGenWriteBarrier(&(__this->fields).FeedKillerName,"");
  (__this->fields).FeedVictimName = "";
  Il2CppCodeGenWriteBarrier(&(__this->fields).FeedVictimName,"");
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_BaseUseable);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_BaseUseable_ctor);
  (__this->fields).Items = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Items,__this_01);
  layers = (System_Int32_array *)SZArrayNew(TypeInfo_int_array,4);
  if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
  }
  if (layers != (System_Int32_array *)0x0) {
    if (((((int)layers->max_length != 0) &&
         (layers->m_Items[0] = TypeInfo_Utility_PhysicsLayer->static_fields->TitanMovebox,
         1 < (uint)layers->max_length)) &&
        (layers->m_Items[1] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectEntities,
        2 < (uint)layers->max_length)) &&
       (layers->m_Items[2] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectCharacters,
       3 < (uint)layers->max_length)) {
      layers->m_Items[3] = TypeInfo_Utility_PhysicsLayer->static_fields->MapObjectAll;
      UVar1 = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
      (__this->fields).GroundMaskLayers.fields.m_Mask = (int32_t)UVar1.fields.m_Mask;
      value = (System_Object_array *)SZArrayNew(TypeInfo_object_array,3);
      (__this->fields).crossfadeCache = value;
      Il2CppCodeGenWriteBarrier(&(__this->fields).crossfadeCache,value);
      Photon_Pun_MonoBehaviourPunCallbacks___ctor((GetParentPosition_o *)__this,(MethodInfo *)0x0);
      return;
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


