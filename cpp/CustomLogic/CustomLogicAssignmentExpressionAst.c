// Type: CustomLogic.CustomLogicAssignmentExpressionAst
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicAssignmentExpressionAst.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Ast/CustomLogicAssignmentExpressionAst.cs
// --------------------------------

// CustomLogic.CustomLogicAssignmentExpressionAst$$.ctor
// il2cpp: void CustomLogic_CustomLogicAssignmentExpressionAst___ctor (CustomLogic_CustomLogicAssignmentExpressionAst_o* __this, CustomLogic_CustomLogicBaseExpressionAst_o* left, CustomLogic_CustomLogicToken_o* operator, int32_t line, const MethodInfo* method);
// 0x59a8810

void CustomLogic_CustomLogicAssignmentExpressionAst___ctor
               (CustomLogic_CustomLogicAssignmentExpressionAst_o *__this,
               CustomLogic_CustomLogicBaseExpressionAst_o *left,CustomLogic_CustomLogicToken_o *operator,
               int32_t line,MethodInfo *method)

{
  System_Collections_Generic_List_CustomLogicDecorator__o *__this_00;
  
  if (Il2CppMethodInitialized_07545acb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicDecorator_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_CustomLogicDecorator)
    ;
    Il2CppMethodInitialized_07545acb = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_CustomLogicDecorator);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_CustomLogicDecorator_ctor);
  (__this->fields).Decorators = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Decorators);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Type = 3;
  (__this->fields).Line = line;
  (__this->fields).Left = left;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Left);
  (__this->fields).Operator = operator;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Operator);
  return;
}


