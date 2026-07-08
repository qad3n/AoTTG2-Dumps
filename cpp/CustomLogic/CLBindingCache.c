// Type: CustomLogic.CLBindingCache
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CLBindingCache.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CLBindingCache$$get_Instance
// il2cpp: CustomLogic_CLBindingCache_o* CustomLogic_CLBindingCache__get_Instance (const MethodInfo* method);
// 0x3db3170

CustomLogic_CLBindingCache_o * CustomLogic_CLBindingCache__get_Instance(MethodInfo *method)

{
  CustomLogic_CLBindingCache_o *__this;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if (DAT_057027d2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CLBindingCache);
    DAT_057027d2 = '\x01';
  }
  __this = (CustomLogic_CLBindingCache_o *)**(long **)(TypeInfo_CLBindingCache + 0xb8);
  if (__this == (CustomLogic_CLBindingCache_o *)0x0) {
    __this = (CustomLogic_CLBindingCache_o *)il2cpp_runtime_glue();
    if (DAT_057027d4 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_Dictionary_2_System_S);
      il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__Dictionary_string__ICLMemberB);
      DAT_057027d4 = '\x01';
    }
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                il2cpp_runtime_glue(TypeInfo_Dictionary_string__Dictionary_string__ICLMemberB);
    System_Collections_Generic_Dictionary<object__object>___ctor(__this_00,MethodInfo_Dictionary_2_System_String_Dictionary_2_System_S);
    (__this->fields)._bindings =
         (System_Collections_Generic_Dictionary_string__Dictionary_string__ICLMemberBinding___o *)
         __this_00;
    il2cpp_runtime_glue(&__this->fields);
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    **(undefined8 **)(TypeInfo_CLBindingCache + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_CLBindingCache + 0xb8),__this);
  }
  return __this;
}


// CustomLogic.CLBindingCache$$GetOrCreateBinding
// il2cpp: bool CustomLogic_CLBindingCache__GetOrCreateBinding (System_String_o* typeName, System_String_o* varName, CustomLogic_ICLMemberBinding_o** binding, const MethodInfo* method);
// 0x3db32d0

bool_conflict
CustomLogic_CLBindingCache__GetOrCreateBinding
          (System_String_o *typeName,System_String_o *varName,
          CustomLogic_ICLMemberBinding_o **binding,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__Dictionary_string__ICLMemberBinding___o *dictionary;
  bool_conflict bVar1;
  CustomLogic_CLBindingCache_o *pCVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  Il2CppObject *pIVar4;
  undefined8 uVar5;
  CustomLogic_ICLMemberBinding_o *pCVar6;
  undefined8 extraout_RAX;
  MethodInfo *pMVar7;
  MethodInfo *method_00;
  
  pMVar7 = (MethodInfo *)typeName;
  if (DAT_057027d3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_CustomLogic_ICLMember);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicBuiltinTypes);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_CustomLogic_ICLMember);
    il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_CustomLogic_ICLMember);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    pMVar7 = (MethodInfo *)&TypeInfo_Dictionary_string__ICLMemberBinding;
    il2cpp_init_method_metadata();
    DAT_057027d3 = '\x01';
  }
  pCVar2 = CustomLogic_CLBindingCache__get_Instance(pMVar7);
  if ((pCVar2 == (CustomLogic_CLBindingCache_o *)0x0) ||
     (pMVar7 = (MethodInfo *)(pCVar2->fields)._bindings, pMVar7 == (MethodInfo *)0x0))
  goto LAB_03db354a;
  bVar1 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                    ((System_Collections_Generic_Dictionary_object__object__o *)pMVar7,
                     (Il2CppObject *)typeName,MethodInfo_Boolean_ContainsKey);
  if ((char)bVar1 != '\0') {
    pCVar2 = CustomLogic_CLBindingCache__get_Instance(pMVar7);
    if ((pCVar2 == (CustomLogic_CLBindingCache_o *)0x0) ||
       (pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (pCVar2->fields)._bindings,
       pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) goto LAB_03db354a;
    pMVar7 = (MethodInfo *)
             System_Collections_Generic_Dictionary<object__object>__get_Item
                       (pSVar3,(Il2CppObject *)typeName,MethodInfo_Dictionary_2_System_String_CustomLogic_ICLMember);
    if (pMVar7 == (MethodInfo *)0x0) goto LAB_03db354a;
    bVar1 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      ((System_Collections_Generic_Dictionary_object__object__o *)pMVar7,
                       (Il2CppObject *)varName,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar1 != '\0') {
      pCVar2 = CustomLogic_CLBindingCache__get_Instance(pMVar7);
      if ((pCVar2 == (CustomLogic_CLBindingCache_o *)0x0) ||
         (pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (pCVar2->fields)._bindings,
         pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0))
      goto LAB_03db354a;
      pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
               System_Collections_Generic_Dictionary<object__object>__get_Item
                         (pSVar3,(Il2CppObject *)typeName,MethodInfo_Dictionary_2_System_String_CustomLogic_ICLMember);
      if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
      goto LAB_03db354a;
      pIVar4 = System_Collections_Generic_Dictionary<object__object>__get_Item
                         (pSVar3,(Il2CppObject *)varName,MethodInfo_ICLMemberBinding_get_Item);
      *binding = (CustomLogic_ICLMemberBinding_o *)pIVar4;
      uVar5 = il2cpp_runtime_glue(binding,pIVar4);
      goto LAB_03db3539;
    }
  }
  if (*(int *)(TypeInfo_CustomLogicBuiltinTypes + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pCVar6 = CustomLogic_CustomLogicBuiltinTypes__CreateBinding(typeName,varName,(MethodInfo *)0x0);
  *binding = pCVar6;
  pMVar7 = (MethodInfo *)binding;
  il2cpp_runtime_glue(binding,pCVar6);
  pCVar2 = CustomLogic_CLBindingCache__get_Instance(pMVar7);
  if (pCVar2 != (CustomLogic_CLBindingCache_o *)0x0) {
    method_00 = (MethodInfo *)(pCVar2->fields)._bindings;
    pCVar2 = CustomLogic_CLBindingCache__get_Instance(pMVar7);
    if (pCVar2 != (CustomLogic_CLBindingCache_o *)0x0) {
      dictionary = (pCVar2->fields)._bindings;
      pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
               il2cpp_runtime_glue(TypeInfo_Dictionary_string__ICLMemberBinding);
      System_Collections_Generic_Dictionary<object__object>___ctor(pSVar3,MethodInfo_Dictionary_2_System_String_CustomLogic_ICLMember);
      pIVar4 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault<object__object>
                         ((System_Collections_Generic_IReadOnlyDictionary_TKey__TValue__o *)
                          dictionary,(Il2CppObject *)typeName,(Il2CppObject *)pSVar3,MethodInfo_Dictionary_2_System_String_CustomLogic_ICLMember);
      if (method_00 != (MethodInfo *)0x0) {
        System_Collections_Generic_Dictionary<object__object>__set_Item
                  ((System_Collections_Generic_Dictionary_object__object__o *)method_00,
                   (Il2CppObject *)typeName,pIVar4,MethodInfo_Void_set_Item);
        pCVar2 = CustomLogic_CLBindingCache__get_Instance(method_00);
        if ((pCVar2 != (CustomLogic_CLBindingCache_o *)0x0) &&
           (pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                     (pCVar2->fields)._bindings,
           pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
          pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
                   System_Collections_Generic_Dictionary<object__object>__get_Item
                             (pSVar3,(Il2CppObject *)typeName,MethodInfo_Dictionary_2_System_String_CustomLogic_ICLMember);
          if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            System_Collections_Generic_Dictionary<object__object>__set_Item
                      (pSVar3,(Il2CppObject *)varName,(Il2CppObject *)*binding,MethodInfo_Void_set_Item);
            uVar5 = extraout_RAX;
LAB_03db3539:
            return (bool_conflict)CONCAT71((int7)((ulong)uVar5 >> 8),1);
          }
        }
      }
    }
  }
LAB_03db354a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CLBindingCache$$.ctor
// il2cpp: void CustomLogic_CLBindingCache___ctor (CustomLogic_CLBindingCache_o* __this, const MethodInfo* method);
// 0x3db3250

void CustomLogic_CLBindingCache___ctor(CustomLogic_CLBindingCache_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if (DAT_057027d4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_Dictionary_2_System_S);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__Dictionary_string__ICLMemberB);
    DAT_057027d4 = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_string__Dictionary_string__ICLMemberB);
  System_Collections_Generic_Dictionary<object__object>___ctor(__this_00,MethodInfo_Dictionary_2_System_String_Dictionary_2_System_S);
  (__this->fields)._bindings =
       (System_Collections_Generic_Dictionary_string__Dictionary_string__ICLMemberBinding___o *)
       __this_00;
  il2cpp_runtime_glue(&__this->fields);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


