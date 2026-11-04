// Type: CustomLogic.CustomLogicFieldExpressionAst
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicFieldExpressionAst.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Ast/CustomLogicFieldExpressionAst.cs
// --------------------------------

// CustomLogic.CustomLogicFieldExpressionAst$$.ctor
// il2cpp: void CustomLogic_CustomLogicFieldExpressionAst___ctor (CustomLogic_CustomLogicFieldExpressionAst_o* __this, System_String_o* name, int32_t line, const MethodInfo* method);
// 0x181ed0160

void CustomLogic_CustomLogicFieldExpressionAst___ctor
               (CustomLogic_CustomLogicFieldExpressionAst_o *__this,System_String_o *name,int32_t line,
               MethodInfo *method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Type = 6;
  (__this->fields).Line = line;
  (__this->fields).FieldName = name;
  Il2CppCodeGenWriteBarrier(&(__this->fields).FieldName,name);
  return;
}


