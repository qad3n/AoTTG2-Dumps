// Type: CustomLogic.CustomLogicMethodDefinitionAst
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicMethodDefinitionAst.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Ast/CustomLogicMethodDefinitionAst.cs
// --------------------------------

// CustomLogic.CustomLogicMethodDefinitionAst$$.ctor
// il2cpp: void CustomLogic_CustomLogicMethodDefinitionAst___ctor (CustomLogic_CustomLogicMethodDefinitionAst_o* __this, int32_t line, bool coroutine, const MethodInfo* method);
// 0x181ed1c70

void CustomLogic_CustomLogicMethodDefinitionAst___ctor
               (CustomLogic_CustomLogicMethodDefinitionAst_o *__this,int32_t line,bool coroutine,
               MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  
  if (Il2CppMethodInitialized_18434513a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    Il2CppMethodInitialized_18434513a = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  (__this->fields).ParameterNames = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ParameterNames,__this_00);
  CustomLogic_CustomLogicBlockAst___ctor((CustomLogic_CustomLogicBlockAst_o *)__this,2,line,(MethodInfo *)0x0)
  ;
  (__this->fields).Coroutine = coroutine;
  return;
}


// CustomLogic.CustomLogicMethodDefinitionAst$$ToString
// il2cpp: System_String_o* CustomLogic_CustomLogicMethodDefinitionAst__ToString (CustomLogic_CustomLogicMethodDefinitionAst_o* __this, const MethodInfo* method);
// 0x181ed1b00

System_String_o *
CustomLogic_CustomLogicMethodDefinitionAst__ToString
          (CustomLogic_CustomLogicMethodDefinitionAst_o *__this,MethodInfo *method)

{
  System_String_array *values;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_18434513b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    il2cpp_codegen_initialize_runtime_metadata(&", ");
    il2cpp_codegen_initialize_runtime_metadata(&"function");
    il2cpp_codegen_initialize_runtime_metadata(&"(");
    il2cpp_codegen_initialize_runtime_metadata(&")");
    il2cpp_codegen_initialize_runtime_metadata(&"coroutine");
    Il2CppMethodInitialized_18434513b = '\x01';
  }
  values = (System_String_array *)SZArrayNew(TypeInfo_string_array,6);
  pSVar1 = "function";
  if ((__this->fields).Coroutine != false) {
    pSVar1 = "coroutine";
  }
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = pSVar1;
      Il2CppCodeGenWriteBarrier(values->m_Items,pSVar1);
      pSVar1 = " ";
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = " ";
        Il2CppCodeGenWriteBarrier(values->m_Items + 1,pSVar1);
        if (2 < (uint)values->max_length) {
          pSVar1 = (__this->fields).Name;
          values->m_Items[2] = pSVar1;
          Il2CppCodeGenWriteBarrier(values->m_Items + 2,pSVar1);
          pSVar1 = "(";
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = "(";
            Il2CppCodeGenWriteBarrier(values->m_Items + 3,pSVar1);
            pSVar1 = System_String__Join_196ecd0
                               (", ",
                                (System_Collections_Generic_IEnumerable_string__o *)
                                (__this->fields).ParameterNames,(MethodInfo *)0x0);
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = pSVar1;
              Il2CppCodeGenWriteBarrier(values->m_Items + 4,pSVar1);
              pSVar1 = ")";
              if (5 < (uint)values->max_length) {
                values->m_Items[5] = ")";
                Il2CppCodeGenWriteBarrier(values->m_Items + 5,pSVar1);
                pSVar1 = System_String__Concat_1969830(values,(MethodInfo *)0x0);
                return pSVar1;
              }
            }
          }
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


