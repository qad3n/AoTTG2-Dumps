// Type: CustomLogic.CustomLogicPrimitiveExpressionAst
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicPrimitiveExpressionAst.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Ast/CustomLogicPrimitiveExpressionAst.cs
// --------------------------------

// CustomLogic.CustomLogicPrimitiveExpressionAst$$.ctor
// il2cpp: void CustomLogic_CustomLogicPrimitiveExpressionAst___ctor (CustomLogic_CustomLogicPrimitiveExpressionAst_o* __this, Il2CppObject* value, int32_t line, const MethodInfo* method);
// 0x181ed1d30

void CustomLogic_CustomLogicPrimitiveExpressionAst___ctor
               (CustomLogic_CustomLogicPrimitiveExpressionAst_o *__this,Il2CppObject *value,int32_t line,
               MethodInfo *method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Type = 7;
  (__this->fields).Line = line;
  (__this->fields).Value = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Value,value);
  return;
}


