// Type: CustomLogic.CustomLogicConditionalBlockAst
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicConditionalBlockAst.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomLogic/Ast/CustomLogicConditionalBlockAst.cs  [prior source available (delta unverified)]
// --------------------------------

// CustomLogic.CustomLogicConditionalBlockAst$$.ctor
// il2cpp: void CustomLogic_CustomLogicConditionalBlockAst___ctor (CustomLogic_CustomLogicConditionalBlockAst_o* __this, CustomLogic_CustomLogicToken_o* token, int32_t line, const MethodInfo* method);
// 0x3db2600

void CustomLogic_CustomLogicConditionalBlockAst___ctor
               (CustomLogic_CustomLogicConditionalBlockAst_o *__this,
               CustomLogic_CustomLogicToken_o *token,int32_t line,MethodInfo *method)

{
  System_Collections_Generic_List_CustomLogicBaseAst__o *__this_00;
  
  if (DAT_057027c6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_CustomLogic_CustomLogicBaseAst);
    il2cpp_init_method_metadata(&TypeInfo_List_CustomLogicBaseAst);
    DAT_057027c6 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_CustomLogicBaseAst__o *)
              il2cpp_runtime_glue(TypeInfo_List_CustomLogicBaseAst);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_CustomLogic_CustomLogicBaseAst);
  (__this->fields).Statements = __this_00;
  il2cpp_runtime_glue(&(__this->fields).Statements);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Type = 0x10;
  (__this->fields).Line = line;
  (__this->fields).Token = token;
  il2cpp_runtime_glue(&(__this->fields).Token,token);
  return;
}


