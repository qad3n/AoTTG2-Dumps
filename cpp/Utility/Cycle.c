// Type: Utility.Cycle
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Utility/Cycle.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/Cycle.cs
// --------------------------------

// Utility.Cycle<Int32Enum>$$.ctor
// il2cpp: void Utility_Cycle_Int32Enum____ctor (Utility_Cycle_T__o* __this, const MethodInfo_3019C10* method);
// 0x3119c10

void Utility_Cycle_Int32Enum____ctor(Utility_Cycle_T__o *__this,MethodInfo_3019C10 *method)

{
  System_RuntimeTypeHandle_o handle;
  System_Type_o *enumType;
  System_Array_o *pSVar1;
  Il2CppClass *pIVar2;
  System_Object_array *pSVar3;
  long lVar4;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  handle.fields.value = (System_RuntimeTypeHandle_Fields)method->klass->rgctx_data->_0_T;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = System_Enum__GetValues(enumType,(MethodInfo *)0x0);
  pIVar2 = method->klass->rgctx_data->_1_T__;
  if (((pIVar2->_2).field_0x6d & 1) == 0) {
    pIVar2 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar2);
  }
  if (pSVar1 == (System_Array_o *)0x0) {
    pSVar3 = (System_Object_array *)0x0;
label_03119cbc:
    (__this->fields).values = pSVar3;
    pIVar2 = method->klass->rgctx_data->_1_T__;
    if (((pIVar2->_2).field_0x6d & 1) == 0) {
      pIVar2 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar2);
    }
    if (pSVar1 != (System_Array_o *)0x0) {
      lVar4 = il2cpp_runtime_helper_023051f0(pSVar1,pIVar2);
      if (lVar4 != 0) goto label_03119d08;
      goto label_03119cfb;
    }
  }
  else {
    pSVar3 = (System_Object_array *)il2cpp_runtime_helper_023051f0(pSVar1,pIVar2);
    if (pSVar3 != (System_Object_array *)0x0) goto label_03119cbc;
label_03119cfb:
    il2cpp_runtime_helper_022b2fd0(pSVar1,pIVar2);
  }
  lVar4 = 0;
label_03119d08:
  il2cpp_runtime_helper_022b4080(&__this->fields,lVar4);
  (__this->fields).index = 0;
  return;
}


// Utility.Cycle<__Il2CppFullySharedGenericStructType>$$.ctor
// il2cpp: void Utility_Cycle___Il2CppFullySharedGenericStructType____ctor (Utility_Cycle_T__o* __this, const MethodInfo_3019F30* method);
// 0x3119f30

void Utility_Cycle___Il2CppFullySharedGenericStructType____ctor
               (Utility_Cycle_T__o *__this,MethodInfo_3019F30 *method)

{
  System_RuntimeTypeHandle_o handle;
  System_Type_o *enumType;
  System_Array_o *pSVar1;
  Il2CppClass *pIVar2;
  System_Object_array *pSVar3;
  long lVar4;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  handle.fields.value = (System_RuntimeTypeHandle_Fields)method->klass->rgctx_data->_0_T;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (*(int *)(g_data_057b9c08 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = System_Enum__GetValues(enumType,(MethodInfo *)0x0);
  pIVar2 = method->klass->rgctx_data->_1_T__;
  if (((pIVar2->_2).field_0x6d & 1) == 0) {
    pIVar2 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar2);
  }
  if (pSVar1 == (System_Array_o *)0x0) {
    pSVar3 = (System_Object_array *)0x0;
code_r0x03119fdc:
    (__this->fields).values = pSVar3;
    pIVar2 = method->klass->rgctx_data->_1_T__;
    if (((pIVar2->_2).field_0x6d & 1) == 0) {
      pIVar2 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar2);
    }
    if (pSVar1 != (System_Array_o *)0x0) {
      lVar4 = il2cpp_runtime_helper_023051f0(pSVar1,pIVar2);
      if (lVar4 != 0) goto code_r0x0311a028;
      goto code_r0x0311a01b;
    }
  }
  else {
    pSVar3 = (System_Object_array *)il2cpp_runtime_helper_023051f0(pSVar1,pIVar2);
    if (pSVar3 != (System_Object_array *)0x0) goto code_r0x03119fdc;
code_r0x0311a01b:
    il2cpp_runtime_helper_022b2fd0(pSVar1,pIVar2);
  }
  lVar4 = 0;
code_r0x0311a028:
  il2cpp_runtime_helper_022b4080(&__this->fields,lVar4);
  (__this->fields).index = 0;
  return;
}


// Utility.Cycle<Int32Enum>$$Next
// il2cpp: int32_t Utility_Cycle_Int32Enum___Next (Utility_Cycle_T__o* __this, const MethodInfo_3019D30* method);
// 0x3119d30

int32_t Utility_Cycle_Int32Enum___Next(Utility_Cycle_T__o *__this,MethodInfo_3019D30 *method)

{
  System_Object_array *pSVar1;
  code *pcVar2;
  uint uVar3;
  int32_t iVar4;
  uint uVar5;
  long extraout_RDX;
  
  uVar3 = (uint)method;
  pSVar1 = (__this->fields).values;
  if (pSVar1 == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    uVar3 = (uint)pSVar1->max_length;
    uVar5 = ((__this->fields).index + 1) % (int)uVar3;
    (__this->fields).index = uVar5;
    if (uVar5 < uVar3) {
      return *(int32_t *)((long)pSVar1->m_Items + (long)(int)uVar5 * 4);
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  pSVar1 = (__this->fields).values;
  if (pSVar1 == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    uVar3 = (uint)pSVar1->max_length;
    uVar5 = (int)((__this->fields).index + uVar3 + -1) % (int)uVar3;
    (__this->fields).index = uVar5;
    if (uVar5 < uVar3) {
      return *(int32_t *)((long)pSVar1->m_Items + (long)(int)uVar5 * 4);
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  pSVar1 = (__this->fields).values;
  if (pSVar1 == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    uVar5 = (__this->fields).index;
    if (uVar5 < (uint)pSVar1->max_length) {
      return *(int32_t *)((long)pSVar1->m_Items + (long)(int)uVar5 * 4);
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  uVar3 = System_Array__IndexOf_Int32Enum_
                    ((System_Int32Enum_array *)(__this->fields).values,uVar3,
                     *(MethodInfo_2676E80 **)(*(long *)(*(long *)(extraout_RDX + 0x20) + 0xc0) + 0x20));
  (__this->fields).index = uVar3;
  pSVar1 = (__this->fields).values;
  if (pSVar1 == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (uVar3 < (uint)pSVar1->max_length) {
    return *(int32_t *)((long)pSVar1->m_Items + (long)(int)uVar3 * 4);
  }
  il2cpp_runtime_helper_022b2ca0();
  pcVar2 = (code *)swi(3);
  iVar4 = (*pcVar2)();
  return iVar4;
}


// Utility.Cycle<__Il2CppFullySharedGenericStructType>$$Next
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o Utility_Cycle___Il2CppFullySharedGenericStructType___Next (Utility_Cycle_T__o* __this, const MethodInfo_301A050* method);
// 0x311a050

void Utility_Cycle___Il2CppFullySharedGenericStructType___Next
               (Utility_Cycle_T__o *__this,MethodInfo_301A050 *method)

{
  char cVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  Il2CppObject *pIVar4;
  code *pcVar5;
  size_t __n;
  char cVar6;
  ulong uVar7;
  long lVar8;
  System_Object_array *pSVar9;
  uint uVar10;
  long in_RDX;
  undefined8 extraout_RDX;
  ulong __n_00;
  long lVar11;
  undefined8 extraout_RDX_00;
  undefined1 *__dest;
  void *__dest_00;
  void *pvVar12;
  MethodInfo_301A050 *__dest_01;
  MethodInfo_301A050 *__src;
  long *plVar13;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  void *__dest_02;
  MethodInfo_301A050 *unaff_R14;
  undefined1 auVar14 [16];
  long alStack_100 [5];
  undefined8 uStack_d8;
  ulong auStack_d0 [4];
  uint uStack_ac;
  ulong auStack_a8 [5];
  undefined8 uStack_80;
  ulong auStack_78 [4];
  undefined8 uStack_58;
  ulong auStack_50 [4];
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  
  uVar7 = (ulong)*(uint *)(*(long *)(*(long *)(*(long *)(in_RDX + 0x20) + 0xc0) + 0x18) + 0xfc);
  lVar8 = -(uVar7 + 0xf & 0xfffffffffffffff0);
  __dest = auStack_28 + lVar8;
  pSVar9 = (__this->fields).values;
  if (pSVar9 == (System_Object_array *)0x0) {
    *(undefined8 *)((long)&uStack_30 + lVar8) = 0x311a0e1;
    il2cpp_runtime_helper_022b2c90();
    __dest_01 = method;
  }
  else {
    uVar2 = (uint)pSVar9->max_length;
    uVar10 = ((__this->fields).index + 1) % (int)uVar2;
    (__this->fields).index = uVar10;
    __dest_01 = (MethodInfo_301A050 *)(ulong)uVar2;
    unaff_R14 = method;
    if (uVar10 < uVar2) {
      uVar2 = (((pSVar9->obj).klass)->_2).native_size;
      *(undefined8 *)((long)&uStack_30 + lVar8) = 0x311a0c3;
      memcpy(__dest,(Il2CppObject **)((long)pSVar9->m_Items + (ulong)uVar2 * (long)(int)uVar10),uVar7);
      *(undefined8 *)((long)&uStack_30 + lVar8) = 0x311a0d1;
      memcpy(method,__dest,uVar7);
      return;
    }
  }
  *(undefined8 *)((long)&uStack_30 + lVar8) = 0x311a0e6;
  auVar14 = il2cpp_runtime_helper_022b2ca0();
  *(undefined1 **)((long)&uStack_30 + lVar8) = &stack0xfffffffffffffff8;
  *(ulong *)((long)auStack_50 + lVar8 + 0x18) = uVar7;
  *(MethodInfo_301A050 **)((long)auStack_50 + lVar8 + 0x10) = unaff_R14;
  *(undefined1 **)((long)auStack_50 + lVar8 + 8) = __dest;
  *(long *)((long)auStack_50 + lVar8) = auVar14._0_8_;
  uVar7 = (ulong)*(uint *)(*(long *)(*(long *)(*(long *)(auVar14._8_8_ + 0x20) + 0xc0) + 0x18) + 0xfc);
  pvVar12 = (void *)((long)auStack_50 + (lVar8 - (uVar7 + 0xf & 0xfffffffffffffff0)));
  pSVar9 = (__this->fields).values;
  if (pSVar9 == (System_Object_array *)0x0) {
    *(undefined8 *)((long)pvVar12 + -8) = 0x311a184;
    il2cpp_runtime_helper_022b2c90();
    __src = __dest_01;
  }
  else {
    uVar2 = (uint)pSVar9->max_length;
    uVar10 = (int)((__this->fields).index + uVar2 + -1) % (int)uVar2;
    (__this->fields).index = uVar10;
    __src = (MethodInfo_301A050 *)(ulong)uVar2;
    unaff_R14 = __dest_01;
    if (uVar10 < uVar2) {
      uVar2 = (((pSVar9->obj).klass)->_2).native_size;
      *(undefined8 *)((long)pvVar12 + -8) = 0x311a166;
      memcpy(pvVar12,(Il2CppObject **)((long)pSVar9->m_Items + (ulong)uVar2 * (long)(int)uVar10),uVar7);
      *(undefined8 *)((long)pvVar12 + -8) = 0x311a174;
      memcpy(__dest_01,pvVar12,uVar7);
      return;
    }
  }
  *(undefined8 *)((long)pvVar12 + -8) = 0x311a189;
  auVar14 = il2cpp_runtime_helper_022b2ca0();
  *(long *)((long)pvVar12 + -8) = (long)&uStack_30 + lVar8;
  *(ulong *)((long)pvVar12 + -0x10) = uVar7;
  *(MethodInfo_301A050 **)((long)pvVar12 + -0x18) = unaff_R14;
  *(void **)((long)pvVar12 + -0x20) = pvVar12;
  *(long *)((long)pvVar12 + -0x28) = auVar14._0_8_;
  uVar7 = (ulong)*(uint *)(*(long *)(*(long *)(*(long *)(auVar14._8_8_ + 0x20) + 0xc0) + 0x18) + 0xfc);
  __dest_00 = (void *)((long)pvVar12 + (-0x28 - (uVar7 + 0xf & 0xfffffffffffffff0)));
  pSVar3 = (__this->fields).values;
  if (pSVar3 == (System_Object_array *)0x0) {
    *(undefined8 *)((long)__dest_00 + -8) = 0x311a214;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    uVar2 = (__this->fields).index;
    pSVar9 = (System_Object_array *)(long)(int)uVar2;
    if (uVar2 < (uint)pSVar3->max_length) {
      uVar2 = (((pSVar3->obj).klass)->_2).native_size;
      *(undefined8 *)((long)__dest_00 + -8) = 0x311a1f6;
      memcpy(__dest_00,(Il2CppObject **)((long)pSVar3->m_Items + (ulong)uVar2 * (long)pSVar9),uVar7);
      *(undefined8 *)((long)__dest_00 + -8) = 0x311a204;
      memcpy(__src,__dest_00,uVar7);
      return;
    }
  }
  *(undefined8 *)((long)__dest_00 + -8) = 0x311a219;
  il2cpp_runtime_helper_022b2ca0();
  *(long *)((long)__dest_00 + -8) = (long)pvVar12 + -8;
  *(ulong *)((long)__dest_00 + -0x10) = uVar7;
  *(MethodInfo_301A050 **)((long)__dest_00 + -0x18) = unaff_R14;
  *(undefined8 *)((long)__dest_00 + -0x20) = unaff_R13;
  *(undefined8 *)((long)__dest_00 + -0x28) = unaff_R12;
  *(void **)((long)__dest_00 + -0x30) = __dest_00;
  *(undefined8 *)((long)__dest_00 + -0x48) = extraout_RDX;
  pIVar4 = pSVar9->m_Items[0];
  __n_00 = (ulong)*(uint *)(((pIVar4[0xc].klass)->_1).namespaze + 0xfc);
  uVar7 = __n_00 + 0xf & 0xfffffffffffffff0;
  pvVar12 = (void *)((long)__dest_00 + (-0x58 - uVar7));
  __dest_02 = (void *)((long)pvVar12 - uVar7);
  pSVar9 = (__this->fields).values;
  *(ulong *)((long)__dest_00 + -0x40) = __n_00;
  *(undefined8 *)((long)__dest_02 + -8) = 0x311a277;
  memcpy(pvVar12,__src,__n_00);
  plVar13 = ((pIVar4[0xc].klass)->_1).byval_arg.data;
  lVar8 = *plVar13;
  *(System_Object_array **)((long)__dest_00 + -0x58) = pSVar9;
  *(void **)((long)__dest_00 + -0x50) = pvVar12;
  pcVar5 = (code *)plVar13[2];
  *(undefined8 *)((long)__dest_02 + -8) = 0x311a29a;
  (*pcVar5)(lVar8,plVar13,0,(long)__dest_00 + -0x58,(long)__dest_00 + -0x34);
  uVar2 = *(uint *)((long)__dest_00 + -0x34);
  (__this->fields).index = uVar2;
  pSVar3 = (__this->fields).values;
  if (pSVar3 == (System_Object_array *)0x0) {
    *(undefined8 *)((long)__dest_02 + -8) = 0x311a2f9;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (uVar2 < (uint)pSVar3->max_length) {
    uVar10 = (((pSVar3->obj).klass)->_2).native_size;
    __n = *(size_t *)((long)__dest_00 + -0x40);
    *(undefined8 *)((long)__dest_02 + -8) = 0x311a2d6;
    memcpy(__dest_02,(Il2CppObject **)((long)pSVar3->m_Items + (ulong)uVar10 * (long)(int)uVar2),__n);
    pvVar12 = *(void **)((long)__dest_00 + -0x48);
    *(undefined8 *)((long)__dest_02 + -8) = 0x311a2e5;
    memcpy(pvVar12,__dest_02,__n);
    return;
  }
  *(undefined8 *)((long)__dest_02 + -8) = 0x311a2fe;
  auVar14 = il2cpp_runtime_helper_022b2ca0();
  lVar11 = auVar14._8_8_;
  *(long *)((long)__dest_02 + -8) = (long)__dest_00 + -8;
  *(System_Object_array **)((long)__dest_02 + -0x10) = pSVar9;
  *(Il2CppObject **)((long)__dest_02 + -0x18) = pIVar4;
  *(void **)((long)__dest_02 + -0x20) = pvVar12;
  *(long *)((long)__dest_02 + -0x28) = auVar14._0_8_;
  *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)(lVar11 + 8);
  *(long *)(lVar8 + 0x28) = lVar11;
  *(long **)(lVar8 + 0x20) = plVar13;
  *(undefined8 *)((long)__dest_02 + -0x30) = 0x311a329;
  il2cpp_runtime_helper_022b4080(lVar8 + 0x20);
  cVar1 = *(char *)(lVar11 + 0x52);
  *(long *)(lVar8 + 0x40) = lVar8;
  *(undefined8 *)((long)__dest_02 + -0x30) = 0x311a339;
  cVar6 = il2cpp_runtime_helper_022b2a80(lVar11);
  if (cVar6 == '\0') {
    if (plVar13 == (long *)0x0) {
      *(undefined8 *)((long)__dest_02 + -0x30) = 0x311a388;
      lVar8 = il2cpp_runtime_helper_0231a840(0,"Delegate to an instance method cannot have null \'this\'.");
      *(undefined8 *)((long)__dest_02 + -0x30) = 0x311a392;
      il2cpp_runtime_helper_022b2b10(lVar8,0);
      (**(code **)(lVar8 + 0x18))
                (*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28),extraout_RDX_00,
                 *(code **)(lVar8 + 0x18));
      return;
    }
  }
  else if (cVar1 == '\0') {
    *(undefined1 **)(lVar8 + 0x18) = &label_01fe46d0;
    goto label_0311a364;
  }
  *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)(lVar8 + 0x10);
  *(undefined8 *)(lVar8 + 0x40) = *(undefined8 *)(lVar8 + 0x20);
label_0311a364:
  *(code **)(lVar8 + 0x38) = il2cpp_runtime_helper_01fe4680;
  return;
}


// Utility.Cycle<Int32Enum>$$Previous
// il2cpp: int32_t Utility_Cycle_Int32Enum___Previous (Utility_Cycle_T__o* __this, const MethodInfo_3019D60* method);
// 0x3119d60

int32_t Utility_Cycle_Int32Enum___Previous(Utility_Cycle_T__o *__this,MethodInfo_3019D60 *method)

{
  System_Object_array *pSVar1;
  code *pcVar2;
  uint uVar3;
  int32_t iVar4;
  uint uVar5;
  long extraout_RDX;
  
  uVar3 = (uint)method;
  pSVar1 = (__this->fields).values;
  if (pSVar1 == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    uVar3 = (uint)pSVar1->max_length;
    uVar5 = (int)((__this->fields).index + uVar3 + -1) % (int)uVar3;
    (__this->fields).index = uVar5;
    if (uVar5 < uVar3) {
      return *(int32_t *)((long)pSVar1->m_Items + (long)(int)uVar5 * 4);
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  pSVar1 = (__this->fields).values;
  if (pSVar1 == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    uVar5 = (__this->fields).index;
    if (uVar5 < (uint)pSVar1->max_length) {
      return *(int32_t *)((long)pSVar1->m_Items + (long)(int)uVar5 * 4);
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  uVar3 = System_Array__IndexOf_Int32Enum_
                    ((System_Int32Enum_array *)(__this->fields).values,uVar3,
                     *(MethodInfo_2676E80 **)(*(long *)(*(long *)(extraout_RDX + 0x20) + 0xc0) + 0x20));
  (__this->fields).index = uVar3;
  pSVar1 = (__this->fields).values;
  if (pSVar1 == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (uVar3 < (uint)pSVar1->max_length) {
    return *(int32_t *)((long)pSVar1->m_Items + (long)(int)uVar3 * 4);
  }
  il2cpp_runtime_helper_022b2ca0();
  pcVar2 = (code *)swi(3);
  iVar4 = (*pcVar2)();
  return iVar4;
}


// Utility.Cycle<__Il2CppFullySharedGenericStructType>$$Previous
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o Utility_Cycle___Il2CppFullySharedGenericStructType___Previous (Utility_Cycle_T__o* __this, const MethodInfo_301A0F0* method);
// 0x311a0f0

void Utility_Cycle___Il2CppFullySharedGenericStructType___Previous
               (Utility_Cycle_T__o *__this,MethodInfo_301A0F0 *method)

{
  char cVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  Il2CppObject *pIVar4;
  code *pcVar5;
  size_t __n;
  char cVar6;
  ulong uVar7;
  long lVar8;
  System_Object_array *pSVar9;
  uint uVar10;
  long in_RDX;
  undefined8 extraout_RDX;
  ulong __n_00;
  long lVar11;
  undefined8 extraout_RDX_00;
  undefined1 *__dest;
  void *pvVar12;
  void *__dest_00;
  MethodInfo_301A0F0 *__src;
  long *plVar13;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  void *__dest_01;
  MethodInfo_301A0F0 *unaff_R14;
  undefined1 auVar14 [16];
  long alStack_d8 [5];
  undefined8 uStack_b0;
  ulong auStack_a8 [4];
  uint uStack_84;
  ulong auStack_80 [5];
  undefined8 uStack_58;
  ulong auStack_50 [4];
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  
  uVar7 = (ulong)*(uint *)(*(long *)(*(long *)(*(long *)(in_RDX + 0x20) + 0xc0) + 0x18) + 0xfc);
  lVar8 = -(uVar7 + 0xf & 0xfffffffffffffff0);
  __dest = auStack_28 + lVar8;
  pSVar9 = (__this->fields).values;
  if (pSVar9 == (System_Object_array *)0x0) {
    *(undefined8 *)((long)&uStack_30 + lVar8) = 0x311a184;
    il2cpp_runtime_helper_022b2c90();
    __src = method;
  }
  else {
    uVar2 = (uint)pSVar9->max_length;
    uVar10 = (int)((__this->fields).index + uVar2 + -1) % (int)uVar2;
    (__this->fields).index = uVar10;
    __src = (MethodInfo_301A0F0 *)(ulong)uVar2;
    unaff_R14 = method;
    if (uVar10 < uVar2) {
      uVar2 = (((pSVar9->obj).klass)->_2).native_size;
      *(undefined8 *)((long)&uStack_30 + lVar8) = 0x311a166;
      memcpy(__dest,(Il2CppObject **)((long)pSVar9->m_Items + (ulong)uVar2 * (long)(int)uVar10),uVar7);
      *(undefined8 *)((long)&uStack_30 + lVar8) = 0x311a174;
      memcpy(method,__dest,uVar7);
      return;
    }
  }
  *(undefined8 *)((long)&uStack_30 + lVar8) = 0x311a189;
  auVar14 = il2cpp_runtime_helper_022b2ca0();
  *(undefined1 **)((long)&uStack_30 + lVar8) = &stack0xfffffffffffffff8;
  *(ulong *)((long)auStack_50 + lVar8 + 0x18) = uVar7;
  *(MethodInfo_301A0F0 **)((long)auStack_50 + lVar8 + 0x10) = unaff_R14;
  *(undefined1 **)((long)auStack_50 + lVar8 + 8) = __dest;
  *(long *)((long)auStack_50 + lVar8) = auVar14._0_8_;
  uVar7 = (ulong)*(uint *)(*(long *)(*(long *)(*(long *)(auVar14._8_8_ + 0x20) + 0xc0) + 0x18) + 0xfc);
  pvVar12 = (void *)((long)auStack_50 + (lVar8 - (uVar7 + 0xf & 0xfffffffffffffff0)));
  pSVar3 = (__this->fields).values;
  if (pSVar3 == (System_Object_array *)0x0) {
    *(undefined8 *)((long)pvVar12 + -8) = 0x311a214;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    uVar2 = (__this->fields).index;
    pSVar9 = (System_Object_array *)(long)(int)uVar2;
    if (uVar2 < (uint)pSVar3->max_length) {
      uVar2 = (((pSVar3->obj).klass)->_2).native_size;
      *(undefined8 *)((long)pvVar12 + -8) = 0x311a1f6;
      memcpy(pvVar12,(Il2CppObject **)((long)pSVar3->m_Items + (ulong)uVar2 * (long)pSVar9),uVar7);
      *(undefined8 *)((long)pvVar12 + -8) = 0x311a204;
      memcpy(__src,pvVar12,uVar7);
      return;
    }
  }
  *(undefined8 *)((long)pvVar12 + -8) = 0x311a219;
  il2cpp_runtime_helper_022b2ca0();
  *(long *)((long)pvVar12 + -8) = (long)&uStack_30 + lVar8;
  *(ulong *)((long)pvVar12 + -0x10) = uVar7;
  *(MethodInfo_301A0F0 **)((long)pvVar12 + -0x18) = unaff_R14;
  *(undefined8 *)((long)pvVar12 + -0x20) = unaff_R13;
  *(undefined8 *)((long)pvVar12 + -0x28) = unaff_R12;
  *(void **)((long)pvVar12 + -0x30) = pvVar12;
  *(undefined8 *)((long)pvVar12 + -0x48) = extraout_RDX;
  pIVar4 = pSVar9->m_Items[0];
  __n_00 = (ulong)*(uint *)(((pIVar4[0xc].klass)->_1).namespaze + 0xfc);
  uVar7 = __n_00 + 0xf & 0xfffffffffffffff0;
  __dest_00 = (void *)((long)pvVar12 + (-0x58 - uVar7));
  __dest_01 = (void *)((long)__dest_00 - uVar7);
  pSVar9 = (__this->fields).values;
  *(ulong *)((long)pvVar12 + -0x40) = __n_00;
  *(undefined8 *)((long)__dest_01 + -8) = 0x311a277;
  memcpy(__dest_00,__src,__n_00);
  plVar13 = ((pIVar4[0xc].klass)->_1).byval_arg.data;
  lVar8 = *plVar13;
  *(System_Object_array **)((long)pvVar12 + -0x58) = pSVar9;
  *(void **)((long)pvVar12 + -0x50) = __dest_00;
  pcVar5 = (code *)plVar13[2];
  *(undefined8 *)((long)__dest_01 + -8) = 0x311a29a;
  (*pcVar5)(lVar8,plVar13,0,(long)pvVar12 + -0x58,(long)pvVar12 + -0x34);
  uVar2 = *(uint *)((long)pvVar12 + -0x34);
  (__this->fields).index = uVar2;
  pSVar3 = (__this->fields).values;
  if (pSVar3 == (System_Object_array *)0x0) {
    *(undefined8 *)((long)__dest_01 + -8) = 0x311a2f9;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (uVar2 < (uint)pSVar3->max_length) {
    uVar10 = (((pSVar3->obj).klass)->_2).native_size;
    __n = *(size_t *)((long)pvVar12 + -0x40);
    *(undefined8 *)((long)__dest_01 + -8) = 0x311a2d6;
    memcpy(__dest_01,(Il2CppObject **)((long)pSVar3->m_Items + (ulong)uVar10 * (long)(int)uVar2),__n);
    pvVar12 = *(void **)((long)pvVar12 + -0x48);
    *(undefined8 *)((long)__dest_01 + -8) = 0x311a2e5;
    memcpy(pvVar12,__dest_01,__n);
    return;
  }
  *(undefined8 *)((long)__dest_01 + -8) = 0x311a2fe;
  auVar14 = il2cpp_runtime_helper_022b2ca0();
  lVar11 = auVar14._8_8_;
  *(long *)((long)__dest_01 + -8) = (long)pvVar12 + -8;
  *(System_Object_array **)((long)__dest_01 + -0x10) = pSVar9;
  *(Il2CppObject **)((long)__dest_01 + -0x18) = pIVar4;
  *(void **)((long)__dest_01 + -0x20) = __dest_00;
  *(long *)((long)__dest_01 + -0x28) = auVar14._0_8_;
  *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)(lVar11 + 8);
  *(long *)(lVar8 + 0x28) = lVar11;
  *(long **)(lVar8 + 0x20) = plVar13;
  *(undefined8 *)((long)__dest_01 + -0x30) = 0x311a329;
  il2cpp_runtime_helper_022b4080(lVar8 + 0x20);
  cVar1 = *(char *)(lVar11 + 0x52);
  *(long *)(lVar8 + 0x40) = lVar8;
  *(undefined8 *)((long)__dest_01 + -0x30) = 0x311a339;
  cVar6 = il2cpp_runtime_helper_022b2a80(lVar11);
  if (cVar6 == '\0') {
    if (plVar13 == (long *)0x0) {
      *(undefined8 *)((long)__dest_01 + -0x30) = 0x311a388;
      lVar8 = il2cpp_runtime_helper_0231a840(0,"Delegate to an instance method cannot have null \'this\'.");
      *(undefined8 *)((long)__dest_01 + -0x30) = 0x311a392;
      il2cpp_runtime_helper_022b2b10(lVar8,0);
      (**(code **)(lVar8 + 0x18))
                (*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28),extraout_RDX_00,
                 *(code **)(lVar8 + 0x18));
      return;
    }
  }
  else if (cVar1 == '\0') {
    *(undefined1 **)(lVar8 + 0x18) = &label_01fe46d0;
    goto label_0311a364;
  }
  *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)(lVar8 + 0x10);
  *(undefined8 *)(lVar8 + 0x40) = *(undefined8 *)(lVar8 + 0x20);
label_0311a364:
  *(code **)(lVar8 + 0x38) = il2cpp_runtime_helper_01fe4680;
  return;
}


// Utility.Cycle<Int32Enum>$$Current
// il2cpp: int32_t Utility_Cycle_Int32Enum___Current (Utility_Cycle_T__o* __this, const MethodInfo_3019DA0* method);
// 0x3119da0

int32_t Utility_Cycle_Int32Enum___Current(Utility_Cycle_T__o *__this,MethodInfo_3019DA0 *method)

{
  System_Object_array *pSVar1;
  code *pcVar2;
  uint uVar3;
  int32_t iVar4;
  long extraout_RDX;
  
  iVar4 = (int32_t)method;
  pSVar1 = (__this->fields).values;
  if (pSVar1 == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    uVar3 = (__this->fields).index;
    if (uVar3 < (uint)pSVar1->max_length) {
      return *(int32_t *)((long)pSVar1->m_Items + (long)(int)uVar3 * 4);
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  uVar3 = System_Array__IndexOf_Int32Enum_
                    ((System_Int32Enum_array *)(__this->fields).values,iVar4,
                     *(MethodInfo_2676E80 **)(*(long *)(*(long *)(extraout_RDX + 0x20) + 0xc0) + 0x20));
  (__this->fields).index = uVar3;
  pSVar1 = (__this->fields).values;
  if (pSVar1 == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (uVar3 < (uint)pSVar1->max_length) {
    return *(int32_t *)((long)pSVar1->m_Items + (long)(int)uVar3 * 4);
  }
  il2cpp_runtime_helper_022b2ca0();
  pcVar2 = (code *)swi(3);
  iVar4 = (*pcVar2)();
  return iVar4;
}


// Utility.Cycle<__Il2CppFullySharedGenericStructType>$$Current
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o Utility_Cycle___Il2CppFullySharedGenericStructType___Current (Utility_Cycle_T__o* __this, const MethodInfo_301A190* method);
// 0x311a190

void Utility_Cycle___Il2CppFullySharedGenericStructType___Current
               (Utility_Cycle_T__o *__this,MethodInfo_301A190 *method)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  System_Object_array *pSVar4;
  long lVar5;
  code *pcVar6;
  System_Object_array *pSVar7;
  size_t __n;
  char cVar8;
  ulong uVar9;
  long lVar10;
  long in_RCX;
  long in_RDX;
  undefined8 extraout_RDX;
  ulong __n_00;
  long lVar11;
  undefined8 extraout_RDX_00;
  undefined1 *__dest;
  void *pvVar12;
  long *plVar13;
  long lVar14;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  void *__dest_00;
  undefined8 unaff_R14;
  undefined1 auVar15 [16];
  long alStack_b0 [5];
  undefined8 uStack_88;
  ulong auStack_80 [4];
  uint uStack_5c;
  ulong auStack_58 [5];
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  
  uVar9 = (ulong)*(uint *)(*(long *)(*(long *)(*(long *)(in_RDX + 0x20) + 0xc0) + 0x18) + 0xfc);
  lVar10 = -(uVar9 + 0xf & 0xfffffffffffffff0);
  __dest = auStack_28 + lVar10;
  pSVar4 = (__this->fields).values;
  if (pSVar4 == (System_Object_array *)0x0) {
    *(undefined8 *)((long)&uStack_30 + lVar10) = 0x311a214;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    uVar2 = (__this->fields).index;
    in_RCX = (long)(int)uVar2;
    if (uVar2 < (uint)pSVar4->max_length) {
      uVar2 = (((pSVar4->obj).klass)->_2).native_size;
      *(undefined8 *)((long)&uStack_30 + lVar10) = 0x311a1f6;
      memcpy(__dest,(Il2CppObject **)((long)pSVar4->m_Items + (ulong)uVar2 * in_RCX),uVar9);
      *(undefined8 *)((long)&uStack_30 + lVar10) = 0x311a204;
      memcpy(method,__dest,uVar9);
      return;
    }
  }
  *(undefined8 *)((long)&uStack_30 + lVar10) = 0x311a219;
  il2cpp_runtime_helper_022b2ca0();
  *(undefined1 **)((long)&uStack_30 + lVar10) = &stack0xfffffffffffffff8;
  *(ulong *)((long)auStack_58 + lVar10 + 0x20) = uVar9;
  *(undefined8 *)((long)auStack_58 + lVar10 + 0x18) = unaff_R14;
  *(undefined8 *)((long)auStack_58 + lVar10 + 0x10) = unaff_R13;
  *(undefined8 *)((long)auStack_58 + lVar10 + 8) = unaff_R12;
  *(undefined1 **)((long)auStack_58 + lVar10) = __dest;
  *(undefined8 *)((long)auStack_80 + lVar10 + 0x10) = extraout_RDX;
  lVar5 = *(long *)(in_RCX + 0x20);
  __n_00 = (ulong)*(uint *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x18) + 0xfc);
  uVar9 = __n_00 + 0xf & 0xfffffffffffffff0;
  pvVar12 = (void *)((long)auStack_80 + (lVar10 - uVar9));
  __dest_00 = (void *)((long)pvVar12 - uVar9);
  pSVar4 = (__this->fields).values;
  *(ulong *)((long)auStack_80 + lVar10 + 0x18) = __n_00;
  *(undefined8 *)((long)__dest_00 + -8) = 0x311a277;
  memcpy(pvVar12,method,__n_00);
  plVar13 = *(long **)(*(long *)(lVar5 + 0xc0) + 0x20);
  lVar14 = *plVar13;
  *(System_Object_array **)((long)auStack_80 + lVar10) = pSVar4;
  *(void **)((long)auStack_80 + lVar10 + 8) = pvVar12;
  pcVar6 = (code *)plVar13[2];
  *(undefined8 *)((long)__dest_00 + -8) = 0x311a29a;
  (*pcVar6)(lVar14,plVar13,0,(long)auStack_80 + lVar10,(long)&uStack_5c + lVar10);
  uVar2 = *(uint *)((long)&uStack_5c + lVar10);
  (__this->fields).index = uVar2;
  pSVar7 = (__this->fields).values;
  if (pSVar7 == (System_Object_array *)0x0) {
    *(undefined8 *)((long)__dest_00 + -8) = 0x311a2f9;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (uVar2 < (uint)pSVar7->max_length) {
    uVar3 = (((pSVar7->obj).klass)->_2).native_size;
    __n = *(size_t *)((long)auStack_80 + lVar10 + 0x18);
    *(undefined8 *)((long)__dest_00 + -8) = 0x311a2d6;
    memcpy(__dest_00,(Il2CppObject **)((long)pSVar7->m_Items + (ulong)uVar3 * (long)(int)uVar2),__n);
    pvVar12 = *(void **)((long)auStack_80 + lVar10 + 0x10);
    *(undefined8 *)((long)__dest_00 + -8) = 0x311a2e5;
    memcpy(pvVar12,__dest_00,__n);
    return;
  }
  *(undefined8 *)((long)__dest_00 + -8) = 0x311a2fe;
  auVar15 = il2cpp_runtime_helper_022b2ca0();
  lVar11 = auVar15._8_8_;
  *(long *)((long)__dest_00 + -8) = (long)&uStack_30 + lVar10;
  *(System_Object_array **)((long)__dest_00 + -0x10) = pSVar4;
  *(long *)((long)__dest_00 + -0x18) = lVar5;
  *(void **)((long)__dest_00 + -0x20) = pvVar12;
  *(long *)((long)__dest_00 + -0x28) = auVar15._0_8_;
  *(undefined8 *)(lVar14 + 0x10) = *(undefined8 *)(lVar11 + 8);
  *(long *)(lVar14 + 0x28) = lVar11;
  *(long **)(lVar14 + 0x20) = plVar13;
  *(undefined8 *)((long)__dest_00 + -0x30) = 0x311a329;
  il2cpp_runtime_helper_022b4080(lVar14 + 0x20);
  cVar1 = *(char *)(lVar11 + 0x52);
  *(long *)(lVar14 + 0x40) = lVar14;
  *(undefined8 *)((long)__dest_00 + -0x30) = 0x311a339;
  cVar8 = il2cpp_runtime_helper_022b2a80(lVar11);
  if (cVar8 == '\0') {
    if (plVar13 == (long *)0x0) {
      *(undefined8 *)((long)__dest_00 + -0x30) = 0x311a388;
      lVar10 = il2cpp_runtime_helper_0231a840(0,"Delegate to an instance method cannot have null \'this\'.");
      *(undefined8 *)((long)__dest_00 + -0x30) = 0x311a392;
      il2cpp_runtime_helper_022b2b10(lVar10,0);
      (**(code **)(lVar10 + 0x18))
                (*(undefined8 *)(lVar10 + 0x40),*(undefined8 *)(lVar10 + 0x28),extraout_RDX_00,
                 *(code **)(lVar10 + 0x18));
      return;
    }
  }
  else if (cVar1 == '\0') {
    *(undefined1 **)(lVar14 + 0x18) = &label_01fe46d0;
    goto label_0311a364;
  }
  *(undefined8 *)(lVar14 + 0x18) = *(undefined8 *)(lVar14 + 0x10);
  *(undefined8 *)(lVar14 + 0x40) = *(undefined8 *)(lVar14 + 0x20);
label_0311a364:
  *(code **)(lVar14 + 0x38) = il2cpp_runtime_helper_01fe4680;
  return;
}


// Utility.Cycle<Int32Enum>$$Set
// il2cpp: int32_t Utility_Cycle_Int32Enum___Set (Utility_Cycle_T__o* __this, int32_t value, const MethodInfo_3019DD0* method);
// 0x3119dd0

int32_t Utility_Cycle_Int32Enum___Set(Utility_Cycle_T__o *__this,int32_t value,MethodInfo_3019DD0 *method)

{
  System_Object_array *pSVar1;
  code *pcVar2;
  uint uVar3;
  int32_t iVar4;
  
  uVar3 = System_Array__IndexOf_Int32Enum_
                    ((System_Int32Enum_array *)(__this->fields).values,value,
                     (MethodInfo_2676E80 *)method->klass->rgctx_data->_4_System_Array_IndexOf_T_);
  (__this->fields).index = uVar3;
  pSVar1 = (__this->fields).values;
  if (pSVar1 == (System_Object_array *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else if (uVar3 < (uint)pSVar1->max_length) {
    return *(int32_t *)((long)pSVar1->m_Items + (long)(int)uVar3 * 4);
  }
  il2cpp_runtime_helper_022b2ca0();
  pcVar2 = (code *)swi(3);
  iVar4 = (*pcVar2)();
  return iVar4;
}


// Utility.Cycle<__Il2CppFullySharedGenericStructType>$$Set
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o Utility_Cycle___Il2CppFullySharedGenericStructType___Set (Utility_Cycle_T__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o value, const MethodInfo_301A220* method);
// 0x311a220

void Utility_Cycle___Il2CppFullySharedGenericStructType___Set
               (long __this,void *param_2,void *param_3,long param_4)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long *plVar5;
  char cVar6;
  ulong uVar7;
  long lVar8;
  ulong __n;
  long lVar9;
  undefined8 extraout_RDX;
  void *pvVar10;
  long *plVar11;
  long lVar12;
  void *__dest;
  undefined1 auVar13 [16];
  long alStack_88 [5];
  undefined8 uStack_60;
  undefined8 local_58;
  void *local_50;
  void *local_48;
  ulong local_40;
  uint local_34;
  
  lVar8 = *(long *)(param_4 + 0x20);
  __n = (ulong)*(uint *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x18) + 0xfc);
  uVar7 = __n + 0xf & 0xfffffffffffffff0;
  pvVar10 = (void *)((long)&local_58 - uVar7);
  __dest = (void *)((long)pvVar10 - uVar7);
  uVar3 = *(undefined8 *)(__this + 0x10);
  local_48 = param_3;
  local_40 = __n;
  *(undefined8 *)((long)__dest + -8) = 0x311a277;
  memcpy(pvVar10,param_2,__n);
  plVar11 = *(long **)(*(long *)(lVar8 + 0xc0) + 0x20);
  lVar12 = *plVar11;
  pcVar4 = (code *)plVar11[2];
  local_58 = uVar3;
  local_50 = pvVar10;
  *(undefined8 *)((long)__dest + -8) = 0x311a29a;
  (*pcVar4)(lVar12,plVar11,0,&local_58,&local_34);
  uVar7 = local_40;
  *(uint *)(__this + 0x18) = local_34;
  plVar5 = *(long **)(__this + 0x10);
  if (plVar5 == (long *)0x0) {
    *(undefined8 *)((long)__dest + -8) = 0x311a2f9;
    il2cpp_runtime_helper_022b2c90();
  }
  else if (local_34 < *(uint *)(plVar5 + 3)) {
    uVar2 = *(uint *)(*plVar5 + 0x104);
    *(undefined8 *)((long)__dest + -8) = 0x311a2d6;
    memcpy(__dest,(void *)((long)plVar5 + (ulong)uVar2 * (long)(int)local_34 + 0x20),uVar7);
    pvVar10 = local_48;
    *(undefined8 *)((long)__dest + -8) = 0x311a2e5;
    memcpy(pvVar10,__dest,uVar7);
    return;
  }
  *(undefined8 *)((long)__dest + -8) = 0x311a2fe;
  auVar13 = il2cpp_runtime_helper_022b2ca0();
  lVar9 = auVar13._8_8_;
  *(undefined1 **)((long)__dest + -8) = &stack0xfffffffffffffff8;
  *(undefined8 *)((long)__dest + -0x10) = uVar3;
  *(long *)((long)__dest + -0x18) = lVar8;
  *(void **)((long)__dest + -0x20) = pvVar10;
  *(long *)((long)__dest + -0x28) = auVar13._0_8_;
  *(undefined8 *)(lVar12 + 0x10) = *(undefined8 *)(lVar9 + 8);
  *(long *)(lVar12 + 0x28) = lVar9;
  *(long **)(lVar12 + 0x20) = plVar11;
  *(undefined8 *)((long)__dest + -0x30) = 0x311a329;
  il2cpp_runtime_helper_022b4080(lVar12 + 0x20);
  cVar1 = *(char *)(lVar9 + 0x52);
  *(long *)(lVar12 + 0x40) = lVar12;
  *(undefined8 *)((long)__dest + -0x30) = 0x311a339;
  cVar6 = il2cpp_runtime_helper_022b2a80(lVar9);
  if (cVar6 == '\0') {
    if (plVar11 == (long *)0x0) {
      *(undefined8 *)((long)__dest + -0x30) = 0x311a388;
      lVar8 = il2cpp_runtime_helper_0231a840(0,"Delegate to an instance method cannot have null \'this\'.");
      *(undefined8 *)((long)__dest + -0x30) = 0x311a392;
      il2cpp_runtime_helper_022b2b10(lVar8,0);
      (**(code **)(lVar8 + 0x18))
                (*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28),extraout_RDX,
                 *(code **)(lVar8 + 0x18));
      return;
    }
  }
  else if (cVar1 == '\0') {
    *(undefined1 **)(lVar12 + 0x18) = &label_01fe46d0;
    goto label_0311a364;
  }
  *(undefined8 *)(lVar12 + 0x18) = *(undefined8 *)(lVar12 + 0x10);
  *(undefined8 *)(lVar12 + 0x40) = *(undefined8 *)(lVar12 + 0x20);
label_0311a364:
  *(code **)(lVar12 + 0x38) = il2cpp_runtime_helper_01fe4680;
  return;
}


