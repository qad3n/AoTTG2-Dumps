// Type: CustomLogic.CustomLogicAssignmentExpressionAst
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicAssignmentExpressionAst.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Ast/CustomLogicAssignmentExpressionAst.cs
// --------------------------------

// CustomLogic.CustomLogicAssignmentExpressionAst$$.ctor
// il2cpp: void CustomLogic_CustomLogicAssignmentExpressionAst___ctor (CustomLogic_CustomLogicAssignmentExpressionAst_o* __this, CustomLogic_CustomLogicBaseExpressionAst_o* left, CustomLogic_CustomLogicToken_o* operator, int32_t line, const MethodInfo* method);
// 0x181ecd9b0

void CustomLogic_CustomLogicAssignmentExpressionAst___ctor
               (CustomLogic_CustomLogicAssignmentExpressionAst_o *__this,
               CustomLogic_CustomLogicBaseExpressionAst_o *left,CustomLogic_CustomLogicToken_o *operator,
               int32_t line,MethodInfo *method)

{
  System_Collections_Generic_List_CustomLogicDecorator__o *__this_00;
  
  if (Il2CppMethodInitialized_184345132 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicDecorator_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_CustomLogicDecorator)
    ;
    Il2CppMethodInitialized_184345132 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_CustomLogicDecorator);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_CustomLogicDecorator_ctor);
  (__this->fields).Decorators = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Decorators,__this_00);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Type = 3;
  (__this->fields).Line = line;
  (__this->fields).Left = left;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Left,left);
  (__this->fields).Operator = operator;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Operator,operator);
  return;
}


