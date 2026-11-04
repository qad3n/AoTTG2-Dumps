// Type: Assets.Scripts.Utility.SetItem
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Assets.Scripts.Utility/SetItem.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/SetItem.cs
// --------------------------------

// Assets.Scripts.Utility.SetItem<object, object>$$get_Key
// il2cpp: Il2CppObject* Assets_Scripts_Utility_SetItem_object__object___get_Key (Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, const MethodInfo_8FB3A0* method);
// 0x1808fb3a0

Il2CppObject*
Assets_Scripts_Utility_SetItem_object__object___get_Key(Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, MethodInfo_8FB3A0* method)

{
  return (__this->fields)._Key_k__BackingField;
}


// Assets.Scripts.Utility.SetItem<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$get_Key
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o Assets_Scripts_Utility_SetItem___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Key (Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, const MethodInfo_8F5550* method);
// 0x1808f5550

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
Assets_Scripts_Utility_SetItem___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Key(Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, MethodInfo_8F5550* method)

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


// Assets.Scripts.Utility.SetItem<object, object>$$set_Key
// il2cpp: void Assets_Scripts_Utility_SetItem_object__object___set_Key (Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, Il2CppObject* value, const MethodInfo_B8AC00* method);
// 0x180b8ac00

void
Assets_Scripts_Utility_SetItem_object__object___set_Key(Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, Il2CppObject* value, MethodInfo_B8AC00* method)

{
  (__this->fields)._Key_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Key_k__BackingField,value);
  return;
}


// Assets.Scripts.Utility.SetItem<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$set_Key
// il2cpp: void Assets_Scripts_Utility_SetItem___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Key (Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, const MethodInfo_C8DCB0* method);
// 0x180c8dcb0

void
Assets_Scripts_Utility_SetItem___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Key(Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, MethodInfo_C8DCB0* method)

{
  uint uVar1;
  void *pvVar2;
  longlong lVar3;
  ulonglong uVar4;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *source;
  ulonglong size;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *local_res10;
  undefined8 auStack_40 [5];
  
  uVar1 = (method->klass->rgctx_data->_1_TKey->_2).stack_slot_size;
  size = (ulonglong)uVar1;
  uVar4 = size + 0xf;
  if (uVar4 <= size) {
    uVar4 = 0xffffffffffffff0;
  }
  auStack_40[0] = 0x180c8dd04;
  lVar3 = -(uVar4 & 0xfffffffffffffff0);
  source = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)&local_res10;
  if ((int)(method->klass->rgctx_data->_1_TKey->_1).byval_arg.bits < 0) {
    source = value;
  }
  *(undefined8 *)((longlong)auStack_40 + lVar3) = 0x180c8dd32;
  local_res10 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)value;
  memcpy(&stack0xffffffffffffffe8 + lVar3,source,size);
  pvVar2 = (method->klass->rgctx_data->_0_Assets_Scripts_Utility_SetItem_TKey__TValue_->_1).fields;
  *(undefined8 *)((longlong)auStack_40 + lVar3) = 0x180c8dd55;
  il2cpp_runtime_helper_180417320(__this,pvVar2,&stack0xffffffffffffffe8 + lVar3,uVar1);
  return;
}


// Assets.Scripts.Utility.SetItem<object, object>$$get_Value
// il2cpp: Il2CppObject* Assets_Scripts_Utility_SetItem_object__object___get_Value (Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, const MethodInfo_573E90* method);
// 0x180573e90

Il2CppObject*
Assets_Scripts_Utility_SetItem_object__object___get_Value(Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, MethodInfo_573E90* method)

{
  return (__this->fields)._Value_k__BackingField;
}


// Assets.Scripts.Utility.SetItem<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$get_Value
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o Assets_Scripts_Utility_SetItem___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Value (Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, const MethodInfo_8E79B0* method);
// 0x1808e79b0

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
Assets_Scripts_Utility_SetItem___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Value(Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, MethodInfo_8E79B0* method)

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


// Assets.Scripts.Utility.SetItem<object, object>$$set_Value
// il2cpp: void Assets_Scripts_Utility_SetItem_object__object___set_Value (Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, Il2CppObject* value, const MethodInfo_C8DE30* method);
// 0x180c8de30

void
Assets_Scripts_Utility_SetItem_object__object___set_Value(Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, Il2CppObject* value, MethodInfo_C8DE30* method)

{
  (__this->fields)._Value_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Value_k__BackingField,value);
  return;
}


// Assets.Scripts.Utility.SetItem<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$set_Value
// il2cpp: void Assets_Scripts_Utility_SetItem___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Value (Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, const MethodInfo_C8DD70* method);
// 0x180c8dd70

void Assets_Scripts_Utility_SetItem___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Value
               (Assets_Scripts_Utility_SetItem_TKey__TValue__o *__this,
               Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *value,MethodInfo_C8DD70 *method)

{
  uint uVar1;
  void *pvVar2;
  longlong lVar3;
  ulonglong uVar4;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *source;
  ulonglong size;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *local_res10;
  undefined8 auStack_40 [5];
  
  uVar1 = (method->klass->rgctx_data->_2_TValue->_2).stack_slot_size;
  size = (ulonglong)uVar1;
  uVar4 = size + 0xf;
  if (uVar4 <= size) {
    uVar4 = 0xffffffffffffff0;
  }
  auStack_40[0] = 0x180c8ddc4;
  lVar3 = -(uVar4 & 0xfffffffffffffff0);
  source = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)&local_res10;
  if ((int)(method->klass->rgctx_data->_2_TValue->_1).byval_arg.bits < 0) {
    source = value;
  }
  *(undefined8 *)((longlong)auStack_40 + lVar3) = 0x180c8ddf2;
  local_res10 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)value;
  memcpy(&stack0xffffffffffffffe8 + lVar3,source,size);
  pvVar2 = (method->klass->rgctx_data->_0_Assets_Scripts_Utility_SetItem_TKey__TValue_->_1).fields;
  *(undefined8 *)((longlong)auStack_40 + lVar3) = 0x180c8de19;
  il2cpp_runtime_helper_180417320(__this,(longlong)pvVar2 + 0x20,&stack0xffffffffffffffe8 + lVar3,uVar1);
  return;
}


// Assets.Scripts.Utility.SetItem<object, object>$$.ctor
// il2cpp: void Assets_Scripts_Utility_SetItem_object__object____ctor (Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, Il2CppObject* key, Il2CppObject* value, const MethodInfo_C8DAD0* method);
// 0x180c8dad0

void
Assets_Scripts_Utility_SetItem_object__object____ctor(Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, Il2CppObject* key, Il2CppObject* value, MethodInfo_C8DAD0* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._Key_k__BackingField = _country;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Key_k__BackingField,_country);
  (__this->fields)._Value_k__BackingField = _language;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Value_k__BackingField,_language);
  return;
}


// Assets.Scripts.Utility.SetItem<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$.ctor
// il2cpp: void Assets_Scripts_Utility_SetItem___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor (Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o key, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, const MethodInfo_C8DB20* method);
// 0x180c8db20

void Assets_Scripts_Utility_SetItem___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
               (Assets_Scripts_Utility_SetItem_TKey__TValue__o *__this,
               Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *key,
               Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *value,MethodInfo_C8DB20 *method)

{
  Assets_Scripts_Utility_SetItem_TKey__TValue__c *pAVar1;
  MethodInfo *pMVar2;
  Il2CppMethodPointer pIVar3;
  InvokerMethod pIVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *source;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *pUVar8;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *destination;
  ulonglong size;
  ulonglong size_00;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *local_res10;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *local_res18 [2];
  undefined8 auStack_70 [5];
  undefined8 auStack_48 [2];
  
  size = (ulonglong)(method->klass->rgctx_data->_2_TValue->_2).stack_slot_size;
  size_00 = (ulonglong)(method->klass->rgctx_data->_1_TKey->_2).stack_slot_size;
  uVar7 = size_00 + 0xf;
  if (uVar7 <= size_00) {
    uVar7 = 0xffffffffffffff0;
  }
  auStack_70[0] = 0x180c8db96;
  lVar5 = -(uVar7 & 0xfffffffffffffff0);
  uVar7 = size + 0xf;
  pUVar8 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)(&stack0xffffffffffffffc8 + lVar5);
  if (uVar7 <= size) {
    uVar7 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_70 + lVar5) = 0x180c8dbb3;
  lVar6 = -(uVar7 & 0xfffffffffffffff0);
  destination = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)
                (&stack0xffffffffffffffc8 + lVar6 + lVar5);
  *(undefined8 *)((longlong)auStack_70 + lVar6 + lVar5) = 0x180c8dbc5;
  local_res10 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)key;
  local_res18[0] = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)value;
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  source = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o *)&stack0x00000010;
  if ((int)(method->klass->rgctx_data->_1_TKey->_1).byval_arg.bits < 0) {
    source = key;
  }
  *(undefined8 *)((longlong)auStack_70 + lVar6 + lVar5) = 0x180c8dbeb;
  memcpy(pUVar8,source,size_00);
  if (-1 < (int)(method->klass->rgctx_data->_1_TKey->_1).byval_arg.bits) {
    pUVar8 = (pUVar8->_1).image;
  }
  pAVar1 = method->klass;
  *(Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)((longlong)auStack_48 + lVar6 + lVar5) = pUVar8;
  pMVar2 = pAVar1->rgctx_data->_3_Assets_Scripts_Utility_SetItem_TKey__TValue__set_Key;
  pIVar3 = pMVar2->methodPointer;
  pIVar4 = pMVar2->invoker_method;
  *(undefined8 *)((longlong)auStack_70 + lVar6 + lVar5) = 0x180c8dc30;
  local_res10 = pUVar8;
  (*pIVar4)(pIVar3,pMVar2,__this,&stack0x00000010,*(void **)((longlong)auStack_48 + lVar6 + lVar5));
  pUVar8 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)local_res18;
  if ((int)(method->klass->rgctx_data->_2_TValue->_1).byval_arg.bits < 0) {
    pUVar8 = local_res18[0];
  }
  *(undefined8 *)((longlong)auStack_70 + lVar6 + lVar5) = 0x180c8dc57;
  memcpy(destination,pUVar8,size);
  if (-1 < (int)(method->klass->rgctx_data->_2_TValue->_1).byval_arg.bits) {
    destination = (destination->_1).image;
  }
  pAVar1 = method->klass;
  *(Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c **)((longlong)auStack_48 + lVar6 + lVar5) =
       destination;
  pMVar2 = pAVar1->rgctx_data->_4_Assets_Scripts_Utility_SetItem_TKey__TValue__set_Value;
  pIVar3 = pMVar2->methodPointer;
  pIVar4 = pMVar2->invoker_method;
  *(undefined8 *)((longlong)auStack_70 + lVar6 + lVar5) = 0x180c8dc9c;
  local_res18[0] = destination;
  (*pIVar4)(pIVar3,pMVar2,__this,local_res18,*(void **)((longlong)auStack_48 + lVar6 + lVar5));
  return;
}


// Assets.Scripts.Utility.SetItem<object, object>$$Equals
// il2cpp: bool Assets_Scripts_Utility_SetItem_object__object___Equals (Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, Il2CppObject* obj, const MethodInfo_C8D3E0* method);
// 0x180c8d3e0

bool Assets_Scripts_Utility_SetItem_object__object___Equals
               (Assets_Scripts_Utility_SetItem_TKey__TValue__o *__this,Il2CppObject *obj,
               MethodInfo_C8D3E0 *method)

{
  byte bVar1;
  Il2CppObject *pIVar2;
  bool bVar3;
  undefined1 uVar4;
  System_Xml_Linq_XNamespace_o *left;
  System_Xml_Linq_XNamespace_o *right;
  Il2CppClass *klass;
  
  if (obj == (Il2CppObject *)0x0) {
    return false;
  }
  if (__this != (Assets_Scripts_Utility_SetItem_TKey__TValue__o *)0x0) {
    left = (System_Xml_Linq_XNamespace_o *)System_Object__GetType((Il2CppObject *)__this,(MethodInfo *)0x0);
    right = (System_Xml_Linq_XNamespace_o *)System_Object__GetType(obj,(MethodInfo *)0x0);
    if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354ea0);
    }
    bVar3 = System_Xml_Linq_XNamespace__op_Inequality(left,right,(MethodInfo *)0x0);
    if (bVar3) {
      return false;
    }
    klass = method->klass->rgctx_data->_0_Assets_Scripts_Utility_SetItem_TKey__TValue_;
    if (((klass->_2).bitflags1 & 1) == 0) {
      klass = il2cpp_codegen_class_init_checked(klass);
    }
    bVar1 = (klass->_2).typeHierarchyDepth;
    if (((obj->klass->_2).typeHierarchyDepth < bVar1) ||
       ((obj->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != klass)) {
      il2cpp_codegen_raise_invalid_cast_exception(obj,klass);
    }
    pIVar2 = (__this->fields)._Key_k__BackingField;
    if (pIVar2 != (Il2CppObject *)0x0) {
      uVar4 = (*pIVar2->klass->vtable[0].methodPtr)(pIVar2,obj[1].klass,pIVar2->klass->vtable[0].method);
      return (bool)uVar4;
    }
  }
  ThrowNullReferenceException();
}


// Assets.Scripts.Utility.SetItem<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$Equals
// il2cpp: bool Assets_Scripts_Utility_SetItem___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Equals (Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, Il2CppObject* obj, const MethodInfo_C8D4F0* method);
// 0x180c8d4f0

bool Assets_Scripts_Utility_SetItem___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Equals
               (Assets_Scripts_Utility_SetItem_TKey__TValue__o *__this,Il2CppObject *obj,
               MethodInfo_C8D4F0 *method)

{
  undefined1 *destination;
  byte bVar1;
  Assets_Scripts_Utility_SetItem_TKey__TValue__c *pAVar2;
  MethodInfo *pMVar3;
  Il2CppMethodPointer pIVar4;
  InvokerMethod pIVar5;
  Assets_Scripts_Utility_SetItem_TKey__TValue__RGCTXs *pAVar6;
  Il2CppClass *pIVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  Il2CppClass *pIVar14;
  ulonglong uVar15;
  System_Xml_Linq_XNamespace_o *left;
  System_Xml_Linq_XNamespace_o *right;
  Il2CppObject *pIVar16;
  ulonglong size;
  Il2CppObject *local_res10;
  Il2CppObject *local_res18;
  undefined1 *local_res20;
  undefined8 auStack_70 [5];
  longlong alStack_48 [2];
  
  size = (ulonglong)(method->klass->rgctx_data->_1_TKey->_2).stack_slot_size;
  pIVar14 = method->klass->rgctx_data->_1_TKey;
  if (((pIVar14->_2).bitflags1 & 1) == 0) {
    auStack_70[0] = 0x180c8d547;
    pIVar14 = il2cpp_codegen_class_init_checked(pIVar14);
  }
  uVar13 = (pIVar14->_2).stack_slot_size + 0x10;
  uVar15 = (ulonglong)uVar13 + 0xf;
  if (uVar15 <= uVar13) {
    uVar15 = 0xffffffffffffff0;
  }
  auStack_70[0] = 0x180c8d571;
  lVar8 = -(uVar15 & 0xfffffffffffffff0);
  uVar15 = size + 0xf;
  local_res20 = &stack0xffffffffffffffc8 + lVar8;
  if (uVar15 <= size) {
    uVar15 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_70 + lVar8) = 0x180c8d595;
  lVar9 = -(uVar15 & 0xfffffffffffffff0);
  uVar15 = size + 0xf;
  local_res10 = (Il2CppObject *)(&stack0xffffffffffffffc8 + lVar9 + lVar8);
  if (uVar15 <= size) {
    uVar15 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_70 + lVar9 + lVar8) = 0x180c8d5b9;
  lVar10 = -(uVar15 & 0xfffffffffffffff0);
  uVar15 = size + 0xf;
  local_res18 = (Il2CppObject *)(&stack0xffffffffffffffc8 + lVar10 + lVar9 + lVar8);
  if (uVar15 <= size) {
    uVar15 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_70 + lVar10 + lVar9 + lVar8) = 0x180c8d5dd;
  lVar11 = -(uVar15 & 0xfffffffffffffff0);
  destination = &stack0xffffffffffffffc8 + lVar11 + lVar10 + lVar9 + lVar8;
  *(undefined8 *)((longlong)auStack_70 + lVar11 + lVar10 + lVar9 + lVar8) = 0x180c8d5f2;
  il2cpp_runtime_helper_180522500(destination);
  if (obj != (Il2CppObject *)0x0) {
    if (__this == (Assets_Scripts_Utility_SetItem_TKey__TValue__o *)0x0) {
      *(undefined8 *)((longlong)auStack_70 + lVar11 + lVar10 + lVar9 + lVar8) = 0x180c8d78e;
      ThrowNullReferenceException();
    }
    *(undefined8 *)((longlong)auStack_70 + lVar11 + lVar10 + lVar9 + lVar8) = 0x180c8d60e;
    left = (System_Xml_Linq_XNamespace_o *)System_Object__GetType((Il2CppObject *)__this,(MethodInfo *)0x0);
    *(undefined8 *)((longlong)auStack_70 + lVar11 + lVar10 + lVar9 + lVar8) = 0x180c8d61b;
    right = (System_Xml_Linq_XNamespace_o *)System_Object__GetType(obj,(MethodInfo *)0x0);
    if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
      *(undefined8 *)((longlong)auStack_70 + lVar11 + lVar10 + lVar9 + lVar8) = 0x180c8d633;
      il2cpp_codegen_runtime_class_init(g_data_184354ea0);
    }
    *(undefined8 *)((longlong)auStack_70 + lVar11 + lVar10 + lVar9 + lVar8) = 0x180c8d641;
    bVar12 = System_Xml_Linq_XNamespace__op_Inequality(left,right,(MethodInfo *)0x0);
    if (!bVar12) {
      pIVar14 = method->klass->rgctx_data->_0_Assets_Scripts_Utility_SetItem_TKey__TValue_;
      if (((pIVar14->_2).bitflags1 & 1) == 0) {
        *(undefined8 *)((longlong)auStack_70 + lVar11 + lVar10 + lVar9 + lVar8) = 0x180c8d668;
        pIVar14 = il2cpp_codegen_class_init_checked(pIVar14);
      }
      pIVar16 = local_res10;
      bVar1 = (pIVar14->_2).typeHierarchyDepth;
      if ((bVar1 <= (obj->klass->_2).typeHierarchyDepth) &&
         ((obj->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] == pIVar14)) {
        pAVar2 = method->klass;
        *(Il2CppObject **)((longlong)alStack_48 + lVar11 + lVar10 + lVar9 + lVar8) = local_res10;
        pMVar3 = pAVar2->rgctx_data->_5_Assets_Scripts_Utility_SetItem_TKey__TValue__get_Key;
        pIVar4 = pMVar3->methodPointer;
        pIVar5 = pMVar3->invoker_method;
        *(undefined8 *)((longlong)auStack_70 + lVar11 + lVar10 + lVar9 + lVar8) = 0x180c8d6c1;
        (*pIVar5)(pIVar4,pMVar3,__this,&local_res10,
                  *(void **)((longlong)alStack_48 + lVar11 + lVar10 + lVar9 + lVar8));
        *(undefined8 *)((longlong)auStack_70 + lVar11 + lVar10 + lVar9 + lVar8) = 0x180c8d6cf;
        memcpy(destination,pIVar16,size);
        pIVar16 = local_res18;
        pAVar2 = method->klass;
        local_res10 = local_res18;
        *(Il2CppObject **)((longlong)alStack_48 + lVar11 + lVar10 + lVar9 + lVar8) = local_res18;
        pMVar3 = pAVar2->rgctx_data->_5_Assets_Scripts_Utility_SetItem_TKey__TValue__get_Key;
        pIVar4 = pMVar3->methodPointer;
        pIVar5 = pMVar3->invoker_method;
        *(undefined8 *)((longlong)auStack_70 + lVar11 + lVar10 + lVar9 + lVar8) = 0x180c8d6fc;
        (*pIVar5)(pIVar4,pMVar3,obj,&local_res10,
                  *(void **)((longlong)alStack_48 + lVar11 + lVar10 + lVar9 + lVar8));
        pIVar14 = method->klass->rgctx_data->_1_TKey;
        *(undefined8 *)((longlong)auStack_70 + lVar11 + lVar10 + lVar9 + lVar8) = 0x180c8d713;
        pIVar16 = il2cpp_value_box(pIVar14,pIVar16);
        pAVar6 = method->klass->rgctx_data;
        pIVar14 = pAVar6->_1_TKey;
        pIVar7 = pAVar6[1]._0_Assets_Scripts_Utility_SetItem_TKey__TValue_;
        if (((pIVar14->_2).bitflags1 & 1) == 0) {
          *(undefined8 *)((longlong)auStack_70 + lVar11 + lVar10 + lVar9 + lVar8) = 0x180c8d73a;
          pIVar14 = il2cpp_codegen_class_init_checked(pIVar14);
        }
        *(Il2CppObject ***)((longlong)alStack_48 + lVar11 + lVar10 + lVar9 + lVar8 + 8) = &local_res10;
        *(Il2CppObject ***)((longlong)alStack_48 + lVar11 + lVar10 + lVar9 + lVar8) = &local_res18;
        *(undefined8 *)((longlong)auStack_70 + lVar11 + lVar10 + lVar9 + lVar8) = 0x180c8d762;
        local_res18 = pIVar16;
        il2cpp_runtime_helper_1804171d0(pIVar14,pIVar7,local_res20,destination);
        return (bool)local_res10._0_1_;
      }
      *(undefined8 *)((longlong)auStack_70 + lVar11 + lVar10 + lVar9 + lVar8) = 0x180c8d788;
      il2cpp_codegen_raise_invalid_cast_exception(obj,pIVar14);
    }
  }
  return false;
}


// Assets.Scripts.Utility.SetItem<object, object>$$GetHashCode
// il2cpp: int32_t Assets_Scripts_Utility_SetItem_object__object___GetHashCode (Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, const MethodInfo_C8D900* method);
// 0x180c8d900

int32_t
Assets_Scripts_Utility_SetItem_object__object___GetHashCode(Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, MethodInfo_C8D900* method)

{
  System_Type_o *pSVar1;
  int32_t iVar2;
  
  pSVar1 = (__this->fields)._Key_k__BackingField;
  if (pSVar1 != (System_Type_o *)0x0) {
    iVar2 = (*(pSVar1->klass->vtable)._2_GetHashCode.methodPtr)
                      (pSVar1,(pSVar1->klass->vtable)._2_GetHashCode.method);
    return iVar2;
  }
  ThrowNullReferenceException();
}


// Assets.Scripts.Utility.SetItem<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$GetHashCode
// il2cpp: int32_t Assets_Scripts_Utility_SetItem___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___GetHashCode (Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, const MethodInfo_C8D790* method);
// 0x180c8d790

int32_t Assets_Scripts_Utility_SetItem___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___GetHashCode
                  (Assets_Scripts_Utility_SetItem_TKey__TValue__o *__this,MethodInfo_C8D790 *method)

{
  undefined1 *source;
  undefined1 *destination;
  Assets_Scripts_Utility_SetItem_TKey__TValue__c *pAVar1;
  MethodInfo *pMVar2;
  Il2CppMethodPointer pIVar3;
  InvokerMethod pIVar4;
  Assets_Scripts_Utility_SetItem_TKey__TValue__RGCTXs *pAVar5;
  Il2CppClass *pIVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  Il2CppClass *pIVar11;
  ulonglong uVar12;
  ulonglong size;
  undefined1 *local_res10;
  undefined8 auStack_60 [5];
  longlong alStack_38 [2];
  
  size = (ulonglong)(method->klass->rgctx_data->_1_TKey->_2).stack_slot_size;
  pIVar11 = method->klass->rgctx_data->_1_TKey;
  if (((pIVar11->_2).bitflags1 & 1) == 0) {
    auStack_60[0] = 0x180c8d7e5;
    pIVar11 = il2cpp_codegen_class_init_checked(pIVar11);
  }
  uVar10 = (pIVar11->_2).stack_slot_size + 0x10;
  uVar12 = (ulonglong)uVar10 + 0xf;
  if (uVar12 <= uVar10) {
    uVar12 = 0xffffffffffffff0;
  }
  auStack_60[0] = 0x180c8d80f;
  lVar7 = -(uVar12 & 0xfffffffffffffff0);
  uVar12 = size + 0xf;
  if (uVar12 <= size) {
    uVar12 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_60 + lVar7) = 0x180c8d82c;
  lVar8 = -(uVar12 & 0xfffffffffffffff0);
  uVar12 = size + 0xf;
  source = &stack0xffffffffffffffd8 + lVar8 + lVar7;
  if (uVar12 <= size) {
    uVar12 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_60 + lVar8 + lVar7) = 0x180c8d849;
  lVar9 = -(uVar12 & 0xfffffffffffffff0);
  destination = &stack0xffffffffffffffd8 + lVar9 + lVar8 + lVar7;
  *(undefined8 *)((longlong)auStack_60 + lVar9 + lVar8 + lVar7) = 0x180c8d85e;
  il2cpp_runtime_helper_180522500(destination,0,size);
  pAVar1 = method->klass;
  *(undefined1 **)((longlong)alStack_38 + lVar9 + lVar8 + lVar7) = source;
  pMVar2 = pAVar1->rgctx_data->_5_Assets_Scripts_Utility_SetItem_TKey__TValue__get_Key;
  pIVar3 = pMVar2->methodPointer;
  pIVar4 = pMVar2->invoker_method;
  *(undefined8 *)((longlong)auStack_60 + lVar9 + lVar8 + lVar7) = 0x180c8d887;
  local_res10 = source;
  (*pIVar4)(pIVar3,pMVar2,__this,&local_res10,*(void **)((longlong)alStack_38 + lVar9 + lVar8 + lVar7));
  *(undefined8 *)((longlong)auStack_60 + lVar9 + lVar8 + lVar7) = 0x180c8d895;
  memcpy(destination,source,size);
  pAVar5 = method->klass->rgctx_data;
  pIVar11 = pAVar5->_1_TKey;
  pIVar6 = pAVar5[1]._1_TKey;
  if (((pIVar11->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)((longlong)auStack_60 + lVar9 + lVar8 + lVar7) = 0x180c8d8b9;
    pIVar11 = il2cpp_codegen_class_init_checked(pIVar11);
  }
  *(undefined1 ***)((longlong)alStack_38 + lVar9 + lVar8 + lVar7 + 8) = &local_res10;
  *(undefined8 *)((longlong)alStack_38 + lVar9 + lVar8 + lVar7) = 0;
  *(undefined8 *)((longlong)auStack_60 + lVar9 + lVar8 + lVar7) = 0x180c8d8dc;
  il2cpp_runtime_helper_1804171d0(pIVar11,pIVar6,&stack0xffffffffffffffd8 + lVar7,destination);
  return (int32_t)local_res10;
}


// Assets.Scripts.Utility.SetItem<object, object>$$ToString
// il2cpp: System_String_o* Assets_Scripts_Utility_SetItem_object__object___ToString (Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, const MethodInfo_C8D930* method);
// 0x180c8d930

System_String_o*
Assets_Scripts_Utility_SetItem_object__object___ToString(Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, MethodInfo_C8D930* method)

{
  System_Text_StringBuilder_o *pSVar1;
  System_String_o *pSVar2;
  
  pSVar1 = (__this->fields)._Key_k__BackingField;
  if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
    pSVar2 = (*(pSVar1->klass->vtable)._3_ToString.methodPtr)
                       (pSVar1,(pSVar1->klass->vtable)._3_ToString.method);
    return pSVar2;
  }
  ThrowNullReferenceException();
}


// Assets.Scripts.Utility.SetItem<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$ToString
// il2cpp: System_String_o* Assets_Scripts_Utility_SetItem___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___ToString (Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, const MethodInfo_C8D960* method);
// 0x180c8d960

System_String_o *
Assets_Scripts_Utility_SetItem___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___ToString
          (Assets_Scripts_Utility_SetItem_TKey__TValue__o *__this,MethodInfo_C8D960 *method)

{
  System_String_o *source;
  undefined1 *destination;
  Assets_Scripts_Utility_SetItem_TKey__TValue__c *pAVar1;
  MethodInfo *pMVar2;
  Il2CppMethodPointer pIVar3;
  InvokerMethod pIVar4;
  Assets_Scripts_Utility_SetItem_TKey__TValue__RGCTXs *pAVar5;
  Il2CppClass *pIVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  Il2CppClass *pIVar11;
  ulonglong uVar12;
  ulonglong size;
  System_String_o *local_res10;
  undefined8 auStack_60 [5];
  longlong alStack_38 [2];
  
  size = (ulonglong)(method->klass->rgctx_data->_1_TKey->_2).stack_slot_size;
  pIVar11 = method->klass->rgctx_data->_1_TKey;
  if (((pIVar11->_2).bitflags1 & 1) == 0) {
    auStack_60[0] = 0x180c8d9b5;
    pIVar11 = il2cpp_codegen_class_init_checked(pIVar11);
  }
  uVar10 = (pIVar11->_2).stack_slot_size + 0x10;
  uVar12 = (ulonglong)uVar10 + 0xf;
  if (uVar12 <= uVar10) {
    uVar12 = 0xffffffffffffff0;
  }
  auStack_60[0] = 0x180c8d9df;
  lVar7 = -(uVar12 & 0xfffffffffffffff0);
  uVar12 = size + 0xf;
  if (uVar12 <= size) {
    uVar12 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_60 + lVar7) = 0x180c8d9fc;
  lVar8 = -(uVar12 & 0xfffffffffffffff0);
  uVar12 = size + 0xf;
  source = (System_String_o *)(&stack0xffffffffffffffd8 + lVar8 + lVar7);
  if (uVar12 <= size) {
    uVar12 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_60 + lVar8 + lVar7) = 0x180c8da19;
  lVar9 = -(uVar12 & 0xfffffffffffffff0);
  destination = &stack0xffffffffffffffd8 + lVar9 + lVar8 + lVar7;
  *(undefined8 *)((longlong)auStack_60 + lVar9 + lVar8 + lVar7) = 0x180c8da2e;
  il2cpp_runtime_helper_180522500(destination,0,size);
  pAVar1 = method->klass;
  *(System_String_o **)((longlong)alStack_38 + lVar9 + lVar8 + lVar7) = source;
  pMVar2 = pAVar1->rgctx_data->_5_Assets_Scripts_Utility_SetItem_TKey__TValue__get_Key;
  pIVar3 = pMVar2->methodPointer;
  pIVar4 = pMVar2->invoker_method;
  *(undefined8 *)((longlong)auStack_60 + lVar9 + lVar8 + lVar7) = 0x180c8da57;
  local_res10 = source;
  (*pIVar4)(pIVar3,pMVar2,__this,&local_res10,*(void **)((longlong)alStack_38 + lVar9 + lVar8 + lVar7));
  *(undefined8 *)((longlong)auStack_60 + lVar9 + lVar8 + lVar7) = 0x180c8da65;
  memcpy(destination,source,size);
  pAVar5 = method->klass->rgctx_data;
  pIVar11 = pAVar5->_1_TKey;
  pIVar6 = pAVar5[1]._2_TValue;
  if (((pIVar11->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)((longlong)auStack_60 + lVar9 + lVar8 + lVar7) = 0x180c8da89;
    pIVar11 = il2cpp_codegen_class_init_checked(pIVar11);
  }
  *(System_String_o ***)((longlong)alStack_38 + lVar9 + lVar8 + lVar7 + 8) = &local_res10;
  *(undefined8 *)((longlong)alStack_38 + lVar9 + lVar8 + lVar7) = 0;
  *(undefined8 *)((longlong)auStack_60 + lVar9 + lVar8 + lVar7) = 0x180c8daac;
  il2cpp_runtime_helper_1804171d0(pIVar11,pIVar6,&stack0xffffffffffffffd8 + lVar7,destination);
  return local_res10;
}


