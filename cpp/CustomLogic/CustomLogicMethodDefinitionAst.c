// Type: CustomLogic.CustomLogicMethodDefinitionAst
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicMethodDefinitionAst.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Ast/CustomLogicMethodDefinitionAst.cs
// --------------------------------

// CustomLogic.CustomLogicMethodDefinitionAst$$.ctor
// il2cpp: void CustomLogic_CustomLogicMethodDefinitionAst___ctor (CustomLogic_CustomLogicMethodDefinitionAst_o* __this, int32_t line, bool coroutine, const MethodInfo* method);
// 0x40b86a0

void CustomLogic_CustomLogicMethodDefinitionAst___ctor
               (CustomLogic_CustomLogicMethodDefinitionAst_o *__this,int32_t line,bool_conflict coroutine,
               MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_List_CustomLogicBaseAst__o *__this_01;
  
  if (g_data_057ac501 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057ac501 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_System_String);
  (__this->fields).ParameterNames = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).ParameterNames,__this_00);
  if (g_data_057ac4fb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_CustomLogic_CustomLogicBaseAst);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_CustomLogicBaseAst);
    g_data_057ac4fb = '\x01';
  }
  __this_01 = (System_Collections_Generic_List_CustomLogicBaseAst__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_CustomLogicBaseAst);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_CustomLogic_CustomLogicBaseAst);
  (__this->fields).Statements = __this_01;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Statements);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Type = 2;
  (__this->fields).Line = line;
  *(char *)&(__this->fields).Coroutine = (char)coroutine;
  return;
}


// CustomLogic.CustomLogicMethodDefinitionAst$$ToString
// il2cpp: System_String_o* CustomLogic_CustomLogicMethodDefinitionAst__ToString (CustomLogic_CustomLogicMethodDefinitionAst_o* __this, const MethodInfo* method);
// 0x40b8b60

System_String_o *
CustomLogic_CustomLogicMethodDefinitionAst__ToString
          (CustomLogic_CustomLogicMethodDefinitionAst_o *__this,MethodInfo *method)

{
  System_String_array *values;
  undefined8 *puVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o *extraout_RAX;
  undefined4 uVar4;
  System_String_o *pSVar5;
  System_Collections_Generic_List_string__o *values_00;
  
  if (g_data_057ac502 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&" ");
    il2cpp_runtime_helper_023445d0(&", ");
    il2cpp_runtime_helper_023445d0(&"function");
    il2cpp_runtime_helper_023445d0(&"(");
    il2cpp_runtime_helper_023445d0(&")");
    il2cpp_runtime_helper_023445d0(&"coroutine");
    g_data_057ac502 = '\x01';
  }
  uVar4 = 6;
  pSVar3 = TypeInfo_string;
  values = (System_String_array *)il2cpp_runtime_helper_022b2a40();
  if ((char)(__this->fields).Coroutine == '\0') {
    puVar1 = &"function";
  }
  else {
    puVar1 = &"coroutine";
  }
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      pSVar2 = (System_String_o *)*puVar1;
      pSVar3 = (System_String_o *)values->m_Items;
      values->m_Items[0] = pSVar2;
      il2cpp_runtime_helper_022b4080();
      pSVar5 = " ";
      uVar4 = SUB84(pSVar2,0);
      if (1 < (uint)values->max_length) {
        pSVar3 = (System_String_o *)(values->m_Items + 1);
        values->m_Items[1] = " ";
        il2cpp_runtime_helper_022b4080();
        uVar4 = SUB84(pSVar5,0);
        if (2 < (uint)values->max_length) {
          pSVar2 = (__this->fields).Name;
          pSVar3 = (System_String_o *)(values->m_Items + 2);
          values->m_Items[2] = pSVar2;
          il2cpp_runtime_helper_022b4080();
          uVar4 = SUB84(pSVar2,0);
          if (3 < (uint)values->max_length) {
            values->m_Items[3] = "(";
            il2cpp_runtime_helper_022b4080(values->m_Items + 3);
            values_00 = (__this->fields).ParameterNames;
            pSVar3 = ", ";
            pSVar2 = System_String__Join_3af7e00
                               (", ",(System_Collections_Generic_IEnumerable_string__o *)values_00,
                                (MethodInfo *)0x0);
            uVar4 = SUB84(values_00,0);
            if (4 < (uint)values->max_length) {
              pSVar3 = (System_String_o *)(values->m_Items + 4);
              values->m_Items[4] = pSVar2;
              il2cpp_runtime_helper_022b4080();
              uVar4 = SUB84(pSVar2,0);
              if (5 < (uint)values->max_length) {
                values->m_Items[5] = ")";
                il2cpp_runtime_helper_022b4080(values->m_Items + 5);
                pSVar3 = System_String__Concat_3af7570(values,(MethodInfo *)0x0);
                return pSVar3;
              }
            }
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pSVar3,(MethodInfo *)0x0);
  (pSVar3->fields)._stringLength = 10;
  *(undefined4 *)&(pSVar3->fields)._firstChar = uVar4;
  return extraout_RAX;
}


