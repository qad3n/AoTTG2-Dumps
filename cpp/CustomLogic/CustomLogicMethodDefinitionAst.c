// Type: CustomLogic.CustomLogicMethodDefinitionAst
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicMethodDefinitionAst.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Ast/CustomLogicMethodDefinitionAst.cs
// --------------------------------

// CustomLogic.CustomLogicMethodDefinitionAst$$.ctor
// il2cpp: void CustomLogic_CustomLogicMethodDefinitionAst___ctor (CustomLogic_CustomLogicMethodDefinitionAst_o* __this, int32_t line, bool coroutine, const MethodInfo* method);
// 0x59a8c00

void CustomLogic_CustomLogicMethodDefinitionAst___ctor
               (CustomLogic_CustomLogicMethodDefinitionAst_o *__this,int32_t line,bool coroutine,
               MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_List_CustomLogicBaseAst__o *__this_01;
  
  if (Il2CppMethodInitialized_07545ad3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    Il2CppMethodInitialized_07545ad3 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  (__this->fields).ParameterNames = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ParameterNames);
  if (Il2CppMethodInitialized_07545acd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_CustomLogicBaseAst);
    Il2CppMethodInitialized_07545acd = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_CustomLogicBaseAst);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_ctor);
  (__this->fields).Statements = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Statements);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Type = 2;
  (__this->fields).Line = line;
  (__this->fields).Coroutine = coroutine;
  return;
}


// CustomLogic.CustomLogicMethodDefinitionAst$$ToString
// il2cpp: System_String_o* CustomLogic_CustomLogicMethodDefinitionAst__ToString (CustomLogic_CustomLogicMethodDefinitionAst_o* __this, const MethodInfo* method);
// 0x59a90c0

System_String_o *
CustomLogic_CustomLogicMethodDefinitionAst__ToString
          (CustomLogic_CustomLogicMethodDefinitionAst_o *__this,MethodInfo *method)

{
  System_String_array *values;
  System_String_o **ppSVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_07545ad4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    il2cpp_codegen_initialize_runtime_metadata(&", ");
    il2cpp_codegen_initialize_runtime_metadata(&"function");
    il2cpp_codegen_initialize_runtime_metadata(&"(");
    il2cpp_codegen_initialize_runtime_metadata(&")");
    il2cpp_codegen_initialize_runtime_metadata(&"coroutine");
    Il2CppMethodInitialized_07545ad4 = '\x01';
  }
  values = (System_String_array *)SZArrayNew(TypeInfo_string_array,6);
  if ((__this->fields).Coroutine == false) {
    ppSVar1 = &"function";
  }
  else {
    ppSVar1 = &"coroutine";
  }
  if (values == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)values->max_length != 0) {
    values->m_Items[0] = *ppSVar1;
    Il2CppCodeGenWriteBarrier(values->m_Items);
    if ((values->max_length & 0xfffffffe) != 0) {
      values->m_Items[1] = " ";
      Il2CppCodeGenWriteBarrier(values->m_Items + 1);
      if (2 < (uint)values->max_length) {
        values->m_Items[2] = (__this->fields).Name;
        Il2CppCodeGenWriteBarrier(values->m_Items + 2);
        if ((values->max_length & 0xfffffffc) != 0) {
          values->m_Items[3] = "(";
          Il2CppCodeGenWriteBarrier(values->m_Items + 3);
          pSVar2 = System_String__Join_5303350
                             (", ",
                              (System_Collections_Generic_IEnumerable_string__o *)
                              (__this->fields).ParameterNames,(MethodInfo *)0x0);
          if (4 < (uint)values->max_length) {
            values->m_Items[4] = pSVar2;
            Il2CppCodeGenWriteBarrier(values->m_Items + 4);
            if (5 < (uint)values->max_length) {
              values->m_Items[5] = ")";
              Il2CppCodeGenWriteBarrier(values->m_Items + 5);
              pSVar2 = System_String__Concat_5302910(values,(MethodInfo *)0x0);
              return pSVar2;
            }
          }
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


