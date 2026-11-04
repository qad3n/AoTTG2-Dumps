// Type: CustomLogic.CustomLogicBinopExpressionAst
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicBinopExpressionAst.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Ast/CustomLogicBinopExpressionAst.cs
// --------------------------------

// CustomLogic.CustomLogicBinopExpressionAst$$.ctor
// il2cpp: void CustomLogic_CustomLogicBinopExpressionAst___ctor (CustomLogic_CustomLogicBinopExpressionAst_o* __this, CustomLogic_CustomLogicToken_o* token, int32_t line, const MethodInfo* method);
// 0x181ecda60

void CustomLogic_CustomLogicBinopExpressionAst___ctor
               (CustomLogic_CustomLogicBinopExpressionAst_o *__this,CustomLogic_CustomLogicToken_o *token,
               int32_t line,MethodInfo *method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Type = 9;
  (__this->fields).Line = line;
  (__this->fields).Token = token;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Token,token);
  return;
}


