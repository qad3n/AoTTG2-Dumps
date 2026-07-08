// Type: CustomLogic.CustomLogicStartAst
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicStartAst.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomLogic/Ast/CustomLogicStartAst.cs  [CHANGED since prior version]
// --------------------------------

// CustomLogic.CustomLogicStartAst$$.ctor
// il2cpp: void CustomLogic_CustomLogicStartAst___ctor (CustomLogic_CustomLogicStartAst_o* __this, const MethodInfo* method);
// 0x3db2a50

void CustomLogic_CustomLogicStartAst___ctor
               (CustomLogic_CustomLogicStartAst_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_Dictionary_string__CustomLogicSourceType__o *__this_01;
  
  if (DAT_057027ce == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_CustomLogic_CustomLog);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_CustomLogic_CustomLog);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__CustomLogicSourceType);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__CustomLogicClassDefinitionAst);
    DAT_057027ce = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_string__CustomLogicClassDefinitionAst);
  System_Collections_Generic_Dictionary<object__object>___ctor(__this_00,MethodInfo_Dictionary_2_System_String_CustomLogic_CustomLog);
  (__this->fields).Classes =
       (System_Collections_Generic_Dictionary_string__CustomLogicClassDefinitionAst__o *)__this_00;
  il2cpp_runtime_glue(&(__this->fields).Classes,__this_00);
  __this_01 = (System_Collections_Generic_Dictionary_string__CustomLogicSourceType__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_string__CustomLogicSourceType);
  System_Collections_Generic_Dictionary<object__Int32Enum>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,MethodInfo_Dictionary_2_System_String_CustomLogic_CustomLog);
  (__this->fields).ClassNamespaces = __this_01;
  il2cpp_runtime_glue(&(__this->fields).ClassNamespaces);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Type = 0;
  (__this->fields).Line = 0;
  return;
}


// CustomLogic.CustomLogicStartAst$$AddEmptyMain
// il2cpp: void CustomLogic_CustomLogicStartAst__AddEmptyMain (CustomLogic_CustomLogicStartAst_o* __this, const MethodInfo* method);
// 0x3db2b20

void CustomLogic_CustomLogicStartAst__AddEmptyMain
               (CustomLogic_CustomLogicStartAst_o *__this,MethodInfo *method)

{
  Il2CppObject *value;
  CustomLogic_CustomLogicToken_o *__this_00;
  CustomLogic_CustomLogicClassDefinitionAst_o *__this_01;
  MethodInfo *method_00;
  
  if (DAT_057027cf == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicClassDefinitionAst);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicToken);
    il2cpp_init_method_metadata(&"Main");
    DAT_057027cf = '\x01';
  }
  value = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068);
  __this_00 = (CustomLogic_CustomLogicToken_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicToken);
  method_00 = (MethodInfo *)0x0;
  CustomLogic_CustomLogicToken___ctor(__this_00,0,value,0,(MethodInfo *)0x0);
  __this_01 = (CustomLogic_CustomLogicClassDefinitionAst_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicClassDefinitionAst);
  CustomLogic_CustomLogicClassDefinitionAst___ctor(__this_01,__this_00,0,method_00);
  CustomLogic_CustomLogicStartAst__AddClass(__this,"Main",__this_01,method_00);
  return;
}


// CustomLogic.CustomLogicStartAst$$AddClass
// il2cpp: void CustomLogic_CustomLogicStartAst__AddClass (CustomLogic_CustomLogicStartAst_o* __this, System_String_o* className, CustomLogic_CustomLogicClassDefinitionAst_o* classAst, const MethodInfo* method);
// 0x3db2bf0

void CustomLogic_CustomLogicStartAst__AddClass
               (CustomLogic_CustomLogicStartAst_o *__this,System_String_o *className,
               CustomLogic_CustomLogicClassDefinitionAst_o *classAst,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Collections_Generic_Dictionary_string__CustomLogicSourceType__o *__this_00;
  bool_conflict bVar2;
  int32_t value;
  System_Nullable_CustomLogicSourceType__Fields local_20;
  
  if (DAT_057027d0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_HasValue);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicSourceType_get_Value);
    il2cpp_init_method_metadata(&"Main");
    DAT_057027d0 = '\x01';
  }
  local_20.hasValue = 0;
  local_20.value = 0;
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Classes;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      (pSVar1,(Il2CppObject *)className,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar2 == '\0') {
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Classes;
      if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
      goto LAB_03db2d46;
      System_Collections_Generic_Dictionary<object__object>__Add
                (pSVar1,(Il2CppObject *)className,(Il2CppObject *)classAst,MethodInfo_Void_Add);
    }
    else {
      bVar2 = System_String__op_Inequality(className,"Main",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Classes
        ;
        if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
        goto LAB_03db2d46;
        System_Collections_Generic_Dictionary<object__object>__set_Item
                  (pSVar1,(Il2CppObject *)className,(Il2CppObject *)classAst,MethodInfo_Void_set_Item);
      }
    }
    if (classAst != (CustomLogic_CustomLogicClassDefinitionAst_o *)0x0) {
      local_20 = (classAst->fields)._Namespace_k__BackingField.fields;
      if ((char)local_20.hasValue != '\0') {
        __this_00 = (__this->fields).ClassNamespaces;
        value = System_Nullable<Int32Enum>__get_Value
                          ((System_Nullable_Int32Enum__o)&local_20,MethodInfo_CustomLogicSourceType_get_Value);
        if (__this_00 ==
            (System_Collections_Generic_Dictionary_string__CustomLogicSourceType__o *)0x0)
        goto LAB_03db2d46;
        System_Collections_Generic_Dictionary<object__Int32Enum>__set_Item
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                   (Il2CppObject *)className,value,MethodInfo_Void_set_Item);
      }
      return;
    }
  }
LAB_03db2d46:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


