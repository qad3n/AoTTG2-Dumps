// Type: CustomLogic.CLBindingCache
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CLBindingCache.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CLBindingCache$$get_Instance
// il2cpp: CustomLogic_CLBindingCache_o* CustomLogic_CLBindingCache__get_Instance (const MethodInfo* method);
// 0x40b94b0

CustomLogic_CLBindingCache_o * CustomLogic_CLBindingCache__get_Instance(MethodInfo *method)

{
  CustomLogic_CLBindingCache_o *__this;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if (g_data_057ac507 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CLBindingCache);
    g_data_057ac507 = '\x01';
  }
  __this = (CustomLogic_CLBindingCache_o *)**(long **)(TypeInfo_CLBindingCache + 0xb8);
  if (__this == (CustomLogic_CLBindingCache_o *)0x0) {
    __this = (CustomLogic_CLBindingCache_o *)il2cpp_runtime_helper_023052d0();
    if (g_data_057ac509 == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Dictionary_2_System_String_Cu);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Dictionary_string_ICLMemberBinding);
      g_data_057ac509 = '\x01';
    }
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Dictionary_string_ICLMemberBinding);
    System_Collections_Generic_Dictionary_object__object____ctor(__this_00,MethodInfo_Dictionary_2_System_String_Dictionary_2_System_String_Cu);
    (__this->fields)._bindings =
         (System_Collections_Generic_Dictionary_string__Dictionary_string__ICLMemberBinding___o *)__this_00;
    il2cpp_runtime_helper_022b4080(&__this->fields);
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    **(undefined8 **)(TypeInfo_CLBindingCache + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_CLBindingCache + 0xb8),__this);
  }
  return __this;
}


// CustomLogic.CLBindingCache$$GetOrCreateBinding
// il2cpp: bool CustomLogic_CLBindingCache__GetOrCreateBinding (System_String_o* typeName, System_String_o* varName, CustomLogic_ICLMemberBinding_o** binding, const MethodInfo* method);
// 0x40b9610

bool_conflict
CustomLogic_CLBindingCache__GetOrCreateBinding
          (System_String_o *typeName,System_String_o *varName,CustomLogic_ICLMemberBinding_o **binding,
          MethodInfo *method)

{
  bool_conflict bVar1;
  bool_conflict extraout_EAX;
  CustomLogic_CLBindingCache_o *pCVar2;
  MethodInfo *pMVar3;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  Il2CppObject *pIVar5;
  undefined8 uVar6;
  CustomLogic_ICLMemberBinding_o *pCVar7;
  undefined8 extraout_RAX;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)typeName;
  if (g_data_057ac508 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_CustomLogic_ICLMemberBinding);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicBuiltinTypes);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_CustomLogic_ICLMemberBinding);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_CustomLogic_ICLMemberBinding);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    method_00 = (MethodInfo *)&TypeInfo_Dictionary_string_ICLMemberBinding;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac508 = '\x01';
  }
  pCVar2 = CustomLogic_CLBindingCache__get_Instance(method_00);
  if ((pCVar2 == (CustomLogic_CLBindingCache_o *)0x0) ||
     (method_00 = (MethodInfo *)(pCVar2->fields)._bindings, method_00 == (MethodInfo *)0x0))
  goto label_040b988a;
  bVar1 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                    ((System_Collections_Generic_Dictionary_object__object__o *)method_00,
                     (Il2CppObject *)typeName,MethodInfo_Boolean_ContainsKey);
  if ((char)bVar1 != '\0') {
    pCVar2 = CustomLogic_CLBindingCache__get_Instance(method_00);
    if ((pCVar2 == (CustomLogic_CLBindingCache_o *)0x0) ||
       (method_00 = (MethodInfo *)(pCVar2->fields)._bindings, method_00 == (MethodInfo *)0x0))
    goto label_040b988a;
    pMVar3 = (MethodInfo *)
             System_Collections_Generic_Dictionary_object__object___get_Item
                       ((System_Collections_Generic_Dictionary_object__object__o *)method_00,
                        (Il2CppObject *)typeName,MethodInfo_Dictionary_2_System_String_CustomLogic_ICLMemberBinding);
    if (pMVar3 == (MethodInfo *)0x0) goto label_040b988a;
    bVar1 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      ((System_Collections_Generic_Dictionary_object__object__o *)pMVar3,
                       (Il2CppObject *)varName,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar1 != '\0') {
      pCVar2 = CustomLogic_CLBindingCache__get_Instance(pMVar3);
      method_00 = pMVar3;
      if ((pCVar2 == (CustomLogic_CLBindingCache_o *)0x0) ||
         (method_00 = (MethodInfo *)(pCVar2->fields)._bindings, method_00 == (MethodInfo *)0x0))
      goto label_040b988a;
      pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
               System_Collections_Generic_Dictionary_object__object___get_Item
                         ((System_Collections_Generic_Dictionary_object__object__o *)method_00,
                          (Il2CppObject *)typeName,MethodInfo_Dictionary_2_System_String_CustomLogic_ICLMemberBinding);
      if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_040b988a;
      pIVar5 = System_Collections_Generic_Dictionary_object__object___get_Item
                         (pSVar4,(Il2CppObject *)varName,MethodInfo_ICLMemberBinding_get_Item);
      *binding = (CustomLogic_ICLMemberBinding_o *)pIVar5;
      uVar6 = il2cpp_runtime_helper_022b4080(binding,pIVar5);
      goto label_040b9879;
    }
  }
  if (*(int *)(TypeInfo_CustomLogicBuiltinTypes + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar7 = CustomLogic_CustomLogicBuiltinTypes__CreateBinding(typeName,varName,(MethodInfo *)0x0);
  *binding = pCVar7;
  method_00 = (MethodInfo *)binding;
  il2cpp_runtime_helper_022b4080();
  pCVar2 = CustomLogic_CLBindingCache__get_Instance(method_00);
  if (pCVar2 != (CustomLogic_CLBindingCache_o *)0x0) {
    pMVar3 = (MethodInfo *)(pCVar2->fields)._bindings;
    pCVar2 = CustomLogic_CLBindingCache__get_Instance(method_00);
    if (pCVar2 != (CustomLogic_CLBindingCache_o *)0x0) {
      method_00 = (MethodInfo *)(pCVar2->fields)._bindings;
      pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_ICLMemberBinding);
      System_Collections_Generic_Dictionary_object__object____ctor(pSVar4,MethodInfo_Dictionary_2_System_String_CustomLogic_ICLMemberBinding);
      pIVar5 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__24e2ce0
                         ((System_Collections_Generic_IReadOnlyDictionary_TKey__TValue__o *)method_00,
                          (Il2CppObject *)typeName,(Il2CppObject *)pSVar4,MethodInfo_Dictionary_2_System_String_CustomLogic_ICLMemberBinding);
      if (pMVar3 != (MethodInfo *)0x0) {
        System_Collections_Generic_Dictionary_object__object___set_Item
                  ((System_Collections_Generic_Dictionary_object__object__o *)pMVar3,(Il2CppObject *)typeName,
                   pIVar5,MethodInfo_Void_set_Item);
        pCVar2 = CustomLogic_CLBindingCache__get_Instance(pMVar3);
        method_00 = pMVar3;
        if ((pCVar2 != (CustomLogic_CLBindingCache_o *)0x0) &&
           (method_00 = (MethodInfo *)(pCVar2->fields)._bindings, method_00 != (MethodInfo *)0x0)) {
          pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                   System_Collections_Generic_Dictionary_object__object___get_Item
                             ((System_Collections_Generic_Dictionary_object__object__o *)method_00,
                              (Il2CppObject *)typeName,MethodInfo_Dictionary_2_System_String_CustomLogic_ICLMemberBinding);
          if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            System_Collections_Generic_Dictionary_object__object___set_Item
                      (pSVar4,(Il2CppObject *)varName,(Il2CppObject *)*binding,MethodInfo_Void_set_Item);
            uVar6 = extraout_RAX;
label_040b9879:
            return (bool_conflict)CONCAT71((int7)((ulong)uVar6 >> 8),1);
          }
        }
      }
    }
  }
label_040b988a:
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)method_00,(MethodInfo *)0x0);
  return extraout_EAX;
}


// CustomLogic.CLBindingCache$$.ctor
// il2cpp: void CustomLogic_CLBindingCache___ctor (CustomLogic_CLBindingCache_o* __this, const MethodInfo* method);
// 0x40b9590

void CustomLogic_CLBindingCache___ctor(CustomLogic_CLBindingCache_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if (g_data_057ac509 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Dictionary_2_System_String_Cu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Dictionary_string_ICLMemberBinding);
    g_data_057ac509 = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Dictionary_string_ICLMemberBinding);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_00,MethodInfo_Dictionary_2_System_String_Dictionary_2_System_String_Cu);
  (__this->fields)._bindings =
       (System_Collections_Generic_Dictionary_string__Dictionary_string__ICLMemberBinding___o *)__this_00;
  il2cpp_runtime_helper_022b4080(&__this->fields);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


