// Type: Utility.Cycle
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Utility/Cycle.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/Cycle.cs
// --------------------------------

// Utility.Cycle<Int32Enum>$$.ctor
// il2cpp: void Utility_Cycle_Int32Enum____ctor (Utility_Cycle_T__o* __this, const MethodInfo_494C320* method);
// 0x4a4c320
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x4a4c3c8: jmp 0x4a4c40b
// asm:   0x4a4c416: xor esi, esi

void Utility_Cycle_Int32Enum____ctor(Utility_Cycle_T__o *__this,MethodInfo_494C320 *method)

{
  System_RuntimeTypeHandle_o handle;
  System_Type_o *enumType;
  Il2CppObject *obj;
  Il2CppClass *klass;
  System_Object_array *pSVar1;
  Il2CppObject *pIVar2;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  handle.fields.value = (System_RuntimeTypeHandle_Fields)method->klass->rgctx_data->_0_T;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_07556760);
  }
  obj = (Il2CppObject *)System_Enum__GetValues(enumType,(MethodInfo *)0x0);
  klass = method->klass->rgctx_data->_1_T__;
  if (((klass->_2).bitflags1 & 1) == 0) {
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  if (obj == (Il2CppObject *)0x0) {
    pSVar1 = (System_Object_array *)0x0;
  }
  else {
    pSVar1 = (System_Object_array *)il2cpp_vm_Object_IsInst(obj,klass);
    if (pSVar1 == (System_Object_array *)0x0) goto label_04a4c40b;
  }
  (__this->fields).values = pSVar1;
  klass = method->klass->rgctx_data->_1_T__;
  if (((klass->_2).bitflags1 & 1) == 0) {
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  if ((obj == (Il2CppObject *)0x0) ||
     (pIVar2 = il2cpp_vm_Object_IsInst(obj,klass), pIVar2 != (Il2CppObject *)0x0)) {
    Il2CppCodeGenWriteBarrier(&(__this->fields).values);
    (__this->fields).index = 0;
    return;
  }
label_04a4c40b:
  il2cpp_codegen_raise_invalid_cast_exception(obj,klass);
}


// Utility.Cycle<__Il2CppFullySharedGenericStructType>$$.ctor
// il2cpp: void Utility_Cycle___Il2CppFullySharedGenericStructType____ctor (Utility_Cycle_T__o* __this, const MethodInfo_494C520* method);
// 0x4a4c520
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x4a4c5c8: jmp 0x4a4c60b
// asm:   0x4a4c616: xor esi, esi

void Utility_Cycle___Il2CppFullySharedGenericStructType____ctor
               (Utility_Cycle_T__o *__this,MethodInfo_494C520 *method)

{
  System_RuntimeTypeHandle_o handle;
  System_Type_o *enumType;
  Il2CppObject *obj;
  Il2CppClass *klass;
  System_Object_array *pSVar1;
  Il2CppObject *pIVar2;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  handle.fields.value = (System_RuntimeTypeHandle_Fields)method->klass->rgctx_data->_0_T;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_07556760);
  }
  obj = (Il2CppObject *)System_Enum__GetValues(enumType,(MethodInfo *)0x0);
  klass = method->klass->rgctx_data->_1_T__;
  if (((klass->_2).bitflags1 & 1) == 0) {
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  if (obj == (Il2CppObject *)0x0) {
    pSVar1 = (System_Object_array *)0x0;
  }
  else {
    pSVar1 = (System_Object_array *)il2cpp_vm_Object_IsInst(obj,klass);
    if (pSVar1 == (System_Object_array *)0x0) goto label_04a4c60b;
  }
  (__this->fields).values = pSVar1;
  klass = method->klass->rgctx_data->_1_T__;
  if (((klass->_2).bitflags1 & 1) == 0) {
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  if ((obj == (Il2CppObject *)0x0) ||
     (pIVar2 = il2cpp_vm_Object_IsInst(obj,klass), pIVar2 != (Il2CppObject *)0x0)) {
    Il2CppCodeGenWriteBarrier(&(__this->fields).values);
    (__this->fields).index = 0;
    return;
  }
label_04a4c60b:
  il2cpp_codegen_raise_invalid_cast_exception(obj,klass);
}


// Utility.Cycle<Int32Enum>$$Next
// il2cpp: int32_t Utility_Cycle_Int32Enum___Next (Utility_Cycle_T__o* __this, const MethodInfo_494C440* method);
// 0x4a4c440

int32_t Utility_Cycle_Int32Enum___Next(Utility_Cycle_T__o *__this,MethodInfo_494C440 *method)

{
  uint uVar1;
  System_Object_array *pSVar2;
  uint uVar3;
  
  pSVar2 = (__this->fields).values;
  if (pSVar2 == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  uVar1 = (uint)pSVar2->max_length;
  uVar3 = ((__this->fields).index + 1) % (int)uVar1;
  (__this->fields).index = uVar3;
  if (uVar1 <= uVar3) {
    ThrowIndexOutOfRangeException();
  }
  return *(int32_t *)((long)pSVar2->m_Items + (long)(int)uVar3 * 4);
}


// Utility.Cycle<__Il2CppFullySharedGenericStructType>$$Next
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o Utility_Cycle___Il2CppFullySharedGenericStructType___Next (Utility_Cycle_T__o* __this, const MethodInfo_494C640* method);
// 0x4a4c640

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o
Utility_Cycle___Il2CppFullySharedGenericStructType___Next
          (Utility_Cycle_T__o *__this,MethodInfo_494C640 *method)

{
  uint uVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o UVar4;
  uint uVar5;
  long in_RDX;
  
  pSVar3 = (__this->fields).values;
  if (pSVar3 == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  uVar1 = *(uint *)(*(long *)(*(long *)(*(long *)(in_RDX + 0x20) + 0xc0) + 0x18) + 0xfc);
  uVar2 = (uint)pSVar3->max_length;
  uVar5 = ((__this->fields).index + 1) % (int)uVar2;
  (__this->fields).index = uVar5;
  if (uVar2 <= uVar5) {
    ThrowIndexOutOfRangeException();
  }
  UVar4.fields._tail =
       (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_Fields)
       memmove(method,(Il2CppObject **)
                      ((long)pSVar3->m_Items +
                      (ulong)(((pSVar3->obj).klass)->_2).element_size * (long)(int)uVar5),(ulong)uVar1);
  return (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o)UVar4.fields._tail;
}


// Utility.Cycle<Int32Enum>$$Previous
// il2cpp: int32_t Utility_Cycle_Int32Enum___Previous (Utility_Cycle_T__o* __this, const MethodInfo_494C470* method);
// 0x4a4c470

int32_t Utility_Cycle_Int32Enum___Previous(Utility_Cycle_T__o *__this,MethodInfo_494C470 *method)

{
  uint uVar1;
  System_Object_array *pSVar2;
  uint uVar3;
  
  pSVar2 = (__this->fields).values;
  if (pSVar2 == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  uVar1 = (uint)pSVar2->max_length;
  uVar3 = (int)((__this->fields).index + uVar1 + -1) % (int)uVar1;
  (__this->fields).index = uVar3;
  if (uVar1 <= uVar3) {
    ThrowIndexOutOfRangeException();
  }
  return *(int32_t *)((long)pSVar2->m_Items + (long)(int)uVar3 * 4);
}


// Utility.Cycle<__Il2CppFullySharedGenericStructType>$$Previous
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o Utility_Cycle___Il2CppFullySharedGenericStructType___Previous (Utility_Cycle_T__o* __this, const MethodInfo_494C6B0* method);
// 0x4a4c6b0

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o
Utility_Cycle___Il2CppFullySharedGenericStructType___Previous
          (Utility_Cycle_T__o *__this,MethodInfo_494C6B0 *method)

{
  uint uVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o UVar4;
  uint uVar5;
  long in_RDX;
  
  pSVar3 = (__this->fields).values;
  if (pSVar3 == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  uVar1 = *(uint *)(*(long *)(*(long *)(*(long *)(in_RDX + 0x20) + 0xc0) + 0x18) + 0xfc);
  uVar2 = (uint)pSVar3->max_length;
  uVar5 = (int)((__this->fields).index + uVar2 + -1) % (int)uVar2;
  (__this->fields).index = uVar5;
  if (uVar2 <= uVar5) {
    ThrowIndexOutOfRangeException();
  }
  UVar4.fields._tail =
       (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_Fields)
       memmove(method,(Il2CppObject **)
                      ((long)pSVar3->m_Items +
                      (ulong)(((pSVar3->obj).klass)->_2).element_size * (long)(int)uVar5),(ulong)uVar1);
  return (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o)UVar4.fields._tail;
}


// Utility.Cycle<Int32Enum>$$Current
// il2cpp: int32_t Utility_Cycle_Int32Enum___Current (Utility_Cycle_T__o* __this, const MethodInfo_494C4B0* method);
// 0x4a4c4b0

int32_t Utility_Cycle_Int32Enum___Current(Utility_Cycle_T__o *__this,MethodInfo_494C4B0 *method)

{
  uint uVar1;
  System_Object_array *pSVar2;
  
  pSVar2 = (__this->fields).values;
  if (pSVar2 == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  uVar1 = (__this->fields).index;
  if ((uint)pSVar2->max_length <= uVar1) {
    ThrowIndexOutOfRangeException();
  }
  return *(int32_t *)((long)pSVar2->m_Items + (long)(int)uVar1 * 4);
}


// Utility.Cycle<__Il2CppFullySharedGenericStructType>$$Current
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o Utility_Cycle___Il2CppFullySharedGenericStructType___Current (Utility_Cycle_T__o* __this, const MethodInfo_494C720* method);
// 0x4a4c720

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o
Utility_Cycle___Il2CppFullySharedGenericStructType___Current
          (Utility_Cycle_T__o *__this,MethodInfo_494C720 *method)

{
  uint uVar1;
  System_Object_array *pSVar2;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o UVar3;
  long in_RDX;
  
  pSVar2 = (__this->fields).values;
  if (pSVar2 == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  uVar1 = (__this->fields).index;
  if ((uint)pSVar2->max_length <= uVar1) {
    ThrowIndexOutOfRangeException();
  }
  UVar3.fields._tail =
       (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_Fields)
       memmove(method,(Il2CppObject **)
                      ((long)pSVar2->m_Items +
                      (ulong)(((pSVar2->obj).klass)->_2).element_size * (long)(int)uVar1),
               (ulong)*(uint *)(*(long *)(*(long *)(*(long *)(in_RDX + 0x20) + 0xc0) + 0x18) + 0xfc));
  return (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o)UVar3.fields._tail;
}


// Utility.Cycle<Int32Enum>$$Set
// il2cpp: int32_t Utility_Cycle_Int32Enum___Set (Utility_Cycle_T__o* __this, int32_t value, const MethodInfo_494C4E0* method);
// 0x4a4c4e0

int32_t Utility_Cycle_Int32Enum___Set(Utility_Cycle_T__o *__this,int32_t value,MethodInfo_494C4E0 *method)

{
  System_Object_array *pSVar1;
  uint uVar2;
  
  uVar2 = System_Array__IndexOf_Int32Enum_
                    ((System_Int32Enum_array *)(__this->fields).values,value,
                     (MethodInfo_3602A60 *)method->klass->rgctx_data->_4_System_Array_IndexOf_T_);
  (__this->fields).index = uVar2;
  pSVar1 = (__this->fields).values;
  if (pSVar1 == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((uint)pSVar1->max_length <= uVar2) {
    ThrowIndexOutOfRangeException();
  }
  return *(int32_t *)((long)pSVar1->m_Items + (long)(int)uVar2 * 4);
}


// Utility.Cycle<__Il2CppFullySharedGenericStructType>$$Set
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o Utility_Cycle___Il2CppFullySharedGenericStructType___Set (Utility_Cycle_T__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o value, const MethodInfo_494C780* method);
// 0x4a4c780

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o
Utility_Cycle___Il2CppFullySharedGenericStructType___Set
          (Utility_Cycle_T__o *__this,Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o value,
          MethodInfo_494C780 *method)

{
  uint uVar1;
  long lVar2;
  System_Object_array *pSVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  MethodInfo_494C780 *__dest;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o UVar8;
  long in_RCX;
  ulong __n;
  undefined8 uStack_60;
  System_Object_array *local_58;
  void *local_50;
  MethodInfo_494C780 *local_40;
  uint local_34;
  
  lVar2 = *(long *)(in_RCX + 0x20);
  __n = (ulong)*(uint *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x18) + 0xfc);
  lVar7 = -(__n + 0xf & 0xfffffffffffffff0);
  pSVar3 = (__this->fields).values;
  local_40 = method;
  *(undefined8 *)((long)&uStack_60 + lVar7) = 0x4a4c7ce;
  memcpy((void *)((long)&local_58 + lVar7),(void *)value.fields._tail,__n);
  puVar4 = *(undefined8 **)(*(long *)(lVar2 + 0xc0) + 0x20);
  uVar5 = *puVar4;
  pcVar6 = (code *)puVar4[2];
  local_58 = pSVar3;
  local_50 = (void *)((long)&local_58 + lVar7);
  *(undefined8 *)((long)&uStack_60 + lVar7) = 0x4a4c7f1;
  (*pcVar6)(uVar5,puVar4,0,&local_58,&local_34);
  __dest = local_40;
  (__this->fields).index = local_34;
  pSVar3 = (__this->fields).values;
  if (pSVar3 == (System_Object_array *)0x0) {
    *(undefined8 *)((long)&uStack_60 + lVar7) = 0x4a4c83e;
    ThrowNullReferenceException();
  }
  if ((uint)pSVar3->max_length <= local_34) {
    *(undefined8 *)((long)&uStack_60 + lVar7) = 0x4a4c843;
    ThrowIndexOutOfRangeException();
  }
  uVar1 = (((pSVar3->obj).klass)->_2).element_size;
  *(undefined8 *)((long)&uStack_60 + lVar7) = 0x4a4c82a;
  UVar8.fields._tail =
       (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_Fields)
       memmove(__dest,(Il2CppObject **)((long)pSVar3->m_Items + (ulong)uVar1 * (long)(int)local_34),__n);
  return (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o)UVar8.fields._tail;
}


