// Type: Utility.Cycle
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Utility/Cycle.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/Cycle.cs
// --------------------------------

// Utility.Cycle<Int32Enum>$$.ctor
// il2cpp: void Utility_Cycle_Int32Enum____ctor (Utility_Cycle_T__o* __this, const MethodInfo_1387430* method);
// 0x181387430

void
Utility_Cycle_Int32Enum____ctor(Utility_Cycle_T__o* __this, MethodInfo_1387430* method)

{
  System_RuntimeTypeHandle_o handle;
  System_Type_o *enumType;
  Il2CppObject *obj;
  Il2CppClass *pIVar1;
  System_Object_array *pSVar2;
  Il2CppObject *value;
  
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  handle.fields.value = (System_RuntimeTypeHandle_Fields)method->klass->rgctx_data->_0_T;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if ((g_data_184354e58->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354e58);
  }
  obj = (Il2CppObject *)System_Enum__GetValues(enumType,(MethodInfo *)0x0);
  pIVar1 = method->klass->rgctx_data->_1_T__;
  if (((pIVar1->_2).bitflags1 & 1) == 0) {
    pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
  }
  if (obj == (Il2CppObject *)0x0) {
    pSVar2 = (System_Object_array *)0x0;
  }
  else {
    pSVar2 = (System_Object_array *)il2cpp_vm_Object_IsInst(obj,pIVar1);
    if (pSVar2 == (System_Object_array *)0x0) {
      il2cpp_codegen_raise_invalid_cast_exception(obj,pIVar1);
    }
  }
  (__this->fields).values = pSVar2;
  pIVar1 = method->klass->rgctx_data->_1_T__;
  if (((pIVar1->_2).bitflags1 & 1) == 0) {
    pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
  }
  if (obj == (Il2CppObject *)0x0) {
    value = (Il2CppObject *)0x0;
  }
  else {
    value = il2cpp_vm_Object_IsInst(obj,pIVar1);
    if (value == (Il2CppObject *)0x0) {
      il2cpp_codegen_raise_invalid_cast_exception(obj,pIVar1);
    }
  }
  Il2CppCodeGenWriteBarrier(&(__this->fields).values,value);
  (__this->fields).index = 0;
  return;
}


// Utility.Cycle<__Il2CppFullySharedGenericStructType>$$.ctor
// il2cpp: void Utility_Cycle___Il2CppFullySharedGenericStructType____ctor (Utility_Cycle_T__o* __this, const MethodInfo_1387430* method);
// 0x181387430

void Utility_Cycle___Il2CppFullySharedGenericStructType____ctor
               (Utility_Cycle_T__o *__this,MethodInfo_1387430 *method)

{
  System_RuntimeTypeHandle_o handle;
  System_Type_o *enumType;
  Il2CppObject *obj;
  Il2CppClass *pIVar1;
  System_Object_array *pSVar2;
  Il2CppObject *value;
  
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  handle.fields.value = (System_RuntimeTypeHandle_Fields)method->klass->rgctx_data->_0_T;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if ((g_data_184354e58->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354e58);
  }
  obj = (Il2CppObject *)System_Enum__GetValues(enumType,(MethodInfo *)0x0);
  pIVar1 = method->klass->rgctx_data->_1_T__;
  if (((pIVar1->_2).bitflags1 & 1) == 0) {
    pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
  }
  if (obj == (Il2CppObject *)0x0) {
    pSVar2 = (System_Object_array *)0x0;
  }
  else {
    pSVar2 = (System_Object_array *)il2cpp_vm_Object_IsInst(obj,pIVar1);
    if (pSVar2 == (System_Object_array *)0x0) {
      il2cpp_codegen_raise_invalid_cast_exception(obj,pIVar1);
    }
  }
  (__this->fields).values = pSVar2;
  pIVar1 = method->klass->rgctx_data->_1_T__;
  if (((pIVar1->_2).bitflags1 & 1) == 0) {
    pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
  }
  if (obj == (Il2CppObject *)0x0) {
    value = (Il2CppObject *)0x0;
  }
  else {
    value = il2cpp_vm_Object_IsInst(obj,pIVar1);
    if (value == (Il2CppObject *)0x0) {
      il2cpp_codegen_raise_invalid_cast_exception(obj,pIVar1);
    }
  }
  Il2CppCodeGenWriteBarrier(&(__this->fields).values,value);
  (__this->fields).index = 0;
  return;
}


// Utility.Cycle<Int32Enum>$$Next
// il2cpp: int32_t Utility_Cycle_Int32Enum___Next (Utility_Cycle_T__o* __this, const MethodInfo_13870B0* method);
// 0x1813870b0

int32_t Utility_Cycle_Int32Enum___Next(Utility_Cycle_T__o *__this,MethodInfo_13870B0 *method)

{
  System_Object_array *pSVar1;
  uint uVar2;
  
  pSVar1 = (__this->fields).values;
  if (pSVar1 != (System_Object_array *)0x0) {
    uVar2 = ((__this->fields).index + 1) % (int)pSVar1->max_length;
    (__this->fields).index = uVar2;
    if (pSVar1 != (System_Object_array *)0x0) {
      if (uVar2 < (uint)pSVar1->max_length) {
        return *(int32_t *)((longlong)pSVar1->m_Items + (longlong)(int)uVar2 * 4);
      }
      ThrowIndexOutOfRangeException();
    }
  }
  ThrowNullReferenceException();
}


// Utility.Cycle<__Il2CppFullySharedGenericStructType>$$Next
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o Utility_Cycle___Il2CppFullySharedGenericStructType___Next (Utility_Cycle_T__o* __this, const MethodInfo_13870F0* method);
// 0x1813870f0

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o
Utility_Cycle___Il2CppFullySharedGenericStructType___Next
          (Utility_Cycle_T__o *__this,MethodInfo_13870F0 *method)

{
  uint uVar1;
  System_Object_array *pSVar2;
  longlong lVar3;
  ulonglong uVar4;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o UVar5;
  uint uVar6;
  ulonglong size;
  longlong in_R8;
  undefined8 auStack_50 [5];
  undefined1 local_28 [8];
  
  size = (ulonglong)*(uint *)(*(longlong *)(*(longlong *)(*(longlong *)(in_R8 + 0x20) + 0xc0) + 0x18) + 0xfc);
  uVar4 = size + 0xf;
  if (uVar4 <= size) {
    uVar4 = 0xffffffffffffff0;
  }
  auStack_50[0] = 0x181387132;
  pSVar2 = (__this->fields).values;
  lVar3 = -(uVar4 & 0xfffffffffffffff0);
  if (pSVar2 != (System_Object_array *)0x0) {
    uVar6 = ((__this->fields).index + 1) % (int)pSVar2->max_length;
    (__this->fields).index = uVar6;
    if (pSVar2 != (System_Object_array *)0x0) {
      if (uVar6 < (uint)pSVar2->max_length) {
        uVar1 = (((pSVar2->obj).klass)->_2).element_size;
        *(undefined8 *)((longlong)auStack_50 + lVar3) = 0x181387180;
        memcpy(local_28 + lVar3,
               (Il2CppObject **)((longlong)pSVar2->m_Items + (longlong)(int)uVar6 * (ulonglong)uVar1),size);
        *(undefined8 *)((longlong)auStack_50 + lVar3) = 0x18138718e;
        UVar5.fields._tail =
             (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_Fields)
             memcpy(method,local_28 + lVar3,size);
        return (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o)UVar5.fields._tail;
      }
      *(undefined8 *)((longlong)auStack_50 + lVar3) = 0x1813871a2;
      ThrowIndexOutOfRangeException();
    }
  }
  *(undefined8 *)((longlong)auStack_50 + lVar3) = 0x18138719c;
  ThrowNullReferenceException();
}


// Utility.Cycle<Int32Enum>$$Previous
// il2cpp: int32_t Utility_Cycle_Int32Enum___Previous (Utility_Cycle_T__o* __this, const MethodInfo_1387270* method);
// 0x181387270

int32_t Utility_Cycle_Int32Enum___Previous(Utility_Cycle_T__o *__this,MethodInfo_1387270 *method)

{
  System_Object_array *pSVar1;
  uint uVar2;
  
  pSVar1 = (__this->fields).values;
  if (pSVar1 != (System_Object_array *)0x0) {
    uVar2 = ((__this->fields).index + -1 + (int)pSVar1->max_length) % (int)pSVar1->max_length;
    (__this->fields).index = uVar2;
    if (pSVar1 != (System_Object_array *)0x0) {
      if (uVar2 < (uint)pSVar1->max_length) {
        return *(int32_t *)((longlong)pSVar1->m_Items + (longlong)(int)uVar2 * 4);
      }
      ThrowIndexOutOfRangeException();
    }
  }
  ThrowNullReferenceException();
}


// Utility.Cycle<__Il2CppFullySharedGenericStructType>$$Previous
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o Utility_Cycle___Il2CppFullySharedGenericStructType___Previous (Utility_Cycle_T__o* __this, const MethodInfo_13871B0* method);
// 0x1813871b0

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o
Utility_Cycle___Il2CppFullySharedGenericStructType___Previous
          (Utility_Cycle_T__o *__this,MethodInfo_13871B0 *method)

{
  uint uVar1;
  System_Object_array *pSVar2;
  longlong lVar3;
  ulonglong uVar4;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o UVar5;
  uint uVar6;
  ulonglong size;
  longlong in_R8;
  undefined8 auStack_50 [5];
  undefined1 local_28 [8];
  
  size = (ulonglong)*(uint *)(*(longlong *)(*(longlong *)(*(longlong *)(in_R8 + 0x20) + 0xc0) + 0x18) + 0xfc);
  uVar4 = size + 0xf;
  if (uVar4 <= size) {
    uVar4 = 0xffffffffffffff0;
  }
  auStack_50[0] = 0x1813871f5;
  pSVar2 = (__this->fields).values;
  lVar3 = -(uVar4 & 0xfffffffffffffff0);
  if (pSVar2 != (System_Object_array *)0x0) {
    uVar6 = ((__this->fields).index + -1 + (int)pSVar2->max_length) % (int)pSVar2->max_length;
    (__this->fields).index = uVar6;
    if (pSVar2 != (System_Object_array *)0x0) {
      if (uVar6 < (uint)pSVar2->max_length) {
        uVar1 = (((pSVar2->obj).klass)->_2).element_size;
        *(undefined8 *)((longlong)auStack_50 + lVar3) = 0x181387246;
        memcpy(local_28 + lVar3,
               (Il2CppObject **)((longlong)pSVar2->m_Items + (longlong)(int)uVar6 * (ulonglong)uVar1),size);
        *(undefined8 *)((longlong)auStack_50 + lVar3) = 0x181387254;
        UVar5.fields._tail =
             (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_Fields)
             memcpy(method,local_28 + lVar3,size);
        return (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o)UVar5.fields._tail;
      }
      *(undefined8 *)((longlong)auStack_50 + lVar3) = 0x181387268;
      ThrowIndexOutOfRangeException();
    }
  }
  *(undefined8 *)((longlong)auStack_50 + lVar3) = 0x181387262;
  ThrowNullReferenceException();
}


// Utility.Cycle<Int32Enum>$$Current
// il2cpp: int32_t Utility_Cycle_Int32Enum___Current (Utility_Cycle_T__o* __this, const MethodInfo_1387080* method);
// 0x181387080

int32_t Utility_Cycle_Int32Enum___Current(Utility_Cycle_T__o *__this,MethodInfo_1387080 *method)

{
  uint uVar1;
  System_Object_array *pSVar2;
  
  pSVar2 = (__this->fields).values;
  if (pSVar2 == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  uVar1 = (__this->fields).index;
  if (uVar1 < (uint)pSVar2->max_length) {
    return *(int32_t *)((longlong)pSVar2->m_Items + (longlong)(int)uVar1 * 4);
  }
  ThrowIndexOutOfRangeException();
}


// Utility.Cycle<__Il2CppFullySharedGenericStructType>$$Current
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o Utility_Cycle___Il2CppFullySharedGenericStructType___Current (Utility_Cycle_T__o* __this, const MethodInfo_1386FE0* method);
// 0x181386fe0

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o
Utility_Cycle___Il2CppFullySharedGenericStructType___Current
          (Utility_Cycle_T__o *__this,MethodInfo_1386FE0 *method)

{
  uint uVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  longlong lVar4;
  ulonglong uVar5;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o UVar6;
  ulonglong size;
  longlong in_R8;
  undefined8 auStack_50 [5];
  undefined1 local_28 [8];
  
  size = (ulonglong)*(uint *)(*(longlong *)(*(longlong *)(*(longlong *)(in_R8 + 0x20) + 0xc0) + 0x18) + 0xfc);
  uVar5 = size + 0xf;
  if (uVar5 <= size) {
    uVar5 = 0xffffffffffffff0;
  }
  auStack_50[0] = 0x181387022;
  pSVar3 = (__this->fields).values;
  lVar4 = -(uVar5 & 0xfffffffffffffff0);
  if (pSVar3 != (System_Object_array *)0x0) {
    uVar1 = (__this->fields).index;
    if (uVar1 < (uint)pSVar3->max_length) {
      uVar2 = (((pSVar3->obj).klass)->_2).element_size;
      *(undefined8 *)((longlong)auStack_50 + lVar4) = 0x18138705c;
      memcpy(local_28 + lVar4,
             (Il2CppObject **)((longlong)pSVar3->m_Items + (ulonglong)uVar2 * (longlong)(int)uVar1),size);
      *(undefined8 *)((longlong)auStack_50 + lVar4) = 0x18138706a;
      UVar6.fields._tail =
           (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_Fields)
           memcpy(method,local_28 + lVar4,size);
      return (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o)UVar6.fields._tail;
    }
    *(undefined8 *)((longlong)auStack_50 + lVar4) = 0x18138707e;
    ThrowIndexOutOfRangeException();
  }
  *(undefined8 *)((longlong)auStack_50 + lVar4) = 0x181387078;
  ThrowNullReferenceException();
}


// Utility.Cycle<Int32Enum>$$Set
// il2cpp: int32_t Utility_Cycle_Int32Enum___Set (Utility_Cycle_T__o* __this, int32_t value, const MethodInfo_13872C0* method);
// 0x1813872c0

int32_t Utility_Cycle_Int32Enum___Set(Utility_Cycle_T__o *__this,int32_t value,MethodInfo_13872C0 *method)

{
  System_Object_array *pSVar1;
  uint uVar2;
  
  uVar2 = System_Array__IndexOf_Int32Enum_
                    ((System_Int32Enum_array *)(__this->fields).values,value,
                     (MethodInfo_761A20 *)method->klass->rgctx_data->_4_System_Array_IndexOf_T_);
  pSVar1 = (__this->fields).values;
  (__this->fields).index = uVar2;
  if (pSVar1 == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (uVar2 < (uint)pSVar1->max_length) {
    return *(int32_t *)((longlong)pSVar1->m_Items + (longlong)(int)uVar2 * 4);
  }
  ThrowIndexOutOfRangeException();
}


// Utility.Cycle<__Il2CppFullySharedGenericStructType>$$Set
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o Utility_Cycle___Il2CppFullySharedGenericStructType___Set (Utility_Cycle_T__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o value, const MethodInfo_1387310* method);
// 0x181387310

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o
Utility_Cycle___Il2CppFullySharedGenericStructType___Set
          (Utility_Cycle_T__o *__this,Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o value,
          MethodInfo_1387310 *method)

{
  void *destination;
  uint uVar1;
  System_Object_array *pSVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o UVar10;
  ulonglong size;
  longlong in_R9;
  uint local_res8 [8];
  undefined8 auStack_90 [5];
  longlong alStack_68 [2];
  System_Object_array *local_58;
  void *local_50;
  
  size = (ulonglong)*(uint *)(*(longlong *)(*(longlong *)(*(longlong *)(in_R9 + 0x20) + 0xc0) + 0x18) + 0xfc);
  uVar9 = size + 0xf;
  if (uVar9 <= size) {
    uVar9 = 0xffffffffffffff0;
  }
  auStack_90[0] = 0x181387363;
  lVar7 = -(uVar9 & 0xfffffffffffffff0);
  uVar9 = size + 0xf;
  if (uVar9 <= size) {
    uVar9 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_90 + lVar7) = 0x181387380;
  pSVar2 = (__this->fields).values;
  lVar8 = -(uVar9 & 0xfffffffffffffff0);
  destination = (void *)((longlong)&local_58 + lVar8 + lVar7);
  *(undefined8 *)((longlong)auStack_90 + lVar8 + lVar7) = 0x181387397;
  memcpy((void *)((longlong)&local_58 + lVar7),(void *)value.fields._tail,size);
  lVar3 = *(longlong *)(*(longlong *)(in_R9 + 0x20) + 0xc0);
  local_58 = pSVar2;
  local_50 = (void *)((longlong)&local_58 + lVar7);
  *(uint **)((longlong)alStack_68 + lVar8 + lVar7) = local_res8;
  puVar4 = *(undefined8 **)(lVar3 + 0x20);
  uVar5 = *puVar4;
  pcVar6 = (code *)puVar4[2];
  *(undefined8 *)((longlong)auStack_90 + lVar8 + lVar7) = 0x1813873c8;
  (*pcVar6)(uVar5,puVar4,0,&local_58);
  pSVar2 = (__this->fields).values;
  (__this->fields).index = local_res8[0];
  if (pSVar2 != (System_Object_array *)0x0) {
    if (local_res8[0] < (uint)pSVar2->max_length) {
      uVar1 = (((pSVar2->obj).klass)->_2).element_size;
      *(undefined8 *)((longlong)auStack_90 + lVar8 + lVar7) = 0x1813873fe;
      memcpy(destination,
             (Il2CppObject **)((longlong)pSVar2->m_Items + (ulonglong)uVar1 * (longlong)(int)local_res8[0]),
             size);
      *(undefined8 *)((longlong)auStack_90 + lVar8 + lVar7) = 0x18138740c;
      UVar10.fields._tail =
           (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_Fields)memcpy(method,destination,size);
      return (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o)UVar10.fields._tail;
    }
    *(undefined8 *)((longlong)auStack_90 + lVar8 + lVar7) = 0x181387428;
    ThrowIndexOutOfRangeException();
  }
  *(undefined8 *)((longlong)auStack_90 + lVar8 + lVar7) = 0x181387422;
  ThrowNullReferenceException();
}


