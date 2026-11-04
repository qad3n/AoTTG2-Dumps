// Type: CustomLogic.CLPropertyBinding
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CLPropertyBinding.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CLPropertyBinding$$.ctor
// il2cpp: void CustomLogic_CLPropertyBinding___ctor (CustomLogic_CLPropertyBinding_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CLPropertyBinding___ctor(CustomLogic_CLPropertyBinding_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CLPropertyBinding<object>$$.ctor
// il2cpp: void CustomLogic_CLPropertyBinding_object____ctor (CustomLogic_CLPropertyBinding_T__o* __this, System_Func_T__object__o* getter, System_Action_T__object__o* setter, const MethodInfo_12B8EE0* method);
// 0x1812b8ee0

void CustomLogic_CLPropertyBinding_object____ctor
               (CustomLogic_CLPropertyBinding_T__o *__this,System_Func_T__object__o *getter,
               System_Action_T__object__o *setter,MethodInfo_12B8EE0 *method)

{
  UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._getter = getter;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._getter,getter);
  (__this->fields)._setter = setter;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._setter,setter);
  (__this->fields)._isReadOnly = setter == (System_Action_T__object__o *)0x0;
  return;
}


// CustomLogic.CLPropertyBinding<object>$$get_IsReadOnly
// il2cpp: bool CustomLogic_CLPropertyBinding_object___get_IsReadOnly (CustomLogic_CLPropertyBinding_T__o* __this, const MethodInfo_F40050* method);
// 0x180f40050

bool
CustomLogic_CLPropertyBinding_object___get_IsReadOnly(CustomLogic_CLPropertyBinding_T__o* __this, MethodInfo_F40050* method)

{
  return (__this->fields)._isReadOnly;
}


// CustomLogic.CLPropertyBinding<object>$$GetValue
// il2cpp: Il2CppObject* CustomLogic_CLPropertyBinding_object___GetValue (CustomLogic_CLPropertyBinding_T__o* __this, Il2CppObject* instance, const MethodInfo_12B8D10* method);
// 0x1812b8d10

Il2CppObject *
CustomLogic_CLPropertyBinding_object___GetValue
          (CustomLogic_CLPropertyBinding_T__o *__this,Il2CppObject *instance,MethodInfo_12B8D10 *method)

{
  System_Func_T__object__o *pSVar1;
  Il2CppClass *klass;
  Il2CppObject *pIVar2;
  
  pSVar1 = (__this->fields)._getter;
  if (pSVar1 == (System_Func_T__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  klass = method->klass->rgctx_data->_3_T;
  if (((klass->_2).bitflags1 & 1) == 0) {
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  if (instance == (Il2CppObject *)0x0) {
    pIVar2 = (Il2CppObject *)0x0;
  }
  else {
    pIVar2 = il2cpp_vm_Object_IsInst(instance,klass);
    if (pIVar2 == (Il2CppObject *)0x0) {
      il2cpp_codegen_raise_invalid_cast_exception(instance,klass);
    }
  }
  pIVar2 = (Il2CppObject *)
           (*(code *)(pSVar1->fields).invoke_impl)
                     ((pSVar1->fields).method_code,pIVar2,(pSVar1->fields).method);
  return pIVar2;
}


// CustomLogic.CLPropertyBinding<object>$$SetValue
// il2cpp: void CustomLogic_CLPropertyBinding_object___SetValue (CustomLogic_CLPropertyBinding_T__o* __this, Il2CppObject* instance, Il2CppObject* value, const MethodInfo_12B8E40* method);
// 0x1812b8e40

void CustomLogic_CLPropertyBinding_object___SetValue
               (CustomLogic_CLPropertyBinding_T__o *__this,Il2CppObject *instance,Il2CppObject *value,
               MethodInfo_12B8E40 *method)

{
  System_Action_T__object__o *pSVar1;
  Il2CppClass *klass;
  Il2CppObject *pIVar2;
  
  pSVar1 = (__this->fields)._setter;
  if (pSVar1 == (System_Action_T__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  klass = method->klass->rgctx_data->_3_T;
  if (((klass->_2).bitflags1 & 1) == 0) {
    klass = il2cpp_codegen_class_init_checked(klass);
  }
  if (instance == (Il2CppObject *)0x0) {
    pIVar2 = (Il2CppObject *)0x0;
  }
  else {
    pIVar2 = il2cpp_vm_Object_IsInst(instance,klass);
    if (pIVar2 == (Il2CppObject *)0x0) {
      il2cpp_codegen_raise_invalid_cast_exception(instance,klass);
    }
  }
  (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,pIVar2,value,(pSVar1->fields).method);
  return;
}


// CustomLogic.CLPropertyBinding<object>$$SetValueSafe
// il2cpp: void CustomLogic_CLPropertyBinding_object___SetValueSafe (CustomLogic_CLPropertyBinding_T__o* __this, Il2CppObject* instance, Il2CppObject* value, const MethodInfo_12B8DA0* method);
// 0x1812b8da0

void CustomLogic_CLPropertyBinding_object___SetValueSafe
               (CustomLogic_CLPropertyBinding_T__o *__this,Il2CppObject *instance,Il2CppObject *value,
               MethodInfo_12B8DA0 *method)

{
  System_Action_T__object__o *pSVar1;
  Il2CppClass *klass;
  Il2CppObject *pIVar2;
  
  if ((__this->fields)._isReadOnly == false) {
    pSVar1 = (__this->fields)._setter;
    if (pSVar1 == (System_Action_T__object__o *)0x0) {
      ThrowNullReferenceException();
    }
    klass = method->klass->rgctx_data->_3_T;
    if (((klass->_2).bitflags1 & 1) == 0) {
      klass = il2cpp_codegen_class_init_checked(klass);
    }
    if (instance == (Il2CppObject *)0x0) {
      pIVar2 = (Il2CppObject *)0x0;
    }
    else {
      pIVar2 = il2cpp_vm_Object_IsInst(instance,klass);
      if (pIVar2 == (Il2CppObject *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(instance,klass);
      }
    }
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,pIVar2,value,(pSVar1->fields).method)
    ;
  }
  return;
}


