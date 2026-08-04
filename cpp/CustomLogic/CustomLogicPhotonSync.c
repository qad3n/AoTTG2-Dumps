// Type: CustomLogic.CustomLogicPhotonSync
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicPhotonSync.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Component/CustomLogicPhotonSync.cs
// --------------------------------

// CustomLogic.CustomLogicPhotonSync.<WaitAndFinishDynamicInit>d__45$$.ctor
// il2cpp: void CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45___ctor (CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4258240

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
// 0x4259920

void CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45__System_IDisposable_Dispose
               (CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45_o *__this,MethodInfo *method
               )

{
  return;
}


// CustomLogic.CustomLogicPhotonSync.<WaitAndFinishDynamicInit>d__45$$MoveNext
// il2cpp: bool CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45__MoveNext (CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45_o* __this, const MethodInfo* method);
// 0x4259930

bool_conflict
CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45__MoveNext
          (CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicPhotonSync_o *__this_00;
  long lVar1;
  undefined8 uVar2;
  MethodInfo *in_RCX;
  long lVar3;
  
  if (g_data_057adbc0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057adbc0 = '\x01';
  }
  if ((uint)(__this->fields).__1__state < 2) {
    __this_00 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      lVar1 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
      lVar3 = TypeInfo_CustomLogicManager;
    }
    else {
      lVar1 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
      lVar3 = TypeInfo_CustomLogicManager;
    }
    TypeInfo_CustomLogicManager = lVar3;
    if (lVar1 == 0) {
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      uVar2 = il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,0);
      (__this->fields).__1__state = 1;
      return (bool_conflict)CONCAT71((int7)((ulong)uVar2 >> 8),1);
    }
    if (__this_00 == (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      return (bool_conflict)*(undefined8 *)(lVar3 + 0x18);
    }
    CustomLogic_CustomLogicPhotonSync__CreateAndSetupObject
              (__this_00,(uint)(byte)(__this->fields).persistsOwnership,(__this->fields).csvScript,in_RCX);
  }
  return 0;
}


// CustomLogic.CustomLogicPhotonSync.<WaitAndFinishDynamicInit>d__45$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45__System_Collections_Generic_IEnumerator_System_Object__get_Current (CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45_o* __this, const MethodInfo* method);
// 0x42599e0

Il2CppObject *
CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicPhotonSync.<WaitAndFinishDynamicInit>d__45$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45__System_Collections_IEnumerator_Reset (CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45_o* __this, const MethodInfo* method);
// 0x42599f0

void CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45__System_Collections_IEnumerator_Reset
               (CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45_o *__this,MethodInfo *method
               )

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// CustomLogic.CustomLogicPhotonSync.<WaitAndFinishDynamicInit>d__45$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45__System_Collections_IEnumerator_get_Current (CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45_o* __this, const MethodInfo* method);
// 0x4259a30

Il2CppObject *
CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45__System_Collections_IEnumerator_get_Current
          (CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit_d__45_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicPhotonSync.<WaitAndFinishInit>d__46$$.ctor
// il2cpp: void CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46___ctor (CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4258260

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
// 0x4259a40

void CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46__System_IDisposable_Dispose
               (CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46_o *__this,MethodInfo *method)

{
  return;
}


// CustomLogic.CustomLogicPhotonSync.<WaitAndFinishInit>d__46$$MoveNext
// il2cpp: bool CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46__MoveNext (CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46_o* __this, const MethodInfo* method);
// 0x4259a50

bool_conflict
CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46__MoveNext
          (CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicPhotonSync_o *__this_00;
  bool_conflict bVar1;
  void *pvVar2;
  undefined8 uVar3;
  MethodInfo *method_00;
  System_Collections_Generic_Dictionary_int__object__o *__this_01;
  
  if (g_data_057adbc1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    g_data_057adbc1 = '\x01';
  }
  if (1 < (uint)(__this->fields).__1__state) {
    return 0;
  }
  __this_00 = (__this->fields).__4__this;
  (__this->fields).__1__state = -1;
  if (*(int *)((long)&TypeInfo_CustomLogicManager[2].fields._values + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pvVar2 = ((TypeInfo_CustomLogicManager[2].fields._entries)->obj).monitor;
    __this_01 = TypeInfo_CustomLogicManager;
  }
  else {
    pvVar2 = ((TypeInfo_CustomLogicManager[2].fields._entries)->obj).monitor;
    __this_01 = TypeInfo_CustomLogicManager;
  }
  TypeInfo_CustomLogicManager = __this_01;
  if (pvVar2 == (void *)0x0) {
label_04259b24:
    (__this->fields).__2__current = (Il2CppObject *)0x0;
    uVar3 = il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,0);
    (__this->fields).__1__state = 1;
    return (bool_conflict)CONCAT71((int7)((ulong)uVar3 >> 8),1);
  }
  if (*(int *)((long)&__this_01[2].fields._values + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pvVar2 = ((TypeInfo_CustomLogicManager[2].fields._entries)->obj).monitor;
    if (pvVar2 == (void *)0x0) goto label_04259b46;
  }
  __this_01 = *(System_Collections_Generic_Dictionary_int__object__o **)((long)pvVar2 + 0x28);
  if (__this_01 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                      (__this_01,(__this->fields).mapObjectId,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar1 == '\0') goto label_04259b24;
    if (__this_00 != (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
      CustomLogic_CustomLogicPhotonSync__FinishInit(__this_00,(__this->fields).mapObjectId,method_00);
      return 0;
    }
  }
label_04259b46:
  il2cpp_runtime_helper_022b2c90();
  return (bool_conflict)(__this_01->fields)._entries;
}


// CustomLogic.CustomLogicPhotonSync.<WaitAndFinishInit>d__46$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46__System_Collections_Generic_IEnumerator_System_Object__get_Current (CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46_o* __this, const MethodInfo* method);
// 0x4259b50

Il2CppObject *
CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicPhotonSync.<WaitAndFinishInit>d__46$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46__System_Collections_IEnumerator_Reset (CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46_o* __this, const MethodInfo* method);
// 0x4259b60

void CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46__System_Collections_IEnumerator_Reset
               (CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// CustomLogic.CustomLogicPhotonSync.<WaitAndFinishInit>d__46$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46__System_Collections_IEnumerator_get_Current (CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46_o* __this, const MethodInfo* method);
// 0x4259ba0

Il2CppObject *
CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46__System_Collections_IEnumerator_get_Current
          (CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit_d__46_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicPhotonSync.<WaitAndFinishSync>d__54$$.ctor
// il2cpp: void CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54___ctor (CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4258bf0

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
// 0x4259bb0

void CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54__System_IDisposable_Dispose
               (CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54_o *__this,MethodInfo *method)

{
  return;
}


// CustomLogic.CustomLogicPhotonSync.<WaitAndFinishSync>d__54$$MoveNext
// il2cpp: bool CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54__MoveNext (CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54_o* __this, const MethodInfo* method);
// 0x4259bc0

bool_conflict
CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54__MoveNext
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
      il2cpp_runtime_helper_022b2c90();
      return (bool_conflict)(__this->fields).__2__current;
    }
    if ((char)(pCVar1->fields)._inited == '\0') {
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      uVar5 = il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,0);
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
// 0x4259c20

Il2CppObject *
CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicPhotonSync.<WaitAndFinishSync>d__54$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54__System_Collections_IEnumerator_Reset (CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54_o* __this, const MethodInfo* method);
// 0x4259c30

void CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54__System_Collections_IEnumerator_Reset
               (CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// CustomLogic.CustomLogicPhotonSync.<WaitAndFinishSync>d__54$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54__System_Collections_IEnumerator_get_Current (CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54_o* __this, const MethodInfo* method);
// 0x4259c70

Il2CppObject *
CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54__System_Collections_IEnumerator_get_Current
          (CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync_d__54_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomLogic.CustomLogicPhotonSync$$get_SyncTransforms
// il2cpp: bool CustomLogic_CustomLogicPhotonSync__get_SyncTransforms (CustomLogic_CustomLogicPhotonSync_o* __this, const MethodInfo* method);
// 0x4257130

bool_conflict
CustomLogic_CustomLogicPhotonSync__get_SyncTransforms
          (CustomLogic_CustomLogicPhotonSync_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)(__this->fields)._syncTransforms);
}


// CustomLogic.CustomLogicPhotonSync$$set_SyncTransforms
// il2cpp: void CustomLogic_CustomLogicPhotonSync__set_SyncTransforms (CustomLogic_CustomLogicPhotonSync_o* __this, bool value, const MethodInfo* method);
// 0x4257140

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
  il2cpp_runtime_helper_022b2c90();
  return;
}


// CustomLogic.CustomLogicPhotonSync$$get_SyncVelocity
// il2cpp: bool CustomLogic_CustomLogicPhotonSync__get_SyncVelocity (CustomLogic_CustomLogicPhotonSync_o* __this, const MethodInfo* method);
// 0x4257160

bool_conflict
CustomLogic_CustomLogicPhotonSync__get_SyncVelocity
          (CustomLogic_CustomLogicPhotonSync_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),*(undefined1 *)((long)&(__this->fields)._syncTransforms + 1));
}


// CustomLogic.CustomLogicPhotonSync$$set_SyncVelocity
// il2cpp: void CustomLogic_CustomLogicPhotonSync__set_SyncVelocity (CustomLogic_CustomLogicPhotonSync_o* __this, bool value, const MethodInfo* method);
// 0x4257170

void CustomLogic_CustomLogicPhotonSync__set_SyncVelocity
               (CustomLogic_CustomLogicPhotonSync_o *__this,bool_conflict value,MethodInfo *method)

{
  UnityEngine_Rigidbody_o **ppUVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  UnityEngine_Object_o *pUVar3;
  Map_MapObject_o *pMVar4;
  UnityEngine_GameObject_o *__this_00;
  bool_conflict bVar5;
  UnityEngine_Rigidbody_o *pUVar6;
  
  pPVar2 = (__this->fields).PhotonView;
  if (pPVar2 != (Photon_Pun_PhotonView_o *)0x0) {
    if ((char)(pPVar2->fields)._IsMine_k__BackingField != '\0') {
      *(char *)((long)&(__this->fields)._syncTransforms + 1) = (char)value;
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adba5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Rigidbody_GetComponent_Rigidbody);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adba5 = '\x01';
  }
  pUVar3 = (UnityEngine_Object_o *)(__this->fields)._rigidbody;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppUVar1 = &(__this->fields)._rigidbody;
  bVar5 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((char)bVar5 != '\0') &&
     (pMVar4 = (__this->fields)._MapObject_k__BackingField, pMVar4 != (Map_MapObject_o *)0x0)) {
    pUVar3 = (UnityEngine_Object_o *)(pMVar4->fields).GameObject;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      pMVar4 = (__this->fields)._MapObject_k__BackingField;
      if ((pMVar4 == (Map_MapObject_o *)0x0) ||
         (__this_00 = (pMVar4->fields).GameObject, __this_00 == (UnityEngine_GameObject_o *)0x0)) {
        il2cpp_runtime_helper_022b2c90();
        return;
      }
      pUVar6 = (UnityEngine_Rigidbody_o *)UnityEngine_GameObject__GetComponent_object_(__this_00,MethodInfo_Rigidbody_GetComponent_Rigidbody)
      ;
      *ppUVar1 = pUVar6;
      il2cpp_runtime_helper_022b4080(ppUVar1,pUVar6);
    }
  }
  return;
}


// CustomLogic.CustomLogicPhotonSync$$get_Rigidbody
// il2cpp: UnityEngine_Rigidbody_o* CustomLogic_CustomLogicPhotonSync__get_Rigidbody (CustomLogic_CustomLogicPhotonSync_o* __this, const MethodInfo* method);
// 0x4257190

UnityEngine_Rigidbody_o *
CustomLogic_CustomLogicPhotonSync__get_Rigidbody
          (CustomLogic_CustomLogicPhotonSync_o *__this,MethodInfo *method)

{
  UnityEngine_Rigidbody_o **ppUVar1;
  Map_MapObject_o *pMVar2;
  UnityEngine_GameObject_o *__this_00;
  bool_conflict bVar3;
  UnityEngine_Rigidbody_o *pUVar4;
  UnityEngine_Object_o *pUVar5;
  
  if (g_data_057adba5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Rigidbody_GetComponent_Rigidbody);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adba5 = '\x01';
  }
  pUVar5 = (UnityEngine_Object_o *)(__this->fields)._rigidbody;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppUVar1 = &(__this->fields)._rigidbody;
  bVar3 = UnityEngine_Object__op_Equality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((char)bVar3 != '\0') &&
     (pMVar2 = (__this->fields)._MapObject_k__BackingField, pMVar2 != (Map_MapObject_o *)0x0)) {
    pUVar5 = (UnityEngine_Object_o *)(pMVar2->fields).GameObject;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = UnityEngine_Object__op_Inequality(pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      pMVar2 = (__this->fields)._MapObject_k__BackingField;
      if ((pMVar2 == (Map_MapObject_o *)0x0) ||
         (__this_00 = (pMVar2->fields).GameObject, pUVar5 = (UnityEngine_Object_o *)0x0,
         __this_00 == (UnityEngine_GameObject_o *)0x0)) {
        il2cpp_runtime_helper_022b2c90();
        return (UnityEngine_Rigidbody_o *)pUVar5[3].klass;
      }
      pUVar4 = (UnityEngine_Rigidbody_o *)UnityEngine_GameObject__GetComponent_object_(__this_00,MethodInfo_Rigidbody_GetComponent_Rigidbody)
      ;
      *ppUVar1 = pUVar4;
      il2cpp_runtime_helper_022b4080(ppUVar1,pUVar4);
    }
  }
  return *ppUVar1;
}


// CustomLogic.CustomLogicPhotonSync$$get_MapObject
// il2cpp: Map_MapObject_o* CustomLogic_CustomLogicPhotonSync__get_MapObject (CustomLogic_CustomLogicPhotonSync_o* __this, const MethodInfo* method);
// 0x4257270

Map_MapObject_o *
CustomLogic_CustomLogicPhotonSync__get_MapObject
          (CustomLogic_CustomLogicPhotonSync_o *__this,MethodInfo *method)

{
  return (__this->fields)._MapObject_k__BackingField;
}


// CustomLogic.CustomLogicPhotonSync$$set_MapObject
// il2cpp: void CustomLogic_CustomLogicPhotonSync__set_MapObject (CustomLogic_CustomLogicPhotonSync_o* __this, Map_MapObject_o* value, const MethodInfo* method);
// 0x4257280

void CustomLogic_CustomLogicPhotonSync__set_MapObject
               (CustomLogic_CustomLogicPhotonSync_o *__this,Map_MapObject_o *value,MethodInfo *method)

{
  (__this->fields)._MapObject_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._MapObject_k__BackingField);
  return;
}


// CustomLogic.CustomLogicPhotonSync$$get_CustomLogicMapObjectBuiltin
// il2cpp: CustomLogic_CustomLogicMapObjectBuiltin_o* CustomLogic_CustomLogicPhotonSync__get_CustomLogicMapObjectBuiltin (CustomLogic_CustomLogicPhotonSync_o* __this, const MethodInfo* method);
// 0x4257290

CustomLogic_CustomLogicMapObjectBuiltin_o *
CustomLogic_CustomLogicPhotonSync__get_CustomLogicMapObjectBuiltin
          (CustomLogic_CustomLogicPhotonSync_o *__this,MethodInfo *method)

{
  return (__this->fields)._CustomLogicMapObjectBuiltin_k__BackingField;
}


// CustomLogic.CustomLogicPhotonSync$$set_CustomLogicMapObjectBuiltin
// il2cpp: void CustomLogic_CustomLogicPhotonSync__set_CustomLogicMapObjectBuiltin (CustomLogic_CustomLogicPhotonSync_o* __this, CustomLogic_CustomLogicMapObjectBuiltin_o* value, const MethodInfo* method);
// 0x42572a0

void CustomLogic_CustomLogicPhotonSync__set_CustomLogicMapObjectBuiltin
               (CustomLogic_CustomLogicPhotonSync_o *__this,CustomLogic_CustomLogicMapObjectBuiltin_o *value,
               MethodInfo *method)

{
  (__this->fields)._CustomLogicMapObjectBuiltin_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._CustomLogicMapObjectBuiltin_k__BackingField);
  return;
}


// CustomLogic.CustomLogicPhotonSync$$get_NetworkView
// il2cpp: CustomLogic_CustomLogicNetworkViewBuiltin_o* CustomLogic_CustomLogicPhotonSync__get_NetworkView (CustomLogic_CustomLogicPhotonSync_o* __this, const MethodInfo* method);
// 0x42572b0

CustomLogic_CustomLogicNetworkViewBuiltin_o *
CustomLogic_CustomLogicPhotonSync__get_NetworkView
          (CustomLogic_CustomLogicPhotonSync_o *__this,MethodInfo *method)

{
  return (__this->fields)._NetworkView_k__BackingField;
}


// CustomLogic.CustomLogicPhotonSync$$set_NetworkView
// il2cpp: void CustomLogic_CustomLogicPhotonSync__set_NetworkView (CustomLogic_CustomLogicPhotonSync_o* __this, CustomLogic_CustomLogicNetworkViewBuiltin_o* value, const MethodInfo* method);
// 0x42572c0

void CustomLogic_CustomLogicPhotonSync__set_NetworkView
               (CustomLogic_CustomLogicPhotonSync_o *__this,CustomLogic_CustomLogicNetworkViewBuiltin_o *value
               ,MethodInfo *method)

{
  (__this->fields)._NetworkView_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._NetworkView_k__BackingField);
  return;
}


// CustomLogic.CustomLogicPhotonSync$$get_SmoothingDelay
// il2cpp: float CustomLogic_CustomLogicPhotonSync__get_SmoothingDelay (CustomLogic_CustomLogicPhotonSync_o* __this, const MethodInfo* method);
// 0x42572d0

float CustomLogic_CustomLogicPhotonSync__get_SmoothingDelay
                (CustomLogic_CustomLogicPhotonSync_o *__this,MethodInfo *method)

{
  return 5.0;
}


// CustomLogic.CustomLogicPhotonSync$$Awake
// il2cpp: void CustomLogic_CustomLogicPhotonSync__Awake (CustomLogic_CustomLogicPhotonSync_o* __this, const MethodInfo* method);
// 0x42572e0

void CustomLogic_CustomLogicPhotonSync__Awake(CustomLogic_CustomLogicPhotonSync_o *__this,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  
  pPVar1 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  (__this->fields).PhotonView = pPVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).PhotonView,pPVar1);
  return;
}


// CustomLogic.CustomLogicPhotonSync$$OnEnable
// il2cpp: void CustomLogic_CustomLogicPhotonSync__OnEnable (CustomLogic_CustomLogicPhotonSync_o* __this, const MethodInfo* method);
// 0x4257300

void CustomLogic_CustomLogicPhotonSync__OnEnable
               (CustomLogic_CustomLogicPhotonSync_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o **ppSVar1;
  int iVar2;
  UnityEngine_GameObject_o *__this_00;
  void *pvVar3;
  System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *pSVar4;
  CustomLogic_CustomLogicStartAst_o *pCVar5;
  bool_conflict bVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  Il2CppObject *pIVar10;
  UnityEngine_Object_o *x;
  CustomLogic_CustomLogicPhotonSync_o *__this_01;
  System_Object_array *pSVar11;
  Il2CppObject *pIVar12;
  long lVar13;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar14;
  Photon_Pun_PhotonView_o *pPVar15;
  System_String_array *value;
  System_String_o *pSVar16;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *__this_02;
  Map_MapObject_o *mapObject;
  CustomLogic_CustomLogicNetworkViewBuiltin_o *pCVar17;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar18;
  UnityEngine_Transform_o *__this_03;
  Il2CppClass *pIVar19;
  undefined1 extraout_DL;
  System_String_o *value_00;
  void *extraout_RDX;
  Il2CppClass *extraout_RDX_00;
  uint uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  int32_t key;
  float key_00;
  float fVar23;
  undefined4 uVar24;
  Map_MapObject_o *pMVar25;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar26;
  MethodInfo **ppMVar27;
  System_Collections_Generic_Dictionary_int__object__o *pSVar28;
  Il2CppClass *pIVar29;
  Il2CppClass *pIVar30;
  UnityEngine_Quaternion_o UVar31;
  UnityEngine_Vector3_o UVar32;
  undefined1 auVar33 [16];
  long in_stack_00000008;
  undefined8 uStack_108;
  Il2CppObject *pIStack_100;
  Photon_Pun_PhotonView_o *pPStack_f8;
  System_String_o *pSStack_f0;
  CustomLogic_CustomLogicPhotonSync_o *pCStack_e8;
  ulong uStack_e0;
  System_Object_array *pSStack_d8;
  undefined8 uStack_d0;
  Il2CppObject *pIStack_c8;
  Il2CppClass *pIStack_c0;
  
  if (g_data_057adba6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    g_data_057adba6 = '\x01';
  }
  pPVar15 = (__this->fields).PhotonView;
  if (pPVar15 != (Photon_Pun_PhotonView_o *)0x0) {
    Photon_Pun_PhotonView__AddCallbackTarget
              (pPVar15,(Photon_Pun_IPhotonViewCallback_o *)__this,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) {
      Photon_Pun_PhotonNetwork__AddCallbackTarget((Il2CppObject *)__this,(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_02337ed0();
    Photon_Pun_PhotonNetwork__AddCallbackTarget((Il2CppObject *)__this,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adba7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    g_data_057adba7 = '\x01';
  }
  pSVar11 = (pPVar15->fields).lastOnSerializeDataReceived;
  if (pSVar11 != (System_Object_array *)0x0) {
    Photon_Pun_PhotonView__RemoveCallbackTarget
              ((Photon_Pun_PhotonView_o *)pSVar11,(Photon_Pun_IPhotonViewCallback_o *)pPVar15,
               (MethodInfo *)0x0);
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) {
      Photon_Pun_PhotonNetwork__RemoveCallbackTarget((Il2CppObject *)pPVar15,(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_02337ed0();
    Photon_Pun_PhotonNetwork__RemoveCallbackTarget((Il2CppObject *)pPVar15,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  ppMVar27 = (MethodInfo **)pSVar11;
  if (g_data_057adba8 == '\0') {
    ppMVar27 = &TypeInfo_SpawnIntent;
    il2cpp_runtime_helper_023445d0();
    g_data_057adba8 = '\x01';
  }
  if ((in_stack_00000008 == 0) || (lVar13 = *(long *)(in_stack_00000008 + 0x28), lVar13 == 0)) {
label_042574cb:
    il2cpp_runtime_helper_022b2c90();
label_042574d0:
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    if (*(int *)(lVar13 + 0x18) == 0) goto label_042574d0;
    ppMVar27 = *(MethodInfo ***)(lVar13 + 0x20);
    if ((System_Object_array *)ppMVar27 == (System_Object_array *)0x0) goto label_042574cb;
    method = TypeInfo_SpawnIntent;
    if ((((((System_Object_array *)ppMVar27)->obj).klass)->_1).element_class ==
        (TypeInfo_SpawnIntent->field8_0x40).genericMethod) {
      piVar7 = (int *)il2cpp_runtime_helper_02305440();
      iVar2 = *piVar7;
      *(int *)((long)pSVar11->m_Items + 0x7c) = iVar2;
      if (iVar2 != 1) {
        return;
      }
      if (*(uint *)(lVar13 + 0x18) < 2) goto label_042574d0;
      ppMVar27 = *(MethodInfo ***)(lVar13 + 0x28);
      if ((System_Object_array *)ppMVar27 == (System_Object_array *)0x0) goto label_042574cb;
      method = g_data_057b9bb8;
      if ((((((System_Object_array *)ppMVar27)->obj).klass)->_1).element_class ==
          (g_data_057b9bb8->field8_0x40).genericMethod) {
        puVar8 = (undefined4 *)il2cpp_runtime_helper_02305440();
        *(undefined4 *)(pSVar11->m_Items + 3) = *puVar8;
        if (*(uint *)(lVar13 + 0x18) < 3) goto label_042574d0;
        ppMVar27 = *(MethodInfo ***)(lVar13 + 0x30);
        if ((System_Object_array *)ppMVar27 == (System_Object_array *)0x0) goto label_042574cb;
        method = g_data_057b9b98;
        if ((((((System_Object_array *)ppMVar27)->obj).klass)->_1).element_class ==
            (g_data_057b9b98->field8_0x40).genericMethod) {
          puVar9 = (undefined1 *)il2cpp_runtime_helper_02305440();
          *(undefined1 *)((long)pSVar11->m_Items + 9) = *puVar9;
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  pIVar30 = (Il2CppClass *)((ulong)method & 0xffffffff);
  if (g_data_057adba9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&"InitRPC");
    g_data_057adba9 = '\x01';
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) goto label_0425756f;
label_04257511:
    pSVar28 = (System_Collections_Generic_Dictionary_int__object__o *)**(long **)(TypeInfo_MapLoader + 0xb8);
    if (pSVar28 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_0425769f;
label_0425758a:
    pIVar10 = System_Collections_Generic_Dictionary_int__object___get_Item
                        (pSVar28,(int32_t)method,MethodInfo_MapObject_get_Item);
    ((System_Object_array *)ppMVar27)->m_Items[5] = pIVar10;
    il2cpp_runtime_helper_022b4080(((System_Object_array *)ppMVar27)->m_Items + 5,pIVar10);
    pPVar15 = (Photon_Pun_PhotonView_o *)((System_Object_array *)ppMVar27)->m_Items[4];
    pSVar11 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,2);
    pIVar30 = (Il2CppClass *)&g_data_057b9b70;
    pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
    if (pSVar11 == (System_Object_array *)0x0) goto label_0425769f;
    if ((pIVar10 == (Il2CppObject *)0x0) || (lVar13 = il2cpp_runtime_helper_023051f0(pIVar10), lVar13 != 0)) {
      if ((int)pSVar11->max_length != 0) {
        pSVar11->m_Items[0] = pIVar10;
        il2cpp_runtime_helper_022b4080(pSVar11->m_Items,pIVar10);
        pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98);
        if ((pIVar10 != (Il2CppObject *)0x0) && (lVar13 = il2cpp_runtime_helper_023051f0(pIVar10), lVar13 == 0))
        goto label_042576a9;
        if (1 < (uint)pSVar11->max_length) {
          pSVar11->m_Items[1] = pIVar10;
          il2cpp_runtime_helper_022b4080(pSVar11->m_Items + 1);
          if (pPVar15 != (Photon_Pun_PhotonView_o *)0x0) {
            Photon_Pun_PhotonView__RPC(pPVar15,"InitRPC",3,pSVar11,(MethodInfo *)0x0);
            return;
          }
          goto label_0425769f;
        }
      }
      goto label_042576a4;
    }
  }
  else {
    if (*(int *)(TypeInfo_MapLoader + 0xe4) != 0) goto label_04257511;
label_0425756f:
    il2cpp_runtime_helper_02337ed0();
    pSVar28 = (System_Collections_Generic_Dictionary_int__object__o *)**(long **)(TypeInfo_MapLoader + 0xb8);
    if (pSVar28 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_0425758a;
label_0425769f:
    il2cpp_runtime_helper_022b2c90();
label_042576a4:
    il2cpp_runtime_helper_022b2ca0();
  }
label_042576a9:
  pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_0231b270();
  key = 0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057adbaa == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Rigidbody_GetComponent_Rigidbody);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"InitRPC");
    g_data_057adbaa = '\x01';
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) goto label_0425776a;
label_042576ef:
    pSVar28 = (System_Collections_Generic_Dictionary_int__object__o *)**(long **)(TypeInfo_MapLoader + 0xb8);
    if (pSVar28 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_042578ec;
label_04257786:
    pIVar12 = System_Collections_Generic_Dictionary_int__object___get_Item(pSVar28,key,MethodInfo_MapObject_get_Item);
    pIVar10[4].monitor = pIVar12;
    il2cpp_runtime_helper_022b4080(&pIVar10[4].monitor);
    if ((pIVar10[4].monitor == (void *)0x0) ||
       (__this_00 = *(UnityEngine_GameObject_o **)((long)pIVar10[4].monitor + 0x18),
       __this_00 == (UnityEngine_GameObject_o *)0x0)) goto label_042578ec;
    x = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(__this_00,MethodInfo_Rigidbody_GetComponent_Rigidbody);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pIVar30 = pIVar10[4].klass;
    pSVar11 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,2);
    pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
    if (pSVar11 == (System_Object_array *)0x0) goto label_042578ec;
    pIVar10 = pIVar12;
    if ((pIVar12 == (Il2CppObject *)0x0) || (lVar13 = il2cpp_runtime_helper_023051f0(pIVar12), lVar13 != 0)) {
      if ((int)pSVar11->max_length != 0) {
        pSVar11->m_Items[0] = pIVar12;
        il2cpp_runtime_helper_022b4080(pSVar11->m_Items,pIVar12);
        pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98);
        if ((pIVar10 != (Il2CppObject *)0x0) && (lVar13 = il2cpp_runtime_helper_023051f0(pIVar10), lVar13 == 0))
        goto label_042578f6;
        if (1 < (uint)pSVar11->max_length) {
          pSVar11->m_Items[1] = pIVar10;
          il2cpp_runtime_helper_022b4080(pSVar11->m_Items + 1);
          if (pIVar30 != (Il2CppClass *)0x0) {
            Photon_Pun_PhotonView__RPC
                      ((Photon_Pun_PhotonView_o *)pIVar30,"InitRPC",3,pSVar11,(MethodInfo *)0x0);
            return;
          }
          goto label_042578ec;
        }
      }
      goto label_042578f1;
    }
  }
  else {
    if (*(int *)(TypeInfo_MapLoader + 0xe4) != 0) goto label_042576ef;
label_0425776a:
    il2cpp_runtime_helper_02337ed0();
    pSVar28 = (System_Collections_Generic_Dictionary_int__object__o *)**(long **)(TypeInfo_MapLoader + 0xb8);
    if (pSVar28 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_04257786;
label_042578ec:
    il2cpp_runtime_helper_022b2c90();
label_042578f1:
    il2cpp_runtime_helper_022b2ca0();
  }
label_042578f6:
  __this_01 = (CustomLogic_CustomLogicPhotonSync_o *)il2cpp_runtime_helper_0231b270();
  uVar20 = 0;
  auVar33 = il2cpp_runtime_helper_022b2b10();
  pSVar16 = auVar33._8_8_;
  uStack_d0 = auVar33._0_8_;
  pIStack_c8 = pIVar10;
  pIStack_c0 = pIVar30;
  if (g_data_057adbab == '\0') {
    pSStack_d8 = (System_Object_array *)0x4257939;
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    pSStack_d8 = (System_Object_array *)0x4257945;
    il2cpp_runtime_helper_023445d0(&"InitDynamicRPC");
    g_data_057adbab = '\x01';
  }
  pPVar15 = (__this_01->fields).PhotonView;
  pSStack_d8 = (System_Object_array *)0x4257964;
  pSVar11 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,2);
  uStack_d0 = CONCAT17((char)uVar20,(undefined7)uStack_d0);
  pSStack_d8 = (System_Object_array *)0x4257981;
  pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98);
  if (pSVar11 == (System_Object_array *)0x0) {
label_04257a3d:
    pIVar12 = pIVar10;
    pSStack_d8 = (System_Object_array *)0x4257a42;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (pIVar12 == (Il2CppObject *)0x0) {
label_042579ab:
      pIVar10 = pIVar12;
      if ((int)pSVar11->max_length != 0) {
        pSVar11->m_Items[0] = pIVar12;
        pSStack_d8 = (System_Object_array *)0x42579c5;
        il2cpp_runtime_helper_022b4080(pSVar11->m_Items);
        if (pSVar16 != (System_String_o *)0x0) {
          pSStack_d8 = (System_Object_array *)0x42579da;
          lVar13 = il2cpp_runtime_helper_023051f0(pSVar16);
          if (lVar13 == 0) goto label_04257a42;
        }
        if (1 < (uint)pSVar11->max_length) {
          pSVar11->m_Items[1] = (Il2CppObject *)pSVar16;
          pSStack_d8 = (System_Object_array *)0x42579f8;
          il2cpp_runtime_helper_022b4080(pSVar11->m_Items + 1);
          if (pPVar15 != (Photon_Pun_PhotonView_o *)0x0) {
            pSStack_d8 = (System_Object_array *)0x4257a1a;
            Photon_Pun_PhotonView__RPC(pPVar15,"InitDynamicRPC",4,pSVar11,(MethodInfo *)0x0);
            pSStack_d8 = (System_Object_array *)0x4257a29;
            CustomLogic_CustomLogicPhotonSync__CreateAndSetupObject
                      (__this_01,uVar20 & 0xff,pSVar16,(MethodInfo *)pSVar11);
            return;
          }
          goto label_04257a3d;
        }
      }
      pSStack_d8 = (System_Object_array *)0x4257a3d;
      il2cpp_runtime_helper_022b2ca0();
      goto label_04257a3d;
    }
    pSStack_d8 = (System_Object_array *)0x42579a2;
    lVar13 = il2cpp_runtime_helper_023051f0(pIVar12);
    if (lVar13 != 0) goto label_042579ab;
  }
label_04257a42:
  pSStack_d8 = (System_Object_array *)0x4257a47;
  pSVar14 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)il2cpp_runtime_helper_0231b270();
  uVar21 = 0;
  pSStack_d8 = (System_Object_array *)0x4257a51;
  auVar33 = il2cpp_runtime_helper_022b2b10();
  value_00 = auVar33._8_8_;
  uStack_108 = auVar33._0_8_;
  pIStack_100 = pIVar12;
  pPStack_f8 = pPVar15;
  pSStack_f0 = pSVar16;
  pCStack_e8 = __this_01;
  uStack_e0 = (ulong)uVar20;
  pSStack_d8 = pSVar11;
  if (g_data_057adbac == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicMapObjectBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicNetworkViewBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptSceneObject);
    il2cpp_runtime_helper_023445d0(&"PhotonSync: MapObject for id {0} already exists, overwriting.");
    il2cpp_runtime_helper_023445d0(&"PhotonSync: NetworkView for id {0} already exists, overwriting.");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057adbac = '\x01';
  }
  bVar6 = System_String__IsNullOrEmpty(value_00,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return;
  }
  *(undefined1 *)((long)&pSVar14->m_Items[5].fields.hashCode + 1) = uVar21;
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar20 = *(uint *)(*(long *)(TypeInfo_MapLoader + 0xb8) + 200);
  __this_02 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)(ulong)uVar20;
  iVar2 = *(int *)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0xcc);
  key_00 = 0.0;
  pSVar26 = pSVar14;
  pPVar15 = Photon_Pun_MonoBehaviourPun__get_photonView
                      ((Photon_Pun_MonoBehaviourPun_o *)pSVar14,(MethodInfo *)0x0);
  if (pPVar15 == (Photon_Pun_PhotonView_o *)0x0) goto label_04257fa3;
  uVar20 = (uVar20 - iVar2) - (pPVar15->fields).viewIdField;
  __this_02 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)(ulong)uVar20;
  pSVar14->m_Items[1].fields.hashCode = uVar20;
  if (value_00 == (System_String_o *)0x0) goto label_04257fa3;
  value = System_String__Split(value_00,10,0,(MethodInfo *)0x0);
  pSVar16 = System_String__Join("",value,(MethodInfo *)0x0);
  __this_02 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
              il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptSceneObject);
  key_00 = 0.0;
  pSVar26 = __this_02;
  Map_MapScriptSceneObject___ctor((Map_MapScriptSceneObject_o *)__this_02,(MethodInfo *)0x0);
  if (__this_02 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_04257fa3;
  pIVar30 = (__this_02->obj).klass;
  (*pIVar30->vtable[9].methodPtr)(__this_02,pSVar16,pIVar30->vtable[9].method);
  __this_02->m_Items[0].fields.hashCode = pSVar14->m_Items[1].fields.hashCode;
  __this_02->m_Items[0].fields.next = 0;
  *(undefined1 *)((long)&__this_02->m_Items[0].fields.key + 3) = 1;
  key_00 = 0.0;
  pSVar26 = __this_02;
  mapObject = Map_MapLoader__LoadObject((Map_MapScriptBaseObject_o *)__this_02,0,(MethodInfo *)0x0);
  if (mapObject == (Map_MapObject_o *)0x0) goto label_04257fa3;
  *(undefined1 *)&(mapObject->fields).RuntimeCreated = 1;
  Map_MapLoader__SetParent_3fadd50(mapObject,(MethodInfo *)0x0);
  pCVar17 = (CustomLogic_CustomLogicNetworkViewBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicNetworkViewBuiltin);
  CustomLogic_CustomLogicNetworkViewBuiltin___ctor(pCVar17,mapObject,(MethodInfo *)0x0);
  pSVar14->m_Items[2].fields.key = (Il2CppObject *)pCVar17;
  il2cpp_runtime_helper_022b4080(&pSVar14->m_Items[2].fields.key,pCVar17);
  __this_02 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
              il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicMapObjectBuiltin);
  CustomLogic_CustomLogicMapObjectBuiltin___ctor
            ((CustomLogic_CustomLogicMapObjectBuiltin_o *)__this_02,mapObject,(MethodInfo *)0x0);
  *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)&pSVar14->m_Items[2].fields = __this_02
  ;
  il2cpp_runtime_helper_022b4080(pSVar14->m_Items + 2,__this_02);
  ppSVar1 = (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o **)
            &pSVar14->m_Items[1].fields.value;
  pSVar14->m_Items[1].fields.value = (Il2CppObject *)mapObject;
  pMVar25 = mapObject;
  il2cpp_runtime_helper_022b4080(ppSVar1);
  key_00 = SUB84(pMVar25,0);
  if (TypeInfo_CustomLogicManager->m_Items[8].fields.next == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pvVar3 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
  pSVar26 = TypeInfo_CustomLogicManager;
  if (pvVar3 == (void *)0x0) goto label_04257fa3;
  pSVar28 = *(System_Collections_Generic_Dictionary_int__object__o **)((long)pvVar3 + 0x38);
  pSVar26 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
  if (pSVar28 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_04257fa3;
  key_00 = (float)pSVar14->m_Items[1].fields.hashCode;
  bVar6 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                    (pSVar28,(int32_t)key_00,MethodInfo_Boolean_ContainsKey);
  if ((char)bVar6 == '\0') {
    if (TypeInfo_CustomLogicManager->m_Items[8].fields.next != 0) goto label_04257d09;
label_04257f00:
    il2cpp_runtime_helper_02337ed0();
    pvVar3 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
  }
  else {
    uStack_108 = CONCAT44(pSVar14->m_Items[1].fields.hashCode,(undefined4)uStack_108);
    pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_108 + 4);
    __this_02 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                System_String__Format("PhotonSync: MapObject for id {0} already exists, overwriting.",pIVar10,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    key_00 = 0.0;
    UnityEngine_Debug__LogWarning((Il2CppObject *)__this_02,(MethodInfo *)0x0);
    if (TypeInfo_CustomLogicManager->m_Items[8].fields.next == 0) goto label_04257f00;
label_04257d09:
    pvVar3 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
  }
  pSVar26 = TypeInfo_CustomLogicManager;
  if ((pvVar3 == (void *)0x0) ||
     (pSVar26 = *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)((long)pvVar3 + 0x38),
     pSVar26 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)) goto label_04257fa3;
  key_00 = (float)pSVar14->m_Items[1].fields.hashCode;
  System_Collections_Generic_Dictionary_int__object___set_Item
            ((System_Collections_Generic_Dictionary_int__object__o *)pSVar26,(int32_t)key_00,
             (Il2CppObject *)
             *(System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o **)
              &pSVar14->m_Items[2].fields,MethodInfo_Void_set_Item);
  pvVar3 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
  if (pvVar3 == (void *)0x0) goto label_04257fa3;
  pSVar28 = *(System_Collections_Generic_Dictionary_int__object__o **)((long)pvVar3 + 0x28);
  pSVar26 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
  if (pSVar28 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_04257fa3;
  key_00 = (float)pSVar14->m_Items[1].fields.hashCode;
  bVar6 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                    (pSVar28,(int32_t)key_00,MethodInfo_Boolean_ContainsKey);
  if ((char)bVar6 == '\0') {
    if (TypeInfo_CustomLogicManager->m_Items[8].fields.next != 0) goto label_04257d92;
label_04257f86:
    il2cpp_runtime_helper_02337ed0();
    pvVar3 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
  }
  else {
    uStack_108 = CONCAT44(uStack_108._4_4_,pSVar14->m_Items[1].fields.hashCode);
    pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_108);
    __this_02 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                System_String__Format("PhotonSync: NetworkView for id {0} already exists, overwriting.",pIVar10,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    key_00 = 0.0;
    UnityEngine_Debug__LogWarning((Il2CppObject *)__this_02,(MethodInfo *)0x0);
    if (TypeInfo_CustomLogicManager->m_Items[8].fields.next == 0) goto label_04257f86;
label_04257d92:
    pvVar3 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
  }
  pSVar26 = TypeInfo_CustomLogicManager;
  if (pvVar3 != (void *)0x0) {
    pSVar26 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
    if (*(System_Collections_Generic_Dictionary_int__object__o **)((long)pvVar3 + 0x28) !=
        (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      key_00 = (float)pSVar14->m_Items[1].fields.hashCode;
      System_Collections_Generic_Dictionary_int__object___set_Item
                (*(System_Collections_Generic_Dictionary_int__object__o **)((long)pvVar3 + 0x28),
                 (int32_t)key_00,(Il2CppObject *)pSVar14->m_Items[2].fields.key,MethodInfo_Void_set_Item);
      pCVar17 = (CustomLogic_CustomLogicNetworkViewBuiltin_o *)pSVar14->m_Items[2].fields.key;
      pSVar26 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
      if (pCVar17 != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
        pSVar26 = pSVar14;
        CustomLogic_CustomLogicNetworkViewBuiltin__SetSyncDynamic
                  (pCVar17,(CustomLogic_CustomLogicPhotonSync_o *)pSVar14,(MethodInfo *)0x0);
        key_00 = SUB84(pSVar26,0);
        pSVar26 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
        if (pSVar26 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
          CustomLogic_CustomLogicEvaluator__LoadRuntimeMapObjectComponents
                    ((CustomLogic_CustomLogicEvaluator_o *)pSVar26,mapObject,1,(MethodInfo *)0x0);
          key_00 = SUB84(mapObject,0);
          pSVar4 = *ppSVar1;
          if ((pSVar4 != (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *)0x0) &&
             (pSVar26 = (pSVar4->fields)._entries,
             pSVar26 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)) {
            key_00 = 0.0;
            pSVar18 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                      UnityEngine_GameObject__get_transform
                                ((UnityEngine_GameObject_o *)pSVar26,(MethodInfo *)0x0);
            if (pSVar18 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
              key_00 = 0.0;
              UVar32 = UnityEngine_Transform__get_position
                                 ((UnityEngine_Transform_o *)pSVar18,(MethodInfo *)0x0);
              *(UnityEngine_Vector3_Fields *)&pSVar14->m_Items[2].fields.value = UVar32.fields;
              pSVar4 = (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *)
                       pSVar14->m_Items[1].fields.value;
              pSVar26 = pSVar18;
              if ((pSVar4 != (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *)0x0)
                 && (pSVar26 = (pSVar4->fields)._entries,
                    pSVar26 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)) {
                key_00 = 0.0;
                __this_03 = UnityEngine_GameObject__get_transform
                                      ((UnityEngine_GameObject_o *)pSVar26,(MethodInfo *)0x0);
                if (__this_03 != (UnityEngine_Transform_o *)0x0) {
                  UVar31 = UnityEngine_Transform__get_rotation(__this_03,(MethodInfo *)0x0);
                  *(UnityEngine_Quaternion_Fields *)&pSVar14->m_Items[3].fields.next = UVar31.fields;
                  *(undefined1 *)&pSVar14->m_Items[4].fields.key = 1;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
label_04257fa3:
  il2cpp_runtime_helper_022b2c90();
  pCVar5 = (CustomLogic_CustomLogicStartAst_o *)pSVar26->m_Items[1].fields.key;
  pSVar14 = pSVar26;
  fVar23 = key_00;
  if (pCVar5 != (CustomLogic_CustomLogicStartAst_o *)0x0) {
    if (pPStack_f8 != pCVar5[3].monitor) {
      return;
    }
    *(undefined1 *)((long)&pSVar26->m_Items[0].fields.key + 1) = extraout_DL;
    if (g_data_057adbae == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishInit_d__46);
      g_data_057adbae = '\x01';
    }
    pSVar18 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
              il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishInit_d__46);
    fVar23 = 0.0;
    pSVar14 = pSVar18;
    System_Object___ctor((Il2CppObject *)pSVar18,(MethodInfo *)0x0);
    *(undefined4 *)&((CustomLogic_CustomLogicEvaluator_Fields *)&pSVar18->bounds)->_networkCallback = 0;
    __this_02 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
    if (pSVar18 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
      pSVar18->m_Items[0].fields.key = &pSVar26->obj;
      il2cpp_runtime_helper_022b4080(&pSVar18->m_Items[0].fields.key,pSVar26);
      pSVar18->m_Items[0].fields.hashCode = (int32_t)key_00;
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                ((UnityEngine_MonoBehaviour_o *)pSVar26,(System_Collections_IEnumerator_o *)pSVar18,
                 (MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adbae == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishInit_d__46);
    g_data_057adbae = '\x01';
  }
  pIVar19 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishInit_d__46);
  uVar21 = 0;
  pIVar30 = pIVar19;
  System_Object___ctor((Il2CppObject *)pIVar19,(MethodInfo *)0x0);
  *(undefined4 *)&(pIVar19->_1).name = 0;
  if (pIVar19 != (Il2CppClass *)0x0) {
    *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)&(pIVar19->_1).byval_arg.bits =
         pSVar14;
    il2cpp_runtime_helper_022b4080(&(pIVar19->_1).byval_arg.bits,pSVar14);
    *(float *)&(pIVar19->_1).byval_arg.data = fVar23;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar19 = (pIVar30->_1).element_class;
  pIVar29 = pIVar30;
  uVar22 = uVar21;
  if (pIVar19 != (Il2CppClass *)0x0) {
    if (__this_02 != (pIVar19->_1).fields) {
      return;
    }
    if (g_data_057adbad == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishDynamicInit_d__45);
      g_data_057adbad = '\x01';
    }
    pIVar19 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishDynamicInit_d__45);
    uVar22 = 0;
    pIVar29 = pIVar19;
    System_Object___ctor((Il2CppObject *)pIVar19,(MethodInfo *)0x0);
    *(undefined4 *)&(pIVar19->_1).name = 0;
    if (pIVar19 != (Il2CppClass *)0x0) {
      (pIVar19->_1).byval_arg.data = pIVar30;
      il2cpp_runtime_helper_022b4080(&(pIVar19->_1).byval_arg,pIVar30);
      *(undefined1 *)&(pIVar19->_1).byval_arg.bits = uVar21;
      (pIVar19->_1).this_arg.data = extraout_RDX;
      il2cpp_runtime_helper_022b4080(&(pIVar19->_1).this_arg,extraout_RDX);
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                ((UnityEngine_MonoBehaviour_o *)pIVar30,(System_Collections_IEnumerator_o *)pIVar19,
                 (MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adbad == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishDynamicInit_d__45);
    g_data_057adbad = '\x01';
  }
  pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishDynamicInit_d__45);
  uVar24 = 0;
  pIVar10 = pIVar12;
  System_Object___ctor(pIVar12,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar12[1].klass = 0;
  if (pIVar12 != (Il2CppObject *)0x0) {
    pIVar12[2].klass = pIVar29;
    il2cpp_runtime_helper_022b4080(pIVar12 + 2,pIVar29);
    *(undefined1 *)&pIVar12[2].monitor = uVar22;
    pIVar12[3].klass = extraout_RDX_00;
    il2cpp_runtime_helper_022b4080(pIVar12 + 3,extraout_RDX_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(pIVar10,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar10[1].klass = uVar24;
  return;
}


// CustomLogic.CustomLogicPhotonSync$$OnDisable
// il2cpp: void CustomLogic_CustomLogicPhotonSync__OnDisable (CustomLogic_CustomLogicPhotonSync_o* __this, const MethodInfo* method);
// 0x4257370

void CustomLogic_CustomLogicPhotonSync__OnDisable
               (CustomLogic_CustomLogicPhotonSync_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o **ppSVar1;
  int iVar2;
  UnityEngine_GameObject_o *__this_00;
  void *pvVar3;
  System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *pSVar4;
  CustomLogic_CustomLogicStartAst_o *pCVar5;
  bool_conflict bVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  System_Object_array *parameters;
  Il2CppObject *pIVar10;
  UnityEngine_Object_o *x;
  CustomLogic_CustomLogicPhotonSync_o *__this_01;
  System_Object_array *pSVar11;
  Il2CppObject *pIVar12;
  long lVar13;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar14;
  Photon_Pun_PhotonView_o *pPVar15;
  System_String_array *value;
  System_String_o *pSVar16;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *__this_02;
  Map_MapObject_o *mapObject;
  CustomLogic_CustomLogicNetworkViewBuiltin_o *pCVar17;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar18;
  UnityEngine_Transform_o *__this_03;
  Il2CppClass *pIVar19;
  undefined1 extraout_DL;
  System_String_o *value_00;
  void *extraout_RDX;
  Il2CppClass *extraout_RDX_00;
  uint uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  int32_t key;
  float key_00;
  float fVar23;
  undefined4 uVar24;
  Map_MapObject_o *pMVar25;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar26;
  MethodInfo **ppMVar27;
  System_Collections_Generic_Dictionary_int__object__o *pSVar28;
  Il2CppClass *pIVar29;
  Il2CppClass *pIVar30;
  UnityEngine_Quaternion_o UVar31;
  UnityEngine_Vector3_o UVar32;
  undefined1 auVar33 [16];
  long in_stack_00000010;
  undefined8 uStack_100;
  Il2CppObject *pIStack_f8;
  Photon_Pun_PhotonView_o *pPStack_f0;
  System_String_o *pSStack_e8;
  CustomLogic_CustomLogicPhotonSync_o *pCStack_e0;
  ulong uStack_d8;
  System_Object_array *pSStack_d0;
  undefined8 uStack_c8;
  Il2CppObject *pIStack_c0;
  Il2CppClass *pIStack_b8;
  
  if (g_data_057adba7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    g_data_057adba7 = '\x01';
  }
  pPVar15 = (__this->fields).PhotonView;
  if (pPVar15 != (Photon_Pun_PhotonView_o *)0x0) {
    Photon_Pun_PhotonView__RemoveCallbackTarget
              (pPVar15,(Photon_Pun_IPhotonViewCallback_o *)__this,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) {
      Photon_Pun_PhotonNetwork__RemoveCallbackTarget((Il2CppObject *)__this,(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_02337ed0();
    Photon_Pun_PhotonNetwork__RemoveCallbackTarget((Il2CppObject *)__this,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  ppMVar27 = (MethodInfo **)pPVar15;
  if (g_data_057adba8 == '\0') {
    ppMVar27 = &TypeInfo_SpawnIntent;
    il2cpp_runtime_helper_023445d0();
    g_data_057adba8 = '\x01';
  }
  if ((in_stack_00000010 == 0) || (lVar13 = *(long *)(in_stack_00000010 + 0x28), lVar13 == 0)) {
label_042574cb:
    il2cpp_runtime_helper_022b2c90();
label_042574d0:
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    if (*(int *)(lVar13 + 0x18) == 0) goto label_042574d0;
    ppMVar27 = *(MethodInfo ***)(lVar13 + 0x20);
    if ((Photon_Pun_PhotonView_o *)ppMVar27 == (Photon_Pun_PhotonView_o *)0x0) goto label_042574cb;
    method = TypeInfo_SpawnIntent;
    if ((((Photon_Pun_PhotonView_o *)ppMVar27)->klass->_1).element_class ==
        (TypeInfo_SpawnIntent->field8_0x40).genericMethod) {
      piVar7 = (int *)il2cpp_runtime_helper_02305440();
      iVar2 = *piVar7;
      (pPVar15->fields).isRuntimeInstantiated = iVar2;
      if (iVar2 != 1) {
        return;
      }
      if (*(uint *)(lVar13 + 0x18) < 2) goto label_042574d0;
      ppMVar27 = *(MethodInfo ***)(lVar13 + 0x28);
      if ((Photon_Pun_PhotonView_o *)ppMVar27 == (Photon_Pun_PhotonView_o *)0x0) goto label_042574cb;
      method = g_data_057b9bb8;
      if ((((Photon_Pun_PhotonView_o *)ppMVar27)->klass->_1).element_class ==
          (g_data_057b9bb8->field8_0x40).genericMethod) {
        puVar8 = (undefined4 *)il2cpp_runtime_helper_02305440();
        *(undefined4 *)&(pPVar15->fields).syncValues = *puVar8;
        if (*(uint *)(lVar13 + 0x18) < 3) goto label_042574d0;
        ppMVar27 = *(MethodInfo ***)(lVar13 + 0x30);
        if ((Photon_Pun_PhotonView_o *)ppMVar27 == (Photon_Pun_PhotonView_o *)0x0) goto label_042574cb;
        method = g_data_057b9b98;
        if ((((Photon_Pun_PhotonView_o *)ppMVar27)->klass->_1).element_class ==
            (g_data_057b9b98->field8_0x40).genericMethod) {
          puVar9 = (undefined1 *)il2cpp_runtime_helper_02305440();
          *(undefined1 *)((long)&(pPVar15->fields).instantiationDataField + 1) = *puVar9;
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  pIVar30 = (Il2CppClass *)((ulong)method & 0xffffffff);
  if (g_data_057adba9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&"InitRPC");
    g_data_057adba9 = '\x01';
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) goto label_0425756f;
label_04257511:
    pSVar28 = (System_Collections_Generic_Dictionary_int__object__o *)**(long **)(TypeInfo_MapLoader + 0xb8);
    if (pSVar28 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_0425769f;
label_0425758a:
    pIVar10 = System_Collections_Generic_Dictionary_int__object___get_Item
                        (pSVar28,(int32_t)method,MethodInfo_MapObject_get_Item);
    *(Il2CppObject **)&(((Photon_Pun_PhotonView_o *)ppMVar27)->fields).Synchronization = pIVar10;
    il2cpp_runtime_helper_022b4080(&(((Photon_Pun_PhotonView_o *)ppMVar27)->fields).Synchronization,pIVar10);
    pSVar11 = (((Photon_Pun_PhotonView_o *)ppMVar27)->fields).lastOnSerializeDataReceived;
    parameters = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,2);
    pIVar30 = (Il2CppClass *)&g_data_057b9b70;
    pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
    if (parameters == (System_Object_array *)0x0) goto label_0425769f;
    if ((pIVar10 == (Il2CppObject *)0x0) || (lVar13 = il2cpp_runtime_helper_023051f0(pIVar10), lVar13 != 0)) {
      if ((int)parameters->max_length != 0) {
        parameters->m_Items[0] = pIVar10;
        il2cpp_runtime_helper_022b4080(parameters->m_Items,pIVar10);
        pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98);
        if ((pIVar10 != (Il2CppObject *)0x0) && (lVar13 = il2cpp_runtime_helper_023051f0(pIVar10), lVar13 == 0))
        goto label_042576a9;
        if (1 < (uint)parameters->max_length) {
          parameters->m_Items[1] = pIVar10;
          il2cpp_runtime_helper_022b4080(parameters->m_Items + 1);
          if (pSVar11 != (System_Object_array *)0x0) {
            Photon_Pun_PhotonView__RPC
                      ((Photon_Pun_PhotonView_o *)pSVar11,"InitRPC",3,parameters,(MethodInfo *)0x0);
            return;
          }
          goto label_0425769f;
        }
      }
      goto label_042576a4;
    }
  }
  else {
    if (*(int *)(TypeInfo_MapLoader + 0xe4) != 0) goto label_04257511;
label_0425756f:
    il2cpp_runtime_helper_02337ed0();
    pSVar28 = (System_Collections_Generic_Dictionary_int__object__o *)**(long **)(TypeInfo_MapLoader + 0xb8);
    if (pSVar28 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_0425758a;
label_0425769f:
    il2cpp_runtime_helper_022b2c90();
label_042576a4:
    il2cpp_runtime_helper_022b2ca0();
  }
label_042576a9:
  pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_0231b270();
  key = 0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057adbaa == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Rigidbody_GetComponent_Rigidbody);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"InitRPC");
    g_data_057adbaa = '\x01';
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) goto label_0425776a;
label_042576ef:
    pSVar28 = (System_Collections_Generic_Dictionary_int__object__o *)**(long **)(TypeInfo_MapLoader + 0xb8);
    if (pSVar28 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_042578ec;
label_04257786:
    pIVar12 = System_Collections_Generic_Dictionary_int__object___get_Item(pSVar28,key,MethodInfo_MapObject_get_Item);
    pIVar10[4].monitor = pIVar12;
    il2cpp_runtime_helper_022b4080(&pIVar10[4].monitor);
    if ((pIVar10[4].monitor == (void *)0x0) ||
       (__this_00 = *(UnityEngine_GameObject_o **)((long)pIVar10[4].monitor + 0x18),
       __this_00 == (UnityEngine_GameObject_o *)0x0)) goto label_042578ec;
    x = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(__this_00,MethodInfo_Rigidbody_GetComponent_Rigidbody);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pIVar30 = pIVar10[4].klass;
    pSVar11 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,2);
    pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
    if (pSVar11 == (System_Object_array *)0x0) goto label_042578ec;
    pIVar10 = pIVar12;
    if ((pIVar12 == (Il2CppObject *)0x0) || (lVar13 = il2cpp_runtime_helper_023051f0(pIVar12), lVar13 != 0)) {
      if ((int)pSVar11->max_length != 0) {
        pSVar11->m_Items[0] = pIVar12;
        il2cpp_runtime_helper_022b4080(pSVar11->m_Items,pIVar12);
        pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98);
        if ((pIVar10 != (Il2CppObject *)0x0) && (lVar13 = il2cpp_runtime_helper_023051f0(pIVar10), lVar13 == 0))
        goto label_042578f6;
        if (1 < (uint)pSVar11->max_length) {
          pSVar11->m_Items[1] = pIVar10;
          il2cpp_runtime_helper_022b4080(pSVar11->m_Items + 1);
          if (pIVar30 != (Il2CppClass *)0x0) {
            Photon_Pun_PhotonView__RPC
                      ((Photon_Pun_PhotonView_o *)pIVar30,"InitRPC",3,pSVar11,(MethodInfo *)0x0);
            return;
          }
          goto label_042578ec;
        }
      }
      goto label_042578f1;
    }
  }
  else {
    if (*(int *)(TypeInfo_MapLoader + 0xe4) != 0) goto label_042576ef;
label_0425776a:
    il2cpp_runtime_helper_02337ed0();
    pSVar28 = (System_Collections_Generic_Dictionary_int__object__o *)**(long **)(TypeInfo_MapLoader + 0xb8);
    if (pSVar28 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_04257786;
label_042578ec:
    il2cpp_runtime_helper_022b2c90();
label_042578f1:
    il2cpp_runtime_helper_022b2ca0();
  }
label_042578f6:
  __this_01 = (CustomLogic_CustomLogicPhotonSync_o *)il2cpp_runtime_helper_0231b270();
  uVar20 = 0;
  auVar33 = il2cpp_runtime_helper_022b2b10();
  pSVar16 = auVar33._8_8_;
  uStack_c8 = auVar33._0_8_;
  pIStack_c0 = pIVar10;
  pIStack_b8 = pIVar30;
  if (g_data_057adbab == '\0') {
    pSStack_d0 = (System_Object_array *)0x4257939;
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    pSStack_d0 = (System_Object_array *)0x4257945;
    il2cpp_runtime_helper_023445d0(&"InitDynamicRPC");
    g_data_057adbab = '\x01';
  }
  pPVar15 = (__this_01->fields).PhotonView;
  pSStack_d0 = (System_Object_array *)0x4257964;
  pSVar11 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,2);
  uStack_c8 = CONCAT17((char)uVar20,(undefined7)uStack_c8);
  pSStack_d0 = (System_Object_array *)0x4257981;
  pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98);
  if (pSVar11 == (System_Object_array *)0x0) {
label_04257a3d:
    pIVar12 = pIVar10;
    pSStack_d0 = (System_Object_array *)0x4257a42;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (pIVar12 == (Il2CppObject *)0x0) {
label_042579ab:
      pIVar10 = pIVar12;
      if ((int)pSVar11->max_length != 0) {
        pSVar11->m_Items[0] = pIVar12;
        pSStack_d0 = (System_Object_array *)0x42579c5;
        il2cpp_runtime_helper_022b4080(pSVar11->m_Items);
        if (pSVar16 != (System_String_o *)0x0) {
          pSStack_d0 = (System_Object_array *)0x42579da;
          lVar13 = il2cpp_runtime_helper_023051f0(pSVar16);
          if (lVar13 == 0) goto label_04257a42;
        }
        if (1 < (uint)pSVar11->max_length) {
          pSVar11->m_Items[1] = (Il2CppObject *)pSVar16;
          pSStack_d0 = (System_Object_array *)0x42579f8;
          il2cpp_runtime_helper_022b4080(pSVar11->m_Items + 1);
          if (pPVar15 != (Photon_Pun_PhotonView_o *)0x0) {
            pSStack_d0 = (System_Object_array *)0x4257a1a;
            Photon_Pun_PhotonView__RPC(pPVar15,"InitDynamicRPC",4,pSVar11,(MethodInfo *)0x0);
            pSStack_d0 = (System_Object_array *)0x4257a29;
            CustomLogic_CustomLogicPhotonSync__CreateAndSetupObject
                      (__this_01,uVar20 & 0xff,pSVar16,(MethodInfo *)pSVar11);
            return;
          }
          goto label_04257a3d;
        }
      }
      pSStack_d0 = (System_Object_array *)0x4257a3d;
      il2cpp_runtime_helper_022b2ca0();
      goto label_04257a3d;
    }
    pSStack_d0 = (System_Object_array *)0x42579a2;
    lVar13 = il2cpp_runtime_helper_023051f0(pIVar12);
    if (lVar13 != 0) goto label_042579ab;
  }
label_04257a42:
  pSStack_d0 = (System_Object_array *)0x4257a47;
  pSVar14 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)il2cpp_runtime_helper_0231b270();
  uVar21 = 0;
  pSStack_d0 = (System_Object_array *)0x4257a51;
  auVar33 = il2cpp_runtime_helper_022b2b10();
  value_00 = auVar33._8_8_;
  uStack_100 = auVar33._0_8_;
  pIStack_f8 = pIVar12;
  pPStack_f0 = pPVar15;
  pSStack_e8 = pSVar16;
  pCStack_e0 = __this_01;
  uStack_d8 = (ulong)uVar20;
  pSStack_d0 = pSVar11;
  if (g_data_057adbac == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicMapObjectBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicNetworkViewBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptSceneObject);
    il2cpp_runtime_helper_023445d0(&"PhotonSync: MapObject for id {0} already exists, overwriting.");
    il2cpp_runtime_helper_023445d0(&"PhotonSync: NetworkView for id {0} already exists, overwriting.");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057adbac = '\x01';
  }
  bVar6 = System_String__IsNullOrEmpty(value_00,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return;
  }
  *(undefined1 *)((long)&pSVar14->m_Items[5].fields.hashCode + 1) = uVar21;
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar20 = *(uint *)(*(long *)(TypeInfo_MapLoader + 0xb8) + 200);
  __this_02 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)(ulong)uVar20;
  iVar2 = *(int *)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0xcc);
  key_00 = 0.0;
  pSVar26 = pSVar14;
  pPVar15 = Photon_Pun_MonoBehaviourPun__get_photonView
                      ((Photon_Pun_MonoBehaviourPun_o *)pSVar14,(MethodInfo *)0x0);
  if (pPVar15 == (Photon_Pun_PhotonView_o *)0x0) goto label_04257fa3;
  uVar20 = (uVar20 - iVar2) - (pPVar15->fields).viewIdField;
  __this_02 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)(ulong)uVar20;
  pSVar14->m_Items[1].fields.hashCode = uVar20;
  if (value_00 == (System_String_o *)0x0) goto label_04257fa3;
  value = System_String__Split(value_00,10,0,(MethodInfo *)0x0);
  pSVar16 = System_String__Join("",value,(MethodInfo *)0x0);
  __this_02 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
              il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptSceneObject);
  key_00 = 0.0;
  pSVar26 = __this_02;
  Map_MapScriptSceneObject___ctor((Map_MapScriptSceneObject_o *)__this_02,(MethodInfo *)0x0);
  if (__this_02 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_04257fa3;
  pIVar30 = (__this_02->obj).klass;
  (*pIVar30->vtable[9].methodPtr)(__this_02,pSVar16,pIVar30->vtable[9].method);
  __this_02->m_Items[0].fields.hashCode = pSVar14->m_Items[1].fields.hashCode;
  __this_02->m_Items[0].fields.next = 0;
  *(undefined1 *)((long)&__this_02->m_Items[0].fields.key + 3) = 1;
  key_00 = 0.0;
  pSVar26 = __this_02;
  mapObject = Map_MapLoader__LoadObject((Map_MapScriptBaseObject_o *)__this_02,0,(MethodInfo *)0x0);
  if (mapObject == (Map_MapObject_o *)0x0) goto label_04257fa3;
  *(undefined1 *)&(mapObject->fields).RuntimeCreated = 1;
  Map_MapLoader__SetParent_3fadd50(mapObject,(MethodInfo *)0x0);
  pCVar17 = (CustomLogic_CustomLogicNetworkViewBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicNetworkViewBuiltin);
  CustomLogic_CustomLogicNetworkViewBuiltin___ctor(pCVar17,mapObject,(MethodInfo *)0x0);
  pSVar14->m_Items[2].fields.key = (Il2CppObject *)pCVar17;
  il2cpp_runtime_helper_022b4080(&pSVar14->m_Items[2].fields.key,pCVar17);
  __this_02 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
              il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicMapObjectBuiltin);
  CustomLogic_CustomLogicMapObjectBuiltin___ctor
            ((CustomLogic_CustomLogicMapObjectBuiltin_o *)__this_02,mapObject,(MethodInfo *)0x0);
  *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)&pSVar14->m_Items[2].fields = __this_02
  ;
  il2cpp_runtime_helper_022b4080(pSVar14->m_Items + 2,__this_02);
  ppSVar1 = (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o **)
            &pSVar14->m_Items[1].fields.value;
  pSVar14->m_Items[1].fields.value = (Il2CppObject *)mapObject;
  pMVar25 = mapObject;
  il2cpp_runtime_helper_022b4080(ppSVar1);
  key_00 = SUB84(pMVar25,0);
  if (TypeInfo_CustomLogicManager->m_Items[8].fields.next == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pvVar3 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
  pSVar26 = TypeInfo_CustomLogicManager;
  if (pvVar3 == (void *)0x0) goto label_04257fa3;
  pSVar28 = *(System_Collections_Generic_Dictionary_int__object__o **)((long)pvVar3 + 0x38);
  pSVar26 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
  if (pSVar28 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_04257fa3;
  key_00 = (float)pSVar14->m_Items[1].fields.hashCode;
  bVar6 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                    (pSVar28,(int32_t)key_00,MethodInfo_Boolean_ContainsKey);
  if ((char)bVar6 == '\0') {
    if (TypeInfo_CustomLogicManager->m_Items[8].fields.next != 0) goto label_04257d09;
label_04257f00:
    il2cpp_runtime_helper_02337ed0();
    pvVar3 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
  }
  else {
    uStack_100 = CONCAT44(pSVar14->m_Items[1].fields.hashCode,(undefined4)uStack_100);
    pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_100 + 4);
    __this_02 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                System_String__Format("PhotonSync: MapObject for id {0} already exists, overwriting.",pIVar10,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    key_00 = 0.0;
    UnityEngine_Debug__LogWarning((Il2CppObject *)__this_02,(MethodInfo *)0x0);
    if (TypeInfo_CustomLogicManager->m_Items[8].fields.next == 0) goto label_04257f00;
label_04257d09:
    pvVar3 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
  }
  pSVar26 = TypeInfo_CustomLogicManager;
  if ((pvVar3 == (void *)0x0) ||
     (pSVar26 = *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)((long)pvVar3 + 0x38),
     pSVar26 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)) goto label_04257fa3;
  key_00 = (float)pSVar14->m_Items[1].fields.hashCode;
  System_Collections_Generic_Dictionary_int__object___set_Item
            ((System_Collections_Generic_Dictionary_int__object__o *)pSVar26,(int32_t)key_00,
             (Il2CppObject *)
             *(System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o **)
              &pSVar14->m_Items[2].fields,MethodInfo_Void_set_Item);
  pvVar3 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
  if (pvVar3 == (void *)0x0) goto label_04257fa3;
  pSVar28 = *(System_Collections_Generic_Dictionary_int__object__o **)((long)pvVar3 + 0x28);
  pSVar26 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
  if (pSVar28 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_04257fa3;
  key_00 = (float)pSVar14->m_Items[1].fields.hashCode;
  bVar6 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                    (pSVar28,(int32_t)key_00,MethodInfo_Boolean_ContainsKey);
  if ((char)bVar6 == '\0') {
    if (TypeInfo_CustomLogicManager->m_Items[8].fields.next != 0) goto label_04257d92;
label_04257f86:
    il2cpp_runtime_helper_02337ed0();
    pvVar3 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
  }
  else {
    uStack_100 = CONCAT44(uStack_100._4_4_,pSVar14->m_Items[1].fields.hashCode);
    pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_100);
    __this_02 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                System_String__Format("PhotonSync: NetworkView for id {0} already exists, overwriting.",pIVar10,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    key_00 = 0.0;
    UnityEngine_Debug__LogWarning((Il2CppObject *)__this_02,(MethodInfo *)0x0);
    if (TypeInfo_CustomLogicManager->m_Items[8].fields.next == 0) goto label_04257f86;
label_04257d92:
    pvVar3 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
  }
  pSVar26 = TypeInfo_CustomLogicManager;
  if (pvVar3 != (void *)0x0) {
    pSVar26 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
    if (*(System_Collections_Generic_Dictionary_int__object__o **)((long)pvVar3 + 0x28) !=
        (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      key_00 = (float)pSVar14->m_Items[1].fields.hashCode;
      System_Collections_Generic_Dictionary_int__object___set_Item
                (*(System_Collections_Generic_Dictionary_int__object__o **)((long)pvVar3 + 0x28),
                 (int32_t)key_00,(Il2CppObject *)pSVar14->m_Items[2].fields.key,MethodInfo_Void_set_Item);
      pCVar17 = (CustomLogic_CustomLogicNetworkViewBuiltin_o *)pSVar14->m_Items[2].fields.key;
      pSVar26 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
      if (pCVar17 != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
        pSVar26 = pSVar14;
        CustomLogic_CustomLogicNetworkViewBuiltin__SetSyncDynamic
                  (pCVar17,(CustomLogic_CustomLogicPhotonSync_o *)pSVar14,(MethodInfo *)0x0);
        key_00 = SUB84(pSVar26,0);
        pSVar26 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
        if (pSVar26 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
          CustomLogic_CustomLogicEvaluator__LoadRuntimeMapObjectComponents
                    ((CustomLogic_CustomLogicEvaluator_o *)pSVar26,mapObject,1,(MethodInfo *)0x0);
          key_00 = SUB84(mapObject,0);
          pSVar4 = *ppSVar1;
          if ((pSVar4 != (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *)0x0) &&
             (pSVar26 = (pSVar4->fields)._entries,
             pSVar26 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)) {
            key_00 = 0.0;
            pSVar18 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                      UnityEngine_GameObject__get_transform
                                ((UnityEngine_GameObject_o *)pSVar26,(MethodInfo *)0x0);
            if (pSVar18 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
              key_00 = 0.0;
              UVar32 = UnityEngine_Transform__get_position
                                 ((UnityEngine_Transform_o *)pSVar18,(MethodInfo *)0x0);
              *(UnityEngine_Vector3_Fields *)&pSVar14->m_Items[2].fields.value = UVar32.fields;
              pSVar4 = (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *)
                       pSVar14->m_Items[1].fields.value;
              pSVar26 = pSVar18;
              if ((pSVar4 != (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *)0x0)
                 && (pSVar26 = (pSVar4->fields)._entries,
                    pSVar26 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)) {
                key_00 = 0.0;
                __this_03 = UnityEngine_GameObject__get_transform
                                      ((UnityEngine_GameObject_o *)pSVar26,(MethodInfo *)0x0);
                if (__this_03 != (UnityEngine_Transform_o *)0x0) {
                  UVar31 = UnityEngine_Transform__get_rotation(__this_03,(MethodInfo *)0x0);
                  *(UnityEngine_Quaternion_Fields *)&pSVar14->m_Items[3].fields.next = UVar31.fields;
                  *(undefined1 *)&pSVar14->m_Items[4].fields.key = 1;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
label_04257fa3:
  il2cpp_runtime_helper_022b2c90();
  pCVar5 = (CustomLogic_CustomLogicStartAst_o *)pSVar26->m_Items[1].fields.key;
  pSVar14 = pSVar26;
  fVar23 = key_00;
  if (pCVar5 != (CustomLogic_CustomLogicStartAst_o *)0x0) {
    if (pPStack_f0 != pCVar5[3].monitor) {
      return;
    }
    *(undefined1 *)((long)&pSVar26->m_Items[0].fields.key + 1) = extraout_DL;
    if (g_data_057adbae == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishInit_d__46);
      g_data_057adbae = '\x01';
    }
    pSVar18 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
              il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishInit_d__46);
    fVar23 = 0.0;
    pSVar14 = pSVar18;
    System_Object___ctor((Il2CppObject *)pSVar18,(MethodInfo *)0x0);
    *(undefined4 *)&((CustomLogic_CustomLogicEvaluator_Fields *)&pSVar18->bounds)->_networkCallback = 0;
    __this_02 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
    if (pSVar18 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
      pSVar18->m_Items[0].fields.key = &pSVar26->obj;
      il2cpp_runtime_helper_022b4080(&pSVar18->m_Items[0].fields.key,pSVar26);
      pSVar18->m_Items[0].fields.hashCode = (int32_t)key_00;
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                ((UnityEngine_MonoBehaviour_o *)pSVar26,(System_Collections_IEnumerator_o *)pSVar18,
                 (MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adbae == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishInit_d__46);
    g_data_057adbae = '\x01';
  }
  pIVar19 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishInit_d__46);
  uVar21 = 0;
  pIVar30 = pIVar19;
  System_Object___ctor((Il2CppObject *)pIVar19,(MethodInfo *)0x0);
  *(undefined4 *)&(pIVar19->_1).name = 0;
  if (pIVar19 != (Il2CppClass *)0x0) {
    *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)&(pIVar19->_1).byval_arg.bits =
         pSVar14;
    il2cpp_runtime_helper_022b4080(&(pIVar19->_1).byval_arg.bits,pSVar14);
    *(float *)&(pIVar19->_1).byval_arg.data = fVar23;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar19 = (pIVar30->_1).element_class;
  pIVar29 = pIVar30;
  uVar22 = uVar21;
  if (pIVar19 != (Il2CppClass *)0x0) {
    if (__this_02 != (pIVar19->_1).fields) {
      return;
    }
    if (g_data_057adbad == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishDynamicInit_d__45);
      g_data_057adbad = '\x01';
    }
    pIVar19 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishDynamicInit_d__45);
    uVar22 = 0;
    pIVar29 = pIVar19;
    System_Object___ctor((Il2CppObject *)pIVar19,(MethodInfo *)0x0);
    *(undefined4 *)&(pIVar19->_1).name = 0;
    if (pIVar19 != (Il2CppClass *)0x0) {
      (pIVar19->_1).byval_arg.data = pIVar30;
      il2cpp_runtime_helper_022b4080(&(pIVar19->_1).byval_arg,pIVar30);
      *(undefined1 *)&(pIVar19->_1).byval_arg.bits = uVar21;
      (pIVar19->_1).this_arg.data = extraout_RDX;
      il2cpp_runtime_helper_022b4080(&(pIVar19->_1).this_arg,extraout_RDX);
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                ((UnityEngine_MonoBehaviour_o *)pIVar30,(System_Collections_IEnumerator_o *)pIVar19,
                 (MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adbad == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishDynamicInit_d__45);
    g_data_057adbad = '\x01';
  }
  pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishDynamicInit_d__45);
  uVar24 = 0;
  pIVar10 = pIVar12;
  System_Object___ctor(pIVar12,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar12[1].klass = 0;
  if (pIVar12 != (Il2CppObject *)0x0) {
    pIVar12[2].klass = pIVar29;
    il2cpp_runtime_helper_022b4080(pIVar12 + 2,pIVar29);
    *(undefined1 *)&pIVar12[2].monitor = uVar22;
    pIVar12[3].klass = extraout_RDX_00;
    il2cpp_runtime_helper_022b4080(pIVar12 + 3,extraout_RDX_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(pIVar10,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar10[1].klass = uVar24;
  return;
}


// CustomLogic.CustomLogicPhotonSync$$OnPhotonInstantiate
// il2cpp: void CustomLogic_CustomLogicPhotonSync__OnPhotonInstantiate (CustomLogic_CustomLogicPhotonSync_o* __this, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x42573e0

void CustomLogic_CustomLogicPhotonSync__OnPhotonInstantiate
               (CustomLogic_CustomLogicPhotonSync_o *__this,Photon_Pun_PhotonMessageInfo_o info,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o **ppSVar1;
  int iVar2;
  UnityEngine_GameObject_o *__this_00;
  void *pvVar3;
  System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *pSVar4;
  CustomLogic_CustomLogicStartAst_o *pCVar5;
  bool_conflict bVar6;
  int *piVar7;
  int32_t *piVar8;
  undefined1 *puVar9;
  Il2CppObject *pIVar10;
  UnityEngine_Object_o *x;
  CustomLogic_CustomLogicPhotonSync_o *__this_01;
  System_Object_array *pSVar11;
  Il2CppObject *pIVar12;
  long lVar13;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar14;
  Photon_Pun_PhotonView_o *pPVar15;
  System_String_array *value;
  System_String_o *pSVar16;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *__this_02;
  Map_MapObject_o *pMVar17;
  CustomLogic_CustomLogicNetworkViewBuiltin_o *pCVar18;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar19;
  UnityEngine_Transform_o *__this_03;
  Il2CppClass *pIVar20;
  undefined1 extraout_DL;
  System_String_o *value_00;
  void *extraout_RDX;
  Il2CppClass *extraout_RDX_00;
  uint uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  int32_t key;
  float key_00;
  float fVar24;
  undefined4 uVar25;
  Map_MapObject_o *pMVar26;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar27;
  MethodInfo **ppMVar28;
  System_Collections_Generic_Dictionary_int__object__o *pSVar29;
  Il2CppClass *pIVar30;
  Il2CppClass *pIVar31;
  UnityEngine_Quaternion_o UVar32;
  UnityEngine_Vector3_o UVar33;
  undefined1 auVar34 [16];
  undefined8 uStack_f8;
  Il2CppObject *pIStack_f0;
  Photon_Pun_PhotonView_o *pPStack_e8;
  System_String_o *pSStack_e0;
  CustomLogic_CustomLogicPhotonSync_o *pCStack_d8;
  ulong uStack_d0;
  System_Object_array *pSStack_c8;
  undefined8 uStack_c0;
  Il2CppObject *pIStack_b8;
  Il2CppClass *pIStack_b0;
  
  ppMVar28 = (MethodInfo **)__this;
  if (g_data_057adba8 == '\0') {
    ppMVar28 = &TypeInfo_SpawnIntent;
    il2cpp_runtime_helper_023445d0();
    g_data_057adba8 = '\x01';
  }
  if ((info.fields.photonView == (Photon_Pun_PhotonView_o *)0x0) ||
     (pSVar11 = ((info.fields.photonView)->fields).instantiationDataField,
     pSVar11 == (System_Object_array *)0x0)) {
label_042574cb:
    il2cpp_runtime_helper_022b2c90();
label_042574d0:
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    if ((int)pSVar11->max_length == 0) goto label_042574d0;
    ppMVar28 = (MethodInfo **)pSVar11->m_Items[0];
    if ((CustomLogic_CustomLogicPhotonSync_o *)ppMVar28 == (CustomLogic_CustomLogicPhotonSync_o *)0x0)
    goto label_042574cb;
    method = TypeInfo_SpawnIntent;
    if ((((CustomLogic_CustomLogicPhotonSync_o *)ppMVar28)->klass->_1).element_class ==
        (TypeInfo_SpawnIntent->field8_0x40).genericMethod) {
      piVar7 = (int *)il2cpp_runtime_helper_02305440();
      iVar2 = *piVar7;
      (__this->fields)._persistsOwnership = iVar2;
      if (iVar2 != 1) {
        return;
      }
      if ((uint)pSVar11->max_length < 2) goto label_042574d0;
      ppMVar28 = (MethodInfo **)pSVar11->m_Items[1];
      if ((CustomLogic_CustomLogicPhotonSync_o *)ppMVar28 == (CustomLogic_CustomLogicPhotonSync_o *)0x0)
      goto label_042574cb;
      method = g_data_057b9bb8;
      if ((((CustomLogic_CustomLogicPhotonSync_o *)ppMVar28)->klass->_1).element_class ==
          (g_data_057b9bb8->field8_0x40).genericMethod) {
        piVar8 = (int32_t *)il2cpp_runtime_helper_02305440();
        (__this->fields).ObjectId = *piVar8;
        if ((uint)pSVar11->max_length < 3) goto label_042574d0;
        ppMVar28 = (MethodInfo **)pSVar11->m_Items[2];
        if ((CustomLogic_CustomLogicPhotonSync_o *)ppMVar28 == (CustomLogic_CustomLogicPhotonSync_o *)0x0)
        goto label_042574cb;
        method = g_data_057b9b98;
        if ((((CustomLogic_CustomLogicPhotonSync_o *)ppMVar28)->klass->_1).element_class ==
            (g_data_057b9b98->field8_0x40).genericMethod) {
          puVar9 = (undefined1 *)il2cpp_runtime_helper_02305440();
          *(undefined1 *)((long)&(__this->fields)._syncTransforms + 1) = *puVar9;
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  pIVar31 = (Il2CppClass *)((ulong)method & 0xffffffff);
  if (g_data_057adba9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&"InitRPC");
    g_data_057adba9 = '\x01';
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) goto label_0425756f;
label_04257511:
    pSVar29 = (System_Collections_Generic_Dictionary_int__object__o *)**(long **)(TypeInfo_MapLoader + 0xb8);
    if (pSVar29 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_0425769f;
label_0425758a:
    pMVar17 = (Map_MapObject_o *)
              System_Collections_Generic_Dictionary_int__object___get_Item
                        (pSVar29,(int32_t)method,MethodInfo_MapObject_get_Item);
    (((CustomLogic_CustomLogicPhotonSync_o *)ppMVar28)->fields)._MapObject_k__BackingField = pMVar17;
    il2cpp_runtime_helper_022b4080(&(((CustomLogic_CustomLogicPhotonSync_o *)ppMVar28)->fields)._MapObject_k__BackingField
                       ,pMVar17);
    pPVar15 = (((CustomLogic_CustomLogicPhotonSync_o *)ppMVar28)->fields).PhotonView;
    pSVar11 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,2);
    pIVar31 = (Il2CppClass *)&g_data_057b9b70;
    pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
    if (pSVar11 == (System_Object_array *)0x0) goto label_0425769f;
    if ((pIVar10 == (Il2CppObject *)0x0) || (lVar13 = il2cpp_runtime_helper_023051f0(pIVar10), lVar13 != 0)) {
      if ((int)pSVar11->max_length != 0) {
        pSVar11->m_Items[0] = pIVar10;
        il2cpp_runtime_helper_022b4080(pSVar11->m_Items,pIVar10);
        pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98);
        if ((pIVar10 != (Il2CppObject *)0x0) && (lVar13 = il2cpp_runtime_helper_023051f0(pIVar10), lVar13 == 0))
        goto label_042576a9;
        if (1 < (uint)pSVar11->max_length) {
          pSVar11->m_Items[1] = pIVar10;
          il2cpp_runtime_helper_022b4080(pSVar11->m_Items + 1);
          if (pPVar15 != (Photon_Pun_PhotonView_o *)0x0) {
            Photon_Pun_PhotonView__RPC(pPVar15,"InitRPC",3,pSVar11,(MethodInfo *)0x0);
            return;
          }
          goto label_0425769f;
        }
      }
      goto label_042576a4;
    }
  }
  else {
    if (*(int *)(TypeInfo_MapLoader + 0xe4) != 0) goto label_04257511;
label_0425756f:
    il2cpp_runtime_helper_02337ed0();
    pSVar29 = (System_Collections_Generic_Dictionary_int__object__o *)**(long **)(TypeInfo_MapLoader + 0xb8);
    if (pSVar29 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_0425758a;
label_0425769f:
    il2cpp_runtime_helper_022b2c90();
label_042576a4:
    il2cpp_runtime_helper_022b2ca0();
  }
label_042576a9:
  pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_0231b270();
  key = 0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057adbaa == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Rigidbody_GetComponent_Rigidbody);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"InitRPC");
    g_data_057adbaa = '\x01';
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) goto label_0425776a;
label_042576ef:
    pSVar29 = (System_Collections_Generic_Dictionary_int__object__o *)**(long **)(TypeInfo_MapLoader + 0xb8);
    if (pSVar29 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_042578ec;
label_04257786:
    pIVar12 = System_Collections_Generic_Dictionary_int__object___get_Item(pSVar29,key,MethodInfo_MapObject_get_Item);
    pIVar10[4].monitor = pIVar12;
    il2cpp_runtime_helper_022b4080(&pIVar10[4].monitor);
    if ((pIVar10[4].monitor == (void *)0x0) ||
       (__this_00 = *(UnityEngine_GameObject_o **)((long)pIVar10[4].monitor + 0x18),
       __this_00 == (UnityEngine_GameObject_o *)0x0)) goto label_042578ec;
    x = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(__this_00,MethodInfo_Rigidbody_GetComponent_Rigidbody);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pIVar31 = pIVar10[4].klass;
    pSVar11 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,2);
    pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
    if (pSVar11 == (System_Object_array *)0x0) goto label_042578ec;
    pIVar10 = pIVar12;
    if ((pIVar12 == (Il2CppObject *)0x0) || (lVar13 = il2cpp_runtime_helper_023051f0(pIVar12), lVar13 != 0)) {
      if ((int)pSVar11->max_length != 0) {
        pSVar11->m_Items[0] = pIVar12;
        il2cpp_runtime_helper_022b4080(pSVar11->m_Items,pIVar12);
        pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98);
        if ((pIVar10 != (Il2CppObject *)0x0) && (lVar13 = il2cpp_runtime_helper_023051f0(pIVar10), lVar13 == 0))
        goto label_042578f6;
        if (1 < (uint)pSVar11->max_length) {
          pSVar11->m_Items[1] = pIVar10;
          il2cpp_runtime_helper_022b4080(pSVar11->m_Items + 1);
          if (pIVar31 != (Il2CppClass *)0x0) {
            Photon_Pun_PhotonView__RPC
                      ((Photon_Pun_PhotonView_o *)pIVar31,"InitRPC",3,pSVar11,(MethodInfo *)0x0);
            return;
          }
          goto label_042578ec;
        }
      }
      goto label_042578f1;
    }
  }
  else {
    if (*(int *)(TypeInfo_MapLoader + 0xe4) != 0) goto label_042576ef;
label_0425776a:
    il2cpp_runtime_helper_02337ed0();
    pSVar29 = (System_Collections_Generic_Dictionary_int__object__o *)**(long **)(TypeInfo_MapLoader + 0xb8);
    if (pSVar29 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_04257786;
label_042578ec:
    il2cpp_runtime_helper_022b2c90();
label_042578f1:
    il2cpp_runtime_helper_022b2ca0();
  }
label_042578f6:
  __this_01 = (CustomLogic_CustomLogicPhotonSync_o *)il2cpp_runtime_helper_0231b270();
  uVar21 = 0;
  auVar34 = il2cpp_runtime_helper_022b2b10();
  pSVar16 = auVar34._8_8_;
  uStack_c0 = auVar34._0_8_;
  pIStack_b8 = pIVar10;
  pIStack_b0 = pIVar31;
  if (g_data_057adbab == '\0') {
    pSStack_c8 = (System_Object_array *)0x4257939;
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    pSStack_c8 = (System_Object_array *)0x4257945;
    il2cpp_runtime_helper_023445d0(&"InitDynamicRPC");
    g_data_057adbab = '\x01';
  }
  pPVar15 = (__this_01->fields).PhotonView;
  pSStack_c8 = (System_Object_array *)0x4257964;
  pSVar11 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,2);
  uStack_c0 = CONCAT17((char)uVar21,(undefined7)uStack_c0);
  pSStack_c8 = (System_Object_array *)0x4257981;
  pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98);
  if (pSVar11 == (System_Object_array *)0x0) {
label_04257a3d:
    pIVar12 = pIVar10;
    pSStack_c8 = (System_Object_array *)0x4257a42;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (pIVar12 == (Il2CppObject *)0x0) {
label_042579ab:
      pIVar10 = pIVar12;
      if ((int)pSVar11->max_length != 0) {
        pSVar11->m_Items[0] = pIVar12;
        pSStack_c8 = (System_Object_array *)0x42579c5;
        il2cpp_runtime_helper_022b4080(pSVar11->m_Items);
        if (pSVar16 != (System_String_o *)0x0) {
          pSStack_c8 = (System_Object_array *)0x42579da;
          lVar13 = il2cpp_runtime_helper_023051f0(pSVar16);
          if (lVar13 == 0) goto label_04257a42;
        }
        if (1 < (uint)pSVar11->max_length) {
          pSVar11->m_Items[1] = (Il2CppObject *)pSVar16;
          pSStack_c8 = (System_Object_array *)0x42579f8;
          il2cpp_runtime_helper_022b4080(pSVar11->m_Items + 1);
          if (pPVar15 != (Photon_Pun_PhotonView_o *)0x0) {
            pSStack_c8 = (System_Object_array *)0x4257a1a;
            Photon_Pun_PhotonView__RPC(pPVar15,"InitDynamicRPC",4,pSVar11,(MethodInfo *)0x0);
            pSStack_c8 = (System_Object_array *)0x4257a29;
            CustomLogic_CustomLogicPhotonSync__CreateAndSetupObject
                      (__this_01,uVar21 & 0xff,pSVar16,(MethodInfo *)pSVar11);
            return;
          }
          goto label_04257a3d;
        }
      }
      pSStack_c8 = (System_Object_array *)0x4257a3d;
      il2cpp_runtime_helper_022b2ca0();
      goto label_04257a3d;
    }
    pSStack_c8 = (System_Object_array *)0x42579a2;
    lVar13 = il2cpp_runtime_helper_023051f0(pIVar12);
    if (lVar13 != 0) goto label_042579ab;
  }
label_04257a42:
  pSStack_c8 = (System_Object_array *)0x4257a47;
  pSVar14 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)il2cpp_runtime_helper_0231b270();
  uVar22 = 0;
  pSStack_c8 = (System_Object_array *)0x4257a51;
  auVar34 = il2cpp_runtime_helper_022b2b10();
  value_00 = auVar34._8_8_;
  uStack_f8 = auVar34._0_8_;
  pIStack_f0 = pIVar12;
  pPStack_e8 = pPVar15;
  pSStack_e0 = pSVar16;
  pCStack_d8 = __this_01;
  uStack_d0 = (ulong)uVar21;
  pSStack_c8 = pSVar11;
  if (g_data_057adbac == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicMapObjectBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicNetworkViewBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptSceneObject);
    il2cpp_runtime_helper_023445d0(&"PhotonSync: MapObject for id {0} already exists, overwriting.");
    il2cpp_runtime_helper_023445d0(&"PhotonSync: NetworkView for id {0} already exists, overwriting.");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057adbac = '\x01';
  }
  bVar6 = System_String__IsNullOrEmpty(value_00,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return;
  }
  *(undefined1 *)((long)&pSVar14->m_Items[5].fields.hashCode + 1) = uVar22;
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar21 = *(uint *)(*(long *)(TypeInfo_MapLoader + 0xb8) + 200);
  __this_02 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)(ulong)uVar21;
  iVar2 = *(int *)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0xcc);
  key_00 = 0.0;
  pSVar27 = pSVar14;
  pPVar15 = Photon_Pun_MonoBehaviourPun__get_photonView
                      ((Photon_Pun_MonoBehaviourPun_o *)pSVar14,(MethodInfo *)0x0);
  if (pPVar15 == (Photon_Pun_PhotonView_o *)0x0) goto label_04257fa3;
  uVar21 = (uVar21 - iVar2) - (pPVar15->fields).viewIdField;
  __this_02 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)(ulong)uVar21;
  pSVar14->m_Items[1].fields.hashCode = uVar21;
  if (value_00 == (System_String_o *)0x0) goto label_04257fa3;
  value = System_String__Split(value_00,10,0,(MethodInfo *)0x0);
  pSVar16 = System_String__Join("",value,(MethodInfo *)0x0);
  __this_02 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
              il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptSceneObject);
  key_00 = 0.0;
  pSVar27 = __this_02;
  Map_MapScriptSceneObject___ctor((Map_MapScriptSceneObject_o *)__this_02,(MethodInfo *)0x0);
  if (__this_02 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_04257fa3;
  pIVar31 = (__this_02->obj).klass;
  (*pIVar31->vtable[9].methodPtr)(__this_02,pSVar16,pIVar31->vtable[9].method);
  __this_02->m_Items[0].fields.hashCode = pSVar14->m_Items[1].fields.hashCode;
  __this_02->m_Items[0].fields.next = 0;
  *(undefined1 *)((long)&__this_02->m_Items[0].fields.key + 3) = 1;
  key_00 = 0.0;
  pSVar27 = __this_02;
  pMVar17 = Map_MapLoader__LoadObject((Map_MapScriptBaseObject_o *)__this_02,0,(MethodInfo *)0x0);
  if (pMVar17 == (Map_MapObject_o *)0x0) goto label_04257fa3;
  *(undefined1 *)&(pMVar17->fields).RuntimeCreated = 1;
  Map_MapLoader__SetParent_3fadd50(pMVar17,(MethodInfo *)0x0);
  pCVar18 = (CustomLogic_CustomLogicNetworkViewBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicNetworkViewBuiltin);
  CustomLogic_CustomLogicNetworkViewBuiltin___ctor(pCVar18,pMVar17,(MethodInfo *)0x0);
  pSVar14->m_Items[2].fields.key = (Il2CppObject *)pCVar18;
  il2cpp_runtime_helper_022b4080(&pSVar14->m_Items[2].fields.key,pCVar18);
  __this_02 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
              il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicMapObjectBuiltin);
  CustomLogic_CustomLogicMapObjectBuiltin___ctor
            ((CustomLogic_CustomLogicMapObjectBuiltin_o *)__this_02,pMVar17,(MethodInfo *)0x0);
  *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)&pSVar14->m_Items[2].fields = __this_02
  ;
  il2cpp_runtime_helper_022b4080(pSVar14->m_Items + 2,__this_02);
  ppSVar1 = (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o **)
            &pSVar14->m_Items[1].fields.value;
  pSVar14->m_Items[1].fields.value = (Il2CppObject *)pMVar17;
  pMVar26 = pMVar17;
  il2cpp_runtime_helper_022b4080(ppSVar1);
  key_00 = SUB84(pMVar26,0);
  if (TypeInfo_CustomLogicManager->m_Items[8].fields.next == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pvVar3 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
  pSVar27 = TypeInfo_CustomLogicManager;
  if (pvVar3 == (void *)0x0) goto label_04257fa3;
  pSVar29 = *(System_Collections_Generic_Dictionary_int__object__o **)((long)pvVar3 + 0x38);
  pSVar27 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
  if (pSVar29 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_04257fa3;
  key_00 = (float)pSVar14->m_Items[1].fields.hashCode;
  bVar6 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                    (pSVar29,(int32_t)key_00,MethodInfo_Boolean_ContainsKey);
  if ((char)bVar6 == '\0') {
    if (TypeInfo_CustomLogicManager->m_Items[8].fields.next != 0) goto label_04257d09;
label_04257f00:
    il2cpp_runtime_helper_02337ed0();
    pvVar3 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
  }
  else {
    uStack_f8 = CONCAT44(pSVar14->m_Items[1].fields.hashCode,(undefined4)uStack_f8);
    pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_f8 + 4);
    __this_02 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                System_String__Format("PhotonSync: MapObject for id {0} already exists, overwriting.",pIVar10,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    key_00 = 0.0;
    UnityEngine_Debug__LogWarning((Il2CppObject *)__this_02,(MethodInfo *)0x0);
    if (TypeInfo_CustomLogicManager->m_Items[8].fields.next == 0) goto label_04257f00;
label_04257d09:
    pvVar3 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
  }
  pSVar27 = TypeInfo_CustomLogicManager;
  if ((pvVar3 == (void *)0x0) ||
     (pSVar27 = *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)((long)pvVar3 + 0x38),
     pSVar27 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)) goto label_04257fa3;
  key_00 = (float)pSVar14->m_Items[1].fields.hashCode;
  System_Collections_Generic_Dictionary_int__object___set_Item
            ((System_Collections_Generic_Dictionary_int__object__o *)pSVar27,(int32_t)key_00,
             (Il2CppObject *)
             *(System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o **)
              &pSVar14->m_Items[2].fields,MethodInfo_Void_set_Item);
  pvVar3 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
  if (pvVar3 == (void *)0x0) goto label_04257fa3;
  pSVar29 = *(System_Collections_Generic_Dictionary_int__object__o **)((long)pvVar3 + 0x28);
  pSVar27 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
  if (pSVar29 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_04257fa3;
  key_00 = (float)pSVar14->m_Items[1].fields.hashCode;
  bVar6 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                    (pSVar29,(int32_t)key_00,MethodInfo_Boolean_ContainsKey);
  if ((char)bVar6 == '\0') {
    if (TypeInfo_CustomLogicManager->m_Items[8].fields.next != 0) goto label_04257d92;
label_04257f86:
    il2cpp_runtime_helper_02337ed0();
    pvVar3 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
  }
  else {
    uStack_f8 = CONCAT44(uStack_f8._4_4_,pSVar14->m_Items[1].fields.hashCode);
    pIVar10 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_f8);
    __this_02 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                System_String__Format("PhotonSync: NetworkView for id {0} already exists, overwriting.",pIVar10,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    key_00 = 0.0;
    UnityEngine_Debug__LogWarning((Il2CppObject *)__this_02,(MethodInfo *)0x0);
    if (TypeInfo_CustomLogicManager->m_Items[8].fields.next == 0) goto label_04257f86;
label_04257d92:
    pvVar3 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
  }
  pSVar27 = TypeInfo_CustomLogicManager;
  if (pvVar3 != (void *)0x0) {
    pSVar27 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
    if (*(System_Collections_Generic_Dictionary_int__object__o **)((long)pvVar3 + 0x28) !=
        (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      key_00 = (float)pSVar14->m_Items[1].fields.hashCode;
      System_Collections_Generic_Dictionary_int__object___set_Item
                (*(System_Collections_Generic_Dictionary_int__object__o **)((long)pvVar3 + 0x28),
                 (int32_t)key_00,(Il2CppObject *)pSVar14->m_Items[2].fields.key,MethodInfo_Void_set_Item);
      pCVar18 = (CustomLogic_CustomLogicNetworkViewBuiltin_o *)pSVar14->m_Items[2].fields.key;
      pSVar27 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
      if (pCVar18 != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
        pSVar27 = pSVar14;
        CustomLogic_CustomLogicNetworkViewBuiltin__SetSyncDynamic
                  (pCVar18,(CustomLogic_CustomLogicPhotonSync_o *)pSVar14,(MethodInfo *)0x0);
        key_00 = SUB84(pSVar27,0);
        pSVar27 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
        if (pSVar27 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
          CustomLogic_CustomLogicEvaluator__LoadRuntimeMapObjectComponents
                    ((CustomLogic_CustomLogicEvaluator_o *)pSVar27,pMVar17,1,(MethodInfo *)0x0);
          key_00 = SUB84(pMVar17,0);
          pSVar4 = *ppSVar1;
          if ((pSVar4 != (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *)0x0) &&
             (pSVar27 = (pSVar4->fields)._entries,
             pSVar27 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)) {
            key_00 = 0.0;
            pSVar19 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                      UnityEngine_GameObject__get_transform
                                ((UnityEngine_GameObject_o *)pSVar27,(MethodInfo *)0x0);
            if (pSVar19 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
              key_00 = 0.0;
              UVar33 = UnityEngine_Transform__get_position
                                 ((UnityEngine_Transform_o *)pSVar19,(MethodInfo *)0x0);
              *(UnityEngine_Vector3_Fields *)&pSVar14->m_Items[2].fields.value = UVar33.fields;
              pSVar4 = (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *)
                       pSVar14->m_Items[1].fields.value;
              pSVar27 = pSVar19;
              if ((pSVar4 != (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *)0x0)
                 && (pSVar27 = (pSVar4->fields)._entries,
                    pSVar27 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)) {
                key_00 = 0.0;
                __this_03 = UnityEngine_GameObject__get_transform
                                      ((UnityEngine_GameObject_o *)pSVar27,(MethodInfo *)0x0);
                if (__this_03 != (UnityEngine_Transform_o *)0x0) {
                  UVar32 = UnityEngine_Transform__get_rotation(__this_03,(MethodInfo *)0x0);
                  *(UnityEngine_Quaternion_Fields *)&pSVar14->m_Items[3].fields.next = UVar32.fields;
                  *(undefined1 *)&pSVar14->m_Items[4].fields.key = 1;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
label_04257fa3:
  il2cpp_runtime_helper_022b2c90();
  pCVar5 = (CustomLogic_CustomLogicStartAst_o *)pSVar27->m_Items[1].fields.key;
  pSVar14 = pSVar27;
  fVar24 = key_00;
  if (pCVar5 != (CustomLogic_CustomLogicStartAst_o *)0x0) {
    if (pPStack_e8 != pCVar5[3].monitor) {
      return;
    }
    *(undefined1 *)((long)&pSVar27->m_Items[0].fields.key + 1) = extraout_DL;
    if (g_data_057adbae == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishInit_d__46);
      g_data_057adbae = '\x01';
    }
    pSVar19 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
              il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishInit_d__46);
    fVar24 = 0.0;
    pSVar14 = pSVar19;
    System_Object___ctor((Il2CppObject *)pSVar19,(MethodInfo *)0x0);
    *(undefined4 *)&((CustomLogic_CustomLogicEvaluator_Fields *)&pSVar19->bounds)->_networkCallback = 0;
    __this_02 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
    if (pSVar19 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
      pSVar19->m_Items[0].fields.key = &pSVar27->obj;
      il2cpp_runtime_helper_022b4080(&pSVar19->m_Items[0].fields.key,pSVar27);
      pSVar19->m_Items[0].fields.hashCode = (int32_t)key_00;
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                ((UnityEngine_MonoBehaviour_o *)pSVar27,(System_Collections_IEnumerator_o *)pSVar19,
                 (MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adbae == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishInit_d__46);
    g_data_057adbae = '\x01';
  }
  pIVar20 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishInit_d__46);
  uVar22 = 0;
  pIVar31 = pIVar20;
  System_Object___ctor((Il2CppObject *)pIVar20,(MethodInfo *)0x0);
  *(undefined4 *)&(pIVar20->_1).name = 0;
  if (pIVar20 != (Il2CppClass *)0x0) {
    *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)&(pIVar20->_1).byval_arg.bits =
         pSVar14;
    il2cpp_runtime_helper_022b4080(&(pIVar20->_1).byval_arg.bits,pSVar14);
    *(float *)&(pIVar20->_1).byval_arg.data = fVar24;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar20 = (pIVar31->_1).element_class;
  pIVar30 = pIVar31;
  uVar23 = uVar22;
  if (pIVar20 != (Il2CppClass *)0x0) {
    if (__this_02 != (pIVar20->_1).fields) {
      return;
    }
    if (g_data_057adbad == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishDynamicInit_d__45);
      g_data_057adbad = '\x01';
    }
    pIVar20 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishDynamicInit_d__45);
    uVar23 = 0;
    pIVar30 = pIVar20;
    System_Object___ctor((Il2CppObject *)pIVar20,(MethodInfo *)0x0);
    *(undefined4 *)&(pIVar20->_1).name = 0;
    if (pIVar20 != (Il2CppClass *)0x0) {
      (pIVar20->_1).byval_arg.data = pIVar31;
      il2cpp_runtime_helper_022b4080(&(pIVar20->_1).byval_arg,pIVar31);
      *(undefined1 *)&(pIVar20->_1).byval_arg.bits = uVar22;
      (pIVar20->_1).this_arg.data = extraout_RDX;
      il2cpp_runtime_helper_022b4080(&(pIVar20->_1).this_arg,extraout_RDX);
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                ((UnityEngine_MonoBehaviour_o *)pIVar31,(System_Collections_IEnumerator_o *)pIVar20,
                 (MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adbad == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishDynamicInit_d__45);
    g_data_057adbad = '\x01';
  }
  pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishDynamicInit_d__45);
  uVar25 = 0;
  pIVar10 = pIVar12;
  System_Object___ctor(pIVar12,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar12[1].klass = 0;
  if (pIVar12 != (Il2CppObject *)0x0) {
    pIVar12[2].klass = pIVar30;
    il2cpp_runtime_helper_022b4080(pIVar12 + 2,pIVar30);
    *(undefined1 *)&pIVar12[2].monitor = uVar23;
    pIVar12[3].klass = extraout_RDX_00;
    il2cpp_runtime_helper_022b4080(pIVar12 + 3,extraout_RDX_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(pIVar10,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar10[1].klass = uVar25;
  return;
}


// CustomLogic.CustomLogicPhotonSync$$Init
// il2cpp: void CustomLogic_CustomLogicPhotonSync__Init (CustomLogic_CustomLogicPhotonSync_o* __this, int32_t mapObjectId, bool rigidbody, const MethodInfo* method);
// 0x42574e0

void CustomLogic_CustomLogicPhotonSync__Init
               (CustomLogic_CustomLogicPhotonSync_o *__this,int32_t mapObjectId,bool_conflict rigidbody,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o **ppSVar1;
  int iVar2;
  UnityEngine_GameObject_o *__this_00;
  void *pvVar3;
  System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *pSVar4;
  CustomLogic_CustomLogicStartAst_o *pCVar5;
  bool_conflict bVar6;
  Il2CppObject *pIVar7;
  UnityEngine_Object_o *x;
  CustomLogic_CustomLogicPhotonSync_o *__this_01;
  System_Object_array *pSVar8;
  Il2CppObject *pIVar9;
  long lVar10;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar11;
  Photon_Pun_PhotonView_o *pPVar12;
  System_String_array *value;
  System_String_o *pSVar13;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *__this_02;
  Map_MapObject_o *pMVar14;
  CustomLogic_CustomLogicNetworkViewBuiltin_o *pCVar15;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar16;
  UnityEngine_Transform_o *__this_03;
  Il2CppClass *pIVar17;
  undefined1 extraout_DL;
  System_String_o *value_00;
  void *extraout_RDX;
  Il2CppClass *extraout_RDX_00;
  uint uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  int32_t key;
  float key_00;
  float fVar21;
  undefined4 uVar22;
  Map_MapObject_o *pMVar23;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar24;
  System_Collections_Generic_Dictionary_int__object__o *pSVar25;
  Il2CppClass *pIVar26;
  Il2CppClass *pIVar27;
  UnityEngine_Quaternion_o UVar28;
  UnityEngine_Vector3_o UVar29;
  undefined1 auVar30 [16];
  undefined8 uStack_e0;
  Il2CppObject *pIStack_d8;
  Photon_Pun_PhotonView_o *pPStack_d0;
  System_String_o *pSStack_c8;
  CustomLogic_CustomLogicPhotonSync_o *pCStack_c0;
  ulong uStack_b8;
  System_Object_array *pSStack_b0;
  undefined8 uStack_a8;
  Il2CppObject *pIStack_a0;
  Il2CppClass *pIStack_98;
  
  pIVar27 = (Il2CppClass *)(ulong)(uint)mapObjectId;
  if (g_data_057adba9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&"InitRPC");
    g_data_057adba9 = '\x01';
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) goto label_0425756f;
label_04257511:
    pSVar25 = (System_Collections_Generic_Dictionary_int__object__o *)**(long **)(TypeInfo_MapLoader + 0xb8);
    if (pSVar25 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_0425769f;
label_0425758a:
    pMVar14 = (Map_MapObject_o *)
              System_Collections_Generic_Dictionary_int__object___get_Item(pSVar25,mapObjectId,MethodInfo_MapObject_get_Item);
    (__this->fields)._MapObject_k__BackingField = pMVar14;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._MapObject_k__BackingField,pMVar14);
    pPVar12 = (__this->fields).PhotonView;
    pSVar8 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,2);
    pIVar27 = (Il2CppClass *)&g_data_057b9b70;
    pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
    if (pSVar8 == (System_Object_array *)0x0) goto label_0425769f;
    if ((pIVar7 == (Il2CppObject *)0x0) || (lVar10 = il2cpp_runtime_helper_023051f0(pIVar7), lVar10 != 0)) {
      if ((int)pSVar8->max_length != 0) {
        pSVar8->m_Items[0] = pIVar7;
        il2cpp_runtime_helper_022b4080(pSVar8->m_Items,pIVar7);
        pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98);
        if ((pIVar7 != (Il2CppObject *)0x0) && (lVar10 = il2cpp_runtime_helper_023051f0(pIVar7), lVar10 == 0))
        goto label_042576a9;
        if (1 < (uint)pSVar8->max_length) {
          pSVar8->m_Items[1] = pIVar7;
          il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 1);
          if (pPVar12 != (Photon_Pun_PhotonView_o *)0x0) {
            Photon_Pun_PhotonView__RPC(pPVar12,"InitRPC",3,pSVar8,(MethodInfo *)0x0);
            return;
          }
          goto label_0425769f;
        }
      }
      goto label_042576a4;
    }
  }
  else {
    if (*(int *)(TypeInfo_MapLoader + 0xe4) != 0) goto label_04257511;
label_0425756f:
    il2cpp_runtime_helper_02337ed0();
    pSVar25 = (System_Collections_Generic_Dictionary_int__object__o *)**(long **)(TypeInfo_MapLoader + 0xb8);
    if (pSVar25 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_0425758a;
label_0425769f:
    il2cpp_runtime_helper_022b2c90();
label_042576a4:
    il2cpp_runtime_helper_022b2ca0();
  }
label_042576a9:
  pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_0231b270();
  key = 0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057adbaa == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Rigidbody_GetComponent_Rigidbody);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"InitRPC");
    g_data_057adbaa = '\x01';
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) goto label_0425776a;
label_042576ef:
    pSVar25 = (System_Collections_Generic_Dictionary_int__object__o *)**(long **)(TypeInfo_MapLoader + 0xb8);
    if (pSVar25 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_042578ec;
label_04257786:
    pIVar9 = System_Collections_Generic_Dictionary_int__object___get_Item(pSVar25,key,MethodInfo_MapObject_get_Item);
    pIVar7[4].monitor = pIVar9;
    il2cpp_runtime_helper_022b4080(&pIVar7[4].monitor);
    if ((pIVar7[4].monitor == (void *)0x0) ||
       (__this_00 = *(UnityEngine_GameObject_o **)((long)pIVar7[4].monitor + 0x18),
       __this_00 == (UnityEngine_GameObject_o *)0x0)) goto label_042578ec;
    x = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(__this_00,MethodInfo_Rigidbody_GetComponent_Rigidbody);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pIVar27 = pIVar7[4].klass;
    pSVar8 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,2);
    pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
    if (pSVar8 == (System_Object_array *)0x0) goto label_042578ec;
    pIVar7 = pIVar9;
    if ((pIVar9 == (Il2CppObject *)0x0) || (lVar10 = il2cpp_runtime_helper_023051f0(pIVar9), lVar10 != 0)) {
      if ((int)pSVar8->max_length != 0) {
        pSVar8->m_Items[0] = pIVar9;
        il2cpp_runtime_helper_022b4080(pSVar8->m_Items,pIVar9);
        pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98);
        if ((pIVar7 != (Il2CppObject *)0x0) && (lVar10 = il2cpp_runtime_helper_023051f0(pIVar7), lVar10 == 0))
        goto label_042578f6;
        if (1 < (uint)pSVar8->max_length) {
          pSVar8->m_Items[1] = pIVar7;
          il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 1);
          if (pIVar27 != (Il2CppClass *)0x0) {
            Photon_Pun_PhotonView__RPC
                      ((Photon_Pun_PhotonView_o *)pIVar27,"InitRPC",3,pSVar8,(MethodInfo *)0x0);
            return;
          }
          goto label_042578ec;
        }
      }
      goto label_042578f1;
    }
  }
  else {
    if (*(int *)(TypeInfo_MapLoader + 0xe4) != 0) goto label_042576ef;
label_0425776a:
    il2cpp_runtime_helper_02337ed0();
    pSVar25 = (System_Collections_Generic_Dictionary_int__object__o *)**(long **)(TypeInfo_MapLoader + 0xb8);
    if (pSVar25 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_04257786;
label_042578ec:
    il2cpp_runtime_helper_022b2c90();
label_042578f1:
    il2cpp_runtime_helper_022b2ca0();
  }
label_042578f6:
  __this_01 = (CustomLogic_CustomLogicPhotonSync_o *)il2cpp_runtime_helper_0231b270();
  uVar18 = 0;
  auVar30 = il2cpp_runtime_helper_022b2b10();
  pSVar13 = auVar30._8_8_;
  uStack_a8 = auVar30._0_8_;
  pIStack_a0 = pIVar7;
  pIStack_98 = pIVar27;
  if (g_data_057adbab == '\0') {
    pSStack_b0 = (System_Object_array *)0x4257939;
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    pSStack_b0 = (System_Object_array *)0x4257945;
    il2cpp_runtime_helper_023445d0(&"InitDynamicRPC");
    g_data_057adbab = '\x01';
  }
  pPVar12 = (__this_01->fields).PhotonView;
  pSStack_b0 = (System_Object_array *)0x4257964;
  pSVar8 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,2);
  uStack_a8 = CONCAT17((char)uVar18,(undefined7)uStack_a8);
  pSStack_b0 = (System_Object_array *)0x4257981;
  pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98);
  if (pSVar8 == (System_Object_array *)0x0) {
label_04257a3d:
    pIVar9 = pIVar7;
    pSStack_b0 = (System_Object_array *)0x4257a42;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (pIVar9 == (Il2CppObject *)0x0) {
label_042579ab:
      pIVar7 = pIVar9;
      if ((int)pSVar8->max_length != 0) {
        pSVar8->m_Items[0] = pIVar9;
        pSStack_b0 = (System_Object_array *)0x42579c5;
        il2cpp_runtime_helper_022b4080(pSVar8->m_Items);
        if (pSVar13 != (System_String_o *)0x0) {
          pSStack_b0 = (System_Object_array *)0x42579da;
          lVar10 = il2cpp_runtime_helper_023051f0(pSVar13);
          if (lVar10 == 0) goto label_04257a42;
        }
        if (1 < (uint)pSVar8->max_length) {
          pSVar8->m_Items[1] = (Il2CppObject *)pSVar13;
          pSStack_b0 = (System_Object_array *)0x42579f8;
          il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 1);
          if (pPVar12 != (Photon_Pun_PhotonView_o *)0x0) {
            pSStack_b0 = (System_Object_array *)0x4257a1a;
            Photon_Pun_PhotonView__RPC(pPVar12,"InitDynamicRPC",4,pSVar8,(MethodInfo *)0x0);
            pSStack_b0 = (System_Object_array *)0x4257a29;
            CustomLogic_CustomLogicPhotonSync__CreateAndSetupObject
                      (__this_01,uVar18 & 0xff,pSVar13,(MethodInfo *)pSVar8);
            return;
          }
          goto label_04257a3d;
        }
      }
      pSStack_b0 = (System_Object_array *)0x4257a3d;
      il2cpp_runtime_helper_022b2ca0();
      goto label_04257a3d;
    }
    pSStack_b0 = (System_Object_array *)0x42579a2;
    lVar10 = il2cpp_runtime_helper_023051f0(pIVar9);
    if (lVar10 != 0) goto label_042579ab;
  }
label_04257a42:
  pSStack_b0 = (System_Object_array *)0x4257a47;
  pSVar11 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)il2cpp_runtime_helper_0231b270();
  uVar19 = 0;
  pSStack_b0 = (System_Object_array *)0x4257a51;
  auVar30 = il2cpp_runtime_helper_022b2b10();
  value_00 = auVar30._8_8_;
  uStack_e0 = auVar30._0_8_;
  pIStack_d8 = pIVar9;
  pPStack_d0 = pPVar12;
  pSStack_c8 = pSVar13;
  pCStack_c0 = __this_01;
  uStack_b8 = (ulong)uVar18;
  pSStack_b0 = pSVar8;
  if (g_data_057adbac == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicMapObjectBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicNetworkViewBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptSceneObject);
    il2cpp_runtime_helper_023445d0(&"PhotonSync: MapObject for id {0} already exists, overwriting.");
    il2cpp_runtime_helper_023445d0(&"PhotonSync: NetworkView for id {0} already exists, overwriting.");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057adbac = '\x01';
  }
  bVar6 = System_String__IsNullOrEmpty(value_00,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return;
  }
  *(undefined1 *)((long)&pSVar11->m_Items[5].fields.hashCode + 1) = uVar19;
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar18 = *(uint *)(*(long *)(TypeInfo_MapLoader + 0xb8) + 200);
  __this_02 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)(ulong)uVar18;
  iVar2 = *(int *)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0xcc);
  key_00 = 0.0;
  pSVar24 = pSVar11;
  pPVar12 = Photon_Pun_MonoBehaviourPun__get_photonView
                      ((Photon_Pun_MonoBehaviourPun_o *)pSVar11,(MethodInfo *)0x0);
  if (pPVar12 == (Photon_Pun_PhotonView_o *)0x0) goto label_04257fa3;
  uVar18 = (uVar18 - iVar2) - (pPVar12->fields).viewIdField;
  __this_02 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)(ulong)uVar18;
  pSVar11->m_Items[1].fields.hashCode = uVar18;
  if (value_00 == (System_String_o *)0x0) goto label_04257fa3;
  value = System_String__Split(value_00,10,0,(MethodInfo *)0x0);
  pSVar13 = System_String__Join("",value,(MethodInfo *)0x0);
  __this_02 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
              il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptSceneObject);
  key_00 = 0.0;
  pSVar24 = __this_02;
  Map_MapScriptSceneObject___ctor((Map_MapScriptSceneObject_o *)__this_02,(MethodInfo *)0x0);
  if (__this_02 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_04257fa3;
  pIVar27 = (__this_02->obj).klass;
  (*pIVar27->vtable[9].methodPtr)(__this_02,pSVar13,pIVar27->vtable[9].method);
  __this_02->m_Items[0].fields.hashCode = pSVar11->m_Items[1].fields.hashCode;
  __this_02->m_Items[0].fields.next = 0;
  *(undefined1 *)((long)&__this_02->m_Items[0].fields.key + 3) = 1;
  key_00 = 0.0;
  pSVar24 = __this_02;
  pMVar14 = Map_MapLoader__LoadObject((Map_MapScriptBaseObject_o *)__this_02,0,(MethodInfo *)0x0);
  if (pMVar14 == (Map_MapObject_o *)0x0) goto label_04257fa3;
  *(undefined1 *)&(pMVar14->fields).RuntimeCreated = 1;
  Map_MapLoader__SetParent_3fadd50(pMVar14,(MethodInfo *)0x0);
  pCVar15 = (CustomLogic_CustomLogicNetworkViewBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicNetworkViewBuiltin);
  CustomLogic_CustomLogicNetworkViewBuiltin___ctor(pCVar15,pMVar14,(MethodInfo *)0x0);
  pSVar11->m_Items[2].fields.key = (Il2CppObject *)pCVar15;
  il2cpp_runtime_helper_022b4080(&pSVar11->m_Items[2].fields.key,pCVar15);
  __this_02 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
              il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicMapObjectBuiltin);
  CustomLogic_CustomLogicMapObjectBuiltin___ctor
            ((CustomLogic_CustomLogicMapObjectBuiltin_o *)__this_02,pMVar14,(MethodInfo *)0x0);
  *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)&pSVar11->m_Items[2].fields = __this_02
  ;
  il2cpp_runtime_helper_022b4080(pSVar11->m_Items + 2,__this_02);
  ppSVar1 = (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o **)
            &pSVar11->m_Items[1].fields.value;
  pSVar11->m_Items[1].fields.value = (Il2CppObject *)pMVar14;
  pMVar23 = pMVar14;
  il2cpp_runtime_helper_022b4080(ppSVar1);
  key_00 = SUB84(pMVar23,0);
  if (TypeInfo_CustomLogicManager->m_Items[8].fields.next == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pvVar3 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
  pSVar24 = TypeInfo_CustomLogicManager;
  if (pvVar3 == (void *)0x0) goto label_04257fa3;
  pSVar25 = *(System_Collections_Generic_Dictionary_int__object__o **)((long)pvVar3 + 0x38);
  pSVar24 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
  if (pSVar25 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_04257fa3;
  key_00 = (float)pSVar11->m_Items[1].fields.hashCode;
  bVar6 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                    (pSVar25,(int32_t)key_00,MethodInfo_Boolean_ContainsKey);
  if ((char)bVar6 == '\0') {
    if (TypeInfo_CustomLogicManager->m_Items[8].fields.next != 0) goto label_04257d09;
label_04257f00:
    il2cpp_runtime_helper_02337ed0();
    pvVar3 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
  }
  else {
    uStack_e0 = CONCAT44(pSVar11->m_Items[1].fields.hashCode,(undefined4)uStack_e0);
    pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_e0 + 4);
    __this_02 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                System_String__Format("PhotonSync: MapObject for id {0} already exists, overwriting.",pIVar7,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    key_00 = 0.0;
    UnityEngine_Debug__LogWarning((Il2CppObject *)__this_02,(MethodInfo *)0x0);
    if (TypeInfo_CustomLogicManager->m_Items[8].fields.next == 0) goto label_04257f00;
label_04257d09:
    pvVar3 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
  }
  pSVar24 = TypeInfo_CustomLogicManager;
  if ((pvVar3 == (void *)0x0) ||
     (pSVar24 = *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)((long)pvVar3 + 0x38),
     pSVar24 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)) goto label_04257fa3;
  key_00 = (float)pSVar11->m_Items[1].fields.hashCode;
  System_Collections_Generic_Dictionary_int__object___set_Item
            ((System_Collections_Generic_Dictionary_int__object__o *)pSVar24,(int32_t)key_00,
             (Il2CppObject *)
             *(System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o **)
              &pSVar11->m_Items[2].fields,MethodInfo_Void_set_Item);
  pvVar3 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
  if (pvVar3 == (void *)0x0) goto label_04257fa3;
  pSVar25 = *(System_Collections_Generic_Dictionary_int__object__o **)((long)pvVar3 + 0x28);
  pSVar24 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
  if (pSVar25 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_04257fa3;
  key_00 = (float)pSVar11->m_Items[1].fields.hashCode;
  bVar6 = System_Collections_Generic_Dictionary_int__object___ContainsKey
                    (pSVar25,(int32_t)key_00,MethodInfo_Boolean_ContainsKey);
  if ((char)bVar6 == '\0') {
    if (TypeInfo_CustomLogicManager->m_Items[8].fields.next != 0) goto label_04257d92;
label_04257f86:
    il2cpp_runtime_helper_02337ed0();
    pvVar3 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
  }
  else {
    uStack_e0 = CONCAT44(uStack_e0._4_4_,pSVar11->m_Items[1].fields.hashCode);
    pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_e0);
    __this_02 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                System_String__Format("PhotonSync: NetworkView for id {0} already exists, overwriting.",pIVar7,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    key_00 = 0.0;
    UnityEngine_Debug__LogWarning((Il2CppObject *)__this_02,(MethodInfo *)0x0);
    if (TypeInfo_CustomLogicManager->m_Items[8].fields.next == 0) goto label_04257f86;
label_04257d92:
    pvVar3 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
  }
  pSVar24 = TypeInfo_CustomLogicManager;
  if (pvVar3 != (void *)0x0) {
    pSVar24 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
    if (*(System_Collections_Generic_Dictionary_int__object__o **)((long)pvVar3 + 0x28) !=
        (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      key_00 = (float)pSVar11->m_Items[1].fields.hashCode;
      System_Collections_Generic_Dictionary_int__object___set_Item
                (*(System_Collections_Generic_Dictionary_int__object__o **)((long)pvVar3 + 0x28),
                 (int32_t)key_00,(Il2CppObject *)pSVar11->m_Items[2].fields.key,MethodInfo_Void_set_Item);
      pCVar15 = (CustomLogic_CustomLogicNetworkViewBuiltin_o *)pSVar11->m_Items[2].fields.key;
      pSVar24 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
      if (pCVar15 != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
        pSVar24 = pSVar11;
        CustomLogic_CustomLogicNetworkViewBuiltin__SetSyncDynamic
                  (pCVar15,(CustomLogic_CustomLogicPhotonSync_o *)pSVar11,(MethodInfo *)0x0);
        key_00 = SUB84(pSVar24,0);
        pSVar24 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
        if (pSVar24 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
          CustomLogic_CustomLogicEvaluator__LoadRuntimeMapObjectComponents
                    ((CustomLogic_CustomLogicEvaluator_o *)pSVar24,pMVar14,1,(MethodInfo *)0x0);
          key_00 = SUB84(pMVar14,0);
          pSVar4 = *ppSVar1;
          if ((pSVar4 != (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *)0x0) &&
             (pSVar24 = (pSVar4->fields)._entries,
             pSVar24 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)) {
            key_00 = 0.0;
            pSVar16 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                      UnityEngine_GameObject__get_transform
                                ((UnityEngine_GameObject_o *)pSVar24,(MethodInfo *)0x0);
            if (pSVar16 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
              key_00 = 0.0;
              UVar29 = UnityEngine_Transform__get_position
                                 ((UnityEngine_Transform_o *)pSVar16,(MethodInfo *)0x0);
              *(UnityEngine_Vector3_Fields *)&pSVar11->m_Items[2].fields.value = UVar29.fields;
              pSVar4 = (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *)
                       pSVar11->m_Items[1].fields.value;
              pSVar24 = pSVar16;
              if ((pSVar4 != (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *)0x0)
                 && (pSVar24 = (pSVar4->fields)._entries,
                    pSVar24 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)) {
                key_00 = 0.0;
                __this_03 = UnityEngine_GameObject__get_transform
                                      ((UnityEngine_GameObject_o *)pSVar24,(MethodInfo *)0x0);
                if (__this_03 != (UnityEngine_Transform_o *)0x0) {
                  UVar28 = UnityEngine_Transform__get_rotation(__this_03,(MethodInfo *)0x0);
                  *(UnityEngine_Quaternion_Fields *)&pSVar11->m_Items[3].fields.next = UVar28.fields;
                  *(undefined1 *)&pSVar11->m_Items[4].fields.key = 1;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
label_04257fa3:
  il2cpp_runtime_helper_022b2c90();
  pCVar5 = (CustomLogic_CustomLogicStartAst_o *)pSVar24->m_Items[1].fields.key;
  pSVar11 = pSVar24;
  fVar21 = key_00;
  if (pCVar5 != (CustomLogic_CustomLogicStartAst_o *)0x0) {
    if (pPStack_d0 != pCVar5[3].monitor) {
      return;
    }
    *(undefined1 *)((long)&pSVar24->m_Items[0].fields.key + 1) = extraout_DL;
    if (g_data_057adbae == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishInit_d__46);
      g_data_057adbae = '\x01';
    }
    pSVar16 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
              il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishInit_d__46);
    fVar21 = 0.0;
    pSVar11 = pSVar16;
    System_Object___ctor((Il2CppObject *)pSVar16,(MethodInfo *)0x0);
    *(undefined4 *)&((CustomLogic_CustomLogicEvaluator_Fields *)&pSVar16->bounds)->_networkCallback = 0;
    __this_02 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
    if (pSVar16 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
      pSVar16->m_Items[0].fields.key = &pSVar24->obj;
      il2cpp_runtime_helper_022b4080(&pSVar16->m_Items[0].fields.key,pSVar24);
      pSVar16->m_Items[0].fields.hashCode = (int32_t)key_00;
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                ((UnityEngine_MonoBehaviour_o *)pSVar24,(System_Collections_IEnumerator_o *)pSVar16,
                 (MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adbae == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishInit_d__46);
    g_data_057adbae = '\x01';
  }
  pIVar17 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishInit_d__46);
  uVar19 = 0;
  pIVar27 = pIVar17;
  System_Object___ctor((Il2CppObject *)pIVar17,(MethodInfo *)0x0);
  *(undefined4 *)&(pIVar17->_1).name = 0;
  if (pIVar17 != (Il2CppClass *)0x0) {
    *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)&(pIVar17->_1).byval_arg.bits =
         pSVar11;
    il2cpp_runtime_helper_022b4080(&(pIVar17->_1).byval_arg.bits,pSVar11);
    *(float *)&(pIVar17->_1).byval_arg.data = fVar21;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar17 = (pIVar27->_1).element_class;
  pIVar26 = pIVar27;
  uVar20 = uVar19;
  if (pIVar17 != (Il2CppClass *)0x0) {
    if (__this_02 != (pIVar17->_1).fields) {
      return;
    }
    if (g_data_057adbad == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishDynamicInit_d__45);
      g_data_057adbad = '\x01';
    }
    pIVar17 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishDynamicInit_d__45);
    uVar20 = 0;
    pIVar26 = pIVar17;
    System_Object___ctor((Il2CppObject *)pIVar17,(MethodInfo *)0x0);
    *(undefined4 *)&(pIVar17->_1).name = 0;
    if (pIVar17 != (Il2CppClass *)0x0) {
      (pIVar17->_1).byval_arg.data = pIVar27;
      il2cpp_runtime_helper_022b4080(&(pIVar17->_1).byval_arg,pIVar27);
      *(undefined1 *)&(pIVar17->_1).byval_arg.bits = uVar19;
      (pIVar17->_1).this_arg.data = extraout_RDX;
      il2cpp_runtime_helper_022b4080(&(pIVar17->_1).this_arg,extraout_RDX);
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                ((UnityEngine_MonoBehaviour_o *)pIVar27,(System_Collections_IEnumerator_o *)pIVar17,
                 (MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adbad == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishDynamicInit_d__45);
    g_data_057adbad = '\x01';
  }
  pIVar9 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishDynamicInit_d__45);
  uVar22 = 0;
  pIVar7 = pIVar9;
  System_Object___ctor(pIVar9,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar9[1].klass = 0;
  if (pIVar9 != (Il2CppObject *)0x0) {
    pIVar9[2].klass = pIVar26;
    il2cpp_runtime_helper_022b4080(pIVar9 + 2,pIVar26);
    *(undefined1 *)&pIVar9[2].monitor = uVar20;
    pIVar9[3].klass = extraout_RDX_00;
    il2cpp_runtime_helper_022b4080(pIVar9 + 3,extraout_RDX_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(pIVar7,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar7[1].klass = uVar22;
  return;
}


// CustomLogic.CustomLogicPhotonSync$$Init
// il2cpp: void CustomLogic_CustomLogicPhotonSync__Init (CustomLogic_CustomLogicPhotonSync_o* __this, int32_t mapObjectId, const MethodInfo* method);
// 0x42576c0

void CustomLogic_CustomLogicPhotonSync__Init_41576c0
               (CustomLogic_CustomLogicPhotonSync_o *__this,int32_t mapObjectId,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o **ppSVar1;
  int iVar2;
  UnityEngine_GameObject_o *__this_00;
  void *pvVar3;
  System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *pSVar4;
  CustomLogic_CustomLogicStartAst_o *pCVar5;
  bool_conflict bVar6;
  UnityEngine_Object_o *x;
  CustomLogic_CustomLogicPhotonSync_o *pCVar7;
  System_Object_array *pSVar8;
  CustomLogic_CustomLogicPhotonSync_o *pCVar9;
  long lVar10;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar11;
  Photon_Pun_PhotonView_o *pPVar12;
  System_String_array *value;
  System_String_o *pSVar13;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *__this_01;
  Map_MapObject_o *pMVar14;
  CustomLogic_CustomLogicNetworkViewBuiltin_o *pCVar15;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar16;
  UnityEngine_Transform_o *__this_02;
  Il2CppObject *pIVar17;
  Il2CppClass *pIVar18;
  Il2CppObject *__this_03;
  undefined1 extraout_DL;
  System_String_o *value_00;
  void *extraout_RDX;
  Il2CppClass *extraout_RDX_00;
  uint uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  float key;
  float fVar22;
  undefined4 uVar23;
  Map_MapObject_o *pMVar24;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar25;
  System_Collections_Generic_Dictionary_int__object__o *pSVar26;
  Il2CppClass *pIVar27;
  Il2CppClass *pIVar28;
  Photon_Pun_PhotonView_o *unaff_R12;
  UnityEngine_Quaternion_o UVar29;
  UnityEngine_Vector3_o UVar30;
  undefined1 auVar31 [16];
  undefined8 uStack_a8;
  CustomLogic_CustomLogicPhotonSync_o *pCStack_a0;
  Photon_Pun_PhotonView_o *pPStack_98;
  System_String_o *pSStack_90;
  CustomLogic_CustomLogicPhotonSync_o *pCStack_88;
  ulong uStack_80;
  System_Object_array *pSStack_78;
  undefined8 uStack_70;
  CustomLogic_CustomLogicPhotonSync_o *pCStack_68;
  Photon_Pun_PhotonView_o *pPStack_60;
  
  if (g_data_057adbaa == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Rigidbody_GetComponent_Rigidbody);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"InitRPC");
    g_data_057adbaa = '\x01';
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) goto label_0425776a;
label_042576ef:
    pSVar26 = (System_Collections_Generic_Dictionary_int__object__o *)**(long **)(TypeInfo_MapLoader + 0xb8);
    if (pSVar26 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_042578ec;
label_04257786:
    pMVar14 = (Map_MapObject_o *)
              System_Collections_Generic_Dictionary_int__object___get_Item(pSVar26,mapObjectId,MethodInfo_MapObject_get_Item);
    (__this->fields)._MapObject_k__BackingField = pMVar14;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._MapObject_k__BackingField);
    pMVar14 = (__this->fields)._MapObject_k__BackingField;
    if ((pMVar14 == (Map_MapObject_o *)0x0) ||
       (__this_00 = (pMVar14->fields).GameObject, __this_00 == (UnityEngine_GameObject_o *)0x0))
    goto label_042578ec;
    x = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(__this_00,MethodInfo_Rigidbody_GetComponent_Rigidbody);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    unaff_R12 = (__this->fields).PhotonView;
    pSVar8 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,2);
    pCVar7 = (CustomLogic_CustomLogicPhotonSync_o *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
    if (pSVar8 == (System_Object_array *)0x0) goto label_042578ec;
    __this = pCVar7;
    if ((pCVar7 == (CustomLogic_CustomLogicPhotonSync_o *)0x0) ||
       (lVar10 = il2cpp_runtime_helper_023051f0(pCVar7), lVar10 != 0)) {
      if ((int)pSVar8->max_length != 0) {
        pSVar8->m_Items[0] = (Il2CppObject *)pCVar7;
        il2cpp_runtime_helper_022b4080(pSVar8->m_Items,pCVar7);
        __this = (CustomLogic_CustomLogicPhotonSync_o *)il2cpp_runtime_helper_02304f30(g_data_057b9b98);
        if ((__this != (CustomLogic_CustomLogicPhotonSync_o *)0x0) &&
           (lVar10 = il2cpp_runtime_helper_023051f0(__this), lVar10 == 0)) goto label_042578f6;
        if (1 < (uint)pSVar8->max_length) {
          pSVar8->m_Items[1] = (Il2CppObject *)__this;
          il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 1);
          if (unaff_R12 != (Photon_Pun_PhotonView_o *)0x0) {
            Photon_Pun_PhotonView__RPC(unaff_R12,"InitRPC",3,pSVar8,(MethodInfo *)0x0);
            return;
          }
          goto label_042578ec;
        }
      }
      goto label_042578f1;
    }
  }
  else {
    if (*(int *)(TypeInfo_MapLoader + 0xe4) != 0) goto label_042576ef;
label_0425776a:
    il2cpp_runtime_helper_02337ed0();
    pSVar26 = (System_Collections_Generic_Dictionary_int__object__o *)**(long **)(TypeInfo_MapLoader + 0xb8);
    if (pSVar26 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_04257786;
label_042578ec:
    il2cpp_runtime_helper_022b2c90();
label_042578f1:
    il2cpp_runtime_helper_022b2ca0();
  }
label_042578f6:
  pCVar7 = (CustomLogic_CustomLogicPhotonSync_o *)il2cpp_runtime_helper_0231b270();
  uVar19 = 0;
  auVar31 = il2cpp_runtime_helper_022b2b10();
  pSVar13 = auVar31._8_8_;
  uStack_70 = auVar31._0_8_;
  pCStack_68 = __this;
  pPStack_60 = unaff_R12;
  if (g_data_057adbab == '\0') {
    pSStack_78 = (System_Object_array *)0x4257939;
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    pSStack_78 = (System_Object_array *)0x4257945;
    il2cpp_runtime_helper_023445d0(&"InitDynamicRPC");
    g_data_057adbab = '\x01';
  }
  pPVar12 = (pCVar7->fields).PhotonView;
  pSStack_78 = (System_Object_array *)0x4257964;
  pSVar8 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,2);
  uStack_70 = CONCAT17((char)uVar19,(undefined7)uStack_70);
  pSStack_78 = (System_Object_array *)0x4257981;
  pCVar9 = (CustomLogic_CustomLogicPhotonSync_o *)il2cpp_runtime_helper_02304f30(g_data_057b9b98);
  if (pSVar8 == (System_Object_array *)0x0) {
label_04257a3d:
    pCVar9 = __this;
    pSStack_78 = (System_Object_array *)0x4257a42;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (pCVar9 == (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
label_042579ab:
      __this = pCVar9;
      if ((int)pSVar8->max_length != 0) {
        pSVar8->m_Items[0] = (Il2CppObject *)pCVar9;
        pSStack_78 = (System_Object_array *)0x42579c5;
        il2cpp_runtime_helper_022b4080(pSVar8->m_Items);
        if (pSVar13 != (System_String_o *)0x0) {
          pSStack_78 = (System_Object_array *)0x42579da;
          lVar10 = il2cpp_runtime_helper_023051f0(pSVar13);
          if (lVar10 == 0) goto label_04257a42;
        }
        if (1 < (uint)pSVar8->max_length) {
          pSVar8->m_Items[1] = (Il2CppObject *)pSVar13;
          pSStack_78 = (System_Object_array *)0x42579f8;
          il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 1);
          if (pPVar12 != (Photon_Pun_PhotonView_o *)0x0) {
            pSStack_78 = (System_Object_array *)0x4257a1a;
            Photon_Pun_PhotonView__RPC(pPVar12,"InitDynamicRPC",4,pSVar8,(MethodInfo *)0x0);
            pSStack_78 = (System_Object_array *)0x4257a29;
            CustomLogic_CustomLogicPhotonSync__CreateAndSetupObject
                      (pCVar7,uVar19 & 0xff,pSVar13,(MethodInfo *)pSVar8);
            return;
          }
          goto label_04257a3d;
        }
      }
      pSStack_78 = (System_Object_array *)0x4257a3d;
      il2cpp_runtime_helper_022b2ca0();
      goto label_04257a3d;
    }
    pSStack_78 = (System_Object_array *)0x42579a2;
    lVar10 = il2cpp_runtime_helper_023051f0(pCVar9);
    if (lVar10 != 0) goto label_042579ab;
  }
label_04257a42:
  pSStack_78 = (System_Object_array *)0x4257a47;
  pSVar11 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)il2cpp_runtime_helper_0231b270();
  uVar20 = 0;
  pSStack_78 = (System_Object_array *)0x4257a51;
  auVar31 = il2cpp_runtime_helper_022b2b10();
  value_00 = auVar31._8_8_;
  uStack_a8 = auVar31._0_8_;
  pCStack_a0 = pCVar9;
  pPStack_98 = pPVar12;
  pSStack_90 = pSVar13;
  pCStack_88 = pCVar7;
  uStack_80 = (ulong)uVar19;
  pSStack_78 = pSVar8;
  if (g_data_057adbac == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicMapObjectBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicNetworkViewBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptSceneObject);
    il2cpp_runtime_helper_023445d0(&"PhotonSync: MapObject for id {0} already exists, overwriting.");
    il2cpp_runtime_helper_023445d0(&"PhotonSync: NetworkView for id {0} already exists, overwriting.");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057adbac = '\x01';
  }
  bVar6 = System_String__IsNullOrEmpty(value_00,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return;
  }
  *(undefined1 *)((long)&pSVar11->m_Items[5].fields.hashCode + 1) = uVar20;
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar19 = *(uint *)(*(long *)(TypeInfo_MapLoader + 0xb8) + 200);
  __this_01 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)(ulong)uVar19;
  iVar2 = *(int *)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0xcc);
  key = 0.0;
  pSVar25 = pSVar11;
  pPVar12 = Photon_Pun_MonoBehaviourPun__get_photonView
                      ((Photon_Pun_MonoBehaviourPun_o *)pSVar11,(MethodInfo *)0x0);
  if (pPVar12 == (Photon_Pun_PhotonView_o *)0x0) goto label_04257fa3;
  uVar19 = (uVar19 - iVar2) - (pPVar12->fields).viewIdField;
  __this_01 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)(ulong)uVar19;
  pSVar11->m_Items[1].fields.hashCode = uVar19;
  if (value_00 == (System_String_o *)0x0) goto label_04257fa3;
  value = System_String__Split(value_00,10,0,(MethodInfo *)0x0);
  pSVar13 = System_String__Join("",value,(MethodInfo *)0x0);
  __this_01 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
              il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptSceneObject);
  key = 0.0;
  pSVar25 = __this_01;
  Map_MapScriptSceneObject___ctor((Map_MapScriptSceneObject_o *)__this_01,(MethodInfo *)0x0);
  if (__this_01 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_04257fa3;
  pIVar27 = (__this_01->obj).klass;
  (*pIVar27->vtable[9].methodPtr)(__this_01,pSVar13,pIVar27->vtable[9].method);
  __this_01->m_Items[0].fields.hashCode = pSVar11->m_Items[1].fields.hashCode;
  __this_01->m_Items[0].fields.next = 0;
  *(undefined1 *)((long)&__this_01->m_Items[0].fields.key + 3) = 1;
  key = 0.0;
  pSVar25 = __this_01;
  pMVar14 = Map_MapLoader__LoadObject((Map_MapScriptBaseObject_o *)__this_01,0,(MethodInfo *)0x0);
  if (pMVar14 == (Map_MapObject_o *)0x0) goto label_04257fa3;
  *(undefined1 *)&(pMVar14->fields).RuntimeCreated = 1;
  Map_MapLoader__SetParent_3fadd50(pMVar14,(MethodInfo *)0x0);
  pCVar15 = (CustomLogic_CustomLogicNetworkViewBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicNetworkViewBuiltin);
  CustomLogic_CustomLogicNetworkViewBuiltin___ctor(pCVar15,pMVar14,(MethodInfo *)0x0);
  pSVar11->m_Items[2].fields.key = (Il2CppObject *)pCVar15;
  il2cpp_runtime_helper_022b4080(&pSVar11->m_Items[2].fields.key,pCVar15);
  __this_01 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
              il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicMapObjectBuiltin);
  CustomLogic_CustomLogicMapObjectBuiltin___ctor
            ((CustomLogic_CustomLogicMapObjectBuiltin_o *)__this_01,pMVar14,(MethodInfo *)0x0);
  *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)&pSVar11->m_Items[2].fields = __this_01
  ;
  il2cpp_runtime_helper_022b4080(pSVar11->m_Items + 2,__this_01);
  ppSVar1 = (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o **)
            &pSVar11->m_Items[1].fields.value;
  pSVar11->m_Items[1].fields.value = (Il2CppObject *)pMVar14;
  pMVar24 = pMVar14;
  il2cpp_runtime_helper_022b4080(ppSVar1);
  key = SUB84(pMVar24,0);
  if (TypeInfo_CustomLogicManager->m_Items[8].fields.next == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pvVar3 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
  pSVar25 = TypeInfo_CustomLogicManager;
  if (pvVar3 == (void *)0x0) goto label_04257fa3;
  pSVar26 = *(System_Collections_Generic_Dictionary_int__object__o **)((long)pvVar3 + 0x38);
  pSVar25 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
  if (pSVar26 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_04257fa3;
  key = (float)pSVar11->m_Items[1].fields.hashCode;
  bVar6 = System_Collections_Generic_Dictionary_int__object___ContainsKey(pSVar26,(int32_t)key,MethodInfo_Boolean_ContainsKey);
  if ((char)bVar6 == '\0') {
    if (TypeInfo_CustomLogicManager->m_Items[8].fields.next != 0) goto label_04257d09;
label_04257f00:
    il2cpp_runtime_helper_02337ed0();
    pvVar3 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
  }
  else {
    uStack_a8 = CONCAT44(pSVar11->m_Items[1].fields.hashCode,(undefined4)uStack_a8);
    pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_a8 + 4);
    __this_01 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                System_String__Format("PhotonSync: MapObject for id {0} already exists, overwriting.",pIVar17,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    key = 0.0;
    UnityEngine_Debug__LogWarning((Il2CppObject *)__this_01,(MethodInfo *)0x0);
    if (TypeInfo_CustomLogicManager->m_Items[8].fields.next == 0) goto label_04257f00;
label_04257d09:
    pvVar3 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
  }
  pSVar25 = TypeInfo_CustomLogicManager;
  if ((pvVar3 == (void *)0x0) ||
     (pSVar25 = *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)((long)pvVar3 + 0x38),
     pSVar25 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)) goto label_04257fa3;
  key = (float)pSVar11->m_Items[1].fields.hashCode;
  System_Collections_Generic_Dictionary_int__object___set_Item
            ((System_Collections_Generic_Dictionary_int__object__o *)pSVar25,(int32_t)key,
             (Il2CppObject *)
             *(System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o **)
              &pSVar11->m_Items[2].fields,MethodInfo_Void_set_Item);
  pvVar3 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
  if (pvVar3 == (void *)0x0) goto label_04257fa3;
  pSVar26 = *(System_Collections_Generic_Dictionary_int__object__o **)((long)pvVar3 + 0x28);
  pSVar25 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
  if (pSVar26 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_04257fa3;
  key = (float)pSVar11->m_Items[1].fields.hashCode;
  bVar6 = System_Collections_Generic_Dictionary_int__object___ContainsKey(pSVar26,(int32_t)key,MethodInfo_Boolean_ContainsKey);
  if ((char)bVar6 == '\0') {
    if (TypeInfo_CustomLogicManager->m_Items[8].fields.next != 0) goto label_04257d92;
label_04257f86:
    il2cpp_runtime_helper_02337ed0();
    pvVar3 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
  }
  else {
    uStack_a8 = CONCAT44(uStack_a8._4_4_,pSVar11->m_Items[1].fields.hashCode);
    pIVar17 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_a8);
    __this_01 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                System_String__Format("PhotonSync: NetworkView for id {0} already exists, overwriting.",pIVar17,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    key = 0.0;
    UnityEngine_Debug__LogWarning((Il2CppObject *)__this_01,(MethodInfo *)0x0);
    if (TypeInfo_CustomLogicManager->m_Items[8].fields.next == 0) goto label_04257f86;
label_04257d92:
    pvVar3 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
  }
  pSVar25 = TypeInfo_CustomLogicManager;
  if (pvVar3 != (void *)0x0) {
    pSVar25 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
    if (*(System_Collections_Generic_Dictionary_int__object__o **)((long)pvVar3 + 0x28) !=
        (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      key = (float)pSVar11->m_Items[1].fields.hashCode;
      System_Collections_Generic_Dictionary_int__object___set_Item
                (*(System_Collections_Generic_Dictionary_int__object__o **)((long)pvVar3 + 0x28),(int32_t)key,
                 (Il2CppObject *)pSVar11->m_Items[2].fields.key,MethodInfo_Void_set_Item);
      pCVar15 = (CustomLogic_CustomLogicNetworkViewBuiltin_o *)pSVar11->m_Items[2].fields.key;
      pSVar25 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
      if (pCVar15 != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
        pSVar25 = pSVar11;
        CustomLogic_CustomLogicNetworkViewBuiltin__SetSyncDynamic
                  (pCVar15,(CustomLogic_CustomLogicPhotonSync_o *)pSVar11,(MethodInfo *)0x0);
        key = SUB84(pSVar25,0);
        pSVar25 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
        if (pSVar25 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
          CustomLogic_CustomLogicEvaluator__LoadRuntimeMapObjectComponents
                    ((CustomLogic_CustomLogicEvaluator_o *)pSVar25,pMVar14,1,(MethodInfo *)0x0);
          key = SUB84(pMVar14,0);
          pSVar4 = *ppSVar1;
          if ((pSVar4 != (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *)0x0) &&
             (pSVar25 = (pSVar4->fields)._entries,
             pSVar25 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)) {
            key = 0.0;
            pSVar16 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                      UnityEngine_GameObject__get_transform
                                ((UnityEngine_GameObject_o *)pSVar25,(MethodInfo *)0x0);
            if (pSVar16 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
              key = 0.0;
              UVar30 = UnityEngine_Transform__get_position
                                 ((UnityEngine_Transform_o *)pSVar16,(MethodInfo *)0x0);
              *(UnityEngine_Vector3_Fields *)&pSVar11->m_Items[2].fields.value = UVar30.fields;
              pSVar4 = (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *)
                       pSVar11->m_Items[1].fields.value;
              pSVar25 = pSVar16;
              if ((pSVar4 != (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *)0x0)
                 && (pSVar25 = (pSVar4->fields)._entries,
                    pSVar25 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)) {
                key = 0.0;
                __this_02 = UnityEngine_GameObject__get_transform
                                      ((UnityEngine_GameObject_o *)pSVar25,(MethodInfo *)0x0);
                if (__this_02 != (UnityEngine_Transform_o *)0x0) {
                  UVar29 = UnityEngine_Transform__get_rotation(__this_02,(MethodInfo *)0x0);
                  *(UnityEngine_Quaternion_Fields *)&pSVar11->m_Items[3].fields.next = UVar29.fields;
                  *(undefined1 *)&pSVar11->m_Items[4].fields.key = 1;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
label_04257fa3:
  il2cpp_runtime_helper_022b2c90();
  pCVar5 = (CustomLogic_CustomLogicStartAst_o *)pSVar25->m_Items[1].fields.key;
  pSVar11 = pSVar25;
  fVar22 = key;
  if (pCVar5 != (CustomLogic_CustomLogicStartAst_o *)0x0) {
    if (pPStack_98 != pCVar5[3].monitor) {
      return;
    }
    *(undefined1 *)((long)&pSVar25->m_Items[0].fields.key + 1) = extraout_DL;
    if (g_data_057adbae == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishInit_d__46);
      g_data_057adbae = '\x01';
    }
    pSVar16 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
              il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishInit_d__46);
    fVar22 = 0.0;
    pSVar11 = pSVar16;
    System_Object___ctor((Il2CppObject *)pSVar16,(MethodInfo *)0x0);
    *(undefined4 *)&((CustomLogic_CustomLogicEvaluator_Fields *)&pSVar16->bounds)->_networkCallback = 0;
    __this_01 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
    if (pSVar16 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
      pSVar16->m_Items[0].fields.key = &pSVar25->obj;
      il2cpp_runtime_helper_022b4080(&pSVar16->m_Items[0].fields.key,pSVar25);
      pSVar16->m_Items[0].fields.hashCode = (int32_t)key;
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                ((UnityEngine_MonoBehaviour_o *)pSVar25,(System_Collections_IEnumerator_o *)pSVar16,
                 (MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adbae == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishInit_d__46);
    g_data_057adbae = '\x01';
  }
  pIVar18 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishInit_d__46);
  uVar20 = 0;
  pIVar27 = pIVar18;
  System_Object___ctor((Il2CppObject *)pIVar18,(MethodInfo *)0x0);
  *(undefined4 *)&(pIVar18->_1).name = 0;
  if (pIVar18 != (Il2CppClass *)0x0) {
    *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)&(pIVar18->_1).byval_arg.bits =
         pSVar11;
    il2cpp_runtime_helper_022b4080(&(pIVar18->_1).byval_arg.bits,pSVar11);
    *(float *)&(pIVar18->_1).byval_arg.data = fVar22;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar18 = (pIVar27->_1).element_class;
  pIVar28 = pIVar27;
  uVar21 = uVar20;
  if (pIVar18 != (Il2CppClass *)0x0) {
    if (__this_01 != (pIVar18->_1).fields) {
      return;
    }
    if (g_data_057adbad == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishDynamicInit_d__45);
      g_data_057adbad = '\x01';
    }
    pIVar18 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishDynamicInit_d__45);
    uVar21 = 0;
    pIVar28 = pIVar18;
    System_Object___ctor((Il2CppObject *)pIVar18,(MethodInfo *)0x0);
    *(undefined4 *)&(pIVar18->_1).name = 0;
    if (pIVar18 != (Il2CppClass *)0x0) {
      (pIVar18->_1).byval_arg.data = pIVar27;
      il2cpp_runtime_helper_022b4080(&(pIVar18->_1).byval_arg,pIVar27);
      *(undefined1 *)&(pIVar18->_1).byval_arg.bits = uVar20;
      (pIVar18->_1).this_arg.data = extraout_RDX;
      il2cpp_runtime_helper_022b4080(&(pIVar18->_1).this_arg,extraout_RDX);
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                ((UnityEngine_MonoBehaviour_o *)pIVar27,(System_Collections_IEnumerator_o *)pIVar18,
                 (MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adbad == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishDynamicInit_d__45);
    g_data_057adbad = '\x01';
  }
  __this_03 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishDynamicInit_d__45);
  uVar23 = 0;
  pIVar17 = __this_03;
  System_Object___ctor(__this_03,(MethodInfo *)0x0);
  *(undefined4 *)&__this_03[1].klass = 0;
  if (__this_03 != (Il2CppObject *)0x0) {
    __this_03[2].klass = pIVar28;
    il2cpp_runtime_helper_022b4080(__this_03 + 2,pIVar28);
    *(undefined1 *)&__this_03[2].monitor = uVar21;
    __this_03[3].klass = extraout_RDX_00;
    il2cpp_runtime_helper_022b4080(__this_03 + 3,extraout_RDX_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(pIVar17,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar17[1].klass = uVar23;
  return;
}


// CustomLogic.CustomLogicPhotonSync$$InitDynamic
// il2cpp: void CustomLogic_CustomLogicPhotonSync__InitDynamic (CustomLogic_CustomLogicPhotonSync_o* __this, bool persistsOwnership, System_String_o* csvScript, const MethodInfo* method);
// 0x4257910

void CustomLogic_CustomLogicPhotonSync__InitDynamic
               (CustomLogic_CustomLogicPhotonSync_o *__this,bool_conflict persistsOwnership,
               System_String_o *csvScript,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o **ppSVar1;
  int iVar2;
  void *pvVar3;
  System_Collections_Generic_Dictionary_int__object__o *pSVar4;
  System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *pSVar5;
  CustomLogic_CustomLogicStartAst_o *pCVar6;
  bool_conflict bVar7;
  undefined8 in_RAX;
  System_Object_array *parameters;
  Il2CppObject *pIVar8;
  long lVar9;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar10;
  Photon_Pun_PhotonView_o *pPVar11;
  System_String_array *value;
  System_String_o *pSVar12;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *__this_00;
  Map_MapObject_o *mapObject;
  CustomLogic_CustomLogicNetworkViewBuiltin_o *pCVar13;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar14;
  UnityEngine_Transform_o *__this_01;
  Il2CppClass *pIVar15;
  Il2CppObject *__this_02;
  undefined1 extraout_DL;
  void *extraout_RDX;
  Il2CppClass *extraout_RDX_00;
  Il2CppObject *unaff_RBX;
  uint uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  float key;
  float fVar19;
  undefined4 uVar20;
  Map_MapObject_o *pMVar21;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar22;
  Il2CppClass *pIVar23;
  Il2CppClass *pIVar24;
  UnityEngine_Quaternion_o UVar25;
  UnityEngine_Vector3_o UVar26;
  undefined1 auVar27 [16];
  undefined8 uStack_70;
  Il2CppObject *pIStack_68;
  Photon_Pun_PhotonView_o *pPStack_60;
  System_String_o *pSStack_58;
  CustomLogic_CustomLogicPhotonSync_o *pCStack_50;
  ulong uStack_48;
  System_Object_array *pSStack_40;
  undefined8 uStack_38;
  
  uStack_38 = in_RAX;
  if (g_data_057adbab == '\0') {
    pSStack_40 = (System_Object_array *)0x4257939;
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    pSStack_40 = (System_Object_array *)0x4257945;
    il2cpp_runtime_helper_023445d0(&"InitDynamicRPC");
    g_data_057adbab = '\x01';
  }
  pPVar11 = (__this->fields).PhotonView;
  pSStack_40 = (System_Object_array *)0x4257964;
  parameters = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,2);
  uStack_38 = CONCAT17((char)persistsOwnership,(undefined7)uStack_38);
  pSStack_40 = (System_Object_array *)0x4257981;
  pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9b98);
  if (parameters == (System_Object_array *)0x0) {
label_04257a3d:
    pIVar8 = unaff_RBX;
    pSStack_40 = (System_Object_array *)0x4257a42;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (pIVar8 == (Il2CppObject *)0x0) {
label_042579ab:
      unaff_RBX = pIVar8;
      if ((int)parameters->max_length != 0) {
        parameters->m_Items[0] = pIVar8;
        pSStack_40 = (System_Object_array *)0x42579c5;
        il2cpp_runtime_helper_022b4080(parameters->m_Items);
        if (csvScript != (System_String_o *)0x0) {
          pSStack_40 = (System_Object_array *)0x42579da;
          lVar9 = il2cpp_runtime_helper_023051f0(csvScript);
          if (lVar9 == 0) goto label_04257a42;
        }
        if (1 < (uint)parameters->max_length) {
          parameters->m_Items[1] = (Il2CppObject *)csvScript;
          pSStack_40 = (System_Object_array *)0x42579f8;
          il2cpp_runtime_helper_022b4080(parameters->m_Items + 1);
          if (pPVar11 != (Photon_Pun_PhotonView_o *)0x0) {
            pSStack_40 = (System_Object_array *)0x4257a1a;
            Photon_Pun_PhotonView__RPC(pPVar11,"InitDynamicRPC",4,parameters,(MethodInfo *)0x0);
            pSStack_40 = (System_Object_array *)0x4257a29;
            CustomLogic_CustomLogicPhotonSync__CreateAndSetupObject
                      (__this,persistsOwnership & 0xff,csvScript,(MethodInfo *)parameters);
            return;
          }
          goto label_04257a3d;
        }
      }
      pSStack_40 = (System_Object_array *)0x4257a3d;
      il2cpp_runtime_helper_022b2ca0();
      goto label_04257a3d;
    }
    pSStack_40 = (System_Object_array *)0x42579a2;
    lVar9 = il2cpp_runtime_helper_023051f0(pIVar8);
    if (lVar9 != 0) goto label_042579ab;
  }
label_04257a42:
  pSStack_40 = (System_Object_array *)0x4257a47;
  pSVar10 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)il2cpp_runtime_helper_0231b270();
  uVar17 = 0;
  pSStack_40 = (System_Object_array *)0x4257a51;
  auVar27 = il2cpp_runtime_helper_022b2b10();
  pSVar12 = auVar27._8_8_;
  uStack_70 = auVar27._0_8_;
  pIStack_68 = pIVar8;
  pPStack_60 = pPVar11;
  pSStack_58 = csvScript;
  pCStack_50 = __this;
  uStack_48 = (ulong)(uint)persistsOwnership;
  pSStack_40 = parameters;
  if (g_data_057adbac == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicMapObjectBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicNetworkViewBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptSceneObject);
    il2cpp_runtime_helper_023445d0(&"PhotonSync: MapObject for id {0} already exists, overwriting.");
    il2cpp_runtime_helper_023445d0(&"PhotonSync: NetworkView for id {0} already exists, overwriting.");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057adbac = '\x01';
  }
  bVar7 = System_String__IsNullOrEmpty(pSVar12,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    return;
  }
  *(undefined1 *)((long)&pSVar10->m_Items[5].fields.hashCode + 1) = uVar17;
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar16 = *(uint *)(*(long *)(TypeInfo_MapLoader + 0xb8) + 200);
  __this_00 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)(ulong)uVar16;
  iVar2 = *(int *)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0xcc);
  key = 0.0;
  pSVar22 = pSVar10;
  pPVar11 = Photon_Pun_MonoBehaviourPun__get_photonView
                      ((Photon_Pun_MonoBehaviourPun_o *)pSVar10,(MethodInfo *)0x0);
  if (pPVar11 == (Photon_Pun_PhotonView_o *)0x0) goto label_04257fa3;
  uVar16 = (uVar16 - iVar2) - (pPVar11->fields).viewIdField;
  __this_00 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)(ulong)uVar16;
  pSVar10->m_Items[1].fields.hashCode = uVar16;
  if (pSVar12 == (System_String_o *)0x0) goto label_04257fa3;
  value = System_String__Split(pSVar12,10,0,(MethodInfo *)0x0);
  pSVar12 = System_String__Join("",value,(MethodInfo *)0x0);
  __this_00 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
              il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptSceneObject);
  key = 0.0;
  pSVar22 = __this_00;
  Map_MapScriptSceneObject___ctor((Map_MapScriptSceneObject_o *)__this_00,(MethodInfo *)0x0);
  if (__this_00 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_04257fa3;
  pIVar23 = (__this_00->obj).klass;
  (*pIVar23->vtable[9].methodPtr)(__this_00,pSVar12,pIVar23->vtable[9].method);
  __this_00->m_Items[0].fields.hashCode = pSVar10->m_Items[1].fields.hashCode;
  __this_00->m_Items[0].fields.next = 0;
  *(undefined1 *)((long)&__this_00->m_Items[0].fields.key + 3) = 1;
  key = 0.0;
  pSVar22 = __this_00;
  mapObject = Map_MapLoader__LoadObject((Map_MapScriptBaseObject_o *)__this_00,0,(MethodInfo *)0x0);
  if (mapObject == (Map_MapObject_o *)0x0) goto label_04257fa3;
  *(undefined1 *)&(mapObject->fields).RuntimeCreated = 1;
  Map_MapLoader__SetParent_3fadd50(mapObject,(MethodInfo *)0x0);
  pCVar13 = (CustomLogic_CustomLogicNetworkViewBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicNetworkViewBuiltin);
  CustomLogic_CustomLogicNetworkViewBuiltin___ctor(pCVar13,mapObject,(MethodInfo *)0x0);
  pSVar10->m_Items[2].fields.key = (Il2CppObject *)pCVar13;
  il2cpp_runtime_helper_022b4080(&pSVar10->m_Items[2].fields.key,pCVar13);
  __this_00 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
              il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicMapObjectBuiltin);
  CustomLogic_CustomLogicMapObjectBuiltin___ctor
            ((CustomLogic_CustomLogicMapObjectBuiltin_o *)__this_00,mapObject,(MethodInfo *)0x0);
  *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)&pSVar10->m_Items[2].fields = __this_00
  ;
  il2cpp_runtime_helper_022b4080(pSVar10->m_Items + 2,__this_00);
  ppSVar1 = (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o **)
            &pSVar10->m_Items[1].fields.value;
  pSVar10->m_Items[1].fields.value = (Il2CppObject *)mapObject;
  pMVar21 = mapObject;
  il2cpp_runtime_helper_022b4080(ppSVar1);
  key = SUB84(pMVar21,0);
  if (TypeInfo_CustomLogicManager->m_Items[8].fields.next == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pvVar3 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
  pSVar22 = TypeInfo_CustomLogicManager;
  if (pvVar3 == (void *)0x0) goto label_04257fa3;
  pSVar4 = *(System_Collections_Generic_Dictionary_int__object__o **)((long)pvVar3 + 0x38);
  pSVar22 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
  if (pSVar4 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_04257fa3;
  key = (float)pSVar10->m_Items[1].fields.hashCode;
  bVar7 = System_Collections_Generic_Dictionary_int__object___ContainsKey(pSVar4,(int32_t)key,MethodInfo_Boolean_ContainsKey);
  if ((char)bVar7 == '\0') {
    if (TypeInfo_CustomLogicManager->m_Items[8].fields.next != 0) goto label_04257d09;
label_04257f00:
    il2cpp_runtime_helper_02337ed0();
    pvVar3 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
  }
  else {
    uStack_70 = CONCAT44(pSVar10->m_Items[1].fields.hashCode,(undefined4)uStack_70);
    pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&uStack_70 + 4);
    __this_00 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                System_String__Format("PhotonSync: MapObject for id {0} already exists, overwriting.",pIVar8,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    key = 0.0;
    UnityEngine_Debug__LogWarning((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    if (TypeInfo_CustomLogicManager->m_Items[8].fields.next == 0) goto label_04257f00;
label_04257d09:
    pvVar3 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
  }
  pSVar22 = TypeInfo_CustomLogicManager;
  if ((pvVar3 == (void *)0x0) ||
     (pSVar22 = *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)((long)pvVar3 + 0x38),
     pSVar22 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)) goto label_04257fa3;
  key = (float)pSVar10->m_Items[1].fields.hashCode;
  System_Collections_Generic_Dictionary_int__object___set_Item
            ((System_Collections_Generic_Dictionary_int__object__o *)pSVar22,(int32_t)key,
             (Il2CppObject *)
             *(System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o **)
              &pSVar10->m_Items[2].fields,MethodInfo_Void_set_Item);
  pvVar3 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
  if (pvVar3 == (void *)0x0) goto label_04257fa3;
  pSVar4 = *(System_Collections_Generic_Dictionary_int__object__o **)((long)pvVar3 + 0x28);
  pSVar22 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
  if (pSVar4 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_04257fa3;
  key = (float)pSVar10->m_Items[1].fields.hashCode;
  bVar7 = System_Collections_Generic_Dictionary_int__object___ContainsKey(pSVar4,(int32_t)key,MethodInfo_Boolean_ContainsKey);
  if ((char)bVar7 == '\0') {
    if (TypeInfo_CustomLogicManager->m_Items[8].fields.next != 0) goto label_04257d92;
label_04257f86:
    il2cpp_runtime_helper_02337ed0();
    pvVar3 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
  }
  else {
    uStack_70 = CONCAT44(uStack_70._4_4_,pSVar10->m_Items[1].fields.hashCode);
    pIVar8 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_70);
    __this_00 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                System_String__Format("PhotonSync: NetworkView for id {0} already exists, overwriting.",pIVar8,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    key = 0.0;
    UnityEngine_Debug__LogWarning((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    if (TypeInfo_CustomLogicManager->m_Items[8].fields.next == 0) goto label_04257f86;
label_04257d92:
    pvVar3 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
  }
  pSVar22 = TypeInfo_CustomLogicManager;
  if (pvVar3 != (void *)0x0) {
    pSVar22 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
    if (*(System_Collections_Generic_Dictionary_int__object__o **)((long)pvVar3 + 0x28) !=
        (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      key = (float)pSVar10->m_Items[1].fields.hashCode;
      System_Collections_Generic_Dictionary_int__object___set_Item
                (*(System_Collections_Generic_Dictionary_int__object__o **)((long)pvVar3 + 0x28),(int32_t)key,
                 (Il2CppObject *)pSVar10->m_Items[2].fields.key,MethodInfo_Void_set_Item);
      pCVar13 = (CustomLogic_CustomLogicNetworkViewBuiltin_o *)pSVar10->m_Items[2].fields.key;
      pSVar22 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
      if (pCVar13 != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
        pSVar22 = pSVar10;
        CustomLogic_CustomLogicNetworkViewBuiltin__SetSyncDynamic
                  (pCVar13,(CustomLogic_CustomLogicPhotonSync_o *)pSVar10,(MethodInfo *)0x0);
        key = SUB84(pSVar22,0);
        pSVar22 = (TypeInfo_CustomLogicManager->m_Items[6].fields.key)->monitor;
        if (pSVar22 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
          CustomLogic_CustomLogicEvaluator__LoadRuntimeMapObjectComponents
                    ((CustomLogic_CustomLogicEvaluator_o *)pSVar22,mapObject,1,(MethodInfo *)0x0);
          key = SUB84(mapObject,0);
          pSVar5 = *ppSVar1;
          if ((pSVar5 != (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *)0x0) &&
             (pSVar22 = (pSVar5->fields)._entries,
             pSVar22 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)) {
            key = 0.0;
            pSVar14 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                      UnityEngine_GameObject__get_transform
                                ((UnityEngine_GameObject_o *)pSVar22,(MethodInfo *)0x0);
            if (pSVar14 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
              key = 0.0;
              UVar26 = UnityEngine_Transform__get_position
                                 ((UnityEngine_Transform_o *)pSVar14,(MethodInfo *)0x0);
              *(UnityEngine_Vector3_Fields *)&pSVar10->m_Items[2].fields.value = UVar26.fields;
              pSVar5 = (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *)
                       pSVar10->m_Items[1].fields.value;
              pSVar22 = pSVar14;
              if ((pSVar5 != (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *)0x0)
                 && (pSVar22 = (pSVar5->fields)._entries,
                    pSVar22 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0)) {
                key = 0.0;
                __this_01 = UnityEngine_GameObject__get_transform
                                      ((UnityEngine_GameObject_o *)pSVar22,(MethodInfo *)0x0);
                if (__this_01 != (UnityEngine_Transform_o *)0x0) {
                  UVar25 = UnityEngine_Transform__get_rotation(__this_01,(MethodInfo *)0x0);
                  *(UnityEngine_Quaternion_Fields *)&pSVar10->m_Items[3].fields.next = UVar25.fields;
                  *(undefined1 *)&pSVar10->m_Items[4].fields.key = 1;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
label_04257fa3:
  il2cpp_runtime_helper_022b2c90();
  pCVar6 = (CustomLogic_CustomLogicStartAst_o *)pSVar22->m_Items[1].fields.key;
  pSVar10 = pSVar22;
  fVar19 = key;
  if (pCVar6 != (CustomLogic_CustomLogicStartAst_o *)0x0) {
    if (pPStack_60 != pCVar6[3].monitor) {
      return;
    }
    *(undefined1 *)((long)&pSVar22->m_Items[0].fields.key + 1) = extraout_DL;
    if (g_data_057adbae == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishInit_d__46);
      g_data_057adbae = '\x01';
    }
    pSVar14 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
              il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishInit_d__46);
    fVar19 = 0.0;
    pSVar10 = pSVar14;
    System_Object___ctor((Il2CppObject *)pSVar14,(MethodInfo *)0x0);
    *(undefined4 *)&((CustomLogic_CustomLogicEvaluator_Fields *)&pSVar14->bounds)->_networkCallback = 0;
    __this_00 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
    if (pSVar14 != (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) {
      pSVar14->m_Items[0].fields.key = &pSVar22->obj;
      il2cpp_runtime_helper_022b4080(&pSVar14->m_Items[0].fields.key,pSVar22);
      pSVar14->m_Items[0].fields.hashCode = (int32_t)key;
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                ((UnityEngine_MonoBehaviour_o *)pSVar22,(System_Collections_IEnumerator_o *)pSVar14,
                 (MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adbae == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishInit_d__46);
    g_data_057adbae = '\x01';
  }
  pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishInit_d__46);
  uVar17 = 0;
  pIVar23 = pIVar15;
  System_Object___ctor((Il2CppObject *)pIVar15,(MethodInfo *)0x0);
  *(undefined4 *)&(pIVar15->_1).name = 0;
  if (pIVar15 != (Il2CppClass *)0x0) {
    *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)&(pIVar15->_1).byval_arg.bits =
         pSVar10;
    il2cpp_runtime_helper_022b4080(&(pIVar15->_1).byval_arg.bits,pSVar10);
    *(float *)&(pIVar15->_1).byval_arg.data = fVar19;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar15 = (pIVar23->_1).element_class;
  pIVar24 = pIVar23;
  uVar18 = uVar17;
  if (pIVar15 != (Il2CppClass *)0x0) {
    if (__this_00 != (pIVar15->_1).fields) {
      return;
    }
    if (g_data_057adbad == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishDynamicInit_d__45);
      g_data_057adbad = '\x01';
    }
    pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishDynamicInit_d__45);
    uVar18 = 0;
    pIVar24 = pIVar15;
    System_Object___ctor((Il2CppObject *)pIVar15,(MethodInfo *)0x0);
    *(undefined4 *)&(pIVar15->_1).name = 0;
    if (pIVar15 != (Il2CppClass *)0x0) {
      (pIVar15->_1).byval_arg.data = pIVar23;
      il2cpp_runtime_helper_022b4080(&(pIVar15->_1).byval_arg,pIVar23);
      *(undefined1 *)&(pIVar15->_1).byval_arg.bits = uVar17;
      (pIVar15->_1).this_arg.data = extraout_RDX;
      il2cpp_runtime_helper_022b4080(&(pIVar15->_1).this_arg,extraout_RDX);
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                ((UnityEngine_MonoBehaviour_o *)pIVar23,(System_Collections_IEnumerator_o *)pIVar15,
                 (MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adbad == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishDynamicInit_d__45);
    g_data_057adbad = '\x01';
  }
  __this_02 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishDynamicInit_d__45);
  uVar20 = 0;
  pIVar8 = __this_02;
  System_Object___ctor(__this_02,(MethodInfo *)0x0);
  *(undefined4 *)&__this_02[1].klass = 0;
  if (__this_02 != (Il2CppObject *)0x0) {
    __this_02[2].klass = pIVar24;
    il2cpp_runtime_helper_022b4080(__this_02 + 2,pIVar24);
    *(undefined1 *)&__this_02[2].monitor = uVar18;
    __this_02[3].klass = extraout_RDX_00;
    il2cpp_runtime_helper_022b4080(__this_02 + 3,extraout_RDX_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(pIVar8,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar8[1].klass = uVar20;
  return;
}


// CustomLogic.CustomLogicPhotonSync$$InitRPC
// il2cpp: void CustomLogic_CustomLogicPhotonSync__InitRPC (CustomLogic_CustomLogicPhotonSync_o* __this, int32_t mapObjectId, bool syncVelocity, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x4257fb0

void CustomLogic_CustomLogicPhotonSync__InitRPC
               (CustomLogic_CustomLogicPhotonSync_o *__this,int32_t mapObjectId,bool_conflict syncVelocity,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  CustomLogic_CustomLogicPhotonSync_o *__this_00;
  Il2CppClass *pIVar2;
  Il2CppObject *__this_01;
  void *extraout_RDX;
  Il2CppClass *extraout_RDX_00;
  void *unaff_RBP;
  undefined1 uVar3;
  undefined1 uVar4;
  int32_t iVar5;
  undefined4 uVar6;
  CustomLogic_CustomLogicPhotonSync_o *pCVar7;
  Il2CppClass *__this_02;
  Il2CppClass *pIVar8;
  Il2CppObject *__this_03;
  
  pPVar1 = (__this->fields).PhotonView;
  pCVar7 = __this;
  iVar5 = mapObjectId;
  if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
    if (info.fields.Sender != (pPVar1->fields)._Owner_k__BackingField) {
      return;
    }
    *(char *)((long)&(__this->fields)._syncTransforms + 1) = (char)syncVelocity;
    if (g_data_057adbae == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishInit_d__46);
      g_data_057adbae = '\x01';
    }
    __this_00 = (CustomLogic_CustomLogicPhotonSync_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishInit_d__46);
    iVar5 = 0;
    pCVar7 = __this_00;
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    *(undefined4 *)&(__this_00->fields).m_CachedPtr = 0;
    unaff_RBP = (void *)0x0;
    if (__this_00 != (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
      *(CustomLogic_CustomLogicPhotonSync_o **)&(__this_00->fields)._syncTransforms = __this;
      il2cpp_runtime_helper_022b4080(&(__this_00->fields)._syncTransforms,__this);
      *(int32_t *)&(__this_00->fields).pvCache = mapObjectId;
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
                 (MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adbae == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishInit_d__46);
    g_data_057adbae = '\x01';
  }
  pIVar2 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishInit_d__46);
  uVar3 = 0;
  __this_02 = pIVar2;
  System_Object___ctor((Il2CppObject *)pIVar2,(MethodInfo *)0x0);
  *(undefined4 *)&(pIVar2->_1).name = 0;
  if (pIVar2 != (Il2CppClass *)0x0) {
    *(CustomLogic_CustomLogicPhotonSync_o **)&(pIVar2->_1).byval_arg.bits = pCVar7;
    il2cpp_runtime_helper_022b4080(&(pIVar2->_1).byval_arg.bits,pCVar7);
    *(int32_t *)&(pIVar2->_1).byval_arg.data = iVar5;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar2 = (__this_02->_1).element_class;
  pIVar8 = __this_02;
  uVar4 = uVar3;
  if (pIVar2 != (Il2CppClass *)0x0) {
    if (unaff_RBP != (pIVar2->_1).fields) {
      return;
    }
    if (g_data_057adbad == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishDynamicInit_d__45);
      g_data_057adbad = '\x01';
    }
    pIVar2 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishDynamicInit_d__45);
    uVar4 = 0;
    pIVar8 = pIVar2;
    System_Object___ctor((Il2CppObject *)pIVar2,(MethodInfo *)0x0);
    *(undefined4 *)&(pIVar2->_1).name = 0;
    if (pIVar2 != (Il2CppClass *)0x0) {
      (pIVar2->_1).byval_arg.data = __this_02;
      il2cpp_runtime_helper_022b4080(&(pIVar2->_1).byval_arg,__this_02);
      *(undefined1 *)&(pIVar2->_1).byval_arg.bits = uVar3;
      (pIVar2->_1).this_arg.data = extraout_RDX;
      il2cpp_runtime_helper_022b4080(&(pIVar2->_1).this_arg,extraout_RDX);
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                ((UnityEngine_MonoBehaviour_o *)__this_02,(System_Collections_IEnumerator_o *)pIVar2,
                 (MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adbad == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishDynamicInit_d__45);
    g_data_057adbad = '\x01';
  }
  __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishDynamicInit_d__45);
  uVar6 = 0;
  __this_03 = __this_01;
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = 0;
  if (__this_01 != (Il2CppObject *)0x0) {
    __this_01[2].klass = pIVar8;
    il2cpp_runtime_helper_022b4080(__this_01 + 2,pIVar8);
    *(undefined1 *)&__this_01[2].monitor = uVar4;
    __this_01[3].klass = extraout_RDX_00;
    il2cpp_runtime_helper_022b4080(__this_01 + 3,extraout_RDX_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_03,(MethodInfo *)0x0);
  *(undefined4 *)&__this_03[1].klass = uVar6;
  return;
}


// CustomLogic.CustomLogicPhotonSync$$InitDynamicRPC
// il2cpp: void CustomLogic_CustomLogicPhotonSync__InitDynamicRPC (CustomLogic_CustomLogicPhotonSync_o* __this, bool persistsOwnership, System_String_o* csvScript, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x42580e0

void CustomLogic_CustomLogicPhotonSync__InitDynamicRPC
               (CustomLogic_CustomLogicPhotonSync_o *__this,bool_conflict persistsOwnership,
               System_String_o *csvScript,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  Il2CppClass *__this_00;
  Il2CppObject *__this_01;
  Il2CppClass *extraout_RDX;
  undefined1 uVar2;
  undefined4 uVar3;
  Il2CppClass *pIVar4;
  Il2CppObject *__this_02;
  
  pPVar1 = (__this->fields).PhotonView;
  pIVar4 = (Il2CppClass *)__this;
  uVar2 = (char)persistsOwnership;
  if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
    if (info.fields.Sender != (pPVar1->fields)._Owner_k__BackingField) {
      return;
    }
    if (g_data_057adbad == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishDynamicInit_d__45);
      g_data_057adbad = '\x01';
    }
    __this_00 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishDynamicInit_d__45);
    uVar2 = 0;
    pIVar4 = __this_00;
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    *(undefined4 *)&(__this_00->_1).name = 0;
    if (__this_00 != (Il2CppClass *)0x0) {
      (__this_00->_1).byval_arg.data = __this;
      il2cpp_runtime_helper_022b4080(&(__this_00->_1).byval_arg,__this);
      *(char *)&(__this_00->_1).byval_arg.bits = (char)persistsOwnership;
      (__this_00->_1).this_arg.data = csvScript;
      il2cpp_runtime_helper_022b4080(&(__this_00->_1).this_arg,csvScript);
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
                 (MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adbad == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishDynamicInit_d__45);
    g_data_057adbad = '\x01';
  }
  __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishDynamicInit_d__45);
  uVar3 = 0;
  __this_02 = __this_01;
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = 0;
  if (__this_01 != (Il2CppObject *)0x0) {
    __this_01[2].klass = pIVar4;
    il2cpp_runtime_helper_022b4080(__this_01 + 2,pIVar4);
    *(undefined1 *)&__this_01[2].monitor = uVar2;
    __this_01[3].klass = extraout_RDX;
    il2cpp_runtime_helper_022b4080(__this_01 + 3,extraout_RDX);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_02,(MethodInfo *)0x0);
  *(undefined4 *)&__this_02[1].klass = uVar3;
  return;
}


// CustomLogic.CustomLogicPhotonSync$$CreateAndSetupObject
// il2cpp: void CustomLogic_CustomLogicPhotonSync__CreateAndSetupObject (CustomLogic_CustomLogicPhotonSync_o* __this, bool persistsOwnership, System_String_o* csvScript, const MethodInfo* method);
// 0x4257a60

void CustomLogic_CustomLogicPhotonSync__CreateAndSetupObject
               (CustomLogic_CustomLogicPhotonSync_o *__this,bool_conflict persistsOwnership,
               System_String_o *csvScript,MethodInfo *method)

{
  Map_MapObject_o **ppMVar1;
  int iVar2;
  void *pvVar3;
  System_Collections_Generic_Dictionary_int__object__o *pSVar4;
  CustomLogic_CustomLogicStartAst_o *pCVar5;
  bool_conflict bVar6;
  undefined8 in_RAX;
  Photon_Pun_PhotonView_o *pPVar7;
  System_String_array *value;
  System_String_o *pSVar8;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  Map_MapObject_o *pMVar9;
  CustomLogic_CustomLogicNetworkViewBuiltin_o *pCVar10;
  CustomLogic_CustomLogicEvaluator_o *pCVar11;
  UnityEngine_Transform_o *__this_01;
  Il2CppObject *pIVar12;
  CustomLogic_CustomLogicEvaluator_o *__this_02;
  Il2CppClass *pIVar13;
  Il2CppObject *__this_03;
  undefined1 extraout_DL;
  void *extraout_RDX;
  Il2CppClass *extraout_RDX_00;
  uint uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  float key;
  float fVar17;
  undefined4 uVar18;
  Map_MapObject_o *pMVar19;
  CustomLogic_CustomLogicPhotonSync_o *pCVar20;
  CustomLogic_CustomLogicEvaluator_o *__this_04;
  Il2CppClass *__this_05;
  Il2CppClass *pIVar21;
  void *unaff_R12;
  UnityEngine_Quaternion_Fields UVar22;
  UnityEngine_Vector3_Fields UVar23;
  undefined8 local_38;
  
  local_38 = in_RAX;
  if (g_data_057adbac == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicMapObjectBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicNetworkViewBuiltin);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapScriptSceneObject);
    il2cpp_runtime_helper_023445d0(&"PhotonSync: MapObject for id {0} already exists, overwriting.");
    il2cpp_runtime_helper_023445d0(&"PhotonSync: NetworkView for id {0} already exists, overwriting.");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057adbac = '\x01';
  }
  bVar6 = System_String__IsNullOrEmpty(csvScript,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return;
  }
  *(char *)((long)&(__this->fields)._synced + 1) = (char)persistsOwnership;
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar14 = *(uint *)(*(long *)(TypeInfo_MapLoader + 0xb8) + 200);
  __this_00 = (CustomLogic_CustomLogicEvaluator_o *)(ulong)uVar14;
  iVar2 = *(int *)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0xcc);
  key = 0.0;
  __this_04 = (CustomLogic_CustomLogicEvaluator_o *)__this;
  pPVar7 = Photon_Pun_MonoBehaviourPun__get_photonView
                     ((Photon_Pun_MonoBehaviourPun_o *)__this,(MethodInfo *)0x0);
  if (pPVar7 == (Photon_Pun_PhotonView_o *)0x0) goto label_04257fa3;
  uVar14 = (uVar14 - iVar2) - (pPVar7->fields).viewIdField;
  __this_00 = (CustomLogic_CustomLogicEvaluator_o *)(ulong)uVar14;
  (__this->fields).ObjectId = uVar14;
  if (csvScript == (System_String_o *)0x0) goto label_04257fa3;
  value = System_String__Split(csvScript,10,0,(MethodInfo *)0x0);
  pSVar8 = System_String__Join("",value,(MethodInfo *)0x0);
  __this_00 = (CustomLogic_CustomLogicEvaluator_o *)il2cpp_runtime_helper_023052d0(TypeInfo_MapScriptSceneObject);
  key = 0.0;
  __this_04 = __this_00;
  Map_MapScriptSceneObject___ctor((Map_MapScriptSceneObject_o *)__this_00,(MethodInfo *)0x0);
  if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) goto label_04257fa3;
  (*(code *)__this_00->klass[1]._1.declaringType)(__this_00,pSVar8,__this_00->klass[1]._1.parent);
  (__this_00->fields).CurrentTime = (float)(__this->fields).ObjectId;
  (__this_00->fields).HasSetMusic = 0;
  *(undefined1 *)((long)&(__this_00->fields).IdToNetworkView + 3) = 1;
  key = 0.0;
  __this_04 = __this_00;
  pMVar9 = Map_MapLoader__LoadObject((Map_MapScriptBaseObject_o *)__this_00,0,(MethodInfo *)0x0);
  if (pMVar9 == (Map_MapObject_o *)0x0) goto label_04257fa3;
  *(undefined1 *)&(pMVar9->fields).RuntimeCreated = 1;
  Map_MapLoader__SetParent_3fadd50(pMVar9,(MethodInfo *)0x0);
  pCVar10 = (CustomLogic_CustomLogicNetworkViewBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicNetworkViewBuiltin);
  CustomLogic_CustomLogicNetworkViewBuiltin___ctor(pCVar10,pMVar9,(MethodInfo *)0x0);
  (__this->fields)._NetworkView_k__BackingField = pCVar10;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._NetworkView_k__BackingField,pCVar10);
  __this_00 = (CustomLogic_CustomLogicEvaluator_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicMapObjectBuiltin);
  CustomLogic_CustomLogicMapObjectBuiltin___ctor
            ((CustomLogic_CustomLogicMapObjectBuiltin_o *)__this_00,pMVar9,(MethodInfo *)0x0);
  (__this->fields)._CustomLogicMapObjectBuiltin_k__BackingField =
       (CustomLogic_CustomLogicMapObjectBuiltin_o *)__this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._CustomLogicMapObjectBuiltin_k__BackingField,__this_00);
  ppMVar1 = &(__this->fields)._MapObject_k__BackingField;
  (__this->fields)._MapObject_k__BackingField = pMVar9;
  pMVar19 = pMVar9;
  il2cpp_runtime_helper_022b4080(ppMVar1);
  key = SUB84(pMVar19,0);
  if (*(int *)((long)&(TypeInfo_CustomLogicManager->fields).sub + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pvVar3 = ((TypeInfo_CustomLogicManager->fields)._CapturedErrors_k__BackingField)->monitor;
  __this_04 = TypeInfo_CustomLogicManager;
  if (pvVar3 == (void *)0x0) goto label_04257fa3;
  pSVar4 = *(System_Collections_Generic_Dictionary_int__object__o **)((long)pvVar3 + 0x38);
  __this_04 = (CustomLogic_CustomLogicEvaluator_o *)0x0;
  if (pSVar4 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_04257fa3;
  key = (float)(__this->fields).ObjectId;
  bVar6 = System_Collections_Generic_Dictionary_int__object___ContainsKey(pSVar4,(int32_t)key,MethodInfo_Boolean_ContainsKey);
  if ((char)bVar6 == '\0') {
    if (*(int *)((long)&(TypeInfo_CustomLogicManager->fields).sub + 4) != 0) goto label_04257d09;
label_04257f00:
    il2cpp_runtime_helper_02337ed0();
    pvVar3 = ((TypeInfo_CustomLogicManager->fields)._CapturedErrors_k__BackingField)->monitor;
  }
  else {
    local_38 = CONCAT44((__this->fields).ObjectId,(undefined4)local_38);
    pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,(long)&local_38 + 4);
    __this_00 = (CustomLogic_CustomLogicEvaluator_o *)
                System_String__Format("PhotonSync: MapObject for id {0} already exists, overwriting.",pIVar12,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    key = 0.0;
    UnityEngine_Debug__LogWarning((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    if (*(int *)((long)&(TypeInfo_CustomLogicManager->fields).sub + 4) == 0) goto label_04257f00;
label_04257d09:
    pvVar3 = ((TypeInfo_CustomLogicManager->fields)._CapturedErrors_k__BackingField)->monitor;
  }
  __this_04 = TypeInfo_CustomLogicManager;
  if ((pvVar3 == (void *)0x0) ||
     (__this_04 = *(CustomLogic_CustomLogicEvaluator_o **)((long)pvVar3 + 0x38),
     __this_04 == (CustomLogic_CustomLogicEvaluator_o *)0x0)) goto label_04257fa3;
  key = (float)(__this->fields).ObjectId;
  System_Collections_Generic_Dictionary_int__object___set_Item
            ((System_Collections_Generic_Dictionary_int__object__o *)__this_04,(int32_t)key,
             (Il2CppObject *)(__this->fields)._CustomLogicMapObjectBuiltin_k__BackingField,MethodInfo_Void_set_Item);
  pvVar3 = ((TypeInfo_CustomLogicManager->fields)._CapturedErrors_k__BackingField)->monitor;
  if (pvVar3 == (void *)0x0) goto label_04257fa3;
  pSVar4 = *(System_Collections_Generic_Dictionary_int__object__o **)((long)pvVar3 + 0x28);
  __this_04 = (CustomLogic_CustomLogicEvaluator_o *)0x0;
  if (pSVar4 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_04257fa3;
  key = (float)(__this->fields).ObjectId;
  bVar6 = System_Collections_Generic_Dictionary_int__object___ContainsKey(pSVar4,(int32_t)key,MethodInfo_Boolean_ContainsKey);
  if ((char)bVar6 == '\0') {
    if (*(int *)((long)&(TypeInfo_CustomLogicManager->fields).sub + 4) != 0) goto label_04257d92;
label_04257f86:
    il2cpp_runtime_helper_02337ed0();
    pvVar3 = ((TypeInfo_CustomLogicManager->fields)._CapturedErrors_k__BackingField)->monitor;
  }
  else {
    local_38 = CONCAT44(local_38._4_4_,(__this->fields).ObjectId);
    pIVar12 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&local_38);
    __this_00 = (CustomLogic_CustomLogicEvaluator_o *)
                System_String__Format("PhotonSync: NetworkView for id {0} already exists, overwriting.",pIVar12,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    key = 0.0;
    UnityEngine_Debug__LogWarning((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    if (*(int *)((long)&(TypeInfo_CustomLogicManager->fields).sub + 4) == 0) goto label_04257f86;
label_04257d92:
    pvVar3 = ((TypeInfo_CustomLogicManager->fields)._CapturedErrors_k__BackingField)->monitor;
  }
  __this_04 = TypeInfo_CustomLogicManager;
  if (pvVar3 != (void *)0x0) {
    __this_04 = (CustomLogic_CustomLogicEvaluator_o *)0x0;
    if (*(System_Collections_Generic_Dictionary_int__object__o **)((long)pvVar3 + 0x28) !=
        (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      key = (float)(__this->fields).ObjectId;
      System_Collections_Generic_Dictionary_int__object___set_Item
                (*(System_Collections_Generic_Dictionary_int__object__o **)((long)pvVar3 + 0x28),(int32_t)key,
                 (Il2CppObject *)(__this->fields)._NetworkView_k__BackingField,MethodInfo_Void_set_Item);
      pCVar10 = (__this->fields)._NetworkView_k__BackingField;
      __this_04 = (CustomLogic_CustomLogicEvaluator_o *)0x0;
      if (pCVar10 != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
        pCVar20 = __this;
        CustomLogic_CustomLogicNetworkViewBuiltin__SetSyncDynamic(pCVar10,__this,(MethodInfo *)0x0);
        key = SUB84(pCVar20,0);
        __this_04 = ((TypeInfo_CustomLogicManager->fields)._CapturedErrors_k__BackingField)->monitor;
        if (__this_04 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          CustomLogic_CustomLogicEvaluator__LoadRuntimeMapObjectComponents
                    (__this_04,pMVar9,1,(MethodInfo *)0x0);
          key = SUB84(pMVar9,0);
          pMVar9 = *ppMVar1;
          if ((pMVar9 != (Map_MapObject_o *)0x0) &&
             (__this_04 = (CustomLogic_CustomLogicEvaluator_o *)(pMVar9->fields).GameObject,
             __this_04 != (CustomLogic_CustomLogicEvaluator_o *)0x0)) {
            key = 0.0;
            pCVar11 = (CustomLogic_CustomLogicEvaluator_o *)
                      UnityEngine_GameObject__get_transform
                                ((UnityEngine_GameObject_o *)__this_04,(MethodInfo *)0x0);
            if (pCVar11 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
              key = 0.0;
              UVar23 = (UnityEngine_Vector3_Fields)
                       UnityEngine_Transform__get_position
                                 ((UnityEngine_Transform_o *)pCVar11,(MethodInfo *)0x0);
              (__this->fields)._correctPosition.fields = UVar23;
              pMVar9 = (__this->fields)._MapObject_k__BackingField;
              __this_04 = pCVar11;
              if ((pMVar9 != (Map_MapObject_o *)0x0) &&
                 (__this_04 = (CustomLogic_CustomLogicEvaluator_o *)(pMVar9->fields).GameObject,
                 __this_04 != (CustomLogic_CustomLogicEvaluator_o *)0x0)) {
                key = 0.0;
                __this_01 = UnityEngine_GameObject__get_transform
                                      ((UnityEngine_GameObject_o *)__this_04,(MethodInfo *)0x0);
                if (__this_01 != (UnityEngine_Transform_o *)0x0) {
                  UVar22 = (UnityEngine_Quaternion_Fields)
                           UnityEngine_Transform__get_rotation(__this_01,(MethodInfo *)0x0);
                  (__this->fields)._correctRotation.fields = UVar22;
                  *(undefined1 *)&(__this->fields)._inited = 1;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
label_04257fa3:
  il2cpp_runtime_helper_022b2c90();
  pCVar5 = (__this_04->fields)._start;
  pCVar11 = __this_04;
  fVar17 = key;
  if (pCVar5 != (CustomLogic_CustomLogicStartAst_o *)0x0) {
    if (unaff_R12 != pCVar5[3].monitor) {
      return;
    }
    *(undefined1 *)((long)&(__this_04->fields).IdToNetworkView + 1) = extraout_DL;
    if (g_data_057adbae == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishInit_d__46);
      g_data_057adbae = '\x01';
    }
    __this_02 = (CustomLogic_CustomLogicEvaluator_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishInit_d__46);
    fVar17 = 0.0;
    pCVar11 = __this_02;
    System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
    *(undefined4 *)&(__this_02->fields)._networkCallback = 0;
    __this_00 = (CustomLogic_CustomLogicEvaluator_o *)0x0;
    if (__this_02 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      (__this_02->fields).IdToNetworkView =
           (System_Collections_Generic_Dictionary_int__CustomLogicNetworkViewBuiltin__o *)__this_04;
      il2cpp_runtime_helper_022b4080(&(__this_02->fields).IdToNetworkView,__this_04);
      (__this_02->fields).CurrentTime = key;
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                ((UnityEngine_MonoBehaviour_o *)__this_04,(System_Collections_IEnumerator_o *)__this_02,
                 (MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adbae == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishInit_d__46);
    g_data_057adbae = '\x01';
  }
  pIVar13 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishInit_d__46);
  uVar15 = 0;
  __this_05 = pIVar13;
  System_Object___ctor((Il2CppObject *)pIVar13,(MethodInfo *)0x0);
  *(undefined4 *)&(pIVar13->_1).name = 0;
  if (pIVar13 != (Il2CppClass *)0x0) {
    *(CustomLogic_CustomLogicEvaluator_o **)&(pIVar13->_1).byval_arg.bits = pCVar11;
    il2cpp_runtime_helper_022b4080(&(pIVar13->_1).byval_arg.bits,pCVar11);
    *(float *)&(pIVar13->_1).byval_arg.data = fVar17;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar13 = (__this_05->_1).element_class;
  pIVar21 = __this_05;
  uVar16 = uVar15;
  if (pIVar13 != (Il2CppClass *)0x0) {
    if (__this_00 != (pIVar13->_1).fields) {
      return;
    }
    if (g_data_057adbad == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishDynamicInit_d__45);
      g_data_057adbad = '\x01';
    }
    pIVar13 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishDynamicInit_d__45);
    uVar16 = 0;
    pIVar21 = pIVar13;
    System_Object___ctor((Il2CppObject *)pIVar13,(MethodInfo *)0x0);
    *(undefined4 *)&(pIVar13->_1).name = 0;
    if (pIVar13 != (Il2CppClass *)0x0) {
      (pIVar13->_1).byval_arg.data = __this_05;
      il2cpp_runtime_helper_022b4080(&(pIVar13->_1).byval_arg,__this_05);
      *(undefined1 *)&(pIVar13->_1).byval_arg.bits = uVar15;
      (pIVar13->_1).this_arg.data = extraout_RDX;
      il2cpp_runtime_helper_022b4080(&(pIVar13->_1).this_arg,extraout_RDX);
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                ((UnityEngine_MonoBehaviour_o *)__this_05,(System_Collections_IEnumerator_o *)pIVar13,
                 (MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adbad == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishDynamicInit_d__45);
    g_data_057adbad = '\x01';
  }
  __this_03 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishDynamicInit_d__45);
  uVar18 = 0;
  pIVar12 = __this_03;
  System_Object___ctor(__this_03,(MethodInfo *)0x0);
  *(undefined4 *)&__this_03[1].klass = 0;
  if (__this_03 != (Il2CppObject *)0x0) {
    __this_03[2].klass = pIVar21;
    il2cpp_runtime_helper_022b4080(__this_03 + 2,pIVar21);
    *(undefined1 *)&__this_03[2].monitor = uVar16;
    __this_03[3].klass = extraout_RDX_00;
    il2cpp_runtime_helper_022b4080(__this_03 + 3,extraout_RDX_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(pIVar12,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar12[1].klass = uVar18;
  return;
}


// CustomLogic.CustomLogicPhotonSync$$WaitAndFinishDynamicInit
// il2cpp: System_Collections_IEnumerator_o* CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit (CustomLogic_CustomLogicPhotonSync_o* __this, bool persistsOwnership, System_String_o* csvScript, const MethodInfo* method);
// 0x42581b0

System_Collections_IEnumerator_o *
CustomLogic_CustomLogicPhotonSync__WaitAndFinishDynamicInit
          (CustomLogic_CustomLogicPhotonSync_o *__this,bool_conflict persistsOwnership,
          System_String_o *csvScript,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar1;
  Il2CppObject *__this_01;
  
  if (g_data_057adbad == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishDynamicInit_d__45);
    g_data_057adbad = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishDynamicInit_d__45);
  uVar1 = 0;
  __this_01 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_helper_022b4080(__this_00 + 2,__this);
    *(char *)&__this_00[2].monitor = (char)persistsOwnership;
    __this_00[3].klass = (Il2CppClass *)csvScript;
    il2cpp_runtime_helper_022b4080(__this_00 + 3,csvScript);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = uVar1;
  return extraout_RAX;
}


// CustomLogic.CustomLogicPhotonSync$$WaitAndFinishInit
// il2cpp: System_Collections_IEnumerator_o* CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit (CustomLogic_CustomLogicPhotonSync_o* __this, int32_t mapObjectId, const MethodInfo* method);
// 0x4258060

System_Collections_IEnumerator_o *
CustomLogic_CustomLogicPhotonSync__WaitAndFinishInit
          (CustomLogic_CustomLogicPhotonSync_o *__this,int32_t mapObjectId,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  UnityEngine_Coroutine_o *pUVar2;
  Il2CppObject *__this_00;
  System_Collections_IEnumerator_o *extraout_RAX;
  void *extraout_RDX;
  Il2CppClass *extraout_RDX_00;
  void *unaff_RBP;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  Il2CppClass *__this_01;
  Il2CppClass *pIVar6;
  Il2CppObject *__this_02;
  
  if (g_data_057adbae == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishInit_d__46);
    g_data_057adbae = '\x01';
  }
  pIVar1 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishInit_d__46);
  uVar3 = 0;
  __this_01 = pIVar1;
  System_Object___ctor((Il2CppObject *)pIVar1,(MethodInfo *)0x0);
  *(undefined4 *)&(pIVar1->_1).name = 0;
  if (pIVar1 != (Il2CppClass *)0x0) {
    *(CustomLogic_CustomLogicPhotonSync_o **)&(pIVar1->_1).byval_arg.bits = __this;
    il2cpp_runtime_helper_022b4080(&(pIVar1->_1).byval_arg.bits,__this);
    *(int32_t *)&(pIVar1->_1).byval_arg.data = mapObjectId;
    return (System_Collections_IEnumerator_o *)pIVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar1 = (__this_01->_1).element_class;
  pIVar6 = __this_01;
  uVar4 = uVar3;
  if (pIVar1 != (Il2CppClass *)0x0) {
    if (unaff_RBP != (pIVar1->_1).fields) {
      return (System_Collections_IEnumerator_o *)pIVar1;
    }
    if (g_data_057adbad == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishDynamicInit_d__45);
      g_data_057adbad = '\x01';
    }
    pIVar1 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishDynamicInit_d__45);
    uVar4 = 0;
    pIVar6 = pIVar1;
    System_Object___ctor((Il2CppObject *)pIVar1,(MethodInfo *)0x0);
    *(undefined4 *)&(pIVar1->_1).name = 0;
    if (pIVar1 != (Il2CppClass *)0x0) {
      (pIVar1->_1).byval_arg.data = __this_01;
      il2cpp_runtime_helper_022b4080(&(pIVar1->_1).byval_arg,__this_01);
      *(undefined1 *)&(pIVar1->_1).byval_arg.bits = uVar3;
      (pIVar1->_1).this_arg.data = extraout_RDX;
      il2cpp_runtime_helper_022b4080(&(pIVar1->_1).this_arg,extraout_RDX);
      pUVar2 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                         ((UnityEngine_MonoBehaviour_o *)__this_01,(System_Collections_IEnumerator_o *)pIVar1,
                          (MethodInfo *)0x0);
      return (System_Collections_IEnumerator_o *)pUVar2;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adbad == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishDynamicInit_d__45);
    g_data_057adbad = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishDynamicInit_d__45);
  uVar5 = 0;
  __this_02 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = pIVar6;
    il2cpp_runtime_helper_022b4080(__this_00 + 2,pIVar6);
    *(undefined1 *)&__this_00[2].monitor = uVar4;
    __this_00[3].klass = extraout_RDX_00;
    il2cpp_runtime_helper_022b4080(__this_00 + 3,extraout_RDX_00);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_02,(MethodInfo *)0x0);
  *(undefined4 *)&__this_02[1].klass = uVar5;
  return extraout_RAX;
}


// CustomLogic.CustomLogicPhotonSync$$FinishInit
// il2cpp: void CustomLogic_CustomLogicPhotonSync__FinishInit (CustomLogic_CustomLogicPhotonSync_o* __this, int32_t mapObjectId, const MethodInfo* method);
// 0x4258280

void CustomLogic_CustomLogicPhotonSync__FinishInit
               (CustomLogic_CustomLogicPhotonSync_o *__this,int32_t mapObjectId,MethodInfo *method)

{
  void *pvVar1;
  Map_MapObject_o *pMVar2;
  Photon_Pun_PhotonMessageInfo_o __this_00;
  CustomLogic_CustomLogicPhotonSync_o *message;
  CustomLogic_CustomLogicNetworkViewBuiltin_o *__this_01;
  UnityEngine_Transform_o *__this_02;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this_03;
  Photon_Realtime_Player_o *unaff_RBP;
  undefined4 in_register_00000034;
  System_Collections_Generic_Dictionary_int__object__o *pSVar3;
  CustomLogic_CustomLogicNetworkViewBuiltin_o *pCVar4;
  undefined8 unaff_R12;
  Photon_Pun_PhotonView_o *unaff_R13;
  double sentServerTime;
  UnityEngine_Quaternion_Fields UVar5;
  UnityEngine_Vector3_Fields UVar6;
  
  message = (CustomLogic_CustomLogicPhotonSync_o *)CONCAT44(in_register_00000034,mapObjectId);
  if (g_data_057adbaf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicNetworkViewBuiltin_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MapObject_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapLoader);
    g_data_057adbaf = '\x01';
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) goto label_04258306;
label_042582a7:
    pSVar3 = (System_Collections_Generic_Dictionary_int__object__o *)**(long **)(TypeInfo_MapLoader + 0xb8);
    if (pSVar3 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      pCVar4 = (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0;
      goto label_04258423;
    }
  }
  else {
    if (*(int *)(TypeInfo_MapLoader + 0xe4) != 0) goto label_042582a7;
label_04258306:
    il2cpp_runtime_helper_02337ed0();
    pSVar3 = (System_Collections_Generic_Dictionary_int__object__o *)**(long **)(TypeInfo_MapLoader + 0xb8);
    pCVar4 = (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0;
    if (pSVar3 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) goto label_04258423;
  }
  message = (CustomLogic_CustomLogicPhotonSync_o *)
            System_Collections_Generic_Dictionary_int__object___get_Item(pSVar3,mapObjectId,MethodInfo_MapObject_get_Item);
  (__this->fields)._MapObject_k__BackingField = (Map_MapObject_o *)message;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._MapObject_k__BackingField);
  if (TypeInfo_CustomLogicManager[2].fields.Inited == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pvVar1 = (TypeInfo_CustomLogicManager[1].fields._classInstances)->monitor;
  pCVar4 = TypeInfo_CustomLogicManager;
  if ((pvVar1 != (void *)0x0) &&
     (pSVar3 = *(System_Collections_Generic_Dictionary_int__object__o **)((long)pvVar1 + 0x28),
     pCVar4 = (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0,
     pSVar3 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
    message = (CustomLogic_CustomLogicPhotonSync_o *)
              System_Collections_Generic_Dictionary_int__object___get_Item(pSVar3,mapObjectId,MethodInfo_CustomLogicNetworkViewBuiltin_get_Item);
    (__this->fields)._NetworkView_k__BackingField = (CustomLogic_CustomLogicNetworkViewBuiltin_o *)message;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._NetworkView_k__BackingField);
    pCVar4 = (__this->fields)._NetworkView_k__BackingField;
    if (pCVar4 != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
      message = __this;
      CustomLogic_CustomLogicNetworkViewBuiltin__SetSync(pCVar4,__this,(MethodInfo *)0x0);
      pMVar2 = (__this->fields)._MapObject_k__BackingField;
      if ((pMVar2 != (Map_MapObject_o *)0x0) &&
         (pCVar4 = (CustomLogic_CustomLogicNetworkViewBuiltin_o *)(pMVar2->fields).GameObject,
         pCVar4 != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0)) {
        message = (CustomLogic_CustomLogicPhotonSync_o *)0x0;
        __this_01 = (CustomLogic_CustomLogicNetworkViewBuiltin_o *)
                    UnityEngine_GameObject__get_transform
                              ((UnityEngine_GameObject_o *)pCVar4,(MethodInfo *)0x0);
        if (__this_01 != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
          message = (CustomLogic_CustomLogicPhotonSync_o *)0x0;
          UVar6 = (UnityEngine_Vector3_Fields)
                  UnityEngine_Transform__get_position((UnityEngine_Transform_o *)__this_01,(MethodInfo *)0x0);
          (__this->fields)._correctPosition.fields = UVar6;
          pMVar2 = (__this->fields)._MapObject_k__BackingField;
          pCVar4 = __this_01;
          if ((pMVar2 != (Map_MapObject_o *)0x0) &&
             (pCVar4 = (CustomLogic_CustomLogicNetworkViewBuiltin_o *)(pMVar2->fields).GameObject,
             pCVar4 != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0)) {
            message = (CustomLogic_CustomLogicPhotonSync_o *)0x0;
            __this_02 = UnityEngine_GameObject__get_transform
                                  ((UnityEngine_GameObject_o *)pCVar4,(MethodInfo *)0x0);
            if (__this_02 != (UnityEngine_Transform_o *)0x0) {
              UVar5 = (UnityEngine_Quaternion_Fields)
                      UnityEngine_Transform__get_rotation(__this_02,(MethodInfo *)0x0);
              (__this->fields)._correctRotation.fields = UVar5;
              *(undefined1 *)&(__this->fields)._inited = 1;
              return;
            }
          }
        }
      }
    }
  }
label_04258423:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adbb0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicPlayerBuiltin);
    g_data_057adbb0 = '\x01';
  }
  pCVar4 = (CustomLogic_CustomLogicNetworkViewBuiltin_o *)(pCVar4->fields)._addonInstances;
  if (pCVar4 != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
    __this_03 = (CustomLogic_CustomLogicPlayerBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicPlayerBuiltin);
    CustomLogic_CustomLogicPlayerBuiltin___ctor(__this_03,unaff_RBP,(MethodInfo *)0x0);
    __this_00.fields.Sender = (Photon_Realtime_Player_o *)unaff_R12;
    __this_00.fields._0_8_ = __this;
    __this_00.fields.photonView = unaff_R13;
    sentServerTime =
         Photon_Pun_PhotonMessageInfo__get_SentServerTime(__this_00,(MethodInfo *)&stack0xfffffffffffffff0);
    CustomLogic_CustomLogicNetworkViewBuiltin__OnNetworkMessage
              (pCVar4,__this_03,(System_String_o *)message,sentServerTime,(MethodInfo *)0x0);
  }
  return;
}


// CustomLogic.CustomLogicPhotonSync$$SendMessageRPC
// il2cpp: void CustomLogic_CustomLogicPhotonSync__SendMessageRPC (CustomLogic_CustomLogicPhotonSync_o* __this, System_String_o* message, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x4258430

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
  
  if (g_data_057adbb0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicPlayerBuiltin);
    g_data_057adbb0 = '\x01';
  }
  player = info.fields.Sender;
  __this_00 = (__this->fields)._NetworkView_k__BackingField;
  if (__this_00 != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
    __this_02 = (CustomLogic_CustomLogicPlayerBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicPlayerBuiltin);
    CustomLogic_CustomLogicPlayerBuiltin___ctor(__this_02,player,(MethodInfo *)0x0);
    __this_01.fields.Sender = (Photon_Realtime_Player_o *)unaff_R12;
    __this_01.fields._0_8_ = unaff_RBX;
    __this_01.fields.photonView = unaff_R13;
    sentServerTime = Photon_Pun_PhotonMessageInfo__get_SentServerTime(__this_01,(MethodInfo *)&info);
    CustomLogic_CustomLogicNetworkViewBuiltin__OnNetworkMessage
              (__this_00,__this_02,message,sentServerTime,(MethodInfo *)0x0);
  }
  return;
}


// CustomLogic.CustomLogicPhotonSync$$SendMessage
// il2cpp: void CustomLogic_CustomLogicPhotonSync__SendMessage (CustomLogic_CustomLogicPhotonSync_o* __this, Photon_Realtime_Player_o* player, System_String_o* message, const MethodInfo* method);
// 0x42584b0

void CustomLogic_CustomLogicPhotonSync__SendMessage
               (CustomLogic_CustomLogicPhotonSync_o *__this,Photon_Realtime_Player_o *player,
               System_String_o *message,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  void *pvVar2;
  undefined8 uVar3;
  bool_conflict bVar4;
  System_Object_array *pSVar5;
  long lVar6;
  CustomLogic_CustomLogicPhotonSync_o *__this_00;
  Il2CppObject *pIVar7;
  Il2CppClass *pIVar8;
  UnityEngine_Transform_o *pUVar9;
  Il2CppObject *__this_01;
  undefined4 uVar10;
  Photon_Realtime_Player_o *targetPlayer;
  MethodInfo *pMVar11;
  Il2CppClass *pIVar12;
  Il2CppClass *pIVar13;
  Il2CppClass *pIVar14;
  float fVar15;
  float fVar16;
  undefined8 in_XMM2_Qa;
  undefined8 uVar17;
  undefined8 in_XMM3_Qa;
  undefined8 uVar18;
  UnityEngine_Quaternion_o UVar19;
  UnityEngine_Vector3_o UVar20;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_f8;
  uint uStack_f4;
  
  if (g_data_057adbb1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&"SendMessageRPC");
    g_data_057adbb1 = '\x01';
  }
  pPVar1 = (__this->fields).PhotonView;
  pSVar5 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar5 == (System_Object_array *)0x0) {
label_04258566:
    il2cpp_runtime_helper_022b2c90();
label_0425856b:
    il2cpp_runtime_helper_022b2ca0();
  }
  else if ((message == (System_String_o *)0x0) || (lVar6 = il2cpp_runtime_helper_023051f0(message), lVar6 != 0)) {
    if ((int)pSVar5->max_length != 0) {
      pSVar5->m_Items[0] = (Il2CppObject *)message;
      il2cpp_runtime_helper_022b4080(pSVar5->m_Items);
      if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC_3efa220(pPVar1,"SendMessageRPC",player,pSVar5,(MethodInfo *)0x0);
        return;
      }
      goto label_04258566;
    }
    goto label_0425856b;
  }
  lVar6 = il2cpp_runtime_helper_0231b270();
  pIVar7 = (Il2CppObject *)0x0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057adbb2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&"SendMessageRPC");
    g_data_057adbb2 = '\x01';
  }
  pPVar1 = *(Photon_Pun_PhotonView_o **)(lVar6 + 0x40);
  pSVar5 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar5 == (System_Object_array *)0x0) {
label_04258629:
    il2cpp_runtime_helper_022b2c90();
label_0425862e:
    il2cpp_runtime_helper_022b2ca0();
  }
  else if ((pIVar7 == (Il2CppObject *)0x0) || (lVar6 = il2cpp_runtime_helper_023051f0(pIVar7), lVar6 != 0)) {
    if ((int)pSVar5->max_length != 0) {
      pSVar5->m_Items[0] = pIVar7;
      il2cpp_runtime_helper_022b4080(pSVar5->m_Items);
      if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(pPVar1,"SendMessageRPC",0,pSVar5,(MethodInfo *)0x0);
        return;
      }
      goto label_04258629;
    }
    goto label_0425862e;
  }
  lVar6 = il2cpp_runtime_helper_0231b270();
  pIVar7 = (Il2CppObject *)0x0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057adbb3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&"SendMessageRPC");
    g_data_057adbb3 = '\x01';
  }
  pPVar1 = *(Photon_Pun_PhotonView_o **)(lVar6 + 0x40);
  pSVar5 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar5 == (System_Object_array *)0x0) {
label_042586fc:
    il2cpp_runtime_helper_022b2c90();
label_04258701:
    il2cpp_runtime_helper_022b2ca0();
  }
  else if ((pIVar7 == (Il2CppObject *)0x0) || (lVar6 = il2cpp_runtime_helper_023051f0(pIVar7), lVar6 != 0)) {
    if ((int)pSVar5->max_length != 0) {
      pSVar5->m_Items[0] = pIVar7;
      il2cpp_runtime_helper_022b4080(pSVar5->m_Items);
      if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(pPVar1,"SendMessageRPC",1,pSVar5,(MethodInfo *)0x0);
        return;
      }
      goto label_042586fc;
    }
    goto label_04258701;
  }
  __this_00 = (CustomLogic_CustomLogicPhotonSync_o *)il2cpp_runtime_helper_0231b270();
  targetPlayer = (Photon_Realtime_Player_o *)0x0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057adbb4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    il2cpp_runtime_helper_023445d0(&"SyncRPC");
    g_data_057adbb4 = '\x01';
  }
  if (((char)(__this_00->fields)._inited == '\0') || ((char)(__this_00->fields)._syncTransforms == '\0')) {
    return;
  }
  pPVar1 = (__this_00->fields).PhotonView;
  pMVar11 = (MethodInfo *)0x2;
  pSVar5 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  UVar20 = CustomLogic_CustomLogicPhotonSync__GetPosition(__this_00,pMVar11);
  fVar15 = UVar20.fields.z;
  pMVar11 = (MethodInfo *)il2cpp_runtime_helper_02304f30(TypeInfo_Vector3);
  if (pSVar5 != (System_Object_array *)0x0) {
    if ((pMVar11 != (MethodInfo *)0x0) && (lVar6 = il2cpp_runtime_helper_023051f0(pMVar11), lVar6 == 0))
    goto label_042588a8;
    if ((int)pSVar5->max_length != 0) {
      pSVar5->m_Items[0] = (Il2CppObject *)pMVar11;
      il2cpp_runtime_helper_022b4080(pSVar5->m_Items);
      UVar19 = CustomLogic_CustomLogicPhotonSync__GetRotation(__this_00,pMVar11);
      fVar15 = UVar19.fields.z;
      pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(TypeInfo_Quaternion);
      if ((pIVar7 != (Il2CppObject *)0x0) && (lVar6 = il2cpp_runtime_helper_023051f0(pIVar7), lVar6 == 0))
      goto label_042588a8;
      if (1 < (uint)pSVar5->max_length) {
        pSVar5->m_Items[1] = pIVar7;
        il2cpp_runtime_helper_022b4080(pSVar5->m_Items + 1);
        if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC_3efa220(pPVar1,"SyncRPC",targetPlayer,pSVar5,(MethodInfo *)0x0);
          return;
        }
        goto label_042588a3;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_042588a3:
  il2cpp_runtime_helper_022b2c90();
label_042588a8:
  pIVar8 = (Il2CppClass *)il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10();
  pIVar12 = pIVar8;
  if (g_data_057adbb8 == '\0') {
    pIVar12 = (Il2CppClass *)&TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057adbb8 = '\x01';
  }
  pIVar13 = (pIVar8->_1).castClass;
  if (pIVar13 != (Il2CppClass *)0x0) {
    pIVar12 = (Il2CppClass *)(pIVar13->_1).namespaze;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pIVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      if (g_data_057a65d5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a65d5 = '\x01';
      }
      return;
    }
    pIVar13 = (pIVar8->_1).castClass;
    if (((pIVar13 != (Il2CppClass *)0x0) &&
        (pIVar12 = (Il2CppClass *)(pIVar13->_1).namespaze, pIVar12 != (Il2CppClass *)0x0)) &&
       (pUVar9 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pIVar12,(MethodInfo *)0x0),
       pUVar9 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__get_position(pUVar9,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar13 = pIVar12;
  if (g_data_057adbb9 == '\0') {
    pIVar13 = (Il2CppClass *)&TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057adbb9 = '\x01';
  }
  pIVar14 = (pIVar12->_1).castClass;
  if (pIVar14 != (Il2CppClass *)0x0) {
    pIVar13 = (Il2CppClass *)(pIVar14->_1).namespaze;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pIVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      if (g_data_057a6843 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
        g_data_057a6843 = '\x01';
      }
      return;
    }
    pIVar12 = (pIVar12->_1).castClass;
    if (((pIVar12 != (Il2CppClass *)0x0) &&
        (pIVar13 = (Il2CppClass *)(pIVar12->_1).namespaze, pIVar13 != (Il2CppClass *)0x0)) &&
       (pUVar9 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pIVar13,(MethodInfo *)0x0),
       pUVar9 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__get_rotation(pUVar9,(MethodInfo *)0x0);
      return;
    }
  }
  uVar3 = il2cpp_runtime_helper_022b2c90();
  pIVar12 = (pIVar13->_1).element_class;
  pIVar14 = pIVar13;
  fVar16 = fVar15;
  uVar17 = in_XMM2_Qa;
  uVar18 = in_XMM3_Qa;
  if (pIVar12 != (Il2CppClass *)0x0) {
    if (pIVar8 != (pIVar12->_1).fields) {
      return;
    }
    if (g_data_057adbb5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishSync_d__54);
      g_data_057adbb5 = '\x01';
    }
    pIVar12 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishSync_d__54);
    pIVar14 = pIVar12;
    System_Object___ctor((Il2CppObject *)pIVar12,(MethodInfo *)0x0);
    *(undefined4 *)&(pIVar12->_1).name = 0;
    if (pIVar12 != (Il2CppClass *)0x0) {
      (pIVar12->_1).byval_arg.data = pIVar13;
      il2cpp_runtime_helper_022b4080(&(pIVar12->_1).byval_arg,pIVar13);
      *(undefined8 *)&(pIVar12->_1).byval_arg.bits = uVar3;
      *(float *)&(pIVar12->_1).this_arg.data = fVar15;
      uStack_f8 = (undefined4)in_XMM2_Qa;
      uStack_f4 = (uint)((ulong)in_XMM2_Qa >> 0x20);
      *(undefined4 *)((long)&(pIVar12->_1).this_arg.data + 4) = uStack_f8;
      (pIVar12->_1).this_arg.bits = uStack_f4;
      *(int *)&(pIVar12->_1).this_arg.field_0xc = (int)in_XMM3_Qa;
      *(int *)&(pIVar12->_1).element_class = (int)((ulong)in_XMM3_Qa >> 0x20);
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                ((UnityEngine_MonoBehaviour_o *)pIVar13,(System_Collections_IEnumerator_o *)pIVar12,
                 (MethodInfo *)0x0);
      return;
    }
  }
  pvVar2 = (void *)il2cpp_runtime_helper_022b2c90();
  if (g_data_057adbb5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishSync_d__54);
    g_data_057adbb5 = '\x01';
  }
  __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishSync_d__54);
  uVar10 = 0;
  pIVar7 = __this_01;
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = 0;
  if (__this_01 == (Il2CppObject *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor(pIVar7,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar7[1].klass = uVar10;
    return;
  }
  __this_01[2].klass = pIVar14;
  il2cpp_runtime_helper_022b4080(__this_01 + 2,pIVar14);
  __this_01[2].monitor = pvVar2;
  *(float *)&__this_01[3].klass = fVar16;
  uStack_160 = (undefined4)uVar17;
  uStack_15c = (undefined4)((ulong)uVar17 >> 0x20);
  *(undefined4 *)((long)&__this_01[3].klass + 4) = uStack_160;
  *(undefined4 *)&__this_01[3].monitor = uStack_15c;
  *(int *)((long)&__this_01[3].monitor + 4) = (int)uVar18;
  *(int *)&__this_01[4].klass = (int)((ulong)uVar18 >> 0x20);
  return;
}


// CustomLogic.CustomLogicPhotonSync$$SendMessageAll
// il2cpp: void CustomLogic_CustomLogicPhotonSync__SendMessageAll (CustomLogic_CustomLogicPhotonSync_o* __this, System_String_o* message, const MethodInfo* method);
// 0x4258580

void CustomLogic_CustomLogicPhotonSync__SendMessageAll
               (CustomLogic_CustomLogicPhotonSync_o *__this,System_String_o *message,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  void *pvVar2;
  undefined8 uVar3;
  bool_conflict bVar4;
  System_Object_array *pSVar5;
  long lVar6;
  CustomLogic_CustomLogicPhotonSync_o *__this_00;
  Il2CppObject *pIVar7;
  Il2CppClass *pIVar8;
  UnityEngine_Transform_o *pUVar9;
  Il2CppObject *__this_01;
  MethodInfo *extraout_RDX;
  undefined4 uVar10;
  Photon_Realtime_Player_o *targetPlayer;
  MethodInfo *pMVar11;
  Il2CppClass *pIVar12;
  Il2CppClass *pIVar13;
  Il2CppClass *pIVar14;
  float fVar15;
  float fVar16;
  undefined8 in_XMM2_Qa;
  undefined8 uVar17;
  undefined8 in_XMM3_Qa;
  undefined8 uVar18;
  UnityEngine_Quaternion_o UVar19;
  UnityEngine_Vector3_o UVar20;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_d0;
  uint uStack_cc;
  
  if (g_data_057adbb2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&"SendMessageRPC");
    g_data_057adbb2 = '\x01';
    method = extraout_RDX;
  }
  pPVar1 = (__this->fields).PhotonView;
  pSVar5 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,1,method);
  if (pSVar5 == (System_Object_array *)0x0) {
label_04258629:
    il2cpp_runtime_helper_022b2c90();
label_0425862e:
    il2cpp_runtime_helper_022b2ca0();
  }
  else if ((message == (System_String_o *)0x0) || (lVar6 = il2cpp_runtime_helper_023051f0(message), lVar6 != 0)) {
    if ((int)pSVar5->max_length != 0) {
      pSVar5->m_Items[0] = (Il2CppObject *)message;
      il2cpp_runtime_helper_022b4080(pSVar5->m_Items);
      if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(pPVar1,"SendMessageRPC",0,pSVar5,(MethodInfo *)0x0);
        return;
      }
      goto label_04258629;
    }
    goto label_0425862e;
  }
  lVar6 = il2cpp_runtime_helper_0231b270();
  pIVar7 = (Il2CppObject *)0x0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057adbb3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&"SendMessageRPC");
    g_data_057adbb3 = '\x01';
  }
  pPVar1 = *(Photon_Pun_PhotonView_o **)(lVar6 + 0x40);
  pSVar5 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  if (pSVar5 == (System_Object_array *)0x0) {
label_042586fc:
    il2cpp_runtime_helper_022b2c90();
label_04258701:
    il2cpp_runtime_helper_022b2ca0();
  }
  else if ((pIVar7 == (Il2CppObject *)0x0) || (lVar6 = il2cpp_runtime_helper_023051f0(pIVar7), lVar6 != 0)) {
    if ((int)pSVar5->max_length != 0) {
      pSVar5->m_Items[0] = pIVar7;
      il2cpp_runtime_helper_022b4080(pSVar5->m_Items);
      if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(pPVar1,"SendMessageRPC",1,pSVar5,(MethodInfo *)0x0);
        return;
      }
      goto label_042586fc;
    }
    goto label_04258701;
  }
  __this_00 = (CustomLogic_CustomLogicPhotonSync_o *)il2cpp_runtime_helper_0231b270();
  targetPlayer = (Photon_Realtime_Player_o *)0x0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057adbb4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    il2cpp_runtime_helper_023445d0(&"SyncRPC");
    g_data_057adbb4 = '\x01';
  }
  if (((char)(__this_00->fields)._inited == '\0') || ((char)(__this_00->fields)._syncTransforms == '\0')) {
    return;
  }
  pPVar1 = (__this_00->fields).PhotonView;
  pMVar11 = (MethodInfo *)0x2;
  pSVar5 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  UVar20 = CustomLogic_CustomLogicPhotonSync__GetPosition(__this_00,pMVar11);
  fVar15 = UVar20.fields.z;
  pMVar11 = (MethodInfo *)il2cpp_runtime_helper_02304f30(TypeInfo_Vector3);
  if (pSVar5 != (System_Object_array *)0x0) {
    if ((pMVar11 != (MethodInfo *)0x0) && (lVar6 = il2cpp_runtime_helper_023051f0(pMVar11), lVar6 == 0))
    goto label_042588a8;
    if ((int)pSVar5->max_length != 0) {
      pSVar5->m_Items[0] = (Il2CppObject *)pMVar11;
      il2cpp_runtime_helper_022b4080(pSVar5->m_Items);
      UVar19 = CustomLogic_CustomLogicPhotonSync__GetRotation(__this_00,pMVar11);
      fVar15 = UVar19.fields.z;
      pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(TypeInfo_Quaternion);
      if ((pIVar7 != (Il2CppObject *)0x0) && (lVar6 = il2cpp_runtime_helper_023051f0(pIVar7), lVar6 == 0))
      goto label_042588a8;
      if (1 < (uint)pSVar5->max_length) {
        pSVar5->m_Items[1] = pIVar7;
        il2cpp_runtime_helper_022b4080(pSVar5->m_Items + 1);
        if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC_3efa220(pPVar1,"SyncRPC",targetPlayer,pSVar5,(MethodInfo *)0x0);
          return;
        }
        goto label_042588a3;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_042588a3:
  il2cpp_runtime_helper_022b2c90();
label_042588a8:
  pIVar8 = (Il2CppClass *)il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10();
  pIVar12 = pIVar8;
  if (g_data_057adbb8 == '\0') {
    pIVar12 = (Il2CppClass *)&TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057adbb8 = '\x01';
  }
  pIVar13 = (pIVar8->_1).castClass;
  if (pIVar13 != (Il2CppClass *)0x0) {
    pIVar12 = (Il2CppClass *)(pIVar13->_1).namespaze;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pIVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      if (g_data_057a65d5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a65d5 = '\x01';
      }
      return;
    }
    pIVar13 = (pIVar8->_1).castClass;
    if (((pIVar13 != (Il2CppClass *)0x0) &&
        (pIVar12 = (Il2CppClass *)(pIVar13->_1).namespaze, pIVar12 != (Il2CppClass *)0x0)) &&
       (pUVar9 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pIVar12,(MethodInfo *)0x0),
       pUVar9 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__get_position(pUVar9,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar13 = pIVar12;
  if (g_data_057adbb9 == '\0') {
    pIVar13 = (Il2CppClass *)&TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057adbb9 = '\x01';
  }
  pIVar14 = (pIVar12->_1).castClass;
  if (pIVar14 != (Il2CppClass *)0x0) {
    pIVar13 = (Il2CppClass *)(pIVar14->_1).namespaze;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pIVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      if (g_data_057a6843 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
        g_data_057a6843 = '\x01';
      }
      return;
    }
    pIVar12 = (pIVar12->_1).castClass;
    if (((pIVar12 != (Il2CppClass *)0x0) &&
        (pIVar13 = (Il2CppClass *)(pIVar12->_1).namespaze, pIVar13 != (Il2CppClass *)0x0)) &&
       (pUVar9 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pIVar13,(MethodInfo *)0x0),
       pUVar9 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__get_rotation(pUVar9,(MethodInfo *)0x0);
      return;
    }
  }
  uVar3 = il2cpp_runtime_helper_022b2c90();
  pIVar12 = (pIVar13->_1).element_class;
  pIVar14 = pIVar13;
  fVar16 = fVar15;
  uVar17 = in_XMM2_Qa;
  uVar18 = in_XMM3_Qa;
  if (pIVar12 != (Il2CppClass *)0x0) {
    if (pIVar8 != (pIVar12->_1).fields) {
      return;
    }
    if (g_data_057adbb5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishSync_d__54);
      g_data_057adbb5 = '\x01';
    }
    pIVar12 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishSync_d__54);
    pIVar14 = pIVar12;
    System_Object___ctor((Il2CppObject *)pIVar12,(MethodInfo *)0x0);
    *(undefined4 *)&(pIVar12->_1).name = 0;
    if (pIVar12 != (Il2CppClass *)0x0) {
      (pIVar12->_1).byval_arg.data = pIVar13;
      il2cpp_runtime_helper_022b4080(&(pIVar12->_1).byval_arg,pIVar13);
      *(undefined8 *)&(pIVar12->_1).byval_arg.bits = uVar3;
      *(float *)&(pIVar12->_1).this_arg.data = fVar15;
      uStack_d0 = (undefined4)in_XMM2_Qa;
      uStack_cc = (uint)((ulong)in_XMM2_Qa >> 0x20);
      *(undefined4 *)((long)&(pIVar12->_1).this_arg.data + 4) = uStack_d0;
      (pIVar12->_1).this_arg.bits = uStack_cc;
      *(int *)&(pIVar12->_1).this_arg.field_0xc = (int)in_XMM3_Qa;
      *(int *)&(pIVar12->_1).element_class = (int)((ulong)in_XMM3_Qa >> 0x20);
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                ((UnityEngine_MonoBehaviour_o *)pIVar13,(System_Collections_IEnumerator_o *)pIVar12,
                 (MethodInfo *)0x0);
      return;
    }
  }
  pvVar2 = (void *)il2cpp_runtime_helper_022b2c90();
  if (g_data_057adbb5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishSync_d__54);
    g_data_057adbb5 = '\x01';
  }
  __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishSync_d__54);
  uVar10 = 0;
  pIVar7 = __this_01;
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = 0;
  if (__this_01 == (Il2CppObject *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor(pIVar7,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar7[1].klass = uVar10;
    return;
  }
  __this_01[2].klass = pIVar14;
  il2cpp_runtime_helper_022b4080(__this_01 + 2,pIVar14);
  __this_01[2].monitor = pvVar2;
  *(float *)&__this_01[3].klass = fVar16;
  uStack_138 = (undefined4)uVar17;
  uStack_134 = (undefined4)((ulong)uVar17 >> 0x20);
  *(undefined4 *)((long)&__this_01[3].klass + 4) = uStack_138;
  *(undefined4 *)&__this_01[3].monitor = uStack_134;
  *(int *)((long)&__this_01[3].monitor + 4) = (int)uVar18;
  *(int *)&__this_01[4].klass = (int)((ulong)uVar18 >> 0x20);
  return;
}


// CustomLogic.CustomLogicPhotonSync$$SendMessageOthers
// il2cpp: void CustomLogic_CustomLogicPhotonSync__SendMessageOthers (CustomLogic_CustomLogicPhotonSync_o* __this, System_String_o* message, const MethodInfo* method);
// 0x4258650

void CustomLogic_CustomLogicPhotonSync__SendMessageOthers
               (CustomLogic_CustomLogicPhotonSync_o *__this,System_String_o *message,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  void *pvVar2;
  undefined8 uVar3;
  bool_conflict bVar4;
  System_Object_array *pSVar5;
  long lVar6;
  CustomLogic_CustomLogicPhotonSync_o *__this_00;
  Il2CppObject *pIVar7;
  Il2CppClass *pIVar8;
  UnityEngine_Transform_o *pUVar9;
  Il2CppObject *__this_01;
  MethodInfo *extraout_RDX;
  undefined4 uVar10;
  Photon_Realtime_Player_o *targetPlayer;
  MethodInfo *pMVar11;
  Il2CppClass *pIVar12;
  Il2CppClass *pIVar13;
  Il2CppClass *pIVar14;
  float fVar15;
  float fVar16;
  undefined8 in_XMM2_Qa;
  undefined8 uVar17;
  undefined8 in_XMM3_Qa;
  undefined8 uVar18;
  UnityEngine_Quaternion_o UVar19;
  UnityEngine_Vector3_o UVar20;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_b8;
  uint uStack_b4;
  
  if (g_data_057adbb3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&"SendMessageRPC");
    g_data_057adbb3 = '\x01';
    method = extraout_RDX;
  }
  pPVar1 = (__this->fields).PhotonView;
  pSVar5 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,1,method);
  if (pSVar5 == (System_Object_array *)0x0) {
label_042586fc:
    il2cpp_runtime_helper_022b2c90();
label_04258701:
    il2cpp_runtime_helper_022b2ca0();
  }
  else if ((message == (System_String_o *)0x0) || (lVar6 = il2cpp_runtime_helper_023051f0(message), lVar6 != 0)) {
    if ((int)pSVar5->max_length != 0) {
      pSVar5->m_Items[0] = (Il2CppObject *)message;
      il2cpp_runtime_helper_022b4080(pSVar5->m_Items);
      if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(pPVar1,"SendMessageRPC",1,pSVar5,(MethodInfo *)0x0);
        return;
      }
      goto label_042586fc;
    }
    goto label_04258701;
  }
  __this_00 = (CustomLogic_CustomLogicPhotonSync_o *)il2cpp_runtime_helper_0231b270();
  targetPlayer = (Photon_Realtime_Player_o *)0x0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057adbb4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    il2cpp_runtime_helper_023445d0(&"SyncRPC");
    g_data_057adbb4 = '\x01';
  }
  if (((char)(__this_00->fields)._inited == '\0') || ((char)(__this_00->fields)._syncTransforms == '\0')) {
    return;
  }
  pPVar1 = (__this_00->fields).PhotonView;
  pMVar11 = (MethodInfo *)0x2;
  pSVar5 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
  UVar20 = CustomLogic_CustomLogicPhotonSync__GetPosition(__this_00,pMVar11);
  fVar15 = UVar20.fields.z;
  pMVar11 = (MethodInfo *)il2cpp_runtime_helper_02304f30(TypeInfo_Vector3);
  if (pSVar5 != (System_Object_array *)0x0) {
    if ((pMVar11 != (MethodInfo *)0x0) && (lVar6 = il2cpp_runtime_helper_023051f0(pMVar11), lVar6 == 0))
    goto label_042588a8;
    if ((int)pSVar5->max_length != 0) {
      pSVar5->m_Items[0] = (Il2CppObject *)pMVar11;
      il2cpp_runtime_helper_022b4080(pSVar5->m_Items);
      UVar19 = CustomLogic_CustomLogicPhotonSync__GetRotation(__this_00,pMVar11);
      fVar15 = UVar19.fields.z;
      pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(TypeInfo_Quaternion);
      if ((pIVar7 != (Il2CppObject *)0x0) && (lVar6 = il2cpp_runtime_helper_023051f0(pIVar7), lVar6 == 0))
      goto label_042588a8;
      if (1 < (uint)pSVar5->max_length) {
        pSVar5->m_Items[1] = pIVar7;
        il2cpp_runtime_helper_022b4080(pSVar5->m_Items + 1);
        if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC_3efa220(pPVar1,"SyncRPC",targetPlayer,pSVar5,(MethodInfo *)0x0);
          return;
        }
        goto label_042588a3;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_042588a3:
  il2cpp_runtime_helper_022b2c90();
label_042588a8:
  pIVar8 = (Il2CppClass *)il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10();
  pIVar12 = pIVar8;
  if (g_data_057adbb8 == '\0') {
    pIVar12 = (Il2CppClass *)&TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057adbb8 = '\x01';
  }
  pIVar13 = (pIVar8->_1).castClass;
  if (pIVar13 != (Il2CppClass *)0x0) {
    pIVar12 = (Il2CppClass *)(pIVar13->_1).namespaze;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pIVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      if (g_data_057a65d5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a65d5 = '\x01';
      }
      return;
    }
    pIVar13 = (pIVar8->_1).castClass;
    if (((pIVar13 != (Il2CppClass *)0x0) &&
        (pIVar12 = (Il2CppClass *)(pIVar13->_1).namespaze, pIVar12 != (Il2CppClass *)0x0)) &&
       (pUVar9 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pIVar12,(MethodInfo *)0x0),
       pUVar9 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__get_position(pUVar9,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar13 = pIVar12;
  if (g_data_057adbb9 == '\0') {
    pIVar13 = (Il2CppClass *)&TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057adbb9 = '\x01';
  }
  pIVar14 = (pIVar12->_1).castClass;
  if (pIVar14 != (Il2CppClass *)0x0) {
    pIVar13 = (Il2CppClass *)(pIVar14->_1).namespaze;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pIVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      if (g_data_057a6843 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
        g_data_057a6843 = '\x01';
      }
      return;
    }
    pIVar12 = (pIVar12->_1).castClass;
    if (((pIVar12 != (Il2CppClass *)0x0) &&
        (pIVar13 = (Il2CppClass *)(pIVar12->_1).namespaze, pIVar13 != (Il2CppClass *)0x0)) &&
       (pUVar9 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pIVar13,(MethodInfo *)0x0),
       pUVar9 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__get_rotation(pUVar9,(MethodInfo *)0x0);
      return;
    }
  }
  uVar3 = il2cpp_runtime_helper_022b2c90();
  pIVar12 = (pIVar13->_1).element_class;
  pIVar14 = pIVar13;
  fVar16 = fVar15;
  uVar17 = in_XMM2_Qa;
  uVar18 = in_XMM3_Qa;
  if (pIVar12 != (Il2CppClass *)0x0) {
    if (pIVar8 != (pIVar12->_1).fields) {
      return;
    }
    if (g_data_057adbb5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishSync_d__54);
      g_data_057adbb5 = '\x01';
    }
    pIVar12 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishSync_d__54);
    pIVar14 = pIVar12;
    System_Object___ctor((Il2CppObject *)pIVar12,(MethodInfo *)0x0);
    *(undefined4 *)&(pIVar12->_1).name = 0;
    if (pIVar12 != (Il2CppClass *)0x0) {
      (pIVar12->_1).byval_arg.data = pIVar13;
      il2cpp_runtime_helper_022b4080(&(pIVar12->_1).byval_arg,pIVar13);
      *(undefined8 *)&(pIVar12->_1).byval_arg.bits = uVar3;
      *(float *)&(pIVar12->_1).this_arg.data = fVar15;
      uStack_b8 = (undefined4)in_XMM2_Qa;
      uStack_b4 = (uint)((ulong)in_XMM2_Qa >> 0x20);
      *(undefined4 *)((long)&(pIVar12->_1).this_arg.data + 4) = uStack_b8;
      (pIVar12->_1).this_arg.bits = uStack_b4;
      *(int *)&(pIVar12->_1).this_arg.field_0xc = (int)in_XMM3_Qa;
      *(int *)&(pIVar12->_1).element_class = (int)((ulong)in_XMM3_Qa >> 0x20);
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                ((UnityEngine_MonoBehaviour_o *)pIVar13,(System_Collections_IEnumerator_o *)pIVar12,
                 (MethodInfo *)0x0);
      return;
    }
  }
  pvVar2 = (void *)il2cpp_runtime_helper_022b2c90();
  if (g_data_057adbb5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishSync_d__54);
    g_data_057adbb5 = '\x01';
  }
  __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishSync_d__54);
  uVar10 = 0;
  pIVar7 = __this_01;
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = 0;
  if (__this_01 == (Il2CppObject *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor(pIVar7,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar7[1].klass = uVar10;
    return;
  }
  __this_01[2].klass = pIVar14;
  il2cpp_runtime_helper_022b4080(__this_01 + 2,pIVar14);
  __this_01[2].monitor = pvVar2;
  *(float *)&__this_01[3].klass = fVar16;
  uStack_120 = (undefined4)uVar17;
  uStack_11c = (undefined4)((ulong)uVar17 >> 0x20);
  *(undefined4 *)((long)&__this_01[3].klass + 4) = uStack_120;
  *(undefined4 *)&__this_01[3].monitor = uStack_11c;
  *(int *)((long)&__this_01[3].monitor + 4) = (int)uVar18;
  *(int *)&__this_01[4].klass = (int)((ulong)uVar18 >> 0x20);
  return;
}


// CustomLogic.CustomLogicPhotonSync$$OnPlayerEnteredRoom
// il2cpp: void CustomLogic_CustomLogicPhotonSync__OnPlayerEnteredRoom (CustomLogic_CustomLogicPhotonSync_o* __this, Photon_Realtime_Player_o* newPlayer, const MethodInfo* method);
// 0x4258720

void CustomLogic_CustomLogicPhotonSync__OnPlayerEnteredRoom
               (CustomLogic_CustomLogicPhotonSync_o *__this,Photon_Realtime_Player_o *newPlayer,
               MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this_00;
  void *pvVar1;
  undefined8 uVar2;
  bool_conflict bVar3;
  System_Object_array *parameters;
  long lVar4;
  Il2CppObject *pIVar5;
  Il2CppClass *pIVar6;
  UnityEngine_Transform_o *pUVar7;
  Il2CppObject *__this_01;
  MethodInfo *extraout_RDX;
  undefined4 uVar8;
  MethodInfo *pMVar9;
  Il2CppClass *pIVar10;
  Il2CppClass *pIVar11;
  Il2CppClass *pIVar12;
  float fVar13;
  float fVar14;
  undefined8 in_XMM2_Qa;
  undefined8 uVar15;
  undefined8 in_XMM3_Qa;
  undefined8 uVar16;
  UnityEngine_Quaternion_o UVar17;
  UnityEngine_Vector3_o UVar18;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_a0;
  uint uStack_9c;
  
  if (g_data_057adbb4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    il2cpp_runtime_helper_023445d0(&"SyncRPC");
    g_data_057adbb4 = '\x01';
    method = extraout_RDX;
  }
  if (((char)(__this->fields)._inited == '\0') || ((char)(__this->fields)._syncTransforms == '\0')) {
    return;
  }
  __this_00 = (__this->fields).PhotonView;
  pMVar9 = (MethodInfo *)0x2;
  parameters = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,2,method);
  UVar18 = CustomLogic_CustomLogicPhotonSync__GetPosition(__this,pMVar9);
  fVar13 = UVar18.fields.z;
  pMVar9 = (MethodInfo *)il2cpp_runtime_helper_02304f30(TypeInfo_Vector3);
  if (parameters != (System_Object_array *)0x0) {
    if ((pMVar9 != (MethodInfo *)0x0) && (lVar4 = il2cpp_runtime_helper_023051f0(pMVar9), lVar4 == 0)) goto label_042588a8;
    if ((int)parameters->max_length != 0) {
      parameters->m_Items[0] = (Il2CppObject *)pMVar9;
      il2cpp_runtime_helper_022b4080(parameters->m_Items);
      UVar17 = CustomLogic_CustomLogicPhotonSync__GetRotation(__this,pMVar9);
      fVar13 = UVar17.fields.z;
      pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(TypeInfo_Quaternion);
      if ((pIVar5 != (Il2CppObject *)0x0) && (lVar4 = il2cpp_runtime_helper_023051f0(pIVar5), lVar4 == 0))
      goto label_042588a8;
      if (1 < (uint)parameters->max_length) {
        parameters->m_Items[1] = pIVar5;
        il2cpp_runtime_helper_022b4080(parameters->m_Items + 1);
        if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC_3efa220(__this_00,"SyncRPC",newPlayer,parameters,(MethodInfo *)0x0);
          return;
        }
        goto label_042588a3;
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_042588a3:
  il2cpp_runtime_helper_022b2c90();
label_042588a8:
  pIVar6 = (Il2CppClass *)il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10();
  pIVar10 = pIVar6;
  if (g_data_057adbb8 == '\0') {
    pIVar10 = (Il2CppClass *)&TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057adbb8 = '\x01';
  }
  pIVar11 = (pIVar6->_1).castClass;
  if (pIVar11 != (Il2CppClass *)0x0) {
    pIVar10 = (Il2CppClass *)(pIVar11->_1).namespaze;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pIVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      if (g_data_057a65d5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a65d5 = '\x01';
      }
      return;
    }
    pIVar11 = (pIVar6->_1).castClass;
    if (((pIVar11 != (Il2CppClass *)0x0) &&
        (pIVar10 = (Il2CppClass *)(pIVar11->_1).namespaze, pIVar10 != (Il2CppClass *)0x0)) &&
       (pUVar7 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pIVar10,(MethodInfo *)0x0),
       pUVar7 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__get_position(pUVar7,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar11 = pIVar10;
  if (g_data_057adbb9 == '\0') {
    pIVar11 = (Il2CppClass *)&TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057adbb9 = '\x01';
  }
  pIVar12 = (pIVar10->_1).castClass;
  if (pIVar12 != (Il2CppClass *)0x0) {
    pIVar11 = (Il2CppClass *)(pIVar12->_1).namespaze;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pIVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      if (g_data_057a6843 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
        g_data_057a6843 = '\x01';
      }
      return;
    }
    pIVar10 = (pIVar10->_1).castClass;
    if (((pIVar10 != (Il2CppClass *)0x0) &&
        (pIVar11 = (Il2CppClass *)(pIVar10->_1).namespaze, pIVar11 != (Il2CppClass *)0x0)) &&
       (pUVar7 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pIVar11,(MethodInfo *)0x0),
       pUVar7 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__get_rotation(pUVar7,(MethodInfo *)0x0);
      return;
    }
  }
  uVar2 = il2cpp_runtime_helper_022b2c90();
  pIVar10 = (pIVar11->_1).element_class;
  pIVar12 = pIVar11;
  fVar14 = fVar13;
  uVar15 = in_XMM2_Qa;
  uVar16 = in_XMM3_Qa;
  if (pIVar10 != (Il2CppClass *)0x0) {
    if (pIVar6 != (pIVar10->_1).fields) {
      return;
    }
    if (g_data_057adbb5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishSync_d__54);
      g_data_057adbb5 = '\x01';
    }
    pIVar10 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishSync_d__54);
    pIVar12 = pIVar10;
    System_Object___ctor((Il2CppObject *)pIVar10,(MethodInfo *)0x0);
    *(undefined4 *)&(pIVar10->_1).name = 0;
    if (pIVar10 != (Il2CppClass *)0x0) {
      (pIVar10->_1).byval_arg.data = pIVar11;
      il2cpp_runtime_helper_022b4080(&(pIVar10->_1).byval_arg,pIVar11);
      *(undefined8 *)&(pIVar10->_1).byval_arg.bits = uVar2;
      *(float *)&(pIVar10->_1).this_arg.data = fVar13;
      uStack_a0 = (undefined4)in_XMM2_Qa;
      uStack_9c = (uint)((ulong)in_XMM2_Qa >> 0x20);
      *(undefined4 *)((long)&(pIVar10->_1).this_arg.data + 4) = uStack_a0;
      (pIVar10->_1).this_arg.bits = uStack_9c;
      *(int *)&(pIVar10->_1).this_arg.field_0xc = (int)in_XMM3_Qa;
      *(int *)&(pIVar10->_1).element_class = (int)((ulong)in_XMM3_Qa >> 0x20);
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                ((UnityEngine_MonoBehaviour_o *)pIVar11,(System_Collections_IEnumerator_o *)pIVar10,
                 (MethodInfo *)0x0);
      return;
    }
  }
  pvVar1 = (void *)il2cpp_runtime_helper_022b2c90();
  if (g_data_057adbb5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishSync_d__54);
    g_data_057adbb5 = '\x01';
  }
  __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishSync_d__54);
  uVar8 = 0;
  pIVar5 = __this_01;
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = 0;
  if (__this_01 == (Il2CppObject *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor(pIVar5,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar5[1].klass = uVar8;
    return;
  }
  __this_01[2].klass = pIVar12;
  il2cpp_runtime_helper_022b4080(__this_01 + 2,pIVar12);
  __this_01[2].monitor = pvVar1;
  *(float *)&__this_01[3].klass = fVar14;
  uStack_108 = (undefined4)uVar15;
  uStack_104 = (undefined4)((ulong)uVar15 >> 0x20);
  *(undefined4 *)((long)&__this_01[3].klass + 4) = uStack_108;
  *(undefined4 *)&__this_01[3].monitor = uStack_104;
  *(int *)((long)&__this_01[3].monitor + 4) = (int)uVar16;
  *(int *)&__this_01[4].klass = (int)((ulong)uVar16 >> 0x20);
  return;
}


// CustomLogic.CustomLogicPhotonSync$$SyncRPC
// il2cpp: void CustomLogic_CustomLogicPhotonSync__SyncRPC (CustomLogic_CustomLogicPhotonSync_o* __this, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x4258a60

void CustomLogic_CustomLogicPhotonSync__SyncRPC
               (CustomLogic_CustomLogicPhotonSync_o *__this,UnityEngine_Vector3_o position,
               UnityEngine_Quaternion_o rotation,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *pPVar1;
  void *pvVar2;
  Il2CppClass *__this_00;
  Il2CppObject *__this_01;
  undefined4 uVar3;
  Il2CppClass *pIVar4;
  Il2CppObject *__this_02;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  float fStack_28;
  float fStack_24;
  
  uVar8 = rotation.fields._8_8_;
  uVar7 = rotation.fields._0_8_;
  fVar5 = position.fields.z;
  pPVar1 = (__this->fields).PhotonView;
  pIVar4 = (Il2CppClass *)__this;
  fVar6 = fVar5;
  if (pPVar1 != (Photon_Pun_PhotonView_o *)0x0) {
    if (info.fields.Sender != (pPVar1->fields)._Owner_k__BackingField) {
      return;
    }
    if (g_data_057adbb5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishSync_d__54);
      g_data_057adbb5 = '\x01';
    }
    __this_00 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishSync_d__54);
    pIVar4 = __this_00;
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    *(undefined4 *)&(__this_00->_1).name = 0;
    if (__this_00 != (Il2CppClass *)0x0) {
      (__this_00->_1).byval_arg.data = __this;
      il2cpp_runtime_helper_022b4080(&(__this_00->_1).byval_arg,__this);
      *(long *)&(__this_00->_1).byval_arg.bits = position.fields._0_8_;
      *(float *)&(__this_00->_1).this_arg.data = fVar5;
      fStack_28 = rotation.fields.x;
      fStack_24 = rotation.fields.y;
      *(float *)((long)&(__this_00->_1).this_arg.data + 4) = fStack_28;
      (__this_00->_1).this_arg.bits = (uint)fStack_24;
      *(float *)&(__this_00->_1).this_arg.field_0xc = rotation.fields.z;
      *(float *)&(__this_00->_1).element_class = rotation.fields.w;
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
                 (MethodInfo *)0x0);
      return;
    }
  }
  pvVar2 = (void *)il2cpp_runtime_helper_022b2c90();
  if (g_data_057adbb5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishSync_d__54);
    g_data_057adbb5 = '\x01';
  }
  __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishSync_d__54);
  uVar3 = 0;
  __this_02 = __this_01;
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = 0;
  if (__this_01 != (Il2CppObject *)0x0) {
    __this_01[2].klass = pIVar4;
    il2cpp_runtime_helper_022b4080(__this_01 + 2,pIVar4);
    __this_01[2].monitor = pvVar2;
    *(float *)&__this_01[3].klass = fVar6;
    uStack_90 = (undefined4)uVar7;
    uStack_8c = (undefined4)((ulong)uVar7 >> 0x20);
    *(undefined4 *)((long)&__this_01[3].klass + 4) = uStack_90;
    *(undefined4 *)&__this_01[3].monitor = uStack_8c;
    *(int *)((long)&__this_01[3].monitor + 4) = (int)uVar8;
    *(int *)&__this_01[4].klass = (int)((ulong)uVar8 >> 0x20);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_02,(MethodInfo *)0x0);
  *(undefined4 *)&__this_02[1].klass = uVar3;
  return;
}


// CustomLogic.CustomLogicPhotonSync$$WaitAndFinishSync
// il2cpp: System_Collections_IEnumerator_o* CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync (CustomLogic_CustomLogicPhotonSync_o* __this, UnityEngine_Vector3_o position, UnityEngine_Quaternion_o rotation, const MethodInfo* method);
// 0x4258b40

System_Collections_IEnumerator_o *
CustomLogic_CustomLogicPhotonSync__WaitAndFinishSync
          (CustomLogic_CustomLogicPhotonSync_o *__this,UnityEngine_Vector3_o position,
          UnityEngine_Quaternion_o rotation,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar1;
  Il2CppObject *__this_01;
  float fStack_38;
  float fStack_34;
  
  if (g_data_057adbb5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishSync_d__54);
    g_data_057adbb5 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishSync_d__54);
  uVar1 = 0;
  __this_01 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_helper_022b4080(__this_00 + 2,__this);
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
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = uVar1;
  return extraout_RAX;
}


// CustomLogic.CustomLogicPhotonSync$$OnPhotonSerializeView
// il2cpp: void CustomLogic_CustomLogicPhotonSync__OnPhotonSerializeView (CustomLogic_CustomLogicPhotonSync_o* __this, Photon_Pun_PhotonStream_o* stream, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x4258c10

void CustomLogic_CustomLogicPhotonSync__OnPhotonSerializeView
               (CustomLogic_CustomLogicPhotonSync_o *__this,Photon_Pun_PhotonStream_o *stream,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Map_MapObject_o *pMVar3;
  CustomLogic_CustomLogicNetworkViewBuiltin_o *pCVar4;
  undefined8 uVar5;
  UnityEngine_GameObject_o *__this_00;
  Photon_Pun_PhotonView_o *pPVar6;
  UnityEngine_Quaternion_Fields b;
  char cVar7;
  uint uVar9;
  MethodInfo *pMVar10;
  Il2CppObject *pIVar11;
  char *pcVar12;
  long lVar13;
  undefined8 *puVar14;
  uint *puVar15;
  System_Object_array *pSVar16;
  CustomLogic_CustomLogicPhotonSync_o *x;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Object_o *pUVar17;
  UnityEngine_Rigidbody_o *__this_02;
  System_Object_array **ppSVar18;
  uint uVar19;
  Il2CppObject *unaff_RBP;
  CustomLogic_CustomLogicPhotonSync_o *__this_03;
  long *x_00;
  float fVar20;
  float fVar21;
  float fVar22;
  UnityEngine_Quaternion_o UVar23;
  UnityEngine_Vector3_o UVar24;
  UnityEngine_Vector3_o value;
  float fStack_c8;
  float fStack_c4;
  float fStack_b8;
  float fStack_b4;
  undefined8 uStack_58;
  float fStack_50;
  undefined4 uStack_4c;
  UnityEngine_Quaternion_Fields UStack_48;
  bool_conflict bVar8;
  
  if (g_data_057adbb6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_QuaternionCompression);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057adbb6 = '\x01';
  }
  UStack_48 = (UnityEngine_Quaternion_Fields)ZEXT816(0);
  if (stream == (Photon_Pun_PhotonStream_o *)0x0) {
label_04259181:
    pIVar11 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
label_04259186:
    il2cpp_runtime_helper_022b2fd0(pIVar11);
label_0425918e:
    il2cpp_runtime_helper_022b2fd0(stream);
  }
  else {
    if ((char)(stream->fields)._IsWriting_k__BackingField != '\0') {
      if (((char)(__this->fields)._inited == '\0') ||
         (pMVar3 = (__this->fields)._MapObject_k__BackingField, pMVar3 == (Map_MapObject_o *)0x0)) {
        cVar7 = '\0';
      }
      else {
        pUVar17 = (UnityEngine_Object_o *)(pMVar3->fields).GameObject;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar8 = UnityEngine_Object__op_Inequality(pUVar17,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        cVar7 = (char)bVar8;
      }
      uStack_58 = CONCAT71(uStack_58._1_7_,cVar7);
      pMVar10 = (MethodInfo *)il2cpp_runtime_helper_02304f30(g_data_057b9b98,&uStack_58);
      Photon_Pun_PhotonStream__SendNext(stream,(Il2CppObject *)pMVar10,(MethodInfo *)0x0);
      if (cVar7 == '\0') {
        return;
      }
      if ((char)(__this->fields)._syncTransforms != '\0') {
        UVar24 = CustomLogic_CustomLogicPhotonSync__GetPosition(__this,pMVar10);
        fStack_50 = UVar24.fields.z;
        uStack_58 = UVar24.fields._0_8_;
        pMVar10 = (MethodInfo *)il2cpp_runtime_helper_02304f30(TypeInfo_Vector3,&uStack_58);
        Photon_Pun_PhotonStream__SendNext(stream,(Il2CppObject *)pMVar10,(MethodInfo *)0x0);
        UStack_48 = (UnityEngine_Quaternion_Fields)
                    CustomLogic_CustomLogicPhotonSync__GetRotation(__this,pMVar10);
        if (*(int *)(TypeInfo_QuaternionCompression + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        uStack_4c = il2cpp_runtime_helper_04266c00(&UStack_48,0);
        pMVar10 = (MethodInfo *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_4c);
        Photon_Pun_PhotonStream__SendNext(stream,(Il2CppObject *)pMVar10,(MethodInfo *)0x0);
        if (*(char *)((long)&(__this->fields)._syncTransforms + 1) != '\0') {
          UVar24 = CustomLogic_CustomLogicPhotonSync__GetVelocity(__this,pMVar10);
          fStack_50 = UVar24.fields.z;
          uStack_58 = UVar24.fields._0_8_;
          pIVar11 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(TypeInfo_Vector3,&uStack_58);
          Photon_Pun_PhotonStream__SendNext(stream,pIVar11,(MethodInfo *)0x0);
        }
      }
      pCVar4 = (__this->fields)._NetworkView_k__BackingField;
      if (pCVar4 != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
        CustomLogic_CustomLogicNetworkViewBuiltin__SendNetworkStream(pCVar4,stream,(MethodInfo *)0x0);
        return;
      }
      pIVar11 = (Il2CppObject *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,0);
      Photon_Pun_PhotonStream__SendNext(stream,pIVar11,(MethodInfo *)0x0);
      return;
    }
    pIVar11 = Photon_Pun_PhotonStream__ReceiveNext(stream,(MethodInfo *)0x0);
    if (pIVar11 == (Il2CppObject *)0x0) goto label_04259181;
    if ((pIVar11->klass->_1).element_class != *(Il2CppClass **)(g_data_057b9b98 + 0x40)) goto label_04259186;
    pcVar12 = (char *)il2cpp_runtime_helper_02305440(pIVar11);
    if (*pcVar12 == '\0') {
      return;
    }
    pIVar11 = Photon_Pun_PhotonStream__PeekNext(stream,(MethodInfo *)0x0);
    lVar13 = il2cpp_runtime_helper_023051f0(pIVar11);
    *(bool *)&(__this->fields)._syncTransforms = lVar13 == 0;
    if (lVar13 != 0) {
label_042590de:
      if ((char)(__this->fields)._inited == '\0') {
        return;
      }
      stream = (Photon_Pun_PhotonStream_o *)Photon_Pun_PhotonStream__ReceiveNext(stream,(MethodInfo *)0x0);
      unaff_RBP = TypeInfo_object;
      if (stream == (Photon_Pun_PhotonStream_o *)0x0) {
        (__this->fields)._streamObjs = (System_Object_array *)0x0;
        lVar13 = 0;
label_0425914b:
        ppSVar18 = &(__this->fields)._streamObjs;
        il2cpp_runtime_helper_022b4080(ppSVar18,lVar13);
        pCVar4 = (__this->fields)._NetworkView_k__BackingField;
        if (((pCVar4 != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) &&
            (pSVar16 = *ppSVar18, pSVar16 != (System_Object_array *)0x0)) && (pSVar16->max_length != 0)) {
          CustomLogic_CustomLogicNetworkViewBuiltin__OnNetworkStream(pCVar4,pSVar16,(MethodInfo *)0x0);
        }
        return;
      }
      pSVar16 = (System_Object_array *)il2cpp_runtime_helper_023051f0(stream,TypeInfo_object);
      if (pSVar16 != (System_Object_array *)0x0) {
        (__this->fields)._streamObjs = pSVar16;
        unaff_RBP = TypeInfo_object;
        lVar13 = il2cpp_runtime_helper_023051f0(stream,TypeInfo_object);
        if (lVar13 != 0) goto label_0425914b;
      }
      goto label_0425918e;
    }
    pIVar11 = Photon_Pun_PhotonStream__ReceiveNext(stream,(MethodInfo *)0x0);
    if (pIVar11 == (Il2CppObject *)0x0) goto label_04259181;
    if ((pIVar11->klass->_1).element_class != *(Il2CppClass **)(TypeInfo_Vector3 + 0x40)) goto label_04259186;
    puVar14 = (undefined8 *)il2cpp_runtime_helper_02305440(pIVar11);
    uVar5 = *puVar14;
    (__this->fields)._correctPosition.fields.x = (float)(int)uVar5;
    (__this->fields)._correctPosition.fields.y = (float)(int)((ulong)uVar5 >> 0x20);
    (__this->fields)._correctPosition.fields.z = *(float *)(puVar14 + 1);
    unaff_RBP = Photon_Pun_PhotonStream__ReceiveNext(stream,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_QuaternionCompression + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (unaff_RBP == (Il2CppObject *)0x0) goto label_04259181;
    if ((unaff_RBP->klass->_1).element_class == *(Il2CppClass **)(g_data_057b9bb8 + 0x40)) {
      puVar15 = (uint *)il2cpp_runtime_helper_02305440(unaff_RBP);
      uVar9 = *puVar15;
      uVar19 = uVar9 >> 0x1e;
      unaff_RBP = (Il2CppObject *)(ulong)uVar19;
      fVar20 = 0.0;
      if (uVar19 == 3) {
label_04258f22:
        fVar22 = (float)(uVar9 & 0x1ff) * 0.0013837706 *
                 *(float *)(&g_data_00d1d580 + (ulong)((uVar9 & 0x200) == 0) * 4);
        (__this->fields)._correctRotation.fields.z = fVar22;
        fVar20 = fVar22 * fVar22 + fVar20;
        uVar9 = uVar9 >> 10;
        if (uVar19 != 1) goto label_04258f69;
label_04258fb6:
        fVar22 = (float)(uVar9 & 0x1ff) * 0.0013837706 *
                 *(float *)(&g_data_00d1d580 + (ulong)((uVar9 & 0x200) == 0) * 4);
        (__this->fields)._correctRotation.fields.x = fVar22;
        fVar20 = 1.0 - (fVar22 * fVar22 + fVar20);
        if (fVar20 < 0.0) {
          fVar20 = sqrtf(fVar20);
        }
        else {
          fVar20 = SQRT(fVar20);
        }
        if (uVar19 == 1) {
          (__this->fields)._correctRotation.fields.y = fVar20;
        }
        else if (uVar19 == 2) {
          (__this->fields)._correctRotation.fields.z = fVar20;
        }
        else {
          (__this->fields)._correctRotation.fields.w = fVar20;
        }
      }
      else {
        fVar20 = (float)(uVar9 & 0x1ff) * 0.0013837706 *
                 *(float *)(&g_data_00d1d580 + (ulong)((uVar9 & 0x200) == 0) * 4);
        (__this->fields)._correctRotation.fields.w = fVar20;
        fVar20 = fVar20 * fVar20 + 0.0;
        uVar9 = uVar9 >> 10;
        if (uVar19 != 2) goto label_04258f22;
label_04258f69:
        fVar22 = (float)(uVar9 & 0x1ff) * 0.0013837706 *
                 *(float *)(&g_data_00d1d580 + (ulong)((uVar9 & 0x200) == 0) * 4);
        (__this->fields)._correctRotation.fields.y = fVar22;
        fVar20 = fVar22 * fVar22 + fVar20;
        if (uVar19 != 0) {
          uVar9 = uVar9 >> 10;
          goto label_04258fb6;
        }
        fVar20 = 1.0 - fVar20;
        if (fVar20 < 0.0) {
          fVar20 = sqrtf(fVar20);
        }
        else {
          fVar20 = SQRT(fVar20);
        }
        (__this->fields)._correctRotation.fields.x = fVar20;
      }
      pIVar11 = Photon_Pun_PhotonStream__PeekNext(stream,(MethodInfo *)0x0);
      lVar13 = il2cpp_runtime_helper_023051f0(pIVar11);
      *(bool *)((long)&(__this->fields)._syncTransforms + 1) = lVar13 == 0;
      if (lVar13 == 0) {
        pIVar11 = Photon_Pun_PhotonStream__ReceiveNext(stream,(MethodInfo *)0x0);
        if (pIVar11 == (Il2CppObject *)0x0) goto label_04259181;
        if ((pIVar11->klass->_1).element_class != *(Il2CppClass **)(TypeInfo_Vector3 + 0x40)) goto label_04259186;
        puVar14 = (undefined8 *)il2cpp_runtime_helper_02305440(pIVar11);
        uVar5 = *puVar14;
        (__this->fields)._correctVelocity.fields.x = (float)(int)uVar5;
        (__this->fields)._correctVelocity.fields.y = (float)(int)((ulong)uVar5 >> 0x20);
        (__this->fields)._correctVelocity.fields.z = *(float *)(puVar14 + 1);
      }
      goto label_042590de;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057adbba == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Rigidbody_GetComponent_Rigidbody);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adbba = '\x01';
  }
  if (unaff_RBP[4].monitor != (void *)0x0) {
    __this_03 = *(CustomLogic_CustomLogicPhotonSync_o **)((long)unaff_RBP[4].monitor + 0x18);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar8 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_03,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      if (unaff_RBP[4].monitor != (void *)0x0) {
        __this_00 = *(UnityEngine_GameObject_o **)((long)unaff_RBP[4].monitor + 0x18);
        __this_03 = (CustomLogic_CustomLogicPhotonSync_o *)0x0;
        if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
          x = (CustomLogic_CustomLogicPhotonSync_o *)
              UnityEngine_GameObject__GetComponent_object_(__this_00,MethodInfo_Rigidbody_GetComponent_Rigidbody);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          __this_03 = x;
          bVar8 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar8 == '\0') goto label_0425927b;
          if (x != (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
            UnityEngine_Rigidbody__get_velocity((UnityEngine_Rigidbody_o *)x,(MethodInfo *)0x0);
            return;
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
      x_00 = (long *)__this_03;
      if (g_data_057adbb7 == '\0') {
        x_00 = &TypeInfo_Object;
        il2cpp_runtime_helper_023445d0();
        g_data_057adbb7 = '\x01';
      }
      pPVar6 = (__this_03->fields).PhotonView;
      if (pPVar6 == (Photon_Pun_PhotonView_o *)0x0) {
label_042594cc:
        il2cpp_runtime_helper_022b2c90();
        (*(((CustomLogic_CustomLogicPhotonSync_o *)x_00)->klass->vtable)._60_OnPhotonSerializeView.methodPtr)
                  ();
        return;
      }
      if (((char)(pPVar6->fields)._IsMine_k__BackingField == '\0') &&
         ((char)(__this_03->fields)._inited != '\0')) {
        pMVar3 = (__this_03->fields)._MapObject_k__BackingField;
        if (pMVar3 == (Map_MapObject_o *)0x0) goto label_042594cc;
        x_00 = (long *)(pMVar3->fields).GameObject;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar8 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (((char)bVar8 == '\0') && ((char)(__this_03->fields)._syncTransforms != '\0')) {
          pMVar3 = (__this_03->fields)._MapObject_k__BackingField;
          if ((pMVar3 == (Map_MapObject_o *)0x0) ||
             ((x_00 = (long *)(pMVar3->fields).GameObject,
              (CustomLogic_CustomLogicPhotonSync_o *)x_00 == (CustomLogic_CustomLogicPhotonSync_o *)0x0 ||
              (__this_01 = UnityEngine_GameObject__get_transform
                                     ((UnityEngine_GameObject_o *)x_00,(MethodInfo *)0x0),
              __this_01 == (UnityEngine_Transform_o *)0x0)))) goto label_042594cc;
          UVar24 = UnityEngine_Transform__get_position(__this_01,(MethodInfo *)0x0);
          uVar1 = (__this_03->fields)._correctPosition.fields.x;
          uVar2 = (__this_03->fields)._correctPosition.fields.y;
          fVar20 = (__this_03->fields)._correctPosition.fields.z;
          fVar21 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
          fVar21 = fVar21 * 5.0;
          fVar22 = 1.0;
          if (fVar21 <= 1.0) {
            fVar22 = fVar21;
          }
          fVar22 = (float)(-(uint)(0.0 <= fVar21) & (uint)fVar22);
          fStack_b8 = UVar24.fields.x;
          fStack_b4 = UVar24.fields.y;
          value.fields.y = fStack_b4 + fVar22 * ((float)uVar2 - fStack_b4);
          value.fields.x = fStack_b8 + fVar22 * ((float)uVar1 - fStack_b8);
          value.fields.z = UVar24.fields.z + (fVar20 - UVar24.fields.z) * fVar22;
          UnityEngine_Transform__set_position(__this_01,value,(MethodInfo *)0x0);
          UVar23 = UnityEngine_Transform__get_rotation(__this_01,(MethodInfo *)0x0);
          b = (__this_03->fields)._correctRotation.fields;
          fVar20 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
          UVar23 = UnityEngine_Quaternion__Lerp(UVar23,b,fVar20 * 5.0,(MethodInfo *)0x0);
          pMVar10 = (MethodInfo *)0x0;
          UnityEngine_Transform__set_rotation(__this_01,UVar23,(MethodInfo *)0x0);
          if (*(char *)((long)&(__this_03->fields)._syncTransforms + 1) != '\0') {
            pUVar17 = (UnityEngine_Object_o *)
                      CustomLogic_CustomLogicPhotonSync__get_Rigidbody(__this_03,pMVar10);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pMVar10 = (MethodInfo *)0x0;
            bVar8 = UnityEngine_Object__op_Inequality(pUVar17,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar8 != '\0') {
              x_00 = (long *)__this_03;
              __this_02 = CustomLogic_CustomLogicPhotonSync__get_Rigidbody(__this_03,pMVar10);
              if (__this_02 != (UnityEngine_Rigidbody_o *)0x0) {
                UnityEngine_Rigidbody__set_velocity
                          (__this_02,(UnityEngine_Vector3_o)(__this_03->fields)._correctVelocity.fields,
                           (MethodInfo *)0x0);
                return;
              }
              goto label_042594cc;
            }
          }
        }
      }
      return;
    }
  }
label_0425927b:
  if (g_data_057a65d5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a65d5 = '\x01';
  }
  return;
}


// CustomLogic.CustomLogicPhotonSync$$Update
// il2cpp: void CustomLogic_CustomLogicPhotonSync__Update (CustomLogic_CustomLogicPhotonSync_o* __this, const MethodInfo* method);
// 0x42592c0

void CustomLogic_CustomLogicPhotonSync__Update(CustomLogic_CustomLogicPhotonSync_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Photon_Pun_PhotonView_o *pPVar3;
  Map_MapObject_o *pMVar4;
  UnityEngine_Quaternion_Fields b;
  bool_conflict bVar5;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Object_o *x;
  UnityEngine_Rigidbody_o *__this_01;
  MethodInfo *pMVar6;
  long *x_00;
  float fVar7;
  float fVar8;
  float fVar9;
  UnityEngine_Quaternion_o UVar10;
  UnityEngine_Vector3_o UVar11;
  UnityEngine_Vector3_o value;
  float fStack_58;
  float fStack_54;
  float fStack_48;
  float fStack_44;
  
  x_00 = (long *)__this;
  if (g_data_057adbb7 == '\0') {
    x_00 = &TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057adbb7 = '\x01';
  }
  pPVar3 = (__this->fields).PhotonView;
  if (pPVar3 != (Photon_Pun_PhotonView_o *)0x0) {
    if (((char)(pPVar3->fields)._IsMine_k__BackingField != '\0') || ((char)(__this->fields)._inited == '\0'))
    {
      return;
    }
    pMVar4 = (__this->fields)._MapObject_k__BackingField;
    if (pMVar4 != (Map_MapObject_o *)0x0) {
      x_00 = (long *)(pMVar4->fields).GameObject;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar5 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        return;
      }
      if ((char)(__this->fields)._syncTransforms == '\0') {
        return;
      }
      pMVar4 = (__this->fields)._MapObject_k__BackingField;
      if (((pMVar4 != (Map_MapObject_o *)0x0) &&
          (x_00 = (long *)(pMVar4->fields).GameObject,
          (CustomLogic_CustomLogicPhotonSync_o *)x_00 != (CustomLogic_CustomLogicPhotonSync_o *)0x0)) &&
         (__this_00 = UnityEngine_GameObject__get_transform
                                ((UnityEngine_GameObject_o *)x_00,(MethodInfo *)0x0),
         __this_00 != (UnityEngine_Transform_o *)0x0)) {
        UVar11 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
        uVar1 = (__this->fields)._correctPosition.fields.x;
        uVar2 = (__this->fields)._correctPosition.fields.y;
        fVar9 = (__this->fields)._correctPosition.fields.z;
        fVar7 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        fVar7 = fVar7 * 5.0;
        fVar8 = 1.0;
        if (fVar7 <= 1.0) {
          fVar8 = fVar7;
        }
        fVar8 = (float)(-(uint)(0.0 <= fVar7) & (uint)fVar8);
        fStack_48 = UVar11.fields.x;
        fStack_44 = UVar11.fields.y;
        value.fields.y = fStack_44 + fVar8 * ((float)uVar2 - fStack_44);
        value.fields.x = fStack_48 + fVar8 * ((float)uVar1 - fStack_48);
        value.fields.z = UVar11.fields.z + (fVar9 - UVar11.fields.z) * fVar8;
        UnityEngine_Transform__set_position(__this_00,value,(MethodInfo *)0x0);
        UVar10 = UnityEngine_Transform__get_rotation(__this_00,(MethodInfo *)0x0);
        b = (__this->fields)._correctRotation.fields;
        fVar9 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
        UVar10 = UnityEngine_Quaternion__Lerp(UVar10,b,fVar9 * 5.0,(MethodInfo *)0x0);
        pMVar6 = (MethodInfo *)0x0;
        UnityEngine_Transform__set_rotation(__this_00,UVar10,(MethodInfo *)0x0);
        if (*(char *)((long)&(__this->fields)._syncTransforms + 1) == '\0') {
          return;
        }
        x = (UnityEngine_Object_o *)CustomLogic_CustomLogicPhotonSync__get_Rigidbody(__this,pMVar6);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pMVar6 = (MethodInfo *)0x0;
        bVar5 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          return;
        }
        x_00 = (long *)__this;
        __this_01 = CustomLogic_CustomLogicPhotonSync__get_Rigidbody(__this,pMVar6);
        if (__this_01 != (UnityEngine_Rigidbody_o *)0x0) {
          UnityEngine_Rigidbody__set_velocity
                    (__this_01,(UnityEngine_Vector3_o)(__this->fields)._correctVelocity.fields,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  (*(((CustomLogic_CustomLogicPhotonSync_o *)x_00)->klass->vtable)._60_OnPhotonSerializeView.methodPtr)();
  return;
}


// CustomLogic.CustomLogicPhotonSync$$GetPosition
// il2cpp: UnityEngine_Vector3_o CustomLogic_CustomLogicPhotonSync__GetPosition (CustomLogic_CustomLogicPhotonSync_o* __this, const MethodInfo* method);
// 0x42588c0

UnityEngine_Vector3_o
CustomLogic_CustomLogicPhotonSync__GetPosition(CustomLogic_CustomLogicPhotonSync_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  undefined1 auVar2 [16];
  void *pvVar3;
  bool_conflict bVar4;
  UnityEngine_Transform_o *pUVar5;
  Il2CppObject *__this_00;
  undefined4 uVar6;
  Il2CppClass *pIVar7;
  Il2CppClass *__this_01;
  Il2CppClass *pIVar8;
  Il2CppObject *__this_02;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db_00;
  float in_XMM1_Da;
  float fVar10;
  undefined8 in_XMM2_Qa;
  undefined8 uVar11;
  undefined8 in_XMM3_Qa;
  undefined8 uVar12;
  UnityEngine_Quaternion_o UVar13;
  UnityEngine_Vector3_Fields UVar14;
  UnityEngine_Vector3_o UVar15;
  UnityEngine_Vector3_o UVar16;
  UnityEngine_Vector3_o UVar17;
  UnityEngine_Vector3_o UVar18;
  undefined4 uStack_58;
  uint uStack_54;
  undefined4 extraout_XMM0_Db;
  float fVar9;
  
  pIVar7 = (Il2CppClass *)__this;
  if (g_data_057adbb8 == '\0') {
    pIVar7 = (Il2CppClass *)&TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057adbb8 = '\x01';
  }
  pMVar1 = (__this->fields)._MapObject_k__BackingField;
  if (pMVar1 != (Map_MapObject_o *)0x0) {
    pIVar7 = (Il2CppClass *)(pMVar1->fields).GameObject;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pIVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      if (g_data_057a65d5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a65d5 = '\x01';
      }
      return (UnityEngine_Vector3_o)**(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8);
    }
    pMVar1 = (__this->fields)._MapObject_k__BackingField;
    if ((pMVar1 != (Map_MapObject_o *)0x0) &&
       (pIVar7 = (Il2CppClass *)(pMVar1->fields).GameObject, pIVar7 != (Il2CppClass *)0x0)) {
      pUVar5 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pIVar7,(MethodInfo *)0x0);
      if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
        UVar14 = (UnityEngine_Vector3_Fields)UnityEngine_Transform__get_position(pUVar5,(MethodInfo *)0x0);
        return (UnityEngine_Vector3_o)UVar14;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  __this_01 = pIVar7;
  if (g_data_057adbb9 == '\0') {
    __this_01 = (Il2CppClass *)&TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057adbb9 = '\x01';
  }
  pIVar8 = (pIVar7->_1).castClass;
  if (pIVar8 != (Il2CppClass *)0x0) {
    __this_01 = (Il2CppClass *)(pIVar8->_1).namespaze;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      if (g_data_057a6843 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
        g_data_057a6843 = '\x01';
      }
      return (UnityEngine_Vector3_o)**(UnityEngine_Vector3_Fields **)(TypeInfo_Quaternion + 0xb8);
    }
    pIVar7 = (pIVar7->_1).castClass;
    if ((pIVar7 != (Il2CppClass *)0x0) &&
       (__this_01 = (Il2CppClass *)(pIVar7->_1).namespaze, __this_01 != (Il2CppClass *)0x0)) {
      pUVar5 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)__this_01,(MethodInfo *)0x0);
      if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
        UVar13 = UnityEngine_Transform__get_rotation(pUVar5,(MethodInfo *)0x0);
        return (UnityEngine_Vector3_o)UVar13.fields._0_12_;
      }
    }
  }
  UVar15.fields._0_8_ = il2cpp_runtime_helper_022b2c90();
  pIVar7 = (__this_01->_1).element_class;
  pIVar8 = __this_01;
  fVar9 = in_XMM1_Da;
  uVar11 = in_XMM2_Qa;
  uVar12 = in_XMM3_Qa;
  if (pIVar7 != (Il2CppClass *)0x0) {
    if (__this != (pIVar7->_1).fields) {
      UVar15.fields.z = in_XMM1_Da;
      return (UnityEngine_Vector3_o)UVar15.fields;
    }
    if (g_data_057adbb5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishSync_d__54);
      g_data_057adbb5 = '\x01';
    }
    pIVar7 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishSync_d__54);
    pIVar8 = pIVar7;
    System_Object___ctor((Il2CppObject *)pIVar7,(MethodInfo *)0x0);
    *(undefined4 *)&(pIVar7->_1).name = 0;
    if (pIVar7 != (Il2CppClass *)0x0) {
      (pIVar7->_1).byval_arg.data = __this_01;
      il2cpp_runtime_helper_022b4080(&(pIVar7->_1).byval_arg,__this_01);
      *(undefined8 *)&(pIVar7->_1).byval_arg.bits = UVar15.fields._0_8_;
      *(float *)&(pIVar7->_1).this_arg.data = in_XMM1_Da;
      uStack_58 = (undefined4)in_XMM2_Qa;
      uStack_54 = (uint)((ulong)in_XMM2_Qa >> 0x20);
      *(undefined4 *)((long)&(pIVar7->_1).this_arg.data + 4) = uStack_58;
      (pIVar7->_1).this_arg.bits = uStack_54;
      *(int *)&(pIVar7->_1).this_arg.field_0xc = (int)in_XMM3_Qa;
      *(int *)&(pIVar7->_1).element_class = (int)((ulong)in_XMM3_Qa >> 0x20);
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                ((UnityEngine_MonoBehaviour_o *)__this_01,(System_Collections_IEnumerator_o *)pIVar7,
                 (MethodInfo *)0x0);
      UVar16.fields.y = (float)extraout_XMM0_Db;
      UVar16.fields.x = (float)extraout_XMM0_Da;
      UVar16.fields.z = fVar9;
      return (UnityEngine_Vector3_o)UVar16.fields;
    }
  }
  pvVar3 = (void *)il2cpp_runtime_helper_022b2c90();
  fVar10 = fVar9;
  if (g_data_057adbb5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishSync_d__54);
    g_data_057adbb5 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishSync_d__54);
  uVar6 = 0;
  __this_02 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = pIVar8;
    il2cpp_runtime_helper_022b4080(__this_00 + 2,pIVar8);
    __this_00[2].monitor = pvVar3;
    *(float *)&__this_00[3].klass = fVar9;
    auVar2._8_4_ = (int)uVar12;
    auVar2._0_8_ = uVar11;
    auVar2._12_4_ = (int)((ulong)uVar12 >> 0x20);
    *(undefined1 (*) [16])((long)&__this_00[3].klass + 4) = auVar2;
    UVar17.fields.z = fVar10;
    UVar17.fields.x = (float)(int)uVar11;
    UVar17.fields.y = (float)(int)((ulong)uVar11 >> 0x20);
    return (UnityEngine_Vector3_o)UVar17.fields;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_02,(MethodInfo *)0x0);
  *(undefined4 *)&__this_02[1].klass = uVar6;
  UVar18.fields.y = (float)extraout_XMM0_Db_00;
  UVar18.fields.x = (float)extraout_XMM0_Da_00;
  UVar18.fields.z = fVar10;
  return (UnityEngine_Vector3_o)UVar18.fields;
}


// CustomLogic.CustomLogicPhotonSync$$GetRotation
// il2cpp: UnityEngine_Quaternion_o CustomLogic_CustomLogicPhotonSync__GetRotation (CustomLogic_CustomLogicPhotonSync_o* __this, const MethodInfo* method);
// 0x4258990

UnityEngine_Quaternion_o
CustomLogic_CustomLogicPhotonSync__GetRotation(CustomLogic_CustomLogicPhotonSync_o *__this,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  undefined1 auVar2 [16];
  void *pvVar3;
  bool_conflict bVar4;
  UnityEngine_Transform_o *__this_00;
  Il2CppClass *pIVar5;
  Il2CppObject *__this_01;
  undefined4 uVar6;
  Il2CppClass *__this_02;
  Il2CppClass *pIVar7;
  Il2CppObject *__this_03;
  void *unaff_R14;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db_00;
  undefined4 uVar8;
  undefined8 in_XMM1_Qa;
  undefined8 in_XMM2_Qa;
  undefined8 uVar9;
  undefined8 in_XMM3_Qa;
  undefined8 uVar10;
  UnityEngine_Quaternion_Fields UVar11;
  UnityEngine_Quaternion_o UVar12;
  UnityEngine_Quaternion_o UVar13;
  UnityEngine_Quaternion_o UVar14;
  UnityEngine_Quaternion_o UVar15;
  undefined4 local_40;
  uint uStack_3c;
  undefined4 extraout_XMM0_Db;
  
  __this_02 = (Il2CppClass *)__this;
  if (g_data_057adbb9 == '\0') {
    __this_02 = (Il2CppClass *)&TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    g_data_057adbb9 = '\x01';
  }
  pMVar1 = (__this->fields)._MapObject_k__BackingField;
  if (pMVar1 != (Map_MapObject_o *)0x0) {
    __this_02 = (Il2CppClass *)(pMVar1->fields).GameObject;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      if (g_data_057a6843 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
        g_data_057a6843 = '\x01';
      }
      return (UnityEngine_Quaternion_o)**(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
    }
    pMVar1 = (__this->fields)._MapObject_k__BackingField;
    if ((pMVar1 != (Map_MapObject_o *)0x0) &&
       (__this_02 = (Il2CppClass *)(pMVar1->fields).GameObject, __this_02 != (Il2CppClass *)0x0)) {
      __this_00 = UnityEngine_GameObject__get_transform
                            ((UnityEngine_GameObject_o *)__this_02,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        UVar11 = (UnityEngine_Quaternion_Fields)
                 UnityEngine_Transform__get_rotation(__this_00,(MethodInfo *)0x0);
        return (UnityEngine_Quaternion_o)UVar11;
      }
    }
  }
  UVar12.fields._0_8_ = il2cpp_runtime_helper_022b2c90();
  pIVar5 = (__this_02->_1).element_class;
  pIVar7 = __this_02;
  uVar9 = in_XMM2_Qa;
  uVar10 = in_XMM3_Qa;
  if (pIVar5 != (Il2CppClass *)0x0) {
    if (unaff_R14 != (pIVar5->_1).fields) {
      UVar12.fields.z = (float)(int)in_XMM1_Qa;
      UVar12.fields.w = (float)(int)((ulong)in_XMM1_Qa >> 0x20);
      return (UnityEngine_Quaternion_o)UVar12.fields;
    }
    uVar8 = (undefined4)in_XMM1_Qa;
    if (g_data_057adbb5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishSync_d__54);
      g_data_057adbb5 = '\x01';
    }
    pIVar5 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishSync_d__54);
    pIVar7 = pIVar5;
    System_Object___ctor((Il2CppObject *)pIVar5,(MethodInfo *)0x0);
    *(undefined4 *)&(pIVar5->_1).name = 0;
    if (pIVar5 != (Il2CppClass *)0x0) {
      (pIVar5->_1).byval_arg.data = __this_02;
      il2cpp_runtime_helper_022b4080(&(pIVar5->_1).byval_arg,__this_02);
      *(undefined8 *)&(pIVar5->_1).byval_arg.bits = UVar12.fields._0_8_;
      *(undefined4 *)&(pIVar5->_1).this_arg.data = uVar8;
      local_40 = (undefined4)in_XMM2_Qa;
      uStack_3c = (uint)((ulong)in_XMM2_Qa >> 0x20);
      *(undefined4 *)((long)&(pIVar5->_1).this_arg.data + 4) = local_40;
      (pIVar5->_1).this_arg.bits = uStack_3c;
      *(int *)&(pIVar5->_1).this_arg.field_0xc = (int)in_XMM3_Qa;
      *(int *)&(pIVar5->_1).element_class = (int)((ulong)in_XMM3_Qa >> 0x20);
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                ((UnityEngine_MonoBehaviour_o *)__this_02,(System_Collections_IEnumerator_o *)pIVar5,
                 (MethodInfo *)0x0);
      UVar13.fields.y = (float)extraout_XMM0_Db;
      UVar13.fields.x = (float)extraout_XMM0_Da;
      UVar13.fields.z = (float)(int)in_XMM1_Qa;
      UVar13.fields.w = (float)(int)((ulong)in_XMM1_Qa >> 0x20);
      return (UnityEngine_Quaternion_o)UVar13.fields;
    }
  }
  pvVar3 = (void *)il2cpp_runtime_helper_022b2c90();
  uVar8 = (undefined4)in_XMM1_Qa;
  if (g_data_057adbb5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndFinishSync_d__54);
    g_data_057adbb5 = '\x01';
  }
  __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndFinishSync_d__54);
  uVar6 = 0;
  __this_03 = __this_01;
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = 0;
  if (__this_01 != (Il2CppObject *)0x0) {
    __this_01[2].klass = pIVar7;
    il2cpp_runtime_helper_022b4080(__this_01 + 2,pIVar7);
    __this_01[2].monitor = pvVar3;
    *(undefined4 *)&__this_01[3].klass = uVar8;
    auVar2._8_4_ = (int)uVar10;
    auVar2._0_8_ = uVar9;
    auVar2._12_4_ = (int)((ulong)uVar10 >> 0x20);
    *(undefined1 (*) [16])((long)&__this_01[3].klass + 4) = auVar2;
    UVar14.fields.z = (float)(int)in_XMM1_Qa;
    UVar14.fields.w = (float)(int)((ulong)in_XMM1_Qa >> 0x20);
    UVar14.fields.x = (float)(int)uVar9;
    UVar14.fields.y = (float)(int)((ulong)uVar9 >> 0x20);
    return (UnityEngine_Quaternion_o)UVar14.fields;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_03,(MethodInfo *)0x0);
  *(undefined4 *)&__this_03[1].klass = uVar6;
  UVar15.fields.y = (float)extraout_XMM0_Db_00;
  UVar15.fields.x = (float)extraout_XMM0_Da_00;
  UVar15.fields.z = (float)(int)in_XMM1_Qa;
  UVar15.fields.w = (float)(int)((ulong)in_XMM1_Qa >> 0x20);
  return (UnityEngine_Quaternion_o)UVar15.fields;
}


// CustomLogic.CustomLogicPhotonSync$$GetVelocity
// il2cpp: UnityEngine_Vector3_o CustomLogic_CustomLogicPhotonSync__GetVelocity (CustomLogic_CustomLogicPhotonSync_o* __this, const MethodInfo* method);
// 0x42591b0

UnityEngine_Vector3_o
CustomLogic_CustomLogicPhotonSync__GetVelocity(CustomLogic_CustomLogicPhotonSync_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Map_MapObject_o *pMVar3;
  UnityEngine_GameObject_o *__this_00;
  Photon_Pun_PhotonView_o *pPVar4;
  UnityEngine_Quaternion_Fields b;
  bool_conflict bVar5;
  CustomLogic_CustomLogicPhotonSync_o *x;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Object_o *x_00;
  UnityEngine_Rigidbody_o *__this_02;
  MethodInfo *pMVar6;
  CustomLogic_CustomLogicPhotonSync_o *__this_03;
  long *x_01;
  undefined4 extraout_XMM0_Da;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined8 uVar10;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  float in_XMM1_Da;
  UnityEngine_Quaternion_o UVar11;
  UnityEngine_Vector3_Fields UVar12;
  UnityEngine_Vector3_o UVar13;
  UnityEngine_Vector3_o UVar14;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o UVar15;
  float local_70;
  float fStack_6c;
  float local_60;
  float fStack_5c;
  undefined4 extraout_XMM0_Db_02;
  
  if (g_data_057adbba == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Rigidbody_GetComponent_Rigidbody);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adbba = '\x01';
  }
  pMVar3 = (__this->fields)._MapObject_k__BackingField;
  if (pMVar3 != (Map_MapObject_o *)0x0) {
    __this_03 = (CustomLogic_CustomLogicPhotonSync_o *)(pMVar3->fields).GameObject;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_03,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      pMVar3 = (__this->fields)._MapObject_k__BackingField;
      if ((pMVar3 != (Map_MapObject_o *)0x0) &&
         (__this_00 = (pMVar3->fields).GameObject, __this_03 = (CustomLogic_CustomLogicPhotonSync_o *)0x0,
         __this_00 != (UnityEngine_GameObject_o *)0x0)) {
        x = (CustomLogic_CustomLogicPhotonSync_o *)
            UnityEngine_GameObject__GetComponent_object_(__this_00,MethodInfo_Rigidbody_GetComponent_Rigidbody);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        __this_03 = x;
        bVar5 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') goto label_0425927b;
        if (x != (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
          UVar12 = (UnityEngine_Vector3_Fields)
                   UnityEngine_Rigidbody__get_velocity((UnityEngine_Rigidbody_o *)x,(MethodInfo *)0x0);
          return (UnityEngine_Vector3_o)UVar12;
        }
      }
      uVar10 = il2cpp_runtime_helper_022b2c90();
      x_01 = (long *)__this_03;
      if (g_data_057adbb7 == '\0') {
        x_01 = &TypeInfo_Object;
        uVar10 = il2cpp_runtime_helper_023445d0();
        g_data_057adbb7 = '\x01';
      }
      pPVar4 = (__this_03->fields).PhotonView;
      if (pPVar4 != (Photon_Pun_PhotonView_o *)0x0) {
        if (((char)(pPVar4->fields)._IsMine_k__BackingField != '\0') ||
           ((char)(__this_03->fields)._inited == '\0')) {
label_042592fb:
          UVar13.fields.z = in_XMM1_Da;
          UVar13.fields.x = (float)(int)uVar10;
          UVar13.fields.y = (float)(int)((ulong)uVar10 >> 0x20);
          return (UnityEngine_Vector3_o)UVar13.fields;
        }
        pMVar3 = (__this_03->fields)._MapObject_k__BackingField;
        if (pMVar3 != (Map_MapObject_o *)0x0) {
          x_01 = (long *)(pMVar3->fields).GameObject;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar5 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)x_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          uVar10 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
          if (((char)bVar5 != '\0') ||
             (uVar10 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),
             (char)(__this_03->fields)._syncTransforms == '\0')) goto label_042592fb;
          pMVar3 = (__this_03->fields)._MapObject_k__BackingField;
          if ((pMVar3 != (Map_MapObject_o *)0x0) &&
             (x_01 = (long *)(pMVar3->fields).GameObject,
             (CustomLogic_CustomLogicPhotonSync_o *)x_01 != (CustomLogic_CustomLogicPhotonSync_o *)0x0)) {
            __this_01 = UnityEngine_GameObject__get_transform
                                  ((UnityEngine_GameObject_o *)x_01,(MethodInfo *)0x0);
            if (__this_01 != (UnityEngine_Transform_o *)0x0) {
              UVar14 = UnityEngine_Transform__get_position(__this_01,(MethodInfo *)0x0);
              uVar1 = (__this_03->fields)._correctPosition.fields.x;
              uVar2 = (__this_03->fields)._correctPosition.fields.y;
              fVar9 = (__this_03->fields)._correctPosition.fields.z;
              fVar7 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
              fVar7 = fVar7 * 5.0;
              fVar8 = 1.0;
              if (fVar7 <= 1.0) {
                fVar8 = fVar7;
              }
              fVar8 = (float)(-(uint)(0.0 <= fVar7) & (uint)fVar8);
              local_60 = UVar14.fields.x;
              fStack_5c = UVar14.fields.y;
              value.fields.y = fStack_5c + fVar8 * ((float)uVar2 - fStack_5c);
              value.fields.x = local_60 + fVar8 * ((float)uVar1 - local_60);
              value.fields.z = UVar14.fields.z + (fVar9 - UVar14.fields.z) * fVar8;
              UnityEngine_Transform__set_position(__this_01,value,(MethodInfo *)0x0);
              UVar11 = UnityEngine_Transform__get_rotation(__this_01,(MethodInfo *)0x0);
              b = (__this_03->fields)._correctRotation.fields;
              fVar9 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
              UVar11 = UnityEngine_Quaternion__Lerp(UVar11,b,fVar9 * 5.0,(MethodInfo *)0x0);
              pMVar6 = (MethodInfo *)0x0;
              in_XMM1_Da = UVar11.fields.z;
              UnityEngine_Transform__set_rotation(__this_01,UVar11,(MethodInfo *)0x0);
              uVar10 = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
              if (*(char *)((long)&(__this_03->fields)._syncTransforms + 1) != '\0') {
                x_00 = (UnityEngine_Object_o *)
                       CustomLogic_CustomLogicPhotonSync__get_Rigidbody(__this_03,pMVar6);
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pMVar6 = (MethodInfo *)0x0;
                bVar5 = UnityEngine_Object__op_Inequality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                uVar10 = CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01);
                if ((char)bVar5 != '\0') {
                  x_01 = (long *)__this_03;
                  __this_02 = CustomLogic_CustomLogicPhotonSync__get_Rigidbody(__this_03,pMVar6);
                  if (__this_02 != (UnityEngine_Rigidbody_o *)0x0) {
                    fVar9 = (__this_03->fields)._correctVelocity.fields.z;
                    UnityEngine_Rigidbody__set_velocity
                              (__this_02,(UnityEngine_Vector3_o)(__this_03->fields)._correctVelocity.fields,
                               (MethodInfo *)0x0);
                    UVar15.fields.y = (float)extraout_XMM0_Db_02;
                    UVar15.fields.x = (float)extraout_XMM0_Da_02;
                    UVar15.fields.z = fVar9;
                    return (UnityEngine_Vector3_o)UVar15.fields;
                  }
                  goto label_042594cc;
                }
              }
              goto label_042592fb;
            }
          }
        }
      }
label_042594cc:
      il2cpp_runtime_helper_022b2c90();
      uVar10 = (*(((CustomLogic_CustomLogicPhotonSync_o *)x_01)->klass->vtable)._60_OnPhotonSerializeView.
                 methodPtr)();
      UVar14.fields.z = in_XMM1_Da;
      UVar14.fields.x = (float)(int)uVar10;
      UVar14.fields.y = (float)(int)((ulong)uVar10 >> 0x20);
      return (UnityEngine_Vector3_o)UVar14.fields;
    }
  }
label_0425927b:
  if (g_data_057a65d5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a65d5 = '\x01';
  }
  return (UnityEngine_Vector3_o)**(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8);
}


// CustomLogic.CustomLogicPhotonSync$$Photon.Pun.IPunObservable.OnPhotonSerializeView
// il2cpp: void CustomLogic_CustomLogicPhotonSync__Photon_Pun_IPunObservable_OnPhotonSerializeView (CustomLogic_CustomLogicPhotonSync_o* __this, Photon_Pun_PhotonStream_o* stream, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x42594e0

void CustomLogic_CustomLogicPhotonSync__Photon_Pun_IPunObservable_OnPhotonSerializeView
               (CustomLogic_CustomLogicPhotonSync_o *__this,Photon_Pun_PhotonStream_o *stream,
               Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  
  vtableDispatch = (__this->klass->vtable)._60_OnPhotonSerializeView.methodPtr;
  (*vtableDispatch)
            (__this,stream,(__this->klass->vtable)._60_OnPhotonSerializeView.method,vtableDispatch);
  return;
}


// CustomLogic.CustomLogicPhotonSync$$Transfer
// il2cpp: void CustomLogic_CustomLogicPhotonSync__Transfer (CustomLogic_CustomLogicPhotonSync_o* __this, CustomLogic_CustomLogicPlayerBuiltin_o* player, const MethodInfo* method);
// 0x4259500

void CustomLogic_CustomLogicPhotonSync__Transfer
               (CustomLogic_CustomLogicPhotonSync_o *__this,CustomLogic_CustomLogicPlayerBuiltin_o *player,
               MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Object_o *x;
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  Photon_Pun_PhotonView_o *pPVar2;
  Photon_Realtime_Player_o *pPVar3;
  CustomLogic_CustomLogicNetworkViewBuiltin_o *pCVar4;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  bool_conflict bVar5;
  System_Object_array *pSVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  Photon_Realtime_Player_o *pPVar10;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this_06;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this_07;
  Photon_Realtime_Player_o *player_00;
  CustomLogic_CustomLogicPhotonSync_o *pCVar11;
  undefined1 auVar12 [12];
  undefined1 auVar13 [16];
  System_Collections_Generic_List_Enumerator_T__c *pSVar14;
  Il2CppType *pIVar15;
  CustomLogic_CustomLogicComponentInstance_o *pCVar16;
  CustomLogic_CustomLogicComponentInstance_o *__this_08;
  undefined1 auStack_60 [16];
  CustomLogic_CustomLogicComponentInstance_o *pCStack_50;
  Il2CppRGCTXData *pIStack_48;
  _union_249689 _Stack_40;
  
  player_00 = (Photon_Realtime_Player_o *)player;
  pCVar11 = __this;
  if (g_data_057adbbb == '\0') {
    pCVar11 = (CustomLogic_CustomLogicPhotonSync_o *)&TypeInfo_PhotonNetwork;
    il2cpp_runtime_helper_023445d0();
    g_data_057adbbb = '\x01';
  }
  pPVar2 = (__this->fields).PhotonView;
  if (pPVar2 != (Photon_Pun_PhotonView_o *)0x0) {
    if ((char)(pPVar2->fields)._IsMine_k__BackingField == '\0') {
      return;
    }
    if (player != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
      pPVar3 = (player->fields).Player;
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pCVar11 = (CustomLogic_CustomLogicPhotonSync_o *)0x0;
        pPVar10 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      }
      else {
        pCVar11 = (CustomLogic_CustomLogicPhotonSync_o *)0x0;
        pPVar10 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      }
      if (pPVar3 == pPVar10) {
        return;
      }
      pPVar3 = (player->fields).Player;
      if (pPVar3 != (Photon_Realtime_Player_o *)0x0) {
        pPVar2 = (__this->fields).PhotonView;
        pCVar11 = (CustomLogic_CustomLogicPhotonSync_o *)0x0;
        if (pPVar2 != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__TransferOwnership_3ef9aa0
                    (pPVar2,(pPVar3->fields).actorNumber,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  auVar13 = il2cpp_runtime_helper_022b2c90();
  _Stack_40 = auVar13._0_8_;
  if (g_data_057adbbc == '\0') {
    pIStack_48 = (Il2CppRGCTXData *)0x42595c6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicPlayerBuiltin);
    g_data_057adbbc = '\x01';
  }
  if (auVar13._8_8_ == (Photon_Realtime_Player_o *)0x0) {
    __this_06 = (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0;
  }
  else {
    pIStack_48 = (Il2CppRGCTXData *)0x42595e1;
    __this_06 = (CustomLogic_CustomLogicPlayerBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicPlayerBuiltin);
    pIStack_48 = (Il2CppRGCTXData *)0x42595f1;
    CustomLogic_CustomLogicPlayerBuiltin___ctor(__this_06,auVar13._8_8_,(MethodInfo *)0x0);
  }
  pIStack_48 = (Il2CppRGCTXData *)0x4259605;
  __this_07 = (CustomLogic_CustomLogicPlayerBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicPlayerBuiltin);
  pIStack_48 = (Il2CppRGCTXData *)0x4259615;
  CustomLogic_CustomLogicPlayerBuiltin___ctor(__this_07,player_00,(MethodInfo *)0x0);
  pCVar4 = (pCVar11->fields)._NetworkView_k__BackingField;
  if (pCVar4 == (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
    return;
  }
  pIStack_48 = (Il2CppRGCTXData *)player;
  if (g_data_057aca13 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicComponentInstance_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicComponentInst);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"OnNetworkTransfer");
    g_data_057aca13 = '\x01';
  }
  pSVar14 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar15 = (Il2CppType *)0x0;
  pCVar16 = (CustomLogic_CustomLogicComponentInstance_o *)0x0;
  pMVar1 = (pCVar4->fields).MapObject;
  if (pMVar1 != (Map_MapObject_o *)0x0) {
    x = (UnityEngine_Object_o *)(pMVar1->fields).GameObject;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      return;
    }
    __this_00 = (pCVar4->fields)._classInstances;
    if (__this_00 != (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)auStack_60,
                 (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicComponentInst);
      pSVar14 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_60._0_8_;
      pIVar15 = (Il2CppType *)auStack_60._8_8_;
      __this_08 = pCStack_50;
      if (__this_06 == (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
        while (__this_02.fields._8_8_ = pIVar15,
              __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar14,
              __this_02.fields._current = (Il2CppObject *)__this_08,
              bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffff80),
              (char)bVar5 != '\0') {
          pCVar16 = __this_08;
          pSVar6 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,2);
          if (pSVar6 == (System_Object_array *)0x0) goto label_04125b6c;
          if ((int)pSVar6->max_length == 0) goto label_04125b71;
          pSVar6->m_Items[0] = (Il2CppObject *)0x0;
          il2cpp_runtime_helper_022b4080(pSVar6->m_Items,0);
          if ((__this_07 != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) &&
             (lVar7 = il2cpp_runtime_helper_023051f0(__this_07,(((pSVar6->obj).klass)->_1).element_class), lVar7 == 0))
          goto label_04125b7b;
          if ((uint)pSVar6->max_length < 2) goto label_04125b67;
          pSVar6->m_Items[1] = (Il2CppObject *)__this_07;
          il2cpp_runtime_helper_022b4080(pSVar6->m_Items + 1,__this_07);
          if (__this_08 == (CustomLogic_CustomLogicComponentInstance_o *)0x0) goto label_04125b76;
          CustomLogic_CustomLogicComponentInstance__EvaluateMethodForCallbacks
                    (__this_08,"OnNetworkTransfer",pSVar6,(MethodInfo *)0x0);
          __this_08 = pCVar16;
        }
      }
      else {
        while (__this_01.fields._8_8_ = pIVar15,
              __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar14,
              __this_01.fields._current = (Il2CppObject *)__this_08,
              bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff80),
              (char)bVar5 != '\0') {
          pCVar16 = __this_08;
          pSVar6 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,2);
          if (pSVar6 == (System_Object_array *)0x0) goto label_04125b6c;
          lVar7 = il2cpp_runtime_helper_023051f0(__this_06,(((pSVar6->obj).klass)->_1).element_class);
          if (lVar7 == 0) goto label_04125b8a;
          if ((int)pSVar6->max_length == 0) goto label_04125b71;
          pSVar6->m_Items[0] = (Il2CppObject *)__this_06;
          il2cpp_runtime_helper_022b4080(pSVar6->m_Items,__this_06);
          if ((__this_07 != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) &&
             (lVar7 = il2cpp_runtime_helper_023051f0(__this_07,(((pSVar6->obj).klass)->_1).element_class), lVar7 == 0))
          goto label_04125b7b;
          if ((uint)pSVar6->max_length < 2) goto label_04125b67;
          pSVar6->m_Items[1] = (Il2CppObject *)__this_07;
          il2cpp_runtime_helper_022b4080(pSVar6->m_Items + 1,__this_07);
          if (__this_08 == (CustomLogic_CustomLogicComponentInstance_o *)0x0) goto label_04125b76;
          CustomLogic_CustomLogicComponentInstance__EvaluateMethodForCallbacks
                    (__this_08,"OnNetworkTransfer",pSVar6,(MethodInfo *)0x0);
          __this_08 = pCVar16;
        }
      }
      __this_03.fields._8_8_ = pIVar15;
      __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar14;
      __this_03.fields._current = (Il2CppObject *)__this_08;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
      return;
    }
  }
label_04125b99:
  auVar12 = il2cpp_runtime_helper_022b2c90();
  if (auVar12._8_4_ == 1) {
    plVar9 = (long *)__cxa_begin_catch(auVar12._0_8_);
    lVar7 = *plVar9;
    __cxa_end_catch();
    __this_04.fields._8_8_ = pIVar15;
    __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar14;
    __this_04.fields._current = (Il2CppObject *)pCVar16;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
    if (lVar7 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar7);
  }
  __this_05.fields._8_8_ = pIVar15;
  __this_05.fields._list = (System_Collections_Generic_List_T__o *)pSVar14;
  __this_05.fields._current = (Il2CppObject *)pCVar16;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff80);
  _Unwind_Resume(auVar12._0_8_);
label_04125b67:
  il2cpp_runtime_helper_022b2ca0();
label_04125b6c:
  il2cpp_runtime_helper_022b2c90();
label_04125b71:
  il2cpp_runtime_helper_022b2ca0();
label_04125b76:
  il2cpp_runtime_helper_022b2c90();
label_04125b7b:
  uVar8 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10(uVar8,0);
label_04125b8a:
  uVar8 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10(uVar8,0);
  goto label_04125b99;
}


// CustomLogic.CustomLogicPhotonSync$$Photon.Pun.IOnPhotonViewOwnerChange.OnOwnerChange
// il2cpp: void CustomLogic_CustomLogicPhotonSync__Photon_Pun_IOnPhotonViewOwnerChange_OnOwnerChange (CustomLogic_CustomLogicPhotonSync_o* __this, Photon_Realtime_Player_o* newOwner, Photon_Realtime_Player_o* previousOwner, const MethodInfo* method);
// 0x42595a0

void CustomLogic_CustomLogicPhotonSync__Photon_Pun_IOnPhotonViewOwnerChange_OnOwnerChange
               (CustomLogic_CustomLogicPhotonSync_o *__this,Photon_Realtime_Player_o *newOwner,
               Photon_Realtime_Player_o *previousOwner,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Object_o *x;
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  CustomLogic_CustomLogicNetworkViewBuiltin_o *pCVar2;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  bool_conflict bVar3;
  System_Object_array *pSVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this_06;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this_07;
  undefined1 auVar8 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar9;
  Il2CppType *pIVar10;
  CustomLogic_CustomLogicComponentInstance_o *pCVar11;
  CustomLogic_CustomLogicComponentInstance_o *__this_08;
  undefined1 auStack_48 [16];
  CustomLogic_CustomLogicComponentInstance_o *pCStack_38;
  Il2CppRGCTXData *pIStack_30;
  
  if (g_data_057adbbc == '\0') {
    pIStack_30 = (Il2CppRGCTXData *)0x42595c6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicPlayerBuiltin);
    g_data_057adbbc = '\x01';
  }
  if (previousOwner == (Photon_Realtime_Player_o *)0x0) {
    __this_06 = (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0;
  }
  else {
    pIStack_30 = (Il2CppRGCTXData *)0x42595e1;
    __this_06 = (CustomLogic_CustomLogicPlayerBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicPlayerBuiltin);
    pIStack_30 = (Il2CppRGCTXData *)0x42595f1;
    CustomLogic_CustomLogicPlayerBuiltin___ctor(__this_06,previousOwner,(MethodInfo *)0x0);
  }
  pIStack_30 = (Il2CppRGCTXData *)0x4259605;
  __this_07 = (CustomLogic_CustomLogicPlayerBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicPlayerBuiltin);
  pIStack_30 = (Il2CppRGCTXData *)0x4259615;
  CustomLogic_CustomLogicPlayerBuiltin___ctor(__this_07,newOwner,(MethodInfo *)0x0);
  pCVar2 = (__this->fields)._NetworkView_k__BackingField;
  if (pCVar2 == (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
    return;
  }
  if (g_data_057aca13 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicComponentInstance_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicComponentInst);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"OnNetworkTransfer");
    g_data_057aca13 = '\x01';
  }
  pSVar9 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar10 = (Il2CppType *)0x0;
  pCVar11 = (CustomLogic_CustomLogicComponentInstance_o *)0x0;
  pMVar1 = (pCVar2->fields).MapObject;
  if (pMVar1 != (Map_MapObject_o *)0x0) {
    x = (UnityEngine_Object_o *)(pMVar1->fields).GameObject;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      return;
    }
    __this_00 = (pCVar2->fields)._classInstances;
    if (__this_00 != (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,
                 (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_CustomLogic_CustomLogicComponentInst);
      pSVar9 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_48._0_8_;
      pIVar10 = (Il2CppType *)auStack_48._8_8_;
      __this_08 = pCStack_38;
      if (__this_06 == (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
        while (__this_02.fields._8_8_ = pIVar10,
              __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar9,
              __this_02.fields._current = (Il2CppObject *)__this_08,
              bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98),
              (char)bVar3 != '\0') {
          pCVar11 = __this_08;
          pSVar4 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,2);
          if (pSVar4 == (System_Object_array *)0x0) goto label_04125b6c;
          if ((int)pSVar4->max_length == 0) goto label_04125b71;
          pSVar4->m_Items[0] = (Il2CppObject *)0x0;
          il2cpp_runtime_helper_022b4080(pSVar4->m_Items,0);
          if ((__this_07 != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) &&
             (lVar5 = il2cpp_runtime_helper_023051f0(__this_07,(((pSVar4->obj).klass)->_1).element_class), lVar5 == 0))
          goto label_04125b7b;
          if ((uint)pSVar4->max_length < 2) goto label_04125b67;
          pSVar4->m_Items[1] = (Il2CppObject *)__this_07;
          il2cpp_runtime_helper_022b4080(pSVar4->m_Items + 1,__this_07);
          if (__this_08 == (CustomLogic_CustomLogicComponentInstance_o *)0x0) goto label_04125b76;
          CustomLogic_CustomLogicComponentInstance__EvaluateMethodForCallbacks
                    (__this_08,"OnNetworkTransfer",pSVar4,(MethodInfo *)0x0);
          __this_08 = pCVar11;
        }
      }
      else {
        while (__this_01.fields._8_8_ = pIVar10,
              __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar9,
              __this_01.fields._current = (Il2CppObject *)__this_08,
              bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff98),
              (char)bVar3 != '\0') {
          pCVar11 = __this_08;
          pSVar4 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,2);
          if (pSVar4 == (System_Object_array *)0x0) goto label_04125b6c;
          lVar5 = il2cpp_runtime_helper_023051f0(__this_06,(((pSVar4->obj).klass)->_1).element_class);
          if (lVar5 == 0) goto label_04125b8a;
          if ((int)pSVar4->max_length == 0) goto label_04125b71;
          pSVar4->m_Items[0] = (Il2CppObject *)__this_06;
          il2cpp_runtime_helper_022b4080(pSVar4->m_Items,__this_06);
          if ((__this_07 != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) &&
             (lVar5 = il2cpp_runtime_helper_023051f0(__this_07,(((pSVar4->obj).klass)->_1).element_class), lVar5 == 0))
          goto label_04125b7b;
          if ((uint)pSVar4->max_length < 2) goto label_04125b67;
          pSVar4->m_Items[1] = (Il2CppObject *)__this_07;
          il2cpp_runtime_helper_022b4080(pSVar4->m_Items + 1,__this_07);
          if (__this_08 == (CustomLogic_CustomLogicComponentInstance_o *)0x0) goto label_04125b76;
          CustomLogic_CustomLogicComponentInstance__EvaluateMethodForCallbacks
                    (__this_08,"OnNetworkTransfer",pSVar4,(MethodInfo *)0x0);
          __this_08 = pCVar11;
        }
      }
      __this_03.fields._8_8_ = pIVar10;
      __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar9;
      __this_03.fields._current = (Il2CppObject *)__this_08;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
      return;
    }
  }
label_04125b99:
  auVar8 = il2cpp_runtime_helper_022b2c90();
  if (auVar8._8_4_ == 1) {
    plVar7 = (long *)__cxa_begin_catch(auVar8._0_8_);
    lVar5 = *plVar7;
    __cxa_end_catch();
    __this_04.fields._8_8_ = pIVar10;
    __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar9;
    __this_04.fields._current = (Il2CppObject *)pCVar11;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
    if (lVar5 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar5);
  }
  __this_05.fields._8_8_ = pIVar10;
  __this_05.fields._list = (System_Collections_Generic_List_T__o *)pSVar9;
  __this_05.fields._current = (Il2CppObject *)pCVar11;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff98);
  _Unwind_Resume(auVar8._0_8_);
label_04125b67:
  il2cpp_runtime_helper_022b2ca0();
label_04125b6c:
  il2cpp_runtime_helper_022b2c90();
label_04125b71:
  il2cpp_runtime_helper_022b2ca0();
label_04125b76:
  il2cpp_runtime_helper_022b2c90();
label_04125b7b:
  uVar6 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10(uVar6,0);
label_04125b8a:
  uVar6 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10(uVar6,0);
  goto label_04125b99;
}


// CustomLogic.CustomLogicPhotonSync$$OnPlayerLeftRoom
// il2cpp: void CustomLogic_CustomLogicPhotonSync__OnPlayerLeftRoom (CustomLogic_CustomLogicPhotonSync_o* __this, Photon_Realtime_Player_o* otherPlayer, const MethodInfo* method);
// 0x4259650

void CustomLogic_CustomLogicPhotonSync__OnPlayerLeftRoom
               (CustomLogic_CustomLogicPhotonSync_o *__this,Photon_Realtime_Player_o *otherPlayer,
               MethodInfo *method)

{
  int iVar1;
  int32_t viewID;
  long lVar2;
  CustomLogic_CustomLogicMapObjectBuiltin_o *obj;
  char cVar3;
  bool_conflict bVar4;
  Photon_Realtime_Room_o *pPVar5;
  System_String_array *pSVar6;
  System_String_o *pSVar7;
  System_String_o *pSVar8;
  undefined8 *puVar9;
  long *plVar10;
  System_String_o *pSVar11;
  System_Type_o *pSVar12;
  System_String_o *str3;
  UnityEngine_Object_o *pUVar13;
  System_String_o *pSVar14;
  Photon_Realtime_Player_o *pPVar15;
  UnityEngine_GameObject_o *targetGo;
  System_Object_array *in_RCX;
  int32_t target;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  MethodInfo *pMVar16;
  int32_t playerID;
  Photon_Pun_PhotonView_o *pPVar17;
  Photon_Pun_PhotonView_o *pPVar18;
  long lVar19;
  Photon_Pun_PhotonView_o *view;
  MethodInfo **ppMVar20;
  MethodInfo **ppMVar21;
  undefined8 uStack_38;
  System_String_array *pSStack_30;
  Photon_Pun_PhotonView_o *pPStack_28;
  
  ppMVar20 = (MethodInfo **)__this;
  if (g_data_057adbbd == '\0') {
    ppMVar20 = &TypeInfo_PhotonNetwork;
    il2cpp_runtime_helper_023445d0();
    g_data_057adbbd = '\x01';
  }
  pPVar17 = (__this->fields).PhotonView;
  if (pPVar17 == (Photon_Pun_PhotonView_o *)0x0) {
label_042596ef:
    il2cpp_runtime_helper_022b2c90();
    ppMVar21 = ppMVar20;
    if (g_data_057adbbe == '\0') {
      ppMVar21 = &TypeInfo_PhotonNetwork;
      pPStack_28 = (Photon_Pun_PhotonView_o *)0x4259719;
      il2cpp_runtime_helper_023445d0();
      g_data_057adbbe = '\x01';
    }
    pPVar17 = (((CustomLogic_CustomLogicPhotonSync_o *)ppMVar20)->fields).PhotonView;
    if (pPVar17 == (Photon_Pun_PhotonView_o *)0x0) {
      pPStack_28 = (Photon_Pun_PhotonView_o *)0x4259771;
      uStack_38 = il2cpp_runtime_helper_022b2c90();
      pSStack_30 = (System_String_array *)ppMVar20;
      pPStack_28 = (Photon_Pun_PhotonView_o *)__this;
      if (g_data_057adbbf == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicMapBuiltin);
        g_data_057adbbf = '\x01';
        iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
        lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
      }
      else {
        lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
      }
      if (lVar2 == 0) {
        return;
      }
      obj = (((CustomLogic_CustomLogicPhotonSync_o *)ppMVar21)->fields).
            _CustomLogicMapObjectBuiltin_k__BackingField;
      if (*(int *)(TypeInfo_CustomLogicMapBuiltin + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      CustomLogic_CustomLogicMapBuiltin__DestroyMapObjectBuiltin((Il2CppObject *)obj,1,(MethodInfo *)0x0);
      return;
    }
    if ((char)(pPVar17->fields)._IsMine_k__BackingField == '\0') {
      return;
    }
    pPStack_28 = (Photon_Pun_PhotonView_o *)0x4259739;
    targetGo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)ppMVar20,(MethodInfo *)0x0);
    if (*(int *)((long)&TypeInfo_PhotonNetwork[2].parameters + 4) != 0) {
      Photon_Pun_PhotonNetwork__Destroy_3eec3a0(targetGo,(MethodInfo *)0x0);
      return;
    }
    pPStack_28 = (Photon_Pun_PhotonView_o *)0x4259761;
    il2cpp_runtime_helper_02337ed0();
    Photon_Pun_PhotonNetwork__Destroy_3eec3a0(targetGo,(MethodInfo *)0x0);
    return;
  }
  if (((pPVar17->fields)._Owner_k__BackingField != otherPlayer) ||
     (*(char *)((long)&(__this->fields)._synced + 1) == '\0')) {
    return;
  }
  if (*(int *)((long)&TypeInfo_PhotonNetwork[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    return;
  }
  pPVar17 = (__this->fields).PhotonView;
  if (*(int *)((long)&TypeInfo_PhotonNetwork[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppMVar20 = (MethodInfo **)0x0;
  pPVar15 = Photon_Pun_PhotonNetwork__get_MasterClient((MethodInfo *)0x0);
  if (pPVar17 == (Photon_Pun_PhotonView_o *)0x0) goto label_042596ef;
  pMVar16 = (MethodInfo *)0x0;
  if (g_data_057abf30 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"' viewId: ");
    il2cpp_runtime_helper_023445d0(&", but provided Player newOwner is null.");
    il2cpp_runtime_helper_023445d0(&"Attempting to TransferOwnership of GameObject '");
    g_data_057abf30 = '\x01';
    pMVar16 = extraout_RDX;
  }
  if (pPVar15 != (Photon_Realtime_Player_o *)0x0) {
    Photon_Pun_PhotonView__TransferOwnership_3ef9aa0(pPVar17,(pPVar15->fields).actorNumber,pMVar16);
    return;
  }
  if (*(int *)((long)&TypeInfo_PhotonNetwork[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    iVar1 = *(int *)(TypeInfo_PhotonNetwork[2].virtualMethodPointer + 0x1c);
    pPVar18 = TypeInfo_string;
  }
  else {
    iVar1 = *(int *)(TypeInfo_PhotonNetwork[2].virtualMethodPointer + 0x1c);
    pPVar18 = TypeInfo_string;
  }
  if (iVar1 < 1) {
    TypeInfo_string = pPVar18;
    return;
  }
  playerID = 5;
  TypeInfo_string = pPVar18;
  pSVar6 = (System_String_array *)il2cpp_runtime_helper_022b2a40();
  pSStack_30 = (System_String_array *)&TypeInfo_PhotonNetwork;
  if (pSVar6 != (System_String_array *)0x0) {
    if ((int)pSVar6->max_length != 0) {
      pSVar6->m_Items[0] = "Attempting to TransferOwnership of GameObject '";
      il2cpp_runtime_helper_022b4080(pSVar6->m_Items);
      playerID = 0;
      pPVar18 = pPVar17;
      pSVar7 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pPVar17,(MethodInfo *)0x0);
      if (1 < (uint)pSVar6->max_length) {
        pPVar18 = (Photon_Pun_PhotonView_o *)(pSVar6->m_Items + 1);
        pSVar6->m_Items[1] = pSVar7;
        il2cpp_runtime_helper_022b4080();
        playerID = (int32_t)pSVar7;
        if (2 < (uint)pSVar6->max_length) {
          pSVar6->m_Items[2] = "' viewId: ";
          il2cpp_runtime_helper_022b4080(pSVar6->m_Items + 2);
          pPVar18 = (Photon_Pun_PhotonView_o *)&stack0xffffffffffffffec;
          playerID = 0;
          pSVar7 = System_Int32__ToString((int32_t)pPVar18,(MethodInfo *)0x0);
          if (3 < (uint)pSVar6->max_length) {
            pPVar18 = (Photon_Pun_PhotonView_o *)(pSVar6->m_Items + 3);
            pSVar6->m_Items[3] = pSVar7;
            il2cpp_runtime_helper_022b4080();
            playerID = (int32_t)pSVar7;
            if (4 < (uint)pSVar6->max_length) {
              pSVar6->m_Items[4] = ", but provided Player newOwner is null.";
              il2cpp_runtime_helper_022b4080(pSVar6->m_Items + 4);
              pSVar7 = System_String__Concat_3af7570(pSVar6,(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              UnityEngine_Debug__LogWarning((Il2CppObject *)pSVar7,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
    pSStack_30 = pSVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar16 = extraout_RDX_00;
  pPStack_28 = pPVar17;
  if (g_data_057abf31 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"' viewId: ");
    il2cpp_runtime_helper_023445d0(&" without the authority to do so. TransferOwnership is not allowed if PhotonView.OwnershipTransfer is set to Fixed.");
    il2cpp_runtime_helper_023445d0(&"Attempting to TransferOwnership of GameObject '");
    il2cpp_runtime_helper_023445d0(&" without the authority to do so. PhotonView.OwnershipTransfer is set to Request, so only the controller of this object can TransferOwnership.");
    g_data_057abf31 = '\x01';
    pMVar16 = extraout_RDX_01;
  }
  uStack_38 = (ulong)(uint)uStack_38;
  iVar1 = (pPVar18->fields).OwnershipTransfer;
  if ((iVar1 == 1) || ((iVar1 == 2 && ((char)(pPVar18->fields)._IsMine_k__BackingField != '\0')))) {
    viewID = (pPVar18->fields).viewIdField;
    if (*(int *)((long)&TypeInfo_PhotonNetwork[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar16 = extraout_RDX_02;
    }
    Photon_Pun_PhotonNetwork__TransferOwnership(viewID,playerID,pMVar16);
    return;
  }
  if (*(int *)((long)&TypeInfo_PhotonNetwork[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    iVar1 = *(int *)(TypeInfo_PhotonNetwork[2].virtualMethodPointer + 0x1c);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PhotonNetwork[2].virtualMethodPointer + 0x1c);
  }
  if (iVar1 < 1) {
    return;
  }
  iVar1 = (pPVar18->fields).OwnershipTransfer;
  if (iVar1 == 2) {
    pSVar7 = (System_String_o *)&g_data_00000005;
    pSVar6 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
    if (pSVar6 == (System_String_array *)0x0) goto label_03ff9d97;
    if ((int)pSVar6->max_length != 0) {
      pSVar6->m_Items[0] = "Attempting to TransferOwnership of GameObject '";
      il2cpp_runtime_helper_022b4080(pSVar6->m_Items);
      pSVar7 = (System_String_o *)0x0;
      pSVar8 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pPVar18,(MethodInfo *)0x0);
      if (1 < (uint)pSVar6->max_length) {
        pSVar6->m_Items[1] = pSVar8;
        il2cpp_runtime_helper_022b4080(pSVar6->m_Items + 1);
        pSVar7 = pSVar8;
        if (2 < (uint)pSVar6->max_length) {
          pSVar6->m_Items[2] = "' viewId: ";
          il2cpp_runtime_helper_022b4080(pSVar6->m_Items + 2);
          uStack_38 = CONCAT44((pPVar18->fields).viewIdField,(uint)uStack_38);
          pSVar7 = (System_String_o *)0x0;
          pSVar8 = System_Int32__ToString((int)&uStack_38 + 4,(MethodInfo *)0x0);
          if (3 < (uint)pSVar6->max_length) {
            pSVar6->m_Items[3] = pSVar8;
            il2cpp_runtime_helper_022b4080(pSVar6->m_Items + 3);
            pSVar7 = pSVar8;
            if (4 < (uint)pSVar6->max_length) {
              puVar9 = &" without the authority to do so. PhotonView.OwnershipTransfer is set to Request, so only the controller of this object can TransferOwnership.";
              goto label_03ff9d47;
            }
          }
        }
      }
    }
  }
  else {
    if (iVar1 != 0) {
      return;
    }
    pSVar7 = (System_String_o *)&g_data_00000005;
    pSVar6 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
    if (pSVar6 == (System_String_array *)0x0) goto label_03ff9d97;
    if ((int)pSVar6->max_length != 0) {
      pSVar6->m_Items[0] = "Attempting to TransferOwnership of GameObject '";
      il2cpp_runtime_helper_022b4080(pSVar6->m_Items);
      pSVar7 = (System_String_o *)0x0;
      pSVar8 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pPVar18,(MethodInfo *)0x0);
      if (1 < (uint)pSVar6->max_length) {
        pSVar6->m_Items[1] = pSVar8;
        il2cpp_runtime_helper_022b4080(pSVar6->m_Items + 1);
        pSVar7 = pSVar8;
        if (2 < (uint)pSVar6->max_length) {
          pSVar6->m_Items[2] = "' viewId: ";
          il2cpp_runtime_helper_022b4080(pSVar6->m_Items + 2);
          uStack_38 = CONCAT44((pPVar18->fields).viewIdField,(uint)uStack_38);
          pSVar7 = (System_String_o *)0x0;
          pSVar8 = System_Int32__ToString((int)&uStack_38 + 4,(MethodInfo *)0x0);
          if (3 < (uint)pSVar6->max_length) {
            pSVar6->m_Items[3] = pSVar8;
            il2cpp_runtime_helper_022b4080(pSVar6->m_Items + 3);
            pSVar7 = pSVar8;
            if (4 < (uint)pSVar6->max_length) {
              puVar9 = &" without the authority to do so. TransferOwnership is not allowed if PhotonView.OwnershipTransfer is set to Fixed.";
label_03ff9d47:
              pSVar6->m_Items[4] = (System_String_o *)*puVar9;
              il2cpp_runtime_helper_022b4080(pSVar6->m_Items + 4);
              pSVar7 = System_String__Concat_3af7570(pSVar6,(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              UnityEngine_Debug__LogWarning((Il2CppObject *)pSVar7,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_03ff9d97:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057abf36 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IPunObservable);
    il2cpp_runtime_helper_023445d0(&" does not. It is Type: ");
    il2cpp_runtime_helper_023445d0(&"Observed scripts have to implement IPunObservable. ");
    g_data_057abf36 = '\x01';
  }
  pPVar17 = TypeInfo_IPunObservable;
  plVar10 = (long *)il2cpp_runtime_helper_023051f0();
  pSVar8 = "Observed scripts have to implement IPunObservable. ";
  if (plVar10 != (long *)0x0) {
    lVar2 = *plVar10;
    if ((ulong)*(ushort *)(lVar2 + 0x12e) != 0) {
      lVar19 = 0;
      do {
        if (*(Photon_Pun_PhotonView_o **)(*(long *)(lVar2 + 0xb0) + lVar19) == TypeInfo_IPunObservable) {
          puVar9 = (undefined8 *)(lVar2 + (long)*(int *)(*(long *)(lVar2 + 0xb0) + 8 + lVar19) * 0x10 + 0x138)
          ;
          goto label_03ff9f34;
        }
        lVar19 = lVar19 + 0x10;
      } while ((ulong)*(ushort *)(lVar2 + 0x12e) << 4 != lVar19);
    }
    puVar9 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar10,TypeInfo_IPunObservable,0);
label_03ff9f34:
    (*(code *)*puVar9)(plVar10,extraout_RDX_03,puVar9[1]);
    return;
  }
  if (pSVar7 != (System_String_o *)0x0) {
    pSVar11 = (System_String_o *)(*(pSVar7->klass->vtable)._3_ToString.methodPtr)(pSVar7);
    str3 = (System_String_o *)0x0;
    pSVar12 = System_Object__GetType((Il2CppObject *)pSVar7,(MethodInfo *)0x0);
    pSVar14 = " does not. It is Type: ";
    if (pSVar12 != (System_Type_o *)0x0) {
      str3 = (System_String_o *)
             (*(pSVar12->klass->vtable)._3_ToString.methodPtr)
                       (pSVar12,(pSVar12->klass->vtable)._3_ToString.method);
    }
    pSVar8 = System_String__Concat_3af7470(pSVar8,pSVar11,pSVar14,str3,(MethodInfo *)0x0);
    pUVar13 = (UnityEngine_Object_o *)
              UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pSVar7,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Debug__LogError_4db7510((Il2CppObject *)pSVar8,pUVar13,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057abf35 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IPunObservable);
    il2cpp_runtime_helper_023445d0(&" does not. It is Type: ");
    il2cpp_runtime_helper_023445d0(&"Observed scripts have to implement IPunObservable. ");
    g_data_057abf35 = '\x01';
  }
  pPVar18 = TypeInfo_IPunObservable;
  view = pPVar17;
  plVar10 = (long *)il2cpp_runtime_helper_023051f0();
  pSVar7 = "Observed scripts have to implement IPunObservable. ";
  if (plVar10 == (long *)0x0) {
    if (pPVar17 != (Photon_Pun_PhotonView_o *)0x0) {
      pSVar14 = (System_String_o *)(*(pPVar17->klass->vtable)._3_ToString.methodPtr)(pPVar17);
      pSVar11 = (System_String_o *)0x0;
      pSVar12 = System_Object__GetType((Il2CppObject *)pPVar17,(MethodInfo *)0x0);
      pSVar8 = " does not. It is Type: ";
      if (pSVar12 != (System_Type_o *)0x0) {
        pSVar11 = (System_String_o *)
                  (*(pSVar12->klass->vtable)._3_ToString.methodPtr)
                            (pSVar12,(pSVar12->klass->vtable)._3_ToString.method);
      }
      pSVar7 = System_String__Concat_3af7470(pSVar7,pSVar14,pSVar8,pSVar11,(MethodInfo *)0x0);
      pUVar13 = (UnityEngine_Object_o *)
                UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pPVar17,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Debug__LogError_4db7510((Il2CppObject *)pSVar7,pUVar13,(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057abf38 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
      g_data_057abf38 = '\x01';
    }
    ppMVar20 = &TypeInfo_PhotonNetwork;
    if (*(int *)((long)&TypeInfo_PhotonNetwork[2].parameters + 4) == 0) {
      ppMVar20 = (MethodInfo **)il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057abed6 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
      il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
      il2cpp_runtime_helper_023445d0(&"\" gets executed locally only, if at all.");
      il2cpp_runtime_helper_023445d0(&"RPCs can only be sent in rooms. Call of \"");
      il2cpp_runtime_helper_023445d0(&". Possible scene loading in progress?");
      il2cpp_runtime_helper_023445d0(&"Could not execute RPC ");
      il2cpp_runtime_helper_023445d0(&"RPC method name cannot be null or empty.");
      g_data_057abed6 = '\x01';
    }
    bVar4 = System_String__IsNullOrEmpty((System_String_o *)pPVar18,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      if (*(int *)((long)&TypeInfo_PhotonNetwork[2].parameters + 4) == 0) {
        pMVar16 = TypeInfo_PhotonNetwork;
        il2cpp_runtime_helper_02337ed0();
        bVar4 = Photon_Pun_PhotonNetwork__VerifyCanUseNetwork(pMVar16);
        cVar3 = (char)bVar4;
        pMVar16 = TypeInfo_PhotonNetwork;
      }
      else {
        bVar4 = Photon_Pun_PhotonNetwork__VerifyCanUseNetwork(TypeInfo_PhotonNetwork);
        cVar3 = (char)bVar4;
        pMVar16 = TypeInfo_PhotonNetwork;
      }
      if (cVar3 == '\0') {
        TypeInfo_PhotonNetwork = pMVar16;
        return;
      }
      TypeInfo_PhotonNetwork = pMVar16;
      if (*(int *)((long)&pMVar16[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pPVar5 = Photon_Pun_PhotonNetwork__get_CurrentRoom(pMVar16);
        pSVar7 = "RPCs can only be sent in rooms. Call of \"";
      }
      else {
        pPVar5 = Photon_Pun_PhotonNetwork__get_CurrentRoom(pMVar16);
        pSVar7 = "RPCs can only be sent in rooms. Call of \"";
      }
      "RPCs can only be sent in rooms. Call of \"" = pSVar7;
      if (pPVar5 == (Photon_Realtime_Room_o *)0x0) {
        puVar9 = &"\" gets executed locally only, if at all.";
      }
      else {
        if (*(int *)((long)&TypeInfo_PhotonNetwork[2].parameters + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          lVar2 = *(long *)TypeInfo_PhotonNetwork[2].virtualMethodPointer;
        }
        else {
          lVar2 = *(long *)TypeInfo_PhotonNetwork[2].virtualMethodPointer;
        }
        pSVar7 = "Could not execute RPC ";
        "Could not execute RPC " = pSVar7;
        if (lVar2 != 0) {
          if (*(int *)((long)&TypeInfo_PhotonNetwork[2].parameters + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          Photon_Pun_PhotonNetwork__RPC_3eed7d0
                    (view,(System_String_o *)pPVar18,target,(Photon_Realtime_Player_o *)0x0,0,in_RCX,
                     (MethodInfo *)ppMVar20);
          return;
        }
        puVar9 = &". Possible scene loading in progress?";
      }
      pSVar7 = System_String__Concat_3af7150
                         (pSVar7,(System_String_o *)pPVar18,(System_String_o *)*puVar9,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Debug__LogWarning((Il2CppObject *)pSVar7,(MethodInfo *)0x0);
      return;
    }
    if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Debug__LogError("RPC method name cannot be null or empty.",(MethodInfo *)0x0);
    return;
  }
  lVar2 = *plVar10;
  if ((ulong)*(ushort *)(lVar2 + 0x12e) != 0) {
    lVar19 = 0;
    do {
      if (*(Photon_Pun_PhotonView_o **)(*(long *)(lVar2 + 0xb0) + lVar19) == TypeInfo_IPunObservable) {
        puVar9 = (undefined8 *)(lVar2 + (long)*(int *)(*(long *)(lVar2 + 0xb0) + 8 + lVar19) * 0x10 + 0x138);
        goto label_03ffa104;
      }
      lVar19 = lVar19 + 0x10;
    } while ((ulong)*(ushort *)(lVar2 + 0x12e) << 4 != lVar19);
  }
  puVar9 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar10,TypeInfo_IPunObservable,0);
label_03ffa104:
  (*(code *)*puVar9)(plVar10,extraout_RDX_04,puVar9[1]);
  return;
}


// CustomLogic.CustomLogicPhotonSync$$DestroyMe
// il2cpp: void CustomLogic_CustomLogicPhotonSync__DestroyMe (CustomLogic_CustomLogicPhotonSync_o* __this, const MethodInfo* method);
// 0x4259700

void CustomLogic_CustomLogicPhotonSync__DestroyMe
               (CustomLogic_CustomLogicPhotonSync_o *__this,MethodInfo *method)

{
  int iVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  long lVar3;
  CustomLogic_CustomLogicMapObjectBuiltin_o *obj;
  UnityEngine_GameObject_o *targetGo;
  CustomLogic_CustomLogicPhotonSync_o *pCVar4;
  
  pCVar4 = __this;
  if (g_data_057adbbe == '\0') {
    pCVar4 = (CustomLogic_CustomLogicPhotonSync_o *)&TypeInfo_PhotonNetwork;
    il2cpp_runtime_helper_023445d0();
    g_data_057adbbe = '\x01';
  }
  pPVar2 = (__this->fields).PhotonView;
  if (pPVar2 == (Photon_Pun_PhotonView_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057adbbf == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicMapBuiltin);
      g_data_057adbbf = '\x01';
      iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
      lVar3 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    }
    else {
      lVar3 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    }
    if (lVar3 != 0) {
      obj = (pCVar4->fields)._CustomLogicMapObjectBuiltin_k__BackingField;
      if (*(int *)(TypeInfo_CustomLogicMapBuiltin + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      CustomLogic_CustomLogicMapBuiltin__DestroyMapObjectBuiltin((Il2CppObject *)obj,1,(MethodInfo *)0x0);
      return;
    }
    return;
  }
  if ((char)(pPVar2->fields)._IsMine_k__BackingField == '\0') {
    return;
  }
  targetGo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    Photon_Pun_PhotonNetwork__Destroy_3eec3a0(targetGo,(MethodInfo *)0x0);
    return;
  }
  Photon_Pun_PhotonNetwork__Destroy_3eec3a0(targetGo,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPhotonSync$$OnDestroy
// il2cpp: void CustomLogic_CustomLogicPhotonSync__OnDestroy (CustomLogic_CustomLogicPhotonSync_o* __this, const MethodInfo* method);
// 0x4259780

void CustomLogic_CustomLogicPhotonSync__OnDestroy
               (CustomLogic_CustomLogicPhotonSync_o *__this,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  CustomLogic_CustomLogicMapObjectBuiltin_o *obj;
  
  if (g_data_057adbbf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicMapBuiltin);
    g_data_057adbbf = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    lVar2 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if (lVar2 != 0) {
    obj = (__this->fields)._CustomLogicMapObjectBuiltin_k__BackingField;
    if (*(int *)(TypeInfo_CustomLogicMapBuiltin + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    CustomLogic_CustomLogicMapBuiltin__DestroyMapObjectBuiltin((Il2CppObject *)obj,1,(MethodInfo *)0x0);
    return;
  }
  return;
}


// CustomLogic.CustomLogicPhotonSync$$.ctor
// il2cpp: void CustomLogic_CustomLogicPhotonSync___ctor (CustomLogic_CustomLogicPhotonSync_o* __this, const MethodInfo* method);
// 0x4259840

void CustomLogic_CustomLogicPhotonSync___ctor(CustomLogic_CustomLogicPhotonSync_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  bool bVar7;
  
  *(undefined2 *)&(__this->fields)._syncTransforms = 0x101;
  if (g_data_057a65d5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
    g_data_057a65d5 = '\x01';
  }
  uVar2 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
  fVar1 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  (__this->fields)._correctPosition.fields.x = (float)(int)uVar2;
  (__this->fields)._correctPosition.fields.y = (float)(int)((ulong)uVar2 >> 0x20);
  (__this->fields)._correctPosition.fields.z = fVar1;
  if (g_data_057a6843 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Quaternion);
    g_data_057a6843 = '\x01';
    bVar7 = g_data_057a65d5 == '\0';
    pfVar3 = *(float **)(TypeInfo_Quaternion + 0xb8);
    fVar1 = pfVar3[1];
    fVar4 = pfVar3[2];
    fVar5 = pfVar3[3];
    (__this->fields)._correctRotation.fields.x = *pfVar3;
    (__this->fields)._correctRotation.fields.y = fVar1;
    (__this->fields)._correctRotation.fields.z = fVar4;
    (__this->fields)._correctRotation.fields.w = fVar5;
    if (bVar7) {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a65d5 = '\x01';
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
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


