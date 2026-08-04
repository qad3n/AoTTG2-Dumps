// Type: CustomLogic.CustomLogicStartAst
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicStartAst.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Ast/CustomLogicStartAst.cs
// --------------------------------

// CustomLogic.CustomLogicStartAst$$.ctor
// il2cpp: void CustomLogic_CustomLogicStartAst___ctor (CustomLogic_CustomLogicStartAst_o* __this, const MethodInfo* method);
// 0x40b8d90

void CustomLogic_CustomLogicStartAst___ctor(CustomLogic_CustomLogicStartAst_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_Dictionary_string__CustomLogicSourceType__o *__this_01;
  
  if (g_data_057ac503 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_CustomLogic_CustomLogicSource);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_CustomLogic_CustomLogicClassD);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_CustomLogicSourceType);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_CustomLogicClassDefinitionAst);
    g_data_057ac503 = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_CustomLogicClassDefinitionAst);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_00,MethodInfo_Dictionary_2_System_String_CustomLogic_CustomLogicClassD);
  (__this->fields).Classes =
       (System_Collections_Generic_Dictionary_string__CustomLogicClassDefinitionAst__o *)__this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Classes,__this_00);
  __this_01 = (System_Collections_Generic_Dictionary_string__CustomLogicSourceType__o *)
              il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_CustomLogicSourceType);
  System_Collections_Generic_Dictionary_object__Int32Enum____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,MethodInfo_Dictionary_2_System_String_CustomLogic_CustomLogicSource);
  (__this->fields).ClassNamespaces = __this_01;
  il2cpp_runtime_helper_022b4080(&(__this->fields).ClassNamespaces);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Type = 0;
  (__this->fields).Line = 0;
  return;
}


// CustomLogic.CustomLogicStartAst$$AddEmptyMain
// il2cpp: void CustomLogic_CustomLogicStartAst__AddEmptyMain (CustomLogic_CustomLogicStartAst_o* __this, const MethodInfo* method);
// 0x40b8e60

void CustomLogic_CustomLogicStartAst__AddEmptyMain
               (CustomLogic_CustomLogicStartAst_o *__this,MethodInfo *method)

{
  Il2CppObject *value;
  CustomLogic_CustomLogicToken_o *__this_00;
  CustomLogic_CustomLogicClassDefinitionAst_o *__this_01;
  MethodInfo *method_00;
  
  if (g_data_057ac504 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicClassDefinitionAst);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicToken);
    il2cpp_runtime_helper_023445d0(&"Main");
    g_data_057ac504 = '\x01';
  }
  value = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8);
  __this_00 = (CustomLogic_CustomLogicToken_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicToken);
  method_00 = (MethodInfo *)0x0;
  CustomLogic_CustomLogicToken___ctor(__this_00,0,value,0,(MethodInfo *)0x0);
  __this_01 = (CustomLogic_CustomLogicClassDefinitionAst_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicClassDefinitionAst);
  CustomLogic_CustomLogicClassDefinitionAst___ctor(__this_01,__this_00,0,method_00);
  CustomLogic_CustomLogicStartAst__AddClass(__this,"Main",__this_01,method_00);
  return;
}


// CustomLogic.CustomLogicStartAst$$AddClass
// il2cpp: void CustomLogic_CustomLogicStartAst__AddClass (CustomLogic_CustomLogicStartAst_o* __this, System_String_o* className, CustomLogic_CustomLogicClassDefinitionAst_o* classAst, const MethodInfo* method);
// 0x40b8f30

void CustomLogic_CustomLogicStartAst__AddClass
               (CustomLogic_CustomLogicStartAst_o *__this,System_String_o *className,
               CustomLogic_CustomLogicClassDefinitionAst_o *classAst,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_Dictionary_string__CustomLogicSourceType__o *__this_01;
  bool_conflict bVar1;
  int32_t value;
  undefined4 extraout_EDX;
  MethodInfo_37E7AC0 *pMVar2;
  MethodInfo_37E7AC0 *method_00;
  System_Nullable_Int32Enum__Fields __this_02;
  System_Nullable_CustomLogicSourceType__Fields local_20;
  
  pMVar2 = (MethodInfo_37E7AC0 *)className;
  if (g_data_057ac505 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSourceType_get_Value);
    il2cpp_runtime_helper_023445d0(&"Main");
    g_data_057ac505 = '\x01';
  }
  local_20.hasValue = 0;
  local_20.value = 0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Classes;
  __this_02.hasValue = 0;
  __this_02.value = 0;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pMVar2 = (MethodInfo_37E7AC0 *)className;
    bVar1 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (__this_00,(Il2CppObject *)className,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar1 == '\0') {
      __this_02 = (System_Nullable_Int32Enum__Fields)(__this->fields).Classes;
      if (__this_02 == (System_Nullable_Int32Enum__Fields)0x0) goto label_040b9086;
      pMVar2 = (MethodInfo_37E7AC0 *)className;
      System_Collections_Generic_Dictionary_object__object___Add
                ((System_Collections_Generic_Dictionary_object__object__o *)__this_02,
                 (Il2CppObject *)className,(Il2CppObject *)classAst,MethodInfo_Void_Add);
      method_00 = MethodInfo_CustomLogicSourceType_get_Value;
    }
    else {
      pMVar2 = "Main";
      __this_02 = (System_Nullable_Int32Enum__Fields)className;
      bVar1 = System_String__op_Inequality(className,(System_String_o *)"Main",(MethodInfo *)0x0);
      method_00 = MethodInfo_CustomLogicSourceType_get_Value;
      if ((char)bVar1 != '\0') {
        __this_02 = (System_Nullable_Int32Enum__Fields)(__this->fields).Classes;
        if (__this_02 == (System_Nullable_Int32Enum__Fields)0x0) goto label_040b9086;
        pMVar2 = (MethodInfo_37E7AC0 *)className;
        System_Collections_Generic_Dictionary_object__object___set_Item
                  ((System_Collections_Generic_Dictionary_object__object__o *)__this_02,
                   (Il2CppObject *)className,(Il2CppObject *)classAst,MethodInfo_Void_set_Item);
        method_00 = MethodInfo_CustomLogicSourceType_get_Value;
      }
    }
    MethodInfo_CustomLogicSourceType_get_Value = method_00;
    if (classAst != (CustomLogic_CustomLogicClassDefinitionAst_o *)0x0) {
      local_20 = (classAst->fields)._Namespace_k__BackingField.fields;
      if ((char)local_20.hasValue != '\0') {
        __this_01 = (__this->fields).ClassNamespaces;
        __this_02 = (System_Nullable_Int32Enum__Fields)&local_20;
        value = System_Nullable_Int32Enum___get_Value((System_Nullable_Int32Enum__o)__this_02,method_00);
        pMVar2 = method_00;
        if (__this_01 == (System_Collections_Generic_Dictionary_string__CustomLogicSourceType__o *)0x0)
        goto label_040b9086;
        System_Collections_Generic_Dictionary_object__Int32Enum___set_Item
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                   (Il2CppObject *)className,value,MethodInfo_Void_set_Item);
      }
      return;
    }
  }
label_040b9086:
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
  *(undefined4 *)((long)__this_02 + 0x10) = 8;
  *(undefined4 *)((long)__this_02 + 0x14) = extraout_EDX;
  *(MethodInfo_37E7AC0 **)((long)__this_02 + 0x20) = pMVar2;
  il2cpp_runtime_helper_022b4080((long)__this_02 + 0x20,pMVar2);
  return;
}


