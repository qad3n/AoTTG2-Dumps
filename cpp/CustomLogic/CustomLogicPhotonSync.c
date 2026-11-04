// Type: CustomLogic.CustomLogicPhotonSync
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicPhotonSync.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Component/CustomLogicPhotonSync.cs
// --------------------------------

// CustomLogic.CustomLogicPhotonSync.<WaitAndFinishDynamicInit>d__45$$.ctor
// il2cpp: void CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45___ctor (CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45___ctor(CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// CustomLogic.CustomLogicPhotonSync.<WaitAndFinishDynamicInit>d__45$$System.IDisposable.Dispose
// il2cpp: void CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45__System_IDisposable_Dispose (CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45_o* __this, const MethodInfo* method);
// 0x180547020

void
CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45__System_IDisposable_Dispose(CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45_o* __this, MethodInfo* method)

{
  return;
}


// CustomLogic.CustomLogicPhotonSync.<WaitAndFinishDynamicInit>d__45$$MoveNext
// il2cpp: bool CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45__MoveNext (CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45_o* __this, const MethodInfo* method);
// 0x1820b54c0

bool CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45__MoveNext
               (CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45_o *__this,MethodInfo *method
               )

{
  CustomLogic_CustomLogicPhotonSync_o *__this_00;
  
  if (Il2CppMethodInitialized_1843468d7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_1843468d7 = '\x01';
  }
  if (1 < (uint)(__this->fields).__1__state) {
    return false;
  }
  __this_00 = (__this->fields).__4__this;
  (__this->fields).__1__state = -1;
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  if (TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator ==
      (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    (__this->fields).__2__current = (Il2CppObject *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,(void *)0x0);
    (__this->fields).__1__state = 1;
    return true;
  }
  if (__this_00 != (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
    CustomLogic_CustomLogicPhotonSync__CreateAndSetupObject
              (__this_00,(__this->fields).persistsOwnership,(__this->fields).csvScript,(MethodInfo *)0x0);
    return false;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhotonSync.<WaitAndFinishDynamicInit>d__45$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45__System_Collections_Generic_IEnumerator_System_Object__get_Current (CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45__System_Collections_Generic_IEnumerator_System_Object__get_Current(CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicPhotonSync.<WaitAndFinishDynamicInit>d__45$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45__System_Collections_IEnumerator_Reset (CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45_o* __this, const MethodInfo* method);
// 0x1820b5590

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
// 0x180573e90

Il2CppObject*
CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45__System_Collections_IEnumerator_get_Current(CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicPhotonSync.<WaitAndFinishInit>d__46$$.ctor
// il2cpp: void CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46___ctor (CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46___ctor(CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// CustomLogic.CustomLogicPhotonSync.<WaitAndFinishInit>d__46$$System.IDisposable.Dispose
// il2cpp: void CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46__System_IDisposable_Dispose (CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46_o* __this, const MethodInfo* method);
// 0x180547020

void
CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46__System_IDisposable_Dispose(CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46_o* __this, MethodInfo* method)

{
  return;
}


// CustomLogic.CustomLogicPhotonSync.<WaitAndFinishInit>d__46$$MoveNext
// il2cpp: bool CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46__MoveNext (CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46_o* __this, const MethodInfo* method);
// 0x1820b55d0

bool CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46__MoveNext
               (CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicPhotonSync_o *__this_00;
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  System_Collections_Generic_Dictionary_int__ulong__o *__this_01;
  bool bVar2;
  
  if (Il2CppMethodInitialized_1843468d8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_ContainsKey
              );
    Il2CppMethodInitialized_1843468d8 = '\x01';
  }
  if (1 < (uint)(__this->fields).__1__state) {
    return false;
  }
  __this_00 = (__this->fields).__4__this;
  (__this->fields).__1__state = -1;
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  if (TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator !=
      (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    pCVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    if ((pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
       (__this_01 = (System_Collections_Generic_Dictionary_int__ulong__o *)(pCVar1->fields).IdToNetworkView,
       __this_01 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0)) {
      bVar2 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                        (__this_01,(__this->fields).mapObjectId,
                         (MethodInfo_1407110 *)
                         MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_ContainsKey
                        );
      if (!bVar2) goto label_1820b56a6;
      if (__this_00 != (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
        CustomLogic_CustomLogicPhotonSync__FinishInit
                  (__this_00,(__this->fields).mapObjectId,(MethodInfo *)0x0);
        return false;
      }
    }
    ThrowNullReferenceException();
  }
label_1820b56a6:
  (__this->fields).__2__current = (Il2CppObject *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,(void *)0x0);
  (__this->fields).__1__state = 1;
  return true;
}


// CustomLogic.CustomLogicPhotonSync.<WaitAndFinishInit>d__46$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46__System_Collections_Generic_IEnumerator_System_Object__get_Current (CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46__System_Collections_Generic_IEnumerator_System_Object__get_Current(CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicPhotonSync.<WaitAndFinishInit>d__46$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46__System_Collections_IEnumerator_Reset (CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46_o* __this, const MethodInfo* method);
// 0x1820b56e0

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
// 0x180573e90

Il2CppObject*
CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46__System_Collections_IEnumerator_get_Current(CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicPhotonSync.<WaitAndFinishSync>d__54$$.ctor
// il2cpp: void CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54___ctor (CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54___ctor(CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// CustomLogic.CustomLogicPhotonSync.<WaitAndFinishSync>d__54$$System.IDisposable.Dispose
// il2cpp: void CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54__System_IDisposable_Dispose (CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54_o* __this, const MethodInfo* method);
// 0x180547020

void
CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54__System_IDisposable_Dispose(CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54_o* __this, MethodInfo* method)

{
  return;
}


// CustomLogic.CustomLogicPhotonSync.<WaitAndFinishSync>d__54$$MoveNext
// il2cpp: bool CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54__MoveNext (CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54_o* __this, const MethodInfo* method);
// 0x1820b5720

bool CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54__MoveNext
               (CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54_o *__this,MethodInfo *method)

{
  float fVar1;
  CustomLogic_CustomLogicPhotonSync_o *pCVar2;
  float fVar3;
  float fVar4;
  
  if ((uint)(__this->fields).__1__state < 2) {
    pCVar2 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (pCVar2 == (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
      ThrowNullReferenceException();
    }
    if ((pCVar2->fields)._inited == false) {
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,(void *)0x0);
      (__this->fields).__1__state = 1;
      return true;
    }
    fVar3 = (__this->fields).position.fields.y;
    fVar1 = (__this->fields).position.fields.z;
    (pCVar2->fields)._correctPosition.fields.x = (__this->fields).position.fields.x;
    (pCVar2->fields)._correctPosition.fields.y = fVar3;
    (pCVar2->fields)._correctPosition.fields.z = fVar1;
    fVar1 = (__this->fields).rotation.fields.y;
    fVar3 = (__this->fields).rotation.fields.z;
    fVar4 = (__this->fields).rotation.fields.w;
    (pCVar2->fields)._correctRotation.fields.x = (__this->fields).rotation.fields.x;
    (pCVar2->fields)._correctRotation.fields.y = fVar1;
    (pCVar2->fields)._correctRotation.fields.z = fVar3;
    (pCVar2->fields)._correctRotation.fields.w = fVar4;
  }
  return false;
}


// CustomLogic.CustomLogicPhotonSync.<WaitAndFinishSync>d__54$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54__System_Collections_Generic_IEnumerator_System_Object__get_Current (CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54__System_Collections_Generic_IEnumerator_System_Object__get_Current(CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicPhotonSync.<WaitAndFinishSync>d__54$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54__System_Collections_IEnumerator_Reset (CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54_o* __this, const MethodInfo* method);
// 0x1820b5790

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
// 0x180573e90

Il2CppObject*
CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54__System_Collections_IEnumerator_get_Current(CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicPhotonSync$$get_SyncTransforms
// il2cpp: bool CustomLogic_CustomLogicPhotonSync__get_SyncTransforms (CustomLogic_CustomLogicPhotonSync_o* __this, const MethodInfo* method);
// 0x180f1d480

bool
CustomLogic_CustomLogicPhotonSync__get_SyncTransforms(CustomLogic_CustomLogicPhotonSync_o* __this, MethodInfo* method)

{
  return (__this->fields)._syncTransforms;
}


// CustomLogic.CustomLogicPhotonSync$$set_SyncTransforms
// il2cpp: void CustomLogic_CustomLogicPhotonSync__set_SyncTransforms (CustomLogic_CustomLogicPhotonSync_o* __this, bool value, const MethodInfo* method);
// 0x1820a9f20

void CustomLogic_CustomLogicPhotonSync__set_SyncTransforms
               (CustomLogic_CustomLogicPhotonSync_o *__this,bool value,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  
  pPVar1 = (__this->fields).PhotonView;
  if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
    if ((pPVar1->fields)._IsMine_k__BackingField != false) {
      (__this->fields)._syncTransforms = value;
    }
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhotonSync$$get_SyncVelocity
// il2cpp: bool CustomLogic_CustomLogicPhotonSync__get_SyncVelocity (CustomLogic_CustomLogicPhotonSync_o* __this, const MethodInfo* method);
// 0x181573470

bool
CustomLogic_CustomLogicPhotonSync__get_SyncVelocity(CustomLogic_CustomLogicPhotonSync_o* __this, MethodInfo* method)

{
  return (__this->fields)._syncVelocity;
}


// CustomLogic.CustomLogicPhotonSync$$set_SyncVelocity
// il2cpp: void CustomLogic_CustomLogicPhotonSync__set_SyncVelocity (CustomLogic_CustomLogicPhotonSync_o* __this, bool value, const MethodInfo* method);
// 0x1820a9f50

void CustomLogic_CustomLogicPhotonSync__set_SyncVelocity
               (CustomLogic_CustomLogicPhotonSync_o *__this,bool value,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  
  pPVar1 = (__this->fields).PhotonView;
  if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
    if ((pPVar1->fields)._IsMine_k__BackingField != false) {
      (__this->fields)._syncVelocity = value;
    }
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhotonSync$$get_Rigidbody
// il2cpp: UnityEngine_Rigidbody_o* CustomLogic_CustomLogicPhotonSync__get_Rigidbody (CustomLogic_CustomLogicPhotonSync_o* __this, const MethodInfo* method);
// 0x1820a9e40

UnityEngine_Rigidbody_o *
CustomLogic_CustomLogicPhotonSync__get_Rigidbody
          (CustomLogic_CustomLogicPhotonSync_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  Map_MapObject_o *pMVar2;
  UnityEngine_GameObject_o *__this_00;
  bool bVar3;
  UnityEngine_Rigidbody_o *value;
  
  if (Il2CppMethodInitialized_1843468bc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Rigidbody);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843468bc = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._rigidbody;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((bVar3) && ((__this->fields)._MapObject_k__BackingField != (Map_MapObject_o *)0x0)) {
    pUVar1 = (UnityEngine_Object_o *)(((__this->fields)._MapObject_k__BackingField)->fields).GameObject;
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
      value = UnityEngine_GameObject__GetComponent_object_
                        (__this_00,
                         (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Rigidbody);
      (__this->fields)._rigidbody = value;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._rigidbody,value);
    }
  }
  return (__this->fields)._rigidbody;
}


// CustomLogic.CustomLogicPhotonSync$$get_MapObject
// il2cpp: Map_MapObject_o* CustomLogic_CustomLogicPhotonSync__get_MapObject (CustomLogic_CustomLogicPhotonSync_o* __this, const MethodInfo* method);
// 0x180c7fb50

Map_MapObject_o*
CustomLogic_CustomLogicPhotonSync__get_MapObject(CustomLogic_CustomLogicPhotonSync_o* __this, MethodInfo* method)

{
  return (__this->fields)._NetworkView_k__BackingField;
}


// CustomLogic.CustomLogicPhotonSync$$set_MapObject
// il2cpp: void CustomLogic_CustomLogicPhotonSync__set_MapObject (CustomLogic_CustomLogicPhotonSync_o* __this, Map_MapObject_o* value, const MethodInfo* method);
// 0x180f1db10

void
CustomLogic_CustomLogicPhotonSync__set_MapObject(CustomLogic_CustomLogicPhotonSync_o* __this, Map_MapObject_o* value, MethodInfo* method)

{
  (__this->fields)._NetworkView_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._NetworkView_k__BackingField,value);
  return;
}


// CustomLogic.CustomLogicPhotonSync$$get_CustomLogicMapObjectBuiltin
// il2cpp: CustomLogic_CustomLogicMapObjectBuiltin_o* CustomLogic_CustomLogicPhotonSync__get_CustomLogicMapObjectBuiltin (CustomLogic_CustomLogicPhotonSync_o* __this, const MethodInfo* method);
// 0x1805853d0

CustomLogic_CustomLogicMapObjectBuiltin_o*
CustomLogic_CustomLogicPhotonSync__get_CustomLogicMapObjectBuiltin(CustomLogic_CustomLogicPhotonSync_o* __this, MethodInfo* method)

{
  return *(Unity_Properties_IProperty_TContainer__o **)&__this[1].fields;
}


// CustomLogic.CustomLogicPhotonSync$$set_CustomLogicMapObjectBuiltin
// il2cpp: void CustomLogic_CustomLogicPhotonSync__set_CustomLogicMapObjectBuiltin (CustomLogic_CustomLogicPhotonSync_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* value, const MethodInfo* method);
// 0x180f1d7f0

void
CustomLogic_CustomLogicPhotonSync__set_CustomLogicMapObjectBuiltin(CustomLogic_CustomLogicPhotonSync_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* value, MethodInfo* method)

{
  *(Unity_Properties_IProperty_TContainer__o **)&__this[1].fields = value;
  Il2CppCodeGenWriteBarrier((void **)(__this + 1),value);
  return;
}


// CustomLogic.CustomLogicPhotonSync$$get_NetworkView
// il2cpp: CustomLogic_CustomLogicNetworkViewBuiltin_o* CustomLogic_CustomLogicPhotonSync__get_NetworkView (CustomLogic_CustomLogicPhotonSync_o* __this, const MethodInfo* method);
// 0x18058a570

CustomLogic_CustomLogicNetworkViewBuiltin_o*
CustomLogic_CustomLogicPhotonSync__get_NetworkView(CustomLogic_CustomLogicPhotonSync_o* __this, MethodInfo* method)

{
  return (Unity_Properties_IProperty_TContainer__o *)(*(uint64_t *)((char *)__this + 0x78));
}


// CustomLogic.CustomLogicPhotonSync$$set_NetworkView
// il2cpp: void CustomLogic_CustomLogicPhotonSync__set_NetworkView (CustomLogic_CustomLogicPhotonSync_o* __this, CustomLogic_CustomLogicNetworkViewBuiltin_o* value, const MethodInfo* method);
// 0x180a37140

void
CustomLogic_CustomLogicPhotonSync__set_NetworkView(CustomLogic_CustomLogicPhotonSync_o* __this, CustomLogic_CustomLogicNetworkViewBuiltin_o* value, MethodInfo* method)

{
  (*(uint64_t *)((char *)__this + 0x78)) = (System_Collections_Generic_IEnumerator_IProperty_TContainer___o *)value;
  Il2CppCodeGenWriteBarrier(&(*(uint64_t *)((char *)__this + 0x78)),value);
  return;
}


// CustomLogic.CustomLogicPhotonSync$$get_SmoothingDelay
// il2cpp: float CustomLogic_CustomLogicPhotonSync__get_SmoothingDelay (CustomLogic_CustomLogicPhotonSync_o* __this, const MethodInfo* method);
// 0x1818b56e0

float
CustomLogic_CustomLogicPhotonSync__get_SmoothingDelay(CustomLogic_CustomLogicPhotonSync_o* __this, MethodInfo* method)

{
  return 5.0;
}


// CustomLogic.CustomLogicPhotonSync$$Awake
// il2cpp: void CustomLogic_CustomLogicPhotonSync__Awake (CustomLogic_CustomLogicPhotonSync_o* __this, const MethodInfo* method);
// 0x1820a7650

void CustomLogic_CustomLogicPhotonSync__Awake(CustomLogic_CustomLogicPhotonSync_o *__this,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *value;
  
  value = Photon_Pun_MonoBehaviourPun__get_photonView
                    ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  (__this->fields).PhotonView = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields).PhotonView,value);
  return;
}


// CustomLogic.CustomLogicPhotonSync$$OnEnable
// il2cpp: void CustomLogic_CustomLogicPhotonSync__OnEnable (CustomLogic_CustomLogicPhotonSync_o* __this, const MethodInfo* method);
// 0x1820a8880

void CustomLogic_CustomLogicPhotonSync__OnEnable
               (CustomLogic_CustomLogicPhotonSync_o *__this,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this_00;
  
  if (Il2CppMethodInitialized_1843468bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_1843468bd = '\x01';
  }
  __this_00 = (__this->fields).PhotonView;
  if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
    Photon_Pun_PhotonView__AddCallbackTarget
              (__this_00,(Photon_Pun_IPhotonViewCallback_o *)__this,(MethodInfo *)0x0);
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    Photon_Pun_PhotonNetwork__AddCallbackTarget((Il2CppObject *)__this,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhotonSync$$OnDisable
// il2cpp: void CustomLogic_CustomLogicPhotonSync__OnDisable (CustomLogic_CustomLogicPhotonSync_o* __this, const MethodInfo* method);
// 0x1820a8810

void CustomLogic_CustomLogicPhotonSync__OnDisable
               (CustomLogic_CustomLogicPhotonSync_o *__this,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this_00;
  
  if (Il2CppMethodInitialized_1843468be == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_1843468be = '\x01';
  }
  __this_00 = (__this->fields).PhotonView;
  if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
    Photon_Pun_PhotonView__RemoveCallbackTarget
              (__this_00,(Photon_Pun_IPhotonViewCallback_o *)__this,(MethodInfo *)0x0);
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    Photon_Pun_PhotonNetwork__RemoveCallbackTarget((Il2CppObject *)__this,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhotonSync$$OnPhotonInstantiate
// il2cpp: void CustomLogic_CustomLogicPhotonSync__OnPhotonInstantiate (CustomLogic_CustomLogicPhotonSync_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x1820a88f0

void CustomLogic_CustomLogicPhotonSync__OnPhotonInstantiate
               (CustomLogic_CustomLogicPhotonSync_o *__this,Photon_Pun_PhotonMessageInfo_o *info,
               MethodInfo *method)

{
  int iVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  System_Object_array *pSVar3;
  Il2CppObject *pIVar4;
  int *piVar5;
  int32_t *piVar6;
  undefined1 *puVar7;
  
  if (Il2CppMethodInitialized_1843468bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_SpawnIntent);
    Il2CppMethodInitialized_1843468bf = '\x01';
  }
  pPVar2 = (info->fields).photonView;
  if ((pPVar2 != (Photon_Pun_PhotonView_o *)0x0) &&
     (pSVar3 = (pPVar2->fields).instantiationDataField, pSVar3 != (System_Object_array *)0x0)) {
    if ((int)pSVar3->max_length == 0) {
label_1820a8a01:
      ThrowIndexOutOfRangeException();
    }
    pIVar4 = pSVar3->m_Items[0];
    if (pIVar4 != (Il2CppObject *)0x0) {
      if ((pIVar4->klass->_1).element_class != (TypeInfo_CustomLogic_SpawnIntent->_1).element_class) {
        il2cpp_codegen_raise_invalid_cast_exception(pIVar4,TypeInfo_CustomLogic_SpawnIntent);
      }
      piVar5 = il2cpp_object_unbox(pIVar4);
      iVar1 = *piVar5;
      (__this->fields)._spawnIntent = iVar1;
      if (iVar1 != 1) {
        return;
      }
      if ((uint)pSVar3->max_length < 2) goto label_1820a8a01;
      pIVar4 = pSVar3->m_Items[1];
      if (pIVar4 != (Il2CppObject *)0x0) {
        if ((pIVar4->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
          il2cpp_codegen_raise_invalid_cast_exception(pIVar4,g_data_184354e08);
        }
        piVar6 = il2cpp_object_unbox(pIVar4);
        (__this->fields).ObjectId = *piVar6;
        if ((uint)pSVar3->max_length < 3) goto label_1820a8a01;
        pIVar4 = pSVar3->m_Items[2];
        if (pIVar4 != (Il2CppObject *)0x0) {
          if ((pIVar4->klass->_1).element_class == *(Il2CppClass **)(g_data_184354de8 + 0x40)) {
            puVar7 = il2cpp_object_unbox(pIVar4);
            (__this->fields)._syncVelocity = (bool)*puVar7;
            return;
          }
          il2cpp_codegen_raise_invalid_cast_exception(pIVar4,g_data_184354de8);
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhotonSync$$Init
// il2cpp: void CustomLogic_CustomLogicPhotonSync__Init (CustomLogic_CustomLogicPhotonSync_o* __this, int32_t mapObjectId, bool rigidbody, const MethodInfo* method);
// 0x1820a85b0

void CustomLogic_CustomLogicPhotonSync__Init
               (CustomLogic_CustomLogicPhotonSync_o *__this,int32_t mapObjectId,bool rigidbody,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__ulong__o *__this_00;
  Photon_Pun_PhotonView_o *__this_01;
  Map_MapObject_o *value;
  System_Object_array *parameters;
  Il2CppObject *pIVar1;
  Il2CppObject *pIVar2;
  undefined1 local_res10 [8];
  int32_t local_18 [4];
  
  if (Il2CppMethodInitialized_1843468c0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"InitRPC");
    Il2CppMethodInitialized_1843468c0 = '\x01';
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  __this_00 = (System_Collections_Generic_Dictionary_int__ulong__o *)
              TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
  if (__this_00 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
    value = (Map_MapObject_o *)
            System_Collections_Generic_Dictionary_int__ulong___get_Item
                      (__this_00,mapObjectId,
                       (MethodInfo_14156F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    (__this->fields)._MapObject_k__BackingField = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._MapObject_k__BackingField,value);
    __this_01 = (__this->fields).PhotonView;
    parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
    local_18[0] = mapObjectId;
    pIVar1 = il2cpp_value_box(g_data_184354e08,local_18);
    if (parameters != (System_Object_array *)0x0) {
      if (pIVar1 != (Il2CppObject *)0x0) {
        pIVar2 = il2cpp_vm_Object_IsInst(pIVar1,(((parameters->obj).klass)->_1).element_class);
        if (pIVar2 == (Il2CppObject *)0x0) {
          pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
        }
      }
      if ((int)parameters->max_length != 0) {
        parameters->m_Items[0] = pIVar1;
        Il2CppCodeGenWriteBarrier(parameters->m_Items,pIVar1);
        local_res10[0] = rigidbody;
        pIVar1 = il2cpp_value_box(g_data_184354de8,local_res10);
        if (pIVar1 != (Il2CppObject *)0x0) {
          pIVar2 = il2cpp_vm_Object_IsInst(pIVar1,(((parameters->obj).klass)->_1).element_class);
          if (pIVar2 == (Il2CppObject *)0x0) {
            pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
          }
        }
        if (1 < (uint)parameters->max_length) {
          parameters->m_Items[1] = pIVar1;
          Il2CppCodeGenWriteBarrier(parameters->m_Items + 1,pIVar1);
          if (__this_01 != (Photon_Pun_PhotonView_o *)0x0) {
            Photon_Pun_PhotonView__RPC(__this_01,"InitRPC",3,parameters,(MethodInfo *)0x0);
            return;
          }
          goto label_1820a8750;
        }
      }
      ThrowIndexOutOfRangeException();
    }
  }
label_1820a8750:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhotonSync$$Init
// il2cpp: void CustomLogic_CustomLogicPhotonSync__Init (CustomLogic_CustomLogicPhotonSync_o* __this, int32_t mapObjectId, const MethodInfo* method);
// 0x1820a8380

void CustomLogic_CustomLogicPhotonSync__Init_20a8380
               (CustomLogic_CustomLogicPhotonSync_o *__this,int32_t mapObjectId,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__ulong__o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  Photon_Pun_PhotonView_o *__this_02;
  bool bVar1;
  Map_MapObject_o *pMVar2;
  UnityEngine_Object_o *x;
  System_Object_array *parameters;
  Il2CppObject *pIVar3;
  Il2CppObject *pIVar4;
  undefined1 local_res10 [16];
  int32_t local_res20 [2];
  
  if (Il2CppMethodInitialized_1843468c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Rigidbody);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"InitRPC");
    Il2CppMethodInitialized_1843468c1 = '\x01';
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  __this_00 = (System_Collections_Generic_Dictionary_int__ulong__o *)
              TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
  if (__this_00 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
    pMVar2 = (Map_MapObject_o *)
             System_Collections_Generic_Dictionary_int__ulong___get_Item
                       (__this_00,mapObjectId,
                        (MethodInfo_14156F0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    (__this->fields)._MapObject_k__BackingField = pMVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._MapObject_k__BackingField,pMVar2);
    pMVar2 = (__this->fields)._MapObject_k__BackingField;
    if ((pMVar2 != (Map_MapObject_o *)0x0) &&
       (__this_01 = (pMVar2->fields).GameObject, __this_01 != (UnityEngine_GameObject_o *)0x0)) {
      x = (UnityEngine_Object_o *)
          UnityEngine_GameObject__GetComponent_object_
                    (__this_01,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Rigidbody);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      __this_02 = (__this->fields).PhotonView;
      parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
      local_res20[0] = mapObjectId;
      pIVar3 = il2cpp_value_box(g_data_184354e08,local_res20);
      if (parameters != (System_Object_array *)0x0) {
        if (pIVar3 != (Il2CppObject *)0x0) {
          pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((parameters->obj).klass)->_1).element_class);
          if (pIVar4 == (Il2CppObject *)0x0) {
            pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
          }
        }
        if ((int)parameters->max_length != 0) {
          parameters->m_Items[0] = pIVar3;
          Il2CppCodeGenWriteBarrier(parameters->m_Items,pIVar3);
          local_res10[0] = bVar1;
          pIVar3 = il2cpp_value_box(g_data_184354de8,local_res10);
          if (pIVar3 != (Il2CppObject *)0x0) {
            pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((parameters->obj).klass)->_1).element_class);
            if (pIVar4 == (Il2CppObject *)0x0) {
              pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
            }
          }
          if (1 < (uint)parameters->max_length) {
            parameters->m_Items[1] = pIVar3;
            Il2CppCodeGenWriteBarrier(parameters->m_Items + 1,pIVar3);
            if (__this_02 != (Photon_Pun_PhotonView_o *)0x0) {
              Photon_Pun_PhotonView__RPC(__this_02,"InitRPC",3,parameters,(MethodInfo *)0x0);
              return;
            }
            goto label_1820a857b;
          }
        }
        ThrowIndexOutOfRangeException();
      }
    }
  }
label_1820a857b:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhotonSync$$InitDynamic
// il2cpp: void CustomLogic_CustomLogicPhotonSync__InitDynamic (CustomLogic_CustomLogicPhotonSync_o* __this, bool persistsOwnership, System_String_o* csvScript, const MethodInfo* method);
// 0x1820a8180

void CustomLogic_CustomLogicPhotonSync__InitDynamic
               (CustomLogic_CustomLogicPhotonSync_o *__this,bool persistsOwnership,System_String_o *csvScript,
               MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this_00;
  System_Object_array *parameters;
  Il2CppObject *pIVar1;
  Il2CppObject *pIVar2;
  undefined1 local_res10 [24];
  
  if (Il2CppMethodInitialized_1843468c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"InitDynamicRPC");
    Il2CppMethodInitialized_1843468c2 = '\x01';
  }
  __this_00 = (__this->fields).PhotonView;
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
  local_res10[0] = persistsOwnership;
  pIVar1 = il2cpp_value_box(g_data_184354de8,local_res10);
  if (parameters == (System_Object_array *)0x0) {
label_1820a82a4:
    ThrowNullReferenceException();
  }
  if (pIVar1 != (Il2CppObject *)0x0) {
    pIVar2 = il2cpp_vm_Object_IsInst(pIVar1,(((parameters->obj).klass)->_1).element_class);
    if (pIVar2 == (Il2CppObject *)0x0) {
      pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
    }
  }
  if ((int)parameters->max_length != 0) {
    parameters->m_Items[0] = pIVar1;
    Il2CppCodeGenWriteBarrier(parameters->m_Items,pIVar1);
    if (csvScript != (System_String_o *)0x0) {
      pIVar1 = il2cpp_vm_Object_IsInst
                         ((Il2CppObject *)csvScript,(((parameters->obj).klass)->_1).element_class);
      if (pIVar1 == (Il2CppObject *)0x0) {
        pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
      }
    }
    if (1 < (uint)parameters->max_length) {
      parameters->m_Items[1] = (Il2CppObject *)csvScript;
      Il2CppCodeGenWriteBarrier(parameters->m_Items + 1,csvScript);
      if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(__this_00,"InitDynamicRPC",4,parameters,(MethodInfo *)0x0);
        CustomLogic_CustomLogicPhotonSync__CreateAndSetupObject
                  (__this,persistsOwnership,csvScript,(MethodInfo *)0x0);
        return;
      }
      goto label_1820a82a4;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicPhotonSync$$InitRPC
// il2cpp: void CustomLogic_CustomLogicPhotonSync__InitRPC (CustomLogic_CustomLogicPhotonSync_o* __this, int32_t mapObjectId, bool syncVelocity, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x1820a82d0

void CustomLogic_CustomLogicPhotonSync__InitRPC
               (CustomLogic_CustomLogicPhotonSync_o *__this,int32_t mapObjectId,bool syncVelocity,
               Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46_o *routine;
  bool bVar2;
  
  pPVar1 = (__this->fields).PhotonView;
  if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
    if ((info->fields).Sender == (pPVar1->fields)._Owner_k__BackingField) {
      bVar2 = Il2CppMethodInitialized_1843468c5 == '\0';
      (__this->fields)._syncVelocity = syncVelocity;
      if (bVar2) {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CustomLogicPhotonSync_WaitAndFinishInit_d__46);
        Il2CppMethodInitialized_1843468c5 = '\x01';
      }
      routine = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhotonSync_WaitAndFinishInit_d__46);
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
      (routine->fields).__1__state = 0;
      (routine->fields).__4__this = __this;
      Il2CppCodeGenWriteBarrier(&(routine->fields).__4__this,__this);
      (routine->fields).mapObjectId = mapObjectId;
      UnityEngine_MonoBehaviour__StartCoroutine_Auto
                ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)routine,
                 (MethodInfo *)0x0);
    }
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhotonSync$$InitDynamicRPC
// il2cpp: void CustomLogic_CustomLogicPhotonSync__InitDynamicRPC (CustomLogic_CustomLogicPhotonSync_o* __this, bool persistsOwnership, System_String_o* csvScript, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x1820a80c0

void CustomLogic_CustomLogicPhotonSync__InitDynamicRPC
               (CustomLogic_CustomLogicPhotonSync_o *__this,bool persistsOwnership,System_String_o *csvScript,
               Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45_o *routine;
  
  pPVar1 = (__this->fields).PhotonView;
  if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
    if ((info->fields).Sender == (pPVar1->fields)._Owner_k__BackingField) {
      if (Il2CppMethodInitialized_1843468c4 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CustomLogicPhotonSync_WaitAndFinishDynamicInit_d__45);
        Il2CppMethodInitialized_1843468c4 = '\x01';
      }
      routine = il2cpp_codegen_object_new
                          ((Il2CppClass *)
                           TypeInfo_CustomLogic_CustomLogicPhotonSync_WaitAndFinishDynamicInit_d__45);
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
      (routine->fields).__1__state = 0;
      (routine->fields).__4__this = __this;
      Il2CppCodeGenWriteBarrier(&(routine->fields).__4__this,__this);
      (routine->fields).persistsOwnership = persistsOwnership;
      (routine->fields).csvScript = csvScript;
      Il2CppCodeGenWriteBarrier(&(routine->fields).csvScript,csvScript);
      UnityEngine_MonoBehaviour__StartCoroutine_Auto
                ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)routine,
                 (MethodInfo *)0x0);
    }
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhotonSync$$CreateAndSetupObject
// il2cpp: void CustomLogic_CustomLogicPhotonSync__CreateAndSetupObject (CustomLogic_CustomLogicPhotonSync_o* __this, bool persistsOwnership, System_String_o* csvScript, const MethodInfo* method);
// 0x1820a7680

void CustomLogic_CustomLogicPhotonSync__CreateAndSetupObject
               (CustomLogic_CustomLogicPhotonSync_o *__this,bool persistsOwnership,System_String_o *csvScript,
               MethodInfo *method)

{
  int iVar1;
  int iVar2;
  float fVar3;
  CustomLogic_CustomLogicEvaluator_o *pCVar4;
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar5;
  System_Collections_Generic_Dictionary_int__object__o *pSVar6;
  UnityEngine_GameObject_o *pUVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  Photon_Pun_PhotonView_o *pPVar12;
  System_String_array *value;
  System_String_o *pSVar13;
  Map_MapScriptSceneObject_o *__this_00;
  Map_MapObject_o *pMVar14;
  CustomLogic_CustomLogicNetworkViewBuiltin_o *pCVar15;
  CustomLogic_CustomLogicMapObjectBuiltin_o *__this_01;
  Il2CppObject *pIVar16;
  UnityEngine_Transform_o *pUVar17;
  UnityEngine_Vector3_o *pUVar18;
  UnityEngine_Quaternion_o *pUVar19;
  int32_t local_res18 [2];
  UnityEngine_Quaternion_o local_18;
  
  if (Il2CppMethodInitialized_1843468c3 == '\0') {
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
    Il2CppMethodInitialized_1843468c3 = '\x01';
  }
  bVar11 = System_String__IsNullOrEmpty(csvScript,(MethodInfo *)0x0);
  if (bVar11) {
    return;
  }
  (__this->fields)._persistsOwnership = persistsOwnership;
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  iVar1 = TypeInfo_Map_MapLoader->static_fields->ROOT_OBJECT_ID;
  iVar2 = TypeInfo_Map_MapLoader->static_fields->NETWORK_OFFSET;
  pPVar12 = Photon_Pun_MonoBehaviourPun__get_photonView
                      ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if ((pPVar12 != (Photon_Pun_PhotonView_o *)0x0) &&
     ((__this->fields).ObjectId = (iVar1 - (pPVar12->fields).viewIdField) - iVar2,
     csvScript != (System_String_o *)0x0)) {
    value = System_String__Split(csvScript,10,0,(MethodInfo *)0x0);
    pSVar13 = System_String__Join("",value,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Map_MapScriptSceneObject);
    Map_MapScriptSceneObject___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Map_MapScriptSceneObject_o *)0x0) {
      (*(__this_00->klass->vtable)._9_Deserialize.methodPtr)
                (__this_00,pSVar13,(__this_00->klass->vtable)._9_Deserialize.method);
      (__this_00->fields).Id = (__this->fields).ObjectId;
      (__this_00->fields).Parent = TypeInfo_Map_MapLoader->static_fields->ROOT_OBJECT_ID;
      (__this_00->fields).Networked = true;
      pMVar14 = Map_MapLoader__LoadObject((Map_MapScriptBaseObject_o *)__this_00,false,(MethodInfo *)0x0);
      if (pMVar14 != (Map_MapObject_o *)0x0) {
        (pMVar14->fields).RuntimeCreated = true;
        Map_MapLoader__SetParent_1eb01f0(pMVar14,(MethodInfo *)0x0);
        pCVar15 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin)
        ;
        CustomLogic_CustomLogicNetworkViewBuiltin___ctor(pCVar15,pMVar14,(MethodInfo *)0x0);
        (__this->fields)._NetworkView_k__BackingField = pCVar15;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._NetworkView_k__BackingField,pCVar15);
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin)
        ;
        CustomLogic_CustomLogicMapObjectBuiltin___ctor(__this_01,pMVar14,(MethodInfo *)0x0);
        (__this->fields)._CustomLogicMapObjectBuiltin_k__BackingField = __this_01;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._CustomLogicMapObjectBuiltin_k__BackingField,__this_01);
        (__this->fields)._MapObject_k__BackingField = pMVar14;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._MapObject_k__BackingField,pMVar14);
        if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
        }
        pCVar4 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
        if ((pCVar4 != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
           (pSVar5 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                     (pCVar4->fields).IdToMapObjectBuiltin,
           pSVar5 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0)) {
          bVar11 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                             (pSVar5,(__this->fields).ObjectId,
                              (MethodInfo_1407110 *)
                              MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicMapObjectBuiltin_ContainsKey
                             );
          if (bVar11) {
            local_res18[0] = (__this->fields).ObjectId;
            pIVar16 = il2cpp_value_box(g_data_184354e08,local_res18);
            pSVar13 = System_String__Format("PhotonSync: MapObject for id {0} already exists, overwriting.",pIVar16,(MethodInfo *)0x0);
            if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
            }
            UnityEngine_Debug__LogWarning((Il2CppObject *)pSVar13,(MethodInfo *)0x0);
          }
          if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
          }
          pCVar4 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
          if ((pCVar4 != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
             (pSVar6 = (System_Collections_Generic_Dictionary_int__object__o *)
                       (pCVar4->fields).IdToMapObjectBuiltin,
             pSVar6 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
            System_Collections_Generic_Dictionary_int__object___set_Item
                      (pSVar6,(__this->fields).ObjectId,
                       (Il2CppObject *)(__this->fields)._CustomLogicMapObjectBuiltin_k__BackingField,
                       (MethodInfo_1423510 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicMapObjectBuiltin_set_Item
                      );
            pCVar4 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
            if ((pCVar4 != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
               (pSVar5 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                         (pCVar4->fields).IdToNetworkView,
               pSVar5 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0)) {
              bVar11 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                                 (pSVar5,(__this->fields).ObjectId,
                                  (MethodInfo_1407110 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_ContainsKey
                                 );
              if (bVar11) {
                local_res18[0] = (__this->fields).ObjectId;
                pIVar16 = il2cpp_value_box(g_data_184354e08,local_res18);
                pSVar13 = System_String__Format("PhotonSync: NetworkView for id {0} already exists, overwriting.",pIVar16,(MethodInfo *)0x0);
                if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
                }
                UnityEngine_Debug__LogWarning((Il2CppObject *)pSVar13,(MethodInfo *)0x0);
              }
              if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
              }
              pCVar4 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
              if ((pCVar4 != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
                 (pSVar6 = (System_Collections_Generic_Dictionary_int__object__o *)
                           (pCVar4->fields).IdToNetworkView,
                 pSVar6 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
                System_Collections_Generic_Dictionary_int__object___set_Item
                          (pSVar6,(__this->fields).ObjectId,
                           (Il2CppObject *)(__this->fields)._NetworkView_k__BackingField,
                           (MethodInfo_1423510 *)
                           MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_set_Item
                          );
                pCVar15 = (__this->fields)._NetworkView_k__BackingField;
                if (pCVar15 != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
                  CustomLogic_CustomLogicNetworkViewBuiltin__SetSyncDynamic(pCVar15,__this,(MethodInfo *)0x0);
                  pCVar4 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
                  if (pCVar4 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
                    CustomLogic_CustomLogicEvaluator__LoadRuntimeMapObjectComponents
                              (pCVar4,pMVar14,true,(MethodInfo *)0x0);
                    pMVar14 = (__this->fields)._MapObject_k__BackingField;
                    if (((pMVar14 != (Map_MapObject_o *)0x0) &&
                        (pUVar7 = (pMVar14->fields).GameObject, pUVar7 != (UnityEngine_GameObject_o *)0x0)) &&
                       (pUVar17 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0),
                       pUVar17 != (UnityEngine_Transform_o *)0x0)) {
                      pUVar18 = UnityEngine_Transform__get_position
                                          ((UnityEngine_Vector3_o *)&local_18,pUVar17,(MethodInfo *)0x0);
                      fVar3 = (pUVar18->fields).z;
                      fVar8 = (pUVar18->fields).y;
                      (__this->fields)._correctPosition.fields.x = (pUVar18->fields).x;
                      (__this->fields)._correctPosition.fields.y = fVar8;
                      (__this->fields)._correctPosition.fields.z = fVar3;
                      pMVar14 = (__this->fields)._MapObject_k__BackingField;
                      if (((pMVar14 != (Map_MapObject_o *)0x0) &&
                          (pUVar7 = (pMVar14->fields).GameObject, pUVar7 != (UnityEngine_GameObject_o *)0x0))
                         && (pUVar17 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0),
                            pUVar17 != (UnityEngine_Transform_o *)0x0)) {
                        pUVar19 = UnityEngine_Transform__get_rotation(&local_18,pUVar17,(MethodInfo *)0x0);
                        fVar3 = (pUVar19->fields).x;
                        fVar8 = (pUVar19->fields).y;
                        fVar9 = (pUVar19->fields).z;
                        fVar10 = (pUVar19->fields).w;
                        (__this->fields)._inited = true;
                        (__this->fields)._correctRotation.fields.x = fVar3;
                        (__this->fields)._correctRotation.fields.y = fVar8;
                        (__this->fields)._correctRotation.fields.z = fVar9;
                        (__this->fields)._correctRotation.fields.w = fVar10;
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
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhotonSync$$WaitAndFinishDynamicInit
// il2cpp: System_Collections_IEnumerator_o* CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit (CustomLogic_CustomLogicPhotonSync_o* __this, bool persistsOwnership, System_String_o* csvScript, const MethodInfo* method);
// 0x1820a9be0

System_Collections_IEnumerator_o *
CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit
          (CustomLogic_CustomLogicPhotonSync_o *__this,bool persistsOwnership,System_String_o *csvScript,
          MethodInfo *method)

{
  CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45_o *__this_00;
  
  if (Il2CppMethodInitialized_1843468c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicPhotonSync_WaitAndFinishDynamicInit_d__45);
    Il2CppMethodInitialized_1843468c4 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_CustomLogic_CustomLogicPhotonSync_WaitAndFinishDynamicInit_d__45);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  (__this_00->fields).persistsOwnership = persistsOwnership;
  (__this_00->fields).csvScript = csvScript;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).csvScript,csvScript);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// CustomLogic.CustomLogicPhotonSync$$WaitAndFinishInit
// il2cpp: System_Collections_IEnumerator_o* CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit (CustomLogic_CustomLogicPhotonSync_o* __this, int32_t mapObjectId, const MethodInfo* method);
// 0x1820a9c60

System_Collections_IEnumerator_o *
CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit
          (CustomLogic_CustomLogicPhotonSync_o *__this,int32_t mapObjectId,MethodInfo *method)

{
  CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46_o *__this_00;
  
  if (Il2CppMethodInitialized_1843468c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicPhotonSync_WaitAndFinishInit_d__46);
    Il2CppMethodInitialized_1843468c5 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhotonSync_WaitAndFinishInit_d__46);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  (__this_00->fields).mapObjectId = mapObjectId;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// CustomLogic.CustomLogicPhotonSync$$FinishInit
// il2cpp: void CustomLogic_CustomLogicPhotonSync__FinishInit (CustomLogic_CustomLogicPhotonSync_o* __this, int32_t mapObjectId, const MethodInfo* method);
// 0x1820a7c00

void CustomLogic_CustomLogicPhotonSync__FinishInit
               (CustomLogic_CustomLogicPhotonSync_o *__this,int32_t mapObjectId,MethodInfo *method)

{
  float fVar1;
  System_Collections_Generic_Dictionary_int__ulong__o *pSVar2;
  CustomLogic_CustomLogicEvaluator_o *pCVar3;
  UnityEngine_GameObject_o *pUVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  Map_MapObject_o *pMVar8;
  CustomLogic_CustomLogicNetworkViewBuiltin_o *pCVar9;
  UnityEngine_Transform_o *pUVar10;
  UnityEngine_Vector3_o *pUVar11;
  UnityEngine_Quaternion_o *pUVar12;
  UnityEngine_Quaternion_o local_18;
  
  if (Il2CppMethodInitialized_1843468c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    Il2CppMethodInitialized_1843468c6 = '\x01';
  }
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  pSVar2 = (System_Collections_Generic_Dictionary_int__ulong__o *)
           TypeInfo_Map_MapLoader->static_fields->IdToMapObject;
  if (pSVar2 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0) {
    pMVar8 = (Map_MapObject_o *)
             System_Collections_Generic_Dictionary_int__ulong___get_Item
                       (pSVar2,mapObjectId,
                        (MethodInfo_14156F0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_int_MapObject_get_Item);
    (__this->fields)._MapObject_k__BackingField = pMVar8;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._MapObject_k__BackingField,pMVar8);
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    pCVar3 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
    if ((pCVar3 != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
       (pSVar2 = (System_Collections_Generic_Dictionary_int__ulong__o *)(pCVar3->fields).IdToNetworkView,
       pSVar2 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0)) {
      pCVar9 = (CustomLogic_CustomLogicNetworkViewBuiltin_o *)
               System_Collections_Generic_Dictionary_int__ulong___get_Item
                         (pSVar2,mapObjectId,
                          (MethodInfo_14156F0 *)
                          MethodInfo_System_Collections_Generic_Dictionary_int_CustomLogicNetworkViewBuiltin_get_Item
                         );
      (__this->fields)._NetworkView_k__BackingField = pCVar9;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._NetworkView_k__BackingField,pCVar9);
      pCVar9 = (__this->fields)._NetworkView_k__BackingField;
      if (pCVar9 != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
        CustomLogic_CustomLogicNetworkViewBuiltin__SetSync(pCVar9,__this,(MethodInfo *)0x0);
        pMVar8 = (__this->fields)._MapObject_k__BackingField;
        if ((pMVar8 != (Map_MapObject_o *)0x0) &&
           (pUVar4 = (pMVar8->fields).GameObject, pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
          pUVar10 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
          if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
            pUVar11 = UnityEngine_Transform__get_position
                                ((UnityEngine_Vector3_o *)&local_18,pUVar10,(MethodInfo *)0x0);
            fVar1 = (pUVar11->fields).z;
            fVar5 = (pUVar11->fields).y;
            (__this->fields)._correctPosition.fields.x = (pUVar11->fields).x;
            (__this->fields)._correctPosition.fields.y = fVar5;
            (__this->fields)._correctPosition.fields.z = fVar1;
            pMVar8 = (__this->fields)._MapObject_k__BackingField;
            if ((pMVar8 != (Map_MapObject_o *)0x0) &&
               (pUVar4 = (pMVar8->fields).GameObject, pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
              pUVar10 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
              if (pUVar10 != (UnityEngine_Transform_o *)0x0) {
                pUVar12 = UnityEngine_Transform__get_rotation(&local_18,pUVar10,(MethodInfo *)0x0);
                fVar1 = (pUVar12->fields).x;
                fVar5 = (pUVar12->fields).y;
                fVar6 = (pUVar12->fields).z;
                fVar7 = (pUVar12->fields).w;
                (__this->fields)._inited = true;
                (__this->fields)._correctRotation.fields.x = fVar1;
                (__this->fields)._correctRotation.fields.y = fVar5;
                (__this->fields)._correctRotation.fields.z = fVar6;
                (__this->fields)._correctRotation.fields.w = fVar7;
                return;
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhotonSync$$SendMessageRPC
// il2cpp: void CustomLogic_CustomLogicPhotonSync__SendMessageRPC (CustomLogic_CustomLogicPhotonSync_o* __this, System_String_o* message, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x1820a9630

void CustomLogic_CustomLogicPhotonSync__SendMessageRPC
               (CustomLogic_CustomLogicPhotonSync_o *__this,System_String_o *message,
               Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  CustomLogic_CustomLogicNetworkViewBuiltin_o *__this_00;
  Photon_Realtime_Player_o *player;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this_01;
  double sentServerTime;
  
  if (Il2CppMethodInitialized_1843468c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
    Il2CppMethodInitialized_1843468c7 = '\x01';
  }
  if ((__this->fields)._NetworkView_k__BackingField != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
    __this_00 = (__this->fields)._NetworkView_k__BackingField;
    player = (info->fields).Sender;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
    CustomLogic_CustomLogicPlayerBuiltin___ctor(__this_01,player,(MethodInfo *)0x0);
    sentServerTime = Photon_Pun_PhotonMessageInfo__get_SentServerTime(info,(MethodInfo *)0x0);
    CustomLogic_CustomLogicNetworkViewBuiltin__OnNetworkMessage
              (__this_00,__this_01,message,sentServerTime,(MethodInfo *)0x0);
  }
  return;
}


// CustomLogic.CustomLogicPhotonSync$$SendMessage
// il2cpp: void CustomLogic_CustomLogicPhotonSync__SendMessage (CustomLogic_CustomLogicPhotonSync_o* __this, Photon_Realtime_Player_o* player, System_String_o* message, const MethodInfo* method);
// 0x1820a96e0

void CustomLogic_CustomLogicPhotonSync__SendMessage
               (CustomLogic_CustomLogicPhotonSync_o *__this,Photon_Realtime_Player_o *player,
               System_String_o *message,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this_00;
  System_Object_array *parameters;
  Il2CppObject *pIVar1;
  
  if (Il2CppMethodInitialized_1843468c8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"SendMessageRPC");
    Il2CppMethodInitialized_1843468c8 = '\x01';
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
    Il2CppCodeGenWriteBarrier(parameters->m_Items,message);
    if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
      Photon_Pun_PhotonView__RPC_1d4d8d0(__this_00,"SendMessageRPC",player,parameters,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhotonSync$$SendMessageAll
// il2cpp: void CustomLogic_CustomLogicPhotonSync__SendMessageAll (CustomLogic_CustomLogicPhotonSync_o* __this, System_String_o* message, const MethodInfo* method);
// 0x1820a9470

void CustomLogic_CustomLogicPhotonSync__SendMessageAll
               (CustomLogic_CustomLogicPhotonSync_o *__this,System_String_o *message,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this_00;
  System_Object_array *parameters;
  Il2CppObject *pIVar1;
  
  if (Il2CppMethodInitialized_1843468c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"SendMessageRPC");
    Il2CppMethodInitialized_1843468c9 = '\x01';
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
    Il2CppCodeGenWriteBarrier(parameters->m_Items,message);
    if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
      Photon_Pun_PhotonView__RPC(__this_00,"SendMessageRPC",0,parameters,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhotonSync$$SendMessageOthers
// il2cpp: void CustomLogic_CustomLogicPhotonSync__SendMessageOthers (CustomLogic_CustomLogicPhotonSync_o* __this, System_String_o* message, const MethodInfo* method);
// 0x1820a9550

void CustomLogic_CustomLogicPhotonSync__SendMessageOthers
               (CustomLogic_CustomLogicPhotonSync_o *__this,System_String_o *message,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this_00;
  System_Object_array *parameters;
  Il2CppObject *pIVar1;
  
  if (Il2CppMethodInitialized_1843468ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"SendMessageRPC");
    Il2CppMethodInitialized_1843468ca = '\x01';
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
    Il2CppCodeGenWriteBarrier(parameters->m_Items,message);
    if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
      Photon_Pun_PhotonView__RPC(__this_00,"SendMessageRPC",1,parameters,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhotonSync$$OnPlayerEnteredRoom
// il2cpp: void CustomLogic_CustomLogicPhotonSync__OnPlayerEnteredRoom (CustomLogic_CustomLogicPhotonSync_o* __this, Photon_Realtime_Player_o* newPlayer, const MethodInfo* method);
// 0x1820a90f0

void CustomLogic_CustomLogicPhotonSync__OnPlayerEnteredRoom
               (CustomLogic_CustomLogicPhotonSync_o *__this,Photon_Realtime_Player_o *newPlayer,
               MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this_00;
  System_Object_array *parameters;
  UnityEngine_Vector3_o *pUVar1;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  UnityEngine_Quaternion_o *pUVar4;
  undefined8 local_38;
  float local_30;
  UnityEngine_Quaternion_o local_28;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (Il2CppMethodInitialized_1843468cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    il2cpp_codegen_initialize_runtime_metadata(&"SyncRPC");
    Il2CppMethodInitialized_1843468cb = '\x01';
  }
  if (((__this->fields)._inited == false) || ((__this->fields)._syncTransforms == false)) {
    return;
  }
  __this_00 = (__this->fields).PhotonView;
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
  pUVar1 = CustomLogic_CustomLogicPhotonSync__GetPosition
                     ((UnityEngine_Vector3_o *)&local_28,__this,(MethodInfo *)0x0);
  local_38._0_4_ = (pUVar1->fields).x;
  local_38._4_4_ = (pUVar1->fields).y;
  local_30 = (pUVar1->fields).z;
  pIVar2 = il2cpp_value_box((Il2CppClass *)TypeInfo_UnityEngine_Vector3,&local_38);
  if (parameters == (System_Object_array *)0x0) {
label_1820a9296:
    ThrowNullReferenceException();
  }
  if ((pIVar2 != (Il2CppObject *)0x0) &&
     (pIVar3 = il2cpp_vm_Object_IsInst(pIVar2,(((parameters->obj).klass)->_1).element_class),
     pIVar3 == (Il2CppObject *)0x0)) {
    pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
    il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
  }
  if ((int)parameters->max_length != 0) {
    parameters->m_Items[0] = pIVar2;
    Il2CppCodeGenWriteBarrier(parameters->m_Items,pIVar2);
    pUVar4 = CustomLogic_CustomLogicPhotonSync__GetRotation(&local_28,__this,(MethodInfo *)0x0);
    local_18._0_4_ = (pUVar4->fields).x;
    local_18._4_4_ = (pUVar4->fields).y;
    uStack_10._0_4_ = (pUVar4->fields).z;
    uStack_10._4_4_ = (pUVar4->fields).w;
    pIVar2 = il2cpp_value_box((Il2CppClass *)TypeInfo_UnityEngine_Quaternion,&local_18);
    if ((pIVar2 != (Il2CppObject *)0x0) &&
       (pIVar3 = il2cpp_vm_Object_IsInst(pIVar2,(((parameters->obj).klass)->_1).element_class),
       pIVar3 == (Il2CppObject *)0x0)) {
      pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
    }
    if (1 < (uint)parameters->max_length) {
      parameters->m_Items[1] = pIVar2;
      Il2CppCodeGenWriteBarrier(parameters->m_Items + 1,pIVar2);
      if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC_1d4d8d0
                  (__this_00,"SyncRPC",newPlayer,parameters,(MethodInfo *)0x0);
        return;
      }
      goto label_1820a9296;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicPhotonSync$$SyncRPC
// il2cpp: void CustomLogic_CustomLogicPhotonSync__SyncRPC (CustomLogic_CustomLogicPhotonSync_o* __this, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x1820a97b0

void CustomLogic_CustomLogicPhotonSync__SyncRPC
               (CustomLogic_CustomLogicPhotonSync_o *__this,UnityEngine_Vector3_o *position,
               UnityEngine_Quaternion_o *rotation,Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  float fVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54_o *routine;
  
  pPVar2 = (__this->fields).PhotonView;
  if (pPVar2 != (Photon_Pun_PhotonView_o *)0x0) {
    if ((info->fields).Sender == (pPVar2->fields)._Owner_k__BackingField) {
      if (Il2CppMethodInitialized_1843468cc == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CustomLogicPhotonSync_WaitAndFinishSync_d__54);
        Il2CppMethodInitialized_1843468cc = '\x01';
      }
      routine = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhotonSync_WaitAndFinishSync_d__54);
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
      (routine->fields).__1__state = 0;
      (routine->fields).__4__this = __this;
      Il2CppCodeGenWriteBarrier(&(routine->fields).__4__this,__this);
      fVar3 = (position->fields).y;
      fVar1 = (position->fields).z;
      (routine->fields).position.fields.x = (position->fields).x;
      (routine->fields).position.fields.y = fVar3;
      fVar3 = (rotation->fields).x;
      fVar4 = (rotation->fields).y;
      fVar5 = (rotation->fields).z;
      fVar6 = (rotation->fields).w;
      (routine->fields).position.fields.z = fVar1;
      (routine->fields).rotation.fields.x = fVar3;
      (routine->fields).rotation.fields.y = fVar4;
      (routine->fields).rotation.fields.z = fVar5;
      (routine->fields).rotation.fields.w = fVar6;
      UnityEngine_MonoBehaviour__StartCoroutine_Auto
                ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)routine,
                 (MethodInfo *)0x0);
    }
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhotonSync$$WaitAndFinishSync
// il2cpp: System_Collections_IEnumerator_o* CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync (CustomLogic_CustomLogicPhotonSync_o* __this, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, const MethodInfo* method);
// 0x1820a9ce0

System_Collections_IEnumerator_o *
CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync
          (CustomLogic_CustomLogicPhotonSync_o *__this,UnityEngine_Vector3_o *position,
          UnityEngine_Quaternion_o *rotation,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54_o *__this_00;
  
  if (Il2CppMethodInitialized_1843468cc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicPhotonSync_WaitAndFinishSync_d__54);
    Il2CppMethodInitialized_1843468cc = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhotonSync_WaitAndFinishSync_d__54);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  fVar2 = (position->fields).y;
  fVar1 = (position->fields).z;
  (__this_00->fields).position.fields.x = (position->fields).x;
  (__this_00->fields).position.fields.y = fVar2;
  fVar2 = (rotation->fields).x;
  fVar3 = (rotation->fields).y;
  fVar4 = (rotation->fields).z;
  fVar5 = (rotation->fields).w;
  (__this_00->fields).position.fields.z = fVar1;
  (__this_00->fields).rotation.fields.x = fVar2;
  (__this_00->fields).rotation.fields.y = fVar3;
  (__this_00->fields).rotation.fields.z = fVar4;
  (__this_00->fields).rotation.fields.w = fVar5;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// CustomLogic.CustomLogicPhotonSync$$OnPhotonSerializeView
// il2cpp: void CustomLogic_CustomLogicPhotonSync__OnPhotonSerializeView (CustomLogic_CustomLogicPhotonSync_o* __this, Photon_Pun_PhotonStream_o* stream, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x1820a8a10

void CustomLogic_CustomLogicPhotonSync__OnPhotonSerializeView
               (CustomLogic_CustomLogicPhotonSync_o *__this,Photon_Pun_PhotonStream_o *stream,
               Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  undefined8 uVar1;
  Map_MapObject_o *pMVar2;
  UnityEngine_GameObject_o *__this_00;
  CustomLogic_CustomLogicNetworkViewBuiltin_o *__this_01;
  Il2CppClass *pIVar3;
  bool bVar4;
  Il2CppObject *pIVar5;
  char *pcVar6;
  undefined8 *puVar7;
  uint *puVar8;
  System_Object_array *pSVar9;
  Il2CppObject *value;
  UnityEngine_Vector3_o *pUVar10;
  UnityEngine_Quaternion_o *pUVar11;
  UnityEngine_Object_o *pUVar12;
  UnityEngine_Vector3_StaticFields *pUVar13;
  uint index;
  uint uVar14;
  uint index_00;
  float fVar15;
  float fVar16;
  float fVar17;
  uint local_res10 [2];
  undefined8 local_88;
  float local_80;
  UnityEngine_Quaternion_o local_78 [6];
  
  if (Il2CppMethodInitialized_1843468cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_QuaternionCompression);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_1843468cd = '\x01';
  }
  if (stream == (Photon_Pun_PhotonStream_o *)0x0) goto label_1820a909d;
  if ((stream->fields)._IsWriting_k__BackingField == false) {
    pIVar5 = Photon_Pun_PhotonStream__ReceiveNext(stream,(MethodInfo *)0x0);
    if (pIVar5 != (Il2CppObject *)0x0) {
      if ((pIVar5->klass->_1).element_class != (g_data_184354de8->_1).element_class) {
        il2cpp_codegen_raise_invalid_cast_exception(pIVar5,g_data_184354de8);
      }
      pcVar6 = il2cpp_object_unbox(pIVar5);
      if (*pcVar6 == '\0') {
        return;
      }
      pIVar5 = Photon_Pun_PhotonStream__PeekNext(stream,(MethodInfo *)0x0);
      pIVar5 = il2cpp_vm_Object_IsInst(pIVar5,TypeInfo_object_array);
      (__this->fields)._syncTransforms = pIVar5 == (Il2CppObject *)0x0;
      if (pIVar5 != (Il2CppObject *)0x0) goto label_1820a8d15;
      pIVar5 = Photon_Pun_PhotonStream__ReceiveNext(stream,(MethodInfo *)0x0);
      if (pIVar5 != (Il2CppObject *)0x0) {
        if ((pIVar5->klass->_1).element_class != (TypeInfo_UnityEngine_Vector3->_1).element_class) {
          il2cpp_codegen_raise_invalid_cast_exception(pIVar5,TypeInfo_UnityEngine_Vector3);
        }
        puVar7 = il2cpp_object_unbox(pIVar5);
        uVar1 = *puVar7;
        (__this->fields)._correctPosition.fields.x = (float)(int)uVar1;
        (__this->fields)._correctPosition.fields.y = (float)(int)((ulonglong)uVar1 >> 0x20);
        (__this->fields)._correctPosition.fields.z = *(float *)(puVar7 + 1);
        pIVar5 = Photon_Pun_PhotonStream__ReceiveNext(stream,(MethodInfo *)0x0);
        if ((TypeInfo_Utility_QuaternionCompression->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_QuaternionCompression);
        }
        if (pIVar5 != (Il2CppObject *)0x0) {
          if ((pIVar5->klass->_1).element_class != (g_data_184354e08->_1).element_class) {
            il2cpp_codegen_raise_invalid_cast_exception(pIVar5,g_data_184354e08);
          }
          puVar8 = il2cpp_object_unbox(pIVar5);
          fVar17 = 0.0;
          index = 3;
          uVar14 = *puVar8;
          index_00 = uVar14 >> 0x1e;
          do {
            if (index != index_00) {
              if ((uVar14 & 0x200) == 0) {
                fVar16 = 1.0;
              }
              else {
                fVar16 = -1.0;
              }
              UnityEngine_Quaternion__set_Item
                        (&(__this->fields)._correctRotation,index,
                         (float)(uVar14 & 0x1ff) * 0.0013837706 * fVar16,(MethodInfo *)0x0);
              fVar16 = UnityEngine_Quaternion__get_Item
                                 (&(__this->fields)._correctRotation,index,(MethodInfo *)0x0);
              fVar15 = UnityEngine_Quaternion__get_Item
                                 (&(__this->fields)._correctRotation,index,(MethodInfo *)0x0);
              uVar14 = uVar14 >> 10;
              fVar17 = fVar17 + fVar15 * fVar16;
            }
            index = index - 1;
          } while (-1 < (int)index);
          fVar17 = 1.0 - fVar17;
          if (fVar17 < 0.0) {
            fVar17 = (float)il2cpp_runtime_helper_1804fa7a0(fVar17);
          }
          else {
            fVar17 = SQRT(fVar17);
          }
          UnityEngine_Quaternion__set_Item
                    (&(__this->fields)._correctRotation,index_00,fVar17,(MethodInfo *)0x0);
          pIVar5 = Photon_Pun_PhotonStream__PeekNext(stream,(MethodInfo *)0x0);
          pIVar5 = il2cpp_vm_Object_IsInst(pIVar5,TypeInfo_object_array);
          (__this->fields)._syncVelocity = pIVar5 == (Il2CppObject *)0x0;
          if (pIVar5 == (Il2CppObject *)0x0) {
            pIVar5 = Photon_Pun_PhotonStream__ReceiveNext(stream,(MethodInfo *)0x0);
            if (pIVar5 == (Il2CppObject *)0x0) goto label_1820a909d;
            if ((pIVar5->klass->_1).element_class != (TypeInfo_UnityEngine_Vector3->_1).element_class) {
              il2cpp_codegen_raise_invalid_cast_exception(pIVar5,TypeInfo_UnityEngine_Vector3);
            }
            puVar7 = il2cpp_object_unbox(pIVar5);
            uVar1 = *puVar7;
            (__this->fields)._correctVelocity.fields.x = (float)(int)uVar1;
            (__this->fields)._correctVelocity.fields.y = (float)(int)((ulonglong)uVar1 >> 0x20);
            (__this->fields)._correctVelocity.fields.z = *(float *)(puVar7 + 1);
          }
label_1820a8d15:
          if ((__this->fields)._inited == false) {
            return;
          }
          pIVar5 = Photon_Pun_PhotonStream__ReceiveNext(stream,(MethodInfo *)0x0);
          pIVar3 = TypeInfo_object_array;
          if (pIVar5 == (Il2CppObject *)0x0) {
            (__this->fields)._streamObjs = (System_Object_array *)0x0;
            value = (Il2CppObject *)0x0;
          }
          else {
            pSVar9 = (System_Object_array *)il2cpp_vm_Object_IsInst(pIVar5,TypeInfo_object_array);
            if (pSVar9 == (System_Object_array *)0x0) {
              il2cpp_codegen_raise_invalid_cast_exception(pIVar5,pIVar3);
            }
            (__this->fields)._streamObjs = pSVar9;
            pIVar3 = TypeInfo_object_array;
            value = il2cpp_vm_Object_IsInst(pIVar5,TypeInfo_object_array);
            if (value == (Il2CppObject *)0x0) {
              il2cpp_codegen_raise_invalid_cast_exception(pIVar5,pIVar3);
            }
          }
          Il2CppCodeGenWriteBarrier(&(__this->fields)._streamObjs,value);
          if ((__this->fields)._NetworkView_k__BackingField ==
              (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
            return;
          }
          if ((__this->fields)._streamObjs == (System_Object_array *)0x0) {
            return;
          }
          pSVar9 = (__this->fields)._streamObjs;
          if (pSVar9->max_length == 0) {
            return;
          }
          CustomLogic_CustomLogicNetworkViewBuiltin__OnNetworkStream
                    ((__this->fields)._NetworkView_k__BackingField,pSVar9,(MethodInfo *)0x0);
          return;
        }
      }
    }
    goto label_1820a909d;
  }
  if (((__this->fields)._inited == false) ||
     ((__this->fields)._MapObject_k__BackingField == (Map_MapObject_o *)0x0)) {
    local_res10[0] = local_res10[0] & 0xffffff00;
    pIVar5 = il2cpp_value_box(g_data_184354de8,local_res10);
    goto label_1820a903a;
  }
  pUVar12 = (UnityEngine_Object_o *)(((__this->fields)._MapObject_k__BackingField)->fields).GameObject;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality(pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  local_res10[0] = CONCAT31(local_res10[0]._1_3_,bVar4);
  pIVar5 = il2cpp_value_box(g_data_184354de8,local_res10);
  Photon_Pun_PhotonStream__SendNext(stream,pIVar5,(MethodInfo *)0x0);
  if (!bVar4) {
    return;
  }
  if ((__this->fields)._syncTransforms != false) {
    pUVar10 = CustomLogic_CustomLogicPhotonSync__GetPosition
                        ((UnityEngine_Vector3_o *)local_78,__this,(MethodInfo *)0x0);
    local_88._0_4_ = (pUVar10->fields).x;
    local_88._4_4_ = (pUVar10->fields).y;
    local_80 = (pUVar10->fields).z;
    pIVar5 = il2cpp_value_box((Il2CppClass *)TypeInfo_UnityEngine_Vector3,&local_88);
    Photon_Pun_PhotonStream__SendNext(stream,pIVar5,(MethodInfo *)0x0);
    pUVar11 = CustomLogic_CustomLogicPhotonSync__GetRotation(local_78,__this,(MethodInfo *)0x0);
    local_78[0].fields.x = (pUVar11->fields).x;
    local_78[0].fields.y = (pUVar11->fields).y;
    local_78[0].fields.z = (pUVar11->fields).z;
    local_78[0].fields.w = (pUVar11->fields).w;
    if ((TypeInfo_Utility_QuaternionCompression->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_QuaternionCompression);
    }
    local_res10[0] = il2cpp_runtime_helper_18208d050(local_78,0);
    pIVar5 = il2cpp_value_box(g_data_184354e08,local_res10);
    Photon_Pun_PhotonStream__SendNext(stream,pIVar5,(MethodInfo *)0x0);
    if ((__this->fields)._syncVelocity != false) {
      if (Il2CppMethodInitialized_1843468d1 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Rigidbody);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_1843468d1 = '\x01';
      }
      if ((__this->fields)._MapObject_k__BackingField == (Map_MapObject_o *)0x0) {
label_1820a8fd2:
        if (Il2CppMethodInitialized_18433dbea == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_18433dbea = '\x01';
        }
        pUVar13 = TypeInfo_UnityEngine_Vector3->static_fields;
      }
      else {
        pUVar12 = (UnityEngine_Object_o *)(((__this->fields)._MapObject_k__BackingField)->fields).GameObject;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar4 = UnityEngine_Object__op_Inequality(pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar4) goto label_1820a8fd2;
        pMVar2 = (__this->fields)._MapObject_k__BackingField;
        if ((pMVar2 == (Map_MapObject_o *)0x0) ||
           (__this_00 = (pMVar2->fields).GameObject, __this_00 == (UnityEngine_GameObject_o *)0x0)) {
label_1820a90dc:
          ThrowNullReferenceException();
        }
        pUVar12 = (UnityEngine_Object_o *)
                  UnityEngine_GameObject__GetComponent_object_
                            (__this_00,
                             (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Rigidbody);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar4 = UnityEngine_Object__op_Inequality(pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar4) goto label_1820a8fd2;
        if (pUVar12 == (UnityEngine_Object_o *)0x0) goto label_1820a90dc;
        pUVar13 = (UnityEngine_Vector3_StaticFields *)
                  UnityEngine_Rigidbody__get_linearVelocity
                            ((UnityEngine_Vector3_o *)local_78,(UnityEngine_Rigidbody_o *)pUVar12,
                             (MethodInfo *)0x0);
      }
      local_80 = (pUVar13->zeroVector).fields.z;
      local_88._0_4_ = (pUVar13->zeroVector).fields.x;
      local_88._4_4_ = (pUVar13->zeroVector).fields.y;
      pIVar5 = il2cpp_value_box((Il2CppClass *)TypeInfo_UnityEngine_Vector3,&local_88);
      Photon_Pun_PhotonStream__SendNext(stream,pIVar5,(MethodInfo *)0x0);
    }
  }
  if ((__this->fields)._NetworkView_k__BackingField == (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
    pIVar5 = SZArrayNew(TypeInfo_object_array,0);
label_1820a903a:
    Photon_Pun_PhotonStream__SendNext(stream,pIVar5,(MethodInfo *)0x0);
    return;
  }
  __this_01 = (__this->fields)._NetworkView_k__BackingField;
  if (__this_01 != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
    CustomLogic_CustomLogicNetworkViewBuiltin__SendNetworkStream(__this_01,stream,(MethodInfo *)0x0);
    return;
  }
label_1820a909d:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhotonSync$$Update
// il2cpp: void CustomLogic_CustomLogicPhotonSync__Update (CustomLogic_CustomLogicPhotonSync_o* __this, const MethodInfo* method);
// 0x1820a9920

void CustomLogic_CustomLogicPhotonSync__Update(CustomLogic_CustomLogicPhotonSync_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  Photon_Pun_PhotonView_o *pPVar6;
  Map_MapObject_o *pMVar7;
  UnityEngine_GameObject_o *__this_00;
  bool bVar8;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_o *pUVar9;
  UnityEngine_Quaternion_o *pUVar10;
  UnityEngine_Object_o *pUVar11;
  UnityEngine_Rigidbody_o *__this_02;
  float fVar12;
  float fVar13;
  UnityEngine_Quaternion_Fields local_98;
  UnityEngine_Quaternion_Fields local_88;
  UnityEngine_Quaternion_o local_78 [7];
  
  if (Il2CppMethodInitialized_1843468ce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843468ce = '\x01';
  }
  pPVar6 = (__this->fields).PhotonView;
  if (pPVar6 != (Photon_Pun_PhotonView_o *)0x0) {
    if (((pPVar6->fields)._IsMine_k__BackingField != false) || ((__this->fields)._inited == false)) {
      return;
    }
    pMVar7 = (__this->fields)._MapObject_k__BackingField;
    if (pMVar7 != (Map_MapObject_o *)0x0) {
      pUVar11 = (UnityEngine_Object_o *)(pMVar7->fields).GameObject;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar8 = UnityEngine_Object__op_Equality(pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar8) {
        return;
      }
      if ((__this->fields)._syncTransforms == false) {
        return;
      }
      pMVar7 = (__this->fields)._MapObject_k__BackingField;
      if (((pMVar7 != (Map_MapObject_o *)0x0) &&
          (__this_00 = (pMVar7->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) &&
         (__this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
         __this_01 != (UnityEngine_Transform_o *)0x0)) {
        pUVar9 = UnityEngine_Transform__get_position
                           ((UnityEngine_Vector3_o *)&local_98,__this_01,(MethodInfo *)0x0);
        fVar13 = (__this->fields)._correctPosition.fields.x;
        fVar1 = (__this->fields)._correctPosition.fields.y;
        fVar2 = (__this->fields)._correctPosition.fields.z;
        fVar3 = (pUVar9->fields).x;
        fVar4 = (pUVar9->fields).y;
        fVar5 = (pUVar9->fields).z;
        fVar12 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        fVar12 = fVar12 * 5.0;
        if (fVar12 < 0.0) {
          fVar12 = 0.0;
        }
        else if (1.0 < fVar12) {
          fVar12 = 1.0;
        }
        local_98.y = (fVar1 - fVar4) * fVar12 + fVar4;
        local_98.x = (fVar13 - fVar3) * fVar12 + fVar3;
        local_98.z = (fVar2 - fVar5) * fVar12 + fVar5;
        UnityEngine_Transform__set_position(__this_01,(UnityEngine_Vector3_o *)&local_98,(MethodInfo *)0x0);
        pUVar10 = UnityEngine_Transform__get_rotation
                            ((UnityEngine_Quaternion_o *)&local_88,__this_01,(MethodInfo *)0x0);
        local_98.x = (__this->fields)._correctRotation.fields.x;
        local_98.y = (__this->fields)._correctRotation.fields.y;
        local_98.z = (__this->fields)._correctRotation.fields.z;
        local_98.w = (__this->fields)._correctRotation.fields.w;
        local_88.x = (pUVar10->fields).x;
        local_88.y = (pUVar10->fields).y;
        local_88.z = (pUVar10->fields).z;
        local_88.w = (pUVar10->fields).w;
        fVar13 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        pUVar10 = UnityEngine_Quaternion__Internal_Lerp
                            (local_78,(UnityEngine_Quaternion_o *)&local_88,
                             (UnityEngine_Quaternion_o *)&local_98,fVar13 * 5.0,(MethodInfo *)0x0);
        local_88.x = (pUVar10->fields).x;
        local_88.y = (pUVar10->fields).y;
        local_88.z = (pUVar10->fields).z;
        local_88.w = (pUVar10->fields).w;
        UnityEngine_Transform__set_rotation(__this_01,(UnityEngine_Quaternion_o *)&local_88,(MethodInfo *)0x0)
        ;
        if ((__this->fields)._syncVelocity == false) {
          return;
        }
        pUVar11 = (UnityEngine_Object_o *)
                  CustomLogic_CustomLogicPhotonSync__get_Rigidbody(__this,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar8 = UnityEngine_Object__op_Inequality(pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar8) {
          return;
        }
        __this_02 = CustomLogic_CustomLogicPhotonSync__get_Rigidbody(__this,(MethodInfo *)0x0);
        if (__this_02 != (UnityEngine_Rigidbody_o *)0x0) {
          local_98.x = (__this->fields)._correctVelocity.fields.x;
          local_98.y = (__this->fields)._correctVelocity.fields.y;
          local_98.z = (__this->fields)._correctVelocity.fields.z;
          UnityEngine_Rigidbody__set_linearVelocity
                    (__this_02,(UnityEngine_Vector3_o *)&local_98,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhotonSync$$GetPosition
// il2cpp: UnityEngine_Vector3_o CustomLogic_CustomLogicPhotonSync__GetPosition (CustomLogic_CustomLogicPhotonSync_o* __this, const MethodInfo* method);
// 0x1820a7da0

UnityEngine_Vector3_o *
CustomLogic_CustomLogicPhotonSync__GetPosition
          (UnityEngine_Vector3_o *__return_storage_ptr__,CustomLogic_CustomLogicPhotonSync_o *__this,
          MethodInfo *method)

{
  float fVar1;
  Map_MapObject_o *pMVar2;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  float fVar3;
  bool bVar4;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_StaticFields *pUVar5;
  UnityEngine_Vector3_o local_18;
  
  if (Il2CppMethodInitialized_1843468cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843468cf = '\x01';
  }
  pMVar2 = (__this->fields)._MapObject_k__BackingField;
  if (pMVar2 != (Map_MapObject_o *)0x0) {
    x = (UnityEngine_Object_o *)(pMVar2->fields).GameObject;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar4) {
      if (Il2CppMethodInitialized_18433dbea == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433dbea = '\x01';
      }
      pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
label_1820a7e66:
      fVar3 = (pUVar5->zeroVector).fields.y;
      fVar1 = (pUVar5->zeroVector).fields.z;
      (__return_storage_ptr__->fields).x = (pUVar5->zeroVector).fields.x;
      (__return_storage_ptr__->fields).y = fVar3;
      (__return_storage_ptr__->fields).z = fVar1;
      return __return_storage_ptr__;
    }
    pMVar2 = (__this->fields)._MapObject_k__BackingField;
    if ((pMVar2 != (Map_MapObject_o *)0x0) &&
       (__this_00 = (pMVar2->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_Transform_o *)0x0) {
        pUVar5 = (UnityEngine_Vector3_StaticFields *)
                 UnityEngine_Transform__get_position(&local_18,__this_01,(MethodInfo *)0x0);
        goto label_1820a7e66;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhotonSync$$GetRotation
// il2cpp: UnityEngine_Quaternion_o CustomLogic_CustomLogicPhotonSync__GetRotation (CustomLogic_CustomLogicPhotonSync_o* __this, const MethodInfo* method);
// 0x1820a7e90

UnityEngine_Quaternion_o *
CustomLogic_CustomLogicPhotonSync__GetRotation
          (UnityEngine_Quaternion_o *__return_storage_ptr__,CustomLogic_CustomLogicPhotonSync_o *__this,
          MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Object_o *x;
  UnityEngine_Quaternion_StaticFields *pUVar2;
  UnityEngine_GameObject_o *__this_00;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Quaternion_o *pUVar7;
  UnityEngine_Quaternion_o local_18;
  
  if (Il2CppMethodInitialized_1843468d0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843468d0 = '\x01';
  }
  pMVar1 = (__this->fields)._MapObject_k__BackingField;
  if (pMVar1 != (Map_MapObject_o *)0x0) {
    x = (UnityEngine_Object_o *)(pMVar1->fields).GameObject;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar6 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar6) {
      if (Il2CppMethodInitialized_18433de5b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
        Il2CppMethodInitialized_18433de5b = '\x01';
      }
      pUVar2 = TypeInfo_UnityEngine_Quaternion->static_fields;
      fVar3 = (pUVar2->identityQuaternion).fields.y;
      fVar4 = (pUVar2->identityQuaternion).fields.z;
      fVar5 = (pUVar2->identityQuaternion).fields.w;
      (__return_storage_ptr__->fields).x = (pUVar2->identityQuaternion).fields.x;
      (__return_storage_ptr__->fields).y = fVar3;
      (__return_storage_ptr__->fields).z = fVar4;
      (__return_storage_ptr__->fields).w = fVar5;
      return __return_storage_ptr__;
    }
    pMVar1 = (__this->fields)._MapObject_k__BackingField;
    if ((pMVar1 != (Map_MapObject_o *)0x0) &&
       (__this_00 = (pMVar1->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_Transform_o *)0x0) {
        pUVar7 = UnityEngine_Transform__get_rotation(&local_18,__this_01,(MethodInfo *)0x0);
        fVar3 = (pUVar7->fields).y;
        fVar4 = (pUVar7->fields).z;
        fVar5 = (pUVar7->fields).w;
        (__return_storage_ptr__->fields).x = (pUVar7->fields).x;
        (__return_storage_ptr__->fields).y = fVar3;
        (__return_storage_ptr__->fields).z = fVar4;
        (__return_storage_ptr__->fields).w = fVar5;
        return __return_storage_ptr__;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhotonSync$$GetVelocity
// il2cpp: UnityEngine_Vector3_o CustomLogic_CustomLogicPhotonSync__GetVelocity (CustomLogic_CustomLogicPhotonSync_o* __this, const MethodInfo* method);
// 0x1820a7f90

UnityEngine_Vector3_o *
CustomLogic_CustomLogicPhotonSync__GetVelocity
          (UnityEngine_Vector3_o *__return_storage_ptr__,CustomLogic_CustomLogicPhotonSync_o *__this,
          MethodInfo *method)

{
  float fVar1;
  Map_MapObject_o *pMVar2;
  UnityEngine_GameObject_o *__this_00;
  float fVar3;
  bool bVar4;
  UnityEngine_Object_o *pUVar5;
  UnityEngine_Vector3_StaticFields *pUVar6;
  UnityEngine_Vector3_o local_18;
  
  if (Il2CppMethodInitialized_1843468d1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Rigidbody);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843468d1 = '\x01';
  }
  if ((__this->fields)._MapObject_k__BackingField != (Map_MapObject_o *)0x0) {
    pUVar5 = (UnityEngine_Object_o *)(((__this->fields)._MapObject_k__BackingField)->fields).GameObject;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Inequality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      pMVar2 = (__this->fields)._MapObject_k__BackingField;
      if ((pMVar2 == (Map_MapObject_o *)0x0) ||
         (__this_00 = (pMVar2->fields).GameObject, __this_00 == (UnityEngine_GameObject_o *)0x0)) {
label_1820a80b7:
        ThrowNullReferenceException();
      }
      pUVar5 = (UnityEngine_Object_o *)
               UnityEngine_GameObject__GetComponent_object_
                         (__this_00,
                          (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Rigidbody);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Inequality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar4) {
        if (pUVar5 == (UnityEngine_Object_o *)0x0) goto label_1820a80b7;
        pUVar6 = (UnityEngine_Vector3_StaticFields *)
                 UnityEngine_Rigidbody__get_linearVelocity
                           (&local_18,(UnityEngine_Rigidbody_o *)pUVar5,(MethodInfo *)0x0);
        goto label_1820a809b;
      }
    }
  }
  if (Il2CppMethodInitialized_18433dbea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433dbea = '\x01';
  }
  pUVar6 = TypeInfo_UnityEngine_Vector3->static_fields;
label_1820a809b:
  fVar3 = (pUVar6->zeroVector).fields.y;
  fVar1 = (pUVar6->zeroVector).fields.z;
  (__return_storage_ptr__->fields).x = (pUVar6->zeroVector).fields.x;
  (__return_storage_ptr__->fields).y = fVar3;
  (__return_storage_ptr__->fields).z = fVar1;
  return __return_storage_ptr__;
}


// CustomLogic.CustomLogicPhotonSync$$Photon.Pun.IPunObservable.OnPhotonSerializeView
// il2cpp: void CustomLogic_CustomLogicPhotonSync__Photon_Pun_IPunObservable_OnPhotonSerializeView (CustomLogic_CustomLogicPhotonSync_o* __this, Photon_Pun_PhotonStream_o* stream, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x1820a9430

void CustomLogic_CustomLogicPhotonSync__Photon_Pun_IPunObservable_OnPhotonSerializeView
               (CustomLogic_CustomLogicPhotonSync_o *__this,Photon_Pun_PhotonStream_o *stream,
               Photon_Pun_PhotonMessageInfo_o *info,MethodInfo *method)

{
  Photon_Pun_PhotonMessageInfo_Fields local_28;
  
  local_28.timeInt = (info->fields).timeInt;
  local_28._4_4_ = *(undefined4 *)&(info->fields).field_0x4;
  local_28.Sender = (info->fields).Sender;
  local_28.photonView = (info->fields).photonView;
  (*(__this->klass->vtable)._60_OnPhotonSerializeView.methodPtr)
            (__this,stream,(Photon_Pun_PhotonMessageInfo_o *)&local_28,
             (__this->klass->vtable)._60_OnPhotonSerializeView.method);
  return;
}


// CustomLogic.CustomLogicPhotonSync$$Transfer
// il2cpp: void CustomLogic_CustomLogicPhotonSync__Transfer (CustomLogic_CustomLogicPhotonSync_o* __this, CustomLogic_CustomLogicPlayerBuiltin_o* player, const MethodInfo* method);
// 0x1820a9880

void CustomLogic_CustomLogicPhotonSync__Transfer
               (CustomLogic_CustomLogicPhotonSync_o *__this,CustomLogic_CustomLogicPlayerBuiltin_o *player,
               MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  Photon_Realtime_Player_o *pPVar2;
  Photon_Realtime_Player_o *pPVar3;
  
  if (Il2CppMethodInitialized_1843468d2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_1843468d2 = '\x01';
  }
  pPVar1 = (__this->fields).PhotonView;
  if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
    if ((pPVar1->fields)._IsMine_k__BackingField != false) {
      if (player == (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) goto label_1820a9917;
      pPVar2 = (player->fields).Player;
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      pPVar3 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      if (pPVar2 != pPVar3) {
        pPVar2 = (player->fields).Player;
        if ((pPVar2 == (Photon_Realtime_Player_o *)0x0) ||
           (pPVar1 = (__this->fields).PhotonView, pPVar1 == (Photon_Pun_PhotonView_o *)0x0))
        goto label_1820a9917;
        Photon_Pun_PhotonView__TransferOwnership_1d4e550
                  (pPVar1,(pPVar2->fields).actorNumber,(MethodInfo *)0x0);
      }
    }
    return;
  }
label_1820a9917:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhotonSync$$Photon.Pun.IOnPhotonViewOwnerChange.OnOwnerChange
// il2cpp: void CustomLogic_CustomLogicPhotonSync__Photon_Pun_IOnPhotonViewOwnerChange_OnOwnerChange (CustomLogic_CustomLogicPhotonSync_o* __this, Photon_Realtime_Player_o* newOwner, Photon_Realtime_Player_o* previousOwner, const MethodInfo* method);
// 0x1820a9380

void CustomLogic_CustomLogicPhotonSync__Photon_Pun_IOnPhotonViewOwnerChange_OnOwnerChange
               (CustomLogic_CustomLogicPhotonSync_o *__this,Photon_Realtime_Player_o *newOwner,
               Photon_Realtime_Player_o *previousOwner,MethodInfo *method)

{
  CustomLogic_CustomLogicPlayerBuiltin_o *__this_00;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this_01;
  
  if (Il2CppMethodInitialized_1843468d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
    Il2CppMethodInitialized_1843468d3 = '\x01';
  }
  if (previousOwner == (Photon_Realtime_Player_o *)0x0) {
    __this_00 = (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0;
  }
  else {
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
    CustomLogic_CustomLogicPlayerBuiltin___ctor(__this_00,previousOwner,(MethodInfo *)0x0);
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
  CustomLogic_CustomLogicPlayerBuiltin___ctor(__this_01,newOwner,(MethodInfo *)0x0);
  if ((__this->fields)._NetworkView_k__BackingField != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
    CustomLogic_CustomLogicNetworkViewBuiltin__OnNetworkTransfer
              ((__this->fields)._NetworkView_k__BackingField,__this_00,__this_01,(MethodInfo *)0x0);
  }
  return;
}


// CustomLogic.CustomLogicPhotonSync$$OnPlayerLeftRoom
// il2cpp: void CustomLogic_CustomLogicPhotonSync__OnPlayerLeftRoom (CustomLogic_CustomLogicPhotonSync_o* __this, Photon_Realtime_Player_o* otherPlayer, const MethodInfo* method);
// 0x1820a92d0

void CustomLogic_CustomLogicPhotonSync__OnPlayerLeftRoom
               (CustomLogic_CustomLogicPhotonSync_o *__this,Photon_Realtime_Player_o *otherPlayer,
               MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  bool bVar2;
  Photon_Realtime_Player_o *newOwner;
  
  if (Il2CppMethodInitialized_1843468d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_1843468d4 = '\x01';
  }
  pPVar1 = (__this->fields).PhotonView;
  if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
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
        if (pPVar1 == (Photon_Pun_PhotonView_o *)0x0) goto label_1820a9375;
        Photon_Pun_PhotonView__TransferOwnership(pPVar1,newOwner,(MethodInfo *)0x0);
      }
    }
    return;
  }
label_1820a9375:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhotonSync$$DestroyMe
// il2cpp: void CustomLogic_CustomLogicPhotonSync__DestroyMe (CustomLogic_CustomLogicPhotonSync_o* __this, const MethodInfo* method);
// 0x1820a7b80

void CustomLogic_CustomLogicPhotonSync__DestroyMe
               (CustomLogic_CustomLogicPhotonSync_o *__this,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  UnityEngine_GameObject_o *targetGo;
  
  if (Il2CppMethodInitialized_1843468d5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_1843468d5 = '\x01';
  }
  pPVar1 = (__this->fields).PhotonView;
  if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
    if ((pPVar1->fields)._IsMine_k__BackingField != false) {
      targetGo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      Photon_Pun_PhotonNetwork__Destroy_1d35aa0(targetGo,(MethodInfo *)0x0);
      return;
    }
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhotonSync$$OnDestroy
// il2cpp: void CustomLogic_CustomLogicPhotonSync__OnDestroy (CustomLogic_CustomLogicPhotonSync_o* __this, const MethodInfo* method);
// 0x1820a8780

void CustomLogic_CustomLogicPhotonSync__OnDestroy
               (CustomLogic_CustomLogicPhotonSync_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicMapObjectBuiltin_o *obj;
  
  if (Il2CppMethodInitialized_1843468d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    Il2CppMethodInitialized_1843468d6 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  if (TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator !=
      (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    obj = (__this->fields)._CustomLogicMapObjectBuiltin_k__BackingField;
    if ((TypeInfo_CustomLogic_CustomLogicMapBuiltin->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapBuiltin);
    }
    CustomLogic_CustomLogicMapBuiltin__DestroyMapObjectBuiltin((Il2CppObject *)obj,true,(MethodInfo *)0x0);
    return;
  }
  return;
}


// CustomLogic.CustomLogicPhotonSync$$.ctor
// il2cpp: void CustomLogic_CustomLogicPhotonSync___ctor (CustomLogic_CustomLogicPhotonSync_o* __this, const MethodInfo* method);
// 0x1820a9d70

void CustomLogic_CustomLogicPhotonSync___ctor(CustomLogic_CustomLogicPhotonSync_o *__this,MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector3_StaticFields *pUVar2;
  UnityEngine_Quaternion_StaticFields *pUVar3;
  float fVar4;
  float fVar5;
  
  (__this->fields)._syncTransforms = true;
  (__this->fields)._syncVelocity = true;
  if (Il2CppMethodInitialized_18433dbea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433dbea = '\x01';
  }
  pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar4 = (pUVar2->zeroVector).fields.y;
  fVar1 = (pUVar2->zeroVector).fields.z;
  (__this->fields)._correctPosition.fields.x = (pUVar2->zeroVector).fields.x;
  (__this->fields)._correctPosition.fields.y = fVar4;
  (__this->fields)._correctPosition.fields.z = fVar1;
  if (Il2CppMethodInitialized_18433de5b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
    Il2CppMethodInitialized_18433de5b = '\x01';
  }
  pUVar3 = TypeInfo_UnityEngine_Quaternion->static_fields;
  fVar1 = (pUVar3->identityQuaternion).fields.y;
  fVar4 = (pUVar3->identityQuaternion).fields.z;
  fVar5 = (pUVar3->identityQuaternion).fields.w;
  (__this->fields)._correctRotation.fields.x = (pUVar3->identityQuaternion).fields.x;
  (__this->fields)._correctRotation.fields.y = fVar1;
  (__this->fields)._correctRotation.fields.z = fVar4;
  (__this->fields)._correctRotation.fields.w = fVar5;
  if (Il2CppMethodInitialized_18433dbea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433dbea = '\x01';
  }
  pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar4 = (pUVar2->zeroVector).fields.y;
  fVar1 = (pUVar2->zeroVector).fields.z;
  (__this->fields)._correctVelocity.fields.x = (pUVar2->zeroVector).fields.x;
  (__this->fields)._correctVelocity.fields.y = fVar4;
  (__this->fields)._correctVelocity.fields.z = fVar1;
  Photon_Pun_MonoBehaviourPunCallbacks___ctor((GetParentPosition_o *)__this,(MethodInfo *)0x0);
  return;
}


