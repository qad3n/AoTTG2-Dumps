// Type: Utility.Cycle
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Utility/Cycle.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Utility/Cycle.cs  [CHANGED since prior version]
// --------------------------------

// Utility.Cycle<Int32Enum>$$.ctor
// il2cpp: void Utility_Cycle_Int32Enum____ctor (Utility_Cycle_T__o* __this, const MethodInfo_2FA1660* method);
// 0x30a1660

void Utility_Cycle<Int32Enum>___ctor(Utility_Cycle_T__o *__this,MethodInfo_2FA1660 *method)

{
  System_RuntimeTypeHandle_o handle;
  System_Type_o *enumType;
  System_Array_o *pSVar1;
  Il2CppClass *pIVar2;
  System_Object_array *pSVar3;
  long lVar4;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  handle.fields.value = (System_RuntimeTypeHandle_Fields)method->klass->rgctx_data->_0_T;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (*(int *)(DAT_057110b8 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = System_Enum__GetValues(enumType,(MethodInfo *)0x0);
  pIVar2 = method->klass->rgctx_data->_1_T__;
  if (((pIVar2->_2).field_0x6d & 1) == 0) {
    pIVar2 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar2);
  }
  if (pSVar1 == (System_Array_o *)0x0) {
    pSVar3 = (System_Object_array *)0x0;
  }
  else {
    pSVar3 = (System_Object_array *)il2cpp_runtime_glue(pSVar1,pIVar2);
    if (pSVar3 == (System_Object_array *)0x0) goto LAB_030a174b;
  }
  (__this->fields).values = pSVar3;
  pIVar2 = method->klass->rgctx_data->_1_T__;
  if (((pIVar2->_2).field_0x6d & 1) == 0) {
    pIVar2 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar2);
  }
  if (pSVar1 == (System_Array_o *)0x0) {
    lVar4 = 0;
  }
  else {
    lVar4 = il2cpp_runtime_glue(pSVar1,pIVar2);
    if (lVar4 == 0) {
LAB_030a174b:
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pSVar1,pIVar2);
    }
  }
  il2cpp_runtime_glue(&__this->fields,lVar4);
  (__this->fields).index = 0;
  return;
}


// Utility.Cycle<__Il2CppFullySharedGenericStructType>$$.ctor
// il2cpp: void Utility_Cycle___Il2CppFullySharedGenericStructType____ctor (Utility_Cycle_T__o* __this, const MethodInfo_2FA1860* method);
// 0x30a1860

void Utility_Cycle<__Il2CppFullySharedGenericStructType>___ctor
               (Utility_Cycle_T__o *__this,MethodInfo_2FA1860 *method)

{
  System_RuntimeTypeHandle_o handle;
  System_Type_o *enumType;
  System_Array_o *pSVar1;
  Il2CppClass *pIVar2;
  System_Object_array *pSVar3;
  long lVar4;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  handle.fields.value = (System_RuntimeTypeHandle_Fields)method->klass->rgctx_data->_0_T;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (*(int *)(DAT_057110b8 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = System_Enum__GetValues(enumType,(MethodInfo *)0x0);
  pIVar2 = method->klass->rgctx_data->_1_T__;
  if (((pIVar2->_2).field_0x6d & 1) == 0) {
    pIVar2 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar2);
  }
  if (pSVar1 == (System_Array_o *)0x0) {
    pSVar3 = (System_Object_array *)0x0;
  }
  else {
    pSVar3 = (System_Object_array *)il2cpp_runtime_glue(pSVar1,pIVar2);
    if (pSVar3 == (System_Object_array *)0x0) goto LAB_030a194b;
  }
  (__this->fields).values = pSVar3;
  pIVar2 = method->klass->rgctx_data->_1_T__;
  if (((pIVar2->_2).field_0x6d & 1) == 0) {
    pIVar2 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar2);
  }
  if (pSVar1 == (System_Array_o *)0x0) {
    lVar4 = 0;
  }
  else {
    lVar4 = il2cpp_runtime_glue(pSVar1,pIVar2);
    if (lVar4 == 0) {
LAB_030a194b:
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pSVar1,pIVar2);
    }
  }
  il2cpp_runtime_glue(&__this->fields,lVar4);
  (__this->fields).index = 0;
  return;
}


// Utility.Cycle<Int32Enum>$$Next
// il2cpp: int32_t Utility_Cycle_Int32Enum___Next (Utility_Cycle_T__o* __this, const MethodInfo_2FA1780* method);
// 0x30a1780

int32_t Utility_Cycle<Int32Enum>__Next(Utility_Cycle_T__o *__this,MethodInfo_2FA1780 *method)

{
  uint uVar1;
  System_Object_array *pSVar2;
  uint uVar3;
  
  pSVar2 = (__this->fields).values;
  if (pSVar2 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  uVar1 = (uint)pSVar2->max_length;
  uVar3 = ((__this->fields).index + 1) % (int)uVar1;
  (__this->fields).index = uVar3;
  if (uVar3 < uVar1) {
    return *(int32_t *)((long)pSVar2->m_Items + (long)(int)uVar3 * 4);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.Cycle<__Il2CppFullySharedGenericStructType>$$Next
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o Utility_Cycle___Il2CppFullySharedGenericStructType___Next (Utility_Cycle_T__o* __this, const MethodInfo_2FA1980* method);
// 0x30a1980

void Utility_Cycle<__Il2CppFullySharedGenericStructType>__Next
               (Utility_Cycle_T__o *__this,MethodInfo_2FA1980 *method)

{
  uint uVar1;
  System_Object_array *pSVar2;
  long lVar3;
  uint uVar4;
  long in_RDX;
  ulong __n;
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  
  __n = (ulong)*(uint *)(*(long *)(*(long *)(*(long *)(in_RDX + 0x20) + 0xc0) + 0x18) + 0xfc);
  lVar3 = -(__n + 0xf & 0xfffffffffffffff0);
  pSVar2 = (__this->fields).values;
  if (pSVar2 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((long)&uStack_30 + lVar3) = 0x30a1a11;
    il2cpp_raise_exception();
  }
  uVar1 = (uint)pSVar2->max_length;
  uVar4 = ((__this->fields).index + 1) % (int)uVar1;
  (__this->fields).index = uVar4;
  if (uVar4 < uVar1) {
    uVar1 = (((pSVar2->obj).klass)->_2).native_size;
    *(undefined8 *)((long)&uStack_30 + lVar3) = 0x30a19f3;
    memcpy(auStack_28 + lVar3,
           (Il2CppObject **)((long)pSVar2->m_Items + (ulong)uVar1 * (long)(int)uVar4),__n);
    *(undefined8 *)((long)&uStack_30 + lVar3) = 0x30a1a01;
    memcpy(method,auStack_28 + lVar3,__n);
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((long)&uStack_30 + lVar3) = &UNK_030a1a16;
  il2cpp_raise_exception();
}


// Utility.Cycle<Int32Enum>$$Previous
// il2cpp: int32_t Utility_Cycle_Int32Enum___Previous (Utility_Cycle_T__o* __this, const MethodInfo_2FA17B0* method);
// 0x30a17b0

int32_t Utility_Cycle<Int32Enum>__Previous(Utility_Cycle_T__o *__this,MethodInfo_2FA17B0 *method)

{
  uint uVar1;
  System_Object_array *pSVar2;
  uint uVar3;
  
  pSVar2 = (__this->fields).values;
  if (pSVar2 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  uVar1 = (uint)pSVar2->max_length;
  uVar3 = (int)((__this->fields).index + uVar1 + -1) % (int)uVar1;
  (__this->fields).index = uVar3;
  if (uVar3 < uVar1) {
    return *(int32_t *)((long)pSVar2->m_Items + (long)(int)uVar3 * 4);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.Cycle<__Il2CppFullySharedGenericStructType>$$Previous
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o Utility_Cycle___Il2CppFullySharedGenericStructType___Previous (Utility_Cycle_T__o* __this, const MethodInfo_2FA1A20* method);
// 0x30a1a20

void Utility_Cycle<__Il2CppFullySharedGenericStructType>__Previous
               (Utility_Cycle_T__o *__this,MethodInfo_2FA1A20 *method)

{
  uint uVar1;
  System_Object_array *pSVar2;
  long lVar3;
  uint uVar4;
  long in_RDX;
  ulong __n;
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  
  __n = (ulong)*(uint *)(*(long *)(*(long *)(*(long *)(in_RDX + 0x20) + 0xc0) + 0x18) + 0xfc);
  lVar3 = -(__n + 0xf & 0xfffffffffffffff0);
  pSVar2 = (__this->fields).values;
  if (pSVar2 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((long)&uStack_30 + lVar3) = 0x30a1ab4;
    il2cpp_raise_exception();
  }
  uVar1 = (uint)pSVar2->max_length;
  uVar4 = (int)((__this->fields).index + uVar1 + -1) % (int)uVar1;
  (__this->fields).index = uVar4;
  if (uVar4 < uVar1) {
    uVar1 = (((pSVar2->obj).klass)->_2).native_size;
    *(undefined8 *)((long)&uStack_30 + lVar3) = 0x30a1a96;
    memcpy(auStack_28 + lVar3,
           (Il2CppObject **)((long)pSVar2->m_Items + (ulong)uVar1 * (long)(int)uVar4),__n);
    *(undefined8 *)((long)&uStack_30 + lVar3) = 0x30a1aa4;
    memcpy(method,auStack_28 + lVar3,__n);
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((long)&uStack_30 + lVar3) = &UNK_030a1ab9;
  il2cpp_raise_exception();
}


// Utility.Cycle<Int32Enum>$$Current
// il2cpp: int32_t Utility_Cycle_Int32Enum___Current (Utility_Cycle_T__o* __this, const MethodInfo_2FA17F0* method);
// 0x30a17f0

int32_t Utility_Cycle<Int32Enum>__Current(Utility_Cycle_T__o *__this,MethodInfo_2FA17F0 *method)

{
  uint uVar1;
  System_Object_array *pSVar2;
  
  pSVar2 = (__this->fields).values;
  if (pSVar2 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  uVar1 = (__this->fields).index;
  if (uVar1 < (uint)pSVar2->max_length) {
    return *(int32_t *)((long)pSVar2->m_Items + (long)(int)uVar1 * 4);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.Cycle<__Il2CppFullySharedGenericStructType>$$Current
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o Utility_Cycle___Il2CppFullySharedGenericStructType___Current (Utility_Cycle_T__o* __this, const MethodInfo_2FA1AC0* method);
// 0x30a1ac0

void Utility_Cycle<__Il2CppFullySharedGenericStructType>__Current
               (Utility_Cycle_T__o *__this,MethodInfo_2FA1AC0 *method)

{
  uint uVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  long lVar4;
  long in_RDX;
  ulong __n;
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  
  __n = (ulong)*(uint *)(*(long *)(*(long *)(*(long *)(in_RDX + 0x20) + 0xc0) + 0x18) + 0xfc);
  lVar4 = -(__n + 0xf & 0xfffffffffffffff0);
  pSVar3 = (__this->fields).values;
  if (pSVar3 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((long)&uStack_30 + lVar4) = 0x30a1b44;
    il2cpp_raise_exception();
  }
  uVar1 = (__this->fields).index;
  if (uVar1 < (uint)pSVar3->max_length) {
    uVar2 = (((pSVar3->obj).klass)->_2).native_size;
    *(undefined8 *)((long)&uStack_30 + lVar4) = 0x30a1b26;
    memcpy(auStack_28 + lVar4,
           (Il2CppObject **)((long)pSVar3->m_Items + (ulong)uVar2 * (long)(int)uVar1),__n);
    *(undefined8 *)((long)&uStack_30 + lVar4) = 0x30a1b34;
    memcpy(method,auStack_28 + lVar4,__n);
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((long)&uStack_30 + lVar4) = &UNK_030a1b49;
  il2cpp_raise_exception();
}


// Utility.Cycle<Int32Enum>$$Set
// il2cpp: int32_t Utility_Cycle_Int32Enum___Set (Utility_Cycle_T__o* __this, int32_t value, const MethodInfo_2FA1820* method);
// 0x30a1820

int32_t Utility_Cycle<Int32Enum>__Set
                  (Utility_Cycle_T__o *__this,int32_t value,MethodInfo_2FA1820 *method)

{
  System_Object_array *pSVar1;
  uint uVar2;
  
  uVar2 = System_Array__IndexOf<Int32Enum>
                    ((System_Int32Enum_array *)(__this->fields).values,value,
                     (MethodInfo_26331A0 *)method->klass->rgctx_data->_4_System_Array_IndexOf_T_);
  (__this->fields).index = uVar2;
  pSVar1 = (__this->fields).values;
  if (pSVar1 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (uVar2 < (uint)pSVar1->max_length) {
    return *(int32_t *)((long)pSVar1->m_Items + (long)(int)uVar2 * 4);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Utility.Cycle<__Il2CppFullySharedGenericStructType>$$Set
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o Utility_Cycle___Il2CppFullySharedGenericStructType___Set (Utility_Cycle_T__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o value, const MethodInfo_2FA1B50* method);
// 0x30a1b50

void Utility_Cycle<__Il2CppFullySharedGenericStructType>__Set
               (long __this,void *param_2,void *param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long *plVar7;
  ulong uVar8;
  ulong __n;
  void *pvVar9;
  void *__dest;
  undefined8 uStack_60;
  undefined8 local_58;
  void *local_50;
  void *local_48;
  ulong local_40;
  uint local_34;
  
  lVar2 = *(long *)(param_4 + 0x20);
  __n = (ulong)*(uint *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x18) + 0xfc);
  uVar8 = __n + 0xf & 0xfffffffffffffff0;
  pvVar9 = (void *)((long)&local_58 - uVar8);
  __dest = (void *)((long)pvVar9 - uVar8);
  uVar3 = *(undefined8 *)(__this + 0x10);
  local_48 = param_3;
  local_40 = __n;
  *(undefined8 *)((long)__dest + -8) = 0x30a1ba7;
  memcpy(pvVar9,param_2,__n);
  puVar4 = *(undefined8 **)(*(long *)(lVar2 + 0xc0) + 0x20);
  uVar5 = *puVar4;
  pcVar6 = (code *)puVar4[2];
  local_58 = uVar3;
  local_50 = pvVar9;
  *(undefined8 *)((long)__dest + -8) = 0x30a1bca;
  (*pcVar6)(uVar5,puVar4,0,&local_58,&local_34);
  uVar8 = local_40;
  *(uint *)(__this + 0x18) = local_34;
  plVar7 = *(long **)(__this + 0x10);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((long)__dest + -8) = 0x30a1c29;
    il2cpp_raise_exception();
  }
  if (local_34 < *(uint *)(plVar7 + 3)) {
    uVar1 = *(uint *)(*plVar7 + 0x104);
    *(undefined8 *)((long)__dest + -8) = 0x30a1c06;
    memcpy(__dest,(void *)((long)plVar7 + (ulong)uVar1 * (long)(int)local_34 + 0x20),uVar8);
    pvVar9 = local_48;
    *(undefined8 *)((long)__dest + -8) = 0x30a1c15;
    memcpy(pvVar9,__dest,uVar8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((long)__dest + -8) = &UNK_030a1c2e;
  il2cpp_raise_exception();
}


