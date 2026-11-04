// Type: CustomLogic.CLBindingCache
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CLBindingCache.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CLBindingCache$$get_Instance
// il2cpp: CustomLogic_CLBindingCache_o* CustomLogic_CLBindingCache__get_Instance (const MethodInfo* method);
// 0x181ecd800

CustomLogic_CLBindingCache_o * CustomLogic_CLBindingCache__get_Instance(MethodInfo *method)

{
  CustomLogic_CLBindingCache_o *__this;
  System_Collections_Generic_Dictionary_string__Dictionary_string__ICLMemberBinding___o *__this_00;
  
  if (Il2CppMethodInitialized_184345140 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLBindingCache);
    Il2CppMethodInitialized_184345140 = '\x01';
  }
  __this = TypeInfo_CustomLogic_CLBindingCache->static_fields->instance;
  if (__this == (CustomLogic_CLBindingCache_o *)0x0) {
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CLBindingCache);
    if (Il2CppMethodInitialized_184345142 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_ICLMemberBinding_ctor
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_ICLMemberBinding);
      Il2CppMethodInitialized_184345142 = '\x01';
    }
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)
                           TypeInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_ICLMemberBinding
                          );
    System_Collections_Generic_Dictionary_object__object____ctor
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               (MethodInfo_1454140 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_ICLMemberBinding_ctor
              );
    (__this->fields)._bindings = __this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._bindings,__this_00);
    System_Configuration_ConfigurationCollectionAttribute___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CLBindingCache->static_fields->instance = __this;
    Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CLBindingCache->static_fields->instance,__this);
  }
  return __this;
}


// CustomLogic.CLBindingCache$$GetOrCreateBinding
// il2cpp: bool CustomLogic_CLBindingCache__GetOrCreateBinding (System_String_o* typeName, System_String_o* varName, CustomLogic_ICLMemberBinding_o** binding, const MethodInfo* method);
// 0x181ecd4e0

bool CustomLogic_CLBindingCache__GetOrCreateBinding
               (System_String_o *typeName,System_String_o *varName,CustomLogic_ICLMemberBinding_o **binding,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__Dictionary_string__ICLMemberBinding___o *pSVar1;
  bool bVar2;
  CustomLogic_CLBindingCache_o *pCVar3;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  CustomLogic_ICLMemberBinding_o *pCVar5;
  System_Collections_Generic_Dictionary_string__ICLMemberBinding__o *__this_00;
  Il2CppObject *value;
  
  if (Il2CppMethodInitialized_184345141 == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_ICLMemberBinding);
    Il2CppMethodInitialized_184345141 = '\x01';
  }
  pCVar3 = CustomLogic_CLBindingCache__get_Instance((MethodInfo *)0x0);
  if ((pCVar3 == (CustomLogic_CLBindingCache_o *)0x0) ||
     (pSVar1 = (pCVar3->fields)._bindings,
     pSVar1 == (System_Collections_Generic_Dictionary_string__Dictionary_string__ICLMemberBinding___o *)0x0))
  goto label_181ecd76b;
  bVar2 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar1,(Il2CppObject *)typeName,
                     (MethodInfo_1455450 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_ICLMemberBinding_ContainsKey
                    );
  if (bVar2) {
    pCVar3 = CustomLogic_CLBindingCache__get_Instance((MethodInfo *)0x0);
    if ((pCVar3 == (CustomLogic_CLBindingCache_o *)0x0) ||
       (pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar3->fields)._bindings,
       pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) goto label_181ecd76b;
    __this = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
             System_Collections_Generic_Dictionary_object__object___get_Item
                       (pSVar4,(Il2CppObject *)typeName,
                        (MethodInfo_147A5B0 *)
                        MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_ICLMemberBinding_get_Item
                       );
    if (__this == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_181ecd76b;
    bVar2 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      (__this,(Il2CppObject *)varName,
                       (MethodInfo_1455450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_ICLMemberBinding_ContainsKey);
    if (bVar2) {
      pCVar3 = CustomLogic_CLBindingCache__get_Instance((MethodInfo *)0x0);
      if ((pCVar3 != (CustomLogic_CLBindingCache_o *)0x0) &&
         (pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar3->fields)._bindings,
         pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
        pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                 System_Collections_Generic_Dictionary_object__object___get_Item
                           (pSVar4,(Il2CppObject *)typeName,
                            (MethodInfo_147A5B0 *)
                            MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_ICLMemberBinding_get_Item
                           );
        if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          pCVar5 = System_Collections_Generic_Dictionary_object__object___get_Item
                             (pSVar4,(Il2CppObject *)varName,
                              (MethodInfo_147A5B0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_string_ICLMemberBinding_get_Item
                             );
          *binding = pCVar5;
          Il2CppCodeGenWriteBarrier(binding,pCVar5);
          return true;
        }
      }
      goto label_181ecd76b;
    }
  }
  if ((TypeInfo_CustomLogic_CustomLogicBuiltinTypes->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicBuiltinTypes);
  }
  pCVar5 = CustomLogic_CustomLogicBuiltinTypes__CreateBinding(typeName,varName,(MethodInfo *)0x0);
  *binding = pCVar5;
  Il2CppCodeGenWriteBarrier(binding,pCVar5);
  pCVar3 = CustomLogic_CLBindingCache__get_Instance((MethodInfo *)0x0);
  if (pCVar3 != (CustomLogic_CLBindingCache_o *)0x0) {
    pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar3->fields)._bindings;
    pCVar3 = CustomLogic_CLBindingCache__get_Instance((MethodInfo *)0x0);
    if (pCVar3 != (CustomLogic_CLBindingCache_o *)0x0) {
      pSVar1 = (pCVar3->fields)._bindings;
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_System_Collections_Generic_Dictionary_string_ICLMemberBinding);
      System_Collections_Generic_Dictionary_object__object____ctor
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                 (MethodInfo_1454140 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_ICLMemberBinding_ctor);
      value = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__65cd20
                        ((System_Collections_Generic_IReadOnlyDictionary_TKey__TValue__o *)pSVar1,
                         (Il2CppObject *)typeName,(Il2CppObject *)__this_00,
                         (MethodInfo_65CD20 *)
                         MethodInfo_System_Collections_Generic_CollectionExtensions_GetValueOrDefault_string_Dictionary_string_ICLMe
                        );
      if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar4,(Il2CppObject *)typeName,value,
                   (MethodInfo_147A7F0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_ICLMemberBinding_set_Item
                  );
        pCVar3 = CustomLogic_CLBindingCache__get_Instance((MethodInfo *)0x0);
        if ((pCVar3 != (CustomLogic_CLBindingCache_o *)0x0) &&
           (pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar3->fields)._bindings,
           pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
          pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                   System_Collections_Generic_Dictionary_object__object___get_Item
                             (pSVar4,(Il2CppObject *)typeName,
                              (MethodInfo_147A5B0 *)
                              MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_ICLMemberBinding_get_Item
                             );
          if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            System_Collections_Generic_Dictionary_object__object___set_Item
                      (pSVar4,(Il2CppObject *)varName,(Il2CppObject *)*binding,
                       (MethodInfo_147A7F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_ICLMemberBinding_set_Item);
            return true;
          }
        }
      }
    }
  }
label_181ecd76b:
  ThrowNullReferenceException();
}


// CustomLogic.CLBindingCache$$.ctor
// il2cpp: void CustomLogic_CLBindingCache___ctor (CustomLogic_CLBindingCache_o* __this, const MethodInfo* method);
// 0x181ecd780

void CustomLogic_CLBindingCache___ctor(CustomLogic_CLBindingCache_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__Dictionary_string__ICLMemberBinding___o *__this_00;
  
  if (Il2CppMethodInitialized_184345142 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_ICLMemberBinding_ctor
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_ICLMemberBinding);
    Il2CppMethodInitialized_184345142 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_ICLMemberBinding
                        );
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_1454140 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_ICLMemberBinding_ctor);
  (__this->fields)._bindings = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._bindings,__this_00);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


