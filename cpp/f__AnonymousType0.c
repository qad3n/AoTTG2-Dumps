// Type: f__AnonymousType0
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// Prior real C# source: none
// --------------------------------

// <>f__AnonymousType0<object, int>$$get_value
// il2cpp: Il2CppObject* __f__AnonymousType0_object__int___get_value (__f__AnonymousType0__value_j__TPar___index_j__TPar__o* __this, const MethodInfo_38A7E60* method);
// 0x39a7e60

Il2CppObject *
__f__AnonymousType0_object__int___get_value
          (__f__AnonymousType0__value_j__TPar___index_j__TPar__o *__this,MethodInfo_38A7E60 *method)

{
  return (__this->fields)._value_i__Field;
}


// <>f__AnonymousType0<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$get_value
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o __f__AnonymousType0___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_value (__f__AnonymousType0__value_j__TPar___index_j__TPar__o* __this, const MethodInfo_38A81B0* method);
// 0x39a81b0

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
__f__AnonymousType0___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_value
          (__f__AnonymousType0__value_j__TPar___index_j__TPar__o *__this,MethodInfo_38A81B0 *method)

{
  uint uVar1;
  long *plVar2;
  void *__src;
  long in_RDX;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o UVar3;
  
  plVar2 = *(long **)(*(long *)(in_RDX + 0x20) + 0xc0);
  uVar1 = *(uint *)(plVar2[1] + 0xfc);
  __src = il2cpp_codegen_get_instance_field_data_pointer(__this,*(void **)(*plVar2 + 0x80));
  UVar3.klass = memmove(method,__src,(ulong)uVar1);
  UVar3.monitor = UVar3.monitor;
  return UVar3;
}


// <>f__AnonymousType0<object, int>$$get_index
// il2cpp: int32_t __f__AnonymousType0_object__int___get_index (__f__AnonymousType0__value_j__TPar___index_j__TPar__o* __this, const MethodInfo_38A7E70* method);
// 0x39a7e70

int32_t __f__AnonymousType0_object__int___get_index
                  (__f__AnonymousType0__value_j__TPar___index_j__TPar__o *__this,MethodInfo_38A7E70 *method)

{
  return *(int32_t *)&(__this->fields)._index_i__Field;
}


// <>f__AnonymousType0<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$get_index
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o __f__AnonymousType0___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_index (__f__AnonymousType0__value_j__TPar___index_j__TPar__o* __this, const MethodInfo_38A81F0* method);
// 0x39a81f0

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
__f__AnonymousType0___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_index
          (__f__AnonymousType0__value_j__TPar___index_j__TPar__o *__this,MethodInfo_38A81F0 *method)

{
  uint uVar1;
  long *plVar2;
  void *__src;
  long in_RDX;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o UVar3;
  
  plVar2 = *(long **)(*(long *)(in_RDX + 0x20) + 0xc0);
  uVar1 = *(uint *)(plVar2[2] + 0xfc);
  __src = il2cpp_codegen_get_instance_field_data_pointer(__this,(void *)(*(long *)(*plVar2 + 0x80) + 0x20));
  UVar3.klass = memmove(method,__src,(ulong)uVar1);
  UVar3.monitor = UVar3.monitor;
  return UVar3;
}


// <>f__AnonymousType0<object, int>$$.ctor
// il2cpp: void __f__AnonymousType0_object__int____ctor (__f__AnonymousType0__value_j__TPar___index_j__TPar__o* __this, Il2CppObject* value, int32_t index, const MethodInfo_38A7E80* method);
// 0x39a7e80

void __f__AnonymousType0_object__int____ctor
               (__f__AnonymousType0__value_j__TPar___index_j__TPar__o *__this,Il2CppObject *value,
               int32_t index,MethodInfo_38A7E80 *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._value_i__Field = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._value_i__Field);
  *(int32_t *)&(__this->fields)._index_i__Field = index;
  return;
}


// <>f__AnonymousType0<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$.ctor
// il2cpp: void __f__AnonymousType0___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor (__f__AnonymousType0__value_j__TPar___index_j__TPar__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o index, const MethodInfo_38A8240* method);
// 0x39a8240

void __f__AnonymousType0___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
               (__f__AnonymousType0__value_j__TPar___index_j__TPar__o *__this,
               Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value,
               Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o index,MethodInfo_38A8240 *method)

{
  uint size;
  long lVar1;
  void *pvVar2;
  char *__n;
  __f__AnonymousType0__value_j__TPar___index_j__TPar__o *instance;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *pUVar3;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *__src;
  char *****__src_00;
  undefined1 *__dest;
  undefined1 *__dest_00;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *local_60;
  char *****local_58;
  char *****local_50;
  char *local_48;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *local_40;
  __f__AnonymousType0__value_j__TPar___index_j__TPar__o *local_38;
  
  pUVar3 = index.klass;
  local_58 = value.monitor;
  local_60 = value.klass;
  lVar1 = *(long *)((long)(pUVar3->_1).byval_arg.data + 0xc0);
  size = *(uint *)(*(long *)(lVar1 + 8) + 0xfc);
  local_48 = (char *)(ulong)*(uint *)(*(long *)(lVar1 + 0x10) + 0xfc);
  __dest = auStack_68 + -((ulong)size + 0xf & 0xfffffffffffffff0);
  __dest_00 = __dest + -((ulong)(local_48 + 0xf) & 0xfffffffffffffff0);
  local_50 = local_58;
  local_40 = local_60;
  local_38 = __this;
  *(undefined8 *)(__dest_00 + -8) = 0x39a82b5;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  pvVar2 = (pUVar3->_1).byval_arg.data;
  __src = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&local_60;
  if (*(int *)(*(long *)(*(long *)((long)pvVar2 + 0xc0) + 8) + 0x28) < 0) {
    __src = local_40;
  }
  *(undefined8 *)(__dest_00 + -8) = 0x39a82dc;
  memcpy(__dest,__src,(ulong)size);
  instance = local_38;
  pvVar2 = *(void **)(**(long **)((long)pvVar2 + 0xc0) + 0x80);
  *(undefined8 *)(__dest_00 + -8) = 0x39a82ff;
  il2cpp_codegen_write_instance_field_data(instance,pvVar2,__dest,size);
  __n = local_48;
  pvVar2 = (pUVar3->_1).byval_arg.data;
  __src_00 = (char *****)&local_58;
  if (*(int *)(*(long *)(*(long *)((long)pvVar2 + 0xc0) + 0x10) + 0x28) < 0) {
    __src_00 = local_50;
  }
  *(undefined8 *)(__dest_00 + -8) = 0x39a832a;
  memcpy(__dest_00,__src_00,(size_t)__n);
  lVar1 = *(long *)(**(long **)((long)pvVar2 + 0xc0) + 0x80);
  *(undefined8 *)(__dest_00 + -8) = 0x39a834c;
  il2cpp_codegen_write_instance_field_data(instance,(void *)(lVar1 + 0x20),__dest_00,(int32_t)__n);
  return;
}


// <>f__AnonymousType0<object, int>$$Equals
// il2cpp: bool __f__AnonymousType0_object__int___Equals (__f__AnonymousType0__value_j__TPar___index_j__TPar__o* __this, Il2CppObject* value, const MethodInfo_38A7EB0* method);
// 0x39a7eb0

bool __f__AnonymousType0_object__int___Equals
               (__f__AnonymousType0__value_j__TPar___index_j__TPar__o *__this,Il2CppObject *value,
               MethodInfo_38A7EB0 *method)

{
  code *vtableDispatch;
  char cVar1;
  undefined1 uVar2;
  Il2CppClass *klass;
  long *plVar3;
  __f__AnonymousType0__value_j__TPar___index_j__TPar__o *p_Var4;
  bool bVar5;
  
  klass = method->klass->rgctx_data->_0___f__AnonymousType0__value_j__TPar___index_j__TPar_;
  if (((klass->_2).bitflags1 & 1) == 0) {
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  if (value == (Il2CppObject *)0x0) {
    bVar5 = __this == (__f__AnonymousType0__value_j__TPar___index_j__TPar__o *)0x0;
  }
  else {
    p_Var4 = (__f__AnonymousType0__value_j__TPar___index_j__TPar__o *)0x0;
    if (value->klass == klass) {
      p_Var4 = (__f__AnonymousType0__value_j__TPar___index_j__TPar__o *)value;
    }
    if (p_Var4 == __this) {
      bVar5 = true;
    }
    else {
      if (p_Var4 != (__f__AnonymousType0__value_j__TPar___index_j__TPar__o *)0x0) {
        plVar3 = (long *)il2cpp_runtime_helper_034b7dd0(method->klass->rgctx_data->
                                      _3_System_Collections_Generic_EqualityComparer__value_j__TPar__get_Default
                                     );
        if (plVar3 == (long *)0x0) {
label_039a7f9c:
          ThrowNullReferenceException();
        }
        cVar1 = (**(code **)(*plVar3 + 0x1b8))
                          (plVar3,(__this->fields)._value_i__Field,(p_Var4->fields)._value_i__Field,
                           *(undefined8 *)(*plVar3 + 0x1c0));
        if (cVar1 != '\0') {
          plVar3 = (long *)il2cpp_runtime_helper_034b6780(method->klass->rgctx_data->
                                        _7_System_Collections_Generic_EqualityComparer__index_j__TPar__get_Default
                                       );
          if (plVar3 != (long *)0x0) {
            vtableDispatch = *(code **)(*plVar3 + 0x1b8);
            uVar2 = (*vtableDispatch)
                              (plVar3,*(undefined4 *)&(__this->fields)._index_i__Field,
                               *(undefined4 *)&(p_Var4->fields)._index_i__Field,
                               *(undefined8 *)(*plVar3 + 0x1c0),vtableDispatch);
            return (bool)uVar2;
          }
          goto label_039a7f9c;
        }
      }
      bVar5 = false;
    }
  }
  return bVar5;
}


// <>f__AnonymousType0<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$Equals
// il2cpp: bool __f__AnonymousType0___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Equals (__f__AnonymousType0__value_j__TPar___index_j__TPar__o* __this, Il2CppObject* value, const MethodInfo_38A8360* method);
// 0x39a8360

bool __f__AnonymousType0___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Equals
               (__f__AnonymousType0__value_j__TPar___index_j__TPar__o *__this,Il2CppObject *value,
               MethodInfo_38A8360 *method)

{
  __f__AnonymousType0__value_j__TPar___index_j__TPar__RGCTXs *p_Var1;
  Il2CppMethodPointer pIVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  MethodInfo_38A8360 *pMVar6;
  __f__AnonymousType0__value_j__TPar___index_j__TPar__o *instance;
  Il2CppClass *klass;
  void *pvVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *__dest;
  __f__AnonymousType0__value_j__TPar___index_j__TPar__o *instance_00;
  bool bVar14;
  MethodInfo_38A8360 *apMStack_90 [2];
  ulong local_80;
  undefined8 *local_78;
  ulong local_70;
  long *local_68;
  __f__AnonymousType0__value_j__TPar___index_j__TPar__o *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_40;
  char local_31;
  
  p_Var1 = method->klass->rgctx_data;
  local_80 = (ulong)(p_Var1->_1__value_j__TPar->_2).stack_slot_size;
  uVar13 = (ulong)(p_Var1->_2__index_j__TPar->_2).stack_slot_size;
  uVar9 = local_80 + 0xf & 0xfffffffffffffff0;
  local_40 = (undefined8 *)((long)apMStack_90 + (8 - uVar9));
  __dest = (undefined8 *)((long)local_40 - uVar9);
  uVar9 = uVar13 + 0xf & 0xfffffffffffffff0;
  puVar11 = (undefined8 *)((long)__dest - uVar9);
  puVar10 = (undefined8 *)((long)puVar11 - uVar9);
  klass = p_Var1->_0___f__AnonymousType0__value_j__TPar___index_j__TPar_;
  puVar12 = local_40;
  apMStack_90[1] = method;
  local_78 = puVar10;
  if (((klass->_2).bitflags1 & 1) == 0) {
    puVar10[-1] = 0x39a83f5;
    klass = il2cpp_codegen_class_init_checked(klass);
    puVar12 = local_40;
  }
  pMVar6 = apMStack_90[1];
  if (value == (Il2CppObject *)0x0) {
    bVar14 = __this == (__f__AnonymousType0__value_j__TPar___index_j__TPar__o *)0x0;
  }
  else {
    instance_00 = (__f__AnonymousType0__value_j__TPar___index_j__TPar__o *)0x0;
    if (value->klass == klass) {
      instance_00 = (__f__AnonymousType0__value_j__TPar___index_j__TPar__o *)value;
    }
    if (instance_00 == __this) {
      bVar14 = true;
    }
    else {
      if (instance_00 != (__f__AnonymousType0__value_j__TPar___index_j__TPar__o *)0x0) {
        pIVar2 = apMStack_90[1]->klass->rgctx_data->
                 _3_System_Collections_Generic_EqualityComparer__value_j__TPar__get_Default->methodPointer;
        local_70 = uVar13;
        local_40 = puVar11;
        puVar10[-1] = 0x39a8449;
        local_68 = (long *)(*pIVar2)();
        pvVar7 = (pMVar6->klass->rgctx_data->_0___f__AnonymousType0__value_j__TPar___index_j__TPar_->_1).
                 fields;
        local_60 = __this;
        puVar10[-1] = 0x39a846f;
        pvVar7 = il2cpp_codegen_get_instance_field_data_pointer(__this,pvVar7);
        uVar9 = local_80;
        puVar10[-1] = 0x39a8481;
        memcpy(puVar12,pvVar7,uVar9);
        pvVar7 = (pMVar6->klass->rgctx_data->_0___f__AnonymousType0__value_j__TPar___index_j__TPar_->_1).
                 fields;
        puVar10[-1] = 0x39a849f;
        pvVar7 = il2cpp_codegen_get_instance_field_data_pointer(instance_00,pvVar7);
        puVar10[-1] = 0x39a84ad;
        memcpy(__dest,pvVar7,uVar9);
        plVar8 = local_68;
        if (local_68 == (long *)0x0) {
label_039a85f6:
          puVar10[-1] = 0x39a85fb;
          ThrowNullReferenceException();
        }
        if (-1 < (int)(pMVar6->klass->rgctx_data->_1__value_j__TPar->_1).byval_arg.bits) {
          puVar12 = (undefined8 *)*puVar12;
          __dest = (undefined8 *)*__dest;
        }
        lVar3 = *(long *)(*local_68 + 0x1c0);
        uVar4 = *(undefined8 *)(lVar3 + 8);
        pcVar5 = *(code **)(lVar3 + 0x10);
        local_58 = puVar12;
        local_50 = __dest;
        puVar10[-1] = 0x39a84f8;
        (*pcVar5)(uVar4,lVar3,plVar8,&local_58,&local_31);
        if (local_31 != '\0') {
          pIVar2 = pMVar6->klass->rgctx_data->
                   _7_System_Collections_Generic_EqualityComparer__index_j__TPar__get_Default->methodPointer;
          puVar10[-1] = 0x39a8514;
          plVar8 = (long *)(*pIVar2)();
          instance = local_60;
          pvVar7 = (pMVar6->klass->rgctx_data->_0___f__AnonymousType0__value_j__TPar___index_j__TPar_->_1).
                   fields;
          puVar10[-1] = 0x39a853a;
          pvVar7 = il2cpp_codegen_get_instance_field_data_pointer(instance,(void *)((long)pvVar7 + 0x20));
          puVar12 = local_40;
          uVar9 = local_70;
          puVar10[-1] = 0x39a854d;
          memcpy(puVar12,pvVar7,uVar9);
          pvVar7 = (pMVar6->klass->rgctx_data->_0___f__AnonymousType0__value_j__TPar___index_j__TPar_->_1).
                   fields;
          puVar10[-1] = 0x39a856f;
          pvVar7 = il2cpp_codegen_get_instance_field_data_pointer(instance_00,(void *)((long)pvVar7 + 0x20));
          puVar12 = local_78;
          puVar10[-1] = 0x39a8581;
          memcpy(puVar12,pvVar7,uVar9);
          if (plVar8 != (long *)0x0) {
            if ((int)(pMVar6->klass->rgctx_data->_2__index_j__TPar->_1).byval_arg.bits < 0) {
              local_58 = local_40;
            }
            else {
              puVar12 = (undefined8 *)*puVar12;
              local_58 = (undefined8 *)*local_40;
            }
            lVar3 = *(long *)(*plVar8 + 0x1c0);
            uVar4 = *(undefined8 *)(lVar3 + 8);
            pcVar5 = *(code **)(lVar3 + 0x10);
            local_50 = puVar12;
            puVar10[-1] = 0x39a85e0;
            (*pcVar5)(uVar4,lVar3,plVar8,&local_58,&local_31);
            return local_31 != '\0';
          }
          goto label_039a85f6;
        }
      }
      bVar14 = false;
    }
  }
  return bVar14;
}


// <>f__AnonymousType0<object, int>$$GetHashCode
// il2cpp: int32_t __f__AnonymousType0_object__int___GetHashCode (__f__AnonymousType0__value_j__TPar___index_j__TPar__o* __this, const MethodInfo_38A7FB0* method);
// 0x39a7fb0

int32_t __f__AnonymousType0_object__int___GetHashCode
                  (__f__AnonymousType0__value_j__TPar___index_j__TPar__o *__this,MethodInfo_38A7FB0 *method)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  
  plVar3 = (long *)il2cpp_runtime_helper_034b7dd0(method->klass->rgctx_data->
                                _3_System_Collections_Generic_EqualityComparer__value_j__TPar__get_Default);
  if (plVar3 != (long *)0x0) {
    iVar1 = (**(code **)(*plVar3 + 0x1c8))
                      (plVar3,(__this->fields)._value_i__Field,*(undefined8 *)(*plVar3 + 0x1d0));
    plVar3 = (long *)il2cpp_runtime_helper_034b6780(method->klass->rgctx_data->
                                  _7_System_Collections_Generic_EqualityComparer__index_j__TPar__get_Default);
    if (plVar3 != (long *)0x0) {
      iVar2 = (**(code **)(*plVar3 + 0x1c8))
                        (plVar3,*(undefined4 *)&(__this->fields)._index_i__Field,
                         *(undefined8 *)(*plVar3 + 0x1d0));
      return iVar2 + iVar1 * -0x5aaaaad7 + 0x67eac8cf;
    }
  }
  ThrowNullReferenceException();
}


// <>f__AnonymousType0<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$GetHashCode
// il2cpp: int32_t __f__AnonymousType0___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___GetHashCode (__f__AnonymousType0__value_j__TPar___index_j__TPar__o* __this, const MethodInfo_38A8600* method);
// 0x39a8600

int32_t __f__AnonymousType0___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___GetHashCode
                  (__f__AnonymousType0__value_j__TPar___index_j__TPar__o *__this,MethodInfo_38A8600 *method)

{
  __f__AnonymousType0__value_j__TPar___index_j__TPar__RGCTXs *p_Var1;
  Il2CppMethodPointer pIVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  ulong uVar6;
  __f__AnonymousType0__value_j__TPar___index_j__TPar__o *instance;
  int iVar7;
  long *plVar8;
  void *pvVar9;
  undefined8 *__dest;
  undefined8 *__dest_00;
  ulong auStack_60 [2];
  __f__AnonymousType0__value_j__TPar___index_j__TPar__o *local_50;
  ulong local_48;
  undefined8 *local_40;
  int local_34;
  
  p_Var1 = method->klass->rgctx_data;
  auStack_60[1] = (ulong)(p_Var1->_1__value_j__TPar->_2).stack_slot_size;
  local_48 = (ulong)(p_Var1->_2__index_j__TPar->_2).stack_slot_size;
  __dest = (undefined8 *)((long)auStack_60 + (8 - (auStack_60[1] + 0xf & 0xfffffffffffffff0)));
  __dest_00 = (undefined8 *)((long)__dest - (local_48 + 0xf & 0xfffffffffffffff0));
  pIVar2 = p_Var1->_3_System_Collections_Generic_EqualityComparer__value_j__TPar__get_Default->methodPointer;
  __dest_00[-1] = 0x39a8666;
  plVar8 = (long *)(*pIVar2)();
  pvVar9 = (method->klass->rgctx_data->_0___f__AnonymousType0__value_j__TPar___index_j__TPar_->_1).fields;
  local_50 = __this;
  __dest_00[-1] = 0x39a868a;
  pvVar9 = il2cpp_codegen_get_instance_field_data_pointer(__this,pvVar9);
  uVar6 = auStack_60[1];
  __dest_00[-1] = 0x39a8699;
  memcpy(__dest,pvVar9,uVar6);
  uVar6 = local_48;
  if (plVar8 != (long *)0x0) {
    if (-1 < (int)(method->klass->rgctx_data->_1__value_j__TPar->_1).byval_arg.bits) {
      __dest = (undefined8 *)*__dest;
    }
    lVar3 = *(long *)(*plVar8 + 0x1d0);
    uVar4 = *(undefined8 *)(lVar3 + 8);
    pcVar5 = *(code **)(lVar3 + 0x10);
    local_40 = __dest;
    __dest_00[-1] = 0x39a86de;
    (*pcVar5)(uVar4,lVar3,plVar8,&local_40,&local_34);
    iVar7 = local_34;
    pIVar2 = method->klass->rgctx_data->
             _7_System_Collections_Generic_EqualityComparer__index_j__TPar__get_Default->methodPointer;
    __dest_00[-1] = 0x39a86f3;
    plVar8 = (long *)(*pIVar2)();
    instance = local_50;
    pvVar9 = (method->klass->rgctx_data->_0___f__AnonymousType0__value_j__TPar___index_j__TPar_->_1).fields;
    __dest_00[-1] = 0x39a8718;
    pvVar9 = il2cpp_codegen_get_instance_field_data_pointer(instance,(void *)((long)pvVar9 + 0x20));
    __dest_00[-1] = 0x39a8726;
    memcpy(__dest_00,pvVar9,uVar6);
    if (plVar8 != (long *)0x0) {
      local_40 = __dest_00;
      if (-1 < (int)(method->klass->rgctx_data->_2__index_j__TPar->_1).byval_arg.bits) {
        local_40 = (undefined8 *)*__dest_00;
      }
      lVar3 = *(long *)(*plVar8 + 0x1d0);
      uVar4 = *(undefined8 *)(lVar3 + 8);
      pcVar5 = *(code **)(lVar3 + 0x10);
      __dest_00[-1] = 0x39a8764;
      (*pcVar5)(uVar4,lVar3,plVar8,&local_40,&local_34);
      return local_34 + iVar7 * -0x5aaaaad7 + 0x67eac8cf;
    }
  }
  __dest_00[-1] = 0x39a8789;
  ThrowNullReferenceException();
}


// <>f__AnonymousType0<object, int>$$ToString
// il2cpp: System_String_o* __f__AnonymousType0_object__int___ToString (__f__AnonymousType0__value_j__TPar___index_j__TPar__o* __this, const MethodInfo_38A8040* method);
// 0x39a8040
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x39a80de: jmp 0x39a8199

System_String_o *
__f__AnonymousType0_object__int___ToString
          (__f__AnonymousType0__value_j__TPar___index_j__TPar__o *__this,MethodInfo_38A8040 *method)

{
  int iVar1;
  undefined8 in_RAX;
  System_Object_array *args;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  System_String_o *obj;
  System_String_o *pSVar4;
  undefined8 uStack_38;
  
  uStack_38 = in_RAX;
  if (Il2CppMethodInitialized_0753ea2c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"{{ value = {0}, index = {1} }}");
    Il2CppMethodInitialized_0753ea2c = '\x01';
  }
  args = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
  pSVar4 = "{{ value = {0}, index = {1} }}";
  pIVar2 = (__this->fields)._value_i__Field;
  if (pIVar2 == (Il2CppObject *)0x0) {
    if (args == (System_Object_array *)0x0) goto label_039a8194;
    pIVar2 = (Il2CppObject *)0x0;
label_039a80ef:
    iVar1 = (int)args->max_length;
  }
  else {
    pIVar2 = (Il2CppObject *)(*pIVar2->klass->vtable[3].methodPtr)(pIVar2,pIVar2->klass->vtable[3].method);
    if (args == (System_Object_array *)0x0) {
label_039a8194:
      ThrowNullReferenceException();
    }
    if (pIVar2 != (Il2CppObject *)0x0) {
      pIVar3 = il2cpp_vm_Object_IsInst(pIVar2,(((args->obj).klass)->_1).element_class);
      if (pIVar3 == (Il2CppObject *)0x0) goto label_039a8199;
      goto label_039a80ef;
    }
    pIVar2 = (Il2CppObject *)0x0;
    iVar1 = (int)args->max_length;
  }
  if (iVar1 != 0) {
    args->m_Items[0] = pIVar2;
    Il2CppCodeGenWriteBarrier(args->m_Items);
    uStack_38 = CONCAT44(*(undefined4 *)&(__this->fields)._index_i__Field,(undefined4)uStack_38);
    obj = System_Int32__ToString
                    ((int32_t *)((long)&uStack_38 + 4),
                     (MethodInfo *)method->klass->rgctx_data[1]._1__value_j__TPar);
    if ((obj != (System_String_o *)0x0) &&
       (pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((args->obj).klass)->_1).element_class),
       pIVar2 == (Il2CppObject *)0x0)) {
label_039a8199:
      pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
    }
    if ((args->max_length & 0xfffffffe) != 0) {
      args->m_Items[1] = (Il2CppObject *)obj;
      Il2CppCodeGenWriteBarrier(args->m_Items + 1);
      pSVar4 = System_String__Format_5302eb0((System_IFormatProvider_o *)0x0,pSVar4,args,(MethodInfo *)0x0);
      return pSVar4;
    }
  }
  ThrowIndexOutOfRangeException();
}


// <>f__AnonymousType0<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$ToString
// il2cpp: System_String_o* __f__AnonymousType0___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___ToString (__f__AnonymousType0__value_j__TPar___index_j__TPar__o* __this, const MethodInfo_38A8790* method);
// 0x39a8790
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x39a89ed: jmp 0x39a8b95
// asm:   0x39a89f2: mov rbx, r14

System_String_o *
__f__AnonymousType0___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___ToString
          (__f__AnonymousType0__value_j__TPar___index_j__TPar__o *__this,MethodInfo_38A8790 *method)

{
  int iVar1;
  long lVar2;
  size_t sVar3;
  MethodInfo_38A8790 *pMVar4;
  __f__AnonymousType0__value_j__TPar___index_j__TPar__o *p_Var5;
  System_Object_array *args;
  char cVar6;
  Il2CppClass *pIVar7;
  Il2CppClass *pIVar8;
  void *pvVar9;
  Il2CppObject *pIVar10;
  __f__AnonymousType0__value_j__TPar___index_j__TPar__RGCTXs *p_Var11;
  Il2CppObject *pIVar12;
  System_String_o *pSVar13;
  uint uVar14;
  ulong uVar15;
  undefined1 *puVar16;
  void *pvVar17;
  void *__s;
  void *__dest;
  ulong uVar18;
  ulong __n;
  ulong uVar19;
  undefined8 uStack_a0;
  MethodInfo_38A8790 *local_98;
  size_t local_90;
  void *local_88;
  undefined1 *local_80;
  void *local_78;
  long local_70;
  __f__AnonymousType0__value_j__TPar___index_j__TPar__o *local_68;
  System_Object_array *local_60;
  void *local_58;
  Il2CppObject *local_50;
  size_t local_48;
  void *local_40;
  System_String_o *local_38;
  
  local_68 = __this;
  if (g_data_0753ea2d == '\0') {
    uStack_a0 = 0x39a87bd;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    uStack_a0 = 0x39a87c9;
    il2cpp_codegen_initialize_runtime_metadata(&"{{ value = {0}, index = {1} }}");
    g_data_0753ea2d = '\x01';
  }
  p_Var11 = method->klass->rgctx_data;
  pIVar7 = p_Var11->_1__value_j__TPar;
  pIVar8 = p_Var11->_2__index_j__TPar;
  uVar14 = (pIVar7->_2).stack_slot_size;
  uVar19 = (ulong)uVar14;
  __n = (ulong)(pIVar8->_2).stack_slot_size;
  if (((pIVar7->_2).bitflags1 & 1) == 0) {
    uStack_a0 = 0x39a8802;
    pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
    uVar14 = (pIVar7->_2).stack_slot_size;
    pIVar8 = method->klass->rgctx_data->_2__index_j__TPar;
  }
  lVar2 = -((ulong)(uVar14 + 0x10) + 0xf & 0xfffffffffffffff0);
  puVar16 = (undefined1 *)((long)&local_98 + lVar2);
  local_98 = method;
  local_80 = puVar16;
  if (((pIVar8->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)((long)&uStack_a0 + lVar2) = 0x39a8847;
    pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
    puVar16 = (undefined1 *)((long)&local_98 + lVar2);
  }
  local_70 = (long)puVar16 - ((ulong)((pIVar8->_2).stack_slot_size + 0x10) + 0xf & 0xfffffffffffffff0);
  uVar15 = uVar19 + 0xf & 0xfffffffffffffff0;
  local_38 = (System_String_o *)(local_70 - uVar15);
  uVar18 = __n + 0xf & 0xfffffffffffffff0;
  local_88 = (void *)((long)local_38 - uVar18);
  __dest = (void *)((long)local_88 - uVar15);
  pvVar17 = (void *)((long)__dest - uVar18);
  local_90 = uVar19;
  local_40 = pvVar17;
  *(undefined8 *)((long)pvVar17 + -8) = 0x39a88b6;
  memset(pvVar17,0,__n);
  sVar3 = local_90;
  pvVar17 = (void *)((long)pvVar17 - uVar15);
  *(undefined8 *)((long)pvVar17 + -8) = 0x39a88d3;
  memset(pvVar17,0,sVar3);
  __s = (void *)((long)pvVar17 - uVar18);
  local_58 = __s;
  local_48 = __n;
  *(undefined8 *)((long)__s + -8) = 0x39a88ee;
  memset(__s,0,__n);
  *(undefined8 *)((long)__s + -8) = 0x39a8902;
  local_60 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
  p_Var5 = local_68;
  pMVar4 = local_98;
  pvVar9 = (local_98->klass->rgctx_data->_0___f__AnonymousType0__value_j__TPar___index_j__TPar_->_1).fields;
  *(undefined8 *)((long)__s + -8) = 0x39a892b;
  pvVar9 = il2cpp_codegen_get_instance_field_data_pointer(p_Var5,pvVar9);
  local_78 = __dest;
  *(undefined8 *)((long)__s + -8) = 0x39a8940;
  memcpy(__dest,pvVar9,sVar3);
  pSVar13 = local_38;
  *(undefined8 *)((long)__s + -8) = 0x39a8952;
  memmove(pSVar13,pvVar9,sVar3);
  pIVar7 = pMVar4->klass->rgctx_data->_1__value_j__TPar;
  *(undefined8 *)((long)__s + -8) = 0x39a8969;
  cVar6 = il2cpp_runtime_helper_030d6340(pIVar7,pSVar13);
  args = local_60;
  pvVar9 = local_78;
  if (cVar6 == '\0') {
    if (local_60 == (System_Object_array *)0x0) goto label_039a8b9a;
    pIVar12 = (Il2CppObject *)0x0;
    iVar1 = (int)local_60->max_length;
    local_38 = "{{ value = {0}, index = {1} }}";
    sVar3 = local_48;
    pvVar9 = local_40;
  }
  else {
    *(undefined8 *)((long)__s + -8) = 0x39a8980;
    memcpy(pvVar17,pvVar9,sVar3);
    local_38 = "{{ value = {0}, index = {1} }}";
    p_Var11 = pMVar4->klass->rgctx_data;
    pIVar7 = p_Var11->_1__value_j__TPar;
    if (((pIVar7->_2).bitflags1 & 1) == 0) {
      *(undefined8 *)((long)__s + -8) = 0x39a89ab;
      pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
      p_Var11 = pMVar4->klass->rgctx_data;
    }
    pvVar9 = local_40;
    sVar3 = local_48;
    puVar16 = local_80;
    pIVar8 = p_Var11[1]._0___f__AnonymousType0__value_j__TPar___index_j__TPar_;
    *(undefined8 *)((long)__s + -8) = 0x39a8a14;
    il2cpp_runtime_helper_030d6e00(pIVar7,pIVar8,puVar16,pvVar17,0,&local_50);
    pIVar12 = local_50;
    if (args == (System_Object_array *)0x0) {
label_039a8b9a:
      *(undefined8 *)((long)__s + -8) = 0x39a8b9f;
      ThrowNullReferenceException();
    }
    if (local_50 == (Il2CppObject *)0x0) {
      pIVar12 = (Il2CppObject *)0x0;
      iVar1 = (int)args->max_length;
    }
    else {
      pIVar7 = (((args->obj).klass)->_1).element_class;
      *(undefined8 *)((long)__s + -8) = 0x39a8a3d;
      pIVar10 = il2cpp_vm_Object_IsInst(pIVar12,pIVar7);
      if (pIVar10 == (Il2CppObject *)0x0) goto label_039a8b3b;
      iVar1 = (int)args->max_length;
    }
  }
  if (iVar1 != 0) {
    args->m_Items[0] = pIVar12;
    *(undefined8 *)((long)__s + -8) = 0x39a8a61;
    Il2CppCodeGenWriteBarrier(args->m_Items);
    p_Var5 = local_68;
    pvVar17 = (pMVar4->klass->rgctx_data->_0___f__AnonymousType0__value_j__TPar___index_j__TPar_->_1).fields;
    *(undefined8 *)((long)__s + -8) = 0x39a8a83;
    pvVar17 = il2cpp_codegen_get_instance_field_data_pointer(p_Var5,(void *)((long)pvVar17 + 0x20));
    *(undefined8 *)((long)__s + -8) = 0x39a8a94;
    memcpy(pvVar9,pvVar17,sVar3);
    pvVar9 = local_88;
    *(undefined8 *)((long)__s + -8) = 0x39a8aa6;
    memmove(pvVar9,pvVar17,sVar3);
    pIVar7 = pMVar4->klass->rgctx_data->_2__index_j__TPar;
    *(undefined8 *)((long)__s + -8) = 0x39a8abd;
    cVar6 = il2cpp_runtime_helper_030d6340(pIVar7,pvVar9);
    pvVar17 = local_40;
    pvVar9 = local_58;
    if (cVar6 == '\0') {
      pIVar12 = (Il2CppObject *)0x0;
    }
    else {
      *(undefined8 *)((long)__s + -8) = 0x39a8ad5;
      memcpy(pvVar9,pvVar17,sVar3);
      p_Var11 = pMVar4->klass->rgctx_data;
      pIVar7 = p_Var11->_2__index_j__TPar;
      if (((pIVar7->_2).bitflags1 & 1) == 0) {
        *(undefined8 *)((long)__s + -8) = 0x39a8af2;
        pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
        p_Var11 = pMVar4->klass->rgctx_data;
      }
      pvVar9 = local_58;
      lVar2 = local_70;
      pIVar8 = p_Var11[1]._1__value_j__TPar;
      *(undefined8 *)((long)__s + -8) = 0x39a8b1a;
      il2cpp_runtime_helper_030d6e00(pIVar7,pIVar8,lVar2,pvVar9,0,&local_50);
      pIVar12 = (Il2CppObject *)0x0;
      if (local_50 != (Il2CppObject *)0x0) {
        pIVar7 = (((args->obj).klass)->_1).element_class;
        *(undefined8 *)((long)__s + -8) = 0x39a8b33;
        pIVar10 = il2cpp_vm_Object_IsInst(local_50,pIVar7);
        pIVar12 = local_50;
        if (pIVar10 == (Il2CppObject *)0x0) {
label_039a8b3b:
          *(undefined8 *)((long)__s + -8) = 0x39a8b40;
          pIVar12 = il2cpp_codegen_get_array_type_mismatch_exception();
          *(undefined8 *)((long)__s + -8) = 0x39a8b4a;
          il2cpp_codegen_raise_exception(pIVar12,(MethodInfo *)0x0);
        }
      }
    }
    if ((args->max_length & 0xfffffffe) != 0) {
      args->m_Items[1] = pIVar12;
      *(undefined8 *)((long)__s + -8) = 0x39a8b69;
      Il2CppCodeGenWriteBarrier(args->m_Items + 1);
      pSVar13 = local_38;
      *(undefined8 *)((long)__s + -8) = 0x39a8b79;
      pSVar13 = System_String__Format_5302eb0((System_IFormatProvider_o *)0x0,pSVar13,args,(MethodInfo *)0x0);
      return pSVar13;
    }
  }
  *(undefined8 *)((long)__s + -8) = 0x39a8b9a;
  ThrowIndexOutOfRangeException();
}


