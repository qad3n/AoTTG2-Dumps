// Type: CustomLogic.CustomLogicLocaleBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicLocaleBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicLocaleBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicLocaleBuiltin_o* CustomLogic_CustomLogicLocaleBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5ae3e20

CustomLogic_CustomLogicLocaleBuiltin_o *
CustomLogic_CustomLogicLocaleBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_CustomLogicLocaleBuiltin_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_07546e1b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    Il2CppMethodInitialized_07546e1b = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicLocaleBuiltin constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicLocaleBuiltin_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
  CustomLogic_CustomLogicLocaleBuiltin___ctor(__this,method);
  return __this;
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicLocaleBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x5ae5000

void CustomLogic_CustomLogicLocaleBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07546e29 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546e29 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->static_fields->__9 =
       (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->static_fields->__9);
  return;
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicLocaleBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x5ae5070

void CustomLogic_CustomLogicLocaleBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings.<>c$$<__CreateMethodBinding__Get>b__4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_____CreateMethodBinding__Get_b__4_0 (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicLocaleBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5ae5080

Il2CppObject *
CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_____CreateMethodBinding__Get_b__4_0
          (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicLocaleBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *pSVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07546e2a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    Il2CppMethodInitialized_07546e2a = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  obj = __a->m_Items[0];
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string;
  pSVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    pSVar1 = CustomLogic_CustomLogicLocaleBuiltin__Get(pSVar1,method_00);
    return (Il2CppObject *)pSVar1;
  }
  pSVar1 = CustomLogic_CustomLogicLocaleBuiltin__Get(pSVar1,method_00);
  return (Il2CppObject *)pSVar1;
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings.<>c$$<__CreateMethodBinding__Set>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_____CreateMethodBinding__Set_b__5_0 (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicLocaleBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5ae5130

Il2CppObject *
CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_____CreateMethodBinding__Set_b__5_0
          (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicLocaleBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *language;
  System_String_o *key;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_07546e2b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    Il2CppMethodInitialized_07546e2b = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    language = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (obj,(MethodInfo_34BDE00 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((__a->max_length & 0xfffffffe) != 0) {
      key = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (__a->m_Items[1],
                       (MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      if (2 < (uint)__a->max_length) {
        value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (__a->m_Items[2],
                           (MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string)
        ;
        if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
        }
        CustomLogic_CustomLogicLocaleBuiltin__Set(language,key,value,method);
        return (Il2CppObject *)0x0;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings.<>c$$<__CreateMethodBinding__RegisterLanguage>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_____CreateMethodBinding__RegisterLanguage_b__6_0 (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicLocaleBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5ae5230

Il2CppObject *
CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_____CreateMethodBinding__RegisterLanguage_b__6_0
          (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicLocaleBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *language;
  CustomLogic_CustomLogicDictBuiltin_o *strings;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07546e2c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicDictBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    Il2CppMethodInitialized_07546e2c = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    language = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (obj,(MethodInfo_34BDE00 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((__a->max_length & 0xfffffffe) != 0) {
      strings = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (__a->m_Items[1],
                           (MethodInfo_34BDE00 *)
                           MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicDictBuiltin);
      method_00 = extraout_RDX;
      if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
        method_00 = extraout_RDX_00;
      }
      CustomLogic_CustomLogicLocaleBuiltin__RegisterLanguage(language,strings,method_00);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings.<>c$$<__CreateMethodBinding__RegisterLanguages>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_____CreateMethodBinding__RegisterLanguages_b__7_0 (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicLocaleBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5ae5310

Il2CppObject *
CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_____CreateMethodBinding__RegisterLanguages_b__7_0
          (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicLocaleBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *pattern;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07546e2d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    Il2CppMethodInitialized_07546e2d = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  obj = __a->m_Items[0];
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string;
  pattern = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string)
  ;
  if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
  }
  CustomLogic_CustomLogicLocaleBuiltin__RegisterLanguages(pattern,method_00);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings.<>c$$<__CreateMethodBinding__RegisterFallback>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_____CreateMethodBinding__RegisterFallback_b__8_0 (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicLocaleBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5ae53c0

Il2CppObject *
CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_____CreateMethodBinding__RegisterFallback_b__8_0
          (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicLocaleBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *obj;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_String_o *key;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_07546e2e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    Il2CppMethodInitialized_07546e2e = '\x01';
  }
  if (__a == (System_Object_array *)0x0) goto label_05ae5502;
  if ((int)__a->max_length == 0) {
label_05ae5507:
    ThrowIndexOutOfRangeException();
  }
  obj = __a->m_Items[0];
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  key = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                  (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if ((__a->max_length & 0xfffffffe) == 0) goto label_05ae5507;
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__a->m_Items[1],
                     (MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    if (Il2CppMethodInitialized_07546e16 != '\0') goto label_05ae5478;
label_05ae54bf:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
    Il2CppMethodInitialized_07546e16 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (Il2CppMethodInitialized_07546e16 == '\0') goto label_05ae54bf;
label_05ae5478:
    uVar1 = (TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->static_fields->_languageFallbacks;
  }
  else {
    __this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin)->static_fields + 8);
  }
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___set_Item
              (__this_00,(Il2CppObject *)key,(Il2CppObject *)value,
               (MethodInfo_4AAD4C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
    return (Il2CppObject *)0x0;
  }
label_05ae5502:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings.<>c$$<__CreateMethodBinding__RemoveFallback>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_____CreateMethodBinding__RemoveFallback_b__9_0 (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicLocaleBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5ae5510

Il2CppObject *
CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_____CreateMethodBinding__RemoveFallback_b__9_0
          (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicLocaleBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *obj;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_String_o *key;
  
  if (Il2CppMethodInitialized_07546e2f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    Il2CppMethodInitialized_07546e2f = '\x01';
  }
  if (__a == (System_Object_array *)0x0) goto label_05ae5634;
  if ((int)__a->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  obj = __a->m_Items[0];
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  key = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                  (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    if (Il2CppMethodInitialized_07546e17 != '\0') goto label_05ae55ab;
label_05ae55f1:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_Remove);
    Il2CppMethodInitialized_07546e17 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (Il2CppMethodInitialized_07546e17 == '\0') goto label_05ae55f1;
label_05ae55ab:
    uVar1 = (TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->static_fields->_languageFallbacks;
  }
  else {
    __this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin)->static_fields + 8);
  }
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Remove
              (__this_00,(Il2CppObject *)key,
               (MethodInfo_4AAED10 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Remove);
    return (Il2CppObject *)0x0;
  }
label_05ae5634:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicLocaleBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5ae3f00

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicLocaleBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  CustomLogic_CLPropertyBinding_CustomLogicLocaleBuiltin__o *pCVar3;
  CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o *pCVar4;
  System_String_o *pSVar5;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicLocaleBuiltin_Bindings_c *pCVar6;
  
  if (Il2CppMethodInitialized_07546e1c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultLanguage");
    il2cpp_codegen_initialize_runtime_metadata(&"RegisterLanguage");
    il2cpp_codegen_initialize_runtime_metadata(&"CurrentLanguage");
    il2cpp_codegen_initialize_runtime_metadata(&"RegisterLanguages");
    il2cpp_codegen_initialize_runtime_metadata(&"RegisterFallback");
    il2cpp_codegen_initialize_runtime_metadata(&"Set");
    il2cpp_codegen_initialize_runtime_metadata(&"RemoveFallback");
    il2cpp_codegen_initialize_runtime_metadata(&"Get");
    Il2CppMethodInitialized_07546e1c = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x5e1c8cab) {
    if (uVar2 < 0x37915e09) {
      if (uVar2 == 0x28b19ea3) {
        bVar1 = System_String__op_Equality(name,"Set",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings;
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings);
            pCVar4 = CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreateMethodBinding__Set
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
          pCVar4 = CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreateMethodBinding__Set
                             ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0x37915e08) {
        bVar1 = System_String__op_Equality(name,"CurrentLanguage",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings;
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings);
            pCVar3 = CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreatePropertyBinding__CurrentLanguage
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
          pCVar3 = CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreatePropertyBinding__CurrentLanguage
                             ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x5b89647c) {
      bVar1 = System_String__op_Equality(name,"DefaultLanguage",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings);
          pCVar3 = CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreatePropertyBinding__DefaultLanguage
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreatePropertyBinding__DefaultLanguage
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x5e1c8caa) {
      bVar1 = System_String__op_Equality(name,"RegisterLanguage",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings);
          pCVar4 = CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreateMethodBinding__RegisterLanguage
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
        pCVar4 = CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreateMethodBinding__RegisterLanguage
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
  }
  else if (uVar2 < 0x9cbb72c4) {
    if (uVar2 == 0x9cbb72c3) {
      bVar1 = System_String__op_Equality(name,"RemoveFallback",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings);
          pCVar4 = CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreateMethodBinding__RemoveFallback
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
        pCVar4 = CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreateMethodBinding__RemoveFallback
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0x7106e006) {
      bVar1 = System_String__op_Equality(name,"RegisterFallback",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings);
          pCVar4 = CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreateMethodBinding__RegisterFallback
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
        pCVar4 = CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreateMethodBinding__RegisterFallback
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
  }
  else if (uVar2 == 0xb6973ef7) {
    bVar1 = System_String__op_Equality(name,"Get",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings;
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings);
        pCVar4 = CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreateMethodBinding__Get
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
      pCVar4 = CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreateMethodBinding__Get
                         ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings);
      return (CustomLogic_ICLMemberBinding_o *)pCVar4;
    }
  }
  else if (uVar2 == 0xfff1b99b) {
    bVar1 = System_String__op_Equality(name,"RegisterLanguages",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings;
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings);
        pCVar4 = CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreateMethodBinding__RegisterLanguages
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
      pCVar4 = CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreateMethodBinding__RegisterLanguages
                         ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings);
      return (CustomLogic_ICLMemberBinding_o *)pCVar4;
    }
  }
  pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicLocaleBuiltin not found");
  pSVar5 = System_String__Concat_5301f10(pSVar5,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar5,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings$$__CreatePropertyBinding__CurrentLanguage
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLocaleBuiltin__o* CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreatePropertyBinding__CurrentLanguage (const MethodInfo* method);
// 0x5ae42f0

CustomLogic_CLPropertyBinding_CustomLogicLocaleBuiltin__o *
CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreatePropertyBinding__CurrentLanguage(MethodInfo *method)

{
  System_Func_CustomLogicLocaleBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLocaleBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546e1d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings___CreatePropertyBinding__CurrentLanguage_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLocaleBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLocaleBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLocaleBuiltin_object);
    Il2CppMethodInitialized_07546e1d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLocaleBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings___CreatePropertyBinding__CurrentLanguage_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLocaleBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLocaleBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings$$__CreatePropertyBinding__DefaultLanguage
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLocaleBuiltin__o* CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreatePropertyBinding__DefaultLanguage (const MethodInfo* method);
// 0x5ae4390

CustomLogic_CLPropertyBinding_CustomLogicLocaleBuiltin__o *
CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreatePropertyBinding__DefaultLanguage(MethodInfo *method)

{
  System_Func_CustomLogicLocaleBuiltin__object__o *__this;
  System_Action_CustomLogicLocaleBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicLocaleBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546e1e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicLocaleBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings___CreatePropertyBinding__DefaultLanguage_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings___CreatePropertyBinding__DefaultLanguage_g____sett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLocaleBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLocaleBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLocaleBuiltin_object);
    Il2CppMethodInitialized_07546e1e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLocaleBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings___CreatePropertyBinding__DefaultLanguage_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicLocaleBuiltin_object)
  ;
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings___CreatePropertyBinding__DefaultLanguage_g____sett
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLocaleBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLocaleBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings$$__CreateMethodBinding__Get
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o* CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreateMethodBinding__Get (const MethodInfo* method);
// 0x5ae4470
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ae44a5: jmp 0x5ae4515

CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o *
CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreateMethodBinding__Get(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicLocaleBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546e1f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicLocaleBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c___CreateMethodBinding__Get_b__4_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546e1f = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c)
    ;
    pCVar2 = TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__4_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__4_0;
  }
  if (__this == (System_Func_CustomLogicLocaleBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLocaleBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c___CreateMethodBinding__Get_b__4_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->static_fields;
    pCVar2->__9__4_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__4_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings$$__CreateMethodBinding__Set
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o* CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreateMethodBinding__Set (const MethodInfo* method);
// 0x5ae45b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ae45e5: jmp 0x5ae4655

CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o *
CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreateMethodBinding__Set(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicLocaleBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546e20 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicLocaleBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c___CreateMethodBinding__Set_b__5_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546e20 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c)
    ;
    pCVar2 = TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__5_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__5_0;
  }
  if (__this == (System_Func_CustomLogicLocaleBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLocaleBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c___CreateMethodBinding__Set_b__5_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->static_fields;
    pCVar2->__9__5_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__5_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings$$__CreateMethodBinding__RegisterLanguage
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o* CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreateMethodBinding__RegisterLanguage (const MethodInfo* method);
// 0x5ae46f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ae4725: jmp 0x5ae4795

CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o *
CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreateMethodBinding__RegisterLanguage(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicLocaleBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546e21 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicLocaleBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c___CreateMethodBinding__RegisterLanguage_b__6_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546e21 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c)
    ;
    pCVar2 = TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__6_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__6_0;
  }
  if (__this == (System_Func_CustomLogicLocaleBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLocaleBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c___CreateMethodBinding__RegisterLanguage_b__6_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->static_fields;
    pCVar2->__9__6_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__6_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings$$__CreateMethodBinding__RegisterLanguages
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o* CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreateMethodBinding__RegisterLanguages (const MethodInfo* method);
// 0x5ae4830
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ae4865: jmp 0x5ae48d5

CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o *
CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreateMethodBinding__RegisterLanguages(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicLocaleBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546e22 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicLocaleBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c___CreateMethodBinding__RegisterLanguages_b__7_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546e22 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c)
    ;
    pCVar2 = TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__7_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__7_0;
  }
  if (__this == (System_Func_CustomLogicLocaleBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLocaleBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c___CreateMethodBinding__RegisterLanguages_b__7_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->static_fields;
    pCVar2->__9__7_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__7_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings$$__CreateMethodBinding__RegisterFallback
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o* CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreateMethodBinding__RegisterFallback (const MethodInfo* method);
// 0x5ae4970
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ae49a5: jmp 0x5ae4a15

CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o *
CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreateMethodBinding__RegisterFallback(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicLocaleBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546e23 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicLocaleBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c___CreateMethodBinding__RegisterFallback_b__8_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546e23 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c)
    ;
    pCVar2 = TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__8_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__8_0;
  }
  if (__this == (System_Func_CustomLogicLocaleBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLocaleBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c___CreateMethodBinding__RegisterFallback_b__8_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->static_fields;
    pCVar2->__9__8_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__8_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings$$__CreateMethodBinding__RemoveFallback
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o* CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreateMethodBinding__RemoveFallback (const MethodInfo* method);
// 0x5ae4ab0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ae4ae5: jmp 0x5ae4b55

CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o *
CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreateMethodBinding__RemoveFallback(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicLocaleBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546e24 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicLocaleBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c___CreateMethodBinding__RemoveFallback_b__9_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546e24 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c)
    ;
    pCVar2 = TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__9_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__9_0;
  }
  if (__this == (System_Func_CustomLogicLocaleBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLocaleBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c___CreateMethodBinding__RemoveFallback_b__9_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->static_fields;
    pCVar2->__9__9_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__9_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicLocaleBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x5ae4bf0

void CustomLogic_CustomLogicLocaleBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07546e25 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultLanguage");
    il2cpp_codegen_initialize_runtime_metadata(&"RegisterLanguage");
    il2cpp_codegen_initialize_runtime_metadata(&"CurrentLanguage");
    il2cpp_codegen_initialize_runtime_metadata(&"RegisterLanguages");
    il2cpp_codegen_initialize_runtime_metadata(&"RegisterFallback");
    il2cpp_codegen_initialize_runtime_metadata(&"Set");
    il2cpp_codegen_initialize_runtime_metadata(&"RemoveFallback");
    il2cpp_codegen_initialize_runtime_metadata(&"Get");
    Il2CppMethodInitialized_07546e25 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CurrentLanguage",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"DefaultLanguage",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Get",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Set",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RegisterLanguage",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RegisterLanguages",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RegisterFallback",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RemoveFallback",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings$$<__CreatePropertyBinding__CurrentLanguage>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLocaleBuiltin_Bindings_____CreatePropertyBinding__CurrentLanguage_g____getter_2_0 (CustomLogic_CustomLogicLocaleBuiltin_o* __i, const MethodInfo* method);
// 0x5ae4db0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ae4dcd: cmp byte ptr [rip + 0x1a6203b], 0
// asm:   0x5ae4e52: jmp 0x5ae4df5

Il2CppObject *
CustomLogic_CustomLogicLocaleBuiltin_Bindings_____CreatePropertyBinding__CurrentLanguage_g____getter_2_0
          (CustomLogic_CustomLogicLocaleBuiltin_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  Settings_GeneralSettings_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  
  if (Il2CppMethodInitialized_07546e26 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    Il2CppMethodInitialized_07546e26 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
  }
  if (Il2CppMethodInitialized_07546e0f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_07546e0f = '\x01';
  }
  pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
  if ((pSVar2 == (Settings_GeneralSettings_o *)0x0) ||
     (pSVar3 = (pSVar2->fields).Language, pSVar3 == (Settings_StringSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return (Il2CppObject *)(pSVar3->fields)._value;
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings$$<__CreatePropertyBinding__DefaultLanguage>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLocaleBuiltin_Bindings_____CreatePropertyBinding__DefaultLanguage_g____getter_3_0 (CustomLogic_CustomLogicLocaleBuiltin_o* __i, const MethodInfo* method);
// 0x5ae4e60
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ae4e7d: cmp byte ptr [rip + 0x1a62017], 0
// asm:   0x5ae4e84: je 0x5ae4ed3

Il2CppObject *
CustomLogic_CustomLogicLocaleBuiltin_Bindings_____CreatePropertyBinding__DefaultLanguage_g____getter_3_0
          (CustomLogic_CustomLogicLocaleBuiltin_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546e27 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    Il2CppMethodInitialized_07546e27 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
  }
  if (Il2CppMethodInitialized_07546e9b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    Il2CppMethodInitialized_07546e9b = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    return (Il2CppObject *)
           TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->static_fields->_DefaultLanguage_k__BackingField;
  }
  return *(Il2CppObject **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin)->static_fields + 0x10);
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings$$<__CreatePropertyBinding__DefaultLanguage>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicLocaleBuiltin_Bindings_____CreatePropertyBinding__DefaultLanguage_g____setter_3_1 (CustomLogic_CustomLogicLocaleBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5ae4f10
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ae4f8b: cmp byte ptr [rip + 0x1a61f08], 0
// asm:   0x5ae4f92: je 0x5ae4fcc

void CustomLogic_CustomLogicLocaleBuiltin_Bindings_____CreatePropertyBinding__DefaultLanguage_g____setter_3_1
               (CustomLogic_CustomLogicLocaleBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  uint32_t uVar1;
  CustomLogic_CustomLogicLocaleBuiltin_StaticFields *pCVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_07546e28 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    Il2CppMethodInitialized_07546e28 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pSVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
  }
  if (Il2CppMethodInitialized_07546e9a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    Il2CppMethodInitialized_07546e9a = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
  }
  pCVar2 = TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->static_fields;
  pCVar2->_DefaultLanguage_k__BackingField = pSVar3;
  Il2CppCodeGenWriteBarrier(&pCVar2->_DefaultLanguage_k__BackingField);
  return;
}


// CustomLogic.CustomLogicLocaleBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicLocaleBuiltin___ctor (CustomLogic_CustomLogicLocaleBuiltin_o* __this, const MethodInfo* method);
// 0x5ae2e00
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ae2e76: cmp byte ptr [rip + 0x1a6401d], 0
// asm:   0x5ae2e7d: je 0x5ae2ff2
// asm:   0x5ae2ee3: jmp 0x5ae2fdb

void CustomLogic_CustomLogicLocaleBuiltin___ctor
               (CustomLogic_CustomLogicLocaleBuiltin_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  CustomLogic_CustomLogicLocaleBuiltin_StaticFields *pCVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  
  if (Il2CppMethodInitialized_07546e0e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    Il2CppMethodInitialized_07546e0e = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  pSVar4 = CustomLogic_CustomLogicLanguageEnum__get_English((MethodInfo *)0x0);
  if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
  }
  if (Il2CppMethodInitialized_07546e9a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    Il2CppMethodInitialized_07546e9a = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
  }
  pCVar2 = TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->static_fields;
  pCVar2->_DefaultLanguage_k__BackingField = pSVar4;
  Il2CppCodeGenWriteBarrier(&pCVar2->_DefaultLanguage_k__BackingField);
  pSVar4 = CustomLogic_CustomLogicLanguageEnum__get_TraditionalChinese((MethodInfo *)0x0);
  pSVar5 = CustomLogic_CustomLogicLanguageEnum__get_Chinese((MethodInfo *)0x0);
  if (Il2CppMethodInitialized_07546e16 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
    Il2CppMethodInitialized_07546e16 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->static_fields->_languageFallbacks;
  }
  else {
    pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
              ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin)->static_fields + 8);
  }
  if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___set_Item
              (pSVar3,(Il2CppObject *)pSVar4,(Il2CppObject *)pSVar5,
               (MethodInfo_4AAD4C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
    pSVar4 = CustomLogic_CustomLogicLanguageEnum__get_Chinese((MethodInfo *)0x0);
    pSVar5 = CustomLogic_CustomLogicLanguageEnum__get_TraditionalChinese((MethodInfo *)0x0);
    if (Il2CppMethodInitialized_07546e16 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
      Il2CppMethodInitialized_07546e16 = '\x01';
      uVar1 = (TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar1 = (TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
      pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->static_fields->_languageFallbacks;
    }
    else {
      pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
                ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin)->static_fields + 8);
    }
    if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item
                (pSVar3,(Il2CppObject *)pSVar4,(Il2CppObject *)pSVar5,
                 (MethodInfo_4AAD4C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item
                );
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLocaleBuiltin$$get_CurrentLanguage
// il2cpp: System_String_o* CustomLogic_CustomLogicLocaleBuiltin__get_CurrentLanguage (const MethodInfo* method);
// 0x5ae30d0

System_String_o * CustomLogic_CustomLogicLocaleBuiltin__get_CurrentLanguage(MethodInfo *method)

{
  Settings_GeneralSettings_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  
  if (Il2CppMethodInitialized_07546e0f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_07546e0f = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
  if ((pSVar1 == (Settings_GeneralSettings_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).Language, pSVar2 == (Settings_StringSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return (pSVar2->fields)._value;
}


// CustomLogic.CustomLogicLocaleBuiltin$$get_DefaultLanguage
// il2cpp: System_String_o* CustomLogic_CustomLogicLocaleBuiltin__get_DefaultLanguage (const MethodInfo* method);
// 0x5ae3130

System_String_o * CustomLogic_CustomLogicLocaleBuiltin__get_DefaultLanguage(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546e10 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    Il2CppMethodInitialized_07546e10 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    return TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->static_fields->_DefaultLanguage_k__BackingField;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin)->static_fields + 0x10);
}


// CustomLogic.CustomLogicLocaleBuiltin$$set_DefaultLanguage
// il2cpp: void CustomLogic_CustomLogicLocaleBuiltin__set_DefaultLanguage (System_String_o* value, const MethodInfo* method);
// 0x5ae31a0

void CustomLogic_CustomLogicLocaleBuiltin__set_DefaultLanguage(System_String_o *value,MethodInfo *method)

{
  CustomLogic_CustomLogicLocaleBuiltin_StaticFields *pCVar1;
  
  if (Il2CppMethodInitialized_07546e11 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    Il2CppMethodInitialized_07546e11 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
  }
  pCVar1 = TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->static_fields;
  pCVar1->_DefaultLanguage_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&pCVar1->_DefaultLanguage_k__BackingField);
  return;
}


// CustomLogic.CustomLogicLocaleBuiltin$$Get
// il2cpp: System_String_o* CustomLogic_CustomLogicLocaleBuiltin__Get (System_String_o* key, const MethodInfo* method);
// 0x5ae3200

System_String_o * CustomLogic_CustomLogicLocaleBuiltin__Get(System_String_o *key,MethodInfo *method)

{
  Settings_GeneralSettings_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  System_String_o *pSVar3;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (Il2CppMethodInitialized_07546e12 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_07546e12 = '\x01';
    in_RDX = extraout_RDX;
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
  if ((pSVar1 == (Settings_GeneralSettings_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).Language, pSVar2 == (Settings_StringSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pSVar3 = (pSVar2->fields)._value;
  if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    in_RDX = extraout_RDX_00;
  }
  pSVar3 = CustomLogic_CustomLogicLocaleBuiltin__ResolveString(key,pSVar3,in_RDX);
  if (pSVar3 == (System_String_o *)0x0) {
    pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Localized string not found: ");
    pSVar3 = System_String__Concat_52f0320(pSVar3,key,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
    System_Exception___ctor_54fa440(__this,pSVar3,(MethodInfo *)0x0);
    lastManagedFrame =
         (MethodInfo *)
         il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicLocaleBuiltin_Get);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
  }
  return pSVar3;
}


// CustomLogic.CustomLogicLocaleBuiltin$$Set
// il2cpp: void CustomLogic_CustomLogicLocaleBuiltin__Set (System_String_o* language, System_String_o* key, System_String_o* value, const MethodInfo* method);
// 0x5ae35c0

void CustomLogic_CustomLogicLocaleBuiltin__Set
               (System_String_o *language,System_String_o *key,System_String_o *value,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool bVar2;
  System_Collections_Generic_Dictionary_string__string__o *__this;
  System_Collections_Generic_Dictionary_string__string__o *local_30;
  
  if (Il2CppMethodInitialized_07546e13 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_string_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_string_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_string);
    Il2CppMethodInitialized_07546e13 = '\x01';
  }
  local_30 = (System_Collections_Generic_Dictionary_string__string__o *)0x0;
  if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->static_fields->_languages;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (pSVar1,(Il2CppObject *)language,(Il2CppObject **)&local_30,
                       (MethodInfo_4AAF440 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_string_TryGetValue
                      );
    if (!bVar2) {
      __this = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
      System_Collections_Generic_Dictionary_object__object____ctor
                ((System_Collections_Generic_Dictionary_object__object__o *)__this,
                 (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
      local_30 = __this;
      if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->static_fields->_languages;
      if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05ae3714;
      System_Collections_Generic_Dictionary_object__object___set_Item
                (pSVar1,(Il2CppObject *)language,(Il2CppObject *)local_30,
                 (MethodInfo_4AAD4C0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_string_set_Item);
    }
    if (local_30 != (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item
                ((System_Collections_Generic_Dictionary_object__object__o *)local_30,(Il2CppObject *)key,
                 (Il2CppObject *)value,
                 (MethodInfo_4AAD4C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item
                );
      return;
    }
  }
label_05ae3714:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLocaleBuiltin$$RegisterLanguage
// il2cpp: void CustomLogic_CustomLogicLocaleBuiltin__RegisterLanguage (System_String_o* language, CustomLogic_CustomLogicDictBuiltin_o* strings, const MethodInfo* method);
// 0x5ae3720
// eh: try 0x5ae3883..0x5ae39cd -> pad 0x5ae39df (+10 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5ae39fe..0x5ae3a03 -> pad 0x5ae3a28 cleanup
// eh: try 0x5ae3a2b..0x5ae3a35 -> pad 0x5ae3a3d catch (...) [compiler noexcept guard]
// asm: 35 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ae387d: nop dword ptr [rax]
// asm:   0x5ae39cd: jmp 0x5ae39e1
// asm:   0x5ae39cf: jmp 0x5ae39e1
// asm:   0x5ae39d1: jmp 0x5ae39e1
// asm:   0x5ae39d3: jmp 0x5ae39e1
// asm:   0x5ae39d5: jmp 0x5ae39e1
// asm:   0x5ae39d7: jmp 0x5ae39e1
// asm:   0x5ae39d9: jmp 0x5ae39e1
// asm:   0x5ae39db: jmp 0x5ae39e1
// asm:   0x5ae39dd: jmp 0x5ae39e1
// asm:   0x5ae39df: jmp 0x5ae39e1
// asm:   0x5ae39e1: mov rbx, rax
// asm:   0x5ae39e4: cmp edx, 1
// asm:   0x5ae39e7: mov rbp, qword ptr [rsp + 0x28]
// asm:   0x5ae39ec: jne 0x5ae3a2b
// asm:   0x5ae39ee: mov rdi, rbx
// asm:   0x5ae39f1: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5ae39f6: mov rbx, qword ptr [rax]
// asm:   0x5ae39f9: mov qword ptr [rsp + 0x30], rbx
// asm:   0x5ae39fe: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5ae3a03: lea rax, [rip + 0x17aac0e]  ; MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose
// asm:   0x5ae3a0a: mov rsi, qword ptr [rax]
// asm:   0x5ae3a0d: lea rdi, [rsp + 0x10]
// asm:   0x5ae3a12: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5ae3a17: test rbx, rbx
// asm:   0x5ae3a1a: je 0x5ae3925
// asm:   0x5ae3a20: mov rdi, rbx
// asm:   0x5ae3a23: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5ae3a28: mov rbx, rax
// asm:   0x5ae3a2b: lea rdi, [rsp + 0x30]
// asm:   0x5ae3a30: call 0x2fd6230  ; il2cpp_runtime_helper_02fd6230()
// asm:   0x5ae3a35: mov rdi, rbx
// asm:   0x5ae3a38: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5ae3a3d: mov rdi, rax
// asm:   0x5ae3a40: call 0x2ab61e0  ; __clang_call_terminate()

void CustomLogic_CustomLogicLocaleBuiltin__RegisterLanguage
               (System_String_o *language,CustomLogic_CustomLogicDictBuiltin_o *strings,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_String_o *key;
  bool bVar1;
  int32_t capacity;
  System_Collections_Generic_Dictionary_string__string__o *__this_01;
  CustomLogic_CustomLogicListBuiltin_o *pCVar2;
  Il2CppObject *key_00;
  Il2CppObject *pIVar3;
  undefined1 local_68 [8];
  undefined1 *puStack_60;
  Il2CppObject *local_58;
  System_String_o *local_50;
  undefined1 local_48 [16];
  Il2CppObject *local_38;
  
  if (Il2CppMethodInitialized_07546e14 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor_718bd40);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_string_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_object_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_object_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_object_GetEnumerator);
    Il2CppMethodInitialized_07546e14 = '\x01';
  }
  local_68 = (undefined1  [8])0x0;
  puStack_60 = (undefined1 *)0x0;
  local_58 = (Il2CppObject *)0x0;
  if (strings != (CustomLogic_CustomLogicDictBuiltin_o *)0x0) {
    capacity = CustomLogic_CustomLogicDictBuiltin__get_Count(strings,(MethodInfo *)0x0);
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
    System_Collections_Generic_Dictionary_object__object____ctor_4aac930
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,capacity,
               (MethodInfo_4AAC930 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor_718bd40);
    pCVar2 = CustomLogic_CustomLogicDictBuiltin__get_Keys(strings,(MethodInfo *)0x0);
    if ((pCVar2 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) &&
       (__this = (pCVar2->fields).List, __this != (System_Collections_Generic_List_object__o *)0x0)) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_48,__this,
                 (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_object_GetEnumerator);
      local_58 = local_38;
      local_68 = (undefined1  [8])local_48._0_8_;
      puStack_60 = (undefined1 *)local_48._8_8_;
      local_48._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_48._8_8_ = local_68;
      local_50 = language;
      if (__this_01 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
        bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                           (MethodInfo_4C45C50 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_object_MoveNext);
        pIVar3 = local_58;
        if (bVar1) {
          if (local_58 != (Il2CppObject *)0x0) {
            (*local_58->klass->vtable[3].methodPtr)(local_58,local_58->klass->vtable[3].method);
            pIVar3 = CustomLogic_CustomLogicDictBuiltin__Get
                               (strings,pIVar3,(Il2CppObject *)0x0,(MethodInfo *)0x0);
            if (pIVar3 != (Il2CppObject *)0x0) {
              (*pIVar3->klass->vtable[3].methodPtr)(pIVar3,pIVar3->klass->vtable[3].method);
              ThrowNullReferenceException();
            }
label_05ae39b0:
            ThrowNullReferenceException();
          }
label_05ae3984:
          ThrowNullReferenceException();
        }
      }
      else {
        while( true ) {
          bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                             (MethodInfo_4C45C50 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_object_MoveNext);
          pIVar3 = local_58;
          if (!bVar1) break;
          if (local_58 == (Il2CppObject *)0x0) goto label_05ae3984;
          key_00 = (Il2CppObject *)
                   (*local_58->klass->vtable[3].methodPtr)(local_58,local_58->klass->vtable[3].method);
          pIVar3 = CustomLogic_CustomLogicDictBuiltin__Get
                             (strings,pIVar3,(Il2CppObject *)0x0,(MethodInfo *)0x0);
          if (pIVar3 == (Il2CppObject *)0x0) goto label_05ae39b0;
          pIVar3 = (Il2CppObject *)
                   (*pIVar3->klass->vtable[3].methodPtr)(pIVar3,pIVar3->klass->vtable[3].method);
          System_Collections_Generic_Dictionary_object__object___set_Item
                    ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,key_00,pIVar3,
                     (MethodInfo_4AAD4C0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                 (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose);
      key = local_50;
      if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
      }
      __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                  TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->static_fields->_languages;
      if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (__this_00,(Il2CppObject *)key,(Il2CppObject *)__this_01,
                   (MethodInfo_4AAD4C0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_string_set_Item);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLocaleBuiltin$$RegisterLanguages
// il2cpp: void CustomLogic_CustomLogicLocaleBuiltin__RegisterLanguages (System_String_o* pattern, const MethodInfo* method);
// 0x5ae3a50
// eh: try 0x5ae3b64..0x5ae3bd8 -> pad 0x5ae3be3 (+3 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5ae3bfa..0x5ae3bff -> pad 0x5ae3c20 cleanup
// eh: try 0x5ae3c23..0x5ae3c2b -> pad 0x5ae3c33 catch (...) [compiler noexcept guard]
// asm: 26 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ae3bdd: jmp 0x5ae3be3
// asm:   0x5ae3bdf: jmp 0x5ae3be3
// asm:   0x5ae3be1: jmp 0x5ae3be3
// asm:   0x5ae3be3: mov rbx, rax
// asm:   0x5ae3be6: cmp edx, 1
// asm:   0x5ae3be9: jne 0x5ae3c23
// asm:   0x5ae3beb: mov rdi, rbx
// asm:   0x5ae3bee: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5ae3bf3: mov rbx, qword ptr [rax]
// asm:   0x5ae3bf6: mov qword ptr [rsp], rbx
// asm:   0x5ae3bfa: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5ae3bff: lea rax, [rip + 0x17ac10a]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_Dictionary_string_string_Dispose
// asm:   0x5ae3c06: mov rsi, qword ptr [rax]
// asm:   0x5ae3c09: lea rdi, [rsp + 0x10]
// asm:   0x5ae3c0e: call 0x4de67f0  ; System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose()
// asm:   0x5ae3c13: test rbx, rbx
// asm:   0x5ae3c16: je 0x5ae3bc4
// asm:   0x5ae3c18: mov rdi, rbx
// asm:   0x5ae3c1b: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5ae3c20: mov rbx, rax
// asm:   0x5ae3c23: mov rdi, rsp
// asm:   0x5ae3c26: call 0x2fd6260  ; il2cpp_runtime_helper_02fd6260()
// asm:   0x5ae3c2b: mov rdi, rbx
// asm:   0x5ae3c2e: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5ae3c33: mov rdi, rax
// asm:   0x5ae3c36: call 0x2ab61e0  ; __clang_call_terminate()

void CustomLogic_CustomLogicLocaleBuiltin__RegisterLanguages(System_String_o *pattern,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  Il2CppObject *key;
  Il2CppObject *value;
  bool bVar1;
  System_Collections_Generic_Dictionary_string__Dictionary_string__string___o *__this_00;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_58;
  
  if (Il2CppMethodInitialized_07546e15 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_string_GetEnumerator
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_string_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_Dictionary_string_string_Dispose
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_Dictionary_string_string_MoveNext
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_Dictionary_string_string_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_Dictionary_string_string_get_Key);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_Dictionary_string_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_07546e15 = '\x01';
  }
  local_58.fields._current.fields.key = (Il2CppObject *)0x0;
  local_58.fields._current.fields.value = (Il2CppObject *)0x0;
  local_58.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_58.fields._version = 0;
  local_58.fields._index = 0;
  local_58.fields._getEnumeratorRetType = 0;
  local_58.fields._36_4_ = 0;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  __this_00 = UI_UIManager__GetLocaleCategoryStrings(pattern,(MethodInfo *)0x0);
  if (__this_00 == (System_Collections_Generic_Dictionary_string__Dictionary_string__string___o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_object__object___GetEnumerator
            (&local_58,(System_Collections_Generic_Dictionary_object__object__o *)__this_00,
             (MethodInfo_4AAD970 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_string_GetEnumerator);
  while( true ) {
    bVar1 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                      ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)&local_58,
                       (MethodInfo_4CE66D0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_Dictionary_string_string_MoveNext
                      );
    value = local_58.fields._current.fields.value;
    key = local_58.fields._current.fields.key;
    if (!bVar1) {
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)&local_58,
                 (MethodInfo_4CE67F0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_Dictionary_string_string_Dispose
                );
      return;
    }
    if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    }
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->static_fields->_languages;
    if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
    System_Collections_Generic_Dictionary_object__object___set_Item
              (__this,key,value,
               (MethodInfo_4AAD4C0 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_string_set_Item);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLocaleBuiltin$$RegisterFallback
// il2cpp: void CustomLogic_CustomLogicLocaleBuiltin__RegisterFallback (System_String_o* fromLanguage, System_String_o* toLanguage, const MethodInfo* method);
// 0x5ae3030

void CustomLogic_CustomLogicLocaleBuiltin__RegisterFallback
               (System_String_o *fromLanguage,System_String_o *toLanguage,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  
  if (Il2CppMethodInitialized_07546e16 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
    Il2CppMethodInitialized_07546e16 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->static_fields->_languageFallbacks;
  }
  else {
    __this = *(System_Collections_Generic_Dictionary_object__object__o **)
              ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin)->static_fields + 8);
  }
  if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_object__object___set_Item
            (__this,(Il2CppObject *)fromLanguage,(Il2CppObject *)toLanguage,
             (MethodInfo_4AAD4C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
  return;
}


// CustomLogic.CustomLogicLocaleBuiltin$$RemoveFallback
// il2cpp: void CustomLogic_CustomLogicLocaleBuiltin__RemoveFallback (System_String_o* fromLanguage, const MethodInfo* method);
// 0x5ae3c40

void CustomLogic_CustomLogicLocaleBuiltin__RemoveFallback(System_String_o *fromLanguage,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  
  if (Il2CppMethodInitialized_07546e17 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_Remove);
    Il2CppMethodInitialized_07546e17 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->static_fields->_languageFallbacks;
  }
  else {
    __this = *(System_Collections_Generic_Dictionary_object__object__o **)
              ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin)->static_fields + 8);
  }
  if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_object__object___Remove
            (__this,(Il2CppObject *)fromLanguage,
             (MethodInfo_4AAED10 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Remove);
  return;
}


// CustomLogic.CustomLogicLocaleBuiltin$$ResolveString
// il2cpp: System_String_o* CustomLogic_CustomLogicLocaleBuiltin__ResolveString (System_String_o* key, System_String_o* requestedLang, const MethodInfo* method);
// 0x5ae32f0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5ae34c4: test rbx, rbx
// asm:   0x5ae34c7: jne 0x5ae3511
// asm:   0x5ae34c9: jmp 0x5ae3562

System_String_o *
CustomLogic_CustomLogicLocaleBuiltin__ResolveString
          (System_String_o *key,System_String_o *requestedLang,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  System_String_o *pSVar3;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  Il2CppObject **value;
  System_Collections_Generic_Dictionary_object__object__o *local_68;
  System_Collections_Generic_Dictionary_object__object__o *local_60;
  Il2CppObject *local_58;
  System_Collections_Generic_Dictionary_object__object__o *local_50;
  Il2CppObject *local_48 [3];
  
  if (Il2CppMethodInitialized_07546e18 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_string_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    Il2CppMethodInitialized_07546e18 = '\x01';
  }
  local_50 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
  local_48[2] = (Il2CppObject *)0x0;
  local_58 = (Il2CppObject *)0x0;
  local_60 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
  local_48[1] = (Il2CppObject *)0x0;
  local_68 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
  local_48[0] = (Il2CppObject *)0x0;
  if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
  }
  pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->static_fields->_languages;
  if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05ae3562;
  bVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                    (pSVar4,(Il2CppObject *)requestedLang,(Il2CppObject **)&local_50,
                     (MethodInfo_4AAF440 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_string_TryGetValue
                    );
  if (bVar2) {
    if (local_50 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05ae3562;
    value = local_48 + 2;
    bVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (local_50,(Il2CppObject *)key,value,
                       (MethodInfo_4AAF440 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    if (bVar2) goto label_05ae3550;
  }
  if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
  }
  pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->static_fields->_languageFallbacks;
  if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05ae3562;
  bVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                    (pSVar4,(Il2CppObject *)requestedLang,&local_58,
                     (MethodInfo_4AAF440 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
  if (bVar2) {
    if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    }
    pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->static_fields->_languages;
    if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05ae3562;
    bVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (pSVar4,local_58,(Il2CppObject **)&local_60,
                       (MethodInfo_4AAF440 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_string_TryGetValue
                      );
    if (bVar2) {
      if (local_60 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05ae3562;
      value = local_48 + 1;
      bVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                        (local_60,(Il2CppObject *)key,value,
                         (MethodInfo_4AAF440 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
      if (bVar2) goto label_05ae3550;
    }
  }
  if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->static_fields->_languages;
    if (Il2CppMethodInitialized_07546e9b == '\0') goto label_05ae34e9;
label_05ae34bb:
    uVar1 = (TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor;
  }
  else {
    pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->static_fields->_languages;
    if (Il2CppMethodInitialized_07546e9b != '\0') goto label_05ae34bb;
label_05ae34e9:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    Il2CppMethodInitialized_07546e9b = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
  }
  if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_05ae3562:
    ThrowNullReferenceException();
  }
  bVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                    (pSVar4,*(Il2CppObject **)
                             ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin)->
                                    static_fields + 0x10),(Il2CppObject **)&local_68,
                     (MethodInfo_4AAF440 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_string_TryGetValue
                    );
  if (bVar2) {
    if (local_68 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05ae3562;
    value = local_48;
    bVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (local_68,(Il2CppObject *)key,value,
                       (MethodInfo_4AAF440 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    if (bVar2) {
label_05ae3550:
      return (System_String_o *)*value;
    }
  }
  pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Locale string not found: ");
  pSVar3 = System_String__Concat_52f0320(pSVar3,key,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar3,(MethodInfo *)0x0);
  lastManagedFrame =
       (MethodInfo *)
       il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicLocaleBuiltin_ResolveString);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicLocaleBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicLocaleBuiltin__get_ClassName (CustomLogic_CustomLogicLocaleBuiltin_o* __this, const MethodInfo* method);
// 0x5ae3ce0

System_String_o *
CustomLogic_CustomLogicLocaleBuiltin__get_ClassName
          (CustomLogic_CustomLogicLocaleBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546e19 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Locale");
    Il2CppMethodInitialized_07546e19 = '\x01';
  }
  return "Locale";
}


// CustomLogic.CustomLogicLocaleBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicLocaleBuiltin__get_IsAbstract (CustomLogic_CustomLogicLocaleBuiltin_o* __this, const MethodInfo* method);
// 0x5ae3d10

bool CustomLogic_CustomLogicLocaleBuiltin__get_IsAbstract
               (CustomLogic_CustomLogicLocaleBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicLocaleBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicLocaleBuiltin__get_IsStatic (CustomLogic_CustomLogicLocaleBuiltin_o* __this, const MethodInfo* method);
// 0x5ae3d20

bool CustomLogic_CustomLogicLocaleBuiltin__get_IsStatic
               (CustomLogic_CustomLogicLocaleBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicLocaleBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicLocaleBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicLocaleBuiltin_o* __this, const MethodInfo* method);
// 0x5ae3d30

bool CustomLogic_CustomLogicLocaleBuiltin__get_InheritBaseMembers
               (CustomLogic_CustomLogicLocaleBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicLocaleBuiltin$$.cctor
// il2cpp: void CustomLogic_CustomLogicLocaleBuiltin___cctor (const MethodInfo* method);
// 0x5ae3d40

void CustomLogic_CustomLogicLocaleBuiltin___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicLocaleBuiltin_StaticFields *pCVar1;
  System_Collections_Generic_Dictionary_string__Dictionary_string__string___o *__this;
  System_Collections_Generic_Dictionary_string__string__o *__this_00;
  
  if (Il2CppMethodInitialized_07546e1a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_string);
    Il2CppMethodInitialized_07546e1a = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this,
             (MethodInfo_4AAC8D0 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_string_ctor);
  TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->static_fields->_languages = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->static_fields->_languages);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->static_fields;
  pCVar1->_languageFallbacks = __this_00;
  Il2CppCodeGenWriteBarrier(&pCVar1->_languageFallbacks);
  return;
}


