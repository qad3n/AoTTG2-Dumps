// Type: CustomLogic.CustomLogicClassDefinitionAst
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicClassDefinitionAst.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Ast/CustomLogicClassDefinitionAst.cs
// --------------------------------

// CustomLogic.CustomLogicClassDefinitionAst$$get_Namespace
// il2cpp: System_Nullable_CustomLogicSourceType__o CustomLogic_CustomLogicClassDefinitionAst__get_Namespace (CustomLogic_CustomLogicClassDefinitionAst_o* __this, const MethodInfo* method);
// 0x1805853f0

System_Nullable_CustomLogicSourceType__o
CustomLogic_CustomLogicClassDefinitionAst__get_Namespace(CustomLogic_CustomLogicClassDefinitionAst_o* __this, MethodInfo* method)

{
  return (__this->fields)._Namespace_k__BackingField;
}


// CustomLogic.CustomLogicClassDefinitionAst$$set_Namespace
// il2cpp: void CustomLogic_CustomLogicClassDefinitionAst__set_Namespace (CustomLogic_CustomLogicClassDefinitionAst_o* __this, System_Nullable_CustomLogicSourceType__o value, const MethodInfo* method);
// 0x181c61410

void
CustomLogic_CustomLogicClassDefinitionAst__set_Namespace(CustomLogic_CustomLogicClassDefinitionAst_o* __this, System_Nullable_CustomLogicSourceType__o value, MethodInfo* method)

{
  (__this->fields)._Namespace_k__BackingField.fields.Value = (int64_t)value.fields.Value;
  return;
}


// CustomLogic.CustomLogicClassDefinitionAst$$.ctor
// il2cpp: void CustomLogic_CustomLogicClassDefinitionAst___ctor (CustomLogic_CustomLogicClassDefinitionAst_o* __this, CustomLogic_CustomLogicToken_o* token, int32_t line, const MethodInfo* method);
// 0x181ecdc80

void CustomLogic_CustomLogicClassDefinitionAst___ctor
               (CustomLogic_CustomLogicClassDefinitionAst_o *__this,CustomLogic_CustomLogicToken_o *token,
               int32_t line,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_List_CustomLogicAssignmentExpressionAst__o *__this_01;
  System_Collections_Generic_Dictionary_string__CustomLogicMethodDefinitionAst__o *__this_02;
  CustomLogic_CustomLogicMethodDefinitionAst_o *__this_03;
  System_Collections_Generic_List_string__o *__this_04;
  
  if (Il2CppMethodInitialized_184345135 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMethodDefinitionAst);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicMethodDefinitionAst_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicMethodDefinitionAst_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_CustomLogicMethodDefinitionAst);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicAssignmentExpressionAst_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_CustomLogicAssignmentExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata(&"Init");
    Il2CppMethodInitialized_184345135 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_List_CustomLogicAssignmentExpressionAst);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
             (MethodInfo_92A240 *)
             MethodInfo_System_Collections_Generic_List_CustomLogicAssignmentExpressionAst_ctor);
  (__this->fields).Assignments = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Assignments,__this_01);
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_string_CustomLogicMethodDefinitionAst)
  ;
  System_Collections_Generic_Dictionary_object__ProbeReferenceVolume_CellData_PerScenarioData____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_02,
             (MethodInfo_1454140 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicMethodDefinitionAst_ctor);
  (__this->fields).Methods = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Methods,__this_02);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Type = 1;
  (__this->fields).Line = line;
  (__this->fields).Token = token;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Token,token);
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Methods;
  __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMethodDefinitionAst);
  if (Il2CppMethodInitialized_18434513a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    Il2CppMethodInitialized_18434513a = '\x01';
  }
  __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_04,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  (__this_03->fields).ParameterNames = __this_04;
  Il2CppCodeGenWriteBarrier(&(__this_03->fields).ParameterNames,__this_04);
  CustomLogic_CustomLogicBlockAst___ctor((CustomLogic_CustomLogicBlockAst_o *)__this_03,2,0,(MethodInfo *)0x0)
  ;
  (__this_03->fields).Coroutine = false;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Add
              (__this_00,(Il2CppObject *)"Init",(Il2CppObject *)__this_03,
               (MethodInfo_146B4B0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicMethodDefinitionAst_Add);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicClassDefinitionAst$$GetInit
// il2cpp: CustomLogic_CustomLogicMethodDefinitionAst_o* CustomLogic_CustomLogicClassDefinitionAst__GetInit (CustomLogic_CustomLogicClassDefinitionAst_o* __this, const MethodInfo* method);
// 0x181ecdc20

CustomLogic_CustomLogicMethodDefinitionAst_o *
CustomLogic_CustomLogicClassDefinitionAst__GetInit
          (CustomLogic_CustomLogicClassDefinitionAst_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  CustomLogic_CustomLogicMethodDefinitionAst_o *pCVar1;
  
  if (Il2CppMethodInitialized_184345136 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicMethodDefinitionAst_get_Item
              );
    il2cpp_codegen_initialize_runtime_metadata(&"Init");
    Il2CppMethodInitialized_184345136 = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Methods;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pCVar1 = System_Collections_Generic_Dictionary_object__object___get_Item
                       (__this_00,(Il2CppObject *)"Init",
                        (MethodInfo_147A5B0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicMethodDefinitionAst_get_Item
                       );
    return pCVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicClassDefinitionAst$$AddMethod
// il2cpp: void CustomLogic_CustomLogicClassDefinitionAst__AddMethod (CustomLogic_CustomLogicClassDefinitionAst_o* __this, System_String_o* methodName, CustomLogic_CustomLogicMethodDefinitionAst_o* methodAst, const MethodInfo* method);
// 0x181ecdb60

void CustomLogic_CustomLogicClassDefinitionAst__AddMethod
               (CustomLogic_CustomLogicClassDefinitionAst_o *__this,System_String_o *methodName,
               CustomLogic_CustomLogicMethodDefinitionAst_o *methodAst,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__CustomLogicMethodDefinitionAst__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184345137 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicMethodDefinitionAst_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicMethodDefinitionAst_ContainsKey
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicMethodDefinitionAst_set_Item
              );
    Il2CppMethodInitialized_184345137 = '\x01';
  }
  __this_00 = (__this->fields).Methods;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__CustomLogicMethodDefinitionAst__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                       (Il2CppObject *)methodName,
                       (MethodInfo_1455450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicMethodDefinitionAst_ContainsKey
                      );
    __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Methods;
    if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      if (!bVar1) {
        System_Collections_Generic_Dictionary_object__object___Add
                  (__this_01,(Il2CppObject *)methodName,(Il2CppObject *)methodAst,
                   (MethodInfo_146B4B0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicMethodDefinitionAst_Add)
        ;
        return;
      }
      System_Collections_Generic_Dictionary_object__object___set_Item
                (__this_01,(Il2CppObject *)methodName,(Il2CppObject *)methodAst,
                 (MethodInfo_147A7F0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicMethodDefinitionAst_set_Item
                );
      return;
    }
  }
  ThrowNullReferenceException();
}


