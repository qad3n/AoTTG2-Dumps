// Type: CustomLogic.CustomLogicClassDefinitionAst
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicClassDefinitionAst.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Ast/CustomLogicClassDefinitionAst.cs
// --------------------------------

// CustomLogic.CustomLogicClassDefinitionAst$$get_Namespace
// il2cpp: System_Nullable_CustomLogicSourceType__o CustomLogic_CustomLogicClassDefinitionAst__get_Namespace (CustomLogic_CustomLogicClassDefinitionAst_o* __this, const MethodInfo* method);
// 0x59a8a80

System_Nullable_CustomLogicSourceType__o
CustomLogic_CustomLogicClassDefinitionAst__get_Namespace
          (CustomLogic_CustomLogicClassDefinitionAst_o *__this,MethodInfo *method)

{
  return (System_Nullable_CustomLogicSourceType__o)(__this->fields)._Namespace_k__BackingField.fields;
}


// CustomLogic.CustomLogicClassDefinitionAst$$set_Namespace
// il2cpp: void CustomLogic_CustomLogicClassDefinitionAst__set_Namespace (CustomLogic_CustomLogicClassDefinitionAst_o* __this, System_Nullable_CustomLogicSourceType__o value, const MethodInfo* method);
// 0x59a8a90

void CustomLogic_CustomLogicClassDefinitionAst__set_Namespace
               (CustomLogic_CustomLogicClassDefinitionAst_o *__this,
               System_Nullable_CustomLogicSourceType__o value,MethodInfo *method)

{
  (__this->fields)._Namespace_k__BackingField.fields = value.fields;
  return;
}


// CustomLogic.CustomLogicClassDefinitionAst$$.ctor
// il2cpp: void CustomLogic_CustomLogicClassDefinitionAst___ctor (CustomLogic_CustomLogicClassDefinitionAst_o* __this, CustomLogic_CustomLogicToken_o* token, int32_t line, const MethodInfo* method);
// 0x59a8aa0

void CustomLogic_CustomLogicClassDefinitionAst___ctor
               (CustomLogic_CustomLogicClassDefinitionAst_o *__this,CustomLogic_CustomLogicToken_o *token,
               int32_t line,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_List_CustomLogicAssignmentExpressionAst__o *__this_01;
  System_Collections_Generic_Dictionary_string__CustomLogicMethodDefinitionAst__o *__this_02;
  CustomLogic_CustomLogicMethodDefinitionAst_o *__this_03;
  
  if (Il2CppMethodInitialized_07545ace == '\0') {
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
    Il2CppMethodInitialized_07545ace = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_List_CustomLogicAssignmentExpressionAst);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             (MethodInfo_395C910 *)
             MethodInfo_System_Collections_Generic_List_CustomLogicAssignmentExpressionAst_ctor);
  (__this->fields).Assignments = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Assignments);
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_string_CustomLogicMethodDefinitionAst)
  ;
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_02,
             (MethodInfo_4AAC8D0 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicMethodDefinitionAst_ctor);
  (__this->fields).Methods = __this_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Methods);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Type = 1;
  (__this->fields).Line = line;
  (__this->fields).Token = token;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Token);
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Methods;
  __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMethodDefinitionAst);
  CustomLogic_CustomLogicMethodDefinitionAst___ctor(__this_03,0,false,method);
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_object__object___Add
            (__this_00,(Il2CppObject *)"Init",(Il2CppObject *)__this_03,
             (MethodInfo_4AAD4E0 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicMethodDefinitionAst_Add);
  return;
}


// CustomLogic.CustomLogicClassDefinitionAst$$GetInit
// il2cpp: CustomLogic_CustomLogicMethodDefinitionAst_o* CustomLogic_CustomLogicClassDefinitionAst__GetInit (CustomLogic_CustomLogicClassDefinitionAst_o* __this, const MethodInfo* method);
// 0x59a8cf0

CustomLogic_CustomLogicMethodDefinitionAst_o *
CustomLogic_CustomLogicClassDefinitionAst__GetInit
          (CustomLogic_CustomLogicClassDefinitionAst_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  CustomLogic_CustomLogicMethodDefinitionAst_o *pCVar1;
  
  if (Il2CppMethodInitialized_07545acf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicMethodDefinitionAst_get_Item
              );
    il2cpp_codegen_initialize_runtime_metadata(&"Init");
    Il2CppMethodInitialized_07545acf = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Methods;
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = System_Collections_Generic_Dictionary_object__object___get_Item
                     (__this_00,(Il2CppObject *)"Init",
                      (MethodInfo_4AAD450 *)
                      MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicMethodDefinitionAst_get_Item
                     );
  return pCVar1;
}


// CustomLogic.CustomLogicClassDefinitionAst$$AddMethod
// il2cpp: void CustomLogic_CustomLogicClassDefinitionAst__AddMethod (CustomLogic_CustomLogicClassDefinitionAst_o* __this, System_String_o* methodName, CustomLogic_CustomLogicMethodDefinitionAst_o* methodAst, const MethodInfo* method);
// 0x59a8d50

void CustomLogic_CustomLogicClassDefinitionAst__AddMethod
               (CustomLogic_CustomLogicClassDefinitionAst_o *__this,System_String_o *methodName,
               CustomLogic_CustomLogicMethodDefinitionAst_o *methodAst,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07545ad0 == '\0') {
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
    Il2CppMethodInitialized_07545ad0 = '\x01';
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Methods;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar1,(Il2CppObject *)methodName,
                       (MethodInfo_4AAD6F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicMethodDefinitionAst_ContainsKey
                      );
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Methods;
    if (bVar2) {
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar1,(Il2CppObject *)methodName,(Il2CppObject *)methodAst,
                   (MethodInfo_4AAD4C0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicMethodDefinitionAst_set_Item
                  );
        return;
      }
    }
    else if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar1,(Il2CppObject *)methodName,(Il2CppObject *)methodAst,
                 (MethodInfo_4AAD4E0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicMethodDefinitionAst_Add);
      return;
    }
  }
  ThrowNullReferenceException();
}


