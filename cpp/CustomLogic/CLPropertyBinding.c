// Type: CustomLogic.CLPropertyBinding
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CLPropertyBinding.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CLPropertyBinding$$.ctor
// il2cpp: void CustomLogic_CLPropertyBinding___ctor (CustomLogic_CLPropertyBinding_o* __this, const MethodInfo* method);
// 0x40b98a0

void CustomLogic_CLPropertyBinding___ctor(CustomLogic_CLPropertyBinding_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CLPropertyBinding<object>$$.ctor
// il2cpp: void CustomLogic_CLPropertyBinding_object____ctor (CustomLogic_CLPropertyBinding_T__o* __this, System_Func_T__object__o* getter, System_Action_T__object__o* setter, const MethodInfo_2F1EE00* method);
// 0x301ee00

void CustomLogic_CLPropertyBinding_object____ctor
               (CustomLogic_CLPropertyBinding_T__o *__this,System_Func_T__object__o *getter,
               System_Action_T__object__o *setter,MethodInfo_2F1EE00 *method)

{
  CustomLogic_CLPropertyBinding___ctor((CustomLogic_CLPropertyBinding_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._getter = getter;
  il2cpp_runtime_helper_022b4080(&__this->fields,getter);
  (__this->fields)._setter = setter;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._setter,setter);
  *(bool *)&(__this->fields)._isReadOnly = setter == (System_Action_T__object__o *)0x0;
  return;
}


// CustomLogic.CLPropertyBinding<object>$$get_IsReadOnly
// il2cpp: bool CustomLogic_CLPropertyBinding_object___get_IsReadOnly (CustomLogic_CLPropertyBinding_T__o* __this, const MethodInfo_2F1EE50* method);
// 0x301ee50

bool_conflict
CustomLogic_CLPropertyBinding_object___get_IsReadOnly
          (CustomLogic_CLPropertyBinding_T__o *__this,MethodInfo_2F1EE50 *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)(__this->fields)._isReadOnly);
}


// CustomLogic.CLPropertyBinding<object>$$GetValue
// il2cpp: Il2CppObject* CustomLogic_CLPropertyBinding_object___GetValue (CustomLogic_CLPropertyBinding_T__o* __this, Il2CppObject* instance, const MethodInfo_2F1EE60* method);
// 0x301ee60

Il2CppObject *
CustomLogic_CLPropertyBinding_object___GetValue
          (CustomLogic_CLPropertyBinding_T__o *__this,Il2CppObject *instance,MethodInfo_2F1EE60 *method)

{
  System_Func_T__object__o *pSVar1;
  Il2CppClass *pIVar2;
  long lVar3;
  Il2CppObject *pIVar4;
  long lVar5;
  System_Action_T__object__o *pSVar6;
  long in_RCX;
  undefined8 extraout_RDX;
  long extraout_RDX_00;
  uint uVar7;
  undefined1 auVar8 [16];
  
  pSVar1 = (__this->fields)._getter;
  if (pSVar1 == (System_Func_T__object__o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    pSVar6 = (__this->fields)._setter;
    if (pSVar6 == (System_Action_T__object__o *)0x0) {
      auVar8 = il2cpp_runtime_helper_022b2c90();
      if ((char)(__this->fields)._isReadOnly != '\0') {
        return auVar8._0_8_;
      }
      pSVar6 = (__this->fields)._setter;
      if (pSVar6 == (System_Action_T__object__o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
        lVar3 = *(long *)(*(long *)(extraout_RDX_00 + 0x20) + 0xc0);
        uVar7 = (int)instance - 1;
        uVar7 = (int)uVar7 >> 1 | uVar7;
        uVar7 = (int)uVar7 >> 2 | uVar7;
        uVar7 = (int)uVar7 >> 4 | uVar7;
        uVar7 = (int)uVar7 >> 8 | uVar7;
        uVar7 = (int)uVar7 >> 0x10 | uVar7;
        *(uint *)&(__this->fields)._getter = uVar7;
        lVar3 = *(long *)(lVar3 + 0x18);
        if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
          lVar3 = il2cpp_runtime_helper_023009c0();
        }
        pSVar6 = (System_Action_T__object__o *)il2cpp_runtime_helper_022b2a40(lVar3,uVar7 + 1);
        (__this->fields)._setter = pSVar6;
        pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(&(__this->fields)._setter,pSVar6);
        return pIVar4;
      }
      lVar3 = *(long *)(*(long *)(*(long *)(in_RCX + 0x20) + 0xc0) + 0x18);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = il2cpp_runtime_helper_023009c0(lVar3);
      }
      if (instance != (Il2CppObject *)0x0) {
        lVar5 = il2cpp_runtime_helper_023051f0(instance,lVar3);
        if (lVar5 != 0) goto label_0301efe3;
        il2cpp_runtime_helper_022b2fd0(instance,lVar3);
      }
      lVar5 = 0;
label_0301efe3:
      pIVar4 = (Il2CppObject *)
               (*(code *)(pSVar6->fields).invoke_impl)
                         ((pSVar6->fields).method_code,lVar5,auVar8._8_8_,(pSVar6->fields).method);
      return pIVar4;
    }
    lVar3 = *(long *)(*(long *)(*(long *)(in_RCX + 0x20) + 0xc0) + 0x18);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = il2cpp_runtime_helper_023009c0(lVar3);
    }
    if (instance != (Il2CppObject *)0x0) {
      lVar5 = il2cpp_runtime_helper_023051f0(instance,lVar3);
      if (lVar5 != 0) goto label_0301ef41;
      il2cpp_runtime_helper_022b2fd0(instance,lVar3);
    }
    lVar5 = 0;
label_0301ef41:
    pIVar4 = (Il2CppObject *)
             (*(code *)(pSVar6->fields).invoke_impl)
                       ((pSVar6->fields).method_code,lVar5,extraout_RDX,(pSVar6->fields).method);
    return pIVar4;
  }
  pIVar2 = method->klass->rgctx_data->_3_T;
  if (((pIVar2->_2).field_0x6d & 1) == 0) {
    pIVar2 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar2);
  }
  if (instance != (Il2CppObject *)0x0) {
    lVar3 = il2cpp_runtime_helper_023051f0(instance,pIVar2);
    if (lVar3 != 0) goto label_0301eeba;
    il2cpp_runtime_helper_022b2fd0(instance,pIVar2);
  }
  lVar3 = 0;
label_0301eeba:
  pIVar4 = (Il2CppObject *)
           (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,lVar3,(pSVar1->fields).method)
  ;
  return pIVar4;
}


// CustomLogic.CLPropertyBinding<object>$$SetValue
// il2cpp: void CustomLogic_CLPropertyBinding_object___SetValue (CustomLogic_CLPropertyBinding_T__o* __this, Il2CppObject* instance, Il2CppObject* value, const MethodInfo_2F1EEE0* method);
// 0x301eee0

void CustomLogic_CLPropertyBinding_object___SetValue
               (CustomLogic_CLPropertyBinding_T__o *__this,Il2CppObject *instance,Il2CppObject *value,
               MethodInfo_2F1EEE0 *method)

{
  Il2CppClass *pIVar1;
  long lVar2;
  System_Action_T__object__o *pSVar3;
  undefined8 extraout_RDX;
  long extraout_RDX_00;
  uint uVar4;
  
  pSVar3 = (__this->fields)._setter;
  if (pSVar3 == (System_Action_T__object__o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if ((char)(__this->fields)._isReadOnly != '\0') {
      return;
    }
    pSVar3 = (__this->fields)._setter;
    if (pSVar3 == (System_Action_T__object__o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
      lVar2 = *(long *)(*(long *)(extraout_RDX_00 + 0x20) + 0xc0);
      uVar4 = (int)instance - 1;
      uVar4 = (int)uVar4 >> 1 | uVar4;
      uVar4 = (int)uVar4 >> 2 | uVar4;
      uVar4 = (int)uVar4 >> 4 | uVar4;
      uVar4 = (int)uVar4 >> 8 | uVar4;
      uVar4 = (int)uVar4 >> 0x10 | uVar4;
      *(uint *)&(__this->fields)._getter = uVar4;
      lVar2 = *(long *)(lVar2 + 0x18);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = il2cpp_runtime_helper_023009c0();
      }
      pSVar3 = (System_Action_T__object__o *)il2cpp_runtime_helper_022b2a40(lVar2,uVar4 + 1);
      (__this->fields)._setter = pSVar3;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._setter,pSVar3);
      return;
    }
    pIVar1 = method->klass->rgctx_data->_3_T;
    if (((pIVar1->_2).field_0x6d & 1) == 0) {
      pIVar1 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar1);
    }
    if (instance != (Il2CppObject *)0x0) {
      lVar2 = il2cpp_runtime_helper_023051f0(instance,pIVar1);
      if (lVar2 != 0) goto label_0301efe3;
      il2cpp_runtime_helper_022b2fd0(instance,pIVar1);
    }
    lVar2 = 0;
label_0301efe3:
    (*(code *)(pSVar3->fields).invoke_impl)
              ((pSVar3->fields).method_code,lVar2,extraout_RDX,(pSVar3->fields).method);
    return;
  }
  pIVar1 = method->klass->rgctx_data->_3_T;
  if (((pIVar1->_2).field_0x6d & 1) == 0) {
    pIVar1 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar1);
  }
  if (instance != (Il2CppObject *)0x0) {
    lVar2 = il2cpp_runtime_helper_023051f0(instance,pIVar1);
    if (lVar2 != 0) goto label_0301ef41;
    il2cpp_runtime_helper_022b2fd0(instance,pIVar1);
  }
  lVar2 = 0;
label_0301ef41:
  (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code,lVar2,value,(pSVar3->fields).method);
  return;
}


// CustomLogic.CLPropertyBinding<object>$$SetValueSafe
// il2cpp: void CustomLogic_CLPropertyBinding_object___SetValueSafe (CustomLogic_CLPropertyBinding_T__o* __this, Il2CppObject* instance, Il2CppObject* value, const MethodInfo_2F1EF70* method);
// 0x301ef70

void CustomLogic_CLPropertyBinding_object___SetValueSafe
               (CustomLogic_CLPropertyBinding_T__o *__this,Il2CppObject *instance,Il2CppObject *value,
               MethodInfo_2F1EF70 *method)

{
  Il2CppClass *pIVar1;
  long lVar2;
  System_Action_T__object__o *pSVar3;
  long extraout_RDX;
  uint uVar4;
  
  if ((char)(__this->fields)._isReadOnly != '\0') {
    return;
  }
  pSVar3 = (__this->fields)._setter;
  if (pSVar3 == (System_Action_T__object__o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    lVar2 = *(long *)(*(long *)(extraout_RDX + 0x20) + 0xc0);
    uVar4 = (int)instance - 1;
    uVar4 = (int)uVar4 >> 1 | uVar4;
    uVar4 = (int)uVar4 >> 2 | uVar4;
    uVar4 = (int)uVar4 >> 4 | uVar4;
    uVar4 = (int)uVar4 >> 8 | uVar4;
    uVar4 = (int)uVar4 >> 0x10 | uVar4;
    *(uint *)&(__this->fields)._getter = uVar4;
    lVar2 = *(long *)(lVar2 + 0x18);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = il2cpp_runtime_helper_023009c0();
    }
    pSVar3 = (System_Action_T__object__o *)il2cpp_runtime_helper_022b2a40(lVar2,uVar4 + 1);
    (__this->fields)._setter = pSVar3;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._setter,pSVar3);
    return;
  }
  pIVar1 = method->klass->rgctx_data->_3_T;
  if (((pIVar1->_2).field_0x6d & 1) == 0) {
    pIVar1 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar1);
  }
  if (instance != (Il2CppObject *)0x0) {
    lVar2 = il2cpp_runtime_helper_023051f0(instance,pIVar1);
    if (lVar2 != 0) goto label_0301efe3;
    il2cpp_runtime_helper_022b2fd0(instance,pIVar1);
  }
  lVar2 = 0;
label_0301efe3:
  (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code,lVar2,value,(pSVar3->fields).method);
  return;
}


