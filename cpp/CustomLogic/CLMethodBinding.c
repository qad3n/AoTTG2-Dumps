// Type: CustomLogic.CLMethodBinding
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CLMethodBinding.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CLMethodBinding$$.ctor
// il2cpp: void CustomLogic_CLMethodBinding___ctor (CustomLogic_CLMethodBinding_o* __this, const MethodInfo* method);
// 0x40b9890

void CustomLogic_CLMethodBinding___ctor(CustomLogic_CLMethodBinding_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CLMethodBinding<object>$$.ctor
// il2cpp: void CustomLogic_CLMethodBinding_object____ctor (CustomLogic_CLMethodBinding_T__o* __this, System_Func_T__object____object__o* function, const MethodInfo_2F1ED40* method);
// 0x301ed40

void CustomLogic_CLMethodBinding_object____ctor
               (CustomLogic_CLMethodBinding_T__o *__this,System_Func_T__object____object__o *function,
               MethodInfo_2F1ED40 *method)

{
  CustomLogic_CLMethodBinding___ctor((CustomLogic_CLMethodBinding_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._function = function;
  il2cpp_runtime_helper_022b4080(&__this->fields,function);
  return;
}


// CustomLogic.CLMethodBinding<object>$$Call
// il2cpp: Il2CppObject* CustomLogic_CLMethodBinding_object___Call (CustomLogic_CLMethodBinding_T__o* __this, Il2CppObject* instance, System_Object_array* parameters, const MethodInfo_2F1ED70* method);
// 0x301ed70

Il2CppObject *
CustomLogic_CLMethodBinding_object___Call
          (CustomLogic_CLMethodBinding_T__o *__this,Il2CppObject *instance,System_Object_array *parameters,
          MethodInfo_2F1ED70 *method)

{
  System_Func_T__object____object__o *pSVar1;
  Il2CppClass *pIVar2;
  long lVar3;
  Il2CppObject *pIVar4;
  CustomLogic_CLMethodBinding_T__c *extraout_RDX;
  
  pSVar1 = (__this->fields)._function;
  if (pSVar1 == (System_Func_T__object____object__o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    CustomLogic_CLPropertyBinding___ctor((CustomLogic_CLPropertyBinding_o *)__this,(MethodInfo *)0x0);
    (__this->fields)._function = (System_Func_T__object____object__o *)instance;
    il2cpp_runtime_helper_022b4080(&__this->fields,instance);
    __this[1].klass = extraout_RDX;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_022b4080(__this + 1,extraout_RDX);
    *(bool *)&__this[1].monitor = extraout_RDX == (CustomLogic_CLMethodBinding_T__c *)0x0;
    return pIVar4;
  }
  pIVar2 = method->klass->rgctx_data->_2_T;
  if (((pIVar2->_2).field_0x6d & 1) == 0) {
    pIVar2 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar2);
  }
  if (instance != (Il2CppObject *)0x0) {
    lVar3 = il2cpp_runtime_helper_023051f0(instance,pIVar2);
    if (lVar3 != 0) goto label_0301edd1;
    il2cpp_runtime_helper_022b2fd0(instance,pIVar2);
  }
  lVar3 = 0;
label_0301edd1:
  pIVar4 = (Il2CppObject *)
           (*(code *)(pSVar1->fields).invoke_impl)
                     ((pSVar1->fields).method_code,lVar3,parameters,(pSVar1->fields).method);
  return pIVar4;
}


