// Type: CustomLogic.CustomLogicClassDefinitionAst
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicClassDefinitionAst.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Ast/CustomLogicClassDefinitionAst.cs
// --------------------------------

// CustomLogic.CustomLogicClassDefinitionAst$$get_Namespace
// il2cpp: System_Nullable_CustomLogicSourceType__o CustomLogic_CustomLogicClassDefinitionAst__get_Namespace (CustomLogic_CustomLogicClassDefinitionAst_o* __this, const MethodInfo* method);
// 0x40b8520

System_Nullable_CustomLogicSourceType__o
CustomLogic_CustomLogicClassDefinitionAst__get_Namespace
          (CustomLogic_CustomLogicClassDefinitionAst_o *__this,MethodInfo *method)

{
  return (System_Nullable_CustomLogicSourceType__o)(__this->fields)._Namespace_k__BackingField.fields;
}


// CustomLogic.CustomLogicClassDefinitionAst$$set_Namespace
// il2cpp: void CustomLogic_CustomLogicClassDefinitionAst__set_Namespace (CustomLogic_CustomLogicClassDefinitionAst_o* __this, System_Nullable_CustomLogicSourceType__o value, const MethodInfo* method);
// 0x40b8530

void CustomLogic_CustomLogicClassDefinitionAst__set_Namespace
               (CustomLogic_CustomLogicClassDefinitionAst_o *__this,
               System_Nullable_CustomLogicSourceType__o value,MethodInfo *method)

{
  (__this->fields)._Namespace_k__BackingField.fields = value.fields;
  return;
}


// CustomLogic.CustomLogicClassDefinitionAst$$.ctor
// il2cpp: void CustomLogic_CustomLogicClassDefinitionAst___ctor (CustomLogic_CustomLogicClassDefinitionAst_o* __this, CustomLogic_CustomLogicToken_o* token, int32_t line, const MethodInfo* method);
// 0x40b8540

void CustomLogic_CustomLogicClassDefinitionAst___ctor
               (CustomLogic_CustomLogicClassDefinitionAst_o *__this,CustomLogic_CustomLogicToken_o *token,
               int32_t line,MethodInfo *method)

{
  System_Collections_Generic_List_CustomLogicAssignmentExpressionAst__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  CustomLogic_CustomLogicMethodDefinitionAst_o *__this_01;
  System_Collections_Generic_List_string__o *__this_02;
  System_Collections_Generic_List_CustomLogicBaseAst__o *__this_03;
  undefined1 extraout_DL;
  int32_t iVar2;
  CustomLogic_CustomLogicMethodDefinitionAst_o *__this_04;
  
  if (g_data_057ac4fc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicMethodDefinitionAst);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_CustomLogic_CustomLogicMethod);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_CustomLogicMethodDefinitionAst);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_CustomLogic_CustomLogicAssignmentExpressionAst);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_CustomLogicAssignmentExpressionAst);
    il2cpp_runtime_helper_023445d0(&"Init");
    g_data_057ac4fc = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_CustomLogicAssignmentExpressionAst__o *)
              il2cpp_runtime_helper_023052d0(TypeInfo_List_CustomLogicAssignmentExpressionAst);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_CustomLogic_CustomLogicAssignmentExpressionAst);
  (__this->fields).Assignments = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Assignments,__this_00);
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_CustomLogicMethodDefinitionAst);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar1,MethodInfo_Dictionary_2_System_String_CustomLogic_CustomLogicMethod);
  (__this->fields).Methods =
       (System_Collections_Generic_Dictionary_string__CustomLogicMethodDefinitionAst__o *)pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Methods);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Type = 1;
  (__this->fields).Line = line;
  (__this->fields).Token = token;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Token);
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Methods;
  __this_01 = (CustomLogic_CustomLogicMethodDefinitionAst_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicMethodDefinitionAst);
  iVar2 = 0;
  __this_04 = __this_01;
  CustomLogic_CustomLogicMethodDefinitionAst___ctor(__this_01,0,0,method);
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Add
              (pSVar1,"Init",(Il2CppObject *)__this_01,MethodInfo_Void_Add);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac501 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057ac501 = '\x01';
  }
  __this_02 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_02,MethodInfo_List_1_System_String);
  (__this_04->fields).ParameterNames = __this_02;
  il2cpp_runtime_helper_022b4080(&(__this_04->fields).ParameterNames,__this_02);
  if (g_data_057ac4fb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_CustomLogic_CustomLogicBaseAst);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_CustomLogicBaseAst);
    g_data_057ac4fb = '\x01';
  }
  __this_03 = (System_Collections_Generic_List_CustomLogicBaseAst__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_CustomLogicBaseAst);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_03,MethodInfo_List_1_CustomLogic_CustomLogicBaseAst);
  (__this_04->fields).Statements = __this_03;
  il2cpp_runtime_helper_022b4080(&(__this_04->fields).Statements);
  System_Object___ctor((Il2CppObject *)__this_04,(MethodInfo *)0x0);
  (__this_04->fields).Type = 2;
  (__this_04->fields).Line = iVar2;
  *(undefined1 *)&(__this_04->fields).Coroutine = extraout_DL;
  return;
}


// CustomLogic.CustomLogicClassDefinitionAst$$GetInit
// il2cpp: CustomLogic_CustomLogicMethodDefinitionAst_o* CustomLogic_CustomLogicClassDefinitionAst__GetInit (CustomLogic_CustomLogicClassDefinitionAst_o* __this, const MethodInfo* method);
// 0x40b8790

CustomLogic_CustomLogicMethodDefinitionAst_o *
CustomLogic_CustomLogicClassDefinitionAst__GetInit
          (CustomLogic_CustomLogicClassDefinitionAst_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool_conflict bVar1;
  CustomLogic_CustomLogicMethodDefinitionAst_o *pCVar2;
  CustomLogic_CustomLogicMethodDefinitionAst_o *extraout_RAX;
  CustomLogic_CustomLogicMethodDefinitionAst_o *extraout_RAX_00;
  Il2CppClass *__this_01;
  undefined4 extraout_EDX;
  Il2CppObject *value;
  MethodInfo *pMVar3;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  Il2CppObject *__this_02;
  
  if (g_data_057ac4fd == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicMethodDefinitionAst_get_Item);
    il2cpp_runtime_helper_023445d0(&"Init");
    g_data_057ac4fd = '\x01';
  }
  pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Methods;
  if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pCVar2 = (CustomLogic_CustomLogicMethodDefinitionAst_o *)
             System_Collections_Generic_Dictionary_object__object___get_Item(pSVar4,"Init",MethodInfo_CustomLogicMethodDefinitionAst_get_Item)
    ;
    return pCVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar3 = method;
  if (g_data_057ac4fe == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    g_data_057ac4fe = '\x01';
  }
  __this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)&(pSVar4->fields)._count;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pMVar3 = method;
    bVar1 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (__this_00,(Il2CppObject *)method,MethodInfo_Boolean_ContainsKey);
    pSVar4 = *(System_Collections_Generic_Dictionary_object__object__o **)&(pSVar4->fields)._count;
    if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      if ((char)bVar1 != '\0') {
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar4,(Il2CppObject *)method,value,MethodInfo_Void_set_Item);
        return extraout_RAX;
      }
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar4,(Il2CppObject *)method,value,MethodInfo_Void_Add);
      return extraout_RAX_00;
    }
  }
  __this_02 = (Il2CppObject *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac4ff == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_CustomLogic_CustomLogicBaseAst);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_CustomLogicBaseAst);
    g_data_057ac4ff = '\x01';
  }
  __this_01 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_List_CustomLogicBaseAst);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_CustomLogic_CustomLogicBaseAst);
  __this_02[2].klass = __this_01;
  il2cpp_runtime_helper_022b4080(__this_02 + 2);
  System_Object___ctor(__this_02,(MethodInfo *)0x0);
  *(undefined4 *)&__this_02[1].klass = 5;
  *(undefined4 *)((long)&__this_02[1].klass + 4) = extraout_EDX;
  __this_02[1].monitor = pMVar3;
  pCVar2 = (CustomLogic_CustomLogicMethodDefinitionAst_o *)il2cpp_runtime_helper_022b4080(&__this_02[1].monitor,pMVar3);
  return pCVar2;
}


// CustomLogic.CustomLogicClassDefinitionAst$$AddMethod
// il2cpp: void CustomLogic_CustomLogicClassDefinitionAst__AddMethod (CustomLogic_CustomLogicClassDefinitionAst_o* __this, System_String_o* methodName, CustomLogic_CustomLogicMethodDefinitionAst_o* methodAst, const MethodInfo* method);
// 0x40b87f0

void CustomLogic_CustomLogicClassDefinitionAst__AddMethod
               (CustomLogic_CustomLogicClassDefinitionAst_o *__this,System_String_o *methodName,
               CustomLogic_CustomLogicMethodDefinitionAst_o *methodAst,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool_conflict bVar2;
  Il2CppClass *__this_00;
  undefined4 extraout_EDX;
  System_String_o *pSVar3;
  Il2CppObject *__this_01;
  
  pSVar3 = methodName;
  if (g_data_057ac4fe == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    g_data_057ac4fe = '\x01';
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Methods;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pSVar3 = methodName;
    bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar1,(Il2CppObject *)methodName,MethodInfo_Boolean_ContainsKey);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Methods;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      if ((char)bVar2 != '\0') {
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar1,(Il2CppObject *)methodName,(Il2CppObject *)methodAst,MethodInfo_Void_set_Item);
        return;
      }
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar1,(Il2CppObject *)methodName,(Il2CppObject *)methodAst,MethodInfo_Void_Add);
      return;
    }
  }
  __this_01 = (Il2CppObject *)0x0;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac4ff == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_CustomLogic_CustomLogicBaseAst);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_CustomLogicBaseAst);
    g_data_057ac4ff = '\x01';
  }
  __this_00 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_List_CustomLogicBaseAst);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_CustomLogic_CustomLogicBaseAst);
  __this_01[2].klass = __this_00;
  il2cpp_runtime_helper_022b4080(__this_01 + 2);
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = 5;
  *(undefined4 *)((long)&__this_01[1].klass + 4) = extraout_EDX;
  __this_01[1].monitor = pSVar3;
  il2cpp_runtime_helper_022b4080(&__this_01[1].monitor,pSVar3);
  return;
}


