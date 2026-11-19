// Type: CustomLogic.CustomLogicBlockAst
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicBlockAst.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Ast/CustomLogicBlockAst.cs
// --------------------------------

// CustomLogic.CustomLogicBlockAst$$.ctor
// il2cpp: void CustomLogic_CustomLogicBlockAst___ctor (CustomLogic_CustomLogicBlockAst_o* __this, int32_t type, int32_t line, const MethodInfo* method);
// 0x59a89d0

void CustomLogic_CustomLogicBlockAst___ctor
               (CustomLogic_CustomLogicBlockAst_o *__this,int32_t type,int32_t line,MethodInfo *method)

{
  System_Collections_Generic_List_CustomLogicBaseAst__o *__this_00;
  
  if (Il2CppMethodInitialized_07545acd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_CustomLogicBaseAst);
    Il2CppMethodInitialized_07545acd = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_CustomLogicBaseAst);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_ctor);
  (__this->fields).Statements = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Statements);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Type = type;
  (__this->fields).Line = line;
  return;
}


