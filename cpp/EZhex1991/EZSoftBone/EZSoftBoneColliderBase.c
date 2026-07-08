// Type: EZhex1991.EZSoftBone.EZSoftBoneColliderBase
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/EZhex1991.EZSoftBone/EZhex1991.EZSoftBone/EZSoftBoneColliderBase.cs
// Prior real C# source (REFERENCE, outdated): Assets/ThirdParty/EZhex1991/EZSoftBone/Runtime/EZSoftBoneColliderBase.cs  [prior source available (delta unverified)]
// --------------------------------

// EZhex1991.EZSoftBone.EZSoftBoneColliderBase$$OnEnable
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneColliderBase__OnEnable (EZhex1991_EZSoftBone_EZSoftBoneColliderBase_o* __this, const MethodInfo* method);
// 0x2459970

void EZhex1991_EZSoftBone_EZSoftBoneColliderBase__OnEnable
               (EZhex1991_EZSoftBone_EZSoftBoneColliderBase_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_HashSet_object__o *__this_00;
  
  if (DAT_056fe06f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EZSoftBoneColliderBase);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    DAT_056fe06f = '\x01';
    iVar1 = *(int *)(TypeInfo_EZSoftBoneColliderBase + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EZSoftBoneColliderBase + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    __this_00 = (System_Collections_Generic_HashSet_object__o *)
                **(undefined8 **)(TypeInfo_EZSoftBoneColliderBase + 0xb8);
  }
  else {
    __this_00 = (System_Collections_Generic_HashSet_object__o *)
                **(undefined8 **)(TypeInfo_EZSoftBoneColliderBase + 0xb8);
  }
  if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this_00,(Il2CppObject *)__this,MethodInfo_Boolean_Add);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// EZhex1991.EZSoftBone.EZSoftBoneColliderBase$$OnDisable
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneColliderBase__OnDisable (EZhex1991_EZSoftBone_EZSoftBoneColliderBase_o* __this, const MethodInfo* method);
// 0x2459a10

void EZhex1991_EZSoftBone_EZSoftBoneColliderBase__OnDisable
               (EZhex1991_EZSoftBone_EZSoftBoneColliderBase_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_HashSet_object__o *__this_00;
  
  if (DAT_056fe070 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EZSoftBoneColliderBase);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    DAT_056fe070 = '\x01';
    iVar1 = *(int *)(TypeInfo_EZSoftBoneColliderBase + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_EZSoftBoneColliderBase + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    __this_00 = (System_Collections_Generic_HashSet_object__o *)
                **(undefined8 **)(TypeInfo_EZSoftBoneColliderBase + 0xb8);
  }
  else {
    __this_00 = (System_Collections_Generic_HashSet_object__o *)
                **(undefined8 **)(TypeInfo_EZSoftBoneColliderBase + 0xb8);
  }
  if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Remove
              (__this_00,(Il2CppObject *)__this,MethodInfo_Boolean_Remove);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// EZhex1991.EZSoftBone.EZSoftBoneColliderBase$$.ctor
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneColliderBase___ctor (EZhex1991_EZSoftBone_EZSoftBoneColliderBase_o* __this, const MethodInfo* method);
// 0x2459960

void EZhex1991_EZSoftBone_EZSoftBoneColliderBase___ctor
               (EZhex1991_EZSoftBone_EZSoftBoneColliderBase_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneColliderBase$$.cctor
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneColliderBase___cctor (const MethodInfo* method);
// 0x2459ab0

void EZhex1991_EZSoftBone_EZSoftBoneColliderBase___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_056fe071 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EZSoftBoneColliderBase);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_EZhex1991_EZSoftBone_EZSoftBoneCollide);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_EZSoftBoneColliderBase);
    DAT_056fe071 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_EZSoftBoneColliderBase);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_EZhex1991_EZSoftBone_EZSoftBoneCollide);
  **(undefined8 **)(TypeInfo_EZSoftBoneColliderBase + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_EZSoftBoneColliderBase + 0xb8),__this);
  return;
}


