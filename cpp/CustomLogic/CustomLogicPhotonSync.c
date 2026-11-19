// Type: CustomLogic.CustomLogicPhotonSync
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicPhotonSync.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Component/CustomLogicPhotonSync.cs
// --------------------------------

// CustomLogic.CustomLogicPhotonSync.<WaitAndFinishDynamicInit>d__45$$.ctor
// il2cpp: void CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45___ctor (CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5b70310

void CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45___ctor
               (CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45_o *__this,int32_t __1__state
               ,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// CustomLogic.CustomLogicPhotonSync.<WaitAndFinishDynamicInit>d__45$$System.IDisposable.Dispose
// il2cpp: void CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45__System_IDisposable_Dispose (CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45_o* __this, const MethodInfo* method);
// 0x5b719e0

void CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45__System_IDisposable_Dispose
               (CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45_o *__this,MethodInfo *method
               )

{
  return;
}


// CustomLogic.CustomLogicPhotonSync.<WaitAndFinishDynamicInit>d__45$$MoveNext
// il2cpp: bool CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45__MoveNext (CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45_o* __this, const MethodInfo* method);
// 0x5b719f0

bool CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45__MoveNext
               (CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45_o *__this,MethodInfo *method
               )

{
  CustomLogic_CustomLogicPhotonSync_o *__this_00;
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  MethodInfo *in_RCX;
  
  if (Il2CppMethodInitialized_0754734d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_0754734d = '\x01';
  }
  if ((uint)(__this->fields).__1__state < 2) {
    __this_00 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      pCVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    }
    else {
      pCVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    }
    if (pCVar1 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
      (__this->fields).__1__state = 1;
      return true;
    }
    if (__this_00 == (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
      ThrowNullReferenceException();
    }
    CustomLogic_CustomLogicPhotonSync__CreateAndSetupObject
              (__this_00,(__this->fields).persistsOwnership,(__this->fields).csvScript,in_RCX);
  }
  return false;
}


// CustomLogic.CustomLogicPhotonSync.<WaitAndFinishDynamicInit>d__45$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45__System_Collections_Generic_IEnumerator_System_Object__get_Current (CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45_o* __this, const MethodInfo* method);
// 0x5b71aa0

Il2CppObject *
CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicPhotonSync.<WaitAndFinishDynamicInit>d__45$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45__System_Collections_IEnumerator_Reset (CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45_o* __this, const MethodInfo* method);
// 0x5b71ab0

void CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45__System_Collections_IEnumerator_Reset
               (CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45_o *__this,MethodInfo *method
               )

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
                  MethodInfo_CustomLogic_CustomLogicPhotonSync_WaitAndFinishDynamicInit_d__45_System_Collections_IEnumerator
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// CustomLogic.CustomLogicPhotonSync.<WaitAndFinishDynamicInit>d__45$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45__System_Collections_IEnumerator_get_Current (CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45_o* __this, const MethodInfo* method);
// 0x5b71af0

Il2CppObject *
CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45__System_Collections_IEnumerator_get_Current
          (CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicPhotonSync.<WaitAndFinishInit>d__46$$.ctor
// il2cpp: void CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46___ctor (CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5b70330

void CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46___ctor
               (CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// CustomLogic.CustomLogicPhotonSync.<WaitAndFinishInit>d__46$$System.IDisposable.Dispose
// il2cpp: void CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46__System_IDisposable_Dispose (CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46_o* __this, const MethodInfo* method);
// 0x5b71b00

void CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46__System_IDisposable_Dispose
               (CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46_o *__this,MethodInfo *method)

{
  return;
}


// CustomLogic.CustomLogicPhotonSync.<WaitAndFinishInit>d__46$$MoveNext
// il2cpp: bool CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46__MoveNext (CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46_o* __this, const MethodInfo* method);
// 0x5b71b10
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b71b78: jmp 0x5b71bea

bool CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46__MoveNext
               (CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicPhotonSync_o *__this_00;
  System_Collections_Generic_Dictionary_int__object__o *__this_01;
  bool bVar1;
  CustomLogic_CustomLogicEvaluator_o *pCVar2;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754734e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_ContainsKey
              );
    Il2CppMethodInitialized_0754734e = '\x01';
  }
  if (1 < (uint)(__this->fields).__1__state) {
    return false;
  }
  __this_00 = (__this->fields).__4__this;
  (__this->fields).__1__state = -1;
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  }
  else {
    pCVar2 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  }
  if (pCVar2 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
label_05b71bea:
    (__this->fields).__2__current = (Il2CppObject *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 1;
    return true;
  }
  if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    if (pCVar2 == (CustomLogic_CustomLogicEvaluator_o *)0x0) goto label_05b71c0c;
  }
  __this_01 = (System_Collections_Generic_Dictionary_int__object__o *)(pCVar2->fields).IdToNetworkView;
  if (__this_01 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                      (__this_01,(__this->fields).mapObjectId,
                       (MethodInfo_4A0F950 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_ContainsKey
                      );
    if (!bVar1) goto label_05b71bea;
    if (__this_00 != (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
      CustomLogic_CustomLogicPhotonSync__FinishInit(__this_00,(__this->fields).mapObjectId,method_00);
      return false;
    }
  }
label_05b71c0c:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhotonSync.<WaitAndFinishInit>d__46$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46__System_Collections_Generic_IEnumerator_System_Object__get_Current (CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46_o* __this, const MethodInfo* method);
// 0x5b71c20

Il2CppObject *
CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicPhotonSync.<WaitAndFinishInit>d__46$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46__System_Collections_IEnumerator_Reset (CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46_o* __this, const MethodInfo* method);
// 0x5b71c30

void CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46__System_Collections_IEnumerator_Reset
               (CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46_o *__this,MethodInfo *method)

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
                  MethodInfo_CustomLogic_CustomLogicPhotonSync_WaitAndFinishInit_d__46_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// CustomLogic.CustomLogicPhotonSync.<WaitAndFinishInit>d__46$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46__System_Collections_IEnumerator_get_Current (CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46_o* __this, const MethodInfo* method);
// 0x5b71c70

Il2CppObject *
CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46__System_Collections_IEnumerator_get_Current
          (CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicPhotonSync.<WaitAndFinishSync>d__54$$.ctor
// il2cpp: void CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54___ctor (CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5b70cb0

void CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54___ctor
               (CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// CustomLogic.CustomLogicPhotonSync.<WaitAndFinishSync>d__54$$System.IDisposable.Dispose
// il2cpp: void CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54__System_IDisposable_Dispose (CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54_o* __this, const MethodInfo* method);
// 0x5b71c80

void CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54__System_IDisposable_Dispose
               (CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54_o *__this,MethodInfo *method)

{
  return;
}


// CustomLogic.CustomLogicPhotonSync.<WaitAndFinishSync>d__54$$MoveNext
// il2cpp: bool CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54__MoveNext (CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54_o* __this, const MethodInfo* method);
// 0x5b71c90

bool CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54__MoveNext
               (CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicPhotonSync_o *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((uint)(__this->fields).__1__state < 2) {
    pCVar1 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (pCVar1 == (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
      ThrowNullReferenceException();
    }
    if ((pCVar1->fields)._inited == false) {
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
      (__this->fields).__1__state = 1;
      return true;
    }
    fVar2 = (__this->fields).position.fields.x;
    fVar3 = (__this->fields).position.fields.y;
    (pCVar1->fields)._correctPosition.fields.z = (__this->fields).position.fields.z;
    (pCVar1->fields)._correctPosition.fields.x = fVar2;
    (pCVar1->fields)._correctPosition.fields.y = fVar3;
    fVar2 = (__this->fields).rotation.fields.y;
    fVar3 = (__this->fields).rotation.fields.z;
    fVar4 = (__this->fields).rotation.fields.w;
    (pCVar1->fields)._correctRotation.fields.x = (__this->fields).rotation.fields.x;
    (pCVar1->fields)._correctRotation.fields.y = fVar2;
    (pCVar1->fields)._correctRotation.fields.z = fVar3;
    (pCVar1->fields)._correctRotation.fields.w = fVar4;
  }
  return false;
}


// CustomLogic.CustomLogicPhotonSync.<WaitAndFinishSync>d__54$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54__System_Collections_Generic_IEnumerator_System_Object__get_Current (CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54_o* __this, const MethodInfo* method);
// 0x5b71cf0

Il2CppObject *
CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicPhotonSync.<WaitAndFinishSync>d__54$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54__System_Collections_IEnumerator_Reset (CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54_o* __this, const MethodInfo* method);
// 0x5b71d00

void CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54__System_Collections_IEnumerator_Reset
               (CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54_o *__this,MethodInfo *method)

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
                  MethodInfo_CustomLogic_CustomLogicPhotonSync_WaitAndFinishSync_d__54_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// CustomLogic.CustomLogicPhotonSync.<WaitAndFinishSync>d__54$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54__System_Collections_IEnumerator_get_Current (CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54_o* __this, const MethodInfo* method);
// 0x5b71d40

Il2CppObject *
CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54__System_Collections_IEnumerator_get_Current
          (CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicPhotonSync$$get_SyncTransforms
// il2cpp: bool CustomLogic_CustomLogicPhotonSync__get_SyncTransforms (CustomLogic_CustomLogicPhotonSync_o* __this, const MethodInfo* method);
// 0x5b6ee90

bool CustomLogic_CustomLogicPhotonSync__get_SyncTransforms
               (CustomLogic_CustomLogicPhotonSync_o *__this,MethodInfo *method)

{
  return (__this->fields)._syncTransforms;
}


// CustomLogic.CustomLogicPhotonSync$$set_SyncTransforms
// il2cpp: void CustomLogic_CustomLogicPhotonSync__set_SyncTransforms (CustomLogic_CustomLogicPhotonSync_o* __this, bool value, const MethodInfo* method);
// 0x5b6eea0

void CustomLogic_CustomLogicPhotonSync__set_SyncTransforms
               (CustomLogic_CustomLogicPhotonSync_o *__this,bool value,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  
  pPVar1 = (__this->fields).PhotonView;
  if (pPVar1 == (Photon_Pun_PhotonView_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((pPVar1->fields)._IsMine_k__BackingField != false) {
    (__this->fields)._syncTransforms = value;
  }
  return;
}


// CustomLogic.CustomLogicPhotonSync$$get_SyncVelocity
// il2cpp: bool CustomLogic_CustomLogicPhotonSync__get_SyncVelocity (CustomLogic_CustomLogicPhotonSync_o* __this, const MethodInfo* method);
// 0x5b6eec0

bool CustomLogic_CustomLogicPhotonSync__get_SyncVelocity
               (CustomLogic_CustomLogicPhotonSync_o *__this,MethodInfo *method)

{
  return (__this->fields)._syncVelocity;
}


// CustomLogic.CustomLogicPhotonSync$$set_SyncVelocity
// il2cpp: void CustomLogic_CustomLogicPhotonSync__set_SyncVelocity (CustomLogic_CustomLogicPhotonSync_o* __this, bool value, const MethodInfo* method);
// 0x5b6eed0

void CustomLogic_CustomLogicPhotonSync__set_SyncVelocity
               (CustomLogic_CustomLogicPhotonSync_o *__this,bool value,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  
  pPVar1 = (__this->fields).PhotonView;
  if (pPVar1 == (Photon_Pun_PhotonView_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((pPVar1->fields)._IsMine_k__BackingField != false) {
    (__this->fields)._syncVelocity = value;
  }
  return;
}


// CustomLogic.CustomLogicPhotonSync$$get_Rigidbody
// il2cpp: UnityEngine_Rigidbody_o* CustomLogic_CustomLogicPhotonSync__get_Rigidbody (CustomLogic_CustomLogicPhotonSync_o* __this, const MethodInfo* method);
// 0x5b6eef0

UnityEngine_Rigidbody_o *
CustomLogic_CustomLogicPhotonSync__get_Rigidbody
          (CustomLogic_CustomLogicPhotonSync_o *__this,MethodInfo *method)

{
  UnityEngine_Rigidbody_o **targetAddress;
  UnityEngine_Object_o *pUVar1;
  Map_MapObject_o *pMVar2;
  UnityEngine_GameObject_o *__this_00;
  bool bVar3;
  UnityEngine_Rigidbody_o *pUVar4;
  
  if (Il2CppMethodInitialized_07547332 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Rigidbody);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547332 = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._rigidbody;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  targetAddress = &(__this->fields)._rigidbody;
  bVar3 = UnityEngine_Object__op_Equality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((bVar3) && (pMVar2 = (__this->fields)._MapObject_k__BackingField, pMVar2 != (Map_MapObject_o *)0x0)) {
    pUVar1 = (UnityEngine_Object_o *)(pMVar2->fields).GameObject;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      pMVar2 = (__this->fields)._MapObject_k__BackingField;
      if ((pMVar2 == (Map_MapObject_o *)0x0) ||
         (__this_00 = (pMVar2->fields).GameObject, __this_00 == (UnityEngine_GameObject_o *)0x0)) {
        ThrowNullReferenceException();
      }
      pUVar4 = UnityEngine_GameObject__GetComponent_object_
                         (__this_00,
                          (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Rigidbody);
      *targetAddress = pUVar4;
      Il2CppCodeGenWriteBarrier(targetAddress);
    }
  }
  return *targetAddress;
}


// CustomLogic.CustomLogicPhotonSync$$get_MapObject
// il2cpp: Map_MapObject_o* CustomLogic_CustomLogicPhotonSync__get_MapObject (CustomLogic_CustomLogicPhotonSync_o* __this, const MethodInfo* method);
// 0x5b6efd0

Map_MapObject_o *
CustomLogic_CustomLogicPhotonSync__get_MapObject
          (CustomLogic_CustomLogicPhotonSync_o *__this,MethodInfo *method)

{
  return (__this->fields)._MapObject_k__BackingField;
}


// CustomLogic.CustomLogicPhotonSync$$set_MapObject
// il2cpp: void CustomLogic_CustomLogicPhotonSync__set_MapObject (CustomLogic_CustomLogicPhotonSync_o* __this, Map_MapObject_o* value, const MethodInfo* method);
// 0x5b6efe0

void CustomLogic_CustomLogicPhotonSync__set_MapObject
               (CustomLogic_CustomLogicPhotonSync_o *__this,Map_MapObject_o *value,MethodInfo *method)

{
  (__this->fields)._MapObject_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._MapObject_k__BackingField);
  return;
}


// CustomLogic.CustomLogicPhotonSync$$get_CustomLogicMapObjectBuiltin
// il2cpp: CustomLogic_CustomLogicMapObjectBuiltin_o* CustomLogic_CustomLogicPhotonSync__get_CustomLogicMapObjectBuiltin (CustomLogic_CustomLogicPhotonSync_o* __this, const MethodInfo* method);
// 0x5b6eff0

CustomLogic_CustomLogicMapObjectBuiltin_o *
CustomLogic_CustomLogicPhotonSync__get_CustomLogicMapObjectBuiltin
          (CustomLogic_CustomLogicPhotonSync_o *__this,MethodInfo *method)

{
  return (__this->fields)._CustomLogicMapObjectBuiltin_k__BackingField;
}


// CustomLogic.CustomLogicPhotonSync$$set_CustomLogicMapObjectBuiltin
// il2cpp: void CustomLogic_CustomLogicPhotonSync__set_CustomLogicMapObjectBuiltin (CustomLogic_CustomLogicPhotonSync_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* value, const MethodInfo* method);
// 0x5b6f000

void CustomLogic_CustomLogicPhotonSync__set_CustomLogicMapObjectBuiltin
               (CustomLogic_CustomLogicPhotonSync_o *__this,CustomLogic_CustomLogicMapObjectBuiltin_o *value,
               MethodInfo *method)

{
  (__this->fields)._CustomLogicMapObjectBuiltin_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._CustomLogicMapObjectBuiltin_k__BackingField);
  return;
}


// CustomLogic.CustomLogicPhotonSync$$get_NetworkView
// il2cpp: CustomLogic_CustomLogicNetworkViewBuiltin_o* CustomLogic_CustomLogicPhotonSync__get_NetworkView (CustomLogic_CustomLogicPhotonSync_o* __this, const MethodInfo* method);
// 0x5b6f010

CustomLogic_CustomLogicNetworkViewBuiltin_o *
CustomLogic_CustomLogicPhotonSync__get_NetworkView
          (CustomLogic_CustomLogicPhotonSync_o *__this,MethodInfo *method)

{
  return (__this->fields)._NetworkView_k__BackingField;
}


// CustomLogic.CustomLogicPhotonSync$$set_NetworkView
// il2cpp: void CustomLogic_CustomLogicPhotonSync__set_NetworkView (CustomLogic_CustomLogicPhotonSync_o* __this, CustomLogic_CustomLogicNetworkViewBuiltin_o* value, const MethodInfo* method);
// 0x5b6f020

void CustomLogic_CustomLogicPhotonSync__set_NetworkView
               (CustomLogic_CustomLogicPhotonSync_o *__this,CustomLogic_CustomLogicNetworkViewBuiltin_o *value
               ,MethodInfo *method)

{
  (__this->fields)._NetworkView_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._NetworkView_k__BackingField);
  return;
}


// CustomLogic.CustomLogicPhotonSync$$get_SmoothingDelay
// il2cpp: float CustomLogic_CustomLogicPhotonSync__get_SmoothingDelay (CustomLogic_CustomLogicPhotonSync_o* __this, const MethodInfo* method);
// 0x5b6f030

float CustomLogic_CustomLogicPhotonSync__get_SmoothingDelay
                (CustomLogic_CustomLogicPhotonSync_o *__this,MethodInfo *method)

{
  return 5.0;
}


// CustomLogic.CustomLogicPhotonSync$$Awake
// il2cpp: void CustomLogic_CustomLogicPhotonSync__Awake (CustomLogic_CustomLogicPhotonSync_o* __this, const MethodInfo* method);
// 0x5b6f040

void CustomLogic_CustomLogicPhotonSync__Awake(CustomLogic_CustomLogicPhotonSync_o *__this,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  
  pPVar1 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  (__this->fields).PhotonView = pPVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).PhotonView);
  return;
}


// CustomLogic.CustomLogicPhotonSync$$OnEnable
// il2cpp: void CustomLogic_CustomLogicPhotonSync__OnEnable (CustomLogic_CustomLogicPhotonSync_o* __this, const MethodInfo* method);
// 0x5b6f060

void CustomLogic_CustomLogicPhotonSync__OnEnable
               (CustomLogic_CustomLogicPhotonSync_o *__this,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this_00;
  
  if (Il2CppMethodInitialized_07547333 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_07547333 = '\x01';
  }
  __this_00 = (__this->fields).PhotonView;
  if (__this_00 == (Photon_Pun_PhotonView_o *)0x0) {
    ThrowNullReferenceException();
  }
  Photon_Pun_PhotonView__AddCallbackTarget
            (__this_00,(Photon_Pun_IPhotonViewCallback_o *)__this,(MethodInfo *)0x0);
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    Photon_Pun_PhotonNetwork__AddCallbackTarget((Il2CppObject *)__this,(MethodInfo *)0x0);
    return;
  }
  Photon_Pun_PhotonNetwork__AddCallbackTarget((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPhotonSync$$OnDisable
// il2cpp: void CustomLogic_CustomLogicPhotonSync__OnDisable (CustomLogic_CustomLogicPhotonSync_o* __this, const MethodInfo* method);
// 0x5b6f0d0

void CustomLogic_CustomLogicPhotonSync__OnDisable
               (CustomLogic_CustomLogicPhotonSync_o *__this,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this_00;
  
  if (Il2CppMethodInitialized_07547334 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_07547334 = '\x01';
  }
  __this_00 = (__this->fields).PhotonView;
  if (__this_00 == (Photon_Pun_PhotonView_o *)0x0) {
    ThrowNullReferenceException();
  }
  Photon_Pun_PhotonView__RemoveCallbackTarget
            (__this_00,(Photon_Pun_IPhotonViewCallback_o *)__this,(MethodInfo *)0x0);
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    Photon_Pun_PhotonNetwork__RemoveCallbackTarget((Il2CppObject *)__this,(MethodInfo *)0x0);
    return;
  }
  Photon_Pun_PhotonNetwork__RemoveCallbackTarget((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPhotonSync$$OnPhotonInstantiate
// il2cpp: void CustomLogic_CustomLogicPhotonSync__OnPhotonInstantiate (CustomLogic_CustomLogicPhotonSync_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5b6f140

void CustomLogic_CustomLogicPhotonSync__OnPhotonInstantiate
               (CustomLogic_CustomLogicPhotonSync_o *__this,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  int iVar1;
  System_Object_array *pSVar2;
  Il2CppObject *pIVar3;
  int *piVar4;
  int32_t *piVar5;
  undefined1 *puVar6;
  
  if (Il2CppMethodInitialized_07547335 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_SpawnIntent);
    Il2CppMethodInitialized_07547335 = '\x01';
  }
  if ((info.fields.photonView != (Photon_Pun_PhotonView_o *)0x0) &&
     (pSVar2 = ((info.fields.photonView)->fields).instantiationDataField, pSVar2 != (System_Object_array *)0x0
     )) {
    if ((int)pSVar2->max_length == 0) {
label_05b6f234:
      ThrowIndexOutOfRangeException();
    }
    pIVar3 = pSVar2->m_Items[0];
    if (pIVar3 != (Il2CppObject *)0x0) {
      if ((pIVar3->klass->_1).element_class == (TypeInfo_CustomLogic_SpawnIntent->_1).element_class) {
        piVar4 = il2cpp_vm_Object_Unbox(pIVar3);
        iVar1 = *piVar4;
        (__this->fields)._spawnIntent = iVar1;
        if (iVar1 != 1) {
          return;
        }
        if ((pSVar2->max_length & 0xfffffffe) == 0) goto label_05b6f234;
        pIVar3 = pSVar2->m_Items[1];
        if (pIVar3 == (Il2CppObject *)0x0) goto label_05b6f22f;
        if ((pIVar3->klass->_1).element_class == *(Il2CppClass **)(g_data_07556710 + 0x40)) {
          piVar5 = il2cpp_vm_Object_Unbox(pIVar3);
          (__this->fields).ObjectId = *piVar5;
          if ((uint)pSVar2->max_length < 3) goto label_05b6f234;
          pIVar3 = pSVar2->m_Items[2];
          if (pIVar3 == (Il2CppObject *)0x0) goto label_05b6f22f;
          if ((pIVar3->klass->_1).element_class == *(Il2CppClass **)(g_data_075566f0 + 0x40)) {
            puVar6 = il2cpp_vm_Object_Unbox(pIVar3);
            (__this->fields)._syncVelocity = (bool)*puVar6;
            return;
          }
        }
      }
      il2cpp_codegen_raise_invalid_cast_exception();
    }
  }
label_05b6f22f:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhotonSync$$Init
// il2cpp: void CustomLogic_CustomLogicPhotonSync__Init (CustomLogic_CustomLogicPhotonSync_o* __this, int32_t mapObjectId, bool rigidbody, const MethodInfo* method);
// 0x5b6f240
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b6f280: jmp 0x5b6f402

void CustomLogic_CustomLogicPhotonSync__Init
               (CustomLogic_CustomLogicPhotonSync_o *__this,int32_t mapObjectId,bool rigidbody,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  Photon_Pun_PhotonView_o *__this_01;
  Map_MapObject_o *pMVar1;
  System_Object_array *parameters;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  undefined1 local_2d;
  int32_t local_2c;
  
  if (Il2CppMethodInitialized_07547336 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"InitRPC");
    Il2CppMethodInitialized_07547336 = '\x01';
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) goto label_05b6f2cf;
label_05b6f271:
    __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
                TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
  }
  else {
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor != 0) goto label_05b6f271;
label_05b6f2cf:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
                TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
  }
  if (__this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    pMVar1 = System_Collections_Generic_Dictionary_int__object___get_Item
                       (__this_00,mapObjectId,
                        (MethodInfo_4A0F690 *)
                        MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    (__this->fields)._MapObject_k__BackingField = pMVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._MapObject_k__BackingField);
    __this_01 = (__this->fields).PhotonView;
    parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
    local_2c = mapObjectId;
    pIVar2 = il2cpp_vm_Object_Box(g_data_07556710,&local_2c);
    if (parameters != (System_Object_array *)0x0) {
      if ((pIVar2 != (Il2CppObject *)0x0) &&
         (pIVar3 = il2cpp_vm_Object_IsInst(pIVar2,(((parameters->obj).klass)->_1).element_class),
         pIVar3 == (Il2CppObject *)0x0)) {
label_05b6f40c:
        pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
      }
      if ((int)parameters->max_length != 0) {
        parameters->m_Items[0] = pIVar2;
        Il2CppCodeGenWriteBarrier(parameters->m_Items);
        local_2d = rigidbody;
        pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,&local_2d);
        if ((pIVar2 != (Il2CppObject *)0x0) &&
           (pIVar3 = il2cpp_vm_Object_IsInst(pIVar2,(((parameters->obj).klass)->_1).element_class),
           pIVar3 == (Il2CppObject *)0x0)) goto label_05b6f40c;
        if ((parameters->max_length & 0xfffffffe) != 0) {
          parameters->m_Items[1] = pIVar2;
          Il2CppCodeGenWriteBarrier(parameters->m_Items + 1);
          if (__this_01 != (Photon_Pun_PhotonView_o *)0x0) {
            Photon_Pun_PhotonView__RPC(__this_01,"InitRPC",3,parameters,(MethodInfo *)0x0);
            return;
          }
          goto label_05b6f402;
        }
      }
      ThrowIndexOutOfRangeException();
    }
  }
label_05b6f402:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhotonSync$$Init
// il2cpp: void CustomLogic_CustomLogicPhotonSync__Init (CustomLogic_CustomLogicPhotonSync_o* __this, int32_t mapObjectId, const MethodInfo* method);
// 0x5b6f420
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b6f462: jmp 0x5b6f64f

void CustomLogic_CustomLogicPhotonSync__Init_5a6f420
               (CustomLogic_CustomLogicPhotonSync_o *__this,int32_t mapObjectId,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  Photon_Pun_PhotonView_o *__this_02;
  bool bVar1;
  Map_MapObject_o *pMVar2;
  UnityEngine_Object_o *x;
  System_Object_array *parameters;
  Il2CppObject *pIVar3;
  Il2CppObject *pIVar4;
  undefined1 uStack_2d;
  int32_t iStack_2c;
  
  if (Il2CppMethodInitialized_07547337 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Rigidbody);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"InitRPC");
    Il2CppMethodInitialized_07547337 = '\x01';
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) goto label_05b6f4ca;
label_05b6f44f:
    __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
                TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
  }
  else {
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor != 0) goto label_05b6f44f;
label_05b6f4ca:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
                TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
  }
  if (__this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    pMVar2 = System_Collections_Generic_Dictionary_int__object___get_Item
                       (__this_00,mapObjectId,
                        (MethodInfo_4A0F690 *)
                        MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    (__this->fields)._MapObject_k__BackingField = pMVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._MapObject_k__BackingField);
    pMVar2 = (__this->fields)._MapObject_k__BackingField;
    if ((pMVar2 != (Map_MapObject_o *)0x0) &&
       (__this_01 = (pMVar2->fields).GameObject, __this_01 != (UnityEngine_GameObject_o *)0x0)) {
      x = (UnityEngine_Object_o *)
          UnityEngine_GameObject__GetComponent_object_
                    (__this_01,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Rigidbody)
      ;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      __this_02 = (__this->fields).PhotonView;
      parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
      iStack_2c = mapObjectId;
      pIVar3 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_2c);
      if (parameters != (System_Object_array *)0x0) {
        if ((pIVar3 != (Il2CppObject *)0x0) &&
           (pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((parameters->obj).klass)->_1).element_class),
           pIVar4 == (Il2CppObject *)0x0)) {
label_05b6f659:
          pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
        }
        if ((int)parameters->max_length != 0) {
          parameters->m_Items[0] = pIVar3;
          Il2CppCodeGenWriteBarrier(parameters->m_Items);
          uStack_2d = bVar1;
          pIVar3 = il2cpp_vm_Object_Box(g_data_075566f0,&uStack_2d);
          if ((pIVar3 != (Il2CppObject *)0x0) &&
             (pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((parameters->obj).klass)->_1).element_class),
             pIVar4 == (Il2CppObject *)0x0)) goto label_05b6f659;
          if ((parameters->max_length & 0xfffffffe) != 0) {
            parameters->m_Items[1] = pIVar3;
            Il2CppCodeGenWriteBarrier(parameters->m_Items + 1);
            if (__this_02 != (Photon_Pun_PhotonView_o *)0x0) {
              Photon_Pun_PhotonView__RPC(__this_02,"InitRPC",3,parameters,(MethodInfo *)0x0);
              return;
            }
            goto label_05b6f64f;
          }
        }
        ThrowIndexOutOfRangeException();
      }
    }
  }
label_05b6f64f:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhotonSync$$InitDynamic
// il2cpp: void CustomLogic_CustomLogicPhotonSync__InitDynamic (CustomLogic_CustomLogicPhotonSync_o* __this, bool persistsOwnership, System_String_o* csvScript, const MethodInfo* method);
// 0x5b6f670

void CustomLogic_CustomLogicPhotonSync__InitDynamic
               (CustomLogic_CustomLogicPhotonSync_o *__this,bool persistsOwnership,System_String_o *csvScript,
               MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this_00;
  undefined8 in_RAX;
  System_Object_array *parameters;
  Il2CppObject *pIVar1;
  Il2CppObject *pIVar2;
  undefined8 uStack_38;
  
  uStack_38 = in_RAX;
  if (Il2CppMethodInitialized_07547338 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"InitDynamicRPC");
    Il2CppMethodInitialized_07547338 = '\x01';
  }
  __this_00 = (__this->fields).PhotonView;
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
  uStack_38 = CONCAT17(persistsOwnership,(undefined7)uStack_38);
  pIVar1 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_38 + 7));
  if (parameters == (System_Object_array *)0x0) {
label_05b6f7a0:
    ThrowNullReferenceException();
  }
  if (pIVar1 != (Il2CppObject *)0x0) {
    pIVar2 = il2cpp_vm_Object_IsInst(pIVar1,(((parameters->obj).klass)->_1).element_class);
    if (pIVar2 == (Il2CppObject *)0x0) goto label_05b6f7a5;
  }
  if ((int)parameters->max_length != 0) {
    parameters->m_Items[0] = pIVar1;
    Il2CppCodeGenWriteBarrier(parameters->m_Items);
    if (csvScript != (System_String_o *)0x0) {
      pIVar1 = il2cpp_vm_Object_IsInst
                         ((Il2CppObject *)csvScript,(((parameters->obj).klass)->_1).element_class);
      if (pIVar1 == (Il2CppObject *)0x0) {
label_05b6f7a5:
        pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
      }
    }
    if ((parameters->max_length & 0xfffffffe) != 0) {
      parameters->m_Items[1] = (Il2CppObject *)csvScript;
      Il2CppCodeGenWriteBarrier(parameters->m_Items + 1);
      if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(__this_00,"InitDynamicRPC",4,parameters,(MethodInfo *)0x0);
        CustomLogic_CustomLogicPhotonSync__CreateAndSetupObject
                  (__this,persistsOwnership,csvScript,(MethodInfo *)parameters);
        return;
      }
      goto label_05b6f7a0;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicPhotonSync$$InitRPC
// il2cpp: void CustomLogic_CustomLogicPhotonSync__InitRPC (CustomLogic_CustomLogicPhotonSync_o* __this, int32_t mapObjectId, bool syncVelocity, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5b6fcf0

void CustomLogic_CustomLogicPhotonSync__InitRPC
               (CustomLogic_CustomLogicPhotonSync_o *__this,int32_t mapObjectId,bool syncVelocity,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46_o *__this_00;
  
  pPVar1 = (__this->fields).PhotonView;
  if (pPVar1 == (Photon_Pun_PhotonView_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (info.fields.Sender != (pPVar1->fields)._Owner_k__BackingField) {
    return;
  }
  (__this->fields)._syncVelocity = syncVelocity;
  if (Il2CppMethodInitialized_0754733b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicPhotonSync_WaitAndFinishInit_d__46);
    Il2CppMethodInitialized_0754733b = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhotonSync_WaitAndFinishInit_d__46);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).mapObjectId = mapObjectId;
  UnityEngine_MonoBehaviour__StartCoroutine_691c390
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
             (MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPhotonSync$$InitDynamicRPC
// il2cpp: void CustomLogic_CustomLogicPhotonSync__InitDynamicRPC (CustomLogic_CustomLogicPhotonSync_o* __this, bool persistsOwnership, System_String_o* csvScript, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5b6fe00
// fidelity: the machine code has facts this C leaves out:
//   tail call to UnityEngine_MonoBehaviour__StartCoroutine

void CustomLogic_CustomLogicPhotonSync__InitDynamicRPC
               (CustomLogic_CustomLogicPhotonSync_o *__this,bool persistsOwnership,System_String_o *csvScript,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  long lVar2;
  bool bVar3;
  MethodInfo *pMVar4;
  Il2CppClass *pIVar5;
  System_ArgumentException_o *__this_00;
  System_String_o *pSVar6;
  
  pPVar1 = (__this->fields).PhotonView;
  if (pPVar1 == (Photon_Pun_PhotonView_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (info.fields.Sender != (pPVar1->fields)._Owner_k__BackingField) {
    return;
  }
  if (Il2CppMethodInitialized_0754733a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicPhotonSync_WaitAndFinishDynamicInit_d__45);
    Il2CppMethodInitialized_0754733a = '\x01';
  }
  pMVar4 = (MethodInfo *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhotonSync_WaitAndFinishDynamicInit_d__45
                     );
  System_Object___ctor((Il2CppObject *)pMVar4,(MethodInfo *)0x0);
  *(undefined4 *)&pMVar4->invoker_method = 0;
  pMVar4->klass = (Il2CppClass *)__this;
  Il2CppCodeGenWriteBarrier(&pMVar4->klass);
  *(bool *)&pMVar4->return_type = persistsOwnership;
  pMVar4->parameters = (Il2CppType **)csvScript;
  Il2CppCodeGenWriteBarrier(&pMVar4->parameters);
  if (pMVar4 == (MethodInfo *)0x0) {
    pIVar5 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NullReferenceException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(pIVar5);
    pSVar6 = il2cpp_codegen_get_runtime_metadata(&"routine is null");
    System_NullReferenceException___ctor_54bcbd0
              ((System_NullReferenceException_o *)__this_00,pSVar6,(MethodInfo *)0x0);
  }
  else {
    bVar3 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour((UnityEngine_Object_o *)__this,pMVar4);
    if (bVar3) {
      if (Il2CppMethodInitialized_0754feaf == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_UnityEngine_Object_MarshalledUnityObject_MarshalNotNull_MonoBehaviour);
        Il2CppMethodInitialized_0754feaf = '\x01';
      }
      if (__this == (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
        ThrowNullReferenceException();
      }
      lVar2 = (__this->fields).m_CachedPtr;
      if (lVar2 == 0) {
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException
                  ((Il2CppObject *)__this,(MethodInfo *)0x0);
      }
      if (g_data_0754ff20 == (code *)0x0) {
        g_data_0754ff20 = il2cpp_codegen_resolve_icall
                                 (
                                 "UnityEngine.MonoBehaviour::StartCoroutineManaged2_Injected(System.IntPtr,System.Collections.IEnumerator)"
                                 );
      }
      (*g_data_0754ff20)(lVar2,pMVar4);
      return;
    }
    pIVar5 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(pIVar5);
    pSVar6 = il2cpp_codegen_get_runtime_metadata(&"Coroutines can only be stopped on a MonoBehaviour");
    System_ArgumentException___ctor_54186d0(__this_00,pSVar6,(MethodInfo *)0x0);
  }
  pMVar4 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_UnityEngine_MonoBehaviour_StartCoroutine);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,pMVar4);
}


// CustomLogic.CustomLogicPhotonSync$$CreateAndSetupObject
// il2cpp: void CustomLogic_CustomLogicPhotonSync__CreateAndSetupObject (CustomLogic_CustomLogicPhotonSync_o* __this, bool persistsOwnership, System_String_o* csvScript, const MethodInfo* method);
// 0x5b6f7c0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b6fa81: jmp 0x5b6fce2
// asm:   0x5b6fb87: jmp 0x5b6fce2

void CustomLogic_CustomLogicPhotonSync__CreateAndSetupObject
               (CustomLogic_CustomLogicPhotonSync_o *__this,bool persistsOwnership,System_String_o *csvScript,
               MethodInfo *method)

{
  Map_MapObject_o **targetAddress;
  int iVar1;
  int iVar2;
  CustomLogic_CustomLogicEvaluator_o *pCVar3;
  System_Collections_Generic_Dictionary_int__object__o *pSVar4;
  UnityEngine_GameObject_o *pUVar5;
  bool bVar6;
  undefined8 in_RAX;
  Photon_Pun_PhotonView_o *pPVar7;
  System_String_array *value;
  System_String_o *pSVar8;
  Map_MapScriptSceneObject_o *__this_00;
  Map_MapObject_o *pMVar9;
  CustomLogic_CustomLogicNetworkViewBuiltin_o *pCVar10;
  CustomLogic_CustomLogicMapObjectBuiltin_o *__this_01;
  Il2CppObject *pIVar11;
  UnityEngine_Transform_o *pUVar12;
  MethodInfo *method_00;
  UnityEngine_Quaternion_Fields UVar13;
  UnityEngine_Vector3_Fields UVar14;
  undefined8 local_38;
  
  local_38 = in_RAX;
  if (Il2CppMethodInitialized_07547339 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_ContainsKey
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicMapObjectBuiltin_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicMapObjectBuiltin_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptSceneObject);
    il2cpp_codegen_initialize_runtime_metadata(&"PhotonSync: MapObject for id {0} already exists, overwriting.");
    il2cpp_codegen_initialize_runtime_metadata(&"PhotonSync: NetworkView for id {0} already exists, overwriting.");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547339 = '\x01';
  }
  bVar6 = System_String__IsNullOrEmpty(csvScript,(MethodInfo *)0x0);
  if (bVar6) {
    return;
  }
  (__this->fields)._persistsOwnership = persistsOwnership;
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  iVar1 = TypeInfo_Map_MapLoader->static_fields->ROOT_OBJECT_ID;
  iVar2 = TypeInfo_Map_MapLoader->static_fields->NETWORK_OFFSET;
  pPVar7 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if ((pPVar7 == (Photon_Pun_PhotonView_o *)0x0) ||
     ((__this->fields).ObjectId = iVar1 - (iVar2 + (pPVar7->fields).viewIdField),
     csvScript == (System_String_o *)0x0)) goto label_05b6fce2;
  value = System_String__Split(csvScript,10,0,(MethodInfo *)0x0);
  pSVar8 = System_String__Join("",value,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptSceneObject);
  Map_MapScriptSceneObject___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Map_MapScriptSceneObject_o *)0x0) goto label_05b6fce2;
  (*(__this_00->klass->vtable)._9_Deserialize.methodPtr)
            (__this_00,pSVar8,(__this_00->klass->vtable)._9_Deserialize.method);
  (__this_00->fields).Id = (__this->fields).ObjectId;
  (__this_00->fields).Parent = TypeInfo_Map_MapLoader->static_fields->ROOT_OBJECT_ID;
  (__this_00->fields).Networked = true;
  pMVar9 = Map_MapLoader__LoadObject((Map_MapScriptBaseObject_o *)__this_00,false,(MethodInfo *)0x0);
  if (pMVar9 == (Map_MapObject_o *)0x0) goto label_05b6fce2;
  (pMVar9->fields).RuntimeCreated = true;
  Map_MapLoader__SetParent_58998f0(pMVar9,(MethodInfo *)0x0);
  pCVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin);
  CustomLogic_CustomLogicNetworkViewBuiltin___ctor(pCVar10,pMVar9,(MethodInfo *)0x0);
  (__this->fields)._NetworkView_k__BackingField = pCVar10;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._NetworkView_k__BackingField);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin);
  CustomLogic_CustomLogicMapObjectBuiltin___ctor(__this_01,pMVar9,(MethodInfo *)0x0);
  (__this->fields)._CustomLogicMapObjectBuiltin_k__BackingField = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._CustomLogicMapObjectBuiltin_k__BackingField);
  targetAddress = &(__this->fields)._MapObject_k__BackingField;
  (__this->fields)._MapObject_k__BackingField = pMVar9;
  Il2CppCodeGenWriteBarrier(targetAddress);
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  pCVar3 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  if ((pCVar3 == (CustomLogic_CustomLogicEvaluator_o *)0x0) ||
     (pSVar4 = (System_Collections_Generic_Dictionary_int__object__o *)(pCVar3->fields).IdToMapObjectBuiltin,
     pSVar4 == (System_Collections_Generic_Dictionary_int__object__o *)0x0)) goto label_05b6fce2;
  bVar6 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                    (pSVar4,(__this->fields).ObjectId,
                     (MethodInfo_4A0F950 *)
                     MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicMapObjectBuiltin_ContainsKey
                    );
  if (bVar6) {
    local_38 = CONCAT44((__this->fields).ObjectId,(undefined4)local_38);
    pIVar11 = il2cpp_vm_Object_Box(g_data_07556710,(void *)((long)&local_38 + 4));
    pSVar8 = System_String__Format("PhotonSync: MapObject for id {0} already exists, overwriting.",pIVar11,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
    }
    UnityEngine_Debug__LogWarning((Il2CppObject *)pSVar8,(MethodInfo *)0x0);
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor != 0) goto label_05b6fa6d;
label_05b6fae9:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    pCVar3 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  }
  else {
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) goto label_05b6fae9;
label_05b6fa6d:
    pCVar3 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  }
  if (pCVar3 == (CustomLogic_CustomLogicEvaluator_o *)0x0) goto label_05b6fce2;
  pSVar4 = (System_Collections_Generic_Dictionary_int__object__o *)(pCVar3->fields).IdToMapObjectBuiltin;
  if (pSVar4 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_05b6fce2;
  System_Collections_Generic_Dictionary_int__object___set_Item
            (pSVar4,(__this->fields).ObjectId,
             (Il2CppObject *)(__this->fields)._CustomLogicMapObjectBuiltin_k__BackingField,
             (MethodInfo_4A0F720 *)
             MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicMapObjectBuiltin_set_Item);
  pCVar3 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  if ((pCVar3 == (CustomLogic_CustomLogicEvaluator_o *)0x0) ||
     (pSVar4 = (System_Collections_Generic_Dictionary_int__object__o *)(pCVar3->fields).IdToNetworkView,
     pSVar4 == (System_Collections_Generic_Dictionary_int__object__o *)0x0)) goto label_05b6fce2;
  bVar6 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                    (pSVar4,(__this->fields).ObjectId,
                     (MethodInfo_4A0F950 *)
                     MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_ContainsKey
                    );
  if (bVar6) {
    local_38 = CONCAT44(local_38._4_4_,(__this->fields).ObjectId);
    pIVar11 = il2cpp_vm_Object_Box(g_data_07556710,&local_38);
    pSVar8 = System_String__Format("PhotonSync: NetworkView for id {0} already exists, overwriting.",pIVar11,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
    }
    UnityEngine_Debug__LogWarning((Il2CppObject *)pSVar8,(MethodInfo *)0x0);
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor != 0) goto label_05b6fb73;
label_05b6fbec:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    pCVar3 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    method_00 = MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_set_Item;
  }
  else {
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) goto label_05b6fbec;
label_05b6fb73:
    pCVar3 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    method_00 = MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_set_Item;
  }
  MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_set_Item = method_00;
  if ((pCVar3 != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
     (pSVar4 = (System_Collections_Generic_Dictionary_int__object__o *)(pCVar3->fields).IdToNetworkView,
     pSVar4 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
    System_Collections_Generic_Dictionary_int__object___set_Item
              (pSVar4,(__this->fields).ObjectId,(Il2CppObject *)(__this->fields)._NetworkView_k__BackingField,
               (MethodInfo_4A0F720 *)method_00);
    pCVar10 = (__this->fields)._NetworkView_k__BackingField;
    if (pCVar10 != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
      CustomLogic_CustomLogicNetworkViewBuiltin__SetSyncDynamic(pCVar10,__this,(MethodInfo *)0x0);
      pCVar3 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
      if (pCVar3 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        CustomLogic_CustomLogicEvaluator__LoadRuntimeMapObjectComponents(pCVar3,pMVar9,true,method_00);
        pMVar9 = *targetAddress;
        if (((pMVar9 != (Map_MapObject_o *)0x0) &&
            (pUVar5 = (pMVar9->fields).GameObject, pUVar5 != (UnityEngine_GameObject_o *)0x0)) &&
           (pUVar12 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0),
           pUVar12 != (UnityEngine_Transform_o *)0x0)) {
          UVar14 = (UnityEngine_Vector3_Fields)UnityEngine_Transform__get_position(pUVar12,(MethodInfo *)0x0);
          (__this->fields)._correctPosition.fields = UVar14;
          pMVar9 = (__this->fields)._MapObject_k__BackingField;
          if (((pMVar9 != (Map_MapObject_o *)0x0) &&
              (pUVar5 = (pMVar9->fields).GameObject, pUVar5 != (UnityEngine_GameObject_o *)0x0)) &&
             (pUVar12 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0),
             pUVar12 != (UnityEngine_Transform_o *)0x0)) {
            UVar13 = (UnityEngine_Quaternion_Fields)
                     UnityEngine_Transform__get_rotation(pUVar12,(MethodInfo *)0x0);
            (__this->fields)._correctRotation.fields = UVar13;
            (__this->fields)._inited = true;
            return;
          }
        }
      }
    }
  }
label_05b6fce2:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhotonSync$$WaitAndFinishDynamicInit
// il2cpp: System_Collections_IEnumerator_o* CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit (CustomLogic_CustomLogicPhotonSync_o* __this, bool persistsOwnership, System_String_o* csvScript, const MethodInfo* method);
// 0x5b6fec0

System_Collections_IEnumerator_o *
CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit
          (CustomLogic_CustomLogicPhotonSync_o *__this,bool persistsOwnership,System_String_o *csvScript,
          MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (Il2CppMethodInitialized_0754733a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicPhotonSync_WaitAndFinishDynamicInit_d__45);
    Il2CppMethodInitialized_0754733a = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CustomLogicPhotonSync_WaitAndFinishDynamicInit_d__45);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  __this_00[2].klass = (Il2CppClass *)__this;
  Il2CppCodeGenWriteBarrier(&__this_00[2].klass);
  *(bool *)&__this_00[2].monitor = persistsOwnership;
  __this_00[3].klass = (Il2CppClass *)csvScript;
  Il2CppCodeGenWriteBarrier(&__this_00[3].klass);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// CustomLogic.CustomLogicPhotonSync$$WaitAndFinishInit
// il2cpp: System_Collections_IEnumerator_o* CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit (CustomLogic_CustomLogicPhotonSync_o* __this, int32_t mapObjectId, const MethodInfo* method);
// 0x5b6fd90

System_Collections_IEnumerator_o *
CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit
          (CustomLogic_CustomLogicPhotonSync_o *__this,int32_t mapObjectId,MethodInfo *method)

{
  CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46_o *__this_00;
  
  if (Il2CppMethodInitialized_0754733b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicPhotonSync_WaitAndFinishInit_d__46);
    Il2CppMethodInitialized_0754733b = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhotonSync_WaitAndFinishInit_d__46);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).mapObjectId = mapObjectId;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// CustomLogic.CustomLogicPhotonSync$$FinishInit
// il2cpp: void CustomLogic_CustomLogicPhotonSync__FinishInit (CustomLogic_CustomLogicPhotonSync_o* __this, int32_t mapObjectId, const MethodInfo* method);
// 0x5b70350
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b70386: jmp 0x5b704f3

void CustomLogic_CustomLogicPhotonSync__FinishInit
               (CustomLogic_CustomLogicPhotonSync_o *__this,int32_t mapObjectId,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_Dictionary_int__object__o *pSVar2;
  CustomLogic_CustomLogicEvaluator_o *pCVar3;
  UnityEngine_GameObject_o *pUVar4;
  Map_MapObject_o *pMVar5;
  CustomLogic_CustomLogicNetworkViewBuiltin_o *pCVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_Quaternion_Fields UVar8;
  UnityEngine_Vector3_Fields UVar9;
  
  if (Il2CppMethodInitialized_0754733c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_0754733c = '\x01';
    uVar1 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
             TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
  }
  else {
    pSVar2 = *(System_Collections_Generic_Dictionary_int__object__o **)
              ((Il2CppClass *)TypeInfo_Map_MapLoader)->static_fields;
  }
  if (pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    pMVar5 = System_Collections_Generic_Dictionary_int__object___get_Item
                       (pSVar2,mapObjectId,
                        (MethodInfo_4A0F690 *)
                        MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    (__this->fields)._MapObject_k__BackingField = pMVar5;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._MapObject_k__BackingField);
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    pCVar3 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    if ((pCVar3 != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
       (pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)(pCVar3->fields).IdToNetworkView,
       pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
      pCVar6 = System_Collections_Generic_Dictionary_int__object___get_Item
                         (pSVar2,mapObjectId,
                          (MethodInfo_4A0F690 *)
                          MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_get_Item
                         );
      (__this->fields)._NetworkView_k__BackingField = pCVar6;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._NetworkView_k__BackingField);
      pCVar6 = (__this->fields)._NetworkView_k__BackingField;
      if (pCVar6 != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
        CustomLogic_CustomLogicNetworkViewBuiltin__SetSync(pCVar6,__this,(MethodInfo *)0x0);
        pMVar5 = (__this->fields)._MapObject_k__BackingField;
        if (((pMVar5 != (Map_MapObject_o *)0x0) &&
            (pUVar4 = (pMVar5->fields).GameObject, pUVar4 != (UnityEngine_GameObject_o *)0x0)) &&
           (pUVar7 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0),
           pUVar7 != (UnityEngine_Transform_o *)0x0)) {
          UVar9 = (UnityEngine_Vector3_Fields)UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
          (__this->fields)._correctPosition.fields = UVar9;
          pMVar5 = (__this->fields)._MapObject_k__BackingField;
          if (((pMVar5 != (Map_MapObject_o *)0x0) &&
              (pUVar4 = (pMVar5->fields).GameObject, pUVar4 != (UnityEngine_GameObject_o *)0x0)) &&
             (pUVar7 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0),
             pUVar7 != (UnityEngine_Transform_o *)0x0)) {
            UVar8 = (UnityEngine_Quaternion_Fields)
                    UnityEngine_Transform__get_rotation(pUVar7,(MethodInfo *)0x0);
            (__this->fields)._correctRotation.fields = UVar8;
            (__this->fields)._inited = true;
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhotonSync$$SendMessageRPC
// il2cpp: void CustomLogic_CustomLogicPhotonSync__SendMessageRPC (CustomLogic_CustomLogicPhotonSync_o* __this, System_String_o* message, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5b70500

void CustomLogic_CustomLogicPhotonSync__SendMessageRPC
               (CustomLogic_CustomLogicPhotonSync_o *__this,System_String_o *message,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  CustomLogic_CustomLogicNetworkViewBuiltin_o *__this_00;
  Photon_Realtime_Player_o *player;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this_01;
  double sentServerTime;
  
  if (Il2CppMethodInitialized_0754733d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
    Il2CppMethodInitialized_0754733d = '\x01';
  }
  player = info.fields.Sender;
  __this_00 = (__this->fields)._NetworkView_k__BackingField;
  if (__this_00 != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
    CustomLogic_CustomLogicPlayerBuiltin___ctor(__this_01,player,(MethodInfo *)0x0);
    sentServerTime = Photon_Pun_PhotonMessageInfo__get_SentServerTime(&info,(MethodInfo *)0x0);
    CustomLogic_CustomLogicNetworkViewBuiltin__OnNetworkMessage
              (__this_00,__this_01,message,sentServerTime,(MethodInfo *)0x0);
  }
  return;
}


// CustomLogic.CustomLogicPhotonSync$$SendMessage
// il2cpp: void CustomLogic_CustomLogicPhotonSync__SendMessage (CustomLogic_CustomLogicPhotonSync_o* __this, Photon_Realtime_Player_o* player, System_String_o* message, const MethodInfo* method);
// 0x5b70580

void CustomLogic_CustomLogicPhotonSync__SendMessage
               (CustomLogic_CustomLogicPhotonSync_o *__this,Photon_Realtime_Player_o *player,
               System_String_o *message,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this_00;
  System_Object_array *parameters;
  Il2CppObject *pIVar1;
  
  if (Il2CppMethodInitialized_0754733e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"SendMessageRPC");
    Il2CppMethodInitialized_0754733e = '\x01';
  }
  __this_00 = (__this->fields).PhotonView;
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
  if (parameters != (System_Object_array *)0x0) {
    if (message != (System_String_o *)0x0) {
      pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)message,(((parameters->obj).klass)->_1).element_class);
      if (pIVar1 == (Il2CppObject *)0x0) {
        pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
      }
    }
    if ((int)parameters->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    parameters->m_Items[0] = (Il2CppObject *)message;
    Il2CppCodeGenWriteBarrier(parameters->m_Items);
    if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
      Photon_Pun_PhotonView__RPC_56e5850(__this_00,"SendMessageRPC",player,parameters,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhotonSync$$SendMessageAll
// il2cpp: void CustomLogic_CustomLogicPhotonSync__SendMessageAll (CustomLogic_CustomLogicPhotonSync_o* __this, System_String_o* message, const MethodInfo* method);
// 0x5b70650

void CustomLogic_CustomLogicPhotonSync__SendMessageAll
               (CustomLogic_CustomLogicPhotonSync_o *__this,System_String_o *message,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this_00;
  System_Object_array *parameters;
  Il2CppObject *pIVar1;
  
  if (Il2CppMethodInitialized_0754733f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"SendMessageRPC");
    Il2CppMethodInitialized_0754733f = '\x01';
  }
  __this_00 = (__this->fields).PhotonView;
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
  if (parameters != (System_Object_array *)0x0) {
    if (message != (System_String_o *)0x0) {
      pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)message,(((parameters->obj).klass)->_1).element_class);
      if (pIVar1 == (Il2CppObject *)0x0) {
        pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
      }
    }
    if ((int)parameters->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    parameters->m_Items[0] = (Il2CppObject *)message;
    Il2CppCodeGenWriteBarrier(parameters->m_Items);
    if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
      Photon_Pun_PhotonView__RPC(__this_00,"SendMessageRPC",0,parameters,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhotonSync$$SendMessageOthers
// il2cpp: void CustomLogic_CustomLogicPhotonSync__SendMessageOthers (CustomLogic_CustomLogicPhotonSync_o* __this, System_String_o* message, const MethodInfo* method);
// 0x5b70720

void CustomLogic_CustomLogicPhotonSync__SendMessageOthers
               (CustomLogic_CustomLogicPhotonSync_o *__this,System_String_o *message,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this_00;
  System_Object_array *parameters;
  Il2CppObject *pIVar1;
  
  if (Il2CppMethodInitialized_07547340 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"SendMessageRPC");
    Il2CppMethodInitialized_07547340 = '\x01';
  }
  __this_00 = (__this->fields).PhotonView;
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
  if (parameters != (System_Object_array *)0x0) {
    if (message != (System_String_o *)0x0) {
      pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)message,(((parameters->obj).klass)->_1).element_class);
      if (pIVar1 == (Il2CppObject *)0x0) {
        pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
      }
    }
    if ((int)parameters->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    parameters->m_Items[0] = (Il2CppObject *)message;
    Il2CppCodeGenWriteBarrier(parameters->m_Items);
    if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
      Photon_Pun_PhotonView__RPC(__this_00,"SendMessageRPC",1,parameters,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhotonSync$$OnPlayerEnteredRoom
// il2cpp: void CustomLogic_CustomLogicPhotonSync__OnPlayerEnteredRoom (CustomLogic_CustomLogicPhotonSync_o* __this, Photon_Realtime_Player_o* newPlayer, const MethodInfo* method);
// 0x5b707f0

void CustomLogic_CustomLogicPhotonSync__OnPlayerEnteredRoom
               (CustomLogic_CustomLogicPhotonSync_o *__this,Photon_Realtime_Player_o *newPlayer,
               MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this_00;
  System_Object_array *parameters;
  Il2CppObject *pIVar1;
  Il2CppObject *pIVar2;
  MethodInfo *pMVar3;
  UnityEngine_Vector3_o local_48;
  UnityEngine_Quaternion_o local_38;
  
  if (Il2CppMethodInitialized_07547341 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    il2cpp_codegen_initialize_runtime_metadata(&"SyncRPC");
    Il2CppMethodInitialized_07547341 = '\x01';
  }
  if (((__this->fields)._inited == false) || ((__this->fields)._syncTransforms == false)) {
    return;
  }
  __this_00 = (__this->fields).PhotonView;
  pMVar3 = (MethodInfo *)0x2;
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
  local_48 = CustomLogic_CustomLogicPhotonSync__GetPosition(__this,pMVar3);
  pMVar3 = (MethodInfo *)il2cpp_vm_Object_Box((Il2CppClass *)TypeInfo_UnityEngine_Vector3,&local_48);
  if (parameters == (System_Object_array *)0x0) {
label_05b70976:
    ThrowNullReferenceException();
  }
  if ((pMVar3 != (MethodInfo *)0x0) &&
     (pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)pMVar3,(((parameters->obj).klass)->_1).element_class),
     pIVar1 == (Il2CppObject *)0x0)) {
label_05b7097b:
    pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
    il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
  }
  if ((int)parameters->max_length != 0) {
    parameters->m_Items[0] = (Il2CppObject *)pMVar3;
    Il2CppCodeGenWriteBarrier(parameters->m_Items);
    local_38 = CustomLogic_CustomLogicPhotonSync__GetRotation(__this,pMVar3);
    pIVar1 = il2cpp_vm_Object_Box((Il2CppClass *)TypeInfo_UnityEngine_Quaternion,&local_38);
    if ((pIVar1 != (Il2CppObject *)0x0) &&
       (pIVar2 = il2cpp_vm_Object_IsInst(pIVar1,(((parameters->obj).klass)->_1).element_class),
       pIVar2 == (Il2CppObject *)0x0)) goto label_05b7097b;
    if ((parameters->max_length & 0xfffffffe) != 0) {
      parameters->m_Items[1] = pIVar1;
      Il2CppCodeGenWriteBarrier(parameters->m_Items + 1);
      if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC_56e5850
                  (__this_00,"SyncRPC",newPlayer,parameters,(MethodInfo *)0x0);
        return;
      }
      goto label_05b70976;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicPhotonSync$$SyncRPC
// il2cpp: void CustomLogic_CustomLogicPhotonSync__SyncRPC (CustomLogic_CustomLogicPhotonSync_o* __this, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5b70b30

void CustomLogic_CustomLogicPhotonSync__SyncRPC
               (CustomLogic_CustomLogicPhotonSync_o *__this,UnityEngine_Vector3_o position,
               UnityEngine_Quaternion_o rotation,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54_o *__this_00;
  float fStack_38;
  float fStack_34;
  
  pPVar1 = (__this->fields).PhotonView;
  if (pPVar1 == (Photon_Pun_PhotonView_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (info.fields.Sender != (pPVar1->fields)._Owner_k__BackingField) {
    return;
  }
  if (Il2CppMethodInitialized_07547342 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicPhotonSync_WaitAndFinishSync_d__54);
    Il2CppMethodInitialized_07547342 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhotonSync_WaitAndFinishSync_d__54);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).position.fields.x = position.fields.x;
  (__this_00->fields).position.fields.y = position.fields.y;
  (__this_00->fields).position.fields.z = position.fields.z;
  fStack_38 = rotation.fields.x;
  fStack_34 = rotation.fields.y;
  (__this_00->fields).rotation.fields.x = fStack_38;
  (__this_00->fields).rotation.fields.y = fStack_34;
  (__this_00->fields).rotation.fields.z = rotation.fields.z;
  (__this_00->fields).rotation.fields.w = rotation.fields.w;
  UnityEngine_MonoBehaviour__StartCoroutine_691c390
            ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
             (MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPhotonSync$$WaitAndFinishSync
// il2cpp: System_Collections_IEnumerator_o* CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync (CustomLogic_CustomLogicPhotonSync_o* __this, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, const MethodInfo* method);
// 0x5b70c10

System_Collections_IEnumerator_o *
CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync
          (CustomLogic_CustomLogicPhotonSync_o *__this,UnityEngine_Vector3_o position,
          UnityEngine_Quaternion_o rotation,MethodInfo *method)

{
  CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54_o *__this_00;
  float fStack_38;
  float fStack_34;
  
  if (Il2CppMethodInitialized_07547342 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicPhotonSync_WaitAndFinishSync_d__54);
    Il2CppMethodInitialized_07547342 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhotonSync_WaitAndFinishSync_d__54);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).position.fields.x = position.fields.x;
  (__this_00->fields).position.fields.y = position.fields.y;
  (__this_00->fields).position.fields.z = position.fields.z;
  fStack_38 = rotation.fields.x;
  fStack_34 = rotation.fields.y;
  (__this_00->fields).rotation.fields.x = fStack_38;
  (__this_00->fields).rotation.fields.y = fStack_34;
  (__this_00->fields).rotation.fields.z = rotation.fields.z;
  (__this_00->fields).rotation.fields.w = rotation.fields.w;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// CustomLogic.CustomLogicPhotonSync$$OnPhotonSerializeView
// il2cpp: void CustomLogic_CustomLogicPhotonSync__OnPhotonSerializeView (CustomLogic_CustomLogicPhotonSync_o* __this, Photon_Pun_PhotonStream_o* stream, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5b70cd0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b711e9: mov rsi, rax
// asm:   0x5b711ec: lea rbx, [r14 + 0x90]
// asm:   0x5b711f3: jmp 0x5b71209

void CustomLogic_CustomLogicPhotonSync__OnPhotonSerializeView
               (CustomLogic_CustomLogicPhotonSync_o *__this,Photon_Pun_PhotonStream_o *stream,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  Map_MapObject_o *pMVar5;
  UnityEngine_Object_o *x;
  CustomLogic_CustomLogicNetworkViewBuiltin_o *pCVar6;
  undefined8 uVar7;
  bool bVar8;
  MethodInfo *pMVar9;
  Il2CppObject *pIVar10;
  char *pcVar11;
  undefined8 *puVar12;
  uint *puVar13;
  System_Object_array *pSVar14;
  Il2CppObject *pIVar15;
  uint uVar16;
  System_Object_array **targetAddress;
  UnityEngine_Quaternion_o *pUVar17;
  uint uVar18;
  Il2CppClass *pIVar19;
  float fVar20;
  float fVar21;
  UnityEngine_Vector3_o UVar22;
  ulong uStack_60;
  float fStack_58;
  uint uStack_50;
  undefined4 uStack_4c;
  UnityEngine_Quaternion_o UStack_48;
  
  if (Il2CppMethodInitialized_07547343 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_QuaternionCompression);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_07547343 = '\x01';
  }
  UStack_48.fields = (UnityEngine_Quaternion_Fields)ZEXT816(0);
  if (stream == (Photon_Pun_PhotonStream_o *)0x0) goto label_05b7124d;
  if ((stream->fields)._IsWriting_k__BackingField != false) {
    if (((__this->fields)._inited == false) ||
       (pMVar5 = (__this->fields)._MapObject_k__BackingField, pMVar5 == (Map_MapObject_o *)0x0)) {
      uStack_60 = uStack_60 & 0xffffffffffffff00;
      pIVar10 = il2cpp_vm_Object_Box(g_data_075566f0,&uStack_60);
    }
    else {
      x = (UnityEngine_Object_o *)(pMVar5->fields).GameObject;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar8 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      uStack_60 = CONCAT71(uStack_60._1_7_,bVar8);
      pMVar9 = (MethodInfo *)il2cpp_vm_Object_Box(g_data_075566f0,&uStack_60);
      Photon_Pun_PhotonStream__SendNext(stream,(Il2CppObject *)pMVar9,(MethodInfo *)0x0);
      if (!bVar8) {
        return;
      }
      if ((__this->fields)._syncTransforms != false) {
        UVar22 = CustomLogic_CustomLogicPhotonSync__GetPosition(__this,pMVar9);
        fStack_58 = UVar22.fields.z;
        uStack_60 = UVar22.fields._0_8_;
        pMVar9 = (MethodInfo *)il2cpp_vm_Object_Box((Il2CppClass *)TypeInfo_UnityEngine_Vector3,&uStack_60);
        Photon_Pun_PhotonStream__SendNext(stream,(Il2CppObject *)pMVar9,(MethodInfo *)0x0);
        UStack_48 = CustomLogic_CustomLogicPhotonSync__GetRotation(__this,pMVar9);
        if ((TypeInfo_Utility_QuaternionCompression->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_QuaternionCompression);
        }
        uStack_4c = il2cpp_runtime_helper_05b8cfd0(&UStack_48,0);
        pMVar9 = (MethodInfo *)il2cpp_vm_Object_Box(g_data_07556710,&uStack_4c);
        Photon_Pun_PhotonStream__SendNext(stream,(Il2CppObject *)pMVar9,(MethodInfo *)0x0);
        if ((__this->fields)._syncVelocity != false) {
          UVar22 = CustomLogic_CustomLogicPhotonSync__GetVelocity(__this,pMVar9);
          fStack_58 = UVar22.fields.z;
          uStack_60 = UVar22.fields._0_8_;
          pIVar10 = il2cpp_vm_Object_Box((Il2CppClass *)TypeInfo_UnityEngine_Vector3,&uStack_60);
          Photon_Pun_PhotonStream__SendNext(stream,pIVar10,(MethodInfo *)0x0);
        }
      }
      pCVar6 = (__this->fields)._NetworkView_k__BackingField;
      if (pCVar6 != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
        CustomLogic_CustomLogicNetworkViewBuiltin__SendNetworkStream(pCVar6,stream,(MethodInfo *)0x0);
        return;
      }
      pIVar10 = SZArrayNew(TypeInfo_object_array,0);
    }
    Photon_Pun_PhotonStream__SendNext(stream,pIVar10,(MethodInfo *)0x0);
    return;
  }
  pIVar10 = Photon_Pun_PhotonStream__ReceiveNext(stream,(MethodInfo *)0x0);
  if (pIVar10 == (Il2CppObject *)0x0) goto label_05b7124d;
  if ((pIVar10->klass->_1).element_class != (g_data_075566f0->_1).element_class) goto label_05b71252;
  pcVar11 = il2cpp_vm_Object_Unbox(pIVar10);
  if (*pcVar11 == '\0') {
    return;
  }
  pIVar10 = Photon_Pun_PhotonStream__PeekNext(stream,(MethodInfo *)0x0);
  pIVar10 = il2cpp_vm_Object_IsInst(pIVar10,TypeInfo_object_array);
  (__this->fields)._syncTransforms = pIVar10 == (Il2CppObject *)0x0;
  if (pIVar10 == (Il2CppObject *)0x0) {
    pIVar10 = Photon_Pun_PhotonStream__ReceiveNext(stream,(MethodInfo *)0x0);
    if (pIVar10 == (Il2CppObject *)0x0) goto label_05b7124d;
    if ((pIVar10->klass->_1).element_class != (TypeInfo_UnityEngine_Vector3->_1).element_class)
    goto label_05b71252;
    puVar12 = il2cpp_vm_Object_Unbox(pIVar10);
    uVar7 = *puVar12;
    (__this->fields)._correctPosition.fields.x = (float)(int)uVar7;
    (__this->fields)._correctPosition.fields.y = (float)(int)((ulong)uVar7 >> 0x20);
    (__this->fields)._correctPosition.fields.z = *(float *)(puVar12 + 1);
    pIVar10 = Photon_Pun_PhotonStream__ReceiveNext(stream,(MethodInfo *)0x0);
    if ((TypeInfo_Utility_QuaternionCompression->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_QuaternionCompression);
    }
    if (pIVar10 == (Il2CppObject *)0x0) goto label_05b7124d;
    if ((pIVar10->klass->_1).element_class != (g_data_07556710->_1).element_class) {
      il2cpp_codegen_raise_invalid_cast_exception(pIVar10);
    }
    puVar13 = il2cpp_vm_Object_Unbox(pIVar10);
    uVar4 = *puVar13;
    uVar18 = uVar4 >> 0x1e;
    pfVar1 = &(__this->fields)._correctRotation.fields.w;
    pfVar2 = &(__this->fields)._correctRotation.fields.z;
    pfVar3 = &(__this->fields)._correctRotation.fields.y;
    fVar20 = 0.0;
    uVar16 = uVar4;
    if (uVar18 == 3) {
label_05b71014:
      fVar21 = (float)(uVar16 & 0x1ff) * 0.0013837706;
      if ((uVar16 & 0x200) != 0) {
        fVar21 = -fVar21;
      }
      *pfVar2 = fVar21;
      fVar20 = fVar20 + fVar21 * fVar21;
      uVar16 = uVar16 >> 10;
      if (uVar18 != 1) goto label_05b7104e;
    }
    else {
      fVar20 = (float)(uVar4 & 0x1ff) * 0.0013837706;
      if ((uVar4 & 0x200) != 0) {
        fVar20 = -fVar20;
      }
      *pfVar1 = fVar20;
      fVar20 = fVar20 * fVar20 + 0.0;
      uVar16 = uVar4 >> 10;
      if (uVar18 != 2) goto label_05b71014;
label_05b7104e:
      fVar21 = (float)(uVar16 & 0x1ff) * 0.0013837706;
      if ((uVar16 & 0x200) != 0) {
        fVar21 = -fVar21;
      }
      *pfVar3 = fVar21;
      fVar20 = fVar20 + fVar21 * fVar21;
      uVar16 = uVar16 >> 10;
    }
    pUVar17 = &(__this->fields)._correctRotation;
    if (0x3fffffff < uVar4) {
      fVar21 = (float)(uVar16 & 0x1ff) * 0.0013837706;
      if ((uVar16 & 0x200) != 0) {
        fVar21 = -fVar21;
      }
      (pUVar17->fields).x = fVar21;
      fVar20 = fVar20 + fVar21 * fVar21;
    }
    fVar20 = 1.0 - fVar20;
    if (fVar20 < 0.0) {
      uStack_50 = uVar18;
      fVar20 = sqrtf(fVar20);
      uVar18 = uStack_50;
    }
    else {
      fVar20 = SQRT(fVar20);
    }
    switch((long)&switchD_05b7111b::switchdataD_010a58e0 +
           (long)(int)(&switchD_05b7111b::switchdataD_010a58e0)[uVar18]) {
    case 0x5b7111d:
      pUVar17 = (UnityEngine_Quaternion_o *)pfVar3;
      break;
    case 0x5b71122:
      pUVar17 = (UnityEngine_Quaternion_o *)pfVar2;
      break;
    case 0x5b71127:
      pUVar17 = (UnityEngine_Quaternion_o *)pfVar1;
    }
    (pUVar17->fields).x = fVar20;
    pIVar10 = Photon_Pun_PhotonStream__PeekNext(stream,(MethodInfo *)0x0);
    pIVar10 = il2cpp_vm_Object_IsInst(pIVar10,TypeInfo_object_array);
    (__this->fields)._syncVelocity = pIVar10 == (Il2CppObject *)0x0;
    if (pIVar10 == (Il2CppObject *)0x0) {
      pIVar10 = Photon_Pun_PhotonStream__ReceiveNext(stream,(MethodInfo *)0x0);
      if (pIVar10 == (Il2CppObject *)0x0) {
label_05b7124d:
        ThrowNullReferenceException();
      }
      if ((pIVar10->klass->_1).element_class != (TypeInfo_UnityEngine_Vector3->_1).element_class) {
label_05b71252:
        il2cpp_codegen_raise_invalid_cast_exception(pIVar10);
      }
      puVar12 = il2cpp_vm_Object_Unbox(pIVar10);
      uVar7 = *puVar12;
      (__this->fields)._correctVelocity.fields.x = (float)(int)uVar7;
      (__this->fields)._correctVelocity.fields.y = (float)(int)((ulong)uVar7 >> 0x20);
      (__this->fields)._correctVelocity.fields.z = *(float *)(puVar12 + 1);
    }
  }
  if ((__this->fields)._inited != false) {
    pIVar10 = Photon_Pun_PhotonStream__ReceiveNext(stream,(MethodInfo *)0x0);
    pIVar19 = TypeInfo_object_array;
    if (pIVar10 == (Il2CppObject *)0x0) {
      (__this->fields)._streamObjs = (System_Object_array *)0x0;
    }
    else {
      pSVar14 = (System_Object_array *)il2cpp_vm_Object_IsInst(pIVar10,TypeInfo_object_array);
      if (pSVar14 == (System_Object_array *)0x0) {
label_05b7125a:
        il2cpp_codegen_raise_invalid_cast_exception(pIVar10,pIVar19);
      }
      (__this->fields)._streamObjs = pSVar14;
      pIVar19 = TypeInfo_object_array;
      pIVar15 = il2cpp_vm_Object_IsInst(pIVar10,TypeInfo_object_array);
      if (pIVar15 == (Il2CppObject *)0x0) goto label_05b7125a;
    }
    targetAddress = &(__this->fields)._streamObjs;
    Il2CppCodeGenWriteBarrier(targetAddress);
    pCVar6 = (__this->fields)._NetworkView_k__BackingField;
    if (((pCVar6 != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) &&
        (pSVar14 = *targetAddress, pSVar14 != (System_Object_array *)0x0)) && (pSVar14->max_length != 0)) {
      CustomLogic_CustomLogicNetworkViewBuiltin__OnNetworkStream(pCVar6,pSVar14,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// CustomLogic.CustomLogicPhotonSync$$Update
// il2cpp: void CustomLogic_CustomLogicPhotonSync__Update (CustomLogic_CustomLogicPhotonSync_o* __this, const MethodInfo* method);
// 0x5b71380
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b7156d: movss xmm1, dword ptr [rbx + 0x84]
// asm:   0x5b71575: movsd xmm0, qword ptr [rbx + 0x7c]
// asm:   0x5b7157a: mov rdi, rax
// asm:   0x5b7157d: xor esi, esi
// asm:   0x5b7157f: call 0x6ae1f40  ; UnityEngine_Rigidbody__set_linearVelocity()
// asm:   0x5b71584: jmp 0x5b713bb

void CustomLogic_CustomLogicPhotonSync__Update(CustomLogic_CustomLogicPhotonSync_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Photon_Pun_PhotonView_o *pPVar3;
  Map_MapObject_o *pMVar4;
  UnityEngine_GameObject_o *__this_00;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Object_o *pUVar8;
  UnityEngine_Rigidbody_o *__this_02;
  MethodInfo *pMVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  UnityEngine_Quaternion_o UVar13;
  UnityEngine_Vector3_o UVar14;
  UnityEngine_Vector3_o value;
  float fStack_78;
  float fStack_74;
  float fStack_68;
  float fStack_64;
  float fStack_48;
  float fStack_44;
  UnityEngine_Quaternion_Fields UStack_38;
  UnityEngine_Quaternion_o UStack_28;
  
  if (Il2CppMethodInitialized_07547344 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547344 = '\x01';
  }
  pPVar3 = (__this->fields).PhotonView;
  if (pPVar3 != (Photon_Pun_PhotonView_o *)0x0) {
    if (((pPVar3->fields)._IsMine_k__BackingField != false) || ((__this->fields)._inited == false)) {
      return;
    }
    pMVar4 = (__this->fields)._MapObject_k__BackingField;
    if (pMVar4 != (Map_MapObject_o *)0x0) {
      pUVar8 = (UnityEngine_Object_o *)(pMVar4->fields).GameObject;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar7 = UnityEngine_Object__op_Equality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar7) {
        return;
      }
      if ((__this->fields)._syncTransforms == false) {
        return;
      }
      pMVar4 = (__this->fields)._MapObject_k__BackingField;
      if (((pMVar4 != (Map_MapObject_o *)0x0) &&
          (__this_00 = (pMVar4->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) &&
         (__this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
         __this_01 != (UnityEngine_Transform_o *)0x0)) {
        UVar14 = UnityEngine_Transform__get_position(__this_01,(MethodInfo *)0x0);
        uVar1 = (__this->fields)._correctPosition.fields.x;
        uVar2 = (__this->fields)._correctPosition.fields.y;
        fVar11 = (__this->fields)._correctPosition.fields.z;
        fVar10 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        fVar10 = fVar10 * 5.0;
        fVar12 = 1.0;
        if (fVar10 <= 1.0) {
          fVar12 = fVar10;
        }
        fVar12 = (float)((uint)fVar12 & -(uint)(0.0 <= fVar10));
        fStack_78 = UVar14.fields.x;
        fStack_74 = UVar14.fields.y;
        value.fields.x = fVar12 * ((float)uVar1 - fStack_78) + fStack_78;
        value.fields.y = fVar12 * ((float)uVar2 - fStack_74) + fStack_74;
        value.fields.z = (fVar11 - UVar14.fields.z) * fVar12 + UVar14.fields.z;
        UnityEngine_Transform__set_position(__this_01,value,(MethodInfo *)0x0);
        UVar13 = UnityEngine_Transform__get_rotation(__this_01,(MethodInfo *)0x0);
        uVar5._0_4_ = (__this->fields)._correctRotation.fields.x;
        uVar5._4_4_ = (__this->fields)._correctRotation.fields.y;
        uVar6._0_4_ = (__this->fields)._correctRotation.fields.z;
        uVar6._4_4_ = (__this->fields)._correctRotation.fields.w;
        fVar11 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        fStack_68 = UVar13.fields.x;
        fStack_64 = UVar13.fields.y;
        UStack_28.fields.z = UVar13.fields.z;
        UStack_28.fields.w = UVar13.fields.w;
        UStack_28.fields.x = fStack_68;
        UStack_28.fields.y = fStack_64;
        UStack_38._0_8_ = uVar5;
        UStack_38._8_8_ = uVar6;
        UVar13 = UnityEngine_Quaternion__Internal_Lerp
                           (&UStack_28,(UnityEngine_Quaternion_o *)&UStack_38,fVar11 * 5.0,(MethodInfo *)0x0);
        pMVar9 = (MethodInfo *)0x0;
        UnityEngine_Transform__set_rotation(__this_01,UVar13,(MethodInfo *)0x0);
        if ((__this->fields)._syncVelocity == false) {
          return;
        }
        pUVar8 = (UnityEngine_Object_o *)CustomLogic_CustomLogicPhotonSync__get_Rigidbody(__this,pMVar9);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        pMVar9 = (MethodInfo *)0x0;
        bVar7 = UnityEngine_Object__op_Inequality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar7) {
          return;
        }
        __this_02 = CustomLogic_CustomLogicPhotonSync__get_Rigidbody(__this,pMVar9);
        if (__this_02 != (UnityEngine_Rigidbody_o *)0x0) {
          UnityEngine_Rigidbody__set_linearVelocity
                    (__this_02,(UnityEngine_Vector3_o)(__this->fields)._correctVelocity.fields,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhotonSync$$GetPosition
// il2cpp: UnityEngine_Vector3_o CustomLogic_CustomLogicPhotonSync__GetPosition (CustomLogic_CustomLogicPhotonSync_o* __this, const MethodInfo* method);
// 0x5b70990

UnityEngine_Vector3_o
CustomLogic_CustomLogicPhotonSync__GetPosition(CustomLogic_CustomLogicPhotonSync_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  bool bVar2;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_Fields UVar3;
  
  if (Il2CppMethodInitialized_07547345 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547345 = '\x01';
  }
  pMVar1 = (__this->fields)._MapObject_k__BackingField;
  if (pMVar1 != (Map_MapObject_o *)0x0) {
    x = (UnityEngine_Object_o *)(pMVar1->fields).GameObject;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      if (Il2CppMethodInitialized_0753e4b6 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_0753e4b6 = '\x01';
      }
      return (UnityEngine_Vector3_o)(TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields;
    }
    pMVar1 = (__this->fields)._MapObject_k__BackingField;
    if ((pMVar1 != (Map_MapObject_o *)0x0) &&
       (__this_00 = (pMVar1->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_Transform_o *)0x0) {
        UVar3 = (UnityEngine_Vector3_Fields)UnityEngine_Transform__get_position(__this_01,(MethodInfo *)0x0);
        return (UnityEngine_Vector3_o)UVar3;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhotonSync$$GetRotation
// il2cpp: UnityEngine_Quaternion_o CustomLogic_CustomLogicPhotonSync__GetRotation (CustomLogic_CustomLogicPhotonSync_o* __this, const MethodInfo* method);
// 0x5b70a60

UnityEngine_Quaternion_o
CustomLogic_CustomLogicPhotonSync__GetRotation(CustomLogic_CustomLogicPhotonSync_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  bool bVar2;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Quaternion_Fields UVar3;
  
  if (Il2CppMethodInitialized_07547346 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547346 = '\x01';
  }
  pMVar1 = (__this->fields)._MapObject_k__BackingField;
  if (pMVar1 != (Map_MapObject_o *)0x0) {
    x = (UnityEngine_Object_o *)(pMVar1->fields).GameObject;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      if (Il2CppMethodInitialized_0753e72b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
        Il2CppMethodInitialized_0753e72b = '\x01';
      }
      return (UnityEngine_Quaternion_o)
             *(UnityEngine_Quaternion_Fields *)TypeInfo_UnityEngine_Quaternion->static_fields;
    }
    pMVar1 = (__this->fields)._MapObject_k__BackingField;
    if ((pMVar1 != (Map_MapObject_o *)0x0) &&
       (__this_00 = (pMVar1->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_Transform_o *)0x0) {
        UVar3 = (UnityEngine_Quaternion_Fields)
                UnityEngine_Transform__get_rotation(__this_01,(MethodInfo *)0x0);
        return (UnityEngine_Quaternion_o)UVar3;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhotonSync$$GetVelocity
// il2cpp: UnityEngine_Vector3_o CustomLogic_CustomLogicPhotonSync__GetVelocity (CustomLogic_CustomLogicPhotonSync_o* __this, const MethodInfo* method);
// 0x5b71270

UnityEngine_Vector3_o
CustomLogic_CustomLogicPhotonSync__GetVelocity(CustomLogic_CustomLogicPhotonSync_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_GameObject_o *__this_00;
  bool bVar2;
  UnityEngine_Object_o *pUVar3;
  UnityEngine_Vector3_Fields UVar4;
  
  if (Il2CppMethodInitialized_07547347 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Rigidbody);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547347 = '\x01';
  }
  pMVar1 = (__this->fields)._MapObject_k__BackingField;
  if (pMVar1 != (Map_MapObject_o *)0x0) {
    pUVar3 = (UnityEngine_Object_o *)(pMVar1->fields).GameObject;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      pMVar1 = (__this->fields)._MapObject_k__BackingField;
      if ((pMVar1 != (Map_MapObject_o *)0x0) &&
         (__this_00 = (pMVar1->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
        pUVar3 = (UnityEngine_Object_o *)
                 UnityEngine_GameObject__GetComponent_object_
                           (__this_00,
                            (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Rigidbody);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar2 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar2) goto label_05b7133b;
        if (pUVar3 != (UnityEngine_Object_o *)0x0) {
          UVar4 = (UnityEngine_Vector3_Fields)
                  UnityEngine_Rigidbody__get_linearVelocity
                            ((UnityEngine_Rigidbody_o *)pUVar3,(MethodInfo *)0x0);
          return (UnityEngine_Vector3_o)UVar4;
        }
      }
      ThrowNullReferenceException();
    }
  }
label_05b7133b:
  if (Il2CppMethodInitialized_0753e4b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b6 = '\x01';
  }
  return (UnityEngine_Vector3_o)(TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields;
}


// CustomLogic.CustomLogicPhotonSync$$Photon.Pun.IPunObservable.OnPhotonSerializeView
// il2cpp: void CustomLogic_CustomLogicPhotonSync__Photon_Pun_IPunObservable_OnPhotonSerializeView (CustomLogic_CustomLogicPhotonSync_o* __this, Photon_Pun_PhotonStream_o* stream, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x5b71590

void CustomLogic_CustomLogicPhotonSync__Photon_Pun_IPunObservable_OnPhotonSerializeView
               (CustomLogic_CustomLogicPhotonSync_o *__this,Photon_Pun_PhotonStream_o *stream,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  (*(__this->klass->vtable)._60_OnPhotonSerializeView.methodPtr)
            (__this,stream,info,(__this->klass->vtable)._60_OnPhotonSerializeView.method);
  return;
}


// CustomLogic.CustomLogicPhotonSync$$Transfer
// il2cpp: void CustomLogic_CustomLogicPhotonSync__Transfer (CustomLogic_CustomLogicPhotonSync_o* __this, CustomLogic_CustomLogicPlayerBuiltin_o* player, const MethodInfo* method);
// 0x5b715b0

void CustomLogic_CustomLogicPhotonSync__Transfer
               (CustomLogic_CustomLogicPhotonSync_o *__this,CustomLogic_CustomLogicPlayerBuiltin_o *player,
               MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  Photon_Realtime_Player_o *pPVar2;
  Photon_Realtime_Player_o *pPVar3;
  
  if (Il2CppMethodInitialized_07547348 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_07547348 = '\x01';
  }
  pPVar1 = (__this->fields).PhotonView;
  if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
    if ((pPVar1->fields)._IsMine_k__BackingField == false) {
      return;
    }
    if (player != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
      pPVar2 = (player->fields).Player;
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
        pPVar3 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      }
      else {
        pPVar3 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      }
      if (pPVar2 == pPVar3) {
        return;
      }
      pPVar2 = (player->fields).Player;
      if ((pPVar2 != (Photon_Realtime_Player_o *)0x0) &&
         (pPVar1 = (__this->fields).PhotonView, pPVar1 != (Photon_Pun_PhotonView_o *)0x0)) {
        Photon_Pun_PhotonView__TransferOwnership_56e5150
                  (pPVar1,(pPVar2->fields).actorNumber,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhotonSync$$Photon.Pun.IOnPhotonViewOwnerChange.OnOwnerChange
// il2cpp: void CustomLogic_CustomLogicPhotonSync__Photon_Pun_IOnPhotonViewOwnerChange_OnOwnerChange (CustomLogic_CustomLogicPhotonSync_o* __this, Photon_Realtime_Player_o* newOwner, Photon_Realtime_Player_o* previousOwner, const MethodInfo* method);
// 0x5b71650

void CustomLogic_CustomLogicPhotonSync__Photon_Pun_IOnPhotonViewOwnerChange_OnOwnerChange
               (CustomLogic_CustomLogicPhotonSync_o *__this,Photon_Realtime_Player_o *newOwner,
               Photon_Realtime_Player_o *previousOwner,MethodInfo *method)

{
  CustomLogic_CustomLogicNetworkViewBuiltin_o *__this_00;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this_01;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this_02;
  
  if (Il2CppMethodInitialized_07547349 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
    Il2CppMethodInitialized_07547349 = '\x01';
  }
  if (previousOwner == (Photon_Realtime_Player_o *)0x0) {
    __this_01 = (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0;
  }
  else {
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
    CustomLogic_CustomLogicPlayerBuiltin___ctor(__this_01,previousOwner,(MethodInfo *)0x0);
  }
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
  CustomLogic_CustomLogicPlayerBuiltin___ctor(__this_02,newOwner,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._NetworkView_k__BackingField;
  if (__this_00 == (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
    return;
  }
  CustomLogic_CustomLogicNetworkViewBuiltin__OnNetworkTransfer
            (__this_00,__this_01,__this_02,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPhotonSync$$OnPlayerLeftRoom
// il2cpp: void CustomLogic_CustomLogicPhotonSync__OnPlayerLeftRoom (CustomLogic_CustomLogicPhotonSync_o* __this, Photon_Realtime_Player_o* otherPlayer, const MethodInfo* method);
// 0x5b71700

void CustomLogic_CustomLogicPhotonSync__OnPlayerLeftRoom
               (CustomLogic_CustomLogicPhotonSync_o *__this,Photon_Realtime_Player_o *otherPlayer,
               MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  bool bVar2;
  Photon_Realtime_Player_o *newOwner;
  
  if (Il2CppMethodInitialized_0754734a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_0754734a = '\x01';
  }
  pPVar1 = (__this->fields).PhotonView;
  if (pPVar1 == (Photon_Pun_PhotonView_o *)0x0) {
label_05b7179f:
    ThrowNullReferenceException();
  }
  if (((pPVar1->fields)._Owner_k__BackingField == otherPlayer) &&
     ((__this->fields)._persistsOwnership != false)) {
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    if (bVar2) {
      pPVar1 = (__this->fields).PhotonView;
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      newOwner = Photon_Pun_PhotonNetwork__get_MasterClient((MethodInfo *)0x0);
      if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__TransferOwnership(pPVar1,newOwner,(MethodInfo *)0x0);
        return;
      }
      goto label_05b7179f;
    }
  }
  return;
}


// CustomLogic.CustomLogicPhotonSync$$DestroyMe
// il2cpp: void CustomLogic_CustomLogicPhotonSync__DestroyMe (CustomLogic_CustomLogicPhotonSync_o* __this, const MethodInfo* method);
// 0x5b717b0

void CustomLogic_CustomLogicPhotonSync__DestroyMe
               (CustomLogic_CustomLogicPhotonSync_o *__this,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  UnityEngine_GameObject_o *targetGo;
  
  if (Il2CppMethodInitialized_0754734b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_0754734b = '\x01';
  }
  pPVar1 = (__this->fields).PhotonView;
  if (pPVar1 == (Photon_Pun_PhotonView_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((pPVar1->fields)._IsMine_k__BackingField == false) {
    return;
  }
  targetGo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    Photon_Pun_PhotonNetwork__Destroy_56d7e70(targetGo,(MethodInfo *)0x0);
    return;
  }
  Photon_Pun_PhotonNetwork__Destroy_56d7e70(targetGo,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPhotonSync$$OnDestroy
// il2cpp: void CustomLogic_CustomLogicPhotonSync__OnDestroy (CustomLogic_CustomLogicPhotonSync_o* __this, const MethodInfo* method);
// 0x5b71830

void CustomLogic_CustomLogicPhotonSync__OnDestroy
               (CustomLogic_CustomLogicPhotonSync_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  CustomLogic_CustomLogicEvaluator_o *pCVar2;
  CustomLogic_CustomLogicMapObjectBuiltin_o *obj;
  
  if (Il2CppMethodInitialized_0754734c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    Il2CppMethodInitialized_0754734c = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  }
  else {
    pCVar2 = *(CustomLogic_CustomLogicEvaluator_o **)
              ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->static_fields + 8);
  }
  if (pCVar2 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    return;
  }
  obj = (__this->fields)._CustomLogicMapObjectBuiltin_k__BackingField;
  if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
  }
  CustomLogic_CustomLogicMapBuiltin__DestroyMapObjectBuiltin((Il2CppObject *)obj,true,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPhotonSync$$.ctor
// il2cpp: void CustomLogic_CustomLogicPhotonSync___ctor (CustomLogic_CustomLogicPhotonSync_o* __this, const MethodInfo* method);
// 0x5b718f0

void CustomLogic_CustomLogicPhotonSync___ctor(CustomLogic_CustomLogicPhotonSync_o *__this,MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector3_StaticFields *pUVar2;
  UnityEngine_Quaternion_StaticFields *pUVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  
  (__this->fields)._syncTransforms = true;
  (__this->fields)._syncVelocity = true;
  if (Il2CppMethodInitialized_0753e4b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b6 = '\x01';
  }
  pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar4 = (pUVar2->zeroVector).fields.y;
  fVar1 = (pUVar2->zeroVector).fields.z;
  (__this->fields)._correctPosition.fields.x = (pUVar2->zeroVector).fields.x;
  (__this->fields)._correctPosition.fields.y = fVar4;
  (__this->fields)._correctPosition.fields.z = fVar1;
  if (Il2CppMethodInitialized_0753e72b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
    Il2CppMethodInitialized_0753e72b = '\x01';
    bVar6 = Il2CppMethodInitialized_0753e4b6 == '\0';
    pUVar3 = TypeInfo_UnityEngine_Quaternion->static_fields;
    fVar1 = (pUVar3->identityQuaternion).fields.y;
    fVar4 = (pUVar3->identityQuaternion).fields.z;
    fVar5 = (pUVar3->identityQuaternion).fields.w;
    (__this->fields)._correctRotation.fields.x = (pUVar3->identityQuaternion).fields.x;
    (__this->fields)._correctRotation.fields.y = fVar1;
    (__this->fields)._correctRotation.fields.z = fVar4;
    (__this->fields)._correctRotation.fields.w = fVar5;
    if (bVar6) {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e4b6 = '\x01';
    }
  }
  else {
    pUVar3 = TypeInfo_UnityEngine_Quaternion->static_fields;
    fVar1 = (pUVar3->identityQuaternion).fields.y;
    fVar4 = (pUVar3->identityQuaternion).fields.z;
    fVar5 = (pUVar3->identityQuaternion).fields.w;
    (__this->fields)._correctRotation.fields.x = (pUVar3->identityQuaternion).fields.x;
    (__this->fields)._correctRotation.fields.y = fVar1;
    (__this->fields)._correctRotation.fields.z = fVar4;
    (__this->fields)._correctRotation.fields.w = fVar5;
  }
  pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar4 = (pUVar2->zeroVector).fields.y;
  fVar1 = (pUVar2->zeroVector).fields.z;
  (__this->fields)._correctVelocity.fields.x = (pUVar2->zeroVector).fields.x;
  (__this->fields)._correctVelocity.fields.y = fVar4;
  (__this->fields)._correctVelocity.fields.z = fVar1;
  Photon_Pun_MonoBehaviourPunCallbacks___ctor
            ((Photon_Pun_MonoBehaviourPunCallbacks_o *)__this,(MethodInfo *)0x0);
  return;
}


