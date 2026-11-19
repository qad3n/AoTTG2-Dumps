// Type: CustomLogic.CustomLogicRoomDataBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicRoomDataBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicRoomDataBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicRoomDataBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicRoomDataBuiltin_o* CustomLogic_CustomLogicRoomDataBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5af6930

CustomLogic_CustomLogicRoomDataBuiltin_o *
CustomLogic_CustomLogicRoomDataBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_07546eee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin);
    Il2CppMethodInitialized_07546eee = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicRoomDataBuiltin constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicRoomDataBuiltin_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = (CustomLogic_BuiltinClassInstance_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin);
  if (Il2CppMethodInitialized_07546ee9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546ee9 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
  return (CustomLogic_CustomLogicRoomDataBuiltin_o *)__this;
}


// CustomLogic.CustomLogicRoomDataBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x5af70b0

void CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07546ef4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546ef4 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c->static_fields->__9 =
       (CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c->static_fields->__9);
  return;
}


// CustomLogic.CustomLogicRoomDataBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x5af7120

void CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicRoomDataBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetProperty>b__2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c_____CreateMethodBinding__SetProperty_b__2_0 (CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicRoomDataBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5af7130

Il2CppObject *
CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c_____CreateMethodBinding__SetProperty_b__2_0
          (CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicRoomDataBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *property;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07546ef5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546ef5 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    property = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (obj,(MethodInfo_34BDE00 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((__a->max_length & 0xfffffffe) != 0) {
      CustomLogic_CustomLogicRoomDataBuiltin__SetProperty(property,__a->m_Items[1],method_00);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicRoomDataBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetProperty>b__3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c_____CreateMethodBinding__GetProperty_b__3_0 (CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicRoomDataBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5af71d0

Il2CppObject *
CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c_____CreateMethodBinding__GetProperty_b__3_0
          (CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicRoomDataBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *key;
  Il2CppObject *pIVar1;
  
  if (Il2CppMethodInitialized_07546ef6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546ef6 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    key = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (pIVar1,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string
                    );
    if ((__a->max_length & 0xfffffffe) != 0) {
      pIVar1 = __a->m_Items[1];
      if (Il2CppMethodInitialized_07546eeb == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_CollectionExtensions_GetValueOrDefault_string_object
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
        Il2CppMethodInitialized_07546eeb = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      pIVar1 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__34a73c0
                         ((System_Collections_Generic_IReadOnlyDictionary_TKey__TValue__o *)
                          TypeInfo_CustomLogic_CustomLogicManager->static_fields->RoomData,(Il2CppObject *)key
                          ,pIVar1,(MethodInfo_34A73C0 *)
                                  MethodInfo_System_Collections_Generic_CollectionExtensions_GetValueOrDefault_string_object
                         );
      return pIVar1;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicRoomDataBuiltin.Bindings.<>c$$<__CreateMethodBinding__Clear>b__4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c_____CreateMethodBinding__Clear_b__4_0 (CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicRoomDataBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5af72d0

Il2CppObject *
CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c_____CreateMethodBinding__Clear_b__4_0
          (CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicRoomDataBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if (Il2CppMethodInitialized_07546eec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_Clear);
    Il2CppMethodInitialized_07546eec = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                TypeInfo_CustomLogic_CustomLogicManager->static_fields->RoomData;
  }
  else {
    __this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->static_fields + 0x98);
  }
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_object__object___Clear
            (__this_00,
             (MethodInfo_4AAD690 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Clear);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicRoomDataBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicRoomDataBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5af6a50

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicRoomDataBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin__o *pCVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c *pCVar4;
  
  if (Il2CppMethodInitialized_07546eef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"SetProperty");
    il2cpp_codegen_initialize_runtime_metadata(&"GetProperty");
    il2cpp_codegen_initialize_runtime_metadata(&"Clear");
    Il2CppMethodInitialized_07546eef = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"SetProperty",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings);
      pCVar2 = CustomLogic_CustomLogicRoomDataBuiltin_Bindings____CreateMethodBinding__SetProperty
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicRoomDataBuiltin_Bindings____CreateMethodBinding__SetProperty
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"GetProperty",(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      pCVar4 = TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings;
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings);
      pCVar2 = CustomLogic_CustomLogicRoomDataBuiltin_Bindings____CreateMethodBinding__GetProperty
                         ((MethodInfo *)pCVar4);
      return (CustomLogic_ICLMemberBinding_o *)pCVar2;
    }
    pCVar2 = CustomLogic_CustomLogicRoomDataBuiltin_Bindings____CreateMethodBinding__GetProperty
                       ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  bVar1 = System_String__op_Equality(name,"Clear",(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
    str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicRoomDataBuiltin not found");
    pSVar3 = System_String__Concat_5301f10(pSVar3,name,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
    System_Exception___ctor_54fa440(__this,pSVar3,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_CreateMemberBinding);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
  }
  if ((TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
    pCVar4 = TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings)
    ;
    pCVar2 = CustomLogic_CustomLogicRoomDataBuiltin_Bindings____CreateMethodBinding__Clear
                       ((MethodInfo *)pCVar4);
    return (CustomLogic_ICLMemberBinding_o *)pCVar2;
  }
  pCVar2 = CustomLogic_CustomLogicRoomDataBuiltin_Bindings____CreateMethodBinding__Clear
                     ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings);
  return (CustomLogic_ICLMemberBinding_o *)pCVar2;
}


// CustomLogic.CustomLogicRoomDataBuiltin.Bindings$$__CreateMethodBinding__SetProperty
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin__o* CustomLogic_CustomLogicRoomDataBuiltin_Bindings____CreateMethodBinding__SetProperty (const MethodInfo* method);
// 0x5af6be0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5af6c15: jmp 0x5af6c85

CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin__o *
CustomLogic_CustomLogicRoomDataBuiltin_Bindings____CreateMethodBinding__SetProperty(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicRoomDataBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546ef0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicRoomDataBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c___CreateMethodBinding__SetProperty_b__2_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546ef0 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__2_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__2_0;
  }
  if (__this == (System_Func_CustomLogicRoomDataBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicRoomDataBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c___CreateMethodBinding__SetProperty_b__2_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c->static_fields;
    pCVar2->__9__2_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__2_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicRoomDataBuiltin.Bindings$$__CreateMethodBinding__GetProperty
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin__o* CustomLogic_CustomLogicRoomDataBuiltin_Bindings____CreateMethodBinding__GetProperty (const MethodInfo* method);
// 0x5af6d20
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5af6d55: jmp 0x5af6dc5

CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin__o *
CustomLogic_CustomLogicRoomDataBuiltin_Bindings____CreateMethodBinding__GetProperty(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicRoomDataBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546ef1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicRoomDataBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c___CreateMethodBinding__GetProperty_b__3_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546ef1 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__3_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__3_0;
  }
  if (__this == (System_Func_CustomLogicRoomDataBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicRoomDataBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c___CreateMethodBinding__GetProperty_b__3_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c->static_fields;
    pCVar2->__9__3_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__3_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicRoomDataBuiltin.Bindings$$__CreateMethodBinding__Clear
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin__o* CustomLogic_CustomLogicRoomDataBuiltin_Bindings____CreateMethodBinding__Clear (const MethodInfo* method);
// 0x5af6e60
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5af6e95: jmp 0x5af6f05

CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin__o *
CustomLogic_CustomLogicRoomDataBuiltin_Bindings____CreateMethodBinding__Clear(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicRoomDataBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicRoomDataBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546ef2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicRoomDataBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c___CreateMethodBinding__Clear_b__4_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546ef2 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__4_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__4_0;
  }
  if (__this == (System_Func_CustomLogicRoomDataBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicRoomDataBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c___CreateMethodBinding__Clear_b__4_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings_c->static_fields;
    pCVar2->__9__4_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__4_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRoomDataBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicRoomDataBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicRoomDataBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x5af6fa0

void CustomLogic_CustomLogicRoomDataBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07546ef3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"SetProperty");
    il2cpp_codegen_initialize_runtime_metadata(&"GetProperty");
    il2cpp_codegen_initialize_runtime_metadata(&"Clear");
    Il2CppMethodInitialized_07546ef3 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetProperty",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetProperty",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Clear",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicRoomDataBuiltin_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicRoomDataBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicRoomDataBuiltin___ctor (CustomLogic_CustomLogicRoomDataBuiltin_o* __this, const MethodInfo* method);
// 0x5af6640

void CustomLogic_CustomLogicRoomDataBuiltin___ctor
               (CustomLogic_CustomLogicRoomDataBuiltin_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546ee9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546ee9 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    return;
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicRoomDataBuiltin$$SetProperty
// il2cpp: void CustomLogic_CustomLogicRoomDataBuiltin__SetProperty (System_String_o* property, Il2CppObject* value, const MethodInfo* method);
// 0x5af66b0

void CustomLogic_CustomLogicRoomDataBuiltin__SetProperty
               (System_String_o *property,Il2CppObject *value,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  Il2CppClass *pIVar1;
  System_Exception_o *__this_00;
  System_String_o *message;
  MethodInfo *lastManagedFrame;
  
  if (Il2CppMethodInitialized_07546eea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
    Il2CppMethodInitialized_07546eea = '\x01';
  }
  if ((((value != (Il2CppObject *)0x0) && (pIVar1 = value->klass, pIVar1 != g_data_07556740)) &&
      (pIVar1 != g_data_07556710)) && ((pIVar1 != g_data_07556758 && (pIVar1 != g_data_075566f0)))) {
    pIVar1 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this_00 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar1);
    message = il2cpp_codegen_get_runtime_metadata(&"RoomData.SetProperty only supports null, float, int, string, or bool values.");
    System_Exception___ctor_54fa440(__this_00,message,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicRoomDataBuiltin_SetProperty);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_CustomLogic_CustomLogicManager->static_fields->RoomData;
  if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_object__object___set_Item
            (__this,(Il2CppObject *)property,value,
             (MethodInfo_4AAD4C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
  return;
}


// CustomLogic.CustomLogicRoomDataBuiltin$$GetProperty
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRoomDataBuiltin__GetProperty (System_String_o* property, Il2CppObject* defaultValue, const MethodInfo* method);
// 0x5af67b0

Il2CppObject *
CustomLogic_CustomLogicRoomDataBuiltin__GetProperty
          (System_String_o *property,Il2CppObject *defaultValue,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (Il2CppMethodInitialized_07546eeb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_CollectionExtensions_GetValueOrDefault_string_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_07546eeb = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  pIVar1 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__34a73c0
                     ((System_Collections_Generic_IReadOnlyDictionary_TKey__TValue__o *)
                      TypeInfo_CustomLogic_CustomLogicManager->static_fields->RoomData,
                      (Il2CppObject *)property,defaultValue,
                      (MethodInfo_34A73C0 *)
                      MethodInfo_System_Collections_Generic_CollectionExtensions_GetValueOrDefault_string_object
                     );
  return pIVar1;
}


// CustomLogic.CustomLogicRoomDataBuiltin$$Clear
// il2cpp: void CustomLogic_CustomLogicRoomDataBuiltin__Clear (const MethodInfo* method);
// 0x5af6830

void CustomLogic_CustomLogicRoomDataBuiltin__Clear(MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  
  if (Il2CppMethodInitialized_07546eec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_Clear);
    Il2CppMethodInitialized_07546eec = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_CustomLogic_CustomLogicManager->static_fields->RoomData;
  }
  else {
    __this = *(System_Collections_Generic_Dictionary_object__object__o **)
              ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->static_fields + 0x98);
  }
  if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_object__object___Clear
            (__this,(MethodInfo_4AAD690 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Clear
            );
  return;
}


// CustomLogic.CustomLogicRoomDataBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicRoomDataBuiltin__get_ClassName (CustomLogic_CustomLogicRoomDataBuiltin_o* __this, const MethodInfo* method);
// 0x5af68d0

System_String_o *
CustomLogic_CustomLogicRoomDataBuiltin__get_ClassName
          (CustomLogic_CustomLogicRoomDataBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546eed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"RoomData");
    Il2CppMethodInitialized_07546eed = '\x01';
  }
  return "RoomData";
}


// CustomLogic.CustomLogicRoomDataBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicRoomDataBuiltin__get_IsAbstract (CustomLogic_CustomLogicRoomDataBuiltin_o* __this, const MethodInfo* method);
// 0x5af6900

bool CustomLogic_CustomLogicRoomDataBuiltin__get_IsAbstract
               (CustomLogic_CustomLogicRoomDataBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicRoomDataBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicRoomDataBuiltin__get_IsStatic (CustomLogic_CustomLogicRoomDataBuiltin_o* __this, const MethodInfo* method);
// 0x5af6910

bool CustomLogic_CustomLogicRoomDataBuiltin__get_IsStatic
               (CustomLogic_CustomLogicRoomDataBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicRoomDataBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicRoomDataBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicRoomDataBuiltin_o* __this, const MethodInfo* method);
// 0x5af6920

bool CustomLogic_CustomLogicRoomDataBuiltin__get_InheritBaseMembers
               (CustomLogic_CustomLogicRoomDataBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


