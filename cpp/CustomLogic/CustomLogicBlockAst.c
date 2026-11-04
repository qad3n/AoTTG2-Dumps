// Type: CustomLogic.CustomLogicBlockAst
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicBlockAst.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Ast/CustomLogicBlockAst.cs
// --------------------------------

// CustomLogic.CustomLogicBlockAst$$.ctor
// il2cpp: void CustomLogic_CustomLogicBlockAst___ctor (CustomLogic_CustomLogicBlockAst_o* __this, int32_t type, int32_t line, const MethodInfo* method);
// 0x181ecdab0

void CustomLogic_CustomLogicBlockAst___ctor
               (CustomLogic_CustomLogicBlockAst_o *__this,int32_t type,int32_t line,MethodInfo *method)

{
  System_Collections_Generic_List_CustomLogicBaseAst__o *__this_00;
  
  if (Il2CppMethodInitialized_184345134 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_CustomLogicBaseAst);
    Il2CppMethodInitialized_184345134 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_CustomLogicBaseAst);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_ctor);
  (__this->fields).Statements = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Statements,__this_00);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Type = type;
  (__this->fields).Line = line;
  return;
}


