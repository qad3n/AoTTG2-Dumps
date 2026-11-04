// Type: f__AnonymousType0
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// Prior real C# source: none
// --------------------------------

// <>f__AnonymousType0<object, int>$$get_value
// il2cpp: Il2CppObject* __f__AnonymousType0_object__int___get_value (__f__AnonymousType0__value_j__TPar___index_j__TPar__o* __this, const MethodInfo_8FB3A0* method);
// 0x1808fb3a0

Il2CppObject*
__f__AnonymousType0_object__int___get_value(__f__AnonymousType0__value_j__TPar___index_j__TPar__o* __this, MethodInfo_8FB3A0* method)

{
  return (__this->fields)._value_i__Field;
}


// <>f__AnonymousType0<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$get_value
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o __f__AnonymousType0___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_value (__f__AnonymousType0__value_j__TPar___index_j__TPar__o* __this, const MethodInfo_8F5550* method);
// 0x1808f5550

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
__f__AnonymousType0___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_value(__f__AnonymousType0__value_j__TPar___index_j__TPar__o* __this, MethodInfo_8F5550* method)

{
  longlong lVar1;
  ulonglong uVar2;
  void *pvVar3;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *pUVar4;
  ulonglong size;
  undefined8 auStack_50 [5];
  
  size = (ulonglong)(method->klass->rgctx_data->_1__value_j__TPar->_2).stack_slot_size;
  uVar2 = size + 0xf;
  if (uVar2 <= size) {
    uVar2 = 0xffffffffffffff0;
  }
  auStack_50[0] = 0x1808f5597;
  lVar1 = -(uVar2 & 0xfffffffffffffff0);
  pvVar3 = (method->klass->rgctx_data->_0___f__AnonymousType0__value_j__TPar___index_j__TPar_->_1).fields;
  *(undefined8 *)((longlong)auStack_50 + lVar1) = 0x1808f55bc;
  pvVar3 = il2cpp_codegen_get_instance_field_data_pointer(__return_storage_ptr__,pvVar3);
  *(undefined8 *)((longlong)auStack_50 + lVar1) = 0x1808f55ca;
  memcpy(&stack0xffffffffffffffd8 + lVar1,pvVar3,size);
  *(undefined8 *)((longlong)auStack_50 + lVar1) = 0x1808f55d8;
  pUVar4 = memcpy(__this,&stack0xffffffffffffffd8 + lVar1,size);
  return pUVar4;
}


// <>f__AnonymousType0<object, int>$$get_index
// il2cpp: int32_t __f__AnonymousType0_object__int___get_index (__f__AnonymousType0__value_j__TPar___index_j__TPar__o* __this, const MethodInfo_8FB390* method);
// 0x1808fb390

int32_t
__f__AnonymousType0_object__int___get_index(__f__AnonymousType0__value_j__TPar___index_j__TPar__o* __this, MethodInfo_8FB390* method)

{
  return (UnityEngine_InputForUI_EventModifiers_Fields)
         (UnityEngine_InputForUI_EventModifiers_Fields)
         (__this->fields)._eventModifiers_k__BackingField.fields._state;
}


// <>f__AnonymousType0<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$get_index
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o __f__AnonymousType0___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_index (__f__AnonymousType0__value_j__TPar___index_j__TPar__o* __this, const MethodInfo_8E79B0* method);
// 0x1808e79b0

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
__f__AnonymousType0___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_index(__f__AnonymousType0__value_j__TPar___index_j__TPar__o* __this, MethodInfo_8E79B0* method)

{
  longlong lVar1;
  ulonglong uVar2;
  void *pvVar3;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *pUVar4;
  ulonglong size;
  undefined8 auStack_50 [5];
  
  size = (ulonglong)(method->klass->rgctx_data->_2__index_j__TPar->_2).stack_slot_size;
  uVar2 = size + 0xf;
  if (uVar2 <= size) {
    uVar2 = 0xffffffffffffff0;
  }
  auStack_50[0] = 0x1808e79f7;
  lVar1 = -(uVar2 & 0xfffffffffffffff0);
  pvVar3 = (method->klass->rgctx_data->_0___f__AnonymousType0__value_j__TPar___index_j__TPar_->_1).fields;
  *(undefined8 *)((longlong)auStack_50 + lVar1) = 0x1808e7a20;
  pvVar3 = il2cpp_codegen_get_instance_field_data_pointer
                     (__return_storage_ptr__,(void *)((longlong)pvVar3 + 0x20));
  *(undefined8 *)((longlong)auStack_50 + lVar1) = 0x1808e7a2e;
  memcpy(&stack0xffffffffffffffd8 + lVar1,pvVar3,size);
  *(undefined8 *)((longlong)auStack_50 + lVar1) = 0x1808e7a3c;
  pUVar4 = memcpy(__this,&stack0xffffffffffffffd8 + lVar1,size);
  return pUVar4;
}


// <>f__AnonymousType0<object, int>$$.ctor
// il2cpp: void __f__AnonymousType0_object__int____ctor (__f__AnonymousType0__value_j__TPar___index_j__TPar__o* __this, Il2CppObject* value, int32_t index, const MethodInfo_8FB340* method);
// 0x1808fb340

void
__f__AnonymousType0_object__int____ctor(__f__AnonymousType0__value_j__TPar___index_j__TPar__o* __this, Il2CppObject* value, int32_t index, MethodInfo_8FB340* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._value_i__Field = table;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._value_i__Field,table);
  (__this->fields)._record = record;
  return;
}


// <>f__AnonymousType0<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$.ctor
// il2cpp: void __f__AnonymousType0___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor (__f__AnonymousType0__value_j__TPar___index_j__TPar__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o index, const MethodInfo_8FB1E0* method);
// 0x1808fb1e0

void
__f__AnonymousType0___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor(__f__AnonymousType0__value_j__TPar___index_j__TPar__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o index, MethodInfo_8FB1E0* method)

{
  uint uVar1;
  void *pvVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *pUVar6;
  ulonglong size;
  ulonglong size_00;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o local_res10;
  undefined8 auStack_60 [5];
  
  size_00 = (ulonglong)(method->klass->rgctx_data->_1__value_j__TPar->_2).stack_slot_size;
  uVar1 = (method->klass->rgctx_data->_2__index_j__TPar->_2).stack_slot_size;
  size = (ulonglong)uVar1;
  uVar5 = size_00 + 0xf;
  if (uVar5 <= size_00) {
    uVar5 = 0xffffffffffffff0;
  }
  auStack_60[0] = 0x1808fb25a;
  lVar3 = -(uVar5 & 0xfffffffffffffff0);
  uVar5 = size + 0xf;
  if (uVar5 <= size) {
    uVar5 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_60 + lVar3) = 0x1808fb277;
  lVar4 = -(uVar5 & 0xfffffffffffffff0);
  *(undefined8 *)((longlong)auStack_60 + lVar4 + lVar3) = 0x1808fb286;
  local_res10.klass = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)item1;
  local_res10.monitor = item2;
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  pUVar6 = &local_res10;
  if ((int)(method->klass->rgctx_data->_1__value_j__TPar->_1).byval_arg.bits < 0) {
    pUVar6 = item1;
  }
  *(undefined8 *)((longlong)auStack_60 + lVar4 + lVar3) = 0x1808fb2ac;
  memcpy(&stack0xffffffffffffffc8 + lVar3,pUVar6,size_00);
  pvVar2 = (method->klass->rgctx_data->_0___f__AnonymousType0__value_j__TPar___index_j__TPar_->_1).fields;
  *(undefined8 *)((longlong)auStack_60 + lVar4 + lVar3) = 0x1808fb2d3;
  il2cpp_runtime_helper_180417320(__this,pvVar2,&stack0xffffffffffffffc8 + lVar3,size_00);
  pUVar6 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)&local_res10.monitor;
  if ((int)(method->klass->rgctx_data->_2__index_j__TPar->_1).byval_arg.bits < 0) {
    pUVar6 = item2;
  }
  *(undefined8 *)((longlong)auStack_60 + lVar4 + lVar3) = 0x1808fb2f9;
  memcpy(&stack0xffffffffffffffc8 + lVar4 + lVar3,pUVar6,size);
  pvVar2 = (method->klass->rgctx_data->_0___f__AnonymousType0__value_j__TPar___index_j__TPar_->_1).fields;
  *(undefined8 *)((longlong)auStack_60 + lVar4 + lVar3) = 0x1808fb320;
  il2cpp_runtime_helper_180417320(__this,(longlong)pvVar2 + 0x20,&stack0xffffffffffffffc8 + lVar4 + lVar3,uVar1);
  return;
}


// <>f__AnonymousType0<object, int>$$Equals
// il2cpp: bool __f__AnonymousType0_object__int___Equals (__f__AnonymousType0__value_j__TPar___index_j__TPar__o* __this, Il2CppObject* value, const MethodInfo_8FA480* method);
// 0x1808fa480

bool __f__AnonymousType0_object__int___Equals
               (__f__AnonymousType0__value_j__TPar___index_j__TPar__o *__this,Il2CppObject *value,
               MethodInfo_8FA480 *method)

{
  char cVar1;
  undefined1 uVar2;
  Il2CppClass *klass;
  longlong *plVar3;
  __f__AnonymousType0__value_j__TPar___index_j__TPar__o *p_Var4;
  
  klass = method->klass->rgctx_data->_0___f__AnonymousType0__value_j__TPar___index_j__TPar_;
  if (((klass->_2).bitflags1 & 1) == 0) {
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  p_Var4 = (__f__AnonymousType0__value_j__TPar___index_j__TPar__o *)0x0;
  if ((value != (Il2CppObject *)0x0) && (value->klass == klass)) {
    p_Var4 = (__f__AnonymousType0__value_j__TPar___index_j__TPar__o *)value;
  }
  if (__this == p_Var4) {
    return true;
  }
  if (p_Var4 == (__f__AnonymousType0__value_j__TPar___index_j__TPar__o *)0x0) {
    return false;
  }
  plVar3 = (longlong *)
           il2cpp_runtime_helper_18001ada0(method->klass->rgctx_data->
                         _3_System_Collections_Generic_EqualityComparer__value_j__TPar__get_Default);
  if (plVar3 != (longlong *)0x0) {
    cVar1 = (**(code **)(*plVar3 + 0x1b8))
                      (plVar3,(__this->fields)._value_i__Field,(p_Var4->fields)._value_i__Field,
                       *(undefined8 *)(*plVar3 + 0x1c0));
    if (cVar1 == '\0') {
      return false;
    }
    plVar3 = (longlong *)
             il2cpp_runtime_helper_18001afc0(method->klass->rgctx_data->
                           _7_System_Collections_Generic_EqualityComparer__index_j__TPar__get_Default);
    if (plVar3 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar3 + 0x1b8))
                        (plVar3,*(undefined4 *)&(__this->fields)._index_i__Field,
                         *(undefined4 *)&(p_Var4->fields)._index_i__Field,*(undefined8 *)(*plVar3 + 0x1c0));
      return (bool)uVar2;
    }
  }
  ThrowNullReferenceException();
}


// <>f__AnonymousType0<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$Equals
// il2cpp: bool __f__AnonymousType0___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Equals (__f__AnonymousType0__value_j__TPar___index_j__TPar__o* __this, Il2CppObject* value, const MethodInfo_8FA560* method);
// 0x1808fa560

bool __f__AnonymousType0___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Equals
               (__f__AnonymousType0__value_j__TPar___index_j__TPar__o *__this,Il2CppObject *value,
               MethodInfo_8FA560 *method)

{
  MethodInfo *pMVar1;
  Il2CppMethodPointer pIVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  ulonglong uVar11;
  Il2CppClass *pIVar12;
  void *pvVar13;
  longlong *plVar14;
  __f__AnonymousType0__value_j__TPar___index_j__TPar__o *instance;
  ulonglong size;
  undefined8 *destination;
  undefined8 *destination_00;
  ulonglong size_00;
  undefined8 *destination_01;
  __f__AnonymousType0__value_j__TPar___index_j__TPar__o *local_res8;
  __f__AnonymousType0__value_j__TPar___index_j__TPar__o *local_res10;
  undefined8 *local_res18;
  undefined8 auStack_80 [5];
  longlong alStack_58 [2];
  void *local_48 [2];
  
  size = (ulonglong)(method->klass->rgctx_data->_1__value_j__TPar->_2).stack_slot_size;
  size_00 = (ulonglong)(method->klass->rgctx_data->_2__index_j__TPar->_2).stack_slot_size;
  uVar11 = size + 0xf;
  if (uVar11 <= size) {
    uVar11 = 0xffffffffffffff0;
  }
  auStack_80[0] = 0x1808fa5d2;
  lVar6 = -(uVar11 & 0xfffffffffffffff0);
  local_res18 = (undefined8 *)((longlong)local_48 + lVar6);
  uVar11 = size + 0xf;
  if (uVar11 <= size) {
    uVar11 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_80 + lVar6) = 0x1808fa5f3;
  lVar7 = -(uVar11 & 0xfffffffffffffff0);
  uVar11 = size_00 + 0xf;
  destination_00 = (undefined8 *)((longlong)local_48 + lVar7 + lVar6);
  if (uVar11 <= size_00) {
    uVar11 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_80 + lVar7 + lVar6) = 0x1808fa610;
  lVar8 = -(uVar11 & 0xfffffffffffffff0);
  uVar11 = size_00 + 0xf;
  destination = (undefined8 *)((longlong)local_48 + lVar8 + lVar7 + lVar6);
  if (uVar11 <= size_00) {
    uVar11 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_80 + lVar8 + lVar7 + lVar6) = 0x1808fa62d;
  lVar9 = -(uVar11 & 0xfffffffffffffff0);
  destination_01 = (undefined8 *)((longlong)local_48 + lVar9 + lVar8 + lVar7 + lVar6);
  pIVar12 = method->klass->rgctx_data->_0___f__AnonymousType0__value_j__TPar___index_j__TPar_;
  local_res8 = __this;
  local_res10 = (__f__AnonymousType0__value_j__TPar___index_j__TPar__o *)value;
  if (((pIVar12->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)((longlong)auStack_80 + lVar9 + lVar8 + lVar7 + lVar6) = 0x1808fa654;
    pIVar12 = il2cpp_codegen_class_init_checked(pIVar12);
  }
  instance = (__f__AnonymousType0__value_j__TPar___index_j__TPar__o *)0x0;
  if ((local_res10 != (__f__AnonymousType0__value_j__TPar___index_j__TPar__o *)0x0) &&
     ((Il2CppClass *)local_res10->klass == pIVar12)) {
    instance = local_res10;
  }
  if (local_res8 == instance) {
    bVar10 = true;
  }
  else {
    if (instance != (__f__AnonymousType0__value_j__TPar___index_j__TPar__o *)0x0) {
      pMVar1 = method->klass->rgctx_data->
               _3_System_Collections_Generic_EqualityComparer__value_j__TPar__get_Default;
      pIVar2 = pMVar1->methodPointer;
      *(undefined8 *)((longlong)auStack_80 + lVar9 + lVar8 + lVar7 + lVar6) = 0x1808fa693;
      local_res10 = (__f__AnonymousType0__value_j__TPar___index_j__TPar__o *)(*pIVar2)(pMVar1);
      pvVar13 = (method->klass->rgctx_data->_0___f__AnonymousType0__value_j__TPar___index_j__TPar_->_1).fields
      ;
      *(undefined8 *)((longlong)auStack_80 + lVar9 + lVar8 + lVar7 + lVar6) = 0x1808fa6b5;
      pvVar13 = il2cpp_codegen_get_instance_field_data_pointer(local_res8,pvVar13);
      *(undefined8 *)((longlong)auStack_80 + lVar9 + lVar8 + lVar7 + lVar6) = 0x1808fa6c4;
      memcpy(local_res18,pvVar13,size);
      pvVar13 = (method->klass->rgctx_data->_0___f__AnonymousType0__value_j__TPar___index_j__TPar_->_1).fields
      ;
      *(undefined8 *)((longlong)auStack_80 + lVar9 + lVar8 + lVar7 + lVar6) = 0x1808fa6e1;
      pvVar13 = il2cpp_codegen_get_instance_field_data_pointer(instance,pvVar13);
      *(undefined8 *)((longlong)auStack_80 + lVar9 + lVar8 + lVar7 + lVar6) = 0x1808fa6ef;
      memcpy(destination_00,pvVar13,size);
      if (local_res10 == (__f__AnonymousType0__value_j__TPar___index_j__TPar__o *)0x0) {
label_1808fa843:
        *(undefined8 *)((longlong)auStack_80 + lVar9 + lVar8 + lVar7 + lVar6) = 0x1808fa848;
        ThrowNullReferenceException();
      }
      if (-1 < (int)(method->klass->rgctx_data->_1__value_j__TPar->_1).byval_arg.bits) {
        destination_00 = (undefined8 *)*destination_00;
        local_res18 = (undefined8 *)*local_res18;
      }
      local_48[0] = local_res18;
      pIVar12 = ((Il2CppClass *)local_res10->klass)->vtable[8].method;
      local_48[1] = destination_00;
      *(__f__AnonymousType0__value_j__TPar___index_j__TPar__o ***)
       ((longlong)alStack_58 + lVar9 + lVar8 + lVar7 + lVar6) = &local_res10;
      pvVar13 = (pIVar12->_1).gc_desc;
      pcVar3 = (code *)(pIVar12->_1).name;
      *(undefined8 *)((longlong)auStack_80 + lVar9 + lVar8 + lVar7 + lVar6) = 0x1808fa755;
      (*pcVar3)(pvVar13,pIVar12,local_res10,local_48);
      if ((char)local_res10 != '\0') {
        pMVar1 = method->klass->rgctx_data->
                 _7_System_Collections_Generic_EqualityComparer__index_j__TPar__get_Default;
        pIVar2 = pMVar1->methodPointer;
        *(undefined8 *)((longlong)auStack_80 + lVar9 + lVar8 + lVar7 + lVar6) = 0x1808fa773;
        plVar14 = (longlong *)(*pIVar2)(pMVar1);
        pvVar13 = (method->klass->rgctx_data->_0___f__AnonymousType0__value_j__TPar___index_j__TPar_->_1).
                  fields;
        *(undefined8 *)((longlong)auStack_80 + lVar9 + lVar8 + lVar7 + lVar6) = 0x1808fa798;
        pvVar13 = il2cpp_codegen_get_instance_field_data_pointer
                            (local_res8,(void *)((longlong)pvVar13 + 0x20));
        *(undefined8 *)((longlong)auStack_80 + lVar9 + lVar8 + lVar7 + lVar6) = 0x1808fa7a6;
        memcpy(destination,pvVar13,size_00);
        pvVar13 = (method->klass->rgctx_data->_0___f__AnonymousType0__value_j__TPar___index_j__TPar_->_1).
                  fields;
        *(undefined8 *)((longlong)auStack_80 + lVar9 + lVar8 + lVar7 + lVar6) = 0x1808fa7c7;
        pvVar13 = il2cpp_codegen_get_instance_field_data_pointer(instance,(void *)((longlong)pvVar13 + 0x20));
        *(undefined8 *)((longlong)auStack_80 + lVar9 + lVar8 + lVar7 + lVar6) = 0x1808fa7d5;
        memcpy(destination_01,pvVar13,size_00);
        if (plVar14 != (longlong *)0x0) {
          if (-1 < (int)(method->klass->rgctx_data->_2__index_j__TPar->_1).byval_arg.bits) {
            destination = (undefined8 *)*destination;
            destination_01 = (undefined8 *)*destination_01;
          }
          lVar4 = *(longlong *)(*plVar14 + 0x1c0);
          local_48[0] = destination;
          local_48[1] = destination_01;
          *(__f__AnonymousType0__value_j__TPar___index_j__TPar__o ***)
           ((longlong)alStack_58 + lVar9 + lVar8 + lVar7 + lVar6) = &local_res8;
          uVar5 = *(undefined8 *)(lVar4 + 8);
          pcVar3 = *(code **)(lVar4 + 0x10);
          *(undefined8 *)((longlong)auStack_80 + lVar9 + lVar8 + lVar7 + lVar6) = 0x1808fa827;
          (*pcVar3)(uVar5,lVar4,plVar14,local_48);
          return (bool)local_res8._0_1_;
        }
        goto label_1808fa843;
      }
    }
    bVar10 = false;
  }
  return bVar10;
}


// <>f__AnonymousType0<object, int>$$GetHashCode
// il2cpp: int32_t __f__AnonymousType0_object__int___GetHashCode (__f__AnonymousType0__value_j__TPar___index_j__TPar__o* __this, const MethodInfo_8FA850* method);
// 0x1808fa850

int32_t __f__AnonymousType0_object__int___GetHashCode
                  (__f__AnonymousType0__value_j__TPar___index_j__TPar__o *__this,MethodInfo_8FA850 *method)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)
           il2cpp_runtime_helper_18001ada0(method->klass->rgctx_data->
                         _3_System_Collections_Generic_EqualityComparer__value_j__TPar__get_Default);
  if (plVar3 != (longlong *)0x0) {
    iVar1 = (**(code **)(*plVar3 + 0x1c8))
                      (plVar3,(__this->fields)._value_i__Field,*(undefined8 *)(*plVar3 + 0x1d0));
    plVar3 = (longlong *)
             il2cpp_runtime_helper_18001afc0(method->klass->rgctx_data->
                           _7_System_Collections_Generic_EqualityComparer__index_j__TPar__get_Default);
    if (plVar3 != (longlong *)0x0) {
      iVar2 = (**(code **)(*plVar3 + 0x1c8))
                        (plVar3,*(undefined4 *)&(__this->fields)._index_i__Field,
                         *(undefined8 *)(*plVar3 + 0x1d0));
      return iVar2 + iVar1 * -0x5aaaaad7 + 0x67eac8cf;
    }
  }
  ThrowNullReferenceException();
}


// <>f__AnonymousType0<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$GetHashCode
// il2cpp: int32_t __f__AnonymousType0___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___GetHashCode (__f__AnonymousType0__value_j__TPar___index_j__TPar__o* __this, const MethodInfo_8FA8F0* method);
// 0x1808fa8f0

int32_t __f__AnonymousType0___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___GetHashCode
                  (__f__AnonymousType0__value_j__TPar___index_j__TPar__o *__this,MethodInfo_8FA8F0 *method)

{
  MethodInfo *pMVar1;
  Il2CppMethodPointer pIVar2;
  longlong lVar3;
  undefined8 uVar4;
  code *pcVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  void *pvVar10;
  undefined8 *destination;
  undefined8 *destination_00;
  ulonglong size;
  ulonglong size_00;
  int local_res10 [2];
  void *local_res18;
  void *local_res20;
  undefined8 auStack_70 [5];
  longlong alStack_48 [2];
  
  size = (ulonglong)(method->klass->rgctx_data->_1__value_j__TPar->_2).stack_slot_size;
  size_00 = (ulonglong)(method->klass->rgctx_data->_2__index_j__TPar->_2).stack_slot_size;
  uVar8 = size + 0xf;
  if (uVar8 <= size) {
    uVar8 = 0xffffffffffffff0;
  }
  auStack_70[0] = 0x1808fa95a;
  lVar6 = -(uVar8 & 0xfffffffffffffff0);
  uVar8 = size_00 + 0xf;
  destination = (undefined8 *)(&stack0xffffffffffffffc8 + lVar6);
  if (uVar8 <= size_00) {
    uVar8 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_70 + lVar6) = 0x1808fa977;
  lVar7 = -(uVar8 & 0xfffffffffffffff0);
  destination_00 = (undefined8 *)(&stack0xffffffffffffffc8 + lVar7 + lVar6);
  pMVar1 = method->klass->rgctx_data->
           _3_System_Collections_Generic_EqualityComparer__value_j__TPar__get_Default;
  pIVar2 = pMVar1->methodPointer;
  *(undefined8 *)((longlong)auStack_70 + lVar7 + lVar6) = 0x1808fa993;
  plVar9 = (longlong *)(*pIVar2)(pMVar1);
  pvVar10 = (method->klass->rgctx_data->_0___f__AnonymousType0__value_j__TPar___index_j__TPar_->_1).fields;
  *(undefined8 *)((longlong)auStack_70 + lVar7 + lVar6) = 0x1808fa9b3;
  pvVar10 = il2cpp_codegen_get_instance_field_data_pointer(__this,pvVar10);
  *(undefined8 *)((longlong)auStack_70 + lVar7 + lVar6) = 0x1808fa9c1;
  memcpy(destination,pvVar10,size);
  if (plVar9 != (longlong *)0x0) {
    if (-1 < (int)(method->klass->rgctx_data->_1__value_j__TPar->_1).byval_arg.bits) {
      destination = (undefined8 *)*destination;
    }
    lVar3 = *(longlong *)(*plVar9 + 0x1d0);
    *(int **)((longlong)alStack_48 + lVar7 + lVar6) = local_res10;
    uVar4 = *(undefined8 *)(lVar3 + 8);
    pcVar5 = *(code **)(lVar3 + 0x10);
    *(undefined8 *)((longlong)auStack_70 + lVar7 + lVar6) = 0x1808faa10;
    local_res18 = destination;
    (*pcVar5)(uVar4,lVar3,plVar9,&local_res18);
    pMVar1 = method->klass->rgctx_data->
             _7_System_Collections_Generic_EqualityComparer__index_j__TPar__get_Default;
    pIVar2 = pMVar1->methodPointer;
    *(undefined8 *)((longlong)auStack_70 + lVar7 + lVar6) = 0x1808faa24;
    plVar9 = (longlong *)(*pIVar2)(pMVar1);
    pvVar10 = (method->klass->rgctx_data->_0___f__AnonymousType0__value_j__TPar___index_j__TPar_->_1).fields;
    *(undefined8 *)((longlong)auStack_70 + lVar7 + lVar6) = 0x1808faa48;
    pvVar10 = il2cpp_codegen_get_instance_field_data_pointer(__this,(void *)((longlong)pvVar10 + 0x20));
    *(undefined8 *)((longlong)auStack_70 + lVar7 + lVar6) = 0x1808faa56;
    memcpy(destination_00,pvVar10,size_00);
    if (plVar9 != (longlong *)0x0) {
      if (-1 < (int)(method->klass->rgctx_data->_2__index_j__TPar->_1).byval_arg.bits) {
        destination_00 = (undefined8 *)*destination_00;
      }
      lVar3 = *(longlong *)(*plVar9 + 0x1d0);
      *(void ***)((longlong)alStack_48 + lVar7 + lVar6) = &local_res18;
      uVar4 = *(undefined8 *)(lVar3 + 8);
      pcVar5 = *(code **)(lVar3 + 0x10);
      *(undefined8 *)((longlong)auStack_70 + lVar7 + lVar6) = 0x1808faaa0;
      local_res20 = destination_00;
      (*pcVar5)(uVar4,lVar3,plVar9,&local_res20);
      return (int)local_res18 + local_res10[0] * -0x5aaaaad7 + 0x67eac8cf;
    }
  }
  *(undefined8 *)((longlong)auStack_70 + lVar7 + lVar6) = 0x1808faac9;
  ThrowNullReferenceException();
}


// <>f__AnonymousType0<object, int>$$ToString
// il2cpp: System_String_o* __f__AnonymousType0_object__int___ToString (__f__AnonymousType0__value_j__TPar___index_j__TPar__o* __this, const MethodInfo_8FB070* method);
// 0x1808fb070

System_String_o *
__f__AnonymousType0_object__int___ToString
          (__f__AnonymousType0__value_j__TPar___index_j__TPar__o *__this,MethodInfo_8FB070 *method)

{
  System_Object_array *args;
  Il2CppObject *pIVar1;
  Il2CppObject *pIVar2;
  System_String_o *obj;
  System_String_o *pSVar3;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_18433e15d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"{{ value = {0}, index = {1} }}");
    Il2CppMethodInitialized_18433e15d = '\x01';
  }
  local_res8[0] = 0;
  args = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
  pSVar3 = "{{ value = {0}, index = {1} }}";
  pIVar1 = (__this->fields)._value_i__Field;
  if (pIVar1 == (Il2CppObject *)0x0) {
    pIVar1 = (Il2CppObject *)0x0;
  }
  else {
    pIVar1 = (Il2CppObject *)(*pIVar1->klass->vtable[3].methodPtr)(pIVar1,pIVar1->klass->vtable[3].method);
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (pIVar1 != (Il2CppObject *)0x0) {
    pIVar2 = il2cpp_vm_Object_IsInst(pIVar1,(((args->obj).klass)->_1).element_class);
    if (pIVar2 == (Il2CppObject *)0x0) {
      pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
    }
  }
  if ((int)args->max_length != 0) {
    args->m_Items[0] = pIVar1;
    Il2CppCodeGenWriteBarrier(args->m_Items,pIVar1);
    local_res8[0] = *(int32_t *)&(__this->fields)._index_i__Field;
    obj = System_Int32__ToString(local_res8,(MethodInfo *)method->klass->rgctx_data[1]._1__value_j__TPar);
    if (obj != (System_String_o *)0x0) {
      pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((args->obj).klass)->_1).element_class);
      if (pIVar1 == (Il2CppObject *)0x0) {
        pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
      }
    }
    if (1 < (uint)args->max_length) {
      args->m_Items[1] = (Il2CppObject *)obj;
      Il2CppCodeGenWriteBarrier(args->m_Items + 1,obj);
      pSVar3 = System_String__Format_196cba0((System_IFormatProvider_o *)0x0,pSVar3,args,(MethodInfo *)0x0);
      return pSVar3;
    }
  }
  ThrowIndexOutOfRangeException();
}


// <>f__AnonymousType0<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$ToString
// il2cpp: System_String_o* __f__AnonymousType0___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___ToString (__f__AnonymousType0__value_j__TPar___index_j__TPar__o* __this, const MethodInfo_8FAAD0* method);
// 0x1808faad0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1808faff1: jmp 0x1808faffc

System_String_o *
__f__AnonymousType0___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___ToString
          (__f__AnonymousType0__value_j__TPar___index_j__TPar__o *__this,MethodInfo_8FAAD0 *method)

{
  undefined1 *destination;
  undefined1 *destination_00;
  Il2CppClass *pIVar1;
  __f__AnonymousType0__value_j__TPar___index_j__TPar__RGCTXs *p_Var2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 uVar15;
  char cVar16;
  uint uVar17;
  Il2CppClass *pIVar18;
  ulonglong uVar19;
  System_Object_array *args;
  void *pvVar20;
  Il2CppObject *pIVar21;
  Il2CppObject *pIVar22;
  System_String_o *pSVar23;
  ulonglong size;
  ulonglong size_00;
  System_String_o *local_res10;
  Il2CppClass *local_res18;
  Il2CppObject *local_res20;
  undefined8 auStack_b0 [5];
  longlong alStack_88 [2];
  undefined1 local_78 [56];
  
  if (g_data_18433e15e == '\0') {
    auStack_b0[0] = 0x1808fab02;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    auStack_b0[0] = 0x1808fab0e;
    il2cpp_codegen_initialize_runtime_metadata(&"{{ value = {0}, index = {1} }}");
    g_data_18433e15e = '\x01';
  }
  size = (ulonglong)(method->klass->rgctx_data->_1__value_j__TPar->_2).stack_slot_size;
  size_00 = (ulonglong)(method->klass->rgctx_data->_2__index_j__TPar->_2).stack_slot_size;
  pIVar18 = method->klass->rgctx_data->_1__value_j__TPar;
  if (((pIVar18->_2).bitflags1 & 1) == 0) {
    auStack_b0[0] = 0x1808fab60;
    pIVar18 = il2cpp_codegen_class_init_checked(pIVar18);
  }
  uVar17 = (pIVar18->_2).stack_slot_size + 0x10;
  uVar19 = (ulonglong)uVar17 + 0xf;
  if (uVar19 <= uVar17) {
    uVar19 = 0xffffffffffffff0;
  }
  auStack_b0[0] = 0x1808fab8a;
  lVar3 = -(uVar19 & 0xfffffffffffffff0);
  local_78._0_8_ = (longlong)local_78 + lVar3;
  pIVar18 = method->klass->rgctx_data->_2__index_j__TPar;
  if (((pIVar18->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)((longlong)auStack_b0 + lVar3) = 0x1808fabb6;
    pIVar18 = il2cpp_codegen_class_init_checked(pIVar18);
  }
  uVar17 = (pIVar18->_2).stack_slot_size + 0x10;
  uVar19 = (ulonglong)uVar17 + 0xf;
  if (uVar19 <= uVar17) {
    uVar19 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_b0 + lVar3) = 0x1808fabd6;
  lVar4 = -(uVar19 & 0xfffffffffffffff0);
  uVar19 = size + 0xf;
  local_78._32_8_ = local_78 + lVar4 + lVar3;
  if (uVar19 <= size) {
    uVar19 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_b0 + lVar4 + lVar3) = 0x1808fabfa;
  lVar5 = -(uVar19 & 0xfffffffffffffff0);
  uVar19 = size + 0xf;
  if (uVar19 <= size) {
    uVar19 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_b0 + lVar5 + lVar4 + lVar3) = 0x1808fac21;
  lVar6 = -(uVar19 & 0xfffffffffffffff0);
  uVar19 = size_00 + 0xf;
  local_res18 = (Il2CppClass *)(local_78 + lVar6 + lVar5 + lVar4 + lVar3);
  if (uVar19 <= size_00) {
    uVar19 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_b0 + lVar6 + lVar5 + lVar4 + lVar3) = 0x1808fac48;
  lVar7 = -(uVar19 & 0xfffffffffffffff0);
  uVar19 = size_00 + 0xf;
  local_78._16_8_ = local_78 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3;
  if (uVar19 <= size_00) {
    uVar19 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_b0 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) = 0x1808fac6c;
  lVar8 = -(uVar19 & 0xfffffffffffffff0);
  uVar19 = size + 0xf;
  local_78._24_8_ = local_78 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3;
  if (uVar19 <= size) {
    uVar19 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_b0 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) = 0x1808fac90;
  lVar9 = -(uVar19 & 0xfffffffffffffff0);
  destination = local_78 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3;
  *(undefined8 *)((longlong)auStack_b0 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) = 0x1808faca5;
  il2cpp_runtime_helper_180522500(destination,0,size);
  uVar19 = size_00 + 0xf;
  if (uVar19 <= size_00) {
    uVar19 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_b0 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) = 0x1808facbd;
  lVar10 = -(uVar19 & 0xfffffffffffffff0);
  destination_00 = local_78 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3;
  *(undefined8 *)((longlong)auStack_b0 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) =
       0x1808facd2;
  il2cpp_runtime_helper_180522500(destination_00,0,size_00);
  uVar19 = size + 0xf;
  if (uVar19 <= size) {
    uVar19 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_b0 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) =
       0x1808facea;
  lVar11 = -(uVar19 & 0xfffffffffffffff0);
  local_res20 = (Il2CppObject *)
                (local_78 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3);
  *(undefined8 *)
   ((longlong)auStack_b0 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) =
       0x1808fad06;
  il2cpp_runtime_helper_180522500(local_res20,0,size);
  uVar19 = size + 0xf;
  if (uVar19 <= size) {
    uVar19 = 0xffffffffffffff0;
  }
  *(undefined8 *)
   ((longlong)auStack_b0 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) =
       0x1808fad1e;
  lVar12 = -(uVar19 & 0xfffffffffffffff0);
  local_78._8_8_ = local_78 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3
  ;
  *(undefined8 *)
   ((longlong)auStack_b0 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) =
       0x1808fad37;
  il2cpp_runtime_helper_180522500(local_78 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3,0,
                size);
  uVar19 = size_00 + 0xf;
  if (uVar19 <= size_00) {
    uVar19 = 0xffffffffffffff0;
  }
  *(undefined8 *)
   ((longlong)auStack_b0 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) =
       0x1808fad4f;
  lVar13 = -(uVar19 & 0xfffffffffffffff0);
  *(undefined8 *)
   ((longlong)auStack_b0 +
   lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) = 0x1808fad64;
  il2cpp_runtime_helper_180522500(local_78 +
                lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3,0,
                size_00);
  uVar19 = size_00 + 0xf;
  if (uVar19 <= size_00) {
    uVar19 = 0xffffffffffffff0;
  }
  *(undefined8 *)
   ((longlong)auStack_b0 +
   lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) = 0x1808fad7c;
  lVar14 = -(uVar19 & 0xfffffffffffffff0);
  local_78._40_8_ =
       local_78 +
       lVar14 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3;
  *(undefined8 *)
   ((longlong)auStack_b0 +
   lVar14 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) =
       0x1808fad95;
  il2cpp_runtime_helper_180522500(local_78 +
                lVar14 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + 
                                                       lVar3,0,size_00);
  *(undefined8 *)
   ((longlong)auStack_b0 +
   lVar14 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) =
       0x1808fada6;
  args = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
  pvVar20 = (method->klass->rgctx_data->_0___f__AnonymousType0__value_j__TPar___index_j__TPar_->_1).fields;
  *(undefined8 *)
   ((longlong)auStack_b0 +
   lVar14 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) =
       0x1808fadca;
  pvVar20 = il2cpp_codegen_get_instance_field_data_pointer(__this,pvVar20);
  *(undefined8 *)
   ((longlong)auStack_b0 +
   lVar14 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) =
       0x1808faddc;
  memcpy(local_78 + lVar5 + lVar4 + lVar3,pvVar20,size);
  *(undefined8 *)
   ((longlong)auStack_b0 +
   lVar14 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) =
       0x1808fadee;
  memcpy(destination,local_78 + lVar5 + lVar4 + lVar3,size);
  *(undefined8 *)
   ((longlong)auStack_b0 +
   lVar14 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) =
       0x1808fae00;
  memcpy(local_res18,destination,size);
  pIVar18 = method->klass->rgctx_data->_1__value_j__TPar;
  *(undefined8 *)
   ((longlong)auStack_b0 +
   lVar14 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) =
       0x1808fae1b;
  cVar16 = il2cpp_runtime_helper_1804172f0(pIVar18,local_res18);
  uVar15 = local_78._8_8_;
  if (cVar16 == '\0') {
    *(undefined8 *)
     ((longlong)auStack_b0 +
     lVar14 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) =
         0x1808faeb7;
    memcpy((void *)uVar15,destination,size);
    pIVar22 = (Il2CppObject *)0x0;
    local_res10 = "{{ value = {0}, index = {1} }}";
  }
  else {
    *(undefined8 *)
     ((longlong)auStack_b0 +
     lVar14 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) =
         0x1808fae38;
    memcpy(local_res20,destination,size);
    local_res10 = "{{ value = {0}, index = {1} }}";
    local_res18 = method->klass->rgctx_data[1]._0___f__AnonymousType0__value_j__TPar___index_j__TPar_;
    pIVar18 = method->klass->rgctx_data->_1__value_j__TPar;
    if (((pIVar18->_2).bitflags1 & 1) == 0) {
      *(undefined8 *)
       ((longlong)auStack_b0 +
       lVar14 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) =
           0x1808fae7c;
      pIVar18 = il2cpp_codegen_class_init_checked(pIVar18);
    }
    uVar15 = local_78._0_8_;
    *(Il2CppObject ***)
     ((longlong)alStack_88 +
     lVar14 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + 8) =
         &local_res20;
    *(undefined8 *)
     ((longlong)alStack_88 +
     lVar14 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) = 0;
    *(undefined8 *)
     ((longlong)auStack_b0 +
     lVar14 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) =
         0x1808faea5;
    il2cpp_runtime_helper_1804171d0(pIVar18,local_res18,uVar15);
    pIVar22 = local_res20;
  }
  pIVar18 = (Il2CppClass *)0x0;
  if (args == (System_Object_array *)0x0) {
    *(undefined8 *)
     ((longlong)auStack_b0 +
     lVar14 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) =
         0x1808fb03c;
    ThrowNullReferenceException();
  }
  if (pIVar22 != (Il2CppObject *)0x0) {
    pIVar1 = (((args->obj).klass)->_1).element_class;
    *(undefined8 *)
     ((longlong)auStack_b0 +
     lVar14 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) =
         0x1808faee7;
    pIVar21 = il2cpp_vm_Object_IsInst(pIVar22,pIVar1);
    if (pIVar21 == (Il2CppObject *)0x0) {
      *(undefined8 *)
       ((longlong)auStack_b0 +
       lVar14 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) =
           0x1808fb042;
      pIVar22 = il2cpp_codegen_get_array_type_mismatch_exception();
      *(undefined8 *)
       ((longlong)auStack_b0 +
       lVar14 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) =
           0x1808fb04c;
      il2cpp_codegen_raise_exception(pIVar22,(MethodInfo *)0x0);
    }
  }
  if ((int)args->max_length != 0) {
    args->m_Items[0] = pIVar22;
    *(undefined8 *)
     ((longlong)auStack_b0 +
     lVar14 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) =
         0x1808faf0a;
    Il2CppCodeGenWriteBarrier(args->m_Items,pIVar22);
    pvVar20 = (method->klass->rgctx_data->_0___f__AnonymousType0__value_j__TPar___index_j__TPar_->_1).fields;
    *(undefined8 *)
     ((longlong)auStack_b0 +
     lVar14 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) =
         0x1808faf2f;
    pvVar20 = il2cpp_codegen_get_instance_field_data_pointer(__this,(void *)((longlong)pvVar20 + 0x20));
    uVar15 = local_78._16_8_;
    *(undefined8 *)
     ((longlong)auStack_b0 +
     lVar14 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) =
         0x1808faf41;
    memcpy((void *)uVar15,pvVar20,size_00);
    *(undefined8 *)
     ((longlong)auStack_b0 +
     lVar14 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) =
         0x1808faf4f;
    memcpy(destination_00,(void *)uVar15,size_00);
    uVar15 = local_78._24_8_;
    *(undefined8 *)
     ((longlong)auStack_b0 +
     lVar14 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) =
         0x1808faf61;
    memcpy((void *)uVar15,destination_00,size_00);
    pIVar1 = method->klass->rgctx_data->_2__index_j__TPar;
    *(undefined8 *)
     ((longlong)auStack_b0 +
     lVar14 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) =
         0x1808faf78;
    cVar16 = il2cpp_runtime_helper_1804172f0(pIVar1,uVar15);
    uVar15 = local_78._40_8_;
    if (cVar16 == '\0') {
      *(undefined8 *)
       ((longlong)auStack_b0 +
       lVar14 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) =
           0x1808faffc;
      memcpy((void *)uVar15,destination_00,size_00);
    }
    else {
      *(undefined8 *)
       ((longlong)auStack_b0 +
       lVar14 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) =
           0x1808faf8a;
      memcpy(local_78 +
             lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3,
             destination_00,size_00);
      p_Var2 = method->klass->rgctx_data;
      pIVar18 = p_Var2->_2__index_j__TPar;
      pIVar1 = p_Var2[1]._1__value_j__TPar;
      if (((pIVar18->_2).bitflags1 & 1) == 0) {
        *(undefined8 *)
         ((longlong)auStack_b0 +
         lVar14 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) =
             0x1808fafae;
        pIVar18 = il2cpp_codegen_class_init_checked(pIVar18);
      }
      uVar15 = local_78._32_8_;
      *(Il2CppClass ***)
       ((longlong)alStack_88 +
       lVar14 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + 8)
           = &local_res18;
      *(undefined8 *)
       ((longlong)alStack_88 +
       lVar14 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) = 0
      ;
      *(undefined8 *)
       ((longlong)auStack_b0 +
       lVar14 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) =
           0x1808fafd1;
      il2cpp_runtime_helper_1804171d0(pIVar18,pIVar1,uVar15);
      pIVar18 = local_res18;
      if (local_res18 != (Il2CppClass *)0x0) {
        pIVar1 = (((args->obj).klass)->_1).element_class;
        *(undefined8 *)
         ((longlong)auStack_b0 +
         lVar14 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) =
             0x1808fafec;
        pIVar22 = il2cpp_vm_Object_IsInst((Il2CppObject *)local_res18,pIVar1);
        if (pIVar22 == (Il2CppObject *)0x0) {
          *(undefined8 *)
           ((longlong)auStack_b0 +
           lVar14 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3)
               = 0x1808fb052;
          pIVar22 = il2cpp_codegen_get_array_type_mismatch_exception();
          *(undefined8 *)
           ((longlong)auStack_b0 +
           lVar14 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3)
               = 0x1808fb05c;
          il2cpp_codegen_raise_exception(pIVar22,(MethodInfo *)0x0);
        }
      }
    }
    if (1 < (uint)args->max_length) {
      args->m_Items[1] = (Il2CppObject *)pIVar18;
      *(undefined8 *)
       ((longlong)auStack_b0 +
       lVar14 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) =
           0x1808fb012;
      Il2CppCodeGenWriteBarrier(args->m_Items + 1,pIVar18);
      *(undefined8 *)
       ((longlong)auStack_b0 +
       lVar14 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) =
           0x1808fb026;
      pSVar23 = System_String__Format_196cba0
                          ((System_IFormatProvider_o *)0x0,local_res10,args,(MethodInfo *)0x0);
      return pSVar23;
    }
  }
  *(undefined8 *)
   ((longlong)auStack_b0 +
   lVar14 + lVar13 + lVar12 + lVar11 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3) =
       0x1808fb062;
  ThrowIndexOutOfRangeException();
}


