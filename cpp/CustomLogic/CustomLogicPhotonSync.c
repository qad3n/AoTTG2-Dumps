// Type: CustomLogic.CustomLogicPhotonSync
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicPhotonSync.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomLogic/Component/CustomLogicPhotonSync.cs  [CHANGED since prior version]
// --------------------------------

// CustomLogic.CustomLogicPhotonSync.<WaitAndFinishDynamicInit>d__45$$.ctor
// il2cpp: void CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45___ctor (CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x3f4cdc0

void CustomLogic_CustomLogicPhotonSync_<WaitAndFinishDynamicInit>d__45___ctor
               (CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// CustomLogic.CustomLogicPhotonSync.<WaitAndFinishDynamicInit>d__45$$System.IDisposable.Dispose
// il2cpp: void CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45__System_IDisposable_Dispose (CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45_o* __this, const MethodInfo* method);
// 0x3f4e400

void CustomLogic_CustomLogicPhotonSync_<WaitAndFinishDynamicInit>d__45__System_IDisposable_Dispose
               (CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45_o *__this,
               MethodInfo *method)

{
  return;
}


// CustomLogic.CustomLogicPhotonSync.<WaitAndFinishDynamicInit>d__45$$MoveNext
// il2cpp: bool CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45__MoveNext (CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45_o* __this, const MethodInfo* method);
// 0x3f4e410

bool_conflict
CustomLogic_CustomLogicPhotonSync_<WaitAndFinishDynamicInit>d__45__MoveNext
          (CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45_o *__this,
          MethodInfo *method)

{
  CustomLogic_CustomLogicPhotonSync_o *__this_00;
  long lVar1;
  undefined8 uVar2;
  MethodInfo *in_RCX;
  
  if (DAT_05703e55 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    DAT_05703e55 = '\x01';
  }
  if ((uint)(__this->fields).__1__state < 2) {
    __this_00 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_init_class();
      lVar1 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    }
    else {
      lVar1 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    }
    if (lVar1 == 0) {
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      uVar2 = il2cpp_runtime_glue(&(__this->fields).__2__current,0);
      (__this->fields).__1__state = 1;
      return (bool_conflict)CONCAT71((int7)((ulong)uVar2 >> 8),1);
    }
    if (__this_00 == (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    CustomLogic_CustomLogicPhotonSync__CreateAndSetupObject
              (__this_00,(uint)(byte)(__this->fields).persistsOwnership,(__this->fields).csvScript,
               in_RCX);
  }
  return 0;
}


// CustomLogic.CustomLogicPhotonSync.<WaitAndFinishDynamicInit>d__45$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45__System_Collections_Generic_IEnumerator_System_Object__get_Current (CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45_o* __this, const MethodInfo* method);
// 0x3f4e4c0

Il2CppObject *
CustomLogic_CustomLogicPhotonSync_<WaitAndFinishDynamicInit>d__45__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicPhotonSync.<WaitAndFinishDynamicInit>d__45$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45__System_Collections_IEnumerator_Reset (CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45_o* __this, const MethodInfo* method);
// 0x3f4e4d0

void CustomLogic_CustomLogicPhotonSync_<WaitAndFinishDynamicInit>d__45__System_Collections_IEnumerator_Reset
               (CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45_o *__this,
               MethodInfo *method)

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


// CustomLogic.CustomLogicPhotonSync.<WaitAndFinishDynamicInit>d__45$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45__System_Collections_IEnumerator_get_Current (CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45_o* __this, const MethodInfo* method);
// 0x3f4e510

Il2CppObject *
CustomLogic_CustomLogicPhotonSync_<WaitAndFinishDynamicInit>d__45__System_Collections_IEnumerator_get_Current
          (CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicPhotonSync.<WaitAndFinishInit>d__46$$.ctor
// il2cpp: void CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46___ctor (CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x3f4cde0

void CustomLogic_CustomLogicPhotonSync_<WaitAndFinishInit>d__46___ctor
               (CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// CustomLogic.CustomLogicPhotonSync.<WaitAndFinishInit>d__46$$System.IDisposable.Dispose
// il2cpp: void CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46__System_IDisposable_Dispose (CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46_o* __this, const MethodInfo* method);
// 0x3f4e520

void CustomLogic_CustomLogicPhotonSync_<WaitAndFinishInit>d__46__System_IDisposable_Dispose
               (CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46_o *__this,
               MethodInfo *method)

{
  return;
}


// CustomLogic.CustomLogicPhotonSync.<WaitAndFinishInit>d__46$$MoveNext
// il2cpp: bool CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46__MoveNext (CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46_o* __this, const MethodInfo* method);
// 0x3f4e530

bool_conflict
CustomLogic_CustomLogicPhotonSync_<WaitAndFinishInit>d__46__MoveNext
          (CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicPhotonSync_o *__this_00;
  bool_conflict bVar1;
  long lVar2;
  undefined8 uVar3;
  MethodInfo *method_00;
  
  if (DAT_05703e56 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    DAT_05703e56 = '\x01';
  }
  if (1 < (uint)(__this->fields).__1__state) {
    return 0;
  }
  __this_00 = (__this->fields).__4__this;
  (__this->fields).__1__state = -1;
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
    lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if (lVar2 == 0) {
LAB_03f4e604:
    (__this->fields).__2__current = (Il2CppObject *)0x0;
    uVar3 = il2cpp_runtime_glue(&(__this->fields).__2__current,0);
    (__this->fields).__1__state = 1;
    return (bool_conflict)CONCAT71((int7)((ulong)uVar3 >> 8),1);
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
    lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    if (lVar2 == 0) goto LAB_03f4e626;
  }
  if (*(System_Collections_Generic_Dictionary_int__object__o **)(lVar2 + 0x28) !=
      (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<int__object>__ContainsKey
                      (*(System_Collections_Generic_Dictionary_int__object__o **)(lVar2 + 0x28),
                       (__this->fields).mapObjectId,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar1 == '\0') goto LAB_03f4e604;
    if (__this_00 != (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
      CustomLogic_CustomLogicPhotonSync__FinishInit
                (__this_00,(__this->fields).mapObjectId,method_00);
      return 0;
    }
  }
LAB_03f4e626:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhotonSync.<WaitAndFinishInit>d__46$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46__System_Collections_Generic_IEnumerator_System_Object__get_Current (CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46_o* __this, const MethodInfo* method);
// 0x3f4e630

Il2CppObject *
CustomLogic_CustomLogicPhotonSync_<WaitAndFinishInit>d__46__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicPhotonSync.<WaitAndFinishInit>d__46$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46__System_Collections_IEnumerator_Reset (CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46_o* __this, const MethodInfo* method);
// 0x3f4e640

void CustomLogic_CustomLogicPhotonSync_<WaitAndFinishInit>d__46__System_Collections_IEnumerator_Reset
               (CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46_o *__this,
               MethodInfo *method)

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


// CustomLogic.CustomLogicPhotonSync.<WaitAndFinishInit>d__46$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46__System_Collections_IEnumerator_get_Current (CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46_o* __this, const MethodInfo* method);
// 0x3f4e680

Il2CppObject *
CustomLogic_CustomLogicPhotonSync_<WaitAndFinishInit>d__46__System_Collections_IEnumerator_get_Current
          (CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicPhotonSync.<WaitAndFinishSync>d__54$$.ctor
// il2cpp: void CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54___ctor (CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x3f4d770

void CustomLogic_CustomLogicPhotonSync_<WaitAndFinishSync>d__54___ctor
               (CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// CustomLogic.CustomLogicPhotonSync.<WaitAndFinishSync>d__54$$System.IDisposable.Dispose
// il2cpp: void CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54__System_IDisposable_Dispose (CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54_o* __this, const MethodInfo* method);
// 0x3f4e690

void CustomLogic_CustomLogicPhotonSync_<WaitAndFinishSync>d__54__System_IDisposable_Dispose
               (CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54_o *__this,
               MethodInfo *method)

{
  return;
}


// CustomLogic.CustomLogicPhotonSync.<WaitAndFinishSync>d__54$$MoveNext
// il2cpp: bool CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54__MoveNext (CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54_o* __this, const MethodInfo* method);
// 0x3f4e6a0

bool_conflict
CustomLogic_CustomLogicPhotonSync_<WaitAndFinishSync>d__54__MoveNext
          (CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicPhotonSync_o *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  
  if ((uint)(__this->fields).__1__state < 2) {
    pCVar1 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (pCVar1 == (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((char)(pCVar1->fields)._inited == '\0') {
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      uVar5 = il2cpp_runtime_glue(&(__this->fields).__2__current,0);
      (__this->fields).__1__state = 1;
      return (bool_conflict)CONCAT71((int7)((ulong)uVar5 >> 8),1);
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
  return 0;
}


// CustomLogic.CustomLogicPhotonSync.<WaitAndFinishSync>d__54$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54__System_Collections_Generic_IEnumerator_System_Object__get_Current (CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54_o* __this, const MethodInfo* method);
// 0x3f4e700

Il2CppObject *
CustomLogic_CustomLogicPhotonSync_<WaitAndFinishSync>d__54__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicPhotonSync.<WaitAndFinishSync>d__54$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54__System_Collections_IEnumerator_Reset (CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54_o* __this, const MethodInfo* method);
// 0x3f4e710

void CustomLogic_CustomLogicPhotonSync_<WaitAndFinishSync>d__54__System_Collections_IEnumerator_Reset
               (CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54_o *__this,
               MethodInfo *method)

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


// CustomLogic.CustomLogicPhotonSync.<WaitAndFinishSync>d__54$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54__System_Collections_IEnumerator_get_Current (CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54_o* __this, const MethodInfo* method);
// 0x3f4e750

Il2CppObject *
CustomLogic_CustomLogicPhotonSync_<WaitAndFinishSync>d__54__System_Collections_IEnumerator_get_Current
          (CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicPhotonSync$$get_SyncTransforms
// il2cpp: bool CustomLogic_CustomLogicPhotonSync__get_SyncTransforms (CustomLogic_CustomLogicPhotonSync_o* __this, const MethodInfo* method);
// 0x3f4bcb0

bool_conflict
CustomLogic_CustomLogicPhotonSync__get_SyncTransforms
          (CustomLogic_CustomLogicPhotonSync_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)(__this->fields)._syncTransforms);
}


// CustomLogic.CustomLogicPhotonSync$$set_SyncTransforms
// il2cpp: void CustomLogic_CustomLogicPhotonSync__set_SyncTransforms (CustomLogic_CustomLogicPhotonSync_o* __this, bool value, const MethodInfo* method);
// 0x3f4bcc0

void CustomLogic_CustomLogicPhotonSync__set_SyncTransforms
               (CustomLogic_CustomLogicPhotonSync_o *__this,bool_conflict value,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  
  pPVar1 = (__this->fields).PhotonView;
  if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
    if ((char)(pPVar1->fields)._IsMine_k__BackingField != '\0') {
      *(char *)&(__this->fields)._syncTransforms = (char)value;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhotonSync$$get_SyncVelocity
// il2cpp: bool CustomLogic_CustomLogicPhotonSync__get_SyncVelocity (CustomLogic_CustomLogicPhotonSync_o* __this, const MethodInfo* method);
// 0x3f4bce0

bool_conflict
CustomLogic_CustomLogicPhotonSync__get_SyncVelocity
          (CustomLogic_CustomLogicPhotonSync_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),
                  *(undefined1 *)((long)&(__this->fields)._syncTransforms + 1));
}


// CustomLogic.CustomLogicPhotonSync$$set_SyncVelocity
// il2cpp: void CustomLogic_CustomLogicPhotonSync__set_SyncVelocity (CustomLogic_CustomLogicPhotonSync_o* __this, bool value, const MethodInfo* method);
// 0x3f4bcf0

void CustomLogic_CustomLogicPhotonSync__set_SyncVelocity
               (CustomLogic_CustomLogicPhotonSync_o *__this,bool_conflict value,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  
  pPVar1 = (__this->fields).PhotonView;
  if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
    if ((char)(pPVar1->fields)._IsMine_k__BackingField != '\0') {
      *(char *)((long)&(__this->fields)._syncTransforms + 1) = (char)value;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhotonSync$$get_Rigidbody
// il2cpp: UnityEngine_Rigidbody_o* CustomLogic_CustomLogicPhotonSync__get_Rigidbody (CustomLogic_CustomLogicPhotonSync_o* __this, const MethodInfo* method);
// 0x3f4bd10

UnityEngine_Rigidbody_o *
CustomLogic_CustomLogicPhotonSync__get_Rigidbody
          (CustomLogic_CustomLogicPhotonSync_o *__this,MethodInfo *method)

{
  UnityEngine_Rigidbody_o **ppUVar1;
  UnityEngine_Object_o *pUVar2;
  Map_MapObject_o *pMVar3;
  UnityEngine_GameObject_o *__this_00;
  bool_conflict bVar4;
  UnityEngine_Rigidbody_o *pUVar5;
  
  if (DAT_05703e3a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Rigidbody_GetComponent_Rigidbody);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05703e3a = '\x01';
  }
  pUVar2 = (UnityEngine_Object_o *)(__this->fields)._rigidbody;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppUVar1 = &(__this->fields)._rigidbody;
  bVar4 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((char)bVar4 != '\0') &&
     (pMVar3 = (__this->fields)._MapObject_k__BackingField, pMVar3 != (Map_MapObject_o *)0x0)) {
    pUVar2 = (UnityEngine_Object_o *)(pMVar3->fields).GameObject;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar4 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      pMVar3 = (__this->fields)._MapObject_k__BackingField;
      if ((pMVar3 == (Map_MapObject_o *)0x0) ||
         (__this_00 = (pMVar3->fields).GameObject, __this_00 == (UnityEngine_GameObject_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pUVar5 = (UnityEngine_Rigidbody_o *)
               UnityEngine_GameObject__GetComponent<object>(__this_00,MethodInfo_Rigidbody_GetComponent_Rigidbody);
      *ppUVar1 = pUVar5;
      il2cpp_runtime_glue(ppUVar1,pUVar5);
    }
  }
  return *ppUVar1;
}


// CustomLogic.CustomLogicPhotonSync$$get_MapObject
// il2cpp: Map_MapObject_o* CustomLogic_CustomLogicPhotonSync__get_MapObject (CustomLogic_CustomLogicPhotonSync_o* __this, const MethodInfo* method);
// 0x3f4bdf0

Map_MapObject_o *
CustomLogic_CustomLogicPhotonSync__get_MapObject
          (CustomLogic_CustomLogicPhotonSync_o *__this,MethodInfo *method)

{
  return (__this->fields)._MapObject_k__BackingField;
}


// CustomLogic.CustomLogicPhotonSync$$set_MapObject
// il2cpp: void CustomLogic_CustomLogicPhotonSync__set_MapObject (CustomLogic_CustomLogicPhotonSync_o* __this, Map_MapObject_o* value, const MethodInfo* method);
// 0x3f4be00

void CustomLogic_CustomLogicPhotonSync__set_MapObject
               (CustomLogic_CustomLogicPhotonSync_o *__this,Map_MapObject_o *value,
               MethodInfo *method)

{
  (__this->fields)._MapObject_k__BackingField = value;
  il2cpp_runtime_glue(&(__this->fields)._MapObject_k__BackingField);
  return;
}


// CustomLogic.CustomLogicPhotonSync$$get_CustomLogicMapObjectBuiltin
// il2cpp: CustomLogic_CustomLogicMapObjectBuiltin_o* CustomLogic_CustomLogicPhotonSync__get_CustomLogicMapObjectBuiltin (CustomLogic_CustomLogicPhotonSync_o* __this, const MethodInfo* method);
// 0x3f4be10

CustomLogic_CustomLogicMapObjectBuiltin_o *
CustomLogic_CustomLogicPhotonSync__get_CustomLogicMapObjectBuiltin
          (CustomLogic_CustomLogicPhotonSync_o *__this,MethodInfo *method)

{
  return (__this->fields)._CustomLogicMapObjectBuiltin_k__BackingField;
}


// CustomLogic.CustomLogicPhotonSync$$set_CustomLogicMapObjectBuiltin
// il2cpp: void CustomLogic_CustomLogicPhotonSync__set_CustomLogicMapObjectBuiltin (CustomLogic_CustomLogicPhotonSync_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* value, const MethodInfo* method);
// 0x3f4be20

void CustomLogic_CustomLogicPhotonSync__set_CustomLogicMapObjectBuiltin
               (CustomLogic_CustomLogicPhotonSync_o *__this,
               CustomLogic_CustomLogicMapObjectBuiltin_o *value,MethodInfo *method)

{
  (__this->fields)._CustomLogicMapObjectBuiltin_k__BackingField = value;
  il2cpp_runtime_glue(&(__this->fields)._CustomLogicMapObjectBuiltin_k__BackingField);
  return;
}


// CustomLogic.CustomLogicPhotonSync$$get_NetworkView
// il2cpp: CustomLogic_CustomLogicNetworkViewBuiltin_o* CustomLogic_CustomLogicPhotonSync__get_NetworkView (CustomLogic_CustomLogicPhotonSync_o* __this, const MethodInfo* method);
// 0x3f4be30

CustomLogic_CustomLogicNetworkViewBuiltin_o *
CustomLogic_CustomLogicPhotonSync__get_NetworkView
          (CustomLogic_CustomLogicPhotonSync_o *__this,MethodInfo *method)

{
  return (__this->fields)._NetworkView_k__BackingField;
}


// CustomLogic.CustomLogicPhotonSync$$set_NetworkView
// il2cpp: void CustomLogic_CustomLogicPhotonSync__set_NetworkView (CustomLogic_CustomLogicPhotonSync_o* __this, CustomLogic_CustomLogicNetworkViewBuiltin_o* value, const MethodInfo* method);
// 0x3f4be40

void CustomLogic_CustomLogicPhotonSync__set_NetworkView
               (CustomLogic_CustomLogicPhotonSync_o *__this,
               CustomLogic_CustomLogicNetworkViewBuiltin_o *value,MethodInfo *method)

{
  (__this->fields)._NetworkView_k__BackingField = value;
  il2cpp_runtime_glue(&(__this->fields)._NetworkView_k__BackingField);
  return;
}


// CustomLogic.CustomLogicPhotonSync$$get_SmoothingDelay
// il2cpp: float CustomLogic_CustomLogicPhotonSync__get_SmoothingDelay (CustomLogic_CustomLogicPhotonSync_o* __this, const MethodInfo* method);
// 0x3f4be50

float CustomLogic_CustomLogicPhotonSync__get_SmoothingDelay
                (CustomLogic_CustomLogicPhotonSync_o *__this,MethodInfo *method)

{
  return 5.0;
}


// CustomLogic.CustomLogicPhotonSync$$Awake
// il2cpp: void CustomLogic_CustomLogicPhotonSync__Awake (CustomLogic_CustomLogicPhotonSync_o* __this, const MethodInfo* method);
// 0x3f4be60

void CustomLogic_CustomLogicPhotonSync__Awake
               (CustomLogic_CustomLogicPhotonSync_o *__this,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  
  pPVar1 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  (__this->fields).PhotonView = pPVar1;
  il2cpp_runtime_glue(&(__this->fields).PhotonView,pPVar1);
  return;
}


// CustomLogic.CustomLogicPhotonSync$$OnEnable
// il2cpp: void CustomLogic_CustomLogicPhotonSync__OnEnable (CustomLogic_CustomLogicPhotonSync_o* __this, const MethodInfo* method);
// 0x3f4be80

void CustomLogic_CustomLogicPhotonSync__OnEnable
               (CustomLogic_CustomLogicPhotonSync_o *__this,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this_00;
  
  if (DAT_05703e3b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    DAT_05703e3b = '\x01';
  }
  __this_00 = (__this->fields).PhotonView;
  if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
    Photon_Pun_PhotonView__AddCallbackTarget
              (__this_00,(Photon_Pun_IPhotonViewCallback_o *)__this,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) {
      Photon_Pun_PhotonNetwork__AddCallbackTarget((Il2CppObject *)__this,(MethodInfo *)0x0);
      return;
    }
    il2cpp_init_class();
    Photon_Pun_PhotonNetwork__AddCallbackTarget((Il2CppObject *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhotonSync$$OnDisable
// il2cpp: void CustomLogic_CustomLogicPhotonSync__OnDisable (CustomLogic_CustomLogicPhotonSync_o* __this, const MethodInfo* method);
// 0x3f4bef0

void CustomLogic_CustomLogicPhotonSync__OnDisable
               (CustomLogic_CustomLogicPhotonSync_o *__this,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this_00;
  
  if (DAT_05703e3c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    DAT_05703e3c = '\x01';
  }
  __this_00 = (__this->fields).PhotonView;
  if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
    Photon_Pun_PhotonView__RemoveCallbackTarget
              (__this_00,(Photon_Pun_IPhotonViewCallback_o *)__this,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) {
      Photon_Pun_PhotonNetwork__RemoveCallbackTarget((Il2CppObject *)__this,(MethodInfo *)0x0);
      return;
    }
    il2cpp_init_class();
    Photon_Pun_PhotonNetwork__RemoveCallbackTarget((Il2CppObject *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhotonSync$$OnPhotonInstantiate
// il2cpp: void CustomLogic_CustomLogicPhotonSync__OnPhotonInstantiate (CustomLogic_CustomLogicPhotonSync_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x3f4bf60

void CustomLogic_CustomLogicPhotonSync__OnPhotonInstantiate
               (CustomLogic_CustomLogicPhotonSync_o *__this,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  int iVar1;
  System_Object_array *pSVar2;
  int *piVar3;
  int32_t *piVar4;
  undefined1 *puVar5;
  
  if (DAT_05703e3d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SpawnIntent);
    DAT_05703e3d = '\x01';
  }
  if ((info.fields.photonView != (Photon_Pun_PhotonView_o *)0x0) &&
     (pSVar2 = ((info.fields.photonView)->fields).instantiationDataField,
     pSVar2 != (System_Object_array *)0x0)) {
    if ((int)pSVar2->max_length == 0) {
LAB_03f4c050:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (pSVar2->m_Items[0] != (Il2CppObject *)0x0) {
      if ((pSVar2->m_Items[0]->klass->_1).element_class == *(Il2CppClass **)(TypeInfo_SpawnIntent + 0x40)) {
        piVar3 = (int *)il2cpp_glue_022c7330();
        iVar1 = *piVar3;
        (__this->fields)._persistsOwnership = iVar1;
        if (iVar1 != 1) {
          return;
        }
        if ((uint)pSVar2->max_length < 2) goto LAB_03f4c050;
        if (pSVar2->m_Items[1] == (Il2CppObject *)0x0) goto LAB_03f4c04b;
        if ((pSVar2->m_Items[1]->klass->_1).element_class == *(Il2CppClass **)(DAT_05711068 + 0x40))
        {
          piVar4 = (int32_t *)il2cpp_glue_022c7330();
          (__this->fields).ObjectId = *piVar4;
          if ((uint)pSVar2->max_length < 3) goto LAB_03f4c050;
          if (pSVar2->m_Items[2] == (Il2CppObject *)0x0) goto LAB_03f4c04b;
          if ((pSVar2->m_Items[2]->klass->_1).element_class ==
              *(Il2CppClass **)(DAT_05711048 + 0x40)) {
            puVar5 = (undefined1 *)il2cpp_glue_022c7330();
            *(undefined1 *)((long)&(__this->fields)._syncTransforms + 1) = *puVar5;
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume();
    }
  }
LAB_03f4c04b:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhotonSync$$Init
// il2cpp: void CustomLogic_CustomLogicPhotonSync__Init (CustomLogic_CustomLogicPhotonSync_o* __this, int32_t mapObjectId, bool rigidbody, const MethodInfo* method);
// 0x3f4c060

void CustomLogic_CustomLogicPhotonSync__Init
               (CustomLogic_CustomLogicPhotonSync_o *__this,int32_t mapObjectId,
               bool_conflict rigidbody,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  Photon_Pun_PhotonView_o *__this_01;
  Map_MapObject_o *pMVar1;
  System_Object_array *parameters;
  Il2CppObject *pIVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 local_2d;
  int32_t local_2c;
  
  if (DAT_05703e3e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&"InitRPC");
    DAT_05703e3e = '\x01';
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) goto LAB_03f4c0ef;
LAB_03f4c091:
    __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
                **(undefined8 **)(TypeInfo_MapLoader + 0xb8);
  }
  else {
    if (*(int *)(TypeInfo_MapLoader + 0xe4) != 0) goto LAB_03f4c091;
LAB_03f4c0ef:
    il2cpp_init_class();
    __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
                **(undefined8 **)(TypeInfo_MapLoader + 0xb8);
  }
  if (__this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    pMVar1 = (Map_MapObject_o *)
             System_Collections_Generic_Dictionary<int__object>__get_Item
                       (__this_00,mapObjectId,MethodInfo_MapObject_get_Item);
    (__this->fields)._MapObject_k__BackingField = pMVar1;
    il2cpp_runtime_glue(&(__this->fields)._MapObject_k__BackingField,pMVar1);
    __this_01 = (__this->fields).PhotonView;
    parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,2);
    local_2c = mapObjectId;
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_2c);
    if (parameters != (System_Object_array *)0x0) {
      if ((pIVar2 != (Il2CppObject *)0x0) &&
         (lVar3 = il2cpp_runtime_glue(pIVar2,(((parameters->obj).klass)->_1).element_class),
         lVar3 == 0)) {
LAB_03f4c229:
        uVar4 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar4,0);
      }
      if ((int)parameters->max_length != 0) {
        parameters->m_Items[0] = pIVar2;
        il2cpp_runtime_glue(parameters->m_Items,pIVar2);
        local_2d = (undefined1)rigidbody;
        pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&local_2d);
        if ((pIVar2 != (Il2CppObject *)0x0) &&
           (lVar3 = il2cpp_runtime_glue(pIVar2,(((parameters->obj).klass)->_1).element_class),
           lVar3 == 0)) goto LAB_03f4c229;
        if (1 < (uint)parameters->max_length) {
          parameters->m_Items[1] = pIVar2;
          il2cpp_runtime_glue(parameters->m_Items + 1,pIVar2);
          if (__this_01 != (Photon_Pun_PhotonView_o *)0x0) {
            Photon_Pun_PhotonView__RPC(__this_01,"InitRPC",3,parameters,(MethodInfo *)0x0);
            return;
          }
          goto LAB_03f4c21f;
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
LAB_03f4c21f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhotonSync$$Init
// il2cpp: void CustomLogic_CustomLogicPhotonSync__Init (CustomLogic_CustomLogicPhotonSync_o* __this, int32_t mapObjectId, const MethodInfo* method);
// 0x3f4c240

void CustomLogic_CustomLogicPhotonSync__Init
               (CustomLogic_CustomLogicPhotonSync_o *__this,int32_t mapObjectId,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  Photon_Pun_PhotonView_o *__this_02;
  bool_conflict bVar1;
  Map_MapObject_o *pMVar2;
  UnityEngine_Object_o *x;
  System_Object_array *parameters;
  Il2CppObject *pIVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 local_2d;
  int32_t local_2c;
  
  if (DAT_05703e3f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Rigidbody_GetComponent_Rigidbody);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"InitRPC");
    DAT_05703e3f = '\x01';
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) goto LAB_03f4c2ea;
LAB_03f4c26f:
    __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
                **(undefined8 **)(TypeInfo_MapLoader + 0xb8);
  }
  else {
    if (*(int *)(TypeInfo_MapLoader + 0xe4) != 0) goto LAB_03f4c26f;
LAB_03f4c2ea:
    il2cpp_init_class();
    __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
                **(undefined8 **)(TypeInfo_MapLoader + 0xb8);
  }
  if (__this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    pMVar2 = (Map_MapObject_o *)
             System_Collections_Generic_Dictionary<int__object>__get_Item
                       (__this_00,mapObjectId,MethodInfo_MapObject_get_Item);
    (__this->fields)._MapObject_k__BackingField = pMVar2;
    il2cpp_runtime_glue(&(__this->fields)._MapObject_k__BackingField,pMVar2);
    pMVar2 = (__this->fields)._MapObject_k__BackingField;
    if ((pMVar2 != (Map_MapObject_o *)0x0) &&
       (__this_01 = (pMVar2->fields).GameObject, __this_01 != (UnityEngine_GameObject_o *)0x0)) {
      x = (UnityEngine_Object_o *)
          UnityEngine_GameObject__GetComponent<object>(__this_01,MethodInfo_Rigidbody_GetComponent_Rigidbody);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      __this_02 = (__this->fields).PhotonView;
      parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,2);
      local_2c = mapObjectId;
      pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_2c);
      if (parameters != (System_Object_array *)0x0) {
        if ((pIVar3 != (Il2CppObject *)0x0) &&
           (lVar4 = il2cpp_runtime_glue(pIVar3,(((parameters->obj).klass)->_1).element_class),
           lVar4 == 0)) {
LAB_03f4c476:
          uVar5 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar5,0);
        }
        if ((int)parameters->max_length != 0) {
          parameters->m_Items[0] = pIVar3;
          il2cpp_runtime_glue(parameters->m_Items,pIVar3);
          local_2d = (undefined1)bVar1;
          pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&local_2d);
          if ((pIVar3 != (Il2CppObject *)0x0) &&
             (lVar4 = il2cpp_runtime_glue(pIVar3,(((parameters->obj).klass)->_1).element_class),
             lVar4 == 0)) goto LAB_03f4c476;
          if (1 < (uint)parameters->max_length) {
            parameters->m_Items[1] = pIVar3;
            il2cpp_runtime_glue(parameters->m_Items + 1,pIVar3);
            if (__this_02 != (Photon_Pun_PhotonView_o *)0x0) {
              Photon_Pun_PhotonView__RPC(__this_02,"InitRPC",3,parameters,(MethodInfo *)0x0);
              return;
            }
            goto LAB_03f4c46c;
          }
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
LAB_03f4c46c:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhotonSync$$InitDynamic
// il2cpp: void CustomLogic_CustomLogicPhotonSync__InitDynamic (CustomLogic_CustomLogicPhotonSync_o* __this, bool persistsOwnership, System_String_o* csvScript, const MethodInfo* method);
// 0x3f4c490

void CustomLogic_CustomLogicPhotonSync__InitDynamic
               (CustomLogic_CustomLogicPhotonSync_o *__this,bool_conflict persistsOwnership,
               System_String_o *csvScript,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this_00;
  undefined8 in_RAX;
  System_Object_array *parameters;
  Il2CppObject *pIVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_38;
  
  uStack_38 = in_RAX;
  if (DAT_05703e40 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&"InitDynamicRPC");
    DAT_05703e40 = '\x01';
  }
  __this_00 = (__this->fields).PhotonView;
  parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,2);
  uStack_38 = CONCAT17((char)persistsOwnership,(undefined7)uStack_38);
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_38 + 7);
  if (parameters == (System_Object_array *)0x0) {
LAB_03f4c5bd:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (pIVar1 != (Il2CppObject *)0x0) {
    lVar2 = il2cpp_runtime_glue(pIVar1,(((parameters->obj).klass)->_1).element_class);
    if (lVar2 == 0) goto LAB_03f4c5c2;
  }
  if ((int)parameters->max_length != 0) {
    parameters->m_Items[0] = pIVar1;
    il2cpp_runtime_glue(parameters->m_Items,pIVar1);
    if (csvScript != (System_String_o *)0x0) {
      lVar2 = il2cpp_runtime_glue(csvScript,(((parameters->obj).klass)->_1).element_class);
      if (lVar2 == 0) {
LAB_03f4c5c2:
        uVar3 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar3,0);
      }
    }
    if (1 < (uint)parameters->max_length) {
      parameters->m_Items[1] = (Il2CppObject *)csvScript;
      il2cpp_runtime_glue(parameters->m_Items + 1,csvScript);
      if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(__this_00,"InitDynamicRPC",4,parameters,(MethodInfo *)0x0);
        CustomLogic_CustomLogicPhotonSync__CreateAndSetupObject
                  (__this,persistsOwnership & 0xff,csvScript,(MethodInfo *)parameters);
        return;
      }
      goto LAB_03f4c5bd;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhotonSync$$InitRPC
// il2cpp: void CustomLogic_CustomLogicPhotonSync__InitRPC (CustomLogic_CustomLogicPhotonSync_o* __this, int32_t mapObjectId, bool syncVelocity, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x3f4cb30

void CustomLogic_CustomLogicPhotonSync__InitRPC
               (CustomLogic_CustomLogicPhotonSync_o *__this,int32_t mapObjectId,
               bool_conflict syncVelocity,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  Il2CppObject *__this_00;
  
  pPVar1 = (__this->fields).PhotonView;
  if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
    if (info.fields.Sender != (pPVar1->fields)._Owner_k__BackingField) {
      return;
    }
    *(char *)((long)&(__this->fields)._syncTransforms + 1) = (char)syncVelocity;
    if (DAT_05703e43 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_WaitAndFinishInit_d__46);
      DAT_05703e43 = '\x01';
    }
    __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitAndFinishInit_d__46);
    System_Object___ctor(__this_00,(MethodInfo *)0x0);
    *(undefined4 *)&__this_00[1].klass = 0;
    if (__this_00 != (Il2CppObject *)0x0) {
      __this_00[2].monitor = __this;
      il2cpp_runtime_glue(&__this_00[2].monitor,__this);
      *(int32_t *)&__this_00[2].klass = mapObjectId;
      UnityEngine_MonoBehaviour__StartCoroutine
                ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00
                 ,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhotonSync$$InitDynamicRPC
// il2cpp: void CustomLogic_CustomLogicPhotonSync__InitDynamicRPC (CustomLogic_CustomLogicPhotonSync_o* __this, bool persistsOwnership, System_String_o* csvScript, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x3f4cc60

void CustomLogic_CustomLogicPhotonSync__InitDynamicRPC
               (CustomLogic_CustomLogicPhotonSync_o *__this,bool_conflict persistsOwnership,
               System_String_o *csvScript,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  Il2CppObject *__this_00;
  
  pPVar1 = (__this->fields).PhotonView;
  if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
    if (info.fields.Sender != (pPVar1->fields)._Owner_k__BackingField) {
      return;
    }
    if (DAT_05703e42 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_WaitAndFinishDynamicInit_d__45);
      DAT_05703e42 = '\x01';
    }
    __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitAndFinishDynamicInit_d__45);
    System_Object___ctor(__this_00,(MethodInfo *)0x0);
    *(undefined4 *)&__this_00[1].klass = 0;
    if (__this_00 != (Il2CppObject *)0x0) {
      __this_00[2].klass = (Il2CppClass *)__this;
      il2cpp_runtime_glue(__this_00 + 2,__this);
      *(char *)&__this_00[2].monitor = (char)persistsOwnership;
      __this_00[3].klass = (Il2CppClass *)csvScript;
      il2cpp_runtime_glue(__this_00 + 3,csvScript);
      UnityEngine_MonoBehaviour__StartCoroutine
                ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00
                 ,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhotonSync$$CreateAndSetupObject
// il2cpp: void CustomLogic_CustomLogicPhotonSync__CreateAndSetupObject (CustomLogic_CustomLogicPhotonSync_o* __this, bool persistsOwnership, System_String_o* csvScript, const MethodInfo* method);
// 0x3f4c5e0

void CustomLogic_CustomLogicPhotonSync__CreateAndSetupObject
               (CustomLogic_CustomLogicPhotonSync_o *__this,bool_conflict persistsOwnership,
               System_String_o *csvScript,MethodInfo *method)

{
  Map_MapObject_o **ppMVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  System_Collections_Generic_Dictionary_int__object__o *pSVar5;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  UnityEngine_GameObject_o *pUVar6;
  bool_conflict bVar7;
  undefined8 in_RAX;
  Photon_Pun_PhotonView_o *pPVar8;
  System_String_array *value;
  System_String_o *pSVar9;
  Map_MapScriptSceneObject_o *__this_01;
  Map_MapObject_o *pMVar10;
  CustomLogic_CustomLogicNetworkViewBuiltin_o *pCVar11;
  CustomLogic_CustomLogicMapObjectBuiltin_o *__this_02;
  UnityEngine_Transform_o *pUVar12;
  Il2CppObject *pIVar13;
  UnityEngine_Vector3_Fields UVar14;
  UnityEngine_Quaternion_Fields UVar15;
  undefined8 local_38;
  
  local_38 = in_RAX;
  if (DAT_05703e41 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicNetworkViewBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&TypeInfo_MapScriptSceneObject);
    il2cpp_init_method_metadata(&"PhotonSync: MapObject for id {0} already exists, overwriting.");
    il2cpp_init_method_metadata(&"PhotonSync: NetworkView for id {0} already exists, overwriting.");
    il2cpp_init_method_metadata(&"");
    DAT_05703e41 = '\x01';
  }
  bVar7 = System_String__IsNullOrEmpty(csvScript,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    return;
  }
  *(char *)((long)&(__this->fields)._synced + 1) = (char)persistsOwnership;
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_init_class();
  }
  iVar2 = *(int *)(*(long *)(TypeInfo_MapLoader + 0xb8) + 200);
  iVar3 = *(int *)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0xcc);
  pPVar8 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if ((pPVar8 == (Photon_Pun_PhotonView_o *)0x0) ||
     ((__this->fields).ObjectId = (iVar2 - iVar3) - (pPVar8->fields).viewIdField,
     csvScript == (System_String_o *)0x0)) goto LAB_03f4cb23;
  value = System_String__Split(csvScript,10,0,(MethodInfo *)0x0);
  pSVar9 = System_String__Join("",value,(MethodInfo *)0x0);
  __this_01 = (Map_MapScriptSceneObject_o *)il2cpp_runtime_glue(TypeInfo_MapScriptSceneObject);
  Map_MapScriptSceneObject___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 == (Map_MapScriptSceneObject_o *)0x0) goto LAB_03f4cb23;
  (*(__this_01->klass->vtable)._9_Deserialize.methodPtr)
            (__this_01,pSVar9,(__this_01->klass->vtable)._9_Deserialize.method);
  (__this_01->fields).Id = (__this->fields).ObjectId;
  (__this_01->fields).Parent = 0;
  *(undefined1 *)((long)&(__this_01->fields).Active + 3) = 1;
  pMVar10 = Map_MapLoader__LoadObject((Map_MapScriptBaseObject_o *)__this_01,0,(MethodInfo *)0x0);
  if (pMVar10 == (Map_MapObject_o *)0x0) goto LAB_03f4cb23;
  *(undefined1 *)&(pMVar10->fields).RuntimeCreated = 1;
  Map_MapLoader__SetParent(pMVar10,(MethodInfo *)0x0);
  pCVar11 = (CustomLogic_CustomLogicNetworkViewBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicNetworkViewBuiltin);
  CustomLogic_CustomLogicNetworkViewBuiltin___ctor(pCVar11,pMVar10,(MethodInfo *)0x0);
  (__this->fields)._NetworkView_k__BackingField = pCVar11;
  il2cpp_runtime_glue(&(__this->fields)._NetworkView_k__BackingField,pCVar11);
  __this_02 = (CustomLogic_CustomLogicMapObjectBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicMapObjectBuiltin);
  CustomLogic_CustomLogicMapObjectBuiltin___ctor(__this_02,pMVar10,(MethodInfo *)0x0);
  (__this->fields)._CustomLogicMapObjectBuiltin_k__BackingField = __this_02;
  il2cpp_runtime_glue(&(__this->fields)._CustomLogicMapObjectBuiltin_k__BackingField,__this_02);
  ppMVar1 = &(__this->fields)._MapObject_k__BackingField;
  (__this->fields)._MapObject_k__BackingField = pMVar10;
  il2cpp_runtime_glue(ppMVar1,pMVar10);
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar4 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  if ((lVar4 == 0) ||
     (pSVar5 = *(System_Collections_Generic_Dictionary_int__object__o **)(lVar4 + 0x38),
     pSVar5 == (System_Collections_Generic_Dictionary_int__object__o *)0x0)) goto LAB_03f4cb23;
  bVar7 = System_Collections_Generic_Dictionary<int__object>__ContainsKey
                    (pSVar5,(__this->fields).ObjectId,MethodInfo_Boolean_ContainsKey);
  if ((char)bVar7 == '\0') {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) != 0) goto LAB_03f4c889;
LAB_03f4ca80:
    il2cpp_init_class();
    lVar4 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    local_38 = CONCAT44((__this->fields).ObjectId,(undefined4)local_38);
    pIVar13 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,(long)&local_38 + 4);
    pSVar9 = System_String__Format("PhotonSync: MapObject for id {0} already exists, overwriting.",pIVar13,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Debug__LogWarning((Il2CppObject *)pSVar9,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) goto LAB_03f4ca80;
LAB_03f4c889:
    lVar4 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if ((lVar4 == 0) ||
     (*(System_Collections_Generic_Dictionary_int__object__o **)(lVar4 + 0x38) ==
      (System_Collections_Generic_Dictionary_int__object__o *)0x0)) goto LAB_03f4cb23;
  System_Collections_Generic_Dictionary<int__object>__set_Item
            (*(System_Collections_Generic_Dictionary_int__object__o **)(lVar4 + 0x38),
             (__this->fields).ObjectId,
             (Il2CppObject *)(__this->fields)._CustomLogicMapObjectBuiltin_k__BackingField,
             MethodInfo_Void_set_Item);
  lVar4 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  if ((lVar4 == 0) ||
     (pSVar5 = *(System_Collections_Generic_Dictionary_int__object__o **)(lVar4 + 0x28),
     pSVar5 == (System_Collections_Generic_Dictionary_int__object__o *)0x0)) goto LAB_03f4cb23;
  bVar7 = System_Collections_Generic_Dictionary<int__object>__ContainsKey
                    (pSVar5,(__this->fields).ObjectId,MethodInfo_Boolean_ContainsKey);
  if ((char)bVar7 == '\0') {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) != 0) goto LAB_03f4c912;
LAB_03f4cb06:
    il2cpp_init_class();
    lVar4 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    local_38 = CONCAT44(local_38._4_4_,(__this->fields).ObjectId);
    pIVar13 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_38);
    pSVar9 = System_String__Format("PhotonSync: NetworkView for id {0} already exists, overwriting.",pIVar13,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Debug__LogWarning((Il2CppObject *)pSVar9,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) goto LAB_03f4cb06;
LAB_03f4c912:
    lVar4 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if ((lVar4 != 0) &&
     (*(System_Collections_Generic_Dictionary_int__object__o **)(lVar4 + 0x28) !=
      (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
    System_Collections_Generic_Dictionary<int__object>__set_Item
              (*(System_Collections_Generic_Dictionary_int__object__o **)(lVar4 + 0x28),
               (__this->fields).ObjectId,
               (Il2CppObject *)(__this->fields)._NetworkView_k__BackingField,MethodInfo_Void_set_Item);
    pCVar11 = (__this->fields)._NetworkView_k__BackingField;
    if (pCVar11 != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
      CustomLogic_CustomLogicNetworkViewBuiltin__SetSyncDynamic(pCVar11,__this,(MethodInfo *)0x0);
      __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
      if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        CustomLogic_CustomLogicEvaluator__LoadRuntimeMapObjectComponents
                  (__this_00,pMVar10,1,(MethodInfo *)0x0);
        pMVar10 = *ppMVar1;
        if (((pMVar10 != (Map_MapObject_o *)0x0) &&
            (pUVar6 = (pMVar10->fields).GameObject, pUVar6 != (UnityEngine_GameObject_o *)0x0)) &&
           (pUVar12 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0),
           pUVar12 != (UnityEngine_Transform_o *)0x0)) {
          UVar14 = (UnityEngine_Vector3_Fields)
                   UnityEngine_Transform__get_position(pUVar12,(MethodInfo *)0x0);
          (__this->fields)._correctPosition.fields = UVar14;
          pMVar10 = (__this->fields)._MapObject_k__BackingField;
          if (((pMVar10 != (Map_MapObject_o *)0x0) &&
              (pUVar6 = (pMVar10->fields).GameObject, pUVar6 != (UnityEngine_GameObject_o *)0x0)) &&
             (pUVar12 = UnityEngine_GameObject__get_transform(pUVar6,(MethodInfo *)0x0),
             pUVar12 != (UnityEngine_Transform_o *)0x0)) {
            UVar15 = (UnityEngine_Quaternion_Fields)
                     UnityEngine_Transform__get_rotation(pUVar12,(MethodInfo *)0x0);
            (__this->fields)._correctRotation.fields = UVar15;
            *(undefined1 *)&(__this->fields)._inited = 1;
            return;
          }
        }
      }
    }
  }
LAB_03f4cb23:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhotonSync$$WaitAndFinishDynamicInit
// il2cpp: System_Collections_IEnumerator_o* CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit (CustomLogic_CustomLogicPhotonSync_o* __this, bool persistsOwnership, System_String_o* csvScript, const MethodInfo* method);
// 0x3f4cd30

System_Collections_IEnumerator_o *
CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit
          (CustomLogic_CustomLogicPhotonSync_o *__this,bool_conflict persistsOwnership,
          System_String_o *csvScript,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_05703e42 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WaitAndFinishDynamicInit_d__45);
    DAT_05703e42 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitAndFinishDynamicInit_d__45);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 2,__this);
    *(char *)&__this_00[2].monitor = (char)persistsOwnership;
    __this_00[3].klass = (Il2CppClass *)csvScript;
    il2cpp_runtime_glue(__this_00 + 3,csvScript);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhotonSync$$WaitAndFinishInit
// il2cpp: System_Collections_IEnumerator_o* CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit (CustomLogic_CustomLogicPhotonSync_o* __this, int32_t mapObjectId, const MethodInfo* method);
// 0x3f4cbe0

System_Collections_IEnumerator_o *
CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit
          (CustomLogic_CustomLogicPhotonSync_o *__this,int32_t mapObjectId,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_05703e43 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WaitAndFinishInit_d__46);
    DAT_05703e43 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitAndFinishInit_d__46);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].monitor = __this;
    il2cpp_runtime_glue(&__this_00[2].monitor,__this);
    *(int32_t *)&__this_00[2].klass = mapObjectId;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhotonSync$$FinishInit
// il2cpp: void CustomLogic_CustomLogicPhotonSync__FinishInit (CustomLogic_CustomLogicPhotonSync_o* __this, int32_t mapObjectId, const MethodInfo* method);
// 0x3f4ce00

void CustomLogic_CustomLogicPhotonSync__FinishInit
               (CustomLogic_CustomLogicPhotonSync_o *__this,int32_t mapObjectId,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_int__object__o *pSVar2;
  long lVar3;
  UnityEngine_GameObject_o *pUVar4;
  Map_MapObject_o *pMVar5;
  CustomLogic_CustomLogicNetworkViewBuiltin_o *pCVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_Vector3_Fields UVar8;
  UnityEngine_Quaternion_Fields UVar9;
  
  if (DAT_05703e44 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicNetworkViewBuiltin_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    DAT_05703e44 = '\x01';
    iVar1 = *(int *)(TypeInfo_MapLoader + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapLoader + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
             **(undefined8 **)(TypeInfo_MapLoader + 0xb8);
  }
  else {
    pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)
             **(undefined8 **)(TypeInfo_MapLoader + 0xb8);
  }
  if (pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    pMVar5 = (Map_MapObject_o *)
             System_Collections_Generic_Dictionary<int__object>__get_Item
                       (pSVar2,mapObjectId,MethodInfo_MapObject_get_Item);
    (__this->fields)._MapObject_k__BackingField = pMVar5;
    il2cpp_runtime_glue(&(__this->fields)._MapObject_k__BackingField,pMVar5);
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar3 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    if ((lVar3 != 0) &&
       (pSVar2 = *(System_Collections_Generic_Dictionary_int__object__o **)(lVar3 + 0x28),
       pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
      pCVar6 = (CustomLogic_CustomLogicNetworkViewBuiltin_o *)
               System_Collections_Generic_Dictionary<int__object>__get_Item
                         (pSVar2,mapObjectId,MethodInfo_CustomLogicNetworkViewBuiltin_get_Item);
      (__this->fields)._NetworkView_k__BackingField = pCVar6;
      il2cpp_runtime_glue(&(__this->fields)._NetworkView_k__BackingField,pCVar6);
      pCVar6 = (__this->fields)._NetworkView_k__BackingField;
      if (pCVar6 != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
        CustomLogic_CustomLogicNetworkViewBuiltin__SetSync(pCVar6,__this,(MethodInfo *)0x0);
        pMVar5 = (__this->fields)._MapObject_k__BackingField;
        if (((pMVar5 != (Map_MapObject_o *)0x0) &&
            (pUVar4 = (pMVar5->fields).GameObject, pUVar4 != (UnityEngine_GameObject_o *)0x0)) &&
           (pUVar7 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0),
           pUVar7 != (UnityEngine_Transform_o *)0x0)) {
          UVar8 = (UnityEngine_Vector3_Fields)
                  UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
          (__this->fields)._correctPosition.fields = UVar8;
          pMVar5 = (__this->fields)._MapObject_k__BackingField;
          if (((pMVar5 != (Map_MapObject_o *)0x0) &&
              (pUVar4 = (pMVar5->fields).GameObject, pUVar4 != (UnityEngine_GameObject_o *)0x0)) &&
             (pUVar7 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0),
             pUVar7 != (UnityEngine_Transform_o *)0x0)) {
            UVar9 = (UnityEngine_Quaternion_Fields)
                    UnityEngine_Transform__get_rotation(pUVar7,(MethodInfo *)0x0);
            (__this->fields)._correctRotation.fields = UVar9;
            *(undefined1 *)&(__this->fields)._inited = 1;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhotonSync$$SendMessageRPC
// il2cpp: void CustomLogic_CustomLogicPhotonSync__SendMessageRPC (CustomLogic_CustomLogicPhotonSync_o* __this, System_String_o* message, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x3f4cfb0

void CustomLogic_CustomLogicPhotonSync__SendMessageRPC
               (CustomLogic_CustomLogicPhotonSync_o *__this,System_String_o *message,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  CustomLogic_CustomLogicNetworkViewBuiltin_o *__this_00;
  Photon_Pun_PhotonMessageInfo_o __this_01;
  Photon_Realtime_Player_o *player;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this_02;
  undefined8 unaff_RBX;
  undefined8 unaff_R12;
  Photon_Pun_PhotonView_o *unaff_R13;
  double sentServerTime;
  
  if (DAT_05703e45 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicPlayerBuiltin);
    DAT_05703e45 = '\x01';
  }
  player = info.fields.Sender;
  __this_00 = (__this->fields)._NetworkView_k__BackingField;
  if (__this_00 != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
    __this_02 = (CustomLogic_CustomLogicPlayerBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicPlayerBuiltin);
    CustomLogic_CustomLogicPlayerBuiltin___ctor(__this_02,player,(MethodInfo *)0x0);
    __this_01.fields.Sender = (Photon_Realtime_Player_o *)unaff_R12;
    __this_01.fields._0_8_ = unaff_RBX;
    __this_01.fields.photonView = unaff_R13;
    sentServerTime = Photon_Pun_PhotonMessageInfo__get_SentServerTime(__this_01,(MethodInfo *)&info)
    ;
    CustomLogic_CustomLogicNetworkViewBuiltin__OnNetworkMessage
              (__this_00,__this_02,message,sentServerTime,(MethodInfo *)0x0);
  }
  return;
}


// CustomLogic.CustomLogicPhotonSync$$SendMessage
// il2cpp: void CustomLogic_CustomLogicPhotonSync__SendMessage (CustomLogic_CustomLogicPhotonSync_o* __this, Photon_Realtime_Player_o* player, System_String_o* message, const MethodInfo* method);
// 0x3f4d030

void CustomLogic_CustomLogicPhotonSync__SendMessage
               (CustomLogic_CustomLogicPhotonSync_o *__this,Photon_Realtime_Player_o *player,
               System_String_o *message,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this_00;
  System_Object_array *parameters;
  long lVar1;
  undefined8 uVar2;
  
  if (DAT_05703e46 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&"SendMessageRPC");
    DAT_05703e46 = '\x01';
  }
  __this_00 = (__this->fields).PhotonView;
  parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
  if (parameters != (System_Object_array *)0x0) {
    if (message != (System_String_o *)0x0) {
      lVar1 = il2cpp_runtime_glue(message,(((parameters->obj).klass)->_1).element_class);
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
    parameters->m_Items[0] = (Il2CppObject *)message;
    il2cpp_runtime_glue(parameters->m_Items,message);
    if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
      Photon_Pun_PhotonView__RPC(__this_00,"SendMessageRPC",player,parameters,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhotonSync$$SendMessageAll
// il2cpp: void CustomLogic_CustomLogicPhotonSync__SendMessageAll (CustomLogic_CustomLogicPhotonSync_o* __this, System_String_o* message, const MethodInfo* method);
// 0x3f4d100

void CustomLogic_CustomLogicPhotonSync__SendMessageAll
               (CustomLogic_CustomLogicPhotonSync_o *__this,System_String_o *message,
               MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this_00;
  System_Object_array *parameters;
  long lVar1;
  undefined8 uVar2;
  MethodInfo *extraout_RDX;
  
  if (DAT_05703e47 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&"SendMessageRPC");
    DAT_05703e47 = '\x01';
    method = extraout_RDX;
  }
  __this_00 = (__this->fields).PhotonView;
  parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1,method);
  if (parameters != (System_Object_array *)0x0) {
    if (message != (System_String_o *)0x0) {
      lVar1 = il2cpp_runtime_glue(message,(((parameters->obj).klass)->_1).element_class);
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
    parameters->m_Items[0] = (Il2CppObject *)message;
    il2cpp_runtime_glue(parameters->m_Items,message);
    if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
      Photon_Pun_PhotonView__RPC(__this_00,"SendMessageRPC",0,parameters,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhotonSync$$SendMessageOthers
// il2cpp: void CustomLogic_CustomLogicPhotonSync__SendMessageOthers (CustomLogic_CustomLogicPhotonSync_o* __this, System_String_o* message, const MethodInfo* method);
// 0x3f4d1d0

void CustomLogic_CustomLogicPhotonSync__SendMessageOthers
               (CustomLogic_CustomLogicPhotonSync_o *__this,System_String_o *message,
               MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this_00;
  System_Object_array *parameters;
  long lVar1;
  undefined8 uVar2;
  MethodInfo *extraout_RDX;
  
  if (DAT_05703e48 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&"SendMessageRPC");
    DAT_05703e48 = '\x01';
    method = extraout_RDX;
  }
  __this_00 = (__this->fields).PhotonView;
  parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1,method);
  if (parameters != (System_Object_array *)0x0) {
    if (message != (System_String_o *)0x0) {
      lVar1 = il2cpp_runtime_glue(message,(((parameters->obj).klass)->_1).element_class);
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
    parameters->m_Items[0] = (Il2CppObject *)message;
    il2cpp_runtime_glue(parameters->m_Items,message);
    if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
      Photon_Pun_PhotonView__RPC(__this_00,"SendMessageRPC",1,parameters,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhotonSync$$OnPlayerEnteredRoom
// il2cpp: void CustomLogic_CustomLogicPhotonSync__OnPlayerEnteredRoom (CustomLogic_CustomLogicPhotonSync_o* __this, Photon_Realtime_Player_o* newPlayer, const MethodInfo* method);
// 0x3f4d2a0

void CustomLogic_CustomLogicPhotonSync__OnPlayerEnteredRoom
               (CustomLogic_CustomLogicPhotonSync_o *__this,Photon_Realtime_Player_o *newPlayer,
               MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this_00;
  System_Object_array *parameters;
  long lVar1;
  Il2CppObject *pIVar2;
  undefined8 uVar3;
  MethodInfo *extraout_RDX;
  MethodInfo *pMVar4;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Quaternion_Fields local_38;
  
  if (DAT_05703e49 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_Quaternion);
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    il2cpp_init_method_metadata(&"SyncRPC");
    DAT_05703e49 = '\x01';
    method = extraout_RDX;
  }
  if (((char)(__this->fields)._inited == '\0') || ((char)(__this->fields)._syncTransforms == '\0'))
  {
    return;
  }
  __this_00 = (__this->fields).PhotonView;
  pMVar4 = (MethodInfo *)0x2;
  parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,2,method);
  local_48 = (UnityEngine_Vector3_Fields)
             CustomLogic_CustomLogicPhotonSync__GetPosition(__this,pMVar4);
  pMVar4 = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_Vector3,&local_48);
  if (parameters == (System_Object_array *)0x0) {
LAB_03f4d423:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((pMVar4 != (MethodInfo *)0x0) &&
     (lVar1 = il2cpp_runtime_glue(pMVar4,(((parameters->obj).klass)->_1).element_class), lVar1 == 0))
  {
LAB_03f4d428:
    uVar3 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(uVar3,0);
  }
  if ((int)parameters->max_length != 0) {
    parameters->m_Items[0] = (Il2CppObject *)pMVar4;
    il2cpp_runtime_glue(parameters->m_Items);
    local_38 = (UnityEngine_Quaternion_Fields)
               CustomLogic_CustomLogicPhotonSync__GetRotation(__this,pMVar4);
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_Quaternion,&local_38);
    if ((pIVar2 != (Il2CppObject *)0x0) &&
       (lVar1 = il2cpp_runtime_glue(pIVar2,(((parameters->obj).klass)->_1).element_class), lVar1 == 0
       )) goto LAB_03f4d428;
    if (1 < (uint)parameters->max_length) {
      parameters->m_Items[1] = pIVar2;
      il2cpp_runtime_glue(parameters->m_Items + 1,pIVar2);
      if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(__this_00,"SyncRPC",newPlayer,parameters,(MethodInfo *)0x0);
        return;
      }
      goto LAB_03f4d423;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhotonSync$$SyncRPC
// il2cpp: void CustomLogic_CustomLogicPhotonSync__SyncRPC (CustomLogic_CustomLogicPhotonSync_o* __this, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x3f4d5e0

void CustomLogic_CustomLogicPhotonSync__SyncRPC
               (CustomLogic_CustomLogicPhotonSync_o *__this,UnityEngine_Vector3_o position,
               UnityEngine_Quaternion_o rotation,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  Il2CppObject *__this_00;
  float fStack_28;
  float fStack_24;
  
  pPVar1 = (__this->fields).PhotonView;
  if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
    if (info.fields.Sender != (pPVar1->fields)._Owner_k__BackingField) {
      return;
    }
    if (DAT_05703e4a == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_WaitAndFinishSync_d__54);
      DAT_05703e4a = '\x01';
    }
    __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitAndFinishSync_d__54);
    System_Object___ctor(__this_00,(MethodInfo *)0x0);
    *(undefined4 *)&__this_00[1].klass = 0;
    if (__this_00 != (Il2CppObject *)0x0) {
      __this_00[2].klass = (Il2CppClass *)__this;
      il2cpp_runtime_glue(__this_00 + 2,__this);
      __this_00[2].monitor = position.fields._0_8_;
      *(float *)&__this_00[3].klass = position.fields.z;
      fStack_28 = rotation.fields.x;
      fStack_24 = rotation.fields.y;
      *(float *)((long)&__this_00[3].klass + 4) = fStack_28;
      *(float *)&__this_00[3].monitor = fStack_24;
      *(float *)((long)&__this_00[3].monitor + 4) = rotation.fields.z;
      *(float *)&__this_00[4].klass = rotation.fields.w;
      UnityEngine_MonoBehaviour__StartCoroutine
                ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00
                 ,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhotonSync$$WaitAndFinishSync
// il2cpp: System_Collections_IEnumerator_o* CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync (CustomLogic_CustomLogicPhotonSync_o* __this, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, const MethodInfo* method);
// 0x3f4d6c0

System_Collections_IEnumerator_o *
CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync
          (CustomLogic_CustomLogicPhotonSync_o *__this,UnityEngine_Vector3_o position,
          UnityEngine_Quaternion_o rotation,MethodInfo *method)

{
  Il2CppObject *__this_00;
  float fStack_38;
  float fStack_34;
  
  if (DAT_05703e4a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WaitAndFinishSync_d__54);
    DAT_05703e4a = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitAndFinishSync_d__54);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 2,__this);
    __this_00[2].monitor = position.fields._0_8_;
    *(float *)&__this_00[3].klass = position.fields.z;
    fStack_38 = rotation.fields.x;
    fStack_34 = rotation.fields.y;
    *(float *)((long)&__this_00[3].klass + 4) = fStack_38;
    *(float *)&__this_00[3].monitor = fStack_34;
    *(float *)((long)&__this_00[3].monitor + 4) = rotation.fields.z;
    *(float *)&__this_00[4].klass = rotation.fields.w;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhotonSync$$OnPhotonSerializeView
// il2cpp: void CustomLogic_CustomLogicPhotonSync__OnPhotonSerializeView (CustomLogic_CustomLogicPhotonSync_o* __this, Photon_Pun_PhotonStream_o* stream, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x3f4d790

void CustomLogic_CustomLogicPhotonSync__OnPhotonSerializeView
               (CustomLogic_CustomLogicPhotonSync_o *__this,Photon_Pun_PhotonStream_o *stream,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  char cVar1;
  uint uVar2;
  Map_MapObject_o *pMVar3;
  UnityEngine_Object_o *x;
  CustomLogic_CustomLogicNetworkViewBuiltin_o *pCVar4;
  bool_conflict bVar5;
  uint uVar6;
  MethodInfo *pMVar7;
  Il2CppObject *pIVar8;
  long lVar9;
  undefined8 *puVar10;
  uint *puVar11;
  System_Object_array *pSVar12;
  System_Object_array **ppSVar13;
  uint uVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  UnityEngine_Vector3_o UVar18;
  undefined8 uStack_58;
  float fStack_50;
  undefined4 uStack_4c;
  UnityEngine_Quaternion_Fields UStack_48;
  
  if (DAT_05703e4b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_QuaternionCompression);
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_05703e4b = '\x01';
  }
  UStack_48 = (UnityEngine_Quaternion_Fields)ZEXT816(0);
  if (stream == (Photon_Pun_PhotonStream_o *)0x0) goto LAB_03f4dc85;
  cVar1 = (char)(__this->fields)._inited;
  if ((char)(stream->fields)._IsWriting_k__BackingField != '\0') {
    if (cVar1 == '\0') {
      return;
    }
    pMVar3 = (__this->fields)._MapObject_k__BackingField;
    if (pMVar3 != (Map_MapObject_o *)0x0) {
      x = (UnityEngine_Object_o *)(pMVar3->fields).GameObject;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pMVar7 = (MethodInfo *)0x0;
      bVar5 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        return;
      }
      if ((char)(__this->fields)._syncTransforms != '\0') {
        UVar18 = CustomLogic_CustomLogicPhotonSync__GetPosition(__this,pMVar7);
        fStack_50 = UVar18.fields.z;
        uStack_58 = UVar18.fields._0_8_;
        pMVar7 = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_Vector3,&uStack_58);
        Photon_Pun_PhotonStream__SendNext(stream,(Il2CppObject *)pMVar7,(MethodInfo *)0x0);
        UStack_48 = (UnityEngine_Quaternion_Fields)
                    CustomLogic_CustomLogicPhotonSync__GetRotation(__this,pMVar7);
        if (*(int *)(TypeInfo_QuaternionCompression + 0xe4) == 0) {
          il2cpp_init_class();
        }
        uStack_4c = il2cpp_glue_03f55800(&UStack_48,0);
        pMVar7 = (MethodInfo *)il2cpp_runtime_glue(DAT_05711068,&uStack_4c);
        Photon_Pun_PhotonStream__SendNext(stream,(Il2CppObject *)pMVar7,(MethodInfo *)0x0);
        if (*(char *)((long)&(__this->fields)._syncTransforms + 1) != '\0') {
          UVar18 = CustomLogic_CustomLogicPhotonSync__GetVelocity(__this,pMVar7);
          fStack_50 = UVar18.fields.z;
          uStack_58 = UVar18.fields._0_8_;
          pIVar8 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_Vector3,&uStack_58);
          Photon_Pun_PhotonStream__SendNext(stream,pIVar8,(MethodInfo *)0x0);
        }
      }
      pCVar4 = (__this->fields)._NetworkView_k__BackingField;
      if (pCVar4 != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
        CustomLogic_CustomLogicNetworkViewBuiltin__SendNetworkStream
                  (pCVar4,stream,(MethodInfo *)0x0);
        return;
      }
    }
    goto LAB_03f4dc85;
  }
  if (cVar1 == '\0') {
    return;
  }
  pIVar8 = Photon_Pun_PhotonStream__PeekNext(stream,(MethodInfo *)0x0);
  lVar9 = il2cpp_runtime_glue(pIVar8);
  *(bool *)&(__this->fields)._syncTransforms = lVar9 == 0;
  if (lVar9 == 0) {
    pIVar8 = Photon_Pun_PhotonStream__ReceiveNext(stream,(MethodInfo *)0x0);
    if (pIVar8 == (Il2CppObject *)0x0) goto LAB_03f4dc85;
    if ((pIVar8->klass->_1).element_class != *(Il2CppClass **)(TypeInfo_Vector3 + 0x40))
    goto LAB_03f4dc95;
    puVar10 = (undefined8 *)il2cpp_glue_022c7330(pIVar8);
    uVar15 = *puVar10;
    (__this->fields)._correctPosition.fields.x = (float)(int)uVar15;
    (__this->fields)._correctPosition.fields.y = (float)(int)((ulong)uVar15 >> 0x20);
    (__this->fields)._correctPosition.fields.z = *(float *)(puVar10 + 1);
    pIVar8 = Photon_Pun_PhotonStream__ReceiveNext(stream,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_QuaternionCompression + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (pIVar8 == (Il2CppObject *)0x0) goto LAB_03f4dc85;
    if ((pIVar8->klass->_1).element_class != *(Il2CppClass **)(DAT_05711068 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pIVar8);
    }
    puVar11 = (uint *)il2cpp_glue_022c7330(pIVar8);
    uVar2 = *puVar11;
    uVar14 = uVar2 >> 0x1e;
    fVar16 = 0.0;
    uVar6 = uVar2;
    if (uVar14 == 3) {
LAB_03f4da55:
      fVar17 = (float)(uVar6 & 0x1ff) * 0.0013837706 *
               *(float *)(&DAT_00cd0ef0 + (ulong)((uVar6 & 0x200) == 0) * 4);
      (__this->fields)._correctRotation.fields.z = fVar17;
      fVar16 = fVar17 * fVar17 + fVar16;
      uVar6 = uVar6 >> 10;
      if (uVar14 != 1) goto LAB_03f4da9c;
LAB_03f4dae9:
      fVar17 = (float)(uVar6 & 0x1ff) * 0.0013837706 *
               *(float *)(&DAT_00cd0ef0 + (ulong)((uVar6 & 0x200) == 0) * 4);
      (__this->fields)._correctRotation.fields.x = fVar17;
      fVar16 = 1.0 - (fVar17 * fVar17 + fVar16);
      if (fVar16 < 0.0) {
        fVar16 = sqrtf(fVar16);
      }
      else {
        fVar16 = SQRT(fVar16);
      }
      if (uVar14 == 1) {
        (__this->fields)._correctRotation.fields.y = fVar16;
      }
      else if (uVar14 == 2) {
        (__this->fields)._correctRotation.fields.z = fVar16;
      }
      else {
        (__this->fields)._correctRotation.fields.w = fVar16;
      }
    }
    else {
      fVar16 = (float)(uVar2 & 0x1ff) * 0.0013837706 *
               *(float *)(&DAT_00cd0ef0 + (ulong)((uVar2 & 0x200) == 0) * 4);
      (__this->fields)._correctRotation.fields.w = fVar16;
      fVar16 = fVar16 * fVar16 + 0.0;
      uVar6 = uVar2 >> 10;
      if (uVar14 != 2) goto LAB_03f4da55;
LAB_03f4da9c:
      fVar17 = (float)(uVar6 & 0x1ff) * 0.0013837706 *
               *(float *)(&DAT_00cd0ef0 + (ulong)((uVar6 & 0x200) == 0) * 4);
      (__this->fields)._correctRotation.fields.y = fVar17;
      fVar16 = fVar17 * fVar17 + fVar16;
      if (uVar2 >> 0x1e != 0) {
        uVar6 = uVar6 >> 10;
        goto LAB_03f4dae9;
      }
      fVar16 = 1.0 - fVar16;
      if (fVar16 < 0.0) {
        fVar16 = sqrtf(fVar16);
      }
      else {
        fVar16 = SQRT(fVar16);
      }
      (__this->fields)._correctRotation.fields.x = fVar16;
    }
    pIVar8 = Photon_Pun_PhotonStream__PeekNext(stream,(MethodInfo *)0x0);
    lVar9 = il2cpp_runtime_glue(pIVar8);
    *(bool *)((long)&(__this->fields)._syncTransforms + 1) = lVar9 == 0;
    if (lVar9 == 0) {
      pIVar8 = Photon_Pun_PhotonStream__ReceiveNext(stream,(MethodInfo *)0x0);
      if (pIVar8 == (Il2CppObject *)0x0) goto LAB_03f4dc85;
      if ((pIVar8->klass->_1).element_class != *(Il2CppClass **)(TypeInfo_Vector3 + 0x40)) {
LAB_03f4dc95:
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pIVar8);
      }
      puVar10 = (undefined8 *)il2cpp_glue_022c7330(pIVar8);
      uVar15 = *puVar10;
      (__this->fields)._correctVelocity.fields.x = (float)(int)uVar15;
      (__this->fields)._correctVelocity.fields.y = (float)(int)((ulong)uVar15 >> 0x20);
      (__this->fields)._correctVelocity.fields.z = *(float *)(puVar10 + 1);
    }
  }
  pIVar8 = Photon_Pun_PhotonStream__ReceiveNext(stream,(MethodInfo *)0x0);
  uVar15 = TypeInfo_object;
  if (pIVar8 == (Il2CppObject *)0x0) {
    (__this->fields)._streamObjs = (System_Object_array *)0x0;
    lVar9 = 0;
  }
  else {
    pSVar12 = (System_Object_array *)il2cpp_runtime_glue(pIVar8,TypeInfo_object);
    if (pSVar12 == (System_Object_array *)0x0) {
LAB_03f4dc8a:
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pIVar8,uVar15);
    }
    (__this->fields)._streamObjs = pSVar12;
    uVar15 = TypeInfo_object;
    lVar9 = il2cpp_runtime_glue(pIVar8,TypeInfo_object);
    if (lVar9 == 0) goto LAB_03f4dc8a;
  }
  ppSVar13 = &(__this->fields)._streamObjs;
  il2cpp_runtime_glue(ppSVar13,lVar9);
  pSVar12 = *ppSVar13;
  if ((pSVar12 != (System_Object_array *)0x0) && (pSVar12->max_length != 0)) {
    pCVar4 = (__this->fields)._NetworkView_k__BackingField;
    if (pCVar4 == (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
LAB_03f4dc85:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    CustomLogic_CustomLogicNetworkViewBuiltin__OnNetworkStream(pCVar4,pSVar12,(MethodInfo *)0x0);
  }
  return;
}


// CustomLogic.CustomLogicPhotonSync$$Update
// il2cpp: void CustomLogic_CustomLogicPhotonSync__Update (CustomLogic_CustomLogicPhotonSync_o* __this, const MethodInfo* method);
// 0x3f4dda0

void CustomLogic_CustomLogicPhotonSync__Update
               (CustomLogic_CustomLogicPhotonSync_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Photon_Pun_PhotonView_o *pPVar3;
  Map_MapObject_o *pMVar4;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Quaternion_Fields b;
  bool_conflict bVar5;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Object_o *pUVar6;
  UnityEngine_Rigidbody_o *__this_02;
  MethodInfo *pMVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  UnityEngine_Vector3_o UVar11;
  UnityEngine_Vector3_o value;
  UnityEngine_Quaternion_o UVar12;
  float local_58;
  float fStack_54;
  float local_48;
  float fStack_44;
  
  if (DAT_05703e4c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05703e4c = '\x01';
  }
  pPVar3 = (__this->fields).PhotonView;
  if (pPVar3 != (Photon_Pun_PhotonView_o *)0x0) {
    if (((char)(pPVar3->fields)._IsMine_k__BackingField != '\0') ||
       ((char)(__this->fields)._inited == '\0')) {
      return;
    }
    pMVar4 = (__this->fields)._MapObject_k__BackingField;
    if (pMVar4 != (Map_MapObject_o *)0x0) {
      pUVar6 = (UnityEngine_Object_o *)(pMVar4->fields).GameObject;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar5 = UnityEngine_Object__op_Equality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        return;
      }
      if ((char)(__this->fields)._syncTransforms == '\0') {
        return;
      }
      pMVar4 = (__this->fields)._MapObject_k__BackingField;
      if (((pMVar4 != (Map_MapObject_o *)0x0) &&
          (__this_00 = (pMVar4->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0))
         && (__this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
            __this_01 != (UnityEngine_Transform_o *)0x0)) {
        UVar11 = UnityEngine_Transform__get_position(__this_01,(MethodInfo *)0x0);
        uVar1 = (__this->fields)._correctPosition.fields.x;
        uVar2 = (__this->fields)._correctPosition.fields.y;
        fVar10 = (__this->fields)._correctPosition.fields.z;
        fVar8 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        fVar8 = fVar8 * 5.0;
        fVar9 = 1.0;
        if (fVar8 <= 1.0) {
          fVar9 = fVar8;
        }
        fVar9 = (float)(-(uint)(0.0 <= fVar8) & (uint)fVar9);
        local_48 = UVar11.fields.x;
        fStack_44 = UVar11.fields.y;
        value.fields.y = fStack_44 + fVar9 * ((float)uVar2 - fStack_44);
        value.fields.x = local_48 + fVar9 * ((float)uVar1 - local_48);
        value.fields.z = UVar11.fields.z + (fVar10 - UVar11.fields.z) * fVar9;
        UnityEngine_Transform__set_position(__this_01,value,(MethodInfo *)0x0);
        UVar12 = UnityEngine_Transform__get_rotation(__this_01,(MethodInfo *)0x0);
        b = (__this->fields)._correctRotation.fields;
        fVar10 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        UVar12 = UnityEngine_Quaternion__Lerp(UVar12,b,fVar10 * 5.0,(MethodInfo *)0x0);
        pMVar7 = (MethodInfo *)0x0;
        UnityEngine_Transform__set_rotation(__this_01,UVar12,(MethodInfo *)0x0);
        if (*(char *)((long)&(__this->fields)._syncTransforms + 1) == '\0') {
          return;
        }
        pUVar6 = (UnityEngine_Object_o *)
                 CustomLogic_CustomLogicPhotonSync__get_Rigidbody(__this,pMVar7);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pMVar7 = (MethodInfo *)0x0;
        bVar5 = UnityEngine_Object__op_Inequality
                          (pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          return;
        }
        __this_02 = CustomLogic_CustomLogicPhotonSync__get_Rigidbody(__this,pMVar7);
        if (__this_02 != (UnityEngine_Rigidbody_o *)0x0) {
          UnityEngine_Rigidbody__set_velocity
                    (__this_02,(UnityEngine_Vector3_o)(__this->fields)._correctVelocity.fields,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhotonSync$$GetPosition
// il2cpp: UnityEngine_Vector3_o CustomLogic_CustomLogicPhotonSync__GetPosition (CustomLogic_CustomLogicPhotonSync_o* __this, const MethodInfo* method);
// 0x3f4d440

UnityEngine_Vector3_o
CustomLogic_CustomLogicPhotonSync__GetPosition
          (CustomLogic_CustomLogicPhotonSync_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  bool_conflict bVar2;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_Fields UVar3;
  
  if (DAT_05703e4d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05703e4d = '\x01';
  }
  pMVar1 = (__this->fields)._MapObject_k__BackingField;
  if (pMVar1 != (Map_MapObject_o *)0x0) {
    x = (UnityEngine_Object_o *)(pMVar1->fields).GameObject;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      if (DAT_056fdd15 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fdd15 = '\x01';
      }
      return (UnityEngine_Vector3_o)**(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8);
    }
    pMVar1 = (__this->fields)._MapObject_k__BackingField;
    if ((pMVar1 != (Map_MapObject_o *)0x0) &&
       (__this_00 = (pMVar1->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_Transform_o *)0x0) {
        UVar3 = (UnityEngine_Vector3_Fields)
                UnityEngine_Transform__get_position(__this_01,(MethodInfo *)0x0);
        return (UnityEngine_Vector3_o)UVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhotonSync$$GetRotation
// il2cpp: UnityEngine_Quaternion_o CustomLogic_CustomLogicPhotonSync__GetRotation (CustomLogic_CustomLogicPhotonSync_o* __this, const MethodInfo* method);
// 0x3f4d510

UnityEngine_Quaternion_o
CustomLogic_CustomLogicPhotonSync__GetRotation
          (CustomLogic_CustomLogicPhotonSync_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  bool_conflict bVar2;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Quaternion_Fields UVar3;
  
  if (DAT_05703e4e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05703e4e = '\x01';
  }
  pMVar1 = (__this->fields)._MapObject_k__BackingField;
  if (pMVar1 != (Map_MapObject_o *)0x0) {
    x = (UnityEngine_Object_o *)(pMVar1->fields).GameObject;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      if (DAT_056fde1e == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Quaternion);
        DAT_056fde1e = '\x01';
      }
      return (UnityEngine_Quaternion_o)**(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhotonSync$$GetVelocity
// il2cpp: UnityEngine_Vector3_o CustomLogic_CustomLogicPhotonSync__GetVelocity (CustomLogic_CustomLogicPhotonSync_o* __this, const MethodInfo* method);
// 0x3f4dcb0

UnityEngine_Vector3_o
CustomLogic_CustomLogicPhotonSync__GetVelocity
          (CustomLogic_CustomLogicPhotonSync_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  bool_conflict bVar2;
  UnityEngine_Rigidbody_o *__this_01;
  UnityEngine_Vector3_Fields UVar3;
  
  if (DAT_05703e4f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Rigidbody_GetComponent_Rigidbody);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05703e4f = '\x01';
  }
  pMVar1 = (__this->fields)._MapObject_k__BackingField;
  if (pMVar1 != (Map_MapObject_o *)0x0) {
    x = (UnityEngine_Object_o *)(pMVar1->fields).GameObject;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      if (DAT_056fdd15 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fdd15 = '\x01';
      }
      return (UnityEngine_Vector3_o)**(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8);
    }
    pMVar1 = (__this->fields)._MapObject_k__BackingField;
    if ((pMVar1 != (Map_MapObject_o *)0x0) &&
       (__this_00 = (pMVar1->fields).GameObject, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      __this_01 = (UnityEngine_Rigidbody_o *)
                  UnityEngine_GameObject__GetComponent<object>(__this_00,MethodInfo_Rigidbody_GetComponent_Rigidbody);
      if (__this_01 != (UnityEngine_Rigidbody_o *)0x0) {
        UVar3 = (UnityEngine_Vector3_Fields)
                UnityEngine_Rigidbody__get_velocity(__this_01,(MethodInfo *)0x0);
        return (UnityEngine_Vector3_o)UVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhotonSync$$Photon.Pun.IPunObservable.OnPhotonSerializeView
// il2cpp: void CustomLogic_CustomLogicPhotonSync__Photon_Pun_IPunObservable_OnPhotonSerializeView (CustomLogic_CustomLogicPhotonSync_o* __this, Photon_Pun_PhotonStream_o* stream, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x3f4dfc0

void CustomLogic_CustomLogicPhotonSync__Photon_Pun_IPunObservable_OnPhotonSerializeView
               (CustomLogic_CustomLogicPhotonSync_o *__this,Photon_Pun_PhotonStream_o *stream,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  
  vtable_dispatch = (__this->klass->vtable)._60_OnPhotonSerializeView.methodPtr;
  (*vtable_dispatch)
            (__this,stream,(__this->klass->vtable)._60_OnPhotonSerializeView.method,
             vtable_dispatch);
  return;
}


// CustomLogic.CustomLogicPhotonSync$$Transfer
// il2cpp: void CustomLogic_CustomLogicPhotonSync__Transfer (CustomLogic_CustomLogicPhotonSync_o* __this, CustomLogic_CustomLogicPlayerBuiltin_o* player, const MethodInfo* method);
// 0x3f4dfe0

void CustomLogic_CustomLogicPhotonSync__Transfer
               (CustomLogic_CustomLogicPhotonSync_o *__this,
               CustomLogic_CustomLogicPlayerBuiltin_o *player,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  Photon_Realtime_Player_o *pPVar2;
  Photon_Realtime_Player_o *pPVar3;
  
  if (DAT_05703e50 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    DAT_05703e50 = '\x01';
  }
  pPVar1 = (__this->fields).PhotonView;
  if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
    if ((char)(pPVar1->fields)._IsMine_k__BackingField == '\0') {
      return;
    }
    if (player != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
      pPVar2 = (player->fields).Player;
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_init_class();
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
        Photon_Pun_PhotonView__TransferOwnership
                  (pPVar1,(pPVar2->fields).actorNumber,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhotonSync$$Photon.Pun.IOnPhotonViewOwnerChange.OnOwnerChange
// il2cpp: void CustomLogic_CustomLogicPhotonSync__Photon_Pun_IOnPhotonViewOwnerChange_OnOwnerChange (CustomLogic_CustomLogicPhotonSync_o* __this, Photon_Realtime_Player_o* newOwner, Photon_Realtime_Player_o* previousOwner, const MethodInfo* method);
// 0x3f4e080

void CustomLogic_CustomLogicPhotonSync__Photon_Pun_IOnPhotonViewOwnerChange_OnOwnerChange
               (CustomLogic_CustomLogicPhotonSync_o *__this,Photon_Realtime_Player_o *newOwner,
               Photon_Realtime_Player_o *previousOwner,MethodInfo *method)

{
  CustomLogic_CustomLogicNetworkViewBuiltin_o *__this_00;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this_01;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this_02;
  
  if (DAT_05703e51 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicPlayerBuiltin);
    DAT_05703e51 = '\x01';
  }
  if (previousOwner == (Photon_Realtime_Player_o *)0x0) {
    __this_01 = (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0;
  }
  else {
    __this_01 = (CustomLogic_CustomLogicPlayerBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicPlayerBuiltin);
    CustomLogic_CustomLogicPlayerBuiltin___ctor(__this_01,previousOwner,(MethodInfo *)0x0);
  }
  __this_02 = (CustomLogic_CustomLogicPlayerBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicPlayerBuiltin);
  CustomLogic_CustomLogicPlayerBuiltin___ctor(__this_02,newOwner,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._NetworkView_k__BackingField;
  if (__this_00 != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
    CustomLogic_CustomLogicNetworkViewBuiltin__OnNetworkTransfer
              (__this_00,__this_01,__this_02,(MethodInfo *)0x0);
    return;
  }
  return;
}


// CustomLogic.CustomLogicPhotonSync$$OnPlayerLeftRoom
// il2cpp: void CustomLogic_CustomLogicPhotonSync__OnPlayerLeftRoom (CustomLogic_CustomLogicPhotonSync_o* __this, Photon_Realtime_Player_o* otherPlayer, const MethodInfo* method);
// 0x3f4e130

void CustomLogic_CustomLogicPhotonSync__OnPlayerLeftRoom
               (CustomLogic_CustomLogicPhotonSync_o *__this,Photon_Realtime_Player_o *otherPlayer,
               MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  bool_conflict bVar2;
  Photon_Realtime_Player_o *newOwner;
  
  if (DAT_05703e52 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    DAT_05703e52 = '\x01';
  }
  pPVar1 = (__this->fields).PhotonView;
  if (pPVar1 == (Photon_Pun_PhotonView_o *)0x0) {
LAB_03f4e1cf:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (((pPVar1->fields)._Owner_k__BackingField == otherPlayer) &&
     (*(char *)((long)&(__this->fields)._synced + 1) != '\0')) {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      pPVar1 = (__this->fields).PhotonView;
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_init_class();
      }
      newOwner = Photon_Pun_PhotonNetwork__get_MasterClient((MethodInfo *)0x0);
      if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__TransferOwnership(pPVar1,newOwner,(MethodInfo *)0x0);
        return;
      }
      goto LAB_03f4e1cf;
    }
  }
  return;
}


// CustomLogic.CustomLogicPhotonSync$$DestroyMe
// il2cpp: void CustomLogic_CustomLogicPhotonSync__DestroyMe (CustomLogic_CustomLogicPhotonSync_o* __this, const MethodInfo* method);
// 0x3f4e1e0

void CustomLogic_CustomLogicPhotonSync__DestroyMe
               (CustomLogic_CustomLogicPhotonSync_o *__this,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  UnityEngine_GameObject_o *targetGo;
  
  if (DAT_05703e53 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    DAT_05703e53 = '\x01';
  }
  pPVar1 = (__this->fields).PhotonView;
  if (pPVar1 == (Photon_Pun_PhotonView_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((char)(pPVar1->fields)._IsMine_k__BackingField == '\0') {
    return;
  }
  targetGo = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) {
    Photon_Pun_PhotonNetwork__Destroy(targetGo,(MethodInfo *)0x0);
    return;
  }
  il2cpp_init_class();
  Photon_Pun_PhotonNetwork__Destroy(targetGo,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPhotonSync$$OnDestroy
// il2cpp: void CustomLogic_CustomLogicPhotonSync__OnDestroy (CustomLogic_CustomLogicPhotonSync_o* __this, const MethodInfo* method);
// 0x3f4e260

void CustomLogic_CustomLogicPhotonSync__OnDestroy
               (CustomLogic_CustomLogicPhotonSync_o *__this,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  CustomLogic_CustomLogicMapObjectBuiltin_o *obj;
  
  if (DAT_05703e54 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicMapBuiltin);
    DAT_05703e54 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if (lVar2 != 0) {
    obj = (__this->fields)._CustomLogicMapObjectBuiltin_k__BackingField;
    if (*(int *)(TypeInfo_CustomLogicMapBuiltin + 0xe4) == 0) {
      il2cpp_init_class();
    }
    CustomLogic_CustomLogicMapBuiltin__DestroyMapObjectBuiltin
              ((Il2CppObject *)obj,1,(MethodInfo *)0x0);
    return;
  }
  return;
}


// CustomLogic.CustomLogicPhotonSync$$.ctor
// il2cpp: void CustomLogic_CustomLogicPhotonSync___ctor (CustomLogic_CustomLogicPhotonSync_o* __this, const MethodInfo* method);
// 0x3f4e320

void CustomLogic_CustomLogicPhotonSync___ctor
               (CustomLogic_CustomLogicPhotonSync_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  bool bVar7;
  
  *(undefined2 *)&(__this->fields)._syncTransforms = 0x101;
  if (DAT_056fdd15 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_056fdd15 = '\x01';
  }
  uVar2 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  fVar1 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  (__this->fields)._correctPosition.fields.x = (float)(int)uVar2;
  (__this->fields)._correctPosition.fields.y = (float)(int)((ulong)uVar2 >> 0x20);
  (__this->fields)._correctPosition.fields.z = fVar1;
  if (DAT_056fde1e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Quaternion);
    DAT_056fde1e = '\x01';
    bVar7 = DAT_056fdd15 == '\0';
    pfVar3 = *(float **)(TypeInfo_Quaternion + 0xb8);
    fVar1 = pfVar3[1];
    fVar4 = pfVar3[2];
    fVar5 = pfVar3[3];
    (__this->fields)._correctRotation.fields.x = *pfVar3;
    (__this->fields)._correctRotation.fields.y = fVar1;
    (__this->fields)._correctRotation.fields.z = fVar4;
    (__this->fields)._correctRotation.fields.w = fVar5;
    if (bVar7) {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
  }
  else {
    uVar2 = **(undefined8 **)(TypeInfo_Quaternion + 0xb8);
    uVar6 = (*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
    (__this->fields)._correctRotation.fields.x = (float)(int)uVar2;
    (__this->fields)._correctRotation.fields.y = (float)(int)((ulong)uVar2 >> 0x20);
    (__this->fields)._correctRotation.fields.z = (float)(int)uVar6;
    (__this->fields)._correctRotation.fields.w = (float)(int)((ulong)uVar6 >> 0x20);
  }
  uVar2 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  fVar1 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  (__this->fields)._correctVelocity.fields.x = (float)(int)uVar2;
  (__this->fields)._correctVelocity.fields.y = (float)(int)((ulong)uVar2 >> 0x20);
  (__this->fields)._correctVelocity.fields.z = fVar1;
  Photon_Pun_MonoBehaviourPunCallbacks___ctor
            ((Photon_Pun_MonoBehaviourPunCallbacks_o *)__this,(MethodInfo *)0x0);
  return;
}


