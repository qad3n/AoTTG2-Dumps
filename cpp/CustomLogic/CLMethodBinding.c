// Type: CustomLogic.CLMethodBinding
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CLMethodBinding.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CLMethodBinding$$.ctor
// il2cpp: void CustomLogic_CLMethodBinding___ctor (CustomLogic_CLMethodBinding_o* __this, const MethodInfo* method);
// 0x3db3550

void CustomLogic_CLMethodBinding___ctor(CustomLogic_CLMethodBinding_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CLMethodBinding<object>$$.ctor
// il2cpp: void CustomLogic_CLMethodBinding_object____ctor (CustomLogic_CLMethodBinding_T__o* __this, System_Func_T__object____object__o* function, const MethodInfo_2EA7380* method);
// 0x2fa7380

void CustomLogic_CLMethodBinding<object>___ctor
               (CustomLogic_CLMethodBinding_T__o *__this,
               System_Func_T__object____object__o *function,MethodInfo_2EA7380 *method)

{
  CustomLogic_CLMethodBinding___ctor((CustomLogic_CLMethodBinding_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._function = function;
  il2cpp_runtime_glue(&__this->fields,function);
  return;
}


// CustomLogic.CLMethodBinding<object>$$Call
// il2cpp: Il2CppObject* CustomLogic_CLMethodBinding_object___Call (CustomLogic_CLMethodBinding_T__o* __this, Il2CppObject* instance, System_Object_array* parameters, const MethodInfo_2EA73B0* method);
// 0x2fa73b0

Il2CppObject *
CustomLogic_CLMethodBinding<object>__Call
          (CustomLogic_CLMethodBinding_T__o *__this,Il2CppObject *instance,
          System_Object_array *parameters,MethodInfo_2EA73B0 *method)

{
  System_Func_T__object____object__o *pSVar1;
  Il2CppClass *pIVar2;
  long lVar3;
  Il2CppObject *pIVar4;
  
  pSVar1 = (__this->fields)._function;
  if (pSVar1 == (System_Func_T__object____object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pIVar2 = method->klass->rgctx_data->_2_T;
  if (((pIVar2->_2).field_0x6d & 1) == 0) {
    pIVar2 = (Il2CppClass *)il2cpp_glue_022c28b0(pIVar2);
  }
  if (instance == (Il2CppObject *)0x0) {
    lVar3 = 0;
  }
  else {
    lVar3 = il2cpp_runtime_glue(instance,pIVar2);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(instance,pIVar2);
    }
  }
  pIVar4 = (Il2CppObject *)
           (*(code *)(pSVar1->fields).invoke_impl)
                     ((pSVar1->fields).method_code,lVar3,parameters,(pSVar1->fields).method);
  return pIVar4;
}


