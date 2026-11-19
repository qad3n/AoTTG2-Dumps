// Type: CustomLogic.CustomLogicStartAst
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicStartAst.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Ast/CustomLogicStartAst.cs
// --------------------------------

// CustomLogic.CustomLogicStartAst$$.ctor
// il2cpp: void CustomLogic_CustomLogicStartAst___ctor (CustomLogic_CustomLogicStartAst_o* __this, const MethodInfo* method);
// 0x59a92f0

void CustomLogic_CustomLogicStartAst___ctor(CustomLogic_CustomLogicStartAst_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__CustomLogicClassDefinitionAst__o *__this_00;
  System_Collections_Generic_Dictionary_string__CustomLogicSourceType__o *__this_01;
  
  if (Il2CppMethodInitialized_07545ad5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicSourceType_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_CustomLogicSourceType);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst);
    Il2CppMethodInitialized_07545ad5 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
             (MethodInfo_4AAC8D0 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_ctor);
  (__this->fields).Classes = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Classes);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_string_CustomLogicSourceType);
  System_Collections_Generic_Dictionary_object__Int32Enum____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
             (MethodInfo_4AA0A80 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicSourceType_ctor);
  (__this->fields).ClassNamespaces = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ClassNamespaces);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Type = 0;
  (__this->fields).Line = 0;
  return;
}


// CustomLogic.CustomLogicStartAst$$AddEmptyMain
// il2cpp: void CustomLogic_CustomLogicStartAst__AddEmptyMain (CustomLogic_CustomLogicStartAst_o* __this, const MethodInfo* method);
// 0x59a93c0

void CustomLogic_CustomLogicStartAst__AddEmptyMain
               (CustomLogic_CustomLogicStartAst_o *__this,MethodInfo *method)

{
  Il2CppObject *value;
  CustomLogic_CustomLogicToken_o *__this_00;
  CustomLogic_CustomLogicClassDefinitionAst_o *__this_01;
  MethodInfo *method_00;
  undefined1 local_24 [4];
  
  if (Il2CppMethodInitialized_07545ad6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicClassDefinitionAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicToken);
    il2cpp_codegen_initialize_runtime_metadata(&"Main");
    Il2CppMethodInitialized_07545ad6 = '\x01';
  }
  value = il2cpp_vm_Object_Box(g_data_07556710,local_24);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicToken);
  method_00 = (MethodInfo *)0x0;
  CustomLogic_CustomLogicToken___ctor(__this_00,0,value,0,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicClassDefinitionAst);
  CustomLogic_CustomLogicClassDefinitionAst___ctor(__this_01,__this_00,0,method_00);
  CustomLogic_CustomLogicStartAst__AddClass(__this,"Main",__this_01,method_00);
  return;
}


// CustomLogic.CustomLogicStartAst$$AddClass
// il2cpp: void CustomLogic_CustomLogicStartAst__AddClass (CustomLogic_CustomLogicStartAst_o* __this, System_String_o* className, CustomLogic_CustomLogicClassDefinitionAst_o* classAst, const MethodInfo* method);
// 0x59a9490

void CustomLogic_CustomLogicStartAst__AddClass
               (CustomLogic_CustomLogicStartAst_o *__this,System_String_o *className,
               CustomLogic_CustomLogicClassDefinitionAst_o *classAst,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Collections_Generic_Dictionary_string__CustomLogicSourceType__o *__this_00;
  bool bVar2;
  int32_t value;
  System_Nullable_CustomLogicSourceType__Fields local_20;
  
  if (Il2CppMethodInitialized_07545ad7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_ContainsKey
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_set_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicSourceType_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_CustomLogicSourceType_get_HasValue)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_CustomLogicSourceType_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Main");
    Il2CppMethodInitialized_07545ad7 = '\x01';
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Classes;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar1,(Il2CppObject *)className,
                       (MethodInfo_4AAD6F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_ContainsKey
                      );
    if (bVar2) {
      bVar2 = System_String__op_Inequality(className,"Main",(MethodInfo *)0x0);
      if (bVar2) {
        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Classes;
        if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_059a95d3;
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar1,(Il2CppObject *)className,(Il2CppObject *)classAst,
                   (MethodInfo_4AAD4C0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_set_Item
                  );
      }
    }
    else {
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Classes;
      if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_059a95d3;
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar1,(Il2CppObject *)className,(Il2CppObject *)classAst,
                 (MethodInfo_4AAD4E0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_Add);
    }
    if (classAst != (CustomLogic_CustomLogicClassDefinitionAst_o *)0x0) {
      local_20 = (classAst->fields)._Namespace_k__BackingField.fields;
      if (local_20.hasValue != false) {
        __this_00 = (__this->fields).ClassNamespaces;
        value = System_Nullable_Int32Enum___get_Value
                          ((System_Nullable_Int32Enum__o *)&local_20,
                           (MethodInfo_3CD4F80 *)MethodInfo_System_Nullable_CustomLogicSourceType_get_Value);
        if (__this_00 == (System_Collections_Generic_Dictionary_string__CustomLogicSourceType__o *)0x0)
        goto label_059a95d3;
        System_Collections_Generic_Dictionary_object__Int32Enum___set_Item
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                   (Il2CppObject *)className,value,
                   (MethodInfo_4AA1660 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicSourceType_set_Item);
      }
      return;
    }
  }
label_059a95d3:
  ThrowNullReferenceException();
}


