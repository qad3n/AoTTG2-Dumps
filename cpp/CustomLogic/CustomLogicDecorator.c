// Type: CustomLogic.CustomLogicDecorator
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicDecorator.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicDecorator$$.ctor
// il2cpp: void CustomLogic_CustomLogicDecorator___ctor (CustomLogic_CustomLogicDecorator_o* __this, System_String_o* name, const MethodInfo* method);
// 0x181ecf6c0

void CustomLogic_CustomLogicDecorator___ctor
               (CustomLogic_CustomLogicDecorator_o *__this,System_String_o *name,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  
  if (Il2CppMethodInitialized_184345133 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_object);
    Il2CppMethodInitialized_184345133 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_object);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_object_ctor);
  (__this->fields).Parameters = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Parameters,__this_00);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Name = name;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Name,name);
  return;
}


