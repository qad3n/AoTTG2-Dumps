// Type: EZhex1991.EZSoftBone.EZSoftBoneColliderBase
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/EZhex1991.EZSoftBone/EZhex1991.EZSoftBone/EZSoftBoneColliderBase.cs
// Prior real C# source (older reference): Assets/ThirdParty/EZhex1991/EZSoftBone/Runtime/EZSoftBoneColliderBase.cs
// --------------------------------

// EZhex1991.EZSoftBone.EZSoftBoneColliderBase$$OnEnable
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneColliderBase__OnEnable (EZhex1991_EZSoftBone_EZSoftBoneColliderBase_o* __this, const MethodInfo* method);
// 0x2497a80

void EZhex1991_EZSoftBone_EZSoftBoneColliderBase__OnEnable
               (EZhex1991_EZSoftBone_EZSoftBoneColliderBase_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_HashSet_object__o *pSVar2;
  
  if (g_data_057a692a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EZSoftBoneColliderBase);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    g_data_057a692a = '\x01';
    iVar1 = *(int *)(_DAT_05578bb0 + 0xe4);
  }
  else {
    iVar1 = *(int *)(_DAT_05578bb0 + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pSVar2 = (System_Collections_Generic_HashSet_object__o *)**(undefined8 **)(_DAT_05578bb0 + 0xb8);
  }
  else {
    pSVar2 = (System_Collections_Generic_HashSet_object__o *)**(undefined8 **)(_DAT_05578bb0 + 0xb8);
  }
  if (pSVar2 == (System_Collections_Generic_HashSet_object__o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057a692b == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_EZSoftBoneColliderBase);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
      g_data_057a692b = '\x01';
      iVar1 = *(int *)(_DAT_05578bb0 + 0xe4);
    }
    else {
      iVar1 = *(int *)(_DAT_05578bb0 + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
      __this_00 = (System_Collections_Generic_HashSet_object__o *)**(undefined8 **)(_DAT_05578bb0 + 0xb8);
    }
    else {
      __this_00 = (System_Collections_Generic_HashSet_object__o *)**(undefined8 **)(_DAT_05578bb0 + 0xb8);
    }
    if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057a692c == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_EZSoftBoneColliderBase);
        il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_EZhex1991_EZSoftBone_EZSoftBoneColliderBase);
        il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_EZSoftBoneColliderBase);
        g_data_057a692c = '\x01';
      }
      pSVar2 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_EZSoftBoneColliderBase);
      System_Collections_Generic_HashSet_object____ctor(pSVar2,MethodInfo_HashSet_1_EZhex1991_EZSoftBone_EZSoftBoneColliderBase);
      **(undefined8 **)(_DAT_05578bb0 + 0xb8) = pSVar2;
      il2cpp_runtime_helper_022b4080(*(undefined8 *)(_DAT_05578bb0 + 0xb8),pSVar2);
      return;
    }
    System_Collections_Generic_HashSet_object___Remove(__this_00,(Il2CppObject *)pSVar2,MethodInfo_Boolean_Remove);
    return;
  }
  System_Collections_Generic_HashSet_object___Add(pSVar2,(Il2CppObject *)__this,MethodInfo_Boolean_Add);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneColliderBase$$OnDisable
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneColliderBase__OnDisable (EZhex1991_EZSoftBone_EZSoftBoneColliderBase_o* __this, const MethodInfo* method);
// 0x2497b20

void EZhex1991_EZSoftBone_EZSoftBoneColliderBase__OnDisable
               (EZhex1991_EZSoftBone_EZSoftBoneColliderBase_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_HashSet_object__o *pSVar2;
  
  if (g_data_057a692b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EZSoftBoneColliderBase);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    g_data_057a692b = '\x01';
    iVar1 = *(int *)(_DAT_05578bb0 + 0xe4);
  }
  else {
    iVar1 = *(int *)(_DAT_05578bb0 + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pSVar2 = (System_Collections_Generic_HashSet_object__o *)**(undefined8 **)(_DAT_05578bb0 + 0xb8);
  }
  else {
    pSVar2 = (System_Collections_Generic_HashSet_object__o *)**(undefined8 **)(_DAT_05578bb0 + 0xb8);
  }
  if (pSVar2 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Remove(pSVar2,(Il2CppObject *)__this,MethodInfo_Boolean_Remove);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a692c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EZSoftBoneColliderBase);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_EZhex1991_EZSoftBone_EZSoftBoneColliderBase);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_EZSoftBoneColliderBase);
    g_data_057a692c = '\x01';
  }
  pSVar2 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_EZSoftBoneColliderBase);
  System_Collections_Generic_HashSet_object____ctor(pSVar2,MethodInfo_HashSet_1_EZhex1991_EZSoftBone_EZSoftBoneColliderBase);
  **(undefined8 **)(_DAT_05578bb0 + 0xb8) = pSVar2;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(_DAT_05578bb0 + 0xb8),pSVar2);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneColliderBase$$.ctor
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneColliderBase___ctor (EZhex1991_EZSoftBone_EZSoftBoneColliderBase_o* __this, const MethodInfo* method);
// 0x2497a70

void EZhex1991_EZSoftBone_EZSoftBoneColliderBase___ctor
               (EZhex1991_EZSoftBone_EZSoftBoneColliderBase_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057b4c9f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057b4c9f = '\x01';
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 != 0) {
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// EZhex1991.EZSoftBone.EZSoftBoneColliderBase$$.cctor
// il2cpp: void EZhex1991_EZSoftBone_EZSoftBoneColliderBase___cctor (const MethodInfo* method);
// 0x2497bc0

void EZhex1991_EZSoftBone_EZSoftBoneColliderBase___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (g_data_057a692c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EZSoftBoneColliderBase);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_EZhex1991_EZSoftBone_EZSoftBoneColliderBase);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_EZSoftBoneColliderBase);
    g_data_057a692c = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_EZSoftBoneColliderBase);
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_EZhex1991_EZSoftBone_EZSoftBoneColliderBase);
  **(undefined8 **)(_DAT_05578bb0 + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(_DAT_05578bb0 + 0xb8),__this);
  return;
}


