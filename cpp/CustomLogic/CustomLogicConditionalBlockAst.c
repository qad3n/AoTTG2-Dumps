// Type: CustomLogic.CustomLogicConditionalBlockAst
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicConditionalBlockAst.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Ast/CustomLogicConditionalBlockAst.cs
// --------------------------------

// CustomLogic.CustomLogicConditionalBlockAst$$.ctor
// il2cpp: void CustomLogic_CustomLogicConditionalBlockAst___ctor (CustomLogic_CustomLogicConditionalBlockAst_o* __this, CustomLogic_CustomLogicToken_o* token, int32_t line, const MethodInfo* method);
// 0x181ecf650

void CustomLogic_CustomLogicConditionalBlockAst___ctor
               (CustomLogic_CustomLogicConditionalBlockAst_o *__this,CustomLogic_CustomLogicToken_o *token,
               int32_t line,MethodInfo *method)

{
  CustomLogic_CustomLogicBlockAst___ctor
            ((CustomLogic_CustomLogicBlockAst_o *)__this,0x10,line,(MethodInfo *)0x0);
  (__this->fields).Token = token;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Token,token);
  return;
}


