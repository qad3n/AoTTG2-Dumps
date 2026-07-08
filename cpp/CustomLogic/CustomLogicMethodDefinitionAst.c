// Type: CustomLogic.CustomLogicMethodDefinitionAst
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicMethodDefinitionAst.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomLogic/Ast/CustomLogicMethodDefinitionAst.cs  [prior source available (delta unverified)]
// --------------------------------

// CustomLogic.CustomLogicMethodDefinitionAst$$.ctor
// il2cpp: void CustomLogic_CustomLogicMethodDefinitionAst___ctor (CustomLogic_CustomLogicMethodDefinitionAst_o* __this, int32_t line, bool coroutine, const MethodInfo* method);
// 0x3db2360

void CustomLogic_CustomLogicMethodDefinitionAst___ctor
               (CustomLogic_CustomLogicMethodDefinitionAst_o *__this,int32_t line,
               bool_conflict coroutine,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_List_CustomLogicBaseAst__o *__this_01;
  
  if (DAT_057027cc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    DAT_057027cc = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_System_String);
  (__this->fields).ParameterNames = __this_00;
  il2cpp_runtime_glue(&(__this->fields).ParameterNames,__this_00);
  if (DAT_057027c6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_CustomLogic_CustomLogicBaseAst);
    il2cpp_init_method_metadata(&TypeInfo_List_CustomLogicBaseAst);
    DAT_057027c6 = '\x01';
  }
  __this_01 = (System_Collections_Generic_List_CustomLogicBaseAst__o *)
              il2cpp_runtime_glue(TypeInfo_List_CustomLogicBaseAst);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_CustomLogic_CustomLogicBaseAst);
  (__this->fields).Statements = __this_01;
  il2cpp_runtime_glue(&(__this->fields).Statements);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Type = 2;
  (__this->fields).Line = line;
  *(char *)&(__this->fields).Coroutine = (char)coroutine;
  return;
}


// CustomLogic.CustomLogicMethodDefinitionAst$$ToString
// il2cpp: System_String_o* CustomLogic_CustomLogicMethodDefinitionAst__ToString (CustomLogic_CustomLogicMethodDefinitionAst_o* __this, const MethodInfo* method);
// 0x3db2820

System_String_o *
CustomLogic_CustomLogicMethodDefinitionAst__ToString
          (CustomLogic_CustomLogicMethodDefinitionAst_o *__this,MethodInfo *method)

{
  System_String_array *values;
  undefined8 *puVar1;
  System_String_o *pSVar2;
  
  if (DAT_057027cd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&" ");
    il2cpp_init_method_metadata(&", ");
    il2cpp_init_method_metadata(&"function");
    il2cpp_init_method_metadata(&"(");
    il2cpp_init_method_metadata(&")");
    il2cpp_init_method_metadata(&"coroutine");
    DAT_057027cd = '\x01';
  }
  values = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,6);
  if ((char)(__this->fields).Coroutine == '\0') {
    puVar1 = &"function";
  }
  else {
    puVar1 = &"coroutine";
  }
  if (values == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)values->max_length != 0) {
    values->m_Items[0] = (System_String_o *)*puVar1;
    il2cpp_runtime_glue(values->m_Items);
    if (1 < (uint)values->max_length) {
      values->m_Items[1] = " ";
      il2cpp_runtime_glue(values->m_Items + 1);
      if (2 < (uint)values->max_length) {
        values->m_Items[2] = (__this->fields).Name;
        il2cpp_runtime_glue(values->m_Items + 2);
        if (3 < (uint)values->max_length) {
          values->m_Items[3] = "(";
          il2cpp_runtime_glue(values->m_Items + 3);
          pSVar2 = System_String__Join(", ",
                                       (System_Collections_Generic_IEnumerable_string__o *)
                                       (__this->fields).ParameterNames,(MethodInfo *)0x0);
          if (4 < (uint)values->max_length) {
            values->m_Items[4] = pSVar2;
            il2cpp_runtime_glue(values->m_Items + 4,pSVar2);
            if (5 < (uint)values->max_length) {
              values->m_Items[5] = ")";
              il2cpp_runtime_glue(values->m_Items + 5);
              pSVar2 = System_String__Concat(values,(MethodInfo *)0x0);
              return pSVar2;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


