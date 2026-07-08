// Type: CustomLogic.CustomLogicClassDefinitionAst
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicClassDefinitionAst.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomLogic/Ast/CustomLogicClassDefinitionAst.cs  [CHANGED since prior version]
// --------------------------------

// CustomLogic.CustomLogicClassDefinitionAst$$get_Namespace
// il2cpp: System_Nullable_CustomLogicSourceType__o CustomLogic_CustomLogicClassDefinitionAst__get_Namespace (CustomLogic_CustomLogicClassDefinitionAst_o* __this, const MethodInfo* method);
// 0x3db21e0

System_Nullable_CustomLogicSourceType__o
CustomLogic_CustomLogicClassDefinitionAst__get_Namespace
          (CustomLogic_CustomLogicClassDefinitionAst_o *__this,MethodInfo *method)

{
  return (System_Nullable_CustomLogicSourceType__o)
         (__this->fields)._Namespace_k__BackingField.fields;
}


// CustomLogic.CustomLogicClassDefinitionAst$$set_Namespace
// il2cpp: void CustomLogic_CustomLogicClassDefinitionAst__set_Namespace (CustomLogic_CustomLogicClassDefinitionAst_o* __this, System_Nullable_CustomLogicSourceType__o value, const MethodInfo* method);
// 0x3db21f0

void CustomLogic_CustomLogicClassDefinitionAst__set_Namespace
               (CustomLogic_CustomLogicClassDefinitionAst_o *__this,
               System_Nullable_CustomLogicSourceType__o value,MethodInfo *method)

{
  (__this->fields)._Namespace_k__BackingField.fields = value.fields;
  return;
}


// CustomLogic.CustomLogicClassDefinitionAst$$.ctor
// il2cpp: void CustomLogic_CustomLogicClassDefinitionAst___ctor (CustomLogic_CustomLogicClassDefinitionAst_o* __this, CustomLogic_CustomLogicToken_o* token, int32_t line, const MethodInfo* method);
// 0x3db2200

void CustomLogic_CustomLogicClassDefinitionAst___ctor
               (CustomLogic_CustomLogicClassDefinitionAst_o *__this,
               CustomLogic_CustomLogicToken_o *token,int32_t line,MethodInfo *method)

{
  System_Collections_Generic_List_CustomLogicAssignmentExpressionAst__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  CustomLogic_CustomLogicMethodDefinitionAst_o *__this_01;
  
  if (DAT_057027c7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicMethodDefinitionAst);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_CustomLogic_CustomLog);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__CustomLogicMethodDefinitionAs);
    il2cpp_init_method_metadata(&MethodInfo_List_1_CustomLogic_CustomLogicAssignmentExpressi);
    il2cpp_init_method_metadata(&TypeInfo_List_CustomLogicAssignmentExpressionAst);
    il2cpp_init_method_metadata(&"Init");
    DAT_057027c7 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_CustomLogicAssignmentExpressionAst__o *)
              il2cpp_runtime_glue(TypeInfo_List_CustomLogicAssignmentExpressionAst);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_CustomLogic_CustomLogicAssignmentExpressi);
  (__this->fields).Assignments = __this_00;
  il2cpp_runtime_glue(&(__this->fields).Assignments,__this_00);
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_string__CustomLogicMethodDefinitionAs);
  System_Collections_Generic_Dictionary<object__object>___ctor(pSVar1,MethodInfo_Dictionary_2_System_String_CustomLogic_CustomLog);
  (__this->fields).Methods =
       (System_Collections_Generic_Dictionary_string__CustomLogicMethodDefinitionAst__o *)pSVar1;
  il2cpp_runtime_glue(&(__this->fields).Methods);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Type = 1;
  (__this->fields).Line = line;
  (__this->fields).Token = token;
  il2cpp_runtime_glue(&(__this->fields).Token);
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Methods;
  __this_01 = (CustomLogic_CustomLogicMethodDefinitionAst_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicMethodDefinitionAst);
  CustomLogic_CustomLogicMethodDefinitionAst___ctor(__this_01,0,0,method);
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object__object>__Add
              (pSVar1,"Init",(Il2CppObject *)__this_01,MethodInfo_Void_Add);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicClassDefinitionAst$$GetInit
// il2cpp: CustomLogic_CustomLogicMethodDefinitionAst_o* CustomLogic_CustomLogicClassDefinitionAst__GetInit (CustomLogic_CustomLogicClassDefinitionAst_o* __this, const MethodInfo* method);
// 0x3db2450

CustomLogic_CustomLogicMethodDefinitionAst_o *
CustomLogic_CustomLogicClassDefinitionAst__GetInit
          (CustomLogic_CustomLogicClassDefinitionAst_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  CustomLogic_CustomLogicMethodDefinitionAst_o *pCVar1;
  
  if (DAT_057027c8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicMethodDefinitionAst_get_Item);
    il2cpp_init_method_metadata(&"Init");
    DAT_057027c8 = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Methods;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pCVar1 = (CustomLogic_CustomLogicMethodDefinitionAst_o *)
             System_Collections_Generic_Dictionary<object__object>__get_Item
                       (__this_00,"Init",MethodInfo_CustomLogicMethodDefinitionAst_get_Item);
    return pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicClassDefinitionAst$$AddMethod
// il2cpp: void CustomLogic_CustomLogicClassDefinitionAst__AddMethod (CustomLogic_CustomLogicClassDefinitionAst_o* __this, System_String_o* methodName, CustomLogic_CustomLogicMethodDefinitionAst_o* methodAst, const MethodInfo* method);
// 0x3db24b0

void CustomLogic_CustomLogicClassDefinitionAst__AddMethod
               (CustomLogic_CustomLogicClassDefinitionAst_o *__this,System_String_o *methodName,
               CustomLogic_CustomLogicMethodDefinitionAst_o *methodAst,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool_conflict bVar2;
  
  if (DAT_057027c9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    DAT_057027c9 = '\x01';
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Methods;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      (pSVar1,(Il2CppObject *)methodName,MethodInfo_Boolean_ContainsKey);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Methods;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      if ((char)bVar2 != '\0') {
        System_Collections_Generic_Dictionary<object__object>__set_Item
                  (pSVar1,(Il2CppObject *)methodName,(Il2CppObject *)methodAst,MethodInfo_Void_set_Item);
        return;
      }
      System_Collections_Generic_Dictionary<object__object>__Add
                (pSVar1,(Il2CppObject *)methodName,(Il2CppObject *)methodAst,MethodInfo_Void_Add);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


