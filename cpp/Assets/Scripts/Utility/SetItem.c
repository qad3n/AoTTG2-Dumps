// Type: Assets.Scripts.Utility.SetItem
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Assets.Scripts.Utility/SetItem.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/SetItem.cs
// --------------------------------

// Assets.Scripts.Utility.SetItem<object, object>$$get_Key
// il2cpp: Il2CppObject* Assets_Scripts_Utility_SetItem_object__object___get_Key (Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, const MethodInfo_39DF840* method);
// 0x3adf840

Il2CppObject *
Assets_Scripts_Utility_SetItem_object__object___get_Key
          (Assets_Scripts_Utility_SetItem_TKey__TValue__o *__this,MethodInfo_39DF840 *method)

{
  return (__this->fields)._Key_k__BackingField;
}


// Assets.Scripts.Utility.SetItem<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$get_Key
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o Assets_Scripts_Utility_SetItem___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Key (Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, const MethodInfo_39DFA10* method);
// 0x3adfa10

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
Assets_Scripts_Utility_SetItem___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Key
          (Assets_Scripts_Utility_SetItem_TKey__TValue__o *__this,MethodInfo_39DFA10 *method)

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
  *(undefined8 *)((long)&uStack_30 + lVar3) = 0x3adfa53;
  __src = (void *)il2cpp_runtime_helper_02338550(__this,uVar2);
  *(undefined8 *)((long)&uStack_30 + lVar3) = 0x3adfa61;
  memcpy(auStack_28 + lVar3,__src,__n);
  *(undefined8 *)((long)&uStack_30 + lVar3) = 0x3adfa6f;
  UVar4.klass = memcpy(method,auStack_28 + lVar3,__n);
  UVar4.monitor = extraout_RDX;
  return UVar4;
}


// Assets.Scripts.Utility.SetItem<object, object>$$set_Key
// il2cpp: void Assets_Scripts_Utility_SetItem_object__object___set_Key (Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, Il2CppObject* value, const MethodInfo_39DF850* method);
// 0x3adf850

void Assets_Scripts_Utility_SetItem_object__object___set_Key
               (Assets_Scripts_Utility_SetItem_TKey__TValue__o *__this,Il2CppObject *value,
               MethodInfo_39DF850 *method)

{
  (__this->fields)._Key_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&__this->fields);
  return;
}


// Assets.Scripts.Utility.SetItem<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$set_Key
// il2cpp: void Assets_Scripts_Utility_SetItem___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Key (Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, const MethodInfo_39DFA80* method);
// 0x3adfa80

void Assets_Scripts_Utility_SetItem___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Key
               (Assets_Scripts_Utility_SetItem_TKey__TValue__o *__this,
               Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value,MethodInfo_39DFA80 *method)

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
  *(undefined8 *)((long)&uStack_40 + lVar4) = 0x3adfad5;
  memcpy(auStack_38 + lVar4,__src,__n);
  uVar3 = *(undefined8 *)(**(long **)(lVar1 + 0xc0) + 0x80);
  *(undefined8 *)((long)&uStack_40 + lVar4) = 0x3adfaf5;
  il2cpp_runtime_helper_022b2970(__this,uVar3,auStack_38 + lVar4,__n);
  return;
}


// Assets.Scripts.Utility.SetItem<object, object>$$get_Value
// il2cpp: Il2CppObject* Assets_Scripts_Utility_SetItem_object__object___get_Value (Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, const MethodInfo_39DF860* method);
// 0x3adf860

Il2CppObject *
Assets_Scripts_Utility_SetItem_object__object___get_Value
          (Assets_Scripts_Utility_SetItem_TKey__TValue__o *__this,MethodInfo_39DF860 *method)

{
  return (__this->fields)._Value_k__BackingField;
}


// Assets.Scripts.Utility.SetItem<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$get_Value
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o Assets_Scripts_Utility_SetItem___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Value (Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, const MethodInfo_39DFB10* method);
// 0x3adfb10

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
Assets_Scripts_Utility_SetItem___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Value
          (Assets_Scripts_Utility_SetItem_TKey__TValue__o *__this,MethodInfo_39DFB10 *method)

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
  *(undefined8 *)((long)&uStack_30 + lVar3) = 0x3adfb57;
  __src = (void *)il2cpp_runtime_helper_02338550(__this,lVar2 + 0x20);
  *(undefined8 *)((long)&uStack_30 + lVar3) = 0x3adfb65;
  memcpy(auStack_28 + lVar3,__src,__n);
  *(undefined8 *)((long)&uStack_30 + lVar3) = 0x3adfb73;
  UVar4.klass = memcpy(method,auStack_28 + lVar3,__n);
  UVar4.monitor = extraout_RDX;
  return UVar4;
}


// Assets.Scripts.Utility.SetItem<object, object>$$set_Value
// il2cpp: void Assets_Scripts_Utility_SetItem_object__object___set_Value (Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, Il2CppObject* value, const MethodInfo_39DF870* method);
// 0x3adf870

void Assets_Scripts_Utility_SetItem_object__object___set_Value
               (Assets_Scripts_Utility_SetItem_TKey__TValue__o *__this,Il2CppObject *value,
               MethodInfo_39DF870 *method)

{
  (__this->fields)._Value_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Value_k__BackingField);
  return;
}


// Assets.Scripts.Utility.SetItem<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$set_Value
// il2cpp: void Assets_Scripts_Utility_SetItem___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Value (Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, const MethodInfo_39DFB80* method);
// 0x3adfb80

void Assets_Scripts_Utility_SetItem___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Value
               (Assets_Scripts_Utility_SetItem_TKey__TValue__o *__this,
               Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value,MethodInfo_39DFB80 *method)

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
  *(undefined8 *)((long)&uStack_40 + lVar3) = 0x3adfbd5;
  memcpy(auStack_38 + lVar3,__src,__n);
  lVar1 = *(long *)(**(long **)(lVar1 + 0xc0) + 0x80);
  *(undefined8 *)((long)&uStack_40 + lVar3) = 0x3adfbf9;
  il2cpp_runtime_helper_022b2970(__this,lVar1 + 0x20,auStack_38 + lVar3,__n);
  return;
}


// Assets.Scripts.Utility.SetItem<object, object>$$.ctor
// il2cpp: void Assets_Scripts_Utility_SetItem_object__object____ctor (Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, Il2CppObject* key, Il2CppObject* value, const MethodInfo_39DF880* method);
// 0x3adf880

void Assets_Scripts_Utility_SetItem_object__object____ctor
               (Assets_Scripts_Utility_SetItem_TKey__TValue__o *__this,Il2CppObject *key,Il2CppObject *value,
               MethodInfo_39DF880 *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._Key_k__BackingField = key;
  il2cpp_runtime_helper_022b4080(&__this->fields,key);
  (__this->fields)._Value_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Value_k__BackingField,value);
  return;
}


// Assets.Scripts.Utility.SetItem<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$.ctor
// il2cpp: void Assets_Scripts_Utility_SetItem___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor (Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o key, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, const MethodInfo_39DFC10* method);
// 0x3adfc10

void Assets_Scripts_Utility_SetItem___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor
               (Assets_Scripts_Utility_SetItem_TKey__TValue__o *__this,
               Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o key,
               Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value,MethodInfo_39DFC10 *method)

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
  
  local_70._8_8_ = key.monitor;
  pUVar6 = value.klass;
  lVar1 = *(long *)((long)(pUVar6->_1).byval_arg.data + 0xc0);
  local_70._48_8_ = ZEXT48(*(uint *)(*(long *)(lVar1 + 8) + 0xfc));
  local_70._40_8_ = ZEXT48(*(uint *)(*(long *)(lVar1 + 0x10) + 0xfc));
  puVar8 = (undefined8 *)((long)apUStack_80 + (8 - (local_70._48_8_ + 0xf & 0xfffffffffffffff0)));
  __dest = (undefined8 *)((long)puVar8 - (local_70._40_8_ + 0xf & 0xfffffffffffffff0));
  local_70._0_8_ = key.klass;
  local_70._16_8_ = __this;
  local_70._24_8_ = local_70._8_8_;
  __dest[-1] = 0x3adfc87;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  uVar3 = local_70._48_8_;
  pvVar2 = (pUVar6->_1).byval_arg.data;
  __src_00 = key.klass;
  if (-1 < *(int *)(*(long *)(*(long *)((long)pvVar2 + 0xc0) + 8) + 0x28)) {
    __src_00 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)local_70;
  }
  local_70._32_8_ = pUVar6;
  __dest[-1] = 0x3adfcb6;
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
  __dest[-1] = 0x3adfce7;
  (*pcVar4)(uVar3,puVar7,uVar5,&local_38,puVar8);
  uVar3 = local_70._40_8_;
  pvVar2 = (((Il2CppClass_1 *)local_70._32_8_)->byval_arg).data;
  __src = local_70 + 8;
  if (*(int *)(*(long *)(*(long *)((long)pvVar2 + 0xc0) + 0x10) + 0x28) < 0) {
    __src = (char *)local_70._24_8_;
  }
  __dest[-1] = 0x3adfd13;
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
  __dest[-1] = 0x3adfd3f;
  (*pcVar4)(uVar3,puVar8,uVar5,&local_38,puVar7);
  return;
}


// Assets.Scripts.Utility.SetItem<object, object>$$Equals
// il2cpp: bool Assets_Scripts_Utility_SetItem_object__object___Equals (Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, Il2CppObject* obj, const MethodInfo_39DF8C0* method);
// 0x3adf8c0

bool_conflict
Assets_Scripts_Utility_SetItem_object__object___Equals
          (Assets_Scripts_Utility_SetItem_TKey__TValue__o *__this,Il2CppObject *obj,MethodInfo_39DF8C0 *method
          )

{
  byte bVar1;
  Il2CppObject *pIVar2;
  Il2CppMethodPointer vtableDispatch;
  code *UNRECOVERED_JUMPTABLE_00;
  long *plVar3;
  long lVar4;
  bool_conflict bVar5;
  System_Type_o *left;
  Il2CppClass *__dest;
  void *pvVar6;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  System_Type_o *unaff_RBX;
  Il2CppClass *pIVar7;
  Il2CppObject *unaff_R13;
  MethodInfo_39DF8C0 *unaff_R15;
  ulong __n;
  undefined1 auVar8 [16];
  undefined8 uStack_68;
  undefined8 uStack_60;
  System_Type_o *pSStack_58;
  Assets_Scripts_Utility_SetItem_TKey__TValue__o *pAStack_50;
  MethodInfo_39DF8C0 *pMStack_48;
  
  if (obj == (Il2CppObject *)0x0) {
    return 0;
  }
  if (__this != (Assets_Scripts_Utility_SetItem_TKey__TValue__o *)0x0) {
    left = System_Object__GetType((Il2CppObject *)__this,(MethodInfo *)0x0);
    unaff_RBX = System_Object__GetType(obj,(MethodInfo *)0x0);
    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = System_Type__op_Inequality(left,unaff_RBX,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      return 0;
    }
    __dest = method->klass->rgctx_data->_0_Assets_Scripts_Utility_SetItem_TKey__TValue_;
    if (((__dest->_2).field_0x6d & 1) == 0) {
      __dest = (Il2CppClass *)il2cpp_runtime_helper_023009c0(__dest);
    }
    bVar1 = (__dest->_2).naturalAligment;
    unaff_R13 = obj;
    unaff_R15 = method;
    if (((obj->klass->_2).naturalAligment < bVar1) ||
       ((obj->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != __dest)) goto label_03adf9a1;
    pIVar2 = (__this->fields)._Key_k__BackingField;
    if (pIVar2 != (Il2CppObject *)0x0) {
      vtableDispatch = pIVar2->klass->vtable[0].methodPtr;
      bVar5 = (*vtableDispatch)
                        (pIVar2,obj[1].klass,pIVar2->klass->vtable[0].method,vtableDispatch);
      return bVar5;
    }
  }
  __dest = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
label_03adf9a1:
  il2cpp_runtime_helper_022b2fd0();
  pIVar7 = unaff_R13[1].klass;
  if (pIVar7 != (Il2CppClass *)0x0) {
    pvVar6 = (pIVar7->_1).image;
    UNRECOVERED_JUMPTABLE_00 = *(code **)((long)pvVar6 + 0x158);
    bVar5 = (*UNRECOVERED_JUMPTABLE_00)
                      (pIVar7,*(undefined8 *)((long)pvVar6 + 0x160),extraout_RDX,UNRECOVERED_JUMPTABLE_00);
    return bVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  plVar3 = (long *)(pIVar7->_1).name;
  if (plVar3 == (long *)0x0) {
    auVar8 = il2cpp_runtime_helper_022b2c90();
    uStack_60 = auVar8._0_8_;
    __n = (ulong)*(uint *)(*(long *)(*(long *)(*(long *)(auVar8._8_8_ + 0x20) + 0xc0) + 8) + 0xfc);
    lVar4 = -(__n + 0xf & 0xfffffffffffffff0);
    pSStack_58 = unaff_RBX;
    pAStack_50 = __this;
    pMStack_48 = unaff_R15;
    *(undefined8 *)((long)&uStack_68 + lVar4) = 0x3adfa53;
    pvVar6 = (void *)il2cpp_runtime_helper_02338550();
    *(undefined8 *)((long)&uStack_68 + lVar4) = 0x3adfa61;
    memcpy((void *)((long)&uStack_60 + lVar4),pvVar6,__n);
    *(undefined8 *)((long)&uStack_68 + lVar4) = 0x3adfa6f;
    pvVar6 = memcpy(__dest,(void *)((long)&uStack_60 + lVar4),__n);
    return (bool_conflict)pvVar6;
  }
  UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar3 + 0x168);
  bVar5 = (*UNRECOVERED_JUMPTABLE_00)
                    (plVar3,*(undefined8 *)(*plVar3 + 0x170),extraout_RDX_00,UNRECOVERED_JUMPTABLE_00);
  return bVar5;
}


// Assets.Scripts.Utility.SetItem<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$Equals
// il2cpp: bool Assets_Scripts_Utility_SetItem___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Equals (Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, Il2CppObject* obj, const MethodInfo_39DFD50* method);
// 0x3adfd50

bool_conflict
Assets_Scripts_Utility_SetItem___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Equals
          (Assets_Scripts_Utility_SetItem_TKey__TValue__o *__this,Il2CppObject *obj,MethodInfo_39DFD50 *method
          )

{
  byte bVar1;
  MethodInfo *pMVar2;
  Il2CppMethodPointer pIVar3;
  InvokerMethod pIVar4;
  Il2CppClass *pIVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  System_Type_o *left;
  Assets_Scripts_Utility_SetItem_TKey__TValue__o *pAVar10;
  bool_conflict bVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  System_Type_o *right;
  Il2CppClass *pIVar15;
  Assets_Scripts_Utility_SetItem_TKey__TValue__RGCTXs *pAVar16;
  long lVar17;
  long lVar18;
  undefined1 *__s;
  Il2CppObject *pIVar19;
  bool_conflict bVar20;
  ulong uVar21;
  undefined1 *puVar22;
  void *pvVar23;
  undefined1 *puVar24;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [8];
  long alStack_c8 [3];
  bool_conflict bStack_ac;
  undefined8 auStack_a8 [5];
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  System_Type_o *local_70;
  MethodInfo_39DFD50 *local_68;
  ulong local_60;
  Assets_Scripts_Utility_SetItem_TKey__TValue__o *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  Il2CppObject *local_40;
  char local_31;
  
  pIVar15 = method->klass->rgctx_data->_1_TKey;
  uVar12 = (pIVar15->_2).actualSize;
  local_60 = (ulong)uVar12;
  local_58 = __this;
  local_40 = obj;
  if (((pIVar15->_2).field_0x6d & 1) == 0) {
    uStack_80 = 0x3adfd93;
    lVar13 = il2cpp_runtime_helper_023009c0();
    uVar12 = *(uint *)(lVar13 + 0xfc);
  }
  uVar21 = local_60;
  local_50 = auStack_78 + -((ulong)(uVar12 + 0x10) + 0xf & 0xfffffffffffffff0);
  uVar14 = local_60 + 0xf & 0xfffffffffffffff0;
  puVar22 = local_50 + -uVar14;
  puVar24 = puVar22 + -uVar14;
  __s = puVar24 + -uVar14;
  bVar20 = 0;
  *(undefined8 *)(__s + -8) = 0x3adfde5;
  memset(__s,0,uVar21);
  pAVar10 = local_58;
  if (local_40 != (Il2CppObject *)0x0) {
    local_68 = method;
    if (local_58 == (Assets_Scripts_Utility_SetItem_TKey__TValue__o *)0x0) {
      *(undefined8 *)(__s + -8) = 0x3adff77;
      pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_022b2c90();
label_03adff77:
      pIVar19 = local_40;
      *(undefined8 *)(__s + -8) = 0x3adff83;
      il2cpp_runtime_helper_022b2fd0();
      *(undefined1 **)(__s + -8) = &stack0xfffffffffffffff8;
      *(undefined1 **)(__s + -0x10) = puVar24;
      *(undefined1 **)(__s + -0x18) = puVar22;
      *(MethodInfo_39DFD50 **)(__s + -0x20) = method;
      *(undefined8 *)(__s + -0x28) = 0;
      *(undefined1 **)(__s + -0x30) = __s;
      *(Il2CppObject **)(__s + -0x40) = pIVar19;
      pvVar23 = (pIVar15->_1).byval_arg.data;
      lVar13 = *(long *)(*(long *)((long)pvVar23 + 0xc0) + 8);
      uVar12 = *(uint *)(lVar13 + 0xfc);
      uVar21 = (ulong)uVar12;
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        *(undefined8 *)(__s + -0x60) = 0x3adffcf;
        lVar13 = il2cpp_runtime_helper_023009c0();
        uVar12 = *(uint *)(lVar13 + 0xfc);
        pvVar23 = (pIVar15->_1).byval_arg.data;
      }
      *(Il2CppClass **)(__s + -0x48) = pIVar15;
      uVar14 = uVar21 + 0xf & 0xfffffffffffffff0;
      puVar24 = __s + (-0x58 - ((ulong)(uVar12 + 0x10) + 0xf & 0xfffffffffffffff0)) + -uVar14;
      puVar22 = puVar24 + -uVar14;
      *(undefined8 *)(puVar22 + -8) = 0x3ae0018;
      memset(puVar22,0,uVar21);
      puVar6 = *(undefined8 **)(*(long *)((long)pvVar23 + 0xc0) + 0x28);
      uVar7 = *puVar6;
      *(undefined1 **)(__s + -0x50) = puVar24;
      uVar8 = *(undefined8 *)(__s + -0x40);
      pcVar9 = (code *)puVar6[2];
      *(undefined8 *)(puVar22 + -8) = 0x3ae0038;
      (*pcVar9)(uVar7,puVar6,uVar8,__s + -0x50,puVar24);
      lVar13 = *(long *)(__s + -0x48);
      *(undefined8 *)(puVar22 + -8) = 0x3ae004a;
      memcpy(puVar22,puVar24,uVar21);
      lVar18 = *(long *)(*(long *)(lVar13 + 0x20) + 0xc0);
      lVar17 = *(long *)(lVar18 + 8);
      if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
        *(undefined8 *)(puVar22 + -8) = 0x3ae0067;
        lVar17 = il2cpp_runtime_helper_023009c0();
        lVar18 = *(long *)(*(long *)(lVar13 + 0x20) + 0xc0);
      }
      uVar7 = *(undefined8 *)(lVar18 + 0x38);
      *(undefined8 *)(puVar22 + -8) = 0x3ae008b;
      il2cpp_runtime_helper_022b35c0(lVar17,uVar7,__s + (-0x58 - ((ulong)(uVar12 + 0x10) + 0xf & 0xfffffffffffffff0)),puVar22,0,
                   __s + -0x34);
      return *(bool_conflict *)(__s + -0x34);
    }
    *(undefined8 *)(__s + -8) = 0x3adfe08;
    local_70 = System_Object__GetType((Il2CppObject *)pAVar10,(MethodInfo *)0x0);
    pIVar19 = local_40;
    *(undefined8 *)(__s + -8) = 0x3adfe17;
    right = System_Object__GetType(pIVar19,(MethodInfo *)0x0);
    if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
      *(undefined8 *)(__s + -8) = 0x3adfe36;
      il2cpp_runtime_helper_02337ed0();
    }
    left = local_70;
    bVar20 = 0;
    *(undefined8 *)(__s + -8) = 0x3adfe47;
    bVar11 = System_Type__op_Inequality(left,right,(MethodInfo *)0x0);
    method = local_68;
    if ((char)bVar11 == '\0') {
      pIVar15 = local_68->klass->rgctx_data->_0_Assets_Scripts_Utility_SetItem_TKey__TValue_;
      if (((pIVar15->_2).field_0x6d & 1) == 0) {
        *(undefined8 *)(__s + -8) = 0x3adfe72;
        pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar15);
      }
      pAVar10 = local_58;
      bVar1 = (pIVar15->_2).naturalAligment;
      if (((local_40->klass->_2).naturalAligment < bVar1) ||
         ((local_40->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != pIVar15)) goto label_03adff77;
      pMVar2 = method->klass->rgctx_data->_5_Assets_Scripts_Utility_SetItem_TKey__TValue__get_Key;
      pIVar3 = pMVar2->methodPointer;
      pIVar4 = pMVar2->invoker_method;
      local_48 = puVar22;
      *(undefined8 *)(__s + -8) = 0x3adfec5;
      (*pIVar4)(pIVar3,pMVar2,pAVar10,&local_48,puVar22);
      uVar21 = local_60;
      *(undefined8 *)(__s + -8) = 0x3adfed4;
      memcpy(__s,puVar22,uVar21);
      pIVar19 = local_40;
      pMVar2 = method->klass->rgctx_data->_5_Assets_Scripts_Utility_SetItem_TKey__TValue__get_Key;
      pIVar3 = pMVar2->methodPointer;
      pIVar4 = pMVar2->invoker_method;
      local_48 = puVar24;
      *(undefined8 *)(__s + -8) = 0x3adfef7;
      (*pIVar4)(pIVar3,pMVar2,pIVar19,&local_48,puVar24);
      pIVar15 = method->klass->rgctx_data->_1_TKey;
      *(undefined8 *)(__s + -8) = 0x3adff0e;
      puVar22 = (undefined1 *)il2cpp_runtime_helper_02304f30(pIVar15,puVar24);
      pAVar16 = method->klass->rgctx_data;
      pIVar15 = pAVar16->_1_TKey;
      if (((pIVar15->_2).field_0x6d & 1) == 0) {
        *(undefined8 *)(__s + -8) = 0x3adff2e;
        pIVar15 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
        pAVar16 = method->klass->rgctx_data;
      }
      puVar24 = local_50;
      pIVar5 = pAVar16[1]._0_Assets_Scripts_Utility_SetItem_TKey__TValue_;
      local_48 = puVar22;
      *(undefined8 *)(__s + -8) = 0x3adff58;
      il2cpp_runtime_helper_022b35c0(pIVar15,pIVar5,puVar24,__s,&local_48,&local_31);
      bVar20 = (bool_conflict)CONCAT71((int7)((ulong)&local_48 >> 8),local_31 != '\0');
    }
  }
  return bVar20;
}


// Assets.Scripts.Utility.SetItem<object, object>$$GetHashCode
// il2cpp: int32_t Assets_Scripts_Utility_SetItem_object__object___GetHashCode (Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, const MethodInfo_39DF9B0* method);
// 0x3adf9b0

int32_t Assets_Scripts_Utility_SetItem_object__object___GetHashCode
                  (Assets_Scripts_Utility_SetItem_TKey__TValue__o *__this,MethodInfo_39DF9B0 *method)

{
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  Il2CppClass *pIVar1;
  code *vtableDispatch;
  long lVar2;
  int32_t iVar3;
  void *pvVar4;
  undefined8 in_RDX;
  undefined8 extraout_RDX;
  Il2CppObject *pIVar5;
  ulong __n;
  undefined1 auVar6 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  pIVar5 = (__this->fields)._Key_k__BackingField;
  if (pIVar5 != (Il2CppObject *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = pIVar5->klass->vtable[2].methodPtr;
    iVar3 = (*UNRECOVERED_JUMPTABLE_00)
                      (pIVar5,pIVar5->klass->vtable[2].method,in_RDX,UNRECOVERED_JUMPTABLE_00);
    return iVar3;
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar1 = pIVar5[1].klass;
  if (pIVar1 != (Il2CppClass *)0x0) {
    pvVar4 = (pIVar1->_1).image;
    vtableDispatch = *(code **)((long)pvVar4 + 0x168);
    iVar3 = (*vtableDispatch)
                      (pIVar1,*(undefined8 *)((long)pvVar4 + 0x170),extraout_RDX,vtableDispatch);
    return iVar3;
  }
  auVar6 = il2cpp_runtime_helper_022b2c90();
  uStack_38 = auVar6._0_8_;
  __n = (ulong)*(uint *)(*(long *)(*(long *)(*(long *)(auVar6._8_8_ + 0x20) + 0xc0) + 8) + 0xfc);
  lVar2 = -(__n + 0xf & 0xfffffffffffffff0);
  *(undefined8 *)((long)&uStack_40 + lVar2) = 0x3adfa53;
  pvVar4 = (void *)il2cpp_runtime_helper_02338550();
  *(undefined8 *)((long)&uStack_40 + lVar2) = 0x3adfa61;
  memcpy((void *)((long)&uStack_38 + lVar2),pvVar4,__n);
  *(undefined8 *)((long)&uStack_40 + lVar2) = 0x3adfa6f;
  pvVar4 = memcpy(method,(void *)((long)&uStack_38 + lVar2),__n);
  return (int32_t)pvVar4;
}


// Assets.Scripts.Utility.SetItem<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$GetHashCode
// il2cpp: int32_t Assets_Scripts_Utility_SetItem___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___GetHashCode (Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, const MethodInfo_39DFF90* method);
// 0x3adff90

int32_t Assets_Scripts_Utility_SetItem___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___GetHashCode
                  (Assets_Scripts_Utility_SetItem_TKey__TValue__o *__this,MethodInfo_39DFF90 *method)

{
  MethodInfo *pMVar1;
  Il2CppMethodPointer pIVar2;
  InvokerMethod pIVar3;
  Il2CppClass *pIVar4;
  MethodInfo_39DFF90 *pMVar5;
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
  MethodInfo_39DFF90 *local_48;
  Assets_Scripts_Utility_SetItem_TKey__TValue__o *local_40;
  int32_t local_34;
  
  pAVar12 = method->klass;
  pIVar10 = pAVar12->rgctx_data->_1_TKey;
  uVar7 = (pIVar10->_2).actualSize;
  __n = (ulong)uVar7;
  local_40 = __this;
  if (((pIVar10->_2).field_0x6d & 1) == 0) {
    uStack_60 = 0x3adffcf;
    lVar8 = il2cpp_runtime_helper_023009c0();
    uVar7 = *(uint *)(lVar8 + 0xfc);
    pAVar12 = method->klass;
  }
  uVar9 = __n + 0xf & 0xfffffffffffffff0;
  __src = auStack_58 + -((ulong)(uVar7 + 0x10) + 0xf & 0xfffffffffffffff0) + -uVar9;
  __s = __src + -uVar9;
  local_48 = method;
  *(undefined8 *)(__s + -8) = 0x3ae0018;
  memset(__s,0,__n);
  pAVar6 = local_40;
  pMVar1 = pAVar12->rgctx_data->_5_Assets_Scripts_Utility_SetItem_TKey__TValue__get_Key;
  pIVar2 = pMVar1->methodPointer;
  pIVar3 = pMVar1->invoker_method;
  local_50 = __src;
  *(undefined8 *)(__s + -8) = 0x3ae0038;
  (*pIVar3)(pIVar2,pMVar1,pAVar6,&local_50,__src);
  pMVar5 = local_48;
  *(undefined8 *)(__s + -8) = 0x3ae004a;
  memcpy(__s,__src,__n);
  pAVar11 = pMVar5->klass->rgctx_data;
  pIVar10 = pAVar11->_1_TKey;
  if (((pIVar10->_2).field_0x6d & 1) == 0) {
    *(undefined8 *)(__s + -8) = 0x3ae0067;
    pIVar10 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
    pAVar11 = pMVar5->klass->rgctx_data;
  }
  pIVar4 = pAVar11[1]._1_TKey;
  *(undefined8 *)(__s + -8) = 0x3ae008b;
  il2cpp_runtime_helper_022b35c0(pIVar10,pIVar4,auStack_58 + -((ulong)(uVar7 + 0x10) + 0xf & 0xfffffffffffffff0),__s,0,&local_34
              );
  return local_34;
}


// Assets.Scripts.Utility.SetItem<object, object>$$ToString
// il2cpp: System_String_o* Assets_Scripts_Utility_SetItem_object__object___ToString (Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, const MethodInfo_39DF9E0* method);
// 0x3adf9e0

System_String_o *
Assets_Scripts_Utility_SetItem_object__object___ToString
          (Assets_Scripts_Utility_SetItem_TKey__TValue__o *__this,MethodInfo_39DF9E0 *method)

{
  Il2CppObject *pIVar1;
  Il2CppMethodPointer vtableDispatch;
  long lVar2;
  System_String_o *pSVar3;
  void *__src;
  undefined8 in_RDX;
  ulong __n;
  undefined1 auVar4 [16];
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  pIVar1 = (__this->fields)._Key_k__BackingField;
  if (pIVar1 != (Il2CppObject *)0x0) {
    vtableDispatch = pIVar1->klass->vtable[3].methodPtr;
    pSVar3 = (System_String_o *)
             (*vtableDispatch)(pIVar1,pIVar1->klass->vtable[3].method,in_RDX,vtableDispatch);
    return pSVar3;
  }
  auVar4 = il2cpp_runtime_helper_022b2c90();
  uStack_30 = auVar4._0_8_;
  __n = (ulong)*(uint *)(*(long *)(*(long *)(*(long *)(auVar4._8_8_ + 0x20) + 0xc0) + 8) + 0xfc);
  lVar2 = -(__n + 0xf & 0xfffffffffffffff0);
  *(undefined8 *)((long)&uStack_38 + lVar2) = 0x3adfa53;
  __src = (void *)il2cpp_runtime_helper_02338550();
  *(undefined8 *)((long)&uStack_38 + lVar2) = 0x3adfa61;
  memcpy((void *)((long)&uStack_30 + lVar2),__src,__n);
  *(undefined8 *)((long)&uStack_38 + lVar2) = 0x3adfa6f;
  pSVar3 = memcpy(method,(void *)((long)&uStack_30 + lVar2),__n);
  return pSVar3;
}


// Assets.Scripts.Utility.SetItem<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$ToString
// il2cpp: System_String_o* Assets_Scripts_Utility_SetItem___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___ToString (Assets_Scripts_Utility_SetItem_TKey__TValue__o* __this, const MethodInfo_39E00A0* method);
// 0x3ae00a0

System_String_o *
Assets_Scripts_Utility_SetItem___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___ToString
          (Assets_Scripts_Utility_SetItem_TKey__TValue__o *__this,MethodInfo_39E00A0 *method)

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
    uStack_50 = 0x3ae00df;
    lVar8 = il2cpp_runtime_helper_023009c0();
    uVar7 = *(uint *)(lVar8 + 0xfc);
    pAVar12 = method->klass;
  }
  lVar8 = (long)&local_48 - ((ulong)(uVar7 + 0x10) + 0xf & 0xfffffffffffffff0);
  uVar9 = __n + 0xf & 0xfffffffffffffff0;
  __src = (System_String_o *)(lVar8 - uVar9);
  __s = (void *)((long)__src - uVar9);
  local_48.klass = (System_String_c *)method;
  *(undefined8 *)((long)__s + -8) = 0x3ae0128;
  memset(__s,0,__n);
  pvVar6 = local_48.monitor;
  pMVar1 = pAVar12->rgctx_data->_5_Assets_Scripts_Utility_SetItem_TKey__TValue__get_Key;
  pIVar2 = pMVar1->methodPointer;
  pIVar3 = pMVar1->invoker_method;
  local_48.fields = (System_String_Fields)__src;
  *(undefined8 *)((long)__s + -8) = 0x3ae0148;
  (*pIVar3)(pIVar2,pMVar1,pvVar6,(void **)&local_48.fields,__src);
  pSVar5 = local_48.klass;
  *(undefined8 *)((long)__s + -8) = 0x3ae015a;
  memcpy(__s,__src,__n);
  pAVar11 = ((pSVar5->_1).byval_arg.data)->rgctx_data;
  pIVar10 = pAVar11->_1_TKey;
  if (((pIVar10->_2).field_0x6d & 1) == 0) {
    *(undefined8 *)((long)__s + -8) = 0x3ae0177;
    pIVar10 = (Il2CppClass *)il2cpp_runtime_helper_023009c0();
    pAVar11 = ((pSVar5->_1).byval_arg.data)->rgctx_data;
  }
  pIVar4 = pAVar11[1]._2_TValue;
  *(undefined8 *)((long)__s + -8) = 0x3ae019b;
  il2cpp_runtime_helper_022b35c0(pIVar10,pIVar4,lVar8,__s,0,&local_48.fields);
  return (System_String_o *)local_48.fields;
}


