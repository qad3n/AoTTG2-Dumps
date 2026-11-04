// Type: CustomLogic.CustomLogicLocaleBuiltin
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicLocaleBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicLocaleBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicLocaleBuiltin_o* CustomLogic_CustomLogicLocaleBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x18203c4c0

CustomLogic_CustomLogicLocaleBuiltin_o *
CustomLogic_CustomLogicLocaleBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  CustomLogic_CustomLogicLocaleBuiltin_o *__this_00;
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_01;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_18434645a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    Il2CppMethodInitialized_18434645a = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length != 0) {
      NullCheck(args);
      local_res8[0] = (int32_t)args->max_length;
      pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
      pSVar2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
      str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicLocaleBuiltin constructor found that takes ");
      pSVar1 = System_String__Concat_1969b70(str0,pSVar1,pSVar2,(MethodInfo *)0x0);
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
      __this_01 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
      System_ArgumentException___ctor_1a77cc0(__this_01,pSVar1,(MethodInfo *)0x0);
      lastManagedFrame =
           il2cpp_codegen_get_runtime_metadata
                     (&MethodInfo_CustomLogic_CustomLogicLocaleBuiltin_Factory_CreateInstance);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
    }
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    if (Il2CppMethodInitialized_18434644d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
      Il2CppMethodInitialized_18434644d = '\x01';
    }
    if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
    }
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this_00,(MethodInfo *)0x0)
    ;
    pSVar1 = CustomLogic_CustomLogicLanguageEnum__get_English((MethodInfo *)0x0);
    if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    }
    if (Il2CppMethodInitialized_18434654a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
      Il2CppMethodInitialized_18434654a = '\x01';
    }
    if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    }
    TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->static_fields->_DefaultLanguage_k__BackingField = pSVar1;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->static_fields->_DefaultLanguage_k__BackingField
               ,pSVar1);
    pSVar1 = CustomLogic_CustomLogicLanguageEnum__get_TraditionalChinese((MethodInfo *)0x0);
    pSVar2 = CustomLogic_CustomLogicLanguageEnum__get_Chinese((MethodInfo *)0x0);
    if (Il2CppMethodInitialized_184346455 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
      Il2CppMethodInitialized_184346455 = '\x01';
    }
    if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    }
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->static_fields->_languageFallbacks;
    if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item
                (__this,(Il2CppObject *)pSVar1,(Il2CppObject *)pSVar2,
                 (MethodInfo_147A7F0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item
                );
      pSVar1 = CustomLogic_CustomLogicLanguageEnum__get_Chinese((MethodInfo *)0x0);
      pSVar2 = CustomLogic_CustomLogicLanguageEnum__get_TraditionalChinese((MethodInfo *)0x0);
      CustomLogic_CustomLogicLocaleBuiltin__RegisterFallback(pSVar1,pSVar2,(MethodInfo *)0x0);
      return __this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicLocaleBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x182044c70

void CustomLogic_CustomLogicLocaleBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o *__this;
  
  if (Il2CppMethodInitialized_184346468 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346468 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->static_fields->__9,__this);
  return;
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicLocaleBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicLocaleBuiltin_Bindings___c___ctor(CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings.<>c$$<__CreateMethodBinding__Get>b__4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_____CreateMethodBinding__Get_b__4_0 (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicLocaleBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182040140

Il2CppObject *
CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_____CreateMethodBinding__Get_b__4_0
          (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicLocaleBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  Settings_GeneralSettings_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  Il2CppClass *klass;
  System_Exception_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  if (Il2CppMethodInitialized_184346469 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    Il2CppMethodInitialized_184346469 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pSVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string)
    ;
    if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    }
    if (Il2CppMethodInitialized_184346451 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
      Il2CppMethodInitialized_184346451 = '\x01';
    }
    pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
    if ((pSVar1 != (Settings_GeneralSettings_o *)0x0) &&
       (pSVar2 = (pSVar1->fields).Language, pSVar2 != (Settings_StringSetting_o *)0x0)) {
      pSVar4 = (pSVar2->fields)._value;
      if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
      }
      pSVar4 = CustomLogic_CustomLogicLocaleBuiltin__ResolveString(pSVar3,pSVar4,(MethodInfo *)0x0);
      if (pSVar4 != (System_String_o *)0x0) {
        return (Il2CppObject *)pSVar4;
      }
      pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Localized string not found: ");
      pSVar3 = System_String__Concat_1969e50(pSVar4,pSVar3,(MethodInfo *)0x0);
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
      __this_00 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
      System_Exception___ctor_1b6abf0(__this_00,pSVar3,(MethodInfo *)0x0);
      lastManagedFrame =
           (MethodInfo *)
           il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicLocaleBuiltin_Get);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings.<>c$$<__CreateMethodBinding__Set>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_____CreateMethodBinding__Set_b__5_0 (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicLocaleBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182042640

Il2CppObject *
CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_____CreateMethodBinding__Set_b__5_0
          (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicLocaleBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool bVar2;
  System_String_o *key;
  System_String_o *key_00;
  System_String_o *value;
  System_Collections_Generic_Dictionary_string__string__o *__this_00;
  System_Collections_Generic_Dictionary_string__string__o *local_res18;
  
  if (Il2CppMethodInitialized_18434646a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    Il2CppMethodInitialized_18434646a = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    key = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (1 < (uint)__a->max_length) {
      key_00 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (__a->m_Items[1],
                          (MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      if (2 < (uint)__a->max_length) {
        value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (__a->m_Items[2],
                           (MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
        if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
        }
        if (Il2CppMethodInitialized_184346452 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_string_TryGetValue
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_string_set_Item
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Collections_Generic_Dictionary_string_string);
          Il2CppMethodInitialized_184346452 = '\x01';
        }
        local_res18 = (System_Collections_Generic_Dictionary_string__string__o *)0x0;
        if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
        }
        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                 TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->static_fields->_languages;
        if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          bVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                            (pSVar1,(Il2CppObject *)key,(Il2CppObject **)&local_res18,
                             (MethodInfo_14769C0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_string_TryGetValue
                            );
          if (!bVar2) {
            __this_00 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string
                                  );
            System_Collections_Generic_Dictionary_object__object____ctor
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                       (MethodInfo_1454140 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
            local_res18 = __this_00;
            if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
            }
            pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                     TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->static_fields->_languages;
            if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_182042862;
            System_Collections_Generic_Dictionary_object__object___set_Item
                      (pSVar1,(Il2CppObject *)key,(Il2CppObject *)local_res18,
                       (MethodInfo_147A7F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_string_set_Item
                      );
          }
          if (local_res18 != (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
            System_Collections_Generic_Dictionary_object__object___set_Item
                      ((System_Collections_Generic_Dictionary_object__object__o *)local_res18,
                       (Il2CppObject *)key_00,(Il2CppObject *)value,
                       (MethodInfo_147A7F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
            return (Il2CppObject *)0x0;
          }
        }
label_182042862:
        ThrowNullReferenceException();
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings.<>c$$<__CreateMethodBinding__RegisterLanguage>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_____CreateMethodBinding__RegisterLanguage_b__6_0 (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicLocaleBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182040b40

Il2CppObject *
CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_____CreateMethodBinding__RegisterLanguage_b__6_0
          (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicLocaleBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *language;
  CustomLogic_CustomLogicDictBuiltin_o *strings;
  
  if (Il2CppMethodInitialized_18434646b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicDictBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    Il2CppMethodInitialized_18434646b = '\x01';
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
                         (obj,(MethodInfo_66EB70 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (1 < (uint)__a->max_length) {
      strings = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (__a->m_Items[1],
                           (MethodInfo_66EB70 *)
                           MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicDictBuiltin);
      if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
      }
      CustomLogic_CustomLogicLocaleBuiltin__RegisterLanguage(language,strings,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings.<>c$$<__CreateMethodBinding__RegisterLanguages>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_____CreateMethodBinding__RegisterLanguages_b__7_0 (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicLocaleBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182040c20

Il2CppObject *
CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_____CreateMethodBinding__RegisterLanguages_b__7_0
          (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicLocaleBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *pattern;
  
  if (Il2CppMethodInitialized_18434646c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    Il2CppMethodInitialized_18434646c = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      pattern = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (obj,(MethodInfo_66EB70 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
      }
      CustomLogic_CustomLogicLocaleBuiltin__RegisterLanguages(pattern,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings.<>c$$<__CreateMethodBinding__RegisterFallback>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_____CreateMethodBinding__RegisterFallback_b__8_0 (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicLocaleBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182040a70

Il2CppObject *
CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_____CreateMethodBinding__RegisterFallback_b__8_0
          (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicLocaleBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *fromLanguage;
  System_String_o *toLanguage;
  
  if (Il2CppMethodInitialized_18434646d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    Il2CppMethodInitialized_18434646d = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    fromLanguage = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                             (obj,(MethodInfo_66EB70 *)
                                  MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (1 < (uint)__a->max_length) {
      toLanguage = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                             (__a->m_Items[1],
                              (MethodInfo_66EB70 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
      }
      CustomLogic_CustomLogicLocaleBuiltin__RegisterFallback(fromLanguage,toLanguage,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings.<>c$$<__CreateMethodBinding__RemoveFallback>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_____CreateMethodBinding__RemoveFallback_b__9_0 (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicLocaleBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182040cd0

Il2CppObject *
CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_____CreateMethodBinding__RemoveFallback_b__9_0
          (CustomLogic_CustomLogicLocaleBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicLocaleBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_String_o *key;
  
  if (Il2CppMethodInitialized_18434646e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    Il2CppMethodInitialized_18434646e = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    key = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    }
    if (Il2CppMethodInitialized_184346456 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_Dictionary_string_string_Remove);
      Il2CppMethodInitialized_184346456 = '\x01';
    }
    if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    }
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->static_fields->_languageFallbacks;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Remove
                (__this_00,(Il2CppObject *)key,
                 (MethodInfo_1470BF0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Remove);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicLocaleBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x18201b560

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicLocaleBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  uint32_t uVar3;
  ExitGames_Client_Photon_SerializeStreamMethod_o *pEVar4;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *pSVar5;
  System_Func_CustomLogicLocaleBuiltin__object__o *__this;
  System_Action_CustomLogicLocaleBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicLocaleBuiltin__o *__this_01;
  System_String_o *pSVar6;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_02;
  MethodInfo *lastManagedFrame;
  
  if (Il2CppMethodInitialized_18434645b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultLanguage");
    il2cpp_codegen_initialize_runtime_metadata(&"RegisterLanguage");
    il2cpp_codegen_initialize_runtime_metadata(&"CurrentLanguage");
    il2cpp_codegen_initialize_runtime_metadata(&"RegisterLanguages");
    il2cpp_codegen_initialize_runtime_metadata(&"RegisterFallback");
    il2cpp_codegen_initialize_runtime_metadata(&"Set");
    il2cpp_codegen_initialize_runtime_metadata(&"RemoveFallback");
    il2cpp_codegen_initialize_runtime_metadata(&"Get");
    Il2CppMethodInitialized_18434645b = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x5e1c8cab) {
    if (uVar3 < 0x37915e09) {
      if (uVar3 == 0x28b19ea3) {
        bVar2 = System_String__op_Equality(name,"Set",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_18434645f == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicLocaleBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c___CreateMethodBinding__Set_b__5_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c);
            Il2CppMethodInitialized_18434645f = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c);
          }
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->static_fields->__9__5_0;
          if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
            if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->static_fields->__9;
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)
                                TypeInfo_System_Func_CustomLogicLocaleBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (pEVar4,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c___CreateMethodBinding__Set_b__5_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->static_fields->__9__5_0 =
                 (System_Func_CustomLogicLocaleBuiltin__object____object__o *)pEVar4;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->static_fields->__9__5_0,
                       pEVar4);
          }
          pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    (pSVar5,(System_String_o *)pEVar4,
                     MethodInfo_CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin_ctor);
          return (CustomLogic_ICLMemberBinding_o *)pSVar5;
        }
      }
      else if (uVar3 == 0x37915e08) {
        bVar2 = System_String__op_Equality(name,"CurrentLanguage",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_18434645c == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings___CreatePropertyBinding__CurrentLanguage_g____gett
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLocaleBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLocaleBuiltin);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLocaleBuiltin_object);
            Il2CppMethodInitialized_18434645c = '\x01';
          }
          __this = il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLocaleBuiltin_object);
          System_Func_object__object____ctor
                    ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings___CreatePropertyBinding__CurrentLanguage_g____gett
                     ,(MethodInfo_16E67D0 *)0x0);
          __this_01 = il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLocaleBuiltin);
          __this_00 = (System_Action_CustomLogicLocaleBuiltin__object__o *)0x0;
          goto label_18201bfb0;
        }
      }
    }
    else if (uVar3 == 0x5b89647c) {
      bVar2 = System_String__op_Equality(name,"DefaultLanguage",(MethodInfo *)0x0);
      if (bVar2) {
        if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434645d == '\0') {
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
          Il2CppMethodInitialized_18434645d = '\x01';
        }
        __this = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLocaleBuiltin_object);
        System_Func_object__object____ctor
                  ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings___CreatePropertyBinding__DefaultLanguage_g____gett
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicLocaleBuiltin_object);
        System_Action_object__object____ctor
                  ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
                   (Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings___CreatePropertyBinding__DefaultLanguage_g____sett
                   ,(MethodInfo *)0x0);
        __this_01 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLocaleBuiltin)
        ;
label_18201bfb0:
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
                   (System_Action_T__object__o *)__this_00,
                   (MethodInfo_12B8EE0 *)
                   MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLocaleBuiltin_ctor);
        return (CustomLogic_ICLMemberBinding_o *)__this_01;
      }
    }
    else if (uVar3 == 0x5e1c8caa) {
      bVar2 = System_String__op_Equality(name,"RegisterLanguage",(MethodInfo *)0x0);
      if (bVar2) {
        if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184346460 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicLocaleBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c___CreateMethodBinding__RegisterLanguage_b__6_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c);
          Il2CppMethodInitialized_184346460 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c);
        }
        pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->static_fields->__9__6_0;
        if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
          if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)
                   TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->static_fields->__9;
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLocaleBuiltin_object_array_object
                             );
          System_Func_object__object__object____ctor
                    (pEVar4,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c___CreateMethodBinding__RegisterLanguage_b__6_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->static_fields->__9__6_0 =
               (System_Func_CustomLogicLocaleBuiltin__object____object__o *)pEVar4;
          Il2CppCodeGenWriteBarrier
                    (&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->static_fields->__9__6_0,pEVar4
                    );
        }
        pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  (pSVar5,(System_String_o *)pEVar4,
                   MethodInfo_CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin_ctor);
        return (CustomLogic_ICLMemberBinding_o *)pSVar5;
      }
    }
  }
  else if (uVar3 < 0x9cbb72c4) {
    if (uVar3 == 0x7106e006) {
      bVar2 = System_String__op_Equality(name,"RegisterFallback",(MethodInfo *)0x0);
      if (bVar2) {
        if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184346462 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicLocaleBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c___CreateMethodBinding__RegisterFallback_b__8_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c);
          Il2CppMethodInitialized_184346462 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c);
        }
        pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->static_fields->__9__8_0;
        if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
          if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)
                   TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->static_fields->__9;
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLocaleBuiltin_object_array_object
                             );
          System_Func_object__object__object____ctor
                    (pEVar4,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c___CreateMethodBinding__RegisterFallback_b__8_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->static_fields->__9__8_0 =
               (System_Func_CustomLogicLocaleBuiltin__object____object__o *)pEVar4;
          Il2CppCodeGenWriteBarrier
                    (&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->static_fields->__9__8_0,pEVar4
                    );
        }
        pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  (pSVar5,(System_String_o *)pEVar4,
                   MethodInfo_CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin_ctor);
        return (CustomLogic_ICLMemberBinding_o *)pSVar5;
      }
    }
    else if (uVar3 == 0x9cbb72c3) {
      bVar2 = System_String__op_Equality(name,"RemoveFallback",(MethodInfo *)0x0);
      if (bVar2) {
        if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184346463 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicLocaleBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c___CreateMethodBinding__RemoveFallback_b__9_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c);
          Il2CppMethodInitialized_184346463 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c);
        }
        pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->static_fields->__9__9_0;
        if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
          if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)
                   TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->static_fields->__9;
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLocaleBuiltin_object_array_object
                             );
          System_Func_object__object__object____ctor
                    (pEVar4,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c___CreateMethodBinding__RemoveFallback_b__9_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->static_fields->__9__9_0 =
               (System_Func_CustomLogicLocaleBuiltin__object____object__o *)pEVar4;
          Il2CppCodeGenWriteBarrier
                    (&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->static_fields->__9__9_0,pEVar4
                    );
        }
        pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  (pSVar5,(System_String_o *)pEVar4,
                   MethodInfo_CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin_ctor);
        return (CustomLogic_ICLMemberBinding_o *)pSVar5;
      }
    }
  }
  else if (uVar3 == 0xb6973ef7) {
    bVar2 = System_String__op_Equality(name,"Get",(MethodInfo *)0x0);
    if (bVar2) {
      if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_18434645e == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicLocaleBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c___CreateMethodBinding__Get_b__4_0
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c);
        Il2CppMethodInitialized_18434645e = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c);
      }
      pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->static_fields->__9__4_0;
      if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
        if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->static_fields->__9;
        pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLocaleBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (pEVar4,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c___CreateMethodBinding__Get_b__4_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->static_fields->__9__4_0 =
             (System_Func_CustomLogicLocaleBuiltin__object____object__o *)pEVar4;
        Il2CppCodeGenWriteBarrier
                  (&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->static_fields->__9__4_0,pEVar4);
      }
      pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                (pSVar5,(System_String_o *)pEVar4,
                 MethodInfo_CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin_ctor);
      return (CustomLogic_ICLMemberBinding_o *)pSVar5;
    }
  }
  else if (uVar3 == 0xfff1b99b) {
    bVar2 = System_String__op_Equality(name,"RegisterLanguages",(MethodInfo *)0x0);
    if (bVar2) {
      if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_184346461 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicLocaleBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c___CreateMethodBinding__RegisterLanguages_b__7_0
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c);
        Il2CppMethodInitialized_184346461 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c);
      }
      pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->static_fields->__9__7_0;
      if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
        if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->static_fields->__9;
        pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLocaleBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (pEVar4,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c___CreateMethodBinding__RegisterLanguages_b__7_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->static_fields->__9__7_0 =
             (System_Func_CustomLogicLocaleBuiltin__object____object__o *)pEVar4;
        Il2CppCodeGenWriteBarrier
                  (&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->static_fields->__9__7_0,pEVar4);
      }
      pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                (pSVar5,(System_String_o *)pEVar4,
                 MethodInfo_CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin_ctor);
      return (CustomLogic_ICLMemberBinding_o *)pSVar5;
    }
  }
  pSVar6 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicLocaleBuiltin not found");
  str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  pSVar6 = System_String__Concat_1969b70(str0,name,pSVar6,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this_02 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_1b6abf0(__this_02,pSVar6,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_02,lastManagedFrame);
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings$$__CreatePropertyBinding__CurrentLanguage
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLocaleBuiltin__o* CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreatePropertyBinding__CurrentLanguage (const MethodInfo* method);
// 0x18202dde0

CustomLogic_CLPropertyBinding_CustomLogicLocaleBuiltin__o *
CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreatePropertyBinding__CurrentLanguage(MethodInfo *method)

{
  System_Func_CustomLogicLocaleBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicLocaleBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_18434645c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings___CreatePropertyBinding__CurrentLanguage_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLocaleBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLocaleBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicLocaleBuiltin_object);
    Il2CppMethodInitialized_18434645c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLocaleBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings___CreatePropertyBinding__CurrentLanguage_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLocaleBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLocaleBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings$$__CreatePropertyBinding__DefaultLanguage
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicLocaleBuiltin__o* CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreatePropertyBinding__DefaultLanguage (const MethodInfo* method);
// 0x18202e060

CustomLogic_CLPropertyBinding_CustomLogicLocaleBuiltin__o *
CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreatePropertyBinding__DefaultLanguage(MethodInfo *method)

{
  System_Func_CustomLogicLocaleBuiltin__object__o *__this;
  System_Action_CustomLogicLocaleBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicLocaleBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_18434645d == '\0') {
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
    Il2CppMethodInitialized_18434645d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicLocaleBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings___CreatePropertyBinding__DefaultLanguage_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicLocaleBuiltin_object)
  ;
  Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler___ctor_129b060
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings___CreatePropertyBinding__DefaultLanguage_g____sett
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicLocaleBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicLocaleBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings$$__CreateMethodBinding__Get
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o* CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreateMethodBinding__Get (const MethodInfo* method);
// 0x182028ad0

CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o *
CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreateMethodBinding__Get(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434645e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicLocaleBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c___CreateMethodBinding__Get_b__4_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434645e = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c)
    ;
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->static_fields->__9__4_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLocaleBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c___CreateMethodBinding__Get_b__4_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->static_fields->__9__4_0 =
         (System_Func_CustomLogicLocaleBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->static_fields->__9__4_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings$$__CreateMethodBinding__Set
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o* CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreateMethodBinding__Set (const MethodInfo* method);
// 0x18202ba70

CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o *
CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreateMethodBinding__Set(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434645f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicLocaleBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c___CreateMethodBinding__Set_b__5_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434645f = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c)
    ;
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->static_fields->__9__5_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLocaleBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c___CreateMethodBinding__Set_b__5_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->static_fields->__9__5_0 =
         (System_Func_CustomLogicLocaleBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->static_fields->__9__5_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings$$__CreateMethodBinding__RegisterLanguage
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o* CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreateMethodBinding__RegisterLanguage (const MethodInfo* method);
// 0x182029bc0

CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o *
CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreateMethodBinding__RegisterLanguage(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346460 == '\0') {
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
    Il2CppMethodInitialized_184346460 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c)
    ;
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->static_fields->__9__6_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLocaleBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c___CreateMethodBinding__RegisterLanguage_b__6_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->static_fields->__9__6_0 =
         (System_Func_CustomLogicLocaleBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->static_fields->__9__6_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings$$__CreateMethodBinding__RegisterLanguages
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o* CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreateMethodBinding__RegisterLanguages (const MethodInfo* method);
// 0x182029ce0

CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o *
CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreateMethodBinding__RegisterLanguages(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346461 == '\0') {
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
    Il2CppMethodInitialized_184346461 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c)
    ;
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->static_fields->__9__7_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLocaleBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c___CreateMethodBinding__RegisterLanguages_b__7_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->static_fields->__9__7_0 =
         (System_Func_CustomLogicLocaleBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->static_fields->__9__7_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings$$__CreateMethodBinding__RegisterFallback
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o* CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreateMethodBinding__RegisterFallback (const MethodInfo* method);
// 0x182029aa0

CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o *
CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreateMethodBinding__RegisterFallback(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346462 == '\0') {
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
    Il2CppMethodInitialized_184346462 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c)
    ;
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->static_fields->__9__8_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLocaleBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c___CreateMethodBinding__RegisterFallback_b__8_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->static_fields->__9__8_0 =
         (System_Func_CustomLogicLocaleBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->static_fields->__9__8_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings$$__CreateMethodBinding__RemoveFallback
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o* CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreateMethodBinding__RemoveFallback (const MethodInfo* method);
// 0x182029e00

CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o *
CustomLogic_CustomLogicLocaleBuiltin_Bindings____CreateMethodBinding__RemoveFallback(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346463 == '\0') {
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
    Il2CppMethodInitialized_184346463 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c)
    ;
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->static_fields->__9__9_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicLocaleBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c___CreateMethodBinding__RemoveFallback_b__9_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->static_fields->__9__9_0 =
         (System_Func_CustomLogicLocaleBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings_c->static_fields->__9__9_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicLocaleBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicLocaleBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x182030050

void CustomLogic_CustomLogicLocaleBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_184346464 == '\0') {
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
    Il2CppMethodInitialized_184346464 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CurrentLanguage",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"DefaultLanguage",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Get",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Set",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RegisterLanguage",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RegisterLanguages",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RegisterFallback",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RemoveFallback",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings$$<__CreatePropertyBinding__CurrentLanguage>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLocaleBuiltin_Bindings_____CreatePropertyBinding__CurrentLanguage_g____getter_2_0 (CustomLogic_CustomLogicLocaleBuiltin_o* __i, const MethodInfo* method);
// 0x182024730

Il2CppObject *
CustomLogic_CustomLogicLocaleBuiltin_Bindings_____CreatePropertyBinding__CurrentLanguage_g____getter_2_0
          (CustomLogic_CustomLogicLocaleBuiltin_o *__i,MethodInfo *method)

{
  Settings_GeneralSettings_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  
  if (Il2CppMethodInitialized_184346465 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    Il2CppMethodInitialized_184346465 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
  }
  if (Il2CppMethodInitialized_18434644e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_18434644e = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
  if ((pSVar1 != (Settings_GeneralSettings_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).Language, pSVar2 != (Settings_StringSetting_o *)0x0)) {
    return (Il2CppObject *)(pSVar2->fields)._value;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings$$<__CreatePropertyBinding__DefaultLanguage>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicLocaleBuiltin_Bindings_____CreatePropertyBinding__DefaultLanguage_g____getter_3_0 (CustomLogic_CustomLogicLocaleBuiltin_o* __i, const MethodInfo* method);
// 0x182024920

Il2CppObject *
CustomLogic_CustomLogicLocaleBuiltin_Bindings_____CreatePropertyBinding__DefaultLanguage_g____getter_3_0
          (CustomLogic_CustomLogicLocaleBuiltin_o *__i,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346466 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    Il2CppMethodInitialized_184346466 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
  }
  if (Il2CppMethodInitialized_18434654b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    Il2CppMethodInitialized_18434654b = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
  }
  return (Il2CppObject *)
         TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->static_fields->_DefaultLanguage_k__BackingField;
}


// CustomLogic.CustomLogicLocaleBuiltin.Bindings$$<__CreatePropertyBinding__DefaultLanguage>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicLocaleBuiltin_Bindings_____CreatePropertyBinding__DefaultLanguage_g____setter_3_1 (CustomLogic_CustomLogicLocaleBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x1820249b0

void CustomLogic_CustomLogicLocaleBuiltin_Bindings_____CreatePropertyBinding__DefaultLanguage_g____setter_3_1
               (CustomLogic_CustomLogicLocaleBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  System_String_o *value;
  
  if (Il2CppMethodInitialized_184346467 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    Il2CppMethodInitialized_184346467 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__v,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
  }
  if (Il2CppMethodInitialized_18434654a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    Il2CppMethodInitialized_18434654a = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
  }
  TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->static_fields->_DefaultLanguage_k__BackingField = value;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->static_fields->_DefaultLanguage_k__BackingField,
             value);
  return;
}


// CustomLogic.CustomLogicLocaleBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicLocaleBuiltin___ctor (CustomLogic_CustomLogicLocaleBuiltin_o* __this, const MethodInfo* method);
// 0x182032f20

void CustomLogic_CustomLogicLocaleBuiltin___ctor
               (CustomLogic_CustomLogicLocaleBuiltin_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_18434644d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    Il2CppMethodInitialized_18434644d = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  pSVar1 = CustomLogic_CustomLogicLanguageEnum__get_English((MethodInfo *)0x0);
  if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
  }
  if (Il2CppMethodInitialized_18434654a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    Il2CppMethodInitialized_18434654a = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
  }
  TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->static_fields->_DefaultLanguage_k__BackingField = pSVar1;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->static_fields->_DefaultLanguage_k__BackingField,
             pSVar1);
  pSVar1 = CustomLogic_CustomLogicLanguageEnum__get_TraditionalChinese((MethodInfo *)0x0);
  pSVar2 = CustomLogic_CustomLogicLanguageEnum__get_Chinese((MethodInfo *)0x0);
  if (Il2CppMethodInitialized_184346455 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
    Il2CppMethodInitialized_184346455 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->static_fields->_languageFallbacks;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___set_Item
              (__this_00,(Il2CppObject *)pSVar1,(Il2CppObject *)pSVar2,
               (MethodInfo_147A7F0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
    pSVar1 = CustomLogic_CustomLogicLanguageEnum__get_Chinese((MethodInfo *)0x0);
    pSVar2 = CustomLogic_CustomLogicLanguageEnum__get_TraditionalChinese((MethodInfo *)0x0);
    CustomLogic_CustomLogicLocaleBuiltin__RegisterFallback(pSVar1,pSVar2,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLocaleBuiltin$$get_CurrentLanguage
// il2cpp: System_String_o* CustomLogic_CustomLogicLocaleBuiltin__get_CurrentLanguage (const MethodInfo* method);
// 0x1820330d0

System_String_o * CustomLogic_CustomLogicLocaleBuiltin__get_CurrentLanguage(MethodInfo *method)

{
  Settings_GeneralSettings_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  
  if (Il2CppMethodInitialized_18434644e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_18434644e = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
  if ((pSVar1 != (Settings_GeneralSettings_o *)0x0) &&
     (pSVar2 = (pSVar1->fields).Language, pSVar2 != (Settings_StringSetting_o *)0x0)) {
    return (pSVar2->fields)._value;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLocaleBuiltin$$get_DefaultLanguage
// il2cpp: System_String_o* CustomLogic_CustomLogicLocaleBuiltin__get_DefaultLanguage (const MethodInfo* method);
// 0x182033130

System_String_o * CustomLogic_CustomLogicLocaleBuiltin__get_DefaultLanguage(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434644f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    Il2CppMethodInitialized_18434644f = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
  }
  return TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->static_fields->_DefaultLanguage_k__BackingField;
}


// CustomLogic.CustomLogicLocaleBuiltin$$set_DefaultLanguage
// il2cpp: void CustomLogic_CustomLogicLocaleBuiltin__set_DefaultLanguage (System_String_o* value, const MethodInfo* method);
// 0x182033180

void CustomLogic_CustomLogicLocaleBuiltin__set_DefaultLanguage(System_String_o *value,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346450 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    Il2CppMethodInitialized_184346450 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
  }
  TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->static_fields->_DefaultLanguage_k__BackingField = value;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->static_fields->_DefaultLanguage_k__BackingField,
             value);
  return;
}


// CustomLogic.CustomLogicLocaleBuiltin$$Get
// il2cpp: System_String_o* CustomLogic_CustomLogicLocaleBuiltin__Get (System_String_o* key, const MethodInfo* method);
// 0x182032360

System_String_o * CustomLogic_CustomLogicLocaleBuiltin__Get(System_String_o *key,MethodInfo *method)

{
  Settings_GeneralSettings_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  System_String_o *pSVar3;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  
  if (Il2CppMethodInitialized_184346451 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_184346451 = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->GeneralSettings;
  if ((pSVar1 == (Settings_GeneralSettings_o *)0x0) ||
     (pSVar2 = (pSVar1->fields).Language, pSVar2 == (Settings_StringSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pSVar3 = (pSVar2->fields)._value;
  if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
  }
  pSVar3 = CustomLogic_CustomLogicLocaleBuiltin__ResolveString(key,pSVar3,(MethodInfo *)0x0);
  if (pSVar3 != (System_String_o *)0x0) {
    return pSVar3;
  }
  pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Localized string not found: ");
  pSVar3 = System_String__Concat_1969e50(pSVar3,key,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_1b6abf0(__this,pSVar3,(MethodInfo *)0x0);
  lastManagedFrame =
       (MethodInfo *)il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicLocaleBuiltin_Get)
  ;
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicLocaleBuiltin$$Set
// il2cpp: void CustomLogic_CustomLogicLocaleBuiltin__Set (System_String_o* language, System_String_o* key, System_String_o* value, const MethodInfo* method);
// 0x182032cc0

void CustomLogic_CustomLogicLocaleBuiltin__Set
               (System_String_o *language,System_String_o *key,System_String_o *value,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool bVar2;
  System_Collections_Generic_Dictionary_string__string__o *__this;
  System_Collections_Generic_Dictionary_string__string__o *local_res8;
  
  if (Il2CppMethodInitialized_184346452 == '\0') {
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
    Il2CppMethodInitialized_184346452 = '\x01';
  }
  local_res8 = (System_Collections_Generic_Dictionary_string__string__o *)0x0;
  if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->static_fields->_languages;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (pSVar1,(Il2CppObject *)language,(Il2CppObject **)&local_res8,
                       (MethodInfo_14769C0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_string_TryGetValue
                      );
    if (!bVar2) {
      __this = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
      System_Collections_Generic_Dictionary_object__object____ctor
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                 (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
      local_res8 = __this;
      if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->static_fields->_languages;
      if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_182032e21;
      System_Collections_Generic_Dictionary_object__object___set_Item
                (pSVar1,(Il2CppObject *)language,(Il2CppObject *)local_res8,
                 (MethodInfo_147A7F0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_string_set_Item);
    }
    if (local_res8 != (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item
                ((System_Collections_Generic_Dictionary_object__object__o *)local_res8,(Il2CppObject *)key,
                 (Il2CppObject *)value,
                 (MethodInfo_147A7F0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item
                );
      return;
    }
  }
label_182032e21:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLocaleBuiltin$$RegisterLanguage
// il2cpp: void CustomLogic_CustomLogicLocaleBuiltin__RegisterLanguage (System_String_o* language, CustomLogic_CustomLogicDictBuiltin_o* strings, const MethodInfo* method);
// 0x182032500
// eh: try 0x182032640..0x182032772 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 21 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18203263e: nop 
// asm:   0x1820326db: mov rdx, qword ptr [rip + 0x205c7a6]  ; MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose
// asm:   0x1820326e2: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1820326e7: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820326ec: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1820326f1: test rcx, rcx
// asm:   0x1820326f4: jne 0x182032772
// asm:   0x1820326f6: mov r12, qword ptr [rsp + 0x90]
// asm:   0x1820326fe: mov rsi, qword ptr [rsp + 0x98]
// asm:   0x182032772: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void CustomLogic_CustomLogicLocaleBuiltin__RegisterLanguage
               (System_String_o *language,CustomLogic_CustomLogicDictBuiltin_o *strings,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  int32_t capacity;
  System_Collections_Generic_Dictionary_string__string__o *__this_01;
  CustomLogic_CustomLogicListBuiltin_o *pCVar2;
  Il2CppObject *key;
  Il2CppObject *pIVar3;
  undefined1 local_60 [16];
  Il2CppObject *local_50;
  undefined1 local_48 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_40;
  Il2CppObject *local_38;
  
  if (Il2CppMethodInitialized_184346453 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor_40dd7d8);
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
    Il2CppMethodInitialized_184346453 = '\x01';
  }
  local_48 = (undefined1  [8])0x0;
  pUStack_40 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_38 = (Il2CppObject *)0x0;
  if (strings != (CustomLogic_CustomLogicDictBuiltin_o *)0x0) {
    capacity = CustomLogic_CustomLogicDictBuiltin__get_Count(strings,(MethodInfo *)0x0);
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
    System_Collections_Generic_Dictionary_object__object____ctor_147a490
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,capacity,
               (MethodInfo_147A490 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor_40dd7d8);
    pCVar2 = CustomLogic_CustomLogicDictBuiltin__get_Keys(strings,(MethodInfo *)0x0);
    if ((pCVar2 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) &&
       (__this = (pCVar2->fields).List, __this != (System_Collections_Generic_List_object__o *)0x0)) {
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_60,
                 (System_Collections_Generic_List_T__o *)__this,
                 (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_object_GetEnumerator);
      local_48 = (undefined1  [8])local_60._0_8_;
      pUStack_40 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_60._8_8_;
      local_38 = local_50;
      local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_60._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48;
      while( true ) {
        bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          ((System_Collections_Generic_List_Enumerator_object__o *)local_48,
                           (MethodInfo_153A2A0 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_object_MoveNext);
        pIVar3 = local_38;
        if (!bVar1) break;
        if (local_38 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        key = (Il2CppObject *)
              (*local_38->klass->vtable[3].methodPtr)(local_38,local_38->klass->vtable[3].method);
        pIVar3 = CustomLogic_CustomLogicDictBuiltin__Get(strings,pIVar3,(Il2CppObject *)0x0,(MethodInfo *)0x0)
        ;
        if (pIVar3 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar3 = (Il2CppObject *)(*pIVar3->klass->vtable[3].methodPtr)(pIVar3,pIVar3->klass->vtable[3].method)
        ;
        if (__this_01 == (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
          ThrowNullReferenceException();
        }
        System_Collections_Generic_Dictionary_object__object___set_Item
                  ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,key,pIVar3,
                   (MethodInfo_147A7F0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48,
                 MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose);
      if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
      }
      __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                  TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->static_fields->_languages;
      if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (__this_00,(Il2CppObject *)language,(Il2CppObject *)__this_01,
                   (MethodInfo_147A7F0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_string_set_Item);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLocaleBuiltin$$RegisterLanguages
// il2cpp: void CustomLogic_CustomLogicLocaleBuiltin__RegisterLanguages (System_String_o* pattern, const MethodInfo* method);
// 0x182032780
// eh: try 0x1820328a0..0x182032948 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182032912: mov rdx, qword ptr [rip + 0x2084367]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_Dictionary_string_string_Dispose
// asm:   0x182032919: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18203291e: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182032923: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x182032928: test rcx, rcx
// asm:   0x18203292b: jne 0x182032948
// asm:   0x182032948: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void CustomLogic_CustomLogicLocaleBuiltin__RegisterLanguages(System_String_o *pattern,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  Il2CppObject *key;
  Il2CppObject *value;
  bool bVar1;
  System_Collections_Generic_Dictionary_string__Dictionary_string__string___o *__this_00;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o local_60;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_38;
  
  if (Il2CppMethodInitialized_184346454 == '\0') {
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
    Il2CppMethodInitialized_184346454 = '\x01';
  }
  local_60.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_60.fields._version = 0;
  local_60.fields._index = 0;
  local_60.fields._current.fields.key = (Il2CppObject *)0x0;
  local_60.fields._current.fields.value = (Il2CppObject *)0x0;
  local_60.fields._getEnumeratorRetType = 0;
  local_60.fields._36_4_ = 0;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  __this_00 = UI_UIManager__GetLocaleCategoryStrings(pattern,(MethodInfo *)0x0);
  if (__this_00 != (System_Collections_Generic_Dictionary_string__Dictionary_string__string___o *)0x0) {
    System_Collections_Generic_Dictionary_PhotonNetwork_RaiseEventBatch__object___GetEnumerator
              (&local_38,(System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               (MethodInfo_13C1150 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_string_GetEnumerator)
    ;
    local_60.fields._dictionary = local_38.fields._dictionary;
    local_60.fields._version = local_38.fields._version;
    local_60.fields._index = local_38.fields._index;
    local_60.fields._current.fields.key = local_38.fields._current.fields.key;
    local_60.fields._current.fields.value = local_38.fields._current.fields.value;
    local_60.fields._getEnumeratorRetType = local_38.fields._getEnumeratorRetType;
    local_60.fields._36_4_ = local_38.fields._36_4_;
    while( true ) {
      bVar1 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                        (&local_60,
                         (MethodInfo_1585360 *)
                         MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_Dictionary_string_string_MoveNext
                        );
      value = local_60.fields._current.fields.value;
      key = local_60.fields._current.fields.key;
      if (!bVar1) {
        System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_60,
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
                 (MethodInfo_147A7F0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_string_set_Item);
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLocaleBuiltin$$RegisterFallback
// il2cpp: void CustomLogic_CustomLogicLocaleBuiltin__RegisterFallback (System_String_o* fromLanguage, System_String_o* toLanguage, const MethodInfo* method);
// 0x182032470

void CustomLogic_CustomLogicLocaleBuiltin__RegisterFallback
               (System_String_o *fromLanguage,System_String_o *toLanguage,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  
  if (Il2CppMethodInitialized_184346455 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
    Il2CppMethodInitialized_184346455 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->static_fields->_languageFallbacks;
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___set_Item
              (__this,(Il2CppObject *)fromLanguage,(Il2CppObject *)toLanguage,
               (MethodInfo_147A7F0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLocaleBuiltin$$RemoveFallback
// il2cpp: void CustomLogic_CustomLogicLocaleBuiltin__RemoveFallback (System_String_o* fromLanguage, const MethodInfo* method);
// 0x182032960

void CustomLogic_CustomLogicLocaleBuiltin__RemoveFallback(System_String_o *fromLanguage,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  
  if (Il2CppMethodInitialized_184346456 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_Remove);
    Il2CppMethodInitialized_184346456 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->static_fields->_languageFallbacks;
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Remove
              (__this,(Il2CppObject *)fromLanguage,
               (MethodInfo_1470BF0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Remove);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLocaleBuiltin$$ResolveString
// il2cpp: System_String_o* CustomLogic_CustomLogicLocaleBuiltin__ResolveString (System_String_o* key, System_String_o* requestedLang, const MethodInfo* method);
// 0x1820329e0

System_String_o *
CustomLogic_CustomLogicLocaleBuiltin__ResolveString
          (System_String_o *key,System_String_o *requestedLang,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool bVar2;
  System_String_o *pSVar3;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  System_Collections_Generic_Dictionary_object__object__o *local_res10 [2];
  System_String_o *local_res20;
  Il2CppObject *local_38;
  System_Collections_Generic_Dictionary_object__object__o *local_30;
  System_String_o *local_28;
  System_Collections_Generic_Dictionary_object__object__o *local_20;
  System_String_o *local_18 [2];
  
  if (Il2CppMethodInitialized_184346457 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_string_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
    Il2CppMethodInitialized_184346457 = '\x01';
  }
  local_res10[0] = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
  local_res20 = (System_String_o *)0x0;
  local_38 = (Il2CppObject *)0x0;
  local_30 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
  local_28 = (System_String_o *)0x0;
  local_20 = (System_Collections_Generic_Dictionary_object__object__o *)0x0;
  local_18[0] = (System_String_o *)0x0;
  if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->static_fields->_languages;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (pSVar1,(Il2CppObject *)requestedLang,(Il2CppObject **)local_res10,
                       (MethodInfo_14769C0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_string_TryGetValue
                      );
    if (bVar2) {
      if (local_res10[0] == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
      goto label_182032c58;
      bVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                        (local_res10[0],(Il2CppObject *)key,(Il2CppObject **)&local_res20,
                         (MethodInfo_14769C0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
      if (bVar2) {
        return local_res20;
      }
    }
    if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    }
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->static_fields->_languageFallbacks;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      bVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                        (pSVar1,(Il2CppObject *)requestedLang,&local_38,
                         (MethodInfo_14769C0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
      if (bVar2) {
        if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
        }
        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                 TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->static_fields->_languages;
        if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_182032c58;
        bVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                          (pSVar1,local_38,(Il2CppObject **)&local_30,
                           (MethodInfo_14769C0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_string_TryGetValue
                          );
        if (bVar2) {
          if (local_30 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_182032c58;
          bVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                            (local_30,(Il2CppObject *)key,(Il2CppObject **)&local_28,
                             (MethodInfo_14769C0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
          if (bVar2) {
            return local_28;
          }
        }
      }
      if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
      }
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->static_fields->_languages;
      if (Il2CppMethodInitialized_18434654b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
        Il2CppMethodInitialized_18434654b = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
      }
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        bVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                          (pSVar1,(Il2CppObject *)
                                  TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->static_fields->
                                  _DefaultLanguage_k__BackingField,(Il2CppObject **)&local_20,
                           (MethodInfo_14769C0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_string_TryGetValue
                          );
        if (bVar2) {
          if (local_20 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_182032c58;
          bVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                            (local_20,(Il2CppObject *)key,(Il2CppObject **)local_18,
                             (MethodInfo_14769C0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_string_TryGetValue);
          if (bVar2) {
            return local_18[0];
          }
        }
        pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Locale string not found: ");
        pSVar3 = System_String__Concat_1969e50(pSVar3,key,(MethodInfo *)0x0);
        klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
        __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
        System_Exception___ctor_1b6abf0(__this,pSVar3,(MethodInfo *)0x0);
        lastManagedFrame =
             (MethodInfo *)
             il2cpp_codegen_get_runtime_metadata
                       (&MethodInfo_CustomLogic_CustomLogicLocaleBuiltin_ResolveString);
        il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
      }
    }
  }
label_182032c58:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicLocaleBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicLocaleBuiltin__get_ClassName (CustomLogic_CustomLogicLocaleBuiltin_o* __this, const MethodInfo* method);
// 0x1820330a0

System_String_o *
CustomLogic_CustomLogicLocaleBuiltin__get_ClassName
          (CustomLogic_CustomLogicLocaleBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346458 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Locale");
    Il2CppMethodInitialized_184346458 = '\x01';
  }
  return "Locale";
}


// CustomLogic.CustomLogicLocaleBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicLocaleBuiltin__get_IsAbstract (CustomLogic_CustomLogicLocaleBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicLocaleBuiltin__get_IsAbstract(CustomLogic_CustomLogicLocaleBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicLocaleBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicLocaleBuiltin__get_IsStatic (CustomLogic_CustomLogicLocaleBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicLocaleBuiltin__get_IsStatic(CustomLogic_CustomLogicLocaleBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicLocaleBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicLocaleBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicLocaleBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicLocaleBuiltin__get_InheritBaseMembers(CustomLogic_CustomLogicLocaleBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicLocaleBuiltin$$.cctor
// il2cpp: void CustomLogic_CustomLogicLocaleBuiltin___cctor (const MethodInfo* method);
// 0x182032e30

void CustomLogic_CustomLogicLocaleBuiltin___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__Dictionary_string__string___o *__this;
  System_Collections_Generic_Dictionary_string__string__o *__this_00;
  
  if (Il2CppMethodInitialized_184346459 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_string);
    Il2CppMethodInitialized_184346459 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
             (MethodInfo_1454140 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_Dictionary_string_string_ctor);
  TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->static_fields->_languages = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->static_fields->_languages,__this);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
  TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->static_fields->_languageFallbacks = __this_00;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicLocaleBuiltin->static_fields->_languageFallbacks,__this_00);
  return;
}


