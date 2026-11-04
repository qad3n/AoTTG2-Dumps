// Type: CustomLogic.CLMethodBinding
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CLMethodBinding.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CLMethodBinding$$.ctor
// il2cpp: void CustomLogic_CLMethodBinding___ctor (CustomLogic_CLMethodBinding_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CLMethodBinding___ctor(CustomLogic_CLMethodBinding_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CLMethodBinding<object>$$.ctor
// il2cpp: void CustomLogic_CLMethodBinding_object____ctor (CustomLogic_CLMethodBinding_T__o* __this, System_Func_T__object____object__o* function, const MethodInfo_12B8CD0* method);
// 0x1812b8cd0

void
CustomLogic_CLMethodBinding_object____ctor_12b8cd0(CustomLogic_CLMethodBinding_T__o* __this, System_Func_T__object____object__o* function, MethodInfo_12B8CD0* method)

{
  UnitySourceGeneratedAssemblyMonoScriptTypes_v1___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._function = method;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._function,method);
  return;
}


// CustomLogic.CLMethodBinding<object>$$Call
// il2cpp: Il2CppObject* CustomLogic_CLMethodBinding_object___Call (CustomLogic_CLMethodBinding_T__o* __this, Il2CppObject* instance, System_Object_array* parameters, const MethodInfo_12B8C30* method);
// 0x1812b8c30

Il2CppObject *
CustomLogic_CLMethodBinding_object___Call
          (CustomLogic_CLMethodBinding_T__o *__this,Il2CppObject *instance,System_Object_array *parameters,
          MethodInfo_12B8C30 *method)

{
  System_Func_T__object____object__o *pSVar1;
  Il2CppClass *klass;
  Il2CppObject *pIVar2;
  
  pSVar1 = (__this->fields)._function;
  if (pSVar1 == (System_Func_T__object____object__o *)0x0) {
    ThrowNullReferenceException();
  }
  klass = method->klass->rgctx_data->_2_T;
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
                     ((pSVar1->fields).method_code,pIVar2,parameters,(pSVar1->fields).method);
  return pIVar2;
}


