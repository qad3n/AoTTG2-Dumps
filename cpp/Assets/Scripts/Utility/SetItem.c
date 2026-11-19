// Type: Assets.Scripts.Utility.SetItem
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Assets.Scripts.Utility/SetItem.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/SetItem.cs
// --------------------------------

// Assets.Scripts.Utility.SetItem<object, object>$$get_Key
// il2cpp: Il2CppObject* Assets_Scripts_Utility_SetItem_object__object___get_Key (Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, const MethodInfo_4046480* method);
// 0x4146480

Il2CppObject *
Assets_Scripts_Utility_SetItem_object__object___get_Key
          (Assets_Scripts_Utility_SetItem_TKey__TValue__o *__this,MethodInfo_4046480 *method)

{
  return (__this->fields)._Key_k__BackingField;
}


// Assets.Scripts.Utility.SetItem<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$get_Key
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o Assets_Scripts_Utility_SetItem___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Key (Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, const MethodInfo_4046650* method);
// 0x4146650

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
Assets_Scripts_Utility_SetItem___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Key
          (Assets_Scripts_Utility_SetItem_TKey__TValue__o *__this,MethodInfo_4046650 *method)

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


// Assets.Scripts.Utility.SetItem<object, object>$$set_Key
// il2cpp: void Assets_Scripts_Utility_SetItem_object__object___set_Key (Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, Il2CppObject* value, const MethodInfo_4046490* method);
// 0x4146490

void Assets_Scripts_Utility_SetItem_object__object___set_Key
               (Assets_Scripts_Utility_SetItem_TKey__TValue__o *__this,Il2CppObject *value,
               MethodInfo_4046490 *method)

{
  (__this->fields)._Key_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Key_k__BackingField);
  return;
}


// Assets.Scripts.Utility.SetItem<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$set_Key
// il2cpp: void Assets_Scripts_Utility_SetItem___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Key (Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, const MethodInfo_4046690* method);
// 0x4146690

void Assets_Scripts_Utility_SetItem___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Key
               (Assets_Scripts_Utility_SetItem_TKey__TValue__o *__this,
               Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value,MethodInfo_4046690 *method)

{
  uint size;
  long lVar1;
  long lVar2;
  void *field;
  long lVar3;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *__src;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *local_30;
  
  local_30 = value.klass;
  lVar1 = *(long *)((long)value.monitor + 0x20);
  lVar2 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  size = *(uint *)(lVar2 + 0xfc);
  lVar3 = -((ulong)size + 0xf & 0xfffffffffffffff0);
  __src = local_30;
  if (-1 < *(int *)(lVar2 + 0x28)) {
    __src = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&local_30;
  }
  *(undefined8 *)(auStack_38 + lVar3 + -8) = 0x41466e5;
  memcpy(auStack_38 + lVar3,__src,(ulong)size);
  field = *(void **)(**(long **)(lVar1 + 0xc0) + 0x80);
  *(undefined8 *)(auStack_38 + lVar3 + -8) = 0x4146705;
  il2cpp_codegen_write_instance_field_data(__this,field,auStack_38 + lVar3,size);
  return;
}


// Assets.Scripts.Utility.SetItem<object, object>$$get_Value
// il2cpp: Il2CppObject* Assets_Scripts_Utility_SetItem_object__object___get_Value (Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, const MethodInfo_40464A0* method);
// 0x41464a0

Il2CppObject *
Assets_Scripts_Utility_SetItem_object__object___get_Value
          (Assets_Scripts_Utility_SetItem_TKey__TValue__o *__this,MethodInfo_40464A0 *method)

{
  return (__this->fields)._Value_k__BackingField;
}


// Assets.Scripts.Utility.SetItem<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$get_Value
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o Assets_Scripts_Utility_SetItem___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Value (Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, const MethodInfo_4046720* method);
// 0x4146720

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
Assets_Scripts_Utility_SetItem___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Value
          (Assets_Scripts_Utility_SetItem_TKey__TValue__o *__this,MethodInfo_4046720 *method)

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


// Assets.Scripts.Utility.SetItem<object, object>$$set_Value
// il2cpp: void Assets_Scripts_Utility_SetItem_object__object___set_Value (Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, Il2CppObject* value, const MethodInfo_40464B0* method);
// 0x41464b0

void Assets_Scripts_Utility_SetItem_object__object___set_Value
               (Assets_Scripts_Utility_SetItem_TKey__TValue__o *__this,Il2CppObject *value,
               MethodInfo_40464B0 *method)

{
  (__this->fields)._Value_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Value_k__BackingField);
  return;
}


// Assets.Scripts.Utility.SetItem<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$set_Value
// il2cpp: void Assets_Scripts_Utility_SetItem___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Value (Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, const MethodInfo_4046770* method);
// 0x4146770

void Assets_Scripts_Utility_SetItem___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Value
               (Assets_Scripts_Utility_SetItem_TKey__TValue__o *__this,
               Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value,MethodInfo_4046770 *method)

{
  uint size;
  long lVar1;
  long lVar2;
  long lVar3;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *__src;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *local_30;
  
  local_30 = value.klass;
  lVar1 = *(long *)((long)value.monitor + 0x20);
  lVar2 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
  size = *(uint *)(lVar2 + 0xfc);
  lVar3 = -((ulong)size + 0xf & 0xfffffffffffffff0);
  __src = local_30;
  if (-1 < *(int *)(lVar2 + 0x28)) {
    __src = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&local_30;
  }
  *(undefined8 *)(auStack_38 + lVar3 + -8) = 0x41467c5;
  memcpy(auStack_38 + lVar3,__src,(ulong)size);
  lVar1 = *(long *)(**(long **)(lVar1 + 0xc0) + 0x80);
  *(undefined8 *)(auStack_38 + lVar3 + -8) = 0x41467e9;
  il2cpp_codegen_write_instance_field_data(__this,(void *)(lVar1 + 0x20),auStack_38 + lVar3,size);
  return;
}


// Assets.Scripts.Utility.SetItem<object, object>$$.ctor
// il2cpp: void Assets_Scripts_Utility_SetItem_object__object____ctor (Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, Il2CppObject* key, Il2CppObject* value, const MethodInfo_40464C0* method);
// 0x41464c0

void Assets_Scripts_Utility_SetItem_object__object____ctor
               (Assets_Scripts_Utility_SetItem_TKey__TValue__o *__this,Il2CppObject *key,Il2CppObject *value,
               MethodInfo_40464C0 *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._Key_k__BackingField = key;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Key_k__BackingField);
  (__this->fields)._Value_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Value_k__BackingField);
  return;
}


// Assets.Scripts.Utility.SetItem<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$.ctor
// il2cpp: void Assets_Scripts_Utility_SetItem___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor (Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o key, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, const MethodInfo_4046800* method);
// 0x4146800

void Assets_Scripts_Utility_SetItem___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
               (Assets_Scripts_Utility_SetItem_TKey__TValue__o *__this,
               Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o key,
               Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value,MethodInfo_4046800 *method)

{
  long lVar1;
  void *pvVar2;
  undefined8 uVar3;
  code *pcVar4;
  Assets_Scripts_Utility_SetItem_TKey__TValue__o *pAVar5;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *pUVar6;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *__src;
  char ****__src_00;
  undefined8 *__dest;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 auStack_80 [2];
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *local_70;
  char ****local_68;
  Assets_Scripts_Utility_SetItem_TKey__TValue__o *local_60;
  char ****local_58;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *local_50;
  ulong local_48;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *local_40;
  undefined8 *local_38;
  
  pUVar6 = value.klass;
  local_68 = key.monitor;
  local_70 = key.klass;
  lVar1 = *(long *)((long)(pUVar6->_1).byval_arg.data + 0xc0);
  uVar8 = (ulong)*(uint *)(*(long *)(lVar1 + 8) + 0xfc);
  local_48 = (ulong)*(uint *)(*(long *)(lVar1 + 0x10) + 0xfc);
  puVar9 = (undefined8 *)((long)auStack_80 + (8 - (uVar8 + 0xf & 0xfffffffffffffff0)));
  __dest = (undefined8 *)((long)puVar9 - (local_48 + 0xf & 0xfffffffffffffff0));
  local_60 = __this;
  local_58 = local_68;
  local_40 = local_70;
  __dest[-1] = 0x4146875;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  pvVar2 = (pUVar6->_1).byval_arg.data;
  __src = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&local_70;
  if (*(int *)(*(long *)(*(long *)((long)pvVar2 + 0xc0) + 8) + 0x28) < 0) {
    __src = local_40;
  }
  local_50 = pUVar6;
  __dest[-1] = 0x41468a1;
  memcpy(puVar9,__src,uVar8);
  pAVar5 = local_60;
  lVar1 = *(long *)((long)pvVar2 + 0xc0);
  puVar7 = *(undefined8 **)(lVar1 + 0x18);
  uVar3 = *puVar7;
  if (-1 < *(int *)(*(long *)(lVar1 + 8) + 0x28)) {
    puVar9 = (undefined8 *)*puVar9;
  }
  pcVar4 = (code *)puVar7[2];
  local_38 = puVar9;
  __dest[-1] = 0x41468d2;
  (*pcVar4)(uVar3,puVar7,pAVar5,&local_38,puVar9);
  uVar8 = local_48;
  pvVar2 = (local_50->_1).byval_arg.data;
  __src_00 = (char ****)&local_68;
  if (*(int *)(*(long *)(*(long *)((long)pvVar2 + 0xc0) + 0x10) + 0x28) < 0) {
    __src_00 = local_58;
  }
  __dest[-1] = 0x41468fe;
  memcpy(__dest,__src_00,uVar8);
  lVar1 = *(long *)((long)pvVar2 + 0xc0);
  puVar9 = *(undefined8 **)(lVar1 + 0x20);
  uVar3 = *puVar9;
  puVar7 = __dest;
  if (-1 < *(int *)(*(long *)(lVar1 + 0x10) + 0x28)) {
    puVar7 = (undefined8 *)*__dest;
  }
  pcVar4 = (code *)puVar9[2];
  local_38 = puVar7;
  __dest[-1] = 0x414692b;
  (*pcVar4)(uVar3,puVar9,pAVar5,&local_38,puVar7);
  return;
}


// Assets.Scripts.Utility.SetItem<object, object>$$Equals
// il2cpp: bool Assets_Scripts_Utility_SetItem_object__object___Equals (Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, Il2CppObject* obj, const MethodInfo_4046500* method);
// 0x4146500

bool Assets_Scripts_Utility_SetItem_object__object___Equals
               (Assets_Scripts_Utility_SetItem_TKey__TValue__o *__this,Il2CppObject *obj,
               MethodInfo_4046500 *method)

{
  byte bVar1;
  Il2CppObject *pIVar2;
  Il2CppMethodPointer vtableDispatch;
  bool bVar3;
  undefined1 uVar4;
  System_Type_o *left;
  System_Type_o *right;
  Il2CppClass *klass;
  
  if (obj == (Il2CppObject *)0x0) {
    return false;
  }
  if (__this != (Assets_Scripts_Utility_SetItem_TKey__TValue__o *)0x0) {
    left = System_Object__GetType((Il2CppObject *)__this,(MethodInfo *)0x0);
    right = System_Object__GetType(obj,(MethodInfo *)0x0);
    if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_075567a8);
    }
    bVar3 = System_Type__op_Inequality(left,right,(MethodInfo *)0x0);
    if (bVar3) {
      return false;
    }
    klass = method->klass->rgctx_data->_0_Assets_Scripts_Utility_SetItem_TKey__TValue_;
    if (((klass->_2).bitflags1 & 1) == 0) {
      klass = il2cpp_codegen_class_init_checked(klass);
    }
    bVar1 = (klass->_2).typeHierarchyDepth;
    if (((obj->klass->_2).typeHierarchyDepth < bVar1) ||
       ((obj->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != klass)) {
      il2cpp_codegen_raise_invalid_cast_exception(obj,klass);
    }
    pIVar2 = (__this->fields)._Key_k__BackingField;
    if (pIVar2 != (Il2CppObject *)0x0) {
      vtableDispatch = pIVar2->klass->vtable[0].methodPtr;
      uVar4 = (*vtableDispatch)
                        (pIVar2,obj[1].klass,pIVar2->klass->vtable[0].method,vtableDispatch);
      return (bool)uVar4;
    }
  }
  ThrowNullReferenceException();
}


// Assets.Scripts.Utility.SetItem<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$Equals
// il2cpp: bool Assets_Scripts_Utility_SetItem___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Equals (Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, Il2CppObject* obj, const MethodInfo_4046940* method);
// 0x4146940

bool Assets_Scripts_Utility_SetItem___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Equals
               (Assets_Scripts_Utility_SetItem_TKey__TValue__o *__this,Il2CppObject *obj,
               MethodInfo_4046940 *method)

{
  byte bVar1;
  MethodInfo *pMVar2;
  Il2CppMethodPointer pIVar3;
  InvokerMethod pIVar4;
  Il2CppClass *pIVar5;
  void *pvVar6;
  System_Type_o *left;
  MethodInfo_4046940 *pMVar7;
  ulong uVar8;
  Assets_Scripts_Utility_SetItem_TKey__TValue__o *pAVar9;
  Il2CppObject *pIVar10;
  bool bVar11;
  uint uVar12;
  Il2CppClass *pIVar13;
  ulong uVar14;
  System_Type_o *right;
  Assets_Scripts_Utility_SetItem_TKey__TValue__RGCTXs *pAVar15;
  void *__s;
  Il2CppObject *pIVar16;
  Il2CppObject *data;
  bool bVar17;
  undefined8 uStack_80;
  Il2CppObject IStack_78;
  System_Type_o *local_68;
  MethodInfo_4046940 *local_60;
  ulong local_58;
  Assets_Scripts_Utility_SetItem_TKey__TValue__o *local_50;
  Il2CppObject *local_48;
  Il2CppObject *local_40;
  char local_31;
  
  pIVar13 = method->klass->rgctx_data->_1_TKey;
  uVar12 = (pIVar13->_2).stack_slot_size;
  local_58 = (ulong)uVar12;
  local_50 = __this;
  local_40 = obj;
  if (((pIVar13->_2).bitflags1 & 1) == 0) {
    uStack_80 = 0x4146983;
    pIVar13 = il2cpp_codegen_class_init_checked(pIVar13);
    uVar12 = (pIVar13->_2).stack_slot_size;
  }
  uVar8 = local_58;
  IStack_78.monitor = (void *)((long)&IStack_78 - ((ulong)(uVar12 + 0x10) + 0xf & 0xfffffffffffffff0));
  uVar14 = local_58 + 0xf & 0xfffffffffffffff0;
  pIVar16 = (Il2CppObject *)((long)IStack_78.monitor - uVar14);
  data = (Il2CppObject *)((long)pIVar16 - uVar14);
  __s = (void *)((long)data - uVar14);
  bVar17 = false;
  *(undefined8 *)((long)__s + -8) = 0x41469d5;
  memset(__s,0,uVar8);
  pAVar9 = local_50;
  if (local_40 != (Il2CppObject *)0x0) {
    local_60 = method;
    if (local_50 == (Assets_Scripts_Utility_SetItem_TKey__TValue__o *)0x0) {
      *(undefined8 *)((long)__s + -8) = 0x4146b6b;
      ThrowNullReferenceException();
    }
    *(undefined8 *)((long)__s + -8) = 0x41469f8;
    local_68 = System_Object__GetType((Il2CppObject *)pAVar9,(MethodInfo *)0x0);
    pIVar10 = local_40;
    *(undefined8 *)((long)__s + -8) = 0x4146a07;
    right = System_Object__GetType(pIVar10,(MethodInfo *)0x0);
    if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
      *(undefined8 *)((long)__s + -8) = 0x4146a26;
      il2cpp_codegen_runtime_class_init(g_data_075567a8);
    }
    left = local_68;
    bVar17 = false;
    *(undefined8 *)((long)__s + -8) = 0x4146a37;
    bVar11 = System_Type__op_Inequality(left,right,(MethodInfo *)0x0);
    pMVar7 = local_60;
    if (!bVar11) {
      pIVar13 = local_60->klass->rgctx_data->_0_Assets_Scripts_Utility_SetItem_TKey__TValue_;
      if (((pIVar13->_2).bitflags1 & 1) == 0) {
        *(undefined8 *)((long)__s + -8) = 0x4146a63;
        pIVar13 = il2cpp_codegen_class_init_checked(pIVar13);
      }
      pIVar10 = local_40;
      pAVar9 = local_50;
      bVar1 = (pIVar13->_2).typeHierarchyDepth;
      if (((local_40->klass->_2).typeHierarchyDepth < bVar1) ||
         ((local_40->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != pIVar13)) {
        *(undefined8 *)((long)__s + -8) = 0x4146b77;
        il2cpp_codegen_raise_invalid_cast_exception(pIVar10,pIVar13);
      }
      pMVar2 = pMVar7->klass->rgctx_data->_5_Assets_Scripts_Utility_SetItem_TKey__TValue__get_Key;
      pIVar3 = pMVar2->methodPointer;
      pIVar4 = pMVar2->invoker_method;
      local_48 = pIVar16;
      *(undefined8 *)((long)__s + -8) = 0x4146ab4;
      (*pIVar4)(pIVar3,pMVar2,pAVar9,&local_48,pIVar16);
      uVar8 = local_58;
      *(undefined8 *)((long)__s + -8) = 0x4146ac3;
      memcpy(__s,pIVar16,uVar8);
      pIVar16 = local_40;
      pMVar2 = pMVar7->klass->rgctx_data->_5_Assets_Scripts_Utility_SetItem_TKey__TValue__get_Key;
      pIVar3 = pMVar2->methodPointer;
      pIVar4 = pMVar2->invoker_method;
      local_48 = data;
      *(undefined8 *)((long)__s + -8) = 0x4146ae8;
      (*pIVar4)(pIVar3,pMVar2,pIVar16,&local_48,data);
      pIVar13 = pMVar7->klass->rgctx_data->_1_TKey;
      *(undefined8 *)((long)__s + -8) = 0x4146b00;
      pIVar16 = il2cpp_vm_Object_Box(pIVar13,data);
      pAVar15 = pMVar7->klass->rgctx_data;
      pIVar13 = pAVar15->_1_TKey;
      if (((pIVar13->_2).bitflags1 & 1) == 0) {
        *(undefined8 *)((long)__s + -8) = 0x4146b21;
        pIVar13 = il2cpp_codegen_class_init_checked(pIVar13);
        pAVar15 = pMVar7->klass->rgctx_data;
      }
      pvVar6 = IStack_78.monitor;
      pIVar5 = pAVar15[1]._0_Assets_Scripts_Utility_SetItem_TKey__TValue_;
      local_48 = pIVar16;
      *(undefined8 *)((long)__s + -8) = 0x4146b4c;
      il2cpp_runtime_helper_030d6e00(pIVar13,pIVar5,pvVar6,__s,&local_48,&local_31);
      bVar17 = local_31 != '\0';
    }
  }
  return bVar17;
}


// Assets.Scripts.Utility.SetItem<object, object>$$GetHashCode
// il2cpp: int32_t Assets_Scripts_Utility_SetItem_object__object___GetHashCode (Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, const MethodInfo_40465F0* method);
// 0x41465f0

int32_t Assets_Scripts_Utility_SetItem_object__object___GetHashCode
                  (Assets_Scripts_Utility_SetItem_TKey__TValue__o *__this,MethodInfo_40465F0 *method)

{
  Il2CppObject *pIVar1;
  Il2CppMethodPointer vtableDispatch;
  int32_t iVar2;
  undefined8 in_RDX;
  
  pIVar1 = (__this->fields)._Key_k__BackingField;
  if (pIVar1 == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  vtableDispatch = pIVar1->klass->vtable[2].methodPtr;
  iVar2 = (*vtableDispatch)(pIVar1,pIVar1->klass->vtable[2].method,in_RDX,vtableDispatch);
  return iVar2;
}


// Assets.Scripts.Utility.SetItem<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$GetHashCode
// il2cpp: int32_t Assets_Scripts_Utility_SetItem___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___GetHashCode (Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, const MethodInfo_4046B80* method);
// 0x4146b80

int32_t Assets_Scripts_Utility_SetItem___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___GetHashCode
                  (Assets_Scripts_Utility_SetItem_TKey__TValue__o *__this,MethodInfo_4046B80 *method)

{
  MethodInfo *pMVar1;
  Il2CppMethodPointer pIVar2;
  InvokerMethod pIVar3;
  Il2CppClass *pIVar4;
  Il2CppClass *pIVar5;
  Assets_Scripts_Utility_SetItem_TKey__TValue__c *pAVar6;
  Assets_Scripts_Utility_SetItem_TKey__TValue__RGCTXs *pAVar7;
  uint uVar8;
  ulong uVar9;
  undefined1 *__dest;
  undefined1 *__src;
  ulong __n;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined1 *local_40;
  int32_t local_34;
  
  pAVar6 = method->klass;
  pIVar5 = pAVar6->rgctx_data->_1_TKey;
  uVar8 = (pIVar5->_2).stack_slot_size;
  __n = (ulong)uVar8;
  if (((pIVar5->_2).bitflags1 & 1) == 0) {
    uStack_50 = 0x4146bc1;
    pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
    uVar8 = (pIVar5->_2).stack_slot_size;
    pAVar6 = method->klass;
  }
  uVar9 = __n + 0xf & 0xfffffffffffffff0;
  __src = auStack_48 + -((ulong)(uVar8 + 0x10) + 0xf & 0xfffffffffffffff0) + -uVar9;
  __dest = __src + -uVar9;
  pMVar1 = pAVar6->rgctx_data->_5_Assets_Scripts_Utility_SetItem_TKey__TValue__get_Key;
  pIVar2 = pMVar1->methodPointer;
  pIVar3 = pMVar1->invoker_method;
  local_40 = __src;
  *(undefined8 *)(__dest + -8) = 0x4146c18;
  (*pIVar3)(pIVar2,pMVar1,__this,&local_40,__src);
  *(undefined8 *)(__dest + -8) = 0x4146c26;
  memcpy(__dest,__src,__n);
  pAVar7 = method->klass->rgctx_data;
  pIVar5 = pAVar7->_1_TKey;
  if (((pIVar5->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)(__dest + -8) = 0x4146c43;
    pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
    pAVar7 = method->klass->rgctx_data;
  }
  pIVar4 = pAVar7[1]._1_TKey;
  *(undefined8 *)(__dest + -8) = 0x4146c67;
  il2cpp_runtime_helper_030d6e00(pIVar5,pIVar4,auStack_48 + -((ulong)(uVar8 + 0x10) + 0xf & 0xfffffffffffffff0),__dest,0,
               &local_34);
  return local_34;
}


// Assets.Scripts.Utility.SetItem<object, object>$$ToString
// il2cpp: System_String_o* Assets_Scripts_Utility_SetItem_object__object___ToString (Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, const MethodInfo_4046620* method);
// 0x4146620

System_String_o *
Assets_Scripts_Utility_SetItem_object__object___ToString
          (Assets_Scripts_Utility_SetItem_TKey__TValue__o *__this,MethodInfo_4046620 *method)

{
  Il2CppObject *pIVar1;
  Il2CppMethodPointer vtableDispatch;
  System_String_o *pSVar2;
  undefined8 in_RDX;
  
  pIVar1 = (__this->fields)._Key_k__BackingField;
  if (pIVar1 == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  vtableDispatch = pIVar1->klass->vtable[3].methodPtr;
  pSVar2 = (System_String_o *)
           (*vtableDispatch)(pIVar1,pIVar1->klass->vtable[3].method,in_RDX,vtableDispatch);
  return pSVar2;
}


// Assets.Scripts.Utility.SetItem<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$ToString
// il2cpp: System_String_o* Assets_Scripts_Utility_SetItem___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___ToString (Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, const MethodInfo_4046C80* method);
// 0x4146c80

System_String_o *
Assets_Scripts_Utility_SetItem___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___ToString
          (Assets_Scripts_Utility_SetItem_TKey__TValue__o *__this,MethodInfo_4046C80 *method)

{
  MethodInfo *pMVar1;
  Il2CppMethodPointer pIVar2;
  InvokerMethod pIVar3;
  Il2CppClass *pIVar4;
  Il2CppClass *pIVar5;
  Assets_Scripts_Utility_SetItem_TKey__TValue__c *pAVar6;
  Assets_Scripts_Utility_SetItem_TKey__TValue__RGCTXs *pAVar7;
  uint uVar8;
  ulong uVar9;
  void *__dest;
  System_String_o *__src;
  long lVar10;
  ulong __n;
  undefined8 uStack_40;
  System_String_o *local_38;
  
  pAVar6 = method->klass;
  pIVar5 = pAVar6->rgctx_data->_1_TKey;
  uVar8 = (pIVar5->_2).stack_slot_size;
  __n = (ulong)uVar8;
  if (((pIVar5->_2).bitflags1 & 1) == 0) {
    uStack_40 = 0x4146cbe;
    pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
    uVar8 = (pIVar5->_2).stack_slot_size;
    pAVar6 = method->klass;
  }
  lVar10 = (long)&local_38 - ((ulong)(uVar8 + 0x10) + 0xf & 0xfffffffffffffff0);
  uVar9 = __n + 0xf & 0xfffffffffffffff0;
  __src = (System_String_o *)(lVar10 - uVar9);
  __dest = (void *)((long)__src - uVar9);
  pMVar1 = pAVar6->rgctx_data->_5_Assets_Scripts_Utility_SetItem_TKey__TValue__get_Key;
  pIVar2 = pMVar1->methodPointer;
  pIVar3 = pMVar1->invoker_method;
  local_38 = __src;
  *(undefined8 *)((long)__dest + -8) = 0x4146d15;
  (*pIVar3)(pIVar2,pMVar1,__this,&local_38,__src);
  *(undefined8 *)((long)__dest + -8) = 0x4146d23;
  memcpy(__dest,__src,__n);
  pAVar7 = method->klass->rgctx_data;
  pIVar5 = pAVar7->_1_TKey;
  if (((pIVar5->_2).bitflags1 & 1) == 0) {
    *(undefined8 *)((long)__dest + -8) = 0x4146d40;
    pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
    pAVar7 = method->klass->rgctx_data;
  }
  pIVar4 = pAVar7[1]._2_TValue;
  *(undefined8 *)((long)__dest + -8) = 0x4146d64;
  il2cpp_runtime_helper_030d6e00(pIVar5,pIVar4,lVar10,__dest,0,&local_38);
  return local_38;
}


