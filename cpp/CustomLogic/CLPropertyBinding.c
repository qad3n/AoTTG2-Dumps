// Type: CustomLogic.CLPropertyBinding
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CLPropertyBinding.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CLPropertyBinding$$.ctor
// il2cpp: void CustomLogic_CLPropertyBinding___ctor (CustomLogic_CLPropertyBinding_o* __this, const MethodInfo* method);
// 0x59a9e50

void CustomLogic_CLPropertyBinding___ctor(CustomLogic_CLPropertyBinding_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CLPropertyBinding<object>$$.ctor
// il2cpp: void CustomLogic_CLPropertyBinding_object____ctor (CustomLogic_CLPropertyBinding_T__o* __this, System_Func_T__object__o* getter, System_Action_T__object__o* setter, const MethodInfo_48379A0* method);
// 0x49379a0

void CustomLogic_CLPropertyBinding_object____ctor
               (CustomLogic_CLPropertyBinding_T__o *__this,System_Func_T__object__o *getter,
               System_Action_T__object__o *setter,MethodInfo_48379A0 *method)

{
  CustomLogic_CLPropertyBinding___ctor((CustomLogic_CLPropertyBinding_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._getter = getter;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._getter);
  (__this->fields)._setter = setter;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._setter);
  (__this->fields)._isReadOnly = setter == (System_Action_T__object__o *)0x0;
  return;
}


// CustomLogic.CLPropertyBinding<object>$$get_IsReadOnly
// il2cpp: bool CustomLogic_CLPropertyBinding_object___get_IsReadOnly (CustomLogic_CLPropertyBinding_T__o* __this, const MethodInfo_48379F0* method);
// 0x49379f0

bool CustomLogic_CLPropertyBinding_object___get_IsReadOnly
               (CustomLogic_CLPropertyBinding_T__o *__this,MethodInfo_48379F0 *method)

{
  return (__this->fields)._isReadOnly;
}


// CustomLogic.CLPropertyBinding<object>$$GetValue
// il2cpp: Il2CppObject* CustomLogic_CLPropertyBinding_object___GetValue (CustomLogic_CLPropertyBinding_T__o* __this, Il2CppObject* instance, const MethodInfo_4837A00* method);
// 0x4937a00

Il2CppObject *
CustomLogic_CLPropertyBinding_object___GetValue
          (CustomLogic_CLPropertyBinding_T__o *__this,Il2CppObject *instance,MethodInfo_4837A00 *method)

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
// il2cpp: void CustomLogic_CLPropertyBinding_object___SetValue (CustomLogic_CLPropertyBinding_T__o* __this, Il2CppObject* instance, Il2CppObject* value, const MethodInfo_4837A80* method);
// 0x4937a80

void CustomLogic_CLPropertyBinding_object___SetValue
               (CustomLogic_CLPropertyBinding_T__o *__this,Il2CppObject *instance,Il2CppObject *value,
               MethodInfo_4837A80 *method)

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
// il2cpp: void CustomLogic_CLPropertyBinding_object___SetValueSafe (CustomLogic_CLPropertyBinding_T__o* __this, Il2CppObject* instance, Il2CppObject* value, const MethodInfo_4837B10* method);
// 0x4937b10

void CustomLogic_CLPropertyBinding_object___SetValueSafe
               (CustomLogic_CLPropertyBinding_T__o *__this,Il2CppObject *instance,Il2CppObject *value,
               MethodInfo_4837B10 *method)

{
  System_Action_T__object__o *pSVar1;
  Il2CppClass *klass;
  Il2CppObject *pIVar2;
  
  if ((__this->fields)._isReadOnly != false) {
    return;
  }
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


