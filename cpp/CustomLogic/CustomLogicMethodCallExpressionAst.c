// Type: CustomLogic.CustomLogicMethodCallExpressionAst
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicMethodCallExpressionAst.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Ast/CustomLogicMethodCallExpressionAst.cs
// --------------------------------

// CustomLogic.CustomLogicMethodCallExpressionAst$$.ctor
// il2cpp: void CustomLogic_CustomLogicMethodCallExpressionAst___ctor (CustomLogic_CustomLogicMethodCallExpressionAst_o* __this, System_String_o* name, int32_t line, const MethodInfo* method);
// 0x40b8ac0

void CustomLogic_CustomLogicMethodCallExpressionAst___ctor
               (CustomLogic_CustomLogicMethodCallExpressionAst_o *__this,System_String_o *name,int32_t line,
               MethodInfo *method)

{
  System_Collections_Generic_List_CustomLogicBaseAst__o *__this_00;
  
  if (g_data_057ac500 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_CustomLogic_CustomLogicBaseAst);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_CustomLogicBaseAst);
    g_data_057ac500 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_CustomLogicBaseAst__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_CustomLogicBaseAst);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_CustomLogic_CustomLogicBaseAst);
  (__this->fields).Parameters = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Parameters);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Type = 4;
  (__this->fields).Line = line;
  (__this->fields).Name = name;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Name,name);
  return;
}


