// Type: CustomLogic.CustomLogicUnaryExpressionAst
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicUnaryExpressionAst.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicUnaryExpressionAst$$.ctor
// il2cpp: void CustomLogic_CustomLogicUnaryExpressionAst___ctor (CustomLogic_CustomLogicUnaryExpressionAst_o* __this, CustomLogic_CustomLogicToken_o* token, int32_t line, const MethodInfo* method);
// 0x181ed3f80

void CustomLogic_CustomLogicUnaryExpressionAst___ctor
               (CustomLogic_CustomLogicUnaryExpressionAst_o *__this,CustomLogic_CustomLogicToken_o *token,
               int32_t line,MethodInfo *method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Type = 8;
  (__this->fields).Line = line;
  (__this->fields).Token = token;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Token,token);
  return;
}


