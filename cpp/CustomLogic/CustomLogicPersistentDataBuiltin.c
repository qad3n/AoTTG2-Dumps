// Type: CustomLogic.CustomLogicPersistentDataBuiltin
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicPersistentDataBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicPersistentDataBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicPersistentDataBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicPersistentDataBuiltin_o* CustomLogic_CustomLogicPersistentDataBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x18203cb20

CustomLogic_CustomLogicPersistentDataBuiltin_o *
CustomLogic_CustomLogicPersistentDataBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_1843464e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin);
    Il2CppMethodInitialized_1843464e5 = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin)
      ;
      if (Il2CppMethodInitialized_1843464dc == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_1843464dc = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicPersistentDataBuiltin_o *)__this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicPersistentDataBuiltin constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x182044b90

void CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_o *__this;
  
  if (Il2CppMethodInitialized_1843464ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843464ef = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields->__9,__this);
  return;
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c___ctor(CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetProperty>b__2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_____CreateMethodBinding__SetProperty_b__2_0 (CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPersistentDataBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182042190

Il2CppObject *
CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_____CreateMethodBinding__SetProperty_b__2_0
          (CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPersistentDataBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_String_o *pSVar2;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *lastManagedFrame;
  Il2CppObject *pIVar3;
  
  if (Il2CppMethodInitialized_1843464f0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843464f0 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_1820422de:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pSVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (pIVar1,(MethodInfo_66EB70 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (1 < (uint)__a->max_length) {
      pIVar1 = __a->m_Items[1];
      if (Il2CppMethodInitialized_1843464dd == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
        Il2CppMethodInitialized_1843464dd = '\x01';
      }
      if (pIVar1 != (Il2CppObject *)0x0) {
        pIVar3 = (Il2CppObject *)0x0;
        if (pIVar1->klass == g_data_184354e38) {
          pIVar3 = pIVar1;
        }
        if (pIVar3 == (Il2CppObject *)0x0) {
          pIVar3 = (Il2CppObject *)0x0;
          if (pIVar1->klass == g_data_184354e08) {
            pIVar3 = pIVar1;
          }
          if (pIVar3 == (Il2CppObject *)0x0) {
            pIVar3 = (Il2CppObject *)0x0;
            if (pIVar1->klass == g_data_184354e50) {
              pIVar3 = pIVar1;
            }
            if (pIVar3 == (Il2CppObject *)0x0) {
              pIVar3 = (Il2CppObject *)0x0;
              if (pIVar1->klass == g_data_184354de8) {
                pIVar3 = pIVar1;
              }
              if (pIVar3 == (Il2CppObject *)0x0) {
                klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
                __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
                pSVar2 = il2cpp_codegen_get_runtime_metadata(&"PersistentData.SetProperty only supports null, float, int, string, or bool values.");
                System_Exception___ctor_1b6abf0(__this_01,pSVar2,(MethodInfo *)0x0);
                lastManagedFrame =
                     il2cpp_codegen_get_runtime_metadata
                               (&MethodInfo_CustomLogic_CustomLogicPersistentDataBuiltin_SetProperty);
                il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
              }
            }
          }
        }
      }
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                  TypeInfo_CustomLogic_CustomLogicManager->static_fields->PersistentData;
      if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (__this_00,(Il2CppObject *)pSVar2,pIVar1,
                   (MethodInfo_147A7F0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
        return (Il2CppObject *)0x0;
      }
      goto label_1820422de;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetProperty>b__3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_____CreateMethodBinding__GetProperty_b__3_0 (CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPersistentDataBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x18203fe80

Il2CppObject *
CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_____CreateMethodBinding__GetProperty_b__3_0
          (CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPersistentDataBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *key;
  Il2CppObject *pIVar1;
  
  if (Il2CppMethodInitialized_1843464f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843464f1 = '\x01';
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
                    (pIVar1,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string)
    ;
    if (1 < (uint)__a->max_length) {
      pIVar1 = __a->m_Items[1];
      if (Il2CppMethodInitialized_1843464de == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_CollectionExtensions_GetValueOrDefault_string_object
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
        Il2CppMethodInitialized_1843464de = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      pIVar1 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__65cd20
                         ((System_Collections_Generic_IReadOnlyDictionary_TKey__TValue__o *)
                          TypeInfo_CustomLogic_CustomLogicManager->static_fields->PersistentData,
                          (Il2CppObject *)key,pIVar1,
                          (MethodInfo_65CD20 *)
                          MethodInfo_System_Collections_Generic_CollectionExtensions_GetValueOrDefault_string_object
                         );
      return pIVar1;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings.<>c$$<__CreateMethodBinding__LoadFromFile>b__4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_____CreateMethodBinding__LoadFromFile_b__4_0 (CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPersistentDataBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182040710

Il2CppObject *
CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_____CreateMethodBinding__LoadFromFile_b__4_0
          (CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPersistentDataBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool encrypted;
  System_String_o *fileName;
  
  if (Il2CppMethodInitialized_1843464f2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843464f2 = '\x01';
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
                         (obj,(MethodInfo_66EB70 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (1 < (uint)__a->max_length) {
      encrypted = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                            (__a->m_Items[1],
                             (MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
      CustomLogic_CustomLogicPersistentDataBuiltin__LoadFromFile(fileName,encrypted,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings.<>c$$<__CreateMethodBinding__SaveToFile>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_____CreateMethodBinding__SaveToFile_b__5_0 (CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPersistentDataBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182040ff0

Il2CppObject *
CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_____CreateMethodBinding__SaveToFile_b__5_0
          (CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPersistentDataBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool encrypted;
  System_String_o *fileName;
  
  if (Il2CppMethodInitialized_1843464f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843464f3 = '\x01';
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
                         (obj,(MethodInfo_66EB70 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (1 < (uint)__a->max_length) {
      encrypted = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                            (__a->m_Items[1],
                             (MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
      CustomLogic_CustomLogicPersistentDataBuiltin__SaveToFile(fileName,encrypted,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings.<>c$$<__CreateMethodBinding__Clear>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_____CreateMethodBinding__Clear_b__6_0 (CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPersistentDataBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x18203d720

Il2CppObject *
CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_____CreateMethodBinding__Clear_b__6_0
          (CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPersistentDataBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__object__o *__this_00;
  
  if (Il2CppMethodInitialized_1843464e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_Clear);
    Il2CppMethodInitialized_1843464e1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->PersistentData;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__object__o *)0x0) {
    System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               (MethodInfo_13BF1C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Clear);
    return (Il2CppObject *)0x0;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsValidFileName>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_____CreateMethodBinding__IsValidFileName_b__7_0 (CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPersistentDataBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820402d0

Il2CppObject *
CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_____CreateMethodBinding__IsValidFileName_b__7_0
          (CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPersistentDataBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *fileName;
  Il2CppObject *pIVar1;
  undefined1 local_res18 [16];
  
  if (Il2CppMethodInitialized_1843464f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843464f4 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      pIVar1 = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      fileName = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (pIVar1,(MethodInfo_66EB70 *)
                                   MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      if (Il2CppMethodInitialized_1843464e2 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
        Il2CppMethodInitialized_1843464e2 = '\x01';
      }
      if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
      }
      local_res18[0] = Utility_Util__IsValidFileName(fileName,(MethodInfo *)0x0);
      pIVar1 = il2cpp_value_box(g_data_184354de8,local_res18);
      return pIVar1;
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings.<>c$$<__CreateMethodBinding__FileExists>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_____CreateMethodBinding__FileExists_b__8_0 (CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPersistentDataBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x18203e7c0

Il2CppObject *
CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_____CreateMethodBinding__FileExists_b__8_0
          (CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPersistentDataBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *path1;
  bool bVar1;
  System_String_o *pSVar2;
  Il2CppObject *pIVar3;
  Il2CppClass *klass;
  System_Exception_o *__this_00;
  MethodInfo *lastManagedFrame;
  undefined1 local_res18 [16];
  
  if (Il2CppMethodInitialized_1843464f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843464f5 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  pIVar3 = __a->m_Items[0];
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pSVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (pIVar3,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string
                     );
  if (Il2CppMethodInitialized_1843464e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_FolderPaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_Path);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&".txt");
    Il2CppMethodInitialized_1843464e3 = '\x01';
  }
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  bVar1 = Utility_Util__IsValidFileName(pSVar2,(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
    }
    path1 = TypeInfo_Utility_FolderPaths->static_fields->PersistentData;
    pSVar2 = System_String__Concat_1969e50(pSVar2,".txt",(MethodInfo *)0x0);
    if ((TypeInfo_System_IO_Path->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_IO_Path);
    }
    pSVar2 = System_IO_Path__Combine(path1,pSVar2,(MethodInfo *)0x0);
    local_res18[0] = System_IO_File__Exists(pSVar2,(MethodInfo *)0x0);
    pIVar3 = il2cpp_value_box(g_data_184354de8,local_res18);
    return pIVar3;
  }
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this_00 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  pSVar2 = il2cpp_codegen_get_runtime_metadata(&"PersistentData.FileExists only supports legal fileName characters.");
  System_Exception___ctor_1b6abf0(__this_00,pSVar2,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicPersistentDataBuiltin_FileExists);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicPersistentDataBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x182019e90

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicPersistentDataBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  uint32_t uVar3;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  System_String_o *pSVar4;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *lastManagedFrame;
  System_Func_CustomLogicPersistentDataBuiltin__object____object__o **targetAddress;
  
  if (Il2CppMethodInitialized_1843464e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"IsValidFileName");
    il2cpp_codegen_initialize_runtime_metadata(&"SetProperty");
    il2cpp_codegen_initialize_runtime_metadata(&"GetProperty");
    il2cpp_codegen_initialize_runtime_metadata(&"Clear");
    il2cpp_codegen_initialize_runtime_metadata(&"SaveToFile");
    il2cpp_codegen_initialize_runtime_metadata(&"FileExists");
    il2cpp_codegen_initialize_runtime_metadata(&"LoadFromFile");
    Il2CppMethodInitialized_1843464e6 = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x38dfc974) {
    if (uVar3 == 0x4a57fc2) {
      bVar2 = System_String__op_Equality(name,"Clear",(MethodInfo *)0x0);
      if (!bVar2) goto label_18201a743;
      if ((TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
         ) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_1843464eb == '\0') {
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
        Il2CppMethodInitialized_1843464eb = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
          0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields->__9__6_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_18201a714;
      if ((TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
          0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)
               TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)
                          TypeInfo_System_Func_CustomLogicPersistentDataBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c___CreateMethodBinding__Clear_b__6_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields->__9__6_0 =
           (System_Func_CustomLogicPersistentDataBuiltin__object____object__o *)__this;
      targetAddress =
           &TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields->__9__6_0;
    }
    else if (uVar3 == 0xb488604) {
      bVar2 = System_String__op_Equality(name,"IsValidFileName",(MethodInfo *)0x0);
      if (!bVar2) goto label_18201a743;
      if ((TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
         ) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_1843464ec == '\0') {
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
        Il2CppMethodInitialized_1843464ec = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
          0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields->__9__7_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_18201a714;
      if ((TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
          0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)
               TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)
                          TypeInfo_System_Func_CustomLogicPersistentDataBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c___CreateMethodBinding__IsValidFileName_b
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields->__9__7_0 =
           (System_Func_CustomLogicPersistentDataBuiltin__object____object__o *)__this;
      targetAddress =
           &TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields->__9__7_0;
    }
    else {
      if (uVar3 != 0x38dfc973) goto label_18201a743;
      bVar2 = System_String__op_Equality(name,"FileExists",(MethodInfo *)0x0);
      if (!bVar2) goto label_18201a743;
      if ((TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
         ) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_1843464ed == '\0') {
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
        Il2CppMethodInitialized_1843464ed = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
          0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields->__9__8_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_18201a714;
      if ((TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
          0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)
               TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)
                          TypeInfo_System_Func_CustomLogicPersistentDataBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c___CreateMethodBinding__FileExists_b__8_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields->__9__8_0 =
           (System_Func_CustomLogicPersistentDataBuiltin__object____object__o *)__this;
      targetAddress =
           &TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields->__9__8_0;
    }
  }
  else if (uVar3 < 0x8f246a28) {
    if (uVar3 == 0x3fc653c7) {
      bVar2 = System_String__op_Equality(name,"LoadFromFile",(MethodInfo *)0x0);
      if (!bVar2) goto label_18201a743;
      if ((TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
         ) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_1843464e9 == '\0') {
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
        Il2CppMethodInitialized_1843464e9 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
          0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields->__9__4_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_18201a714;
      if ((TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
          0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)
               TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)
                          TypeInfo_System_Func_CustomLogicPersistentDataBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c___CreateMethodBinding__LoadFromFile_b__4
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields->__9__4_0 =
           (System_Func_CustomLogicPersistentDataBuiltin__object____object__o *)__this;
      targetAddress =
           &TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields->__9__4_0;
    }
    else {
      if (uVar3 != 0x8f246a27) goto label_18201a743;
      bVar2 = System_String__op_Equality(name,"SaveToFile",(MethodInfo *)0x0);
      if (!bVar2) goto label_18201a743;
      if ((TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
         ) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_1843464ea == '\0') {
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
        Il2CppMethodInitialized_1843464ea = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
          0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields->__9__5_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_18201a714;
      if ((TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
          0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)
               TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)
                          TypeInfo_System_Func_CustomLogicPersistentDataBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c___CreateMethodBinding__SaveToFile_b__5_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields->__9__5_0 =
           (System_Func_CustomLogicPersistentDataBuiltin__object____object__o *)__this;
      targetAddress =
           &TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields->__9__5_0;
    }
  }
  else if (uVar3 == 0xb6e34446) {
    bVar2 = System_String__op_Equality(name,"GetProperty",(MethodInfo *)0x0);
    if (!bVar2) goto label_18201a743;
    if ((TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_1843464e8 == '\0') {
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
      Il2CppMethodInitialized_1843464e8 = '\x01';
    }
    if ((TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0
       ) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c);
    }
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields->__9__3_0;
    if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_18201a714;
    if ((TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0
       ) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c);
    }
    pIVar1 = (Il2CppObject *)
             TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicPersistentDataBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,pIVar1,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c___CreateMethodBinding__GetProperty_b__3
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields->__9__3_0 =
         (System_Func_CustomLogicPersistentDataBuiltin__object____object__o *)__this;
    targetAddress = &TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields->__9__3_0
    ;
  }
  else {
    if (uVar3 != 0xecbfdf0a) {
label_18201a743:
      pSVar4 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicPersistentDataBuiltin not found");
      str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
      pSVar4 = System_String__Concat_1969b70(str0,name,pSVar4,(MethodInfo *)0x0);
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
      __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
      System_Exception___ctor_1b6abf0(__this_01,pSVar4,(MethodInfo *)0x0);
      lastManagedFrame =
           il2cpp_codegen_get_runtime_metadata
                     (&MethodInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_CreateMemberBinding);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
    }
    bVar2 = System_String__op_Equality(name,"SetProperty",(MethodInfo *)0x0);
    if (!bVar2) goto label_18201a743;
    if ((TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_1843464e7 == '\0') {
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
      Il2CppMethodInitialized_1843464e7 = '\x01';
    }
    if ((TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0
       ) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c);
    }
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields->__9__2_0;
    if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_18201a714;
    if ((TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0
       ) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c);
    }
    pIVar1 = (Il2CppObject *)
             TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicPersistentDataBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,pIVar1,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c___CreateMethodBinding__SetProperty_b__2
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields->__9__2_0 =
         (System_Func_CustomLogicPersistentDataBuiltin__object____object__o *)__this;
    targetAddress = &TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields->__9__2_0
    ;
  }
  Il2CppCodeGenWriteBarrier(targetAddress,__this);
label_18201a714:
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin)
  ;
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_00;
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings$$__CreateMethodBinding__SetProperty
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o* CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__SetProperty (const MethodInfo* method);
// 0x18202b700

CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *
CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__SetProperty(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843464e7 == '\0') {
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
    Il2CppMethodInitialized_1843464e7 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
  {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields->__9__2_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0
       ) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)
             TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicPersistentDataBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c___CreateMethodBinding__SetProperty_b__2
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields->__9__2_0 =
         (System_Func_CustomLogicPersistentDataBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields->__9__2_0,
               __this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin)
  ;
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings$$__CreateMethodBinding__GetProperty
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o* CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__GetProperty (const MethodInfo* method);
// 0x182028530

CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *
CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__GetProperty(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843464e8 == '\0') {
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
    Il2CppMethodInitialized_1843464e8 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
  {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields->__9__3_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0
       ) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)
             TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicPersistentDataBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c___CreateMethodBinding__GetProperty_b__3
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields->__9__3_0 =
         (System_Func_CustomLogicPersistentDataBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields->__9__3_0,
               __this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin)
  ;
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings$$__CreateMethodBinding__LoadFromFile
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o* CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__LoadFromFile (const MethodInfo* method);
// 0x1820292b0

CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *
CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__LoadFromFile(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843464e9 == '\0') {
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
    Il2CppMethodInitialized_1843464e9 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
  {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields->__9__4_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0
       ) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)
             TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicPersistentDataBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c___CreateMethodBinding__LoadFromFile_b__4
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields->__9__4_0 =
         (System_Func_CustomLogicPersistentDataBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields->__9__4_0,
               __this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin)
  ;
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings$$__CreateMethodBinding__SaveToFile
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o* CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__SaveToFile (const MethodInfo* method);
// 0x18202a290

CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *
CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__SaveToFile(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843464ea == '\0') {
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
    Il2CppMethodInitialized_1843464ea = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
  {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields->__9__5_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0
       ) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)
             TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicPersistentDataBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c___CreateMethodBinding__SaveToFile_b__5_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields->__9__5_0 =
         (System_Func_CustomLogicPersistentDataBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields->__9__5_0,
               __this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin)
  ;
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings$$__CreateMethodBinding__Clear
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o* CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__Clear (const MethodInfo* method);
// 0x182025a30

CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *
CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__Clear(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843464eb == '\0') {
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
    Il2CppMethodInitialized_1843464eb = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
  {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields->__9__6_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0
       ) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)
             TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicPersistentDataBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c___CreateMethodBinding__Clear_b__6_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields->__9__6_0 =
         (System_Func_CustomLogicPersistentDataBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields->__9__6_0,
               __this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin)
  ;
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings$$__CreateMethodBinding__IsValidFileName
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o* CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__IsValidFileName (const MethodInfo* method);
// 0x182028d10

CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *
CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__IsValidFileName
          (MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843464ec == '\0') {
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
    Il2CppMethodInitialized_1843464ec = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
  {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields->__9__7_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0
       ) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)
             TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicPersistentDataBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c___CreateMethodBinding__IsValidFileName_b
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields->__9__7_0 =
         (System_Func_CustomLogicPersistentDataBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields->__9__7_0,
               __this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin)
  ;
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings$$__CreateMethodBinding__FileExists
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o* CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__FileExists (const MethodInfo* method);
// 0x1820267e0

CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *
CustomLogic_CustomLogicPersistentDataBuiltin_Bindings____CreateMethodBinding__FileExists(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843464ed == '\0') {
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
    Il2CppMethodInitialized_1843464ed = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
  {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields->__9__8_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0
       ) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)
             TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)
                        TypeInfo_System_Func_CustomLogicPersistentDataBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c___CreateMethodBinding__FileExists_b__8_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields->__9__8_0 =
         (System_Func_CustomLogicPersistentDataBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings_c->static_fields->__9__8_0,
               __this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin)
  ;
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicPersistentDataBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicPersistentDataBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x182030210

void CustomLogic_CustomLogicPersistentDataBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_1843464ee == '\0') {
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
    Il2CppMethodInitialized_1843464ee = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetProperty",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetProperty",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LoadFromFile",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SaveToFile",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Clear",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsValidFileName",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FileExists",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_Bindings->static_fields->MemberNames,
               __this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPersistentDataBuiltin.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicPersistentDataBuiltin___c___cctor (const MethodInfo* method);
// 0x182044dc0

void CustomLogic_CustomLogicPersistentDataBuiltin___c___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicPersistentDataBuiltin___c_o *__this;
  
  if (Il2CppMethodInitialized_1843464f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_c);
    Il2CppMethodInitialized_1843464f6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_c->static_fields->__9,__this);
  return;
}


// CustomLogic.CustomLogicPersistentDataBuiltin.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicPersistentDataBuiltin___c___ctor (CustomLogic_CustomLogicPersistentDataBuiltin___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicPersistentDataBuiltin___c___ctor(CustomLogic_CustomLogicPersistentDataBuiltin___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPersistentDataBuiltin.<>c$$<SaveToFile>b__4_0
// il2cpp: System_DateTime_o CustomLogic_CustomLogicPersistentDataBuiltin___c___SaveToFile_b__4_0 (CustomLogic_CustomLogicPersistentDataBuiltin___c_o* __this, System_IO_FileInfo_o* x, const MethodInfo* method);
// 0x18203d0e0

System_DateTime_o
CustomLogic_CustomLogicPersistentDataBuiltin___c___SaveToFile_b__4_0(CustomLogic_CustomLogicPersistentDataBuiltin___c_o* __this, System_IO_FileInfo_o* x, MethodInfo* method)

{
  System_DateTime_o SVar1;
  
  if (x != (System_IO_FileInfo_o *)0x0) {
    SVar1 = System_IO_FileSystemInfo__get_LastWriteTime((System_IO_FileSystemInfo_o *)x,(MethodInfo *)0x0);
    return (System_DateTime_o)SVar1.fields._dateData;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPersistentDataBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicPersistentDataBuiltin___ctor (CustomLogic_CustomLogicPersistentDataBuiltin_o* __this, const MethodInfo* method);
// 0x182038430

void CustomLogic_CustomLogicPersistentDataBuiltin___ctor
               (CustomLogic_CustomLogicPersistentDataBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843464dc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_1843464dc = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPersistentDataBuiltin$$SetProperty
// il2cpp: void CustomLogic_CustomLogicPersistentDataBuiltin__SetProperty (System_String_o* property, Il2CppObject* value, const MethodInfo* method);
// 0x182038300

void CustomLogic_CustomLogicPersistentDataBuiltin__SetProperty
               (System_String_o *property,Il2CppObject *value,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  Il2CppClass *klass;
  System_Exception_o *__this_00;
  System_String_o *message;
  MethodInfo *lastManagedFrame;
  Il2CppObject *pIVar1;
  
  if (Il2CppMethodInitialized_1843464dd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
    Il2CppMethodInitialized_1843464dd = '\x01';
  }
  if (value != (Il2CppObject *)0x0) {
    pIVar1 = (Il2CppObject *)0x0;
    if (value->klass == g_data_184354e38) {
      pIVar1 = value;
    }
    if (pIVar1 == (Il2CppObject *)0x0) {
      pIVar1 = (Il2CppObject *)0x0;
      if (value->klass == g_data_184354e08) {
        pIVar1 = value;
      }
      if (pIVar1 == (Il2CppObject *)0x0) {
        pIVar1 = (Il2CppObject *)0x0;
        if (value->klass == g_data_184354e50) {
          pIVar1 = value;
        }
        if (pIVar1 == (Il2CppObject *)0x0) {
          pIVar1 = (Il2CppObject *)0x0;
          if (value->klass == g_data_184354de8) {
            pIVar1 = value;
          }
          if (pIVar1 == (Il2CppObject *)0x0) {
            klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
            __this_00 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
            message = il2cpp_codegen_get_runtime_metadata(&"PersistentData.SetProperty only supports null, float, int, string, or bool values.");
            System_Exception___ctor_1b6abf0(__this_00,message,(MethodInfo *)0x0);
            lastManagedFrame =
                 il2cpp_codegen_get_runtime_metadata
                           (&MethodInfo_CustomLogic_CustomLogicPersistentDataBuiltin_SetProperty);
            il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
          }
        }
      }
    }
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           TypeInfo_CustomLogic_CustomLogicManager->static_fields->PersistentData;
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___set_Item
              (__this,(Il2CppObject *)property,value,
               (MethodInfo_147A7F0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPersistentDataBuiltin$$GetProperty
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPersistentDataBuiltin__GetProperty (System_String_o* property, Il2CppObject* defaultValue, const MethodInfo* method);
// 0x182037260

Il2CppObject *
CustomLogic_CustomLogicPersistentDataBuiltin__GetProperty
          (System_String_o *property,Il2CppObject *defaultValue,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (Il2CppMethodInitialized_1843464de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_CollectionExtensions_GetValueOrDefault_string_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_1843464de = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  pIVar1 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__65cd20
                     ((System_Collections_Generic_IReadOnlyDictionary_TKey__TValue__o *)
                      TypeInfo_CustomLogic_CustomLogicManager->static_fields->PersistentData,
                      (Il2CppObject *)property,defaultValue,
                      (MethodInfo_65CD20 *)
                      MethodInfo_System_Collections_Generic_CollectionExtensions_GetValueOrDefault_string_object
                     );
  return pIVar1;
}


// CustomLogic.CustomLogicPersistentDataBuiltin$$LoadFromFile
// il2cpp: void CustomLogic_CustomLogicPersistentDataBuiltin__LoadFromFile (System_String_o* fileName, bool encrypted, const MethodInfo* method);
// 0x182037330

void CustomLogic_CustomLogicPersistentDataBuiltin__LoadFromFile
               (System_String_o *fileName,bool encrypted,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__object__o *__this;
  System_Xml_Schema_XmlSchema_c *pSVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  SimpleJSONFixed_JSONNode_Enumerator_o *pSVar2;
  bool bVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  SimpleAES_o *__this_02;
  SimpleJSONFixed_JSONNode_o *__this_03;
  SimpleJSONFixed_JSONNode_ValueEnumerator_o *pSVar6;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o *pSVar7;
  MethodInfo *pMVar8;
  System_Xml_Schema_XmlSchema_o *pSVar9;
  System_String_array *pSVar10;
  Il2CppClass *klass;
  System_Exception_o *__this_04;
  undefined1 local_res20 [8];
  float local_118;
  int32_t local_114 [3];
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_108;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_b8;
  SimpleJSONFixed_JSONNode_ValueEnumerator_o local_68;
  
  if (Il2CppMethodInitialized_1843464df == '\0') {
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
    Il2CppMethodInitialized_1843464df = '\x01';
  }
  local_108.type = 0;
  local_108._4_4_ = 0;
  local_108.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_108.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_108.m_Object.fields._version = 0;
  local_108.m_Object.fields._index = 0;
  local_108.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_b8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_108.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_108.m_Object.fields._getEnumeratorRetType = 0;
  local_108.m_Object.fields._36_4_ = 0;
  local_108.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_108.m_Array.fields._index = 0;
  local_108.m_Array.fields._version = 0;
  local_b8.type = 0;
  local_b8._4_4_ = 0;
  local_b8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_b8.m_Object.fields._version = 0;
  local_b8.m_Object.fields._index = 0;
  local_b8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_b8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_b8.m_Object.fields._getEnumeratorRetType = 0;
  local_b8.m_Object.fields._36_4_ = 0;
  local_b8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_b8.m_Array.fields._index = 0;
  local_b8.m_Array.fields._version = 0;
  if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
  }
  System_IO_Directory__CreateDirectory
            (TypeInfo_Utility_FolderPaths->static_fields->PersistentData,(MethodInfo *)0x0);
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  __this = TypeInfo_CustomLogic_CustomLogicManager->static_fields->PersistentData;
  if (__this != (System_Collections_Generic_Dictionary_string__object__o *)0x0) {
    System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
               (MethodInfo_13BF1C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Clear);
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    bVar3 = Utility_Util__IsValidFileName(fileName,(MethodInfo *)0x0);
    if (!bVar3) {
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
      __this_04 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
      pSVar5 = il2cpp_codegen_get_runtime_metadata(&"PersistentData.LoadFromFile only supports legal fileName characters.");
      System_Exception___ctor_1b6abf0(__this_04,pSVar5,(MethodInfo *)0x0);
      pMVar8 = il2cpp_codegen_get_runtime_metadata
                         (&MethodInfo_CustomLogic_CustomLogicPersistentDataBuiltin_LoadFromFile);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_04,pMVar8);
    }
    if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
    }
    pSVar5 = TypeInfo_Utility_FolderPaths->static_fields->PersistentData;
    pSVar4 = System_String__Concat_1969e50(fileName,".txt",(MethodInfo *)0x0);
    if ((TypeInfo_System_IO_Path->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_IO_Path);
    }
    pSVar5 = System_IO_Path__Combine(pSVar5,pSVar4,(MethodInfo *)0x0);
    bVar3 = System_IO_File__Exists(pSVar5,(MethodInfo *)0x0);
    if (bVar3) {
      pSVar5 = System_IO_File__ReadAllText(pSVar5,(MethodInfo *)0x0);
      if (encrypted) {
        __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleAES);
        SimpleAES___ctor(__this_02,(MethodInfo *)0x0);
        if (__this_02 == (SimpleAES_o *)0x0) goto label_1820378a7;
        pSVar5 = SimpleAES__Decrypt(__this_02,pSVar5,(MethodInfo *)0x0);
      }
      __this_03 = SimpleJSONFixed_JSON__Parse(pSVar5,(MethodInfo *)0x0);
      if (__this_03 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_1820378a7;
      pSVar6 = SimpleJSONFixed_JSONNode__get_Values(&local_68,__this_03,(MethodInfo *)0x0);
      local_b8.type = (pSVar6->fields).m_Enumerator.fields.type;
      local_b8._4_4_ = *(undefined4 *)&(pSVar6->fields).m_Enumerator.fields.field_0x4;
      local_b8.m_Object.fields._dictionary = (pSVar6->fields).m_Enumerator.fields.m_Object.fields._dictionary;
      pSVar2 = &(pSVar6->fields).m_Enumerator;
      local_b8.m_Object.fields._version = (pSVar2->fields).m_Object.fields._version;
      local_b8.m_Object.fields._index = (pSVar2->fields).m_Object.fields._index;
      local_b8.m_Object.fields._current.fields.key =
           (pSVar6->fields).m_Enumerator.fields.m_Object.fields._current.fields.key;
      local_b8.m_Object.fields._current.fields.value =
           (pSVar6->fields).m_Enumerator.fields.m_Object.fields._current.fields.value;
      pSVar2 = &(pSVar6->fields).m_Enumerator;
      local_b8.m_Object.fields._getEnumeratorRetType = (pSVar2->fields).m_Object.fields._getEnumeratorRetType;
      local_b8.m_Object.fields._36_4_ = *(undefined4 *)&(pSVar2->fields).m_Object.fields.field_0x24;
      local_b8.m_Array.fields._list = (pSVar6->fields).m_Enumerator.fields.m_Array.fields._list;
      pSVar2 = &(pSVar6->fields).m_Enumerator;
      local_b8.m_Array.fields._index = (pSVar2->fields).m_Array.fields._index;
      local_b8.m_Array.fields._version = (pSVar2->fields).m_Array.fields._version;
      local_b8.m_Array.fields._current = (pSVar6->fields).m_Enumerator.fields.m_Array.fields._current;
      pSVar7 = SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
                         ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_68,
                          (SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_b8,(MethodInfo *)0x0);
      local_108.type = (pSVar7->fields).m_Enumerator.fields.type;
      local_108._4_4_ = *(undefined4 *)&(pSVar7->fields).m_Enumerator.fields.field_0x4;
      local_108.m_Object.fields._dictionary = (pSVar7->fields).m_Enumerator.fields.m_Object.fields._dictionary
      ;
      pSVar2 = &(pSVar7->fields).m_Enumerator;
      local_108.m_Object.fields._version = (pSVar2->fields).m_Object.fields._version;
      local_108.m_Object.fields._index = (pSVar2->fields).m_Object.fields._index;
      local_108.m_Object.fields._current.fields.key =
           (pSVar7->fields).m_Enumerator.fields.m_Object.fields._current.fields.key;
      local_108.m_Object.fields._current.fields.value =
           (pSVar7->fields).m_Enumerator.fields.m_Object.fields._current.fields.value;
      pSVar2 = &(pSVar7->fields).m_Enumerator;
      local_108.m_Object.fields._getEnumeratorRetType = (pSVar2->fields).m_Object.fields._getEnumeratorRetType
      ;
      local_108.m_Object.fields._36_4_ = *(undefined4 *)&(pSVar2->fields).m_Object.fields.field_0x24;
      local_108.m_Array.fields._list = (pSVar7->fields).m_Enumerator.fields.m_Array.fields._list;
      pSVar2 = &(pSVar7->fields).m_Enumerator;
      local_108.m_Array.fields._index = (pSVar2->fields).m_Array.fields._index;
      local_108.m_Array.fields._version = (pSVar2->fields).m_Array.fields._version;
      local_108.m_Array.fields._current = (pSVar7->fields).m_Enumerator.fields.m_Array.fields._current;
      bVar3 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                        ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_108,(MethodInfo *)0x0);
      if (bVar3) {
        do {
          pMVar8 = (MethodInfo *)
                   SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                             ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_108,(MethodInfo *)0x0);
          pSVar9 = (*(__this_03->klass->vtable)._7_get_Item.methodPtr)(__this_03,pMVar8);
          if (pSVar9 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_1820378a7;
          pSVar1 = pSVar9->klass;
          pSVar5 = (System_String_o *)
                   (*(pSVar1->vtable)._9_SetUnhandledAttributes.methodPtr)
                             (pSVar9,(UnityEngine_GameObject_o *)
                                     (pSVar1->vtable)._9_SetUnhandledAttributes.method,(MethodInfo *)pSVar1);
          if (pSVar5 == (System_String_o *)0x0) goto label_1820378a7;
          pSVar10 = System_String__Split(pSVar5,0x3a,0,(MethodInfo *)0x0);
          if (pSVar10 == (System_String_array *)0x0) goto label_1820378a7;
          if ((int)pSVar10->max_length == 0) {
            ThrowIndexOutOfRangeException();
          }
          pSVar4 = pSVar10->m_Items[0];
          if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
          }
          __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                      TypeInfo_CustomLogic_CustomLogicManager->static_fields->PersistentData;
          bVar3 = System_String__op_Equality(pSVar4,"float",(MethodInfo *)0x0);
          if (bVar3) {
            pSVar5 = System_String__Substring_1972740
                               (pSVar5,6,(pSVar5->fields)._stringLength + -6,(MethodInfo *)0x0);
            local_118 = System_Single__Parse(pSVar5,(MethodInfo *)0x0);
            pSVar5 = (System_String_o *)il2cpp_value_box(g_data_184354e38,&local_118);
          }
          else {
            bVar3 = System_String__op_Equality(pSVar4,"int",(MethodInfo *)0x0);
            if (bVar3) {
              pSVar5 = System_String__Substring_1972740
                                 (pSVar5,4,(pSVar5->fields)._stringLength + -4,(MethodInfo *)0x0);
              local_114[0] = System_Int32__Parse(pSVar5,(MethodInfo *)0x0);
              pSVar5 = (System_String_o *)il2cpp_value_box(g_data_184354e08,local_114);
            }
            else {
              bVar3 = System_String__op_Equality(pSVar4,"string",(MethodInfo *)0x0);
              if (bVar3) {
                pSVar5 = System_String__Substring_1972740
                                   (pSVar5,7,(pSVar5->fields)._stringLength + -7,(MethodInfo *)0x0);
              }
              else {
                bVar3 = System_String__op_Equality(pSVar4,"bool",(MethodInfo *)0x0);
                if (bVar3) {
                  pSVar5 = System_String__Substring_1972740
                                     (pSVar5,5,(pSVar5->fields)._stringLength + -5,(MethodInfo *)0x0);
                  local_res20[0] = System_String__op_Equality(pSVar5,"1",(MethodInfo *)0x0);
                  pSVar5 = (System_String_o *)il2cpp_value_box(g_data_184354de8,local_res20);
                }
                else {
                  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
                  }
                  __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                              TypeInfo_CustomLogic_CustomLogicManager->static_fields->PersistentData;
                  if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                  goto label_1820378a7;
                  pSVar5 = (System_String_o *)
                           System_Collections_Generic_Dictionary_object__object___get_Item
                                     (__this_01,(Il2CppObject *)pMVar8,
                                      (MethodInfo_147A5B0 *)
                                      MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Item)
                  ;
                }
              }
            }
          }
          if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_1820378a7;
          System_Collections_Generic_Dictionary_object__object___set_Item
                    (__this_00,(Il2CppObject *)pMVar8,(Il2CppObject *)pSVar5,
                     (MethodInfo_147A7F0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
          bVar3 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                            ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_108,(MethodInfo *)0x0);
        } while (bVar3);
      }
    }
    return;
  }
label_1820378a7:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPersistentDataBuiltin$$SaveToFile
// il2cpp: void CustomLogic_CustomLogicPersistentDataBuiltin__SaveToFile (System_String_o* fileName, bool encrypted, const MethodInfo* method);
// 0x182037900
// eh: try 0x182037c10..0x182037d47 -> pad 0x183333520 catch Il2CppExceptionWrapper
// eh: try 0x182037d47..0x182037d60 -> pad 0x180353240 cleanup
// eh: try 0x182037d60..0x182037d9d -> pad 0x183333520 catch Il2CppExceptionWrapper
// eh: try 0x182037d9d..0x182037db6 -> pad 0x180353240 cleanup
// eh: try 0x182037db6..0x182037df3 -> pad 0x183333520 catch Il2CppExceptionWrapper
// eh: try 0x182037df3..0x182037e09 -> pad 0x180353240 cleanup
// eh: try 0x182037e09..0x18203829e -> pad 0x183333520 (+3 call sites) catch Il2CppExceptionWrapper
// asm: 48 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182037d47: jmp 0x182037e46
// asm:   0x182037d9d: jmp 0x182037e46
// asm:   0x182037df3: jmp 0x182037e46
// asm:   0x182037e76: mov rdx, qword ptr [rip + 0x2085703]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_object_Dispose
// asm:   0x182037e7d: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x182037e82: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182037e87: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x182037e8c: test rcx, rcx
// asm:   0x182037e8f: jne 0x182038288
// asm:   0x182037e95: xor edi, edi
// asm:   0x182037e97: mov rsi, qword ptr [rsp + 0xc8]
// asm:   0x182037e9f: mov r14, rsi
// asm:   0x182038129: nop dword ptr [rax]
// asm:   0x1820381cd: mov r8, qword ptr [rsp + 0x48]
// asm:   0x1820381d2: cmp qword ptr [r8], 0
// asm:   0x1820381d6: je 0x1820381e9
// asm:   0x1820381d8: xor ecx, ecx
// asm:   0x1820381da: mov r8, qword ptr [r8]
// asm:   0x1820381dd: mov rdx, qword ptr [rip + 0x206111c]  ; TypeInfo_System_IDisposable
// asm:   0x1820381e4: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x1820381e9: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x1820381ee: test rcx, rcx
// asm:   0x1820381f1: jne 0x18203829e
// asm:   0x1820381f7: mov r14, qword ptr [rsp + 0xc8]
// asm:   0x182038288: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18203829e: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183324010: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183324015: push rbp
// asm:   0x183324016: sub rsp, 0x20
// asm:   0x18332401a: mov rbp, rdx
// asm:   0x18332401d: mov rax, qword ptr [rbp + 0x38]
// asm:   0x183324021: mov rcx, qword ptr [rax]
// asm:   0x183324024: mov qword ptr [rbp + 0x40], rcx
// asm:   0x183324028: movabs rax, 0
// asm:   0x183324032: add rsp, 0x20
// asm:   0x183324036: pop rbp
// asm:   0x183324037: ret 
// asm:   0x183333520: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183333525: push rbp
// asm:   0x183333526: sub rsp, 0x20
// asm:   0x18333352a: mov rbp, rdx
// asm:   0x18333352d: mov rax, qword ptr [rbp + 0x30]
// asm:   0x183333531: mov rcx, qword ptr [rax]
// asm:   0x183333534: mov qword ptr [rbp + 0x40], rcx
// asm:   0x183333538: movabs rax, 0
// asm:   0x183333542: add rsp, 0x20
// asm:   0x183333546: pop rbp
// asm:   0x183333547: ret 

void CustomLogic_CustomLogicPersistentDataBuiltin__SaveToFile
               (System_String_o *fileName,bool encrypted,MethodInfo *method)

{
  ushort uVar1;
  System_Collections_Generic_Dictionary_string__object__o *__this;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  System_String_o *str0;
  bool bVar3;
  ushort uVar4;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  SimpleJSONFixed_JSONObject_o *pSVar7;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_01;
  Il2CppObject *obj;
  Il2CppObject *pIVar8;
  char *pcVar9;
  System_String_o *pSVar10;
  SimpleJSONFixed_JSONString_o *__this_02;
  System_String_o *pSVar11;
  SimpleAES_o *__this_03;
  System_IO_DirectoryInfo_o *__this_04;
  System_IO_FileInfo_array *source;
  System_Func_FileInfo__DateTime__o *__this_05;
  System_Linq_IOrderedEnumerable_TSource__o *source_00;
  Il2CppObject *pIVar12;
  VirtualInvokeData *pVVar13;
  Il2CppClass *pIVar14;
  System_Exception_o *pSVar15;
  MethodInfo *pMVar16;
  ushort uVar17;
  Il2CppObject *local_res8;
  char local_res10;
  SimpleJSONFixed_JSONObject_o *local_res20;
  undefined1 local_68 [16];
  System_String_o *local_58;
  undefined1 local_50 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_48;
  System_String_o *local_40;
  
  local_res10 = encrypted;
  if (Il2CppMethodInitialized_1843464e0 == '\0') {
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
    Il2CppMethodInitialized_1843464e0 = '\x01';
  }
  local_50 = (undefined1  [8])0x0;
  pUStack_48 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_40 = (System_String_o *)0x0;
  pIVar12 = (Il2CppObject *)0x0;
  local_res8 = (Il2CppObject *)0x0;
  if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
  }
  System_IO_Directory__CreateDirectory
            (TypeInfo_Utility_FolderPaths->static_fields->PersistentData,(MethodInfo *)0x0);
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  bVar3 = Utility_Util__IsValidFileName(fileName,(MethodInfo *)0x0);
  if (!bVar3) {
    pIVar14 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    pSVar15 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar14);
    pSVar6 = il2cpp_codegen_get_runtime_metadata(&"PersistentData.SaveToFile only supports legal fileName characters.");
    System_Exception___ctor_1b6abf0(pSVar15,pSVar6,(MethodInfo *)0x0);
    pMVar16 = il2cpp_codegen_get_runtime_metadata
                        (&MethodInfo_CustomLogic_CustomLogicPersistentDataBuiltin_SaveToFile);
    il2cpp_codegen_raise_exception((Il2CppObject *)pSVar15,pMVar16);
  }
  if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
  }
  pSVar6 = TypeInfo_Utility_FolderPaths->static_fields->PersistentData;
  pSVar5 = System_String__Concat_1969e50(fileName,".txt",(MethodInfo *)0x0);
  if ((TypeInfo_System_IO_Path->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_IO_Path);
  }
  pSVar6 = System_IO_Path__Combine(pSVar6,pSVar5,(MethodInfo *)0x0);
  pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(pSVar7,(MethodInfo *)0x0);
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  __this = TypeInfo_CustomLogic_CustomLogicManager->static_fields->PersistentData;
  if ((__this != (System_Collections_Generic_Dictionary_string__object__o *)0x0) &&
     (__this_01 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)
                  System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                             (MethodInfo_13C6500 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Keys),
     __this_01 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
    local_res20 = pSVar7;
    System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_68,
               __this_01,
               (MethodInfo_F1E4D0 *)
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_object_GetEnumerator);
    local_50 = (undefined1  [8])local_68._0_8_;
    pUStack_48 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_68._8_8_;
    local_40 = local_58;
    local_68._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    local_68._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_50;
label_182037c10:
    do {
      bVar3 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__StyleComplexSelector_PseudoStateData___MoveNext
                        ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                         local_50,(MethodInfo_156BDD0 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_object_MoveNext
                        );
      pSVar5 = local_40;
      if (!bVar3) goto label_182037e65;
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                  TypeInfo_CustomLogic_CustomLogicManager->static_fields->PersistentData;
      if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        ThrowNullReferenceException();
      }
      obj = System_Collections_Generic_Dictionary_object__object___get_Item
                      (__this_00,(Il2CppObject *)pSVar5,
                       (MethodInfo_147A5B0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_object_get_Item);
      str0 = "string:";
      pSVar11 = "float:";
      pSVar10 = "int:";
      if (obj != (Il2CppObject *)0x0) {
        pIVar8 = pIVar12;
        if (obj->klass == g_data_184354e38) {
          pIVar8 = obj;
        }
        if (pIVar8 == (Il2CppObject *)0x0) {
          pIVar8 = pIVar12;
          if (obj->klass == g_data_184354e08) {
            pIVar8 = obj;
          }
          if (pIVar8 == (Il2CppObject *)0x0) {
            pIVar8 = pIVar12;
            if (obj->klass == g_data_184354e50) {
              pIVar8 = obj;
            }
            if (pIVar8 == (Il2CppObject *)0x0) {
              pIVar8 = pIVar12;
              if (obj->klass == g_data_184354de8) {
                pIVar8 = obj;
              }
              if (pIVar8 == (Il2CppObject *)0x0) goto label_182037c10;
              if ((obj->klass->_1).element_class != (g_data_184354de8->_1).element_class) {
                il2cpp_codegen_raise_invalid_cast_exception();
              }
              pcVar9 = il2cpp_object_unbox(obj);
              pSVar10 = "1";
              if (*pcVar9 == '\0') {
                pSVar10 = "0";
              }
              pSVar10 = System_String__Concat_1969e50("bool:",pSVar10,(MethodInfo *)0x0);
              __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONString);
              SimpleJSONFixed_JSONString___ctor(__this_02,pSVar10,(MethodInfo *)0x0);
              if (pSVar7 == (SimpleJSONFixed_JSONObject_o *)0x0) {
                ThrowNullReferenceException();
              }
            }
            else {
              pSVar10 = (System_String_o *)
                        (*obj->klass->vtable[3].methodPtr)(obj,obj->klass->vtable[3].method);
              pSVar10 = System_String__Concat_1969e50(str0,pSVar10,(MethodInfo *)0x0);
              __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONString);
              SimpleJSONFixed_JSONString___ctor(__this_02,pSVar10,(MethodInfo *)0x0);
              if (pSVar7 == (SimpleJSONFixed_JSONObject_o *)0x0) {
                ThrowNullReferenceException();
              }
            }
          }
          else {
            pSVar11 = (System_String_o *)(*obj->klass->vtable[3].methodPtr)(obj,obj->klass->vtable[3].method);
            pSVar10 = System_String__Concat_1969e50(pSVar10,pSVar11,(MethodInfo *)0x0);
            __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONString);
            SimpleJSONFixed_JSONString___ctor(__this_02,pSVar10,(MethodInfo *)0x0);
            if (pSVar7 == (SimpleJSONFixed_JSONObject_o *)0x0) {
              ThrowNullReferenceException();
            }
          }
        }
        else {
          pSVar10 = (System_String_o *)(*obj->klass->vtable[3].methodPtr)(obj,obj->klass->vtable[3].method);
          pSVar10 = System_String__Concat_1969e50(pSVar11,pSVar10,(MethodInfo *)0x0);
          __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONString);
          SimpleJSONFixed_JSONString___ctor(__this_02,pSVar10,(MethodInfo *)0x0);
          if (pSVar7 == (SimpleJSONFixed_JSONObject_o *)0x0) {
            ThrowNullReferenceException();
          }
        }
        (*(pSVar7->klass->vtable)._20_Add.methodPtr)
                  (pSVar7,pSVar5,(SimpleJSONFixed_JSONNode_o *)__this_02,
                   (pSVar7->klass->vtable)._20_Add.method);
      }
    } while( true );
  }
label_1820382ed:
  ThrowNullReferenceException();
label_182037e65:
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_50,
             MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_object_Dispose);
  if (pSVar7 != (SimpleJSONFixed_JSONObject_o *)0x0) {
    pSVar7 = (SimpleJSONFixed_JSONObject_o *)
             (*(pSVar7->klass->vtable)._30_ToString.methodPtr)
                       (pSVar7,4,(pSVar7->klass->vtable)._30_ToString.method);
    if (local_res10 != '\0') {
      local_res20 = pSVar7;
      __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleAES);
      SimpleAES___ctor(__this_03,(MethodInfo *)0x0);
      if (__this_03 == (SimpleAES_o *)0x0) goto label_1820382ed;
      pSVar7 = (SimpleJSONFixed_JSONObject_o *)
               SimpleAES__Encrypt(__this_03,(System_String_o *)pSVar7,(MethodInfo *)0x0);
    }
    local_res20 = pSVar7;
    if (pSVar7 != (SimpleJSONFixed_JSONObject_o *)0x0) {
      if (1000000 < *(int *)&(pSVar7->fields).m_Dict) {
        pIVar14 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
        pSVar15 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar14);
        pSVar6 = il2cpp_codegen_get_runtime_metadata(&"PersistentData.SaveToFile exceeded 1 mb limit.");
        System_Exception___ctor_1b6abf0(pSVar15,pSVar6,(MethodInfo *)0x0);
        pMVar16 = il2cpp_codegen_get_runtime_metadata
                            (&MethodInfo_CustomLogic_CustomLogicPersistentDataBuiltin_SaveToFile);
        il2cpp_codegen_raise_exception((Il2CppObject *)pSVar15,pMVar16);
      }
      if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
      }
      pSVar5 = TypeInfo_Utility_FolderPaths->static_fields->PersistentData;
      __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_IO_DirectoryInfo);
      System_IO_DirectoryInfo___ctor(__this_04,pSVar5,(MethodInfo *)0x0);
      if (__this_04 != (System_IO_DirectoryInfo_o *)0x0) {
        source = System_IO_DirectoryInfo__GetFiles(__this_04,(MethodInfo *)0x0);
        if ((TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_c);
        }
        __this_05 = TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_c->static_fields->__9__4_0;
        if (__this_05 == (System_Func_FileInfo__DateTime__o *)0x0) {
          if ((TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_c);
          }
          pIVar12 = (Il2CppObject *)
                    TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_c->static_fields->__9;
          __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_FileInfo_DateTime);
          System_Func_object__DateTime____ctor
                    ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this_05,pIVar12,
                     (intptr_t)MethodInfo_CustomLogic_CustomLogicPersistentDataBuiltin_c_SaveToFile_b__4_0,
                     (MethodInfo_16E67D0 *)0x0);
          TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_c->static_fields->__9__4_0 = __this_05;
          Il2CppCodeGenWriteBarrier
                    (&TypeInfo_CustomLogic_CustomLogicPersistentDataBuiltin_c->static_fields->__9__4_0,
                     __this_05);
        }
        source_00 = System_Linq_Enumerable__OrderByDescending_object__DateTime_
                              ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                               (System_Func_TSource__TKey__o *)__this_05,
                               (MethodInfo_6C0FE0 *)
                               MethodInfo_System_Linq_Enumerable_OrderByDescending_FileInfo_DateTime);
        pIVar12 = (Il2CppObject *)
                  System_Linq_Enumerable__Skip_object_
                            ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,100,
                             (MethodInfo_6C73A0 *)MethodInfo_System_Linq_Enumerable_Skip_FileInfo);
        if (pIVar12 != (Il2CppObject *)0x0) {
          local_res8 = InterfaceInvoker0_Invoke
                                 (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_FileInfo,
                                  pIVar12);
          local_68._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
          local_68._8_8_ = &local_res8;
          do {
            pIVar12 = local_res8;
            if (local_res8 == (Il2CppObject *)0x0) {
              ThrowNullReferenceException();
            }
            pIVar14 = local_res8->klass;
            uVar1 = (pIVar14->_2).interface_offsets_count;
            uVar4 = 0;
            if (uVar1 != 0) {
              pIVar2 = (pIVar14->_1).interfaceOffsets;
              uVar17 = uVar4;
              do {
                if (pIVar2[uVar17].interfaceType == (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
                  pVVar13 = pIVar14->vtable + pIVar2[uVar17].offset;
                  goto label_1820380e6;
                }
                uVar17 = uVar17 + 1;
              } while (uVar17 < uVar1);
            }
            pVVar13 = GetInterfaceInvokeDataFromVTableSlowPath
                                (local_res8,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_1820380e6:
            bVar3 = (*pVVar13->methodPtr)(pIVar12,pVVar13->method);
            pIVar12 = local_res8;
            if (!bVar3) {
              if (local_res8 != (Il2CppObject *)0x0) {
                InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,local_res8);
              }
              System_IO_File__WriteAllText(pSVar6,(System_String_o *)pSVar7,(MethodInfo *)0x0);
              return;
            }
            if (local_res8 == (Il2CppObject *)0x0) {
              ThrowNullReferenceException();
            }
            pIVar14 = local_res8->klass;
            uVar1 = (pIVar14->_2).interface_offsets_count;
            if (uVar1 != 0) {
              pIVar2 = (pIVar14->_1).interfaceOffsets;
              do {
                if (pIVar2[uVar4].interfaceType ==
                    (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_FileInfo) {
                  pVVar13 = pIVar14->vtable + pIVar2[uVar4].offset;
                  goto label_182038152;
                }
                uVar4 = uVar4 + 1;
              } while (uVar4 < uVar1);
            }
            pVVar13 = GetInterfaceInvokeDataFromVTableSlowPath
                                (local_res8,
                                 (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_FileInfo,0);
label_182038152:
            pIVar12 = (*pVVar13->methodPtr)(pIVar12,pVVar13->method);
            if (pIVar12 == (Il2CppObject *)0x0) {
              ThrowNullReferenceException();
            }
            (*pIVar12->klass->vtable[0xb].methodPtr)(pIVar12,pIVar12->klass->vtable[0xb].method);
          } while( true );
        }
      }
    }
  }
  goto label_1820382ed;
}


// CustomLogic.CustomLogicPersistentDataBuiltin$$Clear
// il2cpp: void CustomLogic_CustomLogicPersistentDataBuiltin__Clear (const MethodInfo* method);
// 0x1820370b0

void CustomLogic_CustomLogicPersistentDataBuiltin__Clear(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__object__o *__this;
  
  if (Il2CppMethodInitialized_1843464e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_Clear);
    Il2CppMethodInitialized_1843464e1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  __this = TypeInfo_CustomLogic_CustomLogicManager->static_fields->PersistentData;
  if (__this != (System_Collections_Generic_Dictionary_string__object__o *)0x0) {
    System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
               (MethodInfo_13BF1C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Clear);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPersistentDataBuiltin$$IsValidFileName
// il2cpp: bool CustomLogic_CustomLogicPersistentDataBuiltin__IsValidFileName (System_String_o* fileName, const MethodInfo* method);
// 0x1820372e0

bool CustomLogic_CustomLogicPersistentDataBuiltin__IsValidFileName
               (System_String_o *fileName,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_1843464e2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_1843464e2 = '\x01';
  }
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  bVar1 = Utility_Util__IsValidFileName(fileName,(MethodInfo *)0x0);
  return bVar1;
}


// CustomLogic.CustomLogicPersistentDataBuiltin$$FileExists
// il2cpp: bool CustomLogic_CustomLogicPersistentDataBuiltin__FileExists (System_String_o* fileName, const MethodInfo* method);
// 0x182037130

bool CustomLogic_CustomLogicPersistentDataBuiltin__FileExists(System_String_o *fileName,MethodInfo *method)

{
  bool bVar1;
  System_String_o *path2;
  System_String_o *pSVar2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  
  if (Il2CppMethodInitialized_1843464e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_FolderPaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_Path);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&".txt");
    Il2CppMethodInitialized_1843464e3 = '\x01';
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
    path2 = System_String__Concat_1969e50(fileName,".txt",(MethodInfo *)0x0);
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
  System_Exception___ctor_1b6abf0(__this,pSVar2,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicPersistentDataBuiltin_FileExists);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicPersistentDataBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicPersistentDataBuiltin__get_ClassName (CustomLogic_CustomLogicPersistentDataBuiltin_o* __this, const MethodInfo* method);
// 0x182038480

System_String_o *
CustomLogic_CustomLogicPersistentDataBuiltin__get_ClassName
          (CustomLogic_CustomLogicPersistentDataBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843464e4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"PersistentData");
    Il2CppMethodInitialized_1843464e4 = '\x01';
  }
  return "PersistentData";
}


// CustomLogic.CustomLogicPersistentDataBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicPersistentDataBuiltin__get_IsAbstract (CustomLogic_CustomLogicPersistentDataBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicPersistentDataBuiltin__get_IsAbstract(CustomLogic_CustomLogicPersistentDataBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicPersistentDataBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicPersistentDataBuiltin__get_IsStatic (CustomLogic_CustomLogicPersistentDataBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicPersistentDataBuiltin__get_IsStatic(CustomLogic_CustomLogicPersistentDataBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicPersistentDataBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicPersistentDataBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicPersistentDataBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicPersistentDataBuiltin__get_InheritBaseMembers(CustomLogic_CustomLogicPersistentDataBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


