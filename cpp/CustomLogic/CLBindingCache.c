// Type: CustomLogic.CLBindingCache
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CLBindingCache.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CLBindingCache$$get_Instance
// il2cpp: CustomLogic_CLBindingCache_o* CustomLogic_CLBindingCache__get_Instance (const MethodInfo* method);
// 0x59a9a60

CustomLogic_CLBindingCache_o * CustomLogic_CLBindingCache__get_Instance(MethodInfo *method)

{
  CustomLogic_CLBindingCache_o *__this;
  System_Collections_Generic_Dictionary_string__Dictionary_string__ICLMemberBinding___o *__this_00;
  
  if (Il2CppMethodInitialized_07545ad9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLBindingCache);
    Il2CppMethodInitialized_07545ad9 = '\x01';
  }
  __this = TypeInfo_CustomLogic_CLBindingCache->static_fields->instance;
  if (__this == (CustomLogic_CLBindingCache_o *)0x0) {
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CLBindingCache);
    if (Il2CppMethodInitialized_07545adb == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_ICLMemberBinding_ctor
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_ICLMemberBinding);
      Il2CppMethodInitialized_07545adb = '\x01';
    }
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)
                           TypeInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_ICLMemberBinding
                          );
    System_Collections_Generic_Dictionary_object__object____ctor
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
               (MethodInfo_4AAC8D0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_ICLMemberBinding_ctor
              );
    (__this->fields)._bindings = __this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._bindings);
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CLBindingCache->static_fields->instance = __this;
    Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CLBindingCache->static_fields->instance);
  }
  return __this;
}


// CustomLogic.CLBindingCache$$GetOrCreateBinding
// il2cpp: bool CustomLogic_CLBindingCache__GetOrCreateBinding (System_String_o* typeName, System_String_o* varName, CustomLogic_ICLMemberBinding_o** binding, const MethodInfo* method);
// 0x59a9bc0

bool CustomLogic_CLBindingCache__GetOrCreateBinding
               (System_String_o *typeName,System_String_o *varName,CustomLogic_ICLMemberBinding_o **binding,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__Dictionary_string__ICLMemberBinding___o *dictionary;
  bool bVar1;
  CustomLogic_CLBindingCache_o *pCVar2;
  MethodInfo *pMVar3;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  CustomLogic_ICLMemberBinding_o *pCVar5;
  System_Collections_Generic_Dictionary_string__ICLMemberBinding__o *__this;
  Il2CppObject *value;
  System_Collections_Generic_Dictionary_string__ICLMemberBinding__c **method_00;
  MethodInfo *method_01;
  
  method_00 = (System_Collections_Generic_Dictionary_string__ICLMemberBinding__c **)typeName;
  if (Il2CppMethodInitialized_07545ada == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_CollectionExtensions_GetValueOrDefault_string_Dictionary_string_ICLMe
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicBuiltinTypes);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_ICLMemberBinding_ContainsKey
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_ICLMemberBinding_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_ICLMemberBinding_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_ICLMemberBinding_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_ICLMemberBinding_get_Item
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_ICLMemberBinding_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_ICLMemberBinding_set_Item
              );
    method_00 = &TypeInfo_System_Collections_Generic_Dictionary_string_ICLMemberBinding;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_ICLMemberBinding);
    Il2CppMethodInitialized_07545ada = '\x01';
  }
  pCVar2 = CustomLogic_CLBindingCache__get_Instance((MethodInfo *)method_00);
  if ((pCVar2 == (CustomLogic_CLBindingCache_o *)0x0) ||
     (pMVar3 = (MethodInfo *)(pCVar2->fields)._bindings, pMVar3 == (MethodInfo *)0x0)) goto label_059a9e3a;
  bVar1 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                    ((System_Collections_Generic_Dictionary_object__object__o *)pMVar3,
                     (Il2CppObject *)typeName,
                     (MethodInfo_4AAD6F0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_ICLMemberBinding_ContainsKey
                    );
  if (bVar1) {
    pCVar2 = CustomLogic_CLBindingCache__get_Instance(pMVar3);
    if (((pCVar2 == (CustomLogic_CLBindingCache_o *)0x0) ||
        (pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar2->fields)._bindings,
        pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) ||
       (pMVar3 = (MethodInfo *)
                 System_Collections_Generic_Dictionary_object__object___get_Item
                           (pSVar4,(Il2CppObject *)typeName,
                            (MethodInfo_4AAD450 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_ICLMemberBinding_get_Item
                           ), pMVar3 == (MethodInfo *)0x0)) goto label_059a9e3a;
    bVar1 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      ((System_Collections_Generic_Dictionary_object__object__o *)pMVar3,
                       (Il2CppObject *)varName,
                       (MethodInfo_4AAD6F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_ICLMemberBinding_ContainsKey);
    if (bVar1) {
      pCVar2 = CustomLogic_CLBindingCache__get_Instance(pMVar3);
      if (((pCVar2 != (CustomLogic_CLBindingCache_o *)0x0) &&
          (pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar2->fields)._bindings,
          pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) &&
         (pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                   System_Collections_Generic_Dictionary_object__object___get_Item
                             (pSVar4,(Il2CppObject *)typeName,
                              (MethodInfo_4AAD450 *)
                              MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_ICLMemberBinding_get_Item
                             ), pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
        pCVar5 = System_Collections_Generic_Dictionary_object__object___get_Item
                           (pSVar4,(Il2CppObject *)varName,
                            (MethodInfo_4AAD450 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_ICLMemberBinding_get_Item)
        ;
        *binding = pCVar5;
        Il2CppCodeGenWriteBarrier(binding);
        return true;
      }
      goto label_059a9e3a;
    }
  }
  if ((TypeInfo_CustomLogic_CustomLogicBuiltinTypes->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBuiltinTypes);
  }
  pCVar5 = CustomLogic_CustomLogicBuiltinTypes__CreateBinding(typeName,varName,(MethodInfo *)0x0);
  *binding = pCVar5;
  pMVar3 = (MethodInfo *)binding;
  Il2CppCodeGenWriteBarrier(binding);
  pCVar2 = CustomLogic_CLBindingCache__get_Instance(pMVar3);
  if (pCVar2 != (CustomLogic_CLBindingCache_o *)0x0) {
    method_01 = (MethodInfo *)(pCVar2->fields)._bindings;
    pCVar2 = CustomLogic_CLBindingCache__get_Instance(pMVar3);
    if (pCVar2 != (CustomLogic_CLBindingCache_o *)0x0) {
      dictionary = (pCVar2->fields)._bindings;
      __this = il2cpp_codegen_object_new
                         ((Il2CppClass *)
                          TypeInfo_System_Collections_Generic_Dictionary_string_ICLMemberBinding);
      System_Collections_Generic_Dictionary_object__object____ctor
                ((System_Collections_Generic_Dictionary_object__object__o *)__this,
                 (MethodInfo_4AAC8D0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_ICLMemberBinding_ctor);
      value = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__34a73c0
                        ((System_Collections_Generic_IReadOnlyDictionary_TKey__TValue__o *)dictionary,
                         (Il2CppObject *)typeName,(Il2CppObject *)__this,
                         (MethodInfo_34A73C0 *)
                         MethodInfo_System_Collections_Generic_CollectionExtensions_GetValueOrDefault_string_Dictionary_string_ICLMe
                        );
      if (method_01 != (MethodInfo *)0x0) {
        System_Collections_Generic_Dictionary_object__object___set_Item
                  ((System_Collections_Generic_Dictionary_object__object__o *)method_01,
                   (Il2CppObject *)typeName,value,
                   (MethodInfo_4AAD4C0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_ICLMemberBinding_set_Item
                  );
        pCVar2 = CustomLogic_CLBindingCache__get_Instance(method_01);
        if (((pCVar2 != (CustomLogic_CLBindingCache_o *)0x0) &&
            (pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar2->fields)._bindings,
            pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) &&
           (pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                     System_Collections_Generic_Dictionary_object__object___get_Item
                               (pSVar4,(Il2CppObject *)typeName,
                                (MethodInfo_4AAD450 *)
                                MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_ICLMemberBinding_get_Item
                               ), pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
          System_Collections_Generic_Dictionary_object__object___set_Item
                    (pSVar4,(Il2CppObject *)varName,(Il2CppObject *)*binding,
                     (MethodInfo_4AAD4C0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_ICLMemberBinding_set_Item);
          return true;
        }
      }
    }
  }
label_059a9e3a:
  ThrowNullReferenceException();
}


// CustomLogic.CLBindingCache$$.ctor
// il2cpp: void CustomLogic_CLBindingCache___ctor (CustomLogic_CLBindingCache_o* __this, const MethodInfo* method);
// 0x59a9b40

void CustomLogic_CLBindingCache___ctor(CustomLogic_CLBindingCache_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__Dictionary_string__ICLMemberBinding___o *__this_00;
  
  if (Il2CppMethodInitialized_07545adb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_ICLMemberBinding_ctor
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_ICLMemberBinding);
    Il2CppMethodInitialized_07545adb = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_ICLMemberBinding
                        );
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
             (MethodInfo_4AAC8D0 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_ICLMemberBinding_ctor);
  (__this->fields)._bindings = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._bindings);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


