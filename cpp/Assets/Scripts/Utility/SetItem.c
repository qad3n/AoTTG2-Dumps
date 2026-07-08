// Type: Assets.Scripts.Utility.SetItem
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Assets.Scripts.Utility/SetItem.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Utility/SetItem.cs  [CHANGED since prior version]
// --------------------------------

// Assets.Scripts.Utility.SetItem<object, object>$$get_Key
// il2cpp: Il2CppObject* Assets_Scripts_Utility_SetItem_object__object___get_Key (Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, const MethodInfo_394DE70* method);
// 0x3a4de70

Il2CppObject *
Assets_Scripts_Utility_SetItem<object__object>__get_Key
          (Assets_Scripts_Utility_SetItem_TKey__TValue__o *__this,MethodInfo_394DE70 *method)

{
  return (__this->fields)._Key_k__BackingField;
}


// Assets.Scripts.Utility.SetItem<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$get_Key
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o Assets_Scripts_Utility_SetItem___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Key (Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, const MethodInfo_394E040* method);
// 0x3a4e040

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
Assets_Scripts_Utility_SetItem<__Il2CppFullySharedGenericType____Il2CppFullySharedGenericType>__get_Key
          (Assets_Scripts_Utility_SetItem_TKey__TValue__o *__this,MethodInfo_394E040 *method)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  void *__src;
  long in_RDX;
  void *extraout_RDX;
  ulong __n;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o UVar4;
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  
  plVar1 = *(long **)(*(long *)(in_RDX + 0x20) + 0xc0);
  __n = (ulong)*(uint *)(plVar1[1] + 0xfc);
  lVar3 = -(__n + 0xf & 0xfffffffffffffff0);
  uVar2 = *(undefined8 *)(*plVar1 + 0x80);
  *(undefined8 *)((long)&uStack_30 + lVar3) = 0x3a4e083;
  __src = (void *)il2cpp_glue_022fa440(__this,uVar2);
  *(undefined8 *)((long)&uStack_30 + lVar3) = 0x3a4e091;
  memcpy(auStack_28 + lVar3,__src,__n);
  *(undefined8 *)((long)&uStack_30 + lVar3) = 0x3a4e09f;
  UVar4.klass = memcpy(method,auStack_28 + lVar3,__n);
  UVar4.monitor = extraout_RDX;
  return UVar4;
}


// Assets.Scripts.Utility.SetItem<object, object>$$set_Key
// il2cpp: void Assets_Scripts_Utility_SetItem_object__object___set_Key (Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, Il2CppObject* value, const MethodInfo_394DE80* method);
// 0x3a4de80

void Assets_Scripts_Utility_SetItem<object__object>__set_Key
               (Assets_Scripts_Utility_SetItem_TKey__TValue__o *__this,Il2CppObject *value,
               MethodInfo_394DE80 *method)

{
  (__this->fields)._Key_k__BackingField = value;
  il2cpp_runtime_glue(&__this->fields);
  return;
}


// Assets.Scripts.Utility.SetItem<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$set_Key
// il2cpp: void Assets_Scripts_Utility_SetItem___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Key (Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, const MethodInfo_394E0B0* method);
// 0x3a4e0b0

void Assets_Scripts_Utility_SetItem<__Il2CppFullySharedGenericType____Il2CppFullySharedGenericType>__set_Key
               (Assets_Scripts_Utility_SetItem_TKey__TValue__o *__this,
               Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value,
               MethodInfo_394E0B0 *method)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *__src;
  ulong __n;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *local_30;
  
  local_30 = value.klass;
  lVar1 = *(long *)((long)value.monitor + 0x20);
  lVar2 = *(long *)(*(long *)(lVar1 + 0xc0) + 8);
  __n = (ulong)*(uint *)(lVar2 + 0xfc);
  lVar4 = -(__n + 0xf & 0xfffffffffffffff0);
  __src = local_30;
  if (-1 < *(int *)(lVar2 + 0x28)) {
    __src = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&stack0xffffffffffffffd0;
  }
  *(undefined8 *)((long)&uStack_40 + lVar4) = 0x3a4e105;
  memcpy(auStack_38 + lVar4,__src,__n);
  uVar3 = *(undefined8 *)(**(long **)(lVar1 + 0xc0) + 0x80);
  *(undefined8 *)((long)&uStack_40 + lVar4) = 0x3a4e125;
  il2cpp_glue_02274860(__this,uVar3,auStack_38 + lVar4,__n);
  return;
}


// Assets.Scripts.Utility.SetItem<object, object>$$get_Value
// il2cpp: Il2CppObject* Assets_Scripts_Utility_SetItem_object__object___get_Value (Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, const MethodInfo_394DE90* method);
// 0x3a4de90

Il2CppObject *
Assets_Scripts_Utility_SetItem<object__object>__get_Value
          (Assets_Scripts_Utility_SetItem_TKey__TValue__o *__this,MethodInfo_394DE90 *method)

{
  return (__this->fields)._Value_k__BackingField;
}


// Assets.Scripts.Utility.SetItem<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$get_Value
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o Assets_Scripts_Utility_SetItem___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Value (Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, const MethodInfo_394E140* method);
// 0x3a4e140

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
Assets_Scripts_Utility_SetItem<__Il2CppFullySharedGenericType____Il2CppFullySharedGenericType>__get_Value
          (Assets_Scripts_Utility_SetItem_TKey__TValue__o *__this,MethodInfo_394E140 *method)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  void *__src;
  long in_RDX;
  void *extraout_RDX;
  ulong __n;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o UVar4;
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  
  plVar1 = *(long **)(*(long *)(in_RDX + 0x20) + 0xc0);
  __n = (ulong)*(uint *)(plVar1[2] + 0xfc);
  lVar3 = -(__n + 0xf & 0xfffffffffffffff0);
  lVar2 = *(long *)(*plVar1 + 0x80);
  *(undefined8 *)((long)&uStack_30 + lVar3) = 0x3a4e187;
  __src = (void *)il2cpp_glue_022fa440(__this,lVar2 + 0x20);
  *(undefined8 *)((long)&uStack_30 + lVar3) = 0x3a4e195;
  memcpy(auStack_28 + lVar3,__src,__n);
  *(undefined8 *)((long)&uStack_30 + lVar3) = 0x3a4e1a3;
  UVar4.klass = memcpy(method,auStack_28 + lVar3,__n);
  UVar4.monitor = extraout_RDX;
  return UVar4;
}


// Assets.Scripts.Utility.SetItem<object, object>$$set_Value
// il2cpp: void Assets_Scripts_Utility_SetItem_object__object___set_Value (Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, Il2CppObject* value, const MethodInfo_394DEA0* method);
// 0x3a4dea0

void Assets_Scripts_Utility_SetItem<object__object>__set_Value
               (Assets_Scripts_Utility_SetItem_TKey__TValue__o *__this,Il2CppObject *value,
               MethodInfo_394DEA0 *method)

{
  (__this->fields)._Value_k__BackingField = value;
  il2cpp_runtime_glue(&(__this->fields)._Value_k__BackingField);
  return;
}


// Assets.Scripts.Utility.SetItem<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$set_Value
// il2cpp: void Assets_Scripts_Utility_SetItem___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Value (Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, const MethodInfo_394E1B0* method);
// 0x3a4e1b0

void Assets_Scripts_Utility_SetItem<__Il2CppFullySharedGenericType____Il2CppFullySharedGenericType>__set_Value
               (Assets_Scripts_Utility_SetItem_TKey__TValue__o *__this,
               Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value,
               MethodInfo_394E1B0 *method)

{
  long lVar1;
  long lVar2;
  long lVar3;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *__src;
  ulong __n;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *local_30;
  
  local_30 = value.klass;
  lVar1 = *(long *)((long)value.monitor + 0x20);
  lVar2 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
  __n = (ulong)*(uint *)(lVar2 + 0xfc);
  lVar3 = -(__n + 0xf & 0xfffffffffffffff0);
  __src = local_30;
  if (-1 < *(int *)(lVar2 + 0x28)) {
    __src = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)&stack0xffffffffffffffd0;
  }
  *(undefined8 *)((long)&uStack_40 + lVar3) = 0x3a4e205;
  memcpy(auStack_38 + lVar3,__src,__n);
  lVar1 = *(long *)(**(long **)(lVar1 + 0xc0) + 0x80);
  *(undefined8 *)((long)&uStack_40 + lVar3) = 0x3a4e229;
  il2cpp_glue_02274860(__this,lVar1 + 0x20,auStack_38 + lVar3,__n);
  return;
}


// Assets.Scripts.Utility.SetItem<object, object>$$.ctor
// il2cpp: void Assets_Scripts_Utility_SetItem_object__object____ctor (Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, Il2CppObject* key, Il2CppObject* value, const MethodInfo_394DEB0* method);
// 0x3a4deb0

void Assets_Scripts_Utility_SetItem<object__object>___ctor
               (Assets_Scripts_Utility_SetItem_TKey__TValue__o *__this,Il2CppObject *key,
               Il2CppObject *value,MethodInfo_394DEB0 *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._Key_k__BackingField = key;
  il2cpp_runtime_glue(&__this->fields,key);
  (__this->fields)._Value_k__BackingField = value;
  il2cpp_runtime_glue(&(__this->fields)._Value_k__BackingField,value);
  return;
}


// Assets.Scripts.Utility.SetItem<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$.ctor
// il2cpp: void Assets_Scripts_Utility_SetItem___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor (Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o key, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, const MethodInfo_394E240* method);
// 0x3a4e240

void Assets_Scripts_Utility_SetItem<__Il2CppFullySharedGenericType____Il2CppFullySharedGenericType>___ctor
               (Assets_Scripts_Utility_SetItem_TKey__TValue__o *__this,
               Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o key,
               Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value,
               MethodInfo_394E240 *method)

{
  long lVar1;
  void *pvVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *pUVar6;
  char *__src;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *__src_00;
  undefined8 *__dest;
  undefined8 *puVar7;
  undefined8 *puVar8;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *apUStack_80 [2];
  undefined1 local_70 [56];
  undefined8 *local_38;
  
  pUVar6 = value.klass;
  local_70._8_8_ = key.monitor;
  lVar1 = *(long *)((long)(pUVar6->_1).byval_arg.data + 0xc0);
  local_70._48_8_ = ZEXT48(*(uint *)(*(long *)(lVar1 + 8) + 0xfc));
  local_70._40_8_ = ZEXT48(*(uint *)(*(long *)(lVar1 + 0x10) + 0xfc));
  puVar8 = (undefined8 *)((long)apUStack_80 + (8 - (local_70._48_8_ + 0xf & 0xfffffffffffffff0)));
  __dest = (undefined8 *)((long)puVar8 - (local_70._40_8_ + 0xf & 0xfffffffffffffff0));
  local_70._0_8_ = key.klass;
  local_70._16_8_ = __this;
  local_70._24_8_ = local_70._8_8_;
  __dest[-1] = 0x3a4e2b7;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  uVar3 = local_70._48_8_;
  pvVar2 = (pUVar6->_1).byval_arg.data;
  __src_00 = key.klass;
  if (-1 < *(int *)(*(long *)(*(long *)((long)pvVar2 + 0xc0) + 8) + 0x28)) {
    __src_00 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)local_70;
  }
  local_70._32_8_ = pUVar6;
  __dest[-1] = 0x3a4e2e6;
  memcpy(puVar8,__src_00,uVar3);
  uVar5 = local_70._16_8_;
  lVar1 = *(long *)((long)pvVar2 + 0xc0);
  puVar7 = *(undefined8 **)(lVar1 + 0x18);
  uVar3 = *puVar7;
  if (-1 < *(int *)(*(long *)(lVar1 + 8) + 0x28)) {
    puVar8 = (undefined8 *)*puVar8;
  }
  pcVar4 = (code *)puVar7[2];
  local_38 = puVar8;
  __dest[-1] = 0x3a4e317;
  (*pcVar4)(uVar3,puVar7,uVar5,&local_38,puVar8);
  uVar3 = local_70._40_8_;
  pvVar2 = (((Il2CppClass_1 *)local_70._32_8_)->byval_arg).data;
  __src = local_70 + 8;
  if (*(int *)(*(long *)(*(long *)((long)pvVar2 + 0xc0) + 0x10) + 0x28) < 0) {
    __src = (char *)local_70._24_8_;
  }
  __dest[-1] = 0x3a4e343;
  memcpy(__dest,__src,uVar3);
  lVar1 = *(long *)((long)pvVar2 + 0xc0);
  puVar8 = *(undefined8 **)(lVar1 + 0x20);
  uVar3 = *puVar8;
  puVar7 = __dest;
  if (-1 < *(int *)(*(long *)(lVar1 + 0x10) + 0x28)) {
    puVar7 = (undefined8 *)*__dest;
  }
  pcVar4 = (code *)puVar8[2];
  local_38 = puVar7;
  __dest[-1] = 0x3a4e36f;
  (*pcVar4)(uVar3,puVar8,uVar5,&local_38,puVar7);
  return;
}


// Assets.Scripts.Utility.SetItem<object, object>$$Equals
// il2cpp: bool Assets_Scripts_Utility_SetItem_object__object___Equals (Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, Il2CppObject* obj, const MethodInfo_394DEF0* method);
// 0x3a4def0

bool_conflict
Assets_Scripts_Utility_SetItem<object__object>__Equals
          (Assets_Scripts_Utility_SetItem_TKey__TValue__o *__this,Il2CppObject *obj,
          MethodInfo_394DEF0 *method)

{
  byte bVar1;
  Il2CppObject *pIVar2;
  Il2CppMethodPointer vtable_dispatch;
  bool_conflict bVar3;
  System_Type_o *left;
  System_Type_o *right;
  Il2CppClass *pIVar4;
  
  if (obj == (Il2CppObject *)0x0) {
    return 0;
  }
  if (__this != (Assets_Scripts_Utility_SetItem_TKey__TValue__o *)0x0) {
    left = System_Object__GetType((Il2CppObject *)__this,(MethodInfo *)0x0);
    right = System_Object__GetType(obj,(MethodInfo *)0x0);
    if (*(int *)(DAT_05711100 + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = System_Type__op_Inequality(left,right,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      return 0;
    }
    pIVar4 = method->klass->rgctx_data->_0_Assets_Scripts_Utility_SetItem_TKey__TValue_;
    if (((pIVar4->_2).field_0x6d & 1) == 0) {
      pIVar4 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar4);
    }
    bVar1 = (pIVar4->_2).naturalAligment;
    if (((obj->klass->_2).naturalAligment < bVar1) ||
       ((obj->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != pIVar4)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(obj,pIVar4);
    }
    pIVar2 = (__this->fields)._Key_k__BackingField;
    if (pIVar2 != (Il2CppObject *)0x0) {
      vtable_dispatch = pIVar2->klass->vtable[0].methodPtr;
      bVar3 = (*vtable_dispatch)
                        (pIVar2,obj[1].klass,pIVar2->klass->vtable[0].method,vtable_dispatch);
      return bVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Assets.Scripts.Utility.SetItem<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$Equals
// il2cpp: bool Assets_Scripts_Utility_SetItem___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Equals (Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, Il2CppObject* obj, const MethodInfo_394E380* method);
// 0x3a4e380

bool_conflict
Assets_Scripts_Utility_SetItem<__Il2CppFullySharedGenericType____Il2CppFullySharedGenericType>__Equals
          (Assets_Scripts_Utility_SetItem_TKey__TValue__o *__this,Il2CppObject *obj,
          MethodInfo_394E380 *method)

{
  byte bVar1;
  MethodInfo *pMVar2;
  Il2CppMethodPointer pIVar3;
  InvokerMethod pIVar4;
  Il2CppClass *pIVar5;
  System_Type_o *left;
  MethodInfo_394E380 *pMVar6;
  ulong uVar7;
  Assets_Scripts_Utility_SetItem_TKey__TValue__o *pAVar8;
  Il2CppObject *pIVar9;
  uint uVar10;
  bool_conflict bVar11;
  long lVar12;
  ulong uVar13;
  System_Type_o *right;
  Il2CppClass *pIVar14;
  Assets_Scripts_Utility_SetItem_TKey__TValue__RGCTXs *pAVar15;
  undefined1 *__s;
  bool_conflict bVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  System_Type_o *local_70;
  MethodInfo_394E380 *local_68;
  ulong local_60;
  Assets_Scripts_Utility_SetItem_TKey__TValue__o *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  Il2CppObject *local_40;
  char local_31;
  
  pIVar14 = method->klass->rgctx_data->_1_TKey;
  uVar10 = (pIVar14->_2).actualSize;
  local_60 = (ulong)uVar10;
  local_58 = __this;
  local_40 = obj;
  if (((pIVar14->_2).field_0x6d & 1) == 0) {
    uStack_80 = 0x3a4e3c3;
    lVar12 = il2cpp_glue_022c28b0();
    uVar10 = *(uint *)(lVar12 + 0xfc);
  }
  uVar7 = local_60;
  local_50 = auStack_78 + -((ulong)(uVar10 + 0x10) + 0xf & 0xfffffffffffffff0);
  uVar13 = local_60 + 0xf & 0xfffffffffffffff0;
  puVar17 = local_50 + -uVar13;
  puVar18 = puVar17 + -uVar13;
  __s = puVar18 + -uVar13;
  bVar16 = 0;
  *(undefined8 *)(__s + -8) = 0x3a4e415;
  memset(__s,0,uVar7);
  pAVar8 = local_58;
  if (local_40 != (Il2CppObject *)0x0) {
    local_68 = method;
    if (local_58 == (Assets_Scripts_Utility_SetItem_TKey__TValue__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)(__s + -8) = 0x3a4e5a7;
      il2cpp_raise_exception();
    }
    *(undefined8 *)(__s + -8) = 0x3a4e438;
    local_70 = System_Object__GetType((Il2CppObject *)pAVar8,(MethodInfo *)0x0);
    pIVar9 = local_40;
    *(undefined8 *)(__s + -8) = 0x3a4e447;
    right = System_Object__GetType(pIVar9,(MethodInfo *)0x0);
    if (*(int *)(DAT_05711100 + 0xe4) == 0) {
      *(undefined8 *)(__s + -8) = 0x3a4e466;
      il2cpp_init_class();
    }
    left = local_70;
    bVar16 = 0;
    *(undefined8 *)(__s + -8) = 0x3a4e477;
    bVar11 = System_Type__op_Inequality(left,right,(MethodInfo *)0x0);
    pMVar6 = local_68;
    if ((char)bVar11 == '\0') {
      pIVar14 = local_68->klass->rgctx_data->_0_Assets_Scripts_Utility_SetItem_TKey__TValue_;
      if (((pIVar14->_2).field_0x6d & 1) == 0) {
        *(undefined8 *)(__s + -8) = 0x3a4e4a2;
        pIVar14 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar14);
      }
      pIVar9 = local_40;
      pAVar8 = local_58;
      bVar1 = (pIVar14->_2).naturalAligment;
      if (((local_40->klass->_2).naturalAligment < bVar1) ||
         ((local_40->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != pIVar14)) {
                    /* WARNING: Subroutine does not return */
        *(undefined **)(__s + -8) = &UNK_03a4e5b3;
        il2cpp_unwind_resume(pIVar9,pIVar14);
      }
      pMVar2 = pMVar6->klass->rgctx_data->_5_Assets_Scripts_Utility_SetItem_TKey__TValue__get_Key;
      pIVar3 = pMVar2->methodPointer;
      pIVar4 = pMVar2->invoker_method;
      local_48 = puVar17;
      *(undefined8 *)(__s + -8) = 0x3a4e4f5;
      (*pIVar4)(pIVar3,pMVar2,pAVar8,&local_48,puVar17);
      uVar7 = local_60;
      *(undefined8 *)(__s + -8) = 0x3a4e504;
      memcpy(__s,puVar17,uVar7);
      pIVar9 = local_40;
      pMVar2 = pMVar6->klass->rgctx_data->_5_Assets_Scripts_Utility_SetItem_TKey__TValue__get_Key;
      pIVar3 = pMVar2->methodPointer;
      pIVar4 = pMVar2->invoker_method;
      local_48 = puVar18;
      *(undefined8 *)(__s + -8) = 0x3a4e527;
      (*pIVar4)(pIVar3,pMVar2,pIVar9,&local_48,puVar18);
      pIVar14 = pMVar6->klass->rgctx_data->_1_TKey;
      *(undefined8 *)(__s + -8) = 0x3a4e53e;
      puVar17 = (undefined1 *)il2cpp_runtime_glue(pIVar14,puVar18);
      pAVar15 = pMVar6->klass->rgctx_data;
      pIVar14 = pAVar15->_1_TKey;
      if (((pIVar14->_2).field_0x6d & 1) == 0) {
        *(undefined8 *)(__s + -8) = 0x3a4e55e;
        pIVar14 = (Il2CppClass *)il2cpp_glue_022c28b0();
        pAVar15 = pMVar6->klass->rgctx_data;
      }
      puVar18 = local_50;
      pIVar5 = pAVar15[1]._0_Assets_Scripts_Utility_SetItem_TKey__TValue_;
      local_48 = puVar17;
      *(undefined8 *)(__s + -8) = 0x3a4e588;
      il2cpp_glue_022754b0(pIVar14,pIVar5,puVar18,__s,&local_48,&local_31);
      bVar16 = (bool_conflict)CONCAT71((int7)((ulong)&local_48 >> 8),local_31 != '\0');
    }
  }
  return bVar16;
}


// Assets.Scripts.Utility.SetItem<object, object>$$GetHashCode
// il2cpp: int32_t Assets_Scripts_Utility_SetItem_object__object___GetHashCode (Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, const MethodInfo_394DFE0* method);
// 0x3a4dfe0

int32_t Assets_Scripts_Utility_SetItem<object__object>__GetHashCode
                  (Assets_Scripts_Utility_SetItem_TKey__TValue__o *__this,MethodInfo_394DFE0 *method
                  )

{
  Il2CppObject *pIVar1;
  Il2CppMethodPointer vtable_dispatch;
  int32_t iVar2;
  undefined8 in_RDX;
  
  pIVar1 = (__this->fields)._Key_k__BackingField;
  if (pIVar1 != (Il2CppObject *)0x0) {
    vtable_dispatch = pIVar1->klass->vtable[2].methodPtr;
    iVar2 = (*vtable_dispatch)
                      (pIVar1,pIVar1->klass->vtable[2].method,in_RDX,vtable_dispatch);
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Assets.Scripts.Utility.SetItem<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$GetHashCode
// il2cpp: int32_t Assets_Scripts_Utility_SetItem___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___GetHashCode (Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, const MethodInfo_394E5C0* method);
// 0x3a4e5c0

int32_t Assets_Scripts_Utility_SetItem<__Il2CppFullySharedGenericType____Il2CppFullySharedGenericType>__GetHashCode
                  (Assets_Scripts_Utility_SetItem_TKey__TValue__o *__this,MethodInfo_394E5C0 *method
                  )

{
  MethodInfo *pMVar1;
  Il2CppMethodPointer pIVar2;
  InvokerMethod pIVar3;
  Il2CppClass *pIVar4;
  MethodInfo_394E5C0 *pMVar5;
  Assets_Scripts_Utility_SetItem_TKey__TValue__o *pAVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  Il2CppClass *pIVar10;
  Assets_Scripts_Utility_SetItem_TKey__TValue__RGCTXs *pAVar11;
  undefined1 *__s;
  undefined1 *__src;
  ulong __n;
  Assets_Scripts_Utility_SetItem_TKey__TValue__c *pAVar12;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined1 *local_50;
  MethodInfo_394E5C0 *local_48;
  Assets_Scripts_Utility_SetItem_TKey__TValue__o *local_40;
  int32_t local_34;
  
  pAVar12 = method->klass;
  pIVar10 = pAVar12->rgctx_data->_1_TKey;
  uVar7 = (pIVar10->_2).actualSize;
  __n = (ulong)uVar7;
  local_40 = __this;
  if (((pIVar10->_2).field_0x6d & 1) == 0) {
    uStack_60 = 0x3a4e5ff;
    lVar8 = il2cpp_glue_022c28b0();
    uVar7 = *(uint *)(lVar8 + 0xfc);
    pAVar12 = method->klass;
  }
  uVar9 = __n + 0xf & 0xfffffffffffffff0;
  __src = auStack_58 + -((ulong)(uVar7 + 0x10) + 0xf & 0xfffffffffffffff0) + -uVar9;
  __s = __src + -uVar9;
  local_48 = method;
  *(undefined8 *)(__s + -8) = 0x3a4e648;
  memset(__s,0,__n);
  pAVar6 = local_40;
  pMVar1 = pAVar12->rgctx_data->_5_Assets_Scripts_Utility_SetItem_TKey__TValue__get_Key;
  pIVar2 = pMVar1->methodPointer;
  pIVar3 = pMVar1->invoker_method;
  local_50 = __src;
  *(undefined8 *)(__s + -8) = 0x3a4e668;
  (*pIVar3)(pIVar2,pMVar1,pAVar6,&local_50,__src);
  pMVar5 = local_48;
  *(undefined8 *)(__s + -8) = 0x3a4e67a;
  memcpy(__s,__src,__n);
  pAVar11 = pMVar5->klass->rgctx_data;
  pIVar10 = pAVar11->_1_TKey;
  if (((pIVar10->_2).field_0x6d & 1) == 0) {
    *(undefined8 *)(__s + -8) = 0x3a4e697;
    pIVar10 = (Il2CppClass *)il2cpp_glue_022c28b0();
    pAVar11 = pMVar5->klass->rgctx_data;
  }
  pIVar4 = pAVar11[1]._1_TKey;
  *(undefined8 *)(__s + -8) = 0x3a4e6bb;
  il2cpp_glue_022754b0(pIVar10,pIVar4,auStack_58 + -((ulong)(uVar7 + 0x10) + 0xf & 0xfffffffffffffff0),__s,0
               ,&local_34);
  return local_34;
}


// Assets.Scripts.Utility.SetItem<object, object>$$ToString
// il2cpp: System_String_o* Assets_Scripts_Utility_SetItem_object__object___ToString (Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, const MethodInfo_394E010* method);
// 0x3a4e010

System_String_o *
Assets_Scripts_Utility_SetItem<object__object>__ToString
          (Assets_Scripts_Utility_SetItem_TKey__TValue__o *__this,MethodInfo_394E010 *method)

{
  Il2CppObject *pIVar1;
  Il2CppMethodPointer vtable_dispatch;
  System_String_o *pSVar2;
  undefined8 in_RDX;
  
  pIVar1 = (__this->fields)._Key_k__BackingField;
  if (pIVar1 != (Il2CppObject *)0x0) {
    vtable_dispatch = pIVar1->klass->vtable[3].methodPtr;
    pSVar2 = (System_String_o *)
             (*vtable_dispatch)
                       (pIVar1,pIVar1->klass->vtable[3].method,in_RDX,vtable_dispatch);
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Assets.Scripts.Utility.SetItem<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$ToString
// il2cpp: System_String_o* Assets_Scripts_Utility_SetItem___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___ToString (Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, const MethodInfo_394E6D0* method);
// 0x3a4e6d0

/* WARNING: Type propagation algorithm not settling */

System_String_o *
Assets_Scripts_Utility_SetItem<__Il2CppFullySharedGenericType____Il2CppFullySharedGenericType>__ToString
          (Assets_Scripts_Utility_SetItem_TKey__TValue__o *__this,MethodInfo_394E6D0 *method)

{
  MethodInfo *pMVar1;
  Il2CppMethodPointer pIVar2;
  InvokerMethod pIVar3;
  Il2CppClass *pIVar4;
  System_String_c *pSVar5;
  void *pvVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  Il2CppClass *pIVar10;
  Assets_Scripts_Utility_SetItem_TKey__TValue__RGCTXs *pAVar11;
  void *__s;
  System_String_o *__src;
  ulong __n;
  Assets_Scripts_Utility_SetItem_TKey__TValue__c *pAVar12;
  undefined8 uStack_50;
  System_String_o local_48;
  
  pAVar12 = method->klass;
  pIVar10 = pAVar12->rgctx_data->_1_TKey;
  uVar7 = (pIVar10->_2).actualSize;
  __n = (ulong)uVar7;
  local_48.monitor = __this;
  if (((pIVar10->_2).field_0x6d & 1) == 0) {
    uStack_50 = 0x3a4e70f;
    lVar8 = il2cpp_glue_022c28b0();
    uVar7 = *(uint *)(lVar8 + 0xfc);
    pAVar12 = method->klass;
  }
  lVar8 = (long)&local_48 - ((ulong)(uVar7 + 0x10) + 0xf & 0xfffffffffffffff0);
  uVar9 = __n + 0xf & 0xfffffffffffffff0;
  __src = (System_String_o *)(lVar8 - uVar9);
  __s = (void *)((long)__src - uVar9);
  local_48.klass = (System_String_c *)method;
  *(undefined8 *)((long)__s + -8) = 0x3a4e758;
  memset(__s,0,__n);
  pvVar6 = local_48.monitor;
  pMVar1 = pAVar12->rgctx_data->_5_Assets_Scripts_Utility_SetItem_TKey__TValue__get_Key;
  pIVar2 = pMVar1->methodPointer;
  pIVar3 = pMVar1->invoker_method;
  local_48.fields = (System_String_Fields)__src;
  *(undefined8 *)((long)__s + -8) = 0x3a4e778;
  (*pIVar3)(pIVar2,pMVar1,pvVar6,(void **)&local_48.fields,__src);
  pSVar5 = local_48.klass;
  *(undefined8 *)((long)__s + -8) = 0x3a4e78a;
  memcpy(__s,__src,__n);
  pAVar11 = ((pSVar5->_1).byval_arg.data)->rgctx_data;
  pIVar10 = pAVar11->_1_TKey;
  if (((pIVar10->_2).field_0x6d & 1) == 0) {
    *(undefined8 *)((long)__s + -8) = 0x3a4e7a7;
    pIVar10 = (Il2CppClass *)il2cpp_glue_022c28b0();
    pAVar11 = ((pSVar5->_1).byval_arg.data)->rgctx_data;
  }
  pIVar4 = pAVar11[1]._2_TValue;
  *(undefined8 *)((long)__s + -8) = 0x3a4e7cb;
  il2cpp_glue_022754b0(pIVar10,pIVar4,lVar8,__s,0,&local_48.fields);
  return (System_String_o *)local_48.fields;
}


