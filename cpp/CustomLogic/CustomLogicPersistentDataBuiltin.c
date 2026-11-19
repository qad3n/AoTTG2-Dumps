// Type: CustomLogic.CustomLogicPersistentDataBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicPersistentDataBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicPersistentDataBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicPersistentDataBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicPersistentDataBuiltin_o* CustomLogic_CustomLogicPersistentDataBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5aefc30

CustomLogic_CustomLogicPersistentDataBuiltin_o *
CustomLogic_CustomLogicPersistentDataBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_07546eac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin);
    Il2CppMethodInitialized_07546eac = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicPersistentDataBuiltin constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = (CustomLogic_BuiltinClassInstance_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin);
  if (Il2CppMethodInitialized_07546ea3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546ea3 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
  return (CustomLogic_CustomLogicPersistentDataBuiltin_o *)__this;
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x5af0b20

void CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07546eb6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546eb6 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields->__9 =
       (CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_o *)__this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields->__9);
  return;
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x5af0b90

void CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetProperty>b__2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_____CreateMethodBinding__SetProperty_b__2_0 (CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPersistentDataBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5af0ba0

Il2CppObject *
CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_____CreateMethodBinding__SetProperty_b__2_0
          (CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPersistentDataBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *property;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07546eb7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546eb7 = '\x01';
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
      CustomLogic_CustomLogicPersistentDataBuiltin__SetProperty(property,__a->m_Items[1],method_00);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetProperty>b__3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_____CreateMethodBinding__GetProperty_b__3_0 (CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPersistentDataBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5af0c40

Il2CppObject *
CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_____CreateMethodBinding__GetProperty_b__3_0
          (CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPersistentDataBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *key;
  Il2CppObject *pIVar1;
  
  if (Il2CppMethodInitialized_07546eb8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546eb8 = '\x01';
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
      if (Il2CppMethodInitialized_07546ea5 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_CollectionExtensions_GetValueOrDefault_string_object
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
        Il2CppMethodInitialized_07546ea5 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      pIVar1 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__34a73c0
                         ((System_Collections_Generic_IReadOnlyDictionary_TKey__TValue__o *)
                          TypeInfo_CustomLogic_CustomLogicManager->static_fields->PersistentData,
                          (Il2CppObject *)key,pIVar1,
                          (MethodInfo_34A73C0 *)
                          MethodInfo_System_Collections_Generic_CollectionExtensions_GetValueOrDefault_string_object
                         );
      return pIVar1;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings.<>c$$<__CreateMethodBinding__LoadFromFile>b__4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_____CreateMethodBinding__LoadFromFile_b__4_0 (CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPersistentDataBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5af0d40

Il2CppObject *
CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_____CreateMethodBinding__LoadFromFile_b__4_0
          (CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPersistentDataBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool encrypted;
  System_String_o *fileName;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07546eb9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546eb9 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    fileName = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (obj,(MethodInfo_34BDE00 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((__a->max_length & 0xfffffffe) != 0) {
      encrypted = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                            (__a->m_Items[1],
                             (MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool)
      ;
      CustomLogic_CustomLogicPersistentDataBuiltin__LoadFromFile(fileName,encrypted,method_00);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings.<>c$$<__CreateMethodBinding__SaveToFile>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_____CreateMethodBinding__SaveToFile_b__5_0 (CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPersistentDataBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5af0e00

Il2CppObject *
CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_____CreateMethodBinding__SaveToFile_b__5_0
          (CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPersistentDataBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool encrypted;
  System_String_o *fileName;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07546eba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546eba = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    fileName = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (obj,(MethodInfo_34BDE00 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((__a->max_length & 0xfffffffe) != 0) {
      encrypted = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                            (__a->m_Items[1],
                             (MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool)
      ;
      CustomLogic_CustomLogicPersistentDataBuiltin__SaveToFile(fileName,encrypted,method_00);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings.<>c$$<__CreateMethodBinding__Clear>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_____CreateMethodBinding__Clear_b__6_0 (CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPersistentDataBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5af0ec0

Il2CppObject *
CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_____CreateMethodBinding__Clear_b__6_0
          (CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPersistentDataBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if (Il2CppMethodInitialized_07546ea8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_Clear);
    Il2CppMethodInitialized_07546ea8 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                TypeInfo_CustomLogic_CustomLogicManager->static_fields->PersistentData;
  }
  else {
    __this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->static_fields + 0xa0);
  }
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_object__object___Clear
            (__this_00,
             (MethodInfo_4AAD690 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Clear);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsValidFileName>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_____CreateMethodBinding__IsValidFileName_b__7_0 (CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPersistentDataBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5af0f60

Il2CppObject *
CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_____CreateMethodBinding__IsValidFileName_b__7_0
          (CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPersistentDataBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *fileName;
  Il2CppObject *pIVar1;
  undefined1 local_9;
  
  if (Il2CppMethodInitialized_07546ebb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546ebb = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  pIVar1 = __a->m_Items[0];
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fileName = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (pIVar1,(MethodInfo_34BDE00 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if (Il2CppMethodInitialized_07546ea9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_07546ea9 = '\x01';
  }
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  local_9 = Utility_Util__IsValidFileName(fileName,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_075566f0,&local_9);
  return pIVar1;
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings.<>c$$<__CreateMethodBinding__FileExists>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_____CreateMethodBinding__FileExists_b__8_0 (CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPersistentDataBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5af1040

Il2CppObject *
CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_____CreateMethodBinding__FileExists_b__8_0
          (CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPersistentDataBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *fileName;
  Il2CppObject *pIVar1;
  MethodInfo *method_00;
  undefined1 local_9;
  
  if (Il2CppMethodInitialized_07546ebc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546ebc = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  pIVar1 = __a->m_Items[0];
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string;
  fileName = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (pIVar1,(MethodInfo_34BDE00 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  local_9 = CustomLogic_CustomLogicPersistentDataBuiltin__FileExists(fileName,method_00);
  pIVar1 = il2cpp_vm_Object_Box(g_data_075566f0,&local_9);
  return pIVar1;
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicPersistentDataBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5aefd50

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicPersistentDataBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *pCVar3;
  System_String_o *pSVar4;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c *pCVar5;
  
  if (Il2CppMethodInitialized_07546ead == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"IsValidFileName");
    il2cpp_codegen_initialize_runtime_metadata(&"SetProperty");
    il2cpp_codegen_initialize_runtime_metadata(&"GetProperty");
    il2cpp_codegen_initialize_runtime_metadata(&"Clear");
    il2cpp_codegen_initialize_runtime_metadata(&"SaveToFile");
    il2cpp_codegen_initialize_runtime_metadata(&"FileExists");
    il2cpp_codegen_initialize_runtime_metadata(&"LoadFromFile");
    Il2CppMethodInitialized_07546ead = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x38dfc974) {
    if (uVar2 == 0x4a57fc2) {
      bVar1 = System_String__op_Equality(name,"Clear",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
            0) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings);
          pCVar3 = CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__Clear
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__Clear
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xb488604) {
      bVar1 = System_String__op_Equality(name,"IsValidFileName",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
            0) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings);
          pCVar3 = CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__IsValidFileName
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__IsValidFileName
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x38dfc973) {
      bVar1 = System_String__op_Equality(name,"FileExists",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
            0) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings);
          pCVar3 = CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__FileExists
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__FileExists
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0x8f246a28) {
    if (uVar2 == 0x8f246a27) {
      bVar1 = System_String__op_Equality(name,"SaveToFile",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
            0) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings);
          pCVar3 = CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__SaveToFile
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__SaveToFile
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x3fc653c7) {
      bVar1 = System_String__op_Equality(name,"LoadFromFile",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
            0) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings);
          pCVar3 = CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__LoadFromFile
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__LoadFromFile
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 == 0xb6e34446) {
    bVar1 = System_String__op_Equality(name,"GetProperty",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
         ) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings;
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings);
        pCVar3 = CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__GetProperty
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
      pCVar3 = CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__GetProperty
                         ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xecbfdf0a) {
    bVar1 = System_String__op_Equality(name,"SetProperty",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
         ) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings;
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings);
        pCVar3 = CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__SetProperty
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
      pCVar3 = CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__SetProperty
                         ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicPersistentDataBuiltin not found");
  pSVar4 = System_String__Concat_5301f10(pSVar4,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar4,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings$$__CreateMethodBinding__SetProperty
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o* CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__SetProperty (const MethodInfo* method);
// 0x5af00c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5af00f5: jmp 0x5af0165

CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *
CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__SetProperty(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicPersistentDataBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546eae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicPersistentDataBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c___CreateMethodBinding__SetProperty_b__2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546eae = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__2_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__2_0;
  }
  if (__this == (System_Func_CustomLogicPersistentDataBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicPersistentDataBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c___CreateMethodBinding__SetProperty_b__2
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields;
    pCVar2->__9__2_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__2_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin)
  ;
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings$$__CreateMethodBinding__GetProperty
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o* CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__GetProperty (const MethodInfo* method);
// 0x5af0200
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5af0235: jmp 0x5af02a5

CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *
CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__GetProperty(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicPersistentDataBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546eaf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicPersistentDataBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c___CreateMethodBinding__GetProperty_b__3
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546eaf = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__3_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__3_0;
  }
  if (__this == (System_Func_CustomLogicPersistentDataBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicPersistentDataBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c___CreateMethodBinding__GetProperty_b__3
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields;
    pCVar2->__9__3_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__3_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin)
  ;
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings$$__CreateMethodBinding__LoadFromFile
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o* CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__LoadFromFile (const MethodInfo* method);
// 0x5af0340
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5af0375: jmp 0x5af03e5

CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *
CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__LoadFromFile(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicPersistentDataBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546eb0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicPersistentDataBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c___CreateMethodBinding__LoadFromFile_b__4
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546eb0 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__4_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__4_0;
  }
  if (__this == (System_Func_CustomLogicPersistentDataBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicPersistentDataBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c___CreateMethodBinding__LoadFromFile_b__4
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields;
    pCVar2->__9__4_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__4_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin)
  ;
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings$$__CreateMethodBinding__SaveToFile
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o* CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__SaveToFile (const MethodInfo* method);
// 0x5af0480
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5af04b5: jmp 0x5af0525

CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *
CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__SaveToFile(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicPersistentDataBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546eb1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicPersistentDataBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c___CreateMethodBinding__SaveToFile_b__5_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546eb1 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__5_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__5_0;
  }
  if (__this == (System_Func_CustomLogicPersistentDataBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicPersistentDataBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c___CreateMethodBinding__SaveToFile_b__5_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields;
    pCVar2->__9__5_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__5_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin)
  ;
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings$$__CreateMethodBinding__Clear
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o* CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__Clear (const MethodInfo* method);
// 0x5af05c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5af05f5: jmp 0x5af0665

CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *
CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__Clear(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicPersistentDataBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546eb2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicPersistentDataBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c___CreateMethodBinding__Clear_b__6_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546eb2 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__6_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__6_0;
  }
  if (__this == (System_Func_CustomLogicPersistentDataBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicPersistentDataBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c___CreateMethodBinding__Clear_b__6_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields;
    pCVar2->__9__6_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__6_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin)
  ;
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings$$__CreateMethodBinding__IsValidFileName
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o* CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__IsValidFileName (const MethodInfo* method);
// 0x5af0700
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5af0735: jmp 0x5af07a5

CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *
CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__IsValidFileName
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicPersistentDataBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546eb3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicPersistentDataBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c___CreateMethodBinding__IsValidFileName_b
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546eb3 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__7_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__7_0;
  }
  if (__this == (System_Func_CustomLogicPersistentDataBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicPersistentDataBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c___CreateMethodBinding__IsValidFileName_b
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields;
    pCVar2->__9__7_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__7_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin)
  ;
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings$$__CreateMethodBinding__FileExists
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o* CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__FileExists (const MethodInfo* method);
// 0x5af0840
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5af0875: jmp 0x5af08e5

CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *
CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__FileExists(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicPersistentDataBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546eb4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicPersistentDataBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c___CreateMethodBinding__FileExists_b__8_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546eb4 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__8_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__8_0;
  }
  if (__this == (System_Func_CustomLogicPersistentDataBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicPersistentDataBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c___CreateMethodBinding__FileExists_b__8_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields;
    pCVar2->__9__8_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__8_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin)
  ;
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x5af0980

void CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07546eb5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"IsValidFileName");
    il2cpp_codegen_initialize_runtime_metadata(&"SetProperty");
    il2cpp_codegen_initialize_runtime_metadata(&"GetProperty");
    il2cpp_codegen_initialize_runtime_metadata(&"Clear");
    il2cpp_codegen_initialize_runtime_metadata(&"SaveToFile");
    il2cpp_codegen_initialize_runtime_metadata(&"FileExists");
    il2cpp_codegen_initialize_runtime_metadata(&"LoadFromFile");
    Il2CppMethodInitialized_07546eb5 = '\x01';
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
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LoadFromFile",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SaveToFile",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Clear",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsValidFileName",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FileExists",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicPersistentDataBuiltin.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicPersistentDataBuiltin___c___cctor (const MethodInfo* method);
// 0x5af10e0

void CustomLogic_CustomLogicPersistentDataBuiltin___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07546ebd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_c);
    Il2CppMethodInitialized_07546ebd = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_c->static_fields->__9 =
       (CustomLogic_CustomLogicPersistentDataBuiltin___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_c->static_fields->__9);
  return;
}


// CustomLogic.CustomLogicPersistentDataBuiltin.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicPersistentDataBuiltin___c___ctor (CustomLogic_CustomLogicPersistentDataBuiltin___c_o* __this, const MethodInfo* method);
// 0x5af1150

void CustomLogic_CustomLogicPersistentDataBuiltin___c___ctor
               (CustomLogic_CustomLogicPersistentDataBuiltin___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPersistentDataBuiltin.<>c$$<SaveToFile>b__4_0
// il2cpp: System_DateTime_o CustomLogic_CustomLogicPersistentDataBuiltin___c___SaveToFile_b__4_0 (CustomLogic_CustomLogicPersistentDataBuiltin___c_o* __this, System_IO_FileInfo_o* x, const MethodInfo* method);
// 0x5af1160

System_DateTime_o
CustomLogic_CustomLogicPersistentDataBuiltin___c___SaveToFile_b__4_0
          (CustomLogic_CustomLogicPersistentDataBuiltin___c_o *__this,System_IO_FileInfo_o *x,
          MethodInfo *method)

{
  System_DateTime_o SVar1;
  
  if (x == (System_IO_FileInfo_o *)0x0) {
    ThrowNullReferenceException();
  }
  SVar1 = System_IO_FileSystemInfo__get_LastWriteTime((System_IO_FileSystemInfo_o *)x,(MethodInfo *)0x0);
  return (System_DateTime_o)SVar1.fields._dateData;
}


// CustomLogic.CustomLogicPersistentDataBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicPersistentDataBuiltin___ctor (CustomLogic_CustomLogicPersistentDataBuiltin_o* __this, const MethodInfo* method);
// 0x5aee700

void CustomLogic_CustomLogicPersistentDataBuiltin___ctor
               (CustomLogic_CustomLogicPersistentDataBuiltin_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546ea3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546ea3 = '\x01';
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


// CustomLogic.CustomLogicPersistentDataBuiltin$$SetProperty
// il2cpp: void CustomLogic_CustomLogicPersistentDataBuiltin__SetProperty (System_String_o* property, Il2CppObject* value, const MethodInfo* method);
// 0x5aee770

void CustomLogic_CustomLogicPersistentDataBuiltin__SetProperty
               (System_String_o *property,Il2CppObject *value,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  Il2CppClass *pIVar1;
  System_Exception_o *__this_00;
  System_String_o *message;
  MethodInfo *lastManagedFrame;
  
  if (Il2CppMethodInitialized_07546ea4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
    Il2CppMethodInitialized_07546ea4 = '\x01';
  }
  if ((((value != (Il2CppObject *)0x0) && (pIVar1 = value->klass, pIVar1 != g_data_07556740)) &&
      (pIVar1 != g_data_07556710)) && ((pIVar1 != g_data_07556758 && (pIVar1 != g_data_075566f0)))) {
    pIVar1 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this_00 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar1);
    message = il2cpp_codegen_get_runtime_metadata(&"PersistentData.SetProperty only supports null, float, int, string, or bool values.");
    System_Exception___ctor_54fa440(__this_00,message,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicPersistentDataBuiltin_SetProperty);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_CustomLogic_CustomLogicManager->static_fields->PersistentData;
  if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_object__object___set_Item
            (__this,(Il2CppObject *)property,value,
             (MethodInfo_4AAD4C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
  return;
}


// CustomLogic.CustomLogicPersistentDataBuiltin$$GetProperty
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPersistentDataBuiltin__GetProperty (System_String_o* property, Il2CppObject* defaultValue, const MethodInfo* method);
// 0x5aee870

Il2CppObject *
CustomLogic_CustomLogicPersistentDataBuiltin__GetProperty
          (System_String_o *property,Il2CppObject *defaultValue,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (Il2CppMethodInitialized_07546ea5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_CollectionExtensions_GetValueOrDefault_string_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_07546ea5 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  pIVar1 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__34a73c0
                     ((System_Collections_Generic_IReadOnlyDictionary_TKey__TValue__o *)
                      TypeInfo_CustomLogic_CustomLogicManager->static_fields->PersistentData,
                      (Il2CppObject *)property,defaultValue,
                      (MethodInfo_34A73C0 *)
                      MethodInfo_System_Collections_Generic_CollectionExtensions_GetValueOrDefault_string_object
                     );
  return pIVar1;
}


// CustomLogic.CustomLogicPersistentDataBuiltin$$LoadFromFile
// il2cpp: void CustomLogic_CustomLogicPersistentDataBuiltin__LoadFromFile (System_String_o* fileName, bool encrypted, const MethodInfo* method);
// 0x5aee8f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5aeed4a: jmp 0x5aeee1b

void CustomLogic_CustomLogicPersistentDataBuiltin__LoadFromFile
               (System_String_o *fileName,bool encrypted,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_String_o *a;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  bool bVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  SimpleAES_o *__this_00;
  SimpleJSONFixed_JSONNode_o *__this_01;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  System_String_array *pSVar6;
  Il2CppClass *pIVar7;
  System_Exception_o *__this_02;
  MethodInfo *lastManagedFrame;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o local_110;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_c8;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_78;
  
  if (Il2CppMethodInitialized_07546ea6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_FolderPaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_Path);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleAES);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&"int");
    il2cpp_codegen_initialize_runtime_metadata(&"string");
    il2cpp_codegen_initialize_runtime_metadata(&"bool");
    il2cpp_codegen_initialize_runtime_metadata(&".txt");
    il2cpp_codegen_initialize_runtime_metadata(&"float");
    il2cpp_codegen_initialize_runtime_metadata(&"1");
    Il2CppMethodInitialized_07546ea6 = '\x01';
  }
  local_78.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_78.m_Array.fields._index = 0;
  local_78.m_Array.fields._version = 0;
  local_78.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_78.m_Object.fields._getEnumeratorRetType = 0;
  local_78.m_Object.fields._36_4_ = 0;
  local_78.m_Object.fields._version = 0;
  local_78.m_Object.fields._index = 0;
  local_78.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_78.type = 0;
  local_78._4_4_ = 0;
  local_78.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_78.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_c8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_c8.m_Array.fields._index = 0;
  local_c8.m_Array.fields._version = 0;
  local_c8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_c8.m_Object.fields._getEnumeratorRetType = 0;
  local_c8.m_Object.fields._36_4_ = 0;
  local_c8.m_Object.fields._version = 0;
  local_c8.m_Object.fields._index = 0;
  local_c8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_c8.type = 0;
  local_c8._4_4_ = 0;
  local_c8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_c8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_CustomLogic_CustomLogicManager->static_fields->PersistentData;
  if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_05aeee2d:
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_object__object___Clear
            (pSVar1,(MethodInfo_4AAD690 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Clear
            );
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  bVar2 = Utility_Util__IsValidFileName(fileName,(MethodInfo *)0x0);
  if (!bVar2) {
    pIVar7 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this_02 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar7);
    pSVar4 = il2cpp_codegen_get_runtime_metadata(&"PersistentData.LoadFromFile only supports legal fileName characters.");
    System_Exception___ctor_54fa440(__this_02,pSVar4,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicPersistentDataBuiltin_LoadFromFile);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_02,lastManagedFrame);
  }
  if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
  }
  pSVar4 = TypeInfo_Utility_FolderPaths->static_fields->PersistentData;
  pSVar3 = System_String__Concat_52f0320(fileName,".txt",(MethodInfo *)0x0);
  if ((TypeInfo_System_IO_Path->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_IO_Path);
  }
  pSVar4 = System_IO_Path__Combine(pSVar4,pSVar3,(MethodInfo *)0x0);
  bVar2 = System_IO_File__Exists(pSVar4,(MethodInfo *)0x0);
  if (bVar2) {
    pSVar4 = System_IO_File__ReadAllText(pSVar4,(MethodInfo *)0x0);
    if (encrypted) {
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleAES);
      SimpleAES___ctor(__this_00,(MethodInfo *)0x0);
      if (__this_00 == (SimpleAES_o *)0x0) goto label_05aeee2d;
      pSVar4 = SimpleAES__Decrypt(__this_00,pSVar4,(MethodInfo *)0x0);
    }
    __this_01 = SimpleJSONFixed_JSON__Parse(pSVar4,(MethodInfo *)0x0);
    if (__this_01 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05aeee2d;
    SimpleJSONFixed_JSONNode__get_Keys(&local_110,__this_01,(MethodInfo *)0x0);
    local_c8.m_Array.fields._current = local_110.fields.m_Enumerator.fields.m_Array.fields._current;
    local_c8._4_4_ = local_110.fields.m_Enumerator.fields._4_4_;
    local_c8.type = local_110.fields.m_Enumerator.fields.type;
    local_c8.m_Array.fields._list = local_110.fields.m_Enumerator.fields.m_Array.fields._list;
    local_c8.m_Array.fields._index = local_110.fields.m_Enumerator.fields.m_Array.fields._index;
    local_c8.m_Array.fields._version = local_110.fields.m_Enumerator.fields.m_Array.fields._version;
    local_c8.m_Object.fields._current.fields.value =
         local_110.fields.m_Enumerator.fields.m_Object.fields._current.fields.value;
    local_c8.m_Object.fields._getEnumeratorRetType =
         local_110.fields.m_Enumerator.fields.m_Object.fields._getEnumeratorRetType;
    local_c8.m_Object.fields._36_4_ = local_110.fields.m_Enumerator.fields.m_Object.fields._36_4_;
    local_c8.m_Object.fields._version = local_110.fields.m_Enumerator.fields.m_Object.fields._version;
    local_c8.m_Object.fields._index = local_110.fields.m_Enumerator.fields.m_Object.fields._index;
    local_c8.m_Object.fields._current.fields.key =
         local_110.fields.m_Enumerator.fields.m_Object.fields._current.fields.key;
    local_c8.m_Object.fields._dictionary = local_110.fields.m_Enumerator.fields.m_Object.fields._dictionary;
    SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
              ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_78,
               (SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_c8,(MethodInfo *)0x0);
    bVar2 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                      ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_78,(MethodInfo *)0x0);
    if (bVar2) {
      do {
        pSVar4 = SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                           ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_78,(MethodInfo *)0x0);
        pSVar5 = (*(__this_01->klass->vtable)._7_get_Item.methodPtr)
                           (__this_01,pSVar4,(__this_01->klass->vtable)._7_get_Item.method);
        if (((pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
            (pSVar3 = (*(pSVar5->klass->vtable)._9_get_Value.methodPtr)
                                (pSVar5,(pSVar5->klass->vtable)._9_get_Value.method),
            pSVar3 == (System_String_o *)0x0)) ||
           (pSVar6 = System_String__Split(pSVar3,0x3a,0,(MethodInfo *)0x0),
           pSVar6 == (System_String_array *)0x0)) goto label_05aeee2d;
        if ((int)pSVar6->max_length == 0) {
          ThrowIndexOutOfRangeException();
        }
        a = pSVar6->m_Items[0];
        if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
        }
        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                 TypeInfo_CustomLogic_CustomLogicManager->static_fields->PersistentData;
        bVar2 = System_String__op_Equality(a,"float",(MethodInfo *)0x0);
        if (bVar2) {
          pSVar3 = System_String__Substring_53042f0
                             (pSVar3,6,(pSVar3->fields)._stringLength + -6,(MethodInfo *)0x0);
          local_110.fields.m_Enumerator.fields.type = (int32_t)System_Single__Parse(pSVar3,(MethodInfo *)0x0);
          pIVar7 = g_data_07556740;
label_05aeed06:
          pSVar3 = (System_String_o *)il2cpp_vm_Object_Box(pIVar7,&local_110);
        }
        else {
          bVar2 = System_String__op_Equality(a,"int",(MethodInfo *)0x0);
          if (bVar2) {
            pSVar3 = System_String__Substring_53042f0
                               (pSVar3,4,(pSVar3->fields)._stringLength + -4,(MethodInfo *)0x0);
            local_110.fields.m_Enumerator.fields.type = System_Int32__Parse(pSVar3,(MethodInfo *)0x0);
            pIVar7 = g_data_07556710;
            goto label_05aeed06;
          }
          bVar2 = System_String__op_Equality(a,"string",(MethodInfo *)0x0);
          if (bVar2) {
            pSVar3 = System_String__Substring_53042f0
                               (pSVar3,7,(pSVar3->fields)._stringLength + -7,(MethodInfo *)0x0);
          }
          else {
            bVar2 = System_String__op_Equality(a,"bool",(MethodInfo *)0x0);
            if (bVar2) {
              pSVar3 = System_String__Substring_53042f0
                                 (pSVar3,5,(pSVar3->fields)._stringLength + -5,(MethodInfo *)0x0);
              bVar2 = System_String__op_Equality(pSVar3,"1",(MethodInfo *)0x0);
              local_110.fields.m_Enumerator.fields.type =
                   CONCAT31(local_110.fields.m_Enumerator.fields.type._1_3_,bVar2);
              pIVar7 = g_data_075566f0;
              goto label_05aeed06;
            }
            if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
            }
            __this = (System_Collections_Generic_Dictionary_object__object__o *)
                     TypeInfo_CustomLogic_CustomLogicManager->static_fields->PersistentData;
            if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05aeee2d;
            pSVar3 = (System_String_o *)
                     System_Collections_Generic_Dictionary_object__object___get_Item
                               (__this,(Il2CppObject *)pSVar4,
                                (MethodInfo_4AAD450 *)
                                MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Item);
          }
        }
        if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05aeee2d;
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar1,(Il2CppObject *)pSVar4,(Il2CppObject *)pSVar3,
                   (MethodInfo_4AAD4C0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
        bVar2 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                          ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_78,(MethodInfo *)0x0);
      } while (bVar2);
    }
  }
  return;
}


// CustomLogic.CustomLogicPersistentDataBuiltin$$SaveToFile
// il2cpp: void CustomLogic_CustomLogicPersistentDataBuiltin__SaveToFile (System_String_o* fileName, bool encrypted, const MethodInfo* method);
// 0x5aeee80
// eh: try 0x5aef1aa..0x5aef40e -> pad 0x5aef8ee (+14 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5aef6af..0x5aef82b -> pad 0x5aef93f (+2 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5aef82b..0x5aef830 -> pad 0x5aef8ea catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5aef830..0x5aef83a -> pad 0x5aef8e6 (+1 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5aef83a..0x5aef853 -> pad 0x5aef8d8 (+3 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5aef906..0x5aef90b -> pad 0x5aef930 cleanup
// eh: try 0x5aef933..0x5aef93d -> pad 0x5aef97a catch (...) [compiler noexcept guard]
// eh: try 0x5aef95b..0x5aef960 -> pad 0x5aef965 cleanup
// eh: try 0x5aef968..0x5aef972 -> pad 0x5aef97a catch (...) [compiler noexcept guard]
// asm: 65 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5aef491: lea rbp, [rip + 0x1788fc0]  ; TypeInfo_Utility_FolderPaths
// asm:   0x5aef529: jmp 0x5aef543
// asm:   0x5aef69e: nop 
// asm:   0x5aef8ba: mov rdi, r15
// asm:   0x5aef8bd: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5aef8c2: jmp 0x5aef8ee
// asm:   0x5aef8c4: jmp 0x5aef8ee
// asm:   0x5aef8c6: jmp 0x5aef8ee
// asm:   0x5aef8c8: jmp 0x5aef8ee
// asm:   0x5aef8ca: jmp 0x5aef8ee
// asm:   0x5aef8cc: jmp 0x5aef8ee
// asm:   0x5aef8ce: jmp 0x5aef8ee
// asm:   0x5aef8d0: jmp 0x5aef8ee
// asm:   0x5aef8d2: jmp 0x5aef8ee
// asm:   0x5aef8d4: jmp 0x5aef8ee
// asm:   0x5aef8d6: jmp 0x5aef8ee
// asm:   0x5aef8d8: jmp 0x5aef8ee
// asm:   0x5aef8da: jmp 0x5aef8ee
// asm:   0x5aef8dc: jmp 0x5aef8ee
// asm:   0x5aef8de: jmp 0x5aef8ee
// asm:   0x5aef8e0: jmp 0x5aef8ee
// asm:   0x5aef8e2: jmp 0x5aef8ee
// asm:   0x5aef8e4: jmp 0x5aef941
// asm:   0x5aef8e6: jmp 0x5aef941
// asm:   0x5aef8e8: jmp 0x5aef8ee
// asm:   0x5aef8ea: jmp 0x5aef8ee
// asm:   0x5aef8ec: jmp 0x5aef941
// asm:   0x5aef8ee: mov rbp, rax
// asm:   0x5aef8f1: cmp edx, 1
// asm:   0x5aef8f4: jne 0x5aef933
// asm:   0x5aef8f6: mov rdi, rbp
// asm:   0x5aef8f9: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5aef8fe: mov rbx, qword ptr [rax]
// asm:   0x5aef901: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5aef906: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5aef90b: lea rax, [rip + 0x17a07d6]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_object_Dispose
// asm:   0x5aef912: mov rsi, qword ptr [rax]
// asm:   0x5aef915: lea rdi, [rsp + 0x30]
// asm:   0x5aef91a: call 0x4de7070  ; System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose()
// asm:   0x5aef91f: test rbx, rbx
// asm:   0x5aef922: je 0x5aef427
// asm:   0x5aef928: mov rdi, rbx
// asm:   0x5aef92b: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5aef930: mov rbp, rax
// asm:   0x5aef933: lea rdi, [rsp + 0x18]
// asm:   0x5aef938: call 0x2fd64d0  ; il2cpp_runtime_helper_02fd64d0()
// asm:   0x5aef93d: jmp 0x5aef972
// asm:   0x5aef93f: jmp 0x5aef941
// asm:   0x5aef941: mov rbp, rax
// asm:   0x5aef944: cmp edx, 1
// asm:   0x5aef947: jne 0x5aef968
// asm:   0x5aef949: mov rdi, rbp
// asm:   0x5aef94c: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5aef951: mov r15, qword ptr [rax]
// asm:   0x5aef954: mov qword ptr [rsp + 0x18], r15
// asm:   0x5aef959: xor ebx, ebx
// asm:   0x5aef95b: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5aef960: jmp 0x5aef782
// asm:   0x5aef965: mov rbp, rax
// asm:   0x5aef968: lea rdi, [rsp + 0x18]
// asm:   0x5aef96d: call 0x2fd6500  ; il2cpp_runtime_helper_02fd6500()
// asm:   0x5aef972: mov rdi, rbp
// asm:   0x5aef975: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5aef97a: mov rdi, rax
// asm:   0x5aef97d: call 0x2ab61e0  ; __clang_call_terminate()

void CustomLogic_CustomLogicPersistentDataBuiltin__SaveToFile
               (System_String_o *fileName,bool encrypted,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  System_String_o *str0;
  bool bVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  SimpleJSONFixed_JSONObject_o *__this;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_00;
  Il2CppObject *pIVar6;
  char *pcVar7;
  System_String_o **ppSVar8;
  SimpleJSONFixed_JSONString_o *pSVar9;
  System_String_o *pSVar10;
  SimpleAES_o *__this_01;
  System_IO_DirectoryInfo_o *__this_02;
  System_IO_FileInfo_array *source;
  CustomLogic_CustomLogicPersistentDataBuiltin___c_StaticFields *pCVar11;
  System_Func_T__TResult__o *__this_03;
  System_Linq_IOrderedEnumerable_TSource__o *source_00;
  VirtualInvokeData *pVVar12;
  Il2CppClass *pIVar13;
  System_Exception_o *__this_04;
  MethodInfo *lastManagedFrame;
  ulong uVar14;
  undefined7 in_register_00000031;
  long lVar15;
  Il2CppObject *local_80;
  undefined4 local_74;
  undefined1 local_70 [16];
  System_String_o *local_60;
  undefined1 local_58 [8];
  undefined1 *puStack_50;
  System_String_o *local_48;
  System_String_o *local_38;
  
  if (Il2CppMethodInitialized_07546ea7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_DirectoryInfo);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_OrderByDescending_FileInfo_DateTime);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Skip_FileInfo);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_object_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_object_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_object_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_FolderPaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_FileInfo_DateTime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_FileInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_FileInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONString);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_object_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_Path);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleAES);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicPersistentDataBuiltin_c_SaveToFile_b__4_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_c);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&"int:");
    il2cpp_codegen_initialize_runtime_metadata(&"bool:");
    il2cpp_codegen_initialize_runtime_metadata(&".txt");
    il2cpp_codegen_initialize_runtime_metadata(&"float:");
    il2cpp_codegen_initialize_runtime_metadata(&"string:");
    il2cpp_codegen_initialize_runtime_metadata(&"1");
    il2cpp_codegen_initialize_runtime_metadata(&"0");
    Il2CppMethodInitialized_07546ea7 = '\x01';
  }
  local_58 = (undefined1  [8])0x0;
  puStack_50 = (undefined1 *)0x0;
  local_48 = (System_String_o *)0x0;
  local_80 = (Il2CppObject *)0x0;
  if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
  }
  System_IO_Directory__CreateDirectory
            (TypeInfo_Utility_FolderPaths->static_fields->PersistentData,(MethodInfo *)0x0);
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  bVar3 = Utility_Util__IsValidFileName(fileName,(MethodInfo *)0x0);
  if (bVar3) {
    if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
    }
    pSVar5 = TypeInfo_Utility_FolderPaths->static_fields->PersistentData;
    pSVar4 = System_String__Concat_52f0320(fileName,".txt",(MethodInfo *)0x0);
    if ((TypeInfo_System_IO_Path->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_IO_Path);
    }
    pSVar5 = System_IO_Path__Combine(pSVar5,pSVar4,(MethodInfo *)0x0);
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
    SimpleJSONFixed_JSONObject___ctor(__this,(MethodInfo *)0x0);
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_CustomLogic_CustomLogicManager->static_fields->PersistentData;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      local_74 = (undefined4)CONCAT71(in_register_00000031,encrypted);
      local_38 = pSVar5;
      __this_00 = System_Collections_Generic_Dictionary_object__object___get_Keys
                            (pSVar1,(MethodInfo_4AAD0F0 *)
                                    MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Keys);
      if (__this_00 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) {
        System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
                  ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_70,
                   __this_00,
                   (MethodInfo_511A520 *)
                   MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_object_GetEnumerator)
        ;
        local_48 = local_60;
        local_58 = (undefined1  [8])local_70._0_8_;
        puStack_50 = (undefined1 *)local_70._8_8_;
        local_70._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
        local_70._8_8_ = local_58;
        while (bVar3 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                                 ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                                   *)local_58,
                                  (MethodInfo_4CE7080 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_object_MoveNext
                                 ), pSVar5 = local_48, bVar3) {
          if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
          }
          pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                   TypeInfo_CustomLogic_CustomLogicManager->static_fields->PersistentData;
          if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            ThrowNullReferenceException();
          }
          pIVar6 = System_Collections_Generic_Dictionary_object__object___get_Item
                             (pSVar1,(Il2CppObject *)pSVar5,
                              (MethodInfo_4AAD450 *)
                              MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Item);
          str0 = "string:";
          pSVar10 = "int:";
          pSVar4 = "float:";
          if (pIVar6 != (Il2CppObject *)0x0) {
            pIVar13 = pIVar6->klass;
            if (pIVar13 == g_data_07556740) {
              pSVar10 = (System_String_o *)
                        (*g_data_07556740->vtable[3].methodPtr)(pIVar6,g_data_07556740->vtable[3].method);
              pSVar4 = System_String__Concat_52f0320(pSVar4,pSVar10,(MethodInfo *)0x0);
              pSVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONString);
              SimpleJSONFixed_JSONString___ctor(pSVar9,pSVar4,(MethodInfo *)0x0);
              if (__this == (SimpleJSONFixed_JSONObject_o *)0x0) {
                ThrowNullReferenceException();
              }
              (*(__this->klass->vtable)._20_Add.methodPtr)
                        (__this,pSVar5,(SimpleJSONFixed_JSONNode_o *)pSVar9,
                         (__this->klass->vtable)._20_Add.method);
            }
            else if (pIVar13 == g_data_07556710) {
              pSVar4 = (System_String_o *)(*pIVar13->vtable[3].methodPtr)(pIVar6,pIVar13->vtable[3].method);
              pSVar4 = System_String__Concat_52f0320(pSVar10,pSVar4,(MethodInfo *)0x0);
              pSVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONString);
              SimpleJSONFixed_JSONString___ctor(pSVar9,pSVar4,(MethodInfo *)0x0);
              if (__this == (SimpleJSONFixed_JSONObject_o *)0x0) {
                ThrowNullReferenceException();
              }
              (*(__this->klass->vtable)._20_Add.methodPtr)
                        (__this,pSVar5,(SimpleJSONFixed_JSONNode_o *)pSVar9,
                         (__this->klass->vtable)._20_Add.method);
            }
            else if (pIVar13 == g_data_07556758) {
              pSVar4 = (System_String_o *)(*pIVar13->vtable[3].methodPtr)(pIVar6,pIVar13->vtable[3].method);
              pSVar4 = System_String__Concat_52f0320(str0,pSVar4,(MethodInfo *)0x0);
              pSVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONString);
              SimpleJSONFixed_JSONString___ctor(pSVar9,pSVar4,(MethodInfo *)0x0);
              if (__this == (SimpleJSONFixed_JSONObject_o *)0x0) {
                ThrowNullReferenceException();
              }
              (*(__this->klass->vtable)._20_Add.methodPtr)
                        (__this,pSVar5,(SimpleJSONFixed_JSONNode_o *)pSVar9,
                         (__this->klass->vtable)._20_Add.method);
            }
            else if (pIVar13 == g_data_075566f0) {
              pcVar7 = il2cpp_vm_Object_Unbox(pIVar6);
              ppSVar8 = &"1";
              if (*pcVar7 == '\0') {
                ppSVar8 = &"0";
              }
              pSVar4 = System_String__Concat_52f0320("bool:",*ppSVar8,(MethodInfo *)0x0);
              pSVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONString);
              SimpleJSONFixed_JSONString___ctor(pSVar9,pSVar4,(MethodInfo *)0x0);
              if (__this == (SimpleJSONFixed_JSONObject_o *)0x0) {
                ThrowNullReferenceException();
              }
              (*(__this->klass->vtable)._20_Add.methodPtr)
                        (__this,pSVar5,(SimpleJSONFixed_JSONNode_o *)pSVar9,
                         (__this->klass->vtable)._20_Add.method);
            }
          }
        }
        System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                  ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_58,
                   (MethodInfo_4CE7070 *)
                   MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_object_Dispose
                  );
        if (__this != (SimpleJSONFixed_JSONObject_o *)0x0) {
          pSVar5 = (*(__this->klass->vtable)._30_ToString.methodPtr)
                             (__this,4,(__this->klass->vtable)._30_ToString.method);
          if ((char)local_74 != '\0') {
            __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleAES);
            SimpleAES___ctor(__this_01,(MethodInfo *)0x0);
            if (__this_01 == (SimpleAES_o *)0x0) goto label_05aef83f;
            pSVar5 = SimpleAES__Encrypt(__this_01,pSVar5,(MethodInfo *)0x0);
          }
          if (pSVar5 != (System_String_o *)0x0) {
            if (1000000 < (pSVar5->fields)._stringLength) {
              pIVar13 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
              __this_04 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar13);
              ppSVar8 = &"PersistentData.SaveToFile exceeded 1 mb limit.";
              goto label_05aef891;
            }
            if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
            }
            pSVar4 = TypeInfo_Utility_FolderPaths->static_fields->PersistentData;
            __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_IO_DirectoryInfo);
            System_IO_DirectoryInfo___ctor(__this_02,pSVar4,(MethodInfo *)0x0);
            if (__this_02 != (System_IO_DirectoryInfo_o *)0x0) {
              source = System_IO_DirectoryInfo__GetFiles(__this_02,(MethodInfo *)0x0);
              if ((TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_c->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_c);
                pCVar11 = TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_c->static_fields;
                __this_03 = (System_Func_T__TResult__o *)pCVar11->__9__4_0;
              }
              else {
                pCVar11 = TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_c->static_fields;
                __this_03 = (System_Func_T__TResult__o *)pCVar11->__9__4_0;
              }
              if (__this_03 == (System_Func_T__TResult__o *)0x0) {
                if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_c)->_2).
                    cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_c);
                  pCVar11 = TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_c->static_fields;
                }
                pIVar6 = (Il2CppObject *)pCVar11->__9;
                __this_03 = (System_Func_T__TResult__o *)
                            il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_FileInfo_DateTime);
                System_Func_object__DateTime____ctor
                          (__this_03,pIVar6,
                           (intptr_t)
                           MethodInfo_CustomLogic_CustomLogicPersistentDataBuiltin_c_SaveToFile_b__4_0,
                           (MethodInfo_4F19560 *)0x0);
                pCVar11 = TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_c->static_fields;
                pCVar11->__9__4_0 = (System_Func_FileInfo__DateTime__o *)__this_03;
                Il2CppCodeGenWriteBarrier(&pCVar11->__9__4_0);
              }
              source_00 = System_Linq_Enumerable__OrderByDescending_object__DateTime_
                                    ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                                     (System_Func_TSource__TKey__o *)__this_03,
                                     (MethodInfo_34F21E0 *)
                                     MethodInfo_System_Linq_Enumerable_OrderByDescending_FileInfo_DateTime);
              pIVar6 = (Il2CppObject *)
                       System_Linq_Enumerable__Skip_object_
                                 ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,100,
                                  (MethodInfo_34FD7B0 *)MethodInfo_System_Linq_Enumerable_Skip_FileInfo);
              if (pIVar6 != (Il2CppObject *)0x0) {
                pIVar13 = pIVar6->klass;
                uVar14 = (ulong)(pIVar13->_2).interface_offsets_count;
                if (uVar14 != 0) {
                  pIVar2 = (pIVar13->_1).interfaceOffsets;
                  lVar15 = 0;
                  do {
                    if (*(System_Collections_Generic_IEnumerable_FileInfo__c **)
                         ((long)&pIVar2->interfaceType + lVar15) ==
                        TypeInfo_System_Collections_Generic_IEnumerable_FileInfo) {
                      pVVar12 = pIVar13->vtable + *(int *)((long)&pIVar2->offset + lVar15);
                      goto label_05aef631;
                    }
                    lVar15 = lVar15 + 0x10;
                  } while (uVar14 * 0x10 != lVar15);
                }
                pVVar12 = GetInterfaceInvokeDataFromVTableSlowPath
                                    (pIVar6,(Il2CppClass *)
                                            TypeInfo_System_Collections_Generic_IEnumerable_FileInfo,0);
label_05aef631:
                local_80 = (*pVVar12->methodPtr)(pIVar6,pVVar12->method);
                local_70._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
                local_70._8_8_ = &local_80;
                do {
                  pIVar6 = local_80;
                  if (local_80 == (Il2CppObject *)0x0) {
                    ThrowNullReferenceException();
                  }
                  pIVar13 = local_80->klass;
                  uVar14 = (ulong)(pIVar13->_2).interface_offsets_count;
                  if (uVar14 != 0) {
                    pIVar2 = (pIVar13->_1).interfaceOffsets;
                    lVar15 = 0;
                    do {
                      if (*(System_Collections_IEnumerator_c **)((long)&pIVar2->interfaceType + lVar15) ==
                          TypeInfo_System_Collections_IEnumerator) {
                        pVVar12 = pIVar13->vtable + *(int *)((long)&pIVar2->offset + lVar15);
                        goto label_05aef6d3;
                      }
                      lVar15 = lVar15 + 0x10;
                    } while (uVar14 * 0x10 != lVar15);
                  }
                  pVVar12 = GetInterfaceInvokeDataFromVTableSlowPath
                                      (local_80,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05aef6d3:
                  bVar3 = (*pVVar12->methodPtr)(pIVar6,pVVar12->method);
                  pIVar6 = local_80;
                  if (!bVar3) {
                    if (local_80 == (Il2CppObject *)0x0) goto label_05aef7f6;
                    pIVar13 = local_80->klass;
                    uVar14 = (ulong)(pIVar13->_2).interface_offsets_count;
                    if (uVar14 == 0) goto label_05aef7cf;
                    pIVar2 = (pIVar13->_1).interfaceOffsets;
                    lVar15 = 0;
                    goto label_05aef7c0;
                  }
                  if (local_80 == (Il2CppObject *)0x0) {
                    ThrowNullReferenceException();
                  }
                  pIVar13 = local_80->klass;
                  uVar14 = (ulong)(pIVar13->_2).interface_offsets_count;
                  if (uVar14 != 0) {
                    pIVar2 = (pIVar13->_1).interfaceOffsets;
                    lVar15 = 0;
                    do {
                      if (*(System_Collections_Generic_IEnumerator_FileInfo__c **)
                           ((long)&pIVar2->interfaceType + lVar15) ==
                          TypeInfo_System_Collections_Generic_IEnumerator_FileInfo) {
                        pVVar12 = pIVar13->vtable + *(int *)((long)&pIVar2->offset + lVar15);
                        goto label_05aef753;
                      }
                      lVar15 = lVar15 + 0x10;
                    } while (uVar14 * 0x10 != lVar15);
                  }
                  pVVar12 = GetInterfaceInvokeDataFromVTableSlowPath
                                      (local_80,(Il2CppClass *)
                                                TypeInfo_System_Collections_Generic_IEnumerator_FileInfo,0);
label_05aef753:
                  pIVar6 = (*pVVar12->methodPtr)(pIVar6,pVVar12->method);
                  if (pIVar6 == (Il2CppObject *)0x0) {
                    ThrowNullReferenceException();
                  }
                  (*pIVar6->klass->vtable[0xb].methodPtr)(pIVar6,pIVar6->klass->vtable[0xb].method);
                } while( true );
              }
            }
          }
        }
      }
    }
label_05aef83f:
    ThrowNullReferenceException();
  }
  pIVar13 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this_04 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar13);
  ppSVar8 = &"PersistentData.SaveToFile only supports legal fileName characters.";
label_05aef891:
  pSVar5 = il2cpp_codegen_get_runtime_metadata(ppSVar8);
  System_Exception___ctor_54fa440(__this_04,pSVar5,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicPersistentDataBuiltin_SaveToFile);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_04,lastManagedFrame);
  while (lVar15 = lVar15 + 0x10, uVar14 * 0x10 != lVar15) {
label_05aef7c0:
    if (*(System_IDisposable_c **)((long)&pIVar2->interfaceType + lVar15) == TypeInfo_System_IDisposable) {
      pVVar12 = pIVar13->vtable + *(int *)((long)&pIVar2->offset + lVar15);
      goto label_05aef7ed;
    }
  }
label_05aef7cf:
  pVVar12 = GetInterfaceInvokeDataFromVTableSlowPath(local_80,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05aef7ed:
  (*pVVar12->methodPtr)(pIVar6,pVVar12->method);
label_05aef7f6:
  System_IO_File__WriteAllText(local_38,pSVar5,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPersistentDataBuiltin$$Clear
// il2cpp: void CustomLogic_CustomLogicPersistentDataBuiltin__Clear (const MethodInfo* method);
// 0x5aef990

void CustomLogic_CustomLogicPersistentDataBuiltin__Clear(MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  
  if (Il2CppMethodInitialized_07546ea8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_Clear);
    Il2CppMethodInitialized_07546ea8 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_CustomLogic_CustomLogicManager->static_fields->PersistentData;
  }
  else {
    __this = *(System_Collections_Generic_Dictionary_object__object__o **)
              ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->static_fields + 0xa0);
  }
  if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_object__object___Clear
            (__this,(MethodInfo_4AAD690 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Clear
            );
  return;
}


// CustomLogic.CustomLogicPersistentDataBuiltin$$IsValidFileName
// il2cpp: bool CustomLogic_CustomLogicPersistentDataBuiltin__IsValidFileName (System_String_o* fileName, const MethodInfo* method);
// 0x5aefa30

bool CustomLogic_CustomLogicPersistentDataBuiltin__IsValidFileName
               (System_String_o *fileName,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07546ea9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_07546ea9 = '\x01';
    uVar1 = (TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    bVar2 = Utility_Util__IsValidFileName(fileName,(MethodInfo *)0x0);
    return bVar2;
  }
  bVar2 = Utility_Util__IsValidFileName(fileName,(MethodInfo *)0x0);
  return bVar2;
}


// CustomLogic.CustomLogicPersistentDataBuiltin$$FileExists
// il2cpp: bool CustomLogic_CustomLogicPersistentDataBuiltin__FileExists (System_String_o* fileName, const MethodInfo* method);
// 0x5aefaa0

bool CustomLogic_CustomLogicPersistentDataBuiltin__FileExists(System_String_o *fileName,MethodInfo *method)

{
  bool bVar1;
  System_String_o *path2;
  System_String_o *pSVar2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  
  if (Il2CppMethodInitialized_07546eaa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_FolderPaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_Path);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&".txt");
    Il2CppMethodInitialized_07546eaa = '\x01';
  }
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  bVar1 = Utility_Util__IsValidFileName(fileName,(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
    }
    pSVar2 = TypeInfo_Utility_FolderPaths->static_fields->PersistentData;
    path2 = System_String__Concat_52f0320(fileName,".txt",(MethodInfo *)0x0);
    if ((TypeInfo_System_IO_Path->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_IO_Path);
    }
    pSVar2 = System_IO_Path__Combine(pSVar2,path2,(MethodInfo *)0x0);
    bVar1 = System_IO_File__Exists(pSVar2,(MethodInfo *)0x0);
    return bVar1;
  }
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  pSVar2 = il2cpp_codegen_get_runtime_metadata(&"PersistentData.FileExists only supports legal fileName characters.");
  System_Exception___ctor_54fa440(__this,pSVar2,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicPersistentDataBuiltin_FileExists);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicPersistentDataBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicPersistentDataBuiltin__get_ClassName (CustomLogic_CustomLogicPersistentDataBuiltin_o* __this, const MethodInfo* method);
// 0x5aefbd0

System_String_o *
CustomLogic_CustomLogicPersistentDataBuiltin__get_ClassName
          (CustomLogic_CustomLogicPersistentDataBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546eab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"PersistentData");
    Il2CppMethodInitialized_07546eab = '\x01';
  }
  return "PersistentData";
}


// CustomLogic.CustomLogicPersistentDataBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicPersistentDataBuiltin__get_IsAbstract (CustomLogic_CustomLogicPersistentDataBuiltin_o* __this, const MethodInfo* method);
// 0x5aefc00

bool CustomLogic_CustomLogicPersistentDataBuiltin__get_IsAbstract
               (CustomLogic_CustomLogicPersistentDataBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicPersistentDataBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicPersistentDataBuiltin__get_IsStatic (CustomLogic_CustomLogicPersistentDataBuiltin_o* __this, const MethodInfo* method);
// 0x5aefc10

bool CustomLogic_CustomLogicPersistentDataBuiltin__get_IsStatic
               (CustomLogic_CustomLogicPersistentDataBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicPersistentDataBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicPersistentDataBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicPersistentDataBuiltin_o* __this, const MethodInfo* method);
// 0x5aefc20

bool CustomLogic_CustomLogicPersistentDataBuiltin__get_InheritBaseMembers
               (CustomLogic_CustomLogicPersistentDataBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


