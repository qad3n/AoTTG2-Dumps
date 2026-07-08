// Type: CustomLogic.CustomLogicMethodCallExpressionAst
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicMethodCallExpressionAst.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomLogic/Ast/CustomLogicMethodCallExpressionAst.cs  [prior source available (delta unverified)]
// --------------------------------

// CustomLogic.CustomLogicMethodCallExpressionAst$$.ctor
// il2cpp: void CustomLogic_CustomLogicMethodCallExpressionAst___ctor (CustomLogic_CustomLogicMethodCallExpressionAst_o* __this, System_String_o* name, int32_t line, const MethodInfo* method);
// 0x3db2780

void CustomLogic_CustomLogicMethodCallExpressionAst___ctor
               (CustomLogic_CustomLogicMethodCallExpressionAst_o *__this,System_String_o *name,
               int32_t line,MethodInfo *method)

{
  System_Collections_Generic_List_CustomLogicBaseAst__o *__this_00;
  
  if (DAT_057027cb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_CustomLogic_CustomLogicBaseAst);
    il2cpp_init_method_metadata(&TypeInfo_List_CustomLogicBaseAst);
    DAT_057027cb = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_CustomLogicBaseAst__o *)
              il2cpp_runtime_glue(TypeInfo_List_CustomLogicBaseAst);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_CustomLogic_CustomLogicBaseAst);
  (__this->fields).Parameters = __this_00;
  il2cpp_runtime_glue(&(__this->fields).Parameters);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Type = 4;
  (__this->fields).Line = line;
  (__this->fields).Name = name;
  il2cpp_runtime_glue(&(__this->fields).Name,name);
  return;
}


