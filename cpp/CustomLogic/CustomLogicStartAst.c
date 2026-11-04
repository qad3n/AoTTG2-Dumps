// Type: CustomLogic.CustomLogicStartAst
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicStartAst.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Ast/CustomLogicStartAst.cs
// --------------------------------

// CustomLogic.CustomLogicStartAst$$.ctor
// il2cpp: void CustomLogic_CustomLogicStartAst___ctor (CustomLogic_CustomLogicStartAst_o* __this, const MethodInfo* method);
// 0x181ed3eb0

void CustomLogic_CustomLogicStartAst___ctor(CustomLogic_CustomLogicStartAst_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__CustomLogicClassDefinitionAst__o *__this_00;
  System_Collections_Generic_Dictionary_string__CustomLogicSourceType__o *__this_01;
  
  if (Il2CppMethodInitialized_18434513c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicSourceType_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_CustomLogicSourceType);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst);
    Il2CppMethodInitialized_18434513c = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_1454140 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_ctor);
  (__this->fields).Classes = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Classes,__this_00);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_string_CustomLogicSourceType);
  System_Collections_Generic_Dictionary_object__ProbeReferenceVolume_CellData_PerScenarioData____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
             (MethodInfo_1454140 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicSourceType_ctor);
  (__this->fields).ClassNamespaces = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ClassNamespaces,__this_01);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Type = 0;
  (__this->fields).Line = 0;
  return;
}


// CustomLogic.CustomLogicStartAst$$AddEmptyMain
// il2cpp: void CustomLogic_CustomLogicStartAst__AddEmptyMain (CustomLogic_CustomLogicStartAst_o* __this, const MethodInfo* method);
// 0x181ed3b40

void CustomLogic_CustomLogicStartAst__AddEmptyMain
               (CustomLogic_CustomLogicStartAst_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Collections_Generic_Dictionary_string__CustomLogicClassDefinitionAst__o *__this_00;
  System_Collections_Generic_Dictionary_string__CustomLogicSourceType__o *__this_01;
  System_String_o *a;
  bool bVar2;
  uint32_t value;
  Il2CppObject *value_00;
  CustomLogic_CustomLogicToken_o *__this_02;
  CustomLogic_CustomLogicClassDefinitionAst_o *value_01;
  System_Collections_Generic_List_CustomLogicAssignmentExpressionAst__o *__this_03;
  System_Collections_Generic_Dictionary_string__CustomLogicMethodDefinitionAst__o *__this_04;
  CustomLogic_CustomLogicMethodDefinitionAst_o *__this_05;
  System_Collections_Generic_List_string__o *__this_06;
  undefined4 local_res18 [2];
  System_Nullable_CustomLogicSourceType__Fields local_res20;
  
  if (Il2CppMethodInitialized_18434513d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicClassDefinitionAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicToken);
    il2cpp_codegen_initialize_runtime_metadata(&"Main");
    Il2CppMethodInitialized_18434513d = '\x01';
  }
  local_res18[0] = 1;
  value_00 = il2cpp_value_box(g_data_184354e08,local_res18);
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicToken);
  CustomLogic_CustomLogicToken___ctor(__this_02,0,value_00,0,(MethodInfo *)0x0);
  value_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicClassDefinitionAst);
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
  __this_03 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_List_CustomLogicAssignmentExpressionAst);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_03,
             (MethodInfo_92A240 *)
             MethodInfo_System_Collections_Generic_List_CustomLogicAssignmentExpressionAst_ctor);
  (value_01->fields).Assignments = __this_03;
  Il2CppCodeGenWriteBarrier(&(value_01->fields).Assignments,__this_03);
  __this_04 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_string_CustomLogicMethodDefinitionAst)
  ;
  System_Collections_Generic_Dictionary_object__ProbeReferenceVolume_CellData_PerScenarioData____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_04,
             (MethodInfo_1454140 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicMethodDefinitionAst_ctor);
  (value_01->fields).Methods = __this_04;
  Il2CppCodeGenWriteBarrier(&(value_01->fields).Methods,__this_04);
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)value_01,(MethodInfo *)0x0);
  (value_01->fields).Type = 1;
  (value_01->fields).Line = 0;
  (value_01->fields).Token = __this_02;
  Il2CppCodeGenWriteBarrier(&(value_01->fields).Token,__this_02);
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(value_01->fields).Methods;
  __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMethodDefinitionAst);
  if (Il2CppMethodInitialized_18434513a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    Il2CppMethodInitialized_18434513a = '\x01';
  }
  __this_06 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_06,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  (__this_05->fields).ParameterNames = __this_06;
  Il2CppCodeGenWriteBarrier(&(__this_05->fields).ParameterNames,__this_06);
  CustomLogic_CustomLogicBlockAst___ctor((CustomLogic_CustomLogicBlockAst_o *)__this_05,2,0,(MethodInfo *)0x0)
  ;
  (__this_05->fields).Coroutine = false;
  if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_object__object___Add
            (pSVar1,(Il2CppObject *)"Init",(Il2CppObject *)__this_05,
             (MethodInfo_146B4B0 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicMethodDefinitionAst_Add);
  a = "Main";
  if (Il2CppMethodInitialized_18434513e == '\0') {
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
    Il2CppMethodInitialized_18434513e = '\x01';
  }
  __this_00 = (__this->fields).Classes;
  local_res20.hasValue = false;
  local_res20._1_3_ = 0;
  local_res20.value = 0;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__CustomLogicClassDefinitionAst__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,(Il2CppObject *)a,
                       (MethodInfo_1455450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_ContainsKey
                      );
    if (bVar2) {
      bVar2 = System_String__op_Inequality(a,"Main",(MethodInfo *)0x0);
      if (bVar2) {
        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Classes;
        if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_181ed3e9b;
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar1,(Il2CppObject *)a,(Il2CppObject *)value_01,
                   (MethodInfo_147A7F0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_set_Item
                  );
      }
    }
    else {
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Classes;
      if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_181ed3e9b;
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar1,(Il2CppObject *)a,(Il2CppObject *)value_01,
                 (MethodInfo_146B4B0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_Add);
    }
    local_res20 = (value_01->fields)._Namespace_k__BackingField.fields;
    if (local_res20.hasValue != false) {
      __this_01 = (__this->fields).ClassNamespaces;
      value = System_Nullable_uint___get_Value
                        ((System_Nullable_uint__o *)&local_res20,
                         (MethodInfo_AE29B0 *)MethodInfo_System_Nullable_CustomLogicSourceType_get_Value);
      if (__this_01 == (System_Collections_Generic_Dictionary_string__CustomLogicSourceType__o *)0x0)
      goto label_181ed3e9b;
      System_Collections_Generic_Dictionary_object__Int32Enum___set_Item
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,(Il2CppObject *)a,value,
                 (MethodInfo_147A8B0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicSourceType_set_Item);
    }
    return;
  }
label_181ed3e9b:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicStartAst$$AddClass
// il2cpp: void CustomLogic_CustomLogicStartAst__AddClass (CustomLogic_CustomLogicStartAst_o* __this, System_String_o* className, CustomLogic_CustomLogicClassDefinitionAst_o* classAst, const MethodInfo* method);
// 0x181ed39f0

void CustomLogic_CustomLogicStartAst__AddClass
               (CustomLogic_CustomLogicStartAst_o *__this,System_String_o *className,
               CustomLogic_CustomLogicClassDefinitionAst_o *classAst,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__CustomLogicClassDefinitionAst__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Collections_Generic_Dictionary_string__CustomLogicSourceType__o *__this_01;
  bool bVar2;
  uint32_t value;
  System_Nullable_CustomLogicSourceType__Fields local_res8;
  
  if (Il2CppMethodInitialized_18434513e == '\0') {
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
    Il2CppMethodInitialized_18434513e = '\x01';
  }
  __this_00 = (__this->fields).Classes;
  local_res8.hasValue = false;
  local_res8._1_3_ = 0;
  local_res8.value = 0;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__CustomLogicClassDefinitionAst__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                       (Il2CppObject *)className,
                       (MethodInfo_1455450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_ContainsKey
                      );
    if (bVar2) {
      bVar2 = System_String__op_Inequality(className,"Main",(MethodInfo *)0x0);
      if (bVar2) {
        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Classes;
        if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_181ed3b38;
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar1,(Il2CppObject *)className,(Il2CppObject *)classAst,
                   (MethodInfo_147A7F0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_set_Item
                  );
      }
    }
    else {
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Classes;
      if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_181ed3b38;
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar1,(Il2CppObject *)className,(Il2CppObject *)classAst,
                 (MethodInfo_146B4B0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicClassDefinitionAst_Add);
    }
    if (classAst != (CustomLogic_CustomLogicClassDefinitionAst_o *)0x0) {
      local_res8 = (classAst->fields)._Namespace_k__BackingField.fields;
      if (local_res8.hasValue != false) {
        __this_01 = (__this->fields).ClassNamespaces;
        value = System_Nullable_uint___get_Value
                          ((System_Nullable_uint__o *)&local_res8,
                           (MethodInfo_AE29B0 *)MethodInfo_System_Nullable_CustomLogicSourceType_get_Value);
        if (__this_01 == (System_Collections_Generic_Dictionary_string__CustomLogicSourceType__o *)0x0)
        goto label_181ed3b38;
        System_Collections_Generic_Dictionary_object__Int32Enum___set_Item
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                   (Il2CppObject *)className,value,
                   (MethodInfo_147A8B0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicSourceType_set_Item);
      }
      return;
    }
  }
label_181ed3b38:
  ThrowNullReferenceException();
}


