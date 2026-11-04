// Type: CustomLogic.CustomLogicMethodCallExpressionAst
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicMethodCallExpressionAst.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Ast/CustomLogicMethodCallExpressionAst.cs
// --------------------------------

// CustomLogic.CustomLogicMethodCallExpressionAst$$.ctor
// il2cpp: void CustomLogic_CustomLogicMethodCallExpressionAst___ctor (CustomLogic_CustomLogicMethodCallExpressionAst_o* __this, System_String_o* name, int32_t line, const MethodInfo* method);
// 0x181ed1a60

void CustomLogic_CustomLogicMethodCallExpressionAst___ctor
               (CustomLogic_CustomLogicMethodCallExpressionAst_o *__this,System_String_o *name,int32_t line,
               MethodInfo *method)

{
  System_Collections_Generic_List_CustomLogicBaseAst__o *__this_00;
  
  if (Il2CppMethodInitialized_184345139 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_CustomLogicBaseAst);
    Il2CppMethodInitialized_184345139 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_CustomLogicBaseAst);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_ctor);
  (__this->fields).Parameters = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Parameters,__this_00);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Type = 4;
  (__this->fields).Line = line;
  (__this->fields).Name = name;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Name,name);
  return;
}


