// Type: Characters.BaseCharacter
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/BaseCharacter.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/BaseCharacter.cs  [CHANGED since prior version]
// --------------------------------

// Characters.BaseCharacter.<FadeSoundOverTime>d__108$$.ctor
// il2cpp: void Characters_BaseCharacter__FadeSoundOverTime_d__108___ctor (Characters_BaseCharacter__FadeSoundOverTime_d__108_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x3f95bb0

void Characters_BaseCharacter_<FadeSoundOverTime>d__108___ctor
               (Characters_BaseCharacter__FadeSoundOverTime_d__108_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Characters.BaseCharacter.<FadeSoundOverTime>d__108$$System.IDisposable.Dispose
// il2cpp: void Characters_BaseCharacter__FadeSoundOverTime_d__108__System_IDisposable_Dispose (Characters_BaseCharacter__FadeSoundOverTime_d__108_o* __this, const MethodInfo* method);
// 0x3f99980

void Characters_BaseCharacter_<FadeSoundOverTime>d__108__System_IDisposable_Dispose
               (Characters_BaseCharacter__FadeSoundOverTime_d__108_o *__this,MethodInfo *method)

{
  return;
}


// Characters.BaseCharacter.<FadeSoundOverTime>d__108$$MoveNext
// il2cpp: bool Characters_BaseCharacter__FadeSoundOverTime_d__108__MoveNext (Characters_BaseCharacter__FadeSoundOverTime_d__108_o* __this, const MethodInfo* method);
// 0x3f99990

bool_conflict
Characters_BaseCharacter_<FadeSoundOverTime>d__108__MoveNext
          (Characters_BaseCharacter__FadeSoundOverTime_d__108_o *__this,MethodInfo *method)

{
  UnityEngine_AudioSource_o *__this_00;
  UnityEngine_WaitForSeconds_o *__this_01;
  undefined8 uVar1;
  float fVar2;
  
  if (DAT_05703ffa == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WaitForSeconds);
    DAT_05703ffa = '\x01';
  }
  if ((uint)(__this->fields).__1__state < 2) {
    (__this->fields).__1__state = -1;
    fVar2 = (__this->fields).time;
    if (0.0 <= fVar2) {
      (__this->fields).time = fVar2 + -0.1;
      __this_00 = (__this->fields).source;
      if (__this_00 != (UnityEngine_AudioSource_o *)0x0) {
        fVar2 = UnityEngine_AudioSource__get_volume(__this_00,(MethodInfo *)0x0);
        UnityEngine_AudioSource__set_volume
                  (__this_00,fVar2 + (__this->fields).volumeIncrement * 0.1,(MethodInfo *)0x0);
        __this_01 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_glue(TypeInfo_WaitForSeconds);
        UnityEngine_WaitForSeconds___ctor(__this_01,0.1,(MethodInfo *)0x0);
        (__this->fields).__2__current = (Il2CppObject *)__this_01;
        uVar1 = il2cpp_runtime_glue(&(__this->fields).__2__current,__this_01);
        (__this->fields).__1__state = 1;
        return (bool_conflict)CONCAT71((int7)((ulong)uVar1 >> 8),1);
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return 0;
}


// Characters.BaseCharacter.<FadeSoundOverTime>d__108$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Characters_BaseCharacter__FadeSoundOverTime_d__108__System_Collections_Generic_IEnumerator_System_Object__get_Current (Characters_BaseCharacter__FadeSoundOverTime_d__108_o* __this, const MethodInfo* method);
// 0x3f99a60

Il2CppObject *
Characters_BaseCharacter_<FadeSoundOverTime>d__108__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Characters_BaseCharacter__FadeSoundOverTime_d__108_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseCharacter.<FadeSoundOverTime>d__108$$System.Collections.IEnumerator.Reset
// il2cpp: void Characters_BaseCharacter__FadeSoundOverTime_d__108__System_Collections_IEnumerator_Reset (Characters_BaseCharacter__FadeSoundOverTime_d__108_o* __this, const MethodInfo* method);
// 0x3f99a70

void Characters_BaseCharacter_<FadeSoundOverTime>d__108__System_Collections_IEnumerator_Reset
               (Characters_BaseCharacter__FadeSoundOverTime_d__108_o *__this,MethodInfo *method)

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


// Characters.BaseCharacter.<FadeSoundOverTime>d__108$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Characters_BaseCharacter__FadeSoundOverTime_d__108__System_Collections_IEnumerator_get_Current (Characters_BaseCharacter__FadeSoundOverTime_d__108_o* __this, const MethodInfo* method);
// 0x3f99ab0

Il2CppObject *
Characters_BaseCharacter_<FadeSoundOverTime>d__108__System_Collections_IEnumerator_get_Current
          (Characters_BaseCharacter__FadeSoundOverTime_d__108_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseCharacter.<RevealAndRemove>d__61$$.ctor
// il2cpp: void Characters_BaseCharacter__RevealAndRemove_d__61___ctor (Characters_BaseCharacter__RevealAndRemove_d__61_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x3f93480

void Characters_BaseCharacter_<RevealAndRemove>d__61___ctor
               (Characters_BaseCharacter__RevealAndRemove_d__61_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Characters.BaseCharacter.<RevealAndRemove>d__61$$System.IDisposable.Dispose
// il2cpp: void Characters_BaseCharacter__RevealAndRemove_d__61__System_IDisposable_Dispose (Characters_BaseCharacter__RevealAndRemove_d__61_o* __this, const MethodInfo* method);
// 0x3f99ac0

void Characters_BaseCharacter_<RevealAndRemove>d__61__System_IDisposable_Dispose
               (Characters_BaseCharacter__RevealAndRemove_d__61_o *__this,MethodInfo *method)

{
  return;
}


// Characters.BaseCharacter.<RevealAndRemove>d__61$$MoveNext
// il2cpp: bool Characters_BaseCharacter__RevealAndRemove_d__61__MoveNext (Characters_BaseCharacter__RevealAndRemove_d__61_o* __this, const MethodInfo* method);
// 0x3f99ad0

bool_conflict
Characters_BaseCharacter_<RevealAndRemove>d__61__MoveNext
          (Characters_BaseCharacter__RevealAndRemove_d__61_o *__this,MethodInfo *method)

{
  float fVar1;
  int iVar2;
  Characters_BaseCharacter_o *__this_00;
  UnityEngine_Object_o *x;
  UnityEngine_Behaviour_o *__this_01;
  bool_conflict bVar3;
  UnityEngine_WaitForSeconds_o *pUVar4;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  bool_conflict bVar5;
  undefined7 uVar6;
  UnityEngine_Color_o color;
  
  if (DAT_05703ffb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WaitForSeconds);
    DAT_05703ffb = '\x01';
    in_RDX = extraout_RDX;
  }
  iVar2 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar2 == 2) {
    (__this->fields).__1__state = -1;
    if (__this_00 == (Characters_BaseCharacter_o *)0x0) {
LAB_03f99c53:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (DAT_05703fc5 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Object);
      DAT_05703fc5 = '\x01';
    }
    x = *(UnityEngine_Object_o **)&(__this_00->fields).JustGrounded;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar5 = 0;
    bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      __this_01 = *(UnityEngine_Behaviour_o **)&(__this_00->fields).JustGrounded;
      if (__this_01 == (UnityEngine_Behaviour_o *)0x0) goto LAB_03f99c53;
      bVar5 = 0;
      UnityEngine_Behaviour__set_enabled(__this_01,0,(MethodInfo *)0x0);
    }
  }
  else {
    uVar6 = (undefined7)((ulong)__this >> 8);
    if (iVar2 == 1) {
      (__this->fields).__1__state = -1;
      if (__this_00 == (Characters_BaseCharacter_o *)0x0) goto LAB_03f99c53;
      color.fields.b = 1.0;
      color.fields.a = 1.0;
      color.fields.r = 1.0;
      color.fields.g = 1.0;
      Characters_BaseCharacter__AddOutlineWithColor(__this_00,color,0,in_RDX);
      fVar1 = (__this->fields).seconds;
      pUVar4 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_glue(TypeInfo_WaitForSeconds);
      UnityEngine_WaitForSeconds___ctor(pUVar4,fVar1,(MethodInfo *)0x0);
      (__this->fields).__2__current = (Il2CppObject *)pUVar4;
      il2cpp_runtime_glue(&(__this->fields).__2__current,pUVar4);
      (__this->fields).__1__state = 2;
      bVar5 = (bool_conflict)CONCAT71(uVar6,1);
    }
    else if (iVar2 == 0) {
      (__this->fields).__1__state = -1;
      fVar1 = (__this->fields).startDelay;
      pUVar4 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_glue(TypeInfo_WaitForSeconds);
      UnityEngine_WaitForSeconds___ctor(pUVar4,fVar1,(MethodInfo *)0x0);
      (__this->fields).__2__current = (Il2CppObject *)pUVar4;
      il2cpp_runtime_glue(&(__this->fields).__2__current,pUVar4);
      (__this->fields).__1__state = 1;
      bVar5 = (bool_conflict)CONCAT71(uVar6,1);
    }
    else {
      bVar5 = 0;
    }
  }
  return bVar5;
}


// Characters.BaseCharacter.<RevealAndRemove>d__61$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Characters_BaseCharacter__RevealAndRemove_d__61__System_Collections_Generic_IEnumerator_System_Object__get_Current (Characters_BaseCharacter__RevealAndRemove_d__61_o* __this, const MethodInfo* method);
// 0x3f99c60

Il2CppObject *
Characters_BaseCharacter_<RevealAndRemove>d__61__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Characters_BaseCharacter__RevealAndRemove_d__61_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseCharacter.<RevealAndRemove>d__61$$System.Collections.IEnumerator.Reset
// il2cpp: void Characters_BaseCharacter__RevealAndRemove_d__61__System_Collections_IEnumerator_Reset (Characters_BaseCharacter__RevealAndRemove_d__61_o* __this, const MethodInfo* method);
// 0x3f99c70

void Characters_BaseCharacter_<RevealAndRemove>d__61__System_Collections_IEnumerator_Reset
               (Characters_BaseCharacter__RevealAndRemove_d__61_o *__this,MethodInfo *method)

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


// Characters.BaseCharacter.<RevealAndRemove>d__61$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Characters_BaseCharacter__RevealAndRemove_d__61__System_Collections_IEnumerator_get_Current (Characters_BaseCharacter__RevealAndRemove_d__61_o* __this, const MethodInfo* method);
// 0x3f99cb0

Il2CppObject *
Characters_BaseCharacter_<RevealAndRemove>d__61__System_Collections_IEnumerator_get_Current
          (Characters_BaseCharacter__RevealAndRemove_d__61_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseCharacter.<WaitAndDie>d__83$$.ctor
// il2cpp: void Characters_BaseCharacter__WaitAndDie_d__83___ctor (Characters_BaseCharacter__WaitAndDie_d__83_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x3f94580

void Characters_BaseCharacter_<WaitAndDie>d__83___ctor
               (Characters_BaseCharacter__WaitAndDie_d__83_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Characters.BaseCharacter.<WaitAndDie>d__83$$System.IDisposable.Dispose
// il2cpp: void Characters_BaseCharacter__WaitAndDie_d__83__System_IDisposable_Dispose (Characters_BaseCharacter__WaitAndDie_d__83_o* __this, const MethodInfo* method);
// 0x3f99cc0

void Characters_BaseCharacter_<WaitAndDie>d__83__System_IDisposable_Dispose
               (Characters_BaseCharacter__WaitAndDie_d__83_o *__this,MethodInfo *method)

{
  return;
}


// Characters.BaseCharacter.<WaitAndDie>d__83$$MoveNext
// il2cpp: bool Characters_BaseCharacter__WaitAndDie_d__83__MoveNext (Characters_BaseCharacter__WaitAndDie_d__83_o* __this, const MethodInfo* method);
// 0x3f99cd0

bool_conflict
Characters_BaseCharacter_<WaitAndDie>d__83__MoveNext
          (Characters_BaseCharacter__WaitAndDie_d__83_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *__this_00;
  UnityEngine_GameObject_o *targetGo;
  
  if (DAT_05703ffc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    DAT_05703ffc = '\x01';
  }
  if ((__this->fields).__1__state != 0) {
    return 0;
  }
  __this_00 = (__this->fields).__4__this;
  (__this->fields).__1__state = -1;
  if (__this_00 != (Characters_BaseCharacter_o *)0x0) {
    targetGo = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_init_class();
    }
    Photon_Pun_PhotonNetwork__Destroy(targetGo,(MethodInfo *)0x0);
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseCharacter.<WaitAndDie>d__83$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Characters_BaseCharacter__WaitAndDie_d__83__System_Collections_Generic_IEnumerator_System_Object__get_Current (Characters_BaseCharacter__WaitAndDie_d__83_o* __this, const MethodInfo* method);
// 0x3f99d40

Il2CppObject *
Characters_BaseCharacter_<WaitAndDie>d__83__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Characters_BaseCharacter__WaitAndDie_d__83_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseCharacter.<WaitAndDie>d__83$$System.Collections.IEnumerator.Reset
// il2cpp: void Characters_BaseCharacter__WaitAndDie_d__83__System_Collections_IEnumerator_Reset (Characters_BaseCharacter__WaitAndDie_d__83_o* __this, const MethodInfo* method);
// 0x3f99d50

void Characters_BaseCharacter_<WaitAndDie>d__83__System_Collections_IEnumerator_Reset
               (Characters_BaseCharacter__WaitAndDie_d__83_o *__this,MethodInfo *method)

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


// Characters.BaseCharacter.<WaitAndDie>d__83$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Characters_BaseCharacter__WaitAndDie_d__83__System_Collections_IEnumerator_get_Current (Characters_BaseCharacter__WaitAndDie_d__83_o* __this, const MethodInfo* method);
// 0x3f99d90

Il2CppObject *
Characters_BaseCharacter_<WaitAndDie>d__83__System_Collections_IEnumerator_get_Current
          (Characters_BaseCharacter__WaitAndDie_d__83_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseCharacter.<WaitAndNotifyReloaded>d__129$$.ctor
// il2cpp: void Characters_BaseCharacter__WaitAndNotifyReloaded_d__129___ctor (Characters_BaseCharacter__WaitAndNotifyReloaded_d__129_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x3f984f0

void Characters_BaseCharacter_<WaitAndNotifyReloaded>d__129___ctor
               (Characters_BaseCharacter__WaitAndNotifyReloaded_d__129_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Characters.BaseCharacter.<WaitAndNotifyReloaded>d__129$$System.IDisposable.Dispose
// il2cpp: void Characters_BaseCharacter__WaitAndNotifyReloaded_d__129__System_IDisposable_Dispose (Characters_BaseCharacter__WaitAndNotifyReloaded_d__129_o* __this, const MethodInfo* method);
// 0x3f99da0

void Characters_BaseCharacter_<WaitAndNotifyReloaded>d__129__System_IDisposable_Dispose
               (Characters_BaseCharacter__WaitAndNotifyReloaded_d__129_o *__this,MethodInfo *method)

{
  return;
}


// Characters.BaseCharacter.<WaitAndNotifyReloaded>d__129$$MoveNext
// il2cpp: bool Characters_BaseCharacter__WaitAndNotifyReloaded_d__129__MoveNext (Characters_BaseCharacter__WaitAndNotifyReloaded_d__129_o* __this, const MethodInfo* method);
// 0x3f99db0

bool_conflict
Characters_BaseCharacter_<WaitAndNotifyReloaded>d__129__MoveNext
          (Characters_BaseCharacter__WaitAndNotifyReloaded_d__129_o *__this,MethodInfo *method)

{
  uint uVar1;
  Characters_BaseCharacter_o *character;
  long lVar2;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  Il2CppObject *pIVar3;
  bool_conflict bVar4;
  undefined7 uVar5;
  
  if (DAT_05703ffd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_WaitForEndOfFrame);
    DAT_05703ffd = '\x01';
  }
  uVar1 = (__this->fields).__1__state;
  bVar4 = 0;
  if (uVar1 < 2) {
    (__this->fields).__1__state = -1;
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor
              ((UnityEngine_WaitForEndOfFrame_o *)pIVar3,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar3;
    il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar3);
    uVar5 = (undefined7)((ulong)pIVar3 >> 8);
    if (lVar2 == 0) {
      (__this->fields).__1__state = 1;
      bVar4 = (bool_conflict)CONCAT71(uVar5,1);
    }
    else {
      (__this->fields).__1__state = 2;
      bVar4 = (bool_conflict)CONCAT71(uVar5,1);
    }
  }
  else if (uVar1 == 2) {
    (__this->fields).__1__state = -1;
    pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor
              ((UnityEngine_WaitForEndOfFrame_o *)pIVar3,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar3;
    il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar3);
    (__this->fields).__1__state = 3;
    bVar4 = (bool_conflict)CONCAT71((int7)((ulong)pIVar3 >> 8),1);
  }
  else if (uVar1 == 3) {
    character = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_init_class();
      __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    }
    else {
      __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    }
    if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      bVar4 = 0;
    }
    else {
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_init_class();
        __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      }
      bVar4 = 0;
      CustomLogic_CustomLogicEvaluator__OnCharacterReloaded(__this_00,character,(MethodInfo *)0x0);
    }
  }
  return bVar4;
}


// Characters.BaseCharacter.<WaitAndNotifyReloaded>d__129$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Characters_BaseCharacter__WaitAndNotifyReloaded_d__129__System_Collections_Generic_IEnumerator_System_Object__get_Current (Characters_BaseCharacter__WaitAndNotifyReloaded_d__129_o* __this, const MethodInfo* method);
// 0x3f99f50

Il2CppObject *
Characters_BaseCharacter_<WaitAndNotifyReloaded>d__129__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Characters_BaseCharacter__WaitAndNotifyReloaded_d__129_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseCharacter.<WaitAndNotifyReloaded>d__129$$System.Collections.IEnumerator.Reset
// il2cpp: void Characters_BaseCharacter__WaitAndNotifyReloaded_d__129__System_Collections_IEnumerator_Reset (Characters_BaseCharacter__WaitAndNotifyReloaded_d__129_o* __this, const MethodInfo* method);
// 0x3f99f60

void Characters_BaseCharacter_<WaitAndNotifyReloaded>d__129__System_Collections_IEnumerator_Reset
               (Characters_BaseCharacter__WaitAndNotifyReloaded_d__129_o *__this,MethodInfo *method)

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


// Characters.BaseCharacter.<WaitAndNotifyReloaded>d__129$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Characters_BaseCharacter__WaitAndNotifyReloaded_d__129__System_Collections_IEnumerator_get_Current (Characters_BaseCharacter__WaitAndNotifyReloaded_d__129_o* __this, const MethodInfo* method);
// 0x3f99fa0

Il2CppObject *
Characters_BaseCharacter_<WaitAndNotifyReloaded>d__129__System_Collections_IEnumerator_get_Current
          (Characters_BaseCharacter__WaitAndNotifyReloaded_d__129_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseCharacter.<WaitAndNotifySpawn>d__128$$.ctor
// il2cpp: void Characters_BaseCharacter__WaitAndNotifySpawn_d__128___ctor (Characters_BaseCharacter__WaitAndNotifySpawn_d__128_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x3f98460

void Characters_BaseCharacter_<WaitAndNotifySpawn>d__128___ctor
               (Characters_BaseCharacter__WaitAndNotifySpawn_d__128_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Characters.BaseCharacter.<WaitAndNotifySpawn>d__128$$System.IDisposable.Dispose
// il2cpp: void Characters_BaseCharacter__WaitAndNotifySpawn_d__128__System_IDisposable_Dispose (Characters_BaseCharacter__WaitAndNotifySpawn_d__128_o* __this, const MethodInfo* method);
// 0x3f99fb0

void Characters_BaseCharacter_<WaitAndNotifySpawn>d__128__System_IDisposable_Dispose
               (Characters_BaseCharacter__WaitAndNotifySpawn_d__128_o *__this,MethodInfo *method)

{
  return;
}


// Characters.BaseCharacter.<WaitAndNotifySpawn>d__128$$MoveNext
// il2cpp: bool Characters_BaseCharacter__WaitAndNotifySpawn_d__128__MoveNext (Characters_BaseCharacter__WaitAndNotifySpawn_d__128_o* __this, const MethodInfo* method);
// 0x3f99fc0

bool_conflict
Characters_BaseCharacter_<WaitAndNotifySpawn>d__128__MoveNext
          (Characters_BaseCharacter__WaitAndNotifySpawn_d__128_o *__this,MethodInfo *method)

{
  uint uVar1;
  Characters_BaseCharacter_o *character;
  long lVar2;
  CustomLogic_CustomLogicEvaluator_o *pCVar3;
  Il2CppObject *pIVar4;
  bool_conflict bVar5;
  undefined7 uVar6;
  
  if (DAT_05703ffe == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_WaitForEndOfFrame);
    DAT_05703ffe = '\x01';
  }
  uVar1 = (__this->fields).__1__state;
  if (uVar1 < 2) {
    (__this->fields).__1__state = -1;
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor
              ((UnityEngine_WaitForEndOfFrame_o *)pIVar4,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar4;
    il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar4);
    uVar6 = (undefined7)((ulong)pIVar4 >> 8);
    if (lVar2 == 0) {
      (__this->fields).__1__state = 1;
      bVar5 = (bool_conflict)CONCAT71(uVar6,1);
    }
    else {
      (__this->fields).__1__state = 2;
      bVar5 = (bool_conflict)CONCAT71(uVar6,1);
    }
  }
  else {
    if (uVar1 == 2) {
      (__this->fields).__1__state = -1;
      pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitForEndOfFrame);
      UnityEngine_WaitForEndOfFrame___ctor
                ((UnityEngine_WaitForEndOfFrame_o *)pIVar4,(MethodInfo *)0x0);
      (__this->fields).__2__current = pIVar4;
      il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar4);
      (__this->fields).__1__state = 3;
      return (bool_conflict)CONCAT71((int7)((ulong)pIVar4 >> 8),1);
    }
    if (uVar1 != 3) {
      return 0;
    }
    character = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_init_class();
      pCVar3 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    }
    else {
      pCVar3 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    }
    if (pCVar3 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_init_class();
        pCVar3 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        if (pCVar3 == (CustomLogic_CustomLogicEvaluator_o *)0x0) goto LAB_03f9a1c2;
      }
      CustomLogic_CustomLogicEvaluator__OnCharacterSpawn(pCVar3,character,(MethodInfo *)0x0);
      if (character == (Characters_BaseCharacter_o *)0x0) {
LAB_03f9a1c2:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if ((char)(character->fields).CustomDamage == '\0') {
        if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        lVar2 = *(long *)&(character->fields).Dead;
        if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) &&
           (pCVar3 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8),
           pCVar3 != (CustomLogic_CustomLogicEvaluator_o *)0x0)) {
          CustomLogic_CustomLogicEvaluator__OnPlayerSpawn
                    (pCVar3,*(Photon_Realtime_Player_o **)(lVar2 + 0x80),character,(MethodInfo *)0x0
                    );
          return 0;
        }
        goto LAB_03f9a1c2;
      }
    }
    bVar5 = 0;
  }
  return bVar5;
}


// Characters.BaseCharacter.<WaitAndNotifySpawn>d__128$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Characters_BaseCharacter__WaitAndNotifySpawn_d__128__System_Collections_Generic_IEnumerator_System_Object__get_Current (Characters_BaseCharacter__WaitAndNotifySpawn_d__128_o* __this, const MethodInfo* method);
// 0x3f9a1d0

Il2CppObject *
Characters_BaseCharacter_<WaitAndNotifySpawn>d__128__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Characters_BaseCharacter__WaitAndNotifySpawn_d__128_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseCharacter.<WaitAndNotifySpawn>d__128$$System.Collections.IEnumerator.Reset
// il2cpp: void Characters_BaseCharacter__WaitAndNotifySpawn_d__128__System_Collections_IEnumerator_Reset (Characters_BaseCharacter__WaitAndNotifySpawn_d__128_o* __this, const MethodInfo* method);
// 0x3f9a1e0

void Characters_BaseCharacter_<WaitAndNotifySpawn>d__128__System_Collections_IEnumerator_Reset
               (Characters_BaseCharacter__WaitAndNotifySpawn_d__128_o *__this,MethodInfo *method)

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


// Characters.BaseCharacter.<WaitAndNotifySpawn>d__128$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Characters_BaseCharacter__WaitAndNotifySpawn_d__128__System_Collections_IEnumerator_get_Current (Characters_BaseCharacter__WaitAndNotifySpawn_d__128_o* __this, const MethodInfo* method);
// 0x3f9a220

Il2CppObject *
Characters_BaseCharacter_<WaitAndNotifySpawn>d__128__System_Collections_IEnumerator_get_Current
          (Characters_BaseCharacter__WaitAndNotifySpawn_d__128_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseCharacter.<WaitAndPlaySound>d__103$$.ctor
// il2cpp: void Characters_BaseCharacter__WaitAndPlaySound_d__103___ctor (Characters_BaseCharacter__WaitAndPlaySound_d__103_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x3f955c0

void Characters_BaseCharacter_<WaitAndPlaySound>d__103___ctor
               (Characters_BaseCharacter__WaitAndPlaySound_d__103_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Characters.BaseCharacter.<WaitAndPlaySound>d__103$$System.IDisposable.Dispose
// il2cpp: void Characters_BaseCharacter__WaitAndPlaySound_d__103__System_IDisposable_Dispose (Characters_BaseCharacter__WaitAndPlaySound_d__103_o* __this, const MethodInfo* method);
// 0x3f9a230

void Characters_BaseCharacter_<WaitAndPlaySound>d__103__System_IDisposable_Dispose
               (Characters_BaseCharacter__WaitAndPlaySound_d__103_o *__this,MethodInfo *method)

{
  return;
}


// Characters.BaseCharacter.<WaitAndPlaySound>d__103$$MoveNext
// il2cpp: bool Characters_BaseCharacter__WaitAndPlaySound_d__103__MoveNext (Characters_BaseCharacter__WaitAndPlaySound_d__103_o* __this, const MethodInfo* method);
// 0x3f9a240

bool_conflict
Characters_BaseCharacter_<WaitAndPlaySound>d__103__MoveNext
          (Characters_BaseCharacter__WaitAndPlaySound_d__103_o *__this,MethodInfo *method)

{
  float seconds;
  int iVar1;
  Characters_BaseCharacter_o *__this_00;
  UnityEngine_WaitForSeconds_o *__this_01;
  undefined8 uVar2;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_05703fff == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WaitForSeconds);
    DAT_05703fff = '\x01';
    in_RDX = extraout_RDX;
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    __this_00 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (__this_00 == (Characters_BaseCharacter_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    Characters_BaseCharacter__PlaySound(__this_00,(__this->fields).sound,in_RDX);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    seconds = (__this->fields).delay;
    __this_01 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_glue(TypeInfo_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(__this_01,seconds,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_01;
    uVar2 = il2cpp_runtime_glue(&(__this->fields).__2__current,__this_01);
    (__this->fields).__1__state = 1;
    return (bool_conflict)CONCAT71((int7)((ulong)uVar2 >> 8),1);
  }
  return 0;
}


// Characters.BaseCharacter.<WaitAndPlaySound>d__103$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Characters_BaseCharacter__WaitAndPlaySound_d__103__System_Collections_Generic_IEnumerator_System_Object__get_Current (Characters_BaseCharacter__WaitAndPlaySound_d__103_o* __this, const MethodInfo* method);
// 0x3f9a2f0

Il2CppObject *
Characters_BaseCharacter_<WaitAndPlaySound>d__103__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Characters_BaseCharacter__WaitAndPlaySound_d__103_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseCharacter.<WaitAndPlaySound>d__103$$System.Collections.IEnumerator.Reset
// il2cpp: void Characters_BaseCharacter__WaitAndPlaySound_d__103__System_Collections_IEnumerator_Reset (Characters_BaseCharacter__WaitAndPlaySound_d__103_o* __this, const MethodInfo* method);
// 0x3f9a300

void Characters_BaseCharacter_<WaitAndPlaySound>d__103__System_Collections_IEnumerator_Reset
               (Characters_BaseCharacter__WaitAndPlaySound_d__103_o *__this,MethodInfo *method)

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


// Characters.BaseCharacter.<WaitAndPlaySound>d__103$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Characters_BaseCharacter__WaitAndPlaySound_d__103__System_Collections_IEnumerator_get_Current (Characters_BaseCharacter__WaitAndPlaySound_d__103_o* __this, const MethodInfo* method);
// 0x3f9a340

Il2CppObject *
Characters_BaseCharacter_<WaitAndPlaySound>d__103__System_Collections_IEnumerator_get_Current
          (Characters_BaseCharacter__WaitAndPlaySound_d__103_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseCharacter$$get_DefaultMaxHealth
// il2cpp: int32_t Characters_BaseCharacter__get_DefaultMaxHealth (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x3f92c00

int32_t Characters_BaseCharacter__get_DefaultMaxHealth
                  (Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  return 1;
}


// Characters.BaseCharacter$$get_Gravity
// il2cpp: UnityEngine_Vector3_o Characters_BaseCharacter__get_Gravity (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x3f92c10

UnityEngine_Vector3_o
Characters_BaseCharacter__get_Gravity(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  UnityEngine_Vector3_o UVar2;
  
  if (DAT_0570266b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_0570266b = '\x01';
  }
  uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x24);
  UVar2.fields.x = (float)uVar1 * 20.0;
  UVar2.fields.y = (float)((ulong)uVar1 >> 0x20) * 20.0;
  UVar2.fields.z = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x2c) * 20.0;
  return (UnityEngine_Vector3_o)UVar2.fields;
}


// Characters.BaseCharacter$$get_EmoteActions
// il2cpp: System_Collections_Generic_List_string__o* Characters_BaseCharacter__get_EmoteActions (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x3f92c60

System_Collections_Generic_List_string__o *
Characters_BaseCharacter__get_EmoteActions(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  
  if (DAT_05703fbc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    DAT_05703fbc = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_System_String);
  return __this_00;
}


// Characters.BaseCharacter$$get_Name
// il2cpp: System_String_o* Characters_BaseCharacter__get_Name (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x3f92cc0

System_String_o *
Characters_BaseCharacter__get_Name(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  return *(System_String_o **)&(__this->fields)._disableKinematicTimeLeft;
}


// Characters.BaseCharacter$$set_Name
// il2cpp: void Characters_BaseCharacter__set_Name (Characters_BaseCharacter_o* __this, System_String_o* value, const MethodInfo* method);
// 0x3f92cd0

void Characters_BaseCharacter__set_Name
               (Characters_BaseCharacter_o *__this,System_String_o *value,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_RDX;
  
  if (DAT_05703fbd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    DAT_05703fbd = '\x01';
    method = extraout_RDX;
  }
  *(System_String_o **)&(__this->fields)._disableKinematicTimeLeft = value;
  il2cpp_runtime_glue(&(__this->fields)._disableKinematicTimeLeft,value,method);
  pSVar1 = *(System_String_o **)&(__this->fields)._disableKinematicTimeLeft;
  if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = MiscExtensions__StripColor(pSVar1,(MethodInfo *)0x0);
  (__this->fields).RichTextName = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).RichTextName,pSVar1);
  return;
}


// Characters.BaseCharacter$$get_GroundMask
// il2cpp: UnityEngine_LayerMask_o Characters_BaseCharacter__get_GroundMask (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x3f92d50

UnityEngine_LayerMask_o
Characters_BaseCharacter__get_GroundMask(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  return (UnityEngine_LayerMask_Fields)(UnityEngine_LayerMask_Fields)(__this->fields).Grounded;
}


// Characters.BaseCharacter$$get_GroundDistance
// il2cpp: float Characters_BaseCharacter__get_GroundDistance (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x3f92d60

float Characters_BaseCharacter__get_GroundDistance
                (Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  return 0.3;
}


// Characters.BaseCharacter$$add_OnPlayerPropertiesChanged
// il2cpp: void Characters_BaseCharacter__add_OnPlayerPropertiesChanged (Characters_BaseCharacter_o* __this, System_Action_Hashtable__o* value, const MethodInfo* method);
// 0x3f92d70

void Characters_BaseCharacter__add_OnPlayerPropertiesChanged
               (Characters_BaseCharacter_o *__this,System_Action_Hashtable__o *value,
               MethodInfo *method)

{
  undefined8 uVar1;
  System_Delegate_o *pSVar2;
  long lVar3;
  System_Delegate_o *a;
  bool bVar4;
  
  if (DAT_05703fbe == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_Hashtable);
    DAT_05703fbe = '\x01';
  }
  a = *(System_Delegate_o **)&(__this->fields).HasDirection;
  do {
    pSVar2 = System_Delegate__Combine(a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    uVar1 = TypeInfo_Action_Hashtable;
    lVar3 = 0;
    if (pSVar2 != (System_Delegate_o *)0x0) {
      lVar3 = il2cpp_runtime_glue(pSVar2,TypeInfo_Action_Hashtable);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pSVar2,uVar1);
      }
    }
    pSVar2 = (System_Delegate_o *)il2cpp_glue_022c2530(&(__this->fields).HasDirection,lVar3,a);
    bVar4 = a != pSVar2;
    a = pSVar2;
  } while (bVar4);
  return;
}


// Characters.BaseCharacter$$remove_OnPlayerPropertiesChanged
// il2cpp: void Characters_BaseCharacter__remove_OnPlayerPropertiesChanged (Characters_BaseCharacter_o* __this, System_Action_Hashtable__o* value, const MethodInfo* method);
// 0x3f92e20

void Characters_BaseCharacter__remove_OnPlayerPropertiesChanged
               (Characters_BaseCharacter_o *__this,System_Action_Hashtable__o *value,
               MethodInfo *method)

{
  undefined8 uVar1;
  System_Delegate_o *pSVar2;
  long lVar3;
  System_Delegate_o *source;
  bool bVar4;
  
  if (DAT_05703fbf == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_Hashtable);
    DAT_05703fbf = '\x01';
  }
  source = *(System_Delegate_o **)&(__this->fields).HasDirection;
  do {
    pSVar2 = System_Delegate__Remove(source,(System_Delegate_o *)value,(MethodInfo *)0x0);
    uVar1 = TypeInfo_Action_Hashtable;
    lVar3 = 0;
    if (pSVar2 != (System_Delegate_o *)0x0) {
      lVar3 = il2cpp_runtime_glue(pSVar2,TypeInfo_Action_Hashtable);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pSVar2,uVar1);
      }
    }
    pSVar2 = (System_Delegate_o *)il2cpp_glue_022c2530(&(__this->fields).HasDirection,lVar3,source);
    bVar4 = source != pSVar2;
    source = pSVar2;
  } while (bVar4);
  return;
}


// Characters.BaseCharacter$$OnPlayerPropertiesUpdate
// il2cpp: void Characters_BaseCharacter__OnPlayerPropertiesUpdate (Characters_BaseCharacter_o* __this, Photon_Realtime_Player_o* targetPlayer, ExitGames_Client_Photon_Hashtable_o* changedProps, const MethodInfo* method);
// 0x3f92ed0

void Characters_BaseCharacter__OnPlayerPropertiesUpdate
               (Characters_BaseCharacter_o *__this,Photon_Realtime_Player_o *targetPlayer,
               ExitGames_Client_Photon_Hashtable_o *changedProps,MethodInfo *method)

{
  long lVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  
  pPVar2 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar2 == (Photon_Pun_PhotonView_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (((pPVar2->fields)._Owner_k__BackingField == targetPlayer) &&
     (lVar1 = *(long *)&(__this->fields).HasDirection, lVar1 != 0)) {
    (**(code **)(lVar1 + 0x18))
              (*(undefined8 *)(lVar1 + 0x40),changedProps,*(undefined8 *)(lVar1 + 0x28),
               *(code **)(lVar1 + 0x18));
    return;
  }
  return;
}


// Characters.BaseCharacter$$SetKinematic
// il2cpp: void Characters_BaseCharacter__SetKinematic (Characters_BaseCharacter_o* __this, bool kinematic, float forTime, const MethodInfo* method);
// 0x3f92f20

void Characters_BaseCharacter__SetKinematic
               (Characters_BaseCharacter_o *__this,bool_conflict kinematic,float forTime,
               MethodInfo *method)

{
  long lVar1;
  UnityEngine_Rigidbody_o *__this_00;
  
  lVar1 = *(long *)&(__this->fields).Dead;
  if (lVar1 != 0) {
    __this_00 = *(UnityEngine_Rigidbody_o **)(lVar1 + 0x18);
    if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
      UnityEngine_Rigidbody__set_isKinematic(__this_00,kinematic & 0xff,(MethodInfo *)0x0);
      (__this->fields).MaxSoundDistance = forTime;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseCharacter$$GetVelocity
// il2cpp: UnityEngine_Vector3_o Characters_BaseCharacter__GetVelocity (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x3f92f70

UnityEngine_Vector3_o
Characters_BaseCharacter__GetVelocity(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  GameManagers_InGameManager_o *pGVar1;
  bool_conflict bVar2;
  long lVar3;
  UnityEngine_Vector3_Fields UVar4;
  
  if (DAT_05703fc0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05703fc0 = '\x01';
  }
  lVar3 = *(long *)&(__this->fields).Dead;
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x20) == 0)) goto LAB_03f93019;
  if (*(char *)(*(long *)(lVar3 + 0x20) + 0x68) == '\0') {
    pGVar1 = (__this->fields)._inGameManager;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pGVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pGVar1 = (__this->fields)._inGameManager;
      if (pGVar1 != (GameManagers_InGameManager_o *)0x0) {
        return (UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)&(pGVar1->fields).Titans;
      }
      goto LAB_03f93019;
    }
    lVar3._0_4_ = (__this->fields).Dead;
    lVar3._4_4_ = (__this->fields).CustomDamageEnabled;
    if (lVar3 == 0) goto LAB_03f93019;
  }
  if (*(UnityEngine_Rigidbody_o **)(lVar3 + 0x18) != (UnityEngine_Rigidbody_o *)0x0) {
    UVar4 = (UnityEngine_Vector3_Fields)
            UnityEngine_Rigidbody__get_velocity
                      (*(UnityEngine_Rigidbody_o **)(lVar3 + 0x18),(MethodInfo *)0x0);
    return (UnityEngine_Vector3_o)UVar4;
  }
LAB_03f93019:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseCharacter$$Reveal
// il2cpp: void Characters_BaseCharacter__Reveal (Characters_BaseCharacter_o* __this, float startDelay, float activeTime, const MethodInfo* method);
// 0x3f93040

void Characters_BaseCharacter__Reveal
               (Characters_BaseCharacter_o *__this,float startDelay,float activeTime,
               MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_05703fc6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_RevealAndRemove_d__61);
    DAT_05703fc6 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_RevealAndRemove_d__61);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].monitor = __this;
    il2cpp_runtime_glue(&__this_00[2].monitor,__this);
    *(float *)&__this_00[2].klass = startDelay;
    *(float *)&__this_00[3].klass = activeTime;
    UnityEngine_MonoBehaviour__StartCoroutine
              ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseCharacter$$AddOutline
// il2cpp: void Characters_BaseCharacter__AddOutline (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x3f93170

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
// 0x3f93250

void Characters_BaseCharacter__AddVisibleOutlineWithColor
               (Characters_BaseCharacter_o *__this,UnityEngine_Color_o color,MethodInfo *method)

{
  MethodInfo *in_RDX;
  
  Characters_BaseCharacter__AddOutlineWithColor(__this,color,1,in_RDX);
  return;
}


// Characters.BaseCharacter$$AddOutlineWithColor
// il2cpp: void Characters_BaseCharacter__AddOutlineWithColor (Characters_BaseCharacter_o* __this, UnityEngine_Color_o color, int32_t mode, const MethodInfo* method);
// 0x3f93180

void Characters_BaseCharacter__AddOutlineWithColor
               (Characters_BaseCharacter_o *__this,UnityEngine_Color_o color,int32_t mode,
               MethodInfo *method)

{
  UnityEngine_Object_o *x;
  Outline_o *pOVar1;
  UnityEngine_Behaviour_o *__this_00;
  bool_conflict bVar2;
  
  if (DAT_05703fc1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05703fc1 = '\x01';
  }
  x = *(UnityEngine_Object_o **)&(__this->fields).JustGrounded;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pOVar1 = *(Outline_o **)&(__this->fields).JustGrounded;
    if (pOVar1 != (Outline_o *)0x0) {
      Outline__set_OutlineMode(pOVar1,mode,(MethodInfo *)0x0);
      pOVar1 = *(Outline_o **)&(__this->fields).JustGrounded;
      if (pOVar1 != (Outline_o *)0x0) {
        Outline__set_OutlineColor(pOVar1,color,(MethodInfo *)0x0);
        __this_00 = *(UnityEngine_Behaviour_o **)&(__this->fields).JustGrounded;
        if (__this_00 != (UnityEngine_Behaviour_o *)0x0) {
          UnityEngine_Behaviour__set_enabled(__this_00,1,(MethodInfo *)0x0);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// Characters.BaseCharacter$$ChangeOutlineColor
// il2cpp: void Characters_BaseCharacter__ChangeOutlineColor (Characters_BaseCharacter_o* __this, UnityEngine_Color_o color, const MethodInfo* method);
// 0x3f93260

void Characters_BaseCharacter__ChangeOutlineColor
               (Characters_BaseCharacter_o *__this,UnityEngine_Color_o color,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  Outline_o *__this_00;
  bool_conflict bVar1;
  
  if (DAT_05703fc2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05703fc2 = '\x01';
  }
  x = *(UnityEngine_Object_o **)&(__this->fields).JustGrounded;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    __this_00 = *(Outline_o **)&(__this->fields).JustGrounded;
    if (__this_00 != (Outline_o *)0x0) {
      Outline__set_OutlineColor(__this_00,color,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// Characters.BaseCharacter$$ChangeOutlineMode
// il2cpp: void Characters_BaseCharacter__ChangeOutlineMode (Characters_BaseCharacter_o* __this, int32_t mode, const MethodInfo* method);
// 0x3f932f0

void Characters_BaseCharacter__ChangeOutlineMode
               (Characters_BaseCharacter_o *__this,int32_t mode,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  Outline_o *__this_00;
  bool_conflict bVar1;
  
  if (DAT_05703fc3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05703fc3 = '\x01';
  }
  x = *(UnityEngine_Object_o **)&(__this->fields).JustGrounded;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    __this_00 = *(Outline_o **)&(__this->fields).JustGrounded;
    if (__this_00 != (Outline_o *)0x0) {
      Outline__set_OutlineMode(__this_00,mode,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// Characters.BaseCharacter$$ChangeOutlineWidth
// il2cpp: void Characters_BaseCharacter__ChangeOutlineWidth (Characters_BaseCharacter_o* __this, float width, const MethodInfo* method);
// 0x3f93370

void Characters_BaseCharacter__ChangeOutlineWidth
               (Characters_BaseCharacter_o *__this,float width,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  Outline_o *__this_00;
  bool_conflict bVar1;
  
  if (DAT_05703fc4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05703fc4 = '\x01';
  }
  x = *(UnityEngine_Object_o **)&(__this->fields).JustGrounded;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    __this_00 = *(Outline_o **)&(__this->fields).JustGrounded;
    if (__this_00 != (Outline_o *)0x0) {
      Outline__set_OutlineWidth(__this_00,width,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// Characters.BaseCharacter$$RemoveOutline
// il2cpp: void Characters_BaseCharacter__RemoveOutline (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x3f93400

void Characters_BaseCharacter__RemoveOutline(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_Behaviour_o *__this_00;
  bool_conflict bVar1;
  
  if (DAT_05703fc5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05703fc5 = '\x01';
  }
  x = *(UnityEngine_Object_o **)&(__this->fields).JustGrounded;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    __this_00 = *(UnityEngine_Behaviour_o **)&(__this->fields).JustGrounded;
    if (__this_00 != (UnityEngine_Behaviour_o *)0x0) {
      UnityEngine_Behaviour__set_enabled(__this_00,0,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// Characters.BaseCharacter$$RevealAndRemove
// il2cpp: System_Collections_IEnumerator_o* Characters_BaseCharacter__RevealAndRemove (Characters_BaseCharacter_o* __this, float startDelay, float seconds, const MethodInfo* method);
// 0x3f930e0

System_Collections_IEnumerator_o *
Characters_BaseCharacter__RevealAndRemove
          (Characters_BaseCharacter_o *__this,float startDelay,float seconds,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_05703fc6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_RevealAndRemove_d__61);
    DAT_05703fc6 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_RevealAndRemove_d__61);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].monitor = __this;
    il2cpp_runtime_glue(&__this_00[2].monitor,__this);
    *(float *)&__this_00[2].klass = startDelay;
    *(float *)&__this_00[3].klass = seconds;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseCharacter$$GetTeam
// il2cpp: System_String_o* Characters_BaseCharacter__GetTeam (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x3f934a0

System_String_o *
Characters_BaseCharacter__GetTeam(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  return *(System_String_o **)&(__this->fields).AI;
}


// Characters.BaseCharacter$$GetPosition
// il2cpp: UnityEngine_Vector3_o Characters_BaseCharacter__GetPosition (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x3f934b0

UnityEngine_Vector3_o
Characters_BaseCharacter__GetPosition(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  long lVar1;
  UnityEngine_Object_o *x;
  UnityEngine_Transform_o *__this_00;
  bool_conflict bVar2;
  UnityEngine_Vector3_Fields UVar3;
  
  if (DAT_05703fc7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05703fc7 = '\x01';
  }
  lVar1 = *(long *)&(__this->fields).Dead;
  if (lVar1 != 0) {
    x = *(UnityEngine_Object_o **)(lVar1 + 0x10);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      lVar1 = *(long *)&(__this->fields).Dead;
      if ((lVar1 != 0) &&
         (__this_00 = *(UnityEngine_Transform_o **)(lVar1 + 0x10),
         __this_00 != (UnityEngine_Transform_o *)0x0)) {
        UVar3 = (UnityEngine_Vector3_Fields)
                UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
        return (UnityEngine_Vector3_o)UVar3;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  if (DAT_056fdd15 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fdd15 = '\x01';
  }
  return (UnityEngine_Vector3_o)**(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8);
}


// Characters.BaseCharacter$$ValidTarget
// il2cpp: bool Characters_BaseCharacter__ValidTarget (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x3f93570

bool_conflict
Characters_BaseCharacter__ValidTarget(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  uint uVar2;
  
  if (DAT_05703fc8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05703fc8 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar2 = 0;
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    uVar2 = (uint)(*(char *)&(__this->fields).FeedVictimName == '\0');
  }
  return uVar2;
}


// Characters.BaseCharacter$$IsMine
// il2cpp: bool Characters_BaseCharacter__IsMine (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x3f93020

bool_conflict
Characters_BaseCharacter__IsMine(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  long lVar1;
  
  lVar1 = *(long *)&(__this->fields).Dead;
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x20), lVar1 != 0)) {
    return (bool_conflict)CONCAT71((int7)((ulong)lVar1 >> 8),*(undefined1 *)(lVar1 + 0x68));
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseCharacter$$IsMainCharacter
// il2cpp: bool Characters_BaseCharacter__IsMainCharacter (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x3f935d0

bool_conflict
Characters_BaseCharacter__IsMainCharacter(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_Fields x;
  bool_conflict bVar2;
  
  if (DAT_05703fc9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05703fc9 = '\x01';
  }
  pSVar1 = (__this->fields).Team;
  if (pSVar1 != (System_String_o *)0x0) {
    x = pSVar1[4].fields;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseCharacter$$Init
// il2cpp: void Characters_BaseCharacter__Init (Characters_BaseCharacter_o* __this, bool ai, System_String_o* team, const MethodInfo* method);
// 0x3f93640

void Characters_BaseCharacter__Init
               (Characters_BaseCharacter_o *__this,bool_conflict ai,System_String_o *team,
               MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this_00;
  char cVar1;
  undefined8 in_RAX;
  Photon_Realtime_Player_o *pPVar2;
  System_String_o *pSVar3;
  System_Object_array *parameters;
  Il2CppObject *pIVar4;
  long lVar5;
  undefined8 uVar6;
  MethodInfo *method_00;
  undefined8 uStack_38;
  
  cVar1 = (char)ai;
  uStack_38 = in_RAX;
  if (DAT_05703fca == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    il2cpp_init_method_metadata(&"InitRPC");
    il2cpp_init_method_metadata(&"");
    DAT_05703fca = '\x01';
    *(char *)&(__this->fields).CustomDamage = cVar1;
    *(undefined1 *)&(__this->fields).VisibleName = 0;
    if (cVar1 == '\0') goto LAB_03f936dc;
LAB_03f9366b:
    lVar5._0_4_ = (__this->fields).Dead;
    lVar5._4_4_ = (__this->fields).CustomDamageEnabled;
  }
  else {
    *(char *)&(__this->fields).CustomDamage = cVar1;
    *(undefined1 *)&(__this->fields).VisibleName = 0;
    if (cVar1 != '\0') goto LAB_03f9366b;
LAB_03f936dc:
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pPVar2 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar3 = PhotonExtensions__GetStringProperty
                       (pPVar2,(System_String_o *)**(undefined8 **)(TypeInfo_PlayerProperty + 0xb8),
                        "",(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar3 = MiscExtensions__StripIllegalRichText(pSVar3,(MethodInfo *)0x0);
    if (DAT_05703fbd == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
      DAT_05703fbd = '\x01';
    }
    *(System_String_o **)&(__this->fields)._disableKinematicTimeLeft = pSVar3;
    il2cpp_runtime_glue(&(__this->fields)._disableKinematicTimeLeft);
    pSVar3 = *(System_String_o **)&(__this->fields)._disableKinematicTimeLeft;
    if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar3 = MiscExtensions__StripColor(pSVar3,(MethodInfo *)0x0);
    (__this->fields).RichTextName = pSVar3;
    il2cpp_runtime_glue(&(__this->fields).RichTextName,pSVar3);
    pPVar2 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    pSVar3 = PhotonExtensions__GetStringProperty
                       (pPVar2,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 8),
                        "",(MethodInfo *)0x0);
    pSVar3 = MiscExtensions__StripIllegalRichText(pSVar3,(MethodInfo *)0x0);
    *(System_String_o **)&(__this->fields).HasExplicitNameTag = pSVar3;
    il2cpp_runtime_glue(&(__this->fields).HasExplicitNameTag,pSVar3);
    lVar5._0_4_ = (__this->fields).Dead;
    lVar5._4_4_ = (__this->fields).CustomDamageEnabled;
  }
  if (lVar5 != 0) {
    __this_00 = *(Photon_Pun_PhotonView_o **)(lVar5 + 0x20);
    parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,3);
    uStack_38 = CONCAT17((char)(__this->fields).CustomDamage,(undefined7)uStack_38);
    pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_38 + 7);
    if (parameters != (System_Object_array *)0x0) {
      if ((pIVar4 != (Il2CppObject *)0x0) &&
         (lVar5 = il2cpp_runtime_glue(pIVar4,(((parameters->obj).klass)->_1).element_class),
         lVar5 == 0)) {
LAB_03f93944:
        uVar6 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar6,0);
      }
      if ((int)parameters->max_length != 0) {
        parameters->m_Items[0] = pIVar4;
        il2cpp_runtime_glue(parameters->m_Items,pIVar4);
        pIVar4 = *(Il2CppObject **)&(__this->fields)._disableKinematicTimeLeft;
        if ((pIVar4 != (Il2CppObject *)0x0) &&
           (lVar5 = il2cpp_runtime_glue(pIVar4,(((parameters->obj).klass)->_1).element_class),
           lVar5 == 0)) goto LAB_03f93944;
        if (1 < (uint)parameters->max_length) {
          parameters->m_Items[1] = pIVar4;
          il2cpp_runtime_glue(parameters->m_Items + 1,pIVar4);
          pIVar4 = *(Il2CppObject **)&(__this->fields).HasExplicitNameTag;
          if ((pIVar4 != (Il2CppObject *)0x0) &&
             (lVar5 = il2cpp_runtime_glue(pIVar4,(((parameters->obj).klass)->_1).element_class),
             lVar5 == 0)) goto LAB_03f93944;
          if (2 < (uint)parameters->max_length) {
            parameters->m_Items[2] = pIVar4;
            il2cpp_runtime_glue(parameters->m_Items + 2,pIVar4);
            if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
              Photon_Pun_PhotonView__RPC(__this_00,"InitRPC",3,parameters,(MethodInfo *)0x0);
              Characters_BaseCharacter__SetTeam(__this,team,method_00);
              return;
            }
            goto LAB_03f9393f;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
LAB_03f9393f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseCharacter$$GetAimPoint
// il2cpp: UnityEngine_Vector3_o Characters_BaseCharacter__GetAimPoint (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x3f93a30

UnityEngine_Vector3_o
Characters_BaseCharacter__GetAimPoint(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  long lVar1;
  UnityEngine_Camera_o *__this_00;
  UnityEngine_Vector3_o UVar2;
  UnityEngine_Ray_o local_20;
  
  if (DAT_05703fcb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CursorManager);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_05703fcb = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
  if (lVar1 != 0) {
    __this_00 = *(UnityEngine_Camera_o **)(lVar1 + 0x20);
    if (*(int *)(TypeInfo_CursorManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UVar2 = UI_CursorManager__GetInGameMousePosition((MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Camera_o *)0x0) {
      UnityEngine_Camera__ScreenPointToRay(&local_20,__this_00,UVar2,(MethodInfo *)0x0);
      UVar2.fields.z =
           local_20.fields.m_Direction.fields.z * 1000.0 + local_20.fields.m_Origin.fields.z;
      UVar2.fields.x =
           local_20.fields.m_Direction.fields.x * 1000.0 + local_20.fields.m_Origin.fields.x;
      UVar2.fields.y =
           local_20.fields.m_Direction.fields.y * 1000.0 + local_20.fields.m_Origin.fields.y;
      return (UnityEngine_Vector3_o)UVar2.fields;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseCharacter$$SetTeam
// il2cpp: void Characters_BaseCharacter__SetTeam (Characters_BaseCharacter_o* __this, System_String_o* team, const MethodInfo* method);
// 0x3f93960

void Characters_BaseCharacter__SetTeam
               (Characters_BaseCharacter_o *__this,System_String_o *team,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this_00;
  System_Object_array *parameters;
  long lVar1;
  undefined8 uVar2;
  MethodInfo *extraout_RDX;
  
  if (DAT_05703fcc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&"SetTeamRPC");
    DAT_05703fcc = '\x01';
    method = extraout_RDX;
  }
  lVar1 = *(long *)&(__this->fields).Dead;
  if (lVar1 != 0) {
    __this_00 = *(Photon_Pun_PhotonView_o **)(lVar1 + 0x20);
    parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1,method);
    if (parameters != (System_Object_array *)0x0) {
      if (team != (System_String_o *)0x0) {
        lVar1 = il2cpp_runtime_glue(team,(((parameters->obj).klass)->_1).element_class);
        if (lVar1 == 0) {
          uVar2 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar2,0);
        }
      }
      if ((int)parameters->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      parameters->m_Items[0] = (Il2CppObject *)team;
      il2cpp_runtime_glue(parameters->m_Items,team);
      if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(__this_00,"SetTeamRPC",0,parameters,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseCharacter$$GetCameraAnchor
// il2cpp: UnityEngine_Transform_o* Characters_BaseCharacter__GetCameraAnchor (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x3f93af0

UnityEngine_Transform_o *
Characters_BaseCharacter__GetCameraAnchor(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  long lVar1;
  
  lVar1 = *(long *)&(__this->fields).Dead;
  if (lVar1 != 0) {
    return *(UnityEngine_Transform_o **)(lVar1 + 0x10);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseCharacter$$CreateCache
// il2cpp: void Characters_BaseCharacter__CreateCache (Characters_BaseCharacter_o* __this, Utility_BaseComponentCache_o* cache, const MethodInfo* method);
// 0x3f93b10

void Characters_BaseCharacter__CreateCache
               (Characters_BaseCharacter_o *__this,Utility_BaseComponentCache_o *cache,
               MethodInfo *method)

{
  bool_conflict *pbVar1;
  UnityEngine_GameObject_o *owner;
  Utility_BaseComponentCache_o *__this_00;
  MethodInfo *extraout_RDX;
  
  if (DAT_05703fcd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseComponentCache);
    DAT_05703fcd = '\x01';
    method = extraout_RDX;
  }
  pbVar1 = &(__this->fields).Dead;
  *(Utility_BaseComponentCache_o **)&(__this->fields).Dead = cache;
  il2cpp_runtime_glue(pbVar1,cache,method);
  if (cache != (Utility_BaseComponentCache_o *)0x0) {
    return;
  }
  owner = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  __this_00 = (Utility_BaseComponentCache_o *)il2cpp_runtime_glue(TypeInfo_BaseComponentCache);
  Utility_BaseComponentCache___ctor(__this_00,owner,(MethodInfo *)0x0);
  *(Utility_BaseComponentCache_o **)&(__this->fields).Dead = __this_00;
  il2cpp_runtime_glue(pbVar1,__this_00);
  return;
}


// Characters.BaseCharacter$$CreateDetection
// il2cpp: void Characters_BaseCharacter__CreateDetection (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x3f93bb0

void Characters_BaseCharacter__CreateDetection
               (Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  (__this->fields).MovementSync = (Characters_BaseMovementSync_o *)0x0;
  il2cpp_runtime_glue(&(__this->fields).MovementSync,0);
  return;
}


// Characters.BaseCharacter$$Emote
// il2cpp: void Characters_BaseCharacter__Emote (Characters_BaseCharacter_o* __this, System_String_o* emote, const MethodInfo* method);
// 0x3f93bd0

void Characters_BaseCharacter__Emote
               (Characters_BaseCharacter_o *__this,System_String_o *emote,MethodInfo *method)

{
  return;
}


// Characters.BaseCharacter$$ForceAnimation
// il2cpp: void Characters_BaseCharacter__ForceAnimation (Characters_BaseCharacter_o* __this, System_String_o* animation, float fade, const MethodInfo* method);
// 0x3f93be0

void Characters_BaseCharacter__ForceAnimation
               (Characters_BaseCharacter_o *__this,System_String_o *animation,float fade,
               MethodInfo *method)

{
  return;
}


// Characters.BaseCharacter$$InitRPC
// il2cpp: void Characters_BaseCharacter__InitRPC (Characters_BaseCharacter_o* __this, bool ai, System_String_o* name, System_String_o* guild, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x3f93bf0

void Characters_BaseCharacter__InitRPC
               (Characters_BaseCharacter_o *__this,bool_conflict ai,System_String_o *name,
               System_String_o *guild,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  System_String_o *pSVar2;
  
  if (DAT_05703fce == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    il2cpp_init_method_metadata(&TypeInfo_RoleSpriteHelpers);
    DAT_05703fce = '\x01';
  }
  if (info.fields.Sender != (Photon_Realtime_Player_o *)0x0) {
    pPVar1 = Photon_Pun_MonoBehaviourPun__get_photonView
                       ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
    if (pPVar1 == (Photon_Pun_PhotonView_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (info.fields.Sender != (pPVar1->fields)._Owner_k__BackingField) {
      return;
    }
  }
  *(char *)&(__this->fields).CustomDamage = (char)ai;
  if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = PatreonEffects_RoleSpriteHelpers__SanitizePlayerText
                     (info.fields.Sender,name,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = MiscExtensions__StripIllegalRichText(pSVar2,(MethodInfo *)0x0);
  if (DAT_05703fbd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    DAT_05703fbd = '\x01';
  }
  *(System_String_o **)&(__this->fields)._disableKinematicTimeLeft = pSVar2;
  il2cpp_runtime_glue(&(__this->fields)._disableKinematicTimeLeft);
  pSVar2 = *(System_String_o **)&(__this->fields)._disableKinematicTimeLeft;
  if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = MiscExtensions__StripColor(pSVar2,(MethodInfo *)0x0);
  (__this->fields).RichTextName = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).RichTextName,pSVar2);
  pSVar2 = PatreonEffects_RoleSpriteHelpers__SanitizePlayerText
                     (info.fields.Sender,guild,(MethodInfo *)0x0);
  pSVar2 = MiscExtensions__StripIllegalRichText(pSVar2,(MethodInfo *)0x0);
  *(System_String_o **)&(__this->fields).HasExplicitNameTag = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).HasExplicitNameTag,pSVar2);
  return;
}


// Characters.BaseCharacter$$SetHealthRPC
// il2cpp: void Characters_BaseCharacter__SetHealthRPC (Characters_BaseCharacter_o* __this, int32_t currentHealth, int32_t maxHealth, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x3f93d50

void Characters_BaseCharacter__SetHealthRPC
               (Characters_BaseCharacter_o *__this,int32_t currentHealth,int32_t maxHealth,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  
  pPVar1 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
    if (info.fields.Sender == (pPVar1->fields)._Owner_k__BackingField) {
      *(int32_t *)&(__this->fields).Cache = currentHealth;
      *(int32_t *)&(__this->fields).field_0x6c = maxHealth;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseCharacter$$SetTeamRPC
// il2cpp: void Characters_BaseCharacter__SetTeamRPC (Characters_BaseCharacter_o* __this, System_String_o* team, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x3f93da0

void Characters_BaseCharacter__SetTeamRPC
               (Characters_BaseCharacter_o *__this,System_String_o *team,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  Characters_BaseMovementSync_o *__this_00;
  bool_conflict bVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  MethodInfo *method_00;
  
  pPVar2 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar2 == (Photon_Pun_PhotonView_o *)0x0) {
LAB_03f93e16:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (info.fields.Sender == (pPVar2->fields)._Owner_k__BackingField) {
    method_00 = *(MethodInfo **)&(__this->fields).AI;
    *(System_String_o **)&(__this->fields).AI = team;
    il2cpp_runtime_glue(&(__this->fields).AI,team);
    if ((__this->fields).MovementSync != (Characters_BaseMovementSync_o *)0x0) {
      bVar1 = System_String__op_Inequality(team,(System_String_o *)method_00,(MethodInfo *)0x0);
      if ((char)bVar1 != '\0') {
        __this_00 = (__this->fields).MovementSync;
        if (__this_00 != (Characters_BaseMovementSync_o *)0x0) {
          Characters_BaseDetection__OnTeamChanged((Characters_BaseDetection_o *)__this_00,method_00)
          ;
          return;
        }
        goto LAB_03f93e16;
      }
    }
  }
  return;
}


// Characters.BaseCharacter$$SetCurrentHealth
// il2cpp: void Characters_BaseCharacter__SetCurrentHealth (Characters_BaseCharacter_o* __this, int32_t currentHealth, const MethodInfo* method);
// 0x3f942a0

void Characters_BaseCharacter__SetCurrentHealth
               (Characters_BaseCharacter_o *__this,int32_t currentHealth,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  int iVar1;
  int iVar2;
  undefined8 extraout_RDX;
  
  iVar1 = *(int *)&(__this->fields).field_0x6c;
  if (currentHealth < iVar1) {
    iVar1 = currentHealth;
  }
  iVar2 = 0;
  if (-1 < iVar1) {
    iVar2 = iVar1;
  }
  *(int *)&(__this->fields).Cache = iVar2;
  (*(__this->klass->vtable)._78_OnHealthChange.methodPtr)
            (__this,(__this->klass->vtable)._78_OnHealthChange.method);
  if (0 < *(int *)&(__this->fields).Cache) {
    return;
  }
  vtable_dispatch = (__this->klass->vtable)._73_Die.methodPtr;
  (*vtable_dispatch)
            (__this,(__this->klass->vtable)._73_Die.method,extraout_RDX,vtable_dispatch);
  return;
}


// Characters.BaseCharacter$$SetMaxHealth
// il2cpp: void Characters_BaseCharacter__SetMaxHealth (Characters_BaseCharacter_o* __this, int32_t maxHealth, const MethodInfo* method);
// 0x3f942f0

void Characters_BaseCharacter__SetMaxHealth
               (Characters_BaseCharacter_o *__this,int32_t maxHealth,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  int iVar1;
  undefined8 extraout_RDX;
  
  *(int32_t *)&(__this->fields).field_0x6c = maxHealth;
  iVar1 = *(int *)&(__this->fields).Cache;
  if (iVar1 <= maxHealth) {
    maxHealth = iVar1;
  }
  iVar1 = 0;
  if (-1 < maxHealth) {
    iVar1 = maxHealth;
  }
  *(int *)&(__this->fields).Cache = iVar1;
  (*(__this->klass->vtable)._78_OnHealthChange.methodPtr)
            (__this,(__this->klass->vtable)._78_OnHealthChange.method);
  if (0 < *(int *)&(__this->fields).Cache) {
    return;
  }
  vtable_dispatch = (__this->klass->vtable)._73_Die.methodPtr;
  (*vtable_dispatch)
            (__this,(__this->klass->vtable)._73_Die.method,extraout_RDX,vtable_dispatch);
  return;
}


// Characters.BaseCharacter$$SetHealth
// il2cpp: void Characters_BaseCharacter__SetHealth (Characters_BaseCharacter_o* __this, int32_t health, const MethodInfo* method);
// 0x3f94350

void Characters_BaseCharacter__SetHealth
               (Characters_BaseCharacter_o *__this,int32_t health,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  int32_t iVar1;
  undefined8 extraout_RDX;
  
  iVar1 = 0;
  if (-1 < health) {
    iVar1 = health;
  }
  *(int32_t *)&(__this->fields).field_0x6c = health;
  *(int32_t *)&(__this->fields).Cache = iVar1;
  (*(__this->klass->vtable)._78_OnHealthChange.methodPtr)
            (__this,(__this->klass->vtable)._78_OnHealthChange.method);
  if (0 < *(int *)&(__this->fields).Cache) {
    return;
  }
  vtable_dispatch = (__this->klass->vtable)._73_Die.methodPtr;
  (*vtable_dispatch)
            (__this,(__this->klass->vtable)._73_Die.method,extraout_RDX,vtable_dispatch);
  return;
}


// Characters.BaseCharacter$$TakeDamage
// il2cpp: void Characters_BaseCharacter__TakeDamage (Characters_BaseCharacter_o* __this, int32_t damage, const MethodInfo* method);
// 0x3f943a0

void Characters_BaseCharacter__TakeDamage
               (Characters_BaseCharacter_o *__this,int32_t damage,MethodInfo *method)

{
  int iVar1;
  Il2CppMethodPointer vtable_dispatch;
  int iVar2;
  undefined8 extraout_RDX;
  
  iVar2 = *(int *)&(__this->fields).Cache - damage;
  iVar1 = *(int *)&(__this->fields).field_0x6c;
  if (iVar1 <= iVar2) {
    iVar2 = iVar1;
  }
  iVar1 = 0;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  *(int *)&(__this->fields).Cache = iVar1;
  (*(__this->klass->vtable)._78_OnHealthChange.methodPtr)
            (__this,(__this->klass->vtable)._78_OnHealthChange.method);
  if (0 < *(int *)&(__this->fields).Cache) {
    return;
  }
  vtable_dispatch = (__this->klass->vtable)._73_Die.methodPtr;
  (*vtable_dispatch)
            (__this,(__this->klass->vtable)._73_Die.method,extraout_RDX,vtable_dispatch);
  return;
}


// Characters.BaseCharacter$$Die
// il2cpp: void Characters_BaseCharacter__Die (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x3f94400

void Characters_BaseCharacter__Die(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  long lVar1;
  Photon_Pun_PhotonView_o *__this_00;
  System_String_o *pSVar2;
  System_String_Fields x;
  GameManagers_InGameManager_o *__this_01;
  bool_conflict bVar3;
  System_Object_array *parameters;
  System_Collections_IEnumerator_o *routine;
  
  if (DAT_05703fcf == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&"MarkDeadRPC");
    DAT_05703fcf = '\x01';
  }
  lVar1 = *(long *)&(__this->fields).Dead;
  if (lVar1 != 0) {
    __this_00 = *(Photon_Pun_PhotonView_o **)(lVar1 + 0x20);
    parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,0);
    if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
      Photon_Pun_PhotonView__RPC(__this_00,"MarkDeadRPC",3,parameters,(MethodInfo *)0x0);
      if (DAT_05703fc9 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Object);
        DAT_05703fc9 = '\x01';
      }
      pSVar2 = (__this->fields).Team;
      if (pSVar2 != (System_String_o *)0x0) {
        x = pSVar2[4].fields;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar3 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)__this,
                           (MethodInfo *)0x0);
        if ((char)bVar3 != '\0') {
          __this_01 = (GameManagers_InGameManager_o *)(__this->fields).Team;
          if (__this_01 == (GameManagers_InGameManager_o *)0x0) goto LAB_03f94506;
          GameManagers_InGameManager__RegisterMainCharacterDie(__this_01,(MethodInfo *)0x0);
        }
        routine = (System_Collections_IEnumerator_o *)
                  (*(__this->klass->vtable)._74_WaitAndDie.methodPtr)
                            (__this,(__this->klass->vtable)._74_WaitAndDie.method);
        UnityEngine_MonoBehaviour__StartCoroutine
                  ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_03f94506:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseCharacter$$WaitAndDie
// il2cpp: System_Collections_IEnumerator_o* Characters_BaseCharacter__WaitAndDie (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x3f94510

System_Collections_IEnumerator_o *
Characters_BaseCharacter__WaitAndDie(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_05703fd0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WaitAndDie_d__83);
    DAT_05703fd0 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitAndDie_d__83);
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


// Characters.BaseCharacter$$UseItem
// il2cpp: void Characters_BaseCharacter__UseItem (Characters_BaseCharacter_o* __this, int32_t item, const MethodInfo* method);
// 0x3f945a0

void Characters_BaseCharacter__UseItem
               (Characters_BaseCharacter_o *__this,int32_t item,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  Il2CppClass *pIVar1;
  Il2CppMethodPointer vtable_dispatch;
  Il2CppObject *pIVar2;
  
  if (DAT_05703fd1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_BaseUseable_get_Item);
    DAT_05703fd1 = '\x01';
  }
  __this_00 = *(System_Collections_Generic_List_object__o **)&(__this->fields).CurrentHealth;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    pIVar2 = System_Collections_Generic_List<object>__get_Item(__this_00,item,MethodInfo_BaseUseable_get_Item);
    if (pIVar2 != (Il2CppObject *)0x0) {
      pIVar1 = pIVar2->klass;
      vtable_dispatch = pIVar1->vtable[0xc].methodPtr;
      (*vtable_dispatch)(pIVar2,1,pIVar1->vtable[0xc].method,pIVar1,vtable_dispatch);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseCharacter$$OnPlayerEnteredRoom
// il2cpp: void Characters_BaseCharacter__OnPlayerEnteredRoom (Characters_BaseCharacter_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x3f94610

void Characters_BaseCharacter__OnPlayerEnteredRoom
               (Characters_BaseCharacter_o *__this,Photon_Realtime_Player_o *player,
               MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  Characters_AnimationHandler_o *pCVar2;
  bool_conflict bVar3;
  System_Object_array *pSVar4;
  Il2CppObject *pIVar5;
  long lVar6;
  MethodInfo *pMVar7;
  undefined8 uVar8;
  MethodInfo *extraout_RDX;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  if (DAT_05703fd2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&"PlayAnimationRPC");
    il2cpp_init_method_metadata(&"SetTeamRPC");
    il2cpp_init_method_metadata(&"SetHealthRPC");
    il2cpp_init_method_metadata(&"");
    DAT_05703fd2 = '\x01';
    method = extraout_RDX;
  }
  lVar6 = *(long *)&(__this->fields).Dead;
  if ((lVar6 != 0) &&
     (pPVar1 = *(Photon_Pun_PhotonView_o **)(lVar6 + 0x20), pPVar1 != (Photon_Pun_PhotonView_o *)0x0
     )) {
    if ((char)(pPVar1->fields)._IsMine_k__BackingField == '\0') {
      return;
    }
    pSVar4 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,2,method);
    local_34 = *(undefined4 *)&(__this->fields).Cache;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_34);
    if (pSVar4 != (System_Object_array *)0x0) {
      if ((pIVar5 != (Il2CppObject *)0x0) &&
         (lVar6 = il2cpp_runtime_glue(pIVar5,(((pSVar4->obj).klass)->_1).element_class), lVar6 == 0))
      {
LAB_03f9494f:
        uVar8 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar8,0);
      }
      if ((int)pSVar4->max_length != 0) {
        pSVar4->m_Items[0] = pIVar5;
        il2cpp_runtime_glue(pSVar4->m_Items,pIVar5);
        local_38 = *(undefined4 *)&(__this->fields).field_0x6c;
        pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_38);
        if ((pIVar5 != (Il2CppObject *)0x0) &&
           (lVar6 = il2cpp_runtime_glue(pIVar5,(((pSVar4->obj).klass)->_1).element_class), lVar6 == 0
           )) goto LAB_03f9494f;
        if (1 < (uint)pSVar4->max_length) {
          pSVar4->m_Items[1] = pIVar5;
          il2cpp_runtime_glue(pSVar4->m_Items + 1,pIVar5);
          Photon_Pun_PhotonView__RPC(pPVar1,"SetHealthRPC",player,pSVar4,(MethodInfo *)0x0);
          lVar6 = *(long *)&(__this->fields).Dead;
          if (lVar6 != 0) {
            pPVar1 = *(Photon_Pun_PhotonView_o **)(lVar6 + 0x20);
            pSVar4 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
            if (pSVar4 != (System_Object_array *)0x0) {
              pIVar5 = *(Il2CppObject **)&(__this->fields).AI;
              if ((pIVar5 != (Il2CppObject *)0x0) &&
                 (lVar6 = il2cpp_runtime_glue(pIVar5,(((pSVar4->obj).klass)->_1).element_class),
                 lVar6 == 0)) goto LAB_03f9494f;
              if ((int)pSVar4->max_length == 0) goto LAB_03f9494a;
              pSVar4->m_Items[0] = pIVar5;
              il2cpp_runtime_glue(pSVar4->m_Items,pIVar5);
              if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
                pMVar7 = "SetTeamRPC";
                Photon_Pun_PhotonView__RPC
                          (pPVar1,(System_String_o *)"SetTeamRPC",player,pSVar4,(MethodInfo *)0x0);
                pCVar2 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
                if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
                  pMVar7 = (MethodInfo *)
                           Characters_AnimationHandler__GetCurrentAnimation(pCVar2,pMVar7);
                  bVar3 = System_String__op_Inequality
                                    ((System_String_o *)pMVar7,"",(MethodInfo *)0x0);
                  if ((char)bVar3 == '\0') {
                    return;
                  }
                  lVar6 = *(long *)&(__this->fields).Dead;
                  if (lVar6 != 0) {
                    pPVar1 = *(Photon_Pun_PhotonView_o **)(lVar6 + 0x20);
                    pSVar4 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,2);
                    if (pSVar4 != (System_Object_array *)0x0) {
                      if ((pMVar7 != (MethodInfo *)0x0) &&
                         (lVar6 = il2cpp_runtime_glue(pMVar7,(((pSVar4->obj).klass)->_1).
                                                            element_class), lVar6 == 0))
                      goto LAB_03f9494f;
                      if ((int)pSVar4->max_length == 0) goto LAB_03f9494a;
                      pSVar4->m_Items[0] = (Il2CppObject *)pMVar7;
                      il2cpp_runtime_glue(pSVar4->m_Items);
                      pCVar2 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
                      if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
                        local_3c = Characters_AnimationHandler__GetCurrentNormalizedTime
                                             (pCVar2,pMVar7);
                        pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&local_3c);
                        if ((pIVar5 != (Il2CppObject *)0x0) &&
                           (lVar6 = il2cpp_runtime_glue(pIVar5,(((pSVar4->obj).klass)->_1).
                                                              element_class), lVar6 == 0))
                        goto LAB_03f9494f;
                        if ((uint)pSVar4->max_length < 2) goto LAB_03f9494a;
                        pSVar4->m_Items[1] = pIVar5;
                        il2cpp_runtime_glue(pSVar4->m_Items + 1,pIVar5);
                        if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
                          Photon_Pun_PhotonView__RPC
                                    (pPVar1,"PlayAnimationRPC",player,pSVar4,(MethodInfo *)0x0);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          goto LAB_03f94945;
        }
      }
LAB_03f9494a:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
LAB_03f94945:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseCharacter$$PlayAnimation
// il2cpp: void Characters_BaseCharacter__PlayAnimation (Characters_BaseCharacter_o* __this, System_String_o* animation, float startTime, const MethodInfo* method);
// 0x3f94980

void Characters_BaseCharacter__PlayAnimation
               (Characters_BaseCharacter_o *__this,System_String_o *animation,float startTime,
               MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this_00;
  System_Object_array *parameters;
  long lVar1;
  Il2CppObject *pIVar2;
  undefined8 uVar3;
  MethodInfo *extraout_RDX;
  float local_1c;
  
  if (DAT_05703fd3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&"PlayAnimationRPC");
    DAT_05703fd3 = '\x01';
    method = extraout_RDX;
  }
  lVar1 = *(long *)&(__this->fields).Dead;
  if ((lVar1 != 0) &&
     (__this_00 = *(Photon_Pun_PhotonView_o **)(lVar1 + 0x20),
     __this_00 != (Photon_Pun_PhotonView_o *)0x0)) {
    if ((char)(__this_00->fields)._IsMine_k__BackingField == '\0') {
      return;
    }
    parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,2,method);
    if (parameters != (System_Object_array *)0x0) {
      if ((animation != (System_String_o *)0x0) &&
         (lVar1 = il2cpp_runtime_glue(animation,(((parameters->obj).klass)->_1).element_class),
         lVar1 == 0)) {
LAB_03f94abd:
        uVar3 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar3,0);
      }
      if ((int)parameters->max_length != 0) {
        parameters->m_Items[0] = (Il2CppObject *)animation;
        il2cpp_runtime_glue(parameters->m_Items,animation);
        local_1c = startTime;
        pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&local_1c);
        if ((pIVar2 != (Il2CppObject *)0x0) &&
           (lVar1 = il2cpp_runtime_glue(pIVar2,(((parameters->obj).klass)->_1).element_class),
           lVar1 == 0)) goto LAB_03f94abd;
        if (1 < (uint)parameters->max_length) {
          parameters->m_Items[1] = pIVar2;
          il2cpp_runtime_glue(parameters->m_Items + 1,pIVar2);
          Photon_Pun_PhotonView__RPC(__this_00,"PlayAnimationRPC",0,parameters,(MethodInfo *)0x0);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseCharacter$$PlayAnimationReset
// il2cpp: void Characters_BaseCharacter__PlayAnimationReset (Characters_BaseCharacter_o* __this, System_String_o* animation, const MethodInfo* method);
// 0x3f94ad0

void Characters_BaseCharacter__PlayAnimationReset
               (Characters_BaseCharacter_o *__this,System_String_o *animation,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this_00;
  System_Object_array *parameters;
  long lVar1;
  undefined8 uVar2;
  MethodInfo *extraout_RDX;
  
  if (DAT_05703fd4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&"PlayAnimationResetRPC");
    DAT_05703fd4 = '\x01';
    method = extraout_RDX;
  }
  lVar1 = *(long *)&(__this->fields).Dead;
  if ((lVar1 != 0) &&
     (__this_00 = *(Photon_Pun_PhotonView_o **)(lVar1 + 0x20),
     __this_00 != (Photon_Pun_PhotonView_o *)0x0)) {
    if ((char)(__this_00->fields)._IsMine_k__BackingField == '\0') {
      return;
    }
    parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1,method);
    if (parameters != (System_Object_array *)0x0) {
      if (animation != (System_String_o *)0x0) {
        lVar1 = il2cpp_runtime_glue(animation,(((parameters->obj).klass)->_1).element_class);
        if (lVar1 == 0) {
          uVar2 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar2,0);
        }
      }
      if ((int)parameters->max_length != 0) {
        parameters->m_Items[0] = (Il2CppObject *)animation;
        il2cpp_runtime_glue(parameters->m_Items,animation);
        Photon_Pun_PhotonView__RPC(__this_00,"PlayAnimationResetRPC",0,parameters,(MethodInfo *)0x0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseCharacter$$PlayAnimationRPC
// il2cpp: void Characters_BaseCharacter__PlayAnimationRPC (Characters_BaseCharacter_o* __this, System_String_o* animation, float startTime, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x3f94bb0

void Characters_BaseCharacter__PlayAnimationRPC
               (Characters_BaseCharacter_o *__this,System_String_o *animation,float startTime,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  long lVar1;
  Characters_AnimationHandler_o *__this_00;
  
  lVar1 = *(long *)&(__this->fields).Dead;
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x20), lVar1 != 0)) {
    if (info.fields.Sender != *(Photon_Realtime_Player_o **)(lVar1 + 0x80)) {
      return;
    }
    __this_00 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
    if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
      Characters_AnimationHandler__Play
                (__this_00,animation,startTime,0,(MethodInfo *)info.fields.Sender);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseCharacter$$PlayAnimationResetRPC
// il2cpp: void Characters_BaseCharacter__PlayAnimationResetRPC (Characters_BaseCharacter_o* __this, System_String_o* animation, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x3f94bf0

void Characters_BaseCharacter__PlayAnimationResetRPC
               (Characters_BaseCharacter_o *__this,System_String_o *animation,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  long lVar1;
  Characters_AnimationHandler_o *__this_00;
  
  lVar1 = *(long *)&(__this->fields).Dead;
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x20), lVar1 != 0)) {
    if (info.fields.Sender != *(Photon_Realtime_Player_o **)(lVar1 + 0x80)) {
      return;
    }
    __this_00 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
    if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
      Characters_AnimationHandler__Play(__this_00,animation,0.0,1,(MethodInfo *)info.fields.Sender);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseCharacter$$PlayAnimationIfNotPlaying
// il2cpp: void Characters_BaseCharacter__PlayAnimationIfNotPlaying (Characters_BaseCharacter_o* __this, System_String_o* animation, float startTime, const MethodInfo* method);
// 0x3f94c40

void Characters_BaseCharacter__PlayAnimationIfNotPlaying
               (Characters_BaseCharacter_o *__this,System_String_o *animation,float startTime,
               MethodInfo *method)

{
  long lVar1;
  MethodInfo *method_00;
  char cVar2;
  bool_conflict bVar3;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  lVar1 = *(long *)&(__this->fields)._cameraFPS;
  if (lVar1 == 0) {
LAB_03f94cab:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (*(char *)(lVar1 + 0x3c) == '\0') {
    bVar3 = System_String__op_Equality
                      (*(System_String_o **)(lVar1 + 0x30),animation,(MethodInfo *)0x0);
    cVar2 = (char)bVar3;
    method_00 = extraout_RDX_00;
  }
  else {
    if (*(UnityEngine_Animation_o **)(lVar1 + 0x10) == (UnityEngine_Animation_o *)0x0)
    goto LAB_03f94cab;
    bVar3 = UnityEngine_Animation__IsPlaying
                      (*(UnityEngine_Animation_o **)(lVar1 + 0x10),animation,(MethodInfo *)0x0);
    cVar2 = (char)bVar3;
    method_00 = extraout_RDX;
  }
  if (cVar2 != '\0') {
    return;
  }
  Characters_BaseCharacter__PlayAnimation(__this,animation,startTime,method_00);
  return;
}


// Characters.BaseCharacter$$CrossFade
// il2cpp: void Characters_BaseCharacter__CrossFade (Characters_BaseCharacter_o* __this, System_String_o* animation, float fadeTime, float startTime, const MethodInfo* method);
// 0x3f94cb0

void Characters_BaseCharacter__CrossFade
               (Characters_BaseCharacter_o *__this,System_String_o *animation,float fadeTime,
               float startTime,MethodInfo *method)

{
  long *plVar1;
  Photon_Pun_PhotonView_o *__this_00;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  MethodInfo *extraout_RDX;
  float local_28;
  float local_24;
  
  if (DAT_05703fd5 == '\0') {
    il2cpp_init_method_metadata(&"CrossFadeRPC");
    DAT_05703fd5 = '\x01';
    method = extraout_RDX;
  }
  lVar2 = *(long *)&(__this->fields).Dead;
  if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) {
    if (*(char *)(lVar2 + 0x68) == '\0') {
      return;
    }
    plVar1 = *(long **)&(__this->fields).GroundMaskLayers;
    if (plVar1 != (long *)0x0) {
      if ((animation != (System_String_o *)0x0) &&
         (lVar2 = il2cpp_runtime_glue(animation,*(undefined8 *)(*plVar1 + 0x40),method), lVar2 == 0))
      {
LAB_03f94e65:
        uVar4 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar4,0);
      }
      if ((int)plVar1[3] == 0) {
LAB_03f94e60:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      plVar1[4] = (long)animation;
      il2cpp_runtime_glue(plVar1 + 4,animation);
      plVar1 = *(long **)&(__this->fields).GroundMaskLayers;
      local_24 = fadeTime;
      lVar2 = il2cpp_runtime_glue(DAT_05711098,&local_24);
      if (plVar1 != (long *)0x0) {
        if ((lVar2 != 0) &&
           (lVar3 = il2cpp_runtime_glue(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
        goto LAB_03f94e65;
        if (*(uint *)(plVar1 + 3) < 2) goto LAB_03f94e60;
        plVar1[5] = lVar2;
        il2cpp_runtime_glue(plVar1 + 5,lVar2);
        plVar1 = *(long **)&(__this->fields).GroundMaskLayers;
        local_28 = startTime;
        lVar2 = il2cpp_runtime_glue(DAT_05711098,&local_28);
        if (plVar1 != (long *)0x0) {
          if ((lVar2 != 0) &&
             (lVar3 = il2cpp_runtime_glue(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0))
          goto LAB_03f94e65;
          if (*(uint *)(plVar1 + 3) < 3) goto LAB_03f94e60;
          plVar1[6] = lVar2;
          il2cpp_runtime_glue(plVar1 + 6,lVar2);
          lVar2 = *(long *)&(__this->fields).Dead;
          if ((lVar2 != 0) &&
             (__this_00 = *(Photon_Pun_PhotonView_o **)(lVar2 + 0x20),
             __this_00 != (Photon_Pun_PhotonView_o *)0x0)) {
            Photon_Pun_PhotonView__RPC
                      (__this_00,"CrossFadeRPC",0,
                       *(System_Object_array **)&(__this->fields).GroundMaskLayers,(MethodInfo *)0x0
                      );
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseCharacter$$CrossFadeWithSpeed
// il2cpp: void Characters_BaseCharacter__CrossFadeWithSpeed (Characters_BaseCharacter_o* __this, System_String_o* animation, float speed, float fadeTime, float startTime, const MethodInfo* method);
// 0x3f94e80

void Characters_BaseCharacter__CrossFadeWithSpeed
               (Characters_BaseCharacter_o *__this,System_String_o *animation,float speed,
               float fadeTime,float startTime,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this_00;
  System_Object_array *parameters;
  long lVar1;
  Il2CppObject *pIVar2;
  undefined8 uVar3;
  MethodInfo *extraout_RDX;
  float local_2c;
  float local_28;
  float local_24;
  
  if (DAT_05703fd6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&"CrossFadeWithSpeedRPC");
    DAT_05703fd6 = '\x01';
    method = extraout_RDX;
  }
  lVar1 = *(long *)&(__this->fields).Dead;
  if ((lVar1 != 0) &&
     (__this_00 = *(Photon_Pun_PhotonView_o **)(lVar1 + 0x20),
     __this_00 != (Photon_Pun_PhotonView_o *)0x0)) {
    if ((char)(__this_00->fields)._IsMine_k__BackingField == '\0') {
      return;
    }
    parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,4,method);
    if (parameters != (System_Object_array *)0x0) {
      if ((animation != (System_String_o *)0x0) &&
         (lVar1 = il2cpp_runtime_glue(animation,(((parameters->obj).klass)->_1).element_class),
         lVar1 == 0)) {
LAB_03f95076:
        uVar3 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar3,0);
      }
      if ((int)parameters->max_length != 0) {
        parameters->m_Items[0] = (Il2CppObject *)animation;
        il2cpp_runtime_glue(parameters->m_Items,animation);
        local_24 = speed;
        pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&local_24);
        if ((pIVar2 != (Il2CppObject *)0x0) &&
           (lVar1 = il2cpp_runtime_glue(pIVar2,(((parameters->obj).klass)->_1).element_class),
           lVar1 == 0)) goto LAB_03f95076;
        if (1 < (uint)parameters->max_length) {
          parameters->m_Items[1] = pIVar2;
          il2cpp_runtime_glue(parameters->m_Items + 1,pIVar2);
          local_28 = fadeTime;
          pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&local_28);
          if ((pIVar2 != (Il2CppObject *)0x0) &&
             (lVar1 = il2cpp_runtime_glue(pIVar2,(((parameters->obj).klass)->_1).element_class),
             lVar1 == 0)) goto LAB_03f95076;
          if (2 < (uint)parameters->max_length) {
            parameters->m_Items[2] = pIVar2;
            il2cpp_runtime_glue(parameters->m_Items + 2,pIVar2);
            local_2c = startTime;
            pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&local_2c);
            if ((pIVar2 != (Il2CppObject *)0x0) &&
               (lVar1 = il2cpp_runtime_glue(pIVar2,(((parameters->obj).klass)->_1).element_class),
               lVar1 == 0)) goto LAB_03f95076;
            if (3 < (uint)parameters->max_length) {
              parameters->m_Items[3] = pIVar2;
              il2cpp_runtime_glue(parameters->m_Items + 3,pIVar2);
              Photon_Pun_PhotonView__RPC(__this_00,"CrossFadeWithSpeedRPC",0,parameters,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseCharacter$$CrossFadeIfNotPlaying
// il2cpp: void Characters_BaseCharacter__CrossFadeIfNotPlaying (Characters_BaseCharacter_o* __this, System_String_o* animation, float fadeTime, float startTime, const MethodInfo* method);
// 0x3f95090

void Characters_BaseCharacter__CrossFadeIfNotPlaying
               (Characters_BaseCharacter_o *__this,System_String_o *animation,float fadeTime,
               float startTime,MethodInfo *method)

{
  long lVar1;
  MethodInfo *method_00;
  char cVar2;
  bool_conflict bVar3;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  lVar1 = *(long *)&(__this->fields)._cameraFPS;
  if (lVar1 == 0) {
LAB_03f95105:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (*(char *)(lVar1 + 0x3c) == '\0') {
    bVar3 = System_String__op_Equality
                      (*(System_String_o **)(lVar1 + 0x30),animation,(MethodInfo *)0x0);
    cVar2 = (char)bVar3;
    method_00 = extraout_RDX_00;
  }
  else {
    if (*(UnityEngine_Animation_o **)(lVar1 + 0x10) == (UnityEngine_Animation_o *)0x0)
    goto LAB_03f95105;
    bVar3 = UnityEngine_Animation__IsPlaying
                      (*(UnityEngine_Animation_o **)(lVar1 + 0x10),animation,(MethodInfo *)0x0);
    cVar2 = (char)bVar3;
    method_00 = extraout_RDX;
  }
  if (cVar2 != '\0') {
    return;
  }
  Characters_BaseCharacter__CrossFade(__this,animation,fadeTime,startTime,method_00);
  return;
}


// Characters.BaseCharacter$$GetAnimationSpeed
// il2cpp: float Characters_BaseCharacter__GetAnimationSpeed (Characters_BaseCharacter_o* __this, System_String_o* animation, const MethodInfo* method);
// 0x3f95110

float Characters_BaseCharacter__GetAnimationSpeed
                (Characters_BaseCharacter_o *__this,System_String_o *animation,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this_00;
  float fVar2;
  
  lVar1 = *(long *)&(__this->fields)._cameraFPS;
  if (lVar1 != 0) {
    if (DAT_05703fb4 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Single_get_Item);
      DAT_05703fb4 = '\x01';
    }
    __this_00 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)(lVar1 + 0x28);
    if (__this_00 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
      fVar2 = System_Collections_Generic_Dictionary<object__float>__get_Item
                        (__this_00,(Il2CppObject *)animation,MethodInfo_Single_get_Item);
      return fVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseCharacter$$SetAnimationSpeed
// il2cpp: void Characters_BaseCharacter__SetAnimationSpeed (Characters_BaseCharacter_o* __this, System_String_o* animation, float speed, const MethodInfo* method);
// 0x3f95170

void Characters_BaseCharacter__SetAnimationSpeed
               (Characters_BaseCharacter_o *__this,System_String_o *animation,float speed,
               MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this_00;
  System_Object_array *parameters;
  long lVar1;
  Il2CppObject *pIVar2;
  undefined8 uVar3;
  MethodInfo *extraout_RDX;
  float local_1c;
  
  if (DAT_05703fd7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&"SetAnimationSpeedRPC");
    DAT_05703fd7 = '\x01';
    method = extraout_RDX;
  }
  lVar1 = *(long *)&(__this->fields).Dead;
  if (lVar1 == 0) {
LAB_03f95294:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  __this_00 = *(Photon_Pun_PhotonView_o **)(lVar1 + 0x20);
  parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,2,method);
  if (parameters == (System_Object_array *)0x0) goto LAB_03f95294;
  if (animation != (System_String_o *)0x0) {
    lVar1 = il2cpp_runtime_glue(animation,(((parameters->obj).klass)->_1).element_class);
    if (lVar1 == 0) goto LAB_03f9529e;
  }
  if ((int)parameters->max_length != 0) {
    parameters->m_Items[0] = (Il2CppObject *)animation;
    il2cpp_runtime_glue(parameters->m_Items,animation);
    local_1c = speed;
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&local_1c);
    if (pIVar2 != (Il2CppObject *)0x0) {
      lVar1 = il2cpp_runtime_glue(pIVar2,(((parameters->obj).klass)->_1).element_class);
      if (lVar1 == 0) {
LAB_03f9529e:
        uVar3 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar3,0);
      }
    }
    if (1 < (uint)parameters->max_length) {
      parameters->m_Items[1] = pIVar2;
      il2cpp_runtime_glue(parameters->m_Items + 1,pIVar2);
      if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(__this_00,"SetAnimationSpeedRPC",0,parameters,(MethodInfo *)0x0);
        return;
      }
      goto LAB_03f95294;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseCharacter$$SetAnimationSpeedNonRPC
// il2cpp: void Characters_BaseCharacter__SetAnimationSpeedNonRPC (Characters_BaseCharacter_o* __this, System_String_o* animation, float speed, const MethodInfo* method);
// 0x3f952b0

void Characters_BaseCharacter__SetAnimationSpeedNonRPC
               (Characters_BaseCharacter_o *__this,System_String_o *animation,float speed,
               MethodInfo *method)

{
  Characters_AnimationHandler_o *__this_00;
  
  __this_00 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
  if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
    Characters_AnimationHandler__SetSpeed(__this_00,animation,speed,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseCharacter$$SetAnimationSpeedRPC
// il2cpp: void Characters_BaseCharacter__SetAnimationSpeedRPC (Characters_BaseCharacter_o* __this, System_String_o* animation, float speed, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x3f952d0

void Characters_BaseCharacter__SetAnimationSpeedRPC
               (Characters_BaseCharacter_o *__this,System_String_o *animation,float speed,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  long lVar1;
  Characters_AnimationHandler_o *__this_00;
  
  lVar1 = *(long *)&(__this->fields).Dead;
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x20), lVar1 != 0)) {
    if (info.fields.Sender != *(Photon_Realtime_Player_o **)(lVar1 + 0x80)) {
      return;
    }
    __this_00 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
    if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
      Characters_AnimationHandler__SetSpeed(__this_00,animation,speed,method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseCharacter$$CrossFadeRPC
// il2cpp: void Characters_BaseCharacter__CrossFadeRPC (Characters_BaseCharacter_o* __this, System_String_o* animation, float fadeTime, float startTime, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x3f95310

void Characters_BaseCharacter__CrossFadeRPC
               (Characters_BaseCharacter_o *__this,System_String_o *animation,float fadeTime,
               float startTime,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  long lVar1;
  Characters_AnimationHandler_o *__this_00;
  
  lVar1 = *(long *)&(__this->fields).Dead;
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x20), lVar1 != 0)) {
    if (info.fields.Sender != *(Photon_Realtime_Player_o **)(lVar1 + 0x80)) {
      return;
    }
    __this_00 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
    if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
      Characters_AnimationHandler__CrossFade(__this_00,animation,fadeTime,startTime,method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseCharacter$$CrossFadeWithSpeedRPC
// il2cpp: void Characters_BaseCharacter__CrossFadeWithSpeedRPC (Characters_BaseCharacter_o* __this, System_String_o* animation, float speed, float fadeTime, float startTime, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x3f95350

void Characters_BaseCharacter__CrossFadeWithSpeedRPC
               (Characters_BaseCharacter_o *__this,System_String_o *animation,float speed,
               float fadeTime,float startTime,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method
               )

{
  long lVar1;
  Characters_AnimationHandler_o *pCVar2;
  MethodInfo *method_00;
  
  lVar1 = *(long *)&(__this->fields).Dead;
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x20), lVar1 != 0)) {
    if (info.fields.Sender != *(Photon_Realtime_Player_o **)(lVar1 + 0x80)) {
      return;
    }
    pCVar2 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
    if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
      Characters_AnimationHandler__SetSpeed(pCVar2,animation,speed,method);
      pCVar2 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
      if (pCVar2 != (Characters_AnimationHandler_o *)0x0) {
        Characters_AnimationHandler__CrossFade(pCVar2,animation,fadeTime,startTime,method_00);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseCharacter$$PlaySound
// il2cpp: void Characters_BaseCharacter__PlaySound (Characters_BaseCharacter_o* __this, System_String_o* sound, const MethodInfo* method);
// 0x3f953d0

void Characters_BaseCharacter__PlaySound
               (Characters_BaseCharacter_o *__this,System_String_o *sound,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this_00;
  System_Object_array *parameters;
  long lVar1;
  undefined8 uVar2;
  MethodInfo *extraout_RDX;
  
  if (DAT_05703fd8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&"PlaySoundRPC");
    DAT_05703fd8 = '\x01';
    method = extraout_RDX;
  }
  lVar1 = *(long *)&(__this->fields).Dead;
  if ((lVar1 != 0) &&
     (__this_00 = *(Photon_Pun_PhotonView_o **)(lVar1 + 0x20),
     __this_00 != (Photon_Pun_PhotonView_o *)0x0)) {
    if ((char)(__this_00->fields)._IsMine_k__BackingField == '\0') {
      return;
    }
    parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1,method);
    if (parameters != (System_Object_array *)0x0) {
      if (sound != (System_String_o *)0x0) {
        lVar1 = il2cpp_runtime_glue(sound,(((parameters->obj).klass)->_1).element_class);
        if (lVar1 == 0) {
          uVar2 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar2,0);
        }
      }
      if ((int)parameters->max_length != 0) {
        parameters->m_Items[0] = (Il2CppObject *)sound;
        il2cpp_runtime_glue(parameters->m_Items,sound);
        Photon_Pun_PhotonView__RPC(__this_00,"PlaySoundRPC",0,parameters,(MethodInfo *)0x0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseCharacter$$IsPlayingSound
// il2cpp: bool Characters_BaseCharacter__IsPlayingSound (Characters_BaseCharacter_o* __this, System_String_o* sound, const MethodInfo* method);
// 0x3f954b0

bool_conflict
Characters_BaseCharacter__IsPlayingSound
          (Characters_BaseCharacter_o *__this,System_String_o *sound,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool_conflict bVar2;
  UnityEngine_AudioSource_o *__this_01;
  
  if (DAT_05703fd9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_AudioSource_get_Item);
    DAT_05703fd9 = '\x01';
  }
  lVar1 = *(long *)&(__this->fields).Dead;
  if ((lVar1 != 0) &&
     (__this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 0x30),
     __this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    __this_01 = (UnityEngine_AudioSource_o *)
                System_Collections_Generic_Dictionary<object__object>__get_Item
                          (__this_00,(Il2CppObject *)sound,MethodInfo_AudioSource_get_Item);
    if (__this_01 != (UnityEngine_AudioSource_o *)0x0) {
      bVar2 = UnityEngine_AudioSource__get_isPlaying(__this_01,(MethodInfo *)0x0);
      return bVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseCharacter$$WaitAndPlaySound
// il2cpp: System_Collections_IEnumerator_o* Characters_BaseCharacter__WaitAndPlaySound (Characters_BaseCharacter_o* __this, System_String_o* sound, float delay, const MethodInfo* method);
// 0x3f95520

System_Collections_IEnumerator_o *
Characters_BaseCharacter__WaitAndPlaySound
          (Characters_BaseCharacter_o *__this,System_String_o *sound,float delay,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_05703fda == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WaitAndPlaySound_d__103);
    DAT_05703fda = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitAndPlaySound_d__103);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].monitor = __this;
    il2cpp_runtime_glue(&__this_00[2].monitor,__this);
    __this_00[3].klass = (Il2CppClass *)sound;
    il2cpp_runtime_glue(__this_00 + 3,sound);
    *(float *)&__this_00[2].klass = delay;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseCharacter$$PlaySoundRPC
// il2cpp: void Characters_BaseCharacter__PlaySoundRPC (Characters_BaseCharacter_o* __this, System_String_o* sound, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x3f955e0

void Characters_BaseCharacter__PlaySoundRPC
               (Characters_BaseCharacter_o *__this,System_String_o *sound,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  bool_conflict bVar3;
  UnityEngine_AudioSource_o *__this_00;
  
  if (DAT_05703fdb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_AudioSource_get_Item);
    DAT_05703fdb = '\x01';
  }
  if (info.fields.Sender != (Photon_Realtime_Player_o *)0x0) {
    lVar1 = *(long *)&(__this->fields).Dead;
    if ((lVar1 == 0) || (lVar1 = *(long *)(lVar1 + 0x20), lVar1 == 0)) goto LAB_03f956a8;
    if (info.fields.Sender != *(Photon_Realtime_Player_o **)(lVar1 + 0x80)) {
      return;
    }
  }
  if (*(char *)((long)&(__this->fields).FootstepsEnabled + 1) == '\0') {
    return;
  }
  lVar1 = *(long *)&(__this->fields).Dead;
  if ((lVar1 != 0) &&
     (pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 0x30),
     pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    bVar3 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      (pSVar2,(Il2CppObject *)sound,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar3 == '\0') {
      return;
    }
    lVar1 = *(long *)&(__this->fields).Dead;
    if (((lVar1 != 0) &&
        (pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 0x30),
        pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) &&
       (__this_00 = (UnityEngine_AudioSource_o *)
                    System_Collections_Generic_Dictionary<object__object>__get_Item
                              (pSVar2,(Il2CppObject *)sound,MethodInfo_AudioSource_get_Item),
       __this_00 != (UnityEngine_AudioSource_o *)0x0)) {
      UnityEngine_AudioSource__Play(__this_00,(MethodInfo *)0x0);
      return;
    }
  }
LAB_03f956a8:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseCharacter$$StopSound
// il2cpp: void Characters_BaseCharacter__StopSound (Characters_BaseCharacter_o* __this, System_String_o* sound, const MethodInfo* method);
// 0x3f956b0

void Characters_BaseCharacter__StopSound
               (Characters_BaseCharacter_o *__this,System_String_o *sound,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this_00;
  System_Object_array *parameters;
  long lVar1;
  undefined8 uVar2;
  MethodInfo *extraout_RDX;
  
  if (DAT_05703fdc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&"StopSoundRPC");
    DAT_05703fdc = '\x01';
    method = extraout_RDX;
  }
  lVar1 = *(long *)&(__this->fields).Dead;
  if ((lVar1 != 0) &&
     (__this_00 = *(Photon_Pun_PhotonView_o **)(lVar1 + 0x20),
     __this_00 != (Photon_Pun_PhotonView_o *)0x0)) {
    if ((char)(__this_00->fields)._IsMine_k__BackingField == '\0') {
      return;
    }
    parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1,method);
    if (parameters != (System_Object_array *)0x0) {
      if (sound != (System_String_o *)0x0) {
        lVar1 = il2cpp_runtime_glue(sound,(((parameters->obj).klass)->_1).element_class);
        if (lVar1 == 0) {
          uVar2 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar2,0);
        }
      }
      if ((int)parameters->max_length != 0) {
        parameters->m_Items[0] = (Il2CppObject *)sound;
        il2cpp_runtime_glue(parameters->m_Items,sound);
        Photon_Pun_PhotonView__RPC(__this_00,"StopSoundRPC",0,parameters,(MethodInfo *)0x0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseCharacter$$FadeSound
// il2cpp: void Characters_BaseCharacter__FadeSound (Characters_BaseCharacter_o* __this, System_String_o* sound, float volume, float time, const MethodInfo* method);
// 0x3f95790

void Characters_BaseCharacter__FadeSound
               (Characters_BaseCharacter_o *__this,System_String_o *sound,float volume,float time,
               MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this_00;
  System_Object_array *parameters;
  long lVar1;
  Il2CppObject *pIVar2;
  undefined8 uVar3;
  MethodInfo *extraout_RDX;
  float local_28;
  float local_24;
  
  if (DAT_05703fdd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&"FadeSoundRPC");
    DAT_05703fdd = '\x01';
    method = extraout_RDX;
  }
  lVar1 = *(long *)&(__this->fields).Dead;
  if ((lVar1 != 0) &&
     (__this_00 = *(Photon_Pun_PhotonView_o **)(lVar1 + 0x20),
     __this_00 != (Photon_Pun_PhotonView_o *)0x0)) {
    if ((char)(__this_00->fields)._IsMine_k__BackingField == '\0') {
      return;
    }
    parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,3,method);
    if (parameters != (System_Object_array *)0x0) {
      if ((sound != (System_String_o *)0x0) &&
         (lVar1 = il2cpp_runtime_glue(sound,(((parameters->obj).klass)->_1).element_class),
         lVar1 == 0)) {
LAB_03f9592d:
        uVar3 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar3,0);
      }
      if ((int)parameters->max_length != 0) {
        parameters->m_Items[0] = (Il2CppObject *)sound;
        il2cpp_runtime_glue(parameters->m_Items,sound);
        local_24 = volume;
        pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&local_24);
        if ((pIVar2 != (Il2CppObject *)0x0) &&
           (lVar1 = il2cpp_runtime_glue(pIVar2,(((parameters->obj).klass)->_1).element_class),
           lVar1 == 0)) goto LAB_03f9592d;
        if (1 < (uint)parameters->max_length) {
          parameters->m_Items[1] = pIVar2;
          il2cpp_runtime_glue(parameters->m_Items + 1,pIVar2);
          local_28 = time;
          pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&local_28);
          if ((pIVar2 != (Il2CppObject *)0x0) &&
             (lVar1 = il2cpp_runtime_glue(pIVar2,(((parameters->obj).klass)->_1).element_class),
             lVar1 == 0)) goto LAB_03f9592d;
          if (2 < (uint)parameters->max_length) {
            parameters->m_Items[2] = pIVar2;
            il2cpp_runtime_glue(parameters->m_Items + 2,pIVar2);
            Photon_Pun_PhotonView__RPC(__this_00,"FadeSoundRPC",0,parameters,(MethodInfo *)0x0);
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseCharacter$$FadeSoundRPC
// il2cpp: void Characters_BaseCharacter__FadeSoundRPC (Characters_BaseCharacter_o* __this, System_String_o* sound, float volume, float time, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x3f95940

void Characters_BaseCharacter__FadeSoundRPC
               (Characters_BaseCharacter_o *__this,System_String_o *sound,float volume,float time,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  bool_conflict bVar3;
  UnityEngine_AudioSource_o *__this_00;
  Il2CppObject *__this_01;
  float fVar4;
  
  if (DAT_05703fde == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_AudioSource_get_Item);
    DAT_05703fde = '\x01';
  }
  if (info.fields.Sender != (Photon_Realtime_Player_o *)0x0) {
    lVar1 = *(long *)&(__this->fields).Dead;
    if ((lVar1 == 0) || (lVar1 = *(long *)(lVar1 + 0x20), lVar1 == 0)) goto LAB_03f95b14;
    if (info.fields.Sender != *(Photon_Realtime_Player_o **)(lVar1 + 0x80)) {
      return;
    }
  }
  if (*(char *)((long)&(__this->fields).FootstepsEnabled + 1) == '\0') {
    return;
  }
  lVar1 = *(long *)&(__this->fields).Dead;
  if ((lVar1 != 0) &&
     (pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 0x30),
     pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    bVar3 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      (pSVar2,(Il2CppObject *)sound,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar3 == '\0') {
      return;
    }
    lVar1 = *(long *)&(__this->fields).Dead;
    if (((lVar1 != 0) &&
        (pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 0x30),
        pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) &&
       (__this_00 = (UnityEngine_AudioSource_o *)
                    System_Collections_Generic_Dictionary<object__object>__get_Item
                              (pSVar2,(Il2CppObject *)sound,MethodInfo_AudioSource_get_Item),
       __this_00 != (UnityEngine_AudioSource_o *)0x0)) {
      if (time <= 0.0) {
        UnityEngine_AudioSource__set_volume(__this_00,volume,(MethodInfo *)0x0);
        return;
      }
      fVar4 = UnityEngine_AudioSource__get_volume(__this_00,(MethodInfo *)0x0);
      if (DAT_05703fdf == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_FadeSoundOverTime_d__108);
        DAT_05703fdf = '\x01';
      }
      __this_01 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_FadeSoundOverTime_d__108);
      System_Object___ctor(__this_01,(MethodInfo *)0x0);
      *(undefined4 *)&__this_01[1].klass = 0;
      if (__this_01 != (Il2CppObject *)0x0) {
        __this_01[2].monitor = __this_00;
        il2cpp_runtime_glue(&__this_01[2].monitor,__this_00);
        *(float *)&__this_01[3].klass = volume - fVar4;
        *(float *)&__this_01[2].klass = time;
        UnityEngine_MonoBehaviour__StartCoroutine
                  ((UnityEngine_MonoBehaviour_o *)__this,
                   (System_Collections_IEnumerator_o *)__this_01,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_03f95b14:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseCharacter$$FadeSoundOverTime
// il2cpp: System_Collections_IEnumerator_o* Characters_BaseCharacter__FadeSoundOverTime (Characters_BaseCharacter_o* __this, UnityEngine_AudioSource_o* source, float volumeIncrement, float time, const MethodInfo* method);
// 0x3f95b20

System_Collections_IEnumerator_o *
Characters_BaseCharacter__FadeSoundOverTime
          (Characters_BaseCharacter_o *__this,UnityEngine_AudioSource_o *source,
          float volumeIncrement,float time,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_05703fdf == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_FadeSoundOverTime_d__108);
    DAT_05703fdf = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_FadeSoundOverTime_d__108);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].monitor = source;
    il2cpp_runtime_glue(&__this_00[2].monitor,source);
    *(float *)&__this_00[3].klass = volumeIncrement;
    *(float *)&__this_00[2].klass = time;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseCharacter$$StopSoundRPC
// il2cpp: void Characters_BaseCharacter__StopSoundRPC (Characters_BaseCharacter_o* __this, System_String_o* sound, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x3f95bd0

void Characters_BaseCharacter__StopSoundRPC
               (Characters_BaseCharacter_o *__this,System_String_o *sound,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool_conflict bVar2;
  UnityEngine_AudioSource_o *__this_01;
  
  if (DAT_05703fe0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_AudioSource_get_Item);
    DAT_05703fe0 = '\x01';
  }
  lVar1 = *(long *)&(__this->fields).Dead;
  if (info.fields.Sender == (Photon_Realtime_Player_o *)0x0) {
    if (lVar1 == 0) goto LAB_03f95c90;
  }
  else {
    if ((lVar1 == 0) || (*(long *)(lVar1 + 0x20) == 0)) goto LAB_03f95c90;
    if (info.fields.Sender != *(Photon_Realtime_Player_o **)(*(long *)(lVar1 + 0x20) + 0x80)) {
      return;
    }
  }
  if (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 0x30) !=
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 0x30),
                       (Il2CppObject *)sound,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar2 == '\0') {
      return;
    }
    lVar1 = *(long *)&(__this->fields).Dead;
    if (((lVar1 != 0) &&
        (__this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 0x30),
        __this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) &&
       (__this_01 = (UnityEngine_AudioSource_o *)
                    System_Collections_Generic_Dictionary<object__object>__get_Item
                              (__this_00,(Il2CppObject *)sound,MethodInfo_AudioSource_get_Item),
       __this_01 != (UnityEngine_AudioSource_o *)0x0)) {
      UnityEngine_AudioSource__Stop(__this_01,(MethodInfo *)0x0);
      return;
    }
  }
LAB_03f95c90:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseCharacter$$OnHealthChange
// il2cpp: void Characters_BaseCharacter__OnHealthChange (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x3f95ca0

void Characters_BaseCharacter__OnHealthChange(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this_00;
  System_Object_array *parameters;
  Il2CppObject *pIVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (DAT_05703fe1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&"SetHealthRPC");
    DAT_05703fe1 = '\x01';
  }
  lVar2 = *(long *)&(__this->fields).Dead;
  if ((lVar2 != 0) &&
     (__this_00 = *(Photon_Pun_PhotonView_o **)(lVar2 + 0x20),
     __this_00 != (Photon_Pun_PhotonView_o *)0x0)) {
    if ((char)(__this_00->fields)._IsMine_k__BackingField == '\0') {
      return;
    }
    parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,2);
    local_2c = *(undefined4 *)&(__this->fields).Cache;
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_2c);
    if (parameters != (System_Object_array *)0x0) {
      if ((pIVar1 != (Il2CppObject *)0x0) &&
         (lVar2 = il2cpp_runtime_glue(pIVar1,(((parameters->obj).klass)->_1).element_class),
         lVar2 == 0)) {
LAB_03f95df8:
        uVar3 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar3,0);
      }
      if ((int)parameters->max_length != 0) {
        parameters->m_Items[0] = pIVar1;
        il2cpp_runtime_glue(parameters->m_Items,pIVar1);
        local_30 = *(undefined4 *)&(__this->fields).field_0x6c;
        pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_30);
        if ((pIVar1 != (Il2CppObject *)0x0) &&
           (lVar2 = il2cpp_runtime_glue(pIVar1,(((parameters->obj).klass)->_1).element_class),
           lVar2 == 0)) goto LAB_03f95df8;
        if (1 < (uint)parameters->max_length) {
          parameters->m_Items[1] = pIVar1;
          il2cpp_runtime_glue(parameters->m_Items + 1,pIVar1);
          Photon_Pun_PhotonView__RPC(__this_00,"SetHealthRPC",0,parameters,(MethodInfo *)0x0);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseCharacter$$OnHit
// il2cpp: void Characters_BaseCharacter__OnHit (Characters_BaseCharacter_o* __this, Characters_BaseHitbox_o* hitbox, Il2CppObject* victim, UnityEngine_Collider_o* collider, System_String_o* type, bool firstHit, const MethodInfo* method);
// 0x3f95e10

void Characters_BaseCharacter__OnHit
               (Characters_BaseCharacter_o *__this,Characters_BaseHitbox_o *hitbox,
               Il2CppObject *victim,UnityEngine_Collider_o *collider,System_String_o *type,
               bool_conflict firstHit,MethodInfo *method)

{
  return;
}


// Characters.BaseCharacter$$GetHitRPC
// il2cpp: void Characters_BaseCharacter__GetHitRPC (Characters_BaseCharacter_o* __this, int32_t viewId, System_String_o* name, int32_t damage, System_String_o* type, System_String_o* collider, const MethodInfo* method);
// 0x3f95e20

void Characters_BaseCharacter__GetHitRPC
               (Characters_BaseCharacter_o *__this,int32_t viewId,System_String_o *name,
               int32_t damage,System_String_o *type,System_String_o *collider,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  System_String_o *pSVar2;
  bool_conflict bVar3;
  Characters_BaseCharacter_o *x;
  System_Object_array *pSVar4;
  Il2CppObject *pIVar5;
  long lVar6;
  undefined8 uVar7;
  int32_t local_4c;
  int32_t local_48;
  int32_t local_44;
  Photon_Pun_PhotonView_o *local_40;
  System_String_o *local_38;
  
  local_48 = viewId;
  if (DAT_05703fe2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_RPCManager);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    il2cpp_init_method_metadata(&"NotifyDamagedRPC");
    il2cpp_init_method_metadata(&"NotifyDieRPC");
    il2cpp_init_method_metadata(&"ShowKillFeedRPC");
    il2cpp_init_method_metadata(&"");
    DAT_05703fe2 = '\x01';
  }
  if (damage == 0) {
    return;
  }
  if (*(char *)&(__this->fields).FeedVictimName != '\0') {
    return;
  }
  bVar3 = System_String__op_Equality(name,"",(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      il2cpp_init_class();
    }
    x = Utility_Util__FindCharacterByViewId(local_48,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (x == (Characters_BaseCharacter_o *)0x0) goto LAB_03f96381;
      name = *(System_String_o **)&(x->fields)._disableKinematicTimeLeft;
    }
  }
  local_38 = type;
  (*(__this->klass->vtable)._72_TakeDamage.methodPtr)
            (__this,(ulong)(uint)damage,(__this->klass->vtable)._72_TakeDamage.method);
  lVar6 = *(long *)&(__this->fields).Dead;
  if (lVar6 == 0) goto LAB_03f96381;
  pPVar1 = *(Photon_Pun_PhotonView_o **)(lVar6 + 0x20);
  pSVar4 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,3);
  local_4c = local_48;
  pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_4c);
  if (pSVar4 == (System_Object_array *)0x0) goto LAB_03f96381;
  if ((pIVar5 != (Il2CppObject *)0x0) &&
     (lVar6 = il2cpp_runtime_glue(pIVar5,(((pSVar4->obj).klass)->_1).element_class), lVar6 == 0))
  goto LAB_03f9638b;
  if ((int)pSVar4->max_length == 0) goto LAB_03f96386;
  pSVar4->m_Items[0] = pIVar5;
  il2cpp_runtime_glue(pSVar4->m_Items,pIVar5);
  if ((name != (System_String_o *)0x0) &&
     (lVar6 = il2cpp_runtime_glue(name,(((pSVar4->obj).klass)->_1).element_class), lVar6 == 0))
  goto LAB_03f9638b;
  if ((uint)pSVar4->max_length < 2) goto LAB_03f96386;
  pSVar4->m_Items[1] = (Il2CppObject *)name;
  il2cpp_runtime_glue(pSVar4->m_Items + 1,name);
  local_44 = damage;
  pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_44);
  if ((pIVar5 != (Il2CppObject *)0x0) &&
     (lVar6 = il2cpp_runtime_glue(pIVar5,(((pSVar4->obj).klass)->_1).element_class), lVar6 == 0))
  goto LAB_03f9638b;
  if ((uint)pSVar4->max_length < 3) goto LAB_03f96386;
  pSVar4->m_Items[2] = pIVar5;
  il2cpp_runtime_glue(pSVar4->m_Items + 2,pIVar5);
  if (pPVar1 == (Photon_Pun_PhotonView_o *)0x0) goto LAB_03f96381;
  Photon_Pun_PhotonView__RPC(pPVar1,"NotifyDamagedRPC",0,pSVar4,(MethodInfo *)0x0);
  pSVar2 = local_38;
  if (0 < *(int *)&(__this->fields).Cache) {
    return;
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
    lVar6 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    if (lVar6 != 0) goto LAB_03f960d6;
LAB_03f9629b:
    lVar6._0_4_ = (__this->fields).Dead;
    lVar6._4_4_ = (__this->fields).CustomDamageEnabled;
  }
  else {
    lVar6 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    if (lVar6 == 0) goto LAB_03f9629b;
LAB_03f960d6:
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_init_class();
      lVar6 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
      if (lVar6 == 0) goto LAB_03f96381;
    }
    if (*(char *)(lVar6 + 0x81) == '\0') goto LAB_03f9629b;
    pPVar1 = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
    pSVar4 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,4);
    if (pSVar4 == (System_Object_array *)0x0) goto LAB_03f96381;
    if ((name != (System_String_o *)0x0) &&
       (lVar6 = il2cpp_runtime_glue(name,(((pSVar4->obj).klass)->_1).element_class), lVar6 == 0))
    goto LAB_03f9638b;
    local_40 = pPVar1;
    if ((int)pSVar4->max_length == 0) goto LAB_03f96386;
    pSVar4->m_Items[0] = (Il2CppObject *)name;
    il2cpp_runtime_glue(pSVar4->m_Items,name);
    pIVar5 = *(Il2CppObject **)&(__this->fields)._disableKinematicTimeLeft;
    if ((pIVar5 != (Il2CppObject *)0x0) &&
       (lVar6 = il2cpp_runtime_glue(pIVar5,(((pSVar4->obj).klass)->_1).element_class), lVar6 == 0))
    goto LAB_03f9638b;
    if ((uint)pSVar4->max_length < 2) goto LAB_03f96386;
    pSVar4->m_Items[1] = pIVar5;
    il2cpp_runtime_glue(pSVar4->m_Items + 1,pIVar5);
    local_4c = damage;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_4c);
    if ((pIVar5 != (Il2CppObject *)0x0) &&
       (lVar6 = il2cpp_runtime_glue(pIVar5,(((pSVar4->obj).klass)->_1).element_class), lVar6 == 0))
    goto LAB_03f9638b;
    if ((uint)pSVar4->max_length < 3) goto LAB_03f96386;
    pSVar4->m_Items[2] = pIVar5;
    il2cpp_runtime_glue(pSVar4->m_Items + 2,pIVar5);
    if ((pSVar2 != (System_String_o *)0x0) &&
       (lVar6 = il2cpp_runtime_glue(pSVar2,(((pSVar4->obj).klass)->_1).element_class), lVar6 == 0))
    goto LAB_03f9638b;
    pPVar1 = local_40;
    if ((uint)pSVar4->max_length < 4) goto LAB_03f96386;
    pSVar4->m_Items[3] = (Il2CppObject *)pSVar2;
    il2cpp_runtime_glue(pSVar4->m_Items + 3,pSVar2);
    if (pPVar1 == (Photon_Pun_PhotonView_o *)0x0) goto LAB_03f96381;
    Photon_Pun_PhotonView__RPC(pPVar1,"ShowKillFeedRPC",0,pSVar4,(MethodInfo *)0x0);
    lVar6._0_4_ = (__this->fields).Dead;
    lVar6._4_4_ = (__this->fields).CustomDamageEnabled;
  }
  if (lVar6 != 0) {
    pPVar1 = *(Photon_Pun_PhotonView_o **)(lVar6 + 0x20);
    pSVar4 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,2);
    local_4c = local_48;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_4c);
    if (pSVar4 != (System_Object_array *)0x0) {
      if ((pIVar5 != (Il2CppObject *)0x0) &&
         (lVar6 = il2cpp_runtime_glue(pIVar5,(((pSVar4->obj).klass)->_1).element_class), lVar6 == 0))
      {
LAB_03f9638b:
        uVar7 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar7,0);
      }
      if ((int)pSVar4->max_length != 0) {
        pSVar4->m_Items[0] = pIVar5;
        il2cpp_runtime_glue(pSVar4->m_Items,pIVar5);
        if ((name != (System_String_o *)0x0) &&
           (lVar6 = il2cpp_runtime_glue(name,(((pSVar4->obj).klass)->_1).element_class), lVar6 == 0))
        goto LAB_03f9638b;
        if (1 < (uint)pSVar4->max_length) {
          pSVar4->m_Items[1] = (Il2CppObject *)name;
          il2cpp_runtime_glue(pSVar4->m_Items + 1,name);
          if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
            Photon_Pun_PhotonView__RPC(pPVar1,"NotifyDieRPC",0,pSVar4,(MethodInfo *)0x0);
            return;
          }
          goto LAB_03f96381;
        }
      }
LAB_03f96386:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
LAB_03f96381:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseCharacter$$GetDamagedRPC
// il2cpp: void Characters_BaseCharacter__GetDamagedRPC (Characters_BaseCharacter_o* __this, System_String_o* name, int32_t damage, const MethodInfo* method);
// 0x3f963a0

void Characters_BaseCharacter__GetDamagedRPC
               (Characters_BaseCharacter_o *__this,System_String_o *name,int32_t damage,
               MethodInfo *method)

{
  uint uVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  Il2CppObject *pIVar3;
  undefined8 in_RAX;
  System_Object_array *pSVar4;
  Il2CppObject *pIVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 local_38;
  
  local_38 = in_RAX;
  if (DAT_05703fe3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_RPCManager);
    il2cpp_init_method_metadata(&"NotifyDamagedRPC");
    il2cpp_init_method_metadata(&"NotifyDieRPC");
    il2cpp_init_method_metadata(&"ShowKillFeedRPC");
    il2cpp_init_method_metadata(&"");
    DAT_05703fe3 = '\x01';
  }
  lVar6 = *(long *)&(__this->fields).Dead;
  if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x20), lVar6 == 0)) goto LAB_03f96862;
  if ((*(char *)(lVar6 + 0x68) == '\0') || (*(char *)&(__this->fields).FeedVictimName != '\0')) {
    return;
  }
  (*(__this->klass->vtable)._72_TakeDamage.methodPtr)
            (__this,(ulong)(uint)damage,(__this->klass->vtable)._72_TakeDamage.method);
  lVar6 = *(long *)&(__this->fields).Dead;
  if (lVar6 == 0) goto LAB_03f96862;
  pPVar2 = *(Photon_Pun_PhotonView_o **)(lVar6 + 0x20);
  pSVar4 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,3);
  local_38 = CONCAT44(local_38._4_4_,0xffffffff);
  pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_38);
  if (pSVar4 == (System_Object_array *)0x0) goto LAB_03f96862;
  if ((pIVar5 != (Il2CppObject *)0x0) &&
     (lVar6 = il2cpp_runtime_glue(pIVar5,(((pSVar4->obj).klass)->_1).element_class), lVar6 == 0))
  goto LAB_03f9686c;
  if ((int)pSVar4->max_length == 0) goto LAB_03f96867;
  pSVar4->m_Items[0] = pIVar5;
  il2cpp_runtime_glue(pSVar4->m_Items,pIVar5);
  if ((name != (System_String_o *)0x0) &&
     (lVar6 = il2cpp_runtime_glue(name,(((pSVar4->obj).klass)->_1).element_class), lVar6 == 0))
  goto LAB_03f9686c;
  if ((uint)pSVar4->max_length < 2) goto LAB_03f96867;
  pSVar4->m_Items[1] = (Il2CppObject *)name;
  il2cpp_runtime_glue(pSVar4->m_Items + 1,name);
  local_38 = CONCAT44(damage,(undefined4)local_38);
  pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,(long)&local_38 + 4);
  if ((pIVar5 != (Il2CppObject *)0x0) &&
     (lVar6 = il2cpp_runtime_glue(pIVar5,(((pSVar4->obj).klass)->_1).element_class), lVar6 == 0))
  goto LAB_03f9686c;
  if ((uint)pSVar4->max_length < 3) goto LAB_03f96867;
  pSVar4->m_Items[2] = pIVar5;
  il2cpp_runtime_glue(pSVar4->m_Items + 2,pIVar5);
  if (pPVar2 == (Photon_Pun_PhotonView_o *)0x0) goto LAB_03f96862;
  Photon_Pun_PhotonView__RPC(pPVar2,"NotifyDamagedRPC",0,pSVar4,(MethodInfo *)0x0);
  if (0 < *(int *)&(__this->fields).Cache) {
    return;
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar6 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  if (lVar6 != 0) {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_init_class();
      lVar6 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
      if (lVar6 == 0) goto LAB_03f96862;
    }
    if (*(char *)(lVar6 + 0x81) != '\0') {
      pPVar2 = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
      pSVar4 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,4);
      if (pSVar4 == (System_Object_array *)0x0) goto LAB_03f96862;
      if ((name != (System_String_o *)0x0) &&
         (lVar6 = il2cpp_runtime_glue(name,(((pSVar4->obj).klass)->_1).element_class), lVar6 == 0))
      goto LAB_03f9686c;
      if ((int)pSVar4->max_length == 0) goto LAB_03f96867;
      pSVar4->m_Items[0] = (Il2CppObject *)name;
      il2cpp_runtime_glue(pSVar4->m_Items,name);
      pIVar5 = *(Il2CppObject **)&(__this->fields)._disableKinematicTimeLeft;
      if ((pIVar5 != (Il2CppObject *)0x0) &&
         (lVar6 = il2cpp_runtime_glue(pIVar5,(((pSVar4->obj).klass)->_1).element_class), lVar6 == 0))
      goto LAB_03f9686c;
      if ((uint)pSVar4->max_length < 2) goto LAB_03f96867;
      pSVar4->m_Items[1] = pIVar5;
      il2cpp_runtime_glue(pSVar4->m_Items + 1,pIVar5);
      local_38 = CONCAT44(local_38._4_4_,damage);
      pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_38);
      if ((pIVar5 != (Il2CppObject *)0x0) &&
         (lVar6 = il2cpp_runtime_glue(pIVar5,(((pSVar4->obj).klass)->_1).element_class), lVar6 == 0))
      goto LAB_03f9686c;
      if ((uint)pSVar4->max_length < 3) goto LAB_03f96867;
      pSVar4->m_Items[2] = pIVar5;
      il2cpp_runtime_glue(pSVar4->m_Items + 2,pIVar5);
      if ("" == (Il2CppObject *)0x0) {
        uVar1 = (uint)pSVar4->max_length;
        pIVar5 = (Il2CppObject *)0x0;
        pIVar3 = "";
      }
      else {
        lVar6 = il2cpp_runtime_glue("",(((pSVar4->obj).klass)->_1).element_class);
        if (lVar6 == 0) goto LAB_03f9686c;
        uVar1 = (uint)pSVar4->max_length;
        pIVar5 = "";
        pIVar3 = "";
      }
      "" = pIVar3;
      if (uVar1 < 4) goto LAB_03f96867;
      pSVar4->m_Items[3] = pIVar5;
      il2cpp_runtime_glue(pSVar4->m_Items + 3,pIVar3);
      if (pPVar2 == (Photon_Pun_PhotonView_o *)0x0) goto LAB_03f96862;
      Photon_Pun_PhotonView__RPC(pPVar2,"ShowKillFeedRPC",0,pSVar4,(MethodInfo *)0x0);
    }
  }
  lVar6 = *(long *)&(__this->fields).Dead;
  if (lVar6 != 0) {
    pPVar2 = *(Photon_Pun_PhotonView_o **)(lVar6 + 0x20);
    pSVar4 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,2);
    local_38 = CONCAT44(local_38._4_4_,0xffffffff);
    pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_38);
    if (pSVar4 != (System_Object_array *)0x0) {
      if ((pIVar5 != (Il2CppObject *)0x0) &&
         (lVar6 = il2cpp_runtime_glue(pIVar5,(((pSVar4->obj).klass)->_1).element_class), lVar6 == 0))
      {
LAB_03f9686c:
        uVar7 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar7,0);
      }
      if ((int)pSVar4->max_length != 0) {
        pSVar4->m_Items[0] = pIVar5;
        il2cpp_runtime_glue(pSVar4->m_Items,pIVar5);
        if ((name != (System_String_o *)0x0) &&
           (lVar6 = il2cpp_runtime_glue(name,(((pSVar4->obj).klass)->_1).element_class), lVar6 == 0))
        goto LAB_03f9686c;
        if (1 < (uint)pSVar4->max_length) {
          pSVar4->m_Items[1] = (Il2CppObject *)name;
          il2cpp_runtime_glue(pSVar4->m_Items + 1,name);
          if (pPVar2 != (Photon_Pun_PhotonView_o *)0x0) {
            Photon_Pun_PhotonView__RPC(pPVar2,"NotifyDieRPC",0,pSVar4,(MethodInfo *)0x0);
            return;
          }
          goto LAB_03f96862;
        }
      }
LAB_03f96867:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
LAB_03f96862:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseCharacter$$GetKilledRPC
// il2cpp: void Characters_BaseCharacter__GetKilledRPC (Characters_BaseCharacter_o* __this, System_String_o* name, const MethodInfo* method);
// 0x3f96880

void Characters_BaseCharacter__GetKilledRPC
               (Characters_BaseCharacter_o *__this,System_String_o *name,MethodInfo *method)

{
  uint uVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  Il2CppObject *pIVar3;
  System_Object_array *pSVar4;
  long lVar5;
  Il2CppObject *pIVar6;
  undefined8 uVar7;
  MethodInfo *extraout_RDX;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (DAT_05703fe4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_RPCManager);
    il2cpp_init_method_metadata(&"NotifyDieRPC");
    il2cpp_init_method_metadata(&"ShowKillFeedRPC");
    il2cpp_init_method_metadata(&"");
    DAT_05703fe4 = '\x01';
    method = extraout_RDX;
  }
  lVar5 = *(long *)&(__this->fields).Dead;
  if ((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x20), lVar5 == 0)) goto LAB_03f96c55;
  if (*(char *)(lVar5 + 0x68) == '\0') {
    return;
  }
  if (*(char *)&(__this->fields).FeedVictimName != '\0') {
    return;
  }
  *(undefined4 *)&(__this->fields).Cache = 0;
  (*(__this->klass->vtable)._78_OnHealthChange.methodPtr)
            (__this,(__this->klass->vtable)._78_OnHealthChange.method,method);
  if (*(int *)&(__this->fields).Cache < 1) {
    (*(__this->klass->vtable)._73_Die.methodPtr)(__this,(__this->klass->vtable)._73_Die.method);
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) != 0) goto LAB_03f9695a;
LAB_03f96b16:
    il2cpp_init_class();
    lVar5 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) goto LAB_03f96b16;
LAB_03f9695a:
    lVar5 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if (lVar5 != 0) {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_init_class();
      lVar5 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
      if (lVar5 == 0) goto LAB_03f96c55;
    }
    if (*(char *)(lVar5 + 0x81) != '\0') {
      pPVar2 = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
      pSVar4 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,4);
      if (pSVar4 == (System_Object_array *)0x0) goto LAB_03f96c55;
      if ((name != (System_String_o *)0x0) &&
         (lVar5 = il2cpp_runtime_glue(name,(((pSVar4->obj).klass)->_1).element_class), lVar5 == 0))
      goto LAB_03f96c5f;
      if ((int)pSVar4->max_length == 0) goto LAB_03f96c5a;
      pSVar4->m_Items[0] = (Il2CppObject *)name;
      il2cpp_runtime_glue(pSVar4->m_Items,name);
      pIVar6 = *(Il2CppObject **)&(__this->fields)._disableKinematicTimeLeft;
      if ((pIVar6 != (Il2CppObject *)0x0) &&
         (lVar5 = il2cpp_runtime_glue(pIVar6,(((pSVar4->obj).klass)->_1).element_class), lVar5 == 0))
      goto LAB_03f96c5f;
      if ((uint)pSVar4->max_length < 2) goto LAB_03f96c5a;
      pSVar4->m_Items[1] = pIVar6;
      il2cpp_runtime_glue(pSVar4->m_Items + 1,pIVar6);
      local_2c = 0;
      pIVar6 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_2c);
      if ((pIVar6 != (Il2CppObject *)0x0) &&
         (lVar5 = il2cpp_runtime_glue(pIVar6,(((pSVar4->obj).klass)->_1).element_class), lVar5 == 0))
      goto LAB_03f96c5f;
      if ((uint)pSVar4->max_length < 3) goto LAB_03f96c5a;
      pSVar4->m_Items[2] = pIVar6;
      il2cpp_runtime_glue(pSVar4->m_Items + 2,pIVar6);
      if ("" == (Il2CppObject *)0x0) {
        uVar1 = (uint)pSVar4->max_length;
        pIVar6 = (Il2CppObject *)0x0;
        pIVar3 = "";
      }
      else {
        lVar5 = il2cpp_runtime_glue("",(((pSVar4->obj).klass)->_1).element_class);
        if (lVar5 == 0) goto LAB_03f96c5f;
        uVar1 = (uint)pSVar4->max_length;
        pIVar6 = "";
        pIVar3 = "";
      }
      "" = pIVar3;
      if (uVar1 < 4) goto LAB_03f96c5a;
      pSVar4->m_Items[3] = pIVar6;
      il2cpp_runtime_glue(pSVar4->m_Items + 3,pIVar3);
      if (pPVar2 == (Photon_Pun_PhotonView_o *)0x0) goto LAB_03f96c55;
      Photon_Pun_PhotonView__RPC(pPVar2,"ShowKillFeedRPC",0,pSVar4,(MethodInfo *)0x0);
    }
  }
  lVar5 = *(long *)&(__this->fields).Dead;
  if (lVar5 != 0) {
    pPVar2 = *(Photon_Pun_PhotonView_o **)(lVar5 + 0x20);
    pSVar4 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,2);
    local_30 = 0xffffffff;
    pIVar6 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_30);
    if (pSVar4 != (System_Object_array *)0x0) {
      if ((pIVar6 != (Il2CppObject *)0x0) &&
         (lVar5 = il2cpp_runtime_glue(pIVar6,(((pSVar4->obj).klass)->_1).element_class), lVar5 == 0))
      {
LAB_03f96c5f:
        uVar7 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar7,0);
      }
      if ((int)pSVar4->max_length != 0) {
        pSVar4->m_Items[0] = pIVar6;
        il2cpp_runtime_glue(pSVar4->m_Items,pIVar6);
        if ((name != (System_String_o *)0x0) &&
           (lVar5 = il2cpp_runtime_glue(name,(((pSVar4->obj).klass)->_1).element_class), lVar5 == 0))
        goto LAB_03f96c5f;
        if (1 < (uint)pSVar4->max_length) {
          pSVar4->m_Items[1] = (Il2CppObject *)name;
          il2cpp_runtime_glue(pSVar4->m_Items + 1,name);
          if (pPVar2 != (Photon_Pun_PhotonView_o *)0x0) {
            Photon_Pun_PhotonView__RPC(pPVar2,"NotifyDieRPC",0,pSVar4,(MethodInfo *)0x0);
            return;
          }
          goto LAB_03f96c55;
        }
      }
LAB_03f96c5a:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
LAB_03f96c55:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseCharacter$$MarkDeadRPC
// il2cpp: void Characters_BaseCharacter__MarkDeadRPC (Characters_BaseCharacter_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x3f96c70

void Characters_BaseCharacter__MarkDeadRPC
               (Characters_BaseCharacter_o *__this,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  long lVar1;
  
  lVar1 = *(long *)&(__this->fields).Dead;
  if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x20), lVar1 != 0)) {
    if (info.fields.Sender != *(Photon_Realtime_Player_o **)(lVar1 + 0x80)) {
      return;
    }
    *(undefined1 *)&(__this->fields).FeedVictimName = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseCharacter$$NotifyDieRPC
// il2cpp: void Characters_BaseCharacter__NotifyDieRPC (Characters_BaseCharacter_o* __this, int32_t viewId, System_String_o* name, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x3f96ca0

void Characters_BaseCharacter__NotifyDieRPC
               (Characters_BaseCharacter_o *__this,int32_t viewId,System_String_o *name,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_Fields SVar2;
  GameManagers_InGameManager_o *__this_00;
  Photon_Realtime_Player_o *player;
  bool_conflict bVar3;
  Characters_BaseCharacter_o *killer;
  long lVar4;
  CustomLogic_CustomLogicEvaluator_o *__this_01;
  
  if (DAT_05703fe5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    DAT_05703fe5 = '\x01';
  }
  lVar4 = *(long *)&(__this->fields).Dead;
  if ((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x20), lVar4 == 0)) goto LAB_03f96f5f;
  if (info.fields.Sender != *(Photon_Realtime_Player_o **)(lVar4 + 0x80)) {
    return;
  }
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_init_class();
  }
  killer = Utility_Util__FindCharacterByViewId(viewId,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)killer,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (killer == (Characters_BaseCharacter_o *)0x0) goto LAB_03f96f5f;
    name = *(System_String_o **)&(killer->fields)._disableKinematicTimeLeft;
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)killer,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (killer == (Characters_BaseCharacter_o *)0x0) goto LAB_03f96f5f;
    if (DAT_05703fc9 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Object);
      DAT_05703fc9 = '\x01';
    }
    pSVar1 = (killer->fields).Team;
    if (pSVar1 == (System_String_o *)0x0) goto LAB_03f96f5f;
    SVar2 = pSVar1[4].fields;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)SVar2,(UnityEngine_Object_o *)killer,
                       (MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      lVar4 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
      if (lVar4 != 0) {
        if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
          il2cpp_init_class();
          lVar4 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
          if (lVar4 == 0) goto LAB_03f96f5f;
        }
        if (*(char *)(lVar4 + 0x82) != '\0') {
          __this_00 = (GameManagers_InGameManager_o *)(__this->fields).Team;
          if (__this_00 == (GameManagers_InGameManager_o *)0x0) goto LAB_03f96f5f;
          GameManagers_InGameManager__RegisterMainCharacterKill(__this_00,__this,(MethodInfo *)0x0);
        }
      }
    }
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_01 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  if (__this_01 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    return;
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
    __this_01 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    if (__this_01 == (CustomLogic_CustomLogicEvaluator_o *)0x0) goto LAB_03f96f5f;
  }
  CustomLogic_CustomLogicEvaluator__OnCharacterDie(__this_01,__this,killer,name,(MethodInfo *)0x0);
  pSVar1 = (__this->fields).Team;
  if (pSVar1 != (System_String_o *)0x0) {
    SVar2 = pSVar1[4].fields;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)SVar2,(UnityEngine_Object_o *)__this,
                       (MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      return;
    }
    lVar4 = *(long *)&(__this->fields).Dead;
    if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x20), lVar4 != 0)) {
      player = *(Photon_Realtime_Player_o **)(lVar4 + 0x80);
      if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      GameManagers_InGameManager__OnLocalPlayerDied(player,(MethodInfo *)0x0);
      return;
    }
  }
LAB_03f96f5f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseCharacter$$NotifyDamagedRPC
// il2cpp: void Characters_BaseCharacter__NotifyDamagedRPC (Characters_BaseCharacter_o* __this, int32_t viewId, System_String_o* name, int32_t damage, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x3f96f70

void Characters_BaseCharacter__NotifyDamagedRPC
               (Characters_BaseCharacter_o *__this,int32_t viewId,System_String_o *name,
               int32_t damage,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  float num;
  System_String_Fields x;
  GameManagers_InGameManager_o *__this_00;
  bool_conflict bVar1;
  Characters_BaseCharacter_o *killer;
  long lVar2;
  CustomLogic_CustomLogicEvaluator_o *__this_01;
  undefined8 *puVar3;
  System_String_array *values;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  undefined1 auStack_34 [4];
  
  if (DAT_05703fe6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    il2cpp_init_method_metadata(&" damaged ");
    il2cpp_init_method_metadata(&"(");
    il2cpp_init_method_metadata(&")");
    il2cpp_init_method_metadata(&") ");
    il2cpp_init_method_metadata(&" (");
    il2cpp_init_method_metadata(&" killed ");
    DAT_05703fe6 = '\x01';
  }
  lVar2 = *(long *)&(__this->fields).Dead;
  if ((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x20), lVar2 == 0)) goto LAB_03f97432;
  if (info.fields.Sender != *(Photon_Realtime_Player_o **)(lVar2 + 0x80)) {
    return;
  }
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_init_class();
  }
  killer = Utility_Util__FindCharacterByViewId(viewId,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)killer,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (killer == (Characters_BaseCharacter_o *)0x0) goto LAB_03f97432;
    name = *(System_String_o **)&(killer->fields)._disableKinematicTimeLeft;
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)killer,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (killer == (Characters_BaseCharacter_o *)0x0) goto LAB_03f97432;
    if (DAT_05703fc9 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Object);
      DAT_05703fc9 = '\x01';
    }
    pSVar5 = (killer->fields).Team;
    if (pSVar5 == (System_String_o *)0x0) goto LAB_03f97432;
    x = pSVar5[4].fields;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)killer,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
      if (lVar2 != 0) {
        if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
          il2cpp_init_class();
          lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
          if (lVar2 == 0) goto LAB_03f97432;
        }
        if (*(char *)(lVar2 + 0x82) != '\0') {
          __this_00 = (GameManagers_InGameManager_o *)(__this->fields).Team;
          if (__this_00 == (GameManagers_InGameManager_o *)0x0) goto LAB_03f97432;
          GameManagers_InGameManager__RegisterMainCharacterDamage
                    (__this_00,__this,damage,(MethodInfo *)0x0);
        }
      }
    }
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_01 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  if (__this_01 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    return;
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
    __this_01 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    if (__this_01 == (CustomLogic_CustomLogicEvaluator_o *)0x0) goto LAB_03f97432;
  }
  CustomLogic_CustomLogicEvaluator__OnCharacterDamaged
            (__this_01,__this,killer,name,damage,(MethodInfo *)0x0);
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x28), lVar2 != 0)) {
    if (*(char *)(lVar2 + 0x11) == '\0') {
      return;
    }
    if (*(int *)&(__this->fields).Cache < 1) {
      puVar3 = &" killed ";
    }
    else {
      puVar3 = &" damaged ";
    }
    pSVar5 = (System_String_o *)*puVar3;
    values = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string);
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    if (lVar2 != 0) {
      num = *(float *)(lVar2 + 0x20);
      if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar4 = Utility_Util__FormatFloat(num,2,(MethodInfo *)0x0);
      pSVar4 = System_String__Concat("(",pSVar4,") ",(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar4 = GameManagers_ChatManager__GetColorString(pSVar4,3,0,(MethodInfo *)0x0);
      if (values != (System_String_array *)0x0) {
        if ((int)values->max_length != 0) {
          values->m_Items[0] = pSVar4;
          il2cpp_runtime_glue(values->m_Items,pSVar4);
          if (1 < (uint)values->max_length) {
            values->m_Items[1] = name;
            il2cpp_runtime_glue(values->m_Items + 1,name);
            if (2 < (uint)values->max_length) {
              values->m_Items[2] = pSVar5;
              il2cpp_runtime_glue(values->m_Items + 2,pSVar5);
              if (3 < (uint)values->max_length) {
                values->m_Items[3] =
                     *(System_String_o **)&(__this->fields)._disableKinematicTimeLeft;
                il2cpp_runtime_glue(values->m_Items + 3);
                if (4 < (uint)values->max_length) {
                  values->m_Items[4] = " (";
                  il2cpp_runtime_glue(values->m_Items + 4);
                  pSVar5 = System_Int32__ToString((int32_t)auStack_34,(MethodInfo *)0x0);
                  if (5 < (uint)values->max_length) {
                    values->m_Items[5] = pSVar5;
                    il2cpp_runtime_glue(values->m_Items + 5,pSVar5);
                    if (6 < (uint)values->max_length) {
                      values->m_Items[6] = ")";
                      il2cpp_runtime_glue(values->m_Items + 6);
                      pSVar5 = System_String__Concat(values,(MethodInfo *)0x0);
                      GameManagers_ChatManager__AddFeed(pSVar5,(MethodInfo *)0x0);
                      return;
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
    }
  }
LAB_03f97432:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseCharacter$$GetHit
// il2cpp: void Characters_BaseCharacter__GetHit (Characters_BaseCharacter_o* __this, Characters_BaseCharacter_o* enemy, int32_t damage, System_String_o* type, System_String_o* collider, const MethodInfo* method);
// 0x3f97440

void Characters_BaseCharacter__GetHit
               (Characters_BaseCharacter_o *__this,Characters_BaseCharacter_o *enemy,int32_t damage,
               System_String_o *type,System_String_o *collider,MethodInfo *method)

{
  uint uVar1;
  Photon_Pun_PhotonView_o *__this_00;
  Il2CppObject *pIVar2;
  bool_conflict bVar3;
  System_Object_array *parameters;
  Il2CppObject *pIVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  int32_t iStack_40;
  undefined4 uStack_3c;
  Photon_Realtime_Player_o *pPStack_38;
  
  if (DAT_05703fe7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"GetHitRPC");
    il2cpp_init_method_metadata(&"");
    DAT_05703fe7 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)enemy,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  uVar7 = 0xffffffff;
  if ((char)bVar3 != '\0') {
    if (((enemy == (Characters_BaseCharacter_o *)0x0) ||
        (lVar5 = *(long *)&(enemy->fields).Dead, lVar5 == 0)) ||
       (lVar5 = *(long *)(lVar5 + 0x20), lVar5 == 0)) goto LAB_03f976cc;
    uVar7 = *(undefined4 *)(lVar5 + 0x94);
  }
  lVar5 = *(long *)&(__this->fields).Dead;
  if ((lVar5 != 0) &&
     (__this_00 = *(Photon_Pun_PhotonView_o **)(lVar5 + 0x20),
     __this_00 != (Photon_Pun_PhotonView_o *)0x0)) {
    pPStack_38 = (__this_00->fields)._Owner_k__BackingField;
    parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,5);
    uStack_3c = uVar7;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&uStack_3c);
    if (parameters != (System_Object_array *)0x0) {
      if ((pIVar4 != (Il2CppObject *)0x0) &&
         (lVar5 = il2cpp_runtime_glue(pIVar4,(((parameters->obj).klass)->_1).element_class),
         lVar5 == 0)) goto LAB_03f976d1;
      if ((int)parameters->max_length != 0) {
        parameters->m_Items[0] = pIVar4;
        il2cpp_runtime_glue(parameters->m_Items,pIVar4);
        if ("" == (Il2CppObject *)0x0) {
          uVar1 = (uint)parameters->max_length;
          pIVar4 = (Il2CppObject *)0x0;
          pIVar2 = "";
        }
        else {
          lVar5 = il2cpp_runtime_glue("",(((parameters->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto LAB_03f976d1;
          uVar1 = (uint)parameters->max_length;
          pIVar4 = "";
          pIVar2 = "";
        }
        "" = pIVar2;
        if (1 < uVar1) {
          parameters->m_Items[1] = pIVar4;
          il2cpp_runtime_glue(parameters->m_Items + 1,pIVar2);
          iStack_40 = damage;
          pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&iStack_40);
          if ((pIVar4 != (Il2CppObject *)0x0) &&
             (lVar5 = il2cpp_runtime_glue(pIVar4,(((parameters->obj).klass)->_1).element_class),
             lVar5 == 0)) {
LAB_03f976d1:
            uVar6 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
            il2cpp_glue_02274a00(uVar6,0);
          }
          if (2 < (uint)parameters->max_length) {
            parameters->m_Items[2] = pIVar4;
            il2cpp_runtime_glue(parameters->m_Items + 2,pIVar4);
            if ((type != (System_String_o *)0x0) &&
               (lVar5 = il2cpp_runtime_glue(type,(((parameters->obj).klass)->_1).element_class),
               lVar5 == 0)) goto LAB_03f976d1;
            if (3 < (uint)parameters->max_length) {
              parameters->m_Items[3] = (Il2CppObject *)type;
              il2cpp_runtime_glue(parameters->m_Items + 3,type);
              if ((collider != (System_String_o *)0x0) &&
                 (lVar5 = il2cpp_runtime_glue(collider,(((parameters->obj).klass)->_1).element_class)
                 , lVar5 == 0)) goto LAB_03f976d1;
              if (4 < (uint)parameters->max_length) {
                parameters->m_Items[4] = (Il2CppObject *)collider;
                il2cpp_runtime_glue(parameters->m_Items + 4,collider);
                Photon_Pun_PhotonView__RPC
                          (__this_00,"GetHitRPC",pPStack_38,parameters,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
LAB_03f976cc:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseCharacter$$GetHit
// il2cpp: void Characters_BaseCharacter__GetHit (Characters_BaseCharacter_o* __this, System_String_o* name, int32_t damage, System_String_o* type, System_String_o* collider, const MethodInfo* method);
// 0x3f976e0

/* WARNING: Type propagation algorithm not settling */

void Characters_BaseCharacter__GetHit
               (Characters_BaseCharacter_o *__this,System_String_o *name,int32_t damage,
               System_String_o *type,System_String_o *collider,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  System_Object_array *parameters;
  Il2CppObject *pIVar2;
  long lVar3;
  undefined8 uVar4;
  int32_t aiStack_48 [2];
  Photon_Realtime_Player_o *pPStack_40;
  Photon_Pun_PhotonView_o *pPStack_38;
  
  if (DAT_05703fe8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&"GetHitRPC");
    DAT_05703fe8 = '\x01';
  }
  if (*(char *)&(__this->fields).FeedVictimName != '\0') {
    return;
  }
  lVar3 = *(long *)&(__this->fields).Dead;
  if ((lVar3 != 0) &&
     (pPVar1 = *(Photon_Pun_PhotonView_o **)(lVar3 + 0x20), pPVar1 != (Photon_Pun_PhotonView_o *)0x0
     )) {
    pPStack_40 = (pPVar1->fields)._Owner_k__BackingField;
    pPStack_38 = pPVar1;
    parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,5);
    aiStack_48[1] = 0xffffffff;
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,aiStack_48 + 1);
    if (parameters != (System_Object_array *)0x0) {
      if ((pIVar2 != (Il2CppObject *)0x0) &&
         (lVar3 = il2cpp_runtime_glue(pIVar2,(((parameters->obj).klass)->_1).element_class),
         lVar3 == 0)) {
LAB_03f978f4:
        uVar4 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar4,0);
      }
      if ((int)parameters->max_length != 0) {
        parameters->m_Items[0] = pIVar2;
        il2cpp_runtime_glue(parameters->m_Items,pIVar2);
        if ((name != (System_String_o *)0x0) &&
           (lVar3 = il2cpp_runtime_glue(name,(((parameters->obj).klass)->_1).element_class),
           lVar3 == 0)) goto LAB_03f978f4;
        if (1 < (uint)parameters->max_length) {
          parameters->m_Items[1] = (Il2CppObject *)name;
          il2cpp_runtime_glue(parameters->m_Items + 1,name);
          aiStack_48[0] = damage;
          pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,aiStack_48);
          if ((pIVar2 != (Il2CppObject *)0x0) &&
             (lVar3 = il2cpp_runtime_glue(pIVar2,(((parameters->obj).klass)->_1).element_class),
             lVar3 == 0)) goto LAB_03f978f4;
          if (2 < (uint)parameters->max_length) {
            parameters->m_Items[2] = pIVar2;
            il2cpp_runtime_glue(parameters->m_Items + 2,pIVar2);
            if ((type != (System_String_o *)0x0) &&
               (lVar3 = il2cpp_runtime_glue(type,(((parameters->obj).klass)->_1).element_class),
               lVar3 == 0)) goto LAB_03f978f4;
            if (3 < (uint)parameters->max_length) {
              parameters->m_Items[3] = (Il2CppObject *)type;
              il2cpp_runtime_glue(parameters->m_Items + 3,type);
              if ((collider != (System_String_o *)0x0) &&
                 (lVar3 = il2cpp_runtime_glue(collider,(((parameters->obj).klass)->_1).element_class)
                 , lVar3 == 0)) goto LAB_03f978f4;
              if (4 < (uint)parameters->max_length) {
                parameters->m_Items[4] = (Il2CppObject *)collider;
                il2cpp_runtime_glue(parameters->m_Items + 4,collider);
                Photon_Pun_PhotonView__RPC
                          (pPStack_38,"GetHitRPC",pPStack_40,parameters,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseCharacter$$GetDamaged
// il2cpp: void Characters_BaseCharacter__GetDamaged (Characters_BaseCharacter_o* __this, System_String_o* name, int32_t damage, const MethodInfo* method);
// 0x3f97910

void Characters_BaseCharacter__GetDamaged
               (Characters_BaseCharacter_o *__this,System_String_o *name,int32_t damage,
               MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this_00;
  Photon_Realtime_Player_o *targetPlayer;
  System_Object_array *parameters;
  long lVar1;
  Il2CppObject *pIVar2;
  undefined8 uVar3;
  int32_t iStack_2c;
  
  if (DAT_05703fe9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&"GetDamagedRPC");
    DAT_05703fe9 = '\x01';
  }
  if (*(char *)&(__this->fields).FeedVictimName != '\0') {
    return;
  }
  lVar1 = *(long *)&(__this->fields).Dead;
  if ((lVar1 != 0) &&
     (__this_00 = *(Photon_Pun_PhotonView_o **)(lVar1 + 0x20),
     __this_00 != (Photon_Pun_PhotonView_o *)0x0)) {
    targetPlayer = (__this_00->fields)._Owner_k__BackingField;
    parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,2);
    if (parameters != (System_Object_array *)0x0) {
      if ((name != (System_String_o *)0x0) &&
         (lVar1 = il2cpp_runtime_glue(name,(((parameters->obj).klass)->_1).element_class), lVar1 == 0
         )) {
LAB_03f97a50:
        uVar3 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar3,0);
      }
      if ((int)parameters->max_length != 0) {
        parameters->m_Items[0] = (Il2CppObject *)name;
        il2cpp_runtime_glue(parameters->m_Items,name);
        iStack_2c = damage;
        pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&iStack_2c);
        if ((pIVar2 != (Il2CppObject *)0x0) &&
           (lVar1 = il2cpp_runtime_glue(pIVar2,(((parameters->obj).klass)->_1).element_class),
           lVar1 == 0)) goto LAB_03f97a50;
        if (1 < (uint)parameters->max_length) {
          parameters->m_Items[1] = pIVar2;
          il2cpp_runtime_glue(parameters->m_Items + 1,pIVar2);
          Photon_Pun_PhotonView__RPC
                    (__this_00,"GetDamagedRPC",targetPlayer,parameters,(MethodInfo *)0x0);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseCharacter$$GetKilled
// il2cpp: void Characters_BaseCharacter__GetKilled (Characters_BaseCharacter_o* __this, System_String_o* name, const MethodInfo* method);
// 0x3f97a60

void Characters_BaseCharacter__GetKilled
               (Characters_BaseCharacter_o *__this,System_String_o *name,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this_00;
  Photon_Realtime_Player_o *targetPlayer;
  System_Object_array *parameters;
  long lVar1;
  undefined8 uVar2;
  MethodInfo *extraout_RDX;
  
  if (DAT_05703fea == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&"GetKilledRPC");
    DAT_05703fea = '\x01';
    method = extraout_RDX;
  }
  if (*(char *)&(__this->fields).FeedVictimName != '\0') {
    return;
  }
  lVar1 = *(long *)&(__this->fields).Dead;
  if ((lVar1 != 0) &&
     (__this_00 = *(Photon_Pun_PhotonView_o **)(lVar1 + 0x20),
     __this_00 != (Photon_Pun_PhotonView_o *)0x0)) {
    targetPlayer = (__this_00->fields)._Owner_k__BackingField;
    parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1,method);
    if (parameters != (System_Object_array *)0x0) {
      if (name != (System_String_o *)0x0) {
        lVar1 = il2cpp_runtime_glue(name,(((parameters->obj).klass)->_1).element_class);
        if (lVar1 == 0) {
          uVar2 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar2,0);
        }
      }
      if ((int)parameters->max_length != 0) {
        parameters->m_Items[0] = (Il2CppObject *)name;
        il2cpp_runtime_glue(parameters->m_Items,name);
        Photon_Pun_PhotonView__RPC(__this_00,"GetKilledRPC",targetPlayer,parameters,(MethodInfo *)0x0)
        ;
        return;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseCharacter$$BlowAway
// il2cpp: void Characters_BaseCharacter__BlowAway (Characters_BaseCharacter_o* __this, UnityEngine_Vector3_o source, float force, float maxDistance, const MethodInfo* method);
// 0x3f97b60

void Characters_BaseCharacter__BlowAway
               (Characters_BaseCharacter_o *__this,UnityEngine_Vector3_o source,float force,
               float maxDistance,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this_00;
  Photon_Realtime_Player_o *targetPlayer;
  System_Object_array *parameters;
  Il2CppObject *pIVar1;
  long lVar2;
  undefined8 uVar3;
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
  if (DAT_05703feb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    il2cpp_init_method_metadata(&"BlowAwayRPC");
    DAT_05703feb = '\x01';
  }
  if (*(char *)&(__this->fields).FeedVictimName != '\0') {
    return;
  }
  lVar2 = *(long *)&(__this->fields).Dead;
  if ((lVar2 != 0) &&
     (__this_00 = *(Photon_Pun_PhotonView_o **)(lVar2 + 0x20),
     __this_00 != (Photon_Pun_PhotonView_o *)0x0)) {
    targetPlayer = (__this_00->fields)._Owner_k__BackingField;
    parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,3);
    local_48 = local_38._0_8_;
    local_40 = source.fields.z;
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_Vector3,&local_48);
    if (parameters != (System_Object_array *)0x0) {
      if ((pIVar1 != (Il2CppObject *)0x0) &&
         (lVar2 = il2cpp_runtime_glue(pIVar1,(((parameters->obj).klass)->_1).element_class),
         lVar2 == 0)) {
LAB_03f97d4f:
        uVar3 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar3,0);
      }
      if ((int)parameters->max_length != 0) {
        parameters->m_Items[0] = pIVar1;
        il2cpp_runtime_glue(parameters->m_Items,pIVar1);
        local_4c = force;
        pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&local_4c);
        if ((pIVar1 != (Il2CppObject *)0x0) &&
           (lVar2 = il2cpp_runtime_glue(pIVar1,(((parameters->obj).klass)->_1).element_class),
           lVar2 == 0)) goto LAB_03f97d4f;
        if (1 < (uint)parameters->max_length) {
          parameters->m_Items[1] = pIVar1;
          il2cpp_runtime_glue(parameters->m_Items + 1,pIVar1);
          local_50 = maxDistance;
          pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&local_50);
          if ((pIVar1 != (Il2CppObject *)0x0) &&
             (lVar2 = il2cpp_runtime_glue(pIVar1,(((parameters->obj).klass)->_1).element_class),
             lVar2 == 0)) goto LAB_03f97d4f;
          if (2 < (uint)parameters->max_length) {
            parameters->m_Items[2] = pIVar1;
            il2cpp_runtime_glue(parameters->m_Items + 2,pIVar1);
            Photon_Pun_PhotonView__RPC
                      (__this_00,"BlowAwayRPC",targetPlayer,parameters,(MethodInfo *)0x0);
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseCharacter$$BlowAwayRPC
// il2cpp: void Characters_BaseCharacter__BlowAwayRPC (Characters_BaseCharacter_o* __this, UnityEngine_Vector3_o source, float force, float maxDistance, const MethodInfo* method);
// 0x3f97d60

void Characters_BaseCharacter__BlowAwayRPC
               (Characters_BaseCharacter_o *__this,UnityEngine_Vector3_o source,float force,
               float maxDistance,MethodInfo *method)

{
  undefined8 uVar1;
  long lVar2;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Rigidbody_o *pUVar3;
  undefined1 auVar4 [16];
  float in_XMM0_Dc;
  float extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  float in_XMM0_Dd;
  float extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auVar10 [16];
  float fVar11;
  UnityEngine_Vector3_o UVar12;
  UnityEngine_Vector3_o force_00;
  float fStack_28;
  undefined8 uVar9;
  
  if (*(char *)&(__this->fields).FeedVictimName != '\0') {
    return;
  }
  lVar2 = *(long *)&(__this->fields).Dead;
  if ((lVar2 == 0) || (*(long *)(lVar2 + 0x20) == 0)) goto LAB_03f980b0;
  if (*(char *)(*(long *)(lVar2 + 0x20) + 0x68) == '\0') {
    return;
  }
  if (*(UnityEngine_Transform_o **)(lVar2 + 0x10) == (UnityEngine_Transform_o *)0x0)
  goto LAB_03f980b0;
  UVar12 = UnityEngine_Transform__get_position
                     (*(UnityEngine_Transform_o **)(lVar2 + 0x10),(MethodInfo *)0x0);
  if (DAT_056fdea6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fdea6 = '\x01';
  }
  fVar11 = UVar12.fields.y - source.fields.y;
  fStack_28 = source.fields.x;
  fVar5 = UVar12.fields.z - source.fields.z;
  fVar6 = UVar12.fields.x - fStack_28;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar5 = fVar6 * fVar6 + fVar11 * fVar11 + fVar5 * fVar5;
  if (fVar5 < 0.0) {
    fVar5 = sqrtf(fVar5);
  }
  else {
    fVar5 = SQRT(fVar5);
  }
  if (maxDistance < fVar5) {
    return;
  }
  uVar8 = 0;
  uVar7 = 0;
  lVar2 = *(long *)&(__this->fields).Dead;
  if ((lVar2 == 0) ||
     (__this_00 = *(UnityEngine_Transform_o **)(lVar2 + 0x10),
     __this_00 == (UnityEngine_Transform_o *)0x0)) goto LAB_03f980b0;
  UVar12 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
  if (DAT_056fde20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    uVar7 = 0;
    uVar8 = 0;
    DAT_056fde20 = '\x01';
  }
  auVar10._0_4_ = UVar12.fields.x - fStack_28;
  auVar10._4_4_ = UVar12.fields.y - source.fields.y;
  auVar10._8_4_ = extraout_XMM0_Dc - in_XMM0_Dc;
  auVar10._12_4_ = extraout_XMM0_Dd - in_XMM0_Dd;
  fVar5 = UVar12.fields.z - source.fields.z;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
    uVar7 = 0;
    uVar8 = 0;
  }
  fVar6 = fVar5 * fVar5 + auVar10._4_4_ * auVar10._4_4_ + auVar10._0_4_ * auVar10._0_4_;
  if (fVar6 < 0.0) {
    fVar6 = sqrtf(fVar6);
    uVar7 = extraout_XMM0_Dc_00;
    uVar8 = extraout_XMM0_Dd_00;
    if (fVar6 <= 1e-05) goto LAB_03f97f4a;
LAB_03f97fa6:
    fVar5 = fVar5 / fVar6;
    auVar4._4_4_ = fVar6;
    auVar4._0_4_ = fVar6;
    auVar4._8_4_ = uVar7;
    auVar4._12_4_ = uVar8;
    auVar10 = divps(auVar10,auVar4);
    uVar9 = auVar10._0_8_;
  }
  else {
    fVar6 = SQRT(fVar6);
    if (1e-05 < fVar6) goto LAB_03f97fa6;
LAB_03f97f4a:
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    uVar9 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar5 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  fVar6 = (float)((ulong)uVar9 >> 0x20);
  if ((0.0 <= fVar6) && (*(char *)((long)&(__this->fields).Animation + 4) != '\0')) {
    lVar2 = *(long *)&(__this->fields).Dead;
    if (lVar2 == 0) goto LAB_03f980b0;
    pUVar3 = *(UnityEngine_Rigidbody_o **)(lVar2 + 0x18);
    if (DAT_056fde1f == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fde1f = '\x01';
    }
    if (pUVar3 == (UnityEngine_Rigidbody_o *)0x0) goto LAB_03f980b0;
    fVar11 = 10.0;
    if (force <= 10.0) {
      fVar11 = force;
    }
    uVar1 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
    UVar12.fields.x = fVar11 * (float)uVar1;
    UVar12.fields.y = fVar11 * (float)((ulong)uVar1 >> 0x20);
    UVar12.fields.z = fVar11 * *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
    UnityEngine_Rigidbody__AddForce(pUVar3,UVar12,2,(MethodInfo *)0x0);
  }
  lVar2 = *(long *)&(__this->fields).Dead;
  if ((lVar2 != 0) &&
     (pUVar3 = *(UnityEngine_Rigidbody_o **)(lVar2 + 0x18), pUVar3 != (UnityEngine_Rigidbody_o *)0x0
     )) {
    force_00.fields.z = fVar5 * force;
    force_00.fields.y = fVar6 * force;
    force_00.fields.x = (float)uVar9 * force;
    UnityEngine_Rigidbody__AddForce(pUVar3,force_00,2,(MethodInfo *)0x0);
    return;
  }
LAB_03f980b0:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseCharacter$$Awake
// il2cpp: void Characters_BaseCharacter__Awake (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x3f980c0

void Characters_BaseCharacter__Awake(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  byte bVar1;
  System_String_o *pSVar2;
  UnityEngine_Behaviour_o *__this_00;
  long lVar3;
  Il2CppClass *pIVar4;
  undefined4 uVar5;
  GameManagers_InGameManager_o *pGVar6;
  UnityEngine_GameObject_o *pUVar7;
  Il2CppObject *pIVar8;
  Characters_AnimationHandler_o *__this_01;
  undefined1 auVar9 [16];
  
  if (DAT_05703fec == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AnimationHandler);
    il2cpp_init_method_metadata(&MethodInfo_BaseMovementSync_GetComponent_BaseMovementSync);
    il2cpp_init_method_metadata(&MethodInfo_Outline_AddComponent_Outline);
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_05703fec = '\x01';
  }
  pIVar4 = TypeInfo_InGameManager;
  pSVar2 = *(System_String_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (pSVar2 != (System_String_o *)0x0) {
    bVar1 = (TypeInfo_InGameManager->_2).naturalAligment;
    if ((bVar1 <= (pSVar2->klass->_2).naturalAligment) &&
       ((pSVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameManager)) {
      (__this->fields).Team = pSVar2;
      if (((pSVar2->klass->_2).naturalAligment < bVar1) ||
         ((pSVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != pIVar4)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pSVar2,pIVar4);
      }
      il2cpp_runtime_glue(&(__this->fields).Team);
    }
  }
  (*(__this->klass->vtable)._68_CreateCache.methodPtr)
            (__this,0,(__this->klass->vtable)._68_CreateCache.method);
  (*(__this->klass->vtable)._92_SetColliders.methodPtr)
            (__this,(__this->klass->vtable)._92_SetColliders.method);
  uVar5 = (*(__this->klass->vtable)._57_get_DefaultMaxHealth.methodPtr)
                    (__this,(__this->klass->vtable)._57_get_DefaultMaxHealth.method);
  *(undefined4 *)&(__this->fields).field_0x6c = uVar5;
  *(undefined4 *)&(__this->fields).Cache = uVar5;
  pGVar6 = (GameManagers_InGameManager_o *)
           UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)__this,MethodInfo_BaseMovementSync_GetComponent_BaseMovementSync);
  (__this->fields)._inGameManager = pGVar6;
  il2cpp_runtime_glue(&(__this->fields)._inGameManager);
  pUVar7 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
    pIVar8 = UnityEngine_GameObject__AddComponent<object>(pUVar7,MethodInfo_Outline_AddComponent_Outline);
    *(Il2CppObject **)&(__this->fields).JustGrounded = pIVar8;
    il2cpp_runtime_glue(&(__this->fields).JustGrounded);
    __this_00 = *(UnityEngine_Behaviour_o **)&(__this->fields).JustGrounded;
    if (__this_00 != (UnityEngine_Behaviour_o *)0x0) {
      UnityEngine_Behaviour__set_enabled(__this_00,0,(MethodInfo *)0x0);
      pUVar7 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      auVar9 = il2cpp_runtime_glue(TypeInfo_AnimationHandler);
      __this_01 = auVar9._0_8_;
      Characters_AnimationHandler___ctor(__this_01,pUVar7,auVar9._8_8_);
      *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS = __this_01;
      il2cpp_runtime_glue(&(__this->fields)._cameraFPS,__this_01);
      lVar3 = *(long *)&(__this->fields).Dead;
      if ((lVar3 != 0) && (*(long *)(lVar3 + 0x20) != 0)) {
        if (*(char *)(*(long *)(lVar3 + 0x20) + 0x68) != '\0') {
          return;
        }
        if (*(UnityEngine_Rigidbody_o **)(lVar3 + 0x18) != (UnityEngine_Rigidbody_o *)0x0) {
          UnityEngine_Rigidbody__set_isKinematic
                    (*(UnityEngine_Rigidbody_o **)(lVar3 + 0x18),1,(MethodInfo *)0x0);
          (__this->fields).MaxSoundDistance = 0.0;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseCharacter$$CreateCharacterIcon
// il2cpp: void Characters_BaseCharacter__CreateCharacterIcon (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x3f982e0

void Characters_BaseCharacter__CreateCharacterIcon
               (Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  return;
}


// Characters.BaseCharacter$$SetColliders
// il2cpp: void Characters_BaseCharacter__SetColliders (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x3f982f0

void Characters_BaseCharacter__SetColliders(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  return;
}


// Characters.BaseCharacter$$Start
// il2cpp: void Characters_BaseCharacter__Start (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x3f98300

void Characters_BaseCharacter__Start(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  long lVar1;
  Il2CppObject *__this_00;
  
  if (DAT_05703fed == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MinimapHandler);
    DAT_05703fed = '\x01';
  }
  if (*(int *)(TypeInfo_MinimapHandler + 0xe4) == 0) {
    il2cpp_init_class();
  }
  UI_MinimapHandler__CreateMinimapIcon(__this,(MethodInfo *)0x0);
  if (DAT_05703fee == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WaitAndNotifySpawn_d__128);
    DAT_05703fee = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitAndNotifySpawn_d__128);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 2,__this);
    UnityEngine_MonoBehaviour__StartCoroutine
              ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
               (MethodInfo *)0x0);
    lVar1 = *(long *)&(__this->fields).Dead;
    if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0x20), lVar1 != 0)) {
      if (*(char *)(lVar1 + 0x68) != '\0') {
        (*(__this->klass->vtable)._69_CreateDetection.methodPtr)
                  (__this,(__this->klass->vtable)._69_CreateDetection.method);
        return;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseCharacter$$WaitAndNotifySpawn
// il2cpp: System_Collections_IEnumerator_o* Characters_BaseCharacter__WaitAndNotifySpawn (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x3f983f0

System_Collections_IEnumerator_o *
Characters_BaseCharacter__WaitAndNotifySpawn(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_05703fee == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WaitAndNotifySpawn_d__128);
    DAT_05703fee = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitAndNotifySpawn_d__128);
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


// Characters.BaseCharacter$$WaitAndNotifyReloaded
// il2cpp: System_Collections_IEnumerator_o* Characters_BaseCharacter__WaitAndNotifyReloaded (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x3f98480

System_Collections_IEnumerator_o *
Characters_BaseCharacter__WaitAndNotifyReloaded
          (Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_05703fef == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WaitAndNotifyReloaded_d__129);
    DAT_05703fef = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitAndNotifyReloaded_d__129);
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


// Characters.BaseCharacter$$GetCurrentAnimation
// il2cpp: System_String_o* Characters_BaseCharacter__GetCurrentAnimation (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x3f94960

System_String_o *
Characters_BaseCharacter__GetCurrentAnimation(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  Characters_AnimationHandler_o *__this_00;
  System_String_o *pSVar1;
  
  __this_00 = *(Characters_AnimationHandler_o **)&(__this->fields)._cameraFPS;
  if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
    pSVar1 = Characters_AnimationHandler__GetCurrentAnimation(__this_00,method);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseCharacter$$GetTargetRotation
// il2cpp: UnityEngine_Quaternion_o Characters_BaseCharacter__GetTargetRotation (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x3f98510

UnityEngine_Quaternion_o
Characters_BaseCharacter__GetTargetRotation(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  undefined1 auVar1 [12];
  UnityEngine_Quaternion_Fields UVar2;
  
  auVar1._4_8_ = 0;
  auVar1._0_4_ = *(float *)&(__this->fields).Detection * 0.017453292;
  UVar2 = (UnityEngine_Quaternion_Fields)
          UnityEngine_Quaternion__Internal_FromEulerRad
                    ((UnityEngine_Vector3_o)(auVar1 << 0x20),(MethodInfo *)0x0);
  return (UnityEngine_Quaternion_o)UVar2;
}


// Characters.BaseCharacter$$GetTargetDirection
// il2cpp: UnityEngine_Vector3_o Characters_BaseCharacter__GetTargetDirection (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x3f98540

UnityEngine_Vector3_o
Characters_BaseCharacter__GetTargetDirection(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined1 auVar5 [16];
  undefined4 uVar6;
  undefined4 uVar7;
  UnityEngine_Vector3_o UVar8;
  
  fVar2 = (90.0 - *(float *)&(__this->fields).Detection) * 0.017453292;
  fVar3 = cosf(fVar2);
  fVar2 = sinf(fVar2);
  if (DAT_056fde20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    uVar6 = 0;
    uVar7 = 0;
    DAT_056fde20 = '\x01';
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
    uVar6 = extraout_XMM0_Dc;
    uVar7 = extraout_XMM0_Dd;
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    uVar6 = 0;
    uVar7 = 0;
  }
  fVar4 = fVar2 * fVar2 + fVar3 * fVar3 + 0.0;
  if (fVar4 < 0.0) {
    fVar4 = sqrtf(fVar4);
    uVar6 = extraout_XMM0_Dc_00;
    uVar7 = extraout_XMM0_Dd_00;
  }
  else {
    fVar4 = SQRT(fVar4);
  }
  if (fVar4 <= 1e-05) {
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    return (UnityEngine_Vector3_o)**(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8);
  }
  auVar5._4_4_ = fVar4;
  auVar5._0_4_ = fVar4;
  auVar5._8_4_ = uVar6;
  auVar5._12_4_ = uVar7;
  auVar5 = divps(ZEXT416((uint)fVar3),auVar5);
  UVar8.fields.z = fVar2 / fVar4;
  UVar8.fields.x = (float)(int)auVar5._0_8_;
  UVar8.fields.y = (float)(int)((ulong)auVar5._0_8_ >> 0x20);
  return (UnityEngine_Vector3_o)UVar8.fields;
}


// Characters.BaseCharacter$$GetAngleToTarget
// il2cpp: float Characters_BaseCharacter__GetAngleToTarget (Characters_BaseCharacter_o* __this, UnityEngine_Vector3_o targetDirection, const MethodInfo* method);
// 0x3f98690

float Characters_BaseCharacter__GetAngleToTarget
                (Characters_BaseCharacter_o *__this,UnityEngine_Vector3_o targetDirection,
                MethodInfo *method)

{
  long lVar1;
  UnityEngine_Transform_o *__this_00;
  float fVar2;
  float fVar3;
  UnityEngine_Vector3_o UVar4;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_o rotation;
  
  fVar2 = atan2f(targetDirection.fields.z,targetDirection.fields.x);
  lVar1 = *(long *)&(__this->fields).Dead;
  if (lVar1 != 0) {
    __this_00 = *(UnityEngine_Transform_o **)(lVar1 + 0x10);
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      rotation = UnityEngine_Transform__get_rotation(__this_00,(MethodInfo *)0x0);
      UVar4 = UnityEngine_Quaternion__Internal_ToEulerRad(rotation,(MethodInfo *)0x0);
      euler.fields.x = UVar4.fields.x * 57.29578;
      euler.fields.y = UVar4.fields.y * 57.29578;
      euler.fields.z = UVar4.fields.z * 57.29578;
      UVar4 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
      fVar3 = UVar4.fields.y + -90.0 + fVar2 * 57.29578;
      fVar2 = floorf(fVar3 / 360.0);
      fVar3 = fVar3 - fVar2 * 360.0;
      fVar2 = 360.0;
      if (fVar3 <= 360.0) {
        fVar2 = fVar3;
      }
      fVar2 = (float)(-(uint)(0.0 <= fVar3) & (uint)fVar2);
      return -(float)(~-(uint)(180.0 < fVar2) & (uint)fVar2 |
                     (uint)(fVar2 + -360.0) & -(uint)(180.0 < fVar2));
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseCharacter$$CheckGround
// il2cpp: void Characters_BaseCharacter__CheckGround (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x3f98780

void Characters_BaseCharacter__CheckGround(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  long lVar3;
  UnityEngine_Transform_o *__this_00;
  char cVar4;
  uint uVar5;
  undefined1 uVar6;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  UnityEngine_Vector3_o UVar7;
  undefined4 uStack_50;
  undefined4 uStack_4c;
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
  
  uStack_50 = 0;
  *(undefined1 *)((long)&(__this->fields).Animation + 5) = 0;
  lVar3 = *(long *)&(__this->fields).Dead;
  if ((lVar3 != 0) &&
     (__this_00 = *(UnityEngine_Transform_o **)(lVar3 + 0x10),
     __this_00 != (UnityEngine_Transform_o *)0x0)) {
    UVar7 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
    auStack_48._0_4_ = UVar7.fields.x;
    auStack_48._4_4_ = UVar7.fields.y;
    fStack_40 = extraout_XMM0_Dc;
    fStack_3c = extraout_XMM0_Dd;
    if (DAT_056fde1f == '\0') {
      auStack_48 = (undefined1  [8])UVar7.fields._0_8_;
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fde1f = '\x01';
    }
    uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x18);
    fStack_28 = (float)uVar2;
    fStack_24 = (float)((ulong)uVar2 >> 0x20);
    fVar1 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x20);
    auStack_48._4_4_ = (float)auStack_48._4_4_ + fStack_24 * 0.1;
    auStack_48._0_4_ = (float)auStack_48._0_4_ + fStack_28 * 0.1;
    fStack_40 = fStack_40 + 0.0;
    fStack_3c = fStack_3c + 0.0;
    fStack_28 = -fStack_28;
    fStack_24 = -fStack_24;
    uStack_20 = 0x80000000;
    uStack_1c = 0x80000000;
    fStack_38 = -fVar1;
    uStack_34 = 0x80000000;
    uStack_30 = 0x80000000;
    uStack_2c = 0x80000000;
    uStack_4c = (*(__this->klass->vtable)._61_get_GroundDistance.methodPtr)
                          (__this,(__this->klass->vtable)._61_get_GroundDistance.method);
    uStack_50 = (*(__this->klass->vtable)._60_get_GroundMask.methodPtr)(__this);
    uVar6 = 0;
    uVar5 = UnityEngine_LayerMask__get_value
                      ((UnityEngine_LayerMask_Fields)(int32_t)&uStack_50,(MethodInfo *)0x0);
    cVar4 = (*(__this->klass->vtable)._97_CheckRaycastIgnoreTriggers.methodPtr)
                      (auStack_48._0_4_,UVar7.fields.z + fVar1 * 0.1,fStack_28,fStack_38,uStack_4c,
                       __this,(ulong)uVar5,
                       (__this->klass->vtable)._97_CheckRaycastIgnoreTriggers.method);
    if (cVar4 != '\0') {
      if (*(char *)((long)&(__this->fields).Animation + 4) != '\0') {
        return;
      }
      *(undefined1 *)((long)&(__this->fields).Animation + 5) = 1;
      uVar6 = 1;
    }
    *(undefined1 *)((long)&(__this->fields).Animation + 4) = uVar6;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseCharacter$$CheckRaycastIgnoreTriggers
// il2cpp: bool Characters_BaseCharacter__CheckRaycastIgnoreTriggers (Characters_BaseCharacter_o* __this, UnityEngine_Vector3_o origin, UnityEngine_Vector3_o direction, float distance, int32_t layerMask, const MethodInfo* method);
// 0x3f988f0

bool_conflict
Characters_BaseCharacter__CheckRaycastIgnoreTriggers
          (Characters_BaseCharacter_o *__this,UnityEngine_Vector3_o origin,
          UnityEngine_Vector3_o direction,float distance,int32_t layerMask,MethodInfo *method)

{
  undefined8 uVar1;
  char acStack_40 [48];
  
  if (DAT_05703ff0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_HasValue);
    DAT_05703ff0 = '\x01';
  }
  uVar1 = (*(__this->klass->vtable)._98_RaycastIgnoreTriggers.methodPtr)
                    (origin.fields.x,origin.fields.z,direction.fields.x,direction.fields.z,distance,
                     acStack_40,__this,layerMask,
                     (__this->klass->vtable)._98_RaycastIgnoreTriggers.method);
  return (bool_conflict)CONCAT71((int7)((ulong)uVar1 >> 8),acStack_40[0] != '\0');
}


// Characters.BaseCharacter$$RaycastIgnoreTriggers
// il2cpp: System_Nullable_RaycastHit__o Characters_BaseCharacter__RaycastIgnoreTriggers (Characters_BaseCharacter_o* __this, UnityEngine_Vector3_o origin, UnityEngine_Vector3_o direction, float distance, int32_t layerMask, const MethodInfo* method);
// 0x3f98980

System_Nullable_RaycastHit__o *
Characters_BaseCharacter__RaycastIgnoreTriggers
          (System_Nullable_RaycastHit__o *__return_storage_ptr__,Characters_BaseCharacter_o *__this,
          UnityEngine_Vector3_o origin,UnityEngine_Vector3_o direction,float distance,
          int32_t layerMask,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_Vector2_Fields UVar2;
  int32_t iVar3;
  undefined4 uVar4;
  UnityEngine_RaycastHit_o __this_00;
  System_Nullable_RaycastHit__o __this_01;
  UnityEngine_RaycastHit_o value;
  undefined4 uVar5;
  int32_t iVar6;
  bool_conflict bVar7;
  UnityEngine_RaycastHit_array *pUVar8;
  UnityEngine_Collider_o *__this_02;
  int32_t extraout_EDX;
  UnityEngine_RaycastHit_o *pUVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  UnityEngine_Vector3_o origin_00;
  UnityEngine_Vector3_o direction_00;
  undefined8 in_stack_ffffffffffffff48;
  undefined8 in_stack_ffffffffffffff50;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 in_stack_ffffffffffffff60;
  undefined4 in_stack_ffffffffffffff64;
  undefined4 in_stack_ffffffffffffff68;
  undefined8 in_stack_ffffffffffffff6c;
  int32_t in_stack_ffffffffffffff74;
  Il2CppMethodPointer pIVar13;
  Il2CppMethodPointer pIVar14;
  InvokerMethod pIVar15;
  undefined4 local_5c;
  float fStack_58;
  float fStack_54;
  
  fVar12 = direction.fields.z;
  fVar11 = origin.fields.z;
  if (DAT_05703ff1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_UnityEngine_RaycastHit);
    il2cpp_init_method_metadata(&TypeInfo_Physics);
    DAT_05703ff1 = '\x01';
    layerMask = extraout_EDX;
  }
  uVar5 = (*(__this->klass->vtable)._60_get_GroundMask.methodPtr)
                    (__this,(__this->klass->vtable)._60_get_GroundMask.method,layerMask);
  iVar6 = UnityEngine_LayerMask__get_value
                    ((UnityEngine_LayerMask_Fields)(int32_t)&stack0xffffffffffffff78,
                     (MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
    il2cpp_init_class();
  }
  origin_00.fields.z = fVar11;
  origin_00.fields.x = (float)(int)origin.fields._0_8_;
  origin_00.fields.y = (float)(int)((ulong)origin.fields._0_8_ >> 0x20);
  direction_00.fields.z = fVar12;
  direction_00.fields.x = (float)(int)direction.fields._0_8_;
  direction_00.fields.y = (float)(int)((ulong)direction.fields._0_8_ >> 0x20);
  pUVar8 = UnityEngine_Physics__RaycastAll(origin_00,direction_00,distance,iVar6,(MethodInfo *)0x0);
  if (pUVar8 != (UnityEngine_RaycastHit_array *)0x0) {
    pUVar9 = pUVar8->m_Items;
    uVar10 = 0;
    while( true ) {
      uVar1 = (uint)pUVar8->max_length;
      if ((long)(int)uVar1 <= (long)uVar10) {
        (__return_storage_ptr__->fields).value.fields.m_Distance = 0.0;
        (__return_storage_ptr__->fields).value.fields.m_UV.fields.x = 0.0;
        *(undefined8 *)&(__return_storage_ptr__->fields).value.fields.m_UV.fields.y = 0;
        pUVar9 = &(__return_storage_ptr__->fields).value;
        (pUVar9->fields).m_Normal.fields.x = 0.0;
        (pUVar9->fields).m_Normal.fields.y = 0.0;
        *(undefined8 *)&(__return_storage_ptr__->fields).value.fields.m_Normal.fields.z = 0;
        (__return_storage_ptr__->fields).hasValue = 0;
        (__return_storage_ptr__->fields).value.fields.m_Point.fields.x = 0.0;
        pUVar9 = &(__return_storage_ptr__->fields).value;
        (pUVar9->fields).m_Point.fields.y = 0.0;
        (pUVar9->fields).m_Point.fields.z = 0.0;
        return __return_storage_ptr__;
      }
      if (uVar1 <= uVar10) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pIVar13 = *(Il2CppMethodPointer *)&(pUVar9->fields).m_Point.fields;
      pIVar14 = *(Il2CppMethodPointer *)&(pUVar9->fields).m_Point.fields.z;
      pIVar15 = *(InvokerMethod *)&(pUVar9->fields).m_Normal.fields.y;
      iVar3 = (pUVar9->fields).m_FaceID;
      uVar4 = (pUVar9->fields).m_Distance;
      UVar2 = (pUVar9->fields).m_UV.fields;
      iVar6 = (pUVar9->fields).m_Collider;
      fStack_58 = UVar2.x;
      fStack_54 = UVar2.y;
      __this_00.fields.m_Point.fields.z = (float)(int)in_stack_ffffffffffffff50;
      __this_00.fields.m_Normal.fields.x = (float)(int)((ulong)in_stack_ffffffffffffff50 >> 0x20);
      __this_00.fields.m_Point.fields.x = (float)(int)in_stack_ffffffffffffff48;
      __this_00.fields.m_Point.fields.y = (float)(int)((ulong)in_stack_ffffffffffffff48 >> 0x20);
      __this_00.fields.m_Normal.fields.y = (float)(int)in_stack_ffffffffffffff58;
      __this_00.fields.m_Normal.fields.z = (float)(int)((ulong)in_stack_ffffffffffffff58 >> 0x20);
      __this_00.fields.m_FaceID = in_stack_ffffffffffffff60;
      __this_00.fields.m_Distance = (float)in_stack_ffffffffffffff64;
      __this_00.fields.m_UV.fields.x = (float)in_stack_ffffffffffffff68;
      __this_00.fields.m_UV.fields.y = (float)(int)in_stack_ffffffffffffff6c;
      __this_00.fields.m_Collider = (int)((ulong)in_stack_ffffffffffffff6c >> 0x20);
      __this_02 = UnityEngine_RaycastHit__get_collider
                            (__this_00,(MethodInfo *)&stack0xffffffffffffff88);
      if (__this_02 == (UnityEngine_Collider_o *)0x0) break;
      uVar10 = uVar10 + 1;
      pUVar9 = pUVar9 + 1;
      bVar7 = UnityEngine_Collider__get_isTrigger(__this_02,(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        (__return_storage_ptr__->fields).value.fields.m_Distance = 0.0;
        (__return_storage_ptr__->fields).value.fields.m_UV.fields.x = 0.0;
        *(undefined8 *)&(__return_storage_ptr__->fields).value.fields.m_UV.fields.y = 0;
        pUVar9 = &(__return_storage_ptr__->fields).value;
        (pUVar9->fields).m_Normal.fields.x = 0.0;
        (pUVar9->fields).m_Normal.fields.y = 0.0;
        *(undefined8 *)&(__return_storage_ptr__->fields).value.fields.m_Normal.fields.z = 0;
        (__return_storage_ptr__->fields).hasValue = 0;
        (__return_storage_ptr__->fields).value.fields.m_Point.fields.x = 0.0;
        pUVar9 = &(__return_storage_ptr__->fields).value;
        (pUVar9->fields).m_Point.fields.y = 0.0;
        (pUVar9->fields).m_Point.fields.z = 0.0;
        __this_01.fields.value.fields.m_UV.fields.y = (float)iVar6;
        __this_01.fields.value.fields.m_UV.fields.x = fStack_54;
        __this_01.fields.value.fields.m_Point.fields._4_8_ = pIVar14;
        __this_01.fields._0_8_ = pIVar13;
        __this_01.fields.value.fields.m_Normal.fields._0_8_ = pIVar15;
        __this_01.fields.value.fields.m_Normal.fields.z = (float)iVar3;
        __this_01.fields.value.fields.m_FaceID = uVar4;
        __this_01.fields.value.fields.m_Distance = fStack_58;
        __this_01.fields.value.fields.m_Collider = in_stack_ffffffffffffff74;
        value.fields.m_Point.fields.y = fVar11;
        value.fields.m_Point.fields.x = (float)uVar5;
        value.fields.m_Point.fields.z = fVar12;
        value.fields.m_Normal.fields.x = distance;
        value.fields.m_Normal.fields._4_8_ = pIVar13;
        value.fields._24_8_ = pIVar14;
        value.fields.m_UV.fields = (UnityEngine_Vector2_Fields)pIVar15;
        value.fields.m_Collider = iVar3;
        System_Nullable<RaycastHit>___ctor
                  (__this_01,value,(MethodInfo_375BA70 *)__return_storage_ptr__);
        return __return_storage_ptr__;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseCharacter$$ToggleSound
// il2cpp: void Characters_BaseCharacter__ToggleSound (Characters_BaseCharacter_o* __this, System_String_o* sound, bool toggle, const MethodInfo* method);
// 0x3f98b50

void Characters_BaseCharacter__ToggleSound
               (Characters_BaseCharacter_o *__this,System_String_o *sound,bool_conflict toggle,
               MethodInfo *method)

{
  long lVar1;
  bool_conflict bVar2;
  UnityEngine_AudioSource_o *pUVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (DAT_05703ff2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_AudioSource_get_Item);
    DAT_05703ff2 = '\x01';
  }
  lVar1 = *(long *)&(__this->fields).Dead;
  if ((char)toggle == '\0') {
    if (((lVar1 != 0) &&
        (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 0x30) !=
         (System_Collections_Generic_Dictionary_object__object__o *)0x0)) &&
       (pUVar3 = (UnityEngine_AudioSource_o *)
                 System_Collections_Generic_Dictionary<object__object>__get_Item
                           (*(System_Collections_Generic_Dictionary_object__object__o **)
                             (lVar1 + 0x30),(Il2CppObject *)sound,MethodInfo_AudioSource_get_Item),
       pUVar3 != (UnityEngine_AudioSource_o *)0x0)) {
      bVar2 = UnityEngine_AudioSource__get_isPlaying(pUVar3,(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        return;
      }
      Characters_BaseCharacter__StopSound(__this,sound,method_01);
      return;
    }
  }
  else if (((lVar1 != 0) &&
           (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 0x30) !=
            (System_Collections_Generic_Dictionary_object__object__o *)0x0)) &&
          (pUVar3 = (UnityEngine_AudioSource_o *)
                    System_Collections_Generic_Dictionary<object__object>__get_Item
                              (*(System_Collections_Generic_Dictionary_object__object__o **)
                                (lVar1 + 0x30),(Il2CppObject *)sound,MethodInfo_AudioSource_get_Item),
          pUVar3 != (UnityEngine_AudioSource_o *)0x0)) {
    bVar2 = UnityEngine_AudioSource__get_isPlaying(pUVar3,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      return;
    }
    Characters_BaseCharacter__PlaySound(__this,sound,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseCharacter$$ToggleSoundLocal
// il2cpp: void Characters_BaseCharacter__ToggleSoundLocal (Characters_BaseCharacter_o* __this, System_String_o* sound, bool toggle, const MethodInfo* method);
// 0x3f98c20

void Characters_BaseCharacter__ToggleSoundLocal
               (Characters_BaseCharacter_o *__this,System_String_o *sound,bool_conflict toggle,
               MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  bool_conflict bVar3;
  UnityEngine_AudioSource_o *pUVar4;
  
  if (DAT_05703ff3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_AudioSource_get_Item);
    DAT_05703ff3 = '\x01';
  }
  lVar1 = *(long *)&(__this->fields).Dead;
  if ((char)toggle == '\0') {
    if (((lVar1 != 0) &&
        (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 0x30) !=
         (System_Collections_Generic_Dictionary_object__object__o *)0x0)) &&
       (pUVar4 = (UnityEngine_AudioSource_o *)
                 System_Collections_Generic_Dictionary<object__object>__get_Item
                           (*(System_Collections_Generic_Dictionary_object__object__o **)
                             (lVar1 + 0x30),(Il2CppObject *)sound,MethodInfo_AudioSource_get_Item),
       pUVar4 != (UnityEngine_AudioSource_o *)0x0)) {
      bVar3 = UnityEngine_AudioSource__get_isPlaying(pUVar4,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        return;
      }
      lVar1 = *(long *)&(__this->fields).Dead;
      if ((lVar1 != 0) &&
         (pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 0x30),
         pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
        bVar3 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                          (pSVar2,(Il2CppObject *)sound,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar3 == '\0') {
          return;
        }
        lVar1 = *(long *)&(__this->fields).Dead;
        if (((lVar1 != 0) &&
            (pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 0x30),
            pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) &&
           (pUVar4 = (UnityEngine_AudioSource_o *)
                     System_Collections_Generic_Dictionary<object__object>__get_Item
                               (pSVar2,(Il2CppObject *)sound,MethodInfo_AudioSource_get_Item),
           pUVar4 != (UnityEngine_AudioSource_o *)0x0)) {
          UnityEngine_AudioSource__Stop(pUVar4,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  else if (((lVar1 != 0) &&
           (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 0x30) !=
            (System_Collections_Generic_Dictionary_object__object__o *)0x0)) &&
          (pUVar4 = (UnityEngine_AudioSource_o *)
                    System_Collections_Generic_Dictionary<object__object>__get_Item
                              (*(System_Collections_Generic_Dictionary_object__object__o **)
                                (lVar1 + 0x30),(Il2CppObject *)sound,MethodInfo_AudioSource_get_Item),
          pUVar4 != (UnityEngine_AudioSource_o *)0x0)) {
    bVar3 = UnityEngine_AudioSource__get_isPlaying(pUVar4,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      return;
    }
    lVar1 = *(long *)&(__this->fields).Dead;
    if ((lVar1 != 0) &&
       (pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 0x30),
       pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
      bVar3 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                        (pSVar2,(Il2CppObject *)sound,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar3 == '\0') {
        return;
      }
      lVar1 = *(long *)&(__this->fields).Dead;
      if (((lVar1 != 0) &&
          (pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 0x30),
          pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) &&
         (pUVar4 = (UnityEngine_AudioSource_o *)
                   System_Collections_Generic_Dictionary<object__object>__get_Item
                             (pSVar2,(Il2CppObject *)sound,MethodInfo_AudioSource_get_Item),
         pUVar4 != (UnityEngine_AudioSource_o *)0x0)) {
        UnityEngine_AudioSource__Play(pUVar4,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseCharacter$$OnDestroy
// il2cpp: void Characters_BaseCharacter__OnDestroy (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x3f98dc0

void Characters_BaseCharacter__OnDestroy(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  return;
}


// Characters.BaseCharacter$$FixedUpdate
// il2cpp: void Characters_BaseCharacter__FixedUpdate (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x3f98dd0

void Characters_BaseCharacter__FixedUpdate(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  Characters_BaseMovementSync_o *pCVar1;
  float fVar2;
  float fVar3;
  UnityEngine_Vector3_o UVar4;
  
  UVar4 = Characters_BaseCharacter__GetVelocity(__this,method);
  if (DAT_056fde1c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde1c = '\x01';
  }
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar3 = UVar4.fields.z * UVar4.fields.z +
          UVar4.fields.y * UVar4.fields.y + UVar4.fields.x * UVar4.fields.x;
  if (fVar3 < 0.0) {
    fVar3 = sqrtf(fVar3);
    *(float *)&(__this->fields).Animation = fVar3;
    pCVar1 = (__this->fields).MovementSync;
  }
  else {
    *(float *)&(__this->fields).Animation = SQRT(fVar3);
    pCVar1 = (__this->fields).MovementSync;
  }
  if (pCVar1 != (Characters_BaseMovementSync_o *)0x0) {
    (*(pCVar1->klass->vtable)._5_Awake.methodPtr)(pCVar1,(pCVar1->klass->vtable)._5_Awake.method);
  }
  fVar3 = (__this->fields).MaxSoundDistance;
  fVar2 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
  (__this->fields).MaxSoundDistance = fVar3 - fVar2;
  return;
}


// Characters.BaseCharacter$$LateUpdate
// il2cpp: void Characters_BaseCharacter__LateUpdate (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x3f98ee0

void Characters_BaseCharacter__LateUpdate(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  undefined8 extraout_RDX;
  
  (*(__this->klass->vtable)._104_LateUpdateFootstep.methodPtr)
            (__this,(__this->klass->vtable)._104_LateUpdateFootstep.method);
  vtable_dispatch = (__this->klass->vtable)._105_LateUpdateFPS.methodPtr;
  (*vtable_dispatch)
            (__this,(__this->klass->vtable)._105_LateUpdateFPS.method,extraout_RDX,
             vtable_dispatch);
  return;
}


// Characters.BaseCharacter$$LateUpdateFootstep
// il2cpp: void Characters_BaseCharacter__LateUpdateFootstep (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x3f98f10

void Characters_BaseCharacter__LateUpdateFootstep
               (Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  float fVar1;
  Photon_Pun_PhotonMessageInfo_o info;
  float fVar2;
  bool_conflict bVar3;
  System_String_o *a;
  MethodInfo *method_00;
  Photon_Pun_PhotonMessageInfo_Fields PStack_30;
  
  if (DAT_05703ff4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Util);
    DAT_05703ff4 = '\x01';
  }
  if ((char)(__this->fields).FootstepsEnabled != '\0') {
    fVar2 = (float)(*(__this->klass->vtable)._106_GetFootstepPhase.methodPtr)
                             (__this,(__this->klass->vtable)._106_GetFootstepPhase.method);
    fVar1 = (__this->fields).CurrentSpeed;
    if (fVar1 != fVar2) {
      a = (System_String_o *)
          (*(__this->klass->vtable)._107_GetFootstepAudio.methodPtr)
                    (__this,(ulong)(uint)fVar1,(__this->klass->vtable)._107_GetFootstepAudio.method)
      ;
      bVar3 = System_String__op_Inequality
                        (a,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                         (MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        (__this->fields).CurrentSpeed = fVar2;
        if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
          il2cpp_init_class();
        }
        Utility_Util__CreateLocalPhotonInfo
                  ((Photon_Pun_PhotonMessageInfo_o *)&PStack_30,(MethodInfo *)0x0);
        info.fields.Sender._0_4_ = (int)PStack_30.Sender;
        info.fields.timeInt = PStack_30.timeInt;
        info.fields._4_4_ = PStack_30._4_4_;
        info.fields.Sender._4_4_ = (int)((ulong)PStack_30.Sender >> 0x20);
        info.fields.photonView = PStack_30.photonView;
        Characters_BaseCharacter__StopSoundRPC(__this,a,info,method_00);
        (*(__this->klass->vtable)._76_PlaySoundRPC.methodPtr)
                  (__this,a,(__this->klass->vtable)._76_PlaySoundRPC.method);
      }
    }
  }
  return;
}


// Characters.BaseCharacter$$LateUpdateFPS
// il2cpp: void Characters_BaseCharacter__LateUpdateFPS (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x3f99050

void Characters_BaseCharacter__LateUpdateFPS(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  Cameras_InGameCamera_o *__this_00;
  Characters_BaseCharacter_o *x;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar3;
  System_Collections_Generic_List_object__o *pSVar4;
  float fVar5;
  System_Collections_Generic_List_Enumerator_T__c *pSVar6;
  Il2CppType *pIVar7;
  UnityEngine_Renderer_o *__this_04;
  undefined1 local_38 [16];
  UnityEngine_Renderer_o *local_28;
  
  if (DAT_05703ff5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Renderer_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_Human);
    il2cpp_init_method_metadata(&TypeInfo_InGameCamera);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_UnityEngine_Renderer__GetEn);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_05703ff5 = '\x01';
  }
  lVar2 = *(long *)&(__this->fields).Dead;
  if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) {
    if (*(char *)(lVar2 + 0x68) == '\0') {
      return;
    }
    __this_00 = *(Cameras_InGameCamera_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x18);
    if (__this_00 == (Cameras_InGameCamera_o *)0x0) goto LAB_03f9938a;
    bVar1 = (TypeInfo_InGameCamera->_2).naturalAligment;
    if (((__this_00->klass->_2).naturalAligment < bVar1) ||
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameCamera)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(__this_00);
    }
    x = (__this_00->fields)._follow;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      fVar5 = Cameras_InGameCamera__GetCameraDistance(__this_00,(MethodInfo *)0x0);
      if ((fVar5 == 0.0) && (!NAN(fVar5))) {
        if (*(char *)&(__this->fields).Items != '\0') {
          return;
        }
        *(undefined1 *)&(__this->fields).Items = 1;
        pSVar4 = (System_Collections_Generic_List_object__o *)
                 (*(__this->klass->vtable)._108_GetFPSDisabledRenderers.methodPtr)
                           (__this,(__this->klass->vtable)._108_GetFPSDisabledRenderers.method);
        if (pSVar4 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03f9938a;
        System_Collections_Generic_List<object>__GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_38,pSVar4,MethodInfo_List_1_T__Enumerator_UnityEngine_Renderer__GetEn);
        pSVar6 = (System_Collections_Generic_List_Enumerator_T__c *)local_38._0_8_;
        pIVar7 = (Il2CppType *)local_38._8_8_;
        __this_04 = local_28;
        while (__this_01.fields._8_8_ = pIVar7,
              __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar6,
              __this_01.fields._current = (Il2CppObject *)__this_04,
              bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffffa8),
              (char)bVar3 != '\0') {
          if (__this_04 == (UnityEngine_Renderer_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          UnityEngine_Renderer__set_enabled(__this_04,0,(MethodInfo *)0x0);
        }
        goto LAB_03f99367;
      }
    }
    if (*(char *)&(__this->fields).Items == '\0') {
      return;
    }
    *(undefined1 *)&(__this->fields).Items = 0;
    if (*(char *)&(__this->fields).FeedVictimName != '\0') {
      bVar1 = (TypeInfo_Human->_2).naturalAligment;
      if ((bVar1 <= (__this->klass->_2).naturalAligment) &&
         ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_Human)) {
        return;
      }
    }
    pSVar4 = (System_Collections_Generic_List_object__o *)
             (*(__this->klass->vtable)._108_GetFPSDisabledRenderers.methodPtr)
                       (__this,(__this->klass->vtable)._108_GetFPSDisabledRenderers.method);
    if (pSVar4 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_38,pSVar4,MethodInfo_List_1_T__Enumerator_UnityEngine_Renderer__GetEn);
      pSVar6 = (System_Collections_Generic_List_Enumerator_T__c *)local_38._0_8_;
      pIVar7 = (Il2CppType *)local_38._8_8_;
      __this_04 = local_28;
      while (__this_02.fields._8_8_ = pIVar7,
            __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar6,
            __this_02.fields._current = (Il2CppObject *)__this_04,
            bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (__this_02,(MethodInfo_3185E20 *)&stack0xffffffffffffffa8),
            (char)bVar3 != '\0') {
        if (__this_04 == (UnityEngine_Renderer_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        UnityEngine_Renderer__set_enabled(__this_04,1,(MethodInfo *)0x0);
      }
LAB_03f99367:
      __this_03.fields._8_8_ = pIVar7;
      __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar6;
      __this_03.fields._current = (Il2CppObject *)__this_04;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_03,(MethodInfo_3185E10 *)&stack0xffffffffffffffa8);
      return;
    }
  }
LAB_03f9938a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseCharacter$$GetFootstepPhase
// il2cpp: int32_t Characters_BaseCharacter__GetFootstepPhase (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x3f99450

int32_t Characters_BaseCharacter__GetFootstepPhase
                  (Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  return 0;
}


// Characters.BaseCharacter$$GetFootstepAudio
// il2cpp: System_String_o* Characters_BaseCharacter__GetFootstepAudio (Characters_BaseCharacter_o* __this, int32_t phase, const MethodInfo* method);
// 0x3f99460

System_String_o *
Characters_BaseCharacter__GetFootstepAudio
          (Characters_BaseCharacter_o *__this,int32_t phase,MethodInfo *method)

{
  if (DAT_05703ff6 == '\0') {
    il2cpp_init_method_metadata(&"");
    DAT_05703ff6 = '\x01';
  }
  return "";
}


// Characters.BaseCharacter$$GetFPSDisabledRenderers
// il2cpp: System_Collections_Generic_List_Renderer__o* Characters_BaseCharacter__GetFPSDisabledRenderers (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x3f99490

System_Collections_Generic_List_Renderer__o *
Characters_BaseCharacter__GetFPSDisabledRenderers
          (Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Renderer__o *__this_00;
  
  if (DAT_05703ff7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_Renderer);
    il2cpp_init_method_metadata(&TypeInfo_List_Renderer);
    DAT_05703ff7 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_Renderer__o *)il2cpp_runtime_glue(TypeInfo_List_Renderer);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_UnityEngine_Renderer);
  return __this_00;
}


// Characters.BaseCharacter$$AddRendererIfExists
// il2cpp: void Characters_BaseCharacter__AddRendererIfExists (Characters_BaseCharacter_o* __this, System_Collections_Generic_List_Renderer__o* renderers, UnityEngine_GameObject_o* go, bool multiple, const MethodInfo* method);
// 0x3f994f0

void Characters_BaseCharacter__AddRendererIfExists
               (Characters_BaseCharacter_o *__this,
               System_Collections_Generic_List_Renderer__o *renderers,UnityEngine_GameObject_o *go,
               bool_conflict multiple,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_Renderer_array *pUVar3;
  long lVar4;
  bool_conflict bVar5;
  System_Object_array *pSVar6;
  UnityEngine_Object_o *pUVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (DAT_05703ff8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Renderer_GetComponentInChildren_Renderer);
    il2cpp_init_method_metadata(&MethodInfo_Renderer___GetComponentsInChildren_Renderer);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05703ff8 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)go,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    return;
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    if ((char)multiple == '\0') {
      pUVar7 = (UnityEngine_Object_o *)
               UnityEngine_GameObject__GetComponentInChildren<object>(go,MethodInfo_Renderer_GetComponentInChildren_Renderer);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar5 = UnityEngine_Object__op_Inequality
                        (pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      lVar4 = MethodInfo_Void_Add;
      if ((char)bVar5 == '\0') {
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
            pUVar3->m_Items[(int)uVar2] = (UnityEngine_Renderer_o *)pUVar7;
            il2cpp_runtime_glue(pUVar3->m_Items + (int)uVar2,pUVar7);
            return;
          }
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)renderers,(Il2CppObject *)pUVar7,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
          return;
        }
      }
    }
    else {
      pSVar6 = UnityEngine_GameObject__GetComponentsInChildren<object>(go,MethodInfo_Renderer___GetComponentsInChildren_Renderer);
      if (pSVar6 != (System_Object_array *)0x0) {
        uVar9 = pSVar6->max_length;
        uVar8 = uVar9 & 0xffffffff;
        if (renderers == (System_Collections_Generic_List_Renderer__o *)0x0) {
          if (0 < (int)uVar9) {
            uVar9 = 0;
            do {
              if (uVar8 <= uVar9) goto LAB_03f99785;
              pUVar7 = (UnityEngine_Object_o *)pSVar6->m_Items[uVar9];
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_init_class();
              }
              bVar5 = UnityEngine_Object__op_Inequality
                                (pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if ((char)bVar5 != '\0') goto LAB_03f9978a;
              uVar9 = uVar9 + 1;
              uVar2 = (uint)pSVar6->max_length;
              uVar8 = (ulong)uVar2;
            } while ((long)uVar9 < (long)(int)uVar2);
          }
        }
        else if (0 < (int)uVar9) {
          uVar8 = 0;
          if ((uVar9 & 0xffffffff) != 0) {
            do {
              pUVar7 = (UnityEngine_Object_o *)pSVar6->m_Items[uVar8];
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_init_class();
              }
              bVar5 = UnityEngine_Object__op_Inequality
                                (pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              lVar4 = MethodInfo_Void_Add;
              if ((char)bVar5 != '\0') {
                piVar1 = &(renderers->fields)._version;
                *piVar1 = *piVar1 + 1;
                pUVar3 = (renderers->fields)._items;
                if (pUVar3 == (UnityEngine_Renderer_array *)0x0) goto LAB_03f9978a;
                uVar2 = (renderers->fields)._size;
                if (uVar2 < (uint)pUVar3->max_length) {
                  (renderers->fields)._size = uVar2 + 1;
                  pUVar3->m_Items[(int)uVar2] = (UnityEngine_Renderer_o *)pUVar7;
                  il2cpp_runtime_glue(pUVar3->m_Items + (int)uVar2);
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            ((System_Collections_Generic_List_object__o *)renderers,
                             (Il2CppObject *)pUVar7,
                             *(MethodInfo_35A7350 **)
                              (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                }
              }
              uVar8 = uVar8 + 1;
              uVar2 = (uint)pSVar6->max_length;
              if ((long)(int)uVar2 <= (long)uVar8) {
                return;
              }
            } while (uVar8 < uVar2);
          }
LAB_03f99785:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        return;
      }
    }
  }
LAB_03f9978a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseCharacter$$GetCenterPosition
// il2cpp: UnityEngine_Vector3_o Characters_BaseCharacter__GetCenterPosition (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x3f99790

UnityEngine_Vector3_o
Characters_BaseCharacter__GetCenterPosition(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  long lVar1;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_Fields UVar2;
  
  lVar1 = *(long *)&(__this->fields).Dead;
  if ((lVar1 != 0) &&
     (__this_00 = *(UnityEngine_Transform_o **)(lVar1 + 0x10),
     __this_00 != (UnityEngine_Transform_o *)0x0)) {
    UVar2 = (UnityEngine_Vector3_Fields)
            UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
    return (UnityEngine_Vector3_o)UVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.BaseCharacter$$.ctor
// il2cpp: void Characters_BaseCharacter___ctor (Characters_BaseCharacter_o* __this, const MethodInfo* method);
// 0x3f997b0

void Characters_BaseCharacter___ctor(Characters_BaseCharacter_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  UnityEngine_LayerMask_o UVar3;
  System_Collections_Generic_List_object__o *__this_00;
  System_Int32_array *layers;
  undefined8 uVar4;
  
  if (DAT_05703ff9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_int);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Characters_BaseUseable);
    il2cpp_init_method_metadata(&TypeInfo_List_BaseUseable);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_PhysicsLayer);
    il2cpp_init_method_metadata(&"");
    DAT_05703ff9 = '\x01';
  }
  *(undefined2 *)&(__this->fields).FootstepsEnabled = 0x101;
  (__this->fields).SoundsEnabled = 0x43480000;
  (__this->fields).MaxFootstepDistance = 500.0;
  *(System_String_o **)&(__this->fields)._disableKinematicTimeLeft = "";
  il2cpp_runtime_glue(&(__this->fields)._disableKinematicTimeLeft);
  (__this->fields).RichTextName = "";
  il2cpp_runtime_glue(&(__this->fields).RichTextName);
  *(System_String_o **)&(__this->fields).HasExplicitNameTag = "";
  il2cpp_runtime_glue(&(__this->fields).HasExplicitNameTag);
  (__this->fields).Guild = "";
  il2cpp_runtime_glue(&(__this->fields).Guild);
  (__this->fields).FeedKillerName = "";
  il2cpp_runtime_glue(&(__this->fields).FeedKillerName);
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_BaseUseable);
  System_Collections_Generic_List<object>___ctor(__this_00,MethodInfo_List_1_Characters_BaseUseable);
  *(System_Collections_Generic_List_object__o **)&(__this->fields).CurrentHealth = __this_00;
  il2cpp_runtime_glue(&(__this->fields).CurrentHealth,__this_00);
  layers = (System_Int32_array *)il2cpp_glue_02274930(TypeInfo_int);
  if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (layers != (System_Int32_array *)0x0) {
    uVar1 = (uint)layers->max_length;
    if (uVar1 != 0) {
      lVar2 = *(long *)(TypeInfo_PhysicsLayer + 0xb8);
      layers->m_Items[0] = *(int32_t *)(lVar2 + 0x10);
      if (uVar1 != 1) {
        layers->m_Items[1] = *(int32_t *)(lVar2 + 0x38);
        if (2 < uVar1) {
          layers->m_Items[2] = *(int32_t *)(lVar2 + 0x34);
          if (uVar1 != 3) {
            layers->m_Items[3] = *(int32_t *)(lVar2 + 0x3c);
            UVar3 = Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
            (__this->fields).Grounded = (bool_conflict)UVar3.fields.m_Mask;
            uVar4 = il2cpp_glue_02274930(TypeInfo_object,3);
            *(undefined8 *)&(__this->fields).GroundMaskLayers = uVar4;
            il2cpp_runtime_glue(&(__this->fields).GroundMaskLayers);
            Photon_Pun_MonoBehaviourPunCallbacks___ctor
                      ((Photon_Pun_MonoBehaviourPunCallbacks_o *)__this,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


